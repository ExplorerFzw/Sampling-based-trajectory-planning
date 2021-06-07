/*
 * fusionAlg.c
 *
 * Code generation for model "fusionAlg".
 *
 * Model version              : 1.124
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Mon Nov 30 14:31:24 2020
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "fusionAlg_trc_ptr.h"
#include "fusionAlg.h"
#include "fusionAlg_private.h"

const FUS_OBJ_OUTPUT_ST fusionAlg_rtZFUS_OBJ_OUTPUT_ST = {
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
    } }
  ,                                    /* objects */
  0U                                   /* frameNum */
} ;                                    /* FUS_OBJ_OUTPUT_ST ground */

/* Block signals (default storage) */
B_fusionAlg_T fusionAlg_B;

/* Block states (default storage) */
DW_fusionAlg_T fusionAlg_DW;

/* External inputs (root inport signals with default storage) */
ExtU_fusionAlg_T fusionAlg_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_fusionAlg_T fusionAlg_Y;

/* Real-time model */
RT_MODEL_fusionAlg_T fusionAlg_M_;
RT_MODEL_fusionAlg_T *const fusionAlg_M = &fusionAlg_M_;

/* Model output function */
void fusionAlg_output(void)
{
  real32_T tmp;

  /* DataTypeConversion: '<S8>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x50_20_Obj_00.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_01_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S8>/Data Type Conversion' */

  /* DataTypeConversion: '<S8>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x50_20_Obj_00.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_01_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S8>/Data Type Conversion1' */

  /* DataTypeConversion: '<S8>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x50_20_Obj_00.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_01_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S8>/Data Type Conversion2' */

  /* DataTypeConversion: '<S8>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x50_20_Obj_00.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_01_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S8>/Data Type Conversion3' */

  /* DataTypeConversion: '<S8>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x50_20_Obj_00.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_01_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S8>/Data Type Conversion4' */

  /* DataTypeConversion: '<S8>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x50_20_Obj_00.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_01_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S8>/Data Type Conversion5' */

  /* BusCreator: '<S8>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S8>/Constant1'
   */
  fusionAlg_B.radarObj.radar_01_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_o;
  fusionAlg_B.radarObj.radar_01_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_m;

  /* BusCreator: '<S8>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_01_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x50_20_Obj_00.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_01_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x50_20_Obj_00.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_01_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x50_20_Obj_00.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_01_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x50_20_Obj_00.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_01_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x50_20_Obj_00.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_01_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x50_20_Obj_00.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_01_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x50_20_Obj_00.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_01_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x50_20_Obj_00.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_01_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x50_20_Obj_00.Obj_XPos;
  fusionAlg_B.radarObj.radar_01_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x50_20_Obj_00.Obj_YPos;

  /* DataTypeConversion: '<S9>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x51_21_Obj_01.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_02_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S9>/Data Type Conversion' */

  /* DataTypeConversion: '<S9>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x51_21_Obj_01.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_02_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S9>/Data Type Conversion1' */

  /* DataTypeConversion: '<S9>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x51_21_Obj_01.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_02_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S9>/Data Type Conversion2' */

  /* DataTypeConversion: '<S9>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x51_21_Obj_01.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_02_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S9>/Data Type Conversion3' */

  /* DataTypeConversion: '<S9>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x51_21_Obj_01.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_02_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S9>/Data Type Conversion4' */

  /* DataTypeConversion: '<S9>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x51_21_Obj_01.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_02_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S9>/Data Type Conversion5' */

  /* BusCreator: '<S9>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S9>/Constant'
   *  Constant: '<S9>/Constant1'
   */
  fusionAlg_B.radarObj.radar_02_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_n;
  fusionAlg_B.radarObj.radar_02_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_i;

  /* BusCreator: '<S9>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_02_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x51_21_Obj_01.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_02_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x51_21_Obj_01.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_02_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x51_21_Obj_01.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_02_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x51_21_Obj_01.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_02_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x51_21_Obj_01.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_02_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x51_21_Obj_01.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_02_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x51_21_Obj_01.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_02_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x51_21_Obj_01.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_02_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x51_21_Obj_01.Obj_XPos;
  fusionAlg_B.radarObj.radar_02_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x51_21_Obj_01.Obj_YPos;

  /* DataTypeConversion: '<S20>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x52_22_Obj_02.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_03_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S20>/Data Type Conversion' */

  /* DataTypeConversion: '<S20>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x52_22_Obj_02.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_03_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S20>/Data Type Conversion1' */

  /* DataTypeConversion: '<S20>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x52_22_Obj_02.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_03_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S20>/Data Type Conversion2' */

  /* DataTypeConversion: '<S20>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x52_22_Obj_02.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_03_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S20>/Data Type Conversion3' */

  /* DataTypeConversion: '<S20>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x52_22_Obj_02.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_03_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S20>/Data Type Conversion4' */

  /* DataTypeConversion: '<S20>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x52_22_Obj_02.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_03_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S20>/Data Type Conversion5' */

  /* BusCreator: '<S20>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S20>/Constant'
   *  Constant: '<S20>/Constant1'
   */
  fusionAlg_B.radarObj.radar_03_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_g;
  fusionAlg_B.radarObj.radar_03_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_f;

  /* BusCreator: '<S20>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_03_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x52_22_Obj_02.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_03_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x52_22_Obj_02.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_03_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x52_22_Obj_02.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_03_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x52_22_Obj_02.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_03_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x52_22_Obj_02.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_03_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x52_22_Obj_02.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_03_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x52_22_Obj_02.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_03_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x52_22_Obj_02.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_03_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x52_22_Obj_02.Obj_XPos;
  fusionAlg_B.radarObj.radar_03_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x52_22_Obj_02.Obj_YPos;

  /* DataTypeConversion: '<S31>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x53_23_Obj_03.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_04_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S31>/Data Type Conversion' */

  /* DataTypeConversion: '<S31>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x53_23_Obj_03.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_04_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S31>/Data Type Conversion1' */

  /* DataTypeConversion: '<S31>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x53_23_Obj_03.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_04_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S31>/Data Type Conversion2' */

  /* DataTypeConversion: '<S31>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x53_23_Obj_03.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_04_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S31>/Data Type Conversion3' */

  /* DataTypeConversion: '<S31>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x53_23_Obj_03.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_04_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S31>/Data Type Conversion4' */

  /* DataTypeConversion: '<S31>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x53_23_Obj_03.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_04_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S31>/Data Type Conversion5' */

  /* BusCreator: '<S31>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S31>/Constant'
   *  Constant: '<S31>/Constant1'
   */
  fusionAlg_B.radarObj.radar_04_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_m;
  fusionAlg_B.radarObj.radar_04_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_fw;

  /* BusCreator: '<S31>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_04_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x53_23_Obj_03.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_04_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x53_23_Obj_03.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_04_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x53_23_Obj_03.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_04_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x53_23_Obj_03.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_04_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x53_23_Obj_03.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_04_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x53_23_Obj_03.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_04_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x53_23_Obj_03.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_04_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x53_23_Obj_03.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_04_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x53_23_Obj_03.Obj_XPos;
  fusionAlg_B.radarObj.radar_04_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x53_23_Obj_03.Obj_YPos;

  /* DataTypeConversion: '<S35>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x54_24_Obj_04.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_05_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S35>/Data Type Conversion' */

  /* DataTypeConversion: '<S35>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x54_24_Obj_04.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_05_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S35>/Data Type Conversion1' */

  /* DataTypeConversion: '<S35>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x54_24_Obj_04.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_05_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S35>/Data Type Conversion2' */

  /* DataTypeConversion: '<S35>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x54_24_Obj_04.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_05_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S35>/Data Type Conversion3' */

  /* DataTypeConversion: '<S35>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x54_24_Obj_04.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_05_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S35>/Data Type Conversion4' */

  /* DataTypeConversion: '<S35>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x54_24_Obj_04.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_05_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S35>/Data Type Conversion5' */

  /* BusCreator: '<S35>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S35>/Constant'
   *  Constant: '<S35>/Constant1'
   */
  fusionAlg_B.radarObj.radar_05_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_a;
  fusionAlg_B.radarObj.radar_05_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_d;

  /* BusCreator: '<S35>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_05_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x54_24_Obj_04.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_05_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x54_24_Obj_04.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_05_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x54_24_Obj_04.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_05_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x54_24_Obj_04.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_05_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x54_24_Obj_04.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_05_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x54_24_Obj_04.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_05_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x54_24_Obj_04.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_05_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x54_24_Obj_04.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_05_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x54_24_Obj_04.Obj_XPos;
  fusionAlg_B.radarObj.radar_05_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x54_24_Obj_04.Obj_YPos;

  /* DataTypeConversion: '<S44>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x55_25_Obj_05.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_06_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S44>/Data Type Conversion' */

  /* DataTypeConversion: '<S44>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x55_25_Obj_05.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_06_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S44>/Data Type Conversion1' */

  /* DataTypeConversion: '<S44>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x55_25_Obj_05.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_06_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S44>/Data Type Conversion2' */

  /* DataTypeConversion: '<S44>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x55_25_Obj_05.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_06_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S44>/Data Type Conversion3' */

  /* DataTypeConversion: '<S44>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x55_25_Obj_05.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_06_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S44>/Data Type Conversion4' */

  /* DataTypeConversion: '<S44>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x55_25_Obj_05.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_06_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S44>/Data Type Conversion5' */

  /* BusCreator: '<S44>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S44>/Constant'
   *  Constant: '<S44>/Constant1'
   */
  fusionAlg_B.radarObj.radar_06_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_c;
  fusionAlg_B.radarObj.radar_06_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_ir;

  /* BusCreator: '<S44>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_06_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x55_25_Obj_05.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_06_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x55_25_Obj_05.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_06_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x55_25_Obj_05.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_06_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x55_25_Obj_05.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_06_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x55_25_Obj_05.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_06_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x55_25_Obj_05.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_06_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x55_25_Obj_05.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_06_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x55_25_Obj_05.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_06_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x55_25_Obj_05.Obj_XPos;
  fusionAlg_B.radarObj.radar_06_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x55_25_Obj_05.Obj_YPos;

  /* DataTypeConversion: '<S45>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x56_26_Obj_06.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_07_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S45>/Data Type Conversion' */

  /* DataTypeConversion: '<S45>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x56_26_Obj_06.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_07_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S45>/Data Type Conversion1' */

  /* DataTypeConversion: '<S45>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x56_26_Obj_06.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_07_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S45>/Data Type Conversion2' */

  /* DataTypeConversion: '<S45>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x56_26_Obj_06.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_07_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S45>/Data Type Conversion3' */

  /* DataTypeConversion: '<S45>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x56_26_Obj_06.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_07_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S45>/Data Type Conversion4' */

  /* DataTypeConversion: '<S45>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x56_26_Obj_06.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_07_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S45>/Data Type Conversion5' */

  /* BusCreator: '<S45>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S45>/Constant'
   *  Constant: '<S45>/Constant1'
   */
  fusionAlg_B.radarObj.radar_07_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_ew;
  fusionAlg_B.radarObj.radar_07_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_h;

  /* BusCreator: '<S45>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_07_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x56_26_Obj_06.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_07_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x56_26_Obj_06.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_07_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x56_26_Obj_06.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_07_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x56_26_Obj_06.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_07_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x56_26_Obj_06.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_07_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x56_26_Obj_06.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_07_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x56_26_Obj_06.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_07_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x56_26_Obj_06.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_07_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x56_26_Obj_06.Obj_XPos;
  fusionAlg_B.radarObj.radar_07_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x56_26_Obj_06.Obj_YPos;

  /* DataTypeConversion: '<S46>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x57_27_Obj_07.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_08_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S46>/Data Type Conversion' */

  /* DataTypeConversion: '<S46>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x57_27_Obj_07.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_08_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S46>/Data Type Conversion1' */

  /* DataTypeConversion: '<S46>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x57_27_Obj_07.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_08_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S46>/Data Type Conversion2' */

  /* DataTypeConversion: '<S46>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x57_27_Obj_07.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_08_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S46>/Data Type Conversion3' */

  /* DataTypeConversion: '<S46>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x57_27_Obj_07.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_08_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S46>/Data Type Conversion4' */

  /* DataTypeConversion: '<S46>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x57_27_Obj_07.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_08_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S46>/Data Type Conversion5' */

  /* BusCreator: '<S46>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S46>/Constant'
   *  Constant: '<S46>/Constant1'
   */
  fusionAlg_B.radarObj.radar_08_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_f;
  fusionAlg_B.radarObj.radar_08_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_j;

  /* BusCreator: '<S46>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_08_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x57_27_Obj_07.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_08_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x57_27_Obj_07.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_08_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x57_27_Obj_07.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_08_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x57_27_Obj_07.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_08_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x57_27_Obj_07.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_08_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x57_27_Obj_07.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_08_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x57_27_Obj_07.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_08_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x57_27_Obj_07.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_08_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x57_27_Obj_07.Obj_XPos;
  fusionAlg_B.radarObj.radar_08_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x57_27_Obj_07.Obj_YPos;

  /* DataTypeConversion: '<S47>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x58_28_Obj_08.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_09_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S47>/Data Type Conversion' */

  /* DataTypeConversion: '<S47>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x58_28_Obj_08.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_09_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S47>/Data Type Conversion1' */

  /* DataTypeConversion: '<S47>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x58_28_Obj_08.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_09_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S47>/Data Type Conversion2' */

  /* DataTypeConversion: '<S47>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x58_28_Obj_08.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_09_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S47>/Data Type Conversion3' */

  /* DataTypeConversion: '<S47>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x58_28_Obj_08.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_09_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S47>/Data Type Conversion4' */

  /* DataTypeConversion: '<S47>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x58_28_Obj_08.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_09_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S47>/Data Type Conversion5' */

  /* BusCreator: '<S47>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S47>/Constant'
   *  Constant: '<S47>/Constant1'
   */
  fusionAlg_B.radarObj.radar_09_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_n5;
  fusionAlg_B.radarObj.radar_09_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_a;

  /* BusCreator: '<S47>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_09_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x58_28_Obj_08.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_09_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x58_28_Obj_08.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_09_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x58_28_Obj_08.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_09_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x58_28_Obj_08.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_09_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x58_28_Obj_08.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_09_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x58_28_Obj_08.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_09_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x58_28_Obj_08.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_09_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x58_28_Obj_08.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_09_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x58_28_Obj_08.Obj_XPos;
  fusionAlg_B.radarObj.radar_09_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x58_28_Obj_08.Obj_YPos;

  /* DataTypeConversion: '<S48>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x59_29_Obj_09.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_10_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S48>/Data Type Conversion' */

  /* DataTypeConversion: '<S48>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x59_29_Obj_09.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_10_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S48>/Data Type Conversion1' */

  /* DataTypeConversion: '<S48>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x59_29_Obj_09.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_10_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S48>/Data Type Conversion2' */

  /* DataTypeConversion: '<S48>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x59_29_Obj_09.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_10_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S48>/Data Type Conversion3' */

  /* DataTypeConversion: '<S48>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x59_29_Obj_09.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_10_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S48>/Data Type Conversion4' */

  /* DataTypeConversion: '<S48>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x59_29_Obj_09.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_10_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S48>/Data Type Conversion5' */

  /* BusCreator: '<S48>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S48>/Constant'
   *  Constant: '<S48>/Constant1'
   */
  fusionAlg_B.radarObj.radar_10_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_i;
  fusionAlg_B.radarObj.radar_10_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_b;

  /* BusCreator: '<S48>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_10_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x59_29_Obj_09.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_10_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x59_29_Obj_09.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_10_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x59_29_Obj_09.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_10_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x59_29_Obj_09.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_10_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x59_29_Obj_09.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_10_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x59_29_Obj_09.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_10_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x59_29_Obj_09.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_10_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x59_29_Obj_09.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_10_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x59_29_Obj_09.Obj_XPos;
  fusionAlg_B.radarObj.radar_10_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x59_29_Obj_09.Obj_YPos;

  /* DataTypeConversion: '<S10>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5A_2A_Obj_10.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_11_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S10>/Data Type Conversion' */

  /* DataTypeConversion: '<S10>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x5A_2A_Obj_10.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_11_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S10>/Data Type Conversion1' */

  /* DataTypeConversion: '<S10>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5A_2A_Obj_10.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_11_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S10>/Data Type Conversion2' */

  /* DataTypeConversion: '<S10>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x5A_2A_Obj_10.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_11_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S10>/Data Type Conversion3' */

  /* DataTypeConversion: '<S10>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5A_2A_Obj_10.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_11_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S10>/Data Type Conversion4' */

  /* DataTypeConversion: '<S10>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5A_2A_Obj_10.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_11_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S10>/Data Type Conversion5' */

  /* BusCreator: '<S10>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S10>/Constant1'
   */
  fusionAlg_B.radarObj.radar_11_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_eh;
  fusionAlg_B.radarObj.radar_11_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_k;

  /* BusCreator: '<S10>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_11_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x5A_2A_Obj_10.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_11_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x5A_2A_Obj_10.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_11_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x5A_2A_Obj_10.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_11_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x5A_2A_Obj_10.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_11_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x5A_2A_Obj_10.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_11_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x5A_2A_Obj_10.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_11_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x5A_2A_Obj_10.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_11_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x5A_2A_Obj_10.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_11_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x5A_2A_Obj_10.Obj_XPos;
  fusionAlg_B.radarObj.radar_11_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x5A_2A_Obj_10.Obj_YPos;

  /* DataTypeConversion: '<S11>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5B_2B_Obj_11.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_12_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S11>/Data Type Conversion' */

  /* DataTypeConversion: '<S11>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x5B_2B_Obj_11.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_12_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S11>/Data Type Conversion1' */

  /* DataTypeConversion: '<S11>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5B_2B_Obj_11.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_12_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S11>/Data Type Conversion2' */

  /* DataTypeConversion: '<S11>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x5B_2B_Obj_11.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_12_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S11>/Data Type Conversion3' */

  /* DataTypeConversion: '<S11>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5B_2B_Obj_11.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_12_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S11>/Data Type Conversion4' */

  /* DataTypeConversion: '<S11>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5B_2B_Obj_11.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_12_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S11>/Data Type Conversion5' */

  /* BusCreator: '<S11>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S11>/Constant1'
   */
  fusionAlg_B.radarObj.radar_12_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_d;
  fusionAlg_B.radarObj.radar_12_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_o;

  /* BusCreator: '<S11>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_12_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x5B_2B_Obj_11.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_12_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x5B_2B_Obj_11.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_12_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x5B_2B_Obj_11.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_12_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x5B_2B_Obj_11.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_12_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x5B_2B_Obj_11.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_12_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x5B_2B_Obj_11.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_12_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x5B_2B_Obj_11.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_12_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x5B_2B_Obj_11.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_12_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x5B_2B_Obj_11.Obj_XPos;
  fusionAlg_B.radarObj.radar_12_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x5B_2B_Obj_11.Obj_YPos;

  /* DataTypeConversion: '<S12>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5C_2C_Obj_12.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_13_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S12>/Data Type Conversion' */

  /* DataTypeConversion: '<S12>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x5C_2C_Obj_12.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_13_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S12>/Data Type Conversion1' */

  /* DataTypeConversion: '<S12>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5C_2C_Obj_12.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_13_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S12>/Data Type Conversion2' */

  /* DataTypeConversion: '<S12>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x5C_2C_Obj_12.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_13_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S12>/Data Type Conversion3' */

  /* DataTypeConversion: '<S12>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5C_2C_Obj_12.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_13_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S12>/Data Type Conversion4' */

  /* DataTypeConversion: '<S12>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5C_2C_Obj_12.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_13_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S12>/Data Type Conversion5' */

  /* BusCreator: '<S12>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S12>/Constant1'
   */
  fusionAlg_B.radarObj.radar_13_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_no;
  fusionAlg_B.radarObj.radar_13_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_p;

  /* BusCreator: '<S12>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_13_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x5C_2C_Obj_12.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_13_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x5C_2C_Obj_12.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_13_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x5C_2C_Obj_12.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_13_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x5C_2C_Obj_12.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_13_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x5C_2C_Obj_12.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_13_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x5C_2C_Obj_12.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_13_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x5C_2C_Obj_12.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_13_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x5C_2C_Obj_12.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_13_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x5C_2C_Obj_12.Obj_XPos;
  fusionAlg_B.radarObj.radar_13_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x5C_2C_Obj_12.Obj_YPos;

  /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5D_2D_Obj_13.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_14_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S13>/Data Type Conversion' */

  /* DataTypeConversion: '<S13>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x5D_2D_Obj_13.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_14_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S13>/Data Type Conversion1' */

  /* DataTypeConversion: '<S13>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5D_2D_Obj_13.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_14_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S13>/Data Type Conversion2' */

  /* DataTypeConversion: '<S13>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x5D_2D_Obj_13.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_14_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S13>/Data Type Conversion3' */

  /* DataTypeConversion: '<S13>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5D_2D_Obj_13.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_14_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S13>/Data Type Conversion4' */

  /* DataTypeConversion: '<S13>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5D_2D_Obj_13.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_14_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S13>/Data Type Conversion5' */

  /* BusCreator: '<S13>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S13>/Constant1'
   */
  fusionAlg_B.radarObj.radar_14_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_ek;
  fusionAlg_B.radarObj.radar_14_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_bb;

  /* BusCreator: '<S13>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_14_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x5D_2D_Obj_13.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_14_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x5D_2D_Obj_13.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_14_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x5D_2D_Obj_13.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_14_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x5D_2D_Obj_13.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_14_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x5D_2D_Obj_13.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_14_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x5D_2D_Obj_13.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_14_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x5D_2D_Obj_13.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_14_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x5D_2D_Obj_13.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_14_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x5D_2D_Obj_13.Obj_XPos;
  fusionAlg_B.radarObj.radar_14_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x5D_2D_Obj_13.Obj_YPos;

  /* DataTypeConversion: '<S16>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5E_2E_Obj_14.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_15_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S16>/Data Type Conversion' */

  /* DataTypeConversion: '<S16>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x5E_2E_Obj_14.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_15_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S16>/Data Type Conversion1' */

  /* DataTypeConversion: '<S16>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5E_2E_Obj_14.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_15_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S16>/Data Type Conversion2' */

  /* DataTypeConversion: '<S16>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x5E_2E_Obj_14.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_15_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S16>/Data Type Conversion3' */

  /* DataTypeConversion: '<S16>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5E_2E_Obj_14.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_15_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S16>/Data Type Conversion4' */

  /* DataTypeConversion: '<S16>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5E_2E_Obj_14.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_15_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S16>/Data Type Conversion5' */

  /* BusCreator: '<S16>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S16>/Constant1'
   */
  fusionAlg_B.radarObj.radar_15_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_p;
  fusionAlg_B.radarObj.radar_15_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_jd;

  /* BusCreator: '<S16>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_15_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x5E_2E_Obj_14.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_15_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x5E_2E_Obj_14.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_15_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x5E_2E_Obj_14.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_15_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x5E_2E_Obj_14.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_15_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x5E_2E_Obj_14.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_15_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x5E_2E_Obj_14.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_15_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x5E_2E_Obj_14.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_15_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x5E_2E_Obj_14.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_15_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x5E_2E_Obj_14.Obj_XPos;
  fusionAlg_B.radarObj.radar_15_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x5E_2E_Obj_14.Obj_YPos;

  /* DataTypeConversion: '<S17>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5F_2F_Obj_15.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_16_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion' */

  /* DataTypeConversion: '<S17>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x5F_2F_Obj_15.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_16_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion1' */

  /* DataTypeConversion: '<S17>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5F_2F_Obj_15.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_16_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion2' */

  /* DataTypeConversion: '<S17>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x5F_2F_Obj_15.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_16_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion3' */

  /* DataTypeConversion: '<S17>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5F_2F_Obj_15.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_16_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion4' */

  /* DataTypeConversion: '<S17>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x5F_2F_Obj_15.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_16_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion5' */

  /* BusCreator: '<S17>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S17>/Constant1'
   */
  fusionAlg_B.radarObj.radar_16_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_pl;
  fusionAlg_B.radarObj.radar_16_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_l;

  /* BusCreator: '<S17>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_16_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x5F_2F_Obj_15.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_16_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x5F_2F_Obj_15.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_16_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x5F_2F_Obj_15.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_16_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x5F_2F_Obj_15.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_16_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x5F_2F_Obj_15.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_16_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x5F_2F_Obj_15.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_16_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x5F_2F_Obj_15.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_16_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x5F_2F_Obj_15.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_16_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x5F_2F_Obj_15.Obj_XPos;
  fusionAlg_B.radarObj.radar_16_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x5F_2F_Obj_15.Obj_YPos;

  /* DataTypeConversion: '<S18>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x60_30_Obj_16.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_17_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S18>/Data Type Conversion' */

  /* DataTypeConversion: '<S18>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x60_30_Obj_16.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_17_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S18>/Data Type Conversion1' */

  /* DataTypeConversion: '<S18>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x60_30_Obj_16.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_17_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S18>/Data Type Conversion2' */

  /* DataTypeConversion: '<S18>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x60_30_Obj_16.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_17_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S18>/Data Type Conversion3' */

  /* DataTypeConversion: '<S18>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x60_30_Obj_16.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_17_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S18>/Data Type Conversion4' */

  /* DataTypeConversion: '<S18>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x60_30_Obj_16.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_17_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S18>/Data Type Conversion5' */

  /* BusCreator: '<S18>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S18>/Constant'
   *  Constant: '<S18>/Constant1'
   */
  fusionAlg_B.radarObj.radar_17_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_fw;
  fusionAlg_B.radarObj.radar_17_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_an;

  /* BusCreator: '<S18>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_17_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x60_30_Obj_16.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_17_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x60_30_Obj_16.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_17_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x60_30_Obj_16.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_17_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x60_30_Obj_16.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_17_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x60_30_Obj_16.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_17_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x60_30_Obj_16.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_17_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x60_30_Obj_16.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_17_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x60_30_Obj_16.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_17_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x60_30_Obj_16.Obj_XPos;
  fusionAlg_B.radarObj.radar_17_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x60_30_Obj_16.Obj_YPos;

  /* DataTypeConversion: '<S19>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x61_31_Obj_17.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_18_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S19>/Data Type Conversion' */

  /* DataTypeConversion: '<S19>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x61_31_Obj_17.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_18_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S19>/Data Type Conversion1' */

  /* DataTypeConversion: '<S19>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x61_31_Obj_17.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_18_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S19>/Data Type Conversion2' */

  /* DataTypeConversion: '<S19>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x61_31_Obj_17.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_18_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S19>/Data Type Conversion3' */

  /* DataTypeConversion: '<S19>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x61_31_Obj_17.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_18_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S19>/Data Type Conversion4' */

  /* DataTypeConversion: '<S19>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x61_31_Obj_17.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_18_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S19>/Data Type Conversion5' */

  /* BusCreator: '<S19>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S19>/Constant1'
   */
  fusionAlg_B.radarObj.radar_18_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_md;
  fusionAlg_B.radarObj.radar_18_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_ot;

  /* BusCreator: '<S19>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_18_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x61_31_Obj_17.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_18_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x61_31_Obj_17.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_18_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x61_31_Obj_17.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_18_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x61_31_Obj_17.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_18_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x61_31_Obj_17.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_18_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x61_31_Obj_17.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_18_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x61_31_Obj_17.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_18_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x61_31_Obj_17.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_18_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x61_31_Obj_17.Obj_XPos;
  fusionAlg_B.radarObj.radar_18_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x61_31_Obj_17.Obj_YPos;

  /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x62_32_Obj_18.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_19_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S21>/Data Type Conversion' */

  /* DataTypeConversion: '<S21>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x62_32_Obj_18.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_19_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S21>/Data Type Conversion1' */

  /* DataTypeConversion: '<S21>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x62_32_Obj_18.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_19_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S21>/Data Type Conversion2' */

  /* DataTypeConversion: '<S21>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x62_32_Obj_18.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_19_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S21>/Data Type Conversion3' */

  /* DataTypeConversion: '<S21>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x62_32_Obj_18.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_19_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S21>/Data Type Conversion4' */

  /* DataTypeConversion: '<S21>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x62_32_Obj_18.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_19_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S21>/Data Type Conversion5' */

  /* BusCreator: '<S21>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S21>/Constant'
   *  Constant: '<S21>/Constant1'
   */
  fusionAlg_B.radarObj.radar_19_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_il;
  fusionAlg_B.radarObj.radar_19_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_hq;

  /* BusCreator: '<S21>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_19_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x62_32_Obj_18.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_19_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x62_32_Obj_18.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_19_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x62_32_Obj_18.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_19_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x62_32_Obj_18.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_19_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x62_32_Obj_18.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_19_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x62_32_Obj_18.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_19_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x62_32_Obj_18.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_19_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x62_32_Obj_18.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_19_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x62_32_Obj_18.Obj_XPos;
  fusionAlg_B.radarObj.radar_19_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x62_32_Obj_18.Obj_YPos;

  /* DataTypeConversion: '<S22>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x63_33_Obj_19.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_20_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S22>/Data Type Conversion' */

  /* DataTypeConversion: '<S22>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x63_33_Obj_19.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_20_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S22>/Data Type Conversion1' */

  /* DataTypeConversion: '<S22>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x63_33_Obj_19.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_20_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S22>/Data Type Conversion2' */

  /* DataTypeConversion: '<S22>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x63_33_Obj_19.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_20_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S22>/Data Type Conversion3' */

  /* DataTypeConversion: '<S22>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x63_33_Obj_19.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_20_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S22>/Data Type Conversion4' */

  /* DataTypeConversion: '<S22>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x63_33_Obj_19.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_20_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S22>/Data Type Conversion5' */

  /* BusCreator: '<S22>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S22>/Constant'
   *  Constant: '<S22>/Constant1'
   */
  fusionAlg_B.radarObj.radar_20_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_gr;
  fusionAlg_B.radarObj.radar_20_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_ji;

  /* BusCreator: '<S22>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_20_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x63_33_Obj_19.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_20_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x63_33_Obj_19.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_20_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x63_33_Obj_19.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_20_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x63_33_Obj_19.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_20_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x63_33_Obj_19.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_20_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x63_33_Obj_19.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_20_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x63_33_Obj_19.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_20_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x63_33_Obj_19.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_20_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x63_33_Obj_19.Obj_XPos;
  fusionAlg_B.radarObj.radar_20_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x63_33_Obj_19.Obj_YPos;

  /* DataTypeConversion: '<S23>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x64_34_Obj_20.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_21_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S23>/Data Type Conversion' */

  /* DataTypeConversion: '<S23>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x64_34_Obj_20.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_21_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S23>/Data Type Conversion1' */

  /* DataTypeConversion: '<S23>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x64_34_Obj_20.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_21_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S23>/Data Type Conversion2' */

  /* DataTypeConversion: '<S23>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x64_34_Obj_20.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_21_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S23>/Data Type Conversion3' */

  /* DataTypeConversion: '<S23>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x64_34_Obj_20.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_21_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S23>/Data Type Conversion4' */

  /* DataTypeConversion: '<S23>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x64_34_Obj_20.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_21_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S23>/Data Type Conversion5' */

  /* BusCreator: '<S23>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S23>/Constant'
   *  Constant: '<S23>/Constant1'
   */
  fusionAlg_B.radarObj.radar_21_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_py;
  fusionAlg_B.radarObj.radar_21_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_lo;

  /* BusCreator: '<S23>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_21_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x64_34_Obj_20.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_21_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x64_34_Obj_20.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_21_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x64_34_Obj_20.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_21_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x64_34_Obj_20.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_21_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x64_34_Obj_20.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_21_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x64_34_Obj_20.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_21_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x64_34_Obj_20.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_21_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x64_34_Obj_20.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_21_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x64_34_Obj_20.Obj_XPos;
  fusionAlg_B.radarObj.radar_21_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x64_34_Obj_20.Obj_YPos;

  /* DataTypeConversion: '<S24>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x65_35_Obj_21.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_22_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S24>/Data Type Conversion' */

  /* DataTypeConversion: '<S24>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x65_35_Obj_21.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_22_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S24>/Data Type Conversion1' */

  /* DataTypeConversion: '<S24>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x65_35_Obj_21.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_22_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S24>/Data Type Conversion2' */

  /* DataTypeConversion: '<S24>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x65_35_Obj_21.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_22_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S24>/Data Type Conversion3' */

  /* DataTypeConversion: '<S24>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x65_35_Obj_21.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_22_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S24>/Data Type Conversion4' */

  /* DataTypeConversion: '<S24>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x65_35_Obj_21.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_22_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S24>/Data Type Conversion5' */

  /* BusCreator: '<S24>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S24>/Constant'
   *  Constant: '<S24>/Constant1'
   */
  fusionAlg_B.radarObj.radar_22_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_g0;
  fusionAlg_B.radarObj.radar_22_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_fv;

  /* BusCreator: '<S24>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_22_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x65_35_Obj_21.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_22_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x65_35_Obj_21.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_22_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x65_35_Obj_21.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_22_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x65_35_Obj_21.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_22_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x65_35_Obj_21.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_22_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x65_35_Obj_21.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_22_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x65_35_Obj_21.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_22_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x65_35_Obj_21.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_22_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x65_35_Obj_21.Obj_XPos;
  fusionAlg_B.radarObj.radar_22_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x65_35_Obj_21.Obj_YPos;

  /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x66_36_Obj_22.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_23_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S14>/Data Type Conversion' */

  /* DataTypeConversion: '<S14>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x66_36_Obj_22.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_23_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S14>/Data Type Conversion1' */

  /* DataTypeConversion: '<S14>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x66_36_Obj_22.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_23_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S14>/Data Type Conversion2' */

  /* DataTypeConversion: '<S14>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x66_36_Obj_22.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_23_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S14>/Data Type Conversion3' */

  /* DataTypeConversion: '<S14>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x66_36_Obj_22.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_23_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S14>/Data Type Conversion4' */

  /* DataTypeConversion: '<S14>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x66_36_Obj_22.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_23_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S14>/Data Type Conversion5' */

  /* BusCreator: '<S14>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   */
  fusionAlg_B.radarObj.radar_23_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_od;
  fusionAlg_B.radarObj.radar_23_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_px;

  /* BusCreator: '<S14>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_23_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x66_36_Obj_22.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_23_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x66_36_Obj_22.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_23_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x66_36_Obj_22.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_23_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x66_36_Obj_22.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_23_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x66_36_Obj_22.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_23_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x66_36_Obj_22.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_23_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x66_36_Obj_22.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_23_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x66_36_Obj_22.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_23_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x66_36_Obj_22.Obj_XPos;
  fusionAlg_B.radarObj.radar_23_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x66_36_Obj_22.Obj_YPos;

  /* DataTypeConversion: '<S15>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x67_37_Obj_23.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_24_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S15>/Data Type Conversion' */

  /* DataTypeConversion: '<S15>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x67_37_Obj_23.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_24_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S15>/Data Type Conversion1' */

  /* DataTypeConversion: '<S15>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x67_37_Obj_23.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_24_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S15>/Data Type Conversion2' */

  /* DataTypeConversion: '<S15>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x67_37_Obj_23.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_24_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S15>/Data Type Conversion3' */

  /* DataTypeConversion: '<S15>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x67_37_Obj_23.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_24_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S15>/Data Type Conversion4' */

  /* DataTypeConversion: '<S15>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x67_37_Obj_23.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_24_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S15>/Data Type Conversion5' */

  /* BusCreator: '<S15>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S15>/Constant1'
   */
  fusionAlg_B.radarObj.radar_24_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_k;
  fusionAlg_B.radarObj.radar_24_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_bf;

  /* BusCreator: '<S15>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_24_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x67_37_Obj_23.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_24_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x67_37_Obj_23.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_24_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x67_37_Obj_23.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_24_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x67_37_Obj_23.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_24_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x67_37_Obj_23.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_24_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x67_37_Obj_23.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_24_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x67_37_Obj_23.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_24_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x67_37_Obj_23.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_24_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x67_37_Obj_23.Obj_XPos;
  fusionAlg_B.radarObj.radar_24_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x67_37_Obj_23.Obj_YPos;

  /* DataTypeConversion: '<S25>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x68_38_Obj_24.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_25_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S25>/Data Type Conversion' */

  /* DataTypeConversion: '<S25>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x68_38_Obj_24.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_25_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S25>/Data Type Conversion1' */

  /* DataTypeConversion: '<S25>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x68_38_Obj_24.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_25_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S25>/Data Type Conversion2' */

  /* DataTypeConversion: '<S25>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x68_38_Obj_24.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_25_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S25>/Data Type Conversion3' */

  /* DataTypeConversion: '<S25>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x68_38_Obj_24.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_25_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S25>/Data Type Conversion4' */

  /* DataTypeConversion: '<S25>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x68_38_Obj_24.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_25_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S25>/Data Type Conversion5' */

  /* BusCreator: '<S25>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S25>/Constant'
   *  Constant: '<S25>/Constant1'
   */
  fusionAlg_B.radarObj.radar_25_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_j;
  fusionAlg_B.radarObj.radar_25_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_fn;

  /* BusCreator: '<S25>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_25_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x68_38_Obj_24.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_25_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x68_38_Obj_24.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_25_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x68_38_Obj_24.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_25_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x68_38_Obj_24.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_25_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x68_38_Obj_24.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_25_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x68_38_Obj_24.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_25_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x68_38_Obj_24.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_25_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x68_38_Obj_24.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_25_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x68_38_Obj_24.Obj_XPos;
  fusionAlg_B.radarObj.radar_25_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x68_38_Obj_24.Obj_YPos;

  /* DataTypeConversion: '<S26>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x69_39_Obj_25.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_26_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S26>/Data Type Conversion' */

  /* DataTypeConversion: '<S26>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x69_39_Obj_25.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_26_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S26>/Data Type Conversion1' */

  /* DataTypeConversion: '<S26>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x69_39_Obj_25.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_26_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S26>/Data Type Conversion2' */

  /* DataTypeConversion: '<S26>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x69_39_Obj_25.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_26_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S26>/Data Type Conversion3' */

  /* DataTypeConversion: '<S26>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x69_39_Obj_25.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_26_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S26>/Data Type Conversion4' */

  /* DataTypeConversion: '<S26>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x69_39_Obj_25.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_26_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S26>/Data Type Conversion5' */

  /* BusCreator: '<S26>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S26>/Constant'
   *  Constant: '<S26>/Constant1'
   */
  fusionAlg_B.radarObj.radar_26_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_az;
  fusionAlg_B.radarObj.radar_26_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_o3;

  /* BusCreator: '<S26>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_26_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x69_39_Obj_25.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_26_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x69_39_Obj_25.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_26_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x69_39_Obj_25.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_26_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x69_39_Obj_25.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_26_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x69_39_Obj_25.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_26_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x69_39_Obj_25.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_26_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x69_39_Obj_25.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_26_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x69_39_Obj_25.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_26_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x69_39_Obj_25.Obj_XPos;
  fusionAlg_B.radarObj.radar_26_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x69_39_Obj_25.Obj_YPos;

  /* DataTypeConversion: '<S34>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6A_3A_Obj_26.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_27_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S34>/Data Type Conversion' */

  /* DataTypeConversion: '<S34>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x6A_3A_Obj_26.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_27_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S34>/Data Type Conversion1' */

  /* DataTypeConversion: '<S34>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6A_3A_Obj_26.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_27_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S34>/Data Type Conversion2' */

  /* DataTypeConversion: '<S34>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x6A_3A_Obj_26.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_27_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S34>/Data Type Conversion3' */

  /* DataTypeConversion: '<S34>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6A_3A_Obj_26.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_27_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S34>/Data Type Conversion4' */

  /* DataTypeConversion: '<S34>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6A_3A_Obj_26.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_27_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S34>/Data Type Conversion5' */

  /* BusCreator: '<S34>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S34>/Constant'
   *  Constant: '<S34>/Constant1'
   */
  fusionAlg_B.radarObj.radar_27_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_cg;
  fusionAlg_B.radarObj.radar_27_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_jn;

  /* BusCreator: '<S34>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_27_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x6A_3A_Obj_26.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_27_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x6A_3A_Obj_26.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_27_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x6A_3A_Obj_26.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_27_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x6A_3A_Obj_26.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_27_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x6A_3A_Obj_26.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_27_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x6A_3A_Obj_26.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_27_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x6A_3A_Obj_26.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_27_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x6A_3A_Obj_26.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_27_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x6A_3A_Obj_26.Obj_XPos;
  fusionAlg_B.radarObj.radar_27_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x6A_3A_Obj_26.Obj_YPos;

  /* DataTypeConversion: '<S37>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6B_3B_Obj_27.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_28_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S37>/Data Type Conversion' */

  /* DataTypeConversion: '<S37>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x6B_3B_Obj_27.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_28_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S37>/Data Type Conversion1' */

  /* DataTypeConversion: '<S37>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6B_3B_Obj_27.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_28_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S37>/Data Type Conversion2' */

  /* DataTypeConversion: '<S37>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x6B_3B_Obj_27.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_28_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S37>/Data Type Conversion3' */

  /* DataTypeConversion: '<S37>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6B_3B_Obj_27.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_28_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S37>/Data Type Conversion4' */

  /* DataTypeConversion: '<S37>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6B_3B_Obj_27.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_28_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S37>/Data Type Conversion5' */

  /* BusCreator: '<S37>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S37>/Constant'
   *  Constant: '<S37>/Constant1'
   */
  fusionAlg_B.radarObj.radar_28_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_n4;
  fusionAlg_B.radarObj.radar_28_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_c;

  /* BusCreator: '<S37>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_28_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x6B_3B_Obj_27.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_28_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x6B_3B_Obj_27.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_28_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x6B_3B_Obj_27.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_28_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x6B_3B_Obj_27.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_28_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x6B_3B_Obj_27.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_28_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x6B_3B_Obj_27.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_28_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x6B_3B_Obj_27.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_28_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x6B_3B_Obj_27.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_28_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x6B_3B_Obj_27.Obj_XPos;
  fusionAlg_B.radarObj.radar_28_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x6B_3B_Obj_27.Obj_YPos;

  /* DataTypeConversion: '<S38>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6C_3C_Obj_28.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_29_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S38>/Data Type Conversion' */

  /* DataTypeConversion: '<S38>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x6C_3C_Obj_28.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_29_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S38>/Data Type Conversion1' */

  /* DataTypeConversion: '<S38>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6C_3C_Obj_28.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_29_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S38>/Data Type Conversion2' */

  /* DataTypeConversion: '<S38>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x6C_3C_Obj_28.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_29_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S38>/Data Type Conversion3' */

  /* DataTypeConversion: '<S38>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6C_3C_Obj_28.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_29_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S38>/Data Type Conversion4' */

  /* DataTypeConversion: '<S38>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6C_3C_Obj_28.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_29_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S38>/Data Type Conversion5' */

  /* BusCreator: '<S38>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S38>/Constant'
   *  Constant: '<S38>/Constant1'
   */
  fusionAlg_B.radarObj.radar_29_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_h;
  fusionAlg_B.radarObj.radar_29_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_pl;

  /* BusCreator: '<S38>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_29_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x6C_3C_Obj_28.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_29_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x6C_3C_Obj_28.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_29_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x6C_3C_Obj_28.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_29_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x6C_3C_Obj_28.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_29_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x6C_3C_Obj_28.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_29_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x6C_3C_Obj_28.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_29_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x6C_3C_Obj_28.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_29_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x6C_3C_Obj_28.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_29_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x6C_3C_Obj_28.Obj_XPos;
  fusionAlg_B.radarObj.radar_29_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x6C_3C_Obj_28.Obj_YPos;

  /* DataTypeConversion: '<S39>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6D_3D_Obj_29.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_30_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S39>/Data Type Conversion' */

  /* DataTypeConversion: '<S39>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x6D_3D_Obj_29.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_30_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S39>/Data Type Conversion1' */

  /* DataTypeConversion: '<S39>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6D_3D_Obj_29.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_30_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S39>/Data Type Conversion2' */

  /* DataTypeConversion: '<S39>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x6D_3D_Obj_29.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_30_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S39>/Data Type Conversion3' */

  /* DataTypeConversion: '<S39>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6D_3D_Obj_29.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_30_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S39>/Data Type Conversion4' */

  /* DataTypeConversion: '<S39>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6D_3D_Obj_29.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_30_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S39>/Data Type Conversion5' */

  /* BusCreator: '<S39>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S39>/Constant'
   *  Constant: '<S39>/Constant1'
   */
  fusionAlg_B.radarObj.radar_30_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_fp;
  fusionAlg_B.radarObj.radar_30_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_ds;

  /* BusCreator: '<S39>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_30_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x6D_3D_Obj_29.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_30_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x6D_3D_Obj_29.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_30_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x6D_3D_Obj_29.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_30_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x6D_3D_Obj_29.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_30_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x6D_3D_Obj_29.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_30_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x6D_3D_Obj_29.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_30_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x6D_3D_Obj_29.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_30_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x6D_3D_Obj_29.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_30_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x6D_3D_Obj_29.Obj_XPos;
  fusionAlg_B.radarObj.radar_30_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x6D_3D_Obj_29.Obj_YPos;

  /* DataTypeConversion: '<S40>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6E_3E_Obj_30.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_31_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S40>/Data Type Conversion' */

  /* DataTypeConversion: '<S40>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x6E_3E_Obj_30.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_31_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S40>/Data Type Conversion1' */

  /* DataTypeConversion: '<S40>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6E_3E_Obj_30.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_31_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S40>/Data Type Conversion2' */

  /* DataTypeConversion: '<S40>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x6E_3E_Obj_30.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_31_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S40>/Data Type Conversion3' */

  /* DataTypeConversion: '<S40>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6E_3E_Obj_30.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_31_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S40>/Data Type Conversion4' */

  /* DataTypeConversion: '<S40>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6E_3E_Obj_30.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_31_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S40>/Data Type Conversion5' */

  /* BusCreator: '<S40>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S40>/Constant'
   *  Constant: '<S40>/Constant1'
   */
  fusionAlg_B.radarObj.radar_31_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_i1;
  fusionAlg_B.radarObj.radar_31_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_m5;

  /* BusCreator: '<S40>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_31_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x6E_3E_Obj_30.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_31_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x6E_3E_Obj_30.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_31_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x6E_3E_Obj_30.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_31_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x6E_3E_Obj_30.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_31_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x6E_3E_Obj_30.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_31_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x6E_3E_Obj_30.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_31_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x6E_3E_Obj_30.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_31_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x6E_3E_Obj_30.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_31_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x6E_3E_Obj_30.Obj_XPos;
  fusionAlg_B.radarObj.radar_31_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x6E_3E_Obj_30.Obj_YPos;

  /* DataTypeConversion: '<S41>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6F_3F_Obj_31.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_32_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S41>/Data Type Conversion' */

  /* DataTypeConversion: '<S41>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x6F_3F_Obj_31.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_32_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S41>/Data Type Conversion1' */

  /* DataTypeConversion: '<S41>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6F_3F_Obj_31.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_32_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S41>/Data Type Conversion2' */

  /* DataTypeConversion: '<S41>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x6F_3F_Obj_31.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_32_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S41>/Data Type Conversion3' */

  /* DataTypeConversion: '<S41>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6F_3F_Obj_31.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_32_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S41>/Data Type Conversion4' */

  /* DataTypeConversion: '<S41>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x6F_3F_Obj_31.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_32_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S41>/Data Type Conversion5' */

  /* BusCreator: '<S41>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S41>/Constant'
   *  Constant: '<S41>/Constant1'
   */
  fusionAlg_B.radarObj.radar_32_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_jt;
  fusionAlg_B.radarObj.radar_32_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_n;

  /* BusCreator: '<S41>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_32_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x6F_3F_Obj_31.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_32_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x6F_3F_Obj_31.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_32_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x6F_3F_Obj_31.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_32_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x6F_3F_Obj_31.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_32_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x6F_3F_Obj_31.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_32_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x6F_3F_Obj_31.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_32_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x6F_3F_Obj_31.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_32_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x6F_3F_Obj_31.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_32_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x6F_3F_Obj_31.Obj_XPos;
  fusionAlg_B.radarObj.radar_32_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x6F_3F_Obj_31.Obj_YPos;

  /* DataTypeConversion: '<S42>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x70_40_Obj_32.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_33_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S42>/Data Type Conversion' */

  /* DataTypeConversion: '<S42>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x70_40_Obj_32.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_33_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S42>/Data Type Conversion1' */

  /* DataTypeConversion: '<S42>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x70_40_Obj_32.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_33_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S42>/Data Type Conversion2' */

  /* DataTypeConversion: '<S42>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x70_40_Obj_32.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_33_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S42>/Data Type Conversion3' */

  /* DataTypeConversion: '<S42>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x70_40_Obj_32.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_33_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S42>/Data Type Conversion4' */

  /* DataTypeConversion: '<S42>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x70_40_Obj_32.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_33_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S42>/Data Type Conversion5' */

  /* BusCreator: '<S42>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S42>/Constant'
   *  Constant: '<S42>/Constant1'
   */
  fusionAlg_B.radarObj.radar_33_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_l;
  fusionAlg_B.radarObj.radar_33_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_oi;

  /* BusCreator: '<S42>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_33_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x70_40_Obj_32.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_33_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x70_40_Obj_32.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_33_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x70_40_Obj_32.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_33_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x70_40_Obj_32.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_33_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x70_40_Obj_32.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_33_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x70_40_Obj_32.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_33_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x70_40_Obj_32.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_33_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x70_40_Obj_32.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_33_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x70_40_Obj_32.Obj_XPos;
  fusionAlg_B.radarObj.radar_33_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x70_40_Obj_32.Obj_YPos;

  /* DataTypeConversion: '<S43>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x71_41_Obj_33.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_34_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S43>/Data Type Conversion' */

  /* DataTypeConversion: '<S43>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x71_41_Obj_33.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_34_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S43>/Data Type Conversion1' */

  /* DataTypeConversion: '<S43>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x71_41_Obj_33.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_34_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S43>/Data Type Conversion2' */

  /* DataTypeConversion: '<S43>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x71_41_Obj_33.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_34_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S43>/Data Type Conversion3' */

  /* DataTypeConversion: '<S43>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x71_41_Obj_33.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_34_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S43>/Data Type Conversion4' */

  /* DataTypeConversion: '<S43>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x71_41_Obj_33.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_34_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S43>/Data Type Conversion5' */

  /* BusCreator: '<S43>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S43>/Constant'
   *  Constant: '<S43>/Constant1'
   */
  fusionAlg_B.radarObj.radar_34_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_ab;
  fusionAlg_B.radarObj.radar_34_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_ow;

  /* BusCreator: '<S43>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_34_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x71_41_Obj_33.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_34_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x71_41_Obj_33.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_34_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x71_41_Obj_33.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_34_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x71_41_Obj_33.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_34_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x71_41_Obj_33.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_34_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x71_41_Obj_33.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_34_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x71_41_Obj_33.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_34_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x71_41_Obj_33.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_34_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x71_41_Obj_33.Obj_XPos;
  fusionAlg_B.radarObj.radar_34_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x71_41_Obj_33.Obj_YPos;

  /* DataTypeConversion: '<S27>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x72_42_Obj_34.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_35_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S27>/Data Type Conversion' */

  /* DataTypeConversion: '<S27>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x72_42_Obj_34.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_35_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S27>/Data Type Conversion1' */

  /* DataTypeConversion: '<S27>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x72_42_Obj_34.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_35_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S27>/Data Type Conversion2' */

  /* DataTypeConversion: '<S27>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x72_42_Obj_34.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_35_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S27>/Data Type Conversion3' */

  /* DataTypeConversion: '<S27>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x72_42_Obj_34.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_35_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S27>/Data Type Conversion4' */

  /* DataTypeConversion: '<S27>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x72_42_Obj_34.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_35_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S27>/Data Type Conversion5' */

  /* BusCreator: '<S27>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S27>/Constant'
   *  Constant: '<S27>/Constant1'
   */
  fusionAlg_B.radarObj.radar_35_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_b;
  fusionAlg_B.radarObj.radar_35_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_l4;

  /* BusCreator: '<S27>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_35_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x72_42_Obj_34.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_35_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x72_42_Obj_34.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_35_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x72_42_Obj_34.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_35_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x72_42_Obj_34.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_35_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x72_42_Obj_34.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_35_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x72_42_Obj_34.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_35_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x72_42_Obj_34.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_35_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x72_42_Obj_34.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_35_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x72_42_Obj_34.Obj_XPos;
  fusionAlg_B.radarObj.radar_35_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x72_42_Obj_34.Obj_YPos;

  /* DataTypeConversion: '<S28>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x73_43_Obj_35.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_36_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S28>/Data Type Conversion' */

  /* DataTypeConversion: '<S28>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x73_43_Obj_35.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_36_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S28>/Data Type Conversion1' */

  /* DataTypeConversion: '<S28>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x73_43_Obj_35.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_36_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S28>/Data Type Conversion2' */

  /* DataTypeConversion: '<S28>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x73_43_Obj_35.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_36_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S28>/Data Type Conversion3' */

  /* DataTypeConversion: '<S28>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x73_43_Obj_35.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_36_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S28>/Data Type Conversion4' */

  /* DataTypeConversion: '<S28>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x73_43_Obj_35.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_36_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S28>/Data Type Conversion5' */

  /* BusCreator: '<S28>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S28>/Constant'
   *  Constant: '<S28>/Constant1'
   */
  fusionAlg_B.radarObj.radar_36_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_du;
  fusionAlg_B.radarObj.radar_36_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_bc;

  /* BusCreator: '<S28>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_36_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x73_43_Obj_35.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_36_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x73_43_Obj_35.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_36_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x73_43_Obj_35.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_36_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x73_43_Obj_35.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_36_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x73_43_Obj_35.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_36_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x73_43_Obj_35.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_36_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x73_43_Obj_35.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_36_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x73_43_Obj_35.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_36_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x73_43_Obj_35.Obj_XPos;
  fusionAlg_B.radarObj.radar_36_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x73_43_Obj_35.Obj_YPos;

  /* DataTypeConversion: '<S29>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x74_44_Obj_36.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_37_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S29>/Data Type Conversion' */

  /* DataTypeConversion: '<S29>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x74_44_Obj_36.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_37_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S29>/Data Type Conversion1' */

  /* DataTypeConversion: '<S29>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x74_44_Obj_36.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_37_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S29>/Data Type Conversion2' */

  /* DataTypeConversion: '<S29>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x74_44_Obj_36.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_37_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S29>/Data Type Conversion3' */

  /* DataTypeConversion: '<S29>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x74_44_Obj_36.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_37_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S29>/Data Type Conversion4' */

  /* DataTypeConversion: '<S29>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x74_44_Obj_36.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_37_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S29>/Data Type Conversion5' */

  /* BusCreator: '<S29>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S29>/Constant'
   *  Constant: '<S29>/Constant1'
   */
  fusionAlg_B.radarObj.radar_37_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_o1;
  fusionAlg_B.radarObj.radar_37_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_dj;

  /* BusCreator: '<S29>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_37_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x74_44_Obj_36.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_37_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x74_44_Obj_36.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_37_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x74_44_Obj_36.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_37_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x74_44_Obj_36.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_37_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x74_44_Obj_36.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_37_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x74_44_Obj_36.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_37_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x74_44_Obj_36.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_37_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x74_44_Obj_36.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_37_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x74_44_Obj_36.Obj_XPos;
  fusionAlg_B.radarObj.radar_37_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x74_44_Obj_36.Obj_YPos;

  /* DataTypeConversion: '<S30>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x75_45_Obj_37.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_38_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S30>/Data Type Conversion' */

  /* DataTypeConversion: '<S30>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x75_45_Obj_37.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_38_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S30>/Data Type Conversion1' */

  /* DataTypeConversion: '<S30>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x75_45_Obj_37.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_38_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S30>/Data Type Conversion2' */

  /* DataTypeConversion: '<S30>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x75_45_Obj_37.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_38_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S30>/Data Type Conversion3' */

  /* DataTypeConversion: '<S30>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x75_45_Obj_37.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_38_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S30>/Data Type Conversion4' */

  /* DataTypeConversion: '<S30>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x75_45_Obj_37.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_38_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S30>/Data Type Conversion5' */

  /* BusCreator: '<S30>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S30>/Constant'
   *  Constant: '<S30>/Constant1'
   */
  fusionAlg_B.radarObj.radar_38_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_mq;
  fusionAlg_B.radarObj.radar_38_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_ou;

  /* BusCreator: '<S30>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_38_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x75_45_Obj_37.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_38_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x75_45_Obj_37.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_38_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x75_45_Obj_37.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_38_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x75_45_Obj_37.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_38_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x75_45_Obj_37.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_38_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x75_45_Obj_37.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_38_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x75_45_Obj_37.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_38_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x75_45_Obj_37.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_38_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x75_45_Obj_37.Obj_XPos;
  fusionAlg_B.radarObj.radar_38_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x75_45_Obj_37.Obj_YPos;

  /* DataTypeConversion: '<S32>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x76_46_Obj_38.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_39_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S32>/Data Type Conversion' */

  /* DataTypeConversion: '<S32>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x76_46_Obj_38.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_39_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S32>/Data Type Conversion1' */

  /* DataTypeConversion: '<S32>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x76_46_Obj_38.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_39_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S32>/Data Type Conversion2' */

  /* DataTypeConversion: '<S32>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x76_46_Obj_38.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_39_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S32>/Data Type Conversion3' */

  /* DataTypeConversion: '<S32>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x76_46_Obj_38.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_39_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S32>/Data Type Conversion4' */

  /* DataTypeConversion: '<S32>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x76_46_Obj_38.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_39_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S32>/Data Type Conversion5' */

  /* BusCreator: '<S32>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S32>/Constant'
   *  Constant: '<S32>/Constant1'
   */
  fusionAlg_B.radarObj.radar_39_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_am;
  fusionAlg_B.radarObj.radar_39_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_nd;

  /* BusCreator: '<S32>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_39_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x76_46_Obj_38.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_39_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x76_46_Obj_38.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_39_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x76_46_Obj_38.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_39_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x76_46_Obj_38.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_39_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x76_46_Obj_38.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_39_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x76_46_Obj_38.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_39_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x76_46_Obj_38.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_39_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x76_46_Obj_38.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_39_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x76_46_Obj_38.Obj_XPos;
  fusionAlg_B.radarObj.radar_39_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x76_46_Obj_38.Obj_YPos;

  /* DataTypeConversion: '<S33>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x77_47_Obj_39.Obj_ID);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_40_obj.objID = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S33>/Data Type Conversion' */

  /* DataTypeConversion: '<S33>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x77_47_Obj_39.Obj_UpdateFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_40_obj.objUpdateFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S33>/Data Type Conversion1' */

  /* DataTypeConversion: '<S33>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x77_47_Obj_39.Obj_ValidFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_40_obj.objValidFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S33>/Data Type Conversion2' */

  /* DataTypeConversion: '<S33>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor
    (fusionAlg_U.Radar410_Info_st.x77_47_Obj_39.Obj_MotionPattern);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_40_obj.objMotionPattern = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S33>/Data Type Conversion3' */

  /* DataTypeConversion: '<S33>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x77_47_Obj_39.Obj_Type);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_40_obj.objType = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S33>/Data Type Conversion4' */

  /* DataTypeConversion: '<S33>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x77_47_Obj_39.Obj_MeasFlag);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.radarObj.radar_40_obj.objMeasFlag = (uint8_T)(tmp < 0.0F ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S33>/Data Type Conversion5' */

  /* BusCreator: '<S33>/BusConversion_InsertedFor_Bus Creator1_at_inport_16' incorporates:
   *  Constant: '<S33>/Constant'
   *  Constant: '<S33>/Constant1'
   */
  fusionAlg_B.radarObj.radar_40_obj.reserved.reserved1 =
    fusionAlg_P.Constant_Value_lo;
  fusionAlg_B.radarObj.radar_40_obj.reserved.reserved0 =
    fusionAlg_P.Constant1_Value_oc;

  /* BusCreator: '<S33>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.radarObj.radar_40_obj.objObstacleProb =
    fusionAlg_U.Radar410_Info_st.x77_47_Obj_39.Obj_ObstacleProb;
  fusionAlg_B.radarObj.radar_40_obj.objXPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x77_47_Obj_39.Obj_XPos_Stdev;
  fusionAlg_B.radarObj.radar_40_obj.objYPos_Stdev =
    fusionAlg_U.Radar410_Info_st.x77_47_Obj_39.Obj_YPos_Stdev;
  fusionAlg_B.radarObj.radar_40_obj.objXVelRel_Stdev =
    fusionAlg_U.Radar410_Info_st.x77_47_Obj_39.Obj_XVelRel_Stdev;
  fusionAlg_B.radarObj.radar_40_obj.objXAccRel =
    fusionAlg_U.Radar410_Info_st.x77_47_Obj_39.Obj_XAccRel;
  fusionAlg_B.radarObj.radar_40_obj.objExstProb =
    fusionAlg_U.Radar410_Info_st.x77_47_Obj_39.Obj_ExstProb;
  fusionAlg_B.radarObj.radar_40_obj.objYVelRel =
    fusionAlg_U.Radar410_Info_st.x77_47_Obj_39.Obj_YVelRel;
  fusionAlg_B.radarObj.radar_40_obj.objXVelRel =
    fusionAlg_U.Radar410_Info_st.x77_47_Obj_39.Obj_XVelRel;
  fusionAlg_B.radarObj.radar_40_obj.objXPos =
    fusionAlg_U.Radar410_Info_st.x77_47_Obj_39.Obj_XPos;
  fusionAlg_B.radarObj.radar_40_obj.objYPos =
    fusionAlg_U.Radar410_Info_st.x77_47_Obj_39.Obj_YPos;

  /* DataTypeConversion: '<S36>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x80_Status.TimeStamp);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 65536.0);
  }

  fusionAlg_B.BusCreator1_fl.timeStamp = (uint16_T)(tmp < 0.0F ? (int32_T)
    (uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S36>/Data Type Conversion' */

  /* DataTypeConversion: '<S36>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x80_Status.Status_HWErr);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.BusCreator1_fl.statusHWErr = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S36>/Data Type Conversion1' */

  /* DataTypeConversion: '<S36>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x80_Status.Status_BlkProg);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.BusCreator1_fl.statusBlkProg = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S36>/Data Type Conversion2' */

  /* DataTypeConversion: '<S36>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x80_Status.Status_MisAlign);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.BusCreator1_fl.statusMisAlign = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S36>/Data Type Conversion3' */

  /* DataTypeConversion: '<S36>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x80_Status.Fail);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.BusCreator1_fl.sGUFail = (uint8_T)(tmp < 0.0F ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S36>/Data Type Conversion4' */

  /* DataTypeConversion: '<S36>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x80_Status.MeasEnabled);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.BusCreator1_fl.measEnabled = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S36>/Data Type Conversion5' */

  /* DataTypeConversion: '<S36>/Data Type Conversion6' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x80_Status.Msg_AliveCounter);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.BusCreator1_fl.msgAliveCounter = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S36>/Data Type Conversion6' */

  /* DataTypeConversion: '<S36>/Data Type Conversion7' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x80_Status.Latency);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.BusCreator1_fl.latency = (uint8_T)(tmp < 0.0F ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S36>/Data Type Conversion7' */

  /* DataTypeConversion: '<S36>/Data Type Conversion8' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  tmp = (real32_T)floor(fusionAlg_U.Radar410_Info_st.x80_Status.Msg_CheckSum);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  fusionAlg_B.BusCreator1_fl.msgCheckSum = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S36>/Data Type Conversion8' */

  /* BusCreator: '<S36>/Bus Creator2' incorporates:
   *  Constant: '<S36>/Constant'
   *  Constant: '<S36>/Constant1'
   */
  fusionAlg_B.BusCreator1_fl.reservedField.reserved1 =
    fusionAlg_P.Constant_Value_e1;
  fusionAlg_B.BusCreator1_fl.reservedField.reserved0 =
    fusionAlg_P.Constant1_Value_e;

  /* BusCreator: '<S36>/Bus Creator1' incorporates:
   *  Inport: '<Root>/Radar410_Info_st'
   */
  fusionAlg_B.BusCreator1_fl.hostYaw =
    fusionAlg_U.Radar410_Info_st.x80_Status.Host_Yaw;
  fusionAlg_B.BusCreator1_fl.hostSpeed =
    fusionAlg_U.Radar410_Info_st.x80_Status.HostSpeed;

  /* BusCreator: '<S6>/Bus Creator1' incorporates:
   *  Constant: '<S6>/Constant'
   *  Constant: '<S6>/Constant1'
   */
  fusionAlg_B.reserved.reserved0 = fusionAlg_P.Constant_Value_e;
  fusionAlg_B.reserved.reserved1 = fusionAlg_P.Constant1_Value;

  /* BusCreator: '<S6>/Bus Creator' incorporates:
   *  Constant: '<S6>/count'
   *  Constant: '<S6>/errType'
   *  Constant: '<S6>/frameNum'
   *  Constant: '<S6>/timestamp'
   */
  fusionAlg_B.BusCreator_l.timestamp = fusionAlg_P.timestamp_Value;
  fusionAlg_B.BusCreator_l.frameNum = fusionAlg_P.frameNum_Value;
  fusionAlg_B.BusCreator_l.count = fusionAlg_P.count_Value;
  fusionAlg_B.BusCreator_l.errType = fusionAlg_P.errType_Value;
  fusionAlg_B.BusCreator_l.radarObj = fusionAlg_B.radarObj;
  fusionAlg_B.BusCreator_l.radarState = fusionAlg_B.BusCreator1_fl;
  fusionAlg_B.BusCreator_l.reserved = fusionAlg_B.reserved;

  /* Gain: '<S5>/Gain1' incorporates:
   *  Inport: '<Root>/COM_VehBus_st'
   */
  fusionAlg_B.YawRate = fusionAlg_P.Gain1_Gain *
    fusionAlg_U.COM_VehBus_st.x1E9.VehDynYawRate;

  /* Gain: '<S5>/Gain' incorporates:
   *  Inport: '<Root>/COM_VehBus_st'
   */
  fusionAlg_B.Speed = fusionAlg_P.Gain_Gain *
    fusionAlg_U.COM_VehBus_st.x23C.VehSpdAvg;

  /* BusCreator: '<S5>/Bus Creator' incorporates:
   *  Constant: '<S5>/Constant'
   */
  fusionAlg_B.BusCreator_f.yawRate = fusionAlg_B.YawRate;
  fusionAlg_B.BusCreator_f.motionStatus = fusionAlg_P.Constant_Value;
  fusionAlg_B.BusCreator_f.speed = fusionAlg_B.Speed;

  /* S-Function (funsionAlg_sfun): '<S4>/FusionnAlg ' incorporates:
   *  Constant: '<S4>/RunFlag'
   */
  funsionAlg_sfun_Outputs_wrapper(&fusionAlg_B.BusCreator_l,
    &fusionAlg_B.BusCreator_f, &fusionAlg_P.RunFlag_Value,
    &fusionAlg_B.FusionnAlg);

  /* BusCreator: '<S50>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S50>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S50>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3 = fusionAlg_B.FusionnAlg.objects.fus_output_01_obj;

  /* BusCreator: '<S51>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S51>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S51>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_m = fusionAlg_B.FusionnAlg.objects.fus_output_02_obj;

  /* BusCreator: '<S62>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S62>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S62>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_c = fusionAlg_B.FusionnAlg.objects.fus_output_03_obj;

  /* BusCreator: '<S73>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S73>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S73>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_a = fusionAlg_B.FusionnAlg.objects.fus_output_04_obj;

  /* BusCreator: '<S76>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S76>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S76>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_n = fusionAlg_B.FusionnAlg.objects.fus_output_05_obj;

  /* BusCreator: '<S77>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S77>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S77>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_g = fusionAlg_B.FusionnAlg.objects.fus_output_06_obj;

  /* BusCreator: '<S78>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S78>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S78>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_l = fusionAlg_B.FusionnAlg.objects.fus_output_07_obj;

  /* BusCreator: '<S79>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S79>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S79>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_k = fusionAlg_B.FusionnAlg.objects.fus_output_08_obj;

  /* BusCreator: '<S80>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S80>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S80>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_o = fusionAlg_B.FusionnAlg.objects.fus_output_09_obj;

  /* BusCreator: '<S81>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S81>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S81>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_lh = fusionAlg_B.FusionnAlg.objects.fus_output_10_obj;

  /* BusCreator: '<S52>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S52>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S52>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_p = fusionAlg_B.FusionnAlg.objects.fus_output_11_obj;

  /* BusCreator: '<S53>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S53>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S53>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_mf = fusionAlg_B.FusionnAlg.objects.fus_output_12_obj;

  /* BusCreator: '<S54>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S54>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S54>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_b = fusionAlg_B.FusionnAlg.objects.fus_output_13_obj;

  /* BusCreator: '<S55>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S55>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S55>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_e = fusionAlg_B.FusionnAlg.objects.fus_output_14_obj;

  /* BusCreator: '<S58>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S58>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S58>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_k5 = fusionAlg_B.FusionnAlg.objects.fus_output_15_obj;

  /* BusCreator: '<S59>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S59>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S59>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_f = fusionAlg_B.FusionnAlg.objects.fus_output_16_obj;

  /* BusCreator: '<S60>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S60>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S60>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_o1 = fusionAlg_B.FusionnAlg.objects.fus_output_17_obj;

  /* BusCreator: '<S61>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S61>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S61>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_d = fusionAlg_B.FusionnAlg.objects.fus_output_18_obj;

  /* BusCreator: '<S63>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S63>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S63>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_p3 = fusionAlg_B.FusionnAlg.objects.fus_output_19_obj;

  /* BusCreator: '<S64>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S64>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S64>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_kv = fusionAlg_B.FusionnAlg.objects.fus_output_20_obj;

  /* BusCreator: '<S65>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S65>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S65>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_pa = fusionAlg_B.FusionnAlg.objects.fus_output_21_obj;

  /* BusCreator: '<S66>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S66>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S66>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_pt = fusionAlg_B.FusionnAlg.objects.fus_output_22_obj;

  /* BusCreator: '<S56>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S56>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S56>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_ds = fusionAlg_B.FusionnAlg.objects.fus_output_23_obj;

  /* BusCreator: '<S57>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S57>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S57>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_h = fusionAlg_B.FusionnAlg.objects.fus_output_24_obj;

  /* BusCreator: '<S69>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S69>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S69>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_i = fusionAlg_B.FusionnAlg.objects.fus_output_25_obj;

  /* BusCreator: '<S70>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S70>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S70>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_j = fusionAlg_B.FusionnAlg.objects.fus_output_26_obj;

  /* BusCreator: '<S71>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S71>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S71>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_pr = fusionAlg_B.FusionnAlg.objects.fus_output_27_obj;

  /* BusCreator: '<S72>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S72>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S72>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_mp = fusionAlg_B.FusionnAlg.objects.fus_output_28_obj;

  /* BusCreator: '<S74>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S74>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S74>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_fm = fusionAlg_B.FusionnAlg.objects.fus_output_29_obj;

  /* BusCreator: '<S75>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S75>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S75>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_fn = fusionAlg_B.FusionnAlg.objects.fus_output_30_obj;

  /* BusCreator: '<S67>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S67>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S67>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_n4 = fusionAlg_B.FusionnAlg.objects.fus_output_31_obj;

  /* BusCreator: '<S68>/BusConversion_InsertedFor_Bus Creator3_at_inport_0' incorporates:
   *  BusCreator: '<S68>/BusConversion_InsertedFor_Bus Creator3_at_inport_1'
   *  BusCreator: '<S68>/BusConversion_InsertedFor_Bus Creator3_at_inport_2'
   */
  fusionAlg_B.BusCreator3_og = fusionAlg_B.FusionnAlg.objects.fus_output_32_obj;

  /* Concatenate: '<S49>/Vector Concatenate' */
  fusionAlg_Y.FUS_ObjOutput_st.objects[0] = fusionAlg_B.BusCreator3;
  fusionAlg_Y.FUS_ObjOutput_st.objects[1] = fusionAlg_B.BusCreator3_m;
  fusionAlg_Y.FUS_ObjOutput_st.objects[2] = fusionAlg_B.BusCreator3_c;
  fusionAlg_Y.FUS_ObjOutput_st.objects[3] = fusionAlg_B.BusCreator3_a;
  fusionAlg_Y.FUS_ObjOutput_st.objects[4] = fusionAlg_B.BusCreator3_n;
  fusionAlg_Y.FUS_ObjOutput_st.objects[5] = fusionAlg_B.BusCreator3_g;
  fusionAlg_Y.FUS_ObjOutput_st.objects[6] = fusionAlg_B.BusCreator3_l;
  fusionAlg_Y.FUS_ObjOutput_st.objects[7] = fusionAlg_B.BusCreator3_k;
  fusionAlg_Y.FUS_ObjOutput_st.objects[8] = fusionAlg_B.BusCreator3_o;
  fusionAlg_Y.FUS_ObjOutput_st.objects[9] = fusionAlg_B.BusCreator3_lh;
  fusionAlg_Y.FUS_ObjOutput_st.objects[10] = fusionAlg_B.BusCreator3_p;
  fusionAlg_Y.FUS_ObjOutput_st.objects[11] = fusionAlg_B.BusCreator3_mf;
  fusionAlg_Y.FUS_ObjOutput_st.objects[12] = fusionAlg_B.BusCreator3_b;
  fusionAlg_Y.FUS_ObjOutput_st.objects[13] = fusionAlg_B.BusCreator3_e;
  fusionAlg_Y.FUS_ObjOutput_st.objects[14] = fusionAlg_B.BusCreator3_k5;
  fusionAlg_Y.FUS_ObjOutput_st.objects[15] = fusionAlg_B.BusCreator3_f;
  fusionAlg_Y.FUS_ObjOutput_st.objects[16] = fusionAlg_B.BusCreator3_o1;
  fusionAlg_Y.FUS_ObjOutput_st.objects[17] = fusionAlg_B.BusCreator3_d;
  fusionAlg_Y.FUS_ObjOutput_st.objects[18] = fusionAlg_B.BusCreator3_p3;
  fusionAlg_Y.FUS_ObjOutput_st.objects[19] = fusionAlg_B.BusCreator3_kv;
  fusionAlg_Y.FUS_ObjOutput_st.objects[20] = fusionAlg_B.BusCreator3_pa;
  fusionAlg_Y.FUS_ObjOutput_st.objects[21] = fusionAlg_B.BusCreator3_pt;
  fusionAlg_Y.FUS_ObjOutput_st.objects[22] = fusionAlg_B.BusCreator3_ds;
  fusionAlg_Y.FUS_ObjOutput_st.objects[23] = fusionAlg_B.BusCreator3_h;
  fusionAlg_Y.FUS_ObjOutput_st.objects[24] = fusionAlg_B.BusCreator3_i;
  fusionAlg_Y.FUS_ObjOutput_st.objects[25] = fusionAlg_B.BusCreator3_j;
  fusionAlg_Y.FUS_ObjOutput_st.objects[26] = fusionAlg_B.BusCreator3_pr;
  fusionAlg_Y.FUS_ObjOutput_st.objects[27] = fusionAlg_B.BusCreator3_mp;
  fusionAlg_Y.FUS_ObjOutput_st.objects[28] = fusionAlg_B.BusCreator3_fm;
  fusionAlg_Y.FUS_ObjOutput_st.objects[29] = fusionAlg_B.BusCreator3_fn;
  fusionAlg_Y.FUS_ObjOutput_st.objects[30] = fusionAlg_B.BusCreator3_n4;
  fusionAlg_Y.FUS_ObjOutput_st.objects[31] = fusionAlg_B.BusCreator3_og;

  /* BusCreator: '<S4>/Bus Creator' incorporates:
   *  Outport: '<Root>/FUS_ObjOutput_st '
   */
  fusionAlg_Y.FUS_ObjOutput_st.timeStamp = fusionAlg_B.FusionnAlg.timeStamp;
  fusionAlg_Y.FUS_ObjOutput_st.frameNum = fusionAlg_B.FusionnAlg.frameNum;

  /* SignalConversion: '<S49>/SigConversion_InsertedFor_Bus Selector2_at_outport_0' */
  fusionAlg_B.longPosition = fusionAlg_B.BusCreator3_m.obj_estimate.longPosition;

  /* SignalConversion: '<S49>/SigConversion_InsertedFor_Bus Selector2_at_outport_1' */
  fusionAlg_B.latPosition = fusionAlg_B.BusCreator3_m.obj_estimate.latPosition;

  /* SignalConversion: '<S49>/SigConversion_InsertedFor_Bus Selector_at_outport_0' */
  fusionAlg_B.longPosition_b = fusionAlg_B.BusCreator3.obj_estimate.longPosition;

  /* SignalConversion: '<S49>/SigConversion_InsertedFor_Bus Selector_at_outport_1' */
  fusionAlg_B.latPosition_j = fusionAlg_B.BusCreator3.obj_estimate.latPosition;
}

/* Model update function */
void fusionAlg_update(void)
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
  if (!(++fusionAlg_M->Timing.clockTick0)) {
    ++fusionAlg_M->Timing.clockTickH0;
  }

  fusionAlg_M->Timing.taskTime0 = fusionAlg_M->Timing.clockTick0 *
    fusionAlg_M->Timing.stepSize0 + fusionAlg_M->Timing.clockTickH0 *
    fusionAlg_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void fusionAlg_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)fusionAlg_M, 0,
                sizeof(RT_MODEL_fusionAlg_T));
  fusionAlg_M->Timing.stepSize0 = 0.005;

  /* block I/O */
  (void) memset(((void *) &fusionAlg_B), 0,
                sizeof(B_fusionAlg_T));

  /* states (dwork) */
  (void) memset((void *)&fusionAlg_DW, 0,
                sizeof(DW_fusionAlg_T));

  /* external inputs */
  (void)memset(&fusionAlg_U, 0, sizeof(ExtU_fusionAlg_T));

  /* external outputs */
  fusionAlg_Y.FUS_ObjOutput_st = fusionAlg_rtZFUS_OBJ_OUTPUT_ST;

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    fusionAlg_rti_init_trc_pointers();
  }

  /* Start for S-Function (funsionAlg_sfun): '<S4>/FusionnAlg ' incorporates:
   *  Constant: '<S4>/RunFlag'
   */

  /* S-Function Block: <S4>/FusionnAlg  */
  funsionAlg_sfun_Start_wrapper();
}

/* Model terminate function */
void fusionAlg_terminate(void)
{
  /* Terminate for S-Function (funsionAlg_sfun): '<S4>/FusionnAlg ' incorporates:
   *  Constant: '<S4>/RunFlag'
   */

  /* S-Function Block: <S4>/FusionnAlg  */
  funsionAlg_sfun_Terminate_wrapper();
}
