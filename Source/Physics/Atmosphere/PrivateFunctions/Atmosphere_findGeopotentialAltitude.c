/*
 *    @File:         Atmosphere_findGeopotentialAltitude.c
 *
 *    @Brief:        Function which finds the geopotential altitude.
 *
 *    @Date:         09/07/2025
 *
 */

/* Function Includes */
/* None */

/* Structure Include */
/* None */

/* Data include */
/* None */

/* Generic Libraries */
#include "GConst/GConst.h"

int Atmosphere_findGeopotentialAltitude(double *p_geopotentialAltitude_m_out,
                                        double  geometricAltitude_m_in,
                                        double  atmosphericBodyRadius_m_in)
{
  /* Declare local variables */
  /* None */

  /* Find geopotential altitude */
  *p_geopotentialAltitude_m_out =
      (geometricAltitude_m_in * atmosphericBodyRadius_m_in) /
      (geometricAltitude_m_in + atmosphericBodyRadius_m_in);

  return GCONST_TRUE;
}