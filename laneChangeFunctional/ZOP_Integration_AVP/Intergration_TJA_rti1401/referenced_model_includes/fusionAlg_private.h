/*
 * fusionAlg_private.h
 *
 * Code generation for model "fusionAlg".
 *
 * Model version              : 1.290
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Tue Dec 29 14:49:17 2020
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_fusionAlg_private_h_
#define RTW_HEADER_fusionAlg_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
# define rtmGetErrorStatusPointer(rtm) (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
# define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void funsionAlg_sfun_Start_wrapper(void);
  extern void funsionAlg_sfun_Outputs_wrapper(const FUS_RADAR_DATA_ST
    *In_RadarData_st,
    const FUS_VEHICLE_DATA_ST *In_VehicleData_st,
    const FUS_VISION_OBJ_DATA_ST *In_VisionObjData_st,
    const FUS_EYEQ4_LANE_DATA_ST *In_VisionLaneData_st,
    const FUS_EYEQ4_ROADEDGE_DATA_ST *In_VisionRoadEdgeData_st,
    FUS_OBJALG_ST *Out_FusionObjInfo_st,
    FUS_LANE_OUTPUT_ST *Out_FusionLaneInfo_st,
    FUS_ROAD_EDGE_OUTPUT_ST *Out_FusionRoadEdgeInfo_st);
  extern void funsionAlg_sfun_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifndef fusionAlg_MDLREF_HIDE_CHILD_

extern P_fusionAlg_T fusionAlg_P_g;

#endif                                 /*fusionAlg_MDLREF_HIDE_CHILD_*/
#endif                                 /* RTW_HEADER_fusionAlg_private_h_ */
