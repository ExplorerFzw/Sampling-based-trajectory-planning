/*
 * AVP_Main_private.h
 *
 * Code generation for model "AVP_Main".
 *
 * Model version              : 1.397
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Mar 17 16:04:08 2021
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AVP_Main_private_h_
#define RTW_HEADER_AVP_Main_private_h_
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

#ifndef AVP_Main_MDLREF_HIDE_CHILD_

extern P_AVP_Main_T AVP_Main_P_g;

#endif                                 /*AVP_Main_MDLREF_HIDE_CHILD_*/
#endif                                 /* RTW_HEADER_AVP_Main_private_h_ */
