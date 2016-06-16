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
// This file was generated from python application maxwellisotropic3delastic.

#if !defined(pylith_materials_maxwellisotropic3delasticdata_hh)
#define pylith_materials_maxwellisotropic3delasticdata_hh

#include "ElasticMaterialData.hh"

namespace pylith {
  namespace materials {
     class MaxwellIsotropic3DElasticData;
  } // pylith
} // materials

class pylith::materials::MaxwellIsotropic3DElasticData : public ElasticMaterialData
{

public: 

  /// Constructor
  MaxwellIsotropic3DElasticData(void);

  /// Destructor
  ~MaxwellIsotropic3DElasticData(void);

private:

  static const int _dimension;

  static const int _numLocs;

  static const int _numProperties;

  static const int _numStateVars;

  static const int _numDBProperties;

  static const int _numDBStateVars;

  static const int _numPropsQuadPt;

  static const int _numVarsQuadPt;

  static const PylithScalar _lengthScale;

  static const PylithScalar _timeScale;

  static const PylithScalar _pressureScale;

  static const PylithScalar _densityScale;

  static const PylithScalar _dtStableImplicit;

  static const PylithScalar _dtStableExplicit;

  static const int _numPropertyValues[];

  static const int _numStateVarValues[];

  static const char* _dbPropertyValues[];

  static const char* _dbStateVarValues[];

  static const PylithScalar _dbProperties[];

  static const PylithScalar _dbStateVars[];

  static const PylithScalar _properties[];

  static const PylithScalar _stateVars[];

  static const PylithScalar _propertiesNondim[];

  static const PylithScalar _stateVarsNondim[];

  static const PylithScalar _density[];

  static const PylithScalar _strain[];

  static const PylithScalar _stress[];

  static const PylithScalar _elasticConsts[];

  static const PylithScalar _initialStress[];

  static const PylithScalar _initialStrain[];

  static const PylithScalar _stateVarsUpdated[];

};

#endif // pylith_materials_maxwellisotropic3delasticdata_hh

// End of file
