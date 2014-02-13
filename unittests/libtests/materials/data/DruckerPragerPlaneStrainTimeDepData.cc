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
// Copyright (c) 2010-2014 University of California, Davis
//
// See COPYING for license information.
//
// ======================================================================
//

// DO NOT EDIT THIS FILE
// This file was generated from python application druckerpragerplanestraintimedep.

#include "DruckerPragerPlaneStrainTimeDepData.hh"

const int pylith::materials::DruckerPragerPlaneStrainTimeDepData::_dimension = 2;

const int pylith::materials::DruckerPragerPlaneStrainTimeDepData::_numLocs = 2;

const int pylith::materials::DruckerPragerPlaneStrainTimeDepData::_numProperties = 6;

const int pylith::materials::DruckerPragerPlaneStrainTimeDepData::_numStateVars = 2;

const int pylith::materials::DruckerPragerPlaneStrainTimeDepData::_numDBProperties = 6;

const int pylith::materials::DruckerPragerPlaneStrainTimeDepData::_numDBStateVars = 5;

const int pylith::materials::DruckerPragerPlaneStrainTimeDepData::_numPropsQuadPt = 6;

const int pylith::materials::DruckerPragerPlaneStrainTimeDepData::_numVarsQuadPt = 5;

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_lengthScale =   1.00000000e+03;

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_timeScale =   1.00000000e+00;

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_pressureScale =   2.25000000e+10;

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_densityScale =   2.25000000e+04;

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_dtStableImplicit =   1.00000000e+99;

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_dtStableExplicit =   1.92450090e-01;

const int pylith::materials::DruckerPragerPlaneStrainTimeDepData::_numPropertyValues[] = {
1,
1,
1,
1,
1,
1,
};

const int pylith::materials::DruckerPragerPlaneStrainTimeDepData::_numStateVarValues[] = {
1,
4,
};

const char* pylith::materials::DruckerPragerPlaneStrainTimeDepData::_dbPropertyValues[] = {
"density",
"vs",
"vp",
"friction-angle",
"cohesion",
"dilatation-angle",
};

const char* pylith::materials::DruckerPragerPlaneStrainTimeDepData::_dbStateVarValues[] = {
"stress-zz-initial",
"plastic-strain-xx",
"plastic-strain-yy",
"plastic-strain-zz",
"plastic-strain-xy",
};

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_dbProperties[] = {
  2.50000000e+03,
  3.00000000e+03,
  5.19615242e+03,
  5.23598776e-01,
  3.00000000e+05,
  3.49065850e-01,
  2.00000000e+03,
  1.20000000e+03,
  2.07846097e+03,
  4.36332313e-01,
  1.00000000e+04,
  4.36332313e-01,
};

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_dbStateVars[] = {
  2.30000000e+04,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  5.40000000e+04,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
};

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_properties[] = {
  2.50000000e+03,
  2.25000000e+10,
  2.25000000e+10,
  2.30940108e-01,
  3.60000000e+05,
  1.48583084e-01,
  2.00000000e+03,
  2.88000000e+09,
  2.88000000e+09,
  1.89338478e-01,
  1.21811303e+04,
  1.89338478e-01,
};

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_stateVars[] = {
  2.30000000e+04,
  4.10000000e-05,
  4.20000000e-05,
  4.40000000e-05,
  4.50000000e-05,
  5.40000000e+04,
  1.10000000e-05,
  1.20000000e-05,
  1.40000000e-05,
  1.50000000e-05,
};

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_propertiesNondim[] = {
  1.11111111e-01,
  1.00000000e+00,
  1.00000000e+00,
  2.30940108e-01,
  1.60000000e-05,
  1.48583084e-01,
  8.88888889e-02,
  1.28000000e-01,
  1.28000000e-01,
  1.89338478e-01,
  5.41383567e-07,
  1.89338478e-01,
};

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_stateVarsNondim[] = {
  1.02222222e-06,
  1.02222222e-06,
  1.02222222e-06,
  1.02222222e-06,
  1.02222222e-06,
  2.40000000e-06,
  2.40000000e-06,
  2.40000000e-06,
  2.40000000e-06,
  2.40000000e-06,
};

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_density[] = {
  2.50000000e+03,
  2.00000000e+03,
};

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_strain[] = {
 -2.10000000e-04,
  1.20000000e-04,
  1.10000000e-05,
  4.10000000e-04,
  4.20000000e-04,
  1.40000000e-04,
};

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_stress[] = {
 -1.92922457e+07,
 -4.93459240e+06,
 -2.89163969e+06,
  2.05547473e+06,
  2.05547473e+06,
  1.45519152e-11,
};

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_elasticConsts[] = {
  6.78169280e+10,
  3.08737531e+10,
 -2.64315493e+09,
  1.98734119e+10,
  2.43162760e+10,
  1.57343177e+10,
  8.93897377e+08,
  1.00826339e+10,
  3.98038772e+10,
  3.37901525e+09,
  3.25490593e+09,
 -1.82383531e+09,
  3.37901525e+09,
  3.25490593e+09,
 -1.82383531e+09,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
};

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_initialStress[] = {
  2.10000000e+04,
  2.20000000e+04,
  2.40000000e+04,
  5.60000000e+04,
  5.50000000e+04,
  5.30000000e+04,
};

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_initialStrain[] = {
  3.60000000e-05,
  3.50000000e-05,
  3.30000000e-05,
  6.60000000e-05,
  6.50000000e-05,
  6.20000000e-05,
};

const PylithScalar pylith::materials::DruckerPragerPlaneStrainTimeDepData::_stateVarsUpdated[] = {
  2.30000000e+04,
  3.64658670e-05,
  4.84291274e-05,
  4.75397462e-05,
  4.27919930e-05,
  5.40000000e+04,
  2.05251755e-04,
  2.16078144e-04,
 -1.39095468e-04,
  8.72013889e-05,
};

pylith::materials::DruckerPragerPlaneStrainTimeDepData::DruckerPragerPlaneStrainTimeDepData(void)
{ // constructor
  dimension = _dimension;
  numLocs = _numLocs;
  numProperties = _numProperties;
  numStateVars = _numStateVars;
  numDBProperties = _numDBProperties;
  numDBStateVars = _numDBStateVars;
  numPropsQuadPt = _numPropsQuadPt;
  numVarsQuadPt = _numVarsQuadPt;
  lengthScale = _lengthScale;
  timeScale = _timeScale;
  pressureScale = _pressureScale;
  densityScale = _densityScale;
  dtStableImplicit = _dtStableImplicit;
  dtStableExplicit = _dtStableExplicit;
  numPropertyValues = const_cast<int*>(_numPropertyValues);
  numStateVarValues = const_cast<int*>(_numStateVarValues);
  dbPropertyValues = const_cast<char**>(_dbPropertyValues);
  dbStateVarValues = const_cast<char**>(_dbStateVarValues);
  dbProperties = const_cast<PylithScalar*>(_dbProperties);
  dbStateVars = const_cast<PylithScalar*>(_dbStateVars);
  properties = const_cast<PylithScalar*>(_properties);
  stateVars = const_cast<PylithScalar*>(_stateVars);
  propertiesNondim = const_cast<PylithScalar*>(_propertiesNondim);
  stateVarsNondim = const_cast<PylithScalar*>(_stateVarsNondim);
  density = const_cast<PylithScalar*>(_density);
  strain = const_cast<PylithScalar*>(_strain);
  stress = const_cast<PylithScalar*>(_stress);
  elasticConsts = const_cast<PylithScalar*>(_elasticConsts);
  initialStress = const_cast<PylithScalar*>(_initialStress);
  initialStrain = const_cast<PylithScalar*>(_initialStrain);
  stateVarsUpdated = const_cast<PylithScalar*>(_stateVarsUpdated);
} // constructor

pylith::materials::DruckerPragerPlaneStrainTimeDepData::~DruckerPragerPlaneStrainTimeDepData(void)
{}


// End of file
