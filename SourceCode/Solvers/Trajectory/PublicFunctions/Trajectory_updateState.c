/*
 *    @File:         Trajectory_updateState.c
 *
 *    @Brief:        Function which updates the trajectory state.
 *
 *    @Date:         26/06/2025
 *
 */

/* Function Includes */
#include "Trajectory/PrivateFunctions/Trajectory_PrivateFunctions.h"

/* Structure Include */
#include "Trajectory/DataStructs/Trajectory_ParamsStruct.h"
#include "Trajectory/DataStructs/Trajectory_StateStruct.h"

/* Data include */
/* None */

/* Generic Libraries */
#include "GConst/GConst.h"

int Trajectory_updateState(Trajectory_State  *p_trajectory_state_out,
                           Trajectory_Params *p_trajectory_params_in)
{
  /* Declare local variables */
  /* None */

  /* Find mass change rate */
  p_trajectory_state_out->massRate_kgps = 0.0;

  /* Find acceleration due to grvity */
  Trajectory_findGravityAcceleration(p_trajectory_state_out,
                                     p_trajectory_params_in);

  /* Find atmospheric density */
  Trajectory_findAtmosphericDensity(p_trajectory_state_out,
                                    p_trajectory_params_in);

  /* Find aerodynamic coefficinets */
  Trajectory_findAerodynamicCoefficients(p_trajectory_state_out,
                                         p_trajectory_params_in);

  /* Find aerodynamic forces */
  Trajectory_findAerodynamicForces(p_trajectory_state_out,
                                   p_trajectory_params_in);

  /* Find rate of change of velocity magnitude */
  Trajectory_findVelocityRate(p_trajectory_state_out);

  /* Find rate of change of flight path angle */
  Trajectory_findFlightPathAngleRate(p_trajectory_state_out);

  return GCONST_TRUE;
}