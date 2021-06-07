/*
 * fusionAlg_private.h
 *
 * Code generation for model "fusionAlg".
 *
 * Model version              : 1.160
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Fri Dec 11 09:11:01 2020
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
    const uint8_T *In_RunFlag,
    FUS_OBJALG_ST *Out_FusionObjInfo_st);
  extern void funsionAlg_sfun_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifndef fusionAlg_MDLREF_HIDE_CHILD_

extern P_fusionAlg_T fusionAlg_P_g;

#endif                                 /*fusionAlg_MDLREF_HIDE_CHILD_*/
#endif                                 /* RTW_HEADER_fusionAlg_private_h_ */
