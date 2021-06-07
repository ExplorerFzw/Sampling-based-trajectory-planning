/*
 * Code generation for system model 'VLC'
 *
 * Model                      : VLC
 * Model version              : 1.1236
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Fri Jan 22 10:54:09 2021
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "VLC_trc_ptr.h"
#include "rti_initref_cpp.h"
#include "VLC.h"
#include "VLC_private.h"
#include "look1_iflf_binlcpw.h"

/* Named constants for Chart: '<Root>/VLC_StateMachine' */
#define VLC_IN_Drive                   ((uint8_T)1U)
#define VLC_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define VLC_IN_OFF                     ((uint8_T)2U)
#define VLC_IN_Standby                 ((uint8_T)3U)
#define VLC_IN_Standstill              ((uint8_T)4U)
#define VLC_IN_Suspend                 ((uint8_T)5U)

P_VLC_T VLC_P_g = {
  /* Expression: 0
   * Referenced by: '<S6>/Memory1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/Memory'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S28>/Constant1'
   */
  0.0,

  /* Expression: 3
   * Referenced by: '<S28>/Constant'
   */
  3.0,

  /* Expression: 0
   * Referenced by: '<S28>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S28>/Constant4'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S6>/Efficiency'
   */
  1.0,

  /* Computed Parameter: Constant1_Value_p
   * Referenced by: '<S21>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant2_Value_g
   * Referenced by: '<S21>/Constant2'
   */
  2.0F,

  /* Computed Parameter: Constant_Value_i
   * Referenced by: '<S25>/Constant'
   */
  1.0F,

  /* Computed Parameter: Memory_InitialCondition_l
   * Referenced by: '<S22>/Memory'
   */
  0.0F,

  /* Computed Parameter: Memory1_InitialCondition_j
   * Referenced by: '<S22>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Memory1_InitialCondition_p
   * Referenced by: '<S21>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_i0
   * Referenced by: '<S21>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant4_Value_f
   * Referenced by: '<S23>/Constant4'
   */
  1.23F,

  /* Computed Parameter: Constant6_Value
   * Referenced by: '<S23>/Constant6'
   */
  0.5F,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S17>/Gain'
   */
  -1.0F,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S32>/Out1'
   */
  0.0F,

  /* Computed Parameter: P_aStsd_Value
   * Referenced by: '<S34>/P_aStsd'
   */
  -0.4F,

  /* Computed Parameter: Memory_InitialCondition_i
   * Referenced by: '<Root>/Memory'
   */
  0.0F,

  /* Computed Parameter: Memory_InitialCondition_e
   * Referenced by: '<S13>/Memory'
   */
  0.0F,

  /* Computed Parameter: Memory2_InitialCondition
   * Referenced by: '<S12>/Memory2'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_j
   * Referenced by: '<S14>/Constant'
   */
  1.0F,

  /* Computed Parameter: Memory1_InitialCondition_h
   * Referenced by: '<S12>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Gain_Gain_j
   * Referenced by: '<S12>/Gain'
   */
  -1.0F,

  /* Computed Parameter: Constant_Value_c
   * Referenced by: '<S18>/Constant'
   */
  1.0F,

  /* Computed Parameter: Memory2_InitialCondition_h
   * Referenced by: '<S13>/Memory2'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S27>/Constant'
   */
  1.0F,

  /* Computed Parameter: Memory2_InitialCondition_n
   * Referenced by: '<S6>/Memory2'
   */
  0.0F,

  /* Computed Parameter: MMotMin_Value
   * Referenced by: '<S6>/MMotMin'
   */
  0.0F,

  /* Computed Parameter: Switch1_Threshold
   * Referenced by: '<S28>/Switch1'
   */
  1.0F,

  /* Computed Parameter: Constant3_Value
   * Referenced by: '<S30>/Constant3'
   */
  1.0F,

  /* Computed Parameter: uDLookupTable_tableData
   * Referenced by: '<S29>/1-D Lookup Table'
   */
  { -1.0F, -2.0F },

  /* Computed Parameter: uDLookupTable_bp01Data
   * Referenced by: '<S29>/1-D Lookup Table'
   */
  { 1.0F, 3.0F },

  /* Computed Parameter: uDLookupTable1_tableData
   * Referenced by: '<S29>/1-D Lookup Table1'
   */
  { -1.0F, -2.0F },

  /* Computed Parameter: uDLookupTable1_bp01Data
   * Referenced by: '<S29>/1-D Lookup Table1'
   */
  { 1.0F, 3.0F },

  /* Computed Parameter: P_aStsd_Threshold
   * Referenced by: '<S29>/P_aStsd'
   */
  0.0F,

  /* Computed Parameter: P_DecToStopCase_Value
   * Referenced by: '<S28>/P_DecToStopCase'
   */
  1.0F,

  /* Computed Parameter: Switch6_Threshold
   * Referenced by: '<S28>/Switch6'
   */
  0.0F,

  /* Computed Parameter: Switch2_Threshold
   * Referenced by: '<S28>/Switch2'
   */
  1.0F,

  /* Computed Parameter: P_AxtarEC_Value
   * Referenced by: '<S28>/P_AxtarEC'
   */
  2.0F,

  /* Computed Parameter: Switch3_Threshold
   * Referenced by: '<S28>/Switch3'
   */
  1.0F,

  /* Computed Parameter: P_TrqReqDC_Value
   * Referenced by: '<S28>/P_TrqReqDC'
   */
  0.0F,

  /* Computed Parameter: Constant7_Value
   * Referenced by: '<S13>/Constant7'
   */
  0.0F,

  /* Computed Parameter: Delay1_DelayLength
   * Referenced by: '<S13>/Delay1'
   */
  1U,

  /* Computed Parameter: Delay1_DelayLength_g
   * Referenced by: '<S31>/Delay1'
   */
  1U,

  /* Start of '<S30>/If Action Subsystem' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S33>/Constant'
     */
    -1.0F
  }
  ,

  /* End of '<S30>/If Action Subsystem' */

  /* Start of '<S15>/If Action Subsystem' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S16>/Constant'
     */
    0.0F
  }
  /* End of '<S15>/If Action Subsystem' */
};

MdlrefDW_VLC_T VLC_MdlrefDW;

/* Block signals (default storage) */
B_VLC_c_T VLC_B;

/* Block states (default storage) */
DW_VLC_f_T VLC_DW;

/* Previous zero-crossings (trigger) states */
ZCE_VLC_T VLC_PrevZCX;

/*
 * Output and update for action system:
 *    '<S15>/If Action Subsystem'
 *    '<S30>/If Action Subsystem'
 */
void VLC_IfActionSubsystem(real32_T *rty_Out1, P_IfActionSubsystem_VLC_T *localP)
{
  /* SignalConversion: '<S16>/OutportBuffer_InsertedFor_Out1_at_inport_0' incorporates:
   *  Constant: '<S16>/Constant'
   */
  *rty_Out1 = localP->Constant_Value;
}

/* System initialize for referenced model: 'VLC' */
void VLC_Init(void)
{
  /* InitializeConditions for Memory: '<Root>/Memory' */
  VLC_DW.Memory_PreviousInput_l = VLC_P_g.Memory_InitialCondition_i;

  /* InitializeConditions for Memory: '<S13>/Memory' */
  VLC_DW.Memory_PreviousInput_e = VLC_P_g.Memory_InitialCondition_e;

  /* InitializeConditions for Delay: '<S13>/Delay1' */
  VLC_DW.icLoad = 1U;

  /* InitializeConditions for Memory: '<S12>/Memory2' */
  VLC_DW.Memory2_PreviousInput = VLC_P_g.Memory2_InitialCondition;

  /* InitializeConditions for Memory: '<S12>/Memory1' */
  VLC_DW.Memory1_PreviousInput_f = VLC_P_g.Memory1_InitialCondition_h;

  /* InitializeConditions for Memory: '<S13>/Memory2' */
  VLC_DW.Memory2_PreviousInput_j = VLC_P_g.Memory2_InitialCondition_h;

  /* InitializeConditions for Memory: '<S6>/Memory2' */
  VLC_DW.Memory2_PreviousInput_d = VLC_P_g.Memory2_InitialCondition_n;

  /* InitializeConditions for Memory: '<S6>/Memory1' */
  VLC_DW.Memory1_PreviousInput = VLC_P_g.Memory1_InitialCondition;

  /* InitializeConditions for Memory: '<S6>/Memory' */
  VLC_DW.Memory_PreviousInput = VLC_P_g.Memory_InitialCondition;

  /* InitializeConditions for Delay: '<S31>/Delay1' */
  VLC_DW.icLoad_g = 1U;

  /* SystemInitialize for Chart: '<Root>/VLC_StateMachine' */
  VLC_DW.is_active_c3_VLC = 0U;
  VLC_DW.is_c3_VLC = VLC_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for IfAction SubSystem: '<Root>/VLC_Core' */
  /* InitializeConditions for Memory: '<S22>/Memory' */
  VLC_DW.Memory_PreviousInput_k = VLC_P_g.Memory_InitialCondition_l;

  /* InitializeConditions for Memory: '<S22>/Memory1' */
  VLC_DW.Memory1_PreviousInput_j = VLC_P_g.Memory1_InitialCondition_j;

  /* InitializeConditions for Memory: '<S21>/Memory1' */
  VLC_DW.Memory1_PreviousInput_e = VLC_P_g.Memory1_InitialCondition_p;

  /* End of SystemInitialize for SubSystem: '<Root>/VLC_Core' */

  /* SystemInitialize for Triggered SubSystem: '<S29>/Triggered Subsystem' */
  /* SystemInitialize for Outport: '<S32>/Out1' */
  VLC_B.In1 = VLC_P_g.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S29>/Triggered Subsystem' */
}

/* System reset for referenced model: 'VLC' */
void VLC_Reset(void)
{
  /* InitializeConditions for Memory: '<Root>/Memory' */
  VLC_DW.Memory_PreviousInput_l = VLC_P_g.Memory_InitialCondition_i;

  /* InitializeConditions for Memory: '<S13>/Memory' */
  VLC_DW.Memory_PreviousInput_e = VLC_P_g.Memory_InitialCondition_e;

  /* InitializeConditions for Delay: '<S13>/Delay1' */
  VLC_DW.icLoad = 1U;

  /* InitializeConditions for Memory: '<S12>/Memory2' */
  VLC_DW.Memory2_PreviousInput = VLC_P_g.Memory2_InitialCondition;

  /* InitializeConditions for Memory: '<S12>/Memory1' */
  VLC_DW.Memory1_PreviousInput_f = VLC_P_g.Memory1_InitialCondition_h;

  /* InitializeConditions for Memory: '<S13>/Memory2' */
  VLC_DW.Memory2_PreviousInput_j = VLC_P_g.Memory2_InitialCondition_h;

  /* InitializeConditions for Memory: '<S6>/Memory2' */
  VLC_DW.Memory2_PreviousInput_d = VLC_P_g.Memory2_InitialCondition_n;

  /* InitializeConditions for Memory: '<S6>/Memory1' */
  VLC_DW.Memory1_PreviousInput = VLC_P_g.Memory1_InitialCondition;

  /* InitializeConditions for Memory: '<S6>/Memory' */
  VLC_DW.Memory_PreviousInput = VLC_P_g.Memory_InitialCondition;

  /* InitializeConditions for Delay: '<S31>/Delay1' */
  VLC_DW.icLoad_g = 1U;

  /* SystemReset for Chart: '<Root>/VLC_StateMachine' */
  VLC_DW.is_active_c3_VLC = 0U;
  VLC_DW.is_c3_VLC = VLC_IN_NO_ACTIVE_CHILD;
}

/* Start for referenced model: 'VLC' */
void VLC_Start(void)
{
  /* Start for If: '<Root>/If' */
  VLC_DW.If_ActiveSubsystem = -1;
}

/* Outputs for referenced model: 'VLC' */
void VLC(const ACC_LGTCTRL_ST *rtu_ACC_LgtCtrl_st, const SYS_INFO_ST
         *rtu_SYS_Info_st, const VSI_VEHSTATE_ST *rtu_VSI_VehState_st, const
         COM_VEHBUS_ST *rtu_COM_VehBus_st, VLC_LGTCMD_ST *rty_Output)
{
  boolean_T zcEvent;
  int8_T rtAction;
  real32_T u0;
  real32_T u1;

  /* Memory: '<Root>/Memory' */
  VLC_B.Memory_j = VLC_DW.Memory_PreviousInput_l;

  /* Product: '<Root>/Product' incorporates:
   *  Constant: '<Root>/P_dAxMax'
   */
  VLC_B.Product = rtP_P_dAxMax * rtu_SYS_Info_st->dT;

  /* Product: '<Root>/Product1' incorporates:
   *  Constant: '<Root>/P_dAxMin'
   */
  VLC_B.Product1 = rtu_SYS_Info_st->dT * rtP_P_dAxMin;

  /* Chart: '<Root>/VLC_StateMachine' */
  if (VLC_DW.is_active_c3_VLC == 0U) {
    VLC_DW.is_active_c3_VLC = 1U;
    VLC_DW.is_c3_VLC = VLC_IN_OFF;
    VLC_B.VLCState = 0.0F;
    VLC_B.AxTar_Lim = 0.0F;
  } else {
    switch (VLC_DW.is_c3_VLC) {
     case VLC_IN_Drive:
      VLC_B.VLCState = 2.0F;
      if (rtu_ACC_LgtCtrl_st->ACCVLCMainReq == 3.0F) {
        VLC_DW.is_c3_VLC = VLC_IN_Standstill;
        VLC_B.VLCState = 3.0F;
      } else if (rtu_ACC_LgtCtrl_st->ACCVLCMainReq == 4.0F) {
        VLC_DW.is_c3_VLC = VLC_IN_Suspend;
        VLC_B.VLCState = 4.0F;
      } else if (rtu_ACC_LgtCtrl_st->ACCVLCMainReq == 1.0F) {
        VLC_DW.is_c3_VLC = VLC_IN_Standby;
        VLC_B.VLCState = 1.0F;
        VLC_B.AxTar_Lim = 0.0F;
      } else if (rtu_ACC_LgtCtrl_st->ACCVLCMainReq == 0.0F) {
        VLC_DW.is_c3_VLC = VLC_IN_OFF;
        VLC_B.VLCState = 0.0F;
        VLC_B.AxTar_Lim = 0.0F;
      } else {
        u0 = rtu_ACC_LgtCtrl_st->ACCAxtar - VLC_B.Memory_j;
        u1 = VLC_B.Product;
        if ((u0 < u1) || rtIsNaNF(u1)) {
          u1 = u0;
        }

        u0 = VLC_B.Product1;
        if ((u1 > u0) || rtIsNaNF(u0)) {
          u0 = u1;
        }

        VLC_B.AxTar_Lim = u0 + VLC_B.Memory_j;
      }
      break;

     case VLC_IN_OFF:
      VLC_B.VLCState = 0.0F;
      if (rtu_ACC_LgtCtrl_st->ACCVLCMainReq == 1.0F) {
        VLC_DW.is_c3_VLC = VLC_IN_Standby;
        VLC_B.VLCState = 1.0F;
        VLC_B.AxTar_Lim = 0.0F;
      }
      break;

     case VLC_IN_Standby:
      VLC_B.VLCState = 1.0F;
      if (rtu_ACC_LgtCtrl_st->ACCVLCMainReq == 2.0F) {
        VLC_DW.is_c3_VLC = VLC_IN_Drive;
        VLC_B.VLCState = 2.0F;
        VLC_B.AxTar_Lim = rtu_VSI_VehState_st->aRef;
      } else if (rtu_ACC_LgtCtrl_st->ACCVLCMainReq == 3.0F) {
        VLC_DW.is_c3_VLC = VLC_IN_Standstill;
        VLC_B.VLCState = 3.0F;
      } else {
        if (rtu_ACC_LgtCtrl_st->ACCVLCMainReq == 0.0F) {
          VLC_DW.is_c3_VLC = VLC_IN_OFF;
          VLC_B.VLCState = 0.0F;
          VLC_B.AxTar_Lim = 0.0F;
        }
      }
      break;

     case VLC_IN_Standstill:
      VLC_B.VLCState = 3.0F;
      if (rtu_ACC_LgtCtrl_st->ACCVLCMainReq == 2.0F) {
        VLC_DW.is_c3_VLC = VLC_IN_Drive;
        VLC_B.VLCState = 2.0F;
        VLC_B.AxTar_Lim = rtu_VSI_VehState_st->aRef;
      } else if (rtu_ACC_LgtCtrl_st->ACCVLCMainReq == 1.0F) {
        VLC_DW.is_c3_VLC = VLC_IN_Standby;
        VLC_B.VLCState = 1.0F;
        VLC_B.AxTar_Lim = 0.0F;
      } else if (rtu_ACC_LgtCtrl_st->ACCVLCMainReq == 0.0F) {
        VLC_DW.is_c3_VLC = VLC_IN_OFF;
        VLC_B.VLCState = 0.0F;
        VLC_B.AxTar_Lim = 0.0F;
      } else if (rtu_ACC_LgtCtrl_st->ACCVLCMainReq == 4.0F) {
        VLC_DW.is_c3_VLC = VLC_IN_Suspend;
        VLC_B.VLCState = 4.0F;
      } else {
        u0 = rtu_ACC_LgtCtrl_st->ACCAxtar - VLC_B.Memory_j;
        u1 = VLC_B.Product;
        if ((u0 < u1) || rtIsNaNF(u1)) {
          u1 = u0;
        }

        u0 = VLC_B.Product1;
        if ((u1 > u0) || rtIsNaNF(u0)) {
          u0 = u1;
        }

        VLC_B.AxTar_Lim = u0 + VLC_B.Memory_j;
      }
      break;

     default:
      VLC_B.VLCState = 4.0F;
      if (rtu_ACC_LgtCtrl_st->ACCVLCMainReq == 2.0F) {
        VLC_DW.is_c3_VLC = VLC_IN_Drive;
        VLC_B.VLCState = 2.0F;
        VLC_B.AxTar_Lim = rtu_VSI_VehState_st->aRef;
      } else if (rtu_ACC_LgtCtrl_st->ACCVLCMainReq == 1.0F) {
        VLC_DW.is_c3_VLC = VLC_IN_Standby;
        VLC_B.VLCState = 1.0F;
        VLC_B.AxTar_Lim = 0.0F;
      } else if (rtu_ACC_LgtCtrl_st->ACCVLCMainReq == 0.0F) {
        VLC_DW.is_c3_VLC = VLC_IN_OFF;
        VLC_B.VLCState = 0.0F;
        VLC_B.AxTar_Lim = 0.0F;
      } else if (rtu_ACC_LgtCtrl_st->ACCVLCMainReq == 3.0F) {
        VLC_DW.is_c3_VLC = VLC_IN_Standstill;
        VLC_B.VLCState = 3.0F;
      } else {
        u0 = rtu_ACC_LgtCtrl_st->ACCAxtar - VLC_B.Memory_j;
        u1 = VLC_B.Product;
        if ((u0 < u1) || rtIsNaNF(u1)) {
          u1 = u0;
        }

        u0 = VLC_B.Product1;
        if ((u1 > u0) || rtIsNaNF(u0)) {
          u0 = u1;
        }

        VLC_B.AxTar_Lim = u0 + VLC_B.Memory_j;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/VLC_StateMachine' */

  /* RelationalOperator: '<Root>/Relational Operator' incorporates:
   *  Constant: '<Root>/P_vLowSpd'
   */
  VLC_B.RelationalOperator = (rtu_VSI_VehState_st->vRef >= rtP_P_vLowSpd);

  /* Memory: '<S13>/Memory' */
  VLC_B.Memory_k = VLC_DW.Memory_PreviousInput_e;

  /* Delay: '<S13>/Delay1' incorporates:
   *  Constant: '<S13>/P_tDriveOffThr'
   */
  zcEvent = (rtu_ACC_LgtCtrl_st->ACCDriveoffReq && (VLC_PrevZCX.Delay1_Reset_ZCE
              != POS_ZCSIG));
  if (zcEvent) {
    VLC_DW.icLoad = 1U;
  }

  VLC_PrevZCX.Delay1_Reset_ZCE = rtu_ACC_LgtCtrl_st->ACCDriveoffReq;
  if (VLC_DW.icLoad != 0) {
    VLC_DW.Delay1_DSTATE = rtP_P_tDriveOffThr;
  }

  VLC_B.Delay1 = VLC_DW.Delay1_DSTATE;

  /* End of Delay: '<S13>/Delay1' */

  /* RelationalOperator: '<S13>/Equal4' */
  VLC_B.Equal4 = (VLC_B.Delay1 > rtu_SYS_Info_st->dT);

  /* RelationalOperator: '<S13>/Equal5' incorporates:
   *  Constant: '<S13>/P_vDriveOffThr'
   */
  VLC_B.Equal5 = (rtu_VSI_VehState_st->vRef < rtP_P_vDriveOffThr);

  /* Logic: '<S13>/AND1' */
  VLC_B.AND1 = (VLC_B.Equal4 && VLC_B.Equal5 &&
                rtu_ACC_LgtCtrl_st->ACCDriveoffReq);

  /* Memory: '<S12>/Memory2' */
  VLC_B.Memory2 = VLC_DW.Memory2_PreviousInput;

  /* Abs: '<S15>/Abs' */
  VLC_B.Abs = (real32_T)fabs(rtu_VSI_VehState_st->AxSlope);

  /* RelationalOperator: '<S15>/Relational Operator' incorporates:
   *  Constant: '<S15>/P_SlopeMin'
   */
  VLC_B.RelationalOperator_m = (VLC_B.Abs <= rtP_P_SlopeMin);

  /* If: '<S15>/If' */
  if (VLC_B.RelationalOperator_m) {
    /* Outputs for IfAction SubSystem: '<S15>/If Action Subsystem' incorporates:
     *  ActionPort: '<S16>/Action Port'
     */
    VLC_IfActionSubsystem(&VLC_B.Merge, &VLC_P_g.IfActionSubsystem);

    /* End of Outputs for SubSystem: '<S15>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S15>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S17>/Action Port'
     */
    /* Gain: '<S17>/Gain' incorporates:
     *  Constant: '<S17>/P_SlopeMax'
     */
    VLC_B.Gain_e = VLC_P_g.Gain_Gain * rtP_P_SlopeMax;

    /* MinMax: '<S17>/Max' incorporates:
     *  Constant: '<S17>/P_SlopeMax'
     */
    u0 = rtu_VSI_VehState_st->AxSlope;
    u1 = rtP_P_SlopeMax;
    if ((u0 < u1) || rtIsNaNF(u1)) {
      u1 = u0;
    }

    VLC_B.Max_h1 = u1;

    /* End of MinMax: '<S17>/Max' */

    /* MinMax: '<S17>/Min' */
    u0 = VLC_B.Max_h1;
    u1 = VLC_B.Gain_e;
    if ((u0 > u1) || rtIsNaNF(u1)) {
      u1 = u0;
    }

    VLC_B.Merge = u1;

    /* End of MinMax: '<S17>/Min' */
    /* End of Outputs for SubSystem: '<S15>/If Action Subsystem1' */
  }

  /* End of If: '<S15>/If' */

  /* MinMax: '<S14>/Max' incorporates:
   *  Constant: '<S12>/Constant'
   */
  u0 = rtu_SYS_Info_st->dT;
  u1 = rtP_P_tSlopeFilter1;
  if ((u0 > u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  VLC_B.Max = u1;

  /* End of MinMax: '<S14>/Max' */

  /* Product: '<S14>/Divide' */
  VLC_B.filtFactor = rtu_SYS_Info_st->dT / VLC_B.Max;

  /* Product: '<S14>/Multiply' */
  VLC_B.Multiply = VLC_B.Merge * VLC_B.filtFactor;

  /* Sum: '<S14>/Add' incorporates:
   *  Constant: '<S14>/Constant'
   */
  VLC_B.Add = VLC_P_g.Constant_Value_j - VLC_B.filtFactor;

  /* Memory: '<S12>/Memory1' */
  VLC_B.Memory1_p = VLC_DW.Memory1_PreviousInput_f;

  /* Product: '<S14>/Multiply1' */
  VLC_B.Multiply1 = VLC_B.Add * VLC_B.Memory1_p;

  /* Sum: '<S14>/Add1' */
  VLC_B.Add1 = VLC_B.Multiply + VLC_B.Multiply1;

  /* Sum: '<S12>/Add' */
  VLC_B.Add_p = VLC_B.Add1 - VLC_B.Memory2;

  /* Product: '<S12>/Multiply' incorporates:
   *  Constant: '<S12>/Constant1'
   */
  VLC_B.Multiply_m = rtP_P_dSlopeLim * rtu_SYS_Info_st->dT;

  /* MinMax: '<S12>/MinMax' */
  u0 = VLC_B.Add_p;
  u1 = VLC_B.Multiply_m;
  if ((u0 < u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  VLC_B.MinMax = u1;

  /* End of MinMax: '<S12>/MinMax' */

  /* Gain: '<S12>/Gain' */
  VLC_B.Gain = VLC_P_g.Gain_Gain_j * VLC_B.Multiply_m;

  /* MinMax: '<S12>/Max' */
  u0 = VLC_B.MinMax;
  u1 = VLC_B.Gain;
  if ((u0 > u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  VLC_B.Max_h = u1;

  /* End of MinMax: '<S12>/Max' */

  /* Sum: '<S12>/Add1' */
  VLC_B.Add1_j = VLC_B.Memory2 + VLC_B.Max_h;

  /* Switch: '<S13>/Switch5' */
  if (VLC_B.AND1) {
    VLC_B.Switch5 = VLC_B.Memory_k;
  } else {
    VLC_B.Switch5 = VLC_B.Add1_j;
  }

  /* End of Switch: '<S13>/Switch5' */

  /* MinMax: '<S18>/Max' incorporates:
   *  Constant: '<S13>/Constant'
   */
  u0 = rtu_SYS_Info_st->dT;
  u1 = rtP_P_tSlopeFilter2;
  if ((u0 > u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  VLC_B.Max_p = u1;

  /* End of MinMax: '<S18>/Max' */

  /* Product: '<S18>/Divide' */
  VLC_B.filtFactor_l = rtu_SYS_Info_st->dT / VLC_B.Max_p;

  /* Product: '<S18>/Multiply' */
  VLC_B.Multiply_g = VLC_B.Switch5 * VLC_B.filtFactor_l;

  /* Sum: '<S18>/Add' incorporates:
   *  Constant: '<S18>/Constant'
   */
  VLC_B.Add_h = VLC_P_g.Constant_Value_c - VLC_B.filtFactor_l;

  /* Memory: '<S13>/Memory2' */
  VLC_B.Memory2_n = VLC_DW.Memory2_PreviousInput_j;

  /* Product: '<S18>/Multiply1' */
  VLC_B.Multiply1_a = VLC_B.Add_h * VLC_B.Memory2_n;

  /* Sum: '<S18>/Add1' */
  VLC_B.Add1_a = VLC_B.Multiply_g + VLC_B.Multiply1_a;

  /* Sum: '<Root>/Sum' */
  VLC_B.Sum = VLC_B.AxTar_Lim - rtu_VSI_VehState_st->aRef;

  /* If: '<Root>/If' */
  if (VLC_B.RelationalOperator) {
    rtAction = 0;

    /* Outputs for IfAction SubSystem: '<Root>/VLC_Core' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* RelationalOperator: '<S21>/Equal' incorporates:
     *  Constant: '<S21>/Constant2'
     */
    VLC_B.Equal_j = (VLC_B.VLCState != VLC_P_g.Constant2_Value_g);

    /* Gain: '<S21>/P_Kp' */
    VLC_B.P_Kp = rtP_P_Kp * VLC_B.Sum;

    /* Switch: '<S21>/Switch1' incorporates:
     *  Constant: '<S21>/Constant1'
     */
    if (VLC_B.Equal_j) {
      VLC_B.aKP = VLC_P_g.Constant1_Value_p;
    } else {
      VLC_B.aKP = VLC_B.P_Kp;
    }

    /* End of Switch: '<S21>/Switch1' */

    /* Abs: '<S22>/Abs4' */
    VLC_B.Abs4 = (real32_T)fabs(rtu_VSI_VehState_st->aRef);

    /* Abs: '<S22>/Abs3' */
    VLC_B.Abs3 = (real32_T)fabs(VLC_B.AxTar_Lim);

    /* MinMax: '<S22>/Max' */
    u0 = VLC_B.Abs4;
    u1 = VLC_B.Abs3;
    if ((u0 > u1) || rtIsNaNF(u1)) {
      u1 = u0;
    }

    VLC_B.Max_h2 = u1;

    /* End of MinMax: '<S22>/Max' */

    /* MinMax: '<S25>/Max' incorporates:
     *  Constant: '<S22>/P_tARefFilter'
     */
    u0 = rtu_SYS_Info_st->dT;
    u1 = rtP_P_tARefFilter;
    if ((u0 > u1) || rtIsNaNF(u1)) {
      u1 = u0;
    }

    VLC_B.Max_b = u1;

    /* End of MinMax: '<S25>/Max' */

    /* Product: '<S25>/Divide' */
    VLC_B.filtFactor_h = rtu_SYS_Info_st->dT / VLC_B.Max_b;

    /* Product: '<S25>/Multiply' */
    VLC_B.Multiply_k = rtu_VSI_VehState_st->aRef * VLC_B.filtFactor_h;

    /* Sum: '<S25>/Add' incorporates:
     *  Constant: '<S25>/Constant'
     */
    VLC_B.Add_m = VLC_P_g.Constant_Value_i - VLC_B.filtFactor_h;

    /* Memory: '<S22>/Memory' */
    VLC_B.Memory_d = VLC_DW.Memory_PreviousInput_k;

    /* Product: '<S25>/Multiply1' */
    VLC_B.Multiply1_g = VLC_B.Add_m * VLC_B.Memory_d;

    /* Sum: '<S25>/Add1' */
    VLC_B.Add1_h = VLC_B.Multiply_k + VLC_B.Multiply1_g;

    /* Sum: '<S22>/Add' */
    VLC_B.Add_l = VLC_B.Add1_h - rtu_VSI_VehState_st->aRef;

    /* Abs: '<S22>/Abs1' */
    VLC_B.Abs1 = (real32_T)fabs(VLC_B.Add_l);

    /* Abs: '<S22>/Abs2' */
    VLC_B.Abs2 = (real32_T)fabs(VLC_B.Sum);

    /* Memory: '<S22>/Memory1' */
    VLC_B.Memory1_b = VLC_DW.Memory1_PreviousInput_j;

    /* Product: '<S22>/Product1' incorporates:
     *  Constant: '<S22>/P_dIRamp'
     */
    VLC_B.Product1_o = rtu_SYS_Info_st->dT * rtP_P_dIRamp;

    /* MATLAB Function: '<S22>/IGain_cal' incorporates:
     *  Constant: '<S22>/P_Dev4IEnd'
     *  Constant: '<S22>/P_Ki'
     *  Constant: '<S22>/P_aDiffaF'
     */
    if ((VLC_B.Abs1 <= rtP_P_aDiffaF) && (VLC_B.Abs2 <= rtP_P_Dev4IEnd) &&
        (VLC_B.Max_h2 < 0.5F) && (VLC_B.Memory1_b != rtP_P_Ki)) {
      VLC_B.IGain = rtP_P_Ki;
    } else if ((VLC_B.Abs1 > rtP_P_aDiffaF) || (VLC_B.Abs2 > rtP_P_Dev4IEnd) ||
               (VLC_B.Max_h2 >= 0.5F)) {
      VLC_B.IGain = VLC_B.Memory1_b - VLC_B.Product1_o;
      zcEvent = (rtIsNaNF(VLC_B.IGain) || (VLC_B.IGain < 0.0F));
      if (zcEvent) {
        VLC_B.IGain = 0.0F;
      }
    } else {
      VLC_B.IGain = VLC_B.Memory1_b;
    }

    /* End of MATLAB Function: '<S22>/IGain_cal' */

    /* Product: '<S21>/Product1' */
    VLC_B.Product1_m = VLC_B.Sum * rtu_SYS_Info_st->dT;

    /* Product: '<S21>/Multiply' */
    VLC_B.Multiply_n = VLC_B.IGain * VLC_B.Product1_m;

    /* Memory: '<S21>/Memory1' */
    VLC_B.Memory1_n = VLC_DW.Memory1_PreviousInput_e;

    /* Sum: '<S21>/Add4' */
    VLC_B.Add4 = VLC_B.Multiply_n + VLC_B.Memory1_n;

    /* Switch: '<S21>/Switch2' incorporates:
     *  Constant: '<S21>/Constant1'
     */
    if (VLC_B.Equal_j) {
      VLC_B.aKI = VLC_P_g.Constant1_Value_p;
    } else {
      VLC_B.aKI = VLC_B.Add4;
    }

    /* End of Switch: '<S21>/Switch2' */

    /* Sum: '<S21>/Add1' */
    VLC_B.Add1_n = VLC_B.aKP + VLC_B.aKI;

    /* Switch: '<S21>/Switch' incorporates:
     *  Constant: '<S21>/Constant'
     */
    if (rtu_VSI_VehState_st->AxSlopeValid) {
      VLC_B.aSlope = VLC_B.Add1_a;
    } else {
      VLC_B.aSlope = VLC_P_g.Constant_Value_i0;
    }

    /* End of Switch: '<S21>/Switch' */

    /* Math: '<S23>/Math Function' */
    VLC_B.MathFunction = rtu_VSI_VehState_st->vRef * rtu_VSI_VehState_st->vRef;

    /* Product: '<S23>/Product' incorporates:
     *  Constant: '<S23>/Constant4'
     *  Constant: '<S23>/P_A'
     *  Constant: '<S23>/P_Cd'
     */
    VLC_B.Product_h = rtP_P_Cd * VLC_P_g.Constant4_Value_f * rtP_P_A;

    /* Product: '<S23>/Product1' incorporates:
     *  Constant: '<S23>/Constant6'
     */
    VLC_B.Product1_b = VLC_B.MathFunction * VLC_B.Product_h *
      VLC_P_g.Constant6_Value;

    /* Product: '<S23>/Divide' incorporates:
     *  Constant: '<S23>/m_Vehicle'
     */
    VLC_B.Divide_fz = VLC_B.Product1_b / rtP_m_Vehicle;

    /* Sum: '<S21>/Add2' incorporates:
     *  Constant: '<S21>/P_Cf'
     */
    VLC_B.Add2 = (((VLC_B.aSlope + VLC_B.Add1_n) + rtP_P_Cf) + VLC_B.AxTar_Lim)
      + VLC_B.Divide_fz;

    /* Product: '<S21>/Product2' incorporates:
     *  Constant: '<S21>/m_Vehicle'
     */
    VLC_B.Fxtar_merge = rtP_m_Vehicle * VLC_B.Add2;

    /* End of Outputs for SubSystem: '<Root>/VLC_Core' */
  } else {
    rtAction = 1;

    /* Outputs for IfAction SubSystem: '<Root>/VLC_SSM' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* MATLAB Function: '<S7>/VLC_DriveOff' incorporates:
     *  Constant: '<S7>/P_Cf'
     *  Constant: '<S7>/P_DriveOffAdd'
     *  Constant: '<S7>/P_StandStillFactEC'
     *  Constant: '<S7>/m_Vehicle'
     */
    if (rtu_ACC_LgtCtrl_st->ACCDriveoffReq) {
      VLC_B.FxTar = ((VLC_B.Add1_a * (real32_T)rtu_VSI_VehState_st->AxSlopeValid
                      + VLC_B.AxTar_Lim) + rtP_P_Cf) * rtP_m_Vehicle +
        rtP_P_DriveOffAdd;
    } else {
      VLC_B.FxTar = ((rtP_P_StandStillFactEC * VLC_B.AxTar_Lim +
                      rtu_VSI_VehState_st->AxSlope * (real32_T)
                      rtu_VSI_VehState_st->AxSlopeValid) + rtP_P_Cf) *
        rtP_m_Vehicle;
    }

    /* End of MATLAB Function: '<S7>/VLC_DriveOff' */

    /* SignalConversion: '<S7>/OutportBufferForFxTar' */
    VLC_B.Fxtar_merge = VLC_B.FxTar;

    /* End of Outputs for SubSystem: '<Root>/VLC_SSM' */
  }

  VLC_DW.If_ActiveSubsystem = rtAction;

  /* End of If: '<Root>/If' */

  /* MinMax: '<S27>/Max' incorporates:
   *  Constant: '<S6>/Constant'
   */
  u0 = rtu_SYS_Info_st->dT;
  u1 = rtP_P_tFxMergeFilter;
  if ((u0 > u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  VLC_B.Max_j = u1;

  /* End of MinMax: '<S27>/Max' */

  /* Product: '<S27>/Divide' */
  VLC_B.filtFactor_g = rtu_SYS_Info_st->dT / VLC_B.Max_j;

  /* Product: '<S27>/Multiply' */
  VLC_B.Multiply_i = VLC_B.Fxtar_merge * VLC_B.filtFactor_g;

  /* Sum: '<S27>/Add' incorporates:
   *  Constant: '<S27>/Constant'
   */
  VLC_B.Add_e = VLC_P_g.Constant_Value_n - VLC_B.filtFactor_g;

  /* Memory: '<S6>/Memory2' */
  VLC_B.Memory2_d = VLC_DW.Memory2_PreviousInput_d;

  /* Product: '<S27>/Multiply1' */
  VLC_B.Multiply1_h = VLC_B.Add_e * VLC_B.Memory2_d;

  /* Sum: '<S27>/Add1' */
  VLC_B.Add1_o = VLC_B.Multiply_i + VLC_B.Multiply1_h;

  /* Memory: '<S6>/Memory1' */
  VLC_B.Memory1 = VLC_DW.Memory1_PreviousInput;

  /* Memory: '<S6>/Memory' */
  VLC_B.Memory = VLC_DW.Memory_PreviousInput;

  /* MATLAB Function: '<S6>/Actuator_Choice' incorporates:
   *  Constant: '<S6>/MMotMin'
   *  Constant: '<S6>/P_DC2ECMargin'
   *  Constant: '<S6>/m_Vehicle'
   *  Constant: '<S6>/r_Wheel'
   */
  if (VLC_B.VLCState == 4.0F) {
    VLC_B.DC_Enable = 0.0;
    VLC_B.EC_Enable = 1.0;
  } else if (rtu_ACC_LgtCtrl_st->ACCStandstillReq || (VLC_B.VLCState == 3.0F)) {
    VLC_B.DC_Enable = 1.0;
    VLC_B.EC_Enable = 0.0;
  } else if (VLC_B.Add1_o < VLC_P_g.MMotMin_Value / rtP_r_Wheel) {
    VLC_B.DC_Enable = 1.0;
    VLC_B.EC_Enable = 0.0;
  } else if (VLC_B.Add1_o > rtP_P_DC2ECMargin * rtP_m_Vehicle +
             VLC_P_g.MMotMin_Value / rtP_r_Wheel) {
    VLC_B.DC_Enable = 0.0;
    VLC_B.EC_Enable = 1.0;
  } else {
    VLC_B.EC_Enable = VLC_B.Memory1;
    VLC_B.DC_Enable = VLC_B.Memory;
  }

  /* End of MATLAB Function: '<S6>/Actuator_Choice' */

  /* Switch: '<S28>/Switch1' incorporates:
   *  Constant: '<S28>/Constant1'
   */
  if (VLC_B.VLCState > VLC_P_g.Switch1_Threshold) {
    VLC_B.Switch1[0] = (VLC_B.DC_Enable != 0.0);
    VLC_B.Switch1[1] = (VLC_B.EC_Enable != 0.0);
  } else {
    VLC_B.Switch1[0] = (VLC_P_g.Constant1_Value != 0.0);
    VLC_B.Switch1[1] = (VLC_P_g.Constant1_Value != 0.0);
  }

  /* End of Switch: '<S28>/Switch1' */

  /* RelationalOperator: '<S28>/Equal' incorporates:
   *  Constant: '<S28>/Constant'
   */
  VLC_B.Equal = (VLC_P_g.Constant_Value == VLC_B.VLCState);

  /* Logic: '<S28>/OR' */
  VLC_B.OR = (rtu_ACC_LgtCtrl_st->ACCStandstillReq || VLC_B.Equal);

  /* DataTypeConversion: '<S1>/Cast To Boolean' */
  VLC_B.COM_PropAct_st.MMotAct = rtu_COM_VehBus_st->x251.VehSdslSts;

  /* Product: '<S1>/Divide' incorporates:
   *  Constant: '<S1>/TransRatio'
   */
  VLC_B.COM_PropAct_st.MMotMax =
    rtu_COM_VehBus_st->xAC.EPTTrInptShaftMaxAvlblToq * rtP_TransRatio;

  /* Product: '<S1>/Divide1' incorporates:
   *  Constant: '<S1>/TransRatio'
   */
  VLC_B.COM_PropAct_st.MMotMin =
    rtu_COM_VehBus_st->xAC.EPTTrInptShaftMinAvlblToq * rtP_TransRatio;

  /* Logic: '<S1>/Logical Operator7' */
  VLC_B.COM_PropAct_st.BrakeForce = !rtu_COM_VehBus_st->x24C.WhlBrkPrsSts;

  /* RelationalOperator: '<S30>/Equal1' incorporates:
   *  Constant: '<S30>/Constant3'
   */
  VLC_B.Equal1 = (VLC_B.COM_PropAct_st.MMotAct == VLC_P_g.Constant3_Value);

  /* RelationalOperator: '<S30>/Equal2' incorporates:
   *  Constant: '<S30>/Constant3'
   */
  VLC_B.Equal2 = (VLC_P_g.Constant3_Value ==
                  rtu_ACC_LgtCtrl_st->ACCStandstillReq);

  /* Logic: '<S30>/AND' */
  VLC_B.AND = (VLC_B.Equal1 && VLC_B.Equal2);

  /* If: '<S30>/If' */
  if (VLC_B.AND) {
    /* Outputs for IfAction SubSystem: '<S30>/If Action Subsystem' incorporates:
     *  ActionPort: '<S33>/Action Port'
     */
    VLC_IfActionSubsystem(&VLC_B.Merge_m, &VLC_P_g.IfActionSubsystem_a);

    /* End of Outputs for SubSystem: '<S30>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S30>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S34>/Action Port'
     */
    /* SignalConversion: '<S34>/OutportBuffer_InsertedFor_Out1_at_inport_0' incorporates:
     *  Constant: '<S34>/P_aStsd'
     */
    VLC_B.Merge_m = VLC_P_g.P_aStsd_Value;

    /* End of Outputs for SubSystem: '<S30>/If Action Subsystem1' */
  }

  /* End of If: '<S30>/If' */

  /* Delay: '<S31>/Delay1' */
  zcEvent = (VLC_B.OR && (VLC_PrevZCX.Delay1_Reset_ZCE_h != POS_ZCSIG));
  if (zcEvent) {
    VLC_DW.icLoad_g = 1U;
  }

  VLC_PrevZCX.Delay1_Reset_ZCE_h = VLC_B.OR;
  if (VLC_DW.icLoad_g != 0) {
    VLC_DW.Delay1_DSTATE_c = VLC_B.AxTar_Lim;
  }

  VLC_B.Delay1_d = VLC_DW.Delay1_DSTATE_c;

  /* End of Delay: '<S31>/Delay1' */

  /* Outputs for Triggered SubSystem: '<S29>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S32>/Trigger'
   */
  zcEvent = (VLC_B.OR && (VLC_PrevZCX.TriggeredSubsystem_Trig_ZCE != POS_ZCSIG));
  if (zcEvent) {
    /* Inport: '<S32>/In1' */
    VLC_B.In1 = rtu_VSI_VehState_st->vRef;
  }

  VLC_PrevZCX.TriggeredSubsystem_Trig_ZCE = VLC_B.OR;

  /* End of Outputs for SubSystem: '<S29>/Triggered Subsystem' */

  /* Lookup_n-D: '<S29>/1-D Lookup Table' */
  VLC_B.uDLookupTable = look1_iflf_binlcpw(VLC_B.In1,
    VLC_P_g.uDLookupTable_bp01Data, VLC_P_g.uDLookupTable_tableData, 1U);

  /* Lookup_n-D: '<S29>/1-D Lookup Table1' */
  VLC_B.uDLookupTable1 = look1_iflf_binlcpw(rtu_VSI_VehState_st->vRef,
    VLC_P_g.uDLookupTable1_bp01Data, VLC_P_g.uDLookupTable1_tableData, 1U);

  /* Switch: '<S29>/P_aStsd' incorporates:
   *  Constant: '<S29>/Constant'
   */
  if (rtP_P_StsdCase > VLC_P_g.P_aStsd_Threshold) {
    VLC_B.P_aStsd = VLC_B.uDLookupTable;
  } else {
    VLC_B.P_aStsd = VLC_B.uDLookupTable1;
  }

  /* End of Switch: '<S29>/P_aStsd' */

  /* RelationalOperator: '<S29>/Equal' */
  VLC_B.Equal_l = (VLC_B.AxTar_Lim >= VLC_B.P_aStsd);

  /* Switch: '<S29>/Switch' */
  if (VLC_B.Equal_l) {
    VLC_B.Switch = VLC_B.Delay1_d;
  } else {
    VLC_B.Switch = VLC_B.AxTar_Lim;
  }

  /* End of Switch: '<S29>/Switch' */

  /* Switch: '<S28>/Switch6' incorporates:
   *  Constant: '<S28>/P_DecToStopCase'
   */
  if (VLC_P_g.P_DecToStopCase_Value > VLC_P_g.Switch6_Threshold) {
    VLC_B.Switch6 = VLC_B.Switch;
  } else {
    VLC_B.Switch6 = VLC_B.Merge_m;
  }

  /* End of Switch: '<S28>/Switch6' */

  /* Switch: '<S28>/Switch' */
  if (VLC_B.OR) {
    VLC_B.Switch_j = VLC_B.Switch6;
  } else {
    VLC_B.Switch_j = VLC_B.AxTar_Lim;
  }

  /* End of Switch: '<S28>/Switch' */

  /* Switch: '<S28>/Switch2' incorporates:
   *  Constant: '<S28>/Constant2'
   */
  if (VLC_B.VLCState > VLC_P_g.Switch2_Threshold) {
    VLC_B.Switch2 = VLC_B.Switch_j;
  } else {
    VLC_B.Switch2 = (real32_T)VLC_P_g.Constant2_Value;
  }

  /* End of Switch: '<S28>/Switch2' */

  /* Switch: '<S28>/Switch5' incorporates:
   *  Constant: '<S28>/P_AxtarEC'
   */
  if (VLC_B.Switch1[0]) {
    rty_Output->CDDAxtar = VLC_B.Switch2;
  } else {
    rty_Output->CDDAxtar = VLC_P_g.P_AxtarEC_Value;
  }

  /* End of Switch: '<S28>/Switch5' */

  /* Product: '<S28>/Divide' incorporates:
   *  Constant: '<S28>/r_Wheel'
   */
  VLC_B.Divide = rtP_r_Wheel * VLC_B.Add1_o;

  /* MinMax: '<S28>/MinMax1' */
  u0 = VLC_B.Divide;
  u1 = VLC_B.COM_PropAct_st.MMotMax;
  if ((u0 < u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  VLC_B.MinMax1 = u1;

  /* End of MinMax: '<S28>/MinMax1' */

  /* MinMax: '<S28>/MinMax' incorporates:
   *  Constant: '<S6>/MMotMin'
   */
  u0 = VLC_B.MinMax1;
  u1 = VLC_P_g.MMotMin_Value;
  if ((u0 > u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  VLC_B.MinMax_a = u1;

  /* End of MinMax: '<S28>/MinMax' */

  /* Switch: '<S28>/Switch3' incorporates:
   *  Constant: '<S28>/Constant4'
   */
  if (VLC_B.VLCState > VLC_P_g.Switch3_Threshold) {
    VLC_B.Switch3 = VLC_B.MinMax_a;
  } else {
    VLC_B.Switch3 = (real32_T)VLC_P_g.Constant4_Value;
  }

  /* End of Switch: '<S28>/Switch3' */

  /* Switch: '<S28>/Switch4' incorporates:
   *  Constant: '<S28>/P_TrqReqDC'
   */
  if (VLC_B.Switch1[1]) {
    VLC_B.Switch4 = VLC_B.Switch3;
  } else {
    VLC_B.Switch4 = VLC_P_g.P_TrqReqDC_Value;
  }

  /* End of Switch: '<S28>/Switch4' */

  /* Product: '<S6>/Divide' incorporates:
   *  Constant: '<S6>/TransRatio'
   */
  VLC_B.Divide_f = VLC_B.Switch4 / rtP_TransRatio;

  /* Product: '<S6>/Multiply' incorporates:
   *  Constant: '<S6>/Efficiency'
   */
  rty_Output->EngineTorqReq = (real32_T)(VLC_B.Divide_f *
    VLC_P_g.Efficiency_Value);

  /* BusCreator: '<Root>/Bus Creator1' */
  rty_Output->EngineTorqReqSt = VLC_B.Switch1[1];
  rty_Output->ACCState = VLC_B.VLCState;
  rty_Output->CDDEnable = VLC_B.Switch1[0];
  rty_Output->CDDDriveoffReq = rtu_ACC_LgtCtrl_st->ACCDriveoffReq;
  rty_Output->CDDStandstillReq = rtu_ACC_LgtCtrl_st->ACCStandstillReq;

  /* Product: '<S31>/Multiply' incorporates:
   *  Constant: '<S31>/P_StsddAxRamp'
   */
  VLC_B.Multiply_ot = rtP_P_StsddAxRamp * rtu_SYS_Info_st->dT;

  /* Sum: '<S31>/Add1' */
  VLC_B.Add1_k = VLC_B.Delay1_d - VLC_B.Multiply_ot;

  /* MinMax: '<S31>/Max' */
  u0 = VLC_B.P_aStsd;
  u1 = VLC_B.Add1_k;
  if ((u0 > u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  VLC_B.Max_c = u1;

  /* End of MinMax: '<S31>/Max' */

  /* Sum: '<S13>/Add1' */
  VLC_B.Add1_l = VLC_B.Delay1 - rtu_SYS_Info_st->dT;

  /* MinMax: '<S13>/Max1' incorporates:
   *  Constant: '<S13>/Constant7'
   */
  u0 = VLC_P_g.Constant7_Value;
  u1 = VLC_B.Add1_l;
  if ((u0 > u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  VLC_B.Max1 = u1;

  /* End of MinMax: '<S13>/Max1' */
}

/* Update for referenced model: 'VLC' */
void VLC_Update(void)
{
  /* Update for Memory: '<Root>/Memory' */
  VLC_DW.Memory_PreviousInput_l = VLC_B.AxTar_Lim;

  /* Update for Memory: '<S13>/Memory' */
  VLC_DW.Memory_PreviousInput_e = VLC_B.Switch5;

  /* Update for Delay: '<S13>/Delay1' */
  VLC_DW.icLoad = 0U;
  VLC_DW.Delay1_DSTATE = VLC_B.Max1;

  /* Update for Memory: '<S12>/Memory2' */
  VLC_DW.Memory2_PreviousInput = VLC_B.Add1_j;

  /* Update for Memory: '<S12>/Memory1' */
  VLC_DW.Memory1_PreviousInput_f = VLC_B.Add1;

  /* Update for Memory: '<S13>/Memory2' */
  VLC_DW.Memory2_PreviousInput_j = VLC_B.Add1_a;

  /* Update for If: '<Root>/If' */
  if (VLC_DW.If_ActiveSubsystem == 0) {
    /* Update for IfAction SubSystem: '<Root>/VLC_Core' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* Update for Memory: '<S22>/Memory' */
    VLC_DW.Memory_PreviousInput_k = VLC_B.Add1_h;

    /* Update for Memory: '<S22>/Memory1' */
    VLC_DW.Memory1_PreviousInput_j = VLC_B.IGain;

    /* Update for Memory: '<S21>/Memory1' */
    VLC_DW.Memory1_PreviousInput_e = VLC_B.aKI;

    /* End of Update for SubSystem: '<Root>/VLC_Core' */
  }

  /* End of Update for If: '<Root>/If' */

  /* Update for Memory: '<S6>/Memory2' */
  VLC_DW.Memory2_PreviousInput_d = VLC_B.Add1_o;

  /* Update for Memory: '<S6>/Memory1' */
  VLC_DW.Memory1_PreviousInput = VLC_B.EC_Enable;

  /* Update for Memory: '<S6>/Memory' */
  VLC_DW.Memory_PreviousInput = VLC_B.DC_Enable;

  /* Update for Delay: '<S31>/Delay1' */
  VLC_DW.icLoad_g = 0U;
  VLC_DW.Delay1_DSTATE_c = VLC_B.Max_c;
}

/* Model initialize function */
void VLC_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_VLC_T *const VLC_M = &(VLC_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(VLC_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) &VLC_B), 0,
                sizeof(B_VLC_c_T));

  /* states (dwork) */
  (void) memset((void *)&VLC_DW, 0,
                sizeof(DW_VLC_f_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    VLC_rti_init_trc_pointers();
    RTI_INIT_CODE_ENV();
  }

  VLC_PrevZCX.Delay1_Reset_ZCE = POS_ZCSIG;
  VLC_PrevZCX.Delay1_Reset_ZCE_h = POS_ZCSIG;
  VLC_PrevZCX.TriggeredSubsystem_Trig_ZCE = POS_ZCSIG;
}
