/*
 * LM_TOS_0103_private.h
 *
 * Code generation for model "LM_TOS_0103".
 *
 * Model version              : 1.305
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Jan  6 16:49:46 2021
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LM_TOS_0103_private_h_
#define RTW_HEADER_LM_TOS_0103_private_h_
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

  extern void LM_TOS_MODULE_Start_wrapper(void);
  extern void LM_TOS_MODULE_Outputs_wrapper(const real_T *timeStamp_In,
    const uint32_T *frameNum_In,
    const FUS_OUTOBJ_LIST_ST *objects_In,
    const VSI_VEHSTATE_ST *vehState_In,
    const FUS_LANE_OUTPUT_ST *fus_Lane_In,
    const FUS_ROAD_EDGE_OUTPUT_ST *fus_roadEdge_In,
    const ATS_PO_ST *acc_to_In,
    uint8_T *egoLaneId_output,
    LANES_BAS_INFO_ST_adt *lanes_bas_info_st_output,
    TARGETOBJECTS_ST_adp *tar_obj_st_output,
    SEGMENTS_ST_adp *segments_st_output,
    HWA_TARGETOBJECT_OUTPUT_ST *hwa_tar_obj_st_output,
    uint8_T *hmi_obj_count_output,
    HMI_OUTPUT_ST_APT *hmi_info_st_output,
    NARROW_LANE_SUPPORT_OUTPUT_ST *nls_info_st_output,
    uint16_T *rolling_count_output);
  extern void LM_TOS_MODULE_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifndef LM_TOS_0103_MDLREF_HIDE_CHILD_

extern P_LM_TOS_0103_T LM_TOS_0103_P_g;

#endif                                 /*LM_TOS_0103_MDLREF_HIDE_CHILD_*/
#endif                                 /* RTW_HEADER_LM_TOS_0103_private_h_ */
