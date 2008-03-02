// -*- C++ -*-
//
// ======================================================================
//
//                           Brad T. Aagaard
//                        U.S. Geological Survey
//
// {LicenseText}
//
// ======================================================================
//

#if !defined(pylith_bc_boundarymeshdatatri3_hh)
#define pylith_bc_boundarymeshdatatri3_hh

#include "BoundaryMeshData.hh"

namespace pylith {
  namespace bc {
     class BoundaryMeshDataTri3;
  } // pylith
} // bc

class pylith::bc::BoundaryMeshDataTri3 : public BoundaryMeshData
{

public: 

  /// Constructor
  BoundaryMeshDataTri3(void);

  /// Destructor
  ~BoundaryMeshDataTri3(void);

private:

  static const char* _filename;

  static const char* _bcLabel;

  static const char* _faultLabel;
  static const int _faultId;

  static const int _numCorners;
  static const int _numCells;

  static const int _numVerticesNoFault;
  static const int _verticesNoFault[];
  static const int _cellsNoFault[];

  static const int _numVerticesFault;
  static const int _verticesFault[];
  static const int _cellsFault[];

};

#endif // pylith_bc_boundarymeshdatatri3_hh

// End of file
