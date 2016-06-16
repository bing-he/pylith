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
// This file was generated from python application genmaxwellplanestraintimedep.

#include "GenMaxwellPlaneStrainTimeDepData.hh"

const int pylith::materials::GenMaxwellPlaneStrainTimeDepData::_dimension = 2;

const int pylith::materials::GenMaxwellPlaneStrainTimeDepData::_numLocs = 2;

const int pylith::materials::GenMaxwellPlaneStrainTimeDepData::_numProperties = 9;

const int pylith::materials::GenMaxwellPlaneStrainTimeDepData::_numStateVars = 5;

const int pylith::materials::GenMaxwellPlaneStrainTimeDepData::_numDBProperties = 9;

const int pylith::materials::GenMaxwellPlaneStrainTimeDepData::_numDBStateVars = 16;

const int pylith::materials::GenMaxwellPlaneStrainTimeDepData::_numPropsQuadPt = 9;

const int pylith::materials::GenMaxwellPlaneStrainTimeDepData::_numVarsQuadPt = 16;

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_lengthScale =   1.00000000e+03;

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_timeScale =   1.00000000e+00;

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_pressureScale =   2.25000000e+10;

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_densityScale =   2.25000000e+04;

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_dtStableImplicit =   8.88888889e+06;

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_dtStableExplicit =   1.92450090e-01;

const int pylith::materials::GenMaxwellPlaneStrainTimeDepData::_numPropertyValues[] = {
1,
1,
1,
1,
1,
1,
1,
1,
1,
};

const int pylith::materials::GenMaxwellPlaneStrainTimeDepData::_numStateVarValues[] = {
1,
3,
4,
4,
4,
};

const char* pylith::materials::GenMaxwellPlaneStrainTimeDepData::_dbPropertyValues[] = {
"density",
"vs",
"vp",
"shear-ratio-1",
"shear-ratio-2",
"shear-ratio-3",
"viscosity-1",
"viscosity-2",
"viscosity-3",
};

const char* pylith::materials::GenMaxwellPlaneStrainTimeDepData::_dbStateVarValues[] = {
"stress-zz-initial",
"total-strain-xx",
"total-strain-yy",
"total-strain-xy",
"viscous-strain-1-xx",
"viscous-strain-1-yy",
"viscous-strain-1-zz",
"viscous-strain-1-xy",
"viscous-strain-2-xx",
"viscous-strain-2-yy",
"viscous-strain-2-zz",
"viscous-strain-2-xy",
"viscous-strain-3-xx",
"viscous-strain-3-yy",
"viscous-strain-3-zz",
"viscous-strain-3-xy",
};

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_dbProperties[] = {
  2.50000000e+03,
  3.00000000e+03,
  5.19615242e+03,
  5.00000000e-01,
  1.00000000e-01,
  2.00000000e-01,
  1.00000000e+18,
  1.00000000e+17,
  1.00000000e+19,
  2.00000000e+03,
  1.20000000e+03,
  2.07846097e+03,
  2.00000000e-01,
  2.00000000e-01,
  2.00000000e-01,
  1.00000000e+18,
  1.00000000e+19,
  1.00000000e+20,
};

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_dbStateVars[] = {
  2.00000000e+04,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  5.00000000e+04,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
};

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_properties[] = {
  2.50000000e+03,
  2.25000000e+10,
  2.25000000e+10,
  5.00000000e-01,
  1.00000000e-01,
  2.00000000e-01,
  8.88888889e+07,
  4.44444444e+07,
  2.22222222e+09,
  2.00000000e+03,
  2.88000000e+09,
  2.88000000e+09,
  2.00000000e-01,
  2.00000000e-01,
  2.00000000e-01,
  1.73611111e+09,
  1.73611111e+10,
  1.73611111e+11,
};

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_stateVars[] = {
  2.00000000e+04,
  1.10000000e-04,
  1.20000000e-04,
  1.40000000e-04,
  3.33333333e-05,
  4.33333333e-05,
 -7.66666667e-05,
  1.40000000e-04,
  3.33333333e-05,
  4.33333333e-05,
 -7.66666667e-05,
  1.40000000e-04,
  3.33333333e-05,
  4.33333333e-05,
 -7.66666667e-05,
  1.40000000e-04,
  5.00000000e+04,
  4.10000000e-04,
  4.20000000e-04,
  4.40000000e-04,
  1.33333333e-04,
  1.43333333e-04,
 -2.76666667e-04,
  4.40000000e-04,
  1.33333333e-04,
  1.43333333e-04,
 -2.76666667e-04,
  4.40000000e-04,
  1.33333333e-04,
  1.43333333e-04,
 -2.76666667e-04,
  4.40000000e-04,
};

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_propertiesNondim[] = {
  1.11111111e-01,
  1.00000000e+00,
  1.00000000e+00,
  5.00000000e-01,
  1.00000000e-01,
  2.00000000e-01,
  8.88888889e+07,
  4.44444444e+07,
  2.22222222e+09,
  8.88888889e-02,
  1.28000000e-01,
  1.28000000e-01,
  2.00000000e-01,
  2.00000000e-01,
  2.00000000e-01,
  1.73611111e+09,
  1.73611111e+10,
  1.73611111e+11,
};

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_stateVarsNondim[] = {
  8.88888889e-07,
  1.10000000e-04,
  1.20000000e-04,
  1.40000000e-04,
  3.33333333e-05,
  4.33333333e-05,
 -7.66666667e-05,
  1.40000000e-04,
  3.33333333e-05,
  4.33333333e-05,
 -7.66666667e-05,
  1.40000000e-04,
  3.33333333e-05,
  4.33333333e-05,
 -7.66666667e-05,
  1.40000000e-04,
  2.22222222e-06,
  4.10000000e-04,
  4.20000000e-04,
  4.40000000e-04,
  1.33333333e-04,
  1.43333333e-04,
 -2.76666667e-04,
  4.40000000e-04,
  1.33333333e-04,
  1.43333333e-04,
 -2.76666667e-04,
  4.40000000e-04,
  1.33333333e-04,
  1.43333333e-04,
 -2.76666667e-04,
  4.40000000e-04,
};

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_density[] = {
  2.50000000e+03,
  2.00000000e+03,
};

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_strain[] = {
  1.20000000e-04,
  1.30000000e-04,
  1.50000000e-04,
  4.20000000e-04,
  4.30000000e-04,
  4.50000000e-04,
};

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_stress[] = {
  8.26999455e+06,
  8.72827873e+06,
  6.44262036e+06,
  4.28170011e+06,
  4.33699464e+06,
  2.43987045e+06,
};

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_elasticConsts[] = {
  6.74761273e+10,
  2.25119358e+10,
  0.00000000e+00,
  2.25119358e+10,
  6.74761273e+10,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  4.49641915e+10,
  8.63995077e+09,
  2.88002472e+09,
  0.00000000e+00,
  2.88002472e+09,
  8.63995124e+09,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  5.75992628e+09,
};

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_initialStress[] = {
  2.10000000e+04,
  2.20000000e+04,
  2.40000000e+04,
  5.10000000e+04,
  5.20000000e+04,
  5.40000000e+04,
};

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_initialStrain[] = {
  3.60000000e-05,
  3.50000000e-05,
  3.30000000e-05,
  6.10000000e-05,
  6.20000000e-05,
  6.60000000e-05,
};

const PylithScalar pylith::materials::GenMaxwellPlaneStrainTimeDepData::_stateVarsUpdated[] = {
  2.00000000e+04,
  1.20000000e-04,
  1.30000000e-04,
  1.50000000e-04,
  3.65880038e-05,
  4.65655291e-05,
 -8.31535329e-05,
  1.49674113e-04,
  3.65095149e-05,
  4.64646160e-05,
 -8.29741309e-05,
  1.49348949e-04,
  3.66635168e-05,
  4.66626168e-05,
 -8.33261337e-05,
  1.49986951e-04,
  5.00000000e+04,
  4.20000000e-04,
  4.30000000e-04,
  4.50000000e-04,
  1.36651116e-04,
  1.46649964e-04,
 -2.83301079e-04,
  4.49948739e-04,
  1.36665111e-04,
  1.46664996e-04,
 -2.83330108e-04,
  4.49994874e-04,
  1.36666511e-04,
  1.46666500e-04,
 -2.83333011e-04,
  4.49999487e-04,
};

pylith::materials::GenMaxwellPlaneStrainTimeDepData::GenMaxwellPlaneStrainTimeDepData(void)
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

pylith::materials::GenMaxwellPlaneStrainTimeDepData::~GenMaxwellPlaneStrainTimeDepData(void)
{}


// End of file
