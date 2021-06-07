/*
 * LCK_types.h
 *
 * Code generation for model "LCK".
 *
 * Model version              : 1.260
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Dec 30 09:22:36 2020
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LCK_types_h_
#define RTW_HEADER_LCK_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "LatCtrl_LCK_LanSigInputs_t.h"
#include "LatCtrl_LCK_TrackSigInputs_t.h"
#include "LatCtrl_LCK_VehSigInputs_t.h"
#include "LatCtrl_LCK_SPPInfo_t.h"
#ifndef DEFINED_TYPEDEF_FOR_HMI_Lateral_t_
#define DEFINED_TYPEDEF_FOR_HMI_Lateral_t_

typedef struct {
  real32_T LKS_Error;
  real32_T LKS_Passive_Rea;
  real32_T LKS_Status;
  real32_T LC_pro_reason;
  real32_T LC_Proposal;
  real32_T LC_Reason;
  real32_T LC_Request;
  real32_T LC_Tip;
  real32_T LC_Fail_Tip;
  real32_T LC_Dis_dy;
  real32_T LC_Dis_dx;
  real32_T LC_Direction;
  real32_T Handsoff_Warning;
} HMI_Lateral_t;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_hUaVbDrvPV0RjyB2R0SfSB_
#define DEFINED_TYPEDEF_FOR_struct_hUaVbDrvPV0RjyB2R0SfSB_

typedef struct {
  real32_T SPP_A0_Fltd;
  real32_T SPP_A1_Fltd;
  real32_T SPP_A2_Fltd;
  real32_T SPP_A3_Fltd;
} struct_hUaVbDrvPV0RjyB2R0SfSB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_n8Z6qSd2wPBIhVCBA14BpE_
#define DEFINED_TYPEDEF_FOR_struct_n8Z6qSd2wPBIhVCBA14BpE_

typedef struct {
  real32_T Dy_1;
  real32_T Dy_0;
  real32_T Lat_Rate;
  real32_T Hed_Ang;
  real32_T Hed_Ang_Rat;
} struct_n8Z6qSd2wPBIhVCBA14BpE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_3Mqe233S7SDSx9uldklNkF_
#define DEFINED_TYPEDEF_FOR_struct_3Mqe233S7SDSx9uldklNkF_

typedef struct {
  real32_T Road_Radius;
  real32_T Curvature_0;
  real32_T Curvature_1;
  real32_T Curvature_Rate;
} struct_3Mqe233S7SDSx9uldklNkF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_0QmJkrpya5SkeiuWB5SSxF_
#define DEFINED_TYPEDEF_FOR_struct_0QmJkrpya5SkeiuWB5SSxF_

typedef struct {
  real32_T Lat_Ctr_Cmd;
  real32_T Lat_Ctrl_PTerm;
  real32_T Lat_Ctrl_ITerm;
  real32_T Lat_Ctrl_DTerm;
  real32_T Lat_Ctrl_PTerm_0;
  real32_T Lat_Ctrl_PTerm_1;
  real32_T Lat_Ctrl_ITerm_0;
  real32_T Lat_Ctrl_ITerm_1;
} struct_0QmJkrpya5SkeiuWB5SSxF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_pdYFnXh3ozcAAtgxS34mJ_
#define DEFINED_TYPEDEF_FOR_struct_pdYFnXh3ozcAAtgxS34mJ_

typedef struct {
  real32_T LatCtrl_Cmd;
  real32_T LatCtrl_PTerm;
  real32_T LatCtrl_DTerm;
  real32_T LatCtrl_P;
  real32_T LatCtrl_D;
} struct_pdYFnXh3ozcAAtgxS34mJ;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_B6sIYkfGJU0JV8DvSTBye_
#define DEFINED_TYPEDEF_FOR_struct_B6sIYkfGJU0JV8DvSTBye_

typedef struct {
  struct_hUaVbDrvPV0RjyB2R0SfSB SPP_Coeff;
  struct_n8Z6qSd2wPBIhVCBA14BpE PID_Control_Signals;
  struct_3Mqe233S7SDSx9uldklNkF Curve_Parameters;
  struct_0QmJkrpya5SkeiuWB5SSxF Lat_Ctrl_Info;
  struct_pdYFnXh3ozcAAtgxS34mJ LatCtrl_Info;
} struct_B6sIYkfGJU0JV8DvSTBye;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_6yGOi0Eh0gPggK0IVo0FdB_
#define DEFINED_TYPEDEF_FOR_struct_6yGOi0Eh0gPggK0IVo0FdB_

typedef struct {
  real32_T signal1;
  real32_T signal2;
  real32_T signal3;
  real32_T signal4;
  real32_T signal5;
} struct_6yGOi0Eh0gPggK0IVo0FdB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_mangFo2BVnlYQ9swmRAj7G_
#define DEFINED_TYPEDEF_FOR_struct_mangFo2BVnlYQ9swmRAj7G_

typedef struct {
  struct_B6sIYkfGJU0JV8DvSTBye LCK_Ctrl_Info;
  struct_6yGOi0Eh0gPggK0IVo0FdB LCK_State_Info;
  LatCtrl_LCK_SPPInfo_t SPP_Info;
  LatCtrl_LCK_LanSigInputs_t LanSigInputs;
} struct_mangFo2BVnlYQ9swmRAj7G;

#endif

/* Custom Type definition for MATLAB Function: '<S229>/Path_Planning_Function ' */
#ifndef struct_tag_sL6LJlPlxhdTxZzXh5NTaQC
#define struct_tag_sL6LJlPlxhdTxZzXh5NTaQC

struct tag_sL6LJlPlxhdTxZzXh5NTaQC
{
  int32_T intNumBits;
};

#endif                                 /*struct_tag_sL6LJlPlxhdTxZzXh5NTaQC*/

#ifndef typedef_sL6LJlPlxhdTxZzXh5NTaQC_LCK_T
#define typedef_sL6LJlPlxhdTxZzXh5NTaQC_LCK_T

typedef struct tag_sL6LJlPlxhdTxZzXh5NTaQC sL6LJlPlxhdTxZzXh5NTaQC_LCK_T;

#endif                                 /*typedef_sL6LJlPlxhdTxZzXh5NTaQC_LCK_T*/

#ifndef struct_tag_skA4KFEZ4HPkJJBOYCrevdH
#define struct_tag_skA4KFEZ4HPkJJBOYCrevdH

struct tag_skA4KFEZ4HPkJJBOYCrevdH
{
  uint32_T SafeEq;
  uint32_T Absolute;
  uint32_T NaNBias;
  uint32_T NaNWithFinite;
  uint32_T FiniteWithNaN;
  uint32_T NaNWithNaN;
};

#endif                                 /*struct_tag_skA4KFEZ4HPkJJBOYCrevdH*/

#ifndef typedef_skA4KFEZ4HPkJJBOYCrevdH_LCK_T
#define typedef_skA4KFEZ4HPkJJBOYCrevdH_LCK_T

typedef struct tag_skA4KFEZ4HPkJJBOYCrevdH skA4KFEZ4HPkJJBOYCrevdH_LCK_T;

#endif                                 /*typedef_skA4KFEZ4HPkJJBOYCrevdH_LCK_T*/

#ifndef struct_tag_sJCxfmxS8gBOONUZjbjUd9E
#define struct_tag_sJCxfmxS8gBOONUZjbjUd9E

struct tag_sJCxfmxS8gBOONUZjbjUd9E
{
  boolean_T CaseSensitivity;
  boolean_T StructExpand;
  char_T PartialMatching[6];
  boolean_T IgnoreNulls;
};

#endif                                 /*struct_tag_sJCxfmxS8gBOONUZjbjUd9E*/

#ifndef typedef_sJCxfmxS8gBOONUZjbjUd9E_LCK_T
#define typedef_sJCxfmxS8gBOONUZjbjUd9E_LCK_T

typedef struct tag_sJCxfmxS8gBOONUZjbjUd9E sJCxfmxS8gBOONUZjbjUd9E_LCK_T;

#endif                                 /*typedef_sJCxfmxS8gBOONUZjbjUd9E_LCK_T*/

#ifndef typedef_struct_T_LCK_T
#define typedef_struct_T_LCK_T

typedef struct {
  char_T Value[49];
} struct_T_LCK_T;

#endif                                 /*typedef_struct_T_LCK_T*/

/* Parameters (default storage) */
typedef struct P_LCK_T_ P_LCK_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_LCK_T RT_MODEL_LCK_T;

#endif                                 /* RTW_HEADER_LCK_types_h_ */
