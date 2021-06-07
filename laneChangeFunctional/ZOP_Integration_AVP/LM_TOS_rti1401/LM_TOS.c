/*
 * LM_TOS.c
 *
 * Code generation for model "LM_TOS".
 *
 * Model version              : 1.358
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Jan 20 09:24:00 2021
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LM_TOS_trc_ptr.h"
#include "LM_TOS.h"
#include "LM_TOS_private.h"

const real_T LM_TOS_RGND = 0.0;        /* real_T ground */
const uint32_T LM_TOS_U32GND = 0U;     /* uint32_T ground */
const FUS_OBJ_OUTPUT_ST LM_TOS_rtZFUS_OBJ_OUTPUT_ST = {
  0.0,                                 /* timeStamp */

  {
    {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    }, {
      {
        0.0F,                          /* longPosition */
        0.0F,                          /* latPosition */
        0.0F,                          /* headingAngle */
        0.0F,                          /* speed */
        0.0F,                          /* yawRate */
        0.0F,                          /* longRelativeVelocity */
        0.0F,                          /* latRelativeVelocity */
        0.0F,                          /* longAbsoluteVelocity */
        0.0F,                          /* latAbsoluteVelocity */
        0.0F,                          /* acceleration */
        0.0F,                          /* longRelativeAcceleration */
        0.0F,                          /* latRelativeAcceleration */
        0.0F,                          /* longAbsoluteAcceleration */
        0.0F,                          /* latAbsoluteAcceleration */
        0.0F                           /* curvature */
      },                               /* obj_estimate */

      {
        0U,                            /* id */
        0U,                            /* fusionSource */
        0U,                            /* motionModel */
        0U,                            /* trackStatus */
        0U,                            /* positionConfidence */
        0U,                            /* fcwConfidence */
        0U,                            /* tjaConfidence */
        0U,                            /* leftNearLaneMarkingConfidence */
        0U,                            /* rightNearLaneMarkingConfidence */
        0U,                            /* visionId */
        0.0F,                          /* accelerationStdDev */
        0.0F,                          /* headingAngleStdDev */
        0.0F,                          /* latPositionStdDev */
        0.0F,                          /* longPositionStdDev */
        0.0F                           /* speedStdDev */
      },                               /* obj_property */

      {
        0U,                            /* valid */
        0U,                            /* type */
        0U,                            /* nearestSide */
        0U,                            /* motionPatternCurrent */
        0U,                            /* motionPatternHistory */
        0.0F,                          /* width */
        0.0F,                          /* height */
        0.0F,                          /* length */
        0.0F,                          /* distanceToleftNearLaneMarking */
        0.0F                           /* distanceToRightNearLaneMarking */
      }                                /* obj_information */
    } }
  ,                                    /* objects */
  0U                                   /* frameNum */
} ;                                    /* FUS_OBJ_OUTPUT_ST ground */

const VSI_VEHSTATE_ST LM_TOS_rtZVSI_VEHSTATE_ST = {
  0.0F,                                /* YrsF */
  0.0F,                                /* AxSensorF */
  0.0F,                                /* StWheelAngleF */
  0.0F,                                /* vRef */
  0.0F,                                /* aRef */
  0.0F,                                /* AxSlope */
  false,                               /* AxSlopeValid */
  0.0F                                 /* Curvature */
} ;                                    /* VSI_VEHSTATE_ST ground */

const FUS_LANE_OUTPUT_ST LM_TOS_rtZFUS_LANE_OUTPUT_ST = {
  0.0,                                 /* timestamp */
  0U,                                  /* frameNum */
  0.0F,                                /* hostLaneWidth */
  0.0F,                                /* leftLaneWidth */
  0.0F,                                /* rightLaneWidth */

  {
    0U,                                /* id */
    0U,                                /* traceStatus */
    0U,                                /* quality */
    0U,                                /* color */
    0U,                                /* type */
    0.0F,                              /* width */

    {
      0.0F,                            /* latDistanceZeroOrderCoeff */
      0.0F,                            /* latDistanceFirstOrderCoeff */
      0.0F,                            /* latDistanceSecondOrderCoeff */
      0.0F,                            /* latDistanceThirdOrderCoeff */
      0.0F,                            /* longDistanceToend */

      {
        0.0F,                          /* x0 */
        0.0F                           /* y0 */
      }                                /* startPoint */
    }                                  /* curFunction */
  },                                   /* leftHostLane */

  {
    0U,                                /* id */
    0U,                                /* traceStatus */
    0U,                                /* quality */
    0U,                                /* color */
    0U,                                /* type */
    0.0F,                              /* width */

    {
      0.0F,                            /* latDistanceZeroOrderCoeff */
      0.0F,                            /* latDistanceFirstOrderCoeff */
      0.0F,                            /* latDistanceSecondOrderCoeff */
      0.0F,                            /* latDistanceThirdOrderCoeff */
      0.0F,                            /* longDistanceToend */

      {
        0.0F,                          /* x0 */
        0.0F                           /* y0 */
      }                                /* startPoint */
    }                                  /* curFunction */
  },                                   /* rightHostLane */

  {
    0U,                                /* id */
    0U,                                /* traceStatus */
    0U,                                /* quality */
    0U,                                /* color */
    0U,                                /* type */
    0.0F,                              /* width */

    {
      0.0F,                            /* latDistanceZeroOrderCoeff */
      0.0F,                            /* latDistanceFirstOrderCoeff */
      0.0F,                            /* latDistanceSecondOrderCoeff */
      0.0F,                            /* latDistanceThirdOrderCoeff */
      0.0F,                            /* longDistanceToend */

      {
        0.0F,                          /* x0 */
        0.0F                           /* y0 */
      }                                /* startPoint */
    }                                  /* curFunction */
  },                                   /* leftNeighborLane */

  {
    0U,                                /* id */
    0U,                                /* traceStatus */
    0U,                                /* quality */
    0U,                                /* color */
    0U,                                /* type */
    0.0F,                              /* width */

    {
      0.0F,                            /* latDistanceZeroOrderCoeff */
      0.0F,                            /* latDistanceFirstOrderCoeff */
      0.0F,                            /* latDistanceSecondOrderCoeff */
      0.0F,                            /* latDistanceThirdOrderCoeff */
      0.0F,                            /* longDistanceToend */

      {
        0.0F,                          /* x0 */
        0.0F                           /* y0 */
      }                                /* startPoint */
    }                                  /* curFunction */
  },                                   /* rightNeighborLane */

  {
    0U,                                /* id */
    0U,                                /* traceStatus */
    0U,                                /* quality */

    {
      0.0F,                            /* latDistanceZeroOrderCoeff */
      0.0F,                            /* latDistanceFirstOrderCoeff */
      0.0F,                            /* latDistanceSecondOrderCoeff */
      0.0F,                            /* latDistanceThirdOrderCoeff */
      0.0F,                            /* longDistanceToend */

      {
        0.0F,                          /* x0 */
        0.0F                           /* y0 */
      }                                /* startPoint */
    }                                  /* curveFunc */
  },                                   /* primaryObjTrajectory */
  0U                                   /* laneChangeStatus */
} ;                                    /* FUS_LANE_OUTPUT_ST ground */

const FUS_ROAD_EDGE_OUTPUT_ST LM_TOS_rtZFUS_ROAD_EDGE_OUTPUT_ST = {
  0.0,                                 /* timestamp */
  0U,                                  /* frameNum */
  0U,                                  /* hostVehPos */

  {
    0U,                                /* quality */
    0U,                                /* reserved */
    0U,                                /* type */
    0U,                                /* id */
    0U,                                /* trackStatus */

    {
      0.0F,                            /* latDistanceZeroOrderCoeff */
      0.0F,                            /* latDistanceFirstOrderCoeff */
      0.0F,                            /* latDistanceSecondOrderCoeff */
      0.0F,                            /* latDistanceThirdOrderCoeff */
      0.0F,                            /* longDistanceToend */

      {
        0.0F,                          /* x0 */
        0.0F                           /* y0 */
      }                                /* startPoint */
    }                                  /* roadEdgeCurve */
  },                                   /* leftRoadEdge */

  {
    0U,                                /* quality */
    0U,                                /* reserved */
    0U,                                /* type */
    0U,                                /* id */
    0U,                                /* trackStatus */

    {
      0.0F,                            /* latDistanceZeroOrderCoeff */
      0.0F,                            /* latDistanceFirstOrderCoeff */
      0.0F,                            /* latDistanceSecondOrderCoeff */
      0.0F,                            /* latDistanceThirdOrderCoeff */
      0.0F,                            /* longDistanceToend */

      {
        0.0F,                          /* x0 */
        0.0F                           /* y0 */
      }                                /* startPoint */
    }                                  /* roadEdgeCurve */
  },                                   /* rightRoadEdge */
  0U,                                  /* errorFlag */
  0U                                   /* detectedEdgeCnt */
} ;                                    /* FUS_ROAD_EDGE_OUTPUT_ST ground */

const ATS_PO_ST LM_TOS_rtZATS_PO_ST = {
  false,                               /* Valid */
  0.0F,                                /* Index */
  0.0F,                                /* dx */
  0.0F,                                /* dy */
  0.0F,                                /* vx */
  0.0F,                                /* vy */
  0.0F,                                /* ax */
  0.0F,                                /* vxAbs */
  0.0F,                                /* axAbs */
  0.0F,                                /* Type */
  0.0F                                 /* MotionSts */
} ;                                    /* ATS_PO_ST ground */

/* Block signals (default storage) */
B_LM_TOS_T LM_TOS_B;

/* Block states (default storage) */
DW_LM_TOS_T LM_TOS_DW;

/* Real-time model */
RT_MODEL_LM_TOS_T LM_TOS_M_;
RT_MODEL_LM_TOS_T *const LM_TOS_M = &LM_TOS_M_;

/* Model output function */
void LM_TOS_output(void)
{
  int32_T i;

  /* SignalConversion: '<S8>/TmpSignal ConversionAtSelectorInport1' */
  memcpy(&LM_TOS_B.TmpSignalConversionAtSelectorIn[0],
         &LM_TOS_rtZFUS_OBJ_OUTPUT_ST.objects[0], 40U * sizeof(FUS_OBJ_DATA_ST));

  /* Selector: '<S8>/Selector18' incorporates:
   *  Constant: '<S8>/Constant18'
   */
  LM_TOS_B.Selector18 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant18_Value];

  /* Selector: '<S8>/Selector19' incorporates:
   *  Constant: '<S8>/Constant19'
   */
  LM_TOS_B.Selector19 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant19_Value];

  /* Selector: '<S8>/Selector28' incorporates:
   *  Constant: '<S8>/Constant28'
   */
  LM_TOS_B.Selector28 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant28_Value];

  /* Selector: '<S8>/Selector29' incorporates:
   *  Constant: '<S8>/Constant29'
   */
  LM_TOS_B.Selector29 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant29_Value];

  /* Selector: '<S8>/Selector30' incorporates:
   *  Constant: '<S8>/Constant30'
   */
  LM_TOS_B.Selector30 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant30_Value];

  /* Selector: '<S8>/Selector31' incorporates:
   *  Constant: '<S8>/Constant31'
   */
  LM_TOS_B.Selector31 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant31_Value];

  /* Selector: '<S8>/Selector32' incorporates:
   *  Constant: '<S8>/Constant32'
   */
  LM_TOS_B.Selector32 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant32_Value];

  /* Selector: '<S8>/Selector33' incorporates:
   *  Constant: '<S8>/Constant33'
   */
  LM_TOS_B.Selector33 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant33_Value];

  /* Selector: '<S8>/Selector34' incorporates:
   *  Constant: '<S8>/Constant34'
   */
  LM_TOS_B.Selector34 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant34_Value];

  /* Selector: '<S8>/Selector35' incorporates:
   *  Constant: '<S8>/Constant35'
   */
  LM_TOS_B.Selector35 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant35_Value];

  /* Selector: '<S8>/Selector20' incorporates:
   *  Constant: '<S8>/Constant20'
   */
  LM_TOS_B.Selector20 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant20_Value];

  /* Selector: '<S8>/Selector21' incorporates:
   *  Constant: '<S8>/Constant21'
   */
  LM_TOS_B.Selector21 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant21_Value];

  /* Selector: '<S8>/Selector24' incorporates:
   *  Constant: '<S8>/Constant24'
   */
  LM_TOS_B.Selector24 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant24_Value];

  /* Selector: '<S8>/Selector25' incorporates:
   *  Constant: '<S8>/Constant25'
   */
  LM_TOS_B.Selector25 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant25_Value];

  /* Selector: '<S8>/Selector26' incorporates:
   *  Constant: '<S8>/Constant26'
   */
  LM_TOS_B.Selector26 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant26_Value];

  /* Selector: '<S8>/Selector27' incorporates:
   *  Constant: '<S8>/Constant27'
   */
  LM_TOS_B.Selector27 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant27_Value];

  /* Selector: '<S8>/Selector22' incorporates:
   *  Constant: '<S8>/Constant22'
   */
  LM_TOS_B.Selector22 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant22_Value];

  /* Selector: '<S8>/Selector23' incorporates:
   *  Constant: '<S8>/Constant23'
   */
  LM_TOS_B.Selector23 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant23_Value];

  /* Selector: '<S8>/Selector' incorporates:
   *  Constant: '<S8>/Constant'
   */
  LM_TOS_B.Selector = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant_Value];

  /* Selector: '<S8>/Selector1' incorporates:
   *  Constant: '<S8>/Constant1'
   */
  LM_TOS_B.Selector1 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant1_Value];

  /* Selector: '<S8>/Selector2' incorporates:
   *  Constant: '<S8>/Constant2'
   */
  LM_TOS_B.Selector2 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant2_Value];

  /* Selector: '<S8>/Selector3' incorporates:
   *  Constant: '<S8>/Constant3'
   */
  LM_TOS_B.Selector3 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant3_Value];

  /* Selector: '<S8>/Selector4' incorporates:
   *  Constant: '<S8>/Constant4'
   */
  LM_TOS_B.Selector4 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant4_Value];

  /* Selector: '<S8>/Selector5' incorporates:
   *  Constant: '<S8>/Constant5'
   */
  LM_TOS_B.Selector5 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant5_Value];

  /* Selector: '<S8>/Selector6' incorporates:
   *  Constant: '<S8>/Constant6'
   */
  LM_TOS_B.Selector6 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant6_Value];

  /* Selector: '<S8>/Selector7' incorporates:
   *  Constant: '<S8>/Constant7'
   */
  LM_TOS_B.Selector7 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant7_Value];

  /* Selector: '<S8>/Selector8' incorporates:
   *  Constant: '<S8>/Constant8'
   */
  LM_TOS_B.Selector8 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant8_Value];

  /* Selector: '<S8>/Selector9' incorporates:
   *  Constant: '<S8>/Constant9'
   */
  LM_TOS_B.Selector9 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant9_Value];

  /* Selector: '<S8>/Selector10' incorporates:
   *  Constant: '<S8>/Constant10'
   */
  LM_TOS_B.Selector10 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant10_Value];

  /* Selector: '<S8>/Selector11' incorporates:
   *  Constant: '<S8>/Constant11'
   */
  LM_TOS_B.Selector11 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant11_Value];

  /* Selector: '<S8>/Selector14' incorporates:
   *  Constant: '<S8>/Constant14'
   */
  LM_TOS_B.Selector14 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant14_Value];

  /* Selector: '<S8>/Selector15' incorporates:
   *  Constant: '<S8>/Constant15'
   */
  LM_TOS_B.Selector15 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant15_Value];

  /* Selector: '<S8>/Selector16' incorporates:
   *  Constant: '<S8>/Constant16'
   */
  LM_TOS_B.Selector16 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant16_Value];

  /* Selector: '<S8>/Selector17' incorporates:
   *  Constant: '<S8>/Constant17'
   */
  LM_TOS_B.Selector17 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant17_Value];

  /* Selector: '<S8>/Selector12' incorporates:
   *  Constant: '<S8>/Constant12'
   */
  LM_TOS_B.Selector12 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant12_Value];

  /* Selector: '<S8>/Selector13' incorporates:
   *  Constant: '<S8>/Constant13'
   */
  LM_TOS_B.Selector13 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant13_Value];

  /* Selector: '<S8>/Selector38' incorporates:
   *  Constant: '<S8>/Constant38'
   */
  LM_TOS_B.Selector38 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant38_Value];

  /* Selector: '<S8>/Selector39' incorporates:
   *  Constant: '<S8>/Constant39'
   */
  LM_TOS_B.Selector39 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant39_Value];

  /* Selector: '<S8>/Selector36' incorporates:
   *  Constant: '<S8>/Constant36'
   */
  LM_TOS_B.Selector36 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant36_Value];

  /* Selector: '<S8>/Selector37' incorporates:
   *  Constant: '<S8>/Constant37'
   */
  LM_TOS_B.Selector37 = LM_TOS_B.TmpSignalConversionAtSelectorIn[(int32_T)
    LM_TOS_P.Constant37_Value];

  /* BusCreator: '<S2>/BusConversion_InsertedFor_LM_TOS_ALGORISM_at_inport_2' */
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_01_obj =
    LM_TOS_B.Selector18;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_02_obj =
    LM_TOS_B.Selector19;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_03_obj =
    LM_TOS_B.Selector28;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_04_obj =
    LM_TOS_B.Selector29;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_05_obj =
    LM_TOS_B.Selector30;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_06_obj =
    LM_TOS_B.Selector31;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_07_obj =
    LM_TOS_B.Selector32;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_08_obj =
    LM_TOS_B.Selector33;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_09_obj =
    LM_TOS_B.Selector34;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_10_obj =
    LM_TOS_B.Selector35;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_11_obj =
    LM_TOS_B.Selector20;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_12_obj =
    LM_TOS_B.Selector21;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_13_obj =
    LM_TOS_B.Selector24;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_14_obj =
    LM_TOS_B.Selector25;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_15_obj =
    LM_TOS_B.Selector26;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_16_obj =
    LM_TOS_B.Selector27;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_17_obj =
    LM_TOS_B.Selector22;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_18_obj =
    LM_TOS_B.Selector23;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_19_obj = LM_TOS_B.Selector;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_20_obj =
    LM_TOS_B.Selector1;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_21_obj =
    LM_TOS_B.Selector2;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_22_obj =
    LM_TOS_B.Selector3;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_23_obj =
    LM_TOS_B.Selector4;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_24_obj =
    LM_TOS_B.Selector5;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_25_obj =
    LM_TOS_B.Selector6;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_26_obj =
    LM_TOS_B.Selector7;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_27_obj =
    LM_TOS_B.Selector8;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_28_obj =
    LM_TOS_B.Selector9;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_29_obj =
    LM_TOS_B.Selector10;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_30_obj =
    LM_TOS_B.Selector11;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_31_obj =
    LM_TOS_B.Selector14;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_32_obj =
    LM_TOS_B.Selector15;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_33_obj =
    LM_TOS_B.Selector16;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_34_obj =
    LM_TOS_B.Selector17;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_35_obj =
    LM_TOS_B.Selector12;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_36_obj =
    LM_TOS_B.Selector13;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_37_obj =
    LM_TOS_B.Selector38;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_38_obj =
    LM_TOS_B.Selector39;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_39_obj =
    LM_TOS_B.Selector36;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_40_obj =
    LM_TOS_B.Selector37;

  /* S-Function (LM_TOS_MODULE): '<S2>/LM_TOS_ALGORISM' */
  LM_TOS_MODULE_Outputs_wrapper((real_T*)&LM_TOS_RGND, (uint32_T*)&LM_TOS_U32GND,
    &LM_TOS_B.BusConversion_InsertedFor_LM_TO, (VSI_VEHSTATE_ST*)
    &LM_TOS_rtZVSI_VEHSTATE_ST, (FUS_LANE_OUTPUT_ST*)
    &LM_TOS_rtZFUS_LANE_OUTPUT_ST, (FUS_ROAD_EDGE_OUTPUT_ST*)
    &LM_TOS_rtZFUS_ROAD_EDGE_OUTPUT_ST, (ATS_PO_ST*)&LM_TOS_rtZATS_PO_ST,
    &LM_TOS_B.LM_TOS_ALGORISM_o1, &LM_TOS_B.LM_TOS_ALGORISM_o2,
    &LM_TOS_B.LM_TOS_ALGORISM_o3, &LM_TOS_B.LM_TOS_ALGORISM_o4,
    &LM_TOS_B.LM_TOS_ALGORISM_o5, &LM_TOS_B.LM_TOS_ALGORISM_o6,
    &LM_TOS_B.LM_TOS_ALGORISM_o7, &LM_TOS_B.LM_TOS_ALGORISM_o8,
    &LM_TOS_B.LM_TOS_ALGORISM_o9, &LM_TOS_B.LM_TOS_ALGORISM_o10);

  /* Concatenate: '<S15>/Vector Concatenate' */
  LM_TOS_B.BusCreator_j.hmi_display_array_st[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_0;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_1;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_2;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_3;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_4;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[5] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_5;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[6] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_6;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[7] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_7;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[8] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_8;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[9] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_9;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[10] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_10;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[11] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_11;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[12] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_12;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[13] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_13;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[14] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_14;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[15] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_15;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[16] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_16;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[17] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_17;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[18] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_18;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[19] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_19;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[20] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_20;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[21] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_21;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[22] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_22;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[23] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_23;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[24] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_24;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[25] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_25;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[26] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_26;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[27] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_27;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[28] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_28;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[29] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_29;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[30] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_30;
  LM_TOS_B.BusCreator_j.hmi_display_array_st[31] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_31;

  /* SignalConversion: '<S28>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_d[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S28>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_d[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S28>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_d[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S28>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_d[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S28>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_d[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S28>/Bus Creator1' */
  LM_TOS_B.BusCreator1.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.TTC_f;
  LM_TOS_B.BusCreator1.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.ID_un8;
  LM_TOS_B.BusCreator1.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_d[i];
  }

  LM_TOS_B.BusCreator1.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probCutIn_f;
  LM_TOS_B.BusCreator1.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probCutOut_f;
  LM_TOS_B.BusCreator1.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.overlap_f;
  LM_TOS_B.BusCreator1.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S28>/Bus Creator1' */

  /* SignalConversion: '<S29>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_lr[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S29>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_lr[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S29>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_lr[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S29>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_lr[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S29>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_lr[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S29>/Bus Creator1' */
  LM_TOS_B.BusCreator1_l.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_l.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.TTC_f;
  LM_TOS_B.BusCreator1_l.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.ID_un8;
  LM_TOS_B.BusCreator1_l.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_l.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_lr[i];
  }

  LM_TOS_B.BusCreator1_l.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_l.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_l.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.overlap_f;
  LM_TOS_B.BusCreator1_l.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S29>/Bus Creator1' */

  /* SignalConversion: '<S36>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_gp[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S36>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_gp[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S36>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_gp[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S36>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_gp[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S36>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_gp[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S36>/Bus Creator1' */
  LM_TOS_B.BusCreator1_f.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_f.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.TTC_f;
  LM_TOS_B.BusCreator1_f.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.ID_un8;
  LM_TOS_B.BusCreator1_f.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_f.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_gp[i];
  }

  LM_TOS_B.BusCreator1_f.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_f.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_f.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.overlap_f;
  LM_TOS_B.BusCreator1_f.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S36>/Bus Creator1' */

  /* SignalConversion: '<S37>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_p[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S37>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_p[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S37>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_p[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S37>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_p[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S37>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_p[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S37>/Bus Creator1' */
  LM_TOS_B.BusCreator1_h.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_h.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.TTC_f;
  LM_TOS_B.BusCreator1_h.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.ID_un8;
  LM_TOS_B.BusCreator1_h.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_h.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_p[i];
  }

  LM_TOS_B.BusCreator1_h.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_h.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_h.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.overlap_f;
  LM_TOS_B.BusCreator1_h.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S37>/Bus Creator1' */

  /* SignalConversion: '<S38>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_i[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S38>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_i[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S38>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_i[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S38>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_i[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S38>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_i[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S38>/Bus Creator1' */
  LM_TOS_B.BusCreator1_j.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_j.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.TTC_f;
  LM_TOS_B.BusCreator1_j.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.ID_un8;
  LM_TOS_B.BusCreator1_j.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_j.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_i[i];
  }

  LM_TOS_B.BusCreator1_j.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_j.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_j.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.overlap_f;
  LM_TOS_B.BusCreator1_j.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S38>/Bus Creator1' */

  /* SignalConversion: '<S39>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_cd[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S39>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_cd[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S39>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_cd[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S39>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_cd[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S39>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_cd[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S39>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ji.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_ji.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.TTC_f;
  LM_TOS_B.BusCreator1_ji.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.ID_un8;
  LM_TOS_B.BusCreator1_ji.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_ji.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_cd[i];
  }

  LM_TOS_B.BusCreator1_ji.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_ji.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_ji.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.overlap_f;
  LM_TOS_B.BusCreator1_ji.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S39>/Bus Creator1' */

  /* SignalConversion: '<S40>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_o[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S40>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_o[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S40>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_o[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S40>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_o[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S40>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_o[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S40>/Bus Creator1' */
  LM_TOS_B.BusCreator1_k.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_k.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.TTC_f;
  LM_TOS_B.BusCreator1_k.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.ID_un8;
  LM_TOS_B.BusCreator1_k.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_k.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_o[i];
  }

  LM_TOS_B.BusCreator1_k.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_k.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_k.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.overlap_f;
  LM_TOS_B.BusCreator1_k.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S40>/Bus Creator1' */

  /* SignalConversion: '<S41>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_nk[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S41>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_nk[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S41>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_nk[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S41>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_nk[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S41>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_nk[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S41>/Bus Creator1' */
  LM_TOS_B.BusCreator1_e.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_e.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.TTC_f;
  LM_TOS_B.BusCreator1_e.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.ID_un8;
  LM_TOS_B.BusCreator1_e.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_e.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_nk[i];
  }

  LM_TOS_B.BusCreator1_e.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_e.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_e.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.overlap_f;
  LM_TOS_B.BusCreator1_e.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S41>/Bus Creator1' */

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_lrr[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_lrr[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_lrr[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_lrr[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_lrr[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S42>/Bus Creator1' */
  LM_TOS_B.BusCreator1_d.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_d.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.TTC_f;
  LM_TOS_B.BusCreator1_d.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.ID_un8;
  LM_TOS_B.BusCreator1_d.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_d.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_lrr[i];
  }

  LM_TOS_B.BusCreator1_d.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_d.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_d.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.overlap_f;
  LM_TOS_B.BusCreator1_d.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S42>/Bus Creator1' */

  /* SignalConversion: '<S43>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_ob[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S43>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_ob[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S43>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_ob[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S43>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_ob[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S43>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_ob[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S43>/Bus Creator1' */
  LM_TOS_B.BusCreator1_c.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_c.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.TTC_f;
  LM_TOS_B.BusCreator1_c.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.ID_un8;
  LM_TOS_B.BusCreator1_c.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_c.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_ob[i];
  }

  LM_TOS_B.BusCreator1_c.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_c.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_c.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.overlap_f;
  LM_TOS_B.BusCreator1_c.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S43>/Bus Creator1' */

  /* Concatenate: '<S10>/Vector Concatenate' */
  LM_TOS_B.BusCreator.ObjectList_st[0] = LM_TOS_B.BusCreator1;
  LM_TOS_B.BusCreator.ObjectList_st[1] = LM_TOS_B.BusCreator1_l;
  LM_TOS_B.BusCreator.ObjectList_st[2] = LM_TOS_B.BusCreator1_f;
  LM_TOS_B.BusCreator.ObjectList_st[3] = LM_TOS_B.BusCreator1_h;
  LM_TOS_B.BusCreator.ObjectList_st[4] = LM_TOS_B.BusCreator1_j;
  LM_TOS_B.BusCreator.ObjectList_st[5] = LM_TOS_B.BusCreator1_ji;
  LM_TOS_B.BusCreator.ObjectList_st[6] = LM_TOS_B.BusCreator1_k;
  LM_TOS_B.BusCreator.ObjectList_st[7] = LM_TOS_B.BusCreator1_e;
  LM_TOS_B.BusCreator.ObjectList_st[8] = LM_TOS_B.BusCreator1_d;
  LM_TOS_B.BusCreator.ObjectList_st[9] = LM_TOS_B.BusCreator1_c;

  /* SignalConversion: '<S44>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_ny[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S44>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_ny[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S44>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_ny[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S44>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_ny[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S44>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_ny[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S44>/Bus Creator1' */
  LM_TOS_B.BusCreator1_kg.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_kg.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.TTC_f;
  LM_TOS_B.BusCreator1_kg.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.ID_un8;
  LM_TOS_B.BusCreator1_kg.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_kg.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_ny[i];
  }

  LM_TOS_B.BusCreator1_kg.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_kg.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_kg.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.overlap_f;
  LM_TOS_B.BusCreator1_kg.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S44>/Bus Creator1' */

  /* SignalConversion: '<S45>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_pu[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S45>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_pu[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S45>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_pu[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S45>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_pu[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S45>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_pu[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S45>/Bus Creator1' */
  LM_TOS_B.BusCreator1_i.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_i.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.TTC_f;
  LM_TOS_B.BusCreator1_i.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.ID_un8;
  LM_TOS_B.BusCreator1_i.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_i.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_pu[i];
  }

  LM_TOS_B.BusCreator1_i.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_i.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_i.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.overlap_f;
  LM_TOS_B.BusCreator1_i.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S45>/Bus Creator1' */

  /* SignalConversion: '<S52>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_m[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S52>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_m[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S52>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_m[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S52>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_m[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S52>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_m[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S52>/Bus Creator1' */
  LM_TOS_B.BusCreator1_lw.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_lw.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.TTC_f;
  LM_TOS_B.BusCreator1_lw.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.ID_un8;
  LM_TOS_B.BusCreator1_lw.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_lw.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_m[i];
  }

  LM_TOS_B.BusCreator1_lw.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_lw.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_lw.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.overlap_f;
  LM_TOS_B.BusCreator1_lw.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S52>/Bus Creator1' */

  /* SignalConversion: '<S53>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_e[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S53>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_e[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S53>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_e[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S53>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_e[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S53>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_e[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S53>/Bus Creator1' */
  LM_TOS_B.BusCreator1_c3.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_c3.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.TTC_f;
  LM_TOS_B.BusCreator1_c3.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.ID_un8;
  LM_TOS_B.BusCreator1_c3.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_c3.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_e[i];
  }

  LM_TOS_B.BusCreator1_c3.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_c3.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_c3.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.overlap_f;
  LM_TOS_B.BusCreator1_c3.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S53>/Bus Creator1' */

  /* SignalConversion: '<S54>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_a[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S54>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_a[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S54>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_a[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S54>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_a[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S54>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_a[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S54>/Bus Creator1' */
  LM_TOS_B.BusCreator1_p.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_p.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.TTC_f;
  LM_TOS_B.BusCreator1_p.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.ID_un8;
  LM_TOS_B.BusCreator1_p.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_p.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_a[i];
  }

  LM_TOS_B.BusCreator1_p.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_p.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_p.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.overlap_f;
  LM_TOS_B.BusCreator1_p.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S54>/Bus Creator1' */

  /* SignalConversion: '<S55>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_g0[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S55>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_g0[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S55>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_g0[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S55>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_g0[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S55>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_g0[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S55>/Bus Creator1' */
  LM_TOS_B.BusCreator1_b.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_b.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.TTC_f;
  LM_TOS_B.BusCreator1_b.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.ID_un8;
  LM_TOS_B.BusCreator1_b.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_b.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_g0[i];
  }

  LM_TOS_B.BusCreator1_b.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_b.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_b.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.overlap_f;
  LM_TOS_B.BusCreator1_b.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S55>/Bus Creator1' */

  /* SignalConversion: '<S56>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_cp[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S56>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_cp[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S56>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_cp[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S56>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_cp[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S56>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_cp[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S56>/Bus Creator1' */
  LM_TOS_B.BusCreator1_jm.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_jm.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.TTC_f;
  LM_TOS_B.BusCreator1_jm.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.ID_un8;
  LM_TOS_B.BusCreator1_jm.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_jm.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_cp[i];
  }

  LM_TOS_B.BusCreator1_jm.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_jm.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_jm.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.overlap_f;
  LM_TOS_B.BusCreator1_jm.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S56>/Bus Creator1' */

  /* SignalConversion: '<S57>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_ik[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S57>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_ik[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S57>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_ik[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S57>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_ik[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S57>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_ik[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S57>/Bus Creator1' */
  LM_TOS_B.BusCreator1_o.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_o.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.TTC_f;
  LM_TOS_B.BusCreator1_o.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.ID_un8;
  LM_TOS_B.BusCreator1_o.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_o.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_ik[i];
  }

  LM_TOS_B.BusCreator1_o.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_o.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_o.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.overlap_f;
  LM_TOS_B.BusCreator1_o.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S57>/Bus Creator1' */

  /* SignalConversion: '<S58>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_f[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S58>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_f[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S58>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_f[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S58>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_f[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S58>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_f[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S58>/Bus Creator1' */
  LM_TOS_B.BusCreator1_lu.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_lu.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.TTC_f;
  LM_TOS_B.BusCreator1_lu.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.ID_un8;
  LM_TOS_B.BusCreator1_lu.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_lu.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_f[i];
  }

  LM_TOS_B.BusCreator1_lu.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_lu.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_lu.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.overlap_f;
  LM_TOS_B.BusCreator1_lu.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S58>/Bus Creator1' */

  /* SignalConversion: '<S59>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_iz[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S59>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_iz[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S59>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_iz[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S59>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_iz[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S59>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_iz[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S59>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ct.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_ct.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.TTC_f;
  LM_TOS_B.BusCreator1_ct.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.ID_un8;
  LM_TOS_B.BusCreator1_ct.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_ct.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_iz[i];
  }

  LM_TOS_B.BusCreator1_ct.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_ct.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_ct.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.overlap_f;
  LM_TOS_B.BusCreator1_ct.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S59>/Bus Creator1' */

  /* Concatenate: '<S11>/Vector Concatenate' */
  LM_TOS_B.BusCreator_d.ObjectList_st[0] = LM_TOS_B.BusCreator1_kg;
  LM_TOS_B.BusCreator_d.ObjectList_st[1] = LM_TOS_B.BusCreator1_i;
  LM_TOS_B.BusCreator_d.ObjectList_st[2] = LM_TOS_B.BusCreator1_lw;
  LM_TOS_B.BusCreator_d.ObjectList_st[3] = LM_TOS_B.BusCreator1_c3;
  LM_TOS_B.BusCreator_d.ObjectList_st[4] = LM_TOS_B.BusCreator1_p;
  LM_TOS_B.BusCreator_d.ObjectList_st[5] = LM_TOS_B.BusCreator1_b;
  LM_TOS_B.BusCreator_d.ObjectList_st[6] = LM_TOS_B.BusCreator1_jm;
  LM_TOS_B.BusCreator_d.ObjectList_st[7] = LM_TOS_B.BusCreator1_o;
  LM_TOS_B.BusCreator_d.ObjectList_st[8] = LM_TOS_B.BusCreator1_lu;
  LM_TOS_B.BusCreator_d.ObjectList_st[9] = LM_TOS_B.BusCreator1_ct;

  /* SignalConversion: '<S60>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_nb[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S60>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_nb[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S60>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_nb[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S60>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_nb[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S60>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_nb[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S60>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ks.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_ks.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.TTC_f;
  LM_TOS_B.BusCreator1_ks.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.ID_un8;
  LM_TOS_B.BusCreator1_ks.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_ks.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_nb[i];
  }

  LM_TOS_B.BusCreator1_ks.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_ks.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_ks.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.overlap_f;
  LM_TOS_B.BusCreator1_ks.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S60>/Bus Creator1' */

  /* SignalConversion: '<S61>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_l5[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S61>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_l5[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S61>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_l5[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S61>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_l5[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S61>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_l5[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S61>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ll.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_ll.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.TTC_f;
  LM_TOS_B.BusCreator1_ll.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.ID_un8;
  LM_TOS_B.BusCreator1_ll.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_ll.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_l5[i];
  }

  LM_TOS_B.BusCreator1_ll.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_ll.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_ll.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.overlap_f;
  LM_TOS_B.BusCreator1_ll.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S61>/Bus Creator1' */

  /* SignalConversion: '<S68>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_j0[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S68>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_j0[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S68>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_j0[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S68>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_j0[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S68>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_j0[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S68>/Bus Creator1' */
  LM_TOS_B.BusCreator1_a.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_a.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.TTC_f;
  LM_TOS_B.BusCreator1_a.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.ID_un8;
  LM_TOS_B.BusCreator1_a.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_a.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_j0[i];
  }

  LM_TOS_B.BusCreator1_a.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_a.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_a.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.overlap_f;
  LM_TOS_B.BusCreator1_a.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S68>/Bus Creator1' */

  /* SignalConversion: '<S69>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_os[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S69>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_os[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S69>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_os[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S69>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_os[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S69>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_os[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S69>/Bus Creator1' */
  LM_TOS_B.BusCreator1_bo.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_bo.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.TTC_f;
  LM_TOS_B.BusCreator1_bo.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.ID_un8;
  LM_TOS_B.BusCreator1_bo.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_bo.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_os[i];
  }

  LM_TOS_B.BusCreator1_bo.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_bo.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_bo.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.overlap_f;
  LM_TOS_B.BusCreator1_bo.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S69>/Bus Creator1' */

  /* SignalConversion: '<S70>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_a2[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S70>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_a2[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S70>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_a2[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S70>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_a2[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S70>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_a2[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S70>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ot.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_ot.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.TTC_f;
  LM_TOS_B.BusCreator1_ot.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.ID_un8;
  LM_TOS_B.BusCreator1_ot.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_ot.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_a2[i];
  }

  LM_TOS_B.BusCreator1_ot.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_ot.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_ot.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.overlap_f;
  LM_TOS_B.BusCreator1_ot.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S70>/Bus Creator1' */

  /* SignalConversion: '<S71>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_if[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S71>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_if[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S71>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_if[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S71>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_if[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S71>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_if[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S71>/Bus Creator1' */
  LM_TOS_B.BusCreator1_fw.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_fw.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.TTC_f;
  LM_TOS_B.BusCreator1_fw.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.ID_un8;
  LM_TOS_B.BusCreator1_fw.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_fw.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_if[i];
  }

  LM_TOS_B.BusCreator1_fw.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_fw.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_fw.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.overlap_f;
  LM_TOS_B.BusCreator1_fw.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S71>/Bus Creator1' */

  /* SignalConversion: '<S72>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_fr[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S72>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_fr[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S72>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_fr[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S72>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_fr[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S72>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_fr[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S72>/Bus Creator1' */
  LM_TOS_B.BusCreator1_c4.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_c4.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.TTC_f;
  LM_TOS_B.BusCreator1_c4.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.ID_un8;
  LM_TOS_B.BusCreator1_c4.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_c4.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_fr[i];
  }

  LM_TOS_B.BusCreator1_c4.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_c4.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_c4.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.overlap_f;
  LM_TOS_B.BusCreator1_c4.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S72>/Bus Creator1' */

  /* SignalConversion: '<S73>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_h[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S73>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_h[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S73>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_h[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S73>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_h[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S73>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_h[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S73>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ff.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_ff.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.TTC_f;
  LM_TOS_B.BusCreator1_ff.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.ID_un8;
  LM_TOS_B.BusCreator1_ff.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_ff.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_h[i];
  }

  LM_TOS_B.BusCreator1_ff.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_ff.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_ff.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.overlap_f;
  LM_TOS_B.BusCreator1_ff.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S73>/Bus Creator1' */

  /* SignalConversion: '<S74>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_d2[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S74>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_d2[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S74>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_d2[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S74>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_d2[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S74>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_d2[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S74>/Bus Creator1' */
  LM_TOS_B.BusCreator1_bm.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_bm.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.TTC_f;
  LM_TOS_B.BusCreator1_bm.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.ID_un8;
  LM_TOS_B.BusCreator1_bm.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_bm.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_d2[i];
  }

  LM_TOS_B.BusCreator1_bm.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_bm.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_bm.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.overlap_f;
  LM_TOS_B.BusCreator1_bm.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S74>/Bus Creator1' */

  /* SignalConversion: '<S75>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_p1[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S75>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_p1[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S75>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_p1[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S75>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_p1[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S75>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_p1[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S75>/Bus Creator1' */
  LM_TOS_B.BusCreator1_il.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_il.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.TTC_f;
  LM_TOS_B.BusCreator1_il.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.ID_un8;
  LM_TOS_B.BusCreator1_il.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_il.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_p1[i];
  }

  LM_TOS_B.BusCreator1_il.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_il.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_il.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.overlap_f;
  LM_TOS_B.BusCreator1_il.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S75>/Bus Creator1' */

  /* Concatenate: '<S12>/Vector Concatenate' */
  LM_TOS_B.BusCreator_n.ObjectList_st[0] = LM_TOS_B.BusCreator1_ks;
  LM_TOS_B.BusCreator_n.ObjectList_st[1] = LM_TOS_B.BusCreator1_ll;
  LM_TOS_B.BusCreator_n.ObjectList_st[2] = LM_TOS_B.BusCreator1_a;
  LM_TOS_B.BusCreator_n.ObjectList_st[3] = LM_TOS_B.BusCreator1_bo;
  LM_TOS_B.BusCreator_n.ObjectList_st[4] = LM_TOS_B.BusCreator1_ot;
  LM_TOS_B.BusCreator_n.ObjectList_st[5] = LM_TOS_B.BusCreator1_fw;
  LM_TOS_B.BusCreator_n.ObjectList_st[6] = LM_TOS_B.BusCreator1_c4;
  LM_TOS_B.BusCreator_n.ObjectList_st[7] = LM_TOS_B.BusCreator1_ff;
  LM_TOS_B.BusCreator_n.ObjectList_st[8] = LM_TOS_B.BusCreator1_bm;
  LM_TOS_B.BusCreator_n.ObjectList_st[9] = LM_TOS_B.BusCreator1_il;

  /* SignalConversion: '<S76>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_osj[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S76>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_osj[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S76>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_osj[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S76>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_osj[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S76>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_osj[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S76>/Bus Creator1' */
  LM_TOS_B.BusCreator1_op.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_op.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.TTC_f;
  LM_TOS_B.BusCreator1_op.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.ID_un8;
  LM_TOS_B.BusCreator1_op.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_op.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_osj[i];
  }

  LM_TOS_B.BusCreator1_op.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_op.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_op.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.overlap_f;
  LM_TOS_B.BusCreator1_op.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S76>/Bus Creator1' */

  /* SignalConversion: '<S77>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_gg[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S77>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_gg[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S77>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_gg[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S77>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_gg[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S77>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_gg[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S77>/Bus Creator1' */
  LM_TOS_B.BusCreator1_n.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_n.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.TTC_f;
  LM_TOS_B.BusCreator1_n.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.ID_un8;
  LM_TOS_B.BusCreator1_n.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_n.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_gg[i];
  }

  LM_TOS_B.BusCreator1_n.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_n.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_n.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.overlap_f;
  LM_TOS_B.BusCreator1_n.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S77>/Bus Creator1' */

  /* SignalConversion: '<S84>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_me[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S84>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_me[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S84>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_me[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S84>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_me[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S84>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_me[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S84>/Bus Creator1' */
  LM_TOS_B.BusCreator1_g.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_g.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.TTC_f;
  LM_TOS_B.BusCreator1_g.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.ID_un8;
  LM_TOS_B.BusCreator1_g.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_g.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_me[i];
  }

  LM_TOS_B.BusCreator1_g.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_g.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_g.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.overlap_f;
  LM_TOS_B.BusCreator1_g.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S84>/Bus Creator1' */

  /* SignalConversion: '<S85>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_fm[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S85>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_fm[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S85>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_fm[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S85>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_fm[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S85>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_fm[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S85>/Bus Creator1' */
  LM_TOS_B.BusCreator1_pf.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_pf.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.TTC_f;
  LM_TOS_B.BusCreator1_pf.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.ID_un8;
  LM_TOS_B.BusCreator1_pf.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_pf.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_fm[i];
  }

  LM_TOS_B.BusCreator1_pf.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_pf.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_pf.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.overlap_f;
  LM_TOS_B.BusCreator1_pf.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S85>/Bus Creator1' */

  /* SignalConversion: '<S86>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_pc[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S86>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_pc[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S86>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_pc[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S86>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_pc[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S86>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_pc[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S86>/Bus Creator1' */
  LM_TOS_B.BusCreator1_fl.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_fl.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.TTC_f;
  LM_TOS_B.BusCreator1_fl.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.ID_un8;
  LM_TOS_B.BusCreator1_fl.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_fl.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_pc[i];
  }

  LM_TOS_B.BusCreator1_fl.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_fl.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_fl.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.overlap_f;
  LM_TOS_B.BusCreator1_fl.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S86>/Bus Creator1' */

  /* SignalConversion: '<S87>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_nn[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S87>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_nn[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S87>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_nn[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S87>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_nn[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S87>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_nn[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S87>/Bus Creator1' */
  LM_TOS_B.BusCreator1_aw.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_aw.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.TTC_f;
  LM_TOS_B.BusCreator1_aw.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.ID_un8;
  LM_TOS_B.BusCreator1_aw.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_aw.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_nn[i];
  }

  LM_TOS_B.BusCreator1_aw.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_aw.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_aw.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.overlap_f;
  LM_TOS_B.BusCreator1_aw.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S87>/Bus Creator1' */

  /* SignalConversion: '<S88>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_pl[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S88>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_pl[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S88>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_pl[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S88>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_pl[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S88>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_pl[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S88>/Bus Creator1' */
  LM_TOS_B.BusCreator1_c5.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_c5.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.TTC_f;
  LM_TOS_B.BusCreator1_c5.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.ID_un8;
  LM_TOS_B.BusCreator1_c5.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_c5.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_pl[i];
  }

  LM_TOS_B.BusCreator1_c5.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_c5.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_c5.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.overlap_f;
  LM_TOS_B.BusCreator1_c5.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S88>/Bus Creator1' */

  /* SignalConversion: '<S89>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_b[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S89>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_b[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S89>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_b[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S89>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_b[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S89>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_b[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S89>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ef.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_ef.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.TTC_f;
  LM_TOS_B.BusCreator1_ef.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.ID_un8;
  LM_TOS_B.BusCreator1_ef.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_ef.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_b[i];
  }

  LM_TOS_B.BusCreator1_ef.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_ef.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_ef.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.overlap_f;
  LM_TOS_B.BusCreator1_ef.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S89>/Bus Creator1' */

  /* SignalConversion: '<S90>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_o3[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S90>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_o3[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S90>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_o3[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S90>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_o3[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S90>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_o3[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S90>/Bus Creator1' */
  LM_TOS_B.BusCreator1_oc.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_oc.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.TTC_f;
  LM_TOS_B.BusCreator1_oc.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.ID_un8;
  LM_TOS_B.BusCreator1_oc.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_oc.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_o3[i];
  }

  LM_TOS_B.BusCreator1_oc.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_oc.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_oc.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.overlap_f;
  LM_TOS_B.BusCreator1_oc.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S90>/Bus Creator1' */

  /* SignalConversion: '<S91>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_k[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S91>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_k[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S91>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_k[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S91>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_k[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S91>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_k[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S91>/Bus Creator1' */
  LM_TOS_B.BusCreator1_cb.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_cb.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.TTC_f;
  LM_TOS_B.BusCreator1_cb.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.ID_un8;
  LM_TOS_B.BusCreator1_cb.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_cb.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_k[i];
  }

  LM_TOS_B.BusCreator1_cb.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_cb.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_cb.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.overlap_f;
  LM_TOS_B.BusCreator1_cb.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S91>/Bus Creator1' */

  /* Concatenate: '<S13>/Vector Concatenate' */
  LM_TOS_B.BusCreator_m.ObjectList_st[0] = LM_TOS_B.BusCreator1_op;
  LM_TOS_B.BusCreator_m.ObjectList_st[1] = LM_TOS_B.BusCreator1_n;
  LM_TOS_B.BusCreator_m.ObjectList_st[2] = LM_TOS_B.BusCreator1_g;
  LM_TOS_B.BusCreator_m.ObjectList_st[3] = LM_TOS_B.BusCreator1_pf;
  LM_TOS_B.BusCreator_m.ObjectList_st[4] = LM_TOS_B.BusCreator1_fl;
  LM_TOS_B.BusCreator_m.ObjectList_st[5] = LM_TOS_B.BusCreator1_aw;
  LM_TOS_B.BusCreator_m.ObjectList_st[6] = LM_TOS_B.BusCreator1_c5;
  LM_TOS_B.BusCreator_m.ObjectList_st[7] = LM_TOS_B.BusCreator1_ef;
  LM_TOS_B.BusCreator_m.ObjectList_st[8] = LM_TOS_B.BusCreator1_oc;
  LM_TOS_B.BusCreator_m.ObjectList_st[9] = LM_TOS_B.BusCreator1_cb;

  /* SignalConversion: '<S92>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_bi[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S92>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_bi[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S92>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_bi[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S92>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_bi[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S92>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_bi[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S92>/Bus Creator1' */
  LM_TOS_B.BusCreator1_de.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_de.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.TTC_f;
  LM_TOS_B.BusCreator1_de.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.ID_un8;
  LM_TOS_B.BusCreator1_de.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_de.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_bi[i];
  }

  LM_TOS_B.BusCreator1_de.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_de.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_de.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.overlap_f;
  LM_TOS_B.BusCreator1_de.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S92>/Bus Creator1' */

  /* SignalConversion: '<S93>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_ht[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S93>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_ht[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S93>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_ht[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S93>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_ht[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S93>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_ht[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S93>/Bus Creator1' */
  LM_TOS_B.BusCreator1_bv.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_bv.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.TTC_f;
  LM_TOS_B.BusCreator1_bv.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.ID_un8;
  LM_TOS_B.BusCreator1_bv.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_bv.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_ht[i];
  }

  LM_TOS_B.BusCreator1_bv.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_bv.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_bv.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.overlap_f;
  LM_TOS_B.BusCreator1_bv.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S93>/Bus Creator1' */

  /* SignalConversion: '<S100>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_aw[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S100>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_aw[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S100>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_aw[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S100>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_aw[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S100>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_aw[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S100>/Bus Creator1' */
  LM_TOS_B.BusCreator1_m.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_m.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.TTC_f;
  LM_TOS_B.BusCreator1_m.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.ID_un8;
  LM_TOS_B.BusCreator1_m.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_m.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_aw[i];
  }

  LM_TOS_B.BusCreator1_m.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_m.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_m.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.overlap_f;
  LM_TOS_B.BusCreator1_m.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S100>/Bus Creator1' */

  /* SignalConversion: '<S101>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_h1[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S101>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_h1[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S101>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_h1[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S101>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_h1[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S101>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_h1[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S101>/Bus Creator1' */
  LM_TOS_B.BusCreator1_g3.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_g3.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.TTC_f;
  LM_TOS_B.BusCreator1_g3.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.ID_un8;
  LM_TOS_B.BusCreator1_g3.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_g3.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_h1[i];
  }

  LM_TOS_B.BusCreator1_g3.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_g3.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_g3.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.overlap_f;
  LM_TOS_B.BusCreator1_g3.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S101>/Bus Creator1' */

  /* SignalConversion: '<S102>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_lo[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S102>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_lo[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S102>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_lo[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S102>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_lo[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S102>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_lo[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S102>/Bus Creator1' */
  LM_TOS_B.BusCreator1_aa.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_aa.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.TTC_f;
  LM_TOS_B.BusCreator1_aa.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.ID_un8;
  LM_TOS_B.BusCreator1_aa.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_aa.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_lo[i];
  }

  LM_TOS_B.BusCreator1_aa.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_aa.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_aa.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.overlap_f;
  LM_TOS_B.BusCreator1_aa.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S102>/Bus Creator1' */

  /* SignalConversion: '<S103>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_lc[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S103>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_lc[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S103>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_lc[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S103>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_lc[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S103>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_lc[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S103>/Bus Creator1' */
  LM_TOS_B.BusCreator1_nh.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_nh.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.TTC_f;
  LM_TOS_B.BusCreator1_nh.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.ID_un8;
  LM_TOS_B.BusCreator1_nh.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_nh.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_lc[i];
  }

  LM_TOS_B.BusCreator1_nh.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_nh.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_nh.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.overlap_f;
  LM_TOS_B.BusCreator1_nh.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S103>/Bus Creator1' */

  /* SignalConversion: '<S104>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_f4[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S104>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_f4[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S104>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_f4[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S104>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_f4[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S104>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_f4[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S104>/Bus Creator1' */
  LM_TOS_B.BusCreator1_en.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_en.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.TTC_f;
  LM_TOS_B.BusCreator1_en.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.ID_un8;
  LM_TOS_B.BusCreator1_en.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_en.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_f4[i];
  }

  LM_TOS_B.BusCreator1_en.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_en.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_en.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.overlap_f;
  LM_TOS_B.BusCreator1_en.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S104>/Bus Creator1' */

  /* SignalConversion: '<S105>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_gc[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S105>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_gc[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S105>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_gc[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S105>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_gc[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S105>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_gc[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S105>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ec.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_ec.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.TTC_f;
  LM_TOS_B.BusCreator1_ec.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.ID_un8;
  LM_TOS_B.BusCreator1_ec.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_ec.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_gc[i];
  }

  LM_TOS_B.BusCreator1_ec.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_ec.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_ec.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.overlap_f;
  LM_TOS_B.BusCreator1_ec.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S105>/Bus Creator1' */

  /* SignalConversion: '<S106>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_hm[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S106>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_hm[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S106>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_hm[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S106>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_hm[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S106>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_hm[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S106>/Bus Creator1' */
  LM_TOS_B.BusCreator1_in.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_in.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.TTC_f;
  LM_TOS_B.BusCreator1_in.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.ID_un8;
  LM_TOS_B.BusCreator1_in.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_in.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_hm[i];
  }

  LM_TOS_B.BusCreator1_in.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_in.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_in.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.overlap_f;
  LM_TOS_B.BusCreator1_in.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S106>/Bus Creator1' */

  /* SignalConversion: '<S107>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_br[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S107>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_br[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S107>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_br[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S107>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_br[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S107>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_br[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S107>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ml.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_ml.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.TTC_f;
  LM_TOS_B.BusCreator1_ml.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.ID_un8;
  LM_TOS_B.BusCreator1_ml.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_ml.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_br[i];
  }

  LM_TOS_B.BusCreator1_ml.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_ml.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_ml.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.overlap_f;
  LM_TOS_B.BusCreator1_ml.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S107>/Bus Creator1' */

  /* Concatenate: '<S14>/Vector Concatenate' */
  LM_TOS_B.BusCreator_dn.ObjectList_st[0] = LM_TOS_B.BusCreator1_de;
  LM_TOS_B.BusCreator_dn.ObjectList_st[1] = LM_TOS_B.BusCreator1_bv;
  LM_TOS_B.BusCreator_dn.ObjectList_st[2] = LM_TOS_B.BusCreator1_m;
  LM_TOS_B.BusCreator_dn.ObjectList_st[3] = LM_TOS_B.BusCreator1_g3;
  LM_TOS_B.BusCreator_dn.ObjectList_st[4] = LM_TOS_B.BusCreator1_aa;
  LM_TOS_B.BusCreator_dn.ObjectList_st[5] = LM_TOS_B.BusCreator1_nh;
  LM_TOS_B.BusCreator_dn.ObjectList_st[6] = LM_TOS_B.BusCreator1_en;
  LM_TOS_B.BusCreator_dn.ObjectList_st[7] = LM_TOS_B.BusCreator1_ec;
  LM_TOS_B.BusCreator_dn.ObjectList_st[8] = LM_TOS_B.BusCreator1_in;
  LM_TOS_B.BusCreator_dn.ObjectList_st[9] = LM_TOS_B.BusCreator1_ml;

  /* SignalConversion: '<S30>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_mg[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S30>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_mg[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S30>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_mg[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S30>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_mg[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S30>/Bus Creator1' */
  LM_TOS_B.BusCreator1_pv.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_mg[0];
  LM_TOS_B.BusCreator1_pv.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_mg[1];
  LM_TOS_B.BusCreator1_pv.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_mg[2];
  LM_TOS_B.BusCreator1_pv.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_mg[3];
  LM_TOS_B.BusCreator1_pv.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_pv.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_pv.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_pv.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.available_b;
  LM_TOS_B.BusCreator1_pv.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_pv.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.quality_f;

  /* SignalConversion: '<S31>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_on[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S31>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_on[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S31>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_on[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S31>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_on[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S31>/Bus Creator1' */
  LM_TOS_B.BusCreator1_bi.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_on[0];
  LM_TOS_B.BusCreator1_bi.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_on[1];
  LM_TOS_B.BusCreator1_bi.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_on[2];
  LM_TOS_B.BusCreator1_bi.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_on[3];
  LM_TOS_B.BusCreator1_bi.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_bi.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_bi.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_bi.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.available_b;
  LM_TOS_B.BusCreator1_bi.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_bi.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.quality_f;

  /* SignalConversion: '<S32>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_lq[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S32>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_lq[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S32>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_lq[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S32>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_lq[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S32>/Bus Creator1' */
  LM_TOS_B.BusCreator1_iz.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_lq[0];
  LM_TOS_B.BusCreator1_iz.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_lq[1];
  LM_TOS_B.BusCreator1_iz.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_lq[2];
  LM_TOS_B.BusCreator1_iz.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_lq[3];
  LM_TOS_B.BusCreator1_iz.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_iz.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_iz.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_iz.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.available_b;
  LM_TOS_B.BusCreator1_iz.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_iz.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.quality_f;

  /* SignalConversion: '<S33>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_d3[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S33>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_d3[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S33>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_d3[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S33>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_d3[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S33>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ctt.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_d3[0];
  LM_TOS_B.BusCreator1_ctt.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_d3[1];
  LM_TOS_B.BusCreator1_ctt.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_d3[2];
  LM_TOS_B.BusCreator1_ctt.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_d3[3];
  LM_TOS_B.BusCreator1_ctt.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_ctt.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_ctt.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_ctt.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.available_b;
  LM_TOS_B.BusCreator1_ctt.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_ctt.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.quality_f;

  /* SignalConversion: '<S34>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_pg[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S34>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_pg[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S34>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_pg[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S34>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_pg[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S34>/Bus Creator1' */
  LM_TOS_B.BusCreator1_fy.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_pg[0];
  LM_TOS_B.BusCreator1_fy.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_pg[1];
  LM_TOS_B.BusCreator1_fy.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_pg[2];
  LM_TOS_B.BusCreator1_fy.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_pg[3];
  LM_TOS_B.BusCreator1_fy.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_fy.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_fy.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_fy.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.available_b;
  LM_TOS_B.BusCreator1_fy.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_fy.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.quality_f;

  /* SignalConversion: '<S35>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_io[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S35>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_io[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S35>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_io[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S35>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_io[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S35>/Bus Creator1' */
  LM_TOS_B.BusCreator1_bz.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_io[0];
  LM_TOS_B.BusCreator1_bz.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_io[1];
  LM_TOS_B.BusCreator1_bz.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_io[2];
  LM_TOS_B.BusCreator1_bz.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_io[3];
  LM_TOS_B.BusCreator1_bz.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_bz.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_bz.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_bz.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.available_b;
  LM_TOS_B.BusCreator1_bz.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_bz.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.quality_f;

  /* Concatenate: '<S10>/Vector Concatenate1' */
  LM_TOS_B.BusCreator.SRGMENT[0] = LM_TOS_B.BusCreator1_pv;
  LM_TOS_B.BusCreator.SRGMENT[1] = LM_TOS_B.BusCreator1_bi;
  LM_TOS_B.BusCreator.SRGMENT[2] = LM_TOS_B.BusCreator1_iz;
  LM_TOS_B.BusCreator.SRGMENT[3] = LM_TOS_B.BusCreator1_ctt;
  LM_TOS_B.BusCreator.SRGMENT[4] = LM_TOS_B.BusCreator1_fy;
  LM_TOS_B.BusCreator.SRGMENT[5] = LM_TOS_B.BusCreator1_bz;

  /* SignalConversion: '<S46>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_kq[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S46>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_kq[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S46>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_kq[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S46>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_kq[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S46>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ib.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_kq[0];
  LM_TOS_B.BusCreator1_ib.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_kq[1];
  LM_TOS_B.BusCreator1_ib.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_kq[2];
  LM_TOS_B.BusCreator1_ib.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_kq[3];
  LM_TOS_B.BusCreator1_ib.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_ib.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_ib.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_ib.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.available_b;
  LM_TOS_B.BusCreator1_ib.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_ib.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.quality_f;

  /* SignalConversion: '<S47>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_gd[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S47>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_gd[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S47>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_gd[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S47>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_gd[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S47>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ene.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_gd[0];
  LM_TOS_B.BusCreator1_ene.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_gd[1];
  LM_TOS_B.BusCreator1_ene.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_gd[2];
  LM_TOS_B.BusCreator1_ene.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_gd[3];
  LM_TOS_B.BusCreator1_ene.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_ene.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_ene.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_ene.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.available_b;
  LM_TOS_B.BusCreator1_ene.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_ene.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.quality_f;

  /* SignalConversion: '<S48>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_av[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S48>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_av[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S48>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_av[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S48>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_av[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S48>/Bus Creator1' */
  LM_TOS_B.BusCreator1_d1.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_av[0];
  LM_TOS_B.BusCreator1_d1.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_av[1];
  LM_TOS_B.BusCreator1_d1.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_av[2];
  LM_TOS_B.BusCreator1_d1.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_av[3];
  LM_TOS_B.BusCreator1_d1.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_d1.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_d1.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_d1.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.available_b;
  LM_TOS_B.BusCreator1_d1.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_d1.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.quality_f;

  /* SignalConversion: '<S49>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_js[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S49>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_js[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S49>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_js[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S49>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_js[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S49>/Bus Creator1' */
  LM_TOS_B.BusCreator1_jic.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_js[0];
  LM_TOS_B.BusCreator1_jic.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_js[1];
  LM_TOS_B.BusCreator1_jic.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_js[2];
  LM_TOS_B.BusCreator1_jic.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_js[3];
  LM_TOS_B.BusCreator1_jic.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_jic.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_jic.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_jic.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.available_b;
  LM_TOS_B.BusCreator1_jic.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_jic.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.quality_f;

  /* SignalConversion: '<S50>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_b5[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S50>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_b5[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S50>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_b5[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S50>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_b5[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S50>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ne.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_b5[0];
  LM_TOS_B.BusCreator1_ne.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_b5[1];
  LM_TOS_B.BusCreator1_ne.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_b5[2];
  LM_TOS_B.BusCreator1_ne.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_b5[3];
  LM_TOS_B.BusCreator1_ne.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_ne.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_ne.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_ne.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.available_b;
  LM_TOS_B.BusCreator1_ne.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_ne.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.quality_f;

  /* SignalConversion: '<S51>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_es[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S51>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_es[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S51>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_es[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S51>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_es[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S51>/Bus Creator1' */
  LM_TOS_B.BusCreator1_fr.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_es[0];
  LM_TOS_B.BusCreator1_fr.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_es[1];
  LM_TOS_B.BusCreator1_fr.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_es[2];
  LM_TOS_B.BusCreator1_fr.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_es[3];
  LM_TOS_B.BusCreator1_fr.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_fr.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_fr.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_fr.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.available_b;
  LM_TOS_B.BusCreator1_fr.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_fr.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.quality_f;

  /* Concatenate: '<S11>/Vector Concatenate1' */
  LM_TOS_B.BusCreator_d.SRGMENT[0] = LM_TOS_B.BusCreator1_ib;
  LM_TOS_B.BusCreator_d.SRGMENT[1] = LM_TOS_B.BusCreator1_ene;
  LM_TOS_B.BusCreator_d.SRGMENT[2] = LM_TOS_B.BusCreator1_d1;
  LM_TOS_B.BusCreator_d.SRGMENT[3] = LM_TOS_B.BusCreator1_jic;
  LM_TOS_B.BusCreator_d.SRGMENT[4] = LM_TOS_B.BusCreator1_ne;
  LM_TOS_B.BusCreator_d.SRGMENT[5] = LM_TOS_B.BusCreator1_fr;

  /* SignalConversion: '<S62>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_fk[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S62>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_fk[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S62>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_fk[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S62>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_fk[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S62>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ae.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_fk[0];
  LM_TOS_B.BusCreator1_ae.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_fk[1];
  LM_TOS_B.BusCreator1_ae.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_fk[2];
  LM_TOS_B.BusCreator1_ae.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_fk[3];
  LM_TOS_B.BusCreator1_ae.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_ae.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_ae.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_ae.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.available_b;
  LM_TOS_B.BusCreator1_ae.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_ae.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.quality_f;

  /* SignalConversion: '<S63>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_ps[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S63>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_ps[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S63>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_ps[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S63>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_ps[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S63>/Bus Creator1' */
  LM_TOS_B.BusCreator1_hw.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_ps[0];
  LM_TOS_B.BusCreator1_hw.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_ps[1];
  LM_TOS_B.BusCreator1_hw.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_ps[2];
  LM_TOS_B.BusCreator1_hw.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_ps[3];
  LM_TOS_B.BusCreator1_hw.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_hw.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_hw.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_hw.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.available_b;
  LM_TOS_B.BusCreator1_hw.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_hw.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.quality_f;

  /* SignalConversion: '<S64>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_nky[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S64>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_nky[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S64>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_nky[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S64>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_nky[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S64>/Bus Creator1' */
  LM_TOS_B.BusCreator1_k0.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_nky[0];
  LM_TOS_B.BusCreator1_k0.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_nky[1];
  LM_TOS_B.BusCreator1_k0.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_nky[2];
  LM_TOS_B.BusCreator1_k0.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_nky[3];
  LM_TOS_B.BusCreator1_k0.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_k0.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_k0.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_k0.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.available_b;
  LM_TOS_B.BusCreator1_k0.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_k0.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.quality_f;

  /* SignalConversion: '<S65>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_dc[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S65>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_dc[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S65>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_dc[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S65>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_dc[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S65>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ei.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_dc[0];
  LM_TOS_B.BusCreator1_ei.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_dc[1];
  LM_TOS_B.BusCreator1_ei.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_dc[2];
  LM_TOS_B.BusCreator1_ei.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_dc[3];
  LM_TOS_B.BusCreator1_ei.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_ei.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_ei.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_ei.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.available_b;
  LM_TOS_B.BusCreator1_ei.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_ei.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.quality_f;

  /* SignalConversion: '<S66>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_mq[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S66>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_mq[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S66>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_mq[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S66>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_mq[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S66>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ni.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_mq[0];
  LM_TOS_B.BusCreator1_ni.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_mq[1];
  LM_TOS_B.BusCreator1_ni.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_mq[2];
  LM_TOS_B.BusCreator1_ni.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_mq[3];
  LM_TOS_B.BusCreator1_ni.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_ni.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_ni.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_ni.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.available_b;
  LM_TOS_B.BusCreator1_ni.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_ni.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.quality_f;

  /* SignalConversion: '<S67>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_ax[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S67>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_ax[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S67>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_ax[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S67>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_ax[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S67>/Bus Creator1' */
  LM_TOS_B.BusCreator1_hx.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_ax[0];
  LM_TOS_B.BusCreator1_hx.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_ax[1];
  LM_TOS_B.BusCreator1_hx.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_ax[2];
  LM_TOS_B.BusCreator1_hx.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_ax[3];
  LM_TOS_B.BusCreator1_hx.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_hx.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_hx.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_hx.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.available_b;
  LM_TOS_B.BusCreator1_hx.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_hx.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.quality_f;

  /* Concatenate: '<S12>/Vector Concatenate1' */
  LM_TOS_B.BusCreator_n.SRGMENT[0] = LM_TOS_B.BusCreator1_ae;
  LM_TOS_B.BusCreator_n.SRGMENT[1] = LM_TOS_B.BusCreator1_hw;
  LM_TOS_B.BusCreator_n.SRGMENT[2] = LM_TOS_B.BusCreator1_k0;
  LM_TOS_B.BusCreator_n.SRGMENT[3] = LM_TOS_B.BusCreator1_ei;
  LM_TOS_B.BusCreator_n.SRGMENT[4] = LM_TOS_B.BusCreator1_ni;
  LM_TOS_B.BusCreator_n.SRGMENT[5] = LM_TOS_B.BusCreator1_hx;

  /* SignalConversion: '<S78>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_la[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S78>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_la[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S78>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_la[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S78>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_la[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S78>/Bus Creator1' */
  LM_TOS_B.BusCreator1_lud.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_la[0];
  LM_TOS_B.BusCreator1_lud.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_la[1];
  LM_TOS_B.BusCreator1_lud.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_la[2];
  LM_TOS_B.BusCreator1_lud.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_la[3];
  LM_TOS_B.BusCreator1_lud.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_lud.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_lud.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_lud.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.available_b;
  LM_TOS_B.BusCreator1_lud.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_lud.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.quality_f;

  /* SignalConversion: '<S79>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_kl[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S79>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_kl[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S79>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_kl[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S79>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_kl[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S79>/Bus Creator1' */
  LM_TOS_B.BusCreator1_dq.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_kl[0];
  LM_TOS_B.BusCreator1_dq.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_kl[1];
  LM_TOS_B.BusCreator1_dq.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_kl[2];
  LM_TOS_B.BusCreator1_dq.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_kl[3];
  LM_TOS_B.BusCreator1_dq.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_dq.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_dq.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_dq.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.available_b;
  LM_TOS_B.BusCreator1_dq.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_dq.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.quality_f;

  /* SignalConversion: '<S80>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_d0[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S80>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_d0[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S80>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_d0[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S80>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_d0[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S80>/Bus Creator1' */
  LM_TOS_B.BusCreator1_c0.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_d0[0];
  LM_TOS_B.BusCreator1_c0.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_d0[1];
  LM_TOS_B.BusCreator1_c0.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_d0[2];
  LM_TOS_B.BusCreator1_c0.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_d0[3];
  LM_TOS_B.BusCreator1_c0.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_c0.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_c0.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_c0.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.available_b;
  LM_TOS_B.BusCreator1_c0.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_c0.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.quality_f;

  /* SignalConversion: '<S81>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_gn[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S81>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_gn[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S81>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_gn[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S81>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_gn[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S81>/Bus Creator1' */
  LM_TOS_B.BusCreator1_pvz.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_gn[0];
  LM_TOS_B.BusCreator1_pvz.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_gn[1];
  LM_TOS_B.BusCreator1_pvz.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_gn[2];
  LM_TOS_B.BusCreator1_pvz.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_gn[3];
  LM_TOS_B.BusCreator1_pvz.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_pvz.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_pvz.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_pvz.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.available_b;
  LM_TOS_B.BusCreator1_pvz.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_pvz.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.quality_f;

  /* SignalConversion: '<S82>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_fa[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S82>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_fa[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S82>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_fa[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S82>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_fa[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S82>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ls.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_fa[0];
  LM_TOS_B.BusCreator1_ls.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_fa[1];
  LM_TOS_B.BusCreator1_ls.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_fa[2];
  LM_TOS_B.BusCreator1_ls.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_fa[3];
  LM_TOS_B.BusCreator1_ls.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_ls.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_ls.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_ls.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.available_b;
  LM_TOS_B.BusCreator1_ls.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_ls.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.quality_f;

  /* SignalConversion: '<S83>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_kl4[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S83>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_kl4[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S83>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_kl4[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S83>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_kl4[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S83>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ly.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_kl4[0];
  LM_TOS_B.BusCreator1_ly.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_kl4[1];
  LM_TOS_B.BusCreator1_ly.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_kl4[2];
  LM_TOS_B.BusCreator1_ly.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_kl4[3];
  LM_TOS_B.BusCreator1_ly.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_ly.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_ly.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_ly.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.available_b;
  LM_TOS_B.BusCreator1_ly.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_ly.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.quality_f;

  /* Concatenate: '<S13>/Vector Concatenate1' */
  LM_TOS_B.BusCreator_m.SRGMENT[0] = LM_TOS_B.BusCreator1_lud;
  LM_TOS_B.BusCreator_m.SRGMENT[1] = LM_TOS_B.BusCreator1_dq;
  LM_TOS_B.BusCreator_m.SRGMENT[2] = LM_TOS_B.BusCreator1_c0;
  LM_TOS_B.BusCreator_m.SRGMENT[3] = LM_TOS_B.BusCreator1_pvz;
  LM_TOS_B.BusCreator_m.SRGMENT[4] = LM_TOS_B.BusCreator1_ls;
  LM_TOS_B.BusCreator_m.SRGMENT[5] = LM_TOS_B.BusCreator1_ly;

  /* SignalConversion: '<S94>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_m1[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S94>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_m1[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S94>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_m1[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S94>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_m1[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S94>/Bus Creator1' */
  LM_TOS_B.BusCreator1_fz.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_m1[0];
  LM_TOS_B.BusCreator1_fz.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_m1[1];
  LM_TOS_B.BusCreator1_fz.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_m1[2];
  LM_TOS_B.BusCreator1_fz.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_m1[3];
  LM_TOS_B.BusCreator1_fz.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_fz.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_fz.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_fz.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.available_b;
  LM_TOS_B.BusCreator1_fz.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_fz.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.quality_f;

  /* SignalConversion: '<S95>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_fs[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S95>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_fs[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S95>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_fs[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S95>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_fs[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S95>/Bus Creator1' */
  LM_TOS_B.BusCreator1_dg.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_fs[0];
  LM_TOS_B.BusCreator1_dg.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_fs[1];
  LM_TOS_B.BusCreator1_dg.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_fs[2];
  LM_TOS_B.BusCreator1_dg.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_fs[3];
  LM_TOS_B.BusCreator1_dg.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_dg.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_dg.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_dg.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.available_b;
  LM_TOS_B.BusCreator1_dg.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_dg.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.quality_f;

  /* SignalConversion: '<S96>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_i5[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S96>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_i5[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S96>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_i5[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S96>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_i5[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S96>/Bus Creator1' */
  LM_TOS_B.BusCreator1_gb.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_i5[0];
  LM_TOS_B.BusCreator1_gb.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_i5[1];
  LM_TOS_B.BusCreator1_gb.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_i5[2];
  LM_TOS_B.BusCreator1_gb.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_i5[3];
  LM_TOS_B.BusCreator1_gb.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_gb.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_gb.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_gb.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.available_b;
  LM_TOS_B.BusCreator1_gb.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_gb.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.quality_f;

  /* SignalConversion: '<S97>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_mh[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S97>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_mh[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S97>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_mh[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S97>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_mh[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S97>/Bus Creator1' */
  LM_TOS_B.BusCreator1_kz.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_mh[0];
  LM_TOS_B.BusCreator1_kz.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_mh[1];
  LM_TOS_B.BusCreator1_kz.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_mh[2];
  LM_TOS_B.BusCreator1_kz.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_mh[3];
  LM_TOS_B.BusCreator1_kz.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_kz.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_kz.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_kz.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.available_b;
  LM_TOS_B.BusCreator1_kz.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_kz.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.quality_f;

  /* SignalConversion: '<S98>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_or[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S98>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_or[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S98>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_or[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S98>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_or[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S98>/Bus Creator1' */
  LM_TOS_B.BusCreator1_p1.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_or[0];
  LM_TOS_B.BusCreator1_p1.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_or[1];
  LM_TOS_B.BusCreator1_p1.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_or[2];
  LM_TOS_B.BusCreator1_p1.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_or[3];
  LM_TOS_B.BusCreator1_p1.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_p1.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_p1.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_p1.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.available_b;
  LM_TOS_B.BusCreator1_p1.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_p1.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.quality_f;

  /* SignalConversion: '<S99>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_kp[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S99>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_kp[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S99>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_kp[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S99>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_kp[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S99>/Bus Creator1' */
  LM_TOS_B.BusCreator1_nb.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_kp[0];
  LM_TOS_B.BusCreator1_nb.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_kp[1];
  LM_TOS_B.BusCreator1_nb.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_kp[2];
  LM_TOS_B.BusCreator1_nb.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_kp[3];
  LM_TOS_B.BusCreator1_nb.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_nb.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_nb.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_nb.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.available_b;
  LM_TOS_B.BusCreator1_nb.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_nb.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.quality_f;

  /* Concatenate: '<S14>/Vector Concatenate1' */
  LM_TOS_B.BusCreator_dn.SRGMENT[0] = LM_TOS_B.BusCreator1_fz;
  LM_TOS_B.BusCreator_dn.SRGMENT[1] = LM_TOS_B.BusCreator1_dg;
  LM_TOS_B.BusCreator_dn.SRGMENT[2] = LM_TOS_B.BusCreator1_gb;
  LM_TOS_B.BusCreator_dn.SRGMENT[3] = LM_TOS_B.BusCreator1_kz;
  LM_TOS_B.BusCreator_dn.SRGMENT[4] = LM_TOS_B.BusCreator1_p1;
  LM_TOS_B.BusCreator_dn.SRGMENT[5] = LM_TOS_B.BusCreator1_nb;

  /* BusCreator: '<S10>/Bus Creator' */
  LM_TOS_B.BusCreator.objectNum_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_0.objectNum_un8;
  LM_TOS_B.BusCreator.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_0.available_b;
  LM_TOS_B.BusCreator.lane_dwidth_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_0.lane_dwidth_f;
  LM_TOS_B.BusCreator.front_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_0.front_lane_length_f;
  LM_TOS_B.BusCreator.rear_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_0.rear_lane_length_f;

  /* BusCreator: '<S11>/Bus Creator' */
  LM_TOS_B.BusCreator_d.objectNum_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_1.objectNum_un8;
  LM_TOS_B.BusCreator_d.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_1.available_b;
  LM_TOS_B.BusCreator_d.lane_dwidth_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_1.lane_dwidth_f;
  LM_TOS_B.BusCreator_d.front_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_1.front_lane_length_f;
  LM_TOS_B.BusCreator_d.rear_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_1.rear_lane_length_f;

  /* BusCreator: '<S12>/Bus Creator' */
  LM_TOS_B.BusCreator_n.objectNum_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_2.objectNum_un8;
  LM_TOS_B.BusCreator_n.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_2.available_b;
  LM_TOS_B.BusCreator_n.lane_dwidth_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_2.lane_dwidth_f;
  LM_TOS_B.BusCreator_n.front_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_2.front_lane_length_f;
  LM_TOS_B.BusCreator_n.rear_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_2.rear_lane_length_f;

  /* BusCreator: '<S13>/Bus Creator' */
  LM_TOS_B.BusCreator_m.objectNum_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_3.objectNum_un8;
  LM_TOS_B.BusCreator_m.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_3.available_b;
  LM_TOS_B.BusCreator_m.lane_dwidth_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_3.lane_dwidth_f;
  LM_TOS_B.BusCreator_m.front_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_3.front_lane_length_f;
  LM_TOS_B.BusCreator_m.rear_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_3.rear_lane_length_f;

  /* BusCreator: '<S14>/Bus Creator' */
  LM_TOS_B.BusCreator_dn.objectNum_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_4.objectNum_un8;
  LM_TOS_B.BusCreator_dn.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_4.available_b;
  LM_TOS_B.BusCreator_dn.lane_dwidth_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_4.lane_dwidth_f;
  LM_TOS_B.BusCreator_dn.front_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_4.front_lane_length_f;
  LM_TOS_B.BusCreator_dn.rear_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_4.rear_lane_length_f;

  /* Concatenate: '<S7>/Vector Concatenate' */
  LM_TOS_B.VectorConcatenate[0] = LM_TOS_B.BusCreator;
  LM_TOS_B.VectorConcatenate[1] = LM_TOS_B.BusCreator_d;
  LM_TOS_B.VectorConcatenate[2] = LM_TOS_B.BusCreator_n;
  LM_TOS_B.VectorConcatenate[3] = LM_TOS_B.BusCreator_m;
  LM_TOS_B.VectorConcatenate[4] = LM_TOS_B.BusCreator_dn;

  /* Selector: '<S111>/Selector' incorporates:
   *  Constant: '<S111>/Constant'
   */
  LM_TOS_B.Selector_a = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_m];

  /* DataTypeConversion: '<S111>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion = LM_TOS_B.Selector_a.obj_attr;

  /* DataTypeConversion: '<S111>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1 = LM_TOS_B.Selector_a.dy;

  /* DataTypeConversion: '<S111>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2 = LM_TOS_B.Selector_a.obj_type;

  /* DataTypeConversion: '<S111>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3 = LM_TOS_B.Selector_a.dx;

  /* DataTypeConversion: '<S111>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4 = LM_TOS_B.Selector_a.objject_ID;

  /* S-Function (rti_commonblock): '<S143>/S-Function1' incorporates:
   *  Constant: '<S111>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_00" Id:768 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300]->processed;
      LM_TOS_B.SFunction1_o2 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300]->timestamp;
      LM_TOS_B.SFunction1_o3 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300]->deltatime;
      LM_TOS_B.SFunction1_o4 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_d - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1 - ( -200 ) )
        / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2 ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3 - ( -200 ) )
        / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4 ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S112>/Selector' incorporates:
   *  Constant: '<S112>/Constant'
   */
  LM_TOS_B.Selector_b = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_c];

  /* DataTypeConversion: '<S112>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_g = LM_TOS_B.Selector_b.obj_attr;

  /* DataTypeConversion: '<S112>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_n = LM_TOS_B.Selector_b.dy;

  /* DataTypeConversion: '<S112>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_k = LM_TOS_B.Selector_b.obj_type;

  /* DataTypeConversion: '<S112>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_i = LM_TOS_B.Selector_b.dx;

  /* DataTypeConversion: '<S112>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_a = LM_TOS_B.Selector_b.objject_ID;

  /* S-Function (rti_commonblock): '<S144>/S-Function1' incorporates:
   *  Constant: '<S112>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_01" Id:769 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_o = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301]->processed;
      LM_TOS_B.SFunction1_o2_d = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301]->timestamp;
      LM_TOS_B.SFunction1_o3_c = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301]->deltatime;
      LM_TOS_B.SFunction1_o4_n = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_o - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_g ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_n - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_k ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_i - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_a ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S113>/Selector' incorporates:
   *  Constant: '<S113>/Constant'
   */
  LM_TOS_B.Selector_i = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_j];

  /* DataTypeConversion: '<S113>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_f = LM_TOS_B.Selector_i.obj_attr;

  /* DataTypeConversion: '<S113>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_c = LM_TOS_B.Selector_i.dy;

  /* DataTypeConversion: '<S113>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_m = LM_TOS_B.Selector_i.obj_type;

  /* DataTypeConversion: '<S113>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_m = LM_TOS_B.Selector_i.dx;

  /* DataTypeConversion: '<S113>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_d = LM_TOS_B.Selector_i.objject_ID;

  /* S-Function (rti_commonblock): '<S145>/S-Function1' incorporates:
   *  Constant: '<S113>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_10" Id:778 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_l = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A]->processed;
      LM_TOS_B.SFunction1_o2_p = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A]->timestamp;
      LM_TOS_B.SFunction1_o3_k = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A]->deltatime;
      LM_TOS_B.SFunction1_o4_b = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_g - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_f ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_c - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_m ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_m - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_d ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S114>/Selector' incorporates:
   *  Constant: '<S114>/Constant'
   */
  LM_TOS_B.Selector_f = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_f];

  /* DataTypeConversion: '<S114>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_e = LM_TOS_B.Selector_f.obj_attr;

  /* DataTypeConversion: '<S114>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_k = LM_TOS_B.Selector_f.dy;

  /* DataTypeConversion: '<S114>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_a = LM_TOS_B.Selector_f.obj_type;

  /* DataTypeConversion: '<S114>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_p = LM_TOS_B.Selector_f.dx;

  /* DataTypeConversion: '<S114>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_aq = LM_TOS_B.Selector_f.objject_ID;

  /* S-Function (rti_commonblock): '<S146>/S-Function1' incorporates:
   *  Constant: '<S114>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_11" Id:779 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_k = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B]->processed;
      LM_TOS_B.SFunction1_o2_i = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B]->timestamp;
      LM_TOS_B.SFunction1_o3_d = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B]->deltatime;
      LM_TOS_B.SFunction1_o4_a = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_n - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_e ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_k - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_a ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_p - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_aq ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S115>/Selector' incorporates:
   *  Constant: '<S115>/Constant'
   */
  LM_TOS_B.Selector_p = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_mj];

  /* DataTypeConversion: '<S115>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_o = LM_TOS_B.Selector_p.obj_attr;

  /* DataTypeConversion: '<S115>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_d = LM_TOS_B.Selector_p.dy;

  /* DataTypeConversion: '<S115>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_ap = LM_TOS_B.Selector_p.obj_type;

  /* DataTypeConversion: '<S115>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_l = LM_TOS_B.Selector_p.dx;

  /* DataTypeConversion: '<S115>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_j = LM_TOS_B.Selector_p.objject_ID;

  /* S-Function (rti_commonblock): '<S147>/S-Function1' incorporates:
   *  Constant: '<S115>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_12" Id:780 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_h = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C]->processed;
      LM_TOS_B.SFunction1_o2_if = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C]->timestamp;
      LM_TOS_B.SFunction1_o3_ko = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C]->deltatime;
      LM_TOS_B.SFunction1_o4_c = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_no - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_o ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_d - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_ap ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_l - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_j ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S116>/Selector' incorporates:
   *  Constant: '<S116>/Constant'
   */
  LM_TOS_B.Selector_o = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_b];

  /* DataTypeConversion: '<S116>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_i = LM_TOS_B.Selector_o.obj_attr;

  /* DataTypeConversion: '<S116>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_i = LM_TOS_B.Selector_o.dy;

  /* DataTypeConversion: '<S116>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_b = LM_TOS_B.Selector_o.obj_type;

  /* DataTypeConversion: '<S116>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_k = LM_TOS_B.Selector_o.dx;

  /* DataTypeConversion: '<S116>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_dl = LM_TOS_B.Selector_o.objject_ID;

  /* S-Function (rti_commonblock): '<S148>/S-Function1' incorporates:
   *  Constant: '<S116>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_13" Id:781 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_c = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D]->processed;
      LM_TOS_B.SFunction1_o2_ik = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D]->timestamp;
      LM_TOS_B.SFunction1_o3_b = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D]->deltatime;
      LM_TOS_B.SFunction1_o4_o = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_b - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_i ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_i - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_b ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_k - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_dl ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S117>/Selector' incorporates:
   *  Constant: '<S117>/Constant'
   */
  LM_TOS_B.Selector_e = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_h];

  /* DataTypeConversion: '<S117>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_j = LM_TOS_B.Selector_e.obj_attr;

  /* DataTypeConversion: '<S117>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_m = LM_TOS_B.Selector_e.dy;

  /* DataTypeConversion: '<S117>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_g = LM_TOS_B.Selector_e.obj_type;

  /* DataTypeConversion: '<S117>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_e = LM_TOS_B.Selector_e.dx;

  /* DataTypeConversion: '<S117>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_f = LM_TOS_B.Selector_e.objject_ID;

  /* S-Function (rti_commonblock): '<S149>/S-Function1' incorporates:
   *  Constant: '<S117>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_14" Id:782 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_l1 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E]->processed;
      LM_TOS_B.SFunction1_o2_n = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E]->timestamp;
      LM_TOS_B.SFunction1_o3_p = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E]->deltatime;
      LM_TOS_B.SFunction1_o4_ay = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_e - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_j ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_m - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_g ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_e - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_f ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S118>/Selector' incorporates:
   *  Constant: '<S118>/Constant'
   */
  LM_TOS_B.Selector_iq = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_e];

  /* DataTypeConversion: '<S118>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_k = LM_TOS_B.Selector_iq.obj_attr;

  /* DataTypeConversion: '<S118>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_do = LM_TOS_B.Selector_iq.dy;

  /* DataTypeConversion: '<S118>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_j = LM_TOS_B.Selector_iq.obj_type;

  /* DataTypeConversion: '<S118>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_ih = LM_TOS_B.Selector_iq.dx;

  /* DataTypeConversion: '<S118>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_n = LM_TOS_B.Selector_iq.objject_ID;

  /* S-Function (rti_commonblock): '<S150>/S-Function1' incorporates:
   *  Constant: '<S118>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_15" Id:783 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_c3 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F]->processed;
      LM_TOS_B.SFunction1_o2_c = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F]->timestamp;
      LM_TOS_B.SFunction1_o3_h = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F]->deltatime;
      LM_TOS_B.SFunction1_o4_d = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_m - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_k ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_do - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_j ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_ih - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_n ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S119>/Selector' incorporates:
   *  Constant: '<S119>/Constant'
   */
  LM_TOS_B.Selector_py = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_k];

  /* DataTypeConversion: '<S119>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_b = LM_TOS_B.Selector_py.obj_attr;

  /* DataTypeConversion: '<S119>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_g = LM_TOS_B.Selector_py.dy;

  /* DataTypeConversion: '<S119>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_i = LM_TOS_B.Selector_py.obj_type;

  /* DataTypeConversion: '<S119>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_i1 = LM_TOS_B.Selector_py.dx;

  /* DataTypeConversion: '<S119>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_j3 = LM_TOS_B.Selector_py.objject_ID;

  /* S-Function (rti_commonblock): '<S151>/S-Function1' incorporates:
   *  Constant: '<S119>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_16" Id:784 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_j = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310]->processed;
      LM_TOS_B.SFunction1_o2_b = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310]->timestamp;
      LM_TOS_B.SFunction1_o3_g = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310]->deltatime;
      LM_TOS_B.SFunction1_o4_m = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_p - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_b ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_g - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_i ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_i1 - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_j3 ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S120>/Selector' incorporates:
   *  Constant: '<S120>/Constant'
   */
  LM_TOS_B.Selector_at = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_d];

  /* DataTypeConversion: '<S120>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_m = LM_TOS_B.Selector_at.obj_attr;

  /* DataTypeConversion: '<S120>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_a = LM_TOS_B.Selector_at.dy;

  /* DataTypeConversion: '<S120>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_jj = LM_TOS_B.Selector_at.obj_type;

  /* DataTypeConversion: '<S120>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_lp = LM_TOS_B.Selector_at.dx;

  /* DataTypeConversion: '<S120>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_ae = LM_TOS_B.Selector_at.objject_ID;

  /* S-Function (rti_commonblock): '<S152>/S-Function1' incorporates:
   *  Constant: '<S120>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_17" Id:785 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_a = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311]->processed;
      LM_TOS_B.SFunction1_o2_k = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311]->timestamp;
      LM_TOS_B.SFunction1_o3_m = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311]->deltatime;
      LM_TOS_B.SFunction1_o4_bn = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_mu - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_m ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_a - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_jj ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_lp - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_ae ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S121>/Selector' incorporates:
   *  Constant: '<S121>/Constant'
   */
  LM_TOS_B.Selector_ek = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_cx];

  /* DataTypeConversion: '<S121>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_k2 = LM_TOS_B.Selector_ek.obj_attr;

  /* DataTypeConversion: '<S121>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_l = LM_TOS_B.Selector_ek.dy;

  /* DataTypeConversion: '<S121>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_d = LM_TOS_B.Selector_ek.obj_type;

  /* DataTypeConversion: '<S121>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_ez = LM_TOS_B.Selector_ek.dx;

  /* DataTypeConversion: '<S121>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_k = LM_TOS_B.Selector_ek.objject_ID;

  /* S-Function (rti_commonblock): '<S153>/S-Function1' incorporates:
   *  Constant: '<S121>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_18" Id:786 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_a5 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312]->processed;
      LM_TOS_B.SFunction1_o2_dd = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312]->timestamp;
      LM_TOS_B.SFunction1_o3_e = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312]->deltatime;
      LM_TOS_B.SFunction1_o4_k = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_f - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_k2 ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_l - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_d ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_ez - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_k ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S122>/Selector' incorporates:
   *  Constant: '<S122>/Constant'
   */
  LM_TOS_B.Selector_c = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_ea];

  /* DataTypeConversion: '<S122>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_kt = LM_TOS_B.Selector_c.obj_attr;

  /* DataTypeConversion: '<S122>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_o = LM_TOS_B.Selector_c.dy;

  /* DataTypeConversion: '<S122>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_kl = LM_TOS_B.Selector_c.obj_type;

  /* DataTypeConversion: '<S122>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_l5 = LM_TOS_B.Selector_c.dx;

  /* DataTypeConversion: '<S122>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_h = LM_TOS_B.Selector_c.objject_ID;

  /* S-Function (rti_commonblock): '<S154>/S-Function1' incorporates:
   *  Constant: '<S122>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_19" Id:787 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_ld = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313]->processed;
      LM_TOS_B.SFunction1_o2_nk = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313]->timestamp;
      LM_TOS_B.SFunction1_o3_p0 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313]->deltatime;
      LM_TOS_B.SFunction1_o4_p = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_mc - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_kt ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_o - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_kl ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_l5 - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_h ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S123>/Selector' incorporates:
   *  Constant: '<S123>/Constant'
   */
  LM_TOS_B.Selector_iqo = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_i];

  /* DataTypeConversion: '<S123>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_d = LM_TOS_B.Selector_iqo.obj_attr;

  /* DataTypeConversion: '<S123>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_b = LM_TOS_B.Selector_iqo.dy;

  /* DataTypeConversion: '<S123>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_n = LM_TOS_B.Selector_iqo.obj_type;

  /* DataTypeConversion: '<S123>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_ee = LM_TOS_B.Selector_iqo.dx;

  /* DataTypeConversion: '<S123>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_g = LM_TOS_B.Selector_iqo.objject_ID;

  /* S-Function (rti_commonblock): '<S155>/S-Function1' incorporates:
   *  Constant: '<S123>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_02" Id:770 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_b = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302]->processed;
      LM_TOS_B.SFunction1_o2_h = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302]->timestamp;
      LM_TOS_B.SFunction1_o3_bt = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302]->deltatime;
      LM_TOS_B.SFunction1_o4_kn = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_m2 - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_d ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_b - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_n ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_ee - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_g ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S124>/Selector' incorporates:
   *  Constant: '<S124>/Constant'
   */
  LM_TOS_B.Selector_m = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_mb];

  /* DataTypeConversion: '<S124>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_ea = LM_TOS_B.Selector_m.obj_attr;

  /* DataTypeConversion: '<S124>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_nh = LM_TOS_B.Selector_m.dy;

  /* DataTypeConversion: '<S124>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_c = LM_TOS_B.Selector_m.obj_type;

  /* DataTypeConversion: '<S124>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_pi = LM_TOS_B.Selector_m.dx;

  /* DataTypeConversion: '<S124>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_hh = LM_TOS_B.Selector_m.objject_ID;

  /* S-Function (rti_commonblock): '<S156>/S-Function1' incorporates:
   *  Constant: '<S124>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_20" Id:788 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_og = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314]->processed;
      LM_TOS_B.SFunction1_o2_a = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314]->timestamp;
      LM_TOS_B.SFunction1_o3_hs = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314]->deltatime;
      LM_TOS_B.SFunction1_o4_dv = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_pq - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_ea ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_nh - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_c ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_pi - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_hh ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S125>/Selector' incorporates:
   *  Constant: '<S125>/Constant'
   */
  LM_TOS_B.Selector_mg = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_hp];

  /* DataTypeConversion: '<S125>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_bm = LM_TOS_B.Selector_mg.obj_attr;

  /* DataTypeConversion: '<S125>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_bc = LM_TOS_B.Selector_mg.dy;

  /* DataTypeConversion: '<S125>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_cv = LM_TOS_B.Selector_mg.obj_type;

  /* DataTypeConversion: '<S125>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_m3 = LM_TOS_B.Selector_mg.dx;

  /* DataTypeConversion: '<S125>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_l = LM_TOS_B.Selector_mg.objject_ID;

  /* S-Function (rti_commonblock): '<S157>/S-Function1' incorporates:
   *  Constant: '<S125>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_21" Id:789 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_f = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315]->processed;
      LM_TOS_B.SFunction1_o2_n2 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315]->timestamp;
      LM_TOS_B.SFunction1_o3_dw = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315]->deltatime;
      LM_TOS_B.SFunction1_o4_cd = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_ei - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_bm ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_bc - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_cv ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_m3 - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_l ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S126>/Selector' incorporates:
   *  Constant: '<S126>/Constant'
   */
  LM_TOS_B.Selector_ci = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_hd];

  /* DataTypeConversion: '<S126>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_a = LM_TOS_B.Selector_ci.obj_attr;

  /* DataTypeConversion: '<S126>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_n4 = LM_TOS_B.Selector_ci.dy;

  /* DataTypeConversion: '<S126>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_o = LM_TOS_B.Selector_ci.obj_type;

  /* DataTypeConversion: '<S126>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_g = LM_TOS_B.Selector_ci.dx;

  /* DataTypeConversion: '<S126>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_hb = LM_TOS_B.Selector_ci.objject_ID;

  /* S-Function (rti_commonblock): '<S158>/S-Function1' incorporates:
   *  Constant: '<S126>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_22" Id:790 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_m = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316]->processed;
      LM_TOS_B.SFunction1_o2_nj = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316]->timestamp;
      LM_TOS_B.SFunction1_o3_cd = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316]->deltatime;
      LM_TOS_B.SFunction1_o4_l = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_po - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_a ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_n4 - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_o ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_g - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_hb ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S127>/Selector' incorporates:
   *  Constant: '<S127>/Constant'
   */
  LM_TOS_B.Selector_k = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_hq];

  /* DataTypeConversion: '<S127>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_h = LM_TOS_B.Selector_k.obj_attr;

  /* DataTypeConversion: '<S127>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_cu = LM_TOS_B.Selector_k.dy;

  /* DataTypeConversion: '<S127>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_f = LM_TOS_B.Selector_k.obj_type;

  /* DataTypeConversion: '<S127>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_d = LM_TOS_B.Selector_k.dx;

  /* DataTypeConversion: '<S127>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_kg = LM_TOS_B.Selector_k.objject_ID;

  /* S-Function (rti_commonblock): '<S159>/S-Function1' incorporates:
   *  Constant: '<S127>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_23" Id:791 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_d = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317]->processed;
      LM_TOS_B.SFunction1_o2_ba = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317]->timestamp;
      LM_TOS_B.SFunction1_o3_n = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317]->deltatime;
      LM_TOS_B.SFunction1_o4_lv = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_ol - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_h ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_cu - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_f ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_d - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_kg ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S128>/Selector' incorporates:
   *  Constant: '<S128>/Constant'
   */
  LM_TOS_B.Selector_mt = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_ko];

  /* DataTypeConversion: '<S128>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_hl = LM_TOS_B.Selector_mt.obj_attr;

  /* DataTypeConversion: '<S128>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_lx = LM_TOS_B.Selector_mt.dy;

  /* DataTypeConversion: '<S128>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_k3 = LM_TOS_B.Selector_mt.obj_type;

  /* DataTypeConversion: '<S128>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_j = LM_TOS_B.Selector_mt.dx;

  /* DataTypeConversion: '<S128>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_e = LM_TOS_B.Selector_mt.objject_ID;

  /* S-Function (rti_commonblock): '<S160>/S-Function1' incorporates:
   *  Constant: '<S128>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_24" Id:792 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_g = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318]->processed;
      LM_TOS_B.SFunction1_o2_o = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318]->timestamp;
      LM_TOS_B.SFunction1_o3_by = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318]->deltatime;
      LM_TOS_B.SFunction1_o4_pw = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_j - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_hl ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_lx - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_k3 ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_j - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_e ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S129>/Selector' incorporates:
   *  Constant: '<S129>/Constant'
   */
  LM_TOS_B.Selector_fq = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_l];

  /* DataTypeConversion: '<S129>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_je = LM_TOS_B.Selector_fq.obj_attr;

  /* DataTypeConversion: '<S129>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_h = LM_TOS_B.Selector_fq.dy;

  /* DataTypeConversion: '<S129>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_c2 = LM_TOS_B.Selector_fq.obj_type;

  /* DataTypeConversion: '<S129>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_f = LM_TOS_B.Selector_fq.dx;

  /* DataTypeConversion: '<S129>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_l4 = LM_TOS_B.Selector_fq.objject_ID;

  /* S-Function (rti_commonblock): '<S161>/S-Function1' incorporates:
   *  Constant: '<S129>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_25" Id:793 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_g4 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319]->processed;
      LM_TOS_B.SFunction1_o2_iv = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319]->timestamp;
      LM_TOS_B.SFunction1_o3_j = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319]->deltatime;
      LM_TOS_B.SFunction1_o4_h = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_c - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_je ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_h - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_c2 ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_f - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_l4 ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S130>/Selector' incorporates:
   *  Constant: '<S130>/Constant'
   */
  LM_TOS_B.Selector_j = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_ih];

  /* DataTypeConversion: '<S130>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_js = LM_TOS_B.Selector_j.obj_attr;

  /* DataTypeConversion: '<S130>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_b3 = LM_TOS_B.Selector_j.dy;

  /* DataTypeConversion: '<S130>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_gz = LM_TOS_B.Selector_j.obj_type;

  /* DataTypeConversion: '<S130>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_b = LM_TOS_B.Selector_j.dx;

  /* DataTypeConversion: '<S130>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_gv = LM_TOS_B.Selector_j.objject_ID;

  /* S-Function (rti_commonblock): '<S162>/S-Function1' incorporates:
   *  Constant: '<S130>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_26" Id:794 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_j5 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A]->processed;
      LM_TOS_B.SFunction1_o2_m = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A]->timestamp;
      LM_TOS_B.SFunction1_o3_ce = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A]->deltatime;
      LM_TOS_B.SFunction1_o4_lz = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_cq - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_js ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_b3 - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_gz ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_b - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_gv ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S131>/Selector' incorporates:
   *  Constant: '<S131>/Constant'
   */
  LM_TOS_B.Selector_f4 = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_n];

  /* DataTypeConversion: '<S131>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_au = LM_TOS_B.Selector_f4.obj_attr;

  /* DataTypeConversion: '<S131>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_ni = LM_TOS_B.Selector_f4.dy;

  /* DataTypeConversion: '<S131>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_md = LM_TOS_B.Selector_f4.obj_type;

  /* DataTypeConversion: '<S131>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_h = LM_TOS_B.Selector_f4.dx;

  /* DataTypeConversion: '<S131>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_ej = LM_TOS_B.Selector_f4.objject_ID;

  /* S-Function (rti_commonblock): '<S163>/S-Function1' incorporates:
   *  Constant: '<S131>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_27" Id:795 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_jt = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B]->processed;
      LM_TOS_B.SFunction1_o2_i1 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B]->timestamp;
      LM_TOS_B.SFunction1_o3_je = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B]->deltatime;
      LM_TOS_B.SFunction1_o4_i = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_cg - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_au ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_ni - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_md ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_h - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_ej ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S132>/Selector' incorporates:
   *  Constant: '<S132>/Constant'
   */
  LM_TOS_B.Selector_je = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_iv];

  /* DataTypeConversion: '<S132>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_jo = LM_TOS_B.Selector_je.obj_attr;

  /* DataTypeConversion: '<S132>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_hu = LM_TOS_B.Selector_je.dy;

  /* DataTypeConversion: '<S132>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_da = LM_TOS_B.Selector_je.obj_type;

  /* DataTypeConversion: '<S132>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_pj = LM_TOS_B.Selector_je.dx;

  /* DataTypeConversion: '<S132>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_ak = LM_TOS_B.Selector_je.objject_ID;

  /* S-Function (rti_commonblock): '<S164>/S-Function1' incorporates:
   *  Constant: '<S132>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_28" Id:796 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_kz = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C]->processed;
      LM_TOS_B.SFunction1_o2_pe = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C]->timestamp;
      LM_TOS_B.SFunction1_o3_cm = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C]->deltatime;
      LM_TOS_B.SFunction1_o4_oy = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_dv - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_jo ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_hu - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_da ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_pj - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_ak ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S133>/Selector' incorporates:
   *  Constant: '<S133>/Constant'
   */
  LM_TOS_B.Selector_oe = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_b3];

  /* DataTypeConversion: '<S133>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_oi = LM_TOS_B.Selector_oe.obj_attr;

  /* DataTypeConversion: '<S133>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_ks = LM_TOS_B.Selector_oe.dy;

  /* DataTypeConversion: '<S133>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_fy = LM_TOS_B.Selector_oe.obj_type;

  /* DataTypeConversion: '<S133>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_lv = LM_TOS_B.Selector_oe.dx;

  /* DataTypeConversion: '<S133>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_am = LM_TOS_B.Selector_oe.objject_ID;

  /* S-Function (rti_commonblock): '<S165>/S-Function1' incorporates:
   *  Constant: '<S133>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_29" Id:797 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_j3 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D]->processed;
      LM_TOS_B.SFunction1_o2_bz = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D]->timestamp;
      LM_TOS_B.SFunction1_o3_hq = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D]->deltatime;
      LM_TOS_B.SFunction1_o4_j = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_i - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_oi ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_ks - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_fy ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_lv - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_am ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S134>/Selector' incorporates:
   *  Constant: '<S134>/Constant'
   */
  LM_TOS_B.Selector_l = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_p];

  /* DataTypeConversion: '<S134>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_p = LM_TOS_B.Selector_l.obj_attr;

  /* DataTypeConversion: '<S134>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_ap = LM_TOS_B.Selector_l.dy;

  /* DataTypeConversion: '<S134>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_h = LM_TOS_B.Selector_l.obj_type;

  /* DataTypeConversion: '<S134>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_n = LM_TOS_B.Selector_l.dx;

  /* DataTypeConversion: '<S134>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_g3 = LM_TOS_B.Selector_l.objject_ID;

  /* S-Function (rti_commonblock): '<S166>/S-Function1' incorporates:
   *  Constant: '<S134>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_03" Id:771 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_fs = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303]->processed;
      LM_TOS_B.SFunction1_o2_hk = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303]->timestamp;
      LM_TOS_B.SFunction1_o3_kg = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303]->deltatime;
      LM_TOS_B.SFunction1_o4_o3 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_c3 - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_p ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_ap - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_h ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_n - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_g3 ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S135>/Selector' incorporates:
   *  Constant: '<S135>/Constant'
   */
  LM_TOS_B.Selector_ko = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_g];

  /* DataTypeConversion: '<S135>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_et = LM_TOS_B.Selector_ko.obj_attr;

  /* DataTypeConversion: '<S135>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_da = LM_TOS_B.Selector_ko.dy;

  /* DataTypeConversion: '<S135>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_e = LM_TOS_B.Selector_ko.obj_type;

  /* DataTypeConversion: '<S135>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_a = LM_TOS_B.Selector_ko.dx;

  /* DataTypeConversion: '<S135>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_k4 = LM_TOS_B.Selector_ko.objject_ID;

  /* S-Function (rti_commonblock): '<S167>/S-Function1' incorporates:
   *  Constant: '<S135>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_30" Id:798 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_ae = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E]->processed;
      LM_TOS_B.SFunction1_o2_ah = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E]->timestamp;
      LM_TOS_B.SFunction1_o3_jw = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E]->deltatime;
      LM_TOS_B.SFunction1_o4_e = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_da - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_et ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_da - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_e ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_a - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_k4 ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S136>/Selector' incorporates:
   *  Constant: '<S136>/Constant'
   */
  LM_TOS_B.Selector_cif = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_lb];

  /* DataTypeConversion: '<S136>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_gy = LM_TOS_B.Selector_cif.obj_attr;

  /* DataTypeConversion: '<S136>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_f = LM_TOS_B.Selector_cif.dy;

  /* DataTypeConversion: '<S136>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_ir = LM_TOS_B.Selector_cif.obj_type;

  /* DataTypeConversion: '<S136>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_it = LM_TOS_B.Selector_cif.dx;

  /* DataTypeConversion: '<S136>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_d4 = LM_TOS_B.Selector_cif.objject_ID;

  /* S-Function (rti_commonblock): '<S168>/S-Function1' incorporates:
   *  Constant: '<S136>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_31" Id:799 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_n = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F]->processed;
      LM_TOS_B.SFunction1_o2_o2 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F]->timestamp;
      LM_TOS_B.SFunction1_o3_el = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F]->deltatime;
      LM_TOS_B.SFunction1_o4_oa = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_dax - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_gy ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_f - ( -200 )
        ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_ir ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_it - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_d4 ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S137>/Selector' incorporates:
   *  Constant: '<S137>/Constant'
   */
  LM_TOS_B.Selector_ap = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_ib];

  /* DataTypeConversion: '<S137>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_j0 = LM_TOS_B.Selector_ap.obj_attr;

  /* DataTypeConversion: '<S137>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_mt = LM_TOS_B.Selector_ap.dy;

  /* DataTypeConversion: '<S137>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_oq = LM_TOS_B.Selector_ap.obj_type;

  /* DataTypeConversion: '<S137>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_ft = LM_TOS_B.Selector_ap.dx;

  /* DataTypeConversion: '<S137>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_ki = LM_TOS_B.Selector_ap.objject_ID;

  /* S-Function (rti_commonblock): '<S169>/S-Function1' incorporates:
   *  Constant: '<S137>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_04" Id:772 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_p = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304]->processed;
      LM_TOS_B.SFunction1_o2_c0 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304]->timestamp;
      LM_TOS_B.SFunction1_o3_jt = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304]->deltatime;
      LM_TOS_B.SFunction1_o4_bs = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_id - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_j0 ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_mt - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_oq ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_ft - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_ki ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S138>/Selector' incorporates:
   *  Constant: '<S138>/Constant'
   */
  LM_TOS_B.Selector_jj = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_jy];

  /* DataTypeConversion: '<S138>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_oa = LM_TOS_B.Selector_jj.obj_attr;

  /* DataTypeConversion: '<S138>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_oo = LM_TOS_B.Selector_jj.dy;

  /* DataTypeConversion: '<S138>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_fm = LM_TOS_B.Selector_jj.obj_type;

  /* DataTypeConversion: '<S138>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_jm = LM_TOS_B.Selector_jj.dx;

  /* DataTypeConversion: '<S138>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_ga = LM_TOS_B.Selector_jj.objject_ID;

  /* S-Function (rti_commonblock): '<S170>/S-Function1' incorporates:
   *  Constant: '<S138>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_05" Id:773 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_mq = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305]->processed;
      LM_TOS_B.SFunction1_o2_as = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305]->timestamp;
      LM_TOS_B.SFunction1_o3_j3 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305]->deltatime;
      LM_TOS_B.SFunction1_o4_lo = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_pa - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_oa ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_oo - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_fm ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_jm - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_ga ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S139>/Selector' incorporates:
   *  Constant: '<S139>/Constant'
   */
  LM_TOS_B.Selector_km = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_cs];

  /* DataTypeConversion: '<S139>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_jp = LM_TOS_B.Selector_km.obj_attr;

  /* DataTypeConversion: '<S139>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_ol = LM_TOS_B.Selector_km.dy;

  /* DataTypeConversion: '<S139>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_eg = LM_TOS_B.Selector_km.obj_type;

  /* DataTypeConversion: '<S139>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_f3 = LM_TOS_B.Selector_km.dx;

  /* DataTypeConversion: '<S139>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_kr = LM_TOS_B.Selector_km.objject_ID;

  /* S-Function (rti_commonblock): '<S171>/S-Function1' incorporates:
   *  Constant: '<S139>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_06" Id:774 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_js = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306]->processed;
      LM_TOS_B.SFunction1_o2_an = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306]->timestamp;
      LM_TOS_B.SFunction1_o3_ek = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306]->deltatime;
      LM_TOS_B.SFunction1_o4_oz = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_ft - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_jp ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_ol - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_eg ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_f3 - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_kr ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S140>/Selector' incorporates:
   *  Constant: '<S140>/Constant'
   */
  LM_TOS_B.Selector_eg = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_j3];

  /* DataTypeConversion: '<S140>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_hh = LM_TOS_B.Selector_eg.obj_attr;

  /* DataTypeConversion: '<S140>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_hf = LM_TOS_B.Selector_eg.dy;

  /* DataTypeConversion: '<S140>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_p = LM_TOS_B.Selector_eg.obj_type;

  /* DataTypeConversion: '<S140>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_jj = LM_TOS_B.Selector_eg.dx;

  /* DataTypeConversion: '<S140>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_er = LM_TOS_B.Selector_eg.objject_ID;

  /* S-Function (rti_commonblock): '<S172>/S-Function1' incorporates:
   *  Constant: '<S140>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_07" Id:775 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_ks = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307]->processed;
      LM_TOS_B.SFunction1_o2_e = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307]->timestamp;
      LM_TOS_B.SFunction1_o3_ei = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307]->deltatime;
      LM_TOS_B.SFunction1_o4_ka = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_e3 - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_hh ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_hf - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_p ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_jj - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_er ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S141>/Selector' incorporates:
   *  Constant: '<S141>/Constant'
   */
  LM_TOS_B.Selector_au = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_ij];

  /* DataTypeConversion: '<S141>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_j4 = LM_TOS_B.Selector_au.obj_attr;

  /* DataTypeConversion: '<S141>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_ko = LM_TOS_B.Selector_au.dy;

  /* DataTypeConversion: '<S141>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_hf = LM_TOS_B.Selector_au.obj_type;

  /* DataTypeConversion: '<S141>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_bb = LM_TOS_B.Selector_au.dx;

  /* DataTypeConversion: '<S141>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_i = LM_TOS_B.Selector_au.objject_ID;

  /* S-Function (rti_commonblock): '<S173>/S-Function1' incorporates:
   *  Constant: '<S141>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_08" Id:776 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_l4 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308]->processed;
      LM_TOS_B.SFunction1_o2_iz = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308]->timestamp;
      LM_TOS_B.SFunction1_o3_nw = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308]->deltatime;
      LM_TOS_B.SFunction1_o4_dp = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_ny - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_j4 ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_ko - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_hf ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_bb - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_i ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S142>/Selector' incorporates:
   *  Constant: '<S142>/Constant'
   */
  LM_TOS_B.Selector_fg = LM_TOS_B.BusCreator_j.hmi_display_array_st[(int32_T)
    LM_TOS_P.Constant_Value_cs0];

  /* DataTypeConversion: '<S142>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_hb = LM_TOS_B.Selector_fg.obj_attr;

  /* DataTypeConversion: '<S142>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_at = LM_TOS_B.Selector_fg.dy;

  /* DataTypeConversion: '<S142>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_et = LM_TOS_B.Selector_fg.obj_type;

  /* DataTypeConversion: '<S142>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_n2 = LM_TOS_B.Selector_fg.dx;

  /* DataTypeConversion: '<S142>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_o = LM_TOS_B.Selector_fg.objject_ID;

  /* S-Function (rti_commonblock): '<S174>/S-Function1' incorporates:
   *  Constant: '<S142>/Constant1'
   */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_09" Id:777 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_fp = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309]->processed;
      LM_TOS_B.SFunction1_o2_l = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309]->timestamp;
      LM_TOS_B.SFunction1_o3_o = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309]->deltatime;
      LM_TOS_B.SFunction1_o4_ef = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_P.Constant1_Value_l - ( 0 ) ) /
        0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_hb ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_at - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_et ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_n2 - ( -200
        ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_o ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  LM_TOS_B.DataTypeConversion_jj = LM_TOS_B.LM_TOS_ALGORISM_o8.l_c0;

  /* DataTypeConversion: '<S5>/Data Type Conversion1' */
  LM_TOS_B.DataTypeConversion1_ok = LM_TOS_B.LM_TOS_ALGORISM_o8.l_end_x0;

  /* DataTypeConversion: '<S5>/Data Type Conversion2' */
  LM_TOS_B.DataTypeConversion2_db = LM_TOS_B.LM_TOS_ALGORISM_o8.l_start_x0;

  /* DataTypeConversion: '<S5>/Data Type Conversion3' */
  LM_TOS_B.DataTypeConversion3_jf = LM_TOS_B.LM_TOS_ALGORISM_o8.l_c1;

  /* DataTypeConversion: '<S5>/Data Type Conversion4' */
  LM_TOS_B.DataTypeConversion4_erz = LM_TOS_B.LM_TOS_ALGORISM_o8.l_c2;

  /* DataTypeConversion: '<S5>/Data Type Conversion5' */
  LM_TOS_B.DataTypeConversion5 = LM_TOS_B.LM_TOS_ALGORISM_o8.l_line_type;

  /* S-Function (rti_commonblock): '<S175>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "ZOP_NarrowLine_1" Id:570 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_i = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A]->processed;
      LM_TOS_B.SFunction1_o2_f = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A]->timestamp;
      LM_TOS_B.SFunction1_o3_b4 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A]->deltatime;
      LM_TOS_B.SFunction1_o4_jp = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Lane_C0" (0|12, standard signal, unsigned int, little endian) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion_jj - ( -16 )
        ) / 0.01 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "ZOP_narrowLane_dxEnd" (0|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion1_ok - ( 0 ) )
        / 0.01 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Msg[7] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "ZOP_narrowLane_dxStart" (12|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion2_db - ( 0 ) )
        / 0.01 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Lane_C1" (16|11, standard signal, unsigned int, little endian) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion3_jf - ( -0.9
        ) ) / 0.0009 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000007FF;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Lane_C2" (28|12, standard signal, unsigned int, little endian) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion4_erz -
        ( -0.01 ) ) / 5.0E-6 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "ZOP_narrowLaneType" (52|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion5 ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion10' */
  LM_TOS_B.DataTypeConversion10 = LM_TOS_B.LM_TOS_ALGORISM_o8.r_c2;

  /* DataTypeConversion: '<S5>/Data Type Conversion11' */
  LM_TOS_B.DataTypeConversion11 = LM_TOS_B.LM_TOS_ALGORISM_o8.r_line_type;

  /* DataTypeConversion: '<S5>/Data Type Conversion6' */
  LM_TOS_B.DataTypeConversion6 = LM_TOS_B.LM_TOS_ALGORISM_o8.r_c0;

  /* DataTypeConversion: '<S5>/Data Type Conversion7' */
  LM_TOS_B.DataTypeConversion7 = LM_TOS_B.LM_TOS_ALGORISM_o8.r_end_x0;

  /* DataTypeConversion: '<S5>/Data Type Conversion8' */
  LM_TOS_B.DataTypeConversion8 = LM_TOS_B.LM_TOS_ALGORISM_o8.r_start_x0;

  /* DataTypeConversion: '<S5>/Data Type Conversion9' */
  LM_TOS_B.DataTypeConversion9 = LM_TOS_B.LM_TOS_ALGORISM_o8.r_c1;

  /* S-Function (rti_commonblock): '<S176>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "ZOP_NarrowLine_2" Id:571 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B]->processed) {
      can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B]->timestamp > 0.0) {
      LM_TOS_B.SFunction1_o1_df = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B]->processed;
      LM_TOS_B.SFunction1_o2_g = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B]->timestamp;
      LM_TOS_B.SFunction1_o3_i = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B]->deltatime;
      LM_TOS_B.SFunction1_o4_kaj = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Lane_C0" (0|12, standard signal, unsigned int, little endian) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion6 - ( -16 ) )
        / 0.01 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "ZOP_narrowLane_dxEnd" (0|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion7 - ( 0 ) ) /
        0.01 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Msg[7] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "ZOP_narrowLane_dxStart" (12|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion8 - ( 0 ) ) /
        0.01 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Lane_C1" (16|11, standard signal, unsigned int, little endian) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion9 - ( -0.9 ) )
        / 0.0009 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000007FF;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Lane_C2" (28|12, standard signal, unsigned int, little endian) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion10 - ( -0.01 )
        ) / 5.0E-6 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "ZOP_narrowLaneType" (52|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_B.DataTypeConversion11 ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* SignalConversion: '<S16>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_ln[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S16>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_ln[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S16>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_ln[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S16>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_ln[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S16>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_ln[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S17>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_gl[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S17>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_gl[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S17>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_gl[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S17>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_gl[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S17>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_gl[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S20>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_c3[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S20>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_c3[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S20>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_c3[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S20>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_c3[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S20>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_c3[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S21>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_ha[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S21>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_ha[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S21>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_ha[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S21>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_ha[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S21>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_ha[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S22>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_n5[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S22>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_n5[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S22>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_n5[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S22>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_n5[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S22>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_n5[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S23>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_mo[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S23>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_mo[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S23>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_mo[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S23>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_mo[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S23>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_mo[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S24>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_iq[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S24>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_iq[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S24>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_iq[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S24>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_iq[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S24>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_iq[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S25>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_ij[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S25>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_ij[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S25>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_ij[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S25>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_ij[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S25>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_ij[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S26>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_gh[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S26>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_gh[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S26>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_gh[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S26>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_gh[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S26>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_gh[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S27>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_p1q[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S27>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_p1q[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S27>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_p1q[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S27>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_p1q[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S27>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_p1q[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S18>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_iv[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S18>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_iv[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S18>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_iv[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S18>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_iv[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S18>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_iv[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S19>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_pe[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S19>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_pe[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S19>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_pe[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S19>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_pe[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S19>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_pe[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S16>/Bus Creator1' */
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_0_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_0_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.TTC_f;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_0_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.ID_un8;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_0_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_ln[i];
  }

  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_0_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.probCutIn_f;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_0_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.probCutOut_f;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_0_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.overlap_f;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_0_ST.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S16>/Bus Creator1' */

  /* BusCreator: '<S17>/Bus Creator1' */
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_1_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_1_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.TTC_f;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_1_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.ID_un8;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_1_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_gl[i];
  }

  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_1_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.probCutIn_f;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_1_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.probCutOut_f;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_1_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.overlap_f;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_1_ST.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S17>/Bus Creator1' */

  /* BusCreator: '<S20>/Bus Creator1' */
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_2_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_2_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.TTC_f;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_2_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.ID_un8;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_2_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_c3[i];
  }

  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_2_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.probCutIn_f;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_2_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.probCutOut_f;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_2_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.overlap_f;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_2_ST.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S20>/Bus Creator1' */

  /* BusCreator: '<S21>/Bus Creator1' */
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_3_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_3_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.TTC_f;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_3_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.ID_un8;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_3_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_ha[i];
  }

  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_3_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.probCutIn_f;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_3_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.probCutOut_f;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_3_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.overlap_f;
  LM_TOS_B.BusCreator_n3.L_NEIGHBORLANE_TAROBJ_3_ST.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S21>/Bus Creator1' */

  /* BusCreator: '<S22>/Bus Creator1' */
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_0_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_0_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.TTC_f;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_0_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.ID_un8;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_0_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_0_ST.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_n5[i];
  }

  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_0_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.probCutIn_f;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_0_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.probCutOut_f;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_0_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.overlap_f;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_0_ST.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S22>/Bus Creator1' */

  /* BusCreator: '<S23>/Bus Creator1' */
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_1_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_1_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.TTC_f;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_1_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.ID_un8;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_1_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_1_ST.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_mo[i];
  }

  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_1_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.probCutIn_f;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_1_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.probCutOut_f;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_1_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.overlap_f;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_1_ST.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S23>/Bus Creator1' */

  /* BusCreator: '<S24>/Bus Creator1' */
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_2_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_2_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.TTC_f;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_2_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.ID_un8;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_2_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_2_ST.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_iq[i];
  }

  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_2_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.probCutIn_f;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_2_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.probCutOut_f;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_2_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.overlap_f;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_2_ST.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S24>/Bus Creator1' */

  /* BusCreator: '<S25>/Bus Creator1' */
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_3_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_3_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.TTC_f;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_3_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.ID_un8;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_3_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_3_ST.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_ij[i];
  }

  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_3_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.probCutIn_f;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_3_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.probCutOut_f;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_3_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.overlap_f;
  LM_TOS_B.BusCreator_n3.EGOLANE_TAROBJ_3_ST.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S25>/Bus Creator1' */

  /* BusCreator: '<S26>/Bus Creator1' */
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_0_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_0_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.TTC_f;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_0_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.ID_un8;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_0_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_gh[i];
  }

  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_0_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.probCutIn_f;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_0_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.probCutOut_f;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_0_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.overlap_f;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_0_ST.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S26>/Bus Creator1' */

  /* BusCreator: '<S27>/Bus Creator1' */
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_1_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_1_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.TTC_f;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_1_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.ID_un8;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_1_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_p1q[i];
  }

  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_1_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.probCutIn_f;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_1_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.probCutOut_f;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_1_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.overlap_f;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_1_ST.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S27>/Bus Creator1' */

  /* BusCreator: '<S18>/Bus Creator1' */
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_2_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_2_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.TTC_f;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_2_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.ID_un8;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_2_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_iv[i];
  }

  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_2_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.probCutIn_f;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_2_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.probCutOut_f;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_2_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.overlap_f;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_2_ST.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S18>/Bus Creator1' */

  /* BusCreator: '<S19>/Bus Creator1' */
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_3_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_3_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.TTC_f;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_3_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.ID_un8;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_3_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_pe[i];
  }

  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_3_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.probCutIn_f;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_3_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.probCutOut_f;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_3_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.overlap_f;
  LM_TOS_B.BusCreator_n3.R_NEIGHBORLANE_TAROBJ_3_ST.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S19>/Bus Creator1' */
  /* S-Function (rti_commonblock): '<S1>/S-Function1' */
  /* This comment workarounds a code generation problem */
}

/* Model update function */
void LM_TOS_update(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++LM_TOS_M->Timing.clockTick0)) {
    ++LM_TOS_M->Timing.clockTickH0;
  }

  LM_TOS_M->Timing.taskTime0 = LM_TOS_M->Timing.clockTick0 *
    LM_TOS_M->Timing.stepSize0 + LM_TOS_M->Timing.clockTickH0 *
    LM_TOS_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void LM_TOS_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)LM_TOS_M, 0,
                sizeof(RT_MODEL_LM_TOS_T));
  LM_TOS_M->Timing.stepSize0 = 0.005;

  /* block I/O */
  (void) memset(((void *) &LM_TOS_B), 0,
                sizeof(B_LM_TOS_T));

  /* states (dwork) */
  (void) memset((void *)&LM_TOS_DW, 0,
                sizeof(DW_LM_TOS_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    LM_TOS_rti_init_trc_pointers();
  }

  /* Start for S-Function (LM_TOS_MODULE): '<S2>/LM_TOS_ALGORISM' */

  /* S-Function Block: <S2>/LM_TOS_ALGORISM */
  LM_TOS_MODULE_Start_wrapper();
}

/* Model terminate function */
void LM_TOS_terminate(void)
{
  /* Terminate for S-Function (rti_commonblock): '<S143>/S-Function1' incorporates:
   *  Constant: '<S111>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_00" Id:768 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S144>/S-Function1' incorporates:
   *  Constant: '<S112>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_01" Id:769 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S145>/S-Function1' incorporates:
   *  Constant: '<S113>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_10" Id:778 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][2] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S146>/S-Function1' incorporates:
   *  Constant: '<S114>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_11" Id:779 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][2] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S147>/S-Function1' incorporates:
   *  Constant: '<S115>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_12" Id:780 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][2] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S148>/S-Function1' incorporates:
   *  Constant: '<S116>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_13" Id:781 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][2] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S149>/S-Function1' incorporates:
   *  Constant: '<S117>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_14" Id:782 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][2] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S150>/S-Function1' incorporates:
   *  Constant: '<S118>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_15" Id:783 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S151>/S-Function1' incorporates:
   *  Constant: '<S119>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_16" Id:784 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S152>/S-Function1' incorporates:
   *  Constant: '<S120>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_17" Id:785 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S153>/S-Function1' incorporates:
   *  Constant: '<S121>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_18" Id:786 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S154>/S-Function1' incorporates:
   *  Constant: '<S122>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_19" Id:787 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S155>/S-Function1' incorporates:
   *  Constant: '<S123>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_02" Id:770 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S156>/S-Function1' incorporates:
   *  Constant: '<S124>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_20" Id:788 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S157>/S-Function1' incorporates:
   *  Constant: '<S125>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_21" Id:789 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S158>/S-Function1' incorporates:
   *  Constant: '<S126>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_22" Id:790 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S159>/S-Function1' incorporates:
   *  Constant: '<S127>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_23" Id:791 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S160>/S-Function1' incorporates:
   *  Constant: '<S128>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_24" Id:792 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S161>/S-Function1' incorporates:
   *  Constant: '<S129>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_25" Id:793 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S162>/S-Function1' incorporates:
   *  Constant: '<S130>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_26" Id:794 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S163>/S-Function1' incorporates:
   *  Constant: '<S131>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_27" Id:795 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][5] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S164>/S-Function1' incorporates:
   *  Constant: '<S132>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_28" Id:796 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][5] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S165>/S-Function1' incorporates:
   *  Constant: '<S133>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_29" Id:797 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][5] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S166>/S-Function1' incorporates:
   *  Constant: '<S134>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_03" Id:771 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S167>/S-Function1' incorporates:
   *  Constant: '<S135>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_30" Id:798 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][5] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S168>/S-Function1' incorporates:
   *  Constant: '<S136>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_31" Id:799 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][5] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S169>/S-Function1' incorporates:
   *  Constant: '<S137>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_04" Id:772 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][1] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S170>/S-Function1' incorporates:
   *  Constant: '<S138>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_05" Id:773 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][1] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S171>/S-Function1' incorporates:
   *  Constant: '<S139>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_06" Id:774 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][1] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S172>/S-Function1' incorporates:
   *  Constant: '<S140>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_07" Id:775 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][1] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S173>/S-Function1' incorporates:
   *  Constant: '<S141>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_08" Id:776 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][1] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S174>/S-Function1' incorporates:
   *  Constant: '<S142>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_09" Id:777 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][1] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S175>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "ZOP_NarrowLine_1" Id:570 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S176>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "ZOP_NarrowLine_2" Id:571 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }
}
