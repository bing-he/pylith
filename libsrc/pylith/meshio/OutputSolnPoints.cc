// -*- C++ -*-
//
// ======================================================================
//
// Brad T. Aagaard, U.S. Geological Survey
// Charles A. Williams, GNS Science
// Matthew G. Knepley, University of Chicago
//
// This code was developed as part of the Computational Infrastructure
// for Geodynamics (http://geodynamics.org).
//
// Copyright (c) 2010-2011 University of California, Davis
//
// See COPYING for license information.
//
// ======================================================================
//

#include <portinfo>

#include "OutputSolnPoints.hh" // implementation of class methods

#include "pylith/topology/Mesh.hh" // USES Mesh
#include "MeshBuilder.hh" // USES MeshBuilder

#include "spatialdata/geocoords/CoordSys.hh" // USES CoordSys

// ----------------------------------------------------------------------
typedef pylith::topology::Mesh::SieveMesh SieveMesh;
typedef pylith::topology::Mesh::RealSection RealSection;

// ----------------------------------------------------------------------
// Constructor
pylith::meshio::OutputSolnPoints::OutputSolnPoints(void) :
  _mesh(0),
  _pointsMesh(0),
  _interpolator(0)
{ // constructor
} // constructor

// ----------------------------------------------------------------------
// Destructor
pylith::meshio::OutputSolnPoints::~OutputSolnPoints(void)
{ // destructor
  deallocate();
} // destructor  

// ----------------------------------------------------------------------
// Deallocate PETSc and local data structures.
void
pylith::meshio::OutputSolnPoints::deallocate(void)
{ // deallocate
  OutputManager<topology::Mesh, topology::Field<topology::Mesh> >::deallocate();

  if (_interpolator) {
    assert(_mesh);
    const ALE::Obj<SieveMesh>& sieveMesh = _mesh->sieveMesh();
    DM dm;
    PetscErrorCode err = 0;

    err = DMMeshCreate(sieveMesh->comm(), &dm);CHECK_PETSC_ERROR(err);
    err = DMMeshSetMesh(dm, sieveMesh);CHECK_PETSC_ERROR(err);
    err = DMMeshInterpolationDestroy(dm, &_interpolator);CHECK_PETSC_ERROR(err);
    err = DMDestroy(&dm);CHECK_PETSC_ERROR(err);
  } // if

  _mesh = 0; // :TODO: Use shared pointer
  delete _pointsMesh; _pointsMesh = 0;
} // deallocate
  
// ----------------------------------------------------------------------
// Get mesh associated with points.
const pylith::topology::Mesh&
pylith::meshio::OutputSolnPoints::pointsMesh(void)
{ // pointsMesh
  assert(_pointsMesh);
  return *_pointsMesh;
} // pointsMesh


// ----------------------------------------------------------------------
// Setup interpolator.
void
pylith::meshio::OutputSolnPoints::setupInterpolator(topology::Mesh* mesh,
						    const PylithScalar* points,
						    const int numPoints,
						    const int spaceDim)
{ // createPointsMesh
  assert(mesh);
  assert(points);

  _mesh = mesh;

  // Create mesh without cells for points.
  const int meshDim = 0;
  delete _pointsMesh; _pointsMesh = new topology::Mesh(meshDim);
  _pointsMesh->createSieveMesh(0);
  assert(_pointsMesh);

  scalar_array pointsArray(points, numPoints*spaceDim);
  int_array cells(numPoints);
  for (int i=0; i < numPoints; ++i)
    cells[i] = i;
  const int numCells = numPoints;
  const int numCorners = 1;
  const bool interpolate = false;
  MeshBuilder::buildMesh(_pointsMesh,
			 &pointsArray, numPoints, spaceDim,
			 cells, numCells, numCorners, meshDim,
			 interpolate);
  _pointsMesh->coordsys(_mesh->coordsys());

  // Setup interpolator object
  DM dm;
  PetscErrorCode err = 0;

  err = DMMeshCreate(_mesh->sieveMesh()->comm(), &dm);CHECK_PETSC_ERROR(err);
  err = DMMeshSetMesh(dm, _mesh->sieveMesh());CHECK_PETSC_ERROR(err);
  err = DMMeshInterpolationCreate(dm, &_interpolator);CHECK_PETSC_ERROR(err);
  
  const spatialdata::geocoords::CoordSys* cs = _pointsMesh->coordsys();
  assert(0 != cs);
  assert(cs->spaceDim() == spaceDim);

  err = DMMeshInterpolationSetDim(dm, spaceDim, _interpolator);CHECK_PETSC_ERROR(err);
  err = DMMeshInterpolationAddPoints(dm, numPoints, (PetscReal *) points, _interpolator);CHECK_PETSC_ERROR(err);
  err = DMMeshInterpolationSetUp(dm, _interpolator);CHECK_PETSC_ERROR(err);
  err = DMDestroy(&dm);CHECK_PETSC_ERROR(err);
  CHECK_PETSC_ERROR(err);
} // createPointsMesh


// ----------------------------------------------------------------------
// Append finite-element vertex field to file.
void
pylith::meshio::OutputSolnPoints::appendVertexField(const PylithScalar t,
			       topology::Field<topology::Mesh>& field,
			       const topology::Mesh& mesh)
{ // appendVertexField
  assert(_mesh);
  assert(_fields);

  const ALE::Obj<SieveMesh>& pointsSieveMesh = _pointsMesh->sieveMesh();
  assert(!pointsSieveMesh.isNull());
  const ALE::Obj<SieveMesh::label_sequence>& vertices =
    pointsSieveMesh->depthStratum(0);
  assert(!vertices.isNull());

  const int fiberDim = (vertices->begin() != vertices->end()) ?
    field.section()->getFiberDimension(*vertices->begin()) : 0;

  // Create field if necessary for interpolated values or recreate
  // field if mismatch in size between buffer and field.
  ALE::MemoryLogger& logger = ALE::MemoryLogger::singleton();
  logger.stagePush("Output");
  if (!_fields->hasField("buffer (interpolated)")) {
    _fields->add("buffer (interpolated)", field.label());
  } // if

  topology::Field<topology::Mesh>& fieldInterp = 
    _fields->get("buffer (interpolated)");
  if (vertices->size()*fiberDim != fieldInterp.sectionSize()) {
    fieldInterp.newSection(vertices, fiberDim);
    fieldInterp.allocate();
  } // if
  logger.stagePop();

  fieldInterp.zero();
  fieldInterp.vectorFieldType(field.vectorFieldType());
  fieldInterp.scale(field.scale());
  
  PetscVec fieldInterpVec = fieldInterp.vector();
  assert(fieldInterpVec);

  const ALE::Obj<SieveMesh>& sieveMesh = _mesh->sieveMesh();
  assert(!sieveMesh.isNull());

  DM dm;
  SectionReal section;
  PetscErrorCode err = 0;
  
  err = DMMeshCreate(sieveMesh->comm(), &dm);CHECK_PETSC_ERROR(err);
  err = DMMeshSetMesh(dm, sieveMesh);CHECK_PETSC_ERROR(err);
  err = DMMeshInterpolationSetDof(dm, fiberDim, _interpolator);CHECK_PETSC_ERROR(err);

  err = SectionRealCreate(sieveMesh->comm(), &section);CHECK_PETSC_ERROR(err);
  err = SectionRealSetSection(section, field.section());CHECK_PETSC_ERROR(err);
  err = SectionRealSetBundle(section, sieveMesh);CHECK_PETSC_ERROR(err);

  err = DMMeshInterpolationEvaluate(dm, section, fieldInterpVec, _interpolator);CHECK_PETSC_ERROR(err);
  err = SectionRealDestroy(&section);CHECK_PETSC_ERROR(err);
  err = DMDestroy(&dm);CHECK_PETSC_ERROR(err);

  OutputManager<topology::Mesh, topology::Field<topology::Mesh> >::appendVertexField(t, fieldInterp, mesh);
} // appendVertexField


// ----------------------------------------------------------------------
// Append finite-element cell field to file.
void
pylith::meshio::OutputSolnPoints::appendCellField(const PylithScalar t,
			   topology::Field<topology::Mesh>& field,
			   const char* label,
			   const int labelId)
{ // appendCellField
  throw std::logic_error("OutputSolnPoints::appendCellField() not implemented.");
} // appendCellField


// End of file 