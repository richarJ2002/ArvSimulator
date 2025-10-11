/*
 *    @File:         Atmosphere_preStep.c
 *
 *    @Brief:        Function which will find the
 *
 *    @Date:         09/07/2025
 *
 */

/* Function Includes */
#include "Atmosphere/PrivateFunctions/Atmosphere_PrivateFunctions.h"

/* Structure Include */
#include "Atmosphere/DataStructs/Atmosphere_StateStruct.h"

/* Data include */
#include "Atmosphere/ConstantDefs/Atmosphere_TypeEnum.h"

/* Generic Libraries */
#include "GConst/GConst.h"
#include "GLog/GLog.h"

int Atmosphere_preStep(Atmosphere_State *p_atmosphere_state_out,
                       double            geometricAltitude_m_in,
                       Atmosphere_Type   atmopshereType_in)
{
  /* Declare local variables */
  /* None */

  /* Load the geometric altitude into the atmospheric state struct */
  p_atmosphere_state_out->geometricAltitude_m = geometricAltitude_m_in;

  switch (atmopshereType_in)
  {
  case ATMOSPHERE_MERCURY_STEADY_STATE:
    /* Apply atmosphere */
    GError("Currently, this atmosphere is not implemented");
    // TODO
    break;
  case ATMOSPHERE_VENUS_STEADY_STATE:
    /* Apply atmosphere */
    GError("Currently, this atmosphere is not implemented");
    // TODO
    break;
  case ATMOSPHERE_EARTH_STEADY_STATE:
    /* Apply atmosphere */
    Atmosphere_earthSteadyState(p_atmosphere_state_out);
    break;
  case ATMOSPHERE_MARS_STEADY_STATE:
    /* Apply atmosphere */
    GError("Currently, this atmosphere is not implemented");
    // TODO
    break;
  case ATMOSPHERE_JUPITER_STEADY_STATE:
    /* Apply atmosphere */
    GError("Currently, this atmosphere is not implemented");
    // TODO
    break;
  case ATMOSPHERE_SATURN_STEADY_STATE:
    /* Apply atmosphere */
    GError("Currently, this atmosphere is not implemented");
    // TODO
    break;
  case ATMOSPHERE_URANUS_STEADY_STATE:
    /* Apply atmosphere */
    GError("Currently, this atmosphere is not implemented");
    // TODO
    break;
  case ATMOSPHERE_NEPTUNE_STEADY_STATE:
    /* Apply atmosphere */
    GError("Currently, this atmosphere is not implemented");
    // TODO
    break;

  default:
    GError("Unknown body type. atmopshereType_in = %d", atmopshereType_in);
    break;
  }

  return GCONST_TRUE;
}