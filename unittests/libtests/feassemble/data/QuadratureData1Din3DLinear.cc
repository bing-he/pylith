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
// Copyright (c) 2010-2016 University of California, Davis
//
// See COPYING for license information.
//
// ======================================================================
//

// DO NOT EDIT THIS FILE
// This file was generated from python application quadratureapp.

#include "QuadratureData1Din3DLinear.hh"

const int pylith::feassemble::QuadratureData1Din3DLinear::_numVertices = 2;

const int pylith::feassemble::QuadratureData1Din3DLinear::_spaceDim = 3;

const int pylith::feassemble::QuadratureData1Din3DLinear::_numCells = 1;

const int pylith::feassemble::QuadratureData1Din3DLinear::_cellDim = 1;

const int pylith::feassemble::QuadratureData1Din3DLinear::_numBasis = 2;

const int pylith::feassemble::QuadratureData1Din3DLinear::_numQuadPts = 1;

const PylithScalar pylith::feassemble::QuadratureData1Din3DLinear::_vertices[] = {
  1.00000000e+00, -1.50000000e+00, -2.00000000e+00,
 -5.00000000e-01,  2.00000000e+00,  3.00000000e+00,
};

const int pylith::feassemble::QuadratureData1Din3DLinear::_cells[] = {
       0,       1,
};

const PylithScalar pylith::feassemble::QuadratureData1Din3DLinear::_verticesRef[] = {
 -1.00000000e+00,
  1.00000000e+00,
};

const PylithScalar pylith::feassemble::QuadratureData1Din3DLinear::_quadPtsRef[] = {
  0.00000000e+00,
};

const PylithScalar pylith::feassemble::QuadratureData1Din3DLinear::_quadWts[] = {
  2.00000000e+00,
};

const PylithScalar pylith::feassemble::QuadratureData1Din3DLinear::_quadPts[] = {
  2.50000000e-01,  2.50000000e-01,  5.00000000e-01,
};

const PylithScalar pylith::feassemble::QuadratureData1Din3DLinear::_basis[] = {
  5.00000000e-01,
  5.00000000e-01,
};

const PylithScalar pylith::feassemble::QuadratureData1Din3DLinear::_basisDerivRef[] = {
 -5.00000000e-01,
  5.00000000e-01,
};

const PylithScalar pylith::feassemble::QuadratureData1Din3DLinear::_basisDeriv[] = {
  6.66666667e-01, -2.85714286e-01, -2.00000000e-01,
 -6.66666667e-01,  2.85714286e-01,  2.00000000e-01,
};

const PylithScalar pylith::feassemble::QuadratureData1Din3DLinear::_jacobian[] = {
 -7.50000000e-01,
  1.75000000e+00,
  2.50000000e+00,
};

const PylithScalar pylith::feassemble::QuadratureData1Din3DLinear::_jacobianDet[] = {
  3.14245127e+00,
};

const PylithScalar pylith::feassemble::QuadratureData1Din3DLinear::_jacobianInv[] = {
 -1.33333333e+00,  5.71428571e-01,  4.00000000e-01,
};

pylith::feassemble::QuadratureData1Din3DLinear::QuadratureData1Din3DLinear(void)
{ // constructor
  numVertices = _numVertices;
  spaceDim = _spaceDim;
  numCells = _numCells;
  cellDim = _cellDim;
  numBasis = _numBasis;
  numQuadPts = _numQuadPts;
  vertices = const_cast<PylithScalar*>(_vertices);
  cells = const_cast<int*>(_cells);
  verticesRef = const_cast<PylithScalar*>(_verticesRef);
  quadPtsRef = const_cast<PylithScalar*>(_quadPtsRef);
  quadWts = const_cast<PylithScalar*>(_quadWts);
  quadPts = const_cast<PylithScalar*>(_quadPts);
  basis = const_cast<PylithScalar*>(_basis);
  basisDerivRef = const_cast<PylithScalar*>(_basisDerivRef);
  basisDeriv = const_cast<PylithScalar*>(_basisDeriv);
  jacobian = const_cast<PylithScalar*>(_jacobian);
  jacobianDet = const_cast<PylithScalar*>(_jacobianDet);
  jacobianInv = const_cast<PylithScalar*>(_jacobianInv);
} // constructor

pylith::feassemble::QuadratureData1Din3DLinear::~QuadratureData1Din3DLinear(void)
{}


// End of file
