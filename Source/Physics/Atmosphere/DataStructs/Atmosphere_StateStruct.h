/*
 *    @File:         Atmosphere_StateStruct.h
 *
 *    @Brief:        Header file containing state struct
 *
 *    @Date:         09/07/2025
 *
 */

#ifndef H_ATMOSPHERE_STATESTRUCT_H
#define H_ATMOSPHERE_STATESTRUCT_H

#ifdef __cplusplus
extern "C" {
#endif

/* Function Includes */
/* None */

/* Structure Include */
/* None */

/* Data include */
/* None */

/* Generic Libraries */
/* None */

typedef struct Atmosphere_StateStruct
{
  /*!
   * @brief       Geometirc altitude of the body, which is defined as the
   *              radial distance above a reference surface. For earth, the
   *              reference surface is sea level.
   *
   *              NOTE: Care should be taken for bodies that are not assumed to
   *                    be spherical.
   *
   * @frame       N/A (Magnitude value so not constrained to a specific frame)
   * @units       Meters
   */
  double geometricAltitude_m;

  /*!
   * @brief       Geopoential altitude. This altitude is an adjusted geometric
   *              altitude which compensates for the assumption of a constant
   *              gravitational acceleration.
   *
   * @frame       N/A (Magnitude value so not constrained to a specific frame)
   * @units       Meters
   */
  double geopotentialAltitude_m;

  /*!
   * @brief       Temperature of the atmospehre at the altitude.
   *
   * @frame       N/A (Magnitude value so not constrained to a specific frame)
   * @units       Kelvin
   */
  double atmosphericTemperature_K;

  /*!
   * @brief       Density of the atmospehre at the altitude.
   *
   * @frame       N/A (Magnitude value so not constrained to a specific frame)
   * @units       Kilograms Per Meters^3
   */
  double atmosphericDensity_kgpm3;
} Atmosphere_State;

#ifdef __cplusplus
}
#endif
#endif /* H_ATMOSPHERE_STATESTRUCT_H */