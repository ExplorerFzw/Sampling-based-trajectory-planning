/*
 * Code generation for system model 'LCK'
 * For more details, see corresponding source file LCK.c
 *
 */

#ifndef RTW_HEADER_LCK_h_
#define RTW_HEADER_LCK_h_
#include <math.h>
#include <string.h>
#ifndef LCK_COMMON_INCLUDES_
# define LCK_COMMON_INCLUDES_
#include <stdio.h>
#include <rti_assert.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* LCK_COMMON_INCLUDES_ */

#include "LCK_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for system '<S41>/Trigger Hold' */
#ifndef LCK_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T count;                      /* '<S41>/Trigger Hold' */
  boolean_T Out;                       /* '<S41>/Trigger Hold' */
} B_TriggerHold_LCK_T;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S51>/Delay_Trig' */
#ifndef LCK_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T Delay_Trig;                 /* '<S51>/Delay_Trig' */
} B_Delay_Trig_LCK_T;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for system '<S51>/Delay_Trig' */
#ifndef LCK_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T duration;                   /* '<S51>/Delay_Trig' */
  uint8_T is_active_c1_LateralControl_fcn;/* '<S51>/Delay_Trig' */
  uint8_T is_c1_LateralControl_fcns_lib;/* '<S51>/Delay_Trig' */
} DW_Delay_Trig_LCK_T;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S119>/Sustain_wo_reset' */
#ifndef LCK_MDLREF_HIDE_CHILD_

typedef struct {
  real_T sustain_value;                /* '<S119>/Sustain_wo_reset' */
} B_Sustain_wo_reset_LCK_T;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for system '<S119>/Sustain_wo_reset' */
#ifndef LCK_MDLREF_HIDE_CHILD_

typedef struct {
  real_T i;                            /* '<S119>/Sustain_wo_reset' */
  uint8_T is_active_c12_sBqLU0Pgy8bIAIArm;/* '<S119>/Sustain_wo_reset' */
  uint8_T is_c12_sBqLU0Pgy8bIAIArmVW3x7F_;/* '<S119>/Sustain_wo_reset' */
} DW_Sustain_wo_reset_LCK_T;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S120>/Sustain_wo_reset' */
#ifndef LCK_MDLREF_HIDE_CHILD_

typedef struct {
  real_T sustain_value;                /* '<S120>/Sustain_wo_reset' */
} B_Sustain_wo_reset_LCK_f_T;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for system '<S120>/Sustain_wo_reset' */
#ifndef LCK_MDLREF_HIDE_CHILD_

typedef struct {
  real_T i;                            /* '<S120>/Sustain_wo_reset' */
  uint8_T is_active_c12_sBqLU0Pgy8bIAIArm;/* '<S120>/Sustain_wo_reset' */
  uint8_T is_c12_sBqLU0Pgy8bIAIArmVW3x7F_;/* '<S120>/Sustain_wo_reset' */
} DW_Sustain_wo_reset_LCK_e_T;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S121>/Sustain_wo_reset' */
#ifndef LCK_MDLREF_HIDE_CHILD_

typedef struct {
  real_T sustain_value;                /* '<S121>/Sustain_wo_reset' */
} B_Sustain_wo_reset_LCK_p_T;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for system '<S121>/Sustain_wo_reset' */
#ifndef LCK_MDLREF_HIDE_CHILD_

typedef struct {
  real_T i;                            /* '<S121>/Sustain_wo_reset' */
  uint8_T is_active_c12_sqdm0ogyh9qRUMkFA;/* '<S121>/Sustain_wo_reset' */
  uint8_T is_c12_sqdm0ogyh9qRUMkFAfEQ2EB_;/* '<S121>/Sustain_wo_reset' */
} DW_Sustain_wo_reset_LCK_g_T;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S139>/Delay_Trig' */
#ifndef LCK_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T Delay_Trig;                 /* '<S139>/Delay_Trig' */
} B_Delay_Trig_LCK_f_T;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for system '<S139>/Delay_Trig' */
#ifndef LCK_MDLREF_HIDE_CHILD_

typedef struct {
  real_T count;                        /* '<S139>/Delay_Trig' */
  uint8_T is_active_c19_LateralControl_fc;/* '<S139>/Delay_Trig' */
  uint8_T is_c19_LateralControl_fcns_lib;/* '<S139>/Delay_Trig' */
} DW_Delay_Trig_LCK_o_T;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S218>/Delay_Trig' */
#ifndef LCK_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T Delay_Trig;                 /* '<S218>/Delay_Trig' */
} B_Delay_Trig_LCK_o_T;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for system '<S218>/Delay_Trig' */
#ifndef LCK_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T duration;                   /* '<S218>/Delay_Trig' */
  uint8_T is_active_c1_LateralControl_fcn;/* '<S218>/Delay_Trig' */
  uint8_T is_c1_LateralControl_fcns_lib;/* '<S218>/Delay_Trig' */
} DW_Delay_Trig_LCK_l_T;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S242>/signal_sustain' */
#ifndef LCK_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T sustain_value;              /* '<S242>/signal_sustain' */
} B_signal_sustain_LCK_T;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for system '<S242>/signal_sustain' */
#ifndef LCK_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T i;                          /* '<S242>/signal_sustain' */
  uint8_T is_active_c106_sMO8bLBWfTvOHfGk;/* '<S242>/signal_sustain' */
  uint8_T is_c106_sMO8bLBWfTvOHfGkBHxhSIH;/* '<S242>/signal_sustain' */
} DW_signal_sustain_LCK_T;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

/* Block signals for model 'LCK' */
#ifndef LCK_MDLREF_HIDE_CHILD_

typedef struct {
  real_T ref_poly[800];
  real_T reference[800];
  real_T trajs_new_origin[800];
  real_T delta_heading_rad[400];
  real_T dv0[400];
  real_T pd[400];
  real_T pdd[400];
  real_T ref_S[400];
  int16_T ii_data[400];
  int16_T ii_data_m[400];
  LatCtrl_LCK_LanSigInputs_t LanSigInputs;/* '<S1>/BusConversion_InsertedFor_LCK_Debug_Info_at_inport_0' */
  real_T Delay1[3200];                 /* '<S229>/Delay1' */
  real_T DataTypeConversion16;         /* '<S6>/Data Type Conversion16' */
  real_T Switch5;                      /* '<S166>/Switch5' */
  real_T Delay;                        /* '<S237>/Delay' */
  real_T Switch2;                      /* '<S232>/Switch2' */
  real_T Switch1;                      /* '<S232>/Switch1' */
  real_T Switch;                       /* '<S232>/Switch' */
  real_T Delay1_m;                     /* '<S237>/Delay1' */
  real_T Switch6;                      /* '<S233>/Switch6' */
  real_T Switch5_h;                    /* '<S233>/Switch5' */
  real_T Switch4;                      /* '<S233>/Switch4' */
  real_T Switch3;                      /* '<S233>/Switch3' */
  real_T Switch8;                      /* '<S234>/Switch8' */
  real_T Switch7;                      /* '<S234>/Switch7' */
  real_T Divide;                       /* '<S167>/Divide' */
  real_T Gain;                         /* '<S167>/Gain' */
  real_T Switch67;                     /* '<S159>/Switch67' */
  real_T UnitDelay6;                   /* '<S159>/Unit Delay6' */
  real_T UnitDelay11;                  /* '<S159>/Unit Delay11' */
  real_T UnitDelay7;                   /* '<S159>/Unit Delay7' */
  real_T Switch69;                     /* '<S159>/Switch69' */
  real_T Divide_m;                     /* '<S169>/Divide' */
  real_T Gain_p;                       /* '<S169>/Gain' */
  real_T Divide_l;                     /* '<S172>/Divide' */
  real_T Switch11;                     /* '<S169>/Switch11' */
  real_T Switch8_p;                    /* '<S169>/Switch8' */
  real_T Switch4_c;                    /* '<S169>/Switch4' */
  real_T Switch6_d;                    /* '<S160>/Switch6' */
  real_T Switch55;                     /* '<S113>/Switch55' */
  real_T Switch1_l;                    /* '<S113>/Switch1' */
  real_T Switch62;                     /* '<S168>/Switch62' */
  real_T Switch58;                     /* '<S151>/Switch58' */
  real_T Switch2_m;                    /* '<S6>/Switch2' */
  real_T Switch1_f;                    /* '<S6>/Switch1' */
  real_T DataTypeConversion17;         /* '<S6>/Data Type Conversion17' */
  real_T DataTypeConversion18;         /* '<S6>/Data Type Conversion18' */
  real_T Gain_f;                       /* '<S229>/Gain' */
  real_T DataTypeConversion1;          /* '<S229>/Data Type Conversion1' */
  real_T DataTypeConversion15;         /* '<S6>/Data Type Conversion15' */
  real_T Subtract2;                    /* '<S229>/Subtract2' */
  real_T Subtract1;                    /* '<S229>/Subtract1' */
  real_T DataTypeConversion3;          /* '<S229>/Data Type Conversion3' */
  real_T Subtract3;                    /* '<S229>/Subtract3' */
  real_T Gain1;                        /* '<S6>/Gain1' */
  real_T LC_A0;                        /* '<S6>/Data Type Conversion3' */
  real_T TrigonometricFunction;        /* '<S6>/Trigonometric Function' */
  real_T Subtract1_m;                  /* '<S6>/Subtract1' */
  real_T Switch2_g;                    /* '<S7>/Switch2' */
  real_T Switch1_k;                    /* '<S7>/Switch1' */
  real_T search_latoff;                /* '<S229>/Path_Planning_Function ' */
  real_T search_theta;                 /* '<S229>/Path_Planning_Function ' */
  real_T search_kappa;                 /* '<S229>/Path_Planning_Function ' */
  real_T output_pre[3200];             /* '<S229>/Path_Planning_Function ' */
  real_T Sum;                          /* '<S224>/Sum' */
  real_T TJA_Lat_Req;                  /* '<S153>/Chart' */
  real_T LSS_SnvtySet;                 /* '<S115>/LSS_SnvtySet' */
  real32_T Sum2;                       /* '<S239>/Sum2' */
  real32_T Gain2;                      /* '<S239>/Gain2' */
  real32_T Switch14;                   /* '<S239>/Switch14' */
  real32_T Switch13;                   /* '<S239>/Switch13' */
  real32_T Delay5;                     /* '<S239>/Delay5' */
  real32_T Switch1_p;                  /* '<S239>/Switch1' */
  real32_T Gain3;                      /* '<S239>/Gain3' */
  real32_T Sum4;                       /* '<S239>/Sum4' */
  real32_T Delay1_l;                   /* '<S239>/Delay1' */
  real32_T Gain4;                      /* '<S239>/Gain4' */
  real32_T Sum5;                       /* '<S239>/Sum5' */
  real32_T Sum3;                       /* '<S239>/Sum3' */
  real32_T Gain_o;                     /* '<S239>/Gain' */
  real32_T Switch10;                   /* '<S239>/Switch10' */
  real32_T Switch9;                    /* '<S239>/Switch9' */
  real32_T Sum1;                       /* '<S239>/Sum1' */
  real32_T Gain1_m;                    /* '<S239>/Gain1' */
  real32_T Switch12;                   /* '<S239>/Switch12' */
  real32_T Switch11_p;                 /* '<S239>/Switch11' */
  real32_T Sum6;                       /* '<S239>/Sum6' */
  real32_T Gain5;                      /* '<S239>/Gain5' */
  real32_T Switch16;                   /* '<S239>/Switch16' */
  real32_T Switch15;                   /* '<S239>/Switch15' */
  real32_T UnitDelay;                  /* '<S235>/Unit Delay' */
  real32_T Sum2_k;                     /* '<S240>/Sum2' */
  real32_T Product1;                   /* '<S240>/Product1' */
  real32_T Sum_a;                      /* '<S235>/Sum' */
  real32_T Product;                    /* '<S235>/Product' */
  real32_T Sum1_h;                     /* '<S235>/Sum1' */
  real32_T Saturation;                 /* '<S235>/Saturation' */
  real32_T UnitDelay_k;                /* '<S236>/Unit Delay' */
  real32_T Sum2_a;                     /* '<S241>/Sum2' */
  real32_T Product1_p;                 /* '<S241>/Product1' */
  real32_T Sum_f;                      /* '<S236>/Sum' */
  real32_T Product_p;                  /* '<S236>/Product' */
  real32_T Sum1_d;                     /* '<S236>/Sum1' */
  real32_T Saturation_i;               /* '<S236>/Saturation' */
  real32_T Delay5_d;                   /* '<S238>/Delay5' */
  real32_T DataTypeConversion;         /* '<S234>/Data Type Conversion' */
  real32_T DataTypeConversion24;       /* '<S164>/Data Type Conversion24' */
  real32_T DataTypeConversion23;       /* '<S164>/Data Type Conversion23' */
  real32_T DataTypeConversion1_n;      /* '<S167>/Data Type Conversion1' */
  real32_T DataTypeConversion21;       /* '<S167>/Data Type Conversion21' */
  real32_T DataTypeConversion3_f;      /* '<S167>/Data Type Conversion3' */
  real32_T UnitDelay_e;                /* '<S141>/Unit Delay' */
  real32_T Sum2_j;                     /* '<S145>/Sum2' */
  real32_T Product1_g;                 /* '<S145>/Product1' */
  real32_T Sum_e;                      /* '<S141>/Sum' */
  real32_T Product_n;                  /* '<S141>/Product' */
  real32_T Sum1_hj;                    /* '<S141>/Sum1' */
  real32_T Saturation_j;               /* '<S141>/Saturation' */
  real32_T Abs;                        /* '<S114>/Abs' */
  real32_T UnitDelay2;                 /* '<S114>/Unit Delay2' */
  real32_T Subtract;                   /* '<S114>/Subtract' */
  real32_T Abs2;                       /* '<S114>/Abs2' */
  real32_T UnitDelay1;                 /* '<S114>/Unit Delay1' */
  real32_T Switch14_h;                 /* '<S114>/Switch14' */
  real32_T Switch13_e;                 /* '<S114>/Switch13' */
  real32_T f_hands_on_wheel;           /* '<S114>/Gain' */
  real32_T DataTypeConversion11;       /* '<S167>/Data Type Conversion11' */
  real32_T Abs_m;                      /* '<S167>/Abs' */
  real32_T DataTypeConversion4;        /* '<S167>/Data Type Conversion4' */
  real32_T Product_h;                  /* '<S165>/Product' */
  real32_T DataTypeConversion95;       /* '<S165>/Data Type Conversion95' */
  real32_T Switch77;                   /* '<S167>/Switch77' */
  real32_T Switch3_b;                  /* '<S167>/Switch3' */
  real32_T DataTypeConversion25;       /* '<S170>/Data Type Conversion25' */
  real32_T DataTypeConversion31;       /* '<S169>/Data Type Conversion31' */
  real32_T DataTypeConversion16_k;     /* '<S170>/Data Type Conversion16' */
  real32_T MinMax3;                    /* '<S159>/MinMax3' */
  real32_T DataTypeConversion89;       /* '<S159>/Data Type Conversion89' */
  real32_T DataTypeConversion88;       /* '<S159>/Data Type Conversion88' */
  real32_T k_LCK_SPconfLow_DlyTm_Rdy2Idl_T;/* '<S170>/k_LCK_SPconfLow_DlyTm_Rdy2Idl_Table' */
  real32_T Switch68;                   /* '<S170>/Switch68' */
  real32_T Switch63;                   /* '<S170>/Switch63' */
  real32_T DataTypeConversion26;       /* '<S170>/Data Type Conversion26' */
  real32_T k_LCK_SPconfMed_DlyTm_Rdy2Idl_T;/* '<S170>/k_LCK_SPconfMed_DlyTm_Rdy2Idl_Table' */
  real32_T Switch70;                   /* '<S170>/Switch70' */
  real32_T Switch64;                   /* '<S170>/Switch64' */
  real32_T DataTypeConversion15_i;     /* '<S169>/Data Type Conversion15' */
  real32_T DataTypeConversion6;        /* '<S169>/Data Type Conversion6' */
  real32_T DataTypeConversion22;       /* '<S169>/Data Type Conversion22' */
  real32_T DataTypeConversion7;        /* '<S169>/Data Type Conversion7' */
  real32_T Abs17;                      /* '<S172>/Abs17' */
  real32_T Gain17;                     /* '<S172>/Gain17' */
  real32_T Abs18;                      /* '<S172>/Abs18' */
  real32_T MinMax;                     /* '<S172>/MinMax' */
  real32_T k_LCK_YawRateThr_Act2Rdy;   /* '<S172>/k_LCK_YawRateThr_Act2Rdy' */
  real32_T DataTypeConversion86;       /* '<S172>/Data Type Conversion86' */
  real32_T DataTypeConversion1_k;      /* '<S113>/Data Type Conversion1' */
  real32_T DataTypeConversion12;       /* '<S113>/Data Type Conversion12' */
  real32_T Abs2_c;                     /* '<S168>/Abs2' */
  real32_T Add2;                       /* '<S168>/Add2' */
  real32_T Gain18;                     /* '<S168>/Gain18' */
  real32_T Saturation_c;               /* '<S168>/Saturation' */
  real32_T Add3;                       /* '<S168>/Add3' */
  real32_T Switch65;                   /* '<S168>/Switch65' */
  real32_T MinMax1;                    /* '<S168>/MinMax1' */
  real32_T MinMax2;                    /* '<S168>/MinMax2' */
  real32_T Switch66;                   /* '<S168>/Switch66' */
  real32_T DataTypeConversion32;       /* '<S168>/Data Type Conversion32' */
  real32_T Abs5;                       /* '<S168>/Abs5' */
  real32_T DataTypeConversion5;        /* '<S168>/Data Type Conversion5' */
  real32_T Delay1_h;                   /* '<S168>/Delay1' */
  real32_T Delay_n;                    /* '<S168>/Delay' */
  real32_T DataTypeConversion84;       /* '<S168>/Data Type Conversion84' */
  real32_T DataTypeConversion34;       /* '<S151>/Data Type Conversion34' */
  real32_T Delay_c;                    /* '<S171>/Delay' */
  real32_T Delay2;                     /* '<S171>/Delay2' */
  real32_T Delay1_k;                   /* '<S171>/Delay1' */
  real32_T Abs_k;                      /* '<S171>/Abs' */
  real32_T Abs1;                       /* '<S171>/Abs1' */
  real32_T Delay2_h;                   /* '<S6>/Delay2' */
  real32_T Abs_i;                      /* '<S229>/Abs' */
  real32_T Switch5_l;                  /* '<S229>/Switch5' */
  real32_T Product_ne;                 /* '<S229>/Product' */
  real32_T Saturation1;                /* '<S229>/Saturation1' */
  real32_T LC_A2;                      /* '<S6>/Data Type Conversion2' */
  real32_T UnitDelay_b;                /* '<S25>/Unit Delay' */
  real32_T Product6;                   /* '<S22>/Product6' */
  real32_T k_LCK_RngThr_FalRec_o;      /* '<S22>/k_LCK_RngThr_FalRec' */
  real32_T Sum3_c;                     /* '<S22>/Sum3' */
  real32_T Divide1;                    /* '<S22>/Divide1' */
  real32_T Switch2_n;                  /* '<S10>/Switch2' */
  real32_T Sum2_h;                     /* '<S29>/Sum2' */
  real32_T Product1_l;                 /* '<S29>/Product1' */
  real32_T Sum_k;                      /* '<S25>/Sum' */
  real32_T Product_g;                  /* '<S25>/Product' */
  real32_T Sum1_l;                     /* '<S25>/Sum1' */
  real32_T Saturation_a;               /* '<S25>/Saturation' */
  real32_T Switch2_e;                  /* '<S13>/Switch2' */
  real32_T C_KPH2MPS_k;                /* '<S16>/C_KPH2MPS' */
  real32_T UnitDelay_g;                /* '<S57>/Unit Delay' */
  real32_T Sum2_d;                     /* '<S58>/Sum2' */
  real32_T Product1_b;                 /* '<S58>/Product1' */
  real32_T Gain_i;                     /* '<S17>/Gain' */
  real32_T Abs_mw;                     /* '<S17>/Abs' */
  real32_T Switch_c;                   /* '<S17>/Switch' */
  real32_T Abs3;                       /* '<S17>/Abs3' */
  real32_T MinMax2_o;                  /* '<S17>/MinMax2' */
  real32_T Sum_fx;                     /* '<S57>/Sum' */
  real32_T Product_k;                  /* '<S57>/Product' */
  real32_T Sum1_p;                     /* '<S57>/Sum1' */
  real32_T Saturation_k;               /* '<S57>/Saturation' */
  real32_T Lookup_Table;               /* '<S16>/Lookup_Table' */
  real32_T Product3;                   /* '<S16>/Product3' */
  real32_T Product6_n;                 /* '<S16>/Product6' */
  real32_T UnitDelay_e2;               /* '<S23>/Unit Delay' */
  real32_T Switch10_p;                 /* '<S10>/Switch10' */
  real32_T Sum2_h2;                    /* '<S27>/Sum2' */
  real32_T Product1_d;                 /* '<S27>/Product1' */
  real32_T Sum_d;                      /* '<S23>/Sum' */
  real32_T Product_go;                 /* '<S23>/Product' */
  real32_T Sum1_j;                     /* '<S23>/Sum1' */
  real32_T Saturation_l;               /* '<S23>/Saturation' */
  real32_T LC_A0_e;                    /* '<S6>/Data Type Conversion' */
  real32_T Switch10_e;                 /* '<S13>/Switch10' */
  real32_T k_LCK_A0ShiftFac_Dy_LftCurv_f;/* '<S16>/k_LCK_A0ShiftFac_Dy_LftCurv' */
  real32_T k_LCK_A0ShiftFac_Dy_RgtCurv_n;/* '<S16>/k_LCK_A0ShiftFac_Dy_RgtCurv' */
  real32_T Switch4_e;                  /* '<S16>/Switch4' */
  real32_T Switch2_c;                  /* '<S16>/Switch2' */
  real32_T k_LCK_A0Shift_LftCurv_a;    /* '<S16>/k_LCK_A0Shift_LftCurv' */
  real32_T k_LCK_A0Shift_RgtCurv_d;    /* '<S16>/k_LCK_A0Shift_RgtCurv' */
  real32_T Switch1_kd;                 /* '<S16>/Switch1' */
  real32_T Switch_f;                   /* '<S16>/Switch' */
  real32_T k_LCK_A0ShiftFac_Vspd_k;    /* '<S16>/k_LCK_A0ShiftFac_Vspd' */
  real32_T Product7;                   /* '<S16>/Product7' */
  real32_T Add;                        /* '<S16>/Add' */
  real32_T k_LCK_A0Fac_ActSta_o;       /* '<S47>/k_LCK_A0Fac_ActSta' */
  real32_T Switch4_j;                  /* '<S47>/Switch4' */
  real32_T Abs_d;                      /* '<S48>/Abs' */
  real32_T DataTypeConversion4_i;      /* '<S48>/Data Type Conversion4' */
  real32_T k_LCK_A0Fac_DrvStm_c;       /* '<S48>/k_LCK_A0Fac_DrvStm' */
  real32_T Switch11_i;                 /* '<S48>/Switch11' */
  real32_T A0_Wekng_Fac;               /* '<S46>/MinMax' */
  real32_T Product_m;                  /* '<S16>/Product' */
  real32_T UnitDelay_f;                /* '<S24>/Unit Delay' */
  real32_T Switch1_g;                  /* '<S10>/Switch1' */
  real32_T Sum2_dv;                    /* '<S28>/Sum2' */
  real32_T Product1_e;                 /* '<S28>/Product1' */
  real32_T Sum_p;                      /* '<S24>/Sum' */
  real32_T Product_c;                  /* '<S24>/Product' */
  real32_T Sum1_c;                     /* '<S24>/Sum1' */
  real32_T Saturation_e;               /* '<S24>/Saturation' */
  real32_T LC_A1;                      /* '<S6>/Data Type Conversion1' */
  real32_T Switch1_fw;                 /* '<S13>/Switch1' */
  real32_T Product4;                   /* '<S16>/Product4' */
  real32_T UnitDelay_o;                /* '<S26>/Unit Delay' */
  real32_T Switch3_d;                  /* '<S10>/Switch3' */
  real32_T Sum2_b;                     /* '<S30>/Sum2' */
  real32_T Product1_m;                 /* '<S30>/Product1' */
  real32_T Sum_h;                      /* '<S26>/Sum' */
  real32_T Product_e;                  /* '<S26>/Product' */
  real32_T Sum1_d2;                    /* '<S26>/Sum1' */
  real32_T Saturation_as;              /* '<S26>/Saturation' */
  real32_T Product5;                   /* '<S16>/Product5' */
  real32_T Sum1_n;                     /* '<S16>/Sum1' */
  real32_T Relay1;                     /* '<S73>/Relay1' */
  real32_T Switch15_l;                 /* '<S73>/Switch15' */
  real32_T k_LCK_Lat_PFac_Vspd_o;      /* '<S77>/k_LCK_Lat_PFac_Vspd' */
  real32_T k_LCK_Lat_PFac_Rad_e;       /* '<S78>/k_LCK_Lat_PFac_Rad' */
  real32_T Abs4;                       /* '<S79>/Abs4' */
  real32_T k_LCK_Lat_PFac_SS_Str_k;    /* '<S79>/k_LCK_Lat_PFac_SS_Str' */
  real32_T k_LCK_Lat_PFac_SS_Cur_l;    /* '<S79>/k_LCK_Lat_PFac_SS_Cur' */
  real32_T Switch19;                   /* '<S79>/Switch19' */
  real32_T Gain_fa;                    /* '<S85>/Gain' */
  real32_T Abs_e;                      /* '<S76>/Abs' */
  real32_T k_LCK_Lat_PFac_Dy_Str_n;    /* '<S76>/k_LCK_Lat_PFac_Dy_Str' */
  real32_T k_LCK_Lat_PFac_Dy_InnLftCur_b;/* '<S76>/k_LCK_Lat_PFac_Dy_InnLftCur' */
  real32_T Relay;                      /* '<S61>/Relay' */
  real32_T k_LCK_Lat_PFac_Dy_OutLftCur_g;/* '<S76>/k_LCK_Lat_PFac_Dy_OutLftCur' */
  real32_T Switch10_l;                 /* '<S76>/Switch10' */
  real32_T k_LCK_Lat_PFac_Dy_InnRgtCur_i;/* '<S76>/k_LCK_Lat_PFac_Dy_InnRgtCur' */
  real32_T k_LCK_Lat_PFac_Dy_OutRgtCur_g;/* '<S76>/k_LCK_Lat_PFac_Dy_OutRgtCur' */
  real32_T Switch13_n;                 /* '<S76>/Switch13' */
  real32_T Switch12_o;                 /* '<S76>/Switch12' */
  real32_T Switch3_e;                  /* '<S76>/Switch3' */
  real32_T Product_o;                  /* '<S85>/Product' */
  real32_T UnitDelay_eo;               /* '<S83>/Unit Delay' */
  real32_T Sum_do;                     /* '<S83>/Sum' */
  real32_T Gain1_h;                    /* '<S83>/Gain1' */
  real32_T Product5_e;                 /* '<S83>/Product5' */
  real32_T Switch19_j;                 /* '<S83>/Switch19' */
  real32_T Gain2_a;                    /* '<S83>/Gain2' */
  real32_T Gain_b;                     /* '<S83>/Gain' */
  real32_T Product3_l;                 /* '<S83>/Product3' */
  real32_T Switch20;                   /* '<S83>/Switch20' */
  real32_T Sum1_o;                     /* '<S83>/Sum1' */
  real32_T Gain4_o;                    /* '<S71>/Gain4' */
  real32_T Product6_e;                 /* '<S71>/Product6' */
  real32_T UnitDelay_k0;               /* '<S82>/Unit Delay' */
  real32_T Gain2_c;                    /* '<S82>/Gain2' */
  real32_T Gain_d;                     /* '<S82>/Gain' */
  real32_T Product3_f;                 /* '<S82>/Product3' */
  real32_T Gain1_k;                    /* '<S82>/Gain1' */
  real32_T Product5_j;                 /* '<S82>/Product5' */
  real32_T Product6_g;                 /* '<S84>/Product6' */
  real32_T Gain_du;                    /* '<S84>/Gain' */
  real32_T Relay_b;                    /* '<S73>/Relay' */
  real32_T Switch25;                   /* '<S73>/Switch25' */
  real32_T Abs_j;                      /* '<S75>/Abs' */
  real32_T k_LCK_Lat_PFac_Dy_Str_f;    /* '<S75>/k_LCK_Lat_PFac_Dy_Str' */
  real32_T k_LCK_Lat_PFac_Dy_InnLftCur_e;/* '<S75>/k_LCK_Lat_PFac_Dy_InnLftCur' */
  real32_T Relay1_n;                   /* '<S61>/Relay1' */
  real32_T k_LCK_Lat_PFac_Dy_OutLftCur_o;/* '<S75>/k_LCK_Lat_PFac_Dy_OutLftCur' */
  real32_T Switch10_pb;                /* '<S75>/Switch10' */
  real32_T k_LCK_Lat_PFac_Dy_InnRgtCur_c;/* '<S75>/k_LCK_Lat_PFac_Dy_InnRgtCur' */
  real32_T k_LCK_Lat_PFac_Dy_OutRgtCur_a;/* '<S75>/k_LCK_Lat_PFac_Dy_OutRgtCur' */
  real32_T Switch13_i;                 /* '<S75>/Switch13' */
  real32_T Switch12_p;                 /* '<S75>/Switch12' */
  real32_T Switch3_g;                  /* '<S75>/Switch3' */
  real32_T Product_ge;                 /* '<S84>/Product' */
  real32_T Sum_kt;                     /* '<S82>/Sum' */
  real32_T Switch19_i;                 /* '<S82>/Switch19' */
  real32_T Switch20_d;                 /* '<S82>/Switch20' */
  real32_T Sum1_dz;                    /* '<S82>/Sum1' */
  real32_T Gain1_i;                    /* '<S71>/Gain1' */
  real32_T Product_g4;                 /* '<S71>/Product' */
  real32_T Add2_i;                     /* '<S71>/Add2' */
  real32_T Gain_n;                     /* '<S71>/Gain' */
  real32_T Switch_n;                   /* '<S87>/Switch' */
  real32_T Switch2_j;                  /* '<S87>/Switch2' */
  real32_T Abs_h;                      /* '<S74>/Abs' */
  real32_T k_LCK_Lat_ILmtFac_Dy_StraLan_c;/* '<S74>/k_LCK_Lat_ILmtFac_Dy_StraLan' */
  real32_T k_LCK_Lat_ILmtFac_Dy_CurvLan_p;/* '<S74>/k_LCK_Lat_ILmtFac_Dy_CurvLan' */
  real32_T Switch4_a;                  /* '<S74>/Switch4' */
  real32_T k_LCK_Lat_ILmtFac_Vspd_StraLa_h;/* '<S74>/k_LCK_Lat_ILmtFac_Vspd_StraLan' */
  real32_T k_LCK_Lat_ILmtFac_Vspd_CurvLa_i;/* '<S74>/k_LCK_Lat_ILmtFac_Vspd_CurvLan' */
  real32_T Switch5_lb;                 /* '<S74>/Switch5' */
  real32_T k_LCK_Lat_ILmtFac_Rad_m;    /* '<S74>/k_LCK_Lat_ILmtFac_Rad' */
  real32_T Add_p;                      /* '<S74>/Add' */
  real32_T Divide_g;                   /* '<S74>/Divide' */
  real32_T Product7_i;                 /* '<S74>/Product7' */
  real32_T Product2;                   /* '<S74>/Product2' */
  real32_T Switch2_mj;                 /* '<S71>/Switch2' */
  real32_T UnitDelay1_h;               /* '<S71>/Unit Delay1' */
  real32_T k_LCK_Lat_IFac_Vspd_c;      /* '<S77>/k_LCK_Lat_IFac_Vspd' */
  real32_T k_LCK_Lat_IFac_Rad_d;       /* '<S78>/k_LCK_Lat_IFac_Rad' */
  real32_T Product_b;                  /* '<S80>/Product' */
  real32_T Gain5_m;                    /* '<S71>/Gain5' */
  real32_T Product3_n;                 /* '<S71>/Product3' */
  real32_T Add3_n;                     /* '<S71>/Add3' */
  real32_T Switch1_e;                  /* '<S71>/Switch1' */
  real32_T Gain8;                      /* '<S71>/Gain8' */
  real32_T Switch_fi;                  /* '<S89>/Switch' */
  real32_T Switch2_l;                  /* '<S89>/Switch2' */
  real32_T Product1_h;                 /* '<S74>/Product1' */
  real32_T Switch3_ez;                 /* '<S71>/Switch3' */
  real32_T UnitDelay_et;               /* '<S71>/Unit Delay' */
  real32_T Product1_hl;                /* '<S71>/Product1' */
  real32_T Add1;                       /* '<S71>/Add1' */
  real32_T Switch4_k;                  /* '<S71>/Switch4' */
  real32_T Gain2_an;                   /* '<S71>/Gain2' */
  real32_T Switch_k;                   /* '<S88>/Switch' */
  real32_T Switch2_k;                  /* '<S88>/Switch2' */
  real32_T Add4;                       /* '<S71>/Add4' */
  real32_T k_LCK_HAFac_ActSta_f;       /* '<S47>/k_LCK_HAFac_ActSta' */
  real32_T Switch3_f;                  /* '<S47>/Switch3' */
  real32_T k_LCK_HAFac_DrvStm_n;       /* '<S48>/k_LCK_HAFac_DrvStm' */
  real32_T Switch1_ku;                 /* '<S48>/Switch1' */
  real32_T HA_Wekng_Fac;               /* '<S46>/MinMax1' */
  real32_T Product1_j;                 /* '<S16>/Product1' */
  real32_T TrigonometricFunction_b;    /* '<S16>/Trigonometric Function' */
  real32_T TrigonometricFunction1;     /* '<S16>/Trigonometric Function1' */
  real32_T Product10;                  /* '<S16>/Product10' */
  real32_T UnitDelay_ke;               /* '<S81>/Unit Delay' */
  real32_T Gain2_e;                    /* '<S81>/Gain2' */
  real32_T Gain_c;                     /* '<S81>/Gain' */
  real32_T Product3_b;                 /* '<S81>/Product3' */
  real32_T Gain1_d;                    /* '<S81>/Gain1' */
  real32_T Product5_d;                 /* '<S81>/Product5' */
  real32_T Relay2;                     /* '<S73>/Relay2' */
  real32_T Switch1_p4;                 /* '<S73>/Switch1' */
  real32_T k_LCK_Lat_DFac_Vspd_p;      /* '<S77>/k_LCK_Lat_DFac_Vspd' */
  real32_T k_LCK_Lat_DFac_Rad_m;       /* '<S78>/k_LCK_Lat_DFac_Rad' */
  real32_T k_LCK_Lat_DFac_SS_Str_l;    /* '<S79>/k_LCK_Lat_DFac_SS_Str' */
  real32_T k_LCK_Lat_DFac_SS_Cur_i;    /* '<S79>/k_LCK_Lat_DFac_SS_Cur' */
  real32_T Switch17;                   /* '<S79>/Switch17' */
  real32_T Product_k1;                 /* '<S72>/Product' */
  real32_T Sum_ab;                     /* '<S81>/Sum' */
  real32_T Switch19_a;                 /* '<S81>/Switch19' */
  real32_T Switch20_h;                 /* '<S81>/Switch20' */
  real32_T Sum1_ob;                    /* '<S81>/Sum1' */
  real32_T Gain3_o;                    /* '<S71>/Gain3' */
  real32_T Product2_c;                 /* '<S71>/Product2' */
  real32_T Add_j;                      /* '<S71>/Add' */
  real32_T UnitDelay_m;                /* '<S86>/Unit Delay' */
  real32_T Sum_l;                      /* '<S86>/Sum' */
  real32_T Sum2_f;                     /* '<S90>/Sum2' */
  real32_T Product1_lb;                /* '<S90>/Product1' */
  real32_T Product_ov;                 /* '<S86>/Product' */
  real32_T Sum1_lc;                    /* '<S86>/Sum1' */
  real32_T Saturation_d;               /* '<S86>/Saturation' */
  real32_T Saturation_g;               /* '<S71>/Saturation' */
  real32_T UnitDelay_i;                /* '<S32>/Unit Delay' */
  real32_T Sum2_fa;                    /* '<S36>/Sum2' */
  real32_T Product1_k;                 /* '<S36>/Product1' */
  real32_T Gain2_g;                    /* '<S17>/Gain2' */
  real32_T C_KPH2MPS_i;                /* '<S17>/C_KPH2MPS' */
  real32_T Lookup_Table_k;             /* '<S17>/Lookup_Table' */
  real32_T Product3_c;                 /* '<S17>/Product3' */
  real32_T Product1_kz;                /* '<S17>/Product1' */
  real32_T Sum_ex;                     /* '<S17>/Sum' */
  real32_T Abs1_b;                     /* '<S17>/Abs1' */
  real32_T Switch1_b;                  /* '<S17>/Switch1' */
  real32_T Switch8_o;                  /* '<S31>/Switch8' */
  real32_T Abs1_k;                     /* '<S31>/Abs1' */
  real32_T k_LCK_FfwTorq_Cvat_k;       /* '<S31>/k_LCK_FfwTorq_Cvat' */
  real32_T k_LCK_FfwFac_CvatRate_Lft_k;/* '<S31>/k_LCK_FfwFac_CvatRate_Lft' */
  real32_T k_LCK_FfwFac_CvatRate_Rgt_m;/* '<S31>/k_LCK_FfwFac_CvatRate_Rgt' */
  real32_T Switch1_h;                  /* '<S31>/Switch1' */
  real32_T k_LCK_FfwFac_Rad_Lft_f;     /* '<S31>/k_LCK_FfwFac_Rad_Lft' */
  real32_T k_LCK_FfwFac_Rad_Rgt_p;     /* '<S31>/k_LCK_FfwFac_Rad_Rgt' */
  real32_T Switch6_k;                  /* '<S31>/Switch6' */
  real32_T k_LCK_FfwFac_Vspd_l;        /* '<S31>/k_LCK_FfwFac_Vspd' */
  real32_T Gain_j;                     /* '<S31>/Gain' */
  real32_T Sign;                       /* '<S31>/Sign' */
  real32_T Product2_p;                 /* '<S31>/Product2' */
  real32_T Abs_dm;                     /* '<S31>/Abs' */
  real32_T k_LCK_FfwFac_Dy_e;          /* '<S31>/k_LCK_FfwFac_Dy' */
  real32_T k_LCK_FfwDeltaFac_Rad_Lft_b;/* '<S31>/k_LCK_FfwDeltaFac_Rad_Lft' */
  real32_T k_LCK_FfwDeltaFac_Rad_Rgt_c;/* '<S31>/k_LCK_FfwDeltaFac_Rad_Rgt' */
  real32_T Switch7_o;                  /* '<S31>/Switch7' */
  real32_T k_LCK_FfwDeltaFac_Vspd_f;   /* '<S31>/k_LCK_FfwDeltaFac_Vspd' */
  real32_T Gain1_e;                    /* '<S31>/Gain1' */
  real32_T Sign1;                      /* '<S31>/Sign1' */
  real32_T Product3_m;                 /* '<S31>/Product3' */
  real32_T Add_m;                      /* '<S31>/Add' */
  real32_T Sum_hj;                     /* '<S32>/Sum' */
  real32_T Product_nx;                 /* '<S32>/Product' */
  real32_T Sum1_lv;                    /* '<S32>/Sum1' */
  real32_T Saturation_d5;              /* '<S32>/Saturation' */
  real32_T UnitDelay_ek;               /* '<S105>/Unit Delay' */
  real32_T Sum2_i;                     /* '<S108>/Sum2' */
  real32_T Product1_k2;                /* '<S108>/Product1' */
  real32_T C_RAD2DEG_f;                /* '<S16>/C_RAD2DEG' */
  real32_T UnitDelay_h;                /* '<S103>/Unit Delay' */
  real32_T Gain2_h;                    /* '<S103>/Gain2' */
  real32_T Gain_k;                     /* '<S103>/Gain' */
  real32_T Product3_i;                 /* '<S103>/Product3' */
  real32_T Gain1_f;                    /* '<S103>/Gain1' */
  real32_T Product5_ei;                /* '<S103>/Product5' */
  real32_T Relay_k;                    /* '<S94>/Relay' */
  real32_T Switch25_n;                 /* '<S94>/Switch25' */
  real32_T Abs2_m;                     /* '<S95>/Abs2' */
  real32_T k_LCK_PFac_Ha_StrCen;       /* '<S95>/k_LCK_PFac_Ha_StrCen' */
  real32_T Abs_o;                      /* '<S59>/Abs' */
  real32_T Switch5_j;                  /* '<S59>/Switch5' */
  real32_T Switch2_g0;                 /* '<S59>/Switch2' */
  real32_T k_LCK_PFac_HaStrSid_e;      /* '<S95>/k_LCK_PFac_HaStrSid' */
  real32_T Switch1_i;                  /* '<S95>/Switch1' */
  real32_T k_LCK_PFac_HaCurCen_a;      /* '<S95>/k_LCK_PFac_HaCurCen' */
  real32_T k_LCK_PFac_HaCurSid_f;      /* '<S95>/k_LCK_PFac_HaCurSid' */
  real32_T Switch3_j;                  /* '<S95>/Switch3' */
  real32_T Switch9_h;                  /* '<S95>/Switch9' */
  real32_T k_LCK_HARFac_ActSta_m;      /* '<S47>/k_LCK_HARFac_ActSta' */
  real32_T Switch5_o;                  /* '<S47>/Switch5' */
  real32_T k_LCK_HARFac_DrvStm_j;      /* '<S48>/k_LCK_HARFac_DrvStm' */
  real32_T Switch2_nn;                 /* '<S48>/Switch2' */
  real32_T HAR_Wekng_Fac;              /* '<S46>/MinMax2' */
  real32_T UnitDelay_ez;               /* '<S44>/Unit Delay' */
  real32_T Sum2_fn;                    /* '<S45>/Sum2' */
  real32_T Product1_ee;                /* '<S45>/Product1' */
  real32_T Sum_hs;                     /* '<S44>/Sum' */
  real32_T Product_n4;                 /* '<S44>/Product' */
  real32_T Sum1_oq;                    /* '<S44>/Sum1' */
  real32_T Saturation_je;              /* '<S44>/Saturation' */
  real32_T Product1_n;                 /* '<S43>/Product1' */
  real32_T Sign_m;                     /* '<S43>/Sign' */
  real32_T Gain1_b;                    /* '<S43>/Gain1' */
  real32_T k_LCK_YawRate_Offset_LftCurv_i;/* '<S43>/k_LCK_YawRate_Offset_LftCurv' */
  real32_T k_LCK_YawRate_Offset_RgtCurv_c;/* '<S43>/k_LCK_YawRate_Offset_RgtCurv' */
  real32_T Switch1_hq;                 /* '<S43>/Switch1' */
  real32_T Switch18;                   /* '<S43>/Switch18' */
  real32_T k_LCK_YR_OffstFac_Dy_LftCurv_d;/* '<S43>/k_LCK_YR_OffstFac_Dy_LftCurv' */
  real32_T k_LCK_YR_OffstFac_Dy_InnRgtCurv;/* '<S43>/k_LCK_YR_OffstFac_Dy_InnRgtCurv' */
  real32_T Switch4_cg;                 /* '<S43>/Switch4' */
  real32_T k_LCK_YawRate_OffsetFac_Vspd_d;/* '<S43>/k_LCK_YawRate_OffsetFac_Vspd' */
  real32_T Product2_m;                 /* '<S43>/Product2' */
  real32_T Sum1_e;                     /* '<S43>/Sum1' */
  real32_T C_DEG2RAD_i;                /* '<S43>/C_DEG2RAD' */
  real32_T C_KPH2MPS_b;                /* '<S43>/C_KPH2MPS' */
  real32_T Product8;                   /* '<S43>/Product8' */
  real32_T Sum4_n;                     /* '<S43>/Sum4' */
  real32_T C_RAD2DEG_m;                /* '<S43>/C_RAD2DEG' */
  real32_T Product2_p3;                /* '<S16>/Product2' */
  real32_T Abs3_f;                     /* '<S96>/Abs3' */
  real32_T k_LCK_PFac_HadStrCen_i;     /* '<S96>/k_LCK_PFac_HadStrCen' */
  real32_T k_LCK_PFac_HadStrSid_b;     /* '<S96>/k_LCK_PFac_HadStrSid' */
  real32_T Switch5_je;                 /* '<S96>/Switch5' */
  real32_T k_LCK_PFac_HadCurCen_c;     /* '<S96>/k_LCK_PFac_HadCurCen' */
  real32_T k_LCK_PFac_HadCurSid_e;     /* '<S96>/k_LCK_PFac_HadCurSid' */
  real32_T Switch6_g;                  /* '<S96>/Switch6' */
  real32_T Switch12_i;                 /* '<S96>/Switch12' */
  real32_T Abs1_g;                     /* '<S97>/Abs1' */
  real32_T k_LCK_PFac_SA_StrCen_o;     /* '<S97>/k_LCK_PFac_SA_StrCen' */
  real32_T k_LCK_PFac_SA_StrSid_k;     /* '<S97>/k_LCK_PFac_SA_StrSid' */
  real32_T Switch19_n;                 /* '<S97>/Switch19' */
  real32_T k_LCK_PFac_SA_CurCen_i;     /* '<S97>/k_LCK_PFac_SA_CurCen' */
  real32_T k_LCK_PFac_SA_CurSid_j;     /* '<S97>/k_LCK_PFac_SA_CurSid' */
  real32_T Switch22;                   /* '<S97>/Switch22' */
  real32_T Switch24;                   /* '<S97>/Switch24' */
  real32_T Abs4_a;                     /* '<S98>/Abs4' */
  real32_T k_LCK_PFac_SS_StrCen_e;     /* '<S98>/k_LCK_PFac_SS_StrCen' */
  real32_T k_LCK_PFac_SS_StrSid_i;     /* '<S98>/k_LCK_PFac_SS_StrSid' */
  real32_T Switch13_ib;                /* '<S98>/Switch13' */
  real32_T k_LCK_PFac_SS_CurCen_o;     /* '<S98>/k_LCK_PFac_SS_CurCen' */
  real32_T k_LCK_PFac_SS_CurSid_b;     /* '<S98>/k_LCK_PFac_SS_CurSid' */
  real32_T Switch16_g;                 /* '<S98>/Switch16' */
  real32_T Switch18_i;                 /* '<S98>/Switch18' */
  real32_T Abs_p;                      /* '<S99>/Abs' */
  real32_T k_LCK_PFac_Dy_k;            /* '<S99>/k_LCK_PFac_Dy' */
  real32_T k_LCK_PFac_Dy_Curv_l;       /* '<S99>/k_LCK_PFac_Dy_Curv' */
  real32_T Switch27;                   /* '<S99>/Switch27' */
  real32_T k_LCK_PFac_Vspd_a;          /* '<S100>/k_LCK_PFac_Vspd' */
  real32_T k_LCK_PFac_Rad_p;           /* '<S101>/k_LCK_PFac_Rad' */
  real32_T Product_ev;                 /* '<S104>/Product' */
  real32_T Sum_ax;                     /* '<S103>/Sum' */
  real32_T Switch19_d;                 /* '<S103>/Switch19' */
  real32_T Switch20_i;                 /* '<S103>/Switch20' */
  real32_T Sum1_oc;                    /* '<S103>/Sum1' */
  real32_T Gain1_es;                   /* '<S92>/Gain1' */
  real32_T Product_d;                  /* '<S92>/Product' */
  real32_T Gain_nc;                    /* '<S92>/Gain' */
  real32_T Switch_i;                   /* '<S106>/Switch' */
  real32_T Switch2_o;                  /* '<S106>/Switch2' */
  real32_T UnitDelay_gl;               /* '<S102>/Unit Delay' */
  real32_T Gain2_j;                    /* '<S102>/Gain2' */
  real32_T Gain_m;                     /* '<S102>/Gain' */
  real32_T Product3_p;                 /* '<S102>/Product3' */
  real32_T Gain1_bh;                   /* '<S102>/Gain1' */
  real32_T Product5_k;                 /* '<S102>/Product5' */
  real32_T Relay1_k;                   /* '<S94>/Relay1' */
  real32_T Switch26;                   /* '<S94>/Switch26' */
  real32_T k_LCK_DFac_HaStrCen_e;      /* '<S95>/k_LCK_DFac_HaStrCen' */
  real32_T k_LCK_DFac_HaStrSid_a;      /* '<S95>/k_LCK_DFac_HaStrSid' */
  real32_T Switch2_nnp;                /* '<S95>/Switch2' */
  real32_T k_LCK_DFac_HaCurCen_g;      /* '<S95>/k_LCK_DFac_HaCurCen' */
  real32_T k_LCK_DFac_HaCurSid_a;      /* '<S95>/k_LCK_DFac_HaCurSid' */
  real32_T Switch4_f;                  /* '<S95>/Switch4' */
  real32_T Switch10_i;                 /* '<S95>/Switch10' */
  real32_T k_LCK_DFac_HadStrCen_d;     /* '<S96>/k_LCK_DFac_HadStrCen' */
  real32_T k_LCK_DFac_HadStrSid_p;     /* '<S96>/k_LCK_DFac_HadStrSid' */
  real32_T Switch7_i;                  /* '<S96>/Switch7' */
  real32_T k_LCK_DFac_HadCurCen_l;     /* '<S96>/k_LCK_DFac_HadCurCen' */
  real32_T k_LCK_DFac_HadCurSid_d;     /* '<S96>/k_LCK_DFac_HadCurSid' */
  real32_T Switch8_j;                  /* '<S96>/Switch8' */
  real32_T Switch11_i5;                /* '<S96>/Switch11' */
  real32_T k_LCK_DFac_SA_StrCen_a;     /* '<S97>/k_LCK_DFac_SA_StrCen' */
  real32_T k_LCK_DFac_SA_StrSid_p;     /* '<S97>/k_LCK_DFac_SA_StrSid' */
  real32_T Switch21;                   /* '<S97>/Switch21' */
  real32_T k_LCK_DFac_SA_CurCen_c;     /* '<S97>/k_LCK_DFac_SA_CurCen' */
  real32_T k_LCK_DFac_SA_CurSid_a;     /* '<S97>/k_LCK_DFac_SA_CurSid' */
  real32_T Switch23;                   /* '<S97>/Switch23' */
  real32_T Switch20_e;                 /* '<S97>/Switch20' */
  real32_T k_LCK_DFac_SS_StrCen_l;     /* '<S98>/k_LCK_DFac_SS_StrCen' */
  real32_T k_LCK_DFac_SS_StrSid_a;     /* '<S98>/k_LCK_DFac_SS_StrSid' */
  real32_T Switch15_n;                 /* '<S98>/Switch15' */
  real32_T k_LCK_DFac_SS_CurCen_p;     /* '<S98>/k_LCK_DFac_SS_CurCen' */
  real32_T k_LCK_DFac_SS_CurSid_k;     /* '<S98>/k_LCK_DFac_SS_CurSid' */
  real32_T Switch17_a;                 /* '<S98>/Switch17' */
  real32_T Switch14_l;                 /* '<S98>/Switch14' */
  real32_T k_LCK_DFac_Dy_m;            /* '<S99>/k_LCK_DFac_Dy' */
  real32_T k_LCK_DFac_Dy_Curv_a;       /* '<S99>/k_LCK_DFac_Dy_Curv' */
  real32_T Switch28;                   /* '<S99>/Switch28' */
  real32_T k_LCK_DFac_Vspd_a;          /* '<S100>/k_LCK_DFac_Vspd' */
  real32_T k_LCK_DFac_Rad_b;           /* '<S101>/k_LCK_DFac_Rad' */
  real32_T Product_f;                  /* '<S93>/Product' */
  real32_T Sum_fg;                     /* '<S102>/Sum' */
  real32_T Switch19_o;                 /* '<S102>/Switch19' */
  real32_T Switch20_b;                 /* '<S102>/Switch20' */
  real32_T Sum1_hc;                    /* '<S102>/Sum1' */
  real32_T Gain3_n;                    /* '<S92>/Gain3' */
  real32_T Product2_h;                 /* '<S92>/Product2' */
  real32_T Gain4_p;                    /* '<S92>/Gain4' */
  real32_T Switch_o;                   /* '<S107>/Switch' */
  real32_T Switch2_h;                  /* '<S107>/Switch2' */
  real32_T Add_e;                      /* '<S92>/Add' */
  real32_T Sum_i;                      /* '<S105>/Sum' */
  real32_T Product_gof;                /* '<S105>/Product' */
  real32_T Sum1_g;                     /* '<S105>/Sum1' */
  real32_T Saturation_lf;              /* '<S105>/Saturation' */
  real32_T Saturation_kk;              /* '<S92>/Saturation' */
  real32_T Sum2_ks;                    /* '<S37>/Sum2' */
  real32_T Switch10_g;                 /* '<S37>/Switch10' */
  real32_T Abs_os;                     /* '<S37>/Abs' */
  real32_T k_LCK_NonLinCompTab_e;      /* '<S37>/k_LCK_NonLinCompTab' */
  real32_T k_LCK_NonLinCompFac_Vspd_p; /* '<S37>/k_LCK_NonLinCompFac_Vspd' */
  real32_T Product3_a;                 /* '<S37>/Product3' */
  real32_T Switch3_eo;                 /* '<S37>/Switch3' */
  real32_T Saturation1_n;              /* '<S37>/Saturation1' */
  real32_T Switch4_o;                  /* '<S38>/Switch4' */
  real32_T UnitDelay_mx;               /* '<S38>/Unit Delay' */
  real32_T Sum_lb;                     /* '<S38>/Sum' */
  real32_T k_LCK_RatLmtFac_TorqCmd_Vspd_b;/* '<S38>/k_LCK_RatLmtFac_TorqCmd_Vspd' */
  real32_T Abs_kx;                     /* '<S38>/Abs' */
  real32_T k_LCK_RatLmt_TorqCmd_e;     /* '<S38>/k_LCK_RatLmt_TorqCmd' */
  real32_T Product1_ex;                /* '<S38>/Product1' */
  real32_T Switch_b;                   /* '<S38>/Switch' */
  real32_T Gain1_f4;                   /* '<S38>/Gain1' */
  real32_T Product5_eg;                /* '<S38>/Product5' */
  real32_T Switch19_ob;                /* '<S38>/Switch19' */
  real32_T Gain2_d;                    /* '<S38>/Gain2' */
  real32_T Gain_nl;                    /* '<S38>/Gain' */
  real32_T Product3_j;                 /* '<S38>/Product3' */
  real32_T Switch20_hb;                /* '<S38>/Switch20' */
  real32_T Sum1_nr;                    /* '<S37>/Sum1' */
  real32_T Divide_h;                   /* '<S37>/Divide' */
  real32_T Gain3_p;                    /* '<S11>/Gain3' */
  real32_T Gain_oc;                    /* '<S11>/Gain' */
  real32_T Gain2_du;                   /* '<S11>/Gain2' */
  real32_T Gain1_j;                    /* '<S11>/Gain1' */
  real32_T Add5;                       /* '<S71>/Add5' */
  real32_T DataTypeConversion_m;       /* '<S7>/Data Type Conversion' */
  real32_T DataTypeConversion1_b;      /* '<S7>/Data Type Conversion1' */
  real32_T DataTypeConversion3_m;      /* '<S7>/Data Type Conversion3' */
  real32_T Gain_mz;                    /* '<S5>/Gain' */
  real32_T DataTypeConversion3_h;      /* '<S5>/Data Type Conversion3' */
  real32_T DataTypeConversion2_n;      /* '<S5>/Data Type Conversion2' */
  real32_T DataTypeConversion1_d;      /* '<S5>/Data Type Conversion1' */
  real32_T DataTypeConversion_h;       /* '<S5>/Data Type Conversion' */
  real32_T DataTypeConversion2_b;      /* '<S7>/Data Type Conversion2' */
  real32_T TmpBufferAtConstant2Outport1;/* '<S7>/Constant2' */
  real32_T k_HighAccel_suppress_hold_f;/* '<S113>/k_HighAccel_suppress_hold' */
  real32_T LC_path_gen_flag;           /* '<S229>/Chart1' */
  real32_T pass_cnt;                   /* '<S229>/Chart1' */
  real32_T long_s;                     /* '<S229>/Chart1' */
  real32_T LC_A0_f;                    /* '<S6>/Chart1' */
  real32_T LC_Phase;                   /* '<S6>/Chart' */
  real32_T UnitDelay_d;                /* '<S224>/Unit Delay' */
  real32_T Product_cx;                 /* '<S224>/Product' */
  real32_T Sum1_en;                    /* '<S224>/Sum1' */
  real32_T Sum_kn;                     /* '<S226>/Sum' */
  real32_T Product_eo;                 /* '<S226>/Product' */
  real32_T Out;                        /* '<S202>/Trigger Hold' */
  real32_T LCKON_TJAOFF;               /* '<S160>/LCK_TJA_LatRq_Manager' */
  real32_T LatRq;                      /* '<S160>/LCK_TJA_LatRq_Manager' */
  real32_T sustain_value;              /* '<S178>/signal_sustain' */
  real32_T Sum2_kw;                    /* '<S149>/Sum2' */
  real32_T Product1_c;                 /* '<S149>/Product1' */
  real32_T UnitDelay_ml;               /* '<S147>/Unit Delay' */
  real32_T Sum_g;                      /* '<S147>/Sum' */
  real32_T Product_nl;                 /* '<S147>/Product' */
  real32_T Sum1_dj;                    /* '<S147>/Sum1' */
  real32_T Saturation_dy;              /* '<S147>/Saturation' */
  real32_T Abs2_d;                     /* '<S116>/Abs2' */
  real32_T LCK_Steer_angel_CR_threshold_LU;/* '<S116>/LCK_Steer_angel_CR_threshold_LUT' */
  real32_T Steer_angel_CR_threshold_LUT;/* '<S116>/Steer_angel_CR_threshold_LUT' */
  real32_T Steer_angel_CR_threshold_hs_LUT;/* '<S116>/Steer_angel_CR_threshold_hs_LUT' */
  real32_T Steer_angel_CR_threshold_ls_LUT;/* '<S116>/Steer_angel_CR_threshold_ls_LUT' */
  real32_T MultiportSwitch;            /* '<S116>/Multiport Switch' */
  real32_T warn_output;                /* '<S148>/CR_inhibit' */
  real32_T accel_pedal_pos_per_speed;  /* '<S115>/accel_pedal_pos_per_speed' */
  real32_T Add2_e;                     /* '<S115>/Add2' */
  real32_T sustain_value_m;            /* '<S142>/signal_sustain' */
  real32_T k_LCK_ovrd_torq_thold_per_spd;/* '<S112>/k_LCK_ovrd_torq_thold_per_spd' */
  real32_T Add_i;                      /* '<S112>/Add' */
  real32_T Switch_m;                   /* '<S112>/Switch' */
  real32_T Gain_b1;                    /* '<S112>/Gain' */
  real32_T Switch3_l;                  /* '<S112>/Switch3' */
  real32_T DataTypeConversion1_h;      /* '<S112>/Data Type Conversion1' */
  real32_T Delay1_k3;                  /* '<S112>/Delay1' */
  real32_T Switch2_b;                  /* '<S112>/Switch2' */
  real32_T DataTypeConversion8;        /* '<S112>/Data Type Conversion8' */
  real32_T Delay_f;                    /* '<S112>/Delay' */
  real32_T sustain_value_out;          /* '<S112>/left_distance_sustain_period' */
  real32_T sustain_value_out_d;        /* '<S112>/Right_distance_sustain_period' */
  real32_T count;                      /* '<S49>/Trigger Hold' */
  uint16_T Gain0;                      /* '<S191>/Gain 0' */
  uint16_T Gain1_l;                    /* '<S191>/Gain1' */
  uint16_T Gain2_k;                    /* '<S191>/Gain2' */
  uint16_T Gain3_g;                    /* '<S191>/Gain3' */
  uint16_T Gain4_i;                    /* '<S191>/Gain4' */
  uint16_T Gain5_g;                    /* '<S191>/Gain5' */
  uint16_T Gain6;                      /* '<S191>/Gain6' */
  uint16_T Gain7;                      /* '<S191>/Gain7' */
  uint16_T Gain8_i;                    /* '<S191>/Gain8' */
  uint16_T Gain9;                      /* '<S191>/Gain9' */
  uint16_T Gain10;                     /* '<S191>/Gain10' */
  uint16_T Gain11;                     /* '<S191>/Gain11' */
  uint16_T Gain12;                     /* '<S191>/Gain12' */
  uint16_T Gain13;                     /* '<S191>/Gain13' */
  uint16_T Gain14;                     /* '<S191>/Gain14' */
  uint16_T Gain15;                     /* '<S191>/Gain15' */
  uint16_T Add_c;                      /* '<S191>/Add' */
  uint16_T DataTypeConversion12_m;     /* '<S167>/Data Type Conversion12' */
  uint16_T DataTypeConversion93;       /* '<S167>/Data Type Conversion93' */
  uint16_T Idle2ReadyBitwise;          /* '<S167>/Idle2ReadyBitwise ' */
  uint16_T Gain0_e;                    /* '<S211>/Gain 0' */
  uint16_T Gain1_dd;                   /* '<S211>/Gain1' */
  uint16_T Gain2_p;                    /* '<S211>/Gain2' */
  uint16_T Gain3_b;                    /* '<S211>/Gain3' */
  uint16_T Gain4_k;                    /* '<S211>/Gain4' */
  uint16_T Gain5_j;                    /* '<S211>/Gain5' */
  uint16_T Gain6_p;                    /* '<S211>/Gain6' */
  uint16_T Gain7_b;                    /* '<S211>/Gain7' */
  uint16_T Gain8_o;                    /* '<S211>/Gain8' */
  uint16_T Gain9_c;                    /* '<S211>/Gain9' */
  uint16_T Gain10_a;                   /* '<S211>/Gain10' */
  uint16_T Gain11_l;                   /* '<S211>/Gain11' */
  uint16_T Gain12_l;                   /* '<S211>/Gain12' */
  uint16_T Gain13_h;                   /* '<S211>/Gain13' */
  uint16_T Gain14_a;                   /* '<S211>/Gain14' */
  uint16_T Gain15_d;                   /* '<S211>/Gain15' */
  uint16_T Add_d;                      /* '<S211>/Add' */
  uint16_T DataTypeConversion13;       /* '<S169>/Data Type Conversion13' */
  uint16_T DataTypeConversion90;       /* '<S169>/Data Type Conversion90' */
  uint16_T Ready2IdleBitwiseOperator1; /* '<S169>/Ready2IdleBitwise Operator1' */
  uint16_T Gain0_j;                    /* '<S201>/Gain 0' */
  uint16_T Gain1_et;                   /* '<S201>/Gain1' */
  uint16_T Gain2_hc;                   /* '<S201>/Gain2' */
  uint16_T Gain3_ow;                   /* '<S201>/Gain3' */
  uint16_T Gain4_l;                    /* '<S201>/Gain4' */
  uint16_T Gain5_b;                    /* '<S201>/Gain5' */
  uint16_T Gain6_f;                    /* '<S201>/Gain6' */
  uint16_T Gain7_k;                    /* '<S201>/Gain7' */
  uint16_T Gain8_m;                    /* '<S201>/Gain8' */
  uint16_T Gain9_g;                    /* '<S201>/Gain9' */
  uint16_T Gain10_c;                   /* '<S201>/Gain10' */
  uint16_T Gain11_a;                   /* '<S201>/Gain11' */
  uint16_T Gain12_g;                   /* '<S201>/Gain12' */
  uint16_T Gain13_k;                   /* '<S201>/Gain13' */
  uint16_T Gain14_g;                   /* '<S201>/Gain14' */
  uint16_T Gain15_dz;                  /* '<S201>/Gain15' */
  uint16_T Add_g;                      /* '<S201>/Add' */
  uint16_T DataTypeConversion14;       /* '<S168>/Data Type Conversion14' */
  uint16_T DataTypeConversion94;       /* '<S168>/Data Type Conversion94' */
  uint16_T Idle2ReadyBitwise1;         /* '<S168>/Idle2ReadyBitwise 1' */
  uint16_T Gain0_m;                    /* '<S173>/Gain 0' */
  uint16_T Gain1_a;                    /* '<S173>/Gain1' */
  uint16_T Gain2_ht;                   /* '<S173>/Gain2' */
  uint16_T Gain3_i;                    /* '<S173>/Gain3' */
  uint16_T Gain4_a;                    /* '<S173>/Gain4' */
  uint16_T Gain5_n;                    /* '<S173>/Gain5' */
  uint16_T Gain6_j;                    /* '<S173>/Gain6' */
  uint16_T Gain7_c;                    /* '<S173>/Gain7' */
  uint16_T Gain8_l;                    /* '<S173>/Gain8' */
  uint16_T Gain9_gf;                   /* '<S173>/Gain9' */
  uint16_T Gain10_l;                   /* '<S173>/Gain10' */
  uint16_T Gain11_p;                   /* '<S173>/Gain11' */
  uint16_T Gain12_j;                   /* '<S173>/Gain12' */
  uint16_T Gain13_l;                   /* '<S173>/Gain13' */
  uint16_T Gain14_l;                   /* '<S173>/Gain14' */
  uint16_T Gain15_g;                   /* '<S173>/Gain15' */
  uint16_T Add_cs;                     /* '<S173>/Add' */
  uint16_T TJA_VehInvalid_Magic;       /* '<S151>/Data Type Conversion87' */
  uint16_T DataTypeConversion91;       /* '<S151>/Data Type Conversion91' */
  uint16_T Active2ReadyBitwiseOperator;/* '<S151>/Active2ReadyBitwise Operator' */
  uint8_T Switch10_gl;                 /* '<S22>/Switch10' */
  uint8_T Switch1_hu;                  /* '<S22>/Switch1' */
  uint8_T Switch8_e;                   /* '<S22>/Switch8' */
  uint8_T Switch2_os;                  /* '<S9>/Switch2' */
  uint8_T Switch1_fi;                  /* '<S9>/Switch1' */
  uint8_T Switch_h;                    /* '<S9>/Switch' */
  uint8_T Compare;                     /* '<S55>/Compare' */
  uint8_T UnitDelay2_o;                /* '<S47>/Unit Delay2' */
  uint8_T Compare_l;                   /* '<S56>/Compare' */
  uint8_T UnitDelay1_o;                /* '<S38>/Unit Delay1' */
  uint8_T LCK_PID_Main_Version;        /* '<S4>/LCK_PID_Main_Version' */
  uint8_T LCK_PID_Minor_Version;       /* '<S4>/LCK_PID_Minor_Version' */
  boolean_T RelationalOperator1;       /* '<S239>/Relational Operator1' */
  boolean_T RelationalOperator2;       /* '<S239>/Relational Operator2' */
  boolean_T RelationalOperator20;      /* '<S239>/Relational Operator20' */
  boolean_T RelationalOperator3;       /* '<S239>/Relational Operator3' */
  boolean_T LogicalOperator25;         /* '<S239>/Logical Operator25' */
  boolean_T RelationalOperator5;       /* '<S239>/Relational Operator5' */
  boolean_T LogicalOperator1;          /* '<S239>/Logical Operator1' */
  boolean_T RelationalOperator;        /* '<S152>/Relational Operator' */
  boolean_T LogicalOperator;           /* '<S161>/Logical Operator' */
  boolean_T RelationalOperator27;      /* '<S237>/Relational Operator27' */
  boolean_T RelationalOperator_i;      /* '<S232>/Relational Operator' */
  boolean_T RelationalOperator3_g;     /* '<S232>/Relational Operator3' */
  boolean_T LogicalOperator_g;         /* '<S232>/Logical Operator' */
  boolean_T RelationalOperator1_b;     /* '<S232>/Relational Operator1' */
  boolean_T RelationalOperator4;       /* '<S232>/Relational Operator4' */
  boolean_T LogicalOperator1_e;        /* '<S232>/Logical Operator1' */
  boolean_T RelationalOperator2_o;     /* '<S232>/Relational Operator2' */
  boolean_T RelationalOperator5_h;     /* '<S232>/Relational Operator5' */
  boolean_T LogicalOperator2;          /* '<S232>/Logical Operator2' */
  boolean_T RelationalOperator24;      /* '<S237>/Relational Operator24' */
  boolean_T LogicalOperator22;         /* '<S237>/Logical Operator22' */
  boolean_T RelationalOperator45;      /* '<S237>/Relational Operator45' */
  boolean_T RelationalOperator29;      /* '<S237>/Relational Operator29' */
  boolean_T RelationalOperator26;      /* '<S237>/Relational Operator26' */
  boolean_T LogicalOperator23;         /* '<S237>/Logical Operator23' */
  boolean_T RelationalOperator46;      /* '<S237>/Relational Operator46' */
  boolean_T RelationalOperator25;      /* '<S237>/Relational Operator25' */
  boolean_T RelationalOperator39;      /* '<S237>/Relational Operator39' */
  boolean_T RelationalOperator42;      /* '<S237>/Relational Operator42' */
  boolean_T RelationalOperator41;      /* '<S237>/Relational Operator41' */
  boolean_T LogicalOperator24;         /* '<S237>/Logical Operator24' */
  boolean_T LogicalOperator15;         /* '<S237>/Logical Operator15' */
  boolean_T RelationalOperator20_p;    /* '<S238>/Relational Operator20' */
  boolean_T LogicalOperator27;         /* '<S238>/Logical Operator27' */
  boolean_T RelationalOperator28;      /* '<S237>/Relational Operator28' */
  boolean_T RelationalOperator40;      /* '<S237>/Relational Operator40' */
  boolean_T RelationalOperator44;      /* '<S237>/Relational Operator44' */
  boolean_T RelationalOperator43;      /* '<S237>/Relational Operator43' */
  boolean_T LogicalOperator31;         /* '<S237>/Logical Operator31' */
  boolean_T LogicalOperator16;         /* '<S237>/Logical Operator16' */
  boolean_T LogicalOperator28;         /* '<S238>/Logical Operator28' */
  boolean_T LogicalOperator25_f;       /* '<S234>/Logical Operator25' */
  boolean_T RelationalOperator6;       /* '<S233>/Relational Operator6' */
  boolean_T RelationalOperator7;       /* '<S233>/Relational Operator7' */
  boolean_T LogicalOperator3;          /* '<S233>/Logical Operator3' */
  boolean_T RelationalOperator10;      /* '<S233>/Relational Operator10' */
  boolean_T RelationalOperator8;       /* '<S233>/Relational Operator8' */
  boolean_T LogicalOperator4;          /* '<S233>/Logical Operator4' */
  boolean_T RelationalOperator9;       /* '<S233>/Relational Operator9' */
  boolean_T RelationalOperator11;      /* '<S233>/Relational Operator11' */
  boolean_T LogicalOperator5;          /* '<S233>/Logical Operator5' */
  boolean_T LogicalOperator6;          /* '<S233>/Logical Operator6' */
  boolean_T RelationalOperator12;      /* '<S233>/Relational Operator12' */
  boolean_T RelationalOperator14;      /* '<S233>/Relational Operator14' */
  boolean_T LogicalOperator7;          /* '<S233>/Logical Operator7' */
  boolean_T RelationalOperator15;      /* '<S233>/Relational Operator15' */
  boolean_T RelationalOperator13;      /* '<S233>/Relational Operator13' */
  boolean_T LogicalOperator8;          /* '<S233>/Logical Operator8' */
  boolean_T LogicalOperator9;          /* '<S233>/Logical Operator9' */
  boolean_T RelationalOperator16;      /* '<S233>/Relational Operator16' */
  boolean_T RelationalOperator18;      /* '<S233>/Relational Operator18' */
  boolean_T LogicalOperator10;         /* '<S233>/Logical Operator10' */
  boolean_T RelationalOperator19;      /* '<S233>/Relational Operator19' */
  boolean_T RelationalOperator17;      /* '<S233>/Relational Operator17' */
  boolean_T LogicalOperator11;         /* '<S233>/Logical Operator11' */
  boolean_T LogicalOperator12;         /* '<S233>/Logical Operator12' */
  boolean_T RelationalOperator202;     /* '<S164>/Relational Operator202' */
  boolean_T LogicalOperator150;        /* '<S164>/Logical Operator150' */
  boolean_T RelationalOperator24_e;    /* '<S164>/Relational Operator24' */
  boolean_T RelationalOperator43_e;    /* '<S164>/Relational Operator43' */
  boolean_T RelationalOperator25_n;    /* '<S164>/Relational Operator25' */
  boolean_T LogicalOperator50;         /* '<S164>/Logical Operator50' */
  boolean_T RelationalOperator28_g;    /* '<S164>/Relational Operator28' */
  boolean_T RelationalOperator50;      /* '<S164>/Relational Operator50' */
  boolean_T LogicalOperator53;         /* '<S164>/Logical Operator53' */
  boolean_T LogicalOperator51;         /* '<S164>/Logical Operator51' */
  boolean_T RelationalOperator9_g;     /* '<S167>/Relational Operator9' */
  boolean_T RelationalOperator10_e;    /* '<S167>/Relational Operator10' */
  boolean_T RelationalOperator11_m;    /* '<S167>/Relational Operator11' */
  boolean_T RelationalOperator13_h;    /* '<S114>/Relational Operator13' */
  boolean_T RelationalOperator11_j;    /* '<S114>/Relational Operator11' */
  boolean_T RelationalOperator12_m;    /* '<S114>/Relational Operator12' */
  boolean_T LogicalOperator8_a;        /* '<S114>/Logical Operator8' */
  boolean_T RelationalOperator29_i;    /* '<S167>/Relational Operator29' */
  boolean_T RelationalOperator213;     /* '<S165>/Relational Operator213' */
  boolean_T RelationalOperator216;     /* '<S165>/Relational Operator216' */
  boolean_T RelationalOperator217;     /* '<S165>/Relational Operator217' */
  boolean_T LogicalOperator159;        /* '<S165>/Logical Operator159' */
  boolean_T RelationalOperator2_i;     /* '<S167>/Relational Operator2' */
  boolean_T RelationalOperator15_m;    /* '<S167>/Relational Operator15' */
  boolean_T LogicalOperator44;         /* '<S167>/Logical Operator44' */
  boolean_T RelationalOperator4_a;     /* '<S167>/Relational Operator4' */
  boolean_T LogicalOperator13;         /* '<S167>/Logical Operator13' */
  boolean_T LogicalOperator160;        /* '<S167>/Logical Operator160' */
  boolean_T Relational_Operator10;     /* '<S167>/Relational_Operator10' */
  boolean_T LogicalOperator48;         /* '<S162>/Logical Operator48' */
  boolean_T Relational_Operator6;      /* '<S162>/Relational_Operator6' */
  boolean_T LogicalOperator49;         /* '<S162>/Logical Operator49' */
  boolean_T LogicalOperator3_m;        /* '<S158>/Logical Operator3' */
  boolean_T LogicalOperator3_o;        /* '<S163>/Logical Operator3' */
  boolean_T RelationalOperator44_c;    /* '<S170>/Relational Operator44' */
  boolean_T LogicalOperator56;         /* '<S169>/Logical Operator56' */
  boolean_T RelationalOperator8_p;     /* '<S170>/Relational Operator8' */
  boolean_T RelationalOperator209;     /* '<S159>/Relational Operator209' */
  boolean_T RelationalOperator205;     /* '<S159>/Relational Operator205' */
  boolean_T RelationalOperator207;     /* '<S159>/Relational Operator207' */
  boolean_T LogicalOperator155;        /* '<S159>/Logical Operator155' */
  boolean_T RelationalOperator204;     /* '<S159>/Relational Operator204' */
  boolean_T RelationalOperator208;     /* '<S159>/Relational Operator208' */
  boolean_T LogicalOperator157;        /* '<S159>/Logical Operator157' */
  boolean_T RelationalOperator45_i;    /* '<S170>/Relational Operator45' */
  boolean_T LogicalOperator17;         /* '<S169>/Logical Operator17' */
  boolean_T RelationalOperator20_l;    /* '<S169>/Relational Operator20' */
  boolean_T RelationalOperator21;      /* '<S169>/Relational Operator21' */
  boolean_T RelationalOperator22;      /* '<S169>/Relational Operator22' */
  boolean_T RelationalOperator1_i;     /* '<S169>/Relational Operator1' */
  boolean_T LogicalOperator22_b;       /* '<S169>/Logical Operator22' */
  boolean_T RelationalOperator201;     /* '<S172>/Relational Operator201' */
  boolean_T RelationalOperator14_d;    /* '<S169>/Relational Operator14' */
  boolean_T RelationalOperator18_i;    /* '<S169>/Relational Operator18' */
  boolean_T LogicalOperator45;         /* '<S169>/Logical Operator45' */
  boolean_T LogicalOperator9_p;        /* '<S170>/Logical Operator9' */
  boolean_T LogicalOperator27_i;       /* '<S169>/Logical Operator27' */
  boolean_T RelationalOperator7_m;     /* '<S169>/Relational Operator7' */
  boolean_T LogicalOperator55;         /* '<S169>/Logical Operator55' */
  boolean_T LogicalOperator20;         /* '<S169>/Logical Operator20' */
  boolean_T LogicalOperator1_ej;       /* '<S169>/Logical Operator1' */
  boolean_T LogicalOperator46;         /* '<S169>/Logical Operator46' */
  boolean_T LogicalOperator47;         /* '<S169>/Logical Operator47' */
  boolean_T RelationalOperator27_c;    /* '<S169>/Relational Operator27' */
  boolean_T Relational_Operator1;      /* '<S169>/Relational_Operator1' */
  boolean_T DataTypeConversion89_k;    /* '<S153>/Data Type Conversion89' */
  boolean_T RelationalOperator1_l;     /* '<S153>/Relational Operator1' */
  boolean_T LogicalOperator_i;         /* '<S153>/Logical Operator' */
  boolean_T RelationalOperator_j;      /* '<S113>/Relational Operator' */
  boolean_T RelationalOperator16_l;    /* '<S113>/Relational Operator16' */
  boolean_T LogicalOperator18;         /* '<S113>/Logical Operator18' */
  boolean_T RelationalOperator1_h;     /* '<S113>/Relational Operator1' */
  boolean_T RelationalOperator17_g;    /* '<S113>/Relational Operator17' */
  boolean_T LogicalOperator19;         /* '<S113>/Logical Operator19' */
  boolean_T RelationalOperator16_l3;   /* '<S168>/Relational Operator16' */
  boolean_T RelationalOperator17_m;    /* '<S168>/Relational Operator17' */
  boolean_T RelationalOperator99;      /* '<S168>/Relational Operator99' */
  boolean_T RelationalOperator199;     /* '<S168>/Relational Operator199' */
  boolean_T LogicalOperator86;         /* '<S168>/Logical Operator86' */
  boolean_T LogicalOperator58;         /* '<S168>/Logical Operator58' */
  boolean_T LogicalOperator4_p;        /* '<S113>/Logical Operator4' */
  boolean_T LogicalOperator64;         /* '<S168>/Logical Operator64' */
  boolean_T LogicalOperator5_k;        /* '<S113>/Logical Operator5' */
  boolean_T LogicalOperator65;         /* '<S168>/Logical Operator65' */
  boolean_T LogicalOperator26;         /* '<S168>/Logical Operator26' */
  boolean_T RelationalOperator12_p;    /* '<S168>/Relational Operator12' */
  boolean_T RelationalOperator19_c;    /* '<S168>/Relational Operator19' */
  boolean_T LogicalOperator93;         /* '<S168>/Logical Operator93' */
  boolean_T Relational_Operator2;      /* '<S168>/Relational_Operator2' */
  boolean_T LogicalOperator3_l;        /* '<S154>/Logical Operator3' */
  boolean_T LogicalOperator60;         /* '<S151>/Logical Operator60' */
  boolean_T RelationalOperator51;      /* '<S151>/Relational Operator51' */
  boolean_T RelationalOperator26_j;    /* '<S151>/Relational Operator26' */
  boolean_T LogicalOperator57;         /* '<S151>/Logical Operator57' */
  boolean_T RelationalOperator64;      /* '<S151>/Relational Operator64' */
  boolean_T RelationalOperator63;      /* '<S151>/Relational Operator63' */
  boolean_T Switch16_m;                /* '<S151>/Switch16' */
  boolean_T LogicalOperator59;         /* '<S151>/Logical Operator59' */
  boolean_T RelationalOperator13_g;    /* '<S151>/Relational Operator13' */
  boolean_T RelationalOperator27_e;    /* '<S151>/Relational Operator27' */
  boolean_T Relational_Operator3;      /* '<S151>/Relational_Operator3' */
  boolean_T LogicalOperator3_oa;       /* '<S156>/Logical Operator3' */
  boolean_T RelationalOperator40_j;    /* '<S155>/Relational Operator40' */
  boolean_T RelationalOperator41_h;    /* '<S155>/Relational Operator41' */
  boolean_T RelationalOperator42_l;    /* '<S155>/Relational Operator42' */
  boolean_T LogicalOperator36;         /* '<S155>/Logical Operator36' */
  boolean_T LogicalOperator35;         /* '<S155>/Logical Operator35' */
  boolean_T LogicalOperator16_k;       /* '<S157>/Logical Operator16' */
  boolean_T RelationalOperator34;      /* '<S171>/Relational Operator34' */
  boolean_T RelationalOperator9_d;     /* '<S171>/Relational Operator9' */
  boolean_T RelationalOperator1_d;     /* '<S171>/Relational Operator1' */
  boolean_T RelationalOperator10_o;    /* '<S171>/Relational Operator10' */
  boolean_T LogicalOperator9_c;        /* '<S171>/Logical Operator9' */
  boolean_T LogicalOperator31_g;       /* '<S171>/Logical Operator31' */
  boolean_T RelationalOperator11_g;    /* '<S171>/Relational Operator11' */
  boolean_T RelationalOperator2_l;     /* '<S171>/Relational Operator2' */
  boolean_T LogicalOperator10_k;       /* '<S171>/Logical Operator10' */
  boolean_T LogicalOperator1_h;        /* '<S171>/Logical Operator1' */
  boolean_T RelationalOperator4_j;     /* '<S171>/Relational Operator4' */
  boolean_T RelationalOperator3_l;     /* '<S171>/Relational Operator3' */
  boolean_T RelationalOperator6_f;     /* '<S171>/Relational Operator6' */
  boolean_T RelationalOperator7_a;     /* '<S171>/Relational Operator7' */
  boolean_T LogicalOperator3_p;        /* '<S171>/Logical Operator3' */
  boolean_T LogicalOperator5_b;        /* '<S171>/Logical Operator5' */
  boolean_T LogicalOperator7_e;        /* '<S171>/Logical Operator7' */
  boolean_T LogicalOperator2_p;        /* '<S171>/Logical Operator2' */
  boolean_T RelationalOperator8_n;     /* '<S171>/Relational Operator8' */
  boolean_T LogicalOperator6_o;        /* '<S171>/Logical Operator6' */
  boolean_T LogicalOperator8_i;        /* '<S171>/Logical Operator8' */
  boolean_T RelationalOperator5_b;     /* '<S171>/Relational Operator5' */
  boolean_T LogicalOperator4_h;        /* '<S171>/Logical Operator4' */
  boolean_T RelationalOperator2_h;     /* '<S6>/Relational Operator2' */
  boolean_T RelationalOperator3_d;     /* '<S6>/Relational Operator3' */
  boolean_T RelationalOperator_c;      /* '<S6>/Relational Operator' */
  boolean_T RelationalOperator6_d;     /* '<S229>/Relational Operator6' */
  boolean_T RelationalOperator5_o;     /* '<S229>/Relational Operator5' */
  boolean_T LogicalOperator1_b;        /* '<S229>/Logical Operator1' */
  boolean_T RelationalOperator2_d;     /* '<S22>/Relational Operator2' */
  boolean_T RelationalOperator1_dq;    /* '<S22>/Relational Operator1' */
  boolean_T RelationalOperator_jr;     /* '<S22>/Relational Operator' */
  boolean_T RelationalOperator3_dj;    /* '<S10>/Relational Operator3' */
  boolean_T RelationalOperator16_g;    /* '<S9>/Relational Operator16' */
  boolean_T RelationalOperator1_c;     /* '<S9>/Relational Operator1' */
  boolean_T RelationalOperator2_hw;    /* '<S9>/Relational Operator2' */
  boolean_T RelationalOperator3_n;     /* '<S13>/Relational Operator3' */
  boolean_T Compare_d;                 /* '<S64>/Compare' */
  boolean_T RelationalOperator15_a;    /* '<S47>/Relational Operator15' */
  boolean_T RelationalOperator14_g;    /* '<S47>/Relational Operator14' */
  boolean_T LogicalOperator8_at;       /* '<S47>/Logical Operator8' */
  boolean_T DataTypeConversion54;      /* '<S47>/Data Type Conversion54' */
  boolean_T RelationalOperator6_g;     /* '<S48>/Relational Operator6' */
  boolean_T RelationalOperator_h;      /* '<S48>/Relational Operator' */
  boolean_T LogicalOperator_e;         /* '<S48>/Logical Operator' */
  boolean_T Compare_b;                 /* '<S65>/Compare' */
  boolean_T Compare_h;                 /* '<S66>/Compare' */
  boolean_T Switch6_gy;                /* '<S61>/Switch6' */
  boolean_T RelationalOperator1_m;     /* '<S83>/Relational Operator1' */
  boolean_T RelationalOperator4_h;     /* '<S83>/Relational Operator4' */
  boolean_T Compare_c;                 /* '<S67>/Compare' */
  boolean_T Compare_e;                 /* '<S68>/Compare' */
  boolean_T Switch7_p;                 /* '<S61>/Switch7' */
  boolean_T RelationalOperator1_f;     /* '<S82>/Relational Operator1' */
  boolean_T RelationalOperator4_b;     /* '<S82>/Relational Operator4' */
  boolean_T LowerRelop1;               /* '<S87>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S87>/UpperRelop' */
  boolean_T Compare_m;                 /* '<S69>/Compare' */
  boolean_T LowerRelop1_f;             /* '<S89>/LowerRelop1' */
  boolean_T UpperRelop_n;              /* '<S89>/UpperRelop' */
  boolean_T LowerRelop1_i;             /* '<S88>/LowerRelop1' */
  boolean_T UpperRelop_j;              /* '<S88>/UpperRelop' */
  boolean_T RelationalOperator1_e;     /* '<S81>/Relational Operator1' */
  boolean_T RelationalOperator4_an;    /* '<S81>/Relational Operator4' */
  boolean_T Compare_f;                 /* '<S34>/Compare' */
  boolean_T Compare_n;                 /* '<S33>/Compare' */
  boolean_T Compare_c1;                /* '<S35>/Compare' */
  boolean_T RelationalOperator1_ep;    /* '<S103>/Relational Operator1' */
  boolean_T RelationalOperator4_e;     /* '<S103>/Relational Operator4' */
  boolean_T LowerRelop1_i3;            /* '<S106>/LowerRelop1' */
  boolean_T UpperRelop_o;              /* '<S106>/UpperRelop' */
  boolean_T RelationalOperator1_k;     /* '<S102>/Relational Operator1' */
  boolean_T RelationalOperator4_f;     /* '<S102>/Relational Operator4' */
  boolean_T LowerRelop1_fo;            /* '<S107>/LowerRelop1' */
  boolean_T UpperRelop_p;              /* '<S107>/UpperRelop' */
  boolean_T RelationalOperator3_n4;    /* '<S37>/Relational Operator3' */
  boolean_T Compare_hy;                /* '<S39>/Compare' */
  boolean_T Compare_ed;                /* '<S40>/Compare' */
  boolean_T LogicalOperator_h;         /* '<S38>/Logical Operator' */
  boolean_T RelationalOperator1_o;     /* '<S38>/Relational Operator1' */
  boolean_T RelationalOperator4_n;     /* '<S38>/Relational Operator4' */
  boolean_T RelationalOperator20_e;    /* '<S7>/Relational Operator20' */
  boolean_T RelationalOperator1_df;    /* '<S7>/Relational Operator1' */
  boolean_T RelationalOperator2_b;     /* '<S7>/Relational Operator2' */
  boolean_T RelationalOperator3_e;     /* '<S7>/Relational Operator3' */
  boolean_T LogicalOperator_il;        /* '<S7>/Logical Operator' */
  boolean_T RelationalOperator3_m;     /* '<S115>/Relational Operator3' */
  boolean_T RelationalOperator1_bq;    /* '<S115>/Relational Operator1' */
  boolean_T LogicalOperator2_n;        /* '<S115>/Logical Operator2' */
  boolean_T UnitDelay1_i;              /* '<S112>/Unit Delay1' */
  boolean_T UnitDelay2_b;              /* '<S112>/Unit Delay2' */
  boolean_T LogicalOperator2_l;        /* '<S112>/Logical Operator2' */
  boolean_T RelationalOperator6_o;     /* '<S112>/Relational Operator6' */
  boolean_T RelationalOperator3_f;     /* '<S112>/Relational Operator3' */
  boolean_T RelationalOperator1_n;     /* '<S112>/Relational Operator1' */
  boolean_T LogicalOperator1_l;        /* '<S112>/Logical Operator1' */
  boolean_T DataTypeConversion4_k;     /* '<S112>/Data Type Conversion4' */
  boolean_T RelationalOperator_e;      /* '<S112>/Relational Operator' */
  boolean_T LogicalOperator_f;         /* '<S112>/Logical Operator' */
  boolean_T DataTypeConversion3_o;     /* '<S112>/Data Type Conversion3' */
  boolean_T Str_Flag;                  /* '<S60>/Chart1' */
  boolean_T Cen_Flag;                  /* '<S59>/Chart' */
  boolean_T Out_d;                     /* '<S49>/Trigger Hold' */
  B_signal_sustain_LCK_T sf_signal_sustain_js;/* '<S243>/signal_sustain' */
  B_signal_sustain_LCK_T sf_signal_sustain_n;/* '<S242>/signal_sustain' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_a;  /* '<S223>/Delay_Trig' */
  B_Delay_Trig_LCK_o_T sf_Delay_Trig_n;/* '<S219>/Delay_Trig' */
  B_Delay_Trig_LCK_o_T sf_Delay_Trig_po;/* '<S218>/Delay_Trig' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_p5; /* '<S217>/Delay_Trig' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_pj; /* '<S210>/Delay_Trig' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_cq; /* '<S209>/Delay_Trig' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_b;  /* '<S208>/Delay_Trig' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_k;  /* '<S207>/Delay_Trig' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_ia; /* '<S206>/Delay_Trig' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_c4; /* '<S200>/Delay_Trig' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_pt; /* '<S199>/Delay_Trig' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_gk; /* '<S190>/Delay_Trig' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_gg; /* '<S189>/Delay_Trig' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_pg; /* '<S188>/Delay_Trig' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_le; /* '<S187>/Delay_Trig' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_o;  /* '<S186>/Delay_Trig' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_iu; /* '<S185>/Delay_Trig' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_g;  /* '<S184>/Delay_Trig' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_l;  /* '<S182>/Delay_Trig' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_cb; /* '<S177>/Delay_Trig' */
  B_Delay_Trig_LCK_T sf_Delay_Trig_i;  /* '<S174>/Delay_Trig' */
  B_Delay_Trig_LCK_f_T sf_Delay_Trig_c;/* '<S140>/Delay_Trig' */
  B_Delay_Trig_LCK_f_T sf_Delay_Trig_p;/* '<S139>/Delay_Trig' */
  B_Sustain_wo_reset_LCK_p_T sf_Sustain_wo_reset_m0;/* '<S128>/Sustain_wo_reset' */
  B_Sustain_wo_reset_LCK_p_T sf_Sustain_wo_reset_n;/* '<S127>/Sustain_wo_reset' */
  B_Sustain_wo_reset_LCK_p_T sf_Sustain_wo_reset_j;/* '<S126>/Sustain_wo_reset' */
  B_Sustain_wo_reset_LCK_f_T sf_Sustain_wo_reset_i;/* '<S125>/Sustain_wo_reset' */
  B_Sustain_wo_reset_LCK_T sf_Sustain_wo_reset_h;/* '<S124>/Sustain_wo_reset' */
  B_Sustain_wo_reset_LCK_p_T sf_Sustain_wo_reset_f5;/* '<S123>/Sustain_wo_reset' */
  B_Sustain_wo_reset_LCK_p_T sf_Sustain_wo_reset_f;/* '<S122>/Sustain_wo_reset' */
  B_Sustain_wo_reset_LCK_p_T sf_Sustain_wo_reset_m;/* '<S121>/Sustain_wo_reset' */
  B_Sustain_wo_reset_LCK_f_T sf_Sustain_wo_reset_c;/* '<S120>/Sustain_wo_reset' */
  B_Sustain_wo_reset_LCK_T sf_Sustain_wo_reset;/* '<S119>/Sustain_wo_reset' */
  B_TriggerHold_LCK_T sf_TriggerHold_k;/* '<S52>/Trigger Hold' */
  B_Delay_Trig_LCK_T sf_Delay_Trig;    /* '<S51>/Delay_Trig' */
  B_TriggerHold_LCK_T sf_TriggerHold;  /* '<S41>/Trigger Hold' */
} B_LCK_c_T;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'LCK' */
#ifndef LCK_MDLREF_HIDE_CHILD_

typedef struct {
  real_T Delay1_DSTATE[3200];          /* '<S229>/Delay1' */
  real_T Delay_DSTATE;                 /* '<S237>/Delay' */
  real_T Delay1_DSTATE_i;              /* '<S237>/Delay1' */
  real_T UnitDelay6_DSTATE;            /* '<S159>/Unit Delay6' */
  real_T UnitDelay11_DSTATE;           /* '<S159>/Unit Delay11' */
  real_T UnitDelay7_DSTATE;            /* '<S159>/Unit Delay7' */
  real_T i;                            /* '<Root>/Main_OS' */
  real_T Subtract2_DWORK1;             /* '<S229>/Subtract2' */
  real_T iter_cnt;                     /* '<S229>/Chart1' */
  real32_T Delay5_DSTATE;              /* '<S239>/Delay5' */
  real32_T Delay1_DSTATE_b;            /* '<S239>/Delay1' */
  real32_T UnitDelay_DSTATE;           /* '<S235>/Unit Delay' */
  real32_T UnitDelay_DSTATE_m;         /* '<S236>/Unit Delay' */
  real32_T Delay5_DSTATE_o;            /* '<S238>/Delay5' */
  real32_T UnitDelay_DSTATE_h;         /* '<S141>/Unit Delay' */
  real32_T UnitDelay2_DSTATE;          /* '<S114>/Unit Delay2' */
  real32_T UnitDelay1_DSTATE;          /* '<S114>/Unit Delay1' */
  real32_T Delay1_DSTATE_ib;           /* '<S168>/Delay1' */
  real32_T Delay_DSTATE_m;             /* '<S168>/Delay' */
  real32_T Delay_DSTATE_f;             /* '<S171>/Delay' */
  real32_T Delay2_DSTATE;              /* '<S171>/Delay2' */
  real32_T Delay1_DSTATE_e;            /* '<S171>/Delay1' */
  real32_T Delay2_DSTATE_e;            /* '<S6>/Delay2' */
  real32_T UnitDelay_DSTATE_b;         /* '<S25>/Unit Delay' */
  real32_T UnitDelay_DSTATE_j;         /* '<S57>/Unit Delay' */
  real32_T UnitDelay_DSTATE_d;         /* '<S23>/Unit Delay' */
  real32_T UnitDelay_DSTATE_g;         /* '<S24>/Unit Delay' */
  real32_T UnitDelay_DSTATE_f;         /* '<S26>/Unit Delay' */
  real32_T UnitDelay_DSTATE_a;         /* '<S83>/Unit Delay' */
  real32_T UnitDelay_DSTATE_l;         /* '<S82>/Unit Delay' */
  real32_T UnitDelay1_DSTATE_j;        /* '<S71>/Unit Delay1' */
  real32_T UnitDelay_DSTATE_ly;        /* '<S71>/Unit Delay' */
  real32_T UnitDelay_DSTATE_n;         /* '<S81>/Unit Delay' */
  real32_T UnitDelay_DSTATE_do;        /* '<S86>/Unit Delay' */
  real32_T UnitDelay_DSTATE_k;         /* '<S32>/Unit Delay' */
  real32_T UnitDelay_DSTATE_fy;        /* '<S105>/Unit Delay' */
  real32_T UnitDelay_DSTATE_l1;        /* '<S103>/Unit Delay' */
  real32_T UnitDelay_DSTATE_p;         /* '<S44>/Unit Delay' */
  real32_T UnitDelay_DSTATE_ah;        /* '<S102>/Unit Delay' */
  real32_T UnitDelay_DSTATE_jh;        /* '<S38>/Unit Delay' */
  real32_T UnitDelay_DSTATE_f3;        /* '<S224>/Unit Delay' */
  real32_T UnitDelay_DSTATE_mw;        /* '<S147>/Unit Delay' */
  real32_T Delay1_DSTATE_a;            /* '<S112>/Delay1' */
  real32_T Delay_DSTATE_fy;            /* '<S112>/Delay' */
  real32_T count;                      /* '<S202>/Trigger Hold' */
  real32_T count_enable;               /* '<S202>/Trigger Hold' */
  real32_T i_h;                        /* '<S178>/signal_sustain' */
  real32_T i_l;                        /* '<S148>/CR_inhibit' */
  real32_T i_n;                        /* '<S142>/signal_sustain' */
  real32_T i_m;                        /* '<S112>/left_distance_sustain_period' */
  real32_T i_o;                        /* '<S112>/Right_distance_sustain_period' */
  uint8_T UnitDelay2_DSTATE_i;         /* '<S47>/Unit Delay2' */
  uint8_T UnitDelay1_DSTATE_e;         /* '<S38>/Unit Delay1' */
  boolean_T UnitDelay1_DSTATE_l;       /* '<S112>/Unit Delay1' */
  boolean_T UnitDelay2_DSTATE_p;       /* '<S112>/Unit Delay2' */
  uint8_T is_active_c4_LCK;            /* '<S229>/Chart1' */
  uint8_T is_c4_LCK;                   /* '<S229>/Chart1' */
  uint8_T is_active_c9_LCK;            /* '<S6>/Chart1' */
  uint8_T is_c9_LCK;                   /* '<S6>/Chart1' */
  uint8_T is_active_c3_LCK;            /* '<S6>/Chart' */
  uint8_T is_c3_LCK;                   /* '<S6>/Chart' */
  uint8_T is_active_c42_LCK;           /* '<S160>/LCK_TJA_LatRq_Manager' */
  uint8_T is_c42_LCK;                  /* '<S160>/LCK_TJA_LatRq_Manager' */
  uint8_T is_LatRqOn;                  /* '<S160>/LCK_TJA_LatRq_Manager' */
  uint8_T is_active_c106_sBhctwPzzXYJVM5h;/* '<S178>/signal_sustain' */
  uint8_T is_c106_sBhctwPzzXYJVM5hCuWKUwD;/* '<S178>/signal_sustain' */
  uint8_T is_active_c6_LCK;            /* '<S153>/Chart' */
  uint8_T is_c6_LCK;                   /* '<S153>/Chart' */
  uint8_T is_active_c177_LCK;          /* '<S5>/LCK Mode Manager' */
  uint8_T is_c177_LCK;                 /* '<S5>/LCK Mode Manager' */
  uint8_T is_LCKActive;                /* '<S5>/LCK Mode Manager' */
  uint8_T is_active_c201_LateralControl_f;/* '<S148>/CR_inhibit' */
  uint8_T is_c201_LateralControl_fcns_lib;/* '<S148>/CR_inhibit' */
  uint8_T is_active_c106_sBhctwPzzXYJVM_m;/* '<S142>/signal_sustain' */
  uint8_T is_c106_sBhctwPzzXYJVM5hCuWKU_o;/* '<S142>/signal_sustain' */
  uint8_T is_active_c176_LCK;          /* '<S112>/left_distance_sustain_period' */
  uint8_T is_c176_LCK;                 /* '<S112>/left_distance_sustain_period' */
  uint8_T is_active_c175_LCK;          /* '<S112>/Right_distance_sustain_period' */
  uint8_T is_c175_LCK;                 /* '<S112>/Right_distance_sustain_period' */
  uint8_T is_active_c36_LCK;           /* '<S60>/Chart1' */
  uint8_T is_c36_LCK;                  /* '<S60>/Chart1' */
  uint8_T is_active_c33_LCK;           /* '<S59>/Chart' */
  uint8_T is_c33_LCK;                  /* '<S59>/Chart' */
  boolean_T Relay1_Mode;               /* '<S73>/Relay1' */
  boolean_T Relay_Mode;                /* '<S61>/Relay' */
  boolean_T Relay_Mode_a;              /* '<S73>/Relay' */
  boolean_T Relay1_Mode_j;             /* '<S61>/Relay1' */
  boolean_T Relay2_Mode;               /* '<S73>/Relay2' */
  boolean_T Relay_Mode_p;              /* '<S94>/Relay' */
  boolean_T Relay1_Mode_f;             /* '<S94>/Relay1' */
  DW_signal_sustain_LCK_T sf_signal_sustain_js;/* '<S243>/signal_sustain' */
  DW_signal_sustain_LCK_T sf_signal_sustain_n;/* '<S242>/signal_sustain' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_a; /* '<S223>/Delay_Trig' */
  DW_Delay_Trig_LCK_l_T sf_Delay_Trig_n;/* '<S219>/Delay_Trig' */
  DW_Delay_Trig_LCK_l_T sf_Delay_Trig_po;/* '<S218>/Delay_Trig' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_p5;/* '<S217>/Delay_Trig' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_pj;/* '<S210>/Delay_Trig' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_cq;/* '<S209>/Delay_Trig' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_b; /* '<S208>/Delay_Trig' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_k; /* '<S207>/Delay_Trig' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_ia;/* '<S206>/Delay_Trig' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_c4;/* '<S200>/Delay_Trig' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_pt;/* '<S199>/Delay_Trig' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_gk;/* '<S190>/Delay_Trig' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_gg;/* '<S189>/Delay_Trig' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_pg;/* '<S188>/Delay_Trig' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_le;/* '<S187>/Delay_Trig' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_o; /* '<S186>/Delay_Trig' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_iu;/* '<S185>/Delay_Trig' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_g; /* '<S184>/Delay_Trig' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_l; /* '<S182>/Delay_Trig' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_cb;/* '<S177>/Delay_Trig' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig_i; /* '<S174>/Delay_Trig' */
  DW_Delay_Trig_LCK_o_T sf_Delay_Trig_c;/* '<S140>/Delay_Trig' */
  DW_Delay_Trig_LCK_o_T sf_Delay_Trig_p;/* '<S139>/Delay_Trig' */
  DW_Sustain_wo_reset_LCK_g_T sf_Sustain_wo_reset_m0;/* '<S128>/Sustain_wo_reset' */
  DW_Sustain_wo_reset_LCK_g_T sf_Sustain_wo_reset_n;/* '<S127>/Sustain_wo_reset' */
  DW_Sustain_wo_reset_LCK_g_T sf_Sustain_wo_reset_j;/* '<S126>/Sustain_wo_reset' */
  DW_Sustain_wo_reset_LCK_e_T sf_Sustain_wo_reset_i;/* '<S125>/Sustain_wo_reset' */
  DW_Sustain_wo_reset_LCK_T sf_Sustain_wo_reset_h;/* '<S124>/Sustain_wo_reset' */
  DW_Sustain_wo_reset_LCK_g_T sf_Sustain_wo_reset_f5;/* '<S123>/Sustain_wo_reset' */
  DW_Sustain_wo_reset_LCK_g_T sf_Sustain_wo_reset_f;/* '<S122>/Sustain_wo_reset' */
  DW_Sustain_wo_reset_LCK_g_T sf_Sustain_wo_reset_m;/* '<S121>/Sustain_wo_reset' */
  DW_Sustain_wo_reset_LCK_e_T sf_Sustain_wo_reset_c;/* '<S120>/Sustain_wo_reset' */
  DW_Sustain_wo_reset_LCK_T sf_Sustain_wo_reset;/* '<S119>/Sustain_wo_reset' */
  DW_Delay_Trig_LCK_T sf_Delay_Trig;   /* '<S51>/Delay_Trig' */
} DW_LCK_f_T;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

#ifndef LCK_MDLREF_HIDE_CHILD_

/* Parameters (default storage) */
struct P_LCK_T_ {
  real32_T CompareToConstant_const;    /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S55>/Constant'
                                        */
  real32_T CompareToConstant1_const;   /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S56>/Constant'
                                        */
  uint8_T CompareToConstant4_const;    /* Mask Parameter: CompareToConstant4_const
                                        * Referenced by: '<S69>/Constant'
                                        */
  uint8_T CompareToConstant_const_n;   /* Mask Parameter: CompareToConstant_const_n
                                        * Referenced by: '<S39>/Constant'
                                        */
  uint8_T CompareToConstant1_const_m;  /* Mask Parameter: CompareToConstant1_const_m
                                        * Referenced by: '<S40>/Constant'
                                        */
  struct_mangFo2BVnlYQ9swmRAj7G LCK_Debug_Info_Y0;/* Computed Parameter: LCK_Debug_Info_Y0
                                                   * Referenced by: '<S1>/LCK_Debug_Info'
                                                   */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S112>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S112>/Constant'
                                        */
  real_T Constant11_Value;             /* Expression: 4
                                        * Referenced by: '<S115>/Constant11'
                                        */
  real_T LSS_SnvtySet_Value;           /* Expression: 0
                                        * Referenced by: '<S115>/LSS_SnvtySet'
                                        */
  real_T LSS_SnvtySet_Value_d;         /* Expression: 0
                                        * Referenced by: '<S116>/LSS_SnvtySet'
                                        */
  real_T Delay1_InitialCondition[3200];/* Expression: zeros(400,8)
                                        * Referenced by: '<S229>/Delay1'
                                        */
  real_T Constant1_Value_h;            /* Expression: 0.5
                                        * Referenced by: '<S239>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0.5
                                        * Referenced by: '<S239>/Constant2'
                                        */
  real_T Constant29_Value;             /* Expression: 1
                                        * Referenced by: '<S239>/Constant29'
                                        */
  real_T Constant3_Value;              /* Expression: 6
                                        * Referenced by: '<S239>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 5
                                        * Referenced by: '<S239>/Constant4'
                                        */
  real_T Constant4_Value_k;            /* Expression: 1
                                        * Referenced by: '<S6>/Constant4'
                                        */
  real_T Constant19_Value;             /* Expression: 0
                                        * Referenced by: '<S166>/Constant19'
                                        */
  real_T Constant19_Value_j;           /* Expression: 0
                                        * Referenced by: '<S111>/Constant19'
                                        */
  real_T Constant6_Value;              /* Expression: 4
                                        * Referenced by: '<S152>/Constant6'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0
                                        * Referenced by: '<S237>/Delay'
                                        */
  real_T Constant37_Value;             /* Expression: 3
                                        * Referenced by: '<S237>/Constant37'
                                        */
  real_T Constant1_Value_l;            /* Expression: 4
                                        * Referenced by: '<S232>/Constant1'
                                        */
  real_T Constant3_Value_h;            /* Expression: 3
                                        * Referenced by: '<S232>/Constant3'
                                        */
  real_T Constant5_Value;              /* Expression: 2
                                        * Referenced by: '<S232>/Constant5'
                                        */
  real_T Constant6_Value_m;            /* Expression: 1
                                        * Referenced by: '<S232>/Constant6'
                                        */
  real_T Constant34_Value;             /* Expression: 3
                                        * Referenced by: '<S237>/Constant34'
                                        */
  real_T Constant53_Value;             /* Expression: 2000
                                        * Referenced by: '<S237>/Constant53'
                                        */
  real_T Constant56_Value;             /* Expression: 3
                                        * Referenced by: '<S237>/Constant56'
                                        */
  real_T Delay1_InitialCondition_c;    /* Expression: 0
                                        * Referenced by: '<S237>/Delay1'
                                        */
  real_T Constant39_Value;             /* Expression: 3
                                        * Referenced by: '<S237>/Constant39'
                                        */
  real_T Constant36_Value;             /* Expression: 3
                                        * Referenced by: '<S237>/Constant36'
                                        */
  real_T Constant54_Value;             /* Expression: 2000
                                        * Referenced by: '<S237>/Constant54'
                                        */
  real_T Constant57_Value;             /* Expression: 3
                                        * Referenced by: '<S237>/Constant57'
                                        */
  real_T Constant60_Value;             /* Expression: 3
                                        * Referenced by: '<S234>/Constant60'
                                        */
  real_T Constant61_Value;             /* Expression: 4
                                        * Referenced by: '<S237>/Constant61'
                                        */
  real_T Constant55_Value;             /* Expression: 0
                                        * Referenced by: '<S237>/Constant55'
                                        */
  real_T Constant29_Value_a;           /* Expression: 4
                                        * Referenced by: '<S238>/Constant29'
                                        */
  real_T Constant63_Value;             /* Expression: 4
                                        * Referenced by: '<S237>/Constant63'
                                        */
  real_T Constant62_Value;             /* Expression: 0
                                        * Referenced by: '<S237>/Constant62'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<S233>/Constant12'
                                        */
  real_T Constant10_Value;             /* Expression: 0
                                        * Referenced by: '<S233>/Constant10'
                                        */
  real_T Constant11_Value_m;           /* Expression: 0
                                        * Referenced by: '<S233>/Constant11'
                                        */
  real_T Constant17_Value;             /* Expression: 1
                                        * Referenced by: '<S233>/Constant17'
                                        */
  real_T Constant15_Value;             /* Expression: 4
                                        * Referenced by: '<S233>/Constant15'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S233>/Constant13'
                                        */
  real_T Constant16_Value;             /* Expression: 4
                                        * Referenced by: '<S233>/Constant16'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<S233>/Constant14'
                                        */
  real_T Constant22_Value;             /* Expression: 2
                                        * Referenced by: '<S233>/Constant22'
                                        */
  real_T Constant20_Value;             /* Expression: 4
                                        * Referenced by: '<S233>/Constant20'
                                        */
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<S233>/Constant18'
                                        */
  real_T Constant21_Value;             /* Expression: 4
                                        * Referenced by: '<S233>/Constant21'
                                        */
  real_T Constant19_Value_p;           /* Expression: 0
                                        * Referenced by: '<S233>/Constant19'
                                        */
  real_T Constant27_Value;             /* Expression: 3
                                        * Referenced by: '<S233>/Constant27'
                                        */
  real_T Constant25_Value;             /* Expression: 4
                                        * Referenced by: '<S233>/Constant25'
                                        */
  real_T Constant23_Value;             /* Expression: 0
                                        * Referenced by: '<S233>/Constant23'
                                        */
  real_T Constant26_Value;             /* Expression: 4
                                        * Referenced by: '<S233>/Constant26'
                                        */
  real_T Constant24_Value;             /* Expression: 0
                                        * Referenced by: '<S233>/Constant24'
                                        */
  real_T Constant28_Value;             /* Expression: 0
                                        * Referenced by: '<S233>/Constant28'
                                        */
  real_T Constant59_Value;             /* Expression: 3
                                        * Referenced by: '<S234>/Constant59'
                                        */
  real_T Constant4_Value_ky;           /* Expression: 1
                                        * Referenced by: '<S167>/Constant4'
                                        */
  real_T Gain_Gain;                    /* Expression: 0.5
                                        * Referenced by: '<S167>/Gain'
                                        */
  real_T Switch77_Threshold;           /* Expression: 0.5
                                        * Referenced by: '<S167>/Switch77'
                                        */
  real_T Constant4_Value_p;            /* Expression: 1
                                        * Referenced by: '<S111>/Constant4'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S167>/Constant1'
                                        */
  real_T Constant5_Value_l;            /* Expression: 0
                                        * Referenced by: '<S167>/Constant5'
                                        */
  real_T Constant2_Value_o;            /* Expression: 0
                                        * Referenced by: '<S167>/Constant2'
                                        */
  real_T Constant11_Value_b;           /* Expression: 0
                                        * Referenced by: '<S167>/Constant11'
                                        */
  real_T Constant16_Value_c;           /* Expression: 0
                                        * Referenced by: '<S167>/Constant16'
                                        */
  real_T Constant3_Value_f;            /* Expression: 0
                                        * Referenced by: '<S167>/Constant3'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<S167>/Constant9'
                                        */
  real_T Constant15_Value_j;           /* Expression: 0
                                        * Referenced by: '<S167>/Constant15'
                                        */
  real_T ZERO7_Value;                  /* Expression: 0
                                        * Referenced by: '<S162>/ZERO7'
                                        */
  real_T Constant51_Value;             /* Expression: 1
                                        * Referenced by: '<S170>/Constant51'
                                        */
  real_T Constant50_Value;             /* Expression: 0
                                        * Referenced by: '<S170>/Constant50'
                                        */
  real_T Constant1_Value_lo;           /* Expression: 0
                                        * Referenced by: '<S111>/Constant1'
                                        */
  real_T UnitDelay6_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S159>/Unit Delay6'
                                        */
  real_T UnitDelay11_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S159>/Unit Delay11'
                                        */
  real_T UnitDelay7_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S159>/Unit Delay7'
                                        */
  real_T Constant52_Value;             /* Expression: 2
                                        * Referenced by: '<S170>/Constant52'
                                        */
  real_T Constant4_Value_n;            /* Expression: 1
                                        * Referenced by: '<S169>/Constant4'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 0.5
                                        * Referenced by: '<S169>/Gain'
                                        */
  real_T Constant54_Value_o;           /* Expression: 1
                                        * Referenced by: '<S172>/Constant54'
                                        */
  real_T k_LCK_VehSpd_LowLmtFus_Rdy2Idl_;/* Expression: 0
                                          * Referenced by: '<S169>/k_LCK_VehSpd_LowLmtFus_Rdy2Idl'
                                          */
  real_T Switch11_Threshold;           /* Expression: 0.5
                                        * Referenced by: '<S169>/Switch11'
                                        */
  real_T Constant22_Value_a;           /* Expression: 1
                                        * Referenced by: '<S169>/Constant22'
                                        */
  real_T Constant3_Value_d;            /* Expression: 0
                                        * Referenced by: '<S169>/Constant3'
                                        */
  real_T Constant55_Value_a;           /* Expression: 2
                                        * Referenced by: '<S169>/Constant55'
                                        */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S169>/Constant1'
                                        */
  real_T Constant2_Value_o0;           /* Expression: 0
                                        * Referenced by: '<S169>/Constant2'
                                        */
  real_T Constant18_Value_d;           /* Expression: 0
                                        * Referenced by: '<S169>/Constant18'
                                        */
  real_T Constant24_Value_m;           /* Expression: 0
                                        * Referenced by: '<S169>/Constant24'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S169>/Constant8'
                                        */
  real_T Constant10_Value_h;           /* Expression: 0
                                        * Referenced by: '<S169>/Constant10'
                                        */
  real_T Constant29_Value_c;           /* Expression: 0
                                        * Referenced by: '<S169>/Constant29'
                                        */
  real_T Constant1_Value_f;            /* Expression: 1
                                        * Referenced by: '<S153>/Constant1'
                                        */
  real_T Constant20_Value_o;           /* Expression: 1
                                        * Referenced by: '<S160>/Constant20'
                                        */
  real_T Constant61_Value_k;           /* Expression: 0
                                        * Referenced by: '<S113>/Constant61'
                                        */
  real_T Constant1_Value_i;            /* Expression: 0
                                        * Referenced by: '<S113>/Constant1'
                                        */
  real_T Constant5_Value_c;            /* Expression: 0
                                        * Referenced by: '<S111>/Constant5'
                                        */
  real_T ELK_MODE_STAGE1_LEFT_Value;   /* Expression: 10
                                        * Referenced by: '<S168>/ELK_MODE_STAGE1_LEFT'
                                        */
  real_T Constant40_Value;             /* Expression: 2
                                        * Referenced by: '<S168>/Constant40'
                                        */
  real_T LCK_HaloTime_Expired_Value;   /* Expression: 1
                                        * Referenced by: '<S168>/LCK_HaloTime_Expired'
                                        */
  real_T Constant32_Value;             /* Expression: 0
                                        * Referenced by: '<S168>/Constant32'
                                        */
  real_T Constant30_Value;             /* Expression: 0
                                        * Referenced by: '<S168>/Constant30'
                                        */
  real_T Constant36_Value_o;           /* Expression: 0
                                        * Referenced by: '<S168>/Constant36'
                                        */
  real_T Constant33_Value;             /* Expression: 0
                                        * Referenced by: '<S168>/Constant33'
                                        */
  real_T Constant34_Value_a;           /* Expression: 0
                                        * Referenced by: '<S168>/Constant34'
                                        */
  real_T Constant37_Value_c;           /* Expression: 0
                                        * Referenced by: '<S168>/Constant37'
                                        */
  real_T Constant38_Value;             /* Expression: 0
                                        * Referenced by: '<S168>/Constant38'
                                        */
  real_T Constant35_Value;             /* Expression: 0
                                        * Referenced by: '<S168>/Constant35'
                                        */
  real_T const2_Value;                 /* Expression: 0
                                        * Referenced by: '<S151>/const2'
                                        */
  real_T const1_Value;                 /* Expression: 0
                                        * Referenced by: '<S151>/const1'
                                        */
  real_T const3_Value;                 /* Expression: 0
                                        * Referenced by: '<S151>/const3'
                                        */
  real_T Constant70_Value;             /* Expression: 0
                                        * Referenced by: '<S151>/Constant70'
                                        */
  real_T Constant3_Value_h3;           /* Expression: 0
                                        * Referenced by: '<S5>/Constant3'
                                        */
  real_T Constant1_Value_a;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant1'
                                        */
  real_T ELK_MODE_STAGE1_LEFT1_Value;  /* Expression: 10
                                        * Referenced by: '<S151>/ELK_MODE_STAGE1_LEFT1'
                                        */
  real_T Constant55_Value_l;           /* Expression: 2
                                        * Referenced by: '<S151>/Constant55'
                                        */
  real_T Constant1_Value_lm;           /* Expression: 0
                                        * Referenced by: '<S151>/Constant1'
                                        */
  real_T Constant39_Value_l;           /* Expression: 0
                                        * Referenced by: '<S151>/Constant39'
                                        */
  real_T Constant45_Value;             /* Expression: 0
                                        * Referenced by: '<S151>/Constant45'
                                        */
  real_T Constant42_Value;             /* Expression: 0
                                        * Referenced by: '<S151>/Constant42'
                                        */
  real_T Constant43_Value;             /* Expression: 0
                                        * Referenced by: '<S151>/Constant43'
                                        */
  real_T Constant46_Value;             /* Expression: 0
                                        * Referenced by: '<S151>/Constant46'
                                        */
  real_T Constant47_Value;             /* Expression: 0
                                        * Referenced by: '<S151>/Constant47'
                                        */
  real_T Constant44_Value;             /* Expression: 0
                                        * Referenced by: '<S151>/Constant44'
                                        */
  real_T const26_Value;                /* Expression: 1
                                        * Referenced by: '<S155>/const26'
                                        */
  real_T const27_Value;                /* Expression: 1
                                        * Referenced by: '<S155>/const27'
                                        */
  real_T const28_Value;                /* Expression: 1
                                        * Referenced by: '<S155>/const28'
                                        */
  real_T const21_Value;                /* Expression: 4
                                        * Referenced by: '<S171>/const21'
                                        */
  real_T const9_Value;                 /* Expression: 0
                                        * Referenced by: '<S171>/const9'
                                        */
  real_T const1_Value_a;               /* Expression: 1
                                        * Referenced by: '<S171>/const1'
                                        */
  real_T const11_Value;                /* Expression: 1
                                        * Referenced by: '<S171>/const11'
                                        */
  real_T const12_Value;                /* Expression: -1
                                        * Referenced by: '<S171>/const12'
                                        */
  real_T const3_Value_m;               /* Expression: 2
                                        * Referenced by: '<S171>/const3'
                                        */
  real_T const4_Value;                 /* Expression: 2
                                        * Referenced by: '<S171>/const4'
                                        */
  real_T const2_Value_k;               /* Expression: 1
                                        * Referenced by: '<S171>/const2'
                                        */
  real_T const6_Value;                 /* Expression: 0.3
                                        * Referenced by: '<S171>/const6'
                                        */
  real_T const7_Value;                 /* Expression: 0.0087
                                        * Referenced by: '<S171>/const7'
                                        */
  real_T const8_Value;                 /* Expression: 2
                                        * Referenced by: '<S171>/const8'
                                        */
  real_T const5_Value;                 /* Expression: 4
                                        * Referenced by: '<S171>/const5'
                                        */
  real_T Constant3_Value_p;            /* Expression: 5
                                        * Referenced by: '<S6>/Constant3'
                                        */
  real_T Constant6_Value_l;            /* Expression: -1
                                        * Referenced by: '<S6>/Constant6'
                                        */
  real_T Constant5_Value_e;            /* Expression: 6
                                        * Referenced by: '<S6>/Constant5'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S6>/Constant7'
                                        */
  real_T Constant1_Value_c;            /* Expression: 4
                                        * Referenced by: '<S6>/Constant1'
                                        */
  real_T Constant1_Value_hr;           /* Expression: 50
                                        * Referenced by: '<S229>/Constant1'
                                        */
  real_T Constant_Value_o;             /* Expression: 0
                                        * Referenced by: '<S229>/Constant'
                                        */
  real_T Constant10_Value_i;           /* Expression: 1
                                        * Referenced by: '<S229>/Constant10'
                                        */
  real_T Constant9_Value_c;            /* Expression: 3
                                        * Referenced by: '<S229>/Constant9'
                                        */
  real_T Constant7_Value_n;            /* Expression: 6
                                        * Referenced by: '<S229>/Constant7'
                                        */
  real_T Gain1_Gain;                   /* Expression: -0.5
                                        * Referenced by: '<S6>/Gain1'
                                        */
  real_T RadUpLmt_Value;               /* Expression: 4000
                                        * Referenced by: '<S60>/RadUpLmt'
                                        */
  real_T RadLowLmt_Value;              /* Expression: 3800
                                        * Referenced by: '<S60>/RadLowLmt'
                                        */
  real_T Constant3_Value_g;            /* Expression: 1
                                        * Referenced by: '<S47>/Constant3'
                                        */
  real_T Constant4_Value_nl;           /* Expression: 0
                                        * Referenced by: '<S47>/Constant4'
                                        */
  real_T Constant3_Value_a;            /* Expression: 0
                                        * Referenced by: '<S37>/Constant3'
                                        */
  real_T Constant29_Value_j;           /* Expression: 0
                                        * Referenced by: '<S7>/Constant29'
                                        */
  real_T Constant1_Value_o;            /* Expression: 4
                                        * Referenced by: '<S7>/Constant1'
                                        */
  real_T Constant3_Value_k;            /* Expression: 5
                                        * Referenced by: '<S7>/Constant3'
                                        */
  real_T Constant4_Value_i;            /* Expression: 1
                                        * Referenced by: '<S7>/Constant4'
                                        */
  real_T Constant6_Value_k;            /* Expression: 2
                                        * Referenced by: '<S7>/Constant6'
                                        */
  real_T Constant5_Value_b;            /* Expression: 6
                                        * Referenced by: '<S7>/Constant5'
                                        */
  real_T Constant7_Value_j;            /* Expression: 0
                                        * Referenced by: '<S7>/Constant7'
                                        */
  real32_T Gain_Gain_m;                /* Computed Parameter: Gain_Gain_m
                                        * Referenced by: '<S112>/Gain'
                                        */
  real32_T Switch3_Threshold;          /* Computed Parameter: Switch3_Threshold
                                        * Referenced by: '<S112>/Switch3'
                                        */
  real32_T Delay1_InitialCondition_d;  /* Computed Parameter: Delay1_InitialCondition_d
                                        * Referenced by: '<S112>/Delay1'
                                        */
  real32_T Switch2_Threshold;          /* Computed Parameter: Switch2_Threshold
                                        * Referenced by: '<S112>/Switch2'
                                        */
  real32_T Delay_InitialCondition_n;   /* Computed Parameter: Delay_InitialCondition_n
                                        * Referenced by: '<S112>/Delay'
                                        */
  real32_T UnitDelay_InitialCondition; /* Computed Parameter: UnitDelay_InitialCondition
                                        * Referenced by: '<S147>/Unit Delay'
                                        */
  real32_T Saturation_UpperSat;        /* Computed Parameter: Saturation_UpperSat
                                        * Referenced by: '<S147>/Saturation'
                                        */
  real32_T Saturation_LowerSat;        /* Computed Parameter: Saturation_LowerSat
                                        * Referenced by: '<S147>/Saturation'
                                        */
  real32_T UnitDelay_InitialCondition_k;/* Computed Parameter: UnitDelay_InitialCondition_k
                                         * Referenced by: '<S224>/Unit Delay'
                                         */
  real32_T LatCtrl_LCK_TorqCmd_Y0;     /* Computed Parameter: LatCtrl_LCK_TorqCmd_Y0
                                        * Referenced by: '<S1>/LatCtrl_LCK_TorqCmd'
                                        */
  real32_T Lateral_HMI_Y0;             /* Computed Parameter: Lateral_HMI_Y0
                                        * Referenced by: '<S1>/Lateral_HMI'
                                        */
  real32_T LC_dx_Y0;                   /* Computed Parameter: LC_dx_Y0
                                        * Referenced by: '<S1>/LC_dx'
                                        */
  real32_T Gain2_Gain;                 /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<S239>/Gain2'
                                        */
  real32_T Delay5_InitialCondition;    /* Computed Parameter: Delay5_InitialCondition
                                        * Referenced by: '<S239>/Delay5'
                                        */
  real32_T Gain3_Gain;                 /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<S239>/Gain3'
                                        */
  real32_T Delay1_InitialCondition_cy; /* Computed Parameter: Delay1_InitialCondition_cy
                                        * Referenced by: '<S239>/Delay1'
                                        */
  real32_T Gain4_Gain;                 /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<S239>/Gain4'
                                        */
  real32_T Gain_Gain_i;                /* Computed Parameter: Gain_Gain_i
                                        * Referenced by: '<S239>/Gain'
                                        */
  real32_T Gain1_Gain_p;               /* Computed Parameter: Gain1_Gain_p
                                        * Referenced by: '<S239>/Gain1'
                                        */
  real32_T Gain5_Gain;                 /* Computed Parameter: Gain5_Gain
                                        * Referenced by: '<S239>/Gain5'
                                        */
  real32_T Switch5_Threshold;          /* Computed Parameter: Switch5_Threshold
                                        * Referenced by: '<S166>/Switch5'
                                        */
  real32_T UnitDelay_InitialCondition_e;/* Computed Parameter: UnitDelay_InitialCondition_e
                                         * Referenced by: '<S235>/Unit Delay'
                                         */
  real32_T Saturation_UpperSat_e;      /* Computed Parameter: Saturation_UpperSat_e
                                        * Referenced by: '<S235>/Saturation'
                                        */
  real32_T Saturation_LowerSat_c;      /* Computed Parameter: Saturation_LowerSat_c
                                        * Referenced by: '<S235>/Saturation'
                                        */
  real32_T UnitDelay_InitialCondition_l;/* Computed Parameter: UnitDelay_InitialCondition_l
                                         * Referenced by: '<S236>/Unit Delay'
                                         */
  real32_T Saturation_UpperSat_c;      /* Computed Parameter: Saturation_UpperSat_c
                                        * Referenced by: '<S236>/Saturation'
                                        */
  real32_T Saturation_LowerSat_o;      /* Computed Parameter: Saturation_LowerSat_o
                                        * Referenced by: '<S236>/Saturation'
                                        */
  real32_T Delay5_InitialCondition_b;  /* Computed Parameter: Delay5_InitialCondition_b
                                        * Referenced by: '<S238>/Delay5'
                                        */
  real32_T UnitDelay_InitialCondition_f;/* Computed Parameter: UnitDelay_InitialCondition_f
                                         * Referenced by: '<S141>/Unit Delay'
                                         */
  real32_T Saturation_UpperSat_ec;     /* Computed Parameter: Saturation_UpperSat_ec
                                        * Referenced by: '<S141>/Saturation'
                                        */
  real32_T Saturation_LowerSat_d;      /* Computed Parameter: Saturation_LowerSat_d
                                        * Referenced by: '<S141>/Saturation'
                                        */
  real32_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                        * Referenced by: '<S114>/Unit Delay2'
                                        */
  real32_T UnitDelay1_InitialCondition;/* Computed Parameter: UnitDelay1_InitialCondition
                                        * Referenced by: '<S114>/Unit Delay1'
                                        */
  real32_T Gain_Gain_o;                /* Computed Parameter: Gain_Gain_o
                                        * Referenced by: '<S114>/Gain'
                                        */
  real32_T Switch67_Threshold;         /* Computed Parameter: Switch67_Threshold
                                        * Referenced by: '<S159>/Switch67'
                                        */
  real32_T Switch63_Threshold;         /* Computed Parameter: Switch63_Threshold
                                        * Referenced by: '<S170>/Switch63'
                                        */
  real32_T Switch64_Threshold;         /* Computed Parameter: Switch64_Threshold
                                        * Referenced by: '<S170>/Switch64'
                                        */
  real32_T Gain17_Gain;                /* Computed Parameter: Gain17_Gain
                                        * Referenced by: '<S172>/Gain17'
                                        */
  real32_T Switch8_Threshold;          /* Computed Parameter: Switch8_Threshold
                                        * Referenced by: '<S169>/Switch8'
                                        */
  real32_T Gain18_Gain;                /* Computed Parameter: Gain18_Gain
                                        * Referenced by: '<S168>/Gain18'
                                        */
  real32_T Saturation_UpperSat_cl;     /* Computed Parameter: Saturation_UpperSat_cl
                                        * Referenced by: '<S168>/Saturation'
                                        */
  real32_T Saturation_LowerSat_k;      /* Computed Parameter: Saturation_LowerSat_k
                                        * Referenced by: '<S168>/Saturation'
                                        */
  real32_T Switch65_Threshold;         /* Computed Parameter: Switch65_Threshold
                                        * Referenced by: '<S168>/Switch65'
                                        */
  real32_T Switch66_Threshold;         /* Computed Parameter: Switch66_Threshold
                                        * Referenced by: '<S168>/Switch66'
                                        */
  real32_T Delay1_InitialCondition_b;  /* Computed Parameter: Delay1_InitialCondition_b
                                        * Referenced by: '<S168>/Delay1'
                                        */
  real32_T Delay_InitialCondition_o;   /* Computed Parameter: Delay_InitialCondition_o
                                        * Referenced by: '<S168>/Delay'
                                        */
  real32_T Switch6_Threshold;          /* Computed Parameter: Switch6_Threshold
                                        * Referenced by: '<S160>/Switch6'
                                        */
  real32_T Switch55_Threshold;         /* Computed Parameter: Switch55_Threshold
                                        * Referenced by: '<S113>/Switch55'
                                        */
  real32_T Switch1_Threshold;          /* Computed Parameter: Switch1_Threshold
                                        * Referenced by: '<S113>/Switch1'
                                        */
  real32_T Switch62_Threshold;         /* Computed Parameter: Switch62_Threshold
                                        * Referenced by: '<S168>/Switch62'
                                        */
  real32_T Switch58_Threshold;         /* Computed Parameter: Switch58_Threshold
                                        * Referenced by: '<S151>/Switch58'
                                        */
  real32_T Delay_InitialCondition_ok;  /* Computed Parameter: Delay_InitialCondition_ok
                                        * Referenced by: '<S171>/Delay'
                                        */
  real32_T Delay2_InitialCondition;    /* Computed Parameter: Delay2_InitialCondition
                                        * Referenced by: '<S171>/Delay2'
                                        */
  real32_T Delay1_InitialCondition_h;  /* Computed Parameter: Delay1_InitialCondition_h
                                        * Referenced by: '<S171>/Delay1'
                                        */
  real32_T Delay2_InitialCondition_g;  /* Computed Parameter: Delay2_InitialCondition_g
                                        * Referenced by: '<S6>/Delay2'
                                        */
  real32_T Saturation1_UpperSat;       /* Computed Parameter: Saturation1_UpperSat
                                        * Referenced by: '<S229>/Saturation1'
                                        */
  real32_T Saturation1_LowerSat;       /* Computed Parameter: Saturation1_LowerSat
                                        * Referenced by: '<S229>/Saturation1'
                                        */
  real32_T UnitDelay_InitialCondition_j;/* Computed Parameter: UnitDelay_InitialCondition_j
                                         * Referenced by: '<S25>/Unit Delay'
                                         */
  real32_T Saturation_UpperSat_k;      /* Computed Parameter: Saturation_UpperSat_k
                                        * Referenced by: '<S25>/Saturation'
                                        */
  real32_T Saturation_LowerSat_k2;     /* Computed Parameter: Saturation_LowerSat_k2
                                        * Referenced by: '<S25>/Saturation'
                                        */
  real32_T UnitDelay_InitialCondition_g;/* Computed Parameter: UnitDelay_InitialCondition_g
                                         * Referenced by: '<S57>/Unit Delay'
                                         */
  real32_T Constant2_Value_b;          /* Computed Parameter: Constant2_Value_b
                                        * Referenced by: '<S17>/Constant2'
                                        */
  real32_T Constant22_Value_j;         /* Computed Parameter: Constant22_Value_j
                                        * Referenced by: '<S17>/Constant22'
                                        */
  real32_T Gain_Gain_ce;               /* Computed Parameter: Gain_Gain_ce
                                        * Referenced by: '<S17>/Gain'
                                        */
  real32_T Saturation_UpperSat_m;      /* Computed Parameter: Saturation_UpperSat_m
                                        * Referenced by: '<S57>/Saturation'
                                        */
  real32_T Saturation_LowerSat_g;      /* Computed Parameter: Saturation_LowerSat_g
                                        * Referenced by: '<S57>/Saturation'
                                        */
  real32_T Lookup_Table_tableData[14]; /* Computed Parameter: Lookup_Table_tableData
                                        * Referenced by: '<S16>/Lookup_Table'
                                        */
  real32_T UnitDelay_InitialCondition_g0;/* Computed Parameter: UnitDelay_InitialCondition_g0
                                          * Referenced by: '<S23>/Unit Delay'
                                          */
  real32_T Saturation_UpperSat_f;      /* Computed Parameter: Saturation_UpperSat_f
                                        * Referenced by: '<S23>/Saturation'
                                        */
  real32_T Saturation_LowerSat_p;      /* Computed Parameter: Saturation_LowerSat_p
                                        * Referenced by: '<S23>/Saturation'
                                        */
  real32_T Constant2_Value_h;          /* Computed Parameter: Constant2_Value_h
                                        * Referenced by: '<S16>/Constant2'
                                        */
  real32_T Constant_Value_a;           /* Computed Parameter: Constant_Value_a
                                        * Referenced by: '<S64>/Constant'
                                        */
  real32_T Constant7_Value_l;          /* Computed Parameter: Constant7_Value_l
                                        * Referenced by: '<S47>/Constant7'
                                        */
  real32_T Constant22_Value_o;         /* Computed Parameter: Constant22_Value_o
                                        * Referenced by: '<S48>/Constant22'
                                        */
  real32_T UnitDelay_InitialCondition_i;/* Computed Parameter: UnitDelay_InitialCondition_i
                                         * Referenced by: '<S24>/Unit Delay'
                                         */
  real32_T Saturation_UpperSat_fe;     /* Computed Parameter: Saturation_UpperSat_fe
                                        * Referenced by: '<S24>/Saturation'
                                        */
  real32_T Saturation_LowerSat_j;      /* Computed Parameter: Saturation_LowerSat_j
                                        * Referenced by: '<S24>/Saturation'
                                        */
  real32_T UnitDelay_InitialCondition_n;/* Computed Parameter: UnitDelay_InitialCondition_n
                                         * Referenced by: '<S26>/Unit Delay'
                                         */
  real32_T Saturation_UpperSat_o;      /* Computed Parameter: Saturation_UpperSat_o
                                        * Referenced by: '<S26>/Saturation'
                                        */
  real32_T Saturation_LowerSat_a;      /* Computed Parameter: Saturation_LowerSat_a
                                        * Referenced by: '<S26>/Saturation'
                                        */
  real32_T Relay1_OnVal;               /* Computed Parameter: Relay1_OnVal
                                        * Referenced by: '<S73>/Relay1'
                                        */
  real32_T Relay1_OffVal;              /* Computed Parameter: Relay1_OffVal
                                        * Referenced by: '<S73>/Relay1'
                                        */
  real32_T Relay1_YOn;                 /* Computed Parameter: Relay1_YOn
                                        * Referenced by: '<S73>/Relay1'
                                        */
  real32_T Relay1_YOff;                /* Computed Parameter: Relay1_YOff
                                        * Referenced by: '<S73>/Relay1'
                                        */
  real32_T Switch15_Threshold;         /* Computed Parameter: Switch15_Threshold
                                        * Referenced by: '<S73>/Switch15'
                                        */
  real32_T Gain_Gain_of;               /* Computed Parameter: Gain_Gain_of
                                        * Referenced by: '<S85>/Gain'
                                        */
  real32_T Relay_OnVal;                /* Computed Parameter: Relay_OnVal
                                        * Referenced by: '<S61>/Relay'
                                        */
  real32_T Relay_OffVal;               /* Computed Parameter: Relay_OffVal
                                        * Referenced by: '<S61>/Relay'
                                        */
  real32_T Relay_YOn;                  /* Computed Parameter: Relay_YOn
                                        * Referenced by: '<S61>/Relay'
                                        */
  real32_T Relay_YOff;                 /* Computed Parameter: Relay_YOff
                                        * Referenced by: '<S61>/Relay'
                                        */
  real32_T Constant_Value_m;           /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S65>/Constant'
                                        */
  real32_T Constant_Value_mf;          /* Computed Parameter: Constant_Value_mf
                                        * Referenced by: '<S66>/Constant'
                                        */
  real32_T UnitDelay_InitialCondition_fy;/* Computed Parameter: UnitDelay_InitialCondition_fy
                                          * Referenced by: '<S83>/Unit Delay'
                                          */
  real32_T Gain2_Gain_l;               /* Computed Parameter: Gain2_Gain_l
                                        * Referenced by: '<S83>/Gain2'
                                        */
  real32_T Gain4_Gain_m;               /* Computed Parameter: Gain4_Gain_m
                                        * Referenced by: '<S71>/Gain4'
                                        */
  real32_T UnitDelay_InitialCondition_d;/* Computed Parameter: UnitDelay_InitialCondition_d
                                         * Referenced by: '<S82>/Unit Delay'
                                         */
  real32_T Gain2_Gain_p;               /* Computed Parameter: Gain2_Gain_p
                                        * Referenced by: '<S82>/Gain2'
                                        */
  real32_T const_Value;                /* Computed Parameter: const_Value
                                        * Referenced by: '<S82>/const'
                                        */
  real32_T const1_Value_p;             /* Computed Parameter: const1_Value_p
                                        * Referenced by: '<S82>/const1'
                                        */
  real32_T Gain_Gain_l;                /* Computed Parameter: Gain_Gain_l
                                        * Referenced by: '<S84>/Gain'
                                        */
  real32_T Relay_OnVal_i;              /* Computed Parameter: Relay_OnVal_i
                                        * Referenced by: '<S73>/Relay'
                                        */
  real32_T Relay_OffVal_n;             /* Computed Parameter: Relay_OffVal_n
                                        * Referenced by: '<S73>/Relay'
                                        */
  real32_T Relay_YOn_g;                /* Computed Parameter: Relay_YOn_g
                                        * Referenced by: '<S73>/Relay'
                                        */
  real32_T Relay_YOff_e;               /* Computed Parameter: Relay_YOff_e
                                        * Referenced by: '<S73>/Relay'
                                        */
  real32_T Switch25_Threshold;         /* Computed Parameter: Switch25_Threshold
                                        * Referenced by: '<S73>/Switch25'
                                        */
  real32_T Relay1_OnVal_c;             /* Computed Parameter: Relay1_OnVal_c
                                        * Referenced by: '<S61>/Relay1'
                                        */
  real32_T Relay1_OffVal_b;            /* Computed Parameter: Relay1_OffVal_b
                                        * Referenced by: '<S61>/Relay1'
                                        */
  real32_T Relay1_YOn_a;               /* Computed Parameter: Relay1_YOn_a
                                        * Referenced by: '<S61>/Relay1'
                                        */
  real32_T Relay1_YOff_c;              /* Computed Parameter: Relay1_YOff_c
                                        * Referenced by: '<S61>/Relay1'
                                        */
  real32_T Constant_Value_h;           /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S67>/Constant'
                                        */
  real32_T Constant_Value_c;           /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S68>/Constant'
                                        */
  real32_T Gain1_Gain_j;               /* Computed Parameter: Gain1_Gain_j
                                        * Referenced by: '<S71>/Gain1'
                                        */
  real32_T Gain_Gain_e;                /* Computed Parameter: Gain_Gain_e
                                        * Referenced by: '<S71>/Gain'
                                        */
  real32_T Constant4_Value_it;         /* Computed Parameter: Constant4_Value_it
                                        * Referenced by: '<S71>/Constant4'
                                        */
  real32_T Constant_Value_ad;          /* Computed Parameter: Constant_Value_ad
                                        * Referenced by: '<S74>/Constant'
                                        */
  real32_T UnitDelay1_InitialCondition_h;/* Computed Parameter: UnitDelay1_InitialCondition_h
                                          * Referenced by: '<S71>/Unit Delay1'
                                          */
  real32_T Gain5_Gain_o;               /* Computed Parameter: Gain5_Gain_o
                                        * Referenced by: '<S71>/Gain5'
                                        */
  real32_T Gain8_Gain;                 /* Computed Parameter: Gain8_Gain
                                        * Referenced by: '<S71>/Gain8'
                                        */
  real32_T Constant5_Value_n;          /* Computed Parameter: Constant5_Value_n
                                        * Referenced by: '<S71>/Constant5'
                                        */
  real32_T UnitDelay_InitialCondition_p;/* Computed Parameter: UnitDelay_InitialCondition_p
                                         * Referenced by: '<S71>/Unit Delay'
                                         */
  real32_T Gain2_Gain_b;               /* Computed Parameter: Gain2_Gain_b
                                        * Referenced by: '<S71>/Gain2'
                                        */
  real32_T Constant5_Value_o;          /* Computed Parameter: Constant5_Value_o
                                        * Referenced by: '<S47>/Constant5'
                                        */
  real32_T Constant1_Value_m;          /* Computed Parameter: Constant1_Value_m
                                        * Referenced by: '<S48>/Constant1'
                                        */
  real32_T UnitDelay_InitialCondition_e2;/* Computed Parameter: UnitDelay_InitialCondition_e2
                                          * Referenced by: '<S81>/Unit Delay'
                                          */
  real32_T Gain2_Gain_k;               /* Computed Parameter: Gain2_Gain_k
                                        * Referenced by: '<S81>/Gain2'
                                        */
  real32_T Relay2_OnVal;               /* Computed Parameter: Relay2_OnVal
                                        * Referenced by: '<S73>/Relay2'
                                        */
  real32_T Relay2_OffVal;              /* Computed Parameter: Relay2_OffVal
                                        * Referenced by: '<S73>/Relay2'
                                        */
  real32_T Relay2_YOn;                 /* Computed Parameter: Relay2_YOn
                                        * Referenced by: '<S73>/Relay2'
                                        */
  real32_T Relay2_YOff;                /* Computed Parameter: Relay2_YOff
                                        * Referenced by: '<S73>/Relay2'
                                        */
  real32_T Switch1_Threshold_g;        /* Computed Parameter: Switch1_Threshold_g
                                        * Referenced by: '<S73>/Switch1'
                                        */
  real32_T Gain3_Gain_m;               /* Computed Parameter: Gain3_Gain_m
                                        * Referenced by: '<S71>/Gain3'
                                        */
  real32_T UnitDelay_InitialCondition_kq;/* Computed Parameter: UnitDelay_InitialCondition_kq
                                          * Referenced by: '<S86>/Unit Delay'
                                          */
  real32_T Saturation_UpperSat_n;      /* Computed Parameter: Saturation_UpperSat_n
                                        * Referenced by: '<S86>/Saturation'
                                        */
  real32_T Saturation_LowerSat_e;      /* Computed Parameter: Saturation_LowerSat_e
                                        * Referenced by: '<S86>/Saturation'
                                        */
  real32_T Saturation_UpperSat_i;      /* Computed Parameter: Saturation_UpperSat_i
                                        * Referenced by: '<S71>/Saturation'
                                        */
  real32_T Saturation_LowerSat_aw;     /* Computed Parameter: Saturation_LowerSat_aw
                                        * Referenced by: '<S71>/Saturation'
                                        */
  real32_T UnitDelay_InitialCondition_b;/* Computed Parameter: UnitDelay_InitialCondition_b
                                         * Referenced by: '<S32>/Unit Delay'
                                         */
  real32_T Constant1_Value_j;          /* Computed Parameter: Constant1_Value_j
                                        * Referenced by: '<S17>/Constant1'
                                        */
  real32_T Gain2_Gain_bt;              /* Computed Parameter: Gain2_Gain_bt
                                        * Referenced by: '<S17>/Gain2'
                                        */
  real32_T Lookup_Table_tableData_h[14];/* Computed Parameter: Lookup_Table_tableData_h
                                         * Referenced by: '<S17>/Lookup_Table'
                                         */
  real32_T Switch8_Threshold_a;        /* Computed Parameter: Switch8_Threshold_a
                                        * Referenced by: '<S31>/Switch8'
                                        */
  real32_T Constant_Value_n;           /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S34>/Constant'
                                        */
  real32_T Constant_Value_g;           /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S33>/Constant'
                                        */
  real32_T Gain_Gain_b;                /* Computed Parameter: Gain_Gain_b
                                        * Referenced by: '<S31>/Gain'
                                        */
  real32_T Constant_Value_cs;          /* Computed Parameter: Constant_Value_cs
                                        * Referenced by: '<S35>/Constant'
                                        */
  real32_T Gain1_Gain_g;               /* Computed Parameter: Gain1_Gain_g
                                        * Referenced by: '<S31>/Gain1'
                                        */
  real32_T Saturation_UpperSat_a;      /* Computed Parameter: Saturation_UpperSat_a
                                        * Referenced by: '<S32>/Saturation'
                                        */
  real32_T Saturation_LowerSat_gy;     /* Computed Parameter: Saturation_LowerSat_gy
                                        * Referenced by: '<S32>/Saturation'
                                        */
  real32_T UnitDelay_InitialCondition_a;/* Computed Parameter: UnitDelay_InitialCondition_a
                                         * Referenced by: '<S105>/Unit Delay'
                                         */
  real32_T UnitDelay_InitialCondition_jm;/* Computed Parameter: UnitDelay_InitialCondition_jm
                                          * Referenced by: '<S103>/Unit Delay'
                                          */
  real32_T Gain2_Gain_a;               /* Computed Parameter: Gain2_Gain_a
                                        * Referenced by: '<S103>/Gain2'
                                        */
  real32_T const_Value_m;              /* Computed Parameter: const_Value_m
                                        * Referenced by: '<S103>/const'
                                        */
  real32_T const1_Value_f;             /* Computed Parameter: const1_Value_f
                                        * Referenced by: '<S103>/const1'
                                        */
  real32_T Relay_OnVal_h;              /* Computed Parameter: Relay_OnVal_h
                                        * Referenced by: '<S94>/Relay'
                                        */
  real32_T Relay_OffVal_l;             /* Computed Parameter: Relay_OffVal_l
                                        * Referenced by: '<S94>/Relay'
                                        */
  real32_T Relay_YOn_e;                /* Computed Parameter: Relay_YOn_e
                                        * Referenced by: '<S94>/Relay'
                                        */
  real32_T Relay_YOff_k;               /* Computed Parameter: Relay_YOff_k
                                        * Referenced by: '<S94>/Relay'
                                        */
  real32_T Switch25_Threshold_i;       /* Computed Parameter: Switch25_Threshold_i
                                        * Referenced by: '<S94>/Switch25'
                                        */
  real32_T CenUpLmt0_Value;            /* Computed Parameter: CenUpLmt0_Value
                                        * Referenced by: '<S59>/CenUpLmt0'
                                        */
  real32_T CenUpLmt1_Value;            /* Computed Parameter: CenUpLmt1_Value
                                        * Referenced by: '<S59>/CenUpLmt1'
                                        */
  real32_T CenLowLmt0_Value;           /* Computed Parameter: CenLowLmt0_Value
                                        * Referenced by: '<S59>/CenLowLmt0'
                                        */
  real32_T CenLowLmt1_Value;           /* Computed Parameter: CenLowLmt1_Value
                                        * Referenced by: '<S59>/CenLowLmt1'
                                        */
  real32_T Constant6_Value_f;          /* Computed Parameter: Constant6_Value_f
                                        * Referenced by: '<S47>/Constant6'
                                        */
  real32_T Constant2_Value_f;          /* Computed Parameter: Constant2_Value_f
                                        * Referenced by: '<S48>/Constant2'
                                        */
  real32_T UnitDelay_InitialCondition_i4;/* Computed Parameter: UnitDelay_InitialCondition_i4
                                          * Referenced by: '<S44>/Unit Delay'
                                          */
  real32_T Saturation_UpperSat_mv;     /* Computed Parameter: Saturation_UpperSat_mv
                                        * Referenced by: '<S44>/Saturation'
                                        */
  real32_T Saturation_LowerSat_ge;     /* Computed Parameter: Saturation_LowerSat_ge
                                        * Referenced by: '<S44>/Saturation'
                                        */
  real32_T Gain1_Gain_c;               /* Computed Parameter: Gain1_Gain_c
                                        * Referenced by: '<S43>/Gain1'
                                        */
  real32_T Constant2_Value_br;         /* Computed Parameter: Constant2_Value_br
                                        * Referenced by: '<S43>/Constant2'
                                        */
  real32_T Gain1_Gain_k;               /* Computed Parameter: Gain1_Gain_k
                                        * Referenced by: '<S92>/Gain1'
                                        */
  real32_T Gain_Gain_c2;               /* Computed Parameter: Gain_Gain_c2
                                        * Referenced by: '<S92>/Gain'
                                        */
  real32_T UnitDelay_InitialCondition_m;/* Computed Parameter: UnitDelay_InitialCondition_m
                                         * Referenced by: '<S102>/Unit Delay'
                                         */
  real32_T Gain2_Gain_o;               /* Computed Parameter: Gain2_Gain_o
                                        * Referenced by: '<S102>/Gain2'
                                        */
  real32_T const_Value_n;              /* Computed Parameter: const_Value_n
                                        * Referenced by: '<S102>/const'
                                        */
  real32_T const1_Value_j;             /* Computed Parameter: const1_Value_j
                                        * Referenced by: '<S102>/const1'
                                        */
  real32_T Relay1_OnVal_a;             /* Computed Parameter: Relay1_OnVal_a
                                        * Referenced by: '<S94>/Relay1'
                                        */
  real32_T Relay1_OffVal_o;            /* Computed Parameter: Relay1_OffVal_o
                                        * Referenced by: '<S94>/Relay1'
                                        */
  real32_T Relay1_YOn_k;               /* Computed Parameter: Relay1_YOn_k
                                        * Referenced by: '<S94>/Relay1'
                                        */
  real32_T Relay1_YOff_p;              /* Computed Parameter: Relay1_YOff_p
                                        * Referenced by: '<S94>/Relay1'
                                        */
  real32_T Switch26_Threshold;         /* Computed Parameter: Switch26_Threshold
                                        * Referenced by: '<S94>/Switch26'
                                        */
  real32_T Gain3_Gain_a;               /* Computed Parameter: Gain3_Gain_a
                                        * Referenced by: '<S92>/Gain3'
                                        */
  real32_T Gain4_Gain_c;               /* Computed Parameter: Gain4_Gain_c
                                        * Referenced by: '<S92>/Gain4'
                                        */
  real32_T Saturation_UpperSat_h;      /* Computed Parameter: Saturation_UpperSat_h
                                        * Referenced by: '<S105>/Saturation'
                                        */
  real32_T Saturation_LowerSat_h;      /* Computed Parameter: Saturation_LowerSat_h
                                        * Referenced by: '<S105>/Saturation'
                                        */
  real32_T Saturation_UpperSat_b;      /* Computed Parameter: Saturation_UpperSat_b
                                        * Referenced by: '<S92>/Saturation'
                                        */
  real32_T Saturation_LowerSat_jc;     /* Computed Parameter: Saturation_LowerSat_jc
                                        * Referenced by: '<S92>/Saturation'
                                        */
  real32_T Constant1_Value_n;          /* Computed Parameter: Constant1_Value_n
                                        * Referenced by: '<S37>/Constant1'
                                        */
  real32_T Switch3_Threshold_b;        /* Computed Parameter: Switch3_Threshold_b
                                        * Referenced by: '<S37>/Switch3'
                                        */
  real32_T Saturation1_UpperSat_k;     /* Computed Parameter: Saturation1_UpperSat_k
                                        * Referenced by: '<S37>/Saturation1'
                                        */
  real32_T Saturation1_LowerSat_a;     /* Computed Parameter: Saturation1_LowerSat_a
                                        * Referenced by: '<S37>/Saturation1'
                                        */
  real32_T Constant1_Value_d;          /* Computed Parameter: Constant1_Value_d
                                        * Referenced by: '<S38>/Constant1'
                                        */
  real32_T UnitDelay_InitialCondition_lb;/* Computed Parameter: UnitDelay_InitialCondition_lb
                                          * Referenced by: '<S38>/Unit Delay'
                                          */
  real32_T Constant3_Value_c;          /* Computed Parameter: Constant3_Value_c
                                        * Referenced by: '<S38>/Constant3'
                                        */
  real32_T Constant2_Value_a;          /* Computed Parameter: Constant2_Value_a
                                        * Referenced by: '<S38>/Constant2'
                                        */
  real32_T const1_Value_jp;            /* Computed Parameter: const1_Value_jp
                                        * Referenced by: '<S38>/const1'
                                        */
  real32_T Gain2_Gain_a5;              /* Computed Parameter: Gain2_Gain_a5
                                        * Referenced by: '<S38>/Gain2'
                                        */
  real32_T const_Value_c;              /* Computed Parameter: const_Value_c
                                        * Referenced by: '<S38>/const'
                                        */
  real32_T Gain3_Gain_g;               /* Computed Parameter: Gain3_Gain_g
                                        * Referenced by: '<S11>/Gain3'
                                        */
  real32_T Gain_Gain_p;                /* Computed Parameter: Gain_Gain_p
                                        * Referenced by: '<S11>/Gain'
                                        */
  real32_T Gain2_Gain_d;               /* Computed Parameter: Gain2_Gain_d
                                        * Referenced by: '<S11>/Gain2'
                                        */
  real32_T Gain1_Gain_f;               /* Computed Parameter: Gain1_Gain_f
                                        * Referenced by: '<S11>/Gain1'
                                        */
  real32_T Gain3_Gain_gl;              /* Computed Parameter: Gain3_Gain_gl
                                        * Referenced by: '<S17>/Gain3'
                                        */
  real32_T Gain_Gain_n;                /* Computed Parameter: Gain_Gain_n
                                        * Referenced by: '<S5>/Gain'
                                        */
  real32_T Constant2_Value_i;          /* Computed Parameter: Constant2_Value_i
                                        * Referenced by: '<S7>/Constant2'
                                        */
  uint32_T Delay1_DelayLength;         /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S112>/Delay1'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S112>/Delay'
                                        */
  uint32_T Delay1_DelayLength_g;       /* Computed Parameter: Delay1_DelayLength_g
                                        * Referenced by: '<S229>/Delay1'
                                        */
  uint32_T Delay5_DelayLength;         /* Computed Parameter: Delay5_DelayLength
                                        * Referenced by: '<S239>/Delay5'
                                        */
  uint32_T Delay1_DelayLength_n;       /* Computed Parameter: Delay1_DelayLength_n
                                        * Referenced by: '<S239>/Delay1'
                                        */
  uint32_T Delay_DelayLength_d;        /* Computed Parameter: Delay_DelayLength_d
                                        * Referenced by: '<S237>/Delay'
                                        */
  uint32_T Delay1_DelayLength_e;       /* Computed Parameter: Delay1_DelayLength_e
                                        * Referenced by: '<S237>/Delay1'
                                        */
  uint32_T Delay5_DelayLength_b;       /* Computed Parameter: Delay5_DelayLength_b
                                        * Referenced by: '<S238>/Delay5'
                                        */
  uint32_T Delay1_DelayLength_p;       /* Computed Parameter: Delay1_DelayLength_p
                                        * Referenced by: '<S168>/Delay1'
                                        */
  uint32_T Delay_DelayLength_k;        /* Computed Parameter: Delay_DelayLength_k
                                        * Referenced by: '<S168>/Delay'
                                        */
  uint32_T Delay_DelayLength_e;        /* Computed Parameter: Delay_DelayLength_e
                                        * Referenced by: '<S171>/Delay'
                                        */
  uint32_T Delay2_DelayLength;         /* Computed Parameter: Delay2_DelayLength
                                        * Referenced by: '<S171>/Delay2'
                                        */
  uint32_T Delay1_DelayLength_i;       /* Computed Parameter: Delay1_DelayLength_i
                                        * Referenced by: '<S171>/Delay1'
                                        */
  uint32_T Delay2_DelayLength_c;       /* Computed Parameter: Delay2_DelayLength_c
                                        * Referenced by: '<S6>/Delay2'
                                        */
  uint16_T const1_Value_c;             /* Computed Parameter: const1_Value_c
                                        * Referenced by: '<S83>/const1'
                                        */
  uint16_T const_Value_k;              /* Computed Parameter: const_Value_k
                                        * Referenced by: '<S83>/const'
                                        */
  uint16_T const_Value_i;              /* Computed Parameter: const_Value_i
                                        * Referenced by: '<S81>/const'
                                        */
  uint16_T const1_Value_g;             /* Computed Parameter: const1_Value_g
                                        * Referenced by: '<S81>/const1'
                                        */
  boolean_T UnitDelay1_InitialCondition_hc;/* Computed Parameter: UnitDelay1_InitialCondition_hc
                                            * Referenced by: '<S112>/Unit Delay1'
                                            */
  boolean_T UnitDelay2_InitialCondition_m;/* Computed Parameter: UnitDelay2_InitialCondition_m
                                           * Referenced by: '<S112>/Unit Delay2'
                                           */
  boolean_T Constant3_Value_i;         /* Computed Parameter: Constant3_Value_i
                                        * Referenced by: '<S111>/Constant3'
                                        */
  boolean_T Constant_Value_p;          /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S19>/Constant'
                                        */
  uint8_T Constant2_Value_bg;          /* Computed Parameter: Constant2_Value_bg
                                        * Referenced by: '<S10>/Constant2'
                                        */
  uint8_T Constant8_Value_e;           /* Computed Parameter: Constant8_Value_e
                                        * Referenced by: '<S22>/Constant8'
                                        */
  uint8_T Constant9_Value_h;           /* Computed Parameter: Constant9_Value_h
                                        * Referenced by: '<S22>/Constant9'
                                        */
  uint8_T Constant5_Value_k;           /* Computed Parameter: Constant5_Value_k
                                        * Referenced by: '<S22>/Constant5'
                                        */
  uint8_T Constant2_Value_or;          /* Computed Parameter: Constant2_Value_or
                                        * Referenced by: '<S22>/Constant2'
                                        */
  uint8_T Constant6_Value_j;           /* Computed Parameter: Constant6_Value_j
                                        * Referenced by: '<S22>/Constant6'
                                        */
  uint8_T Constant10_Value_hk;         /* Computed Parameter: Constant10_Value_hk
                                        * Referenced by: '<S22>/Constant10'
                                        */
  uint8_T Constant2_Value_j;           /* Computed Parameter: Constant2_Value_j
                                        * Referenced by: '<S9>/Constant2'
                                        */
  uint8_T Constant1_Value_n0;          /* Computed Parameter: Constant1_Value_n0
                                        * Referenced by: '<S9>/Constant1'
                                        */
  uint8_T Constant3_Value_o;           /* Computed Parameter: Constant3_Value_o
                                        * Referenced by: '<S9>/Constant3'
                                        */
  uint8_T Constant4_Value_a;           /* Computed Parameter: Constant4_Value_a
                                        * Referenced by: '<S9>/Constant4'
                                        */
  uint8_T Constant2_Value_e;           /* Computed Parameter: Constant2_Value_e
                                        * Referenced by: '<S13>/Constant2'
                                        */
  uint8_T Switch_Threshold;            /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S17>/Switch'
                                        */
  uint8_T UnitDelay2_InitialCondition_i;/* Computed Parameter: UnitDelay2_InitialCondition_i
                                         * Referenced by: '<S47>/Unit Delay2'
                                         */
  uint8_T Switch1_Threshold_p;         /* Computed Parameter: Switch1_Threshold_p
                                        * Referenced by: '<S17>/Switch1'
                                        */
  uint8_T Constant2_Value_c;           /* Computed Parameter: Constant2_Value_c
                                        * Referenced by: '<S37>/Constant2'
                                        */
  uint8_T UnitDelay1_InitialCondition_i;/* Computed Parameter: UnitDelay1_InitialCondition_i
                                         * Referenced by: '<S38>/Unit Delay1'
                                         */
  uint8_T LCK_PID_Main_Version_Value;  /* Computed Parameter: LCK_PID_Main_Version_Value
                                        * Referenced by: '<S4>/LCK_PID_Main_Version'
                                        */
  uint8_T LCK_PID_Minor_Version_Value; /* Computed Parameter: LCK_PID_Minor_Version_Value
                                        * Referenced by: '<S4>/LCK_PID_Minor_Version'
                                        */
};

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

#ifndef LCK_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_LCK_T {
  const char_T **errorStatus;
};

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

#ifndef LCK_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_LCK_T rtm;
} MdlrefDW_LCK_T;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real32_T Road_Radius;           /* '<S17>/Divide' */
extern real32_T LatCtrl_LCK_TorqCmd;   /* '<S38>/Sum1' */
extern real32_T LCK_PID_TorqCmd;       /* '<S37>/Switch1' */
extern real32_T Curvature_Rate;        /* '<S17>/Gain3' */
extern boolean_T I_Term_Reset_Flag;    /* '<S19>/Logical Operator' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real32_T C_DEG2RAD;             /* Variable: C_DEG2RAD
                                        * Referenced by: '<S43>/C_DEG2RAD'
                                        */
extern real32_T C_KPH2MPS;             /* Variable: C_KPH2MPS
                                        * Referenced by:
                                        *   '<S16>/C_KPH2MPS'
                                        *   '<S17>/C_KPH2MPS'
                                        *   '<S229>/Gain'
                                        *   '<S43>/C_KPH2MPS'
                                        */
extern real32_T C_NEARZERO;            /* Variable: C_NEARZERO
                                        * Referenced by:
                                        *   '<S17>/C_NEARZERO'
                                        *   '<S172>/C_NEARZERO'
                                        */
extern real32_T C_ONE;                 /* Variable: C_ONE
                                        * Referenced by: '<S114>/Constant4'
                                        */
extern real32_T C_RAD2DEG;             /* Variable: C_RAD2DEG
                                        * Referenced by:
                                        *   '<S16>/C_RAD2DEG'
                                        *   '<S43>/C_RAD2DEG'
                                        */
extern real32_T C_ZERO;                /* Variable: C_ZERO
                                        * Referenced by:
                                        *   '<S113>/C_ZERO3'
                                        *   '<S113>/C_ZERO4'
                                        *   '<S114>/Constant5'
                                        *   '<S114>/zero_exit_cond'
                                        *   '<S151>/ZERO4'
                                        *   '<S169>/ZERO1'
                                        */
extern real32_T LCK_MODE_ACTIVE;       /* Variable: LCK_MODE_ACTIVE
                                        * Referenced by:
                                        *   '<S5>/LCK Mode Manager'
                                        *   '<S9>/LCK_MODE_ACTIVE'
                                        *   '<S168>/LCK_MODE_ACTIVE2'
                                        */
extern real32_T LCK_MODE_ERROR;        /* Variable: LCK_MODE_ERROR
                                        * Referenced by: '<S5>/LCK Mode Manager'
                                        */
extern real32_T LCK_MODE_IDLE;         /* Variable: LCK_MODE_IDLE
                                        * Referenced by: '<S5>/LCK Mode Manager'
                                        */
extern real32_T LCK_MODE_LEFT_LANE_CHANGE;/* Variable: LCK_MODE_LEFT_LANE_CHANGE
                                           * Referenced by:
                                           *   '<S5>/LCK Mode Manager'
                                           *   '<S9>/LCK_MODE_LEFT_LANE_CHANGE'
                                           */
extern real32_T LCK_MODE_OFF;          /* Variable: LCK_MODE_OFF
                                        * Referenced by: '<S5>/LCK Mode Manager'
                                        */
extern real32_T LCK_MODE_READY;        /* Variable: LCK_MODE_READY
                                        * Referenced by: '<S5>/LCK Mode Manager'
                                        */
extern real32_T LCK_MODE_RIGHT_LANE_CHANGE;/* Variable: LCK_MODE_RIGHT_LANE_CHANGE
                                            * Referenced by:
                                            *   '<S5>/LCK Mode Manager'
                                            *   '<S9>/LCK_MODE_RIGHT_LANE_CHANGE'
                                            */
extern real32_T LEFT_TURN_SIGNAL;      /* Variable: LEFT_TURN_SIGNAL
                                        * Referenced by: '<S113>/LEFT_TURN_SIGNAL'
                                        */
extern real32_T ML_TIME_MSEC;          /* Variable: ML_TIME_MSEC
                                        * Referenced by:
                                        *   '<S5>/LCK Mode Manager'
                                        *   '<S8>/Constant30'
                                        *   '<S8>/Constant42'
                                        *   '<S10>/Constant1'
                                        *   '<S10>/Constant42'
                                        *   '<S10>/Constant43'
                                        *   '<S10>/Constant44'
                                        *   '<S11>/ML_TIME_MSEC2'
                                        *   '<S14>/Constant25'
                                        *   '<S17>/ML_TIME_MSEC'
                                        *   '<S38>/Gain'
                                        *   '<S38>/Gain1'
                                        *   '<S71>/ML_TIME_MSEC2'
                                        *   '<S92>/ML_TIME_MSEC2'
                                        *   '<S112>/Right_distance_sustain_period'
                                        *   '<S112>/left_distance_sustain_period'
                                        *   '<S114>/ML_TIME_MSEC'
                                        *   '<S116>/ML_TIME_MSEC'
                                        *   '<S172>/ML_TIME_MSEC'
                                        *   '<S242>/signal_sustain'
                                        *   '<S243>/signal_sustain'
                                        *   '<S41>/Trigger Hold'
                                        *   '<S49>/Trigger Hold'
                                        *   '<S52>/Trigger Hold'
                                        *   '<S81>/Gain'
                                        *   '<S81>/Gain1'
                                        *   '<S82>/Gain'
                                        *   '<S82>/Gain1'
                                        *   '<S83>/Gain'
                                        *   '<S83>/Gain1'
                                        *   '<S102>/Gain'
                                        *   '<S102>/Gain1'
                                        *   '<S103>/Gain'
                                        *   '<S103>/Gain1'
                                        *   '<S119>/Sustain_wo_reset'
                                        *   '<S120>/Sustain_wo_reset'
                                        *   '<S121>/Sustain_wo_reset'
                                        *   '<S122>/Sustain_wo_reset'
                                        *   '<S123>/Sustain_wo_reset'
                                        *   '<S124>/Sustain_wo_reset'
                                        *   '<S125>/Sustain_wo_reset'
                                        *   '<S126>/Sustain_wo_reset'
                                        *   '<S127>/Sustain_wo_reset'
                                        *   '<S128>/Sustain_wo_reset'
                                        *   '<S142>/signal_sustain'
                                        *   '<S148>/CR_inhibit'
                                        *   '<S178>/signal_sustain'
                                        *   '<S202>/Trigger Hold'
                                        */
extern real32_T ML_TIME_SEC;           /* Variable: ML_TIME_SEC
                                        * Referenced by:
                                        *   '<S229>/ML_TIME_SEC'
                                        *   '<S71>/Constant3'
                                        *   '<S51>/Delay_Trig'
                                        *   '<S174>/Delay_Trig'
                                        *   '<S177>/Delay_Trig'
                                        *   '<S182>/Delay_Trig'
                                        *   '<S184>/Delay_Trig'
                                        *   '<S185>/Delay_Trig'
                                        *   '<S186>/Delay_Trig'
                                        *   '<S187>/Delay_Trig'
                                        *   '<S188>/Delay_Trig'
                                        *   '<S189>/Delay_Trig'
                                        *   '<S190>/Delay_Trig'
                                        *   '<S199>/Delay_Trig'
                                        *   '<S200>/Delay_Trig'
                                        *   '<S206>/Delay_Trig'
                                        *   '<S207>/Delay_Trig'
                                        *   '<S208>/Delay_Trig'
                                        *   '<S209>/Delay_Trig'
                                        *   '<S210>/Delay_Trig'
                                        *   '<S217>/Delay_Trig'
                                        *   '<S218>/Delay_Trig'
                                        *   '<S219>/Delay_Trig'
                                        *   '<S223>/Delay_Trig'
                                        */
extern real32_T RIGHT_TURN_SIGNAL;     /* Variable: RIGHT_TURN_SIGNAL
                                        * Referenced by: '<S113>/RIGHT_TURN_SIGNAL'
                                        */
extern real32_T TJA_SP_CONF_MEDIUM;    /* Variable: TJA_SP_CONF_MEDIUM
                                        * Referenced by: '<S164>/Constant48'
                                        */
extern real32_T TJA_SP_TYPE_BLMONLY;   /* Variable: TJA_SP_TYPE_BLMONLY
                                        * Referenced by:
                                        *   '<S159>/Constant14'
                                        *   '<S159>/Constant17'
                                        *   '<S164>/Constant49'
                                        */
extern real32_T TJA_SP_TYPE_POBLM;     /* Variable: TJA_SP_TYPE_POBLM
                                        * Referenced by: '<S164>/Constant60'
                                        */
extern real32_T TJA_SP_TYPE_POONLY;    /* Variable: TJA_SP_TYPE_POONLY
                                        * Referenced by: '<S164>/Constant4'
                                        */
extern real32_T k_HLR_suprress_hold;   /* Variable: k_HLR_suprress_hold
                                        * Referenced by: '<S113>/k_HLR_suprress_hold'
                                        */
extern real32_T k_HighAccel_suppress_hold;/* Variable: k_HighAccel_suppress_hold
                                           * Referenced by: '<S113>/k_HighAccel_suppress_hold'
                                           */
extern real32_T k_LCG_Configured;      /* Variable: k_LCG_Configured
                                        * Referenced by:
                                        *   '<S113>/k_LCG_Configured'
                                        *   '<S113>/k_LCG_Configured1'
                                        *   '<S151>/k_LCG_Configured1'
                                        */
extern real32_T k_LCK_A0Fac_ActSta[7]; /* Variable: k_LCK_A0Fac_ActSta
                                        * Referenced by: '<S47>/k_LCK_A0Fac_ActSta'
                                        */
extern real32_T k_LCK_A0Fac_DrvStm[7]; /* Variable: k_LCK_A0Fac_DrvStm
                                        * Referenced by: '<S48>/k_LCK_A0Fac_DrvStm'
                                        */
extern real32_T k_LCK_A0ShiftFac_Dy_LftCurv[19];/* Variable: k_LCK_A0ShiftFac_Dy_LftCurv
                                                 * Referenced by: '<S16>/k_LCK_A0ShiftFac_Dy_LftCurv'
                                                 */
extern real32_T k_LCK_A0ShiftFac_Dy_RgtCurv[19];/* Variable: k_LCK_A0ShiftFac_Dy_RgtCurv
                                                 * Referenced by: '<S16>/k_LCK_A0ShiftFac_Dy_RgtCurv'
                                                 */
extern real32_T k_LCK_A0ShiftFac_Vspd[16];/* Variable: k_LCK_A0ShiftFac_Vspd
                                           * Referenced by: '<S16>/k_LCK_A0ShiftFac_Vspd'
                                           */
extern real32_T k_LCK_A0Shift_LftCurv[14];/* Variable: k_LCK_A0Shift_LftCurv
                                           * Referenced by: '<S16>/k_LCK_A0Shift_LftCurv'
                                           */
extern real32_T k_LCK_A0Shift_RgtCurv[14];/* Variable: k_LCK_A0Shift_RgtCurv
                                           * Referenced by: '<S16>/k_LCK_A0Shift_RgtCurv'
                                           */
extern real32_T k_LCK_A0Shift_StraLan; /* Variable: k_LCK_A0Shift_StraLan
                                        * Referenced by: '<S16>/k_LCK_A0Shift_StraLan'
                                        */
extern real32_T k_LCK_A0_Rdy2Act_UseConst;/* Variable: k_LCK_A0_Rdy2Act_UseConst
                                           * Referenced by: '<S168>/k_LCK_SP_A0_Rdy2Act3'
                                           */
extern real32_T k_LCK_Active2Ready_Mask;/* Variable: k_LCK_Active2Ready_Mask
                                         * Referenced by: '<S151>/k_LCK_Active2Ready_Mask'
                                         */
extern real32_T k_LCK_CvatRateBks[15]; /* Variable: k_LCK_CvatRateBks
                                        * Referenced by:
                                        *   '<S31>/k_LCK_FfwFac_CvatRate_Lft'
                                        *   '<S31>/k_LCK_FfwFac_CvatRate_Rgt'
                                        */
extern real32_T k_LCK_CvatrBks[16];    /* Variable: k_LCK_CvatrBks
                                        * Referenced by: '<S31>/k_LCK_FfwTorq_Cvat'
                                        */
extern real32_T k_LCK_DFac_Dy[10];     /* Variable: k_LCK_DFac_Dy
                                        * Referenced by: '<S99>/k_LCK_DFac_Dy'
                                        */
extern real32_T k_LCK_DFac_Dy_Curv[10];/* Variable: k_LCK_DFac_Dy_Curv
                                        * Referenced by: '<S99>/k_LCK_DFac_Dy_Curv'
                                        */
extern real32_T k_LCK_DFac_HaCurCen[10];/* Variable: k_LCK_DFac_HaCurCen
                                         * Referenced by: '<S95>/k_LCK_DFac_HaCurCen'
                                         */
extern real32_T k_LCK_DFac_HaCurSid[10];/* Variable: k_LCK_DFac_HaCurSid
                                         * Referenced by: '<S95>/k_LCK_DFac_HaCurSid'
                                         */
extern real32_T k_LCK_DFac_HaStrCen[10];/* Variable: k_LCK_DFac_HaStrCen
                                         * Referenced by: '<S95>/k_LCK_DFac_HaStrCen'
                                         */
extern real32_T k_LCK_DFac_HaStrSid[10];/* Variable: k_LCK_DFac_HaStrSid
                                         * Referenced by: '<S95>/k_LCK_DFac_HaStrSid'
                                         */
extern real32_T k_LCK_DFac_HadCurCen[10];/* Variable: k_LCK_DFac_HadCurCen
                                          * Referenced by: '<S96>/k_LCK_DFac_HadCurCen'
                                          */
extern real32_T k_LCK_DFac_HadCurSid[10];/* Variable: k_LCK_DFac_HadCurSid
                                          * Referenced by: '<S96>/k_LCK_DFac_HadCurSid'
                                          */
extern real32_T k_LCK_DFac_HadStrCen[10];/* Variable: k_LCK_DFac_HadStrCen
                                          * Referenced by: '<S96>/k_LCK_DFac_HadStrCen'
                                          */
extern real32_T k_LCK_DFac_HadStrSid[10];/* Variable: k_LCK_DFac_HadStrSid
                                          * Referenced by: '<S96>/k_LCK_DFac_HadStrSid'
                                          */
extern real32_T k_LCK_DFac_Rad[14];    /* Variable: k_LCK_DFac_Rad
                                        * Referenced by: '<S101>/k_LCK_DFac_Rad'
                                        */
extern real32_T k_LCK_DFac_SA_CurCen[8];/* Variable: k_LCK_DFac_SA_CurCen
                                         * Referenced by: '<S97>/k_LCK_DFac_SA_CurCen'
                                         */
extern real32_T k_LCK_DFac_SA_CurSid[8];/* Variable: k_LCK_DFac_SA_CurSid
                                         * Referenced by: '<S97>/k_LCK_DFac_SA_CurSid'
                                         */
extern real32_T k_LCK_DFac_SA_StrCen[8];/* Variable: k_LCK_DFac_SA_StrCen
                                         * Referenced by: '<S97>/k_LCK_DFac_SA_StrCen'
                                         */
extern real32_T k_LCK_DFac_SA_StrSid[8];/* Variable: k_LCK_DFac_SA_StrSid
                                         * Referenced by: '<S97>/k_LCK_DFac_SA_StrSid'
                                         */
extern real32_T k_LCK_DFac_SS_CurCen[8];/* Variable: k_LCK_DFac_SS_CurCen
                                         * Referenced by: '<S98>/k_LCK_DFac_SS_CurCen'
                                         */
extern real32_T k_LCK_DFac_SS_CurSid[8];/* Variable: k_LCK_DFac_SS_CurSid
                                         * Referenced by: '<S98>/k_LCK_DFac_SS_CurSid'
                                         */
extern real32_T k_LCK_DFac_SS_StrCen[8];/* Variable: k_LCK_DFac_SS_StrCen
                                         * Referenced by: '<S98>/k_LCK_DFac_SS_StrCen'
                                         */
extern real32_T k_LCK_DFac_SS_StrSid[8];/* Variable: k_LCK_DFac_SS_StrSid
                                         * Referenced by: '<S98>/k_LCK_DFac_SS_StrSid'
                                         */
extern real32_T k_LCK_DFac_Vspd[16];   /* Variable: k_LCK_DFac_Vspd
                                        * Referenced by: '<S100>/k_LCK_DFac_Vspd'
                                        */
extern real32_T k_LCK_DTermMax;        /* Variable: k_LCK_DTermMax
                                        * Referenced by: '<S92>/k_LCK_DTermMax'
                                        */
extern real32_T k_LCK_DlyTm_DrvStim;   /* Variable: k_LCK_DlyTm_DrvStim
                                        * Referenced by: '<S48>/k_LCK_DlyTm_DrvStim'
                                        */
extern real32_T k_LCK_DyBks_Curv[19];  /* Variable: k_LCK_DyBks_Curv
                                        * Referenced by:
                                        *   '<S16>/k_LCK_A0ShiftFac_Dy_LftCurv'
                                        *   '<S16>/k_LCK_A0ShiftFac_Dy_RgtCurv'
                                        *   '<S43>/k_LCK_YR_OffstFac_Dy_InnRgtCurv'
                                        *   '<S43>/k_LCK_YR_OffstFac_Dy_LftCurv'
                                        */
extern real32_T k_LCK_Enable_POOnly;   /* Variable: k_LCK_Enable_POOnly
                                        * Referenced by: '<S164>/Constant7'
                                        */
extern real32_T k_LCK_Entry_DistBuffer;/* Variable: k_LCK_Entry_DistBuffer
                                        * Referenced by: '<S168>/k_LCK_Entry_DistBuffer'
                                        */
extern real32_T k_LCK_Fac_Vspd2RngThr_FalRec;/* Variable: k_LCK_Fac_Vspd2RngThr_FalRec
                                              * Referenced by: '<S22>/k_LCK_Fac_Vspd2RngThr_FalRec'
                                              */
extern real32_T k_LCK_FfwDeltaFac_Rad_Lft[14];/* Variable: k_LCK_FfwDeltaFac_Rad_Lft
                                               * Referenced by: '<S31>/k_LCK_FfwDeltaFac_Rad_Lft'
                                               */
extern real32_T k_LCK_FfwDeltaFac_Rad_Rgt[14];/* Variable: k_LCK_FfwDeltaFac_Rad_Rgt
                                               * Referenced by: '<S31>/k_LCK_FfwDeltaFac_Rad_Rgt'
                                               */
extern real32_T k_LCK_FfwDeltaFac_Vspd[16];/* Variable: k_LCK_FfwDeltaFac_Vspd
                                            * Referenced by: '<S31>/k_LCK_FfwDeltaFac_Vspd'
                                            */
extern real32_T k_LCK_FfwFac_CvatRate_Lft[15];/* Variable: k_LCK_FfwFac_CvatRate_Lft
                                               * Referenced by: '<S31>/k_LCK_FfwFac_CvatRate_Lft'
                                               */
extern real32_T k_LCK_FfwFac_CvatRate_Rgt[15];/* Variable: k_LCK_FfwFac_CvatRate_Rgt
                                               * Referenced by: '<S31>/k_LCK_FfwFac_CvatRate_Rgt'
                                               */
extern real32_T k_LCK_FfwFac_Dy[8];    /* Variable: k_LCK_FfwFac_Dy
                                        * Referenced by: '<S31>/k_LCK_FfwFac_Dy'
                                        */
extern real32_T k_LCK_FfwFac_Rad_Lft[14];/* Variable: k_LCK_FfwFac_Rad_Lft
                                          * Referenced by: '<S31>/k_LCK_FfwFac_Rad_Lft'
                                          */
extern real32_T k_LCK_FfwFac_Rad_Rgt[14];/* Variable: k_LCK_FfwFac_Rad_Rgt
                                          * Referenced by: '<S31>/k_LCK_FfwFac_Rad_Rgt'
                                          */
extern real32_T k_LCK_FfwFac_Vspd[16]; /* Variable: k_LCK_FfwFac_Vspd
                                        * Referenced by: '<S31>/k_LCK_FfwFac_Vspd'
                                        */
extern real32_T k_LCK_FfwTorq_Cvat[16];/* Variable: k_LCK_FfwTorq_Cvat
                                        * Referenced by: '<S31>/k_LCK_FfwTorq_Cvat'
                                        */
extern real32_T k_LCK_Ffw_CvatSwh;     /* Variable: k_LCK_Ffw_CvatSwh
                                        * Referenced by: '<S31>/k_LCK_Ffw_CvatSwh'
                                        */
extern real32_T k_LCK_Ffw_DyBks[8];    /* Variable: k_LCK_Ffw_DyBks
                                        * Referenced by: '<S31>/k_LCK_FfwFac_Dy'
                                        */
extern real32_T k_LCK_Ffw_TimCon_CmdFlt;/* Variable: k_LCK_Ffw_TimCon_CmdFlt
                                         * Referenced by: '<S11>/k_LCK_Ffw_TimCon_CmdFlt'
                                         */
extern real32_T k_LCK_HAFac_ActSta[7]; /* Variable: k_LCK_HAFac_ActSta
                                        * Referenced by: '<S47>/k_LCK_HAFac_ActSta'
                                        */
extern real32_T k_LCK_HAFac_DrvStm[7]; /* Variable: k_LCK_HAFac_DrvStm
                                        * Referenced by: '<S48>/k_LCK_HAFac_DrvStm'
                                        */
extern real32_T k_LCK_HARFac_ActSta[7];/* Variable: k_LCK_HARFac_ActSta
                                        * Referenced by: '<S47>/k_LCK_HARFac_ActSta'
                                        */
extern real32_T k_LCK_HARFac_DrvStm[7];/* Variable: k_LCK_HARFac_DrvStm
                                        * Referenced by: '<S48>/k_LCK_HARFac_DrvStm'
                                        */
extern real32_T k_LCK_HaloTime;        /* Variable: k_LCK_HaloTime
                                        * Referenced by: '<S168>/k_LCK_HaloTime'
                                        */
extern real32_T k_LCK_HaloTime_Switch; /* Variable: k_LCK_HaloTime_Switch
                                        * Referenced by: '<S168>/k_LCK_HaloTime_Switch'
                                        */
extern real32_T k_LCK_HedAngDiffX[10]; /* Variable: k_LCK_HedAngDiffX
                                        * Referenced by:
                                        *   '<S95>/k_LCK_DFac_HaCurCen'
                                        *   '<S95>/k_LCK_DFac_HaCurSid'
                                        *   '<S95>/k_LCK_DFac_HaStrCen'
                                        *   '<S95>/k_LCK_DFac_HaStrSid'
                                        *   '<S95>/k_LCK_PFac_HaCurCen'
                                        *   '<S95>/k_LCK_PFac_HaCurSid'
                                        *   '<S95>/k_LCK_PFac_HaStrSid'
                                        *   '<S95>/k_LCK_PFac_Ha_StrCen'
                                        */
extern real32_T k_LCK_HedAngRateDiffX[10];/* Variable: k_LCK_HedAngRateDiffX
                                           * Referenced by:
                                           *   '<S96>/k_LCK_DFac_HadCurCen'
                                           *   '<S96>/k_LCK_DFac_HadCurSid'
                                           *   '<S96>/k_LCK_DFac_HadStrCen'
                                           *   '<S96>/k_LCK_DFac_HadStrSid'
                                           *   '<S96>/k_LCK_PFac_HadCurCen'
                                           *   '<S96>/k_LCK_PFac_HadCurSid'
                                           *   '<S96>/k_LCK_PFac_HadStrCen'
                                           *   '<S96>/k_LCK_PFac_HadStrSid'
                                           */
extern real32_T k_LCK_Hed_DyBks[10];   /* Variable: k_LCK_Hed_DyBks
                                        * Referenced by:
                                        *   '<S99>/k_LCK_DFac_Dy'
                                        *   '<S99>/k_LCK_DFac_Dy_Curv'
                                        *   '<S99>/k_LCK_PFac_Dy'
                                        *   '<S99>/k_LCK_PFac_Dy_Curv'
                                        */
extern real32_T k_LCK_HndsOnWhel_DlyTm_Idl2Rdy;/* Variable: k_LCK_HndsOnWhel_DlyTm_Idl2Rdy
                                                * Referenced by: '<S167>/k_LCK_HndsOnWhel_DlyTm_Idl2Rdy'
                                                */
extern real32_T k_LCK_Idle2Ready_Mask; /* Variable: k_LCK_Idle2Ready_Mask
                                        * Referenced by:
                                        *   '<S167>/Idle2Ready_Mask'
                                        *   '<S167>/k_LCK_Idle2Ready_Mask'
                                        */
extern real32_T k_LCK_Junc_SusTime;    /* Variable: k_LCK_Junc_SusTime
                                        * Referenced by: '<S159>/k_LCK_Junc_SusTime'
                                        */
extern real32_T k_LCK_KpKdDecSlopeLmt; /* Variable: k_LCK_KpKdDecSlopeLmt
                                        * Referenced by:
                                        *   '<S102>/k_LCK_KpKdDecSlopeLmt'
                                        *   '<S103>/k_LCK_KpKdDecSlopeLmt'
                                        */
extern real32_T k_LCK_KpKdIncSlopeLmt; /* Variable: k_LCK_KpKdIncSlopeLmt
                                        * Referenced by:
                                        *   '<S102>/k_LCK_KpKdIncSlopeLmt'
                                        *   '<S103>/k_LCK_KpKdIncSlopeLmt'
                                        */
extern real32_T k_LCK_LM_ROC_DlyTm_Idl2Rdy;/* Variable: k_LCK_LM_ROC_DlyTm_Idl2Rdy
                                            * Referenced by: '<S167>/k_LCK_LM_ROC_DlyTm_Idl2Rdy'
                                            */
extern real32_T k_LCK_LM_ROC_DlyTm_Rdy2Idl;/* Variable: k_LCK_LM_ROC_DlyTm_Rdy2Idl
                                            * Referenced by: '<S169>/k_LCK_LM_ROC_DlyTm_Rdy2Idl'
                                            */
extern real32_T k_LCK_LM_ROC_Idl2Rdy;  /* Variable: k_LCK_LM_ROC_Idl2Rdy
                                        * Referenced by: '<S167>/k_LCK_LM_ROC_Idl2Rdy'
                                        */
extern real32_T k_LCK_LM_ROC_Rdy2Idl;  /* Variable: k_LCK_LM_ROC_Rdy2Idl
                                        * Referenced by: '<S169>/k_LCK_LM_ROC_Rdy2Idl'
                                        */
extern real32_T k_LCK_LatCtrl_DFac_Lft;/* Variable: k_LCK_LatCtrl_DFac_Lft
                                        * Referenced by: '<S94>/k_LCK_LatCtrl_DFac_Lft'
                                        */
extern real32_T k_LCK_LatCtrl_DFac_Rgt;/* Variable: k_LCK_LatCtrl_DFac_Rgt
                                        * Referenced by: '<S94>/k_LCK_LatCtrl_DFac_Rgt'
                                        */
extern real32_T k_LCK_LatCtrl_Kd;      /* Variable: k_LCK_LatCtrl_Kd
                                        * Referenced by: '<S93>/k_LCK_LatCtrl_Kd'
                                        */
extern real32_T k_LCK_LatCtrl_Kp;      /* Variable: k_LCK_LatCtrl_Kp
                                        * Referenced by: '<S104>/k_LCK_LatCtrl_Kp'
                                        */
extern real32_T k_LCK_LatCtrl_PFac_Lft;/* Variable: k_LCK_LatCtrl_PFac_Lft
                                        * Referenced by: '<S94>/k_LCK_LatCtrl_PFac_Lft'
                                        */
extern real32_T k_LCK_LatCtrl_PFac_Rgt;/* Variable: k_LCK_LatCtrl_PFac_Rgt
                                        * Referenced by: '<S94>/k_LCK_LatCtrl_PFac_Rgt'
                                        */
extern real32_T k_LCK_LatCtrl_TimCon_CmdFlt;/* Variable: k_LCK_LatCtrl_TimCon_CmdFlt
                                             * Referenced by: '<S92>/k_LCK_LatCtrl_TimCon_CmdFlt'
                                             */
extern real32_T k_LCK_Lat_Ctrl_DFac_Lft;/* Variable: k_LCK_Lat_Ctrl_DFac_Lft
                                         * Referenced by: '<S73>/k_LCK_Lat_Ctrl_DFac_Lft'
                                         */
extern real32_T k_LCK_Lat_Ctrl_DFac_Rgt;/* Variable: k_LCK_Lat_Ctrl_DFac_Rgt
                                         * Referenced by: '<S73>/k_LCK_Lat_Ctrl_DFac_Rgt'
                                         */
extern real32_T k_LCK_Lat_Ctrl_Kd;     /* Variable: k_LCK_Lat_Ctrl_Kd
                                        * Referenced by: '<S72>/k_LCK_Lat_Ctrl_Kd'
                                        */
extern real32_T k_LCK_Lat_Ctrl_Ki;     /* Variable: k_LCK_Lat_Ctrl_Ki
                                        * Referenced by: '<S80>/k_LCK_Lat_Ctrl_Ki'
                                        */
extern real32_T k_LCK_Lat_Ctrl_Kp;     /* Variable: k_LCK_Lat_Ctrl_Kp
                                        * Referenced by:
                                        *   '<S84>/k_LCK_Lat_Ctrl_Kp'
                                        *   '<S85>/k_LCK_Lat_Ctrl_Kp'
                                        */
extern real32_T k_LCK_Lat_Ctrl_Kp_NearGain;/* Variable: k_LCK_Lat_Ctrl_Kp_NearGain
                                            * Referenced by: '<S84>/k_LCK_Lat_Ctrl_Kp_NearGain'
                                            */
extern real32_T k_LCK_Lat_Ctrl_PFac_Lft;/* Variable: k_LCK_Lat_Ctrl_PFac_Lft
                                         * Referenced by: '<S73>/k_LCK_Lat_Ctrl_PFac_Lft'
                                         */
extern real32_T k_LCK_Lat_Ctrl_PFac_Rgt;/* Variable: k_LCK_Lat_Ctrl_PFac_Rgt
                                         * Referenced by: '<S73>/k_LCK_Lat_Ctrl_PFac_Rgt'
                                         */
extern real32_T k_LCK_Lat_Ctrl_TimCon_CmdFlt;/* Variable: k_LCK_Lat_Ctrl_TimCon_CmdFlt
                                              * Referenced by: '<S71>/k_LCK_Lat_Ctrl_TimCon_CmdFlt'
                                              */
extern real32_T k_LCK_Lat_DFac_Rad[14];/* Variable: k_LCK_Lat_DFac_Rad
                                        * Referenced by: '<S78>/k_LCK_Lat_DFac_Rad'
                                        */
extern real32_T k_LCK_Lat_DFac_SS_Cur[8];/* Variable: k_LCK_Lat_DFac_SS_Cur
                                          * Referenced by: '<S79>/k_LCK_Lat_DFac_SS_Cur'
                                          */
extern real32_T k_LCK_Lat_DFac_SS_Str[8];/* Variable: k_LCK_Lat_DFac_SS_Str
                                          * Referenced by: '<S79>/k_LCK_Lat_DFac_SS_Str'
                                          */
extern real32_T k_LCK_Lat_DFac_Vspd[16];/* Variable: k_LCK_Lat_DFac_Vspd
                                         * Referenced by: '<S77>/k_LCK_Lat_DFac_Vspd'
                                         */
extern real32_T k_LCK_Lat_DyBks[10];   /* Variable: k_LCK_Lat_DyBks
                                        * Referenced by:
                                        *   '<S74>/k_LCK_Lat_ILmtFac_Dy_CurvLan'
                                        *   '<S74>/k_LCK_Lat_ILmtFac_Dy_StraLan'
                                        *   '<S75>/k_LCK_Lat_PFac_Dy_InnLftCur'
                                        *   '<S75>/k_LCK_Lat_PFac_Dy_InnRgtCur'
                                        *   '<S75>/k_LCK_Lat_PFac_Dy_OutLftCur'
                                        *   '<S75>/k_LCK_Lat_PFac_Dy_OutRgtCur'
                                        *   '<S75>/k_LCK_Lat_PFac_Dy_Str'
                                        *   '<S76>/k_LCK_Lat_PFac_Dy_InnLftCur'
                                        *   '<S76>/k_LCK_Lat_PFac_Dy_InnRgtCur'
                                        *   '<S76>/k_LCK_Lat_PFac_Dy_OutLftCur'
                                        *   '<S76>/k_LCK_Lat_PFac_Dy_OutRgtCur'
                                        *   '<S76>/k_LCK_Lat_PFac_Dy_Str'
                                        */
extern real32_T k_LCK_Lat_IFac_Rad[14];/* Variable: k_LCK_Lat_IFac_Rad
                                        * Referenced by: '<S78>/k_LCK_Lat_IFac_Rad'
                                        */
extern real32_T k_LCK_Lat_IFac_Vspd[16];/* Variable: k_LCK_Lat_IFac_Vspd
                                         * Referenced by: '<S77>/k_LCK_Lat_IFac_Vspd'
                                         */
extern real32_T k_LCK_Lat_ILmtFac_Dy_CurvLan[10];/* Variable: k_LCK_Lat_ILmtFac_Dy_CurvLan
                                                  * Referenced by: '<S74>/k_LCK_Lat_ILmtFac_Dy_CurvLan'
                                                  */
extern real32_T k_LCK_Lat_ILmtFac_Dy_StraLan[10];/* Variable: k_LCK_Lat_ILmtFac_Dy_StraLan
                                                  * Referenced by: '<S74>/k_LCK_Lat_ILmtFac_Dy_StraLan'
                                                  */
extern real32_T k_LCK_Lat_ILmtFac_Rad[14];/* Variable: k_LCK_Lat_ILmtFac_Rad
                                           * Referenced by: '<S74>/k_LCK_Lat_ILmtFac_Rad'
                                           */
extern real32_T k_LCK_Lat_ILmtFac_Rad_NearGain;/* Variable: k_LCK_Lat_ILmtFac_Rad_NearGain
                                                * Referenced by: '<S74>/k_LCK_Lat_ILmtFac_Rad_NearGain'
                                                */
extern real32_T k_LCK_Lat_ILmtFac_Vspd_CurvLan[16];/* Variable: k_LCK_Lat_ILmtFac_Vspd_CurvLan
                                                    * Referenced by: '<S74>/k_LCK_Lat_ILmtFac_Vspd_CurvLan'
                                                    */
extern real32_T k_LCK_Lat_ILmtFac_Vspd_StraLan[16];/* Variable: k_LCK_Lat_ILmtFac_Vspd_StraLan
                                                    * Referenced by: '<S74>/k_LCK_Lat_ILmtFac_Vspd_StraLan'
                                                    */
extern real32_T k_LCK_Lat_ITermLmt_Dy; /* Variable: k_LCK_Lat_ITermLmt_Dy
                                        * Referenced by: '<S74>/k_LCK_Lat_ITermLmt_Dy'
                                        */
extern real32_T k_LCK_Lat_KpKdDecSlopeLmt;/* Variable: k_LCK_Lat_KpKdDecSlopeLmt
                                           * Referenced by:
                                           *   '<S81>/k_LCK_Lat_KpKdDecSlopeLmt'
                                           *   '<S82>/k_LCK_Lat_KpKdDecSlopeLmt'
                                           *   '<S83>/k_LCK_Lat_KpKdDecSlopeLmt'
                                           */
extern real32_T k_LCK_Lat_KpKdIncSlopeLmt;/* Variable: k_LCK_Lat_KpKdIncSlopeLmt
                                           * Referenced by:
                                           *   '<S81>/k_LCK_Lat_KpKdIncSlopeLmt'
                                           *   '<S82>/k_LCK_Lat_KpKdIncSlopeLmt'
                                           *   '<S83>/k_LCK_Lat_KpKdIncSlopeLmt'
                                           */
extern real32_T k_LCK_Lat_PFac_Dy_InnLftCur[10];/* Variable: k_LCK_Lat_PFac_Dy_InnLftCur
                                                 * Referenced by:
                                                 *   '<S75>/k_LCK_Lat_PFac_Dy_InnLftCur'
                                                 *   '<S76>/k_LCK_Lat_PFac_Dy_InnLftCur'
                                                 */
extern real32_T k_LCK_Lat_PFac_Dy_InnRgtCur[10];/* Variable: k_LCK_Lat_PFac_Dy_InnRgtCur
                                                 * Referenced by:
                                                 *   '<S75>/k_LCK_Lat_PFac_Dy_InnRgtCur'
                                                 *   '<S76>/k_LCK_Lat_PFac_Dy_InnRgtCur'
                                                 */
extern real32_T k_LCK_Lat_PFac_Dy_OutLftCur[10];/* Variable: k_LCK_Lat_PFac_Dy_OutLftCur
                                                 * Referenced by:
                                                 *   '<S75>/k_LCK_Lat_PFac_Dy_OutLftCur'
                                                 *   '<S76>/k_LCK_Lat_PFac_Dy_OutLftCur'
                                                 */
extern real32_T k_LCK_Lat_PFac_Dy_OutRgtCur[10];/* Variable: k_LCK_Lat_PFac_Dy_OutRgtCur
                                                 * Referenced by:
                                                 *   '<S75>/k_LCK_Lat_PFac_Dy_OutRgtCur'
                                                 *   '<S76>/k_LCK_Lat_PFac_Dy_OutRgtCur'
                                                 */
extern real32_T k_LCK_Lat_PFac_Dy_Str[10];/* Variable: k_LCK_Lat_PFac_Dy_Str
                                           * Referenced by:
                                           *   '<S75>/k_LCK_Lat_PFac_Dy_Str'
                                           *   '<S76>/k_LCK_Lat_PFac_Dy_Str'
                                           */
extern real32_T k_LCK_Lat_PFac_Rad[14];/* Variable: k_LCK_Lat_PFac_Rad
                                        * Referenced by: '<S78>/k_LCK_Lat_PFac_Rad'
                                        */
extern real32_T k_LCK_Lat_PFac_SS_Cur[8];/* Variable: k_LCK_Lat_PFac_SS_Cur
                                          * Referenced by: '<S79>/k_LCK_Lat_PFac_SS_Cur'
                                          */
extern real32_T k_LCK_Lat_PFac_SS_Str[8];/* Variable: k_LCK_Lat_PFac_SS_Str
                                          * Referenced by: '<S79>/k_LCK_Lat_PFac_SS_Str'
                                          */
extern real32_T k_LCK_Lat_PFac_Vspd[16];/* Variable: k_LCK_Lat_PFac_Vspd
                                         * Referenced by: '<S77>/k_LCK_Lat_PFac_Vspd'
                                         */
extern real32_T k_LCK_Lat_PTermMax;    /* Variable: k_LCK_Lat_PTermMax
                                        * Referenced by: '<S71>/k_LCK_Lat_PTermMax'
                                        */
extern real32_T k_LCK_LnCetr_DlyTm_Rdy2Act;/* Variable: k_LCK_LnCetr_DlyTm_Rdy2Act
                                            * Referenced by:
                                            *   '<S168>/k_LCK_LnCetr_DlyTm_Rdy2Act'
                                            *   '<S168>/k_LCK_LnCetr_DlyTm_Rdy2Act1'
                                            */
extern real32_T k_LCK_LnWidth_DlyTm_Idl2Rdy;/* Variable: k_LCK_LnWidth_DlyTm_Idl2Rdy
                                             * Referenced by:
                                             *   '<S167>/k_LCK_LnWidth_DlyTm_Idl2Rdy'
                                             *   '<S167>/k_LCK_LnWidth_DlyTm_Idl2Rdy1'
                                             */
extern real32_T k_LCK_LnWidth_DlyTm_Rdy2Idl;/* Variable: k_LCK_LnWidth_DlyTm_Rdy2Idl
                                             * Referenced by:
                                             *   '<S169>/k_LCK_LnWidth_DlyTm_Rdy2Idl'
                                             *   '<S169>/k_LCK_LnWidth_DlyTm_Rdy2Idl1'
                                             */
extern real32_T k_LCK_LnWidth_LowLmt_Idl2Rdy;/* Variable: k_LCK_LnWidth_LowLmt_Idl2Rdy
                                              * Referenced by: '<S167>/k_LCK_LnWidth_LowLmt_Idl2Rdy'
                                              */
extern real32_T k_LCK_LnWidth_LowLmt_Rdy2Idl;/* Variable: k_LCK_LnWidth_LowLmt_Rdy2Idl
                                              * Referenced by: '<S169>/k_LCK_LnWidth_LowLmt_Rdy2Idl'
                                              */
extern real32_T k_LCK_LnWidth_UpLmt_Idl2Rdy;/* Variable: k_LCK_LnWidth_UpLmt_Idl2Rdy
                                             * Referenced by: '<S167>/k_LCK_LnWidth_UpLmt_Idl2Rdy'
                                             */
extern real32_T k_LCK_LnWidth_UpLmt_Rdy2Idl;/* Variable: k_LCK_LnWidth_UpLmt_Rdy2Idl
                                             * Referenced by: '<S169>/k_LCK_LnWidth_UpLmt_Rdy2Idl'
                                             */
extern real32_T k_LCK_LowRng_Spd_Thr;  /* Variable: k_LCK_LowRng_Spd_Thr
                                        * Referenced by:
                                        *   '<S165>/k_LCK_LowRng_Spd_Thr'
                                        *   '<S169>/k_LCK_LowRng_Spd_Thr1'
                                        */
extern real32_T k_LCK_MinJunction_Range;/* Variable: k_LCK_MinJunction_Range
                                         * Referenced by: '<S159>/k_LCK_MinJunction_Range'
                                         */
extern real32_T k_LCK_NonLinCompFac_Vspd[16];/* Variable: k_LCK_NonLinCompFac_Vspd
                                              * Referenced by: '<S37>/k_LCK_NonLinCompFac_Vspd'
                                              */
extern real32_T k_LCK_NonLinCompTab[20];/* Variable: k_LCK_NonLinCompTab
                                         * Referenced by: '<S37>/k_LCK_NonLinCompTab'
                                         */
extern real32_T k_LCK_NonLinearComp_En;/* Variable: k_LCK_NonLinearComp_En
                                        * Referenced by: '<S37>/k_LCK_NonLinearComp_En'
                                        */
extern real32_T k_LCK_Ovrd_DlyTm_Rdy2Idl;/* Variable: k_LCK_Ovrd_DlyTm_Rdy2Idl
                                          * Referenced by: '<S151>/k_LCK_Ovrd_DlyTm_Rdy2Idl1'
                                          */
extern real32_T k_LCK_Ovrd_Torq_Hys;   /* Variable: k_LCK_Ovrd_Torq_Hys
                                        * Referenced by: '<S112>/k_LCK_Ovrd_Torq_Hys'
                                        */
extern real32_T k_LCK_PFac_Dy[10];     /* Variable: k_LCK_PFac_Dy
                                        * Referenced by: '<S99>/k_LCK_PFac_Dy'
                                        */
extern real32_T k_LCK_PFac_Dy_Curv[10];/* Variable: k_LCK_PFac_Dy_Curv
                                        * Referenced by: '<S99>/k_LCK_PFac_Dy_Curv'
                                        */
extern real32_T k_LCK_PFac_HaCurCen[10];/* Variable: k_LCK_PFac_HaCurCen
                                         * Referenced by: '<S95>/k_LCK_PFac_HaCurCen'
                                         */
extern real32_T k_LCK_PFac_HaCurSid[10];/* Variable: k_LCK_PFac_HaCurSid
                                         * Referenced by: '<S95>/k_LCK_PFac_HaCurSid'
                                         */
extern real32_T k_LCK_PFac_HaStrCen[10];/* Variable: k_LCK_PFac_HaStrCen
                                         * Referenced by: '<S95>/k_LCK_PFac_Ha_StrCen'
                                         */
extern real32_T k_LCK_PFac_HaStrSid[10];/* Variable: k_LCK_PFac_HaStrSid
                                         * Referenced by: '<S95>/k_LCK_PFac_HaStrSid'
                                         */
extern real32_T k_LCK_PFac_HadCurCen[10];/* Variable: k_LCK_PFac_HadCurCen
                                          * Referenced by: '<S96>/k_LCK_PFac_HadCurCen'
                                          */
extern real32_T k_LCK_PFac_HadCurSid[10];/* Variable: k_LCK_PFac_HadCurSid
                                          * Referenced by: '<S96>/k_LCK_PFac_HadCurSid'
                                          */
extern real32_T k_LCK_PFac_HadStrCen[10];/* Variable: k_LCK_PFac_HadStrCen
                                          * Referenced by: '<S96>/k_LCK_PFac_HadStrCen'
                                          */
extern real32_T k_LCK_PFac_HadStrSid[10];/* Variable: k_LCK_PFac_HadStrSid
                                          * Referenced by: '<S96>/k_LCK_PFac_HadStrSid'
                                          */
extern real32_T k_LCK_PFac_Rad[14];    /* Variable: k_LCK_PFac_Rad
                                        * Referenced by: '<S101>/k_LCK_PFac_Rad'
                                        */
extern real32_T k_LCK_PFac_SA_CurCen[8];/* Variable: k_LCK_PFac_SA_CurCen
                                         * Referenced by: '<S97>/k_LCK_PFac_SA_CurCen'
                                         */
extern real32_T k_LCK_PFac_SA_CurSid[8];/* Variable: k_LCK_PFac_SA_CurSid
                                         * Referenced by: '<S97>/k_LCK_PFac_SA_CurSid'
                                         */
extern real32_T k_LCK_PFac_SA_StrCen[8];/* Variable: k_LCK_PFac_SA_StrCen
                                         * Referenced by: '<S97>/k_LCK_PFac_SA_StrCen'
                                         */
extern real32_T k_LCK_PFac_SA_StrSid[8];/* Variable: k_LCK_PFac_SA_StrSid
                                         * Referenced by: '<S97>/k_LCK_PFac_SA_StrSid'
                                         */
extern real32_T k_LCK_PFac_SS_CurCen[8];/* Variable: k_LCK_PFac_SS_CurCen
                                         * Referenced by: '<S98>/k_LCK_PFac_SS_CurCen'
                                         */
extern real32_T k_LCK_PFac_SS_CurSid[8];/* Variable: k_LCK_PFac_SS_CurSid
                                         * Referenced by: '<S98>/k_LCK_PFac_SS_CurSid'
                                         */
extern real32_T k_LCK_PFac_SS_StrCen[8];/* Variable: k_LCK_PFac_SS_StrCen
                                         * Referenced by: '<S98>/k_LCK_PFac_SS_StrCen'
                                         */
extern real32_T k_LCK_PFac_SS_StrSid[8];/* Variable: k_LCK_PFac_SS_StrSid
                                         * Referenced by: '<S98>/k_LCK_PFac_SS_StrSid'
                                         */
extern real32_T k_LCK_PFac_Vspd[16];   /* Variable: k_LCK_PFac_Vspd
                                        * Referenced by: '<S100>/k_LCK_PFac_Vspd'
                                        */
extern real32_T k_LCK_PTermMax;        /* Variable: k_LCK_PTermMax
                                        * Referenced by: '<S92>/k_LCK_PTermMax'
                                        */
extern real32_T k_LCK_ROC_filt_tau;    /* Variable: k_LCK_ROC_filt_tau
                                        * Referenced by: '<S172>/k_LCK_ROC_filt_tau'
                                        */
extern real32_T k_LCK_RadBks[14];      /* Variable: k_LCK_RadBks
                                        * Referenced by:
                                        *   '<S16>/Lookup_Table'
                                        *   '<S16>/k_LCK_A0Shift_LftCurv'
                                        *   '<S16>/k_LCK_A0Shift_RgtCurv'
                                        *   '<S17>/Lookup_Table'
                                        *   '<S31>/k_LCK_FfwDeltaFac_Rad_Lft'
                                        *   '<S31>/k_LCK_FfwDeltaFac_Rad_Rgt'
                                        *   '<S31>/k_LCK_FfwFac_Rad_Lft'
                                        *   '<S31>/k_LCK_FfwFac_Rad_Rgt'
                                        *   '<S43>/k_LCK_YawRate_Offset_LftCurv'
                                        *   '<S43>/k_LCK_YawRate_Offset_RgtCurv'
                                        *   '<S74>/k_LCK_Lat_ILmtFac_Rad'
                                        *   '<S78>/k_LCK_Lat_DFac_Rad'
                                        *   '<S78>/k_LCK_Lat_IFac_Rad'
                                        *   '<S78>/k_LCK_Lat_PFac_Rad'
                                        *   '<S101>/k_LCK_DFac_Rad'
                                        *   '<S101>/k_LCK_PFac_Rad'
                                        */
extern real32_T k_LCK_Range_Drop_MinDur;/* Variable: k_LCK_Range_Drop_MinDur
                                         * Referenced by: '<S159>/k_LCK_Range_Drop_MinDur'
                                         */
extern real32_T k_LCK_RatLmtFac_TorqCmd_Vspd[16];/* Variable: k_LCK_RatLmtFac_TorqCmd_Vspd
                                                  * Referenced by: '<S38>/k_LCK_RatLmtFac_TorqCmd_Vspd'
                                                  */
extern real32_T k_LCK_RatLmt_TorqCmd[20];/* Variable: k_LCK_RatLmt_TorqCmd
                                          * Referenced by: '<S38>/k_LCK_RatLmt_TorqCmd'
                                          */
extern real32_T k_LCK_Ready2Active_Mask;/* Variable: k_LCK_Ready2Active_Mask
                                         * Referenced by:
                                         *   '<S168>/Ready2Active_Mask1'
                                         *   '<S168>/k_LCK_Ready2Active_Mask'
                                         */
extern real32_T k_LCK_Ready2Idle_Mask; /* Variable: k_LCK_Ready2Idle_Mask
                                        * Referenced by: '<S169>/k_LCK_Ready2Idle_Mask'
                                        */
extern real32_T k_LCK_Rng2VehSpd_Ratio_DlyTime;/* Variable: k_LCK_Rng2VehSpd_Ratio_DlyTime
                                                * Referenced by: '<S165>/k_LCK_Rng2VehSpd_Ratio_DlyTime'
                                                */
extern real32_T k_LCK_Rng2VehSpd_Ratio_Thr;/* Variable: k_LCK_Rng2VehSpd_Ratio_Thr
                                            * Referenced by: '<S165>/k_LCK_Rng2VehSpd_Ratio_Thr'
                                            */
extern real32_T k_LCK_RngThr_FalRec[16];/* Variable: k_LCK_RngThr_FalRec
                                         * Referenced by: '<S22>/k_LCK_RngThr_FalRec'
                                         */
extern real32_T k_LCK_SPHighSpd_DlyTm_Idl2Rdy;/* Variable: k_LCK_SPHighSpd_DlyTm_Idl2Rdy
                                               * Referenced by: '<S167>/k_LCK_SPHighSpd_DlyTm_Idl2Rdy'
                                               */
extern real32_T k_LCK_SPLowSpd_DlyTm_Idl2Rdy;/* Variable: k_LCK_SPLowSpd_DlyTm_Idl2Rdy
                                              * Referenced by: '<S167>/k_LCK_SPLowSpd_DlyTm_Idl2Rdy'
                                              */
extern real32_T k_LCK_SPPConfHigh_ProbThre;/* Variable: k_LCK_SPPConfHigh_ProbThre
                                            * Referenced by:
                                            *   '<S232>/Constant'
                                            *   '<S232>/Constant7'
                                            */
extern real32_T k_LCK_SPPConfMedHigh_ProbThre;/* Variable: k_LCK_SPPConfMedHigh_ProbThre
                                               * Referenced by:
                                               *   '<S232>/Constant2'
                                               *   '<S232>/Constant8'
                                               *   '<S237>/Constant35'
                                               *   '<S237>/Constant38'
                                               *   '<S237>/Constant50'
                                               *   '<S237>/Constant51'
                                               */
extern real32_T k_LCK_SPPConfMed_ProbThre;/* Variable: k_LCK_SPPConfMed_ProbThre
                                           * Referenced by:
                                           *   '<S232>/Constant4'
                                           *   '<S232>/Constant9'
                                           */
extern real32_T k_LCK_SPTyp_LowLmt_Idl2Rdy;/* Variable: k_LCK_SPTyp_LowLmt_Idl2Rdy
                                            * Referenced by: '<S164>/k_LCK_SPTyp_LowLmt_Idl2Rdy1'
                                            */
extern real32_T k_LCK_SPTyp_UpLmt_Idl2Rdy;/* Variable: k_LCK_SPTyp_UpLmt_Idl2Rdy
                                           * Referenced by: '<S164>/k_LCK_SPTyp_UpLmt_Idl2Rdy1'
                                           */
extern real32_T k_LCK_SP_A0_Rdy2Act;   /* Variable: k_LCK_SP_A0_Rdy2Act
                                        * Referenced by: '<S168>/k_LCK_SP_A0_Rdy2Act4'
                                        */
extern real32_T k_LCK_SP_A0_Rdy2Act_Max;/* Variable: k_LCK_SP_A0_Rdy2Act_Max
                                         * Referenced by: '<S168>/k_LCK_SP_A0_Rdy2Act1'
                                         */
extern real32_T k_LCK_SP_A0_Rdy2Act_Min;/* Variable: k_LCK_SP_A0_Rdy2Act_Min
                                         * Referenced by: '<S168>/k_LCK_SP_A0_Rdy2Act2'
                                         */
extern real32_T k_LCK_SP_A1_Rdy2Act;   /* Variable: k_LCK_SP_A1_Rdy2Act
                                        * Referenced by: '<S168>/k_LCK_SP_A1_Rdy2Act'
                                        */
extern real32_T k_LCK_SP_Conf_Low_JuncTm;/* Variable: k_LCK_SP_Conf_Low_JuncTm
                                          * Referenced by: '<S170>/k_LCK_SP_Conf_Low_JuncTm'
                                          */
extern real32_T k_LCK_SP_Conf_Med_JuncTm;/* Variable: k_LCK_SP_Conf_Med_JuncTm
                                          * Referenced by: '<S170>/k_LCK_SP_Conf_Med_JuncTm'
                                          */
extern real32_T k_LCK_SPconfInvld_DlyTm_Rdy2Idl;/* Variable: k_LCK_SPconfInvld_DlyTm_Rdy2Idl
                                                 * Referenced by: '<S170>/k_LCK_SPconfInvld_DlyTm_Rdy2Idl'
                                                 */
extern real32_T k_LCK_SPconfLow_DlyTm_Rdy2Idl;/* Variable: k_LCK_SPconfLow_DlyTm_Rdy2Idl
                                               * Referenced by: '<S170>/k_LCK_SPconfLow_DlyTm_Rdy2Idl'
                                               */
extern real32_T k_LCK_SPconfLow_DlyTm_Rdy2Idl_x[16];/* Variable: k_LCK_SPconfLow_DlyTm_Rdy2Idl_x
                                                     * Referenced by: '<S170>/k_LCK_SPconfLow_DlyTm_Rdy2Idl_Table'
                                                     */
extern real32_T k_LCK_SPconfLow_DlyTm_Rdy2Idl_z[16];/* Variable: k_LCK_SPconfLow_DlyTm_Rdy2Idl_z
                                                     * Referenced by: '<S170>/k_LCK_SPconfLow_DlyTm_Rdy2Idl_Table'
                                                     */
extern real32_T k_LCK_SPconfMed_DlyTm_Rdy2Idl;/* Variable: k_LCK_SPconfMed_DlyTm_Rdy2Idl
                                               * Referenced by:
                                               *   '<S169>/k_LCK_SPconfMed_DlyTm_Rdy2Idl1'
                                               *   '<S169>/k_LCK_SPconfMed_DlyTm_Rdy2Idl2'
                                               *   '<S170>/k_LCK_SPconfMed_DlyTm_Rdy2Idl'
                                               */
extern real32_T k_LCK_SPconfMed_DlyTm_Rdy2Idl_x[16];/* Variable: k_LCK_SPconfMed_DlyTm_Rdy2Idl_x
                                                     * Referenced by: '<S170>/k_LCK_SPconfMed_DlyTm_Rdy2Idl_Table'
                                                     */
extern real32_T k_LCK_SPconfMed_DlyTm_Rdy2Idl_z[16];/* Variable: k_LCK_SPconfMed_DlyTm_Rdy2Idl_z
                                                     * Referenced by: '<S170>/k_LCK_SPconfMed_DlyTm_Rdy2Idl_Table'
                                                     */
extern real32_T k_LCK_SigFacHldTim_ActSta;/* Variable: k_LCK_SigFacHldTim_ActSta
                                           * Referenced by: '<S47>/k_LCK_SigFacHldTim_ActSta'
                                           */
extern real32_T k_LCK_SigFacHldTim_DrvStim;/* Variable: k_LCK_SigFacHldTim_DrvStim
                                            * Referenced by: '<S48>/k_LCK_SigFacHldTim_DrvStim'
                                            */
extern real32_T k_LCK_StrAngBks[8];    /* Variable: k_LCK_StrAngBks
                                        * Referenced by:
                                        *   '<S97>/k_LCK_DFac_SA_CurCen'
                                        *   '<S97>/k_LCK_DFac_SA_CurSid'
                                        *   '<S97>/k_LCK_DFac_SA_StrCen'
                                        *   '<S97>/k_LCK_DFac_SA_StrSid'
                                        *   '<S97>/k_LCK_PFac_SA_CurCen'
                                        *   '<S97>/k_LCK_PFac_SA_CurSid'
                                        *   '<S97>/k_LCK_PFac_SA_StrCen'
                                        *   '<S97>/k_LCK_PFac_SA_StrSid'
                                        */
extern real32_T k_LCK_StrAng_CR_threshold_z[7];/* Variable: k_LCK_StrAng_CR_threshold_z
                                                * Referenced by: '<S116>/LCK_Steer_angel_CR_threshold_LUT'
                                                */
extern real32_T k_LCK_StrSpdBks[8];    /* Variable: k_LCK_StrSpdBks
                                        * Referenced by:
                                        *   '<S79>/k_LCK_Lat_DFac_SS_Cur'
                                        *   '<S79>/k_LCK_Lat_DFac_SS_Str'
                                        *   '<S79>/k_LCK_Lat_PFac_SS_Cur'
                                        *   '<S79>/k_LCK_Lat_PFac_SS_Str'
                                        *   '<S98>/k_LCK_DFac_SS_CurCen'
                                        *   '<S98>/k_LCK_DFac_SS_CurSid'
                                        *   '<S98>/k_LCK_DFac_SS_StrCen'
                                        *   '<S98>/k_LCK_DFac_SS_StrSid'
                                        *   '<S98>/k_LCK_PFac_SS_CurCen'
                                        *   '<S98>/k_LCK_PFac_SS_CurSid'
                                        *   '<S98>/k_LCK_PFac_SS_StrCen'
                                        *   '<S98>/k_LCK_PFac_SS_StrSid'
                                        */
extern real32_T k_LCK_TJALCK_SWSpeed;  /* Variable: k_LCK_TJALCK_SWSpeed
                                        * Referenced by: '<S160>/Constant1'
                                        */
extern real32_T k_LCK_TimBks_ActSta[7];/* Variable: k_LCK_TimBks_ActSta
                                        * Referenced by:
                                        *   '<S47>/k_LCK_A0Fac_ActSta'
                                        *   '<S47>/k_LCK_HAFac_ActSta'
                                        *   '<S47>/k_LCK_HARFac_ActSta'
                                        */
extern real32_T k_LCK_TimBks_DrvStm[7];/* Variable: k_LCK_TimBks_DrvStm
                                        * Referenced by:
                                        *   '<S48>/k_LCK_A0Fac_DrvStm'
                                        *   '<S48>/k_LCK_HAFac_DrvStm'
                                        *   '<S48>/k_LCK_HARFac_DrvStm'
                                        */
extern real32_T k_LCK_TimCon_A0Flt_Normal;/* Variable: k_LCK_TimCon_A0Flt_Normal
                                           * Referenced by: '<S10>/k_LCK_TimCon_A0Flt_Normal'
                                           */
extern real32_T k_LCK_TimCon_A0Flt_Strong;/* Variable: k_LCK_TimCon_A0Flt_Strong
                                           * Referenced by: '<S10>/k_LCK_TimCon_A0Flt_Strong'
                                           */
extern real32_T k_LCK_TimCon_A1Flt_Normal;/* Variable: k_LCK_TimCon_A1Flt_Normal
                                           * Referenced by: '<S10>/k_LCK_TimCon_A1Flt_Normal'
                                           */
extern real32_T k_LCK_TimCon_A1Flt_Strong;/* Variable: k_LCK_TimCon_A1Flt_Strong
                                           * Referenced by: '<S10>/k_LCK_TimCon_A1Flt_Strong'
                                           */
extern real32_T k_LCK_TimCon_A2Flt_Normal;/* Variable: k_LCK_TimCon_A2Flt_Normal
                                           * Referenced by: '<S10>/k_LCK_TimCon_A2Flt_Normal'
                                           */
extern real32_T k_LCK_TimCon_A2Flt_Strong;/* Variable: k_LCK_TimCon_A2Flt_Strong
                                           * Referenced by: '<S10>/k_LCK_TimCon_A2Flt_Strong'
                                           */
extern real32_T k_LCK_TimCon_A3Flt_Normal;/* Variable: k_LCK_TimCon_A3Flt_Normal
                                           * Referenced by: '<S10>/k_LCK_TimCon_A3Flt_Normal'
                                           */
extern real32_T k_LCK_TimCon_A3Flt_Strong;/* Variable: k_LCK_TimCon_A3Flt_Strong
                                           * Referenced by: '<S10>/k_LCK_TimCon_A3Flt_Strong'
                                           */
extern real32_T k_LCK_TimCon_RadFlt;   /* Variable: k_LCK_TimCon_RadFlt
                                        * Referenced by: '<S17>/k_LCK_TimCon_RadFlt'
                                        */
extern real32_T k_LCK_TimCon_YawRtFlt; /* Variable: k_LCK_TimCon_YawRtFlt
                                        * Referenced by: '<S14>/k_LCK_TimCon_YawRtFlt'
                                        */
extern real32_T k_LCK_TinCon_LaneProbFlt;/* Variable: k_LCK_TinCon_LaneProbFlt
                                          * Referenced by:
                                          *   '<S8>/k_LCK_TinCon_LaneProbFlt'
                                          *   '<S8>/k_LCK_TinCon_LaneProbFlt1'
                                          */
extern real32_T k_LCK_TorqCmdBks[20];  /* Variable: k_LCK_TorqCmdBks
                                        * Referenced by:
                                        *   '<S37>/k_LCK_NonLinCompTab'
                                        *   '<S38>/k_LCK_RatLmt_TorqCmd'
                                        */
extern real32_T k_LCK_TorqThrBig_DrvStim;/* Variable: k_LCK_TorqThrBig_DrvStim
                                          * Referenced by: '<S48>/k_LCK_TorqThrBig_DrvStim'
                                          */
extern real32_T k_LCK_TorqThr_DrvStim; /* Variable: k_LCK_TorqThr_DrvStim
                                        * Referenced by: '<S48>/k_LCK_TorqThr_DrvStim'
                                        */
extern real32_T k_LCK_UseSP_MaxRange;  /* Variable: k_LCK_UseSP_MaxRange
                                        * Referenced by: '<S159>/k_LCK_UseSP_MaxRange'
                                        */
extern real32_T k_LCK_VehSpd_LowLmtFus_Idl2Rdy;/* Variable: k_LCK_VehSpd_LowLmtFus_Idl2Rdy
                                                * Referenced by: '<S167>/k_LCK_VehSpd_LowLmtFus_Idl2Rdy'
                                                */
extern real32_T k_LCK_VehSpd_LowlmtVis_Idl2Rdy;/* Variable: k_LCK_VehSpd_LowlmtVis_Idl2Rdy
                                                * Referenced by: '<S167>/k_LCK_VehSpd_LowlmtVis_Idl2Rdy'
                                                */
extern real32_T k_LCK_VehSpd_LowlmtVis_Rdy2Idl;/* Variable: k_LCK_VehSpd_LowlmtVis_Rdy2Idl
                                                * Referenced by: '<S169>/k_LCK_VehSpd_LowlmtVis_Rdy2Idl'
                                                */
extern real32_T k_LCK_VehSpd_TJA_ICA_Bound;/* Variable: k_LCK_VehSpd_TJA_ICA_Bound
                                            * Referenced by:
                                            *   '<S151>/k_LCK_VehSpd_TJA_ICA_Bound2'
                                            *   '<S167>/k_LCK_VehSpd_TJA_ICA_Bound'
                                            *   '<S169>/k_LCK_VehSpd_TJA_ICA_Bound1'
                                            */
extern real32_T k_LCK_VehSpd_Uplmt_Idl2Rdy;/* Variable: k_LCK_VehSpd_Uplmt_Idl2Rdy
                                            * Referenced by: '<S167>/k_LCK_VehSpd_Uplmt_Idl2Rdy'
                                            */
extern real32_T k_LCK_VehSpd_Uplmt_Rdy2Idl;/* Variable: k_LCK_VehSpd_Uplmt_Rdy2Idl
                                            * Referenced by: '<S169>/k_LCK_VehSpd_Uplmt_Rdy2Idl'
                                            */
extern real32_T k_LCK_VisionOnly;      /* Variable: k_LCK_VisionOnly
                                        * Referenced by:
                                        *   '<S160>/k_LCK_VisionOnly'
                                        *   '<S166>/k_LCK_VisionOnly'
                                        *   '<S169>/k_LCK_VisionOnly'
                                        */
extern real32_T k_LCK_VspdBks[16];     /* Variable: k_LCK_VspdBks
                                        * Referenced by:
                                        *   '<S16>/k_LCK_A0ShiftFac_Vspd'
                                        *   '<S22>/k_LCK_RngThr_FalRec'
                                        *   '<S31>/k_LCK_FfwDeltaFac_Vspd'
                                        *   '<S31>/k_LCK_FfwFac_Vspd'
                                        *   '<S37>/k_LCK_NonLinCompFac_Vspd'
                                        *   '<S38>/k_LCK_RatLmtFac_TorqCmd_Vspd'
                                        *   '<S43>/k_LCK_YawRate_OffsetFac_Vspd'
                                        *   '<S74>/k_LCK_Lat_ILmtFac_Vspd_CurvLan'
                                        *   '<S74>/k_LCK_Lat_ILmtFac_Vspd_StraLan'
                                        *   '<S77>/k_LCK_Lat_DFac_Vspd'
                                        *   '<S77>/k_LCK_Lat_IFac_Vspd'
                                        *   '<S77>/k_LCK_Lat_PFac_Vspd'
                                        *   '<S100>/k_LCK_DFac_Vspd'
                                        *   '<S100>/k_LCK_PFac_Vspd'
                                        */
extern real32_T k_LCK_YR_OffstFac_Dy_LftCurv[19];/* Variable: k_LCK_YR_OffstFac_Dy_LftCurv
                                                  * Referenced by: '<S43>/k_LCK_YR_OffstFac_Dy_LftCurv'
                                                  */
extern real32_T k_LCK_YR_OffstFac_Dy_RgtCurv[19];/* Variable: k_LCK_YR_OffstFac_Dy_RgtCurv
                                                  * Referenced by: '<S43>/k_LCK_YR_OffstFac_Dy_InnRgtCurv'
                                                  */
extern real32_T k_LCK_YawRateSign;     /* Variable: k_LCK_YawRateSign
                                        * Referenced by: '<S43>/ '
                                        */
extern real32_T k_LCK_YawRateThr_Act2Rdy_ROC_x[6];/* Variable: k_LCK_YawRateThr_Act2Rdy_ROC_x
                                                   * Referenced by: '<S172>/k_LCK_YawRateThr_Act2Rdy'
                                                   */
extern real32_T k_LCK_YawRateThr_Act2Rdy_z[6];/* Variable: k_LCK_YawRateThr_Act2Rdy_z
                                               * Referenced by: '<S172>/k_LCK_YawRateThr_Act2Rdy'
                                               */
extern real32_T k_LCK_YawRateThr_DlyTm_Act2Rdy;/* Variable: k_LCK_YawRateThr_DlyTm_Act2Rdy
                                                * Referenced by: '<S172>/k_LCK_YawRateThr_DlyTm_Act2Rdy'
                                                */
extern real32_T k_LCK_YawRateThr_Idl2Rdy;/* Variable: k_LCK_YawRateThr_Idl2Rdy
                                          * Referenced by: '<S167>/k_LCK_YawRateThr_Idl2Rdy'
                                          */
extern real32_T k_LCK_YawRate_DlyTm_Idl2Rdy;/* Variable: k_LCK_YawRate_DlyTm_Idl2Rdy
                                             * Referenced by: '<S167>/k_LCK_YawRate_DlyTm_Idl2Rdy'
                                             */
extern real32_T k_LCK_YawRate_OffsetFac_Vspd[16];/* Variable: k_LCK_YawRate_OffsetFac_Vspd
                                                  * Referenced by: '<S43>/k_LCK_YawRate_OffsetFac_Vspd'
                                                  */
extern real32_T k_LCK_YawRate_Offset_LftCurv[14];/* Variable: k_LCK_YawRate_Offset_LftCurv
                                                  * Referenced by: '<S43>/k_LCK_YawRate_Offset_LftCurv'
                                                  */
extern real32_T k_LCK_YawRate_Offset_RgtCurv[14];/* Variable: k_LCK_YawRate_Offset_RgtCurv
                                                  * Referenced by: '<S43>/k_LCK_YawRate_Offset_RgtCurv'
                                                  */
extern real32_T k_LCK_accel_inhibit_thold;/* Variable: k_LCK_accel_inhibit_thold
                                           * Referenced by: '<S115>/k_LCK_accel_inhibit_thold'
                                           */
extern real32_T k_LCK_host_veh_width;  /* Variable: k_LCK_host_veh_width
                                        * Referenced by: '<S168>/k_LCK_host_veh_width'
                                        */
extern real32_T k_LCK_ovrd_torq_thold_per_spd_x[6];/* Variable: k_LCK_ovrd_torq_thold_per_spd_x
                                                    * Referenced by: '<S112>/k_LCK_ovrd_torq_thold_per_spd'
                                                    */
extern real32_T k_LCK_ovrd_torq_thold_per_spd_z[6];/* Variable: k_LCK_ovrd_torq_thold_per_spd_z
                                                    * Referenced by: '<S112>/k_LCK_ovrd_torq_thold_per_spd'
                                                    */
extern real32_T k_LC_Exit_Switch;      /* Variable: k_LC_Exit_Switch
                                        * Referenced by: '<S171>/const10'
                                        */
extern real32_T k_Ovrd_torq_thold_per_spd_sw;/* Variable: k_Ovrd_torq_thold_per_spd_sw
                                              * Referenced by:
                                              *   '<S112>/Constant14'
                                              *   '<S112>/Constant15'
                                              */
extern real32_T k_StrAng_CR_hold_msec; /* Variable: k_StrAng_CR_hold_msec
                                        * Referenced by: '<S116>/k_StrAng_CR_hold_msec3'
                                        */
extern real32_T k_StrAng_CR_suppress_hold;/* Variable: k_StrAng_CR_suppress_hold
                                           * Referenced by:
                                           *   '<S113>/k_StrAng_CR_suppress_hold_3'
                                           *   '<S113>/k_StrAng_CR_suppress_hold_4'
                                           */
extern real32_T k_StrAng_CR_threshold_x[7];/* Variable: k_StrAng_CR_threshold_x
                                            * Referenced by:
                                            *   '<S116>/LCK_Steer_angel_CR_threshold_LUT'
                                            *   '<S116>/Steer_angel_CR_threshold_LUT'
                                            *   '<S116>/Steer_angel_CR_threshold_hs_LUT'
                                            *   '<S116>/Steer_angel_CR_threshold_ls_LUT'
                                            */
extern real32_T k_StrAng_CR_threshold_z[7];/* Variable: k_StrAng_CR_threshold_z
                                            * Referenced by: '<S116>/Steer_angel_CR_threshold_LUT'
                                            */
extern real32_T k_StrAng_filter_tau;   /* Variable: k_StrAng_filter_tau
                                        * Referenced by: '<S116>/k_StrAng_filter_tau'
                                        */
extern real32_T k_Use_Constant_SPP_Timer;/* Variable: k_Use_Constant_SPP_Timer
                                          * Referenced by: '<S170>/Use_Constant_SPP_Timer'
                                          */
extern real32_T k_accel_pedal_pos_per_speed_x[13];/* Variable: k_accel_pedal_pos_per_speed_x
                                                   * Referenced by: '<S115>/accel_pedal_pos_per_speed'
                                                   */
extern real32_T k_accel_pedal_pos_per_speed_z[13];/* Variable: k_accel_pedal_pos_per_speed_z
                                                   * Referenced by: '<S115>/accel_pedal_pos_per_speed'
                                                   */
extern real32_T k_brake_suprress_hold; /* Variable: k_brake_suprress_hold
                                        * Referenced by: '<S113>/k_brake_suprress_hold'
                                        */
extern real32_T k_driver_appl_torque_filt;/* Variable: k_driver_appl_torque_filt
                                           * Referenced by: '<S114>/k_driver_appl_torque_filt'
                                           */
extern real32_T k_driver_suppression_hold_time;/* Variable: k_driver_suppression_hold_time
                                                * Referenced by: '<S113>/k_driver_suppression_hold_time'
                                                */
extern real32_T k_hands_on_wheel_hold_msec;/* Variable: k_hands_on_wheel_hold_msec
                                            * Referenced by: '<S114>/k_hands_on_wheel_hold_msec'
                                            */
extern real32_T k_hands_on_wheel_torque_hi;/* Variable: k_hands_on_wheel_torque_hi
                                            * Referenced by: '<S114>/Constant'
                                            */
extern real32_T k_hands_on_wheel_torque_lo;/* Variable: k_hands_on_wheel_torque_lo
                                            * Referenced by: '<S114>/Constant3'
                                            */
extern real32_T k_handsoff_delay_cycles;/* Variable: k_handsoff_delay_cycles
                                         * Referenced by: '<S114>/k_handsoff_delay_cycles'
                                         */
extern real32_T k_handsoff_torq_Lo_CR; /* Variable: k_handsoff_torq_Lo_CR
                                        * Referenced by: '<S114>/k_handsoff_torq_Lo_CR'
                                        */
extern real32_T k_handson_delay_cycles;/* Variable: k_handson_delay_cycles
                                        * Referenced by: '<S114>/k_handson_delay_cycles'
                                        */
extern real32_T k_hs_StrAng_CR_threshold_z[7];/* Variable: k_hs_StrAng_CR_threshold_z
                                               * Referenced by: '<S116>/Steer_angel_CR_threshold_hs_LUT'
                                               */
extern real32_T k_ls_StrAng_CR_threshold_z[7];/* Variable: k_ls_StrAng_CR_threshold_z
                                               * Referenced by: '<S116>/Steer_angel_CR_threshold_ls_LUT'
                                               */
extern real32_T k_override_left_torq_thold;/* Variable: k_override_left_torq_thold
                                            * Referenced by: '<S112>/Constant7'
                                            */
extern real32_T k_override_right_torq_thold;/* Variable: k_override_right_torq_thold
                                             * Referenced by: '<S112>/Constant10'
                                             */
extern real32_T k_override_torq_sustain_period;/* Variable: k_override_torq_sustain_period
                                                * Referenced by:
                                                *   '<S112>/within_distance_sustain_period'
                                                *   '<S112>/within_distance_sustain_period1'
                                                */
extern real32_T k_turn_suprress_hold;  /* Variable: k_turn_suprress_hold
                                        * Referenced by: '<S113>/k_turn_suprress_hold'
                                        */
extern uint16_T c_BIT0;                /* Variable: c_BIT0
                                        * Referenced by:
                                        *   '<S173>/Gain 0'
                                        *   '<S191>/Gain 0'
                                        *   '<S201>/Gain 0'
                                        *   '<S211>/Gain 0'
                                        */
extern uint16_T c_BIT1;                /* Variable: c_BIT1
                                        * Referenced by:
                                        *   '<S173>/Gain1'
                                        *   '<S191>/Gain1'
                                        *   '<S201>/Gain1'
                                        *   '<S211>/Gain1'
                                        */
extern uint16_T c_BIT10;               /* Variable: c_BIT10
                                        * Referenced by:
                                        *   '<S173>/Gain10'
                                        *   '<S191>/Gain10'
                                        *   '<S201>/Gain10'
                                        *   '<S211>/Gain10'
                                        */
extern uint16_T c_BIT11;               /* Variable: c_BIT11
                                        * Referenced by:
                                        *   '<S173>/Gain11'
                                        *   '<S191>/Gain11'
                                        *   '<S201>/Gain11'
                                        *   '<S211>/Gain11'
                                        */
extern uint16_T c_BIT12;               /* Variable: c_BIT12
                                        * Referenced by:
                                        *   '<S173>/Gain12'
                                        *   '<S191>/Gain12'
                                        *   '<S201>/Gain12'
                                        *   '<S211>/Gain12'
                                        */
extern uint16_T c_BIT13;               /* Variable: c_BIT13
                                        * Referenced by:
                                        *   '<S173>/Gain13'
                                        *   '<S191>/Gain13'
                                        *   '<S201>/Gain13'
                                        *   '<S211>/Gain13'
                                        */
extern uint16_T c_BIT14;               /* Variable: c_BIT14
                                        * Referenced by:
                                        *   '<S173>/Gain14'
                                        *   '<S191>/Gain14'
                                        *   '<S201>/Gain14'
                                        *   '<S211>/Gain14'
                                        */
extern uint16_T c_BIT15;               /* Variable: c_BIT15
                                        * Referenced by:
                                        *   '<S173>/Gain15'
                                        *   '<S191>/Gain15'
                                        *   '<S201>/Gain15'
                                        *   '<S211>/Gain15'
                                        */
extern uint16_T c_BIT2;                /* Variable: c_BIT2
                                        * Referenced by:
                                        *   '<S173>/Gain2'
                                        *   '<S191>/Gain2'
                                        *   '<S201>/Gain2'
                                        *   '<S211>/Gain2'
                                        */
extern uint16_T c_BIT3;                /* Variable: c_BIT3
                                        * Referenced by:
                                        *   '<S173>/Gain3'
                                        *   '<S191>/Gain3'
                                        *   '<S201>/Gain3'
                                        *   '<S211>/Gain3'
                                        */
extern uint16_T c_BIT4;                /* Variable: c_BIT4
                                        * Referenced by:
                                        *   '<S173>/Gain4'
                                        *   '<S191>/Gain4'
                                        *   '<S201>/Gain4'
                                        *   '<S211>/Gain4'
                                        */
extern uint16_T c_BIT5;                /* Variable: c_BIT5
                                        * Referenced by:
                                        *   '<S173>/Gain5'
                                        *   '<S191>/Gain5'
                                        *   '<S201>/Gain5'
                                        *   '<S211>/Gain5'
                                        */
extern uint16_T c_BIT6;                /* Variable: c_BIT6
                                        * Referenced by:
                                        *   '<S173>/Gain6'
                                        *   '<S191>/Gain6'
                                        *   '<S201>/Gain6'
                                        *   '<S211>/Gain6'
                                        */
extern uint16_T c_BIT7;                /* Variable: c_BIT7
                                        * Referenced by:
                                        *   '<S173>/Gain7'
                                        *   '<S191>/Gain7'
                                        *   '<S201>/Gain7'
                                        *   '<S211>/Gain7'
                                        */
extern uint16_T c_BIT8;                /* Variable: c_BIT8
                                        * Referenced by:
                                        *   '<S173>/Gain8'
                                        *   '<S191>/Gain8'
                                        *   '<S201>/Gain8'
                                        *   '<S211>/Gain8'
                                        */
extern uint16_T c_BIT9;                /* Variable: c_BIT9
                                        * Referenced by:
                                        *   '<S173>/Gain9'
                                        *   '<S191>/Gain9'
                                        *   '<S201>/Gain9'
                                        *   '<S211>/Gain9'
                                        */
extern boolean_T LCK_BOOLEAN_FALSE;    /* Variable: LCK_BOOLEAN_FALSE
                                        * Referenced by:
                                        *   '<S59>/Chart'
                                        *   '<S60>/Chart1'
                                        */
extern boolean_T LCK_BOOLEAN_TURE;     /* Variable: LCK_BOOLEAN_TURE
                                        * Referenced by:
                                        *   '<S59>/Chart'
                                        *   '<S60>/Chart1'
                                        */
extern void LCK_Init(real32_T *rty_LCK_Mode, real32_T *rty_SPP_Type, real32_T
                     *rty_Lateral_HMI_LKS_Error, real32_T
                     *rty_Lateral_HMI_LKS_Passive_Rea, real32_T
                     *rty_Lateral_HMI_LKS_Status, real32_T
                     *rty_Lateral_HMI_LC_pro_reason, real32_T
                     *rty_Lateral_HMI_LC_Proposal, real32_T
                     *rty_Lateral_HMI_LC_Reason, real32_T
                     *rty_Lateral_HMI_LC_Request, real32_T
                     *rty_Lateral_HMI_LC_Tip, real32_T
                     *rty_Lateral_HMI_LC_Fail_Tip, real32_T
                     *rty_Lateral_HMI_LC_Dis_dy, real32_T
                     *rty_Lateral_HMI_LC_Dis_dx, real32_T
                     *rty_Lateral_HMI_LC_Direction, real32_T
                     *rty_Lateral_HMI_Handsoff_Warnin, real32_T *rty_LC_dx);
extern void LCK_Reset(void);
extern void LCK_Update(void);
extern void LCK(const LatCtrl_LCK_LanSigInputs_t *rtu_LCK_LanSigInputs, const
                LatCtrl_LCK_TrackSigInputs_t *rtu_LCK_TrackSigInputs, const
                LatCtrl_LCK_VehSigInputs_t *rtu_LCK_VehSigInputs, const real32_T
                *rtu_TJA_State, const real_T *rtu_ZOP_LCK_Activate, const real_T
                *rtu_ZOP_LC_Command, real32_T *rty_LCK_Mode, real32_T
                *rty_SPP_Type, real32_T *rty_Lateral_HMI_LKS_Error, real32_T
                *rty_Lateral_HMI_LKS_Passive_Rea, real32_T
                *rty_Lateral_HMI_LKS_Status, real32_T
                *rty_Lateral_HMI_LC_pro_reason, real32_T
                *rty_Lateral_HMI_LC_Proposal, real32_T
                *rty_Lateral_HMI_LC_Reason, real32_T *rty_Lateral_HMI_LC_Request,
                real32_T *rty_Lateral_HMI_LC_Tip, real32_T
                *rty_Lateral_HMI_LC_Fail_Tip, real32_T
                *rty_Lateral_HMI_LC_Dis_dy, real32_T *rty_Lateral_HMI_LC_Dis_dx,
                real32_T *rty_Lateral_HMI_LC_Direction, real32_T
                *rty_Lateral_HMI_Handsoff_Warnin, real32_T *rty_LC_dx);

/* Model reference registration function */
extern void LCK_initialize(const char_T **rt_errorStatus);

#ifndef LCK_MDLREF_HIDE_CHILD_

extern void LCK_TriggerHold_Init(B_TriggerHold_LCK_T *localB);
extern void LCK_TriggerHold(boolean_T rtu_Trigger, real32_T rtu_hold_time,
  B_TriggerHold_LCK_T *localB);
extern void LCK_Delay_Trig_Init(B_Delay_Trig_LCK_T *localB, DW_Delay_Trig_LCK_T *
  localDW);
extern void LCK_Delay_Trig(real32_T rtu_Input, real32_T rtu_Delay_Trig_Time,
  B_Delay_Trig_LCK_T *localB, DW_Delay_Trig_LCK_T *localDW);
extern void LCK_Sustain_wo_reset_Init(B_Sustain_wo_reset_LCK_T *localB,
  DW_Sustain_wo_reset_LCK_T *localDW);
extern void LCK_Sustain_wo_reset(const boolean_T *rtu_input, real32_T
  rtu_sustain_time, B_Sustain_wo_reset_LCK_T *localB, DW_Sustain_wo_reset_LCK_T *
  localDW);
extern void LCK_Sustain_wo_reset_l_Init(B_Sustain_wo_reset_LCK_f_T *localB,
  DW_Sustain_wo_reset_LCK_e_T *localDW);
extern void LCK_Sustain_wo_reset_c(boolean_T rtu_input, real32_T
  rtu_sustain_time, B_Sustain_wo_reset_LCK_f_T *localB,
  DW_Sustain_wo_reset_LCK_e_T *localDW);
extern void LCK_Sustain_wo_reset_k_Init(B_Sustain_wo_reset_LCK_p_T *localB,
  DW_Sustain_wo_reset_LCK_g_T *localDW);
extern void LCK_Sustain_wo_reset_m(real32_T rtu_input, real32_T rtu_sustain_time,
  B_Sustain_wo_reset_LCK_p_T *localB, DW_Sustain_wo_reset_LCK_g_T *localDW);
extern void LCK_Delay_Trig_j_Init(B_Delay_Trig_LCK_f_T *localB,
  DW_Delay_Trig_LCK_o_T *localDW);
extern void LCK_Delay_Trig_p(boolean_T rtu_Input, real32_T rtu_Delay_Trig_count,
  B_Delay_Trig_LCK_f_T *localB, DW_Delay_Trig_LCK_o_T *localDW);
extern void LCK_Delay_Trig_h_Init(B_Delay_Trig_LCK_o_T *localB,
  DW_Delay_Trig_LCK_l_T *localDW);
extern void LCK_Delay_Trig_po(real32_T rtu_Input, real32_T rtu_Delay_Trig_Time,
  B_Delay_Trig_LCK_o_T *localB, DW_Delay_Trig_LCK_l_T *localDW);
extern void LCK_signal_sustain_Init(B_signal_sustain_LCK_T *localB,
  DW_signal_sustain_LCK_T *localDW);
extern void LCK_signal_sustain(boolean_T rtu_input, real_T rtu_sustain_time,
  boolean_T rtu_clear, B_signal_sustain_LCK_T *localB, DW_signal_sustain_LCK_T
  *localDW);

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

#ifndef LCK_MDLREF_HIDE_CHILD_

extern MdlrefDW_LCK_T LCK_MdlrefDW;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

#ifndef LCK_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_LCK_c_T LCK_B;

/* Block states (default storage) */
extern DW_LCK_f_T LCK_DW;

#endif                                 /*LCK_MDLREF_HIDE_CHILD_*/

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'LCK'
 * '<S1>'   : 'LCK/Lateral_Control_Module'
 * '<S2>'   : 'LCK/Main_OS'
 * '<S3>'   : 'LCK/RTI Data'
 * '<S4>'   : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core'
 * '<S5>'   : 'LCK/Lateral_Control_Module/LCK_State_Ctrl'
 * '<S6>'   : 'LCK/Lateral_Control_Module/LC_Path_Process'
 * '<S7>'   : 'LCK/Lateral_Control_Module/Lat_HMI'
 * '<S8>'   : 'LCK/Lateral_Control_Module/Steer_Path_Process'
 * '<S9>'   : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Lateral Control State Detection'
 * '<S10>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 1'
 * '<S11>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 10'
 * '<S12>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 11'
 * '<S13>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 12'
 * '<S14>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 2'
 * '<S15>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 3'
 * '<S16>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 4'
 * '<S17>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 5'
 * '<S18>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 6'
 * '<S19>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 7'
 * '<S20>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8'
 * '<S21>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9'
 * '<S22>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Process of SPP False Recognition'
 * '<S23>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 1/First_Order_Lag_Filter_LIB'
 * '<S24>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 1/First_Order_Lag_Filter_LIB1'
 * '<S25>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 1/First_Order_Lag_Filter_LIB2'
 * '<S26>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 1/First_Order_Lag_Filter_LIB3'
 * '<S27>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 1/First_Order_Lag_Filter_LIB/Filter_Gain'
 * '<S28>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 1/First_Order_Lag_Filter_LIB1/Filter_Gain'
 * '<S29>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 1/First_Order_Lag_Filter_LIB2/Filter_Gain'
 * '<S30>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 1/First_Order_Lag_Filter_LIB3/Filter_Gain'
 * '<S31>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 10/Calculation of Feed Forward Torq'
 * '<S32>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 10/First_Order_Lag_Filter_LIB'
 * '<S33>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 10/Calculation of Feed Forward Torq/Compare To Zero2'
 * '<S34>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 10/Calculation of Feed Forward Torq/Compare To Zero3'
 * '<S35>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 10/Calculation of Feed Forward Torq/Compare To Zero4'
 * '<S36>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 10/First_Order_Lag_Filter_LIB/Filter_Gain'
 * '<S37>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 11/Non-Linear Compenastion'
 * '<S38>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 11/Torque_Cmd_Rate_Limit'
 * '<S39>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 11/Torque_Cmd_Rate_Limit/Compare To Constant'
 * '<S40>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 11/Torque_Cmd_Rate_Limit/Compare To Constant1'
 * '<S41>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 11/Torque_Cmd_Rate_Limit/Trigger Hold Counter'
 * '<S42>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 11/Torque_Cmd_Rate_Limit/Trigger Hold Counter/Trigger Hold'
 * '<S43>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 2/Calculation of Heading Angle Rate'
 * '<S44>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 2/First_Order_Lag_Filter_LIB'
 * '<S45>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 2/First_Order_Lag_Filter_LIB/Filter_Gain'
 * '<S46>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 3/Determination_Sig_Wekng_Factor'
 * '<S47>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 3/Sig_Wekng_0'
 * '<S48>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 3/Sig_Wekng_1'
 * '<S49>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 3/Sig_Wekng_0/Trigger Hold Counter'
 * '<S50>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 3/Sig_Wekng_0/Trigger Hold Counter/Trigger Hold'
 * '<S51>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 3/Sig_Wekng_1/Delay_Trig'
 * '<S52>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 3/Sig_Wekng_1/Trigger Hold Counter'
 * '<S53>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 3/Sig_Wekng_1/Delay_Trig/Delay_Trig'
 * '<S54>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 3/Sig_Wekng_1/Trigger Hold Counter/Trigger Hold'
 * '<S55>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 5/Compare To Constant'
 * '<S56>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 5/Compare To Constant1'
 * '<S57>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 5/First_Order_Lag_Filter_LIB'
 * '<S58>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 5/First_Order_Lag_Filter_LIB/Filter_Gain'
 * '<S59>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 6/Determination Of Cen Flag'
 * '<S60>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 6/Determination of Str Flag'
 * '<S61>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 6/Recognition of Curve Information'
 * '<S62>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 6/Determination Of Cen Flag/Chart'
 * '<S63>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 6/Determination of Str Flag/Chart1'
 * '<S64>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 6/Recognition of Curve Information/Compare To Zero'
 * '<S65>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 6/Recognition of Curve Information/Compare To Zero1'
 * '<S66>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 6/Recognition of Curve Information/Compare To Zero2'
 * '<S67>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 6/Recognition of Curve Information/Compare To Zero3'
 * '<S68>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 6/Recognition of Curve Information/Compare To Zero4'
 * '<S69>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 7/Compare To Constant4'
 * '<S70>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 0'
 * '<S71>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 1'
 * '<S72>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 0/D Gain'
 * '<S73>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 0/Definition  Fac 1 '
 * '<S74>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 0/Definition  Limit'
 * '<S75>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 0/Definition Fac 2'
 * '<S76>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 0/Definition Fac 3'
 * '<S77>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 0/Definition Fac 4'
 * '<S78>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 0/Definition Fac 5'
 * '<S79>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 0/Definition Fac 6'
 * '<S80>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 0/I Gain'
 * '<S81>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 0/Limitation of D Gain'
 * '<S82>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 0/Limitation of P0 Gain'
 * '<S83>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 0/Limitation of P1 Gain'
 * '<S84>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 0/P0 Gain'
 * '<S85>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 0/P1 Gain'
 * '<S86>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 1/First_Order_Lag_Filter_LIB'
 * '<S87>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 1/Saturation Dynamic'
 * '<S88>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 1/Saturation Dynamic1'
 * '<S89>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 1/Saturation Dynamic2'
 * '<S90>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 8/Module 1/First_Order_Lag_Filter_LIB/Filter_Gain'
 * '<S91>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9/Module 0'
 * '<S92>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9/Module 1'
 * '<S93>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9/Module 0/D Gain'
 * '<S94>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9/Module 0/Definition Fac 1 '
 * '<S95>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9/Module 0/Definition Fac 2'
 * '<S96>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9/Module 0/Definition Fac 3'
 * '<S97>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9/Module 0/Definition Fac 4'
 * '<S98>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9/Module 0/Definition Fac 5'
 * '<S99>'  : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9/Module 0/Definition Fac 6'
 * '<S100>' : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9/Module 0/Definition Fac 7'
 * '<S101>' : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9/Module 0/Definition Fac 8'
 * '<S102>' : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9/Module 0/Limitation of D Gain'
 * '<S103>' : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9/Module 0/Limitation of P Gain'
 * '<S104>' : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9/Module 0/P Gain'
 * '<S105>' : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9/Module 1/First_Order_Lag_Filter_LIB'
 * '<S106>' : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9/Module 1/Saturation Dynamic'
 * '<S107>' : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9/Module 1/Saturation Dynamic1'
 * '<S108>' : 'LCK/Lateral_Control_Module/Adas_Lateral_Control_LCK_Core/Module 9/Module 1/First_Order_Lag_Filter_LIB/Filter_Gain'
 * '<S109>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation'
 * '<S110>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK Mode Manager'
 * '<S111>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition'
 * '<S112>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Steer_Override'
 * '<S113>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression'
 * '<S114>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Hands_on_Wheel'
 * '<S115>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Filter_Accel_Pedal'
 * '<S116>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Filter_steer_angle_CR'
 * '<S117>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Steer_Override/Right_distance_sustain_period'
 * '<S118>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Steer_Override/left_distance_sustain_period'
 * '<S119>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/left_driver_suppression_sustain1'
 * '<S120>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/left_driver_suppression_sustain2'
 * '<S121>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/left_driver_suppression_sustain3'
 * '<S122>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/left_driver_suppression_sustain4'
 * '<S123>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/left_steer_angle_CR_driver_suppression_sustain'
 * '<S124>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/right_driver_suppression_sustain1'
 * '<S125>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/right_driver_suppression_sustain2'
 * '<S126>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/right_driver_suppression_sustain3'
 * '<S127>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/right_driver_suppression_sustain4'
 * '<S128>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/right_steer_angle_CR_driver_suppression_sustain'
 * '<S129>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/left_driver_suppression_sustain1/Sustain_wo_reset'
 * '<S130>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/left_driver_suppression_sustain2/Sustain_wo_reset'
 * '<S131>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/left_driver_suppression_sustain3/Sustain_wo_reset'
 * '<S132>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/left_driver_suppression_sustain4/Sustain_wo_reset'
 * '<S133>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/left_steer_angle_CR_driver_suppression_sustain/Sustain_wo_reset'
 * '<S134>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/right_driver_suppression_sustain1/Sustain_wo_reset'
 * '<S135>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/right_driver_suppression_sustain2/Sustain_wo_reset'
 * '<S136>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/right_driver_suppression_sustain3/Sustain_wo_reset'
 * '<S137>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/right_driver_suppression_sustain4/Sustain_wo_reset'
 * '<S138>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Driver_Suppression/right_steer_angle_CR_driver_suppression_sustain/Sustain_wo_reset'
 * '<S139>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Hands_on_Wheel/Delay_Trig_Cnt'
 * '<S140>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Hands_on_Wheel/Delay_Trig_Cnt1'
 * '<S141>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Hands_on_Wheel/First_Order_Lag_Filter_LIB'
 * '<S142>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Hands_on_Wheel/Signal_Sustain_With_Clear'
 * '<S143>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Hands_on_Wheel/Delay_Trig_Cnt/Delay_Trig'
 * '<S144>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Hands_on_Wheel/Delay_Trig_Cnt1/Delay_Trig'
 * '<S145>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Hands_on_Wheel/First_Order_Lag_Filter_LIB/Filter_Gain'
 * '<S146>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Det_Hands_on_Wheel/Signal_Sustain_With_Clear/signal_sustain'
 * '<S147>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Filter_steer_angle_CR/First_Order_Lag_Filter_LIB'
 * '<S148>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Filter_steer_angle_CR/LCK_StrAng_CR_inhibit'
 * '<S149>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Filter_steer_angle_CR/First_Order_Lag_Filter_LIB/Filter_Gain'
 * '<S150>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/Det_Driver_Operation/Filter_steer_angle_CR/LCK_StrAng_CR_inhibit/CR_inhibit'
 * '<S151>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/ACTIVE2READY_Magic_Calculation'
 * '<S152>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Det_LCK_Switch'
 * '<S153>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Det_TJA_Lat_Req'
 * '<S154>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_ACTIVE2OFF'
 * '<S155>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_ERROR2IDLE'
 * '<S156>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_ERROR2OFF'
 * '<S157>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_ERROR2READY'
 * '<S158>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_IDLE2OFF'
 * '<S159>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_Junction'
 * '<S160>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_Lat_Ctrl_Req'
 * '<S161>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_OFF2IDLE'
 * '<S162>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_OFF2READY'
 * '<S163>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_READY2OFF'
 * '<S164>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_SPP_Valid'
 * '<S165>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_Short_LM_Range'
 * '<S166>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_TJA_Switch'
 * '<S167>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/IDLE2READY_Magic_Calculation'
 * '<S168>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2ACTIVE_Magic_Claculation'
 * '<S169>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2IDLE_Magic_Calculation'
 * '<S170>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/SP_conf_Judgement'
 * '<S171>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Subsystem'
 * '<S172>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Yaw_Rate_Judgement'
 * '<S173>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/ACTIVE2READY_Magic_Calculation/ACTIVE2READY_Magic'
 * '<S174>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/ACTIVE2READY_Magic_Calculation/Delay_Trig'
 * '<S175>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/ACTIVE2READY_Magic_Calculation/Delay_Trig/Delay_Trig'
 * '<S176>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Det_TJA_Lat_Req/Chart'
 * '<S177>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_Junction/Delay_Trig'
 * '<S178>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_Junction/Signal_Sustain_With_Clear'
 * '<S179>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_Junction/Delay_Trig/Delay_Trig'
 * '<S180>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_Junction/Signal_Sustain_With_Clear/signal_sustain'
 * '<S181>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_Lat_Ctrl_Req/LCK_TJA_LatRq_Manager'
 * '<S182>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_Short_LM_Range/Delay_Trig'
 * '<S183>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Determination_of_Short_LM_Range/Delay_Trig/Delay_Trig'
 * '<S184>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/IDLE2READY_Magic_Calculation/Delay_Trig'
 * '<S185>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/IDLE2READY_Magic_Calculation/Delay_Trig1'
 * '<S186>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/IDLE2READY_Magic_Calculation/Delay_Trig2'
 * '<S187>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/IDLE2READY_Magic_Calculation/Delay_Trig3'
 * '<S188>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/IDLE2READY_Magic_Calculation/Delay_Trig4'
 * '<S189>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/IDLE2READY_Magic_Calculation/Delay_Trig5'
 * '<S190>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/IDLE2READY_Magic_Calculation/Delay_Trig6'
 * '<S191>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/IDLE2READY_Magic_Calculation/IDLE2READY_Magic'
 * '<S192>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/IDLE2READY_Magic_Calculation/Delay_Trig/Delay_Trig'
 * '<S193>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/IDLE2READY_Magic_Calculation/Delay_Trig1/Delay_Trig'
 * '<S194>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/IDLE2READY_Magic_Calculation/Delay_Trig2/Delay_Trig'
 * '<S195>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/IDLE2READY_Magic_Calculation/Delay_Trig3/Delay_Trig'
 * '<S196>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/IDLE2READY_Magic_Calculation/Delay_Trig4/Delay_Trig'
 * '<S197>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/IDLE2READY_Magic_Calculation/Delay_Trig5/Delay_Trig'
 * '<S198>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/IDLE2READY_Magic_Calculation/Delay_Trig6/Delay_Trig'
 * '<S199>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2ACTIVE_Magic_Claculation/Delay_Trig'
 * '<S200>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2ACTIVE_Magic_Claculation/Delay_Trig1'
 * '<S201>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2ACTIVE_Magic_Claculation/READY2ACTIVE_Magic'
 * '<S202>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2ACTIVE_Magic_Claculation/Trigger Hold2'
 * '<S203>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2ACTIVE_Magic_Claculation/Delay_Trig/Delay_Trig'
 * '<S204>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2ACTIVE_Magic_Claculation/Delay_Trig1/Delay_Trig'
 * '<S205>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2ACTIVE_Magic_Claculation/Trigger Hold2/Trigger Hold'
 * '<S206>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2IDLE_Magic_Calculation/Delay_Trig'
 * '<S207>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2IDLE_Magic_Calculation/Delay_Trig1'
 * '<S208>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2IDLE_Magic_Calculation/Delay_Trig2'
 * '<S209>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2IDLE_Magic_Calculation/Delay_Trig3'
 * '<S210>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2IDLE_Magic_Calculation/Delay_Trig4'
 * '<S211>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2IDLE_Magic_Calculation/IDLE2READY_Magic'
 * '<S212>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2IDLE_Magic_Calculation/Delay_Trig/Delay_Trig'
 * '<S213>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2IDLE_Magic_Calculation/Delay_Trig1/Delay_Trig'
 * '<S214>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2IDLE_Magic_Calculation/Delay_Trig2/Delay_Trig'
 * '<S215>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2IDLE_Magic_Calculation/Delay_Trig3/Delay_Trig'
 * '<S216>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/READY2IDLE_Magic_Calculation/Delay_Trig4/Delay_Trig'
 * '<S217>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/SP_conf_Judgement/Delay_Trig'
 * '<S218>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/SP_conf_Judgement/Delay_Trig1'
 * '<S219>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/SP_conf_Judgement/Delay_Trig2'
 * '<S220>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/SP_conf_Judgement/Delay_Trig/Delay_Trig'
 * '<S221>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/SP_conf_Judgement/Delay_Trig1/Delay_Trig'
 * '<S222>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/SP_conf_Judgement/Delay_Trig2/Delay_Trig'
 * '<S223>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Yaw_Rate_Judgement/Delay_Trig'
 * '<S224>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Yaw_Rate_Judgement/First_Order_Lag_Filter2'
 * '<S225>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Yaw_Rate_Judgement/Delay_Trig/Delay_Trig'
 * '<S226>' : 'LCK/Lateral_Control_Module/LCK_State_Ctrl/LCK_Mode_Transition/Yaw_Rate_Judgement/First_Order_Lag_Filter2/Filter_Gain'
 * '<S227>' : 'LCK/Lateral_Control_Module/LC_Path_Process/Chart'
 * '<S228>' : 'LCK/Lateral_Control_Module/LC_Path_Process/Chart1'
 * '<S229>' : 'LCK/Lateral_Control_Module/LC_Path_Process/LC_Path_Planning'
 * '<S230>' : 'LCK/Lateral_Control_Module/LC_Path_Process/LC_Path_Planning/Chart1'
 * '<S231>' : 'LCK/Lateral_Control_Module/LC_Path_Process/LC_Path_Planning/Path_Planning_Function '
 * '<S232>' : 'LCK/Lateral_Control_Module/Steer_Path_Process/Calculation_of_SPP_Confidence'
 * '<S233>' : 'LCK/Lateral_Control_Module/Steer_Path_Process/Calculation_of_SPP_Type'
 * '<S234>' : 'LCK/Lateral_Control_Module/Steer_Path_Process/Determination_of_SPP_Conf_and_Type'
 * '<S235>' : 'LCK/Lateral_Control_Module/Steer_Path_Process/First_Order_Lag_Filter_LIB'
 * '<S236>' : 'LCK/Lateral_Control_Module/Steer_Path_Process/First_Order_Lag_Filter_LIB1'
 * '<S237>' : 'LCK/Lateral_Control_Module/Steer_Path_Process/Subsystem'
 * '<S238>' : 'LCK/Lateral_Control_Module/Steer_Path_Process/Subsystem1'
 * '<S239>' : 'LCK/Lateral_Control_Module/Steer_Path_Process/Subsystem2'
 * '<S240>' : 'LCK/Lateral_Control_Module/Steer_Path_Process/First_Order_Lag_Filter_LIB/Filter_Gain'
 * '<S241>' : 'LCK/Lateral_Control_Module/Steer_Path_Process/First_Order_Lag_Filter_LIB1/Filter_Gain'
 * '<S242>' : 'LCK/Lateral_Control_Module/Steer_Path_Process/Subsystem/Signal_Sustain_With_Clear'
 * '<S243>' : 'LCK/Lateral_Control_Module/Steer_Path_Process/Subsystem/Signal_Sustain_With_Clear1'
 * '<S244>' : 'LCK/Lateral_Control_Module/Steer_Path_Process/Subsystem/Signal_Sustain_With_Clear/signal_sustain'
 * '<S245>' : 'LCK/Lateral_Control_Module/Steer_Path_Process/Subsystem/Signal_Sustain_With_Clear1/signal_sustain'
 * '<S246>' : 'LCK/RTI Data/RTI Data Store'
 * '<S247>' : 'LCK/RTI Data/RTI Data Store/RTI Data Store'
 * '<S248>' : 'LCK/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 */
#endif                                 /* RTW_HEADER_LCK_h_ */
