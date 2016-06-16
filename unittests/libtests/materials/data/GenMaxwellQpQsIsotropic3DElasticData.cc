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
// This file was generated from python application genmaxwellbulkisotropic3delastic.

#include "GenMaxwellQpQsIsotropic3DElasticData.hh"

const int pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_dimension = 3;

const int pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_numLocs = 2;

const int pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_numProperties = 15;

const int pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_numStateVars = 27;

const int pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_numDBProperties = 15;

const int pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_numDBStateVars = 27;

const int pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_numPropsQuadPt = 15;

const int pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_numVarsQuadPt = 27;

const PylithScalar pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_lengthScale =   1.00000000e+03;

const PylithScalar pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_timeScale =   1.00000000e+00;

const PylithScalar pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_pressureScale =   2.25000000e+10;

const PylithScalar pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_densityScale =   2.25000000e+04;

const PylithScalar pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_dtStableImplicit =   8.88888889e+05;

const PylithScalar pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_dtStableExplicit =   1.92450090e-01;

const int pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_numPropertyValues[] = {
1,
1,
1,
1,
1,
1,
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

const int pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_numStateVarValues[] = {
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
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

const char* pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_dbPropertyValues[] = {
"density",
"vs",
"vp",
"shear-ratio-1",
"shear-ratio-2",
"shear-ratio-3",
"shear-viscosity-1",
"shear-viscosity-2",
"shear-viscosity-3",
"bulk-ratio-1",
"bulk-ratio-2",
"bulk-ratio-3",
"bulk-viscosity-1",
"bulk-viscosity-2",
"bulk-viscosity-3",
};

const char* pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_dbStateVarValues[] = {
"total-strain-xx",
"total-strain-yy",
"total-strain-zz",
"total-strain-xy",
"total-strain-yz",
"total-strain-xz",
"viscous-deviatoric-strain-1-xx",
"viscous-deviatoric-strain-1-yy",
"viscous-deviatoric-strain-1-zz",
"viscous-deviatoric-strain-1-xy",
"viscous-deviatoric-strain-1-yz",
"viscous-deviatoric-strain-1-xz",
"viscous-deviatoric-strain-2-xx",
"viscous-deviatoric-strain-2-yy",
"viscous-deviatoric-strain-2-zz",
"viscous-deviatoric-strain-2-xy",
"viscous-deviatoric-strain-2-yz",
"viscous-deviatoric-strain-2-xz",
"viscous-deviatoric-strain-3-xx",
"viscous-deviatoric-strain-3-yy",
"viscous-deviatoric-strain-3-zz",
"viscous-deviatoric-strain-3-xy",
"viscous-deviatoric-strain-3-yz",
"viscous-deviatoric-strain-3-xz",
"viscous-mean-strain-1",
"viscous-mean-strain-2",
"viscous-mean-strain-3",
};

const PylithScalar pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_dbProperties[] = {
  2.50000000e+03,
  3.00000000e+03,
  5.19615242e+03,
  5.00000000e-01,
  1.00000000e-01,
  2.00000000e-01,
  1.00000000e+18,
  1.00000000e+17,
  1.00000000e+19,
  4.00000000e-01,
  3.00000000e-01,
  1.00000000e-01,
  2.00000000e+18,
  2.00000000e+17,
  2.00000000e+19,
  2.00000000e+03,
  1.20000000e+03,
  2.07846097e+03,
  2.00000000e-01,
  2.00000000e-01,
  2.00000000e-01,
  1.00000000e+18,
  1.00000000e+19,
  1.00000000e+20,
  2.00000000e-01,
  2.00000000e-01,
  2.00000000e-01,
  2.00000000e+18,
  2.00000000e+19,
  2.00000000e+20,
};

const PylithScalar pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_dbStateVars[] = {
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

const PylithScalar pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_properties[] = {
  2.50000000e+03,
  2.25000000e+10,
  3.75000000e+10,
  5.00000000e-01,
  1.00000000e-01,
  2.00000000e-01,
  4.44444444e+07,
  4.44444444e+06,
  4.44444444e+08,
  4.00000000e-01,
  3.00000000e-01,
  1.00000000e-01,
  5.33333333e+07,
  5.33333333e+06,
  5.33333333e+08,
  2.00000000e+03,
  2.88000000e+09,
  4.80000000e+09,
  2.00000000e-01,
  2.00000000e-01,
  2.00000000e-01,
  3.47222222e+08,
  3.47222222e+09,
  3.47222222e+10,
  2.00000000e-01,
  2.00000000e-01,
  2.00000000e-01,
  4.16666667e+08,
  4.16666667e+09,
  4.16666667e+10,
};

const PylithScalar pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_stateVars[] = {
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

const PylithScalar pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_propertiesNondim[] = {
  1.11111111e-01,
  1.00000000e+00,
  1.66666667e+00,
  5.00000000e-01,
  1.00000000e-01,
  2.00000000e-01,
  4.44444444e+07,
  4.44444444e+06,
  4.44444444e+08,
  4.00000000e-01,
  3.00000000e-01,
  1.00000000e-01,
  5.33333333e+07,
  5.33333333e+06,
  5.33333333e+08,
  8.88888889e-02,
  1.28000000e-01,
  2.13333333e-01,
  2.00000000e-01,
  2.00000000e-01,
  2.00000000e-01,
  3.47222222e+08,
  3.47222222e+09,
  3.47222222e+10,
  2.00000000e-01,
  2.00000000e-01,
  2.00000000e-01,
  4.16666667e+08,
  4.16666667e+09,
  4.16666667e+10,
};

const PylithScalar pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_stateVarsNondim[] = {
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

const PylithScalar pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_density[] = {
  2.50000000e+03,
  2.00000000e+03,
};

const PylithScalar pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_strain[] = {
  1.10000000e-04,
  2.20000000e-04,
  3.30000000e-04,
  4.40000000e-04,
  5.50000000e-04,
  6.60000000e-04,
  1.20000000e-04,
  2.30000000e-04,
  3.40000000e-04,
  4.50000000e-04,
  5.60000000e-04,
  6.70000000e-04,
};

const PylithScalar pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_stress[] = {
 -1.57290000e+07,
 -1.12280000e+07,
 -6.72700000e+06,
  4.52400000e+06,
  9.02500000e+06,
  1.35260000e+07,
 -6.14100000e+06,
 -5.56400000e+06,
 -4.98700000e+06,
 -1.04040000e+06,
 -4.63400000e+05,
  1.13600000e+05,
};

const PylithScalar pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_elasticConsts[] = {
  6.75000000e+10,
  2.25000000e+10,
  2.25000000e+10,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  2.25000000e+10,
  6.75000000e+10,
  2.25000000e+10,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  2.25000000e+10,
  2.25000000e+10,
  6.75000000e+10,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  4.50000000e+10,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  4.50000000e+10,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  4.50000000e+10,
  8.64000000e+09,
  2.88000000e+09,
  2.88000000e+09,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  2.88000000e+09,
  8.64000000e+09,
  2.88000000e+09,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  2.88000000e+09,
  2.88000000e+09,
  8.64000000e+09,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  5.76000000e+09,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  5.76000000e+09,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  5.76000000e+09,
};

const PylithScalar pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_initialStress[] = {
  2.10000000e+04,
  2.20000000e+04,
  2.30000000e+04,
  2.40000000e+04,
  2.50000000e+04,
  2.60000000e+04,
  5.10000000e+04,
  5.20000000e+04,
  5.30000000e+04,
  5.40000000e+04,
  5.50000000e+04,
  5.60000000e+04,
};

const PylithScalar pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_initialStrain[] = {
  3.10000000e-04,
  3.20000000e-04,
  3.30000000e-04,
  3.40000000e-04,
  3.50000000e-04,
  3.60000000e-04,
  6.10000000e-04,
  6.20000000e-04,
  6.30000000e-04,
  6.40000000e-04,
  6.50000000e-04,
  6.60000000e-04,
};

const PylithScalar* pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::_stateVarsUpdated = 0;

pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::GenMaxwellQpQsIsotropic3DElasticData(void)
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

pylith::materials::GenMaxwellQpQsIsotropic3DElasticData::~GenMaxwellQpQsIsotropic3DElasticData(void)
{}


// End of file
