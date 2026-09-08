/*
 *    @File:         Trajectory_findFlightPathAngleRate.c
 *
 *    @Brief:        Function which finds the flight path angle rate of the
 *                   projectile.
 *
 *    @Date:         25/06/2025
 *
 */

/* Function Includes */
/* None */

/* Structure Include */
#include "Trajectory/DataStructs/Trajectory_StateStruct.h"

/* Data include */
/* None */

/* Generic Libraries */
#include "GConst/GConst.h"

int Trajectory_findFlightPathAngleRate(
    Trajectory_State *p_trajectory_state_inout)
{
  /* Declare local variables */
  /* None */

  /* Find lift force */
  // TODO

  /* Check that velocity is not zero */
  // TODO: Make a tolerance
  // if (velocity_mps_in == 0.0)
  // {
  //   /* If, velocity is zero, set output flight path angle to 0.0 */
  //   *p_flightPathAngleRate_radps_out = 0.0;
  // }
  // else
  // {
  //   /* Else, find the flight path angle rate */
  //   // TODO
  // }

  return GCONST_TRUE;
}