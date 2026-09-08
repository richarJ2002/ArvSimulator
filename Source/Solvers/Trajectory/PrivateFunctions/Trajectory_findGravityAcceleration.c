/*
 *    @File:         Trajectory_findGravityAcceleration.c
 *
 *    @Brief:        File which contains the function definition for finding the
 *                   acceleration due to gravity.
 *
 *    @Date:         26/06/2025
 *
 */

/* Function Includes */
/* None */

/* Structure Include */
#include "Trajectory/DataStructs/Trajectory_ParamsStruct.h"
#include "Trajectory/DataStructs/Trajectory_StateStruct.h"

/* Data include */
/* None */

/* Generic Libraries */
#include "GConst/GConst.h"

int Trajectory_findGravityAcceleration(
    Trajectory_State  *p_trajectory_state_out,
    Trajectory_Params *p_trajectory_params_in)
{
  /* Declare local variables */
  /* None */

  /* Find acceleration due to gravity */
  p_trajectory_state_out->accelerationDueToGravity_Fix_mps2 =
      (p_trajectory_params_in->gravityReferenceAcceleration_Fix_mps2) *
      ((p_trajectory_params_in->gravityReferenceZ_Fix_m) /
       (p_trajectory_state_out->zPosition_Fix_m)) *
      ((p_trajectory_params_in->gravityReferenceZ_Fix_m) /
       (p_trajectory_state_out->zPosition_Fix_m));

  return GCONST_TRUE;
}