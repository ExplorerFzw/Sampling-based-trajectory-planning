/*
 * LCK_private.h
 *
 * Code generation for model "LCK".
 *
 * Model version              : 1.338
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Feb 10 09:08:45 2021
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LCK_private_h_
#define RTW_HEADER_LCK_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "LCK.h"

extern real_T rt_roundd_snf(real_T u);
extern real_T rt_powd_snf(real_T u0, real_T u1);
extern real32_T look1_iflf_binlcpw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern real32_T look1_iflf_linlcpw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern void LCK_TriggerHold_Init(B_TriggerHold_LCK_T *localB);
extern void LCK_TriggerHold(boolean_T rtu_Trigger, real32_T rtu_hold_time,
  B_TriggerHold_LCK_T *localB);
extern void LCK_TriggerHold_e_Init(B_TriggerHold_LCK_l_T *localB);
extern void LCK_TriggerHold_i(boolean_T rtu_Trigger, real32_T rtu_hold_time,
  B_TriggerHold_LCK_l_T *localB);
extern void LCK_Delay_Trig_Init(B_Delay_Trig_LCK_T *localB, DW_Delay_Trig_LCK_T *
  localDW);
extern void LCK_Delay_Trig(real32_T rtu_Input, real32_T rtu_Delay_Trig_Time,
  B_Delay_Trig_LCK_T *localB, DW_Delay_Trig_LCK_T *localDW);
extern void LCK_Sustain_wo_reset_Init(B_Sustain_wo_reset_LCK_T *localB,
  DW_Sustain_wo_reset_LCK_T *localDW);
extern void LCK_Sustain_wo_reset(boolean_T rtu_input, real32_T rtu_sustain_time,
  B_Sustain_wo_reset_LCK_T *localB, DW_Sustain_wo_reset_LCK_T *localDW);
extern void LCK_Sustain_wo_reset_l_Init(B_Sustain_wo_reset_LCK_p_T *localB,
  DW_Sustain_wo_reset_LCK_d_T *localDW);
extern void LCK_Sustain_wo_reset_n(real32_T rtu_input, real32_T rtu_sustain_time,
  B_Sustain_wo_reset_LCK_p_T *localB, DW_Sustain_wo_reset_LCK_d_T *localDW);
extern void LCK_Delay_Trig_a_Init(B_Delay_Trig_LCK_b_T *localB,
  DW_Delay_Trig_LCK_g_T *localDW);
extern void LCK_Delay_Trig_k(boolean_T rtu_Input, real32_T rtu_Delay_Trig_count,
  B_Delay_Trig_LCK_b_T *localB, DW_Delay_Trig_LCK_g_T *localDW);
extern void LCK_Delay_Trig_n_Init(B_Delay_Trig_LCK_a_T *localB,
  DW_Delay_Trig_LCK_gy_T *localDW);
extern void LCK_Delay_Trig_g(real32_T rtu_Input, real32_T rtu_Delay_Trig_Time,
  B_Delay_Trig_LCK_a_T *localB, DW_Delay_Trig_LCK_gy_T *localDW);
extern void LCK_signal_sustain_Init(B_signal_sustain_LCK_T *localB,
  DW_signal_sustain_LCK_T *localDW);
extern void LCK_signal_sustain(boolean_T rtu_input, real_T rtu_sustain_time,
  boolean_T rtu_clear, B_signal_sustain_LCK_T *localB, DW_signal_sustain_LCK_T
  *localDW);

#endif                                 /* RTW_HEADER_LCK_private_h_ */
