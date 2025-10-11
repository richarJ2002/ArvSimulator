/*
 *    @File:         Atmosphere_earthSteadyState.c
 *
 *    @Brief:        Function which finds the atmosphere for steady state
 *                   atmosphere.
 *
 *    @Date:         09/07/2025
 *
 */

#include <math.h>

/* Function Includes */
#include "Atmosphere/PrivateFunctions/Atmosphere_PrivateFunctions.h"

/* Structure Include */
#include "Atmosphere/DataStructs/Atmosphere_StateStruct.h"

/* Data include */
#include "Atmosphere/ConstantDefs/Atmosphere_Const.h"

/* Generic Libraries */
#include "GConst/GConst.h"
#include "GLog/GLog.h"

int Atmosphere_earthSteadyState(Atmosphere_State *p_atmosphere_state_inout)
{
  /* Declare local variables */
  double lapseRate_Kpm;
  double referenceTemperature_K;
  double referenceDensity_kgpm3;
  double referenceAltitude_m;

  /* Find the geopotential altitude */
  Atmosphere_findGeopotentialAltitude(
      &(p_atmosphere_state_inout->geopotentialAltitude_m),
      p_atmosphere_state_inout->geometricAltitude_m,
      ATMOSPHERE_EARTH_RADIUS_M);

  if ((p_atmosphere_state_inout->geometricAltitude_m >= 0.0) &&
      (p_atmosphere_state_inout->geometricAltitude_m < 11000))
  {
    /* Find Lapse Rate */
    lapseRate_Kpm = (288.16 - 216.66) / (11000 - 0.0);

    /* Set reference temperature */
    referenceTemperature_K = 216.66;

    /* Set reference density */
    referenceDensity_kgpm3 = 1.2250;

    /* Set reference altitude */
    Atmosphere_findGeopotentialAltitude(&referenceAltitude_m,
                                        0,
                                        ATMOSPHERE_EARTH_RADIUS_M);
  }
  else if ((p_atmosphere_state_inout->geometricAltitude_m >= 11000) &&
           (p_atmosphere_state_inout->geometricAltitude_m < 25000))
  {
    /* Find Lapse Rate */
    lapseRate_Kpm = (216.66 - 216.66) / (25000 - 11000);

    /* Set reference temperature */
    referenceTemperature_K = 216.66;

    /* Set reference density */
    referenceDensity_kgpm3 = 0.35932;

    /* Set reference altitude */
    Atmosphere_findGeopotentialAltitude(&referenceAltitude_m,
                                        11000,
                                        ATMOSPHERE_EARTH_RADIUS_M);
  }
  else if ((p_atmosphere_state_inout->geometricAltitude_m >= 25000) &&
           (p_atmosphere_state_inout->geometricAltitude_m < 47000))
  {
    /* Find Lapse Rate */
    lapseRate_Kpm = (282.66 - 216.66) / (47000 - 25000);

    /* Set reference temperature */
    referenceTemperature_K = 216.66;

    /* Set reference density */
    referenceDensity_kgpm3 = 0.040639;

    /* Set reference altitude */
    Atmosphere_findGeopotentialAltitude(&referenceAltitude_m,
                                        25000,
                                        ATMOSPHERE_EARTH_RADIUS_M);
  }
  else if ((p_atmosphere_state_inout->geometricAltitude_m >= 47000) &&
           (p_atmosphere_state_inout->geometricAltitude_m < 53000))
  {
    /* Find Lapse Rate */
    lapseRate_Kpm = (282.66 - 282.66) / (53000 - 47000);

    /* Set reference temperature */
    referenceTemperature_K = 282.66;

    /* Set reference density */
    referenceDensity_kgpm3 = 0.0015535;

    /* Set reference altitude */
    Atmosphere_findGeopotentialAltitude(&referenceAltitude_m,
                                        47000,
                                        ATMOSPHERE_EARTH_RADIUS_M);
  }
  else if ((p_atmosphere_state_inout->geometricAltitude_m >= 53000) &&
           (p_atmosphere_state_inout->geometricAltitude_m < 79000))
  {
    /* Find Lapse Rate */
    lapseRate_Kpm = (165.66 - 282.66) / (79000 - 53000);

    /* Set reference temperature */
    referenceTemperature_K = 282.66;

    /* Set reference density */
    referenceDensity_kgpm3 = 0.00075791;

    /* Set reference altitude */
    Atmosphere_findGeopotentialAltitude(&referenceAltitude_m,
                                        53000,
                                        ATMOSPHERE_EARTH_RADIUS_M);
  }
  else if ((p_atmosphere_state_inout->geometricAltitude_m >= 79000) &&
           (p_atmosphere_state_inout->geometricAltitude_m < 90000))
  {
    /* Find Lapse Rate */
    lapseRate_Kpm = (165.66 - 165.66) / (90000 - 79000);

    /* Set reference temperature */
    referenceTemperature_K = 165.66;

    /* Set reference density */
    referenceDensity_kgpm3 = 0.0000262865;

    /* Set reference altitude */
    Atmosphere_findGeopotentialAltitude(&referenceAltitude_m,
                                        79000,
                                        ATMOSPHERE_EARTH_RADIUS_M);
  }
  else if ((p_atmosphere_state_inout->geometricAltitude_m >= 90000) &&
           (p_atmosphere_state_inout->geometricAltitude_m < 105000))
  {
    /* Find Lapse Rate */
    lapseRate_Kpm = (225.66 - 165.66) / (105000 - 90000);

    /* Set reference temperature */
    referenceTemperature_K = 165.66;

    /* Set reference density */
    referenceDensity_kgpm3 = 0.0000029434052;

    /* Set reference altitude */
    Atmosphere_findGeopotentialAltitude(&referenceAltitude_m,
                                        90000,
                                        ATMOSPHERE_EARTH_RADIUS_M);
  }
  else if ((p_atmosphere_state_inout->geometricAltitude_m >= 105000))
  {

    /* Find Lapse Rate */
    lapseRate_Kpm = 0.0;

    /* Set reference temperature */
    referenceTemperature_K = 225.66;

    /* Set reference density */
    referenceDensity_kgpm3 = 0.00000015405169;

    /* Set reference altitude */
    Atmosphere_findGeopotentialAltitude(&referenceAltitude_m,
                                        105000,
                                        ATMOSPHERE_EARTH_RADIUS_M);
  }
  else
  {
    GError("Altitude does not lie within a valid range. "
           "p_atmosphere_state_inout->geometricAltitude_m = %lf",
           p_atmosphere_state_inout->geometricAltitude_m);
  }

  /* Find temperature */
  (p_atmosphere_state_inout->atmosphericTemperature_K) =
      referenceAltitude_m +
      lapseRate_Kpm *
          (p_atmosphere_state_inout->geometricAltitude_m - referenceAltitude_m);

  /* Find density */
  if (lapseRate_Kpm == 0.0)
  {
    /* Find the atmospheric density for isothermal region */
    (p_atmosphere_state_inout->atmosphericDensity_kgpm3) =
        referenceDensity_kgpm3 *
        pow(GCONST_EULERS_NUMBER,
            -(ATMOSPHERE_EARTH_SEA_LEVEL_GRAVITATIONAL_ACCELERATION_MPS2 /
              (ATMOSPHERE_EARTH_GAS_CONSTANT_R_JPKGK *
               p_atmosphere_state_inout->atmosphericTemperature_K) *
              (p_atmosphere_state_inout->geopotentialAltitude_m -
               referenceAltitude_m)));
  }
  else
  {
    /* Find the atmospheric density for temperature gradient region */
    (p_atmosphere_state_inout->atmosphericDensity_kgpm3) =
        referenceDensity_kgpm3 *
        pow((p_atmosphere_state_inout->atmosphericTemperature_K) /
                referenceTemperature_K,
            -(ATMOSPHERE_EARTH_SEA_LEVEL_GRAVITATIONAL_ACCELERATION_MPS2 /
                  (lapseRate_Kpm * ATMOSPHERE_EARTH_GAS_CONSTANT_R_JPKGK) +
              1));
  }

  /* Check density is large enough for hydrostatic assumption to be valid */
  if (p_atmosphere_state_inout->atmosphericDensity_kgpm3 <
      GCONST_FM_TOLERANCE * 0.1)
  {
    p_atmosphere_state_inout->atmosphericDensity_kgpm3 = 0.0;
  }

  return GCONST_TRUE;
}