/*
 * fusionAlg_data.c
 *
 * Code generation for model "fusionAlg".
 *
 * Model version              : 1.124
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Mon Nov 30 14:31:24 2020
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "fusionAlg.h"
#include "fusionAlg_private.h"

/* Block parameters (default storage) */
P_fusionAlg_T fusionAlg_P = {
  /* Expression: 1129
   * Referenced by: '<S6>/timestamp'
   */
  1129.0,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S5>/Gain1'
   */
  0.0174532905F,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S5>/Constant'
   */
  1.0F,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S5>/Gain'
   */
  0.277778F,

  /* Computed Parameter: frameNum_Value
   * Referenced by: '<S6>/frameNum'
   */
  1U,

  /* Computed Parameter: count_Value
   * Referenced by: '<S6>/count'
   */
  40U,

  /* Computed Parameter: errType_Value
   * Referenced by: '<S6>/errType'
   */
  1U,

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S6>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value
   * Referenced by: '<S6>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_o
   * Referenced by: '<S8>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_m
   * Referenced by: '<S8>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S9>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_i
   * Referenced by: '<S9>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_g
   * Referenced by: '<S20>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_f
   * Referenced by: '<S20>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_m
   * Referenced by: '<S31>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_fw
   * Referenced by: '<S31>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_a
   * Referenced by: '<S35>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_d
   * Referenced by: '<S35>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_c
   * Referenced by: '<S44>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_ir
   * Referenced by: '<S44>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_ew
   * Referenced by: '<S45>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_h
   * Referenced by: '<S45>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_f
   * Referenced by: '<S46>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_j
   * Referenced by: '<S46>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_n5
   * Referenced by: '<S47>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_a
   * Referenced by: '<S47>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_i
   * Referenced by: '<S48>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_b
   * Referenced by: '<S48>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_eh
   * Referenced by: '<S10>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_k
   * Referenced by: '<S10>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_d
   * Referenced by: '<S11>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_o
   * Referenced by: '<S11>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_no
   * Referenced by: '<S12>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_p
   * Referenced by: '<S12>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_ek
   * Referenced by: '<S13>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_bb
   * Referenced by: '<S13>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_p
   * Referenced by: '<S16>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_jd
   * Referenced by: '<S16>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_pl
   * Referenced by: '<S17>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_l
   * Referenced by: '<S17>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_fw
   * Referenced by: '<S18>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_an
   * Referenced by: '<S18>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_md
   * Referenced by: '<S19>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_ot
   * Referenced by: '<S19>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_il
   * Referenced by: '<S21>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_hq
   * Referenced by: '<S21>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_gr
   * Referenced by: '<S22>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_ji
   * Referenced by: '<S22>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_py
   * Referenced by: '<S23>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_lo
   * Referenced by: '<S23>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_g0
   * Referenced by: '<S24>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_fv
   * Referenced by: '<S24>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_od
   * Referenced by: '<S14>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_px
   * Referenced by: '<S14>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_k
   * Referenced by: '<S15>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_bf
   * Referenced by: '<S15>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_j
   * Referenced by: '<S25>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_fn
   * Referenced by: '<S25>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_az
   * Referenced by: '<S26>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_o3
   * Referenced by: '<S26>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_cg
   * Referenced by: '<S34>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_jn
   * Referenced by: '<S34>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_n4
   * Referenced by: '<S37>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_c
   * Referenced by: '<S37>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_h
   * Referenced by: '<S38>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_pl
   * Referenced by: '<S38>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_fp
   * Referenced by: '<S39>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_ds
   * Referenced by: '<S39>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_i1
   * Referenced by: '<S40>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_m5
   * Referenced by: '<S40>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_jt
   * Referenced by: '<S41>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_n
   * Referenced by: '<S41>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S42>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_oi
   * Referenced by: '<S42>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_ab
   * Referenced by: '<S43>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_ow
   * Referenced by: '<S43>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_b
   * Referenced by: '<S27>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_l4
   * Referenced by: '<S27>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_du
   * Referenced by: '<S28>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_bc
   * Referenced by: '<S28>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_o1
   * Referenced by: '<S29>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_dj
   * Referenced by: '<S29>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_mq
   * Referenced by: '<S30>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_ou
   * Referenced by: '<S30>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_am
   * Referenced by: '<S32>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_nd
   * Referenced by: '<S32>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_lo
   * Referenced by: '<S33>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_oc
   * Referenced by: '<S33>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_e1
   * Referenced by: '<S36>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_e
   * Referenced by: '<S36>/Constant1'
   */
  0U,

  /* Computed Parameter: RunFlag_Value
   * Referenced by: '<S4>/RunFlag'
   */
  1U
};
