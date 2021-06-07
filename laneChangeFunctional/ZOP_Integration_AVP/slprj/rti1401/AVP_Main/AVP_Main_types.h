/*
 * AVP_Main_types.h
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

#ifndef RTW_HEADER_AVP_Main_types_h_
#define RTW_HEADER_AVP_Main_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_AVP_OUTPUT_ST_
#define DEFINED_TYPEDEF_FOR_AVP_OUTPUT_ST_

typedef struct {
  real32_T Tractory_c0;
  real32_T Tractory_c1;
  real32_T Tractory_c2;
  real32_T Tractory_c3;
  real32_T EndPoint_x;
  real32_T EndPoint_y;
  uint8_T AVP_STATE;
} AVP_OUTPUT_ST;

#endif

/* Parameters (default storage) */
typedef struct P_AVP_Main_T_ P_AVP_Main_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_AVP_Main_T RT_MODEL_AVP_Main_T;

#endif                                 /* RTW_HEADER_AVP_Main_types_h_ */
