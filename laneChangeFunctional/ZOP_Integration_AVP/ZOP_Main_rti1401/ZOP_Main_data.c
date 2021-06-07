/*
 * ZOP_Main_data.c
 *
 * Code generation for model "ZOP_Main".
 *
 * Model version              : 1.335
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Feb  3 13:27:16 2021
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ZOP_Main.h"
#include "ZOP_Main_private.h"

/* Block parameters (default storage) */
P_ZOP_Main_T ZOP_Main_P = {
  /* Variable: k_ZOP_ALC_D10
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  1500.0F,

  /* Variable: k_ZOP_ALC_Enable
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  1.0F,

  /* Variable: k_ZOP_ALC_Ramp
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  0.0F,

  /* Variable: k_ZOP_HoldCnt
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  60.0F,

  /* Variable: k_ZOP_LCProCnt
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  20.0F,

  /* Variable: k_ZOP_LCTimeMax
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  15.0F,

  /* Variable: k_ZOP_LS_ChangingDist
   * Referenced by: '<S4>/k_LS_ChangingDist'
   */
  100.0F,

  /* Variable: k_ZOP_LS_ChangingTime
   * Referenced by: '<S4>/k_LS_ChangingTime'
   */
  5.0F,

  /* Variable: k_ZOP_MapFlag_Enable
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  0.0F,

  /* Variable: k_ZOP_ObjSpd_cf
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  0.05F,

  /* Variable: k_ZOP_SpdCkDstThr
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  50.0F,

  /* Variable: k_ZOP_SpdLmt_Enable
   * Referenced by: '<Root>/k_ZOP_SpdLmt_Enable'
   */
  1.0F,

  /* Variable: k_ZOP_SpdLoThr
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  4.0F,

  /* Variable: k_ZOP_V2X_Enable
   * Referenced by: '<S2>/k_ZOP_V2X_Enable'
   */
  1.0F,

  /* Variable: k_ZOP_VcTJA_Enable
   * Referenced by: '<Root>/k_ZOP_VcTJA_Enable'
   */
  1.0F,

  /* Variable: k_ZOP_VoiceAct_Enable
   * Referenced by:
   *   '<Root>/k_ZOP_VoiceAct_Enable'
   *   '<Root>/k_ZOP_VoiceAct_Enable1'
   */
  1.0F,

  /* Variable: k_ZOP_ALC_SCnt
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  30,

  /* Variable: k_ZOP_ALC_SCnt_LC
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  20,

  /* Variable: k_ZOP_ALC_SCnt_Thr
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  15,

  /* Variable: k_ZOP_ALC_SCnt_Thr_LC
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  15,

  /* Variable: k_ZOP_ALC_SNCnt
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  30,

  /* Variable: k_ZOP_ALC_SNCnt_LC
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  20,

  /* Variable: k_ZOP_ALC_SpdEnable
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  0,

  /* Variable: k_ZOP_SpdLoTimeThr
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  50,

  /* Variable: MODE_ZOP_ACTIVE
   * Referenced by: '<S4>/MODE_ZOP_ACTIVE'
   */
  3U,

  /* Variable: MODE_ZOP_ERROR
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  15U,

  /* Variable: MODE_ZOP_FINISH
   * Referenced by:
   *   '<Root>/MODE_ZOP_FINISH'
   *   '<S4>/ZOP_State_Machine'
   *   '<S4>/MODE_ZOP_FINISH'
   */
  10U,

  /* Variable: MODE_ZOP_HOLD
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  6U,

  /* Variable: MODE_ZOP_LC
   * Referenced by:
   *   '<Root>/MODE_ZOP_LC'
   *   '<S4>/LaneStateProcess'
   *   '<S4>/ZOP_State_Machine'
   */
  7U,

  /* Variable: MODE_ZOP_OFF
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  0U,

  /* Variable: MODE_ZOP_OVERIDE
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  8U,

  /* Variable: MODE_ZOP_PASSIVE
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  1U,

  /* Variable: MODE_ZOP_READY
   * Referenced by: '<S4>/ZOP_State_Machine'
   */
  2U,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S1>/Out1'
   */
  {
    0U,                                /* state */
    0U,                                /* ready */
    0U,                                /* active */
    0U,                                /* overide */
    0U,                                /* cancle */
    0U,                                /* error */
    0U,                                /* lc_finish */
    0U,                                /* lc_fail */
    0.0F                               /* lc_dist */
  },

  /* Computed Parameter: ZOP2HMI_Y0
   * Referenced by: '<S4>/ZOP2HMI'
   */
  {
    0,                                 /* LCDir */
    0,                                 /* LCRes */
    0,                                 /* LCTip */
    0,                                 /* LCFailTip */
    0,                                 /* LCReqTip */
    0,                                 /* LCProp */
    0                                  /* LCPropRes */
  },

  /* Computed Parameter: v_des_Y0
   * Referenced by: '<S2>/v_des'
   */
  0.0,

  /* Computed Parameter: a_des_Y0
   * Referenced by: '<S2>/a_des'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/C_Tmp1'
   */
  0.0,

  /* Expression: 15
   * Referenced by: '<S2>/C_Tmp3'
   */
  15.0,

  /* Expression: 0.5
   * Referenced by: '<S2>/C_Tmp2'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S16>/C'
   */
  0.0,

  /* Expression: 3
   * Referenced by: '<S16>/Constant9'
   */
  3.0,

  /* Expression: 0.5
   * Referenced by: '<S16>/Gain3'
   */
  0.5,

  /* Expression: 1.5
   * Referenced by: '<S16>/Constant10'
   */
  1.5,

  /* Expression: 200
   * Referenced by: '<S16>/Constant1'
   */
  200.0,

  /* Expression: 0.5
   * Referenced by: '<S16>/Switch1'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S16>/Constant7'
   */
  1.0,

  /* Expression: 0.8
   * Referenced by: '<S16>/CK1'
   */
  0.8,

  /* Expression: 0.7
   * Referenced by: '<S16>/CK2'
   */
  0.7,

  /* Expression: 0
   * Referenced by: '<S16>/Constant2'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S16>/Switch2'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S16>/Gain'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S16>/Constant36'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S16>/Switch4'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S16>/Gain1'
   */
  0.5,

  /* Expression: 0.7
   * Referenced by: '<S16>/CK3'
   */
  0.7,

  /* Expression: 0.6
   * Referenced by: '<S16>/CK4'
   */
  0.6,

  /* Expression: 4
   * Referenced by: '<S16>/C2'
   */
  4.0,

  /* Expression: 0.5
   * Referenced by: '<S16>/CK5'
   */
  0.5,

  /* Expression: 7
   * Referenced by: '<S16>/C1'
   */
  7.0,

  /* Expression: 0
   * Referenced by: '<S15>/C'
   */
  0.0,

  /* Expression: 3
   * Referenced by: '<S15>/Constant9'
   */
  3.0,

  /* Expression: 0.5
   * Referenced by: '<S15>/Gain3'
   */
  0.5,

  /* Expression: 1.5
   * Referenced by: '<S15>/Constant10'
   */
  1.5,

  /* Expression: 200
   * Referenced by: '<S15>/Constant1'
   */
  200.0,

  /* Expression: 0.5
   * Referenced by: '<S15>/Switch1'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S15>/Constant7'
   */
  1.0,

  /* Expression: 0.9
   * Referenced by: '<S15>/CF1'
   */
  0.9,

  /* Expression: 0.8
   * Referenced by: '<S15>/CF2'
   */
  0.8,

  /* Expression: 0
   * Referenced by: '<S15>/Constant2'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S15>/Switch2'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S15>/Gain'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S15>/Constant36'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S15>/Switch4'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S15>/Gain1'
   */
  0.5,

  /* Expression: 0.8
   * Referenced by: '<S15>/CF3'
   */
  0.8,

  /* Expression: 0.7
   * Referenced by: '<S15>/CF4'
   */
  0.7,

  /* Expression: 4
   * Referenced by: '<S15>/C2'
   */
  4.0,

  /* Expression: 0.6
   * Referenced by: '<S15>/CF5'
   */
  0.6,

  /* Expression: 7
   * Referenced by: '<S15>/C1'
   */
  7.0,

  /* Expression: 0
   * Referenced by: '<S4>/C_Tmp7'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S4>/C_Tmp2'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S4>/C_Tmp3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/C_Tmp4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/C_Tmp5'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/C_Tmp6'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S4>/C_Tmp9'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S4>/C_Tmp10'
   */
  1.0,

  /* Expression: 2
   * Referenced by: '<S4>/C_Tmp12'
   */
  2.0,

  /* Expression: 1
   * Referenced by: '<S4>/C_Tmp11'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S4>/C_Tmp8'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/C_Tmp1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/ZOPACT3'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/ZOPACT1'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<Root>/ZOPACT'
   */
  2.0,

  /* Expression: 0
   * Referenced by: '<Root>/ZOPACT2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/ZOPACT7'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/ZOPACT6'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/ZOPNACT1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/ZOPACT4'
   */
  0.0,

  /* Expression: 100
   * Referenced by: '<Root>/ZOPACT8'
   */
  100.0,

  /* Expression: 1/3.6
   * Referenced by: '<Root>/Gain'
   */
  0.27777777777777779,

  /* Expression: 1000
   * Referenced by: '<Root>/C_Tmp2'
   */
  1000.0,

  /* Expression: -100
   * Referenced by: '<Root>/C_Tmp1'
   */
  -100.0,

  /* Expression: 3.5
   * Referenced by: '<Root>/LCDist'
   */
  3.5,

  /* Expression: 0
   * Referenced by: '<Root>/ZOPACT5'
   */
  0.0,

  /* Computed Parameter: case_num_Y0
   * Referenced by: '<S2>/case_num'
   */
  0.0F,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<S2>/Switch'
   */
  0.5F,

  /* Computed Parameter: Saturation_UpperSat
   * Referenced by: '<S16>/Saturation'
   */
  100.0F,

  /* Computed Parameter: Saturation_LowerSat
   * Referenced by: '<S16>/Saturation'
   */
  0.1F,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<S16>/Gain2'
   */
  -1.0F,

  /* Computed Parameter: Gain4_Gain
   * Referenced by: '<S16>/Gain4'
   */
  -1.0F,

  /* Computed Parameter: Saturation1_UpperSat
   * Referenced by: '<S16>/Saturation1'
   */
  100.0F,

  /* Computed Parameter: Saturation1_LowerSat
   * Referenced by: '<S16>/Saturation1'
   */
  0.1F,

  /* Computed Parameter: Saturation_UpperSat_n
   * Referenced by: '<S15>/Saturation'
   */
  100.0F,

  /* Computed Parameter: Saturation_LowerSat_i
   * Referenced by: '<S15>/Saturation'
   */
  0.1F,

  /* Computed Parameter: Saturation1_UpperSat_o
   * Referenced by: '<S15>/Saturation1'
   */
  100.0F,

  /* Computed Parameter: Saturation1_LowerSat_j
   * Referenced by: '<S15>/Saturation1'
   */
  0.1F,

  /* Computed Parameter: UnitDelay4_InitialCondition
   * Referenced by: '<S4>/Unit Delay4'
   */
  0.0F,

  /* Computed Parameter: UnitDelay4_InitialCondition_m
   * Referenced by: '<S1>/Unit Delay4'
   */
  0.0F,

  /* Computed Parameter: Switch4_Threshold_m
   * Referenced by: '<Root>/Switch4'
   */
  0.5F,

  /* Computed Parameter: Switch5_Threshold
   * Referenced by: '<Root>/Switch5'
   */
  0.5F,

  /* Computed Parameter: Switch7_Threshold
   * Referenced by: '<Root>/Switch7'
   */
  0.5F,

  /* Computed Parameter: Switch6_Threshold
   * Referenced by: '<Root>/Switch6'
   */
  0.5F,

  /* Computed Parameter: LC_Cmd_Y0
   * Referenced by: '<S4>/LC_Cmd'
   */
  0,

  /* Computed Parameter: TargetExist_Y0
   * Referenced by: '<S16>/TargetExist'
   */
  0,

  /* Computed Parameter: TargetExist2_Y0
   * Referenced by: '<S16>/TargetExist2'
   */
  0,

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<S16>/Unit Delay1'
   */
  0,

  /* Computed Parameter: TargetExist_Y0_m
   * Referenced by: '<S15>/TargetExist'
   */
  0,

  /* Computed Parameter: TargetExist2_Y0_c
   * Referenced by: '<S15>/TargetExist2'
   */
  0,

  /* Computed Parameter: UnitDelay1_InitialCondition_j
   * Referenced by: '<S15>/Unit Delay1'
   */
  0,

  /* Computed Parameter: ZOP_Enable_Y0
   * Referenced by: '<S4>/ZOP_Enable'
   */
  0,

  /* Computed Parameter: UnitDelay2_InitialCondition
   * Referenced by: '<S4>/Unit Delay2'
   */
  0,

  /* Computed Parameter: UnitDelay2_InitialCondition_j
   * Referenced by: '<Root>/Unit Delay2'
   */
  0,

  /* Computed Parameter: UnitDelay1_InitialCondition_b
   * Referenced by: '<S4>/Unit Delay1'
   */
  0,

  /* Computed Parameter: UnitDelay3_InitialCondition
   * Referenced by: '<S4>/Unit Delay3'
   */
  0,

  /* Computed Parameter: UnitDelay5_InitialCondition
   * Referenced by: '<S4>/Unit Delay5'
   */
  0,

  /* Computed Parameter: UnitDelay3_InitialCondition_m
   * Referenced by: '<Root>/Unit Delay3'
   */
  0,

  /* Computed Parameter: Gain_Gain_k
   * Referenced by: '<S4>/Gain'
   */
  -128
};
