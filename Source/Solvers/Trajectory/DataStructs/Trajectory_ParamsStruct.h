/*
 *    @File:         Trajectory_ParamsStruct.h
 *
 *    @Brief:        Header file which contains the parameter struct definition
 *                   for the trajectory solver.
 *
 *    @Date:         26/06/2025
 *
 */

#ifndef H_TRAJECTORY_PARAMSSTRUCT_H
#define H_TRAJECTORY_PARAMSSTRUCT_H

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

typedef struct Trajectory_ParamsStruct
{
  /*!
   * @brief       Reference altitude which acceleration due to gravity is
   *              measured from. This is typically sea level for earth.
   *
   * @frame       Fixed Frame
   * @units       Meters
   */
  double gravityReferenceZ_Fix_m;

  /*!
   * @brief       Acceleration due to gravity at the reference altitude.S=
   *
   * @frame       Fixed Frame
   * @units       Meters Per Second Squared
   */
  double gravityReferenceAcceleration_Fix_mps2;

} Trajectory_Params;

#ifdef __cplusplus
}
#endif
#endif /* H_TRAJECTORY_PARAMSSTRUCT_H */