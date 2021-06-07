/*
 * LM_TOS_0103.c
 *
 * Code generation for model "LM_TOS_0103".
 *
 * Model version              : 1.333
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sun Jan  3 17:18:15 2021
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LM_TOS_0103_trc_ptr.h"
#include "LM_TOS_0103.h"
#include "LM_TOS_0103_private.h"

const real_T LM_TOS_0103_RGND = 0.0;   /* real_T ground */
const uint32_T LM_TOS_0103_U32GND = 0U;/* uint32_T ground */
const FUS_OBJ_OUTPUT_ST LM_TOS_0103_rtZFUS_OBJ_OUTPUT_ST = {
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

const VSI_VEHSTATE_ST LM_TOS_0103_rtZVSI_VEHSTATE_ST = {
  0.0F,                                /* YrsF */
  0.0F,                                /* AxSensorF */
  0.0F,                                /* StWheelAngleF */
  0.0F,                                /* vRef */
  0.0F,                                /* aRef */
  0.0F,                                /* AxSlope */
  false,                               /* AxSlopeValid */
  0.0F                                 /* Curvature */
} ;                                    /* VSI_VEHSTATE_ST ground */

const FUS_LANE_OUTPUT_ST LM_TOS_0103_rtZFUS_LANE_OUTPUT_ST = {
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

const FUS_ROAD_EDGE_OUTPUT_ST LM_TOS_0103_rtZFUS_ROAD_EDGE_OUTPUT_ST = {
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

const ATS_PO_ST LM_TOS_0103_rtZATS_PO_ST = {
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
B_LM_TOS_0103_T LM_TOS_0103_B;

/* Block states (default storage) */
DW_LM_TOS_0103_T LM_TOS_0103_DW;

/* Real-time model */
RT_MODEL_LM_TOS_0103_T LM_TOS_0103_M_;
RT_MODEL_LM_TOS_0103_T *const LM_TOS_0103_M = &LM_TOS_0103_M_;

/* Model output function */
void LM_TOS_0103_output(void)
{
  int32_T i;

  /* SignalConversion: '<S8>/TmpSignal ConversionAtSelectorInport1' */
  memcpy(&LM_TOS_0103_B.TmpSignalConversionAtSelectorIn[0],
         &LM_TOS_0103_rtZFUS_OBJ_OUTPUT_ST.objects[0], 40U * sizeof
         (FUS_OBJ_DATA_ST));

  /* Selector: '<S8>/Selector18' incorporates:
   *  Constant: '<S8>/Constant18'
   */
  LM_TOS_0103_B.Selector18 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant18_Value];

  /* Selector: '<S8>/Selector19' incorporates:
   *  Constant: '<S8>/Constant19'
   */
  LM_TOS_0103_B.Selector19 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant19_Value];

  /* Selector: '<S8>/Selector28' incorporates:
   *  Constant: '<S8>/Constant28'
   */
  LM_TOS_0103_B.Selector28 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant28_Value];

  /* Selector: '<S8>/Selector29' incorporates:
   *  Constant: '<S8>/Constant29'
   */
  LM_TOS_0103_B.Selector29 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant29_Value];

  /* Selector: '<S8>/Selector30' incorporates:
   *  Constant: '<S8>/Constant30'
   */
  LM_TOS_0103_B.Selector30 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant30_Value];

  /* Selector: '<S8>/Selector31' incorporates:
   *  Constant: '<S8>/Constant31'
   */
  LM_TOS_0103_B.Selector31 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant31_Value];

  /* Selector: '<S8>/Selector32' incorporates:
   *  Constant: '<S8>/Constant32'
   */
  LM_TOS_0103_B.Selector32 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant32_Value];

  /* Selector: '<S8>/Selector33' incorporates:
   *  Constant: '<S8>/Constant33'
   */
  LM_TOS_0103_B.Selector33 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant33_Value];

  /* Selector: '<S8>/Selector34' incorporates:
   *  Constant: '<S8>/Constant34'
   */
  LM_TOS_0103_B.Selector34 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant34_Value];

  /* Selector: '<S8>/Selector35' incorporates:
   *  Constant: '<S8>/Constant35'
   */
  LM_TOS_0103_B.Selector35 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant35_Value];

  /* Selector: '<S8>/Selector20' incorporates:
   *  Constant: '<S8>/Constant20'
   */
  LM_TOS_0103_B.Selector20 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant20_Value];

  /* Selector: '<S8>/Selector21' incorporates:
   *  Constant: '<S8>/Constant21'
   */
  LM_TOS_0103_B.Selector21 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant21_Value];

  /* Selector: '<S8>/Selector24' incorporates:
   *  Constant: '<S8>/Constant24'
   */
  LM_TOS_0103_B.Selector24 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant24_Value];

  /* Selector: '<S8>/Selector25' incorporates:
   *  Constant: '<S8>/Constant25'
   */
  LM_TOS_0103_B.Selector25 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant25_Value];

  /* Selector: '<S8>/Selector26' incorporates:
   *  Constant: '<S8>/Constant26'
   */
  LM_TOS_0103_B.Selector26 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant26_Value];

  /* Selector: '<S8>/Selector27' incorporates:
   *  Constant: '<S8>/Constant27'
   */
  LM_TOS_0103_B.Selector27 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant27_Value];

  /* Selector: '<S8>/Selector22' incorporates:
   *  Constant: '<S8>/Constant22'
   */
  LM_TOS_0103_B.Selector22 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant22_Value];

  /* Selector: '<S8>/Selector23' incorporates:
   *  Constant: '<S8>/Constant23'
   */
  LM_TOS_0103_B.Selector23 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant23_Value];

  /* Selector: '<S8>/Selector' incorporates:
   *  Constant: '<S8>/Constant'
   */
  LM_TOS_0103_B.Selector = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant_Value];

  /* Selector: '<S8>/Selector1' incorporates:
   *  Constant: '<S8>/Constant1'
   */
  LM_TOS_0103_B.Selector1 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant1_Value];

  /* Selector: '<S8>/Selector2' incorporates:
   *  Constant: '<S8>/Constant2'
   */
  LM_TOS_0103_B.Selector2 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant2_Value];

  /* Selector: '<S8>/Selector3' incorporates:
   *  Constant: '<S8>/Constant3'
   */
  LM_TOS_0103_B.Selector3 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant3_Value];

  /* Selector: '<S8>/Selector4' incorporates:
   *  Constant: '<S8>/Constant4'
   */
  LM_TOS_0103_B.Selector4 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant4_Value];

  /* Selector: '<S8>/Selector5' incorporates:
   *  Constant: '<S8>/Constant5'
   */
  LM_TOS_0103_B.Selector5 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant5_Value];

  /* Selector: '<S8>/Selector6' incorporates:
   *  Constant: '<S8>/Constant6'
   */
  LM_TOS_0103_B.Selector6 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant6_Value];

  /* Selector: '<S8>/Selector7' incorporates:
   *  Constant: '<S8>/Constant7'
   */
  LM_TOS_0103_B.Selector7 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant7_Value];

  /* Selector: '<S8>/Selector8' incorporates:
   *  Constant: '<S8>/Constant8'
   */
  LM_TOS_0103_B.Selector8 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant8_Value];

  /* Selector: '<S8>/Selector9' incorporates:
   *  Constant: '<S8>/Constant9'
   */
  LM_TOS_0103_B.Selector9 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant9_Value];

  /* Selector: '<S8>/Selector10' incorporates:
   *  Constant: '<S8>/Constant10'
   */
  LM_TOS_0103_B.Selector10 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant10_Value];

  /* Selector: '<S8>/Selector11' incorporates:
   *  Constant: '<S8>/Constant11'
   */
  LM_TOS_0103_B.Selector11 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant11_Value];

  /* Selector: '<S8>/Selector14' incorporates:
   *  Constant: '<S8>/Constant14'
   */
  LM_TOS_0103_B.Selector14 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant14_Value];

  /* Selector: '<S8>/Selector15' incorporates:
   *  Constant: '<S8>/Constant15'
   */
  LM_TOS_0103_B.Selector15 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant15_Value];

  /* Selector: '<S8>/Selector16' incorporates:
   *  Constant: '<S8>/Constant16'
   */
  LM_TOS_0103_B.Selector16 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant16_Value];

  /* Selector: '<S8>/Selector17' incorporates:
   *  Constant: '<S8>/Constant17'
   */
  LM_TOS_0103_B.Selector17 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant17_Value];

  /* Selector: '<S8>/Selector12' incorporates:
   *  Constant: '<S8>/Constant12'
   */
  LM_TOS_0103_B.Selector12 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant12_Value];

  /* Selector: '<S8>/Selector13' incorporates:
   *  Constant: '<S8>/Constant13'
   */
  LM_TOS_0103_B.Selector13 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant13_Value];

  /* Selector: '<S8>/Selector38' incorporates:
   *  Constant: '<S8>/Constant38'
   */
  LM_TOS_0103_B.Selector38 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant38_Value];

  /* Selector: '<S8>/Selector39' incorporates:
   *  Constant: '<S8>/Constant39'
   */
  LM_TOS_0103_B.Selector39 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant39_Value];

  /* Selector: '<S8>/Selector36' incorporates:
   *  Constant: '<S8>/Constant36'
   */
  LM_TOS_0103_B.Selector36 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant36_Value];

  /* Selector: '<S8>/Selector37' incorporates:
   *  Constant: '<S8>/Constant37'
   */
  LM_TOS_0103_B.Selector37 = LM_TOS_0103_B.TmpSignalConversionAtSelectorIn
    [(int32_T)LM_TOS_0103_P.Constant37_Value];

  /* BusCreator: '<S2>/BusConversion_InsertedFor_LM_TOS_ALGORISM_at_inport_2' */
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_01_obj =
    LM_TOS_0103_B.Selector18;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_02_obj =
    LM_TOS_0103_B.Selector19;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_03_obj =
    LM_TOS_0103_B.Selector28;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_04_obj =
    LM_TOS_0103_B.Selector29;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_05_obj =
    LM_TOS_0103_B.Selector30;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_06_obj =
    LM_TOS_0103_B.Selector31;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_07_obj =
    LM_TOS_0103_B.Selector32;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_08_obj =
    LM_TOS_0103_B.Selector33;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_09_obj =
    LM_TOS_0103_B.Selector34;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_10_obj =
    LM_TOS_0103_B.Selector35;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_11_obj =
    LM_TOS_0103_B.Selector20;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_12_obj =
    LM_TOS_0103_B.Selector21;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_13_obj =
    LM_TOS_0103_B.Selector24;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_14_obj =
    LM_TOS_0103_B.Selector25;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_15_obj =
    LM_TOS_0103_B.Selector26;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_16_obj =
    LM_TOS_0103_B.Selector27;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_17_obj =
    LM_TOS_0103_B.Selector22;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_18_obj =
    LM_TOS_0103_B.Selector23;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_19_obj =
    LM_TOS_0103_B.Selector;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_20_obj =
    LM_TOS_0103_B.Selector1;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_21_obj =
    LM_TOS_0103_B.Selector2;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_22_obj =
    LM_TOS_0103_B.Selector3;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_23_obj =
    LM_TOS_0103_B.Selector4;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_24_obj =
    LM_TOS_0103_B.Selector5;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_25_obj =
    LM_TOS_0103_B.Selector6;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_26_obj =
    LM_TOS_0103_B.Selector7;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_27_obj =
    LM_TOS_0103_B.Selector8;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_28_obj =
    LM_TOS_0103_B.Selector9;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_29_obj =
    LM_TOS_0103_B.Selector10;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_30_obj =
    LM_TOS_0103_B.Selector11;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_31_obj =
    LM_TOS_0103_B.Selector14;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_32_obj =
    LM_TOS_0103_B.Selector15;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_33_obj =
    LM_TOS_0103_B.Selector16;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_34_obj =
    LM_TOS_0103_B.Selector17;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_35_obj =
    LM_TOS_0103_B.Selector12;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_36_obj =
    LM_TOS_0103_B.Selector13;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_37_obj =
    LM_TOS_0103_B.Selector38;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_38_obj =
    LM_TOS_0103_B.Selector39;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_39_obj =
    LM_TOS_0103_B.Selector36;
  LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO.fus_output_40_obj =
    LM_TOS_0103_B.Selector37;

  /* S-Function (LM_TOS_MODULE): '<S2>/LM_TOS_ALGORISM' */
  LM_TOS_MODULE_Outputs_wrapper((real_T*)&LM_TOS_0103_RGND, (uint32_T*)
    &LM_TOS_0103_U32GND, &LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO,
    (VSI_VEHSTATE_ST*)&LM_TOS_0103_rtZVSI_VEHSTATE_ST, (FUS_LANE_OUTPUT_ST*)
    &LM_TOS_0103_rtZFUS_LANE_OUTPUT_ST, (FUS_ROAD_EDGE_OUTPUT_ST*)
    &LM_TOS_0103_rtZFUS_ROAD_EDGE_OUTPUT_ST, (ATS_PO_ST*)
    &LM_TOS_0103_rtZATS_PO_ST, &LM_TOS_0103_B.LM_TOS_ALGORISM_o1,
    &LM_TOS_0103_B.LM_TOS_ALGORISM_o2, &LM_TOS_0103_B.LM_TOS_ALGORISM_o3,
    &LM_TOS_0103_B.LM_TOS_ALGORISM_o4, &LM_TOS_0103_B.LM_TOS_ALGORISM_o5,
    &LM_TOS_0103_B.LM_TOS_ALGORISM_o6, &LM_TOS_0103_B.LM_TOS_ALGORISM_o7,
    &LM_TOS_0103_B.LM_TOS_ALGORISM_o8, &LM_TOS_0103_B.LM_TOS_ALGORISM_o9);

  /* Concatenate: '<S14>/Vector Concatenate' */
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_0;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_1;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_2;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_3;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_4;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[5] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_5;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[6] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_6;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[7] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_7;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[8] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_8;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[9] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_9;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[10] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_10;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[11] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_11;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[12] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_12;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[13] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_13;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[14] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_14;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[15] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_15;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[16] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_16;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[17] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_17;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[18] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_18;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[19] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_19;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[20] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_20;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[21] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_21;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[22] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_22;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[23] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_23;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[24] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_24;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[25] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_25;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[26] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_26;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[27] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_27;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[28] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_28;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[29] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_29;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[30] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_30;
  LM_TOS_0103_B.BusCreator_h.hmi_display_array_st[31] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o7.obj_31;

  /* SignalConversion: '<S15>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_a[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S15>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_a[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S15>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_a[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S15>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_a[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S15>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_a[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S15>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_a[i];
  }

  LM_TOS_0103_B.BusCreator1.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S15>/Bus Creator1' */

  /* SignalConversion: '<S16>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_ap[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S16>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_ap[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S16>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_ap[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S16>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_ap[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S16>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_ap[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S16>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_p.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_p.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_p.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_p.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_p.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_ap[i];
  }

  LM_TOS_0103_B.BusCreator1_p.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_p.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_p.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_p.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S16>/Bus Creator1' */

  /* SignalConversion: '<S23>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_l[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S23>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_l[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S23>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_l[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S23>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_l[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S23>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_l[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S23>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_l.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_l.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_l.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_l.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_l.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_l[i];
  }

  LM_TOS_0103_B.BusCreator1_l.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_l.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_l.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_l.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S23>/Bus Creator1' */

  /* SignalConversion: '<S24>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_f[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S24>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_f[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S24>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_f[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S24>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_f[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S24>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_f[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S24>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_p3.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_p3.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_p3.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_p3.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_p3.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_f[i];
  }

  LM_TOS_0103_B.BusCreator1_p3.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_p3.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_p3.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_p3.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S24>/Bus Creator1' */

  /* SignalConversion: '<S25>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_m[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S25>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_m[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S25>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_m[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S25>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_m[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S25>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_m[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S25>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_f.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_f.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_f.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_f.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_f.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_m[i];
  }

  LM_TOS_0103_B.BusCreator1_f.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_f.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_f.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_f.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S25>/Bus Creator1' */

  /* SignalConversion: '<S26>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_lr[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S26>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_lr[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S26>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_lr[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S26>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_lr[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S26>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_lr[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S26>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_b.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_b.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_b.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_b.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_b.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_lr[i];
  }

  LM_TOS_0103_B.BusCreator1_b.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_b.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_b.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_b.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S26>/Bus Creator1' */

  /* SignalConversion: '<S27>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_ns[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S27>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_ns[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S27>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_ns[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S27>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_ns[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S27>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_ns[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S27>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_d.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_d.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_d.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_d.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_d.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_ns[i];
  }

  LM_TOS_0103_B.BusCreator1_d.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_d.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_d.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_d.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S27>/Bus Creator1' */

  /* SignalConversion: '<S28>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_of[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S28>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_of[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S28>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_of[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S28>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_of[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S28>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_of[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S28>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_j.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_j.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_j.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_j.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_j.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_of[i];
  }

  LM_TOS_0103_B.BusCreator1_j.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_j.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_j.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_j.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S28>/Bus Creator1' */

  /* SignalConversion: '<S29>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_mv[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S29>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_mv[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S29>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_mv[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S29>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_mv[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S29>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_mv[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S29>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_pj.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_pj.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_pj.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_pj.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_pj.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_mv[i];
  }

  LM_TOS_0103_B.BusCreator1_pj.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_pj.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_pj.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_pj.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S29>/Bus Creator1' */

  /* SignalConversion: '<S30>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_od[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S30>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_od[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S30>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_od[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S30>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_od[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S30>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_od[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S30>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_a.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_a.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_a.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_a.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_a.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_od[i];
  }

  LM_TOS_0103_B.BusCreator1_a.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_a.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_a.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_a.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S30>/Bus Creator1' */

  /* Concatenate: '<S9>/Vector Concatenate' */
  LM_TOS_0103_B.BusCreator.ObjectList_st[0] = LM_TOS_0103_B.BusCreator1;
  LM_TOS_0103_B.BusCreator.ObjectList_st[1] = LM_TOS_0103_B.BusCreator1_p;
  LM_TOS_0103_B.BusCreator.ObjectList_st[2] = LM_TOS_0103_B.BusCreator1_l;
  LM_TOS_0103_B.BusCreator.ObjectList_st[3] = LM_TOS_0103_B.BusCreator1_p3;
  LM_TOS_0103_B.BusCreator.ObjectList_st[4] = LM_TOS_0103_B.BusCreator1_f;
  LM_TOS_0103_B.BusCreator.ObjectList_st[5] = LM_TOS_0103_B.BusCreator1_b;
  LM_TOS_0103_B.BusCreator.ObjectList_st[6] = LM_TOS_0103_B.BusCreator1_d;
  LM_TOS_0103_B.BusCreator.ObjectList_st[7] = LM_TOS_0103_B.BusCreator1_j;
  LM_TOS_0103_B.BusCreator.ObjectList_st[8] = LM_TOS_0103_B.BusCreator1_pj;
  LM_TOS_0103_B.BusCreator.ObjectList_st[9] = LM_TOS_0103_B.BusCreator1_a;

  /* SignalConversion: '<S31>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_ip[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S31>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_ip[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S31>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_ip[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S31>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_ip[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S31>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_ip[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S31>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_c.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_c.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_c.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_c.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_c.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_ip[i];
  }

  LM_TOS_0103_B.BusCreator1_c.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_c.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_c.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_c.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S31>/Bus Creator1' */

  /* SignalConversion: '<S32>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_k[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S32>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_k[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S32>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_k[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S32>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_k[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S32>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_k[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S32>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_o.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_o.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_o.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_o.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_o.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_k[i];
  }

  LM_TOS_0103_B.BusCreator1_o.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_o.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_o.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_o.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S32>/Bus Creator1' */

  /* SignalConversion: '<S39>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_aq[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S39>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_aq[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S39>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_aq[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S39>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_aq[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S39>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_aq[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S39>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_l0.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_l0.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_l0.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_l0.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_l0.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_aq[i];
  }

  LM_TOS_0103_B.BusCreator1_l0.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_l0.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_l0.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_l0.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S39>/Bus Creator1' */

  /* SignalConversion: '<S40>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_nh[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S40>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_nh[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S40>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_nh[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S40>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_nh[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S40>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_nh[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S40>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_h.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_h.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_h.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_h.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_h.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_nh[i];
  }

  LM_TOS_0103_B.BusCreator1_h.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_h.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_h.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_h.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S40>/Bus Creator1' */

  /* SignalConversion: '<S41>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_mw[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S41>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_mw[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S41>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_mw[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S41>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_mw[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S41>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_mw[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S41>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_j0.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_j0.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_j0.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_j0.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_j0.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_mw[i];
  }

  LM_TOS_0103_B.BusCreator1_j0.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_j0.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_j0.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_j0.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S41>/Bus Creator1' */

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_iu[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_iu[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_iu[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_iu[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_iu[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S42>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_e.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_e.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_e.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_e.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_e.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_iu[i];
  }

  LM_TOS_0103_B.BusCreator1_e.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_e.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_e.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_e.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S42>/Bus Creator1' */

  /* SignalConversion: '<S43>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_h[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S43>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_h[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S43>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_h[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S43>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_h[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S43>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_h[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S43>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_k.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_k.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_k.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_k.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_k.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_h[i];
  }

  LM_TOS_0103_B.BusCreator1_k.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_k.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_k.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_k.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S43>/Bus Creator1' */

  /* SignalConversion: '<S44>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_it[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S44>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_it[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S44>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_it[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S44>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_it[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S44>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_it[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S44>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_kt.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_kt.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_kt.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_kt.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_kt.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_it[i];
  }

  LM_TOS_0103_B.BusCreator1_kt.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_kt.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_kt.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_kt.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S44>/Bus Creator1' */

  /* SignalConversion: '<S45>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_hw[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S45>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_hw[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S45>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_hw[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S45>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_hw[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S45>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_hw[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S45>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_oh.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_oh.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_oh.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_oh.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_oh.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_hw[i];
  }

  LM_TOS_0103_B.BusCreator1_oh.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_oh.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_oh.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_oh.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S45>/Bus Creator1' */

  /* SignalConversion: '<S46>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_j1[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S46>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_j1[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S46>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_j1[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S46>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_j1[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S46>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_j1[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S46>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_kv.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_kv.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_kv.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_kv.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_kv.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_j1[i];
  }

  LM_TOS_0103_B.BusCreator1_kv.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_kv.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_kv.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_kv.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S46>/Bus Creator1' */

  /* Concatenate: '<S10>/Vector Concatenate' */
  LM_TOS_0103_B.BusCreator_m.ObjectList_st[0] = LM_TOS_0103_B.BusCreator1_c;
  LM_TOS_0103_B.BusCreator_m.ObjectList_st[1] = LM_TOS_0103_B.BusCreator1_o;
  LM_TOS_0103_B.BusCreator_m.ObjectList_st[2] = LM_TOS_0103_B.BusCreator1_l0;
  LM_TOS_0103_B.BusCreator_m.ObjectList_st[3] = LM_TOS_0103_B.BusCreator1_h;
  LM_TOS_0103_B.BusCreator_m.ObjectList_st[4] = LM_TOS_0103_B.BusCreator1_j0;
  LM_TOS_0103_B.BusCreator_m.ObjectList_st[5] = LM_TOS_0103_B.BusCreator1_e;
  LM_TOS_0103_B.BusCreator_m.ObjectList_st[6] = LM_TOS_0103_B.BusCreator1_k;
  LM_TOS_0103_B.BusCreator_m.ObjectList_st[7] = LM_TOS_0103_B.BusCreator1_kt;
  LM_TOS_0103_B.BusCreator_m.ObjectList_st[8] = LM_TOS_0103_B.BusCreator1_oh;
  LM_TOS_0103_B.BusCreator_m.ObjectList_st[9] = LM_TOS_0103_B.BusCreator1_kv;

  /* SignalConversion: '<S47>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_mz[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S47>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_mz[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S47>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_mz[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S47>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_mz[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S47>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_mz[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S47>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_cz.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_cz.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_cz.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_cz.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_cz.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_mz[i];
  }

  LM_TOS_0103_B.BusCreator1_cz.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_cz.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_cz.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_cz.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S47>/Bus Creator1' */

  /* SignalConversion: '<S48>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_l3[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S48>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_l3[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S48>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_l3[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S48>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_l3[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S48>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_l3[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S48>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_j3.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_j3.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_j3.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_j3.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_j3.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_l3[i];
  }

  LM_TOS_0103_B.BusCreator1_j3.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_j3.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_j3.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_j3.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S48>/Bus Creator1' */

  /* SignalConversion: '<S55>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_hg[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S55>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_hg[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S55>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_hg[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S55>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_hg[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S55>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_hg[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S55>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_i.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_i.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_i.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_i.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_i.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_hg[i];
  }

  LM_TOS_0103_B.BusCreator1_i.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_i.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_i.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_i.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S55>/Bus Creator1' */

  /* SignalConversion: '<S56>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_d[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S56>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_d[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S56>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_d[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S56>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_d[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S56>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_d[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S56>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_m.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_m.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_m.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_m.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_m.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_d[i];
  }

  LM_TOS_0103_B.BusCreator1_m.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_m.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_m.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_m.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S56>/Bus Creator1' */

  /* SignalConversion: '<S57>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_b[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S57>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_b[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S57>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_b[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S57>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_b[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S57>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_b[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S57>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_cx.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_cx.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_cx.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_cx.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_cx.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_b[i];
  }

  LM_TOS_0103_B.BusCreator1_cx.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_cx.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_cx.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_cx.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S57>/Bus Creator1' */

  /* SignalConversion: '<S58>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_fl[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S58>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_fl[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S58>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_fl[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S58>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_fl[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S58>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_fl[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S58>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_d1.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_d1.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_d1.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_d1.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_d1.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_fl[i];
  }

  LM_TOS_0103_B.BusCreator1_d1.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_d1.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_d1.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_d1.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S58>/Bus Creator1' */

  /* SignalConversion: '<S59>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_br[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S59>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_br[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S59>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_br[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S59>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_br[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S59>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_br[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S59>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_bc.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_bc.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_bc.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_bc.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_bc.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_br[i];
  }

  LM_TOS_0103_B.BusCreator1_bc.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_bc.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_bc.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_bc.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S59>/Bus Creator1' */

  /* SignalConversion: '<S60>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_p3[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S60>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_p3[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S60>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_p3[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S60>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_p3[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S60>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_p3[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S60>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_px.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_px.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_px.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_px.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_px.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_p3[i];
  }

  LM_TOS_0103_B.BusCreator1_px.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_px.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_px.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_px.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S60>/Bus Creator1' */

  /* SignalConversion: '<S61>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_hm[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S61>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_hm[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S61>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_hm[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S61>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_hm[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S61>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_hm[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S61>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_a0.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_a0.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_a0.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_a0.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_a0.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_hm[i];
  }

  LM_TOS_0103_B.BusCreator1_a0.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_a0.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_a0.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_a0.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S61>/Bus Creator1' */

  /* SignalConversion: '<S62>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_jd[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S62>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_jd[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S62>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_jd[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S62>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_jd[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S62>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_jd[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S62>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_a4.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_a4.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_a4.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_a4.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_a4.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_jd[i];
  }

  LM_TOS_0103_B.BusCreator1_a4.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_a4.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_a4.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_a4.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S62>/Bus Creator1' */

  /* Concatenate: '<S11>/Vector Concatenate' */
  LM_TOS_0103_B.BusCreator_o.ObjectList_st[0] = LM_TOS_0103_B.BusCreator1_cz;
  LM_TOS_0103_B.BusCreator_o.ObjectList_st[1] = LM_TOS_0103_B.BusCreator1_j3;
  LM_TOS_0103_B.BusCreator_o.ObjectList_st[2] = LM_TOS_0103_B.BusCreator1_i;
  LM_TOS_0103_B.BusCreator_o.ObjectList_st[3] = LM_TOS_0103_B.BusCreator1_m;
  LM_TOS_0103_B.BusCreator_o.ObjectList_st[4] = LM_TOS_0103_B.BusCreator1_cx;
  LM_TOS_0103_B.BusCreator_o.ObjectList_st[5] = LM_TOS_0103_B.BusCreator1_d1;
  LM_TOS_0103_B.BusCreator_o.ObjectList_st[6] = LM_TOS_0103_B.BusCreator1_bc;
  LM_TOS_0103_B.BusCreator_o.ObjectList_st[7] = LM_TOS_0103_B.BusCreator1_px;
  LM_TOS_0103_B.BusCreator_o.ObjectList_st[8] = LM_TOS_0103_B.BusCreator1_a0;
  LM_TOS_0103_B.BusCreator_o.ObjectList_st[9] = LM_TOS_0103_B.BusCreator1_a4;

  /* SignalConversion: '<S63>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_jc[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S63>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_jc[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S63>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_jc[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S63>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_jc[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S63>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_jc[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S63>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_f2.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_f2.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_f2.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_f2.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_f2.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_jc[i];
  }

  LM_TOS_0103_B.BusCreator1_f2.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_f2.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_f2.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_f2.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S63>/Bus Creator1' */

  /* SignalConversion: '<S64>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_dm[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S64>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_dm[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S64>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_dm[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S64>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_dm[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S64>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_dm[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S64>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_ou.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_ou.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_ou.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_ou.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_ou.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_dm[i];
  }

  LM_TOS_0103_B.BusCreator1_ou.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_ou.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_ou.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_ou.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S64>/Bus Creator1' */

  /* SignalConversion: '<S71>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_l5[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S71>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_l5[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S71>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_l5[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S71>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_l5[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S71>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_l5[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S71>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_d1e.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_d1e.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_d1e.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_d1e.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_d1e.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_l5[i];
  }

  LM_TOS_0103_B.BusCreator1_d1e.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_d1e.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_d1e.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_d1e.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S71>/Bus Creator1' */

  /* SignalConversion: '<S72>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_ih[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S72>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_ih[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S72>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_ih[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S72>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_ih[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S72>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_ih[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S72>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_jv.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_jv.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_jv.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_jv.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_jv.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_ih[i];
  }

  LM_TOS_0103_B.BusCreator1_jv.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_jv.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_jv.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_jv.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S72>/Bus Creator1' */

  /* SignalConversion: '<S73>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_oh[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S73>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_oh[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S73>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_oh[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S73>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_oh[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S73>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_oh[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S73>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_ky.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_ky.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_ky.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_ky.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_ky.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_oh[i];
  }

  LM_TOS_0103_B.BusCreator1_ky.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_ky.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_ky.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_ky.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S73>/Bus Creator1' */

  /* SignalConversion: '<S74>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_k5[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S74>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_k5[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S74>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_k5[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S74>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_k5[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S74>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_k5[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S74>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_mm.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_mm.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_mm.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_mm.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_mm.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_k5[i];
  }

  LM_TOS_0103_B.BusCreator1_mm.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_mm.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_mm.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_mm.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S74>/Bus Creator1' */

  /* SignalConversion: '<S75>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_fc[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S75>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_fc[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S75>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_fc[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S75>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_fc[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S75>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_fc[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S75>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_ms.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_ms.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_ms.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_ms.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_ms.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_fc[i];
  }

  LM_TOS_0103_B.BusCreator1_ms.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_ms.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_ms.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_ms.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S75>/Bus Creator1' */

  /* SignalConversion: '<S76>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_dv[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S76>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_dv[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S76>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_dv[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S76>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_dv[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S76>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_dv[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S76>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_js.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_js.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_js.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_js.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_js.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_dv[i];
  }

  LM_TOS_0103_B.BusCreator1_js.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_js.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_js.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_js.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S76>/Bus Creator1' */

  /* SignalConversion: '<S77>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_k0[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S77>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_k0[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S77>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_k0[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S77>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_k0[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S77>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_k0[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S77>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_n.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_n.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_n.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_n.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_n.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_k0[i];
  }

  LM_TOS_0103_B.BusCreator1_n.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_n.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_n.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_n.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S77>/Bus Creator1' */

  /* SignalConversion: '<S78>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_dj[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S78>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_dj[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S78>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_dj[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S78>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_dj[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S78>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_dj[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S78>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_n3.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_n3.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_n3.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_n3.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_n3.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_dj[i];
  }

  LM_TOS_0103_B.BusCreator1_n3.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_n3.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_n3.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_n3.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S78>/Bus Creator1' */

  /* Concatenate: '<S12>/Vector Concatenate' */
  LM_TOS_0103_B.BusCreator_c.ObjectList_st[0] = LM_TOS_0103_B.BusCreator1_f2;
  LM_TOS_0103_B.BusCreator_c.ObjectList_st[1] = LM_TOS_0103_B.BusCreator1_ou;
  LM_TOS_0103_B.BusCreator_c.ObjectList_st[2] = LM_TOS_0103_B.BusCreator1_d1e;
  LM_TOS_0103_B.BusCreator_c.ObjectList_st[3] = LM_TOS_0103_B.BusCreator1_jv;
  LM_TOS_0103_B.BusCreator_c.ObjectList_st[4] = LM_TOS_0103_B.BusCreator1_ky;
  LM_TOS_0103_B.BusCreator_c.ObjectList_st[5] = LM_TOS_0103_B.BusCreator1_mm;
  LM_TOS_0103_B.BusCreator_c.ObjectList_st[6] = LM_TOS_0103_B.BusCreator1_ms;
  LM_TOS_0103_B.BusCreator_c.ObjectList_st[7] = LM_TOS_0103_B.BusCreator1_js;
  LM_TOS_0103_B.BusCreator_c.ObjectList_st[8] = LM_TOS_0103_B.BusCreator1_n;
  LM_TOS_0103_B.BusCreator_c.ObjectList_st[9] = LM_TOS_0103_B.BusCreator1_n3;

  /* SignalConversion: '<S79>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_g[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S79>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_g[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S79>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_g[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S79>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_g[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S79>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_g[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S79>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_ci.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_ci.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_ci.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_ci.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_ci.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_g[i];
  }

  LM_TOS_0103_B.BusCreator1_ci.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_ci.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_ci.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_ci.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S79>/Bus Creator1' */

  /* SignalConversion: '<S80>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_ki[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S80>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_ki[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S80>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_ki[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S80>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_ki[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S80>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_ki[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S80>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_fp.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_fp.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_fp.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_fp.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_fp.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_ki[i];
  }

  LM_TOS_0103_B.BusCreator1_fp.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_fp.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_fp.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_fp.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S80>/Bus Creator1' */

  /* SignalConversion: '<S87>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_ls[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S87>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_ls[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S87>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_ls[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S87>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_ls[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S87>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_ls[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S87>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_g.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_g.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_g.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_g.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_g.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_ls[i];
  }

  LM_TOS_0103_B.BusCreator1_g.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_g.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_g.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_g.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S87>/Bus Creator1' */

  /* SignalConversion: '<S88>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_hp[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S88>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_hp[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S88>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_hp[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S88>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_hp[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S88>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_hp[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S88>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_mm3.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_mm3.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_mm3.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_mm3.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_mm3.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_hp[i];
  }

  LM_TOS_0103_B.BusCreator1_mm3.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_mm3.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_mm3.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_mm3.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S88>/Bus Creator1' */

  /* SignalConversion: '<S89>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_mv2[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S89>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_mv2[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S89>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_mv2[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S89>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_mv2[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S89>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_mv2[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S89>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_oq.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_oq.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_oq.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_oq.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_oq.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_mv2[i];
  }

  LM_TOS_0103_B.BusCreator1_oq.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_oq.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_oq.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_oq.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S89>/Bus Creator1' */

  /* SignalConversion: '<S90>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_fx[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S90>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_fx[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S90>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_fx[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S90>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_fx[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S90>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_fx[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S90>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_le.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_le.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_le.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_le.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_le.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_fx[i];
  }

  LM_TOS_0103_B.BusCreator1_le.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_le.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_le.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_le.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S90>/Bus Creator1' */

  /* SignalConversion: '<S91>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_iv[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S91>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_iv[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S91>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_iv[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S91>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_iv[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S91>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_iv[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S91>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_lb.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_lb.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_lb.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_lb.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_lb.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_iv[i];
  }

  LM_TOS_0103_B.BusCreator1_lb.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_lb.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_lb.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_lb.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S91>/Bus Creator1' */

  /* SignalConversion: '<S92>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_e[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S92>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_e[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S92>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_e[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S92>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_e[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S92>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_e[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S92>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_l4.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_l4.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_l4.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_l4.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_l4.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_e[i];
  }

  LM_TOS_0103_B.BusCreator1_l4.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_l4.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_l4.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_l4.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S92>/Bus Creator1' */

  /* SignalConversion: '<S93>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_b4[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S93>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_b4[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S93>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_b4[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S93>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_b4[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S93>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_b4[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S93>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_o1.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_o1.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_o1.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_o1.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_o1.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_b4[i];
  }

  LM_TOS_0103_B.BusCreator1_o1.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_o1.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_o1.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_o1.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S93>/Bus Creator1' */

  /* SignalConversion: '<S94>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_bv[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S94>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_bv[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S94>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_bv[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S94>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_bv[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S94>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_0103_B.VectorConcatenate_bv[4] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S94>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_ij.dis2EgoLaneCenter =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.dis2EgoLaneCenter;
  LM_TOS_0103_B.BusCreator1_ij.TTC_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.TTC_f;
  LM_TOS_0103_B.BusCreator1_ij.ID_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.ID_un8;
  LM_TOS_0103_B.BusCreator1_ij.Index_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_0103_B.BusCreator1_ij.probWithinLane_arr_f[i] =
      LM_TOS_0103_B.VectorConcatenate_bv[i];
  }

  LM_TOS_0103_B.BusCreator1_ij.probCutIn_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probCutIn_f;
  LM_TOS_0103_B.BusCreator1_ij.probCutOut_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probCutOut_f;
  LM_TOS_0103_B.BusCreator1_ij.overlap_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.overlap_f;
  LM_TOS_0103_B.BusCreator1_ij.trackingTimeWithinLane_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S94>/Bus Creator1' */

  /* Concatenate: '<S13>/Vector Concatenate' */
  LM_TOS_0103_B.BusCreator_c2.ObjectList_st[0] = LM_TOS_0103_B.BusCreator1_ci;
  LM_TOS_0103_B.BusCreator_c2.ObjectList_st[1] = LM_TOS_0103_B.BusCreator1_fp;
  LM_TOS_0103_B.BusCreator_c2.ObjectList_st[2] = LM_TOS_0103_B.BusCreator1_g;
  LM_TOS_0103_B.BusCreator_c2.ObjectList_st[3] = LM_TOS_0103_B.BusCreator1_mm3;
  LM_TOS_0103_B.BusCreator_c2.ObjectList_st[4] = LM_TOS_0103_B.BusCreator1_oq;
  LM_TOS_0103_B.BusCreator_c2.ObjectList_st[5] = LM_TOS_0103_B.BusCreator1_le;
  LM_TOS_0103_B.BusCreator_c2.ObjectList_st[6] = LM_TOS_0103_B.BusCreator1_lb;
  LM_TOS_0103_B.BusCreator_c2.ObjectList_st[7] = LM_TOS_0103_B.BusCreator1_l4;
  LM_TOS_0103_B.BusCreator_c2.ObjectList_st[8] = LM_TOS_0103_B.BusCreator1_o1;
  LM_TOS_0103_B.BusCreator_c2.ObjectList_st[9] = LM_TOS_0103_B.BusCreator1_ij;

  /* SignalConversion: '<S17>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_hs[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S17>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_hs[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S17>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_hs[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S17>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_hs[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S17>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_ch.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_hs[0];
  LM_TOS_0103_B.BusCreator1_ch.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_hs[1];
  LM_TOS_0103_B.BusCreator1_ch.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_hs[2];
  LM_TOS_0103_B.BusCreator1_ch.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_hs[3];
  LM_TOS_0103_B.BusCreator1_ch.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_ch.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_ch.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_ch.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_ch.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_ch.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.quality_f;

  /* SignalConversion: '<S18>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_ep[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S18>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_ep[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S18>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_ep[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S18>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_ep[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S18>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_nd.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_ep[0];
  LM_TOS_0103_B.BusCreator1_nd.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_ep[1];
  LM_TOS_0103_B.BusCreator1_nd.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_ep[2];
  LM_TOS_0103_B.BusCreator1_nd.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_ep[3];
  LM_TOS_0103_B.BusCreator1_nd.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_nd.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_nd.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_nd.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_nd.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_nd.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.quality_f;

  /* SignalConversion: '<S19>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_ey[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S19>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_ey[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S19>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_ey[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S19>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_ey[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S19>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_f5.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_ey[0];
  LM_TOS_0103_B.BusCreator1_f5.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_ey[1];
  LM_TOS_0103_B.BusCreator1_f5.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_ey[2];
  LM_TOS_0103_B.BusCreator1_f5.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_ey[3];
  LM_TOS_0103_B.BusCreator1_f5.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_f5.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_f5.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_f5.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_f5.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_f5.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.quality_f;

  /* SignalConversion: '<S20>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_hb[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S20>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_hb[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S20>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_hb[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S20>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_hb[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S20>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_hl.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_hb[0];
  LM_TOS_0103_B.BusCreator1_hl.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_hb[1];
  LM_TOS_0103_B.BusCreator1_hl.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_hb[2];
  LM_TOS_0103_B.BusCreator1_hl.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_hb[3];
  LM_TOS_0103_B.BusCreator1_hl.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_hl.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_hl.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_hl.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_hl.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_hl.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.quality_f;

  /* SignalConversion: '<S21>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_lg[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S21>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_lg[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S21>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_lg[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S21>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_lg[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S21>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_ls.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_lg[0];
  LM_TOS_0103_B.BusCreator1_ls.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_lg[1];
  LM_TOS_0103_B.BusCreator1_ls.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_lg[2];
  LM_TOS_0103_B.BusCreator1_ls.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_lg[3];
  LM_TOS_0103_B.BusCreator1_ls.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_ls.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_ls.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_ls.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_ls.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_ls.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.quality_f;

  /* SignalConversion: '<S22>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_aw[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S22>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_aw[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S22>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_aw[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S22>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_aw[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S22>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_lt.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_aw[0];
  LM_TOS_0103_B.BusCreator1_lt.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_aw[1];
  LM_TOS_0103_B.BusCreator1_lt.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_aw[2];
  LM_TOS_0103_B.BusCreator1_lt.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_aw[3];
  LM_TOS_0103_B.BusCreator1_lt.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_lt.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_lt.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_lt.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_lt.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_lt.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.quality_f;

  /* Concatenate: '<S9>/Vector Concatenate1' */
  LM_TOS_0103_B.BusCreator.SRGMENT[0] = LM_TOS_0103_B.BusCreator1_ch;
  LM_TOS_0103_B.BusCreator.SRGMENT[1] = LM_TOS_0103_B.BusCreator1_nd;
  LM_TOS_0103_B.BusCreator.SRGMENT[2] = LM_TOS_0103_B.BusCreator1_f5;
  LM_TOS_0103_B.BusCreator.SRGMENT[3] = LM_TOS_0103_B.BusCreator1_hl;
  LM_TOS_0103_B.BusCreator.SRGMENT[4] = LM_TOS_0103_B.BusCreator1_ls;
  LM_TOS_0103_B.BusCreator.SRGMENT[5] = LM_TOS_0103_B.BusCreator1_lt;

  /* SignalConversion: '<S33>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_gx[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S33>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_gx[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S33>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_gx[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S33>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_gx[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S33>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_ph.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_gx[0];
  LM_TOS_0103_B.BusCreator1_ph.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_gx[1];
  LM_TOS_0103_B.BusCreator1_ph.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_gx[2];
  LM_TOS_0103_B.BusCreator1_ph.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_gx[3];
  LM_TOS_0103_B.BusCreator1_ph.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_ph.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_ph.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_ph.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_ph.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_ph.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.quality_f;

  /* SignalConversion: '<S34>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_eo[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S34>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_eo[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S34>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_eo[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S34>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_eo[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S34>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_ja.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_eo[0];
  LM_TOS_0103_B.BusCreator1_ja.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_eo[1];
  LM_TOS_0103_B.BusCreator1_ja.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_eo[2];
  LM_TOS_0103_B.BusCreator1_ja.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_eo[3];
  LM_TOS_0103_B.BusCreator1_ja.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_ja.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_ja.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_ja.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_ja.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_ja.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.quality_f;

  /* SignalConversion: '<S35>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_nd[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S35>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_nd[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S35>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_nd[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S35>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_nd[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S35>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_pj0.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_nd[0];
  LM_TOS_0103_B.BusCreator1_pj0.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_nd[1];
  LM_TOS_0103_B.BusCreator1_pj0.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_nd[2];
  LM_TOS_0103_B.BusCreator1_pj0.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_nd[3];
  LM_TOS_0103_B.BusCreator1_pj0.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_pj0.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_pj0.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_pj0.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_pj0.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_pj0.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.quality_f;

  /* SignalConversion: '<S36>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_le[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S36>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_le[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S36>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_le[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S36>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_le[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S36>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_f2j.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_le[0];
  LM_TOS_0103_B.BusCreator1_f2j.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_le[1];
  LM_TOS_0103_B.BusCreator1_f2j.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_le[2];
  LM_TOS_0103_B.BusCreator1_f2j.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_le[3];
  LM_TOS_0103_B.BusCreator1_f2j.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_f2j.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_f2j.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_f2j.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_f2j.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_f2j.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.quality_f;

  /* SignalConversion: '<S37>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_oa[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S37>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_oa[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S37>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_oa[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S37>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_oa[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S37>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_ml.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_oa[0];
  LM_TOS_0103_B.BusCreator1_ml.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_oa[1];
  LM_TOS_0103_B.BusCreator1_ml.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_oa[2];
  LM_TOS_0103_B.BusCreator1_ml.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_oa[3];
  LM_TOS_0103_B.BusCreator1_ml.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_ml.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_ml.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_ml.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_ml.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_ml.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.quality_f;

  /* SignalConversion: '<S38>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_ar[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S38>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_ar[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S38>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_ar[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S38>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_ar[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S38>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_a05.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_ar[0];
  LM_TOS_0103_B.BusCreator1_a05.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_ar[1];
  LM_TOS_0103_B.BusCreator1_a05.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_ar[2];
  LM_TOS_0103_B.BusCreator1_a05.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_ar[3];
  LM_TOS_0103_B.BusCreator1_a05.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_a05.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_a05.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_a05.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_a05.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_a05.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.quality_f;

  /* Concatenate: '<S10>/Vector Concatenate1' */
  LM_TOS_0103_B.BusCreator_m.SRGMENT[0] = LM_TOS_0103_B.BusCreator1_ph;
  LM_TOS_0103_B.BusCreator_m.SRGMENT[1] = LM_TOS_0103_B.BusCreator1_ja;
  LM_TOS_0103_B.BusCreator_m.SRGMENT[2] = LM_TOS_0103_B.BusCreator1_pj0;
  LM_TOS_0103_B.BusCreator_m.SRGMENT[3] = LM_TOS_0103_B.BusCreator1_f2j;
  LM_TOS_0103_B.BusCreator_m.SRGMENT[4] = LM_TOS_0103_B.BusCreator1_ml;
  LM_TOS_0103_B.BusCreator_m.SRGMENT[5] = LM_TOS_0103_B.BusCreator1_a05;

  /* SignalConversion: '<S49>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_ka[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S49>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_ka[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S49>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_ka[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S49>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_ka[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S49>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_go.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_ka[0];
  LM_TOS_0103_B.BusCreator1_go.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_ka[1];
  LM_TOS_0103_B.BusCreator1_go.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_ka[2];
  LM_TOS_0103_B.BusCreator1_go.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_ka[3];
  LM_TOS_0103_B.BusCreator1_go.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_go.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_go.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_go.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_go.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_go.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.quality_f;

  /* SignalConversion: '<S50>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_gs[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S50>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_gs[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S50>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_gs[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S50>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_gs[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S50>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_g4.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_gs[0];
  LM_TOS_0103_B.BusCreator1_g4.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_gs[1];
  LM_TOS_0103_B.BusCreator1_g4.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_gs[2];
  LM_TOS_0103_B.BusCreator1_g4.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_gs[3];
  LM_TOS_0103_B.BusCreator1_g4.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_g4.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_g4.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_g4.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_g4.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_g4.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.quality_f;

  /* SignalConversion: '<S51>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_oi[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S51>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_oi[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S51>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_oi[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S51>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_oi[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S51>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_jy.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_oi[0];
  LM_TOS_0103_B.BusCreator1_jy.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_oi[1];
  LM_TOS_0103_B.BusCreator1_jy.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_oi[2];
  LM_TOS_0103_B.BusCreator1_jy.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_oi[3];
  LM_TOS_0103_B.BusCreator1_jy.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_jy.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_jy.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_jy.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_jy.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_jy.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.quality_f;

  /* SignalConversion: '<S52>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_pv[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S52>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_pv[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S52>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_pv[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S52>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_pv[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S52>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_gg.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_pv[0];
  LM_TOS_0103_B.BusCreator1_gg.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_pv[1];
  LM_TOS_0103_B.BusCreator1_gg.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_pv[2];
  LM_TOS_0103_B.BusCreator1_gg.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_pv[3];
  LM_TOS_0103_B.BusCreator1_gg.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_gg.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_gg.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_gg.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_gg.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_gg.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.quality_f;

  /* SignalConversion: '<S53>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_c5[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S53>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_c5[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S53>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_c5[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S53>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_c5[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S53>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_kq.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_c5[0];
  LM_TOS_0103_B.BusCreator1_kq.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_c5[1];
  LM_TOS_0103_B.BusCreator1_kq.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_c5[2];
  LM_TOS_0103_B.BusCreator1_kq.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_c5[3];
  LM_TOS_0103_B.BusCreator1_kq.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_kq.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_kq.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_kq.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_kq.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_kq.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.quality_f;

  /* SignalConversion: '<S54>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_ni[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S54>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_ni[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S54>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_ni[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S54>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_ni[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S54>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_nt.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_ni[0];
  LM_TOS_0103_B.BusCreator1_nt.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_ni[1];
  LM_TOS_0103_B.BusCreator1_nt.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_ni[2];
  LM_TOS_0103_B.BusCreator1_nt.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_ni[3];
  LM_TOS_0103_B.BusCreator1_nt.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_nt.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_nt.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_nt.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_nt.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_nt.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.quality_f;

  /* Concatenate: '<S11>/Vector Concatenate1' */
  LM_TOS_0103_B.BusCreator_o.SRGMENT[0] = LM_TOS_0103_B.BusCreator1_go;
  LM_TOS_0103_B.BusCreator_o.SRGMENT[1] = LM_TOS_0103_B.BusCreator1_g4;
  LM_TOS_0103_B.BusCreator_o.SRGMENT[2] = LM_TOS_0103_B.BusCreator1_jy;
  LM_TOS_0103_B.BusCreator_o.SRGMENT[3] = LM_TOS_0103_B.BusCreator1_gg;
  LM_TOS_0103_B.BusCreator_o.SRGMENT[4] = LM_TOS_0103_B.BusCreator1_kq;
  LM_TOS_0103_B.BusCreator_o.SRGMENT[5] = LM_TOS_0103_B.BusCreator1_nt;

  /* SignalConversion: '<S65>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_k02[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S65>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_k02[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S65>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_k02[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S65>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_k02[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S65>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_lc.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_k02[0];
  LM_TOS_0103_B.BusCreator1_lc.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_k02[1];
  LM_TOS_0103_B.BusCreator1_lc.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_k02[2];
  LM_TOS_0103_B.BusCreator1_lc.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_k02[3];
  LM_TOS_0103_B.BusCreator1_lc.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_lc.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_lc.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_lc.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_lc.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_lc.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.quality_f;

  /* SignalConversion: '<S66>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_le0[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S66>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_le0[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S66>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_le0[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S66>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_le0[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S66>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_ka.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_le0[0];
  LM_TOS_0103_B.BusCreator1_ka.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_le0[1];
  LM_TOS_0103_B.BusCreator1_ka.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_le0[2];
  LM_TOS_0103_B.BusCreator1_ka.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_le0[3];
  LM_TOS_0103_B.BusCreator1_ka.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_ka.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_ka.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_ka.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_ka.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_ka.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.quality_f;

  /* SignalConversion: '<S67>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_ji[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S67>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_ji[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S67>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_ji[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S67>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_ji[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S67>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_oz.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_ji[0];
  LM_TOS_0103_B.BusCreator1_oz.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_ji[1];
  LM_TOS_0103_B.BusCreator1_oz.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_ji[2];
  LM_TOS_0103_B.BusCreator1_oz.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_ji[3];
  LM_TOS_0103_B.BusCreator1_oz.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_oz.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_oz.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_oz.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_oz.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_oz.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.quality_f;

  /* SignalConversion: '<S68>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_ph[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S68>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_ph[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S68>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_ph[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S68>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_ph[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S68>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_na.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_ph[0];
  LM_TOS_0103_B.BusCreator1_na.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_ph[1];
  LM_TOS_0103_B.BusCreator1_na.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_ph[2];
  LM_TOS_0103_B.BusCreator1_na.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_ph[3];
  LM_TOS_0103_B.BusCreator1_na.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_na.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_na.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_na.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_na.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_na.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.quality_f;

  /* SignalConversion: '<S69>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_oq[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S69>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_oq[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S69>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_oq[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S69>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_oq[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S69>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_i5.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_oq[0];
  LM_TOS_0103_B.BusCreator1_i5.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_oq[1];
  LM_TOS_0103_B.BusCreator1_i5.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_oq[2];
  LM_TOS_0103_B.BusCreator1_i5.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_oq[3];
  LM_TOS_0103_B.BusCreator1_i5.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_i5.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_i5.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_i5.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_i5.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_i5.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.quality_f;

  /* SignalConversion: '<S70>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_d5[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S70>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_d5[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S70>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_d5[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S70>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_d5[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S70>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_nq.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_d5[0];
  LM_TOS_0103_B.BusCreator1_nq.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_d5[1];
  LM_TOS_0103_B.BusCreator1_nq.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_d5[2];
  LM_TOS_0103_B.BusCreator1_nq.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_d5[3];
  LM_TOS_0103_B.BusCreator1_nq.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_nq.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_nq.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_nq.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_nq.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_nq.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.quality_f;

  /* Concatenate: '<S12>/Vector Concatenate1' */
  LM_TOS_0103_B.BusCreator_c.SRGMENT[0] = LM_TOS_0103_B.BusCreator1_lc;
  LM_TOS_0103_B.BusCreator_c.SRGMENT[1] = LM_TOS_0103_B.BusCreator1_ka;
  LM_TOS_0103_B.BusCreator_c.SRGMENT[2] = LM_TOS_0103_B.BusCreator1_oz;
  LM_TOS_0103_B.BusCreator_c.SRGMENT[3] = LM_TOS_0103_B.BusCreator1_na;
  LM_TOS_0103_B.BusCreator_c.SRGMENT[4] = LM_TOS_0103_B.BusCreator1_i5;
  LM_TOS_0103_B.BusCreator_c.SRGMENT[5] = LM_TOS_0103_B.BusCreator1_nq;

  /* SignalConversion: '<S81>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_l4[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S81>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_l4[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S81>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_l4[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S81>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_l4[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S81>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_fc.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_l4[0];
  LM_TOS_0103_B.BusCreator1_fc.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_l4[1];
  LM_TOS_0103_B.BusCreator1_fc.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_l4[2];
  LM_TOS_0103_B.BusCreator1_fc.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_l4[3];
  LM_TOS_0103_B.BusCreator1_fc.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_fc.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_fc.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_fc.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_fc.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_fc.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.quality_f;

  /* SignalConversion: '<S82>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_k5v[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S82>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_k5v[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S82>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_k5v[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S82>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_k5v[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S82>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_cp.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_k5v[0];
  LM_TOS_0103_B.BusCreator1_cp.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_k5v[1];
  LM_TOS_0103_B.BusCreator1_cp.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_k5v[2];
  LM_TOS_0103_B.BusCreator1_cp.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_k5v[3];
  LM_TOS_0103_B.BusCreator1_cp.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_cp.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_cp.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_cp.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_cp.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_cp.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.quality_f;

  /* SignalConversion: '<S83>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_la[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S83>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_la[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S83>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_la[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S83>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_la[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S83>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_of.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_la[0];
  LM_TOS_0103_B.BusCreator1_of.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_la[1];
  LM_TOS_0103_B.BusCreator1_of.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_la[2];
  LM_TOS_0103_B.BusCreator1_of.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_la[3];
  LM_TOS_0103_B.BusCreator1_of.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_of.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_of.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_of.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_of.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_of.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.quality_f;

  /* SignalConversion: '<S84>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_fk[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S84>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_fk[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S84>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_fk[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S84>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_fk[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S84>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_cd.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_fk[0];
  LM_TOS_0103_B.BusCreator1_cd.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_fk[1];
  LM_TOS_0103_B.BusCreator1_cd.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_fk[2];
  LM_TOS_0103_B.BusCreator1_cd.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_fk[3];
  LM_TOS_0103_B.BusCreator1_cd.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_cd.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_cd.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_cd.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_cd.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_cd.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.quality_f;

  /* SignalConversion: '<S85>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_bn[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S85>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_bn[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S85>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_bn[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S85>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_bn[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S85>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_l0m.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_bn[0];
  LM_TOS_0103_B.BusCreator1_l0m.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_bn[1];
  LM_TOS_0103_B.BusCreator1_l0m.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_bn[2];
  LM_TOS_0103_B.BusCreator1_l0m.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_bn[3];
  LM_TOS_0103_B.BusCreator1_l0m.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_l0m.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_l0m.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_l0m.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_l0m.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_l0m.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.quality_f;

  /* SignalConversion: '<S86>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_0103_B.VectorConcatenate_g0[0] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S86>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_0103_B.VectorConcatenate_g0[1] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S86>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_0103_B.VectorConcatenate_g0[2] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S86>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_0103_B.VectorConcatenate_g0[3] =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S86>/Bus Creator1' */
  LM_TOS_0103_B.BusCreator1_cj.coef_arr_f[0] =
    LM_TOS_0103_B.VectorConcatenate_g0[0];
  LM_TOS_0103_B.BusCreator1_cj.coef_arr_f[1] =
    LM_TOS_0103_B.VectorConcatenate_g0[1];
  LM_TOS_0103_B.BusCreator1_cj.coef_arr_f[2] =
    LM_TOS_0103_B.VectorConcatenate_g0[2];
  LM_TOS_0103_B.BusCreator1_cj.coef_arr_f[3] =
    LM_TOS_0103_B.VectorConcatenate_g0[3];
  LM_TOS_0103_B.BusCreator1_cj.dlowerLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.dlowerLimit_f;
  LM_TOS_0103_B.BusCreator1_cj.dupperLimit_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.dupperLimit_f;
  LM_TOS_0103_B.BusCreator1_cj.numOfSegment_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.numOfSegment_un8;
  LM_TOS_0103_B.BusCreator1_cj.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.available_b;
  LM_TOS_0103_B.BusCreator1_cj.detectedByVideo_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.detectedByVideo_b;
  LM_TOS_0103_B.BusCreator1_cj.quality_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.quality_f;

  /* Concatenate: '<S13>/Vector Concatenate1' */
  LM_TOS_0103_B.BusCreator_c2.SRGMENT[0] = LM_TOS_0103_B.BusCreator1_fc;
  LM_TOS_0103_B.BusCreator_c2.SRGMENT[1] = LM_TOS_0103_B.BusCreator1_cp;
  LM_TOS_0103_B.BusCreator_c2.SRGMENT[2] = LM_TOS_0103_B.BusCreator1_of;
  LM_TOS_0103_B.BusCreator_c2.SRGMENT[3] = LM_TOS_0103_B.BusCreator1_cd;
  LM_TOS_0103_B.BusCreator_c2.SRGMENT[4] = LM_TOS_0103_B.BusCreator1_l0m;
  LM_TOS_0103_B.BusCreator_c2.SRGMENT[5] = LM_TOS_0103_B.BusCreator1_cj;

  /* BusCreator: '<S9>/Bus Creator' */
  LM_TOS_0103_B.BusCreator.objectNum_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_0.objectNum_un8;
  LM_TOS_0103_B.BusCreator.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_0.available_b;
  LM_TOS_0103_B.BusCreator.lane_dwidth_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_0.lane_dwidth_f;
  LM_TOS_0103_B.BusCreator.front_lane_length_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_0.front_lane_length_f;
  LM_TOS_0103_B.BusCreator.rear_lane_length_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_0.rear_lane_length_f;

  /* BusCreator: '<S10>/Bus Creator' */
  LM_TOS_0103_B.BusCreator_m.objectNum_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_1.objectNum_un8;
  LM_TOS_0103_B.BusCreator_m.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_1.available_b;
  LM_TOS_0103_B.BusCreator_m.lane_dwidth_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_1.lane_dwidth_f;
  LM_TOS_0103_B.BusCreator_m.front_lane_length_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_1.front_lane_length_f;
  LM_TOS_0103_B.BusCreator_m.rear_lane_length_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_1.rear_lane_length_f;

  /* BusCreator: '<S11>/Bus Creator' */
  LM_TOS_0103_B.BusCreator_o.objectNum_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_2.objectNum_un8;
  LM_TOS_0103_B.BusCreator_o.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_2.available_b;
  LM_TOS_0103_B.BusCreator_o.lane_dwidth_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_2.lane_dwidth_f;
  LM_TOS_0103_B.BusCreator_o.front_lane_length_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_2.front_lane_length_f;
  LM_TOS_0103_B.BusCreator_o.rear_lane_length_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_2.rear_lane_length_f;

  /* BusCreator: '<S12>/Bus Creator' */
  LM_TOS_0103_B.BusCreator_c.objectNum_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_3.objectNum_un8;
  LM_TOS_0103_B.BusCreator_c.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_3.available_b;
  LM_TOS_0103_B.BusCreator_c.lane_dwidth_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_3.lane_dwidth_f;
  LM_TOS_0103_B.BusCreator_c.front_lane_length_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_3.front_lane_length_f;
  LM_TOS_0103_B.BusCreator_c.rear_lane_length_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_3.rear_lane_length_f;

  /* BusCreator: '<S13>/Bus Creator' */
  LM_TOS_0103_B.BusCreator_c2.objectNum_un8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_4.objectNum_un8;
  LM_TOS_0103_B.BusCreator_c2.available_b =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_4.available_b;
  LM_TOS_0103_B.BusCreator_c2.lane_dwidth_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_4.lane_dwidth_f;
  LM_TOS_0103_B.BusCreator_c2.front_lane_length_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_4.front_lane_length_f;
  LM_TOS_0103_B.BusCreator_c2.rear_lane_length_f =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o2.lane_4.rear_lane_length_f;

  /* Concatenate: '<S7>/Vector Concatenate' */
  LM_TOS_0103_B.VectorConcatenate[0] = LM_TOS_0103_B.BusCreator;
  LM_TOS_0103_B.VectorConcatenate[1] = LM_TOS_0103_B.BusCreator_m;
  LM_TOS_0103_B.VectorConcatenate[2] = LM_TOS_0103_B.BusCreator_o;
  LM_TOS_0103_B.VectorConcatenate[3] = LM_TOS_0103_B.BusCreator_c;
  LM_TOS_0103_B.VectorConcatenate[4] = LM_TOS_0103_B.BusCreator_c2;

  /* Selector: '<S98>/Selector' incorporates:
   *  Constant: '<S98>/Constant'
   */
  LM_TOS_0103_B.Selector_a = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_m];

  /* DataTypeConversion: '<S98>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion = LM_TOS_0103_B.Selector_a.obj_attr;

  /* DataTypeConversion: '<S98>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1 = LM_TOS_0103_B.Selector_a.dy;

  /* DataTypeConversion: '<S98>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2 = LM_TOS_0103_B.Selector_a.obj_type;

  /* DataTypeConversion: '<S98>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3 = LM_TOS_0103_B.Selector_a.dx;

  /* DataTypeConversion: '<S98>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4 = LM_TOS_0103_B.Selector_a.objject_ID;

  /* S-Function (rti_commonblock): '<S130>/S-Function1' incorporates:
   *  Constant: '<S98>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300]->processed;
      LM_TOS_0103_B.SFunction1_o2 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300]->timestamp;
      LM_TOS_0103_B.SFunction1_o3 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300]->deltatime;
      LM_TOS_0103_B.SFunction1_o4 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_d - ( 0 ) )
        / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion ) + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1 -
        ( -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2 ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3 -
        ( -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4 ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S99>/Selector' incorporates:
   *  Constant: '<S99>/Constant'
   */
  LM_TOS_0103_B.Selector_b = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_c];

  /* DataTypeConversion: '<S99>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_g = LM_TOS_0103_B.Selector_b.obj_attr;

  /* DataTypeConversion: '<S99>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_n = LM_TOS_0103_B.Selector_b.dy;

  /* DataTypeConversion: '<S99>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_k = LM_TOS_0103_B.Selector_b.obj_type;

  /* DataTypeConversion: '<S99>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_i = LM_TOS_0103_B.Selector_b.dx;

  /* DataTypeConversion: '<S99>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_a = LM_TOS_0103_B.Selector_b.objject_ID;

  /* S-Function (rti_commonblock): '<S131>/S-Function1' incorporates:
   *  Constant: '<S99>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_o = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301]->processed;
      LM_TOS_0103_B.SFunction1_o2_d = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_c = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_n = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_o - ( 0 ) )
        / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_g ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_n - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_k ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_i - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_a ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S100>/Selector' incorporates:
   *  Constant: '<S100>/Constant'
   */
  LM_TOS_0103_B.Selector_i = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_j];

  /* DataTypeConversion: '<S100>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_f = LM_TOS_0103_B.Selector_i.obj_attr;

  /* DataTypeConversion: '<S100>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_c = LM_TOS_0103_B.Selector_i.dy;

  /* DataTypeConversion: '<S100>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_m = LM_TOS_0103_B.Selector_i.obj_type;

  /* DataTypeConversion: '<S100>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_m = LM_TOS_0103_B.Selector_i.dx;

  /* DataTypeConversion: '<S100>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_d = LM_TOS_0103_B.Selector_i.objject_ID;

  /* S-Function (rti_commonblock): '<S132>/S-Function1' incorporates:
   *  Constant: '<S100>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_l = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A]->processed;
      LM_TOS_0103_B.SFunction1_o2_p = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_k = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_b = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_g - ( 0 ) )
        / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_f ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_c - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_m ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_m - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_d ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S101>/Selector' incorporates:
   *  Constant: '<S101>/Constant'
   */
  LM_TOS_0103_B.Selector_f = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_f];

  /* DataTypeConversion: '<S101>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_e = LM_TOS_0103_B.Selector_f.obj_attr;

  /* DataTypeConversion: '<S101>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_k = LM_TOS_0103_B.Selector_f.dy;

  /* DataTypeConversion: '<S101>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_a = LM_TOS_0103_B.Selector_f.obj_type;

  /* DataTypeConversion: '<S101>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_p = LM_TOS_0103_B.Selector_f.dx;

  /* DataTypeConversion: '<S101>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_aq = LM_TOS_0103_B.Selector_f.objject_ID;

  /* S-Function (rti_commonblock): '<S133>/S-Function1' incorporates:
   *  Constant: '<S101>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_k = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B]->processed;
      LM_TOS_0103_B.SFunction1_o2_i = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_d = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_a = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_n - ( 0 ) )
        / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_e ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_k - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_a ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_p - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_aq ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S102>/Selector' incorporates:
   *  Constant: '<S102>/Constant'
   */
  LM_TOS_0103_B.Selector_p = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_mj];

  /* DataTypeConversion: '<S102>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_o = LM_TOS_0103_B.Selector_p.obj_attr;

  /* DataTypeConversion: '<S102>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_d = LM_TOS_0103_B.Selector_p.dy;

  /* DataTypeConversion: '<S102>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_ap = LM_TOS_0103_B.Selector_p.obj_type;

  /* DataTypeConversion: '<S102>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_l = LM_TOS_0103_B.Selector_p.dx;

  /* DataTypeConversion: '<S102>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_j = LM_TOS_0103_B.Selector_p.objject_ID;

  /* S-Function (rti_commonblock): '<S134>/S-Function1' incorporates:
   *  Constant: '<S102>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_h = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C]->processed;
      LM_TOS_0103_B.SFunction1_o2_if = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_ko = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_c = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_no - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_o ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_d - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_ap ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_l - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_j ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S103>/Selector' incorporates:
   *  Constant: '<S103>/Constant'
   */
  LM_TOS_0103_B.Selector_o = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_b];

  /* DataTypeConversion: '<S103>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_i = LM_TOS_0103_B.Selector_o.obj_attr;

  /* DataTypeConversion: '<S103>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_i = LM_TOS_0103_B.Selector_o.dy;

  /* DataTypeConversion: '<S103>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_b = LM_TOS_0103_B.Selector_o.obj_type;

  /* DataTypeConversion: '<S103>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_k = LM_TOS_0103_B.Selector_o.dx;

  /* DataTypeConversion: '<S103>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_dl = LM_TOS_0103_B.Selector_o.objject_ID;

  /* S-Function (rti_commonblock): '<S135>/S-Function1' incorporates:
   *  Constant: '<S103>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_c = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D]->processed;
      LM_TOS_0103_B.SFunction1_o2_ik = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_b = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_o = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_b - ( 0 ) )
        / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_i ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_i - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_b ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_k - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_dl ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S104>/Selector' incorporates:
   *  Constant: '<S104>/Constant'
   */
  LM_TOS_0103_B.Selector_e = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_h];

  /* DataTypeConversion: '<S104>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_j = LM_TOS_0103_B.Selector_e.obj_attr;

  /* DataTypeConversion: '<S104>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_m = LM_TOS_0103_B.Selector_e.dy;

  /* DataTypeConversion: '<S104>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_g = LM_TOS_0103_B.Selector_e.obj_type;

  /* DataTypeConversion: '<S104>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_e = LM_TOS_0103_B.Selector_e.dx;

  /* DataTypeConversion: '<S104>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_f = LM_TOS_0103_B.Selector_e.objject_ID;

  /* S-Function (rti_commonblock): '<S136>/S-Function1' incorporates:
   *  Constant: '<S104>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_l1 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E]->processed;
      LM_TOS_0103_B.SFunction1_o2_n = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_p = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_ay = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_e - ( 0 ) )
        / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_j ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_m - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_g ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_e - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_f ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S105>/Selector' incorporates:
   *  Constant: '<S105>/Constant'
   */
  LM_TOS_0103_B.Selector_iq = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_e];

  /* DataTypeConversion: '<S105>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_k = LM_TOS_0103_B.Selector_iq.obj_attr;

  /* DataTypeConversion: '<S105>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_do = LM_TOS_0103_B.Selector_iq.dy;

  /* DataTypeConversion: '<S105>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_j = LM_TOS_0103_B.Selector_iq.obj_type;

  /* DataTypeConversion: '<S105>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_ih = LM_TOS_0103_B.Selector_iq.dx;

  /* DataTypeConversion: '<S105>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_n = LM_TOS_0103_B.Selector_iq.objject_ID;

  /* S-Function (rti_commonblock): '<S137>/S-Function1' incorporates:
   *  Constant: '<S105>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_c3 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F]->processed;
      LM_TOS_0103_B.SFunction1_o2_c = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_h = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_d = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_m - ( 0 ) )
        / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_k ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_do - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_j ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_ih - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_n ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S106>/Selector' incorporates:
   *  Constant: '<S106>/Constant'
   */
  LM_TOS_0103_B.Selector_py = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_k];

  /* DataTypeConversion: '<S106>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_b = LM_TOS_0103_B.Selector_py.obj_attr;

  /* DataTypeConversion: '<S106>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_g = LM_TOS_0103_B.Selector_py.dy;

  /* DataTypeConversion: '<S106>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_i = LM_TOS_0103_B.Selector_py.obj_type;

  /* DataTypeConversion: '<S106>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_i1 = LM_TOS_0103_B.Selector_py.dx;

  /* DataTypeConversion: '<S106>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_j3 = LM_TOS_0103_B.Selector_py.objject_ID;

  /* S-Function (rti_commonblock): '<S138>/S-Function1' incorporates:
   *  Constant: '<S106>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_j = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310]->processed;
      LM_TOS_0103_B.SFunction1_o2_b = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_g = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_m = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_p - ( 0 ) )
        / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_b ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_g - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_i ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_i1 - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_j3 ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S107>/Selector' incorporates:
   *  Constant: '<S107>/Constant'
   */
  LM_TOS_0103_B.Selector_at = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_d];

  /* DataTypeConversion: '<S107>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_m = LM_TOS_0103_B.Selector_at.obj_attr;

  /* DataTypeConversion: '<S107>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_a = LM_TOS_0103_B.Selector_at.dy;

  /* DataTypeConversion: '<S107>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_jj = LM_TOS_0103_B.Selector_at.obj_type;

  /* DataTypeConversion: '<S107>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_lp = LM_TOS_0103_B.Selector_at.dx;

  /* DataTypeConversion: '<S107>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_ae = LM_TOS_0103_B.Selector_at.objject_ID;

  /* S-Function (rti_commonblock): '<S139>/S-Function1' incorporates:
   *  Constant: '<S107>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_a = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311]->processed;
      LM_TOS_0103_B.SFunction1_o2_k = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_m = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_bn = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_mu - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_m ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_a - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_jj ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_lp - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_ae ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S108>/Selector' incorporates:
   *  Constant: '<S108>/Constant'
   */
  LM_TOS_0103_B.Selector_ek = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_cx];

  /* DataTypeConversion: '<S108>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_k2 = LM_TOS_0103_B.Selector_ek.obj_attr;

  /* DataTypeConversion: '<S108>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_l = LM_TOS_0103_B.Selector_ek.dy;

  /* DataTypeConversion: '<S108>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_d = LM_TOS_0103_B.Selector_ek.obj_type;

  /* DataTypeConversion: '<S108>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_ez = LM_TOS_0103_B.Selector_ek.dx;

  /* DataTypeConversion: '<S108>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_k = LM_TOS_0103_B.Selector_ek.objject_ID;

  /* S-Function (rti_commonblock): '<S140>/S-Function1' incorporates:
   *  Constant: '<S108>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_a5 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312]->processed;
      LM_TOS_0103_B.SFunction1_o2_dd = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_e = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_k = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_f - ( 0 ) )
        / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_k2 ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_l - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_d ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_ez - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_k ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S109>/Selector' incorporates:
   *  Constant: '<S109>/Constant'
   */
  LM_TOS_0103_B.Selector_c = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_ea];

  /* DataTypeConversion: '<S109>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_kt = LM_TOS_0103_B.Selector_c.obj_attr;

  /* DataTypeConversion: '<S109>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_o = LM_TOS_0103_B.Selector_c.dy;

  /* DataTypeConversion: '<S109>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_kl = LM_TOS_0103_B.Selector_c.obj_type;

  /* DataTypeConversion: '<S109>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_l5 = LM_TOS_0103_B.Selector_c.dx;

  /* DataTypeConversion: '<S109>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_h = LM_TOS_0103_B.Selector_c.objject_ID;

  /* S-Function (rti_commonblock): '<S141>/S-Function1' incorporates:
   *  Constant: '<S109>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_ld = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313]->processed;
      LM_TOS_0103_B.SFunction1_o2_nk = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_p0 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_p = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_mc - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_kt ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_o - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_kl ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_l5 - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_h ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S110>/Selector' incorporates:
   *  Constant: '<S110>/Constant'
   */
  LM_TOS_0103_B.Selector_iqo = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_i];

  /* DataTypeConversion: '<S110>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_d = LM_TOS_0103_B.Selector_iqo.obj_attr;

  /* DataTypeConversion: '<S110>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_b = LM_TOS_0103_B.Selector_iqo.dy;

  /* DataTypeConversion: '<S110>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_n = LM_TOS_0103_B.Selector_iqo.obj_type;

  /* DataTypeConversion: '<S110>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_ee = LM_TOS_0103_B.Selector_iqo.dx;

  /* DataTypeConversion: '<S110>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_g = LM_TOS_0103_B.Selector_iqo.objject_ID;

  /* S-Function (rti_commonblock): '<S142>/S-Function1' incorporates:
   *  Constant: '<S110>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_b = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302]->processed;
      LM_TOS_0103_B.SFunction1_o2_h = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_bt = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_kn = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_m2 - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_d ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_b - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_n ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_ee - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_g ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S111>/Selector' incorporates:
   *  Constant: '<S111>/Constant'
   */
  LM_TOS_0103_B.Selector_m = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_mb];

  /* DataTypeConversion: '<S111>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_ea = LM_TOS_0103_B.Selector_m.obj_attr;

  /* DataTypeConversion: '<S111>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_nh = LM_TOS_0103_B.Selector_m.dy;

  /* DataTypeConversion: '<S111>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_c = LM_TOS_0103_B.Selector_m.obj_type;

  /* DataTypeConversion: '<S111>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_pi = LM_TOS_0103_B.Selector_m.dx;

  /* DataTypeConversion: '<S111>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_hh = LM_TOS_0103_B.Selector_m.objject_ID;

  /* S-Function (rti_commonblock): '<S143>/S-Function1' incorporates:
   *  Constant: '<S111>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_og = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314]->processed;
      LM_TOS_0103_B.SFunction1_o2_a = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_hs = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_dv = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_pq - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_ea ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_nh - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_c ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_pi - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_hh ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S112>/Selector' incorporates:
   *  Constant: '<S112>/Constant'
   */
  LM_TOS_0103_B.Selector_mg = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_hp];

  /* DataTypeConversion: '<S112>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_bm = LM_TOS_0103_B.Selector_mg.obj_attr;

  /* DataTypeConversion: '<S112>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_bc = LM_TOS_0103_B.Selector_mg.dy;

  /* DataTypeConversion: '<S112>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_cv = LM_TOS_0103_B.Selector_mg.obj_type;

  /* DataTypeConversion: '<S112>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_m3 = LM_TOS_0103_B.Selector_mg.dx;

  /* DataTypeConversion: '<S112>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_l = LM_TOS_0103_B.Selector_mg.objject_ID;

  /* S-Function (rti_commonblock): '<S144>/S-Function1' incorporates:
   *  Constant: '<S112>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_f = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315]->processed;
      LM_TOS_0103_B.SFunction1_o2_n2 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_dw = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_cd = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_ei - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_bm ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_bc - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_cv ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_m3 - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_l ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S113>/Selector' incorporates:
   *  Constant: '<S113>/Constant'
   */
  LM_TOS_0103_B.Selector_ci = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_hd];

  /* DataTypeConversion: '<S113>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_a = LM_TOS_0103_B.Selector_ci.obj_attr;

  /* DataTypeConversion: '<S113>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_n4 = LM_TOS_0103_B.Selector_ci.dy;

  /* DataTypeConversion: '<S113>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_o = LM_TOS_0103_B.Selector_ci.obj_type;

  /* DataTypeConversion: '<S113>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_g = LM_TOS_0103_B.Selector_ci.dx;

  /* DataTypeConversion: '<S113>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_hb = LM_TOS_0103_B.Selector_ci.objject_ID;

  /* S-Function (rti_commonblock): '<S145>/S-Function1' incorporates:
   *  Constant: '<S113>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_m = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316]->processed;
      LM_TOS_0103_B.SFunction1_o2_nj = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_cd = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_l = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_po - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_a ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_n4 - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_o ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_g - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_hb ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S114>/Selector' incorporates:
   *  Constant: '<S114>/Constant'
   */
  LM_TOS_0103_B.Selector_k = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_hq];

  /* DataTypeConversion: '<S114>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_h = LM_TOS_0103_B.Selector_k.obj_attr;

  /* DataTypeConversion: '<S114>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_cu = LM_TOS_0103_B.Selector_k.dy;

  /* DataTypeConversion: '<S114>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_f = LM_TOS_0103_B.Selector_k.obj_type;

  /* DataTypeConversion: '<S114>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_d = LM_TOS_0103_B.Selector_k.dx;

  /* DataTypeConversion: '<S114>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_kg = LM_TOS_0103_B.Selector_k.objject_ID;

  /* S-Function (rti_commonblock): '<S146>/S-Function1' incorporates:
   *  Constant: '<S114>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_d = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317]->processed;
      LM_TOS_0103_B.SFunction1_o2_ba = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_n = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_lv = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_ol - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_h ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_cu - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_f ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_d - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_kg ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S115>/Selector' incorporates:
   *  Constant: '<S115>/Constant'
   */
  LM_TOS_0103_B.Selector_mt = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_ko];

  /* DataTypeConversion: '<S115>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_hl = LM_TOS_0103_B.Selector_mt.obj_attr;

  /* DataTypeConversion: '<S115>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_lx = LM_TOS_0103_B.Selector_mt.dy;

  /* DataTypeConversion: '<S115>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_k3 = LM_TOS_0103_B.Selector_mt.obj_type;

  /* DataTypeConversion: '<S115>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_j = LM_TOS_0103_B.Selector_mt.dx;

  /* DataTypeConversion: '<S115>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_e = LM_TOS_0103_B.Selector_mt.objject_ID;

  /* S-Function (rti_commonblock): '<S147>/S-Function1' incorporates:
   *  Constant: '<S115>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_g = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318]->processed;
      LM_TOS_0103_B.SFunction1_o2_o = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_by = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_pw = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_j - ( 0 ) )
        / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_hl ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_lx - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_k3 ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_j - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_e ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S116>/Selector' incorporates:
   *  Constant: '<S116>/Constant'
   */
  LM_TOS_0103_B.Selector_fq = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_l];

  /* DataTypeConversion: '<S116>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_je = LM_TOS_0103_B.Selector_fq.obj_attr;

  /* DataTypeConversion: '<S116>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_h = LM_TOS_0103_B.Selector_fq.dy;

  /* DataTypeConversion: '<S116>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_c2 = LM_TOS_0103_B.Selector_fq.obj_type;

  /* DataTypeConversion: '<S116>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_f = LM_TOS_0103_B.Selector_fq.dx;

  /* DataTypeConversion: '<S116>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_l4 = LM_TOS_0103_B.Selector_fq.objject_ID;

  /* S-Function (rti_commonblock): '<S148>/S-Function1' incorporates:
   *  Constant: '<S116>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_g4 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319]->processed;
      LM_TOS_0103_B.SFunction1_o2_iv = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_j = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_h = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_c - ( 0 ) )
        / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_je ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_h - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_c2 ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_f - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_l4 ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S117>/Selector' incorporates:
   *  Constant: '<S117>/Constant'
   */
  LM_TOS_0103_B.Selector_j = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_ih];

  /* DataTypeConversion: '<S117>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_js = LM_TOS_0103_B.Selector_j.obj_attr;

  /* DataTypeConversion: '<S117>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_b3 = LM_TOS_0103_B.Selector_j.dy;

  /* DataTypeConversion: '<S117>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_gz = LM_TOS_0103_B.Selector_j.obj_type;

  /* DataTypeConversion: '<S117>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_b = LM_TOS_0103_B.Selector_j.dx;

  /* DataTypeConversion: '<S117>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_gv = LM_TOS_0103_B.Selector_j.objject_ID;

  /* S-Function (rti_commonblock): '<S149>/S-Function1' incorporates:
   *  Constant: '<S117>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_j5 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A]->processed;
      LM_TOS_0103_B.SFunction1_o2_m = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_ce = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_lz = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_cq - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_js ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_b3 - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_gz ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_b - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_gv ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S118>/Selector' incorporates:
   *  Constant: '<S118>/Constant'
   */
  LM_TOS_0103_B.Selector_f4 = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_n];

  /* DataTypeConversion: '<S118>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_au = LM_TOS_0103_B.Selector_f4.obj_attr;

  /* DataTypeConversion: '<S118>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_ni = LM_TOS_0103_B.Selector_f4.dy;

  /* DataTypeConversion: '<S118>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_md = LM_TOS_0103_B.Selector_f4.obj_type;

  /* DataTypeConversion: '<S118>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_h = LM_TOS_0103_B.Selector_f4.dx;

  /* DataTypeConversion: '<S118>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_ej = LM_TOS_0103_B.Selector_f4.objject_ID;

  /* S-Function (rti_commonblock): '<S150>/S-Function1' incorporates:
   *  Constant: '<S118>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_jt = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B]->processed;
      LM_TOS_0103_B.SFunction1_o2_i1 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_je = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_i = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_cg - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_au ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_ni - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_md ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_h - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_ej ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S119>/Selector' incorporates:
   *  Constant: '<S119>/Constant'
   */
  LM_TOS_0103_B.Selector_je = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_iv];

  /* DataTypeConversion: '<S119>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_jo = LM_TOS_0103_B.Selector_je.obj_attr;

  /* DataTypeConversion: '<S119>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_hu = LM_TOS_0103_B.Selector_je.dy;

  /* DataTypeConversion: '<S119>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_da = LM_TOS_0103_B.Selector_je.obj_type;

  /* DataTypeConversion: '<S119>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_pj = LM_TOS_0103_B.Selector_je.dx;

  /* DataTypeConversion: '<S119>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_ak = LM_TOS_0103_B.Selector_je.objject_ID;

  /* S-Function (rti_commonblock): '<S151>/S-Function1' incorporates:
   *  Constant: '<S119>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_kz = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C]->processed;
      LM_TOS_0103_B.SFunction1_o2_pe = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_cm = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_oy = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_dv - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_jo ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_hu - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_da ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_pj - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_ak ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S120>/Selector' incorporates:
   *  Constant: '<S120>/Constant'
   */
  LM_TOS_0103_B.Selector_oe = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_b3];

  /* DataTypeConversion: '<S120>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_oi = LM_TOS_0103_B.Selector_oe.obj_attr;

  /* DataTypeConversion: '<S120>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_ks = LM_TOS_0103_B.Selector_oe.dy;

  /* DataTypeConversion: '<S120>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_fy = LM_TOS_0103_B.Selector_oe.obj_type;

  /* DataTypeConversion: '<S120>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_lv = LM_TOS_0103_B.Selector_oe.dx;

  /* DataTypeConversion: '<S120>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_am = LM_TOS_0103_B.Selector_oe.objject_ID;

  /* S-Function (rti_commonblock): '<S152>/S-Function1' incorporates:
   *  Constant: '<S120>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_j3 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D]->processed;
      LM_TOS_0103_B.SFunction1_o2_bz = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_hq = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_j = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_i - ( 0 ) )
        / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_oi ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_ks - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_fy ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_lv - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_am ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S121>/Selector' incorporates:
   *  Constant: '<S121>/Constant'
   */
  LM_TOS_0103_B.Selector_l = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_p];

  /* DataTypeConversion: '<S121>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_p = LM_TOS_0103_B.Selector_l.obj_attr;

  /* DataTypeConversion: '<S121>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_ap = LM_TOS_0103_B.Selector_l.dy;

  /* DataTypeConversion: '<S121>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_h = LM_TOS_0103_B.Selector_l.obj_type;

  /* DataTypeConversion: '<S121>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_n = LM_TOS_0103_B.Selector_l.dx;

  /* DataTypeConversion: '<S121>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_g3 = LM_TOS_0103_B.Selector_l.objject_ID;

  /* S-Function (rti_commonblock): '<S153>/S-Function1' incorporates:
   *  Constant: '<S121>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_fs = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303]->processed;
      LM_TOS_0103_B.SFunction1_o2_hk = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_kg = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_o3 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_c3 - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_p ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_ap - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_h ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_n - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_g3 ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S122>/Selector' incorporates:
   *  Constant: '<S122>/Constant'
   */
  LM_TOS_0103_B.Selector_ko = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_g];

  /* DataTypeConversion: '<S122>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_et = LM_TOS_0103_B.Selector_ko.obj_attr;

  /* DataTypeConversion: '<S122>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_da = LM_TOS_0103_B.Selector_ko.dy;

  /* DataTypeConversion: '<S122>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_e = LM_TOS_0103_B.Selector_ko.obj_type;

  /* DataTypeConversion: '<S122>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_a = LM_TOS_0103_B.Selector_ko.dx;

  /* DataTypeConversion: '<S122>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_k4 = LM_TOS_0103_B.Selector_ko.objject_ID;

  /* S-Function (rti_commonblock): '<S154>/S-Function1' incorporates:
   *  Constant: '<S122>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_ae = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E]->processed;
      LM_TOS_0103_B.SFunction1_o2_ah = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_jw = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_e = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_da - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_et ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_da - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_e ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_a - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_k4 ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S123>/Selector' incorporates:
   *  Constant: '<S123>/Constant'
   */
  LM_TOS_0103_B.Selector_cif = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_lb];

  /* DataTypeConversion: '<S123>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_gy = LM_TOS_0103_B.Selector_cif.obj_attr;

  /* DataTypeConversion: '<S123>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_f = LM_TOS_0103_B.Selector_cif.dy;

  /* DataTypeConversion: '<S123>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_ir = LM_TOS_0103_B.Selector_cif.obj_type;

  /* DataTypeConversion: '<S123>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_it = LM_TOS_0103_B.Selector_cif.dx;

  /* DataTypeConversion: '<S123>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_d4 = LM_TOS_0103_B.Selector_cif.objject_ID;

  /* S-Function (rti_commonblock): '<S155>/S-Function1' incorporates:
   *  Constant: '<S123>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_n = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F]->processed;
      LM_TOS_0103_B.SFunction1_o2_o2 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_el = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_oa = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_dax - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_gy ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_f - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_ir ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_it - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_d4 ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S124>/Selector' incorporates:
   *  Constant: '<S124>/Constant'
   */
  LM_TOS_0103_B.Selector_ap = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_ib];

  /* DataTypeConversion: '<S124>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_j0 = LM_TOS_0103_B.Selector_ap.obj_attr;

  /* DataTypeConversion: '<S124>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_mt = LM_TOS_0103_B.Selector_ap.dy;

  /* DataTypeConversion: '<S124>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_oq = LM_TOS_0103_B.Selector_ap.obj_type;

  /* DataTypeConversion: '<S124>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_ft = LM_TOS_0103_B.Selector_ap.dx;

  /* DataTypeConversion: '<S124>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_ki = LM_TOS_0103_B.Selector_ap.objject_ID;

  /* S-Function (rti_commonblock): '<S156>/S-Function1' incorporates:
   *  Constant: '<S124>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_p = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304]->processed;
      LM_TOS_0103_B.SFunction1_o2_c0 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_jt = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_bs = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_id - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_j0 ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_mt - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_oq ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_ft - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_ki ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S125>/Selector' incorporates:
   *  Constant: '<S125>/Constant'
   */
  LM_TOS_0103_B.Selector_jj = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_jy];

  /* DataTypeConversion: '<S125>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_oa = LM_TOS_0103_B.Selector_jj.obj_attr;

  /* DataTypeConversion: '<S125>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_oo = LM_TOS_0103_B.Selector_jj.dy;

  /* DataTypeConversion: '<S125>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_fm = LM_TOS_0103_B.Selector_jj.obj_type;

  /* DataTypeConversion: '<S125>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_jm = LM_TOS_0103_B.Selector_jj.dx;

  /* DataTypeConversion: '<S125>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_ga = LM_TOS_0103_B.Selector_jj.objject_ID;

  /* S-Function (rti_commonblock): '<S157>/S-Function1' incorporates:
   *  Constant: '<S125>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_mq = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305]->processed;
      LM_TOS_0103_B.SFunction1_o2_as = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_j3 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_lo = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_pa - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_oa ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_oo - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_fm ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_jm - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_ga ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S126>/Selector' incorporates:
   *  Constant: '<S126>/Constant'
   */
  LM_TOS_0103_B.Selector_km = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_cs];

  /* DataTypeConversion: '<S126>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_jp = LM_TOS_0103_B.Selector_km.obj_attr;

  /* DataTypeConversion: '<S126>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_ol = LM_TOS_0103_B.Selector_km.dy;

  /* DataTypeConversion: '<S126>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_eg = LM_TOS_0103_B.Selector_km.obj_type;

  /* DataTypeConversion: '<S126>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_f3 = LM_TOS_0103_B.Selector_km.dx;

  /* DataTypeConversion: '<S126>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_kr = LM_TOS_0103_B.Selector_km.objject_ID;

  /* S-Function (rti_commonblock): '<S158>/S-Function1' incorporates:
   *  Constant: '<S126>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_js = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306]->processed;
      LM_TOS_0103_B.SFunction1_o2_an = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_ek = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_oz = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_ft - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_jp ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_ol - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_eg ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_f3 - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_kr ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S127>/Selector' incorporates:
   *  Constant: '<S127>/Constant'
   */
  LM_TOS_0103_B.Selector_eg = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_j3];

  /* DataTypeConversion: '<S127>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_hh = LM_TOS_0103_B.Selector_eg.obj_attr;

  /* DataTypeConversion: '<S127>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_hf = LM_TOS_0103_B.Selector_eg.dy;

  /* DataTypeConversion: '<S127>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_p = LM_TOS_0103_B.Selector_eg.obj_type;

  /* DataTypeConversion: '<S127>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_jj = LM_TOS_0103_B.Selector_eg.dx;

  /* DataTypeConversion: '<S127>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_er = LM_TOS_0103_B.Selector_eg.objject_ID;

  /* S-Function (rti_commonblock): '<S159>/S-Function1' incorporates:
   *  Constant: '<S127>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_ks = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307]->processed;
      LM_TOS_0103_B.SFunction1_o2_e = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_ei = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_ka = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_e3 - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_hh ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_hf - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_p ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_jj - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_er ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S128>/Selector' incorporates:
   *  Constant: '<S128>/Constant'
   */
  LM_TOS_0103_B.Selector_au = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_ij];

  /* DataTypeConversion: '<S128>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_j4 = LM_TOS_0103_B.Selector_au.obj_attr;

  /* DataTypeConversion: '<S128>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_ko = LM_TOS_0103_B.Selector_au.dy;

  /* DataTypeConversion: '<S128>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_hf = LM_TOS_0103_B.Selector_au.obj_type;

  /* DataTypeConversion: '<S128>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_bb = LM_TOS_0103_B.Selector_au.dx;

  /* DataTypeConversion: '<S128>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_i = LM_TOS_0103_B.Selector_au.objject_ID;

  /* S-Function (rti_commonblock): '<S160>/S-Function1' incorporates:
   *  Constant: '<S128>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_l4 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308]->processed;
      LM_TOS_0103_B.SFunction1_o2_iz = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_nw = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_dp = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_ny - ( 0 )
        ) / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_j4 ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_ko - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_hf ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_bb - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_i ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* Selector: '<S129>/Selector' incorporates:
   *  Constant: '<S129>/Constant'
   */
  LM_TOS_0103_B.Selector_fg = LM_TOS_0103_B.BusCreator_h.hmi_display_array_st
    [(int32_T)LM_TOS_0103_P.Constant_Value_cs0];

  /* DataTypeConversion: '<S129>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_hb = LM_TOS_0103_B.Selector_fg.obj_attr;

  /* DataTypeConversion: '<S129>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_at = LM_TOS_0103_B.Selector_fg.dy;

  /* DataTypeConversion: '<S129>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_et = LM_TOS_0103_B.Selector_fg.obj_type;

  /* DataTypeConversion: '<S129>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_n2 = LM_TOS_0103_B.Selector_fg.dx;

  /* DataTypeConversion: '<S129>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_o = LM_TOS_0103_B.Selector_fg.objject_ID;

  /* S-Function (rti_commonblock): '<S161>/S-Function1' incorporates:
   *  Constant: '<S129>/Constant1'
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
      LM_TOS_0103_B.SFunction1_o1_fp = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309]->processed;
      LM_TOS_0103_B.SFunction1_o2_l = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_o = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_ef = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Obj_heading" (14|10, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_P.Constant1_Value_l - ( 0 ) )
        / 0.5 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000003FF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Prop" (24|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_hb ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_y" (28|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_at - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_Type" (40|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_et ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

      /* ...... "Obj_x" (44|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_n2 - (
        -200 ) ) / 0.1 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_o ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x000000FF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  LM_TOS_0103_B.DataTypeConversion_jj = LM_TOS_0103_B.LM_TOS_ALGORISM_o8.l_c0;

  /* DataTypeConversion: '<S5>/Data Type Conversion1' */
  LM_TOS_0103_B.DataTypeConversion1_ok =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o8.l_end_x0;

  /* DataTypeConversion: '<S5>/Data Type Conversion2' */
  LM_TOS_0103_B.DataTypeConversion2_db =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o8.l_start_x0;

  /* DataTypeConversion: '<S5>/Data Type Conversion3' */
  LM_TOS_0103_B.DataTypeConversion3_jf = LM_TOS_0103_B.LM_TOS_ALGORISM_o8.l_c1;

  /* DataTypeConversion: '<S5>/Data Type Conversion4' */
  LM_TOS_0103_B.DataTypeConversion4_erz = LM_TOS_0103_B.LM_TOS_ALGORISM_o8.l_c2;

  /* DataTypeConversion: '<S5>/Data Type Conversion5' */
  LM_TOS_0103_B.DataTypeConversion5 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o8.l_line_type;

  /* S-Function (rti_commonblock): '<S162>/S-Function1' */
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
      LM_TOS_0103_B.SFunction1_o1_i = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A]->processed;
      LM_TOS_0103_B.SFunction1_o2_f = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_b4 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_jp = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Lane_C0" (0|12, standard signal, unsigned int, little endian) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion_jj - (
        -16 ) ) / 0.01 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "ZOP_narrowLane_dxEnd" (0|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion1_ok - (
        0 ) ) / 0.01 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Msg[7] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "ZOP_narrowLane_dxStart" (12|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion2_db - (
        0 ) ) / 0.01 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Lane_C1" (16|11, standard signal, unsigned int, little endian) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion3_jf - (
        -0.9 ) ) / 0.0009 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000007FF;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Lane_C2" (28|12, standard signal, unsigned int, little endian) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion4_erz -
        ( -0.01 ) ) / 5.0E-6 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "ZOP_narrowLaneType" (52|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion5 ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion10' */
  LM_TOS_0103_B.DataTypeConversion10 = LM_TOS_0103_B.LM_TOS_ALGORISM_o8.r_c2;

  /* DataTypeConversion: '<S5>/Data Type Conversion11' */
  LM_TOS_0103_B.DataTypeConversion11 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o8.r_line_type;

  /* DataTypeConversion: '<S5>/Data Type Conversion6' */
  LM_TOS_0103_B.DataTypeConversion6 = LM_TOS_0103_B.LM_TOS_ALGORISM_o8.r_c0;

  /* DataTypeConversion: '<S5>/Data Type Conversion7' */
  LM_TOS_0103_B.DataTypeConversion7 = LM_TOS_0103_B.LM_TOS_ALGORISM_o8.r_end_x0;

  /* DataTypeConversion: '<S5>/Data Type Conversion8' */
  LM_TOS_0103_B.DataTypeConversion8 =
    LM_TOS_0103_B.LM_TOS_ALGORISM_o8.r_start_x0;

  /* DataTypeConversion: '<S5>/Data Type Conversion9' */
  LM_TOS_0103_B.DataTypeConversion9 = LM_TOS_0103_B.LM_TOS_ALGORISM_o8.r_c1;

  /* S-Function (rti_commonblock): '<S163>/S-Function1' */
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
      LM_TOS_0103_B.SFunction1_o1_df = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B]->processed;
      LM_TOS_0103_B.SFunction1_o2_g = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B]->timestamp;
      LM_TOS_0103_B.SFunction1_o3_i = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B]->deltatime;
      LM_TOS_0103_B.SFunction1_o4_kaj = (real_T)
        can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "Lane_C0" (0|12, standard signal, unsigned int, little endian) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion6 -
        ( -16 ) ) / 0.01 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "ZOP_narrowLane_dxEnd" (0|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion7 - ( 0 )
        ) / 0.01 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Msg[7] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "ZOP_narrowLane_dxStart" (12|12, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion8 - ( 0 )
        ) / 0.01 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Lane_C1" (16|11, standard signal, unsigned int, little endian) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion9 -
        ( -0.9 ) ) / 0.0009 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x000007FF;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "Lane_C2" (28|12, standard signal, unsigned int, little endian) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion10 -
        ( -0.01 ) ) / 5.0E-6 + 0.5);
      CAN_Sgn.UnsignedSgn &= 0x00000FFF;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "ZOP_narrowLaneType" (52|4, standard signal, unsigned int, motorola back.) */
      /* Add or substract 0.5 in order to round to nearest integer */
      CAN_Sgn.UnsignedSgn = (UInt32) (( LM_TOS_0103_B.DataTypeConversion11 ) +
        0.5);
      CAN_Sgn.UnsignedSgn &= 0x0000000F;
      CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* S-Function (rti_commonblock): '<S1>/S-Function1' */
  /* This comment workarounds a code generation problem */
}

/* Model update function */
void LM_TOS_0103_update(void)
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
  if (!(++LM_TOS_0103_M->Timing.clockTick0)) {
    ++LM_TOS_0103_M->Timing.clockTickH0;
  }

  LM_TOS_0103_M->Timing.taskTime0 = LM_TOS_0103_M->Timing.clockTick0 *
    LM_TOS_0103_M->Timing.stepSize0 + LM_TOS_0103_M->Timing.clockTickH0 *
    LM_TOS_0103_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void LM_TOS_0103_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)LM_TOS_0103_M, 0,
                sizeof(RT_MODEL_LM_TOS_0103_T));
  LM_TOS_0103_M->Timing.stepSize0 = 0.005;

  /* block I/O */
  (void) memset(((void *) &LM_TOS_0103_B), 0,
                sizeof(B_LM_TOS_0103_T));

  /* states (dwork) */
  (void) memset((void *)&LM_TOS_0103_DW, 0,
                sizeof(DW_LM_TOS_0103_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    LM_TOS_0103_rti_init_trc_pointers();
  }

  /* Start for S-Function (LM_TOS_MODULE): '<S2>/LM_TOS_ALGORISM' */

  /* S-Function Block: <S2>/LM_TOS_ALGORISM */
  LM_TOS_MODULE_Start_wrapper();
}

/* Model terminate function */
void LM_TOS_0103_terminate(void)
{
  /* Terminate for S-Function (rti_commonblock): '<S130>/S-Function1' incorporates:
   *  Constant: '<S98>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_00" Id:768 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S131>/S-Function1' incorporates:
   *  Constant: '<S99>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_01" Id:769 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S132>/S-Function1' incorporates:
   *  Constant: '<S100>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_10" Id:778 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][2] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S133>/S-Function1' incorporates:
   *  Constant: '<S101>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_11" Id:779 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][2] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S134>/S-Function1' incorporates:
   *  Constant: '<S102>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_12" Id:780 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][2] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S135>/S-Function1' incorporates:
   *  Constant: '<S103>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_13" Id:781 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][2] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S136>/S-Function1' incorporates:
   *  Constant: '<S104>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_14" Id:782 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][2] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S137>/S-Function1' incorporates:
   *  Constant: '<S105>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_15" Id:783 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S138>/S-Function1' incorporates:
   *  Constant: '<S106>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_16" Id:784 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S139>/S-Function1' incorporates:
   *  Constant: '<S107>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_17" Id:785 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S140>/S-Function1' incorporates:
   *  Constant: '<S108>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_18" Id:786 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S141>/S-Function1' incorporates:
   *  Constant: '<S109>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_19" Id:787 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S142>/S-Function1' incorporates:
   *  Constant: '<S110>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_02" Id:770 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S143>/S-Function1' incorporates:
   *  Constant: '<S111>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_20" Id:788 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S144>/S-Function1' incorporates:
   *  Constant: '<S112>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_21" Id:789 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S145>/S-Function1' incorporates:
   *  Constant: '<S113>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_22" Id:790 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S146>/S-Function1' incorporates:
   *  Constant: '<S114>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_23" Id:791 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S147>/S-Function1' incorporates:
   *  Constant: '<S115>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_24" Id:792 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S148>/S-Function1' incorporates:
   *  Constant: '<S116>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_25" Id:793 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S149>/S-Function1' incorporates:
   *  Constant: '<S117>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_26" Id:794 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S150>/S-Function1' incorporates:
   *  Constant: '<S118>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_27" Id:795 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][5] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S151>/S-Function1' incorporates:
   *  Constant: '<S119>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_28" Id:796 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][5] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S152>/S-Function1' incorporates:
   *  Constant: '<S120>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_29" Id:797 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][5] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S153>/S-Function1' incorporates:
   *  Constant: '<S121>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_03" Id:771 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S154>/S-Function1' incorporates:
   *  Constant: '<S122>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_30" Id:798 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][5] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S155>/S-Function1' incorporates:
   *  Constant: '<S123>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_31" Id:799 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][5] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S156>/S-Function1' incorporates:
   *  Constant: '<S124>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_04" Id:772 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][1] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S157>/S-Function1' incorporates:
   *  Constant: '<S125>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_05" Id:773 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][1] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S158>/S-Function1' incorporates:
   *  Constant: '<S126>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_06" Id:774 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][1] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S159>/S-Function1' incorporates:
   *  Constant: '<S127>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_07" Id:775 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][1] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S160>/S-Function1' incorporates:
   *  Constant: '<S128>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_08" Id:776 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][1] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S161>/S-Function1' incorporates:
   *  Constant: '<S129>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_09" Id:777 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][1] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S162>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "ZOP_NarrowLine_1" Id:570 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S163>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "ZOP_NarrowLine_2" Id:571 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }
}
