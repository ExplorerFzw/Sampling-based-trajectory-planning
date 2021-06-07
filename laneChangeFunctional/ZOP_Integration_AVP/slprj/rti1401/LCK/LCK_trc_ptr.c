/***************************************************************************

   Source file LCK_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Wed Mar 17 16:04:39 2021

   Copyright 2021, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "LCK_trc_ptr.h"
#include "LCK.h"
#include "LCK_private.h"

/* Compiler options to turn off optimization. */
#if !defined(DS_OPTIMIZE_INIT_TRC_POINTERS)
#ifdef _MCCPPC

#pragma options -nOt -nOr -nOi -nOx

#endif

#ifdef __GNUC__

#pragma GCC optimize ("O0")

#endif

#ifdef _MSC_VER

#pragma optimize ("", off)

#endif
#endif

/* Definition of Global pointers to data type transitions (for TRC-file access) */
volatile real_T *p_0_LCK_real_T_0 = NULL;
volatile LatCtrl_LCK_LanSigInputs_t *p_0_LCK_LatCtrl_LCK_LanSigInputs_t_1 = NULL;
volatile real_T *p_0_LCK_real_T_2 = NULL;
volatile real32_T *p_0_LCK_real32_T_3 = NULL;
volatile uint16_T *p_0_LCK_uint16_T_4 = NULL;
volatile uint8_T *p_0_LCK_uint8_T_5 = NULL;
volatile boolean_T *p_0_LCK_boolean_T_6 = NULL;
volatile real32_T *p_0_LCK_real32_T_7 = NULL;
volatile real32_T *p_0_LCK_real32_T_8 = NULL;
volatile real32_T *p_0_LCK_real32_T_9 = NULL;
volatile real32_T *p_0_LCK_real32_T_10 = NULL;
volatile boolean_T *p_0_LCK_boolean_T_11 = NULL;
volatile real32_T *p_0_LCK_real32_T_12 = NULL;
volatile real32_T *p_0_LCK_real32_T_13 = NULL;
volatile real32_T *p_0_LCK_real32_T_14 = NULL;
volatile real32_T *p_0_LCK_real32_T_15 = NULL;
volatile real32_T *p_0_LCK_real32_T_16 = NULL;
volatile real32_T *p_0_LCK_real32_T_17 = NULL;
volatile real32_T *p_0_LCK_real32_T_18 = NULL;
volatile real32_T *p_0_LCK_real32_T_19 = NULL;
volatile real32_T *p_0_LCK_real32_T_20 = NULL;
volatile real32_T *p_0_LCK_real32_T_21 = NULL;
volatile real32_T *p_0_LCK_real32_T_22 = NULL;
volatile real32_T *p_0_LCK_real32_T_23 = NULL;
volatile real32_T *p_0_LCK_real32_T_24 = NULL;
volatile real32_T *p_0_LCK_real32_T_25 = NULL;
volatile real32_T *p_0_LCK_real32_T_26 = NULL;
volatile real32_T *p_0_LCK_real32_T_27 = NULL;
volatile real32_T *p_0_LCK_real32_T_28 = NULL;
volatile real32_T *p_0_LCK_real32_T_29 = NULL;
volatile real32_T *p_0_LCK_real32_T_30 = NULL;
volatile real32_T *p_0_LCK_real32_T_31 = NULL;
volatile real32_T *p_0_LCK_real32_T_32 = NULL;
volatile real32_T *p_0_LCK_real32_T_33 = NULL;
volatile real32_T *p_0_LCK_real32_T_34 = NULL;
volatile real_T *p_0_LCK_real_T_35 = NULL;
volatile real_T *p_0_LCK_real_T_36 = NULL;
volatile real_T *p_0_LCK_real_T_37 = NULL;
volatile real_T *p_0_LCK_real_T_38 = NULL;
volatile real_T *p_0_LCK_real_T_39 = NULL;
volatile real_T *p_0_LCK_real_T_40 = NULL;
volatile real_T *p_0_LCK_real_T_41 = NULL;
volatile real_T *p_0_LCK_real_T_42 = NULL;
volatile real_T *p_0_LCK_real_T_43 = NULL;
volatile real_T *p_0_LCK_real_T_44 = NULL;
volatile real32_T *p_0_LCK_real32_T_45 = NULL;
volatile boolean_T *p_0_LCK_boolean_T_46 = NULL;
volatile real32_T *p_0_LCK_real32_T_47 = NULL;
volatile real32_T *p_0_LCK_real32_T_48 = NULL;
volatile boolean_T *p_0_LCK_boolean_T_49 = NULL;
volatile real32_T *p_0_LCK_real32_T_50 = NULL;
volatile boolean_T *p_0_LCK_boolean_T_51 = NULL;
volatile real_T *p_2_LCK_real_T_0 = NULL;
volatile real32_T *p_2_LCK_real32_T_1 = NULL;
volatile uint8_T *p_2_LCK_uint8_T_2 = NULL;
volatile struct_mangFo2BVnlYQ9swmRAj7G *p_2_LCK_struct_mangFo2BVnlYQ9swmRAj7G_3 =
  NULL;
volatile real_T *p_2_LCK_real_T_4 = NULL;
volatile real32_T *p_2_LCK_real32_T_5 = NULL;
volatile uint32_T *p_2_LCK_uint32_T_6 = NULL;
volatile uint16_T *p_2_LCK_uint16_T_7 = NULL;
volatile boolean_T *p_2_LCK_boolean_T_8 = NULL;
volatile uint8_T *p_2_LCK_uint8_T_9 = NULL;
volatile real_T *p_3_LCK_real_T_0 = NULL;
volatile real32_T *p_3_LCK_real32_T_1 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_2 = NULL;
volatile boolean_T *p_3_LCK_boolean_T_3 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_4 = NULL;
volatile boolean_T *p_3_LCK_boolean_T_5 = NULL;
volatile real32_T *p_3_LCK_real32_T_6 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_7 = NULL;
volatile real32_T *p_3_LCK_real32_T_8 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_9 = NULL;
volatile real32_T *p_3_LCK_real32_T_10 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_11 = NULL;
volatile real32_T *p_3_LCK_real32_T_12 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_13 = NULL;
volatile real32_T *p_3_LCK_real32_T_14 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_15 = NULL;
volatile real32_T *p_3_LCK_real32_T_16 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_17 = NULL;
volatile real32_T *p_3_LCK_real32_T_18 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_19 = NULL;
volatile real32_T *p_3_LCK_real32_T_20 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_21 = NULL;
volatile real32_T *p_3_LCK_real32_T_22 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_23 = NULL;
volatile real32_T *p_3_LCK_real32_T_24 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_25 = NULL;
volatile real32_T *p_3_LCK_real32_T_26 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_27 = NULL;
volatile real32_T *p_3_LCK_real32_T_28 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_29 = NULL;
volatile real32_T *p_3_LCK_real32_T_30 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_31 = NULL;
volatile real32_T *p_3_LCK_real32_T_32 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_33 = NULL;
volatile real32_T *p_3_LCK_real32_T_34 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_35 = NULL;
volatile real32_T *p_3_LCK_real32_T_36 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_37 = NULL;
volatile real32_T *p_3_LCK_real32_T_38 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_39 = NULL;
volatile real32_T *p_3_LCK_real32_T_40 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_41 = NULL;
volatile real32_T *p_3_LCK_real32_T_42 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_43 = NULL;
volatile real32_T *p_3_LCK_real32_T_44 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_45 = NULL;
volatile real32_T *p_3_LCK_real32_T_46 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_47 = NULL;
volatile real32_T *p_3_LCK_real32_T_48 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_49 = NULL;
volatile real32_T *p_3_LCK_real32_T_50 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_51 = NULL;
volatile real32_T *p_3_LCK_real32_T_52 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_53 = NULL;
volatile real_T *p_3_LCK_real_T_54 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_55 = NULL;
volatile real_T *p_3_LCK_real_T_56 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_57 = NULL;
volatile real_T *p_3_LCK_real_T_58 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_59 = NULL;
volatile real_T *p_3_LCK_real_T_60 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_61 = NULL;
volatile real_T *p_3_LCK_real_T_62 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_63 = NULL;
volatile real_T *p_3_LCK_real_T_64 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_65 = NULL;
volatile real_T *p_3_LCK_real_T_66 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_67 = NULL;
volatile real_T *p_3_LCK_real_T_68 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_69 = NULL;
volatile real_T *p_3_LCK_real_T_70 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_71 = NULL;
volatile real_T *p_3_LCK_real_T_72 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_73 = NULL;
volatile real_T *p_3_LCK_real_T_74 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_75 = NULL;
volatile real_T *p_3_LCK_real_T_76 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_77 = NULL;
volatile real32_T *p_3_LCK_real32_T_78 = NULL;
volatile uint8_T *p_3_LCK_uint8_T_79 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_LCK_real_T_0 = &LCK_B.Delay1[0];
  p_0_LCK_LatCtrl_LCK_LanSigInputs_t_1 = &LCK_B.LanSigInputs;
  p_0_LCK_real_T_2 = &LCK_B.Delay;
  p_0_LCK_real32_T_3 = &LCK_B.DataTypeConversion;
  p_0_LCK_uint16_T_4 = &LCK_B.Gain0;
  p_0_LCK_uint8_T_5 = &LCK_B.DataTypeConversion2_k4;
  p_0_LCK_boolean_T_6 = &LCK_B.DataTypeConversion3_ey;
  p_0_LCK_real32_T_7 = &LCK_B.sf_signal_sustain_c.sustain_value;
  p_0_LCK_real32_T_8 = &LCK_B.sf_signal_sustain_k.sustain_value;
  p_0_LCK_real32_T_9 = &LCK_B.sf_signal_sustain_e.sustain_value;
  p_0_LCK_real32_T_10 = &LCK_B.sf_TriggerHold_b.count;
  p_0_LCK_boolean_T_11 = &LCK_B.sf_TriggerHold_b.Out;
  p_0_LCK_real32_T_12 = &LCK_B.sf_Delay_Trig_hu.Delay_Trig;
  p_0_LCK_real32_T_13 = &LCK_B.sf_Delay_Trig_gc.Delay_Trig;
  p_0_LCK_real32_T_14 = &LCK_B.sf_Delay_Trig_gz.Delay_Trig;
  p_0_LCK_real32_T_15 = &LCK_B.sf_Delay_Trig_m4.Delay_Trig;
  p_0_LCK_real32_T_16 = &LCK_B.sf_Delay_Trig_c5.Delay_Trig;
  p_0_LCK_real32_T_17 = &LCK_B.sf_Delay_Trig_jy.Delay_Trig;
  p_0_LCK_real32_T_18 = &LCK_B.sf_Delay_Trig_g1.Delay_Trig;
  p_0_LCK_real32_T_19 = &LCK_B.sf_Delay_Trig_h.Delay_Trig;
  p_0_LCK_real32_T_20 = &LCK_B.sf_Delay_Trig_ol.Delay_Trig;
  p_0_LCK_real32_T_21 = &LCK_B.sf_Delay_Trig_jg.Delay_Trig;
  p_0_LCK_real32_T_22 = &LCK_B.sf_Delay_Trig_a.Delay_Trig;
  p_0_LCK_real32_T_23 = &LCK_B.sf_Delay_Trig_g.Delay_Trig;
  p_0_LCK_real32_T_24 = &LCK_B.sf_Delay_Trig_bq.Delay_Trig;
  p_0_LCK_real32_T_25 = &LCK_B.sf_Delay_Trig_b.Delay_Trig;
  p_0_LCK_real32_T_26 = &LCK_B.sf_Delay_Trig_i.Delay_Trig;
  p_0_LCK_real32_T_27 = &LCK_B.sf_Delay_Trig_c.Delay_Trig;
  p_0_LCK_real32_T_28 = &LCK_B.sf_Delay_Trig_kt.Delay_Trig;
  p_0_LCK_real32_T_29 = &LCK_B.sf_Delay_Trig_o.Delay_Trig;
  p_0_LCK_real32_T_30 = &LCK_B.sf_Delay_Trig_m.Delay_Trig;
  p_0_LCK_real32_T_31 = &LCK_B.sf_Delay_Trig_f.Delay_Trig;
  p_0_LCK_real32_T_32 = &LCK_B.sf_Delay_Trig_j.Delay_Trig;
  p_0_LCK_real32_T_33 = &LCK_B.sf_Delay_Trig_l.Delay_Trig;
  p_0_LCK_real32_T_34 = &LCK_B.sf_Delay_Trig_k.Delay_Trig;
  p_0_LCK_real_T_35 = &LCK_B.sf_Sustain_wo_reset_h.sustain_value;
  p_0_LCK_real_T_36 = &LCK_B.sf_Sustain_wo_reset_cw.sustain_value;
  p_0_LCK_real_T_37 = &LCK_B.sf_Sustain_wo_reset_cl.sustain_value;
  p_0_LCK_real_T_38 = &LCK_B.sf_Sustain_wo_reset_ce.sustain_value;
  p_0_LCK_real_T_39 = &LCK_B.sf_Sustain_wo_reset_p.sustain_value;
  p_0_LCK_real_T_40 = &LCK_B.sf_Sustain_wo_reset_e.sustain_value;
  p_0_LCK_real_T_41 = &LCK_B.sf_Sustain_wo_reset_c.sustain_value;
  p_0_LCK_real_T_42 = &LCK_B.sf_Sustain_wo_reset_n.sustain_value;
  p_0_LCK_real_T_43 = &LCK_B.sf_Sustain_wo_reset_o.sustain_value;
  p_0_LCK_real_T_44 = &LCK_B.sf_Sustain_wo_reset.sustain_value;
  p_0_LCK_real32_T_45 = &LCK_B.sf_TriggerHold_k.count;
  p_0_LCK_boolean_T_46 = &LCK_B.sf_TriggerHold_k.Out;
  p_0_LCK_real32_T_47 = &LCK_B.sf_Delay_Trig.Delay_Trig;
  p_0_LCK_real32_T_48 = &LCK_B.sf_TriggerHold_i.count;
  p_0_LCK_boolean_T_49 = &LCK_B.sf_TriggerHold_i.Out;
  p_0_LCK_real32_T_50 = &LCK_B.sf_TriggerHold.count;
  p_0_LCK_boolean_T_51 = &LCK_B.sf_TriggerHold.Out;
  p_2_LCK_real_T_0 = &LCK_P_g.CompareToConstant_const;
  p_2_LCK_real32_T_1 = &LCK_P_g.CompareToConstant_const_m;
  p_2_LCK_uint8_T_2 = &LCK_P_g.CompareToConstant4_const;
  p_2_LCK_struct_mangFo2BVnlYQ9swmRAj7G_3 = &LCK_P_g.LCK_Debug_Info_Y0;
  p_2_LCK_real_T_4 = &LCK_P_g.Constant1_Value;
  p_2_LCK_real32_T_5 = &LCK_P_g.Gain_Gain_p;
  p_2_LCK_uint32_T_6 = &LCK_P_g.Delay1_DelayLength;
  p_2_LCK_uint16_T_7 = &LCK_P_g.const1_Value_c;
  p_2_LCK_boolean_T_8 = &LCK_P_g.UnitDelay1_InitialCondition_c;
  p_2_LCK_uint8_T_9 = &LCK_P_g.Gain2_Gain_g;
  p_3_LCK_real_T_0 = &LCK_DW.Delay1_DSTATE[0];
  p_3_LCK_real32_T_1 = &LCK_DW.UnitDelay_DSTATE;
  p_3_LCK_uint8_T_2 = &LCK_DW.Delay_DSTATE_f;
  p_3_LCK_boolean_T_3 = &LCK_DW.UnitDelay1_DSTATE_g;
  p_3_LCK_uint8_T_4 = &LCK_DW.is_active_c10_LCK;
  p_3_LCK_boolean_T_5 = &LCK_DW.Relay1_Mode;
  p_3_LCK_real32_T_6 = &LCK_DW.sf_signal_sustain_c.i;
  p_3_LCK_uint8_T_7 =
    &LCK_DW.sf_signal_sustain_c.is_active_c106_sMO8bLBWfTvOHfGk;
  p_3_LCK_real32_T_8 = &LCK_DW.sf_signal_sustain_k.i;
  p_3_LCK_uint8_T_9 =
    &LCK_DW.sf_signal_sustain_k.is_active_c106_sMO8bLBWfTvOHfGk;
  p_3_LCK_real32_T_10 = &LCK_DW.sf_signal_sustain_e.i;
  p_3_LCK_uint8_T_11 =
    &LCK_DW.sf_signal_sustain_e.is_active_c106_sMO8bLBWfTvOHfGk;
  p_3_LCK_real32_T_12 = &LCK_DW.sf_Delay_Trig_hu.duration;
  p_3_LCK_uint8_T_13 = &LCK_DW.sf_Delay_Trig_hu.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_14 = &LCK_DW.sf_Delay_Trig_gc.duration;
  p_3_LCK_uint8_T_15 = &LCK_DW.sf_Delay_Trig_gc.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_16 = &LCK_DW.sf_Delay_Trig_gz.duration;
  p_3_LCK_uint8_T_17 = &LCK_DW.sf_Delay_Trig_gz.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_18 = &LCK_DW.sf_Delay_Trig_m4.duration;
  p_3_LCK_uint8_T_19 = &LCK_DW.sf_Delay_Trig_m4.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_20 = &LCK_DW.sf_Delay_Trig_c5.duration;
  p_3_LCK_uint8_T_21 = &LCK_DW.sf_Delay_Trig_c5.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_22 = &LCK_DW.sf_Delay_Trig_jy.duration;
  p_3_LCK_uint8_T_23 = &LCK_DW.sf_Delay_Trig_jy.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_24 = &LCK_DW.sf_Delay_Trig_g1.duration;
  p_3_LCK_uint8_T_25 = &LCK_DW.sf_Delay_Trig_g1.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_26 = &LCK_DW.sf_Delay_Trig_h.duration;
  p_3_LCK_uint8_T_27 = &LCK_DW.sf_Delay_Trig_h.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_28 = &LCK_DW.sf_Delay_Trig_ol.duration;
  p_3_LCK_uint8_T_29 = &LCK_DW.sf_Delay_Trig_ol.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_30 = &LCK_DW.sf_Delay_Trig_jg.duration;
  p_3_LCK_uint8_T_31 = &LCK_DW.sf_Delay_Trig_jg.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_32 = &LCK_DW.sf_Delay_Trig_a.duration;
  p_3_LCK_uint8_T_33 = &LCK_DW.sf_Delay_Trig_a.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_34 = &LCK_DW.sf_Delay_Trig_g.duration;
  p_3_LCK_uint8_T_35 = &LCK_DW.sf_Delay_Trig_g.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_36 = &LCK_DW.sf_Delay_Trig_bq.duration;
  p_3_LCK_uint8_T_37 = &LCK_DW.sf_Delay_Trig_bq.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_38 = &LCK_DW.sf_Delay_Trig_b.duration;
  p_3_LCK_uint8_T_39 = &LCK_DW.sf_Delay_Trig_b.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_40 = &LCK_DW.sf_Delay_Trig_i.duration;
  p_3_LCK_uint8_T_41 = &LCK_DW.sf_Delay_Trig_i.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_42 = &LCK_DW.sf_Delay_Trig_c.duration;
  p_3_LCK_uint8_T_43 = &LCK_DW.sf_Delay_Trig_c.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_44 = &LCK_DW.sf_Delay_Trig_kt.duration;
  p_3_LCK_uint8_T_45 = &LCK_DW.sf_Delay_Trig_kt.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_46 = &LCK_DW.sf_Delay_Trig_o.duration;
  p_3_LCK_uint8_T_47 = &LCK_DW.sf_Delay_Trig_o.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_48 = &LCK_DW.sf_Delay_Trig_m.duration;
  p_3_LCK_uint8_T_49 = &LCK_DW.sf_Delay_Trig_m.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_50 = &LCK_DW.sf_Delay_Trig_f.duration;
  p_3_LCK_uint8_T_51 = &LCK_DW.sf_Delay_Trig_f.is_active_c1_LateralControl_fcn;
  p_3_LCK_real32_T_52 = &LCK_DW.sf_Delay_Trig_j.duration;
  p_3_LCK_uint8_T_53 = &LCK_DW.sf_Delay_Trig_j.is_active_c1_LateralControl_fcn;
  p_3_LCK_real_T_54 = &LCK_DW.sf_Delay_Trig_l.count;
  p_3_LCK_uint8_T_55 = &LCK_DW.sf_Delay_Trig_l.is_active_c19_LateralControl_fc;
  p_3_LCK_real_T_56 = &LCK_DW.sf_Delay_Trig_k.count;
  p_3_LCK_uint8_T_57 = &LCK_DW.sf_Delay_Trig_k.is_active_c19_LateralControl_fc;
  p_3_LCK_real_T_58 = &LCK_DW.sf_Sustain_wo_reset_h.i;
  p_3_LCK_uint8_T_59 =
    &LCK_DW.sf_Sustain_wo_reset_h.is_active_c12_sqdm0ogyh9qRUMkFA;
  p_3_LCK_real_T_60 = &LCK_DW.sf_Sustain_wo_reset_cw.i;
  p_3_LCK_uint8_T_61 =
    &LCK_DW.sf_Sustain_wo_reset_cw.is_active_c12_sqdm0ogyh9qRUMkFA;
  p_3_LCK_real_T_62 = &LCK_DW.sf_Sustain_wo_reset_cl.i;
  p_3_LCK_uint8_T_63 =
    &LCK_DW.sf_Sustain_wo_reset_cl.is_active_c12_sqdm0ogyh9qRUMkFA;
  p_3_LCK_real_T_64 = &LCK_DW.sf_Sustain_wo_reset_ce.i;
  p_3_LCK_uint8_T_65 =
    &LCK_DW.sf_Sustain_wo_reset_ce.is_active_c12_sBqLU0Pgy8bIAIArm;
  p_3_LCK_real_T_66 = &LCK_DW.sf_Sustain_wo_reset_p.i;
  p_3_LCK_uint8_T_67 =
    &LCK_DW.sf_Sustain_wo_reset_p.is_active_c12_sBqLU0Pgy8bIAIArm;
  p_3_LCK_real_T_68 = &LCK_DW.sf_Sustain_wo_reset_e.i;
  p_3_LCK_uint8_T_69 =
    &LCK_DW.sf_Sustain_wo_reset_e.is_active_c12_sqdm0ogyh9qRUMkFA;
  p_3_LCK_real_T_70 = &LCK_DW.sf_Sustain_wo_reset_c.i;
  p_3_LCK_uint8_T_71 =
    &LCK_DW.sf_Sustain_wo_reset_c.is_active_c12_sqdm0ogyh9qRUMkFA;
  p_3_LCK_real_T_72 = &LCK_DW.sf_Sustain_wo_reset_n.i;
  p_3_LCK_uint8_T_73 =
    &LCK_DW.sf_Sustain_wo_reset_n.is_active_c12_sqdm0ogyh9qRUMkFA;
  p_3_LCK_real_T_74 = &LCK_DW.sf_Sustain_wo_reset_o.i;
  p_3_LCK_uint8_T_75 =
    &LCK_DW.sf_Sustain_wo_reset_o.is_active_c12_sBqLU0Pgy8bIAIArm;
  p_3_LCK_real_T_76 = &LCK_DW.sf_Sustain_wo_reset.i;
  p_3_LCK_uint8_T_77 =
    &LCK_DW.sf_Sustain_wo_reset.is_active_c12_sBqLU0Pgy8bIAIArm;
  p_3_LCK_real32_T_78 = &LCK_DW.sf_Delay_Trig.duration;
  p_3_LCK_uint8_T_79 = &LCK_DW.sf_Delay_Trig.is_active_c1_LateralControl_fcn;
}

void LCK_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
