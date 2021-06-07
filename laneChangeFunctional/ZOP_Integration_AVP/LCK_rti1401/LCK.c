/*
 * LCK.c
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

#include "LCK_trc_ptr.h"
#include "LCK.h"
#include "LCK_private.h"

/* Named constants for Chart: '<S51>/Delay_Trig' */
#define LCK_IN_NO_ACTIVE_CHILD_f       ((uint8_T)0U)
#define LCK_IN_OFF                     ((uint8_T)1U)
#define LCK_IN_ON                      ((uint8_T)2U)
#define LCK_IN_Trig                    ((uint8_T)3U)

/* Named constants for Chart: '<S119>/Sustain_wo_reset' */
#define LCK_IN_Hold                    ((uint8_T)1U)
#define LCK_IN_NO_ACTIVE_CHILD_c       ((uint8_T)0U)
#define LCK_IN_Standby                 ((uint8_T)2U)

/* Named constants for Chart: '<S121>/Sustain_wo_reset' */
#define LCK_IN_Hold_f                  ((uint8_T)1U)
#define LCK_IN_NO_ACTIVE_CHILD_cs      ((uint8_T)0U)
#define LCK_IN_Standby_g               ((uint8_T)2U)

/* Named constants for Chart: '<S139>/Delay_Trig' */
#define LCK_IN_NO_ACTIVE_CHILD_n       ((uint8_T)0U)
#define LCK_IN_OFF_e                   ((uint8_T)1U)
#define LCK_IN_ON_p                    ((uint8_T)2U)
#define LCK_IN_Trig_j                  ((uint8_T)3U)

/* Named constants for Chart: '<S218>/Delay_Trig' */
#define LCK_IN_NO_ACTIVE_CHILD_k       ((uint8_T)0U)
#define LCK_IN_OFF_f                   ((uint8_T)1U)
#define LCK_IN_ON_l                    ((uint8_T)2U)
#define LCK_IN_Trig_ja                 ((uint8_T)3U)

/* Named constants for Chart: '<S248>/signal_sustain' */
#define LCK_IN_Hold_m                  ((uint8_T)1U)
#define LCK_IN_NO_ACTIVE_CHILD_j       ((uint8_T)0U)
#define LCK_IN_Standby_e               ((uint8_T)2U)

/* Named constants for Chart: '<S59>/Chart' */
#define LCK_IN_NO_ACTIVE_CHILD_a       ((uint8_T)0U)
#define LCK_IN_State_0                 ((uint8_T)1U)
#define LCK_IN_State_1                 ((uint8_T)2U)

/* Named constants for Chart: '<S112>/Right_distance_sustain_period' */
#define LCK_IN_Input_Standby           ((uint8_T)1U)
#define LCK_IN_Output_Message          ((uint8_T)2U)
#define LCK_IN_Output_Message1         ((uint8_T)3U)

/* Named constants for Chart: '<S142>/signal_sustain' */
#define LCK_IN_Hold_o                  ((uint8_T)1U)
#define LCK_IN_Standby_o               ((uint8_T)2U)

/* Named constants for Chart: '<S148>/CR_inhibit' */
#define LCK_IN_Output                  ((uint8_T)2U)
#define LCK_IN_WaitPeriod              ((uint8_T)3U)

/* Named constants for Chart: '<S5>/LCK Mode Manager' */
#define LCK_IN_LCKActive               ((uint8_T)1U)
#define LCK_IN_LCK_Error               ((uint8_T)2U)
#define LCK_IN_LCK_INIT                ((uint8_T)1U)
#define LCK_IN_LCK_Idle                ((uint8_T)3U)
#define LCK_IN_LCK_Off                 ((uint8_T)4U)
#define LCK_IN_LCK_Ready               ((uint8_T)5U)
#define LCK_IN_LEFTLC                  ((uint8_T)2U)
#define LCK_IN_RIGHTLC                 ((uint8_T)3U)

/* Named constants for Chart: '<S153>/Chart' */
#define LCK_IN_TJA_Lat_Req_Reset       ((uint8_T)1U)
#define LCK_IN_TJA_Lat_Req_Set         ((uint8_T)2U)

/* Named constants for Chart: '<S160>/LCK_TJA_LatRq_Manager' */
#define LCK_IN_LCK_Rq                  ((uint8_T)1U)
#define LCK_IN_LatRqOff                ((uint8_T)1U)
#define LCK_IN_LatRqOn                 ((uint8_T)2U)
#define LCK_IN_TJA_Rq                  ((uint8_T)2U)

/* Named constants for Chart: '<S6>/Chart' */
#define LCK_IN_Initialization          ((uint8_T)1U)
#define LCK_IN_LC_Phase1               ((uint8_T)2U)
#define LCK_IN_LC_Phase2               ((uint8_T)3U)
#define LCK_IN_LC_Phase3               ((uint8_T)4U)
#define LCK_IN_LC_Phase4               ((uint8_T)5U)

/* Named constants for Chart: '<S6>/Chart1' */
#define LCK_IN_LC_Phase1p5             ((uint8_T)3U)
#define LCK_IN_LC_Phase2_j             ((uint8_T)4U)
#define LCK_IN_LC_Phase3_b             ((uint8_T)5U)
#define LCK_IN_LC_Phase3p5             ((uint8_T)6U)
#define LCK_IN_LC_Phase4_i             ((uint8_T)7U)

/* Named constants for Chart: '<S231>/Chart1' */
#define LCK_IN_Init                    ((uint8_T)1U)
#define LCK_IN_LC_Flag_Clear           ((uint8_T)2U)
#define LCK_IN_LC_Gen                  ((uint8_T)3U)

/* Exported block signals */
real32_T Road_Radius;                  /* '<S17>/Divide' */
real32_T LatCtrl_LCK_TorqCmd;          /* '<S38>/Sum1' */
real32_T LCK_PID_TorqCmd;              /* '<S37>/Switch1' */
real32_T Curvature_Rate;               /* '<S17>/Gain3' */
boolean_T I_Term_Reset_Flag;           /* '<S19>/Logical Operator' */

/* Exported block parameters */
real32_T C_DEG2RAD = 0.0175F;          /* Variable: C_DEG2RAD
                                        * Referenced by: '<S43>/C_DEG2RAD'
                                        */
real32_T C_KPH2MPS = 0.2778F;          /* Variable: C_KPH2MPS
                                        * Referenced by:
                                        *   '<S16>/C_KPH2MPS'
                                        *   '<S17>/C_KPH2MPS'
                                        *   '<S231>/Gain'
                                        *   '<S43>/C_KPH2MPS'
                                        */
real32_T C_NEARZERO = 0.0001F;         /* Variable: C_NEARZERO
                                        * Referenced by:
                                        *   '<S17>/C_NEARZERO'
                                        *   '<S172>/C_NEARZERO'
                                        */
real32_T C_ONE = 1.0F;                 /* Variable: C_ONE
                                        * Referenced by: '<S114>/Constant4'
                                        */
real32_T C_RAD2DEG = 57.2958F;         /* Variable: C_RAD2DEG
                                        * Referenced by:
                                        *   '<S16>/C_RAD2DEG'
                                        *   '<S43>/C_RAD2DEG'
                                        */
real32_T C_ZERO = 0.0F;                /* Variable: C_ZERO
                                        * Referenced by:
                                        *   '<S113>/C_ZERO3'
                                        *   '<S113>/C_ZERO4'
                                        *   '<S114>/Constant5'
                                        *   '<S114>/zero_exit_cond'
                                        *   '<S151>/ZERO4'
                                        *   '<S169>/ZERO1'
                                        */
real32_T LCK_MODE_ACTIVE = 4.0F;       /* Variable: LCK_MODE_ACTIVE
                                        * Referenced by:
                                        *   '<S5>/LCK Mode Manager'
                                        *   '<S9>/LCK_MODE_ACTIVE'
                                        *   '<S168>/LCK_MODE_ACTIVE2'
                                        */
real32_T LCK_MODE_ERROR = 0.0F;        /* Variable: LCK_MODE_ERROR
                                        * Referenced by: '<S5>/LCK Mode Manager'
                                        */
real32_T LCK_MODE_IDLE = 2.0F;         /* Variable: LCK_MODE_IDLE
                                        * Referenced by: '<S5>/LCK Mode Manager'
                                        */
real32_T LCK_MODE_LEFT_LANE_CHANGE = 5.0F;/* Variable: LCK_MODE_LEFT_LANE_CHANGE
                                           * Referenced by:
                                           *   '<S5>/LCK Mode Manager'
                                           *   '<S9>/LCK_MODE_LEFT_LANE_CHANGE'
                                           */
real32_T LCK_MODE_OFF = 1.0F;          /* Variable: LCK_MODE_OFF
                                        * Referenced by: '<S5>/LCK Mode Manager'
                                        */
real32_T LCK_MODE_READY = 3.0F;        /* Variable: LCK_MODE_READY
                                        * Referenced by: '<S5>/LCK Mode Manager'
                                        */
real32_T LCK_MODE_RIGHT_LANE_CHANGE = 6.0F;/* Variable: LCK_MODE_RIGHT_LANE_CHANGE
                                            * Referenced by:
                                            *   '<S5>/LCK Mode Manager'
                                            *   '<S9>/LCK_MODE_RIGHT_LANE_CHANGE'
                                            */
real32_T LEFT_TURN_SIGNAL = 1.0F;      /* Variable: LEFT_TURN_SIGNAL
                                        * Referenced by: '<S113>/LEFT_TURN_SIGNAL'
                                        */
real32_T ML_TIME_MSEC = 20.0F;         /* Variable: ML_TIME_MSEC
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
                                        *   '<S232>/Gain'
                                        *   '<S232>/Gain1'
                                        *   '<S235>/Trigger Hold'
                                        *   '<S38>/Gain'
                                        *   '<S38>/Gain1'
                                        *   '<S71>/ML_TIME_MSEC2'
                                        *   '<S92>/ML_TIME_MSEC2'
                                        *   '<S112>/Right_distance_sustain_period'
                                        *   '<S112>/left_distance_sustain_period'
                                        *   '<S114>/ML_TIME_MSEC'
                                        *   '<S116>/ML_TIME_MSEC'
                                        *   '<S172>/ML_TIME_MSEC'
                                        *   '<S248>/signal_sustain'
                                        *   '<S249>/signal_sustain'
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
real32_T ML_TIME_SEC = 0.02F;          /* Variable: ML_TIME_SEC
                                        * Referenced by:
                                        *   '<S231>/ML_TIME_SEC'
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
                                        *   '<S225>/Delay_Trig'
                                        */
real32_T RIGHT_TURN_SIGNAL = 2.0F;     /* Variable: RIGHT_TURN_SIGNAL
                                        * Referenced by: '<S113>/RIGHT_TURN_SIGNAL'
                                        */
real32_T TJA_SP_CONF_MEDIUM = 2.0F;    /* Variable: TJA_SP_CONF_MEDIUM
                                        * Referenced by: '<S164>/Constant48'
                                        */
real32_T TJA_SP_TYPE_BLMONLY = 3.0F;   /* Variable: TJA_SP_TYPE_BLMONLY
                                        * Referenced by:
                                        *   '<S159>/Constant14'
                                        *   '<S159>/Constant17'
                                        *   '<S164>/Constant49'
                                        */
real32_T TJA_SP_TYPE_POBLM = 7.0F;     /* Variable: TJA_SP_TYPE_POBLM
                                        * Referenced by: '<S164>/Constant60'
                                        */
real32_T TJA_SP_TYPE_POONLY = 4.0F;    /* Variable: TJA_SP_TYPE_POONLY
                                        * Referenced by: '<S164>/Constant4'
                                        */
real32_T k_HLR_suprress_hold = 3000.0F;/* Variable: k_HLR_suprress_hold
                                        * Referenced by: '<S113>/k_HLR_suprress_hold'
                                        */
real32_T k_HighAccel_suppress_hold = 3000.0F;/* Variable: k_HighAccel_suppress_hold
                                              * Referenced by: '<S113>/k_HighAccel_suppress_hold'
                                              */
real32_T k_LCG_Configured = 1.0F;      /* Variable: k_LCG_Configured
                                        * Referenced by:
                                        *   '<S113>/k_LCG_Configured'
                                        *   '<S113>/k_LCG_Configured1'
                                        *   '<S151>/k_LCG_Configured1'
                                        */
real32_T k_LCK_A0Fac_ActSta[7] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* Variable: k_LCK_A0Fac_ActSta
                                                                      * Referenced by: '<S47>/k_LCK_A0Fac_ActSta'
                                                                      */

real32_T k_LCK_A0Fac_DrvStm[7] = { 0.7F, 0.8F, 0.9F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* Variable: k_LCK_A0Fac_DrvStm
                                                                      * Referenced by: '<S48>/k_LCK_A0Fac_DrvStm'
                                                                      */

real32_T k_LCK_A0ShiftFac_Dy_LftCurv[19] = { 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F,
  0.5F, 0.5F, 0.5F, 0.5F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F }
;                                      /* Variable: k_LCK_A0ShiftFac_Dy_LftCurv
                                        * Referenced by: '<S16>/k_LCK_A0ShiftFac_Dy_LftCurv'
                                        */

real32_T k_LCK_A0ShiftFac_Dy_RgtCurv[19] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F }
;                                      /* Variable: k_LCK_A0ShiftFac_Dy_RgtCurv
                                        * Referenced by: '<S16>/k_LCK_A0ShiftFac_Dy_RgtCurv'
                                        */

real32_T k_LCK_A0ShiftFac_Vspd[16] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* Variable: k_LCK_A0ShiftFac_Vspd
                                                           * Referenced by: '<S16>/k_LCK_A0ShiftFac_Vspd'
                                                           */

real32_T k_LCK_A0Shift_LftCurv[14] = { 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F,
  0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.0F } ;/* Variable: k_LCK_A0Shift_LftCurv
                                               * Referenced by: '<S16>/k_LCK_A0Shift_LftCurv'
                                               */

real32_T k_LCK_A0Shift_RgtCurv[14] = { -0.05F, -0.05F, -0.05F, -0.05F, -0.05F,
  -0.05F, -0.05F, -0.05F, -0.05F, -0.05F, -0.05F, -0.05F, -0.05F, 0.0F } ;/* Variable: k_LCK_A0Shift_RgtCurv
                                                                      * Referenced by: '<S16>/k_LCK_A0Shift_RgtCurv'
                                                                      */

real32_T k_LCK_A0Shift_StraLan = 0.0F; /* Variable: k_LCK_A0Shift_StraLan
                                        * Referenced by: '<S16>/k_LCK_A0Shift_StraLan'
                                        */
real32_T k_LCK_A0_Rdy2Act_UseConst = 0.0F;/* Variable: k_LCK_A0_Rdy2Act_UseConst
                                           * Referenced by: '<S168>/k_LCK_SP_A0_Rdy2Act3'
                                           */
real32_T k_LCK_Active2Ready_Mask = 255.0F;/* Variable: k_LCK_Active2Ready_Mask
                                           * Referenced by: '<S151>/k_LCK_Active2Ready_Mask'
                                           */
real32_T k_LCK_CvatRateBks[15] = { -0.0001F, -8.0E-5F, -6.0E-5F, -4.0E-5F,
  -2.0E-5F, -1.0E-5F, -5.0E-6F, 0.0F, 5.0E-6F, 1.0E-5F, 2.0E-5F, 4.0E-5F,
  6.0E-5F, 8.0E-5F, 0.0001F } ;        /* Variable: k_LCK_CvatRateBks
                                        * Referenced by:
                                        *   '<S31>/k_LCK_FfwFac_CvatRate_Lft'
                                        *   '<S31>/k_LCK_FfwFac_CvatRate_Rgt'
                                        */

real32_T k_LCK_CvatrBks[16] = { 0.0001F, 0.0001667F, 0.00025F, 0.0003333F,
  0.0005F, 0.0006667F, 0.0008333F, 0.001F, 0.00125F, 0.00143F, 0.001667F, 0.002F,
  0.0025F, 0.003333F, 0.005F, 0.01F } ;/* Variable: k_LCK_CvatrBks
                                        * Referenced by: '<S31>/k_LCK_FfwTorq_Cvat'
                                        */

real32_T k_LCK_DFac_Dy[10] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F } ;                       /* Variable: k_LCK_DFac_Dy
                                        * Referenced by: '<S99>/k_LCK_DFac_Dy'
                                        */

real32_T k_LCK_DFac_Dy_Curv[10] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F } ;                 /* Variable: k_LCK_DFac_Dy_Curv
                                        * Referenced by: '<S99>/k_LCK_DFac_Dy_Curv'
                                        */

real32_T k_LCK_DFac_HaCurCen[10] = { 1.0F, 0.85F, 0.8F, 0.75F, 0.700000048F,
  0.650000036F, 0.6F, 0.55F, 0.5F, 0.450000018F } ;/* Variable: k_LCK_DFac_HaCurCen
                                                    * Referenced by: '<S95>/k_LCK_DFac_HaCurCen'
                                                    */

real32_T k_LCK_DFac_HaCurSid[10] = { 1.0F, 0.9F, 0.8F, 0.7F, 0.65F, 0.63F, 0.55F,
  0.5F, 0.45F, 0.3F } ;                /* Variable: k_LCK_DFac_HaCurSid
                                        * Referenced by: '<S95>/k_LCK_DFac_HaCurSid'
                                        */

real32_T k_LCK_DFac_HaStrCen[10] = { 1.0F, 0.9F, 0.8F, 0.7F, 0.65F, 0.6F, 0.6F,
  0.55F, 0.4F, 0.3F } ;                /* Variable: k_LCK_DFac_HaStrCen
                                        * Referenced by: '<S95>/k_LCK_DFac_HaStrCen'
                                        */

real32_T k_LCK_DFac_HaStrSid[10] = { 1.0F, 1.0F, 0.9F, 0.78F, 0.73F, 0.7F, 0.65F,
  0.6F, 0.5F, 0.35F } ;                /* Variable: k_LCK_DFac_HaStrSid
                                        * Referenced by: '<S95>/k_LCK_DFac_HaStrSid'
                                        */

real32_T k_LCK_DFac_HadCurCen[10] = { 1.0F, 0.85F, 0.75F, 0.7F, 0.650000036F,
  0.6F, 0.55F, 0.55F, 0.5F, 0.5F } ;   /* Variable: k_LCK_DFac_HadCurCen
                                        * Referenced by: '<S96>/k_LCK_DFac_HadCurCen'
                                        */

real32_T k_LCK_DFac_HadCurSid[10] = { 1.0F, 0.9F, 0.8F, 0.700000048F,
  0.650000036F, 0.6F, 0.5F, 0.5F, 0.450000018F, 0.4F } ;/* Variable: k_LCK_DFac_HadCurSid
                                                         * Referenced by: '<S96>/k_LCK_DFac_HadCurSid'
                                                         */

real32_T k_LCK_DFac_HadStrCen[10] = { 1.0F, 0.85F, 0.7F, 0.6F, 0.55F, 0.5F,
  0.450000018F, 0.350000024F, 0.3F, 0.25F } ;/* Variable: k_LCK_DFac_HadStrCen
                                              * Referenced by: '<S96>/k_LCK_DFac_HadStrCen'
                                              */

real32_T k_LCK_DFac_HadStrSid[10] = { 1.0F, 1.0F, 0.8F, 0.55F, 0.45F, 0.4F,
  0.35F, 0.35F, 0.25F, 0.15F } ;       /* Variable: k_LCK_DFac_HadStrSid
                                        * Referenced by: '<S96>/k_LCK_DFac_HadStrSid'
                                        */

real32_T k_LCK_DFac_Rad[14] = { 0.55F, 0.55F, 0.55F, 0.55F, 0.55F, 0.6F, 0.65F,
  0.7F, 0.75F, 0.8F, 0.85F, 0.9F, 1.0F, 1.0F } ;/* Variable: k_LCK_DFac_Rad
                                                 * Referenced by: '<S101>/k_LCK_DFac_Rad'
                                                 */

real32_T k_LCK_DFac_SA_CurCen[8] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F } ;                             /* Variable: k_LCK_DFac_SA_CurCen
                                        * Referenced by: '<S97>/k_LCK_DFac_SA_CurCen'
                                        */

real32_T k_LCK_DFac_SA_CurSid[8] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F } ;                             /* Variable: k_LCK_DFac_SA_CurSid
                                        * Referenced by: '<S97>/k_LCK_DFac_SA_CurSid'
                                        */

real32_T k_LCK_DFac_SA_StrCen[8] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F } ;                             /* Variable: k_LCK_DFac_SA_StrCen
                                        * Referenced by: '<S97>/k_LCK_DFac_SA_StrCen'
                                        */

real32_T k_LCK_DFac_SA_StrSid[8] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F } ;                             /* Variable: k_LCK_DFac_SA_StrSid
                                        * Referenced by: '<S97>/k_LCK_DFac_SA_StrSid'
                                        */

real32_T k_LCK_DFac_SS_CurCen[8] = { 1.0F, 0.9F, 0.7F, 0.5F, 0.4F, 0.3F, 0.3F,
  0.3F } ;                             /* Variable: k_LCK_DFac_SS_CurCen
                                        * Referenced by: '<S98>/k_LCK_DFac_SS_CurCen'
                                        */

real32_T k_LCK_DFac_SS_CurSid[8] = { 1.0F, 1.0F, 0.7F, 0.6F, 0.4F, 0.35F, 0.3F,
  0.3F } ;                             /* Variable: k_LCK_DFac_SS_CurSid
                                        * Referenced by: '<S98>/k_LCK_DFac_SS_CurSid'
                                        */

real32_T k_LCK_DFac_SS_StrCen[8] = { 1.0F, 1.0F, 0.8F, 0.6F, 0.4F, 0.2F, 0.1F,
  0.05F } ;                            /* Variable: k_LCK_DFac_SS_StrCen
                                        * Referenced by: '<S98>/k_LCK_DFac_SS_StrCen'
                                        */

real32_T k_LCK_DFac_SS_StrSid[8] = { 1.0F, 0.9F, 0.7F, 0.5F, 0.4F, 0.2F, 0.1F,
  0.05F } ;                            /* Variable: k_LCK_DFac_SS_StrSid
                                        * Referenced by: '<S98>/k_LCK_DFac_SS_StrSid'
                                        */

real32_T k_LCK_DFac_Vspd[16] = { 0.0F, 0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.05F, 1.05F, 1.1F, 1.15F, 1.2F, 1.2F, 1.2F } ;/* Variable: k_LCK_DFac_Vspd
                                                        * Referenced by: '<S100>/k_LCK_DFac_Vspd'
                                                        */

real32_T k_LCK_DTermMax = 2.0F;        /* Variable: k_LCK_DTermMax
                                        * Referenced by: '<S92>/k_LCK_DTermMax'
                                        */
real32_T k_LCK_DlyTm_DrvStim = 0.2F;   /* Variable: k_LCK_DlyTm_DrvStim
                                        * Referenced by: '<S48>/k_LCK_DlyTm_DrvStim'
                                        */
real32_T k_LCK_DyBks_Curv[19] = { -1.0F, -0.8F, -0.6F, -0.5F, -0.4F, -0.3F,
  -0.2F, -0.1F, -0.05F, 0.0F, 0.05F, 0.1F, 0.2F, 0.3F, 0.4F, 0.5F, 0.6F, 0.8F,
  1.0F } ;                             /* Variable: k_LCK_DyBks_Curv
                                        * Referenced by:
                                        *   '<S16>/k_LCK_A0ShiftFac_Dy_LftCurv'
                                        *   '<S16>/k_LCK_A0ShiftFac_Dy_RgtCurv'
                                        *   '<S43>/k_LCK_YR_OffstFac_Dy_InnRgtCurv'
                                        *   '<S43>/k_LCK_YR_OffstFac_Dy_LftCurv'
                                        */

real32_T k_LCK_Enable_POOnly = 1.0F;   /* Variable: k_LCK_Enable_POOnly
                                        * Referenced by: '<S164>/Constant7'
                                        */
real32_T k_LCK_Entry_DistBuffer = 0.1F;/* Variable: k_LCK_Entry_DistBuffer
                                        * Referenced by: '<S168>/k_LCK_Entry_DistBuffer'
                                        */
real32_T k_LCK_Fac_Vspd2RngThr_FalRec = 0.23F;/* Variable: k_LCK_Fac_Vspd2RngThr_FalRec
                                               * Referenced by: '<S22>/k_LCK_Fac_Vspd2RngThr_FalRec'
                                               */
real32_T k_LCK_FfwDeltaFac_Rad_Lft[14] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* Variable: k_LCK_FfwDeltaFac_Rad_Lft
                                                     * Referenced by: '<S31>/k_LCK_FfwDeltaFac_Rad_Lft'
                                                     */

real32_T k_LCK_FfwDeltaFac_Rad_Rgt[14] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* Variable: k_LCK_FfwDeltaFac_Rad_Rgt
                                                     * Referenced by: '<S31>/k_LCK_FfwDeltaFac_Rad_Rgt'
                                                     */

real32_T k_LCK_FfwDeltaFac_Vspd[16] = { 0.0F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F,
  0.6F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* Variable: k_LCK_FfwDeltaFac_Vspd
                                                           * Referenced by: '<S31>/k_LCK_FfwDeltaFac_Vspd'
                                                           */

real32_T k_LCK_FfwFac_CvatRate_Lft[15] = { 1.05F, 1.05F, 1.05F, 1.05F, 1.05F,
  1.05F, 1.02F, 1.0F, 0.95F, 0.9F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F } ;/* Variable: k_LCK_FfwFac_CvatRate_Lft
                                                                    * Referenced by: '<S31>/k_LCK_FfwFac_CvatRate_Lft'
                                                                    */

real32_T k_LCK_FfwFac_CvatRate_Rgt[15] = { 0.9F, 0.9F, 0.9F, 0.9F, 0.9F, 0.95F,
  0.98F, 1.0F, 1.05F, 1.08F, 1.08F, 1.1F, 1.1F, 1.1F, 1.1F } ;/* Variable: k_LCK_FfwFac_CvatRate_Rgt
                                                               * Referenced by: '<S31>/k_LCK_FfwFac_CvatRate_Rgt'
                                                               */

real32_T k_LCK_FfwFac_Dy[8] = { 0.0F, 0.0F, 0.05F, 0.05F, 0.07F, 0.1F, 0.15F,
  0.15F } ;                            /* Variable: k_LCK_FfwFac_Dy
                                        * Referenced by: '<S31>/k_LCK_FfwFac_Dy'
                                        */

real32_T k_LCK_FfwFac_Rad_Lft[14] = { 1.3F, 1.2F, 1.1F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 0.9F, 0.95F, 0.95F, 0.95F, 0.95F, 0.95F } ;/* Variable: k_LCK_FfwFac_Rad_Lft
                                                    * Referenced by: '<S31>/k_LCK_FfwFac_Rad_Lft'
                                                    */

real32_T k_LCK_FfwFac_Rad_Rgt[14] = { 1.3F, 1.2F, 1.1F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* Variable: k_LCK_FfwFac_Rad_Rgt
                                               * Referenced by: '<S31>/k_LCK_FfwFac_Rad_Rgt'
                                               */

real32_T k_LCK_FfwFac_Vspd[16] = { 0.0F, 0.0F, 0.35F, 0.35F, 0.4F, 0.5F, 0.6F,
  0.7F, 0.85F, 1.0F, 1.1F, 1.3F, 1.4F, 1.5F, 1.6F, 1.6F } ;/* Variable: k_LCK_FfwFac_Vspd
                                                            * Referenced by: '<S31>/k_LCK_FfwFac_Vspd'
                                                            */

real32_T k_LCK_FfwTorq_Cvat[16] = { 0.0F, 0.06F, 0.15F, 0.25F, 0.4F, 0.54F, 0.7F,
  0.85F, 1.02F, 1.12F, 1.25F, 1.4F, 1.55F, 1.7F, 1.8F, 2.0F } ;/* Variable: k_LCK_FfwTorq_Cvat
                                                                * Referenced by: '<S31>/k_LCK_FfwTorq_Cvat'
                                                                */

real32_T k_LCK_Ffw_CvatSwh = 0.0F;     /* Variable: k_LCK_Ffw_CvatSwh
                                        * Referenced by: '<S31>/k_LCK_Ffw_CvatSwh'
                                        */
real32_T k_LCK_Ffw_DyBks[8] = { 0.05F, 0.1F, 0.15F, 0.2F, 0.3F, 0.4F, 0.5F, 0.7F
} ;                                    /* Variable: k_LCK_Ffw_DyBks
                                        * Referenced by: '<S31>/k_LCK_FfwFac_Dy'
                                        */

real32_T k_LCK_Ffw_TimCon_CmdFlt = 0.0F;/* Variable: k_LCK_Ffw_TimCon_CmdFlt
                                         * Referenced by: '<S11>/k_LCK_Ffw_TimCon_CmdFlt'
                                         */
real32_T k_LCK_HAFac_ActSta[7] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* Variable: k_LCK_HAFac_ActSta
                                                                      * Referenced by: '<S47>/k_LCK_HAFac_ActSta'
                                                                      */

real32_T k_LCK_HAFac_DrvStm[7] = { 0.7F, 0.8F, 0.9F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* Variable: k_LCK_HAFac_DrvStm
                                                                      * Referenced by: '<S48>/k_LCK_HAFac_DrvStm'
                                                                      */

real32_T k_LCK_HARFac_ActSta[7] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* Variable: k_LCK_HARFac_ActSta
                                                                      * Referenced by: '<S47>/k_LCK_HARFac_ActSta'
                                                                      */

real32_T k_LCK_HARFac_DrvStm[7] = { 0.7F, 0.8F, 0.9F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* Variable: k_LCK_HARFac_DrvStm
                                                                      * Referenced by: '<S48>/k_LCK_HARFac_DrvStm'
                                                                      */

real32_T k_LCK_HaloTime = 2000.0F;     /* Variable: k_LCK_HaloTime
                                        * Referenced by: '<S168>/k_LCK_HaloTime'
                                        */
real32_T k_LCK_HaloTime_Switch = 0.0F; /* Variable: k_LCK_HaloTime_Switch
                                        * Referenced by: '<S168>/k_LCK_HaloTime_Switch'
                                        */
real32_T k_LCK_HedAngDiffX[10] = { 0.0F, 0.1F, 0.2F, 0.3F, 0.4F, 0.6F, 0.8F,
  1.0F, 2.0F, 3.0F } ;                 /* Variable: k_LCK_HedAngDiffX
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

real32_T k_LCK_HedAngRateDiffX[10] = { 0.0F, 0.1F, 0.2F, 0.3F, 0.4F, 0.6F, 0.8F,
  1.0F, 2.0F, 3.0F } ;                 /* Variable: k_LCK_HedAngRateDiffX
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

real32_T k_LCK_Hed_DyBks[10] = { 0.05F, 0.1F, 0.15F, 0.2F, 0.3F, 0.4F, 0.5F,
  0.7F, 0.9F, 1.1F } ;                 /* Variable: k_LCK_Hed_DyBks
                                        * Referenced by:
                                        *   '<S99>/k_LCK_DFac_Dy'
                                        *   '<S99>/k_LCK_DFac_Dy_Curv'
                                        *   '<S99>/k_LCK_PFac_Dy'
                                        *   '<S99>/k_LCK_PFac_Dy_Curv'
                                        */

real32_T k_LCK_HndsOnWhel_DlyTm_Idl2Rdy = 0.0F;/* Variable: k_LCK_HndsOnWhel_DlyTm_Idl2Rdy
                                                * Referenced by: '<S167>/k_LCK_HndsOnWhel_DlyTm_Idl2Rdy'
                                                */
real32_T k_LCK_Idle2Ready_Mask = 239.0F;/* Variable: k_LCK_Idle2Ready_Mask
                                         * Referenced by:
                                         *   '<S167>/Idle2Ready_Mask'
                                         *   '<S167>/k_LCK_Idle2Ready_Mask'
                                         */
real32_T k_LCK_Junc_SusTime = 1.0F;    /* Variable: k_LCK_Junc_SusTime
                                        * Referenced by: '<S159>/k_LCK_Junc_SusTime'
                                        */
real32_T k_LCK_KpKdDecSlopeLmt = 10.0F;/* Variable: k_LCK_KpKdDecSlopeLmt
                                        * Referenced by:
                                        *   '<S102>/k_LCK_KpKdDecSlopeLmt'
                                        *   '<S103>/k_LCK_KpKdDecSlopeLmt'
                                        */
real32_T k_LCK_KpKdIncSlopeLmt = 5.0F; /* Variable: k_LCK_KpKdIncSlopeLmt
                                        * Referenced by:
                                        *   '<S102>/k_LCK_KpKdIncSlopeLmt'
                                        *   '<S103>/k_LCK_KpKdIncSlopeLmt'
                                        */
real32_T k_LCK_LM_ROC_DlyTm_Idl2Rdy = 1.5F;/* Variable: k_LCK_LM_ROC_DlyTm_Idl2Rdy
                                            * Referenced by: '<S167>/k_LCK_LM_ROC_DlyTm_Idl2Rdy'
                                            */
real32_T k_LCK_LM_ROC_DlyTm_Rdy2Idl = 2.0F;/* Variable: k_LCK_LM_ROC_DlyTm_Rdy2Idl
                                            * Referenced by: '<S169>/k_LCK_LM_ROC_DlyTm_Rdy2Idl'
                                            */
real32_T k_LCK_LM_ROC_Idl2Rdy = 100.0F;/* Variable: k_LCK_LM_ROC_Idl2Rdy
                                        * Referenced by: '<S167>/k_LCK_LM_ROC_Idl2Rdy'
                                        */
real32_T k_LCK_LM_ROC_Rdy2Idl = 50.0F; /* Variable: k_LCK_LM_ROC_Rdy2Idl
                                        * Referenced by: '<S169>/k_LCK_LM_ROC_Rdy2Idl'
                                        */
real32_T k_LCK_LatCtrl_DFac_Lft = 1.0F;/* Variable: k_LCK_LatCtrl_DFac_Lft
                                        * Referenced by: '<S94>/k_LCK_LatCtrl_DFac_Lft'
                                        */
real32_T k_LCK_LatCtrl_DFac_Rgt = 1.05F;/* Variable: k_LCK_LatCtrl_DFac_Rgt
                                         * Referenced by: '<S94>/k_LCK_LatCtrl_DFac_Rgt'
                                         */
real32_T k_LCK_LatCtrl_Kd = 2.9F;      /* Variable: k_LCK_LatCtrl_Kd
                                        * Referenced by: '<S93>/k_LCK_LatCtrl_Kd'
                                        */
real32_T k_LCK_LatCtrl_Kp = 3.1F;      /* Variable: k_LCK_LatCtrl_Kp
                                        * Referenced by: '<S104>/k_LCK_LatCtrl_Kp'
                                        */
real32_T k_LCK_LatCtrl_PFac_Lft = 1.0F;/* Variable: k_LCK_LatCtrl_PFac_Lft
                                        * Referenced by: '<S94>/k_LCK_LatCtrl_PFac_Lft'
                                        */
real32_T k_LCK_LatCtrl_PFac_Rgt = 1.05F;/* Variable: k_LCK_LatCtrl_PFac_Rgt
                                         * Referenced by: '<S94>/k_LCK_LatCtrl_PFac_Rgt'
                                         */
real32_T k_LCK_LatCtrl_TimCon_CmdFlt = 5.0F;/* Variable: k_LCK_LatCtrl_TimCon_CmdFlt
                                             * Referenced by: '<S92>/k_LCK_LatCtrl_TimCon_CmdFlt'
                                             */
real32_T k_LCK_Lat_Ctrl_DFac_Lft = 1.0F;/* Variable: k_LCK_Lat_Ctrl_DFac_Lft
                                         * Referenced by: '<S73>/k_LCK_Lat_Ctrl_DFac_Lft'
                                         */
real32_T k_LCK_Lat_Ctrl_DFac_Rgt = 1.05F;/* Variable: k_LCK_Lat_Ctrl_DFac_Rgt
                                          * Referenced by: '<S73>/k_LCK_Lat_Ctrl_DFac_Rgt'
                                          */
real32_T k_LCK_Lat_Ctrl_Kd = 0.8F;     /* Variable: k_LCK_Lat_Ctrl_Kd
                                        * Referenced by: '<S72>/k_LCK_Lat_Ctrl_Kd'
                                        */
real32_T k_LCK_Lat_Ctrl_Ki = 0.5F;     /* Variable: k_LCK_Lat_Ctrl_Ki
                                        * Referenced by: '<S80>/k_LCK_Lat_Ctrl_Ki'
                                        */
real32_T k_LCK_Lat_Ctrl_Kp = 0.7F;     /* Variable: k_LCK_Lat_Ctrl_Kp
                                        * Referenced by:
                                        *   '<S84>/k_LCK_Lat_Ctrl_Kp'
                                        *   '<S85>/k_LCK_Lat_Ctrl_Kp'
                                        */
real32_T k_LCK_Lat_Ctrl_Kp_NearGain = 0.7F;/* Variable: k_LCK_Lat_Ctrl_Kp_NearGain
                                            * Referenced by: '<S84>/k_LCK_Lat_Ctrl_Kp_NearGain'
                                            */
real32_T k_LCK_Lat_Ctrl_PFac_Lft = 1.0F;/* Variable: k_LCK_Lat_Ctrl_PFac_Lft
                                         * Referenced by: '<S73>/k_LCK_Lat_Ctrl_PFac_Lft'
                                         */
real32_T k_LCK_Lat_Ctrl_PFac_Rgt = 1.05F;/* Variable: k_LCK_Lat_Ctrl_PFac_Rgt
                                          * Referenced by: '<S73>/k_LCK_Lat_Ctrl_PFac_Rgt'
                                          */
real32_T k_LCK_Lat_Ctrl_TimCon_CmdFlt = 5.0F;/* Variable: k_LCK_Lat_Ctrl_TimCon_CmdFlt
                                              * Referenced by: '<S71>/k_LCK_Lat_Ctrl_TimCon_CmdFlt'
                                              */
real32_T k_LCK_Lat_DFac_Rad[14] = { 0.4F, 0.4F, 0.45F, 0.45F, 0.5F, 0.6F, 0.65F,
  0.7F, 0.8F, 0.8F, 0.85F, 0.9F, 1.0F, 1.0F } ;/* Variable: k_LCK_Lat_DFac_Rad
                                                * Referenced by: '<S78>/k_LCK_Lat_DFac_Rad'
                                                */

real32_T k_LCK_Lat_DFac_SS_Cur[8] = { 1.0F, 0.9F, 0.7F, 0.5F, 0.4F, 0.3F, 0.2F,
  0.15F } ;                            /* Variable: k_LCK_Lat_DFac_SS_Cur
                                        * Referenced by: '<S79>/k_LCK_Lat_DFac_SS_Cur'
                                        */

real32_T k_LCK_Lat_DFac_SS_Str[8] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F } ;                             /* Variable: k_LCK_Lat_DFac_SS_Str
                                        * Referenced by: '<S79>/k_LCK_Lat_DFac_SS_Str'
                                        */

real32_T k_LCK_Lat_DFac_Vspd[16] = { 0.0F, 0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.05F, 1.05F, 1.1F, 1.1F, 1.2F, 1.2F, 1.2F } ;/* Variable: k_LCK_Lat_DFac_Vspd
                                                             * Referenced by: '<S77>/k_LCK_Lat_DFac_Vspd'
                                                             */

real32_T k_LCK_Lat_DyBks[10] = { 0.05F, 0.1F, 0.2F, 0.3F, 0.4F, 0.5F, 0.6F, 0.8F,
  1.0F, 1.2F } ;                       /* Variable: k_LCK_Lat_DyBks
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

real32_T k_LCK_Lat_IFac_Rad[14] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* Variable: k_LCK_Lat_IFac_Rad
                                               * Referenced by: '<S78>/k_LCK_Lat_IFac_Rad'
                                               */

real32_T k_LCK_Lat_IFac_Vspd[16] = { 0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* Variable: k_LCK_Lat_IFac_Vspd
                                                           * Referenced by: '<S77>/k_LCK_Lat_IFac_Vspd'
                                                           */

real32_T k_LCK_Lat_ILmtFac_Dy_CurvLan[10] = { 0.8F, 0.8F, 1.0F, 1.2F, 1.2F, 1.2F,
  1.2F, 1.2F, 1.2F, 1.2F } ;           /* Variable: k_LCK_Lat_ILmtFac_Dy_CurvLan
                                        * Referenced by: '<S74>/k_LCK_Lat_ILmtFac_Dy_CurvLan'
                                        */

real32_T k_LCK_Lat_ILmtFac_Dy_StraLan[10] = { 1.0F, 1.0F, 1.0F, 1.5F, 1.5F, 1.5F,
  1.5F, 1.5F, 1.5F, 1.5F } ;           /* Variable: k_LCK_Lat_ILmtFac_Dy_StraLan
                                        * Referenced by: '<S74>/k_LCK_Lat_ILmtFac_Dy_StraLan'
                                        */

real32_T k_LCK_Lat_ILmtFac_Rad[14] = { 0.0F, 0.0F, 0.1F, 0.1F, 0.15F, 0.15F,
  0.15F, 0.3F, 0.3F, 0.4F, 0.5F, 0.5F, 0.5F, 0.5F } ;/* Variable: k_LCK_Lat_ILmtFac_Rad
                                                      * Referenced by: '<S74>/k_LCK_Lat_ILmtFac_Rad'
                                                      */

real32_T k_LCK_Lat_ILmtFac_Rad_NearGain = 1.0F;/* Variable: k_LCK_Lat_ILmtFac_Rad_NearGain
                                                * Referenced by: '<S74>/k_LCK_Lat_ILmtFac_Rad_NearGain'
                                                */
real32_T k_LCK_Lat_ILmtFac_Vspd_CurvLan[16] = { 0.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* Variable: k_LCK_Lat_ILmtFac_Vspd_CurvLan
                                                                      * Referenced by: '<S74>/k_LCK_Lat_ILmtFac_Vspd_CurvLan'
                                                                      */

real32_T k_LCK_Lat_ILmtFac_Vspd_StraLan[16] = { 0.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F } ;/* Variable: k_LCK_Lat_ILmtFac_Vspd_StraLan
                                                                      * Referenced by: '<S74>/k_LCK_Lat_ILmtFac_Vspd_StraLan'
                                                                      */

real32_T k_LCK_Lat_ITermLmt_Dy = 1.0F; /* Variable: k_LCK_Lat_ITermLmt_Dy
                                        * Referenced by: '<S74>/k_LCK_Lat_ITermLmt_Dy'
                                        */
real32_T k_LCK_Lat_KpKdDecSlopeLmt = 10.0F;/* Variable: k_LCK_Lat_KpKdDecSlopeLmt
                                            * Referenced by:
                                            *   '<S81>/k_LCK_Lat_KpKdDecSlopeLmt'
                                            *   '<S82>/k_LCK_Lat_KpKdDecSlopeLmt'
                                            *   '<S83>/k_LCK_Lat_KpKdDecSlopeLmt'
                                            */
real32_T k_LCK_Lat_KpKdIncSlopeLmt = 10.0F;/* Variable: k_LCK_Lat_KpKdIncSlopeLmt
                                            * Referenced by:
                                            *   '<S81>/k_LCK_Lat_KpKdIncSlopeLmt'
                                            *   '<S82>/k_LCK_Lat_KpKdIncSlopeLmt'
                                            *   '<S83>/k_LCK_Lat_KpKdIncSlopeLmt'
                                            */
real32_T k_LCK_Lat_PFac_Dy_InnLftCur[10] = { 1.1F, 1.1F, 1.1F, 1.0F, 1.0F, 0.9F,
  0.6F, 0.5F, 0.45F, 0.3F } ;          /* Variable: k_LCK_Lat_PFac_Dy_InnLftCur
                                        * Referenced by:
                                        *   '<S75>/k_LCK_Lat_PFac_Dy_InnLftCur'
                                        *   '<S76>/k_LCK_Lat_PFac_Dy_InnLftCur'
                                        */

real32_T k_LCK_Lat_PFac_Dy_InnRgtCur[10] = { 1.1F, 1.1F, 1.1F, 1.0F, 0.9F, 0.7F,
  0.6F, 0.4F, 0.4F, 0.3F } ;           /* Variable: k_LCK_Lat_PFac_Dy_InnRgtCur
                                        * Referenced by:
                                        *   '<S75>/k_LCK_Lat_PFac_Dy_InnRgtCur'
                                        *   '<S76>/k_LCK_Lat_PFac_Dy_InnRgtCur'
                                        */

real32_T k_LCK_Lat_PFac_Dy_OutLftCur[10] = { 1.0F, 1.0F, 1.0F, 1.0F, 0.9F, 0.5F,
  0.4F, 0.3F, 0.2F, 0.2F } ;           /* Variable: k_LCK_Lat_PFac_Dy_OutLftCur
                                        * Referenced by:
                                        *   '<S75>/k_LCK_Lat_PFac_Dy_OutLftCur'
                                        *   '<S76>/k_LCK_Lat_PFac_Dy_OutLftCur'
                                        */

real32_T k_LCK_Lat_PFac_Dy_OutRgtCur[10] = { 1.0F, 1.0F, 0.9F, 0.85F, 0.8F, 0.5F,
  0.4F, 0.2F, 0.2F, 0.2F } ;           /* Variable: k_LCK_Lat_PFac_Dy_OutRgtCur
                                        * Referenced by:
                                        *   '<S75>/k_LCK_Lat_PFac_Dy_OutRgtCur'
                                        *   '<S76>/k_LCK_Lat_PFac_Dy_OutRgtCur'
                                        */

real32_T k_LCK_Lat_PFac_Dy_Str[10] = { 1.1F, 1.1F, 1.1F, 1.0F, 1.0F, 0.8F, 0.6F,
  0.5F, 0.4F, 0.3F } ;                 /* Variable: k_LCK_Lat_PFac_Dy_Str
                                        * Referenced by:
                                        *   '<S75>/k_LCK_Lat_PFac_Dy_Str'
                                        *   '<S76>/k_LCK_Lat_PFac_Dy_Str'
                                        */

real32_T k_LCK_Lat_PFac_Rad[14] = { 0.4F, 0.4F, 0.45F, 0.45F, 0.5F, 0.6F, 0.65F,
  0.7F, 0.8F, 0.8F, 0.85F, 0.9F, 1.0F, 1.0F } ;/* Variable: k_LCK_Lat_PFac_Rad
                                                * Referenced by: '<S78>/k_LCK_Lat_PFac_Rad'
                                                */

real32_T k_LCK_Lat_PFac_SS_Cur[8] = { 1.0F, 0.9F, 0.7F, 0.5F, 0.4F, 0.3F, 0.2F,
  0.15F } ;                            /* Variable: k_LCK_Lat_PFac_SS_Cur
                                        * Referenced by: '<S79>/k_LCK_Lat_PFac_SS_Cur'
                                        */

real32_T k_LCK_Lat_PFac_SS_Str[8] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F } ;                             /* Variable: k_LCK_Lat_PFac_SS_Str
                                        * Referenced by: '<S79>/k_LCK_Lat_PFac_SS_Str'
                                        */

real32_T k_LCK_Lat_PFac_Vspd[16] = { 0.0F, 0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.05F, 1.05F, 1.1F, 1.1F, 1.2F, 1.2F, 1.2F } ;/* Variable: k_LCK_Lat_PFac_Vspd
                                                             * Referenced by: '<S77>/k_LCK_Lat_PFac_Vspd'
                                                             */

real32_T k_LCK_Lat_PTermMax = 2.0F;    /* Variable: k_LCK_Lat_PTermMax
                                        * Referenced by: '<S71>/k_LCK_Lat_PTermMax'
                                        */
real32_T k_LCK_LnCetr_DlyTm_Rdy2Act = 0.5F;/* Variable: k_LCK_LnCetr_DlyTm_Rdy2Act
                                            * Referenced by:
                                            *   '<S168>/k_LCK_LnCetr_DlyTm_Rdy2Act'
                                            *   '<S168>/k_LCK_LnCetr_DlyTm_Rdy2Act1'
                                            */
real32_T k_LCK_LnWidth_DlyTm_Idl2Rdy = 1.0F;/* Variable: k_LCK_LnWidth_DlyTm_Idl2Rdy
                                             * Referenced by:
                                             *   '<S167>/k_LCK_LnWidth_DlyTm_Idl2Rdy'
                                             *   '<S167>/k_LCK_LnWidth_DlyTm_Idl2Rdy1'
                                             */
real32_T k_LCK_LnWidth_DlyTm_Rdy2Idl = 1.0F;/* Variable: k_LCK_LnWidth_DlyTm_Rdy2Idl
                                             * Referenced by:
                                             *   '<S169>/k_LCK_LnWidth_DlyTm_Rdy2Idl'
                                             *   '<S169>/k_LCK_LnWidth_DlyTm_Rdy2Idl1'
                                             */
real32_T k_LCK_LnWidth_LowLmt_Idl2Rdy = 2.6F;/* Variable: k_LCK_LnWidth_LowLmt_Idl2Rdy
                                              * Referenced by: '<S167>/k_LCK_LnWidth_LowLmt_Idl2Rdy'
                                              */
real32_T k_LCK_LnWidth_LowLmt_Rdy2Idl = 2.6F;/* Variable: k_LCK_LnWidth_LowLmt_Rdy2Idl
                                              * Referenced by: '<S169>/k_LCK_LnWidth_LowLmt_Rdy2Idl'
                                              */
real32_T k_LCK_LnWidth_UpLmt_Idl2Rdy = 5.2F;/* Variable: k_LCK_LnWidth_UpLmt_Idl2Rdy
                                             * Referenced by: '<S167>/k_LCK_LnWidth_UpLmt_Idl2Rdy'
                                             */
real32_T k_LCK_LnWidth_UpLmt_Rdy2Idl = 5.2F;/* Variable: k_LCK_LnWidth_UpLmt_Rdy2Idl
                                             * Referenced by: '<S169>/k_LCK_LnWidth_UpLmt_Rdy2Idl'
                                             */
real32_T k_LCK_LowRng_Spd_Thr = 20.0F; /* Variable: k_LCK_LowRng_Spd_Thr
                                        * Referenced by:
                                        *   '<S165>/k_LCK_LowRng_Spd_Thr'
                                        *   '<S169>/k_LCK_LowRng_Spd_Thr1'
                                        */
real32_T k_LCK_MinJunction_Range = 0.0F;/* Variable: k_LCK_MinJunction_Range
                                         * Referenced by: '<S159>/k_LCK_MinJunction_Range'
                                         */
real32_T k_LCK_NonLinCompFac_Vspd[16] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* Variable: k_LCK_NonLinCompFac_Vspd
                                                                 * Referenced by: '<S37>/k_LCK_NonLinCompFac_Vspd'
                                                                 */

real32_T k_LCK_NonLinCompTab[20] = { 0.0F, 0.1F, 0.2F, 0.3F, 0.4F, 0.5F, 0.6F,
  0.7F, 0.8F, 0.9F, 1.0F, 1.2F, 1.4F, 1.6F, 1.8F, 2.0F, 2.2F, 2.4F, 2.6F, 3.0F }
;                                      /* Variable: k_LCK_NonLinCompTab
                                        * Referenced by: '<S37>/k_LCK_NonLinCompTab'
                                        */

real32_T k_LCK_NonLinearComp_En = 0.0F;/* Variable: k_LCK_NonLinearComp_En
                                        * Referenced by: '<S37>/k_LCK_NonLinearComp_En'
                                        */
real32_T k_LCK_Ovrd_DlyTm_Rdy2Idl = 0.1F;/* Variable: k_LCK_Ovrd_DlyTm_Rdy2Idl
                                          * Referenced by: '<S151>/k_LCK_Ovrd_DlyTm_Rdy2Idl1'
                                          */
real32_T k_LCK_Ovrd_Torq_Hys = 0.0F;   /* Variable: k_LCK_Ovrd_Torq_Hys
                                        * Referenced by: '<S112>/k_LCK_Ovrd_Torq_Hys'
                                        */
real32_T k_LCK_PFac_Dy[10] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F } ;                       /* Variable: k_LCK_PFac_Dy
                                        * Referenced by: '<S99>/k_LCK_PFac_Dy'
                                        */

real32_T k_LCK_PFac_Dy_Curv[10] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F } ;                 /* Variable: k_LCK_PFac_Dy_Curv
                                        * Referenced by: '<S99>/k_LCK_PFac_Dy_Curv'
                                        */

real32_T k_LCK_PFac_HaCurCen[10] = { 1.0F, 0.9F, 0.85F, 0.8F, 0.75F, 0.7F, 0.65F,
  0.6F, 0.55F, 0.5F } ;                /* Variable: k_LCK_PFac_HaCurCen
                                        * Referenced by: '<S95>/k_LCK_PFac_HaCurCen'
                                        */

real32_T k_LCK_PFac_HaCurSid[10] = { 1.0F, 0.9F, 0.8F, 0.7F, 0.68F, 0.65F, 0.6F,
  0.55F, 0.5F, 0.35F } ;               /* Variable: k_LCK_PFac_HaCurSid
                                        * Referenced by: '<S95>/k_LCK_PFac_HaCurSid'
                                        */

real32_T k_LCK_PFac_HaStrCen[10] = { 1.0F, 1.0F, 0.9F, 0.75F, 0.67F, 0.65F,
  0.65F, 0.6F, 0.45F, 0.4F } ;         /* Variable: k_LCK_PFac_HaStrCen
                                        * Referenced by: '<S95>/k_LCK_PFac_Ha_StrCen'
                                        */

real32_T k_LCK_PFac_HaStrSid[10] = { 1.0F, 1.0F, 0.9F, 0.83F, 0.8F, 0.75F, 0.7F,
  0.68F, 0.55F, 0.35F } ;              /* Variable: k_LCK_PFac_HaStrSid
                                        * Referenced by: '<S95>/k_LCK_PFac_HaStrSid'
                                        */

real32_T k_LCK_PFac_HadCurCen[10] = { 1.0F, 0.9F, 0.85F, 0.7F, 0.650000036F,
  0.6F, 0.55F, 0.5F, 0.5F, 0.5F } ;    /* Variable: k_LCK_PFac_HadCurCen
                                        * Referenced by: '<S96>/k_LCK_PFac_HadCurCen'
                                        */

real32_T k_LCK_PFac_HadCurSid[10] = { 1.0F, 0.9F, 0.8F, 0.7F, 0.65F, 0.6F, 0.5F,
  0.45F, 0.4F, 0.4F } ;                /* Variable: k_LCK_PFac_HadCurSid
                                        * Referenced by: '<S96>/k_LCK_PFac_HadCurSid'
                                        */

real32_T k_LCK_PFac_HadStrCen[10] = { 1.0F, 0.9F, 0.7F, 0.650000036F, 0.6F, 0.5F,
  0.450000018F, 0.350000024F, 0.3F, 0.3F } ;/* Variable: k_LCK_PFac_HadStrCen
                                             * Referenced by: '<S96>/k_LCK_PFac_HadStrCen'
                                             */

real32_T k_LCK_PFac_HadStrSid[10] = { 1.0F, 0.9F, 0.8F, 0.7F, 0.58F, 0.45F, 0.4F,
  0.35F, 0.25F, 0.2F } ;               /* Variable: k_LCK_PFac_HadStrSid
                                        * Referenced by: '<S96>/k_LCK_PFac_HadStrSid'
                                        */

real32_T k_LCK_PFac_Rad[14] = { 0.55F, 0.55F, 0.55F, 0.55F, 0.55F, 0.6F, 0.65F,
  0.7F, 0.75F, 0.8F, 0.85F, 0.9F, 1.0F, 1.0F } ;/* Variable: k_LCK_PFac_Rad
                                                 * Referenced by: '<S101>/k_LCK_PFac_Rad'
                                                 */

real32_T k_LCK_PFac_SA_CurCen[8] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F } ;                             /* Variable: k_LCK_PFac_SA_CurCen
                                        * Referenced by: '<S97>/k_LCK_PFac_SA_CurCen'
                                        */

real32_T k_LCK_PFac_SA_CurSid[8] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F } ;                             /* Variable: k_LCK_PFac_SA_CurSid
                                        * Referenced by: '<S97>/k_LCK_PFac_SA_CurSid'
                                        */

real32_T k_LCK_PFac_SA_StrCen[8] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F } ;                             /* Variable: k_LCK_PFac_SA_StrCen
                                        * Referenced by: '<S97>/k_LCK_PFac_SA_StrCen'
                                        */

real32_T k_LCK_PFac_SA_StrSid[8] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F } ;                             /* Variable: k_LCK_PFac_SA_StrSid
                                        * Referenced by: '<S97>/k_LCK_PFac_SA_StrSid'
                                        */

real32_T k_LCK_PFac_SS_CurCen[8] = { 1.0F, 0.9F, 0.7F, 0.5F, 0.4F, 0.3F, 0.3F,
  0.3F } ;                             /* Variable: k_LCK_PFac_SS_CurCen
                                        * Referenced by: '<S98>/k_LCK_PFac_SS_CurCen'
                                        */

real32_T k_LCK_PFac_SS_CurSid[8] = { 1.0F, 1.0F, 0.7F, 0.6F, 0.4F, 0.35F, 0.3F,
  0.3F } ;                             /* Variable: k_LCK_PFac_SS_CurSid
                                        * Referenced by: '<S98>/k_LCK_PFac_SS_CurSid'
                                        */

real32_T k_LCK_PFac_SS_StrCen[8] = { 1.0F, 1.0F, 0.8F, 0.6F, 0.4F, 0.2F, 0.1F,
  0.05F } ;                            /* Variable: k_LCK_PFac_SS_StrCen
                                        * Referenced by: '<S98>/k_LCK_PFac_SS_StrCen'
                                        */

real32_T k_LCK_PFac_SS_StrSid[8] = { 1.0F, 0.9F, 0.7F, 0.5F, 0.4F, 0.2F, 0.1F,
  0.05F } ;                            /* Variable: k_LCK_PFac_SS_StrSid
                                        * Referenced by: '<S98>/k_LCK_PFac_SS_StrSid'
                                        */

real32_T k_LCK_PFac_Vspd[16] = { 0.0F, 0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.05F, 1.1F, 1.15F, 1.2F, 1.2F, 1.2F, 1.2F } ;/* Variable: k_LCK_PFac_Vspd
                                                       * Referenced by: '<S100>/k_LCK_PFac_Vspd'
                                                       */

real32_T k_LCK_PTermMax = 2.0F;        /* Variable: k_LCK_PTermMax
                                        * Referenced by: '<S92>/k_LCK_PTermMax'
                                        */
real32_T k_LCK_ROC_filt_tau = 75.0F;   /* Variable: k_LCK_ROC_filt_tau
                                        * Referenced by: '<S172>/k_LCK_ROC_filt_tau'
                                        */
real32_T k_LCK_RadBks[14] = { 100.0F, 150.0F, 200.0F, 250.0F, 300.0F, 350.0F,
  400.0F, 600.0F, 800.0F, 1000.0F, 1500.0F, 2000.0F, 3000.0F, 5000.0F } ;/* Variable: k_LCK_RadBks
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

real32_T k_LCK_Range_Drop_MinDur = 0.2F;/* Variable: k_LCK_Range_Drop_MinDur
                                         * Referenced by: '<S159>/k_LCK_Range_Drop_MinDur'
                                         */
real32_T k_LCK_RatLmtFac_TorqCmd_Vspd[16] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* Variable: k_LCK_RatLmtFac_TorqCmd_Vspd
                                                                 * Referenced by: '<S38>/k_LCK_RatLmtFac_TorqCmd_Vspd'
                                                                 */

real32_T k_LCK_RatLmt_TorqCmd[20] = { 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F,
  5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F }
;                                      /* Variable: k_LCK_RatLmt_TorqCmd
                                        * Referenced by: '<S38>/k_LCK_RatLmt_TorqCmd'
                                        */

real32_T k_LCK_Ready2Active_Mask = 255.0F;/* Variable: k_LCK_Ready2Active_Mask
                                           * Referenced by:
                                           *   '<S168>/Ready2Active_Mask1'
                                           *   '<S168>/k_LCK_Ready2Active_Mask'
                                           */
real32_T k_LCK_Ready2Idle_Mask = 503.0F;/* Variable: k_LCK_Ready2Idle_Mask
                                         * Referenced by: '<S169>/k_LCK_Ready2Idle_Mask'
                                         */
real32_T k_LCK_Rng2VehSpd_Ratio_DlyTime = 0.1F;/* Variable: k_LCK_Rng2VehSpd_Ratio_DlyTime
                                                * Referenced by: '<S165>/k_LCK_Rng2VehSpd_Ratio_DlyTime'
                                                */
real32_T k_LCK_Rng2VehSpd_Ratio_Thr = 0.23F;/* Variable: k_LCK_Rng2VehSpd_Ratio_Thr
                                             * Referenced by: '<S165>/k_LCK_Rng2VehSpd_Ratio_Thr'
                                             */
real32_T k_LCK_RngThr_FalRec[16] = { 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 20.0F,
  20.0F, 20.0F, 20.0F, 20.0F, 25.0F, 25.0F, 25.0F, 25.0F, 25.0F, 25.0F } ;/* Variable: k_LCK_RngThr_FalRec
                                                                      * Referenced by: '<S22>/k_LCK_RngThr_FalRec'
                                                                      */

real32_T k_LCK_SPHighSpd_DlyTm_Idl2Rdy = 0.5F;/* Variable: k_LCK_SPHighSpd_DlyTm_Idl2Rdy
                                               * Referenced by: '<S167>/k_LCK_SPHighSpd_DlyTm_Idl2Rdy'
                                               */
real32_T k_LCK_SPLowSpd_DlyTm_Idl2Rdy = 0.5F;/* Variable: k_LCK_SPLowSpd_DlyTm_Idl2Rdy
                                              * Referenced by: '<S167>/k_LCK_SPLowSpd_DlyTm_Idl2Rdy'
                                              */
real32_T k_LCK_SPPConfHigh_ProbThre = 0.8F;/* Variable: k_LCK_SPPConfHigh_ProbThre
                                            * Referenced by:
                                            *   '<S237>/Constant'
                                            *   '<S237>/Constant7'
                                            */
real32_T k_LCK_SPPConfMedHigh_ProbThre = 0.5F;/* Variable: k_LCK_SPPConfMedHigh_ProbThre
                                               * Referenced by:
                                               *   '<S237>/Constant2'
                                               *   '<S237>/Constant8'
                                               *   '<S242>/Constant35'
                                               *   '<S242>/Constant38'
                                               *   '<S242>/Constant50'
                                               *   '<S242>/Constant51'
                                               */
real32_T k_LCK_SPPConfMed_ProbThre = 0.3F;/* Variable: k_LCK_SPPConfMed_ProbThre
                                           * Referenced by:
                                           *   '<S237>/Constant4'
                                           *   '<S237>/Constant9'
                                           */
real32_T k_LCK_SPTyp_LowLmt_Idl2Rdy = 3.0F;/* Variable: k_LCK_SPTyp_LowLmt_Idl2Rdy
                                            * Referenced by: '<S164>/k_LCK_SPTyp_LowLmt_Idl2Rdy1'
                                            */
real32_T k_LCK_SPTyp_UpLmt_Idl2Rdy = 7.0F;/* Variable: k_LCK_SPTyp_UpLmt_Idl2Rdy
                                           * Referenced by: '<S164>/k_LCK_SPTyp_UpLmt_Idl2Rdy1'
                                           */
real32_T k_LCK_SP_A0_Rdy2Act = 1.0F;   /* Variable: k_LCK_SP_A0_Rdy2Act
                                        * Referenced by: '<S168>/k_LCK_SP_A0_Rdy2Act4'
                                        */
real32_T k_LCK_SP_A0_Rdy2Act_Max = 1.5F;/* Variable: k_LCK_SP_A0_Rdy2Act_Max
                                         * Referenced by: '<S168>/k_LCK_SP_A0_Rdy2Act1'
                                         */
real32_T k_LCK_SP_A0_Rdy2Act_Min = 0.6F;/* Variable: k_LCK_SP_A0_Rdy2Act_Min
                                         * Referenced by: '<S168>/k_LCK_SP_A0_Rdy2Act2'
                                         */
real32_T k_LCK_SP_A1_Rdy2Act = 0.03F;  /* Variable: k_LCK_SP_A1_Rdy2Act
                                        * Referenced by: '<S168>/k_LCK_SP_A1_Rdy2Act'
                                        */
real32_T k_LCK_SP_Conf_Low_JuncTm = 0.05F;/* Variable: k_LCK_SP_Conf_Low_JuncTm
                                           * Referenced by: '<S170>/k_LCK_SP_Conf_Low_JuncTm'
                                           */
real32_T k_LCK_SP_Conf_Med_JuncTm = 0.2F;/* Variable: k_LCK_SP_Conf_Med_JuncTm
                                          * Referenced by: '<S170>/k_LCK_SP_Conf_Med_JuncTm'
                                          */
real32_T k_LCK_SPconfInvld_DlyTm_Rdy2Idl = 0.1F;/* Variable: k_LCK_SPconfInvld_DlyTm_Rdy2Idl
                                                 * Referenced by: '<S170>/k_LCK_SPconfInvld_DlyTm_Rdy2Idl'
                                                 */
real32_T k_LCK_SPconfLow_DlyTm_Rdy2Idl = 0.8F;/* Variable: k_LCK_SPconfLow_DlyTm_Rdy2Idl
                                               * Referenced by: '<S170>/k_LCK_SPconfLow_DlyTm_Rdy2Idl'
                                               */
real32_T k_LCK_SPconfLow_DlyTm_Rdy2Idl_x[16] = { 0.0F, 10.0F, 20.0F, 30.0F,
  40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F, 110.0F, 120.0F, 130.0F,
  140.0F, 150.0F } ;                   /* Variable: k_LCK_SPconfLow_DlyTm_Rdy2Idl_x
                                        * Referenced by: '<S170>/k_LCK_SPconfLow_DlyTm_Rdy2Idl_Table'
                                        */

real32_T k_LCK_SPconfLow_DlyTm_Rdy2Idl_z[16] = { 3.0F, 3.0F, 3.0F, 3.0F, 3.0F,
  3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F } ;/* Variable: k_LCK_SPconfLow_DlyTm_Rdy2Idl_z
                                                                      * Referenced by: '<S170>/k_LCK_SPconfLow_DlyTm_Rdy2Idl_Table'
                                                                      */

real32_T k_LCK_SPconfMed_DlyTm_Rdy2Idl = 10.0F;/* Variable: k_LCK_SPconfMed_DlyTm_Rdy2Idl
                                                * Referenced by:
                                                *   '<S169>/k_LCK_SPconfMed_DlyTm_Rdy2Idl1'
                                                *   '<S169>/k_LCK_SPconfMed_DlyTm_Rdy2Idl2'
                                                *   '<S170>/k_LCK_SPconfMed_DlyTm_Rdy2Idl'
                                                */
real32_T k_LCK_SPconfMed_DlyTm_Rdy2Idl_x[16] = { 0.0F, 10.0F, 20.0F, 30.0F,
  40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F, 110.0F, 120.0F, 130.0F,
  140.0F, 150.0F } ;                   /* Variable: k_LCK_SPconfMed_DlyTm_Rdy2Idl_x
                                        * Referenced by: '<S170>/k_LCK_SPconfMed_DlyTm_Rdy2Idl_Table'
                                        */

real32_T k_LCK_SPconfMed_DlyTm_Rdy2Idl_z[16] = { 10.0F, 10.0F, 10.0F, 10.0F,
  10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F,
  10.0F } ;                            /* Variable: k_LCK_SPconfMed_DlyTm_Rdy2Idl_z
                                        * Referenced by: '<S170>/k_LCK_SPconfMed_DlyTm_Rdy2Idl_Table'
                                        */

real32_T k_LCK_SigFacHldTim_ActSta = 1500.0F;/* Variable: k_LCK_SigFacHldTim_ActSta
                                              * Referenced by: '<S47>/k_LCK_SigFacHldTim_ActSta'
                                              */
real32_T k_LCK_SigFacHldTim_DrvStim = 4000.0F;/* Variable: k_LCK_SigFacHldTim_DrvStim
                                               * Referenced by: '<S48>/k_LCK_SigFacHldTim_DrvStim'
                                               */
real32_T k_LCK_StrAngBks[8] = { 0.0F, 3.0F, 6.0F, 10.0F, 15.0F, 30.0F, 45.0F,
  70.0F } ;                            /* Variable: k_LCK_StrAngBks
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

real32_T k_LCK_StrAng_CR_threshold_z[7] = { 60.0F, 60.0F, 60.0F, 57.0F, 53.0F,
  48.0F, 40.0F } ;                     /* Variable: k_LCK_StrAng_CR_threshold_z
                                        * Referenced by: '<S116>/LCK_Steer_angel_CR_threshold_LUT'
                                        */

real32_T k_LCK_StrSpdBks[8] = { 0.0F, 4.0F, 8.0F, 12.0F, 16.0F, 20.0F, 24.0F,
  28.0F } ;                            /* Variable: k_LCK_StrSpdBks
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

real32_T k_LCK_TJALCK_SWSpeed = 600.0F;/* Variable: k_LCK_TJALCK_SWSpeed
                                        * Referenced by: '<S160>/Constant1'
                                        */
real32_T k_LCK_TimBks_ActSta[7] = { 0.0F, 1000.0F, 2000.0F, 3000.0F, 4000.0F,
  5000.0F, 6000.0F } ;                 /* Variable: k_LCK_TimBks_ActSta
                                        * Referenced by:
                                        *   '<S47>/k_LCK_A0Fac_ActSta'
                                        *   '<S47>/k_LCK_HAFac_ActSta'
                                        *   '<S47>/k_LCK_HARFac_ActSta'
                                        */

real32_T k_LCK_TimBks_DrvStm[7] = { 0.0F, 1000.0F, 2000.0F, 3000.0F, 4000.0F,
  5000.0F, 6000.0F } ;                 /* Variable: k_LCK_TimBks_DrvStm
                                        * Referenced by:
                                        *   '<S48>/k_LCK_A0Fac_DrvStm'
                                        *   '<S48>/k_LCK_HAFac_DrvStm'
                                        *   '<S48>/k_LCK_HARFac_DrvStm'
                                        */

real32_T k_LCK_TimCon_A0Flt_Normal = 20.0F;/* Variable: k_LCK_TimCon_A0Flt_Normal
                                            * Referenced by: '<S10>/k_LCK_TimCon_A0Flt_Normal'
                                            */
real32_T k_LCK_TimCon_A0Flt_Strong = 200.0F;/* Variable: k_LCK_TimCon_A0Flt_Strong
                                             * Referenced by: '<S10>/k_LCK_TimCon_A0Flt_Strong'
                                             */
real32_T k_LCK_TimCon_A1Flt_Normal = 20.0F;/* Variable: k_LCK_TimCon_A1Flt_Normal
                                            * Referenced by: '<S10>/k_LCK_TimCon_A1Flt_Normal'
                                            */
real32_T k_LCK_TimCon_A1Flt_Strong = 500.0F;/* Variable: k_LCK_TimCon_A1Flt_Strong
                                             * Referenced by: '<S10>/k_LCK_TimCon_A1Flt_Strong'
                                             */
real32_T k_LCK_TimCon_A2Flt_Normal = 20.0F;/* Variable: k_LCK_TimCon_A2Flt_Normal
                                            * Referenced by: '<S10>/k_LCK_TimCon_A2Flt_Normal'
                                            */
real32_T k_LCK_TimCon_A2Flt_Strong = 200.0F;/* Variable: k_LCK_TimCon_A2Flt_Strong
                                             * Referenced by: '<S10>/k_LCK_TimCon_A2Flt_Strong'
                                             */
real32_T k_LCK_TimCon_A3Flt_Normal = 0.0F;/* Variable: k_LCK_TimCon_A3Flt_Normal
                                           * Referenced by: '<S10>/k_LCK_TimCon_A3Flt_Normal'
                                           */
real32_T k_LCK_TimCon_A3Flt_Strong = 200.0F;/* Variable: k_LCK_TimCon_A3Flt_Strong
                                             * Referenced by: '<S10>/k_LCK_TimCon_A3Flt_Strong'
                                             */
real32_T k_LCK_TimCon_RadFlt = 20.0F;  /* Variable: k_LCK_TimCon_RadFlt
                                        * Referenced by: '<S17>/k_LCK_TimCon_RadFlt'
                                        */
real32_T k_LCK_TimCon_YawRtFlt = 10.0F;/* Variable: k_LCK_TimCon_YawRtFlt
                                        * Referenced by: '<S14>/k_LCK_TimCon_YawRtFlt'
                                        */
real32_T k_LCK_TinCon_LaneProbFlt = 40.0F;/* Variable: k_LCK_TinCon_LaneProbFlt
                                           * Referenced by:
                                           *   '<S8>/k_LCK_TinCon_LaneProbFlt'
                                           *   '<S8>/k_LCK_TinCon_LaneProbFlt1'
                                           */
real32_T k_LCK_TorqCmdBks[20] = { 0.0F, 0.1F, 0.2F, 0.3F, 0.4F, 0.5F, 0.6F, 0.7F,
  0.8F, 0.9F, 1.0F, 1.2F, 1.4F, 1.6F, 1.8F, 2.0F, 2.2F, 2.4F, 2.6F, 3.0F } ;/* Variable: k_LCK_TorqCmdBks
                                                                      * Referenced by:
                                                                      *   '<S37>/k_LCK_NonLinCompTab'
                                                                      *   '<S38>/k_LCK_RatLmt_TorqCmd'
                                                                      */

real32_T k_LCK_TorqThrBig_DrvStim = 2.0F;/* Variable: k_LCK_TorqThrBig_DrvStim
                                          * Referenced by: '<S48>/k_LCK_TorqThrBig_DrvStim'
                                          */
real32_T k_LCK_TorqThr_DrvStim = 0.8F; /* Variable: k_LCK_TorqThr_DrvStim
                                        * Referenced by: '<S48>/k_LCK_TorqThr_DrvStim'
                                        */
real32_T k_LCK_UseSP_MaxRange = 0.0F;  /* Variable: k_LCK_UseSP_MaxRange
                                        * Referenced by: '<S159>/k_LCK_UseSP_MaxRange'
                                        */
real32_T k_LCK_VehSpd_LowLmtFus_Idl2Rdy = 0.0F;/* Variable: k_LCK_VehSpd_LowLmtFus_Idl2Rdy
                                                * Referenced by: '<S167>/k_LCK_VehSpd_LowLmtFus_Idl2Rdy'
                                                */
real32_T k_LCK_VehSpd_LowlmtVis_Idl2Rdy = 0.0F;/* Variable: k_LCK_VehSpd_LowlmtVis_Idl2Rdy
                                                * Referenced by: '<S167>/k_LCK_VehSpd_LowlmtVis_Idl2Rdy'
                                                */
real32_T k_LCK_VehSpd_LowlmtVis_Rdy2Idl = 0.0F;/* Variable: k_LCK_VehSpd_LowlmtVis_Rdy2Idl
                                                * Referenced by: '<S169>/k_LCK_VehSpd_LowlmtVis_Rdy2Idl'
                                                */
real32_T k_LCK_VehSpd_TJA_ICA_Bound = 60.0F;/* Variable: k_LCK_VehSpd_TJA_ICA_Bound
                                             * Referenced by:
                                             *   '<S151>/k_LCK_VehSpd_TJA_ICA_Bound2'
                                             *   '<S167>/k_LCK_VehSpd_TJA_ICA_Bound'
                                             *   '<S169>/k_LCK_VehSpd_TJA_ICA_Bound1'
                                             */
real32_T k_LCK_VehSpd_Uplmt_Idl2Rdy = 140.0F;/* Variable: k_LCK_VehSpd_Uplmt_Idl2Rdy
                                              * Referenced by: '<S167>/k_LCK_VehSpd_Uplmt_Idl2Rdy'
                                              */
real32_T k_LCK_VehSpd_Uplmt_Rdy2Idl = 145.0F;/* Variable: k_LCK_VehSpd_Uplmt_Rdy2Idl
                                              * Referenced by: '<S169>/k_LCK_VehSpd_Uplmt_Rdy2Idl'
                                              */
real32_T k_LCK_VisionOnly = 0.0F;      /* Variable: k_LCK_VisionOnly
                                        * Referenced by:
                                        *   '<S160>/k_LCK_VisionOnly'
                                        *   '<S166>/k_LCK_VisionOnly'
                                        *   '<S169>/k_LCK_VisionOnly'
                                        */
real32_T k_LCK_VspdBks[16] = { 0.0F, 3.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F,
  60.0F, 70.0F, 80.0F, 90.0F, 100.0F, 110.0F, 120.0F, 130.0F, 140.0F } ;/* Variable: k_LCK_VspdBks
                                                                      * Referenced by:
                                                                      *   '<S16>/k_LCK_A0ShiftFac_Vspd'
                                                                      *   '<S22>/k_LCK_RngThr_FalRec'
                                                                      *   '<S231>/Lookup_Table'
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

real32_T k_LCK_YR_OffstFac_Dy_LftCurv[19] = { 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F,
  0.5F, 0.5F, 0.5F, 0.5F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F }
;                                      /* Variable: k_LCK_YR_OffstFac_Dy_LftCurv
                                        * Referenced by: '<S43>/k_LCK_YR_OffstFac_Dy_LftCurv'
                                        */

real32_T k_LCK_YR_OffstFac_Dy_RgtCurv[19] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F }
;                                      /* Variable: k_LCK_YR_OffstFac_Dy_RgtCurv
                                        * Referenced by: '<S43>/k_LCK_YR_OffstFac_Dy_InnRgtCurv'
                                        */

real32_T k_LCK_YawRateSign = -1.0F;    /* Variable: k_LCK_YawRateSign
                                        * Referenced by: '<S43>/ '
                                        */
real32_T k_LCK_YawRateThr_Act2Rdy_ROC_x[6] = { 300.0F, 400.0F, 500.0F, 600.0F,
  800.0F, 1000.0F } ;                  /* Variable: k_LCK_YawRateThr_Act2Rdy_ROC_x
                                        * Referenced by: '<S172>/k_LCK_YawRateThr_Act2Rdy'
                                        */

real32_T k_LCK_YawRateThr_Act2Rdy_z[6] = { 12.0F, 12.0F, 12.0F, 12.0F, 12.0F,
  12.0F } ;                            /* Variable: k_LCK_YawRateThr_Act2Rdy_z
                                        * Referenced by: '<S172>/k_LCK_YawRateThr_Act2Rdy'
                                        */

real32_T k_LCK_YawRateThr_DlyTm_Act2Rdy = 0.1F;/* Variable: k_LCK_YawRateThr_DlyTm_Act2Rdy
                                                * Referenced by: '<S172>/k_LCK_YawRateThr_DlyTm_Act2Rdy'
                                                */
real32_T k_LCK_YawRateThr_Idl2Rdy = 11.4F;/* Variable: k_LCK_YawRateThr_Idl2Rdy
                                           * Referenced by: '<S167>/k_LCK_YawRateThr_Idl2Rdy'
                                           */
real32_T k_LCK_YawRate_DlyTm_Idl2Rdy = 1.0F;/* Variable: k_LCK_YawRate_DlyTm_Idl2Rdy
                                             * Referenced by: '<S167>/k_LCK_YawRate_DlyTm_Idl2Rdy'
                                             */
real32_T k_LCK_YawRate_OffsetFac_Vspd[16] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* Variable: k_LCK_YawRate_OffsetFac_Vspd
                                                                 * Referenced by: '<S43>/k_LCK_YawRate_OffsetFac_Vspd'
                                                                 */

real32_T k_LCK_YawRate_Offset_LftCurv[14] = { 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F,
  0.1F, 0.15F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.0F } ;/* Variable: k_LCK_YawRate_Offset_LftCurv
                                                      * Referenced by: '<S43>/k_LCK_YawRate_Offset_LftCurv'
                                                      */

real32_T k_LCK_YawRate_Offset_RgtCurv[14] = { 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F,
  0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.0F } ;/* Variable: k_LCK_YawRate_Offset_RgtCurv
                                                     * Referenced by: '<S43>/k_LCK_YawRate_Offset_RgtCurv'
                                                     */

real32_T k_LCK_accel_inhibit_thold = 35.0F;/* Variable: k_LCK_accel_inhibit_thold
                                            * Referenced by: '<S115>/k_LCK_accel_inhibit_thold'
                                            */
real32_T k_LCK_host_veh_width = 1.86F; /* Variable: k_LCK_host_veh_width
                                        * Referenced by: '<S168>/k_LCK_host_veh_width'
                                        */
real32_T k_LCK_ovrd_torq_thold_per_spd_x[6] = { 10.0F, 30.0F, 50.0F, 80.0F,
  120.0F, 180.0F } ;                   /* Variable: k_LCK_ovrd_torq_thold_per_spd_x
                                        * Referenced by: '<S112>/k_LCK_ovrd_torq_thold_per_spd'
                                        */

real32_T k_LCK_ovrd_torq_thold_per_spd_z[6] = { 1.5F, 1.56F, 1.66F, 1.72F, 1.76F,
  1.8F } ;                             /* Variable: k_LCK_ovrd_torq_thold_per_spd_z
                                        * Referenced by: '<S112>/k_LCK_ovrd_torq_thold_per_spd'
                                        */

real32_T k_LC_Exit_Switch = 0.0F;      /* Variable: k_LC_Exit_Switch
                                        * Referenced by: '<S171>/const10'
                                        */
real32_T k_Ovrd_torq_thold_per_spd_sw = 1.0F;/* Variable: k_Ovrd_torq_thold_per_spd_sw
                                              * Referenced by:
                                              *   '<S112>/Constant14'
                                              *   '<S112>/Constant15'
                                              */
real32_T k_StrAng_CR_hold_msec = 80.0F;/* Variable: k_StrAng_CR_hold_msec
                                        * Referenced by: '<S116>/k_StrAng_CR_hold_msec3'
                                        */
real32_T k_StrAng_CR_suppress_hold = 3000.0F;/* Variable: k_StrAng_CR_suppress_hold
                                              * Referenced by:
                                              *   '<S113>/k_StrAng_CR_suppress_hold_3'
                                              *   '<S113>/k_StrAng_CR_suppress_hold_4'
                                              */
real32_T k_StrAng_CR_threshold_x[7] = { 20.0F, 40.0F, 60.0F, 80.0F, 120.0F,
  150.0F, 180.0F } ;                   /* Variable: k_StrAng_CR_threshold_x
                                        * Referenced by:
                                        *   '<S116>/LCK_Steer_angel_CR_threshold_LUT'
                                        *   '<S116>/Steer_angel_CR_threshold_LUT'
                                        *   '<S116>/Steer_angel_CR_threshold_hs_LUT'
                                        *   '<S116>/Steer_angel_CR_threshold_ls_LUT'
                                        */

real32_T k_StrAng_CR_threshold_z[7] = { 60.0F, 60.0F, 60.0F, 57.0F, 53.0F, 48.0F,
  40.0F } ;                            /* Variable: k_StrAng_CR_threshold_z
                                        * Referenced by: '<S116>/Steer_angel_CR_threshold_LUT'
                                        */

real32_T k_StrAng_filter_tau = 0.0F;   /* Variable: k_StrAng_filter_tau
                                        * Referenced by: '<S116>/k_StrAng_filter_tau'
                                        */
real32_T k_Use_Constant_SPP_Timer = 0.0F;/* Variable: k_Use_Constant_SPP_Timer
                                          * Referenced by: '<S170>/Use_Constant_SPP_Timer'
                                          */
real32_T k_accel_pedal_pos_per_speed_x[13] = { 60.0F, 70.0F, 80.0F, 90.0F,
  100.0F, 110.0F, 120.0F, 130.0F, 140.0F, 150.0F, 160.0F, 170.0F, 180.0F } ;/* Variable: k_accel_pedal_pos_per_speed_x
                                                                      * Referenced by: '<S115>/accel_pedal_pos_per_speed'
                                                                      */

real32_T k_accel_pedal_pos_per_speed_z[13] = { 16.0F, 18.0F, 20.0F, 25.0F, 33.0F,
  38.0F, 44.0F, 47.0F, 53.0F, 56.0F, 60.0F, 65.0F, 70.0F } ;/* Variable: k_accel_pedal_pos_per_speed_z
                                                             * Referenced by: '<S115>/accel_pedal_pos_per_speed'
                                                             */

real32_T k_brake_suprress_hold = 1000.0F;/* Variable: k_brake_suprress_hold
                                          * Referenced by: '<S113>/k_brake_suprress_hold'
                                          */
real32_T k_driver_appl_torque_filt = 50.0F;/* Variable: k_driver_appl_torque_filt
                                            * Referenced by: '<S114>/k_driver_appl_torque_filt'
                                            */
real32_T k_driver_suppression_hold_time = 3000.0F;/* Variable: k_driver_suppression_hold_time
                                                   * Referenced by: '<S113>/k_driver_suppression_hold_time'
                                                   */
real32_T k_hands_on_wheel_hold_msec = 500.0F;/* Variable: k_hands_on_wheel_hold_msec
                                              * Referenced by: '<S114>/k_hands_on_wheel_hold_msec'
                                              */
real32_T k_hands_on_wheel_torque_hi = 0.2F;/* Variable: k_hands_on_wheel_torque_hi
                                            * Referenced by: '<S114>/Constant'
                                            */
real32_T k_hands_on_wheel_torque_lo = 0.15F;/* Variable: k_hands_on_wheel_torque_lo
                                             * Referenced by: '<S114>/Constant3'
                                             */
real32_T k_handsoff_delay_cycles = 50.0F;/* Variable: k_handsoff_delay_cycles
                                          * Referenced by: '<S114>/k_handsoff_delay_cycles'
                                          */
real32_T k_handsoff_torq_Lo_CR = 0.3F; /* Variable: k_handsoff_torq_Lo_CR
                                        * Referenced by: '<S114>/k_handsoff_torq_Lo_CR'
                                        */
real32_T k_handson_delay_cycles = 5.0F;/* Variable: k_handson_delay_cycles
                                        * Referenced by: '<S114>/k_handson_delay_cycles'
                                        */
real32_T k_hs_StrAng_CR_threshold_z[7] = { 65.0F, 65.0F, 65.0F, 62.0F, 58.0F,
  53.0F, 45.0F } ;                     /* Variable: k_hs_StrAng_CR_threshold_z
                                        * Referenced by: '<S116>/Steer_angel_CR_threshold_hs_LUT'
                                        */

real32_T k_ls_StrAng_CR_threshold_z[7] = { 55.0F, 55.0F, 55.0F, 52.0F, 48.0F,
  43.0F, 35.0F } ;                     /* Variable: k_ls_StrAng_CR_threshold_z
                                        * Referenced by: '<S116>/Steer_angel_CR_threshold_ls_LUT'
                                        */

real32_T k_override_left_torq_thold = 3.0F;/* Variable: k_override_left_torq_thold
                                            * Referenced by: '<S112>/Constant7'
                                            */
real32_T k_override_right_torq_thold = -3.0F;/* Variable: k_override_right_torq_thold
                                              * Referenced by: '<S112>/Constant10'
                                              */
real32_T k_override_torq_sustain_period = 500.0F;/* Variable: k_override_torq_sustain_period
                                                  * Referenced by:
                                                  *   '<S112>/within_distance_sustain_period'
                                                  *   '<S112>/within_distance_sustain_period1'
                                                  */
real32_T k_turn_suprress_hold = 3000.0F;/* Variable: k_turn_suprress_hold
                                         * Referenced by: '<S113>/k_turn_suprress_hold'
                                         */
uint16_T c_BIT0 = 1U;                  /* Variable: c_BIT0
                                        * Referenced by:
                                        *   '<S173>/Gain 0'
                                        *   '<S191>/Gain 0'
                                        *   '<S201>/Gain 0'
                                        *   '<S211>/Gain 0'
                                        */
uint16_T c_BIT1 = 2U;                  /* Variable: c_BIT1
                                        * Referenced by:
                                        *   '<S173>/Gain1'
                                        *   '<S191>/Gain1'
                                        *   '<S201>/Gain1'
                                        *   '<S211>/Gain1'
                                        */
uint16_T c_BIT10 = 1024U;              /* Variable: c_BIT10
                                        * Referenced by:
                                        *   '<S173>/Gain10'
                                        *   '<S191>/Gain10'
                                        *   '<S201>/Gain10'
                                        *   '<S211>/Gain10'
                                        */
uint16_T c_BIT11 = 2048U;              /* Variable: c_BIT11
                                        * Referenced by:
                                        *   '<S173>/Gain11'
                                        *   '<S191>/Gain11'
                                        *   '<S201>/Gain11'
                                        *   '<S211>/Gain11'
                                        */
uint16_T c_BIT12 = 4096U;              /* Variable: c_BIT12
                                        * Referenced by:
                                        *   '<S173>/Gain12'
                                        *   '<S191>/Gain12'
                                        *   '<S201>/Gain12'
                                        *   '<S211>/Gain12'
                                        */
uint16_T c_BIT13 = 8192U;              /* Variable: c_BIT13
                                        * Referenced by:
                                        *   '<S173>/Gain13'
                                        *   '<S191>/Gain13'
                                        *   '<S201>/Gain13'
                                        *   '<S211>/Gain13'
                                        */
uint16_T c_BIT14 = 16384U;             /* Variable: c_BIT14
                                        * Referenced by:
                                        *   '<S173>/Gain14'
                                        *   '<S191>/Gain14'
                                        *   '<S201>/Gain14'
                                        *   '<S211>/Gain14'
                                        */
uint16_T c_BIT15 = 32768U;             /* Variable: c_BIT15
                                        * Referenced by:
                                        *   '<S173>/Gain15'
                                        *   '<S191>/Gain15'
                                        *   '<S201>/Gain15'
                                        *   '<S211>/Gain15'
                                        */
uint16_T c_BIT2 = 4U;                  /* Variable: c_BIT2
                                        * Referenced by:
                                        *   '<S173>/Gain2'
                                        *   '<S191>/Gain2'
                                        *   '<S201>/Gain2'
                                        *   '<S211>/Gain2'
                                        */
uint16_T c_BIT3 = 8U;                  /* Variable: c_BIT3
                                        * Referenced by:
                                        *   '<S173>/Gain3'
                                        *   '<S191>/Gain3'
                                        *   '<S201>/Gain3'
                                        *   '<S211>/Gain3'
                                        */
uint16_T c_BIT4 = 16U;                 /* Variable: c_BIT4
                                        * Referenced by:
                                        *   '<S173>/Gain4'
                                        *   '<S191>/Gain4'
                                        *   '<S201>/Gain4'
                                        *   '<S211>/Gain4'
                                        */
uint16_T c_BIT5 = 32U;                 /* Variable: c_BIT5
                                        * Referenced by:
                                        *   '<S173>/Gain5'
                                        *   '<S191>/Gain5'
                                        *   '<S201>/Gain5'
                                        *   '<S211>/Gain5'
                                        */
uint16_T c_BIT6 = 64U;                 /* Variable: c_BIT6
                                        * Referenced by:
                                        *   '<S173>/Gain6'
                                        *   '<S191>/Gain6'
                                        *   '<S201>/Gain6'
                                        *   '<S211>/Gain6'
                                        */
uint16_T c_BIT7 = 128U;                /* Variable: c_BIT7
                                        * Referenced by:
                                        *   '<S173>/Gain7'
                                        *   '<S191>/Gain7'
                                        *   '<S201>/Gain7'
                                        *   '<S211>/Gain7'
                                        */
uint16_T c_BIT8 = 256U;                /* Variable: c_BIT8
                                        * Referenced by:
                                        *   '<S173>/Gain8'
                                        *   '<S191>/Gain8'
                                        *   '<S201>/Gain8'
                                        *   '<S211>/Gain8'
                                        */
uint16_T c_BIT9 = 512U;                /* Variable: c_BIT9
                                        * Referenced by:
                                        *   '<S173>/Gain9'
                                        *   '<S191>/Gain9'
                                        *   '<S201>/Gain9'
                                        *   '<S211>/Gain9'
                                        */
boolean_T LCK_BOOLEAN_FALSE = 0;       /* Variable: LCK_BOOLEAN_FALSE
                                        * Referenced by:
                                        *   '<S59>/Chart'
                                        *   '<S60>/Chart1'
                                        */
boolean_T LCK_BOOLEAN_TURE = 1;        /* Variable: LCK_BOOLEAN_TURE
                                        * Referenced by:
                                        *   '<S59>/Chart'
                                        *   '<S60>/Chart1'
                                        */

/* Block signals (default storage) */
B_LCK_T LCK_B;

/* Block states (default storage) */
DW_LCK_T LCK_DW;

/* External inputs (root inport signals with default storage) */
ExtU_LCK_T LCK_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_LCK_T LCK_Y;

/* Real-time model */
RT_MODEL_LCK_T LCK_M_;
RT_MODEL_LCK_T *const LCK_M = &LCK_M_;

/* Forward declaration for local functions */
static real_T LCK_LinearInterpolation(const real_T X[400], const real_T Y[400],
  real_T x);
static void LCK_post_processing(const real_T output[3200], real_T long_S, real_T
  *search_latoff, real_T *search_theta, real_T *search_kappa);
static real_T LCK_calculateLEN(real_T velocity, real_T TIME);
static real_T LCK_mod(real_T x);
static real_T LCK_xnrm2(int32_T n, const real_T x[9], int32_T ix0);
static real_T LCK_xnrm2_p(const real_T x[3], int32_T ix0);
static void LCK_xaxpy_ca(int32_T n, real_T a, const real_T x[3], int32_T ix0,
  real_T y[9], int32_T iy0);
static void LCK_xaxpy_c(int32_T n, real_T a, const real_T x[9], int32_T ix0,
  real_T y[3], int32_T iy0);
static real_T LCK_xdotc(int32_T n, const real_T x[9], int32_T ix0, const real_T
  y[9], int32_T iy0);
static void LCK_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[9], int32_T iy0);
static void LCK_xscal(real_T a, real_T x[9], int32_T ix0);
static void LCK_xswap(real_T x[9], int32_T ix0, int32_T iy0);
static void LCK_xrotg(real_T *a, real_T *b, real_T *c, real_T *s);
static void LCK_xrot(real_T x[9], int32_T ix0, int32_T iy0, real_T c, real_T s);
static void LCK_svd(const real_T A[9], real_T U[9], real_T s[3], real_T V[9]);
static void LCK_quintic_polynomial(real32_T xs, real32_T vxs, real32_T xe,
  real_T T, real32_T *a0, real32_T *a1, real_T *a2, real32_T *a3, real32_T *a4,
  real32_T *a5);
static void LCK_combination(real32_T a0, real32_T a1, real32_T a3, real32_T a4,
  real32_T a5, real_T Te, real_T velocity, real_T ref_poly[800]);
static void LCK_reference_generator_oneshot(real32_T c0, real32_T c1, real32_T
  c2, real32_T c3, real_T Te, real_T velocity_ms, real_T reference[800]);
static real_T LCK_find_valid_ref_max_len(const real_T reference[800]);
static void LCK_reference_generation(const real_T trajs_local[800], const real_T
  p_store[800], real_T ref_len_valid, real_T trajs_new[800]);
static void LCK_calculat_delta_heading(const real_T center_line[800], const
  real_T traj_new[800], real_T ref_len_valid, real_T delta_heading[400]);
static void LCK_calculate_kappa(const real_T trajs_new[800], real_T
  ref_len_valid, real_T kappa[400]);
static void LCK_calculate_max_ref(const real_T output[3200], real_T *max_ref,
  real_T *valid_len);
static void LCK_Reshape(real_T output[3200], real_T max_ref, real32_T c2);
real32_T look1_iflf_binlcpw(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
{
  real32_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0F;
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = 1.0F;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

real32_T look1_iflf_linlcpw(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
{
  real32_T frac;
  uint32_T bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'linear'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'linear'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    bpIdx = 0U;
    frac = 0.0F;
  } else if (u0 < bp0[maxIndex]) {
    /* Linear Search */
    for (bpIdx = maxIndex >> 1U; u0 < bp0[bpIdx]; bpIdx--) {
    }

    while (u0 >= bp0[bpIdx + 1U]) {
      bpIdx++;
    }

    frac = (u0 - bp0[bpIdx]) / (bp0[bpIdx + 1U] - bp0[bpIdx]);
  } else {
    bpIdx = maxIndex - 1U;
    frac = 1.0F;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[bpIdx + 1U] - table[bpIdx]) * frac + table[bpIdx];
}

/*
 * System initialize for atomic system:
 *    '<S41>/Trigger Hold'
 *    '<S52>/Trigger Hold'
 */
void LCK_TriggerHold_Init(B_TriggerHold_LCK_T *localB)
{
  localB->Out = false;
  localB->count = 0.0F;
}

/*
 * Output and update for atomic system:
 *    '<S41>/Trigger Hold'
 *    '<S52>/Trigger Hold'
 */
void LCK_TriggerHold(boolean_T rtu_Trigger, real32_T rtu_hold_time,
                     B_TriggerHold_LCK_T *localB)
{
  boolean_T guard1 = false;

  /* Chart: '<S41>/Trigger Hold' */
  guard1 = false;
  if (rtu_Trigger) {
    localB->count = 0.0F;
    guard1 = true;
  } else if ((localB->count <= rtu_hold_time) && (localB->count > 0.0F)) {
    guard1 = true;
  } else {
    localB->Out = false;
  }

  if (guard1) {
    localB->Out = true;
    localB->count += ML_TIME_MSEC;
  }

  /* End of Chart: '<S41>/Trigger Hold' */
}

/*
 * System initialize for atomic system:
 *    '<S49>/Trigger Hold'
 *    '<S235>/Trigger Hold'
 */
void LCK_TriggerHold_e_Init(B_TriggerHold_LCK_l_T *localB)
{
  localB->Out = false;
  localB->count = 0.0F;
}

/*
 * Output and update for atomic system:
 *    '<S49>/Trigger Hold'
 *    '<S235>/Trigger Hold'
 */
void LCK_TriggerHold_i(boolean_T rtu_Trigger, real32_T rtu_hold_time,
  B_TriggerHold_LCK_l_T *localB)
{
  boolean_T guard1 = false;

  /* Chart: '<S49>/Trigger Hold' */
  guard1 = false;
  if (rtu_Trigger) {
    localB->count = 0.0F;
    guard1 = true;
  } else if (localB->count <= rtu_hold_time) {
    guard1 = true;
  } else {
    localB->Out = false;
  }

  if (guard1) {
    localB->Out = true;
    localB->count += ML_TIME_MSEC;
  }

  /* End of Chart: '<S49>/Trigger Hold' */
}

/*
 * System initialize for atomic system:
 *    '<S51>/Delay_Trig'
 *    '<S174>/Delay_Trig'
 *    '<S177>/Delay_Trig'
 *    '<S182>/Delay_Trig'
 *    '<S184>/Delay_Trig'
 *    '<S185>/Delay_Trig'
 *    '<S186>/Delay_Trig'
 *    '<S187>/Delay_Trig'
 *    '<S188>/Delay_Trig'
 *    '<S189>/Delay_Trig'
 *    ...
 */
void LCK_Delay_Trig_Init(B_Delay_Trig_LCK_T *localB, DW_Delay_Trig_LCK_T
  *localDW)
{
  localDW->is_active_c1_LateralControl_fcn = 0U;
  localDW->is_c1_LateralControl_fcns_lib = LCK_IN_NO_ACTIVE_CHILD_f;
  localDW->duration = 0.0F;
  localB->Delay_Trig = 0.0F;
}

/*
 * Output and update for atomic system:
 *    '<S51>/Delay_Trig'
 *    '<S174>/Delay_Trig'
 *    '<S177>/Delay_Trig'
 *    '<S182>/Delay_Trig'
 *    '<S184>/Delay_Trig'
 *    '<S185>/Delay_Trig'
 *    '<S186>/Delay_Trig'
 *    '<S187>/Delay_Trig'
 *    '<S188>/Delay_Trig'
 *    '<S189>/Delay_Trig'
 *    ...
 */
void LCK_Delay_Trig(real32_T rtu_Input, real32_T rtu_Delay_Trig_Time,
                    B_Delay_Trig_LCK_T *localB, DW_Delay_Trig_LCK_T *localDW)
{
  /* Chart: '<S51>/Delay_Trig' */
  if (localDW->is_active_c1_LateralControl_fcn == 0U) {
    localDW->is_active_c1_LateralControl_fcn = 1U;
    localDW->is_c1_LateralControl_fcns_lib = LCK_IN_OFF;
    localB->Delay_Trig = 0.0F;
    localDW->duration = 0.0F;
  } else {
    switch (localDW->is_c1_LateralControl_fcns_lib) {
     case LCK_IN_OFF:
      localB->Delay_Trig = 0.0F;
      if (rtu_Input != 0.0F) {
        localDW->is_c1_LateralControl_fcns_lib = LCK_IN_ON;
        localB->Delay_Trig = 0.0F;
        localDW->duration += ML_TIME_SEC;
      }
      break;

     case LCK_IN_ON:
      localB->Delay_Trig = 0.0F;
      if ((rtu_Input != 0.0F) && (localDW->duration >= rtu_Delay_Trig_Time)) {
        localDW->is_c1_LateralControl_fcns_lib = LCK_IN_Trig;
        localB->Delay_Trig = 1.0F;
      } else if (!(rtu_Input != 0.0F)) {
        localDW->is_c1_LateralControl_fcns_lib = LCK_IN_OFF;
        localB->Delay_Trig = 0.0F;
        localDW->duration = 0.0F;
      } else {
        localDW->duration += ML_TIME_SEC;
      }
      break;

     default:
      localB->Delay_Trig = 1.0F;
      if (!(rtu_Input != 0.0F)) {
        localDW->is_c1_LateralControl_fcns_lib = LCK_IN_OFF;
        localB->Delay_Trig = 0.0F;
        localDW->duration = 0.0F;
      }
      break;
    }
  }

  /* End of Chart: '<S51>/Delay_Trig' */
}

/*
 * System initialize for atomic system:
 *    '<S119>/Sustain_wo_reset'
 *    '<S120>/Sustain_wo_reset'
 *    '<S124>/Sustain_wo_reset'
 *    '<S125>/Sustain_wo_reset'
 */
void LCK_Sustain_wo_reset_Init(B_Sustain_wo_reset_LCK_T *localB,
  DW_Sustain_wo_reset_LCK_T *localDW)
{
  localDW->is_active_c12_sBqLU0Pgy8bIAIArm = 0U;
  localDW->is_c12_sBqLU0Pgy8bIAIArmVW3x7F_ = LCK_IN_NO_ACTIVE_CHILD_c;
  localDW->i = 0.0;
  localB->sustain_value = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S119>/Sustain_wo_reset'
 *    '<S120>/Sustain_wo_reset'
 *    '<S124>/Sustain_wo_reset'
 *    '<S125>/Sustain_wo_reset'
 * Common block description:
 *   _GWMAB30P4.LKAFN.000_319_
 */
void LCK_Sustain_wo_reset(boolean_T rtu_input, real32_T rtu_sustain_time,
  B_Sustain_wo_reset_LCK_T *localB, DW_Sustain_wo_reset_LCK_T *localDW)
{
  /* Chart: '<S119>/Sustain_wo_reset' */
  if (localDW->is_active_c12_sBqLU0Pgy8bIAIArm == 0U) {
    localDW->is_active_c12_sBqLU0Pgy8bIAIArm = 1U;
    localDW->is_c12_sBqLU0Pgy8bIAIArmVW3x7F_ = LCK_IN_Standby;
    localDW->i = 0.0;
  } else if (localDW->is_c12_sBqLU0Pgy8bIAIArmVW3x7F_ == LCK_IN_Hold) {
    if (rtu_input) {
      localDW->i = 0.0;
      localDW->is_c12_sBqLU0Pgy8bIAIArmVW3x7F_ = LCK_IN_Hold;
      localB->sustain_value = 1.0;
    } else if (localDW->i >= rtu_sustain_time) {
      localDW->is_c12_sBqLU0Pgy8bIAIArmVW3x7F_ = LCK_IN_Standby;
      localDW->i = 0.0;
    } else {
      localDW->i += ML_TIME_MSEC;
    }
  } else if (rtu_input) {
    localDW->is_c12_sBqLU0Pgy8bIAIArmVW3x7F_ = LCK_IN_Hold;
    localB->sustain_value = 1.0;
  } else {
    localB->sustain_value = 0.0;
  }

  /* End of Chart: '<S119>/Sustain_wo_reset' */
}

/*
 * System initialize for atomic system:
 *    '<S121>/Sustain_wo_reset'
 *    '<S122>/Sustain_wo_reset'
 *    '<S123>/Sustain_wo_reset'
 *    '<S126>/Sustain_wo_reset'
 *    '<S127>/Sustain_wo_reset'
 *    '<S128>/Sustain_wo_reset'
 */
void LCK_Sustain_wo_reset_l_Init(B_Sustain_wo_reset_LCK_p_T *localB,
  DW_Sustain_wo_reset_LCK_d_T *localDW)
{
  localDW->is_active_c12_sqdm0ogyh9qRUMkFA = 0U;
  localDW->is_c12_sqdm0ogyh9qRUMkFAfEQ2EB_ = LCK_IN_NO_ACTIVE_CHILD_cs;
  localDW->i = 0.0;
  localB->sustain_value = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S121>/Sustain_wo_reset'
 *    '<S122>/Sustain_wo_reset'
 *    '<S123>/Sustain_wo_reset'
 *    '<S126>/Sustain_wo_reset'
 *    '<S127>/Sustain_wo_reset'
 *    '<S128>/Sustain_wo_reset'
 * Common block description:
 *   _GWMAB30P4.LKAFN.000_319_
 */
void LCK_Sustain_wo_reset_n(real32_T rtu_input, real32_T rtu_sustain_time,
  B_Sustain_wo_reset_LCK_p_T *localB, DW_Sustain_wo_reset_LCK_d_T *localDW)
{
  /* Chart: '<S121>/Sustain_wo_reset' */
  if (localDW->is_active_c12_sqdm0ogyh9qRUMkFA == 0U) {
    localDW->is_active_c12_sqdm0ogyh9qRUMkFA = 1U;
    localDW->is_c12_sqdm0ogyh9qRUMkFAfEQ2EB_ = LCK_IN_Standby_g;
    localDW->i = 0.0;
  } else if (localDW->is_c12_sqdm0ogyh9qRUMkFAfEQ2EB_ == LCK_IN_Hold_f) {
    if (rtu_input != 0.0F) {
      localDW->i = 0.0;
      localDW->is_c12_sqdm0ogyh9qRUMkFAfEQ2EB_ = LCK_IN_Hold_f;
      localB->sustain_value = rtu_input;
    } else if (localDW->i >= rtu_sustain_time) {
      localDW->is_c12_sqdm0ogyh9qRUMkFAfEQ2EB_ = LCK_IN_Standby_g;
      localDW->i = 0.0;
    } else {
      localDW->i += ML_TIME_MSEC;
    }
  } else if (rtu_input != 0.0F) {
    localDW->is_c12_sqdm0ogyh9qRUMkFAfEQ2EB_ = LCK_IN_Hold_f;
    localB->sustain_value = rtu_input;
  } else {
    localB->sustain_value = 0.0;
  }

  /* End of Chart: '<S121>/Sustain_wo_reset' */
}

/*
 * System initialize for atomic system:
 *    '<S139>/Delay_Trig'
 *    '<S140>/Delay_Trig'
 */
void LCK_Delay_Trig_a_Init(B_Delay_Trig_LCK_b_T *localB, DW_Delay_Trig_LCK_g_T
  *localDW)
{
  localDW->is_active_c19_LateralControl_fc = 0U;
  localDW->is_c19_LateralControl_fcns_lib = LCK_IN_NO_ACTIVE_CHILD_n;
  localDW->count = 0.0;
  localB->Delay_Trig = 0.0F;
}

/*
 * Output and update for atomic system:
 *    '<S139>/Delay_Trig'
 *    '<S140>/Delay_Trig'
 * Common block description:
 *   _GWMAB30P4.LKAFN.000_31_
 */
void LCK_Delay_Trig_k(boolean_T rtu_Input, real32_T rtu_Delay_Trig_count,
                      B_Delay_Trig_LCK_b_T *localB, DW_Delay_Trig_LCK_g_T
                      *localDW)
{
  /* Chart: '<S139>/Delay_Trig' */
  if (localDW->is_active_c19_LateralControl_fc == 0U) {
    localDW->is_active_c19_LateralControl_fc = 1U;
    localDW->is_c19_LateralControl_fcns_lib = LCK_IN_OFF_e;
    localB->Delay_Trig = 0.0F;
    localDW->count = 0.0;
  } else {
    switch (localDW->is_c19_LateralControl_fcns_lib) {
     case LCK_IN_OFF_e:
      localB->Delay_Trig = 0.0F;
      if (rtu_Input) {
        localDW->is_c19_LateralControl_fcns_lib = LCK_IN_ON_p;
        localB->Delay_Trig = 0.0F;
        localDW->count++;
      }
      break;

     case LCK_IN_ON_p:
      localB->Delay_Trig = 0.0F;
      if (rtu_Input && (localDW->count >= rtu_Delay_Trig_count)) {
        localDW->is_c19_LateralControl_fcns_lib = LCK_IN_Trig_j;
        localB->Delay_Trig = 1.0F;
      } else if (!rtu_Input) {
        localDW->is_c19_LateralControl_fcns_lib = LCK_IN_OFF_e;
        localB->Delay_Trig = 0.0F;
        localDW->count = 0.0;
      } else {
        localDW->count++;
      }
      break;

     default:
      localB->Delay_Trig = 1.0F;
      if (!rtu_Input) {
        localDW->is_c19_LateralControl_fcns_lib = LCK_IN_OFF_e;
        localB->Delay_Trig = 0.0F;
        localDW->count = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S139>/Delay_Trig' */
}

/*
 * System initialize for atomic system:
 *    '<S218>/Delay_Trig'
 *    '<S219>/Delay_Trig'
 */
void LCK_Delay_Trig_n_Init(B_Delay_Trig_LCK_a_T *localB, DW_Delay_Trig_LCK_gy_T *
  localDW)
{
  localDW->is_active_c1_LateralControl_fcn = 0U;
  localDW->is_c1_LateralControl_fcns_lib = LCK_IN_NO_ACTIVE_CHILD_k;
  localDW->duration = 0.0F;
  localB->Delay_Trig = 0.0F;
}

/*
 * Output and update for atomic system:
 *    '<S218>/Delay_Trig'
 *    '<S219>/Delay_Trig'
 */
void LCK_Delay_Trig_g(real32_T rtu_Input, real32_T rtu_Delay_Trig_Time,
                      B_Delay_Trig_LCK_a_T *localB, DW_Delay_Trig_LCK_gy_T
                      *localDW)
{
  /* Chart: '<S218>/Delay_Trig' */
  if (localDW->is_active_c1_LateralControl_fcn == 0U) {
    localDW->is_active_c1_LateralControl_fcn = 1U;
    localDW->is_c1_LateralControl_fcns_lib = LCK_IN_OFF_f;
    localB->Delay_Trig = 0.0F;
    localDW->duration = 0.0F;
  } else {
    switch (localDW->is_c1_LateralControl_fcns_lib) {
     case LCK_IN_OFF_f:
      localB->Delay_Trig = 0.0F;
      if (rtu_Input != 0.0F) {
        localDW->is_c1_LateralControl_fcns_lib = LCK_IN_ON_l;
        localB->Delay_Trig = 0.0F;
        localDW->duration += ML_TIME_SEC;
      }
      break;

     case LCK_IN_ON_l:
      localB->Delay_Trig = 0.0F;
      if ((rtu_Input != 0.0F) && (localDW->duration >= rtu_Delay_Trig_Time)) {
        localDW->is_c1_LateralControl_fcns_lib = LCK_IN_Trig_ja;
        localB->Delay_Trig = 1.0F;
      } else if (!(rtu_Input != 0.0F)) {
        localDW->is_c1_LateralControl_fcns_lib = LCK_IN_OFF_f;
        localB->Delay_Trig = 0.0F;
        localDW->duration = 0.0F;
      } else {
        localDW->duration += ML_TIME_SEC;
      }
      break;

     default:
      localB->Delay_Trig = 1.0F;
      if (!(rtu_Input != 0.0F)) {
        localDW->is_c1_LateralControl_fcns_lib = LCK_IN_OFF_f;
        localB->Delay_Trig = 0.0F;
        localDW->duration = 0.0F;
      }
      break;
    }
  }

  /* End of Chart: '<S218>/Delay_Trig' */
}

/*
 * System initialize for atomic system:
 *    '<S248>/signal_sustain'
 *    '<S249>/signal_sustain'
 */
void LCK_signal_sustain_Init(B_signal_sustain_LCK_T *localB,
  DW_signal_sustain_LCK_T *localDW)
{
  localDW->is_active_c106_sMO8bLBWfTvOHfGk = 0U;
  localDW->is_c106_sMO8bLBWfTvOHfGkBHxhSIH = LCK_IN_NO_ACTIVE_CHILD_j;
  localDW->i = 0.0F;
  localB->sustain_value = 0.0F;
}

/*
 * Output and update for atomic system:
 *    '<S248>/signal_sustain'
 *    '<S249>/signal_sustain'
 * Common block description:
 *   _GWMAB30P4.LKAFN.000_299_
 */
void LCK_signal_sustain(boolean_T rtu_input, real_T rtu_sustain_time, boolean_T
  rtu_clear, B_signal_sustain_LCK_T *localB, DW_signal_sustain_LCK_T *localDW)
{
  /* Chart: '<S248>/signal_sustain' */
  if (localDW->is_active_c106_sMO8bLBWfTvOHfGk == 0U) {
    localDW->is_active_c106_sMO8bLBWfTvOHfGk = 1U;
    localDW->is_c106_sMO8bLBWfTvOHfGkBHxhSIH = LCK_IN_Standby_e;
    localDW->i = 0.0F;
  } else if (localDW->is_c106_sMO8bLBWfTvOHfGkBHxhSIH == LCK_IN_Hold_m) {
    if (rtu_input && (localDW->i < rtu_sustain_time) && (!rtu_clear)) {
      localDW->i = 0.0F;
      localDW->is_c106_sMO8bLBWfTvOHfGkBHxhSIH = LCK_IN_Hold_m;
      localB->sustain_value = 1.0F;
    } else if ((localDW->i >= rtu_sustain_time) || rtu_clear) {
      localDW->is_c106_sMO8bLBWfTvOHfGkBHxhSIH = LCK_IN_Standby_e;
      localDW->i = 0.0F;
    } else {
      localDW->i += ML_TIME_MSEC;
    }
  } else if (rtu_input && (!rtu_clear)) {
    localDW->is_c106_sMO8bLBWfTvOHfGkBHxhSIH = LCK_IN_Hold_m;
    localB->sustain_value = 1.0F;
  } else {
    localB->sustain_value = 0.0F;
  }

  /* End of Chart: '<S248>/signal_sustain' */
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static real_T LCK_LinearInterpolation(const real_T X[400], const real_T Y[400],
  real_T x)
{
  real_T y;
  real_T low;
  real_T high;
  int32_T Flag;
  real_T mid;
  boolean_T exitg1;
  y = 0.0;
  low = 1.0;
  high = 400.0;
  if (x <= X[0]) {
    y = Y[0];
  } else if (x >= X[399]) {
    y = Y[399];
  } else {
    Flag = 0;
    exitg1 = false;
    while ((!exitg1) && (Flag == 0)) {
      mid = rt_roundd_snf((low + high) * 0.5);
      if (X[(int32_T)mid - 1] == x) {
        y = Y[(int32_T)mid - 1];
        exitg1 = true;
      } else {
        if (x < X[(int32_T)mid - 1]) {
          high = mid;
        } else {
          low = mid;
        }

        if (high - low == 1.0) {
          Flag = 1;
        }

        y = (x - X[(int32_T)low - 1]) / (X[(int32_T)high - 1] - X[(int32_T)low -
          1]) * (Y[(int32_T)high - 1] - Y[(int32_T)low - 1]) + Y[(int32_T)low -
          1];
      }
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static void LCK_post_processing(const real_T output[3200], real_T long_S, real_T
  *search_latoff, real_T *search_theta, real_T *search_kappa)
{
  memcpy(&LCK_B.ref_S[0], &output[800], 400U * sizeof(real_T));
  *search_latoff = LCK_LinearInterpolation(&output[800], &output[1200], long_S);
  *search_theta = LCK_LinearInterpolation(LCK_B.ref_S, &output[1600], long_S);
  *search_kappa = LCK_LinearInterpolation(LCK_B.ref_S, &output[2000], long_S);
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static real_T LCK_calculateLEN(real_T velocity, real_T TIME)
{
  real_T LEN;
  LEN = rt_roundd_snf(velocity / 3.6 * TIME + 1.0);
  if (LEN == 0.0) {
    printf("LEN calculation error. \r");
    fflush(stdout);
  }

  return LEN;
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static real_T LCK_mod(real_T x)
{
  real_T r;
  boolean_T rEQ0;
  real_T q;
  if ((!rtIsInf(x)) && (!rtIsNaN(x))) {
    if (x == 0.0) {
      r = 0.0;
    } else {
      r = fmod(x, 0.01);
      rEQ0 = (r == 0.0);
      if (!rEQ0) {
        q = fabs(x / 0.01);
        rEQ0 = (fabs(q - floor(q + 0.5)) <= 2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        r = 0.0;
      } else {
        if (x < 0.0) {
          r += 0.01;
        }
      }
    }
  } else {
    r = (rtNaN);
  }

  return r;
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static real_T LCK_xnrm2(int32_T n, const real_T x[9], int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  real_T absxk;
  real_T t;
  int32_T k;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  kend = (ix0 + n) - 1;
  for (k = ix0; k <= kend; k++) {
    absxk = fabs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * sqrt(y);
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static real_T LCK_xnrm2_p(const real_T x[3], int32_T ix0)
{
  real_T y;
  real_T scale;
  real_T absxk;
  real_T t;
  int32_T k;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = ix0; k <= ix0 + 1; k++) {
    absxk = fabs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * sqrt(y);
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static void LCK_xaxpy_ca(int32_T n, real_T a, const real_T x[3], int32_T ix0,
  real_T y[9], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix];
      ix++;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static void LCK_xaxpy_c(int32_T n, real_T a, const real_T x[9], int32_T ix0,
  real_T y[3], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix];
      ix++;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static real_T LCK_xdotc(int32_T n, const real_T x[9], int32_T ix0, const real_T
  y[9], int32_T iy0)
{
  real_T d;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  ix = ix0;
  iy = iy0;
  for (k = 0; k < n; k++) {
    d += x[ix - 1] * y[iy - 1];
    ix++;
    iy++;
  }

  return d;
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static void LCK_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[9], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix];
      ix++;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static void LCK_xscal(real_T a, real_T x[9], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 2; k++) {
    x[k - 1] *= a;
  }
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static void LCK_xswap(real_T x[9], int32_T ix0, int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  real_T temp;
  ix = ix0 - 1;
  iy = iy0 - 1;
  temp = x[ix];
  x[ix] = x[iy];
  x[iy] = temp;
  ix++;
  iy++;
  temp = x[ix];
  x[ix] = x[iy];
  x[iy] = temp;
  ix++;
  iy++;
  temp = x[ix];
  x[ix] = x[iy];
  x[iy] = temp;
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static void LCK_xrotg(real_T *a, real_T *b, real_T *c, real_T *s)
{
  real_T roe;
  real_T absa;
  real_T absb;
  real_T scale;
  real_T ads;
  real_T bds;
  roe = *b;
  absa = fabs(*a);
  absb = fabs(*b);
  if (absa > absb) {
    roe = *a;
  }

  scale = absa + absb;
  if (scale == 0.0) {
    *s = 0.0;
    *c = 1.0;
    scale = 0.0;
    *b = 0.0;
  } else {
    ads = absa / scale;
    bds = absb / scale;
    scale *= sqrt(ads * ads + bds * bds);
    if (roe < 0.0) {
      scale = -scale;
    }

    *c = *a / scale;
    *s = *b / scale;
    if (absa > absb) {
      *b = *s;
    } else if (*c != 0.0) {
      *b = 1.0 / *c;
    } else {
      *b = 1.0;
    }
  }

  *a = scale;
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static void LCK_xrot(real_T x[9], int32_T ix0, int32_T iy0, real_T c, real_T s)
{
  int32_T ix;
  int32_T iy;
  real_T temp;
  ix = ix0 - 1;
  iy = iy0 - 1;
  temp = c * x[ix] + s * x[iy];
  x[iy] = c * x[iy] - s * x[ix];
  x[ix] = temp;
  iy++;
  ix++;
  temp = c * x[ix] + s * x[iy];
  x[iy] = c * x[iy] - s * x[ix];
  x[ix] = temp;
  iy++;
  ix++;
  temp = c * x[ix] + s * x[iy];
  x[iy] = c * x[iy] - s * x[ix];
  x[ix] = temp;
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static void LCK_svd(const real_T A[9], real_T U[9], real_T s[3], real_T V[9])
{
  real_T b_A[9];
  real_T b_s[3];
  real_T e[3];
  real_T work[3];
  real_T Vf[9];
  int32_T qq;
  boolean_T apply_transform;
  real_T nrm;
  int32_T qjj;
  int32_T m;
  real_T rt;
  real_T r;
  int32_T kase;
  real_T smm1;
  real_T emm1;
  real_T sqds;
  real_T shift;
  int32_T c_q;
  boolean_T exitg1;
  e[0] = 0.0;
  work[0] = 0.0;
  e[1] = 0.0;
  work[1] = 0.0;
  e[2] = 0.0;
  work[2] = 0.0;
  for (m = 0; m < 9; m++) {
    b_A[m] = A[m];
    U[m] = 0.0;
    Vf[m] = 0.0;
  }

  apply_transform = false;
  nrm = LCK_xnrm2(3, b_A, 1);
  if (nrm > 0.0) {
    apply_transform = true;
    if (b_A[0] < 0.0) {
      nrm = -nrm;
    }

    b_s[0] = nrm;
    if (fabs(b_s[0]) >= 1.0020841800044864E-292) {
      nrm = 1.0 / b_s[0];
      for (m = 0; m < 3; m++) {
        b_A[m] *= nrm;
      }
    } else {
      for (m = 0; m < 3; m++) {
        b_A[m] /= b_s[0];
      }
    }

    b_A[0]++;
    b_s[0] = -b_s[0];
  } else {
    b_s[0] = 0.0;
  }

  for (m = 1; m + 1 < 4; m++) {
    qjj = 3 * m;
    if (apply_transform) {
      LCK_xaxpy(3, -(LCK_xdotc(3, b_A, 1, b_A, qjj + 1) / b_A[0]), 1, b_A, qjj +
                1);
    }

    e[m] = b_A[qjj];
  }

  for (m = 0; m + 1 < 4; m++) {
    U[m] = b_A[m];
  }

  nrm = LCK_xnrm2_p(e, 2);
  if (nrm == 0.0) {
    e[0] = 0.0;
  } else {
    if (e[1] < 0.0) {
      nrm = -nrm;
    }

    e[0] = nrm;
    if (fabs(nrm) >= 1.0020841800044864E-292) {
      nrm = 1.0 / nrm;
      for (m = 1; m < 3; m++) {
        e[m] *= nrm;
      }
    } else {
      for (m = 1; m < 3; m++) {
        e[m] /= nrm;
      }
    }

    e[1]++;
    e[0] = -e[0];
    for (m = 2; m < 4; m++) {
      work[m - 1] = 0.0;
    }

    for (m = 1; m + 1 < 4; m++) {
      LCK_xaxpy_c(2, e[m], b_A, 3 * m + 2, work, 2);
    }

    for (m = 1; m + 1 < 4; m++) {
      LCK_xaxpy_ca(2, -e[m] / e[1], work, 2, b_A, 3 * m + 2);
    }
  }

  for (m = 1; m + 1 < 4; m++) {
    Vf[m] = e[m];
  }

  apply_transform = false;
  nrm = LCK_xnrm2(2, b_A, 5);
  if (nrm > 0.0) {
    apply_transform = true;
    if (b_A[4] < 0.0) {
      nrm = -nrm;
    }

    b_s[1] = nrm;
    if (fabs(b_s[1]) >= 1.0020841800044864E-292) {
      nrm = 1.0 / b_s[1];
      for (m = 4; m < 6; m++) {
        b_A[m] *= nrm;
      }
    } else {
      for (m = 4; m < 6; m++) {
        b_A[m] /= b_s[1];
      }
    }

    b_A[4]++;
    b_s[1] = -b_s[1];
  } else {
    b_s[1] = 0.0;
  }

  for (m = 2; m + 1 < 4; m++) {
    qjj = 3 * m + 1;
    if (apply_transform) {
      LCK_xaxpy(2, -(LCK_xdotc(2, b_A, 5, b_A, qjj + 1) / b_A[4]), 5, b_A, qjj +
                1);
    }

    e[m] = b_A[qjj];
  }

  for (m = 1; m + 1 < 4; m++) {
    U[m + 3] = b_A[m + 3];
  }

  m = 1;
  b_s[2] = b_A[8];
  e[1] = b_A[7];
  U[6] = 0.0;
  U[7] = 0.0;
  U[8] = 1.0;
  for (c_q = 1; c_q >= 0; c_q--) {
    qq = 3 * c_q + c_q;
    if (b_s[c_q] != 0.0) {
      for (kase = c_q + 1; kase + 1 < 4; kase++) {
        qjj = (3 * kase + c_q) + 1;
        LCK_xaxpy(3 - c_q, -(LCK_xdotc(3 - c_q, U, qq + 1, U, qjj) / U[qq]), qq
                  + 1, U, qjj);
      }

      for (qjj = c_q; qjj + 1 < 4; qjj++) {
        U[qjj + 3 * c_q] = -U[3 * c_q + qjj];
      }

      U[qq]++;
      if (0 <= c_q - 1) {
        U[3 * c_q] = 0.0;
      }
    } else {
      U[3 * c_q] = 0.0;
      U[1 + 3 * c_q] = 0.0;
      U[2 + 3 * c_q] = 0.0;
      U[qq] = 1.0;
    }
  }

  for (c_q = 2; c_q >= 0; c_q--) {
    if ((c_q + 1 <= 1) && (e[0] != 0.0)) {
      LCK_xaxpy(2, -(LCK_xdotc(2, Vf, 2, Vf, 5) / Vf[1]), 2, Vf, 5);
      LCK_xaxpy(2, -(LCK_xdotc(2, Vf, 2, Vf, 8) / Vf[1]), 2, Vf, 8);
    }

    Vf[3 * c_q] = 0.0;
    Vf[1 + 3 * c_q] = 0.0;
    Vf[2 + 3 * c_q] = 0.0;
    Vf[c_q + 3 * c_q] = 1.0;
  }

  nrm = e[0];
  if (b_s[0] != 0.0) {
    rt = fabs(b_s[0]);
    r = b_s[0] / rt;
    b_s[0] = rt;
    nrm /= r;
    LCK_xscal(r, U, 1);
  }

  if (nrm != 0.0) {
    rt = fabs(nrm);
    r = rt / nrm;
    nrm = rt;
    b_s[1] *= r;
    LCK_xscal(r, Vf, 4);
  }

  e[0] = nrm;
  nrm = e[1];
  if (b_s[1] != 0.0) {
    rt = fabs(b_s[1]);
    r = b_s[1] / rt;
    b_s[1] = rt;
    nrm /= r;
    LCK_xscal(r, U, 4);
  }

  if (nrm != 0.0) {
    rt = fabs(nrm);
    r = rt / nrm;
    nrm = rt;
    b_s[2] *= r;
    LCK_xscal(r, Vf, 7);
  }

  e[1] = nrm;
  if (b_s[2] != 0.0) {
    rt = fabs(b_s[2]);
    r = b_s[2] / rt;
    b_s[2] = rt;
    LCK_xscal(r, U, 7);
  }

  e[2] = 0.0;
  qq = 0;
  r = b_s[0];
  nrm = e[0];
  if ((r > nrm) || rtIsNaN(nrm)) {
    nrm = r;
  }

  r = b_s[1];
  rt = e[1];
  if ((r > rt) || rtIsNaN(rt)) {
    rt = r;
  }

  if ((!(nrm > rt)) && (!rtIsNaN(rt))) {
    nrm = rt;
  }

  r = b_s[2];
  if (!(r > 0.0)) {
    r = 0.0;
  }

  if ((!(nrm > r)) && (!rtIsNaN(r))) {
    nrm = r;
  }

  while ((m + 2 > 0) && (qq < 75)) {
    c_q = m + 1;
    exitg1 = false;
    while (!(exitg1 || (c_q == 0))) {
      rt = fabs(e[c_q - 1]);
      if ((rt <= (fabs(b_s[c_q - 1]) + fabs(b_s[c_q])) * 2.2204460492503131E-16)
          || ((rt <= 1.0020841800044864E-292) || ((qq > 20) && (rt <=
             2.2204460492503131E-16 * nrm)))) {
        e[c_q - 1] = 0.0;
        exitg1 = true;
      } else {
        c_q--;
      }
    }

    if (m + 1 == c_q) {
      kase = 4;
    } else {
      qjj = m + 2;
      kase = m + 2;
      exitg1 = false;
      while ((!exitg1) && (kase >= c_q)) {
        qjj = kase;
        if (kase == c_q) {
          exitg1 = true;
        } else {
          rt = 0.0;
          if (kase < m + 2) {
            rt = fabs(e[kase - 1]);
          }

          if (kase > c_q + 1) {
            rt += fabs(e[kase - 2]);
          }

          r = fabs(b_s[kase - 1]);
          if ((r <= 2.2204460492503131E-16 * rt) || (r <=
               1.0020841800044864E-292)) {
            b_s[kase - 1] = 0.0;
            exitg1 = true;
          } else {
            kase--;
          }
        }
      }

      if (qjj == c_q) {
        kase = 3;
      } else if (m + 2 == qjj) {
        kase = 1;
      } else {
        kase = 2;
        c_q = qjj;
      }
    }

    switch (kase) {
     case 1:
      rt = e[m];
      e[m] = 0.0;
      for (qjj = m; qjj + 1 >= c_q + 1; qjj--) {
        r = b_s[qjj];
        LCK_xrotg(&r, &rt, &sqds, &smm1);
        b_s[qjj] = r;
        if (qjj + 1 > c_q + 1) {
          rt = -smm1 * e[0];
          e[0] *= sqds;
        }

        LCK_xrot(Vf, 1 + 3 * qjj, 1 + 3 * (m + 1), sqds, smm1);
      }
      break;

     case 2:
      rt = e[c_q - 1];
      e[c_q - 1] = 0.0;
      for (qjj = c_q; qjj < m + 2; qjj++) {
        r = b_s[qjj];
        LCK_xrotg(&r, &rt, &sqds, &smm1);
        b_s[qjj] = r;
        rt = -smm1 * e[qjj];
        e[qjj] *= sqds;
        LCK_xrot(U, 1 + 3 * qjj, 1 + 3 * (c_q - 1), sqds, smm1);
      }
      break;

     case 3:
      r = fabs(b_s[m + 1]);
      rt = fabs(b_s[m]);
      if ((r > rt) || rtIsNaN(rt)) {
        rt = r;
      }

      r = fabs(e[m]);
      if ((rt > r) || rtIsNaN(r)) {
        r = rt;
      }

      rt = fabs(b_s[c_q]);
      if ((r > rt) || rtIsNaN(rt)) {
        rt = r;
      }

      r = fabs(e[c_q]);
      if ((rt > r) || rtIsNaN(r)) {
        r = rt;
      }

      rt = b_s[m + 1] / r;
      smm1 = b_s[m] / r;
      emm1 = e[m] / r;
      sqds = b_s[c_q] / r;
      smm1 = ((smm1 + rt) * (smm1 - rt) + emm1 * emm1) / 2.0;
      emm1 *= rt;
      emm1 *= emm1;
      if ((smm1 != 0.0) || (emm1 != 0.0)) {
        shift = sqrt(smm1 * smm1 + emm1);
        if (smm1 < 0.0) {
          shift = -shift;
        }

        shift = emm1 / (smm1 + shift);
      } else {
        shift = 0.0;
      }

      rt = (sqds + rt) * (sqds - rt) + shift;
      r = e[c_q] / r * sqds;
      for (qjj = c_q + 1; qjj <= m + 1; qjj++) {
        LCK_xrotg(&rt, &r, &sqds, &smm1);
        if (qjj > c_q + 1) {
          e[0] = rt;
        }

        rt = b_s[qjj - 1] * sqds + e[qjj - 1] * smm1;
        e[qjj - 1] = e[qjj - 1] * sqds - b_s[qjj - 1] * smm1;
        r = smm1 * b_s[qjj];
        b_s[qjj] *= sqds;
        LCK_xrot(Vf, 1 + 3 * (qjj - 1), 1 + 3 * qjj, sqds, smm1);
        LCK_xrotg(&rt, &r, &sqds, &smm1);
        b_s[qjj - 1] = rt;
        rt = e[qjj - 1] * sqds + smm1 * b_s[qjj];
        b_s[qjj] = e[qjj - 1] * -smm1 + sqds * b_s[qjj];
        r = smm1 * e[qjj];
        e[qjj] *= sqds;
        LCK_xrot(U, 1 + 3 * (qjj - 1), 1 + 3 * qjj, sqds, smm1);
      }

      e[m] = rt;
      qq++;
      break;

     default:
      if (b_s[c_q] < 0.0) {
        b_s[c_q] = -b_s[c_q];
        LCK_xscal(-1.0, Vf, 1 + 3 * c_q);
      }

      qq = c_q + 1;
      while ((c_q + 1 < 3) && (b_s[c_q] < b_s[qq])) {
        rt = b_s[c_q];
        b_s[c_q] = b_s[qq];
        b_s[qq] = rt;
        LCK_xswap(Vf, 1 + 3 * c_q, 1 + 3 * (c_q + 1));
        LCK_xswap(U, 1 + 3 * c_q, 1 + 3 * (c_q + 1));
        c_q = qq;
        qq++;
      }

      qq = 0;
      m--;
      break;
    }
  }

  for (m = 0; m < 3; m++) {
    s[m] = b_s[m];
    V[3 * m] = Vf[3 * m];
    V[1 + 3 * m] = Vf[3 * m + 1];
    V[2 + 3 * m] = Vf[3 * m + 2];
  }
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static void LCK_quintic_polynomial(real32_T xs, real32_T vxs, real32_T xe,
  real_T T, real32_T *a0, real32_T *a1, real_T *a2, real32_T *a3, real32_T *a4,
  real32_T *a5)
{
  real_T A[9];
  real32_T x[3];
  real_T X[9];
  real_T V[9];
  int32_T r;
  int32_T vcol;
  real_T U[9];
  real_T s[3];
  int32_T j;
  boolean_T b_p;
  real_T absxk;
  int32_T ia;
  int32_T ib;
  int32_T b_ic;
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  real_T tmp_2;
  real_T tmp_3;
  real32_T x_0;
  real32_T xe_idx_0;
  real32_T xe_idx_1;
  absxk = rt_powd_snf(T, 3.0);
  tmp = rt_powd_snf(T, 4.0);
  tmp_0 = rt_powd_snf(T, 5.0);
  tmp_1 = rt_powd_snf(T, 3.0);
  tmp_2 = rt_powd_snf(T, 4.0);
  tmp_3 = rt_powd_snf(T, 3.0);
  A[0] = absxk;
  A[3] = tmp;
  A[6] = tmp_0;
  A[1] = T * T * 3.0;
  A[4] = 4.0 * tmp_1;
  A[7] = 5.0 * tmp_2;
  A[2] = 6.0 * T;
  A[5] = T * T * 12.0;
  A[8] = 20.0 * tmp_3;
  b_p = true;
  for (r = 0; r < 9; r++) {
    absxk = A[r];
    X[r] = 0.0;
    if (b_p && ((!rtIsInf(absxk)) && (!rtIsNaN(absxk)))) {
      b_p = true;
    } else {
      b_p = false;
    }
  }

  if (!b_p) {
    for (r = 0; r < 9; r++) {
      X[r] = (rtNaN);
    }
  } else {
    LCK_svd(A, U, s, V);
    absxk = fabs(s[0]);
    if ((!rtIsInf(absxk)) && (!rtIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &vcol);
        absxk = ldexp(1.0, vcol - 53);
      }
    } else {
      absxk = (rtNaN);
    }

    absxk *= 3.0;
    r = -1;
    vcol = 0;
    while ((vcol < 3) && (s[vcol] > absxk)) {
      r++;
      vcol++;
    }

    if (r + 1 > 0) {
      vcol = 0;
      for (j = 0; j <= r; j++) {
        absxk = 1.0 / s[j];
        for (ib = vcol; ib < vcol + 3; ib++) {
          V[ib] *= absxk;
        }

        vcol += 3;
      }

      for (vcol = 0; vcol < 3; vcol++) {
        X[vcol] = 0.0;
      }

      for (vcol = 3; vcol < 6; vcol++) {
        X[vcol] = 0.0;
      }

      for (vcol = 6; vcol < 9; vcol++) {
        X[vcol] = 0.0;
      }

      vcol = -1;
      j = 3 * r + 1;
      for (ib = 1; ib <= j; ib += 3) {
        ia = vcol;
        for (b_ic = 0; b_ic < 3; b_ic++) {
          ia++;
          X[b_ic] += U[ib - 1] * V[ia];
        }

        vcol += 3;
      }

      vcol = -1;
      j = 3 * r + 2;
      for (ib = 2; ib <= j; ib += 3) {
        ia = vcol;
        for (b_ic = 3; b_ic < 6; b_ic++) {
          ia++;
          X[b_ic] += U[ib - 1] * V[ia];
        }

        vcol += 3;
      }

      vcol = -1;
      j = 3 * r + 3;
      for (ib = 3; ib <= j; ib += 3) {
        ia = vcol;
        for (b_ic = 6; b_ic < 9; b_ic++) {
          ia++;
          X[b_ic] += U[ib - 1] * V[ia];
        }

        vcol += 3;
      }
    }
  }

  xe_idx_0 = ((xe - xs) - vxs * (real32_T)T) - (real32_T)(T * T * 0.0);
  xe_idx_1 = (0.0F - vxs) - (real32_T)(0.0 * T);
  for (r = 0; r < 3; r++) {
    x_0 = (real32_T)X[r] * xe_idx_0;
    x_0 += (real32_T)X[r + 3] * xe_idx_1;
    x_0 += (real32_T)X[r + 6] * 0.0F;
    x[r] = x_0;
  }

  *a0 = xs;
  *a1 = vxs;
  *a2 = 0.0;
  *a3 = x[0];
  *a4 = x[1];
  *a5 = x[2];
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static void LCK_combination(real32_T a0, real32_T a1, real32_T a3, real32_T a4,
  real32_T a5, real_T Te, real_T velocity, real_T ref_poly[800])
{
  real_T b_index;
  real_T t;
  real_T b;
  int32_T i;
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  int32_T b_index_0;
  memset(&ref_poly[0], 0, 800U * sizeof(real_T));
  b_index = 1.0;
  b = Te / 0.05;
  for (i = 0; i < (int32_T)(b + 1.0); i++) {
    t = (real_T)i * 0.05;
    tmp = rt_powd_snf(t, 3.0);
    tmp_0 = rt_powd_snf(t, 4.0);
    tmp_1 = rt_powd_snf(t, 5.0);
    b_index_0 = (int32_T)b_index - 1;
    ref_poly[b_index_0] = (real32_T)(velocity * t);
    ref_poly[400 + b_index_0] = (((a1 * (real32_T)t + a0) + a3 * (real32_T)tmp)
      + a4 * (real32_T)tmp_0) + a5 * (real32_T)tmp_1;
    b_index++;
  }
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static void LCK_reference_generator_oneshot(real32_T c0, real32_T c1, real32_T
  c2, real32_T c3, real_T Te, real_T velocity_ms, real_T reference[800])
{
  real_T b_index;
  real_T t;
  real_T b;
  int32_T i;
  real_T tmp;
  int32_T b_index_0;
  memset(&reference[0], 0, 800U * sizeof(real_T));
  b_index = 1.0;
  b = Te / 0.05;
  for (i = 0; i < (int32_T)(b + 1.0); i++) {
    t = (real_T)i * 0.05;
    tmp = rt_powd_snf(t, 3.0);
    b_index_0 = (int32_T)b_index - 1;
    reference[b_index_0] = (real32_T)(velocity_ms * t);
    reference[400 + b_index_0] = ((c1 * (real32_T)t + c0) + (real32_T)(t * t) *
      c2) + c3 * (real32_T)tmp;
    b_index++;
  }
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static real_T LCK_find_valid_ref_max_len(const real_T reference[800])
{
  real_T len_valid;
  boolean_T x[400];
  int32_T idx;
  int32_T b_ii;
  boolean_T exitg1;
  for (idx = 0; idx < 400; idx++) {
    x[idx] = ((reference[idx] == 0.0) && (reference[400 + idx] == 0.0));
  }

  idx = 0;
  b_ii = 0;
  exitg1 = false;
  while ((!exitg1) && (b_ii < 400)) {
    if (x[b_ii]) {
      idx++;
      LCK_B.ii_data[idx - 1] = (int16_T)(b_ii + 1);
      if (idx >= 400) {
        exitg1 = true;
      } else {
        b_ii++;
      }
    } else {
      b_ii++;
    }
  }

  if (1 > idx) {
    idx = 0;
  }

  if (idx == 1) {
    len_valid = 400.0;
  } else {
    len_valid = (real_T)LCK_B.ii_data[1] - 3.0;
  }

  return len_valid;
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static void LCK_reference_generation(const real_T trajs_local[800], const real_T
  p_store[800], real_T ref_len_valid, real_T trajs_new[800])
{
  real_T theta;
  int32_T i;
  real_T tmp;
  memset(&trajs_new[0], 0, 800U * sizeof(real_T));
  for (i = 0; i < (int32_T)ref_len_valid; i++) {
    if (trajs_local[i] == 0.0) {
      theta = 0.0;
    } else if (1.0 + (real_T)i == 1.0) {
      theta = atan(trajs_local[400] / trajs_local[0]);
    } else {
      theta = atan((trajs_local[400 + i] - trajs_local[i + 399]) /
                   (trajs_local[i] - trajs_local[i - 1]));
    }

    if ((theta > -1.5707963267948966) && (theta <= 0.0)) {
      tmp = sin(theta);
      theta = cos(theta);
      trajs_new[i] = p_store[400 + i] * tmp + trajs_local[i];
      trajs_new[400 + i] = p_store[400 + i] * theta + trajs_local[400 + i];
    } else if ((theta > 0.0) && (theta < 1.5707963267948966)) {
      tmp = sin(theta);
      theta = cos(theta);
      trajs_new[i] = trajs_local[i] - p_store[400 + i] * tmp;
      trajs_new[400 + i] = p_store[400 + i] * theta + trajs_local[400 + i];
    } else {
      printf("it seems that the reference line is unacceptable!");
      fflush(stdout);
    }
  }
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static void LCK_calculat_delta_heading(const real_T center_line[800], const
  real_T traj_new[800], real_T ref_len_valid, real_T delta_heading[400])
{
  real_T x1;
  real_T b_y1;
  real_T x2;
  real_T y2;
  real_T square_term_1;
  real_T square_term_2;
  int32_T i;
  memset(&delta_heading[0], 0, 400U * sizeof(real_T));
  for (i = 0; i < (int32_T)(ref_len_valid - 1.0); i++) {
    x1 = center_line[i + 1] - center_line[i];
    b_y1 = center_line[i + 401] - center_line[400 + i];
    x2 = traj_new[i + 1] - traj_new[i];
    y2 = traj_new[i + 401] - traj_new[400 + i];
    square_term_1 = sqrt(x1 * x1 + b_y1 * b_y1);
    square_term_2 = sqrt(x2 * x2 + y2 * y2);
    if ((square_term_1 == 0.0) && (square_term_2 == 0.0)) {
      x1 = 0.0;
    } else {
      x1 = (x1 * y2 - x2 * b_y1) / fabs(square_term_1 * square_term_2 + 1.0E-5);
    }

    delta_heading[i] = asin(x1);
  }

  delta_heading[(int32_T)ref_len_valid - 1] = delta_heading[(int32_T)
    (ref_len_valid - 1.0) - 1];
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static void LCK_calculate_kappa(const real_T trajs_new[800], real_T
  ref_len_valid, real_T kappa[400])
{
  real_T denominator_pdd;
  int32_T i;
  memset(&LCK_B.pd[0], 0, 400U * sizeof(real_T));
  memset(&LCK_B.pdd[0], 0, 400U * sizeof(real_T));
  memset(&kappa[0], 0, 400U * sizeof(real_T));
  for (i = 0; i < (int32_T)(ref_len_valid - 1.0); i++) {
    if (fabs(trajs_new[i + 1] - trajs_new[i]) <= 1.0E-5) {
      denominator_pdd = 1.0E-5;
    } else {
      denominator_pdd = trajs_new[i + 1] - trajs_new[i];
    }

    LCK_B.pd[i] = (trajs_new[i + 401] - trajs_new[400 + i]) / denominator_pdd;
  }

  LCK_B.pd[399] = LCK_B.pd[398];
  for (i = 0; i < (int32_T)(ref_len_valid - 2.0); i++) {
    denominator_pdd = (trajs_new[i + 1] - trajs_new[i]) * 0.5;
    if (denominator_pdd * denominator_pdd <= 0.001) {
      denominator_pdd = 0.001;
    } else {
      denominator_pdd = trajs_new[i + 1] - trajs_new[i];
      denominator_pdd *= denominator_pdd;
    }

    LCK_B.pdd[i] = ((trajs_new[i + 402] - trajs_new[i + 401] * 2.0) + trajs_new
                    [400 + i]) / denominator_pdd;
  }

  LCK_B.pdd[398] = LCK_B.pdd[397];
  LCK_B.pdd[399] = LCK_B.pdd[397];
  for (i = 0; i < (int32_T)ref_len_valid; i++) {
    kappa[i] = LCK_B.pdd[i] / rt_powd_snf(LCK_B.pd[i] * LCK_B.pd[i] + 1.0, 1.5);
  }

  kappa[0] = kappa[1];
  kappa[399] = kappa[398];
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static void LCK_calculate_max_ref(const real_T output[3200], real_T *max_ref,
  real_T *valid_len)
{
  boolean_T x[400];
  int32_T idx;
  int32_T b_ii;
  boolean_T exitg1;
  for (idx = 0; idx < 400; idx++) {
    x[idx] = ((output[800 + idx] == 0.0) && (output[1200 + idx] == 0.0));
  }

  idx = 0;
  b_ii = 0;
  exitg1 = false;
  while ((!exitg1) && (b_ii < 400)) {
    if (x[b_ii]) {
      idx++;
      LCK_B.ii_data_m[idx - 1] = (int16_T)(b_ii + 1);
      if (idx >= 400) {
        exitg1 = true;
      } else {
        b_ii++;
      }
    } else {
      b_ii++;
    }
  }

  if (1 > idx) {
    idx = 0;
  }

  if (idx == 1) {
    *max_ref = 400.0;
    *valid_len = output[1199];
  } else {
    *max_ref = (real_T)LCK_B.ii_data_m[1] - 3.0;
    *valid_len = output[LCK_B.ii_data_m[1] + 796];
  }
}

/* Function for MATLAB Function: '<S231>/Path_Planning_Function ' */
static void LCK_Reshape(real_T output[3200], real_T max_ref, real32_T c2)
{
  int32_T i;
  real32_T y;
  real_T tmp;
  int32_T tmp_0;
  int32_T i_0;
  int32_T tmp_1;
  if (max_ref < 400.0) {
    tmp_1 = 401 - (int32_T)(max_ref + 1.0);
    tmp_0 = (int32_T)(max_ref + 1.0) - 1;
    for (i = 0; i < 8; i++) {
      tmp = output[(400 * i + (int32_T)max_ref) - 1];
      for (i_0 = 0; i_0 < tmp_1; i_0++) {
        output[(tmp_0 + i_0) + 400 * i] = tmp;
      }
    }

    y = c2 * 2.0F;
    tmp_1 = 401 - (int32_T)(max_ref + 1.0);
    tmp_0 = (int32_T)(max_ref + 1.0) - 1;
    for (i_0 = 0; i_0 < tmp_1; i_0++) {
      output[2000 + (tmp_0 + i_0)] = y;
    }
  }
}

/* Model output function */
void LCK_output(void)
{
  boolean_T sf_internal_predicateOutput;
  real_T velocity_ms;
  real_T Te;
  real32_T vxs;
  real32_T a0;
  real32_T a1;
  real_T a2;
  real32_T a3;
  real32_T a4;
  real32_T a5;
  int32_T i;
  uint16_T tmp;
  boolean_T guard1 = false;

  /* Chart: '<Root>/Main_OS' incorporates:
   *  Constant: '<S113>/k_HighAccel_suppress_hold'
   *  Constant: '<S115>/LSS_SnvtySet'
   *  Constant: '<S4>/LCK_PID_Main_Version'
   *  Constant: '<S4>/LCK_PID_Minor_Version'
   */
  if (LCK_DW.i == 1.0) {
    /* Outputs for Function Call SubSystem: '<Root>/Lateral_Control_Module' */
    for (i = 0; i < 3200; i++) {
      /* Delay: '<S231>/Delay1' */
      LCK_B.Delay1[i] = LCK_DW.Delay1_DSTATE[i];

      /* DataTypeConversion: '<S231>/Data Type Conversion2' */
      LCK_B.DataTypeConversion2[i] = LCK_B.Delay1[i];
    }

    /* DataTypeConversion: '<S8>/Data Type Conversion' incorporates:
     *  Constant: '<S8>/AVP_C0_Coff'
     */
    LCK_B.DataTypeConversion = (real32_T)LCK_P.AVP_C0_Coff_Value;

    /* Product: '<S8>/Product' incorporates:
     *  Inport: '<Root>/AVP_Info'
     */
    LCK_B.Product = LCK_U.AVP_Info.Tractory_c0 * LCK_B.DataTypeConversion;

    /* DataTypeConversion: '<S245>/Data Type Conversion3' incorporates:
     *  Constant: '<S245>/Constant5'
     */
    LCK_B.DataTypeConversion3_ey = (LCK_P.Constant5_Value != 0.0);

    /* RelationalOperator: '<S245>/Relational Operator2' incorporates:
     *  Constant: '<S245>/Constant2'
     *  Inport: '<Root>/AVP_Info'
     */
    LCK_B.RelationalOperator2 = (LCK_U.AVP_Info.EndPoint_x <=
      LCK_P.Constant2_Value);

    /* Abs: '<S245>/Abs' */
    LCK_B.Abs = (real32_T)fabs(LCK_B.Product);

    /* RelationalOperator: '<S245>/Relational Operator4' incorporates:
     *  Constant: '<S245>/Constant3'
     */
    LCK_B.RelationalOperator4 = (LCK_B.Abs >= LCK_P.Constant3_Value);

    /* DataTypeConversion: '<S245>/Data Type Conversion2' incorporates:
     *  Constant: '<S245>/Constant4'
     */
    velocity_ms = floor(LCK_P.Constant4_Value);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 256.0);
    }

    LCK_B.DataTypeConversion2_k4 = (uint8_T)(velocity_ms < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-velocity_ms : (int32_T)(uint8_T)velocity_ms);

    /* End of DataTypeConversion: '<S245>/Data Type Conversion2' */

    /* RelationalOperator: '<S245>/Relational Operator5' incorporates:
     *  Inport: '<Root>/AVP_Info'
     */
    LCK_B.RelationalOperator5 = (LCK_U.AVP_Info.AVP_STATE ==
      LCK_B.DataTypeConversion2_k4);

    /* Logic: '<S245>/Logical Operator1' */
    LCK_B.LogicalOperator1 = (LCK_B.RelationalOperator2 ||
      LCK_B.RelationalOperator4 || LCK_B.RelationalOperator5);

    /* DataTypeConversion: '<S245>/Data Type Conversion' incorporates:
     *  Constant: '<S245>/Constant'
     */
    velocity_ms = floor(LCK_P.Constant_Value_o);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 256.0);
    }

    LCK_B.DataTypeConversion_b = (uint8_T)(velocity_ms < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-velocity_ms : (int32_T)(uint8_T)velocity_ms);

    /* End of DataTypeConversion: '<S245>/Data Type Conversion' */

    /* RelationalOperator: '<S245>/Relational Operator3' incorporates:
     *  Inport: '<Root>/AVP_Info'
     */
    LCK_B.RelationalOperator3 = (LCK_U.AVP_Info.AVP_STATE ==
      LCK_B.DataTypeConversion_b);

    /* DataTypeConversion: '<S245>/Data Type Conversion1' incorporates:
     *  Constant: '<S245>/Constant1'
     */
    velocity_ms = floor(LCK_P.Constant1_Value_p);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 256.0);
    }

    LCK_B.DataTypeConversion1_a3 = (uint8_T)(velocity_ms < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-velocity_ms : (int32_T)(uint8_T)velocity_ms);

    /* End of DataTypeConversion: '<S245>/Data Type Conversion1' */

    /* RelationalOperator: '<S245>/Relational Operator1' incorporates:
     *  Inport: '<Root>/AVP_Info'
     */
    LCK_B.RelationalOperator1 = (LCK_U.AVP_Info.AVP_STATE ==
      LCK_B.DataTypeConversion1_a3);

    /* Logic: '<S245>/Logical Operator' */
    LCK_B.LogicalOperator = (LCK_B.RelationalOperator3 ||
      LCK_B.RelationalOperator1);

    /* Switch: '<S245>/Switch' */
    if (LCK_B.LogicalOperator1) {
      LCK_B.Switch_l = LCK_B.DataTypeConversion3_ey;
    } else {
      LCK_B.Switch_l = LCK_B.LogicalOperator;
    }

    /* End of Switch: '<S245>/Switch' */

    /* Sum: '<S8>/Sum1' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.Sum1 = LCK_U.LCK_LanSigInputs.VID_Lin_01_Range +
      LCK_U.LCK_LanSigInputs.VID_Lin_02_Range;

    /* RelationalOperator: '<S8>/Relational Operator2' incorporates:
     *  Constant: '<S8>/Constant59'
     */
    LCK_B.RelationalOperator2_f = (LCK_B.Sum1 <= LCK_P.Constant59_Value);

    /* RelationalOperator: '<S8>/Relational Operator1' incorporates:
     *  Constant: '<S8>/Constant1'
     *  Inport: '<Root>/Fus_Lane_Info'
     */
    LCK_B.RelationalOperator1_i =
      (LCK_U.Fus_Lane_Info.primaryObjTrajectory.quality >=
       LCK_P.Constant1_Value_m);

    /* Logic: '<S8>/Logical Operator23' */
    LCK_B.LogicalOperator23 = (LCK_B.RelationalOperator2_f &&
      LCK_B.RelationalOperator1_i);

    /* RelationalOperator: '<S244>/Relational Operator1' incorporates:
     *  Constant: '<S244>/Constant1'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator1_m = (LCK_U.LCK_LanSigInputs.VID_Lin_01_ProbExists <=
      LCK_P.Constant1_Value_e);

    /* Delay: '<S244>/Delay5' */
    LCK_B.Delay5 = LCK_DW.Delay5_DSTATE;

    /* RelationalOperator: '<S244>/Relational Operator20' incorporates:
     *  Constant: '<S244>/Constant29'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator20 = (LCK_U.LCK_LanSigInputs.VID_Lane_Width <=
      LCK_P.Constant29_Value);

    /* Switch: '<S244>/Switch1' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    if (LCK_B.RelationalOperator20) {
      LCK_B.Switch1_o = LCK_B.Delay5;
    } else {
      LCK_B.Switch1_o = LCK_U.LCK_LanSigInputs.VID_Lane_Width;
    }

    /* End of Switch: '<S244>/Switch1' */

    /* Gain: '<S244>/Gain4' */
    LCK_B.Gain4 = LCK_P.Gain4_Gain * LCK_B.Switch1_o;

    /* Sum: '<S244>/Sum5' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.Sum5 = LCK_U.LCK_LanSigInputs.VID_Lin_01_A0 + LCK_B.Gain4;

    /* Switch: '<S244>/Switch17' incorporates:
     *  Constant: '<S244>/Constant8'
     */
    if (LCK_B.RelationalOperator1_m) {
      LCK_B.Switch17 = LCK_P.Constant8_Value;
    } else {
      LCK_B.Switch17 = LCK_B.Sum5;
    }

    /* End of Switch: '<S244>/Switch17' */

    /* RelationalOperator: '<S244>/Relational Operator4' incorporates:
     *  Constant: '<S244>/Constant9'
     *  Inport: '<Root>/Ramp_Lane_Valid_Flag'
     */
    LCK_B.RelationalOperator4_i = (LCK_U.Ramp_Lane_Valid_Flag ==
      LCK_P.Constant9_Value);

    /* RelationalOperator: '<S244>/Relational Operator2' incorporates:
     *  Constant: '<S244>/Constant2'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator2_b = (LCK_U.LCK_LanSigInputs.VID_Lin_02_ProbExists <=
      LCK_P.Constant2_Value_l);

    /* Gain: '<S244>/Gain3' */
    LCK_B.Gain3 = LCK_P.Gain3_Gain * LCK_B.Switch1_o;

    /* Sum: '<S244>/Sum4' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.Sum4 = LCK_U.LCK_LanSigInputs.VID_Lin_02_A0 - LCK_B.Gain3;

    /* Switch: '<S244>/Switch8' incorporates:
     *  Constant: '<S244>/Constant5'
     *  Constant: '<S244>/Constant7'
     *  Switch: '<S244>/Switch4'
     */
    if (LCK_B.RelationalOperator2_b) {
      LCK_B.Switch8 = LCK_P.Constant7_Value;
      LCK_B.Switch4 = LCK_P.Constant5_Value_h;
    } else {
      LCK_B.Switch8 = LCK_B.Sum4;
      LCK_B.Switch4 = LCK_B.Switch8;
    }

    /* End of Switch: '<S244>/Switch8' */

    /* RelationalOperator: '<S244>/Relational Operator6' incorporates:
     *  Constant: '<S244>/Constant10'
     *  Inport: '<Root>/Ramp_Lane_Valid_Flag'
     */
    LCK_B.RelationalOperator6 = (LCK_U.Ramp_Lane_Valid_Flag ==
      LCK_P.Constant10_Value);

    /* Switch: '<S244>/Switch3' incorporates:
     *  Constant: '<S244>/Constant6'
     *  Switch: '<S244>/Switch6'
     */
    if (LCK_B.RelationalOperator1_m) {
      LCK_B.Switch3 = LCK_B.Switch4;
      LCK_B.Switch6 = LCK_P.Constant6_Value;
    } else {
      LCK_B.Switch3 = LCK_B.Switch17;
      LCK_B.Switch6 = LCK_B.Switch17;
    }

    /* End of Switch: '<S244>/Switch3' */

    /* Delay: '<S244>/Delay1' */
    LCK_B.Delay1_b = LCK_DW.Delay1_DSTATE_i;

    /* RelationalOperator: '<S244>/Relational Operator5' incorporates:
     *  Constant: '<S244>/Constant4'
     */
    LCK_B.RelationalOperator5_j = (LCK_B.Delay1_b == LCK_P.Constant4_Value_j);

    /* RelationalOperator: '<S244>/Relational Operator3' incorporates:
     *  Constant: '<S244>/Constant3'
     */
    LCK_B.RelationalOperator3_c = (LCK_B.Delay1_b == LCK_P.Constant3_Value_o);

    /* Sum: '<S244>/Sum3' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.Sum3 = LCK_U.LCK_LanSigInputs.VID_Lin_01_A0 +
      LCK_U.LCK_LanSigInputs.VID_Lin_02_A0;

    /* Gain: '<S244>/Gain' */
    LCK_B.Gain_g = LCK_P.Gain_Gain_pu * LCK_B.Sum3;

    /* Switch: '<S244>/Switch5' incorporates:
     *  Switch: '<S244>/Switch10'
     */
    if (LCK_B.RelationalOperator2_b) {
      LCK_B.Switch5 = LCK_B.Switch6;
      LCK_B.Switch10 = LCK_B.Switch17;
    } else {
      LCK_B.Switch5 = LCK_B.Switch8;
      LCK_B.Switch10 = LCK_B.Gain_g;
    }

    /* End of Switch: '<S244>/Switch5' */

    /* Switch: '<S244>/Switch9' */
    if (LCK_B.RelationalOperator1_m) {
      LCK_B.Switch9 = LCK_B.Switch8;
    } else {
      LCK_B.Switch9 = LCK_B.Switch10;
    }

    /* End of Switch: '<S244>/Switch9' */

    /* Switch: '<S244>/Switch7' */
    if (LCK_B.RelationalOperator3_c) {
      LCK_B.Switch7 = LCK_B.Switch5;
    } else {
      LCK_B.Switch7 = LCK_B.Switch9;
    }

    /* End of Switch: '<S244>/Switch7' */

    /* Switch: '<S244>/Switch2' */
    if (LCK_B.RelationalOperator5_j) {
      LCK_B.Switch2 = LCK_B.Switch3;
    } else {
      LCK_B.Switch2 = LCK_B.Switch7;
    }

    /* End of Switch: '<S244>/Switch2' */

    /* Switch: '<S244>/Switch19' */
    if (LCK_B.RelationalOperator6) {
      LCK_B.Switch19 = LCK_B.Switch8;
    } else {
      LCK_B.Switch19 = LCK_B.Switch2;
    }

    /* End of Switch: '<S244>/Switch19' */

    /* Switch: '<S244>/Switch18' */
    if (LCK_B.RelationalOperator4_i) {
      LCK_B.Switch18 = LCK_B.Switch17;
    } else {
      LCK_B.Switch18 = LCK_B.Switch19;
    }

    /* End of Switch: '<S244>/Switch18' */

    /* Switch: '<S8>/Switch7' incorporates:
     *  Inport: '<Root>/Fus_Lane_Info'
     */
    if (LCK_B.LogicalOperator23) {
      LCK_B.Switch7_d =
        LCK_U.Fus_Lane_Info.primaryObjTrajectory.curveFunc.latDistanceZeroOrderCoeff;
    } else {
      LCK_B.Switch7_d = LCK_B.Switch18;
    }

    /* End of Switch: '<S8>/Switch7' */

    /* Gain: '<S8>/Gain' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.Gain_hs = LCK_P.Gain_Gain_l * LCK_U.LCK_LanSigInputs.VID_Lane_Width;

    /* Sum: '<S8>/Subtract' */
    LCK_B.Subtract = LCK_B.Switch7_d - LCK_B.Gain_hs;

    /* RelationalOperator: '<S8>/Relational Operator3' incorporates:
     *  Constant: '<S8>/Constant2'
     *  Inport: '<Root>/Lane_Bias_Flag'
     */
    LCK_B.RelationalOperator3_k = (LCK_U.Lane_Bias_Flag ==
      LCK_P.Constant2_Value_a);

    /* Gain: '<S8>/Gain1' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.Gain1_i5 = LCK_P.Gain1_Gain_c * LCK_U.LCK_LanSigInputs.VID_Lane_Width;

    /* Sum: '<S8>/Subtract1' */
    LCK_B.Subtract1 = LCK_B.Switch7_d + LCK_B.Gain1_i5;

    /* RelationalOperator: '<S8>/Relational Operator4' incorporates:
     *  Constant: '<S8>/Constant3'
     *  Inport: '<Root>/Lane_Bias_Flag'
     */
    LCK_B.RelationalOperator4_n = (LCK_U.Lane_Bias_Flag ==
      LCK_P.Constant3_Value_k);

    /* Switch: '<S8>/Switch5' */
    if (LCK_B.RelationalOperator4_n) {
      LCK_B.Switch5_h = LCK_B.Subtract1;
    } else {
      LCK_B.Switch5_h = LCK_B.Switch7_d;
    }

    /* End of Switch: '<S8>/Switch5' */

    /* Switch: '<S8>/Switch4' */
    if (LCK_B.RelationalOperator3_k) {
      LCK_B.Switch4_a = LCK_B.Subtract;
    } else {
      LCK_B.Switch4_a = LCK_B.Switch5_h;
    }

    /* End of Switch: '<S8>/Switch4' */

    /* Switch: '<S8>/Switch9' */
    if (LCK_B.Switch_l) {
      LCK_B.Switch9_e = LCK_B.Product;
    } else {
      LCK_B.Switch9_e = (real32_T)LCK_B.Switch4_a;
    }

    /* End of Switch: '<S8>/Switch9' */

    /* DataTypeConversion: '<S8>/Data Type Conversion1' incorporates:
     *  Constant: '<S8>/AVP_C1_Coff'
     */
    LCK_B.DataTypeConversion1_e = (real32_T)LCK_P.AVP_C1_Coff_Value;

    /* Product: '<S8>/Product1' incorporates:
     *  Inport: '<Root>/AVP_Info'
     */
    LCK_B.Product1_c = LCK_U.AVP_Info.Tractory_c1 * LCK_B.DataTypeConversion1_e;

    /* RelationalOperator: '<S244>/Relational Operator7' incorporates:
     *  Constant: '<S244>/Constant12'
     *  Inport: '<Root>/Ramp_Lane_Valid_Flag'
     */
    LCK_B.RelationalOperator7 = (LCK_U.Ramp_Lane_Valid_Flag ==
      LCK_P.Constant12_Value);

    /* RelationalOperator: '<S244>/Relational Operator8' incorporates:
     *  Constant: '<S244>/Constant11'
     *  Inport: '<Root>/Ramp_Lane_Valid_Flag'
     */
    LCK_B.RelationalOperator8 = (LCK_U.Ramp_Lane_Valid_Flag ==
      LCK_P.Constant11_Value_b);

    /* Sum: '<S244>/Sum1' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.Sum1_p = LCK_U.LCK_LanSigInputs.VID_Lin_01_A1 +
      LCK_U.LCK_LanSigInputs.VID_Lin_02_A1;

    /* Gain: '<S244>/Gain1' */
    LCK_B.Gain1_h = LCK_P.Gain1_Gain_d * LCK_B.Sum1_p;

    /* Switch: '<S244>/Switch12' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    if (LCK_B.RelationalOperator2_b) {
      LCK_B.Switch12 = LCK_U.LCK_LanSigInputs.VID_Lin_01_A1;
    } else {
      LCK_B.Switch12 = LCK_B.Gain1_h;
    }

    /* End of Switch: '<S244>/Switch12' */

    /* Switch: '<S244>/Switch11' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    if (LCK_B.RelationalOperator1_m) {
      LCK_B.Switch11_i = LCK_U.LCK_LanSigInputs.VID_Lin_02_A1;
    } else {
      LCK_B.Switch11_i = LCK_B.Switch12;
    }

    /* End of Switch: '<S244>/Switch11' */

    /* Switch: '<S244>/Switch21' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    if (LCK_B.RelationalOperator8) {
      LCK_B.Switch21 = LCK_U.LCK_LanSigInputs.VID_Lin_01_A1;
    } else {
      LCK_B.Switch21 = LCK_B.Switch11_i;
    }

    /* End of Switch: '<S244>/Switch21' */

    /* Switch: '<S244>/Switch20' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    if (LCK_B.RelationalOperator7) {
      LCK_B.Switch20 = LCK_U.LCK_LanSigInputs.VID_Lin_02_A1;
    } else {
      LCK_B.Switch20 = LCK_B.Switch21;
    }

    /* End of Switch: '<S244>/Switch20' */

    /* Switch: '<S8>/Switch1' incorporates:
     *  Inport: '<Root>/Fus_Lane_Info'
     */
    if (LCK_B.LogicalOperator23) {
      LCK_B.Switch1_eu =
        LCK_U.Fus_Lane_Info.primaryObjTrajectory.curveFunc.latDistanceFirstOrderCoeff;
    } else {
      LCK_B.Switch1_eu = LCK_B.Switch20;
    }

    /* End of Switch: '<S8>/Switch1' */

    /* Switch: '<S8>/Switch10' */
    if (LCK_B.Switch_l) {
      LCK_B.Switch10_g = LCK_B.Product1_c;
    } else {
      LCK_B.Switch10_g = LCK_B.Switch1_eu;
    }

    /* End of Switch: '<S8>/Switch10' */

    /* DataTypeConversion: '<S6>/Data Type Conversion15' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.DataTypeConversion15 = LCK_U.LCK_LanSigInputs.VID_Lane_Width;

    /* DataTypeConversion: '<S6>/Data Type Conversion16' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.DataTypeConversion16 = LCK_U.LCK_VehSigInputs.Vehicle_Speed;

    /* Switch: '<S166>/Switch5' incorporates:
     *  Constant: '<S111>/Constant19'
     *  Constant: '<S166>/Constant19'
     *  Constant: '<S166>/k_LCK_VisionOnly'
     */
    if (k_LCK_VisionOnly >= LCK_P.Switch5_Threshold) {
      LCK_B.Switch5_k = LCK_P.Constant19_Value;
    } else {
      LCK_B.Switch5_k = LCK_P.Constant19_Value_e;
    }

    /* End of Switch: '<S166>/Switch5' */

    /* RelationalOperator: '<S152>/Relational Operator' incorporates:
     *  Constant: '<S152>/Constant6'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator = (LCK_U.LCK_VehSigInputs.LDWLKASwReq ==
      LCK_P.Constant6_Value_a);

    /* Logic: '<S161>/Logical Operator' */
    LCK_B.LogicalOperator_c = ((LCK_B.Switch5_k != 0.0) ||
      LCK_B.RelationalOperator);

    /* Delay: '<S242>/Delay' */
    LCK_B.Delay = LCK_DW.Delay_DSTATE;

    /* RelationalOperator: '<S242>/Relational Operator27' incorporates:
     *  Constant: '<S242>/Constant37'
     */
    LCK_B.RelationalOperator27 = (LCK_B.Delay >= LCK_P.Constant37_Value);

    /* UnitDelay: '<S240>/Unit Delay' */
    LCK_B.UnitDelay = LCK_DW.UnitDelay_DSTATE;

    /* Sum: '<S246>/Sum2' incorporates:
     *  Constant: '<S8>/Constant42'
     *  Constant: '<S8>/k_LCK_TinCon_LaneProbFlt'
     */
    LCK_B.Sum2 = ML_TIME_MSEC + k_LCK_TinCon_LaneProbFlt;

    /* Product: '<S246>/Product1' incorporates:
     *  Constant: '<S8>/Constant42'
     */
    LCK_B.Product1_h = ML_TIME_MSEC / LCK_B.Sum2;

    /* Sum: '<S240>/Sum' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.Sum_n = LCK_U.LCK_LanSigInputs.VID_Lin_01_ProbExists - LCK_B.UnitDelay;

    /* Product: '<S240>/Product' */
    LCK_B.Product_m = LCK_B.Product1_h * LCK_B.Sum_n;

    /* Saturate: '<S240>/Saturation' incorporates:
     *  Sum: '<S240>/Sum1'
     */
    LCK_B.Sum1_n = LCK_B.Product_m + LCK_B.UnitDelay;
    if (LCK_B.Sum1_n > LCK_P.Saturation_UpperSat_c) {
      LCK_B.Saturation = LCK_P.Saturation_UpperSat_c;
    } else if (LCK_B.Sum1_n < LCK_P.Saturation_LowerSat_o) {
      LCK_B.Saturation = LCK_P.Saturation_LowerSat_o;
    } else {
      LCK_B.Saturation = LCK_B.Sum1_n;
    }

    /* End of Saturate: '<S240>/Saturation' */

    /* RelationalOperator: '<S237>/Relational Operator' incorporates:
     *  Constant: '<S237>/Constant'
     */
    LCK_B.RelationalOperator_l = (LCK_B.Saturation >= k_LCK_SPPConfHigh_ProbThre);

    /* UnitDelay: '<S241>/Unit Delay' */
    LCK_B.UnitDelay_a = LCK_DW.UnitDelay_DSTATE_a;

    /* Sum: '<S247>/Sum2' incorporates:
     *  Constant: '<S8>/Constant30'
     *  Constant: '<S8>/k_LCK_TinCon_LaneProbFlt1'
     */
    LCK_B.Sum2_j = ML_TIME_MSEC + k_LCK_TinCon_LaneProbFlt;

    /* Product: '<S247>/Product1' incorporates:
     *  Constant: '<S8>/Constant30'
     */
    LCK_B.Product1_n = ML_TIME_MSEC / LCK_B.Sum2_j;

    /* Sum: '<S241>/Sum' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.Sum_i = LCK_U.LCK_LanSigInputs.VID_Lin_02_ProbExists -
      LCK_B.UnitDelay_a;

    /* Product: '<S241>/Product' */
    LCK_B.Product_a = LCK_B.Product1_n * LCK_B.Sum_i;

    /* Saturate: '<S241>/Saturation' incorporates:
     *  Sum: '<S241>/Sum1'
     */
    LCK_B.Sum1_o = LCK_B.Product_a + LCK_B.UnitDelay_a;
    if (LCK_B.Sum1_o > LCK_P.Saturation_UpperSat_l) {
      LCK_B.Saturation_k = LCK_P.Saturation_UpperSat_l;
    } else if (LCK_B.Sum1_o < LCK_P.Saturation_LowerSat_h) {
      LCK_B.Saturation_k = LCK_P.Saturation_LowerSat_h;
    } else {
      LCK_B.Saturation_k = LCK_B.Sum1_o;
    }

    /* End of Saturate: '<S241>/Saturation' */

    /* RelationalOperator: '<S237>/Relational Operator3' incorporates:
     *  Constant: '<S237>/Constant7'
     */
    LCK_B.RelationalOperator3_m = (LCK_B.Saturation_k >=
      k_LCK_SPPConfHigh_ProbThre);

    /* Logic: '<S237>/Logical Operator' */
    LCK_B.LogicalOperator_o = (LCK_B.RelationalOperator_l &&
      LCK_B.RelationalOperator3_m);

    /* RelationalOperator: '<S237>/Relational Operator1' incorporates:
     *  Constant: '<S237>/Constant2'
     */
    LCK_B.RelationalOperator1_mb = (LCK_B.Saturation >=
      k_LCK_SPPConfMedHigh_ProbThre);

    /* RelationalOperator: '<S237>/Relational Operator4' incorporates:
     *  Constant: '<S237>/Constant8'
     */
    LCK_B.RelationalOperator4_f = (LCK_B.Saturation_k >=
      k_LCK_SPPConfMedHigh_ProbThre);

    /* Logic: '<S237>/Logical Operator1' */
    LCK_B.LogicalOperator1_f = (LCK_B.RelationalOperator1_mb &&
      LCK_B.RelationalOperator4_f);

    /* RelationalOperator: '<S237>/Relational Operator2' incorporates:
     *  Constant: '<S237>/Constant4'
     */
    LCK_B.RelationalOperator2_m = (LCK_B.Saturation >= k_LCK_SPPConfMed_ProbThre);

    /* RelationalOperator: '<S237>/Relational Operator5' incorporates:
     *  Constant: '<S237>/Constant9'
     */
    LCK_B.RelationalOperator5_j4 = (LCK_B.Saturation_k >=
      k_LCK_SPPConfMed_ProbThre);

    /* Logic: '<S237>/Logical Operator2' */
    LCK_B.LogicalOperator2 = (LCK_B.RelationalOperator2_m &&
      LCK_B.RelationalOperator5_j4);

    /* Switch: '<S237>/Switch2' incorporates:
     *  Constant: '<S237>/Constant5'
     *  Constant: '<S237>/Constant6'
     */
    if (LCK_B.LogicalOperator2) {
      LCK_B.Switch2_a = LCK_P.Constant5_Value_d;
    } else {
      LCK_B.Switch2_a = LCK_P.Constant6_Value_l;
    }

    /* End of Switch: '<S237>/Switch2' */

    /* Switch: '<S237>/Switch1' incorporates:
     *  Constant: '<S237>/Constant3'
     */
    if (LCK_B.LogicalOperator1_f) {
      LCK_B.Switch1 = LCK_P.Constant3_Value_kt;
    } else {
      LCK_B.Switch1 = LCK_B.Switch2_a;
    }

    /* End of Switch: '<S237>/Switch1' */

    /* Switch: '<S237>/Switch' incorporates:
     *  Constant: '<S237>/Constant1'
     */
    if (LCK_B.LogicalOperator_o) {
      LCK_B.Switch = LCK_P.Constant1_Value_f;
    } else {
      LCK_B.Switch = LCK_B.Switch1;
    }

    /* End of Switch: '<S237>/Switch' */

    /* RelationalOperator: '<S242>/Relational Operator24' incorporates:
     *  Constant: '<S242>/Constant34'
     */
    LCK_B.RelationalOperator24 = (LCK_B.Switch < LCK_P.Constant34_Value);

    /* Logic: '<S242>/Logical Operator22' */
    LCK_B.LogicalOperator22 = (LCK_B.RelationalOperator27 &&
      LCK_B.RelationalOperator24);

    /* RelationalOperator: '<S242>/Relational Operator45' incorporates:
     *  Constant: '<S242>/Constant56'
     */
    LCK_B.RelationalOperator45 = (LCK_B.Switch >= LCK_P.Constant56_Value);

    /* Chart: '<S248>/signal_sustain' incorporates:
     *  Constant: '<S242>/Constant53'
     */
    LCK_signal_sustain(LCK_B.LogicalOperator22, LCK_P.Constant53_Value,
                       LCK_B.RelationalOperator45, &LCK_B.sf_signal_sustain_k,
                       &LCK_DW.sf_signal_sustain_k);

    /* Delay: '<S242>/Delay1' */
    LCK_B.Delay1_k = LCK_DW.Delay1_DSTATE_c;

    /* RelationalOperator: '<S242>/Relational Operator29' incorporates:
     *  Constant: '<S242>/Constant39'
     */
    LCK_B.RelationalOperator29 = (LCK_B.Delay1_k >= LCK_P.Constant39_Value);

    /* RelationalOperator: '<S242>/Relational Operator26' incorporates:
     *  Constant: '<S242>/Constant36'
     */
    LCK_B.RelationalOperator26 = (LCK_B.Switch < LCK_P.Constant36_Value);

    /* Logic: '<S242>/Logical Operator23' */
    LCK_B.LogicalOperator23_p = (LCK_B.RelationalOperator29 &&
      LCK_B.RelationalOperator26);

    /* RelationalOperator: '<S242>/Relational Operator46' incorporates:
     *  Constant: '<S242>/Constant57'
     */
    LCK_B.RelationalOperator46 = (LCK_B.Switch >= LCK_P.Constant57_Value);

    /* Chart: '<S249>/signal_sustain' incorporates:
     *  Constant: '<S242>/Constant54'
     */
    LCK_signal_sustain(LCK_B.LogicalOperator23_p, LCK_P.Constant54_Value,
                       LCK_B.RelationalOperator46, &LCK_B.sf_signal_sustain_c,
                       &LCK_DW.sf_signal_sustain_c);

    /* RelationalOperator: '<S242>/Relational Operator25' incorporates:
     *  Constant: '<S242>/Constant35'
     */
    LCK_B.RelationalOperator25 = (LCK_B.Saturation <
      k_LCK_SPPConfMedHigh_ProbThre);

    /* RelationalOperator: '<S242>/Relational Operator39' incorporates:
     *  Constant: '<S242>/Constant50'
     */
    LCK_B.RelationalOperator39 = (LCK_B.Saturation_k >=
      k_LCK_SPPConfMedHigh_ProbThre);

    /* RelationalOperator: '<S242>/Relational Operator42' incorporates:
     *  Constant: '<S242>/Constant61'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator42 = (LCK_P.Constant61_Value >
      LCK_U.LCK_LanSigInputs.VID_Lin_02_Type);

    /* RelationalOperator: '<S242>/Relational Operator41' incorporates:
     *  Constant: '<S242>/Constant55'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator41 = (LCK_U.LCK_LanSigInputs.VID_Lin_02_Type >
      LCK_P.Constant55_Value);

    /* Logic: '<S242>/Logical Operator24' */
    LCK_B.LogicalOperator24 = (LCK_B.RelationalOperator42 &&
      LCK_B.RelationalOperator41);

    /* Logic: '<S242>/Logical Operator15' */
    LCK_B.LogicalOperator15 = ((LCK_B.sf_signal_sustain_k.sustain_value != 0.0F)
      && LCK_B.RelationalOperator25 && LCK_B.RelationalOperator39 &&
      LCK_B.LogicalOperator24);

    /* Delay: '<S243>/Delay5' */
    LCK_B.Delay5_i = LCK_DW.Delay5_DSTATE_n;

    /* RelationalOperator: '<S243>/Relational Operator20' incorporates:
     *  Constant: '<S243>/Constant29'
     */
    LCK_B.RelationalOperator20_g = (LCK_B.Delay5_i == LCK_P.Constant29_Value_k);

    /* Logic: '<S243>/Logical Operator27' */
    LCK_B.LogicalOperator27 = (LCK_B.LogicalOperator15 &&
      LCK_B.RelationalOperator20_g);

    /* RelationalOperator: '<S242>/Relational Operator28' incorporates:
     *  Constant: '<S242>/Constant38'
     */
    LCK_B.RelationalOperator28 = (LCK_B.Saturation_k <
      k_LCK_SPPConfMedHigh_ProbThre);

    /* RelationalOperator: '<S242>/Relational Operator40' incorporates:
     *  Constant: '<S242>/Constant51'
     */
    LCK_B.RelationalOperator40 = (LCK_B.Saturation >=
      k_LCK_SPPConfMedHigh_ProbThre);

    /* RelationalOperator: '<S242>/Relational Operator44' incorporates:
     *  Constant: '<S242>/Constant63'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator44 = (LCK_P.Constant63_Value >
      LCK_U.LCK_LanSigInputs.VID_Lin_01_Type);

    /* RelationalOperator: '<S242>/Relational Operator43' incorporates:
     *  Constant: '<S242>/Constant62'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator43 = (LCK_U.LCK_LanSigInputs.VID_Lin_01_Type >
      LCK_P.Constant62_Value);

    /* Logic: '<S242>/Logical Operator31' */
    LCK_B.LogicalOperator31 = (LCK_B.RelationalOperator44 &&
      LCK_B.RelationalOperator43);

    /* Logic: '<S242>/Logical Operator16' */
    LCK_B.LogicalOperator16 = ((LCK_B.sf_signal_sustain_c.sustain_value != 0.0F)
      && LCK_B.RelationalOperator28 && LCK_B.RelationalOperator40 &&
      LCK_B.LogicalOperator31);

    /* Logic: '<S243>/Logical Operator28' */
    LCK_B.LogicalOperator28 = (LCK_B.RelationalOperator20_g &&
      LCK_B.LogicalOperator16);

    /* Logic: '<S239>/Logical Operator25' */
    LCK_B.LogicalOperator25 = (LCK_B.LogicalOperator27 ||
      LCK_B.LogicalOperator28);

    /* RelationalOperator: '<S238>/Relational Operator6' incorporates:
     *  Constant: '<S238>/Constant10'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator6_e = (LCK_U.LCK_LanSigInputs.VID_Lin_01_Type ==
      LCK_P.Constant10_Value_h);

    /* RelationalOperator: '<S238>/Relational Operator7' incorporates:
     *  Constant: '<S238>/Constant11'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator7_o = (LCK_U.LCK_LanSigInputs.VID_Lin_02_Type ==
      LCK_P.Constant11_Value_c);

    /* Logic: '<S238>/Logical Operator3' */
    LCK_B.LogicalOperator3 = (LCK_B.RelationalOperator6_e &&
      LCK_B.RelationalOperator7_o);

    /* RelationalOperator: '<S238>/Relational Operator10' incorporates:
     *  Constant: '<S238>/Constant15'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator10 = (LCK_P.Constant15_Value >
      LCK_U.LCK_LanSigInputs.VID_Lin_01_Type);

    /* RelationalOperator: '<S238>/Relational Operator8' incorporates:
     *  Constant: '<S238>/Constant13'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator8_g = (LCK_U.LCK_LanSigInputs.VID_Lin_01_Type >
      LCK_P.Constant13_Value);

    /* Logic: '<S238>/Logical Operator4' */
    LCK_B.LogicalOperator4 = (LCK_B.RelationalOperator10 &&
      LCK_B.RelationalOperator8_g);

    /* RelationalOperator: '<S238>/Relational Operator9' incorporates:
     *  Constant: '<S238>/Constant16'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator9 = (LCK_P.Constant16_Value <=
      LCK_U.LCK_LanSigInputs.VID_Lin_02_Type);

    /* RelationalOperator: '<S238>/Relational Operator11' incorporates:
     *  Constant: '<S238>/Constant14'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator11 = (LCK_U.LCK_LanSigInputs.VID_Lin_02_Type ==
      LCK_P.Constant14_Value);

    /* Logic: '<S238>/Logical Operator5' */
    LCK_B.LogicalOperator5 = (LCK_B.RelationalOperator9 ||
      LCK_B.RelationalOperator11);

    /* Logic: '<S238>/Logical Operator6' */
    LCK_B.LogicalOperator6 = (LCK_B.LogicalOperator4 && LCK_B.LogicalOperator5);

    /* RelationalOperator: '<S238>/Relational Operator12' incorporates:
     *  Constant: '<S238>/Constant20'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator12 = (LCK_P.Constant20_Value >
      LCK_U.LCK_LanSigInputs.VID_Lin_02_Type);

    /* RelationalOperator: '<S238>/Relational Operator14' incorporates:
     *  Constant: '<S238>/Constant18'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator14 = (LCK_U.LCK_LanSigInputs.VID_Lin_02_Type >
      LCK_P.Constant18_Value);

    /* Logic: '<S238>/Logical Operator7' */
    LCK_B.LogicalOperator7 = (LCK_B.RelationalOperator12 &&
      LCK_B.RelationalOperator14);

    /* RelationalOperator: '<S238>/Relational Operator15' incorporates:
     *  Constant: '<S238>/Constant21'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator15 = (LCK_P.Constant21_Value <=
      LCK_U.LCK_LanSigInputs.VID_Lin_01_Type);

    /* RelationalOperator: '<S238>/Relational Operator13' incorporates:
     *  Constant: '<S238>/Constant19'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator13 = (LCK_U.LCK_LanSigInputs.VID_Lin_01_Type ==
      LCK_P.Constant19_Value_k);

    /* Logic: '<S238>/Logical Operator8' */
    LCK_B.LogicalOperator8 = (LCK_B.RelationalOperator15 ||
      LCK_B.RelationalOperator13);

    /* Logic: '<S238>/Logical Operator9' */
    LCK_B.LogicalOperator9 = (LCK_B.LogicalOperator7 && LCK_B.LogicalOperator8);

    /* RelationalOperator: '<S238>/Relational Operator16' incorporates:
     *  Constant: '<S238>/Constant25'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator16 = (LCK_P.Constant25_Value >
      LCK_U.LCK_LanSigInputs.VID_Lin_01_Type);

    /* RelationalOperator: '<S238>/Relational Operator18' incorporates:
     *  Constant: '<S238>/Constant23'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator18 = (LCK_U.LCK_LanSigInputs.VID_Lin_01_Type >
      LCK_P.Constant23_Value);

    /* Logic: '<S238>/Logical Operator10' */
    LCK_B.LogicalOperator10 = (LCK_B.RelationalOperator16 &&
      LCK_B.RelationalOperator18);

    /* RelationalOperator: '<S238>/Relational Operator19' incorporates:
     *  Constant: '<S238>/Constant26'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator19 = (LCK_P.Constant26_Value >
      LCK_U.LCK_LanSigInputs.VID_Lin_02_Type);

    /* RelationalOperator: '<S238>/Relational Operator17' incorporates:
     *  Constant: '<S238>/Constant24'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator17 = (LCK_U.LCK_LanSigInputs.VID_Lin_02_Type >
      LCK_P.Constant24_Value);

    /* Logic: '<S238>/Logical Operator11' */
    LCK_B.LogicalOperator11 = (LCK_B.RelationalOperator19 &&
      LCK_B.RelationalOperator17);

    /* Logic: '<S238>/Logical Operator12' */
    LCK_B.LogicalOperator12 = (LCK_B.LogicalOperator10 &&
      LCK_B.LogicalOperator11);

    /* Switch: '<S238>/Switch6' incorporates:
     *  Constant: '<S238>/Constant27'
     *  Constant: '<S238>/Constant28'
     */
    if (LCK_B.LogicalOperator12) {
      LCK_B.Switch6_a = LCK_P.Constant27_Value;
    } else {
      LCK_B.Switch6_a = LCK_P.Constant28_Value;
    }

    /* End of Switch: '<S238>/Switch6' */

    /* Switch: '<S238>/Switch5' incorporates:
     *  Constant: '<S238>/Constant22'
     */
    if (LCK_B.LogicalOperator9) {
      LCK_B.Switch5_m = LCK_P.Constant22_Value;
    } else {
      LCK_B.Switch5_m = LCK_B.Switch6_a;
    }

    /* End of Switch: '<S238>/Switch5' */

    /* Switch: '<S238>/Switch4' incorporates:
     *  Constant: '<S238>/Constant17'
     */
    if (LCK_B.LogicalOperator6) {
      LCK_B.Switch4_c = LCK_P.Constant17_Value;
    } else {
      LCK_B.Switch4_c = LCK_B.Switch5_m;
    }

    /* End of Switch: '<S238>/Switch4' */

    /* Switch: '<S238>/Switch3' incorporates:
     *  Constant: '<S238>/Constant12'
     */
    if (LCK_B.LogicalOperator3) {
      LCK_B.Switch3_p = LCK_P.Constant12_Value_d;
    } else {
      LCK_B.Switch3_p = LCK_B.Switch4_c;
    }

    /* End of Switch: '<S238>/Switch3' */

    /* Switch: '<S239>/Switch8' incorporates:
     *  Constant: '<S239>/Constant60'
     */
    if (LCK_B.LogicalOperator25) {
      LCK_B.Switch8_j = LCK_P.Constant60_Value;
    } else {
      LCK_B.Switch8_j = LCK_B.Switch3_p;
    }

    /* End of Switch: '<S239>/Switch8' */

    /* DataTypeConversion: '<S239>/Data Type Conversion1' */
    LCK_B.DataTypeConversion1_a = (real32_T)LCK_B.Switch8_j;

    /* Switch: '<S8>/Switch8' incorporates:
     *  Constant: '<S8>/Constant5'
     */
    if (LCK_B.LogicalOperator23) {
      LCK_B.Switch8_i = LCK_B.DataTypeConversion1_a;
    } else {
      LCK_B.Switch8_i = (real32_T)LCK_P.Constant5_Value_m;
    }

    /* End of Switch: '<S8>/Switch8' */

    /* Switch: '<S8>/Switch14' */
    if (LCK_B.Switch_l) {
      /* Outport: '<Root>/SPP_Type' incorporates:
       *  Constant: '<S8>/Constant7'
       */
      LCK_Y.SPP_Type = (real32_T)LCK_P.Constant7_Value_n;
    } else {
      /* Outport: '<Root>/SPP_Type' */
      LCK_Y.SPP_Type = LCK_B.Switch8_i;
    }

    /* End of Switch: '<S8>/Switch14' */

    /* RelationalOperator: '<S164>/Relational Operator202' incorporates:
     *  Constant: '<S164>/Constant4'
     *  Outport: '<Root>/SPP_Type'
     */
    LCK_B.RelationalOperator202 = (LCK_Y.SPP_Type != TJA_SP_TYPE_POONLY);

    /* Logic: '<S164>/Logical Operator150' incorporates:
     *  Constant: '<S164>/Constant7'
     */
    LCK_B.LogicalOperator150 = (LCK_B.RelationalOperator202 ||
      (k_LCK_Enable_POOnly != 0.0F));

    /* RelationalOperator: '<S164>/Relational Operator24' incorporates:
     *  Constant: '<S164>/k_LCK_SPTyp_UpLmt_Idl2Rdy1'
     *  Outport: '<Root>/SPP_Type'
     */
    LCK_B.RelationalOperator24_g = (LCK_Y.SPP_Type <= k_LCK_SPTyp_UpLmt_Idl2Rdy);

    /* RelationalOperator: '<S164>/Relational Operator43' incorporates:
     *  Constant: '<S164>/k_LCK_SPTyp_LowLmt_Idl2Rdy1'
     *  Outport: '<Root>/SPP_Type'
     */
    LCK_B.RelationalOperator43_j = (LCK_Y.SPP_Type >= k_LCK_SPTyp_LowLmt_Idl2Rdy);

    /* Switch: '<S239>/Switch7' incorporates:
     *  Constant: '<S239>/Constant59'
     */
    if (LCK_B.LogicalOperator25) {
      LCK_B.Switch7_f = LCK_P.Constant59_Value_j;
    } else {
      LCK_B.Switch7_f = LCK_B.Switch;
    }

    /* End of Switch: '<S239>/Switch7' */

    /* DataTypeConversion: '<S239>/Data Type Conversion' */
    LCK_B.DataTypeConversion_i = (real32_T)LCK_B.Switch7_f;

    /* Switch: '<S8>/Switch6' incorporates:
     *  Constant: '<S8>/Constant4'
     */
    if (LCK_B.LogicalOperator23) {
      LCK_B.Switch6_f = LCK_B.DataTypeConversion_i;
    } else {
      LCK_B.Switch6_f = (real32_T)LCK_P.Constant4_Value_h;
    }

    /* End of Switch: '<S8>/Switch6' */

    /* Switch: '<S8>/Switch13' incorporates:
     *  Constant: '<S8>/Constant6'
     */
    if (LCK_B.Switch_l) {
      LCK_B.Switch13 = (real32_T)LCK_P.Constant6_Value_b;
    } else {
      LCK_B.Switch13 = LCK_B.Switch6_f;
    }

    /* End of Switch: '<S8>/Switch13' */

    /* RelationalOperator: '<S164>/Relational Operator25' incorporates:
     *  Constant: '<S164>/Constant48'
     */
    LCK_B.RelationalOperator25_h = (LCK_B.Switch13 > TJA_SP_CONF_MEDIUM);

    /* Logic: '<S164>/Logical Operator50' */
    LCK_B.LogicalOperator50 = (LCK_B.LogicalOperator150 &&
      LCK_B.RelationalOperator24_g && LCK_B.RelationalOperator43_j &&
      LCK_B.RelationalOperator25_h);

    /* DataTypeConversion: '<S164>/Data Type Conversion24' */
    LCK_B.DataTypeConversion24 = LCK_B.LogicalOperator50;

    /* Chart: '<S184>/Delay_Trig' incorporates:
     *  Constant: '<S167>/k_LCK_SPLowSpd_DlyTm_Idl2Rdy'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion24, k_LCK_SPLowSpd_DlyTm_Idl2Rdy,
                   &LCK_B.sf_Delay_Trig_o, &LCK_DW.sf_Delay_Trig_o);

    /* RelationalOperator: '<S164>/Relational Operator28' incorporates:
     *  Constant: '<S164>/Constant49'
     *  Outport: '<Root>/SPP_Type'
     */
    LCK_B.RelationalOperator28_k = (TJA_SP_TYPE_BLMONLY == LCK_Y.SPP_Type);

    /* RelationalOperator: '<S164>/Relational Operator50' incorporates:
     *  Constant: '<S164>/Constant60'
     *  Outport: '<Root>/SPP_Type'
     */
    LCK_B.RelationalOperator50 = (LCK_Y.SPP_Type == TJA_SP_TYPE_POBLM);

    /* Logic: '<S164>/Logical Operator53' */
    LCK_B.LogicalOperator53 = (LCK_B.RelationalOperator28_k ||
      LCK_B.RelationalOperator50);

    /* Logic: '<S164>/Logical Operator51' */
    LCK_B.LogicalOperator51 = (LCK_B.RelationalOperator25_h &&
      LCK_B.LogicalOperator53);

    /* DataTypeConversion: '<S164>/Data Type Conversion23' */
    LCK_B.DataTypeConversion23 = LCK_B.LogicalOperator51;

    /* Chart: '<S185>/Delay_Trig' incorporates:
     *  Constant: '<S167>/k_LCK_SPHighSpd_DlyTm_Idl2Rdy'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion23, k_LCK_SPHighSpd_DlyTm_Idl2Rdy,
                   &LCK_B.sf_Delay_Trig_kt, &LCK_DW.sf_Delay_Trig_kt);

    /* RelationalOperator: '<S167>/Relational Operator9' incorporates:
     *  Constant: '<S167>/k_LCK_LnWidth_LowLmt_Idl2Rdy'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator9_c = (LCK_U.LCK_LanSigInputs.VID_Lane_Width >=
      k_LCK_LnWidth_LowLmt_Idl2Rdy);

    /* DataTypeConversion: '<S167>/Data Type Conversion1' */
    LCK_B.DataTypeConversion1_i = LCK_B.RelationalOperator9_c;

    /* Chart: '<S186>/Delay_Trig' incorporates:
     *  Constant: '<S167>/k_LCK_LnWidth_DlyTm_Idl2Rdy'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion1_i, k_LCK_LnWidth_DlyTm_Idl2Rdy,
                   &LCK_B.sf_Delay_Trig_c, &LCK_DW.sf_Delay_Trig_c);

    /* RelationalOperator: '<S167>/Relational Operator10' incorporates:
     *  Constant: '<S167>/k_LCK_LnWidth_UpLmt_Idl2Rdy'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator10_c = (LCK_U.LCK_LanSigInputs.VID_Lane_Width <=
      k_LCK_LnWidth_UpLmt_Idl2Rdy);

    /* DataTypeConversion: '<S167>/Data Type Conversion21' */
    LCK_B.DataTypeConversion21 = LCK_B.RelationalOperator10_c;

    /* Chart: '<S187>/Delay_Trig' incorporates:
     *  Constant: '<S167>/k_LCK_LnWidth_DlyTm_Idl2Rdy1'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion21, k_LCK_LnWidth_DlyTm_Idl2Rdy,
                   &LCK_B.sf_Delay_Trig_i, &LCK_DW.sf_Delay_Trig_i);

    /* DataTypeConversion: '<S8>/Data Type Conversion2' incorporates:
     *  Constant: '<S8>/AVP_C2_Coff'
     */
    LCK_B.DataTypeConversion2_l = (real32_T)LCK_P.AVP_C2_Coff_Value;

    /* Product: '<S8>/Product2' incorporates:
     *  Inport: '<Root>/AVP_Info'
     */
    LCK_B.Product2 = LCK_U.AVP_Info.Tractory_c2 * LCK_B.DataTypeConversion2_l;

    /* Sum: '<S244>/Sum2' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.Sum2_b = LCK_U.LCK_LanSigInputs.VID_Lin_01_A2 +
      LCK_U.LCK_LanSigInputs.VID_Lin_02_A2;

    /* Gain: '<S244>/Gain2' */
    LCK_B.Gain2 = LCK_P.Gain2_Gain * LCK_B.Sum2_b;

    /* Switch: '<S244>/Switch14' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    if (LCK_B.RelationalOperator2_b) {
      LCK_B.Switch14_n = LCK_U.LCK_LanSigInputs.VID_Lin_01_A2;
    } else {
      LCK_B.Switch14_n = LCK_B.Gain2;
    }

    /* End of Switch: '<S244>/Switch14' */

    /* Switch: '<S244>/Switch13' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    if (LCK_B.RelationalOperator1_m) {
      LCK_B.Switch13_o = LCK_U.LCK_LanSigInputs.VID_Lin_02_A2;
    } else {
      LCK_B.Switch13_o = LCK_B.Switch14_n;
    }

    /* End of Switch: '<S244>/Switch13' */

    /* Switch: '<S8>/Switch2' incorporates:
     *  Inport: '<Root>/Fus_Lane_Info'
     */
    if (LCK_B.LogicalOperator23) {
      LCK_B.Switch2_b =
        LCK_U.Fus_Lane_Info.primaryObjTrajectory.curveFunc.latDistanceSecondOrderCoeff;
    } else {
      LCK_B.Switch2_b = LCK_B.Switch13_o;
    }

    /* End of Switch: '<S8>/Switch2' */

    /* Switch: '<S8>/Switch11' */
    if (LCK_B.Switch_l) {
      LCK_B.Switch11_h = LCK_B.Product2;
    } else {
      LCK_B.Switch11_h = LCK_B.Switch2_b;
    }

    /* End of Switch: '<S8>/Switch11' */

    /* Abs: '<S167>/Abs1' */
    LCK_B.Abs1 = (real32_T)fabs(LCK_B.Switch11_h);

    /* Product: '<S167>/Divide' incorporates:
     *  Constant: '<S167>/Constant4'
     *  Constant: '<S167>/k_LCK_LM_ROC_Idl2Rdy'
     */
    LCK_B.Divide = LCK_P.Constant4_Value_e / k_LCK_LM_ROC_Idl2Rdy;

    /* Gain: '<S167>/Gain' */
    LCK_B.Gain = LCK_P.Gain_Gain * LCK_B.Divide;

    /* RelationalOperator: '<S167>/Relational Operator11' */
    LCK_B.RelationalOperator11_h = (LCK_B.Abs1 < LCK_B.Gain);

    /* DataTypeConversion: '<S167>/Data Type Conversion3' */
    LCK_B.DataTypeConversion3_j = LCK_B.RelationalOperator11_h;

    /* Chart: '<S188>/Delay_Trig' incorporates:
     *  Constant: '<S167>/k_LCK_LM_ROC_DlyTm_Idl2Rdy'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion3_j, k_LCK_LM_ROC_DlyTm_Idl2Rdy,
                   &LCK_B.sf_Delay_Trig_b, &LCK_DW.sf_Delay_Trig_b);

    /* UnitDelay: '<S141>/Unit Delay' */
    LCK_B.UnitDelay_n = LCK_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S145>/Sum2' incorporates:
     *  Constant: '<S114>/ML_TIME_MSEC'
     *  Constant: '<S114>/k_driver_appl_torque_filt'
     */
    LCK_B.Sum2_g = ML_TIME_MSEC + k_driver_appl_torque_filt;

    /* Product: '<S145>/Product1' incorporates:
     *  Constant: '<S114>/ML_TIME_MSEC'
     */
    LCK_B.Product1_p = ML_TIME_MSEC / LCK_B.Sum2_g;

    /* Sum: '<S141>/Sum' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.Sum_f = LCK_U.LCK_VehSigInputs.Steer_Torq - LCK_B.UnitDelay_n;

    /* Product: '<S141>/Product' */
    LCK_B.Product_i = LCK_B.Product1_p * LCK_B.Sum_f;

    /* Saturate: '<S141>/Saturation' incorporates:
     *  Sum: '<S141>/Sum1'
     */
    LCK_B.Sum1_pw = LCK_B.Product_i + LCK_B.UnitDelay_n;
    if (LCK_B.Sum1_pw > LCK_P.Saturation_UpperSat_cp) {
      LCK_B.Saturation_b = LCK_P.Saturation_UpperSat_cp;
    } else if (LCK_B.Sum1_pw < LCK_P.Saturation_LowerSat_n) {
      LCK_B.Saturation_b = LCK_P.Saturation_LowerSat_n;
    } else {
      LCK_B.Saturation_b = LCK_B.Sum1_pw;
    }

    /* End of Saturate: '<S141>/Saturation' */

    /* Abs: '<S114>/Abs' */
    LCK_B.Abs_o = (real32_T)fabs(LCK_B.Saturation_b);

    /* RelationalOperator: '<S114>/Relational Operator13' incorporates:
     *  Constant: '<S114>/Constant'
     */
    LCK_B.RelationalOperator13_l = (LCK_B.Abs_o >= k_hands_on_wheel_torque_hi);

    /* Chart: '<S139>/Delay_Trig' incorporates:
     *  Constant: '<S114>/k_handson_delay_cycles'
     */
    LCK_Delay_Trig_k(LCK_B.RelationalOperator13_l, k_handson_delay_cycles,
                     &LCK_B.sf_Delay_Trig_k, &LCK_DW.sf_Delay_Trig_k);

    /* RelationalOperator: '<S114>/Relational Operator11' incorporates:
     *  Constant: '<S114>/Constant3'
     */
    LCK_B.RelationalOperator11_l = (LCK_B.Abs_o <= k_hands_on_wheel_torque_lo);

    /* UnitDelay: '<S114>/Unit Delay2' */
    LCK_B.UnitDelay2 = LCK_DW.UnitDelay2_DSTATE;

    /* Sum: '<S114>/Subtract' */
    LCK_B.Subtract_k = LCK_B.Abs_o - LCK_B.UnitDelay2;

    /* Abs: '<S114>/Abs2' */
    LCK_B.Abs2 = (real32_T)fabs(LCK_B.Subtract_k);

    /* RelationalOperator: '<S114>/Relational Operator12' incorporates:
     *  Constant: '<S114>/k_handsoff_torq_Lo_CR'
     */
    LCK_B.RelationalOperator12_b = (LCK_B.Abs2 <= k_handsoff_torq_Lo_CR);

    /* Logic: '<S114>/Logical Operator8' */
    LCK_B.LogicalOperator8_m = (LCK_B.RelationalOperator11_l &&
      LCK_B.RelationalOperator12_b);

    /* Chart: '<S140>/Delay_Trig' incorporates:
     *  Constant: '<S114>/k_handsoff_delay_cycles'
     */
    LCK_Delay_Trig_k(LCK_B.LogicalOperator8_m, k_handsoff_delay_cycles,
                     &LCK_B.sf_Delay_Trig_l, &LCK_DW.sf_Delay_Trig_l);

    /* UnitDelay: '<S114>/Unit Delay1' */
    LCK_B.UnitDelay1 = LCK_DW.UnitDelay1_DSTATE;

    /* Switch: '<S114>/Switch14' incorporates:
     *  Constant: '<S114>/Constant5'
     */
    if (LCK_B.sf_Delay_Trig_l.Delay_Trig != 0.0F) {
      LCK_B.Switch14_h = C_ZERO;
    } else {
      LCK_B.Switch14_h = LCK_B.UnitDelay1;
    }

    /* End of Switch: '<S114>/Switch14' */

    /* Switch: '<S114>/Switch13' incorporates:
     *  Constant: '<S114>/Constant4'
     */
    if (LCK_B.sf_Delay_Trig_k.Delay_Trig != 0.0F) {
      LCK_B.Switch13_b = C_ONE;
    } else {
      LCK_B.Switch13_b = LCK_B.Switch14_h;
    }

    /* End of Switch: '<S114>/Switch13' */

    /* Chart: '<S142>/signal_sustain' incorporates:
     *  Constant: '<S114>/k_hands_on_wheel_hold_msec'
     *  Constant: '<S114>/zero_exit_cond'
     */
    if (LCK_DW.is_active_c106_sBhctwPzzXYJVM_j == 0U) {
      LCK_DW.is_active_c106_sBhctwPzzXYJVM_j = 1U;
      LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKU_g = LCK_IN_Standby_o;
      LCK_DW.i_m = 0.0F;
    } else if (LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKU_g == LCK_IN_Hold_o) {
      if ((LCK_B.Switch13_b != 0.0F) && (LCK_DW.i_m < k_hands_on_wheel_hold_msec)
          && (!(C_ZERO != 0.0F))) {
        LCK_DW.i_m = 0.0F;
        LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKU_g = LCK_IN_Hold_o;
        LCK_B.sustain_value_p = LCK_B.Switch13_b;
      } else if ((LCK_DW.i_m >= k_hands_on_wheel_hold_msec) || (C_ZERO != 0.0F))
      {
        LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKU_g = LCK_IN_Standby_o;
        LCK_DW.i_m = 0.0F;
      } else {
        LCK_DW.i_m += ML_TIME_MSEC;
      }
    } else if ((LCK_B.Switch13_b != 0.0F) && (!(C_ZERO != 0.0F))) {
      LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKU_g = LCK_IN_Hold_o;
      LCK_B.sustain_value_p = LCK_B.Switch13_b;
    } else {
      LCK_B.sustain_value_p = 0.0F;
    }

    /* End of Chart: '<S142>/signal_sustain' */

    /* Gain: '<S114>/Gain' */
    LCK_B.f_hands_on_wheel = LCK_P.Gain_Gain_n * LCK_B.sustain_value_p;

    /* DataTypeConversion: '<S167>/Data Type Conversion11' */
    LCK_B.DataTypeConversion11 = LCK_B.f_hands_on_wheel;

    /* Chart: '<S189>/Delay_Trig' incorporates:
     *  Constant: '<S167>/k_LCK_HndsOnWhel_DlyTm_Idl2Rdy'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion11, k_LCK_HndsOnWhel_DlyTm_Idl2Rdy,
                   &LCK_B.sf_Delay_Trig_bq, &LCK_DW.sf_Delay_Trig_bq);

    /* Abs: '<S167>/Abs' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.Abs_e = (real32_T)fabs(LCK_U.LCK_VehSigInputs.Veh_Yaw_Rate);

    /* RelationalOperator: '<S167>/Relational Operator29' incorporates:
     *  Constant: '<S167>/k_LCK_YawRateThr_Idl2Rdy'
     */
    LCK_B.RelationalOperator29_g = (LCK_B.Abs_e <= k_LCK_YawRateThr_Idl2Rdy);

    /* DataTypeConversion: '<S167>/Data Type Conversion4' */
    LCK_B.DataTypeConversion4 = LCK_B.RelationalOperator29_g;

    /* Chart: '<S190>/Delay_Trig' incorporates:
     *  Constant: '<S167>/k_LCK_YawRate_DlyTm_Idl2Rdy'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion4, k_LCK_YawRate_DlyTm_Idl2Rdy,
                   &LCK_B.sf_Delay_Trig_g, &LCK_DW.sf_Delay_Trig_g);

    /* Product: '<S165>/Product' incorporates:
     *  Constant: '<S165>/k_LCK_Rng2VehSpd_Ratio_Thr'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.Product_p = LCK_U.LCK_VehSigInputs.Vehicle_Speed *
      k_LCK_Rng2VehSpd_Ratio_Thr;

    /* RelationalOperator: '<S165>/Relational Operator213' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator213 = (LCK_U.LCK_LanSigInputs.VID_Lin_01_Range <=
      LCK_B.Product_p);

    /* RelationalOperator: '<S165>/Relational Operator216' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator216 = (LCK_B.Product_p >=
      LCK_U.LCK_LanSigInputs.VID_Lin_02_Range);

    /* RelationalOperator: '<S165>/Relational Operator217' incorporates:
     *  Constant: '<S165>/k_LCK_LowRng_Spd_Thr'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator217 = (LCK_U.LCK_VehSigInputs.Vehicle_Speed >=
      k_LCK_LowRng_Spd_Thr);

    /* Logic: '<S165>/Logical Operator159' */
    LCK_B.LogicalOperator159 = (LCK_B.RelationalOperator213 &&
      LCK_B.RelationalOperator216 && LCK_B.RelationalOperator217);

    /* DataTypeConversion: '<S165>/Data Type Conversion95' */
    LCK_B.DataTypeConversion95 = LCK_B.LogicalOperator159;

    /* Chart: '<S182>/Delay_Trig' incorporates:
     *  Constant: '<S165>/k_LCK_Rng2VehSpd_Ratio_DlyTime'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion95, k_LCK_Rng2VehSpd_Ratio_DlyTime,
                   &LCK_B.sf_Delay_Trig_m, &LCK_DW.sf_Delay_Trig_m);

    /* RelationalOperator: '<S167>/Relational Operator2' incorporates:
     *  Constant: '<S167>/k_LCK_VehSpd_Uplmt_Idl2Rdy'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator2_o = (LCK_U.LCK_VehSigInputs.Vehicle_Speed <=
      k_LCK_VehSpd_Uplmt_Idl2Rdy);

    /* Switch: '<S167>/Switch77' incorporates:
     *  Constant: '<S167>/k_LCK_VehSpd_LowLmtFus_Idl2Rdy'
     *  Constant: '<S167>/k_LCK_VehSpd_LowlmtVis_Idl2Rdy'
     */
    if (LCK_B.Switch5_k >= LCK_P.Switch77_Threshold) {
      LCK_B.Switch77 = k_LCK_VehSpd_LowLmtFus_Idl2Rdy;
    } else {
      LCK_B.Switch77 = k_LCK_VehSpd_LowlmtVis_Idl2Rdy;
    }

    /* End of Switch: '<S167>/Switch77' */

    /* RelationalOperator: '<S167>/Relational Operator15' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator15_d = (LCK_U.LCK_VehSigInputs.Vehicle_Speed >=
      LCK_B.Switch77);

    /* Logic: '<S167>/Logical Operator44' */
    LCK_B.LogicalOperator44 = (LCK_B.RelationalOperator2_o &&
      LCK_B.RelationalOperator15_d);

    /* Gain: '<S191>/Gain 0' */
    LCK_B.Gain0 = (uint16_T)(LCK_B.LogicalOperator44 ? (int32_T)c_BIT0 : 0);

    /* RelationalOperator: '<S167>/Relational Operator4' incorporates:
     *  Constant: '<S167>/k_LCK_VehSpd_TJA_ICA_Bound'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator4_e = (LCK_U.LCK_VehSigInputs.Vehicle_Speed <=
      k_LCK_VehSpd_TJA_ICA_Bound);

    /* Switch: '<S167>/Switch3' */
    if (LCK_B.RelationalOperator4_e) {
      LCK_B.Switch3_b = LCK_B.sf_Delay_Trig_o.Delay_Trig;
    } else {
      LCK_B.Switch3_b = LCK_B.sf_Delay_Trig_kt.Delay_Trig;
    }

    /* End of Switch: '<S167>/Switch3' */

    /* Gain: '<S191>/Gain1' */
    vxs = (real32_T)floor((real32_T)c_BIT1 * LCK_B.Switch3_b);
    if (rtIsNaNF(vxs) || rtIsInfF(vxs)) {
      vxs = 0.0F;
    } else {
      vxs = (real32_T)fmod(vxs, 65536.0);
    }

    LCK_B.Gain1_bd = (uint16_T)(vxs < 0.0F ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-vxs : (int32_T)(uint16_T)vxs);

    /* End of Gain: '<S191>/Gain1' */

    /* Logic: '<S167>/Logical Operator13' */
    LCK_B.LogicalOperator13 = ((LCK_B.sf_Delay_Trig_c.Delay_Trig != 0.0F) &&
      (LCK_B.sf_Delay_Trig_i.Delay_Trig != 0.0F));

    /* Gain: '<S191>/Gain2' */
    LCK_B.Gain2_c0 = (uint16_T)(LCK_B.LogicalOperator13 ? (int32_T)c_BIT2 : 0);

    /* Gain: '<S191>/Gain3' */
    vxs = (real32_T)floor((real32_T)c_BIT3 * LCK_B.sf_Delay_Trig_b.Delay_Trig);
    if (rtIsNaNF(vxs) || rtIsInfF(vxs)) {
      vxs = 0.0F;
    } else {
      vxs = (real32_T)fmod(vxs, 65536.0);
    }

    LCK_B.Gain3_d = (uint16_T)(vxs < 0.0F ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-vxs : (int32_T)(uint16_T)vxs);

    /* End of Gain: '<S191>/Gain3' */

    /* Gain: '<S191>/Gain4' */
    vxs = (real32_T)floor((real32_T)c_BIT4 * LCK_B.sf_Delay_Trig_bq.Delay_Trig);
    if (rtIsNaNF(vxs) || rtIsInfF(vxs)) {
      vxs = 0.0F;
    } else {
      vxs = (real32_T)fmod(vxs, 65536.0);
    }

    LCK_B.Gain4_o2 = (uint16_T)(vxs < 0.0F ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-vxs : (int32_T)(uint16_T)vxs);

    /* End of Gain: '<S191>/Gain4' */

    /* Gain: '<S191>/Gain5' incorporates:
     *  Constant: '<S111>/Constant4'
     */
    velocity_ms = floor((real_T)c_BIT5 * LCK_P.Constant4_Value_jf);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain5_n = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S191>/Gain5' */

    /* Gain: '<S191>/Gain6' */
    vxs = (real32_T)floor((real32_T)c_BIT6 * LCK_B.sf_Delay_Trig_g.Delay_Trig);
    if (rtIsNaNF(vxs) || rtIsInfF(vxs)) {
      vxs = 0.0F;
    } else {
      vxs = (real32_T)fmod(vxs, 65536.0);
    }

    LCK_B.Gain6 = (uint16_T)(vxs < 0.0F ? (int32_T)(uint16_T)-(int16_T)(uint16_T)
      -vxs : (int32_T)(uint16_T)vxs);

    /* End of Gain: '<S191>/Gain6' */

    /* Logic: '<S167>/Logical Operator160' */
    LCK_B.LogicalOperator160 = !(LCK_B.sf_Delay_Trig_m.Delay_Trig != 0.0F);

    /* Gain: '<S191>/Gain7' */
    LCK_B.Gain7 = (uint16_T)(LCK_B.LogicalOperator160 ? (int32_T)c_BIT7 : 0);

    /* Gain: '<S191>/Gain8' incorporates:
     *  Constant: '<S167>/Constant1'
     */
    velocity_ms = floor((real_T)c_BIT8 * LCK_P.Constant1_Value_a);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain8_b = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S191>/Gain8' */

    /* Gain: '<S191>/Gain9' incorporates:
     *  Constant: '<S167>/Constant5'
     */
    velocity_ms = floor((real_T)c_BIT9 * LCK_P.Constant5_Value_a);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain9 = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S191>/Gain9' */

    /* Gain: '<S191>/Gain10' incorporates:
     *  Constant: '<S167>/Constant2'
     */
    velocity_ms = floor((real_T)c_BIT10 * LCK_P.Constant2_Value_d);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain10 = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S191>/Gain10' */

    /* Gain: '<S191>/Gain11' incorporates:
     *  Constant: '<S167>/Constant11'
     */
    velocity_ms = floor((real_T)c_BIT11 * LCK_P.Constant11_Value_k);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain11 = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S191>/Gain11' */

    /* Gain: '<S191>/Gain12' incorporates:
     *  Constant: '<S167>/Constant16'
     */
    velocity_ms = floor((real_T)c_BIT12 * LCK_P.Constant16_Value_b);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain12 = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S191>/Gain12' */

    /* Gain: '<S191>/Gain13' incorporates:
     *  Constant: '<S167>/Constant3'
     */
    velocity_ms = floor((real_T)c_BIT13 * LCK_P.Constant3_Value_ob);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain13 = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S191>/Gain13' */

    /* Gain: '<S191>/Gain14' incorporates:
     *  Constant: '<S167>/Constant9'
     */
    velocity_ms = floor((real_T)c_BIT14 * LCK_P.Constant9_Value_e);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain14 = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S191>/Gain14' */

    /* Gain: '<S191>/Gain15' incorporates:
     *  Constant: '<S167>/Constant15'
     */
    velocity_ms = floor((real_T)c_BIT15 * LCK_P.Constant15_Value_p);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain15 = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S191>/Gain15' */

    /* Sum: '<S191>/Add' */
    tmp = (uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)
      (uint16_T)((uint32_T)LCK_B.Gain0 + LCK_B.Gain1_bd) + LCK_B.Gain2_c0) +
      LCK_B.Gain3_d) + LCK_B.Gain4_o2);
    LCK_B.Add_m5 = (uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)
      ((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)
      (uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)
      ((uint32_T)(uint16_T)((uint32_T)tmp + LCK_B.Gain5_n) + LCK_B.Gain6) +
      LCK_B.Gain7) + LCK_B.Gain8_b) + LCK_B.Gain9) + LCK_B.Gain10) +
      LCK_B.Gain11) + LCK_B.Gain12) + LCK_B.Gain13) + LCK_B.Gain14) +
      LCK_B.Gain15);

    /* DataTypeConversion: '<S167>/Data Type Conversion12' */
    LCK_B.DataTypeConversion12_f = LCK_B.Add_m5;

    /* DataTypeConversion: '<S167>/Data Type Conversion93' incorporates:
     *  Constant: '<S167>/k_LCK_Idle2Ready_Mask'
     */
    vxs = (real32_T)floor(k_LCK_Idle2Ready_Mask);
    if (rtIsNaNF(vxs) || rtIsInfF(vxs)) {
      vxs = 0.0F;
    } else {
      vxs = (real32_T)fmod(vxs, 65536.0);
    }

    LCK_B.DataTypeConversion93 = (uint16_T)(vxs < 0.0F ? (int32_T)(uint16_T)
      -(int16_T)(uint16_T)-vxs : (int32_T)(uint16_T)vxs);

    /* End of DataTypeConversion: '<S167>/Data Type Conversion93' */

    /* S-Function (sfix_bitop): '<S167>/Idle2ReadyBitwise ' */
    LCK_B.Idle2ReadyBitwise = (uint16_T)(LCK_B.DataTypeConversion12_f &
      LCK_B.DataTypeConversion93);

    /* RelationalOperator: '<S167>/Relational_Operator10' incorporates:
     *  Constant: '<S167>/Idle2Ready_Mask'
     */
    LCK_B.Relational_Operator10 = (LCK_B.Idle2ReadyBitwise ==
      k_LCK_Idle2Ready_Mask);

    /* Logic: '<S162>/Logical Operator48' */
    LCK_B.LogicalOperator48 = ((LCK_B.Switch5_k != 0.0) ||
      LCK_B.RelationalOperator);

    /* RelationalOperator: '<S162>/Relational_Operator6' incorporates:
     *  Constant: '<S162>/ZERO7'
     */
    LCK_B.Relational_Operator6 = (0.0 == LCK_P.ZERO7_Value);

    /* Logic: '<S162>/Logical Operator49' */
    LCK_B.LogicalOperator49 = (LCK_B.LogicalOperator48 &&
      LCK_B.Relational_Operator10 && LCK_B.Relational_Operator6);

    /* Logic: '<S158>/Logical Operator3' */
    LCK_B.LogicalOperator3_j = ((!(LCK_B.Switch5_k != 0.0)) &&
      (!LCK_B.RelationalOperator));

    /* Logic: '<S163>/Logical Operator3' */
    LCK_B.LogicalOperator3_b = ((!(LCK_B.Switch5_k != 0.0)) &&
      (!LCK_B.RelationalOperator));

    /* RelationalOperator: '<S170>/Relational Operator44' incorporates:
     *  Constant: '<S170>/Constant51'
     */
    LCK_B.RelationalOperator44_f = (LCK_B.Switch13 == LCK_P.Constant51_Value);

    /* DataTypeConversion: '<S170>/Data Type Conversion25' */
    LCK_B.DataTypeConversion25 = LCK_B.RelationalOperator44_f;

    /* Logic: '<S169>/Logical Operator56' */
    LCK_B.LogicalOperator56 = !(LCK_B.DataTypeConversion24 != 0.0F);

    /* DataTypeConversion: '<S169>/Data Type Conversion31' */
    LCK_B.DataTypeConversion31 = LCK_B.LogicalOperator56;

    /* Chart: '<S206>/Delay_Trig' incorporates:
     *  Constant: '<S169>/k_LCK_SPconfMed_DlyTm_Rdy2Idl2'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion31, k_LCK_SPconfMed_DlyTm_Rdy2Idl,
                   &LCK_B.sf_Delay_Trig_ol, &LCK_DW.sf_Delay_Trig_ol);

    /* RelationalOperator: '<S170>/Relational Operator8' incorporates:
     *  Constant: '<S170>/Constant50'
     */
    LCK_B.RelationalOperator8_d = (LCK_B.Switch13 == LCK_P.Constant50_Value);

    /* DataTypeConversion: '<S170>/Data Type Conversion16' */
    LCK_B.DataTypeConversion16_l = LCK_B.RelationalOperator8_d;

    /* Chart: '<S217>/Delay_Trig' incorporates:
     *  Constant: '<S170>/k_LCK_SPconfInvld_DlyTm_Rdy2Idl'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion16_l, k_LCK_SPconfInvld_DlyTm_Rdy2Idl,
                   &LCK_B.sf_Delay_Trig_m4, &LCK_DW.sf_Delay_Trig_m4);

    /* MinMax: '<S159>/MinMax3' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    vxs = LCK_U.LCK_LanSigInputs.VID_Lin_01_Range;
    LCK_B.MinMax3 = LCK_U.LCK_LanSigInputs.VID_Lin_02_Range;
    if ((vxs < LCK_B.MinMax3) || rtIsNaNF(LCK_B.MinMax3)) {
      LCK_B.MinMax3 = vxs;
    }

    /* End of MinMax: '<S159>/MinMax3' */

    /* Switch: '<S159>/Switch67' incorporates:
     *  Constant: '<S111>/Constant1'
     *  Constant: '<S159>/k_LCK_UseSP_MaxRange'
     */
    if (k_LCK_UseSP_MaxRange >= LCK_P.Switch67_Threshold) {
      LCK_B.Switch67 = LCK_P.Constant1_Value_l;
    } else {
      LCK_B.Switch67 = LCK_B.MinMax3;
    }

    /* End of Switch: '<S159>/Switch67' */

    /* UnitDelay: '<S159>/Unit Delay6' */
    LCK_B.UnitDelay6 = LCK_DW.UnitDelay6_DSTATE;

    /* UnitDelay: '<S159>/Unit Delay11' */
    LCK_B.UnitDelay11 = LCK_DW.UnitDelay11_DSTATE;

    /* RelationalOperator: '<S159>/Relational Operator209' */
    LCK_B.RelationalOperator209 = (LCK_B.Switch67 == LCK_B.UnitDelay11);

    /* UnitDelay: '<S159>/Unit Delay7' */
    LCK_B.UnitDelay7 = LCK_DW.UnitDelay7_DSTATE;

    /* Switch: '<S159>/Switch69' */
    if (LCK_B.RelationalOperator209) {
      LCK_B.Switch69 = LCK_B.UnitDelay6;
    } else {
      LCK_B.Switch69 = LCK_B.UnitDelay7;
    }

    /* End of Switch: '<S159>/Switch69' */

    /* RelationalOperator: '<S159>/Relational Operator205' */
    LCK_B.RelationalOperator205 = (LCK_B.Switch67 < LCK_B.Switch69);

    /* DataTypeConversion: '<S159>/Data Type Conversion89' */
    LCK_B.DataTypeConversion89 = LCK_B.RelationalOperator205;

    /* Chart: '<S177>/Delay_Trig' incorporates:
     *  Constant: '<S159>/k_LCK_Range_Drop_MinDur'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion89, k_LCK_Range_Drop_MinDur,
                   &LCK_B.sf_Delay_Trig_f, &LCK_DW.sf_Delay_Trig_f);

    /* RelationalOperator: '<S159>/Relational Operator207' incorporates:
     *  Constant: '<S159>/Constant17'
     *  Outport: '<Root>/SPP_Type'
     */
    LCK_B.RelationalOperator207 = (TJA_SP_TYPE_BLMONLY == LCK_Y.SPP_Type);

    /* Logic: '<S159>/Logical Operator155' */
    LCK_B.LogicalOperator155 = !LCK_B.RelationalOperator207;

    /* DataTypeConversion: '<S159>/Data Type Conversion88' */
    LCK_B.DataTypeConversion88 = LCK_B.LogicalOperator155;

    /* Chart: '<S178>/signal_sustain' incorporates:
     *  Constant: '<S159>/k_LCK_Junc_SusTime'
     */
    if (LCK_DW.is_active_c106_sBhctwPzzXYJVM5h == 0U) {
      LCK_DW.is_active_c106_sBhctwPzzXYJVM5h = 1U;
      LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKUwD = LCK_IN_Standby_o;
      LCK_DW.i_p = 0.0F;
    } else if (LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKUwD == LCK_IN_Hold_o) {
      if ((LCK_B.sf_Delay_Trig_f.Delay_Trig != 0.0F) && (LCK_DW.i_p <
           k_LCK_Junc_SusTime) && (!(LCK_B.DataTypeConversion88 != 0.0F))) {
        LCK_DW.i_p = 0.0F;
        LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKUwD = LCK_IN_Hold_o;
        LCK_B.sustain_value = LCK_B.sf_Delay_Trig_f.Delay_Trig;
      } else if ((LCK_DW.i_p >= k_LCK_Junc_SusTime) ||
                 (LCK_B.DataTypeConversion88 != 0.0F)) {
        LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKUwD = LCK_IN_Standby_o;
        LCK_DW.i_p = 0.0F;
      } else {
        LCK_DW.i_p += ML_TIME_MSEC;
      }
    } else if ((LCK_B.sf_Delay_Trig_f.Delay_Trig != 0.0F) &&
               (!(LCK_B.DataTypeConversion88 != 0.0F))) {
      LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKUwD = LCK_IN_Hold_o;
      LCK_B.sustain_value = LCK_B.sf_Delay_Trig_f.Delay_Trig;
    } else {
      LCK_B.sustain_value = 0.0F;
    }

    /* End of Chart: '<S178>/signal_sustain' */

    /* RelationalOperator: '<S159>/Relational Operator204' incorporates:
     *  Constant: '<S159>/Constant14'
     *  Outport: '<Root>/SPP_Type'
     */
    LCK_B.RelationalOperator204 = (TJA_SP_TYPE_BLMONLY == LCK_Y.SPP_Type);

    /* RelationalOperator: '<S159>/Relational Operator208' incorporates:
     *  Constant: '<S159>/k_LCK_MinJunction_Range'
     */
    LCK_B.RelationalOperator208 = (LCK_B.Switch67 < k_LCK_MinJunction_Range);

    /* Logic: '<S159>/Logical Operator157' */
    LCK_B.LogicalOperator157 = (LCK_B.RelationalOperator204 &&
      LCK_B.RelationalOperator208 && (LCK_B.sustain_value != 0.0F));

    /* Lookup_n-D: '<S170>/k_LCK_SPconfLow_DlyTm_Rdy2Idl_Table' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.k_LCK_SPconfLow_DlyTm_Rdy2Idl_T = look1_iflf_binlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_LCK_SPconfLow_DlyTm_Rdy2Idl_x,
       k_LCK_SPconfLow_DlyTm_Rdy2Idl_z, 15U);

    /* Switch: '<S170>/Switch68' incorporates:
     *  Constant: '<S170>/k_LCK_SP_Conf_Low_JuncTm'
     */
    if (LCK_B.LogicalOperator157) {
      LCK_B.Switch68 = k_LCK_SP_Conf_Low_JuncTm;
    } else {
      LCK_B.Switch68 = LCK_B.k_LCK_SPconfLow_DlyTm_Rdy2Idl_T;
    }

    /* End of Switch: '<S170>/Switch68' */

    /* Switch: '<S170>/Switch63' incorporates:
     *  Constant: '<S170>/Use_Constant_SPP_Timer'
     *  Constant: '<S170>/k_LCK_SPconfLow_DlyTm_Rdy2Idl'
     */
    if (k_Use_Constant_SPP_Timer > LCK_P.Switch63_Threshold) {
      LCK_B.Switch63 = k_LCK_SPconfLow_DlyTm_Rdy2Idl;
    } else {
      LCK_B.Switch63 = LCK_B.Switch68;
    }

    /* End of Switch: '<S170>/Switch63' */

    /* Chart: '<S218>/Delay_Trig' */
    LCK_Delay_Trig_g(LCK_B.DataTypeConversion25, LCK_B.Switch63,
                     &LCK_B.sf_Delay_Trig_gz, &LCK_DW.sf_Delay_Trig_gz);

    /* RelationalOperator: '<S170>/Relational Operator45' incorporates:
     *  Constant: '<S170>/Constant52'
     */
    LCK_B.RelationalOperator45_g = (LCK_B.Switch13 == LCK_P.Constant52_Value);

    /* DataTypeConversion: '<S170>/Data Type Conversion26' */
    LCK_B.DataTypeConversion26 = LCK_B.RelationalOperator45_g;

    /* Lookup_n-D: '<S170>/k_LCK_SPconfMed_DlyTm_Rdy2Idl_Table' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.k_LCK_SPconfMed_DlyTm_Rdy2Idl_T = look1_iflf_binlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_LCK_SPconfMed_DlyTm_Rdy2Idl_x,
       k_LCK_SPconfMed_DlyTm_Rdy2Idl_z, 15U);

    /* Switch: '<S170>/Switch70' incorporates:
     *  Constant: '<S170>/k_LCK_SP_Conf_Med_JuncTm'
     */
    if (LCK_B.LogicalOperator157) {
      LCK_B.Switch70 = k_LCK_SP_Conf_Med_JuncTm;
    } else {
      LCK_B.Switch70 = LCK_B.k_LCK_SPconfMed_DlyTm_Rdy2Idl_T;
    }

    /* End of Switch: '<S170>/Switch70' */

    /* Switch: '<S170>/Switch64' incorporates:
     *  Constant: '<S170>/Use_Constant_SPP_Timer'
     *  Constant: '<S170>/k_LCK_SPconfMed_DlyTm_Rdy2Idl'
     */
    if (k_Use_Constant_SPP_Timer > LCK_P.Switch64_Threshold) {
      LCK_B.Switch64 = k_LCK_SPconfMed_DlyTm_Rdy2Idl;
    } else {
      LCK_B.Switch64 = LCK_B.Switch70;
    }

    /* End of Switch: '<S170>/Switch64' */

    /* Chart: '<S219>/Delay_Trig' */
    LCK_Delay_Trig_g(LCK_B.DataTypeConversion26, LCK_B.Switch64,
                     &LCK_B.sf_Delay_Trig_gc, &LCK_DW.sf_Delay_Trig_gc);

    /* Logic: '<S169>/Logical Operator17' */
    LCK_B.LogicalOperator17 = !(LCK_B.DataTypeConversion23 != 0.0F);

    /* DataTypeConversion: '<S169>/Data Type Conversion15' */
    LCK_B.DataTypeConversion15_d = LCK_B.LogicalOperator17;

    /* Chart: '<S207>/Delay_Trig' incorporates:
     *  Constant: '<S169>/k_LCK_SPconfMed_DlyTm_Rdy2Idl1'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion15_d, k_LCK_SPconfMed_DlyTm_Rdy2Idl,
                   &LCK_B.sf_Delay_Trig_h, &LCK_DW.sf_Delay_Trig_h);

    /* RelationalOperator: '<S169>/Relational Operator20' incorporates:
     *  Constant: '<S169>/k_LCK_LnWidth_LowLmt_Rdy2Idl'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator20_d = (LCK_U.LCK_LanSigInputs.VID_Lane_Width <
      k_LCK_LnWidth_LowLmt_Rdy2Idl);

    /* DataTypeConversion: '<S169>/Data Type Conversion6' */
    LCK_B.DataTypeConversion6 = LCK_B.RelationalOperator20_d;

    /* Chart: '<S208>/Delay_Trig' incorporates:
     *  Constant: '<S169>/k_LCK_LnWidth_DlyTm_Rdy2Idl'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion6, k_LCK_LnWidth_DlyTm_Rdy2Idl,
                   &LCK_B.sf_Delay_Trig_g1, &LCK_DW.sf_Delay_Trig_g1);

    /* RelationalOperator: '<S169>/Relational Operator21' incorporates:
     *  Constant: '<S169>/k_LCK_LnWidth_UpLmt_Rdy2Idl'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator21 = (LCK_U.LCK_LanSigInputs.VID_Lane_Width >
      k_LCK_LnWidth_UpLmt_Rdy2Idl);

    /* DataTypeConversion: '<S169>/Data Type Conversion22' */
    LCK_B.DataTypeConversion22 = LCK_B.RelationalOperator21;

    /* Chart: '<S209>/Delay_Trig' incorporates:
     *  Constant: '<S169>/k_LCK_LnWidth_DlyTm_Rdy2Idl1'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion22, k_LCK_LnWidth_DlyTm_Rdy2Idl,
                   &LCK_B.sf_Delay_Trig_jy, &LCK_DW.sf_Delay_Trig_jy);

    /* Abs: '<S169>/Abs' */
    LCK_B.Abs_a = (real32_T)fabs(LCK_B.Switch11_h);

    /* Product: '<S169>/Divide' incorporates:
     *  Constant: '<S169>/Constant4'
     *  Constant: '<S169>/k_LCK_LM_ROC_Rdy2Idl'
     */
    LCK_B.Divide_g = LCK_P.Constant4_Value_i / k_LCK_LM_ROC_Rdy2Idl;

    /* Gain: '<S169>/Gain' */
    LCK_B.Gain_h = LCK_P.Gain_Gain_f * LCK_B.Divide_g;

    /* RelationalOperator: '<S169>/Relational Operator22' */
    LCK_B.RelationalOperator22 = (LCK_B.Abs_a >= LCK_B.Gain_h);

    /* RelationalOperator: '<S169>/Relational Operator1' incorporates:
     *  Constant: '<S169>/k_LCK_LowRng_Spd_Thr1'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator1_l = (LCK_U.LCK_VehSigInputs.Vehicle_Speed >=
      k_LCK_LowRng_Spd_Thr);

    /* Logic: '<S169>/Logical Operator22' */
    LCK_B.LogicalOperator22_j = (LCK_B.RelationalOperator22 &&
      LCK_B.RelationalOperator1_l);

    /* DataTypeConversion: '<S169>/Data Type Conversion7' */
    LCK_B.DataTypeConversion7 = LCK_B.LogicalOperator22_j;

    /* Chart: '<S210>/Delay_Trig' incorporates:
     *  Constant: '<S169>/k_LCK_LM_ROC_DlyTm_Rdy2Idl'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion7, k_LCK_LM_ROC_DlyTm_Rdy2Idl,
                   &LCK_B.sf_Delay_Trig_c5, &LCK_DW.sf_Delay_Trig_c5);

    /* Abs: '<S172>/Abs17' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.Abs17 = (real32_T)fabs(LCK_U.LCK_VehSigInputs.Veh_Yaw_Rate);

    /* Gain: '<S172>/Gain17' */
    LCK_B.Gain17 = LCK_P.Gain17_Gain * LCK_B.Switch11_h;

    /* MinMax: '<S172>/MinMax' incorporates:
     *  Abs: '<S172>/Abs18'
     */
    LCK_B.Abs18 = (real32_T)fabs(LCK_B.Gain17);
    if ((LCK_B.Abs18 > C_NEARZERO) || rtIsNaNF(C_NEARZERO)) {
      LCK_B.MinMax = LCK_B.Abs18;
    } else {
      LCK_B.MinMax = C_NEARZERO;
    }

    /* End of MinMax: '<S172>/MinMax' */

    /* Product: '<S172>/Divide' incorporates:
     *  Constant: '<S172>/Constant54'
     */
    LCK_B.Divide_c = LCK_P.Constant54_Value_f / LCK_B.MinMax;

    /* Outputs for Atomic SubSystem: '<S172>/First_Order_Lag_Filter2' */
    /* Outputs for Atomic SubSystem: '<S226>/Filter_Gain' */
    /* Sum: '<S228>/Sum' incorporates:
     *  Constant: '<S172>/ML_TIME_MSEC'
     *  Constant: '<S172>/k_LCK_ROC_filt_tau'
     */
    LCK_B.Sum_fj = ML_TIME_MSEC + k_LCK_ROC_filt_tau;

    /* Product: '<S228>/Product' incorporates:
     *  Constant: '<S172>/ML_TIME_MSEC'
     */
    LCK_B.Product_og = ML_TIME_MSEC / LCK_B.Sum_fj;

    /* End of Outputs for SubSystem: '<S226>/Filter_Gain' */

    /* UnitDelay: '<S226>/Unit Delay' */
    LCK_B.UnitDelay_e0 = LCK_DW.UnitDelay_DSTATE_j5;

    /* Sum: '<S226>/Sum' */
    LCK_B.Sum = LCK_B.Divide_c - LCK_B.UnitDelay_e0;

    /* Product: '<S226>/Product' */
    LCK_B.Product_j = (real32_T)(LCK_B.Product_og * LCK_B.Sum);

    /* Sum: '<S226>/Sum1' */
    LCK_B.Sum1_a = LCK_B.Product_j + LCK_B.UnitDelay_e0;

    /* End of Outputs for SubSystem: '<S172>/First_Order_Lag_Filter2' */

    /* Lookup_n-D: '<S172>/k_LCK_YawRateThr_Act2Rdy' */
    LCK_B.k_LCK_YawRateThr_Act2Rdy = look1_iflf_linlcpw(LCK_B.Sum1_a,
      k_LCK_YawRateThr_Act2Rdy_ROC_x, k_LCK_YawRateThr_Act2Rdy_z, 5U);

    /* RelationalOperator: '<S172>/Relational Operator201' */
    LCK_B.RelationalOperator201 = (LCK_B.Abs17 > LCK_B.k_LCK_YawRateThr_Act2Rdy);

    /* DataTypeConversion: '<S172>/Data Type Conversion86' */
    LCK_B.DataTypeConversion86 = LCK_B.RelationalOperator201;

    /* Chart: '<S225>/Delay_Trig' incorporates:
     *  Constant: '<S172>/k_LCK_YawRateThr_DlyTm_Act2Rdy'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion86, k_LCK_YawRateThr_DlyTm_Act2Rdy,
                   &LCK_B.sf_Delay_Trig_hu, &LCK_DW.sf_Delay_Trig_hu);

    /* RelationalOperator: '<S169>/Relational Operator14' incorporates:
     *  Constant: '<S169>/k_LCK_VehSpd_Uplmt_Rdy2Idl'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator14_b = (LCK_U.LCK_VehSigInputs.Vehicle_Speed >
      k_LCK_VehSpd_Uplmt_Rdy2Idl);

    /* Switch: '<S169>/Switch11' incorporates:
     *  Constant: '<S169>/k_LCK_VehSpd_LowLmtFus_Rdy2Idl'
     *  Constant: '<S169>/k_LCK_VehSpd_LowlmtVis_Rdy2Idl'
     */
    if (LCK_B.Switch5_k >= LCK_P.Switch11_Threshold) {
      LCK_B.Switch11 = LCK_P.k_LCK_VehSpd_LowLmtFus_Rdy2Idl_;
    } else {
      LCK_B.Switch11 = k_LCK_VehSpd_LowlmtVis_Rdy2Idl;
    }

    /* End of Switch: '<S169>/Switch11' */

    /* RelationalOperator: '<S169>/Relational Operator18' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator18_i = (LCK_U.LCK_VehSigInputs.Vehicle_Speed <
      LCK_B.Switch11);

    /* Logic: '<S169>/Logical Operator45' */
    LCK_B.LogicalOperator45 = (LCK_B.RelationalOperator14_b ||
      LCK_B.RelationalOperator18_i);

    /* Gain: '<S211>/Gain 0' */
    LCK_B.Gain0_k = (uint16_T)(LCK_B.LogicalOperator45 ? (int32_T)c_BIT0 : 0);

    /* Logic: '<S8>/Logical Operator' */
    LCK_B.LogicalOperator_ch = (LCK_B.LogicalOperator23 || LCK_B.Switch_l);

    /* Logic: '<S170>/Logical Operator9' */
    LCK_B.LogicalOperator9_a = ((LCK_B.sf_Delay_Trig_m4.Delay_Trig != 0.0F) ||
      (LCK_B.sf_Delay_Trig_gz.Delay_Trig != 0.0F) ||
      (LCK_B.sf_Delay_Trig_gc.Delay_Trig != 0.0F));

    /* Logic: '<S169>/Logical Operator27' */
    LCK_B.LogicalOperator27_i = ((LCK_B.sf_Delay_Trig_ol.Delay_Trig != 0.0F) ||
      LCK_B.LogicalOperator9_a);

    /* Switch: '<S169>/Switch8' incorporates:
     *  Constant: '<S169>/Constant22'
     *  Constant: '<S169>/k_LCK_VisionOnly'
     */
    if (k_LCK_VisionOnly >= LCK_P.Switch8_Threshold) {
      LCK_B.Switch8_h = LCK_P.Constant22_Value_d;
    } else {
      LCK_B.Switch8_h = LCK_B.LogicalOperator27_i;
    }

    /* End of Switch: '<S169>/Switch8' */

    /* RelationalOperator: '<S169>/Relational Operator7' incorporates:
     *  Constant: '<S169>/k_LCK_VehSpd_TJA_ICA_Bound1'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator7_g = (LCK_U.LCK_VehSigInputs.Vehicle_Speed <=
      k_LCK_VehSpd_TJA_ICA_Bound);

    /* Logic: '<S169>/Logical Operator55' */
    LCK_B.LogicalOperator55 = ((LCK_B.sf_Delay_Trig_h.Delay_Trig != 0.0F) ||
      LCK_B.LogicalOperator9_a);

    /* Switch: '<S169>/Switch4' */
    if (LCK_B.RelationalOperator7_g) {
      LCK_B.Switch4_i = LCK_B.Switch8_h;
    } else {
      LCK_B.Switch4_i = LCK_B.LogicalOperator55;
    }

    /* End of Switch: '<S169>/Switch4' */

    /* Switch: '<S169>/Switch1' incorporates:
     *  Constant: '<S169>/Constant5'
     */
    if (LCK_B.LogicalOperator_ch) {
      LCK_B.Switch1_h = LCK_P.Constant5_Value_o;
    } else {
      LCK_B.Switch1_h = LCK_B.Switch4_i;
    }

    /* End of Switch: '<S169>/Switch1' */

    /* Gain: '<S211>/Gain1' */
    velocity_ms = floor((real_T)c_BIT1 * LCK_B.Switch1_h);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain1_c = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S211>/Gain1' */

    /* Logic: '<S169>/Logical Operator20' */
    LCK_B.LogicalOperator20 = ((LCK_B.sf_Delay_Trig_g1.Delay_Trig != 0.0F) ||
      (LCK_B.sf_Delay_Trig_jy.Delay_Trig != 0.0F));

    /* Gain: '<S211>/Gain2' */
    LCK_B.Gain2_f = (uint16_T)(LCK_B.LogicalOperator20 ? (int32_T)c_BIT2 : 0);

    /* Gain: '<S211>/Gain3' */
    vxs = (real32_T)floor((real32_T)c_BIT3 * LCK_B.sf_Delay_Trig_c5.Delay_Trig);
    if (rtIsNaNF(vxs) || rtIsInfF(vxs)) {
      vxs = 0.0F;
    } else {
      vxs = (real32_T)fmod(vxs, 65536.0);
    }

    LCK_B.Gain3_i = (uint16_T)(vxs < 0.0F ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-vxs : (int32_T)(uint16_T)vxs);

    /* End of Gain: '<S211>/Gain3' */

    /* Gain: '<S211>/Gain4' incorporates:
     *  Constant: '<S169>/Constant3'
     */
    velocity_ms = floor((real_T)c_BIT4 * LCK_P.Constant3_Value_b);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain4_op = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S211>/Gain4' */

    /* Logic: '<S169>/Logical Operator1' incorporates:
     *  Constant: '<S111>/Constant4'
     */
    LCK_B.LogicalOperator1_fv = !(LCK_P.Constant4_Value_jf != 0.0);

    /* Logic: '<S169>/Logical Operator46' incorporates:
     *  Constant: '<S111>/Constant3'
     */
    LCK_B.LogicalOperator46 = !LCK_P.Constant3_Value_pd;

    /* Logic: '<S169>/Logical Operator47' */
    LCK_B.LogicalOperator47 = (LCK_B.LogicalOperator1_fv &&
      LCK_B.LogicalOperator46);

    /* Gain: '<S211>/Gain5' */
    LCK_B.Gain5_h = (uint16_T)(LCK_B.LogicalOperator47 ? (int32_T)c_BIT5 : 0);

    /* RelationalOperator: '<S169>/Relational Operator27' incorporates:
     *  Constant: '<S169>/Constant55'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator27_k = (LCK_U.LCK_VehSigInputs.LKATrqOvrlTrqDStat ==
      LCK_P.Constant55_Value_h);

    /* Gain: '<S211>/Gain6' */
    LCK_B.Gain6_a = (uint16_T)(LCK_B.RelationalOperator27_k ? (int32_T)c_BIT6 :
      0);

    /* Gain: '<S211>/Gain7' */
    vxs = (real32_T)floor((real32_T)c_BIT7 * LCK_B.sf_Delay_Trig_hu.Delay_Trig);
    if (rtIsNaNF(vxs) || rtIsInfF(vxs)) {
      vxs = 0.0F;
    } else {
      vxs = (real32_T)fmod(vxs, 65536.0);
    }

    LCK_B.Gain7_e = (uint16_T)(vxs < 0.0F ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-vxs : (int32_T)(uint16_T)vxs);

    /* End of Gain: '<S211>/Gain7' */

    /* Switch: '<S169>/Switch2' incorporates:
     *  Constant: '<S169>/Constant6'
     */
    if (LCK_B.LogicalOperator_ch) {
      LCK_B.Switch2_c = LCK_P.Constant6_Value_o;
    } else {
      LCK_B.Switch2_c = LCK_B.sf_Delay_Trig_m.Delay_Trig;
    }

    /* End of Switch: '<S169>/Switch2' */

    /* Gain: '<S211>/Gain8' */
    velocity_ms = floor((real_T)c_BIT8 * LCK_B.Switch2_c);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain8_i = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S211>/Gain8' */

    /* Gain: '<S211>/Gain9' incorporates:
     *  Constant: '<S169>/Constant1'
     */
    velocity_ms = floor((real_T)c_BIT9 * LCK_P.Constant1_Value_c);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain9_k = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S211>/Gain9' */

    /* Gain: '<S211>/Gain10' incorporates:
     *  Constant: '<S169>/Constant2'
     */
    velocity_ms = floor((real_T)c_BIT10 * LCK_P.Constant2_Value_at);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain10_f = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S211>/Gain10' */

    /* Gain: '<S211>/Gain11' incorporates:
     *  Constant: '<S169>/Constant18'
     */
    velocity_ms = floor((real_T)c_BIT11 * LCK_P.Constant18_Value_c);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain11_a = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S211>/Gain11' */

    /* Gain: '<S211>/Gain12' incorporates:
     *  Constant: '<S169>/Constant24'
     */
    velocity_ms = floor((real_T)c_BIT12 * LCK_P.Constant24_Value_k);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain12_d = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S211>/Gain12' */

    /* Gain: '<S211>/Gain13' incorporates:
     *  Constant: '<S169>/Constant8'
     */
    velocity_ms = floor((real_T)c_BIT13 * LCK_P.Constant8_Value_p);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain13_e = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S211>/Gain13' */

    /* Gain: '<S211>/Gain14' incorporates:
     *  Constant: '<S169>/Constant10'
     */
    velocity_ms = floor((real_T)c_BIT14 * LCK_P.Constant10_Value_f);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain14_c = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S211>/Gain14' */

    /* Gain: '<S211>/Gain15' incorporates:
     *  Constant: '<S169>/Constant29'
     */
    velocity_ms = floor((real_T)c_BIT15 * LCK_P.Constant29_Value_e);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain15_o = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S211>/Gain15' */

    /* Sum: '<S211>/Add' */
    tmp = (uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)
      (uint16_T)((uint32_T)LCK_B.Gain0_k + LCK_B.Gain1_c) + LCK_B.Gain2_f) +
      LCK_B.Gain3_i) + LCK_B.Gain4_op);
    LCK_B.Add_b = (uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)
      (uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)
      ((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)
      (uint16_T)((uint32_T)tmp + LCK_B.Gain5_h) + LCK_B.Gain6_a) + LCK_B.Gain7_e)
      + LCK_B.Gain8_i) + LCK_B.Gain9_k) + LCK_B.Gain10_f) + LCK_B.Gain11_a) +
                 LCK_B.Gain12_d) + LCK_B.Gain13_e) + LCK_B.Gain14_c) +
      LCK_B.Gain15_o);

    /* DataTypeConversion: '<S169>/Data Type Conversion13' */
    LCK_B.DataTypeConversion13 = LCK_B.Add_b;

    /* DataTypeConversion: '<S169>/Data Type Conversion90' incorporates:
     *  Constant: '<S169>/k_LCK_Ready2Idle_Mask'
     */
    vxs = (real32_T)floor(k_LCK_Ready2Idle_Mask);
    if (rtIsNaNF(vxs) || rtIsInfF(vxs)) {
      vxs = 0.0F;
    } else {
      vxs = (real32_T)fmod(vxs, 65536.0);
    }

    LCK_B.DataTypeConversion90 = (uint16_T)(vxs < 0.0F ? (int32_T)(uint16_T)
      -(int16_T)(uint16_T)-vxs : (int32_T)(uint16_T)vxs);

    /* End of DataTypeConversion: '<S169>/Data Type Conversion90' */

    /* S-Function (sfix_bitop): '<S169>/Ready2IdleBitwise Operator1' */
    LCK_B.Ready2IdleBitwiseOperator1 = (uint16_T)(LCK_B.DataTypeConversion13 &
      LCK_B.DataTypeConversion90);

    /* RelationalOperator: '<S169>/Relational_Operator1' incorporates:
     *  Constant: '<S169>/ZERO1'
     */
    LCK_B.Relational_Operator1 = (LCK_B.Ready2IdleBitwiseOperator1 != C_ZERO);

    /* Chart: '<S153>/Chart' incorporates:
     *  Inport: '<Root>/TJA_State'
     */
    if (LCK_DW.is_active_c6_LCK == 0U) {
      LCK_DW.is_active_c6_LCK = 1U;
      LCK_DW.is_c6_LCK = LCK_IN_TJA_Lat_Req_Reset;
      LCK_B.TJA_Lat_Req = 0.0;
    } else if (LCK_DW.is_c6_LCK == LCK_IN_TJA_Lat_Req_Reset) {
      LCK_B.TJA_Lat_Req = 0.0;
      if (LCK_U.TJA_State == 3.0F) {
        LCK_DW.is_c6_LCK = LCK_IN_TJA_Lat_Req_Set;
        LCK_B.TJA_Lat_Req = 1.0;
      }
    } else {
      LCK_B.TJA_Lat_Req = 1.0;
      sf_internal_predicateOutput = ((LCK_U.TJA_State < 3.0F) ||
        (LCK_U.TJA_State == 5.0F));
      if (sf_internal_predicateOutput) {
        LCK_DW.is_c6_LCK = LCK_IN_TJA_Lat_Req_Reset;
        LCK_B.TJA_Lat_Req = 0.0;
      }
    }

    /* End of Chart: '<S153>/Chart' */

    /* DataTypeConversion: '<S153>/Data Type Conversion89' */
    LCK_B.DataTypeConversion89_m = (LCK_B.TJA_Lat_Req != 0.0);

    /* RelationalOperator: '<S153>/Relational Operator1' incorporates:
     *  Constant: '<S153>/Constant1'
     *  Inport: '<Root>/ZOP_LCK_Activate'
     */
    LCK_B.RelationalOperator1_h = (LCK_U.ZOP_LCK_Activate ==
      LCK_P.Constant1_Value_co);

    /* Logic: '<S153>/Logical Operator' */
    LCK_B.LogicalOperator_l = (LCK_B.DataTypeConversion89_m ||
      LCK_B.RelationalOperator1_h);

    /* Chart: '<S160>/LCK_TJA_LatRq_Manager' incorporates:
     *  Constant: '<S160>/Constant1'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    if (LCK_DW.is_active_c42_LCK == 0U) {
      LCK_DW.is_active_c42_LCK = 1U;
      LCK_DW.is_c42_LCK = LCK_IN_LatRqOff;
      LCK_B.LatRq = 0.0F;
      LCK_B.LCKON_TJAOFF = 0.0F;
    } else if (LCK_DW.is_c42_LCK == LCK_IN_LatRqOff) {
      LCK_B.LatRq = 0.0F;
      LCK_B.LCKON_TJAOFF = 0.0F;
      if (LCK_B.LogicalOperator_l) {
        LCK_DW.is_c42_LCK = LCK_IN_LatRqOn;
        LCK_DW.is_LatRqOn = LCK_IN_TJA_Rq;
        LCK_B.LatRq = 1.0F;
        LCK_B.LCKON_TJAOFF = 0.0F;
      } else {
        if (LCK_B.RelationalOperator && (LCK_U.LCK_VehSigInputs.Vehicle_Speed >=
             k_LCK_TJALCK_SWSpeed)) {
          LCK_DW.is_c42_LCK = LCK_IN_LatRqOn;
          LCK_DW.is_LatRqOn = LCK_IN_LCK_Rq;
          LCK_B.LatRq = 1.0F;
          LCK_B.LCKON_TJAOFF = 1.0F;
        }
      }
    } else if (LCK_DW.is_LatRqOn == LCK_IN_LCK_Rq) {
      LCK_B.LatRq = 1.0F;
      LCK_B.LCKON_TJAOFF = 1.0F;
      if ((!LCK_B.RelationalOperator) || (LCK_U.LCK_VehSigInputs.Vehicle_Speed <
           k_LCK_TJALCK_SWSpeed - 5.0F)) {
        LCK_DW.is_LatRqOn = LCK_IN_NO_ACTIVE_CHILD_a;
        LCK_DW.is_c42_LCK = LCK_IN_LatRqOff;
        LCK_B.LatRq = 0.0F;
        LCK_B.LCKON_TJAOFF = 0.0F;
      } else {
        if (LCK_B.LogicalOperator_l) {
          LCK_DW.is_LatRqOn = LCK_IN_TJA_Rq;
          LCK_B.LatRq = 1.0F;
          LCK_B.LCKON_TJAOFF = 0.0F;
        }
      }
    } else {
      LCK_B.LatRq = 1.0F;
      LCK_B.LCKON_TJAOFF = 0.0F;
      if ((!LCK_B.LogicalOperator_l) && LCK_B.RelationalOperator &&
          (LCK_U.LCK_VehSigInputs.Vehicle_Speed >= k_LCK_TJALCK_SWSpeed)) {
        LCK_DW.is_LatRqOn = LCK_IN_LCK_Rq;
        LCK_B.LatRq = 1.0F;
        LCK_B.LCKON_TJAOFF = 1.0F;
      } else {
        if (!LCK_B.LogicalOperator_l) {
          LCK_DW.is_LatRqOn = LCK_IN_NO_ACTIVE_CHILD_a;
          LCK_DW.is_c42_LCK = LCK_IN_LatRqOff;
          LCK_B.LatRq = 0.0F;
          LCK_B.LCKON_TJAOFF = 0.0F;
        }
      }
    }

    /* End of Chart: '<S160>/LCK_TJA_LatRq_Manager' */

    /* Outputs for Atomic SubSystem: '<S109>/Det_Driver_Steer_Override' */
    /* Lookup_n-D: '<S112>/k_LCK_ovrd_torq_thold_per_spd' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.k_LCK_ovrd_torq_thold_per_spd = look1_iflf_linlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_LCK_ovrd_torq_thold_per_spd_x,
       k_LCK_ovrd_torq_thold_per_spd_z, 5U);

    /* Sum: '<S112>/Add' incorporates:
     *  Constant: '<S112>/k_LCK_Ovrd_Torq_Hys'
     */
    LCK_B.Add_h = LCK_B.k_LCK_ovrd_torq_thold_per_spd - k_LCK_Ovrd_Torq_Hys;

    /* UnitDelay: '<S112>/Unit Delay1' */
    LCK_B.UnitDelay1_j = LCK_DW.UnitDelay1_DSTATE_g;

    /* UnitDelay: '<S112>/Unit Delay2' */
    LCK_B.UnitDelay2_om = LCK_DW.UnitDelay2_DSTATE_c;

    /* Logic: '<S112>/Logical Operator2' */
    LCK_B.LogicalOperator2_b = (LCK_B.UnitDelay1_j || LCK_B.UnitDelay2_om);

    /* Switch: '<S112>/Switch' */
    if (LCK_B.LogicalOperator2_b) {
      LCK_B.Switch_d = LCK_B.Add_h;
    } else {
      LCK_B.Switch_d = LCK_B.k_LCK_ovrd_torq_thold_per_spd;
    }

    /* End of Switch: '<S112>/Switch' */

    /* Gain: '<S112>/Gain' */
    LCK_B.Gain_do = LCK_P.Gain_Gain_p * LCK_B.Switch_d;

    /* Switch: '<S112>/Switch3' incorporates:
     *  Constant: '<S112>/Constant10'
     *  Constant: '<S112>/Constant15'
     */
    if (k_Ovrd_torq_thold_per_spd_sw >= LCK_P.Switch3_Threshold) {
      LCK_B.Switch3_c = LCK_B.Gain_do;
    } else {
      LCK_B.Switch3_c = k_override_right_torq_thold;
    }

    /* End of Switch: '<S112>/Switch3' */

    /* RelationalOperator: '<S112>/Relational Operator6' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator6_b = (LCK_U.LCK_VehSigInputs.Steer_Torq <=
      LCK_B.Switch3_c);

    /* DataTypeConversion: '<S112>/Data Type Conversion1' */
    LCK_B.DataTypeConversion1_d = LCK_B.RelationalOperator6_b;

    /* Delay: '<S112>/Delay1' */
    LCK_B.Delay1_e = LCK_DW.Delay1_DSTATE_k;

    /* Switch: '<S112>/Switch2' incorporates:
     *  Constant: '<S112>/Constant14'
     *  Constant: '<S112>/Constant7'
     */
    if (k_Ovrd_torq_thold_per_spd_sw >= LCK_P.Switch2_Threshold) {
      LCK_B.Switch2_al = LCK_B.Switch_d;
    } else {
      LCK_B.Switch2_al = k_override_left_torq_thold;
    }

    /* End of Switch: '<S112>/Switch2' */

    /* RelationalOperator: '<S112>/Relational Operator3' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator3_m4 = (LCK_U.LCK_VehSigInputs.Steer_Torq >=
      LCK_B.Switch2_al);

    /* DataTypeConversion: '<S112>/Data Type Conversion8' */
    LCK_B.DataTypeConversion8 = LCK_B.RelationalOperator3_m4;

    /* Chart: '<S112>/left_distance_sustain_period' incorporates:
     *  Constant: '<S112>/within_distance_sustain_period'
     */
    if (LCK_DW.is_active_c176_LCK == 0U) {
      LCK_DW.is_active_c176_LCK = 1U;
      LCK_DW.is_c176_LCK = LCK_IN_Input_Standby;
      LCK_B.sustain_value_out = 0.0F;
      LCK_DW.i_h = 0.0F;
    } else {
      switch (LCK_DW.is_c176_LCK) {
       case LCK_IN_Input_Standby:
        if (LCK_B.DataTypeConversion8 > 0.0F) {
          LCK_DW.is_c176_LCK = LCK_IN_Output_Message;
        } else {
          LCK_B.sustain_value_out = 0.0F;
        }
        break;

       case LCK_IN_Output_Message:
        if ((LCK_DW.i_h >= k_override_torq_sustain_period) &&
            (LCK_B.DataTypeConversion8 > 0.0F)) {
          LCK_DW.is_c176_LCK = LCK_IN_Output_Message1;
        } else if ((LCK_DW.i_h < k_override_torq_sustain_period) &&
                   (LCK_B.DataTypeConversion8 == 0.0F)) {
          LCK_DW.is_c176_LCK = LCK_IN_Input_Standby;
          LCK_B.sustain_value_out = 0.0F;
          LCK_DW.i_h = 0.0F;
        } else {
          LCK_B.sustain_value_out = 0.0F;
          LCK_DW.i_h += ML_TIME_MSEC;
        }
        break;

       default:
        if (LCK_B.DataTypeConversion8 == 0.0F) {
          LCK_DW.is_c176_LCK = LCK_IN_Input_Standby;
          LCK_B.sustain_value_out = 0.0F;
          LCK_DW.i_h = 0.0F;
        } else {
          LCK_B.sustain_value_out = 1.0F;
        }
        break;
      }
    }

    /* End of Chart: '<S112>/left_distance_sustain_period' */

    /* Chart: '<S112>/Right_distance_sustain_period' incorporates:
     *  Constant: '<S112>/within_distance_sustain_period1'
     */
    if (LCK_DW.is_active_c175_LCK == 0U) {
      LCK_DW.is_active_c175_LCK = 1U;
      LCK_DW.is_c175_LCK = LCK_IN_Input_Standby;
      LCK_B.sustain_value_out_a = 0.0F;
      LCK_DW.i_mx = 0.0F;
    } else {
      switch (LCK_DW.is_c175_LCK) {
       case LCK_IN_Input_Standby:
        if (LCK_B.DataTypeConversion1_d > 0.0F) {
          LCK_DW.is_c175_LCK = LCK_IN_Output_Message;
        } else {
          LCK_B.sustain_value_out_a = 0.0F;
        }
        break;

       case LCK_IN_Output_Message:
        if ((LCK_DW.i_mx >= k_override_torq_sustain_period) &&
            (LCK_B.DataTypeConversion1_d > 0.0F)) {
          LCK_DW.is_c175_LCK = LCK_IN_Output_Message1;
        } else if ((LCK_DW.i_mx < k_override_torq_sustain_period) &&
                   (LCK_B.DataTypeConversion1_d == 0.0F)) {
          LCK_DW.is_c175_LCK = LCK_IN_Input_Standby;
          LCK_B.sustain_value_out_a = 0.0F;
          LCK_DW.i_mx = 0.0F;
        } else {
          LCK_B.sustain_value_out_a = 0.0F;
          LCK_DW.i_mx += ML_TIME_MSEC;
        }
        break;

       default:
        if (LCK_B.DataTypeConversion1_d == 0.0F) {
          LCK_DW.is_c175_LCK = LCK_IN_Input_Standby;
          LCK_B.sustain_value_out_a = 0.0F;
          LCK_DW.i_mx = 0.0F;
        } else {
          LCK_B.sustain_value_out_a = 1.0F;
        }
        break;
      }
    }

    /* End of Chart: '<S112>/Right_distance_sustain_period' */

    /* Delay: '<S112>/Delay' */
    LCK_B.Delay_b = LCK_DW.Delay_DSTATE_b;

    /* RelationalOperator: '<S112>/Relational Operator1' incorporates:
     *  Constant: '<S112>/Constant1'
     */
    LCK_B.RelationalOperator1_lx = (LCK_B.Delay_b > LCK_P.Constant1_Value);

    /* Logic: '<S112>/Logical Operator1' */
    LCK_B.LogicalOperator1_ch = (LCK_B.RelationalOperator1_lx &&
      (LCK_B.sustain_value_out_a != 0.0F));

    /* DataTypeConversion: '<S112>/Data Type Conversion4' */
    LCK_B.DataTypeConversion4_l = LCK_B.LogicalOperator1_ch;

    /* RelationalOperator: '<S112>/Relational Operator' incorporates:
     *  Constant: '<S112>/Constant'
     */
    LCK_B.RelationalOperator_g = (LCK_B.Delay_b < LCK_P.Constant_Value);

    /* Logic: '<S112>/Logical Operator' */
    LCK_B.LogicalOperator_ew = (LCK_B.RelationalOperator_g &&
      (LCK_B.sustain_value_out != 0.0F));

    /* DataTypeConversion: '<S112>/Data Type Conversion3' */
    LCK_B.DataTypeConversion3_h = LCK_B.LogicalOperator_ew;

    /* End of Outputs for SubSystem: '<S109>/Det_Driver_Steer_Override' */

    /* Chart: '<S119>/Sustain_wo_reset' incorporates:
     *  Constant: '<S113>/k_brake_suprress_hold'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_Sustain_wo_reset(LCK_U.LCK_VehSigInputs.BrkPedalApplied,
                         k_brake_suprress_hold, &LCK_B.sf_Sustain_wo_reset,
                         &LCK_DW.sf_Sustain_wo_reset);

    /* RelationalOperator: '<S113>/Relational Operator' incorporates:
     *  Constant: '<S113>/LEFT_TURN_SIGNAL'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator_c = (LCK_U.LCK_VehSigInputs.DirectionIndSwitchPos ==
      LEFT_TURN_SIGNAL);

    /* Chart: '<S120>/Sustain_wo_reset' incorporates:
     *  Constant: '<S113>/k_turn_suprress_hold'
     */
    LCK_Sustain_wo_reset(LCK_B.RelationalOperator_c, k_turn_suprress_hold,
                         &LCK_B.sf_Sustain_wo_reset_o,
                         &LCK_DW.sf_Sustain_wo_reset_o);

    /* Chart: '<S121>/Sustain_wo_reset' incorporates:
     *  Constant: '<S113>/k_HLR_suprress_hold'
     */
    LCK_Sustain_wo_reset_n(0.0F, k_HLR_suprress_hold,
      &LCK_B.sf_Sustain_wo_reset_n, &LCK_DW.sf_Sustain_wo_reset_n);

    /* Outputs for Atomic SubSystem: '<S109>/Filter_steer_angle_CR' */
    /* Sum: '<S149>/Sum2' incorporates:
     *  Constant: '<S116>/ML_TIME_MSEC'
     *  Constant: '<S116>/k_StrAng_filter_tau'
     */
    LCK_B.Sum2_a = ML_TIME_MSEC + k_StrAng_filter_tau;

    /* Product: '<S149>/Product1' incorporates:
     *  Constant: '<S116>/ML_TIME_MSEC'
     */
    LCK_B.Product1_dm = ML_TIME_MSEC / LCK_B.Sum2_a;

    /* UnitDelay: '<S147>/Unit Delay' */
    LCK_B.UnitDelay_nc = LCK_DW.UnitDelay_DSTATE_jx;

    /* Sum: '<S147>/Sum' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.Sum_kz = LCK_U.LCK_VehSigInputs.Steer_Spd - LCK_B.UnitDelay_nc;

    /* Product: '<S147>/Product' */
    LCK_B.Product_kb = LCK_B.Product1_dm * LCK_B.Sum_kz;

    /* Saturate: '<S147>/Saturation' incorporates:
     *  Sum: '<S147>/Sum1'
     */
    LCK_B.Sum1_hk = LCK_B.Product_kb + LCK_B.UnitDelay_nc;
    if (LCK_B.Sum1_hk > LCK_P.Saturation_UpperSat) {
      LCK_B.Saturation_p = LCK_P.Saturation_UpperSat;
    } else if (LCK_B.Sum1_hk < LCK_P.Saturation_LowerSat) {
      LCK_B.Saturation_p = LCK_P.Saturation_LowerSat;
    } else {
      LCK_B.Saturation_p = LCK_B.Sum1_hk;
    }

    /* End of Saturate: '<S147>/Saturation' */

    /* Abs: '<S116>/Abs2' */
    LCK_B.Abs2_p = (real32_T)fabs(LCK_B.Saturation_p);

    /* Lookup_n-D: '<S116>/LCK_Steer_angel_CR_threshold_LUT' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.LCK_Steer_angel_CR_threshold_LU = look1_iflf_linlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_StrAng_CR_threshold_x,
       k_LCK_StrAng_CR_threshold_z, 6U);

    /* Chart: '<S148>/CR_inhibit' incorporates:
     *  Constant: '<S116>/k_StrAng_CR_hold_msec3'
     */
    if (LCK_DW.is_active_c201_LateralControl_f == 0U) {
      LCK_DW.is_active_c201_LateralControl_f = 1U;
      LCK_DW.is_c201_LateralControl_fcns_lib = LCK_IN_Input_Standby;
      LCK_DW.i_i = 0.0F;
    } else {
      switch (LCK_DW.is_c201_LateralControl_fcns_lib) {
       case LCK_IN_Input_Standby:
        if (LCK_B.Abs2_p > LCK_B.LCK_Steer_angel_CR_threshold_LU) {
          LCK_DW.is_c201_LateralControl_fcns_lib = LCK_IN_WaitPeriod;
          LCK_DW.i_i += ML_TIME_MSEC;
        } else {
          LCK_B.warn_output = 0.0F;
        }
        break;

       case LCK_IN_Output:
        if (LCK_B.Abs2_p < LCK_B.LCK_Steer_angel_CR_threshold_LU) {
          LCK_DW.is_c201_LateralControl_fcns_lib = LCK_IN_Input_Standby;
          LCK_DW.i_i = 0.0F;
        } else {
          LCK_B.warn_output = 1.0F;
          LCK_DW.i_i = 0.0F;
        }
        break;

       default:
        if ((LCK_B.Abs2_p > LCK_B.LCK_Steer_angel_CR_threshold_LU) &&
            (LCK_DW.i_i >= k_StrAng_CR_hold_msec)) {
          LCK_DW.is_c201_LateralControl_fcns_lib = LCK_IN_Output;
        } else if ((LCK_B.Abs2_p < LCK_B.LCK_Steer_angel_CR_threshold_LU) &&
                   (LCK_DW.i_i < k_StrAng_CR_hold_msec)) {
          LCK_DW.is_c201_LateralControl_fcns_lib = LCK_IN_Input_Standby;
          LCK_DW.i_i = 0.0F;
        } else {
          LCK_B.warn_output = 0.0F;
          LCK_DW.i_i += ML_TIME_MSEC;
        }
        break;
      }
    }

    /* End of Chart: '<S148>/CR_inhibit' */

    /* Lookup_n-D: '<S116>/Steer_angel_CR_threshold_LUT' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.Steer_angel_CR_threshold_LUT = look1_iflf_linlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_StrAng_CR_threshold_x,
       k_StrAng_CR_threshold_z, 6U);

    /* Lookup_n-D: '<S116>/Steer_angel_CR_threshold_hs_LUT' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.Steer_angel_CR_threshold_hs_LUT = look1_iflf_linlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_StrAng_CR_threshold_x,
       k_hs_StrAng_CR_threshold_z, 6U);

    /* Lookup_n-D: '<S116>/Steer_angel_CR_threshold_ls_LUT' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.Steer_angel_CR_threshold_ls_LUT = look1_iflf_linlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_StrAng_CR_threshold_x,
       k_ls_StrAng_CR_threshold_z, 6U);

    /* MultiPortSwitch: '<S116>/Multiport Switch' incorporates:
     *  Constant: '<S116>/LSS_SnvtySet'
     */
    switch ((int32_T)LCK_P.LSS_SnvtySet_Value_o) {
     case 0:
      LCK_B.MultiportSwitch = LCK_B.Steer_angel_CR_threshold_LUT;
      break;

     case 1:
      LCK_B.MultiportSwitch = LCK_B.Steer_angel_CR_threshold_hs_LUT;
      break;

     case 2:
      LCK_B.MultiportSwitch = LCK_B.Steer_angel_CR_threshold_ls_LUT;
      break;

     default:
      LCK_B.MultiportSwitch = LCK_B.Steer_angel_CR_threshold_LUT;
      break;
    }

    /* End of MultiPortSwitch: '<S116>/Multiport Switch' */
    /* End of Outputs for SubSystem: '<S109>/Filter_steer_angle_CR' */

    /* Chart: '<S122>/Sustain_wo_reset' incorporates:
     *  Constant: '<S113>/k_driver_suppression_hold_time'
     */
    LCK_Sustain_wo_reset_n(LCK_B.warn_output, k_driver_suppression_hold_time,
      &LCK_B.sf_Sustain_wo_reset_c, &LCK_DW.sf_Sustain_wo_reset_c);

    /* Outputs for Atomic SubSystem: '<S109>/Filter_Accel_Pedal' */
    /* Lookup_n-D: '<S115>/accel_pedal_pos_per_speed' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.accel_pedal_pos_per_speed = look1_iflf_linlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_accel_pedal_pos_per_speed_x,
       k_accel_pedal_pos_per_speed_z, 12U);

    /* Sum: '<S115>/Add2' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.Add2_l = LCK_U.LCK_VehSigInputs.AccPedalPosition -
      LCK_B.accel_pedal_pos_per_speed;

    /* RelationalOperator: '<S115>/Relational Operator3' incorporates:
     *  Constant: '<S115>/k_LCK_accel_inhibit_thold'
     */
    LCK_B.RelationalOperator3_j = (LCK_B.Add2_l > k_LCK_accel_inhibit_thold);

    /* RelationalOperator: '<S115>/Relational Operator1' incorporates:
     *  Constant: '<S115>/Constant11'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator1_ip = (LCK_U.LCK_VehSigInputs.Gear_Pos ==
      LCK_P.Constant11_Value);

    /* Logic: '<S115>/Logical Operator2' */
    LCK_B.LogicalOperator2_c = (LCK_B.RelationalOperator1_ip &&
      LCK_B.RelationalOperator3_j);
    LCK_B.LSS_SnvtySet = LCK_P.LSS_SnvtySet_Value;

    /* End of Outputs for SubSystem: '<S109>/Filter_Accel_Pedal' */

    /* RelationalOperator: '<S113>/Relational Operator16' incorporates:
     *  Constant: '<S113>/C_ZERO3'
     *  Constant: '<S115>/LSS_SnvtySet'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator16_b = (LCK_U.LCK_VehSigInputs.Steer_Ang > C_ZERO);

    /* Logic: '<S113>/Logical Operator18' */
    LCK_B.LogicalOperator18 = (LCK_B.LogicalOperator2_c &&
      LCK_B.RelationalOperator16_b);

    /* DataTypeConversion: '<S113>/Data Type Conversion1' */
    LCK_B.DataTypeConversion1_n = LCK_B.LogicalOperator18;

    /* Chart: '<S123>/Sustain_wo_reset' incorporates:
     *  Constant: '<S113>/k_StrAng_CR_suppress_hold_3'
     */
    LCK_Sustain_wo_reset_n(LCK_B.DataTypeConversion1_n,
      k_StrAng_CR_suppress_hold, &LCK_B.sf_Sustain_wo_reset_e,
      &LCK_DW.sf_Sustain_wo_reset_e);

    /* Chart: '<S124>/Sustain_wo_reset' incorporates:
     *  Constant: '<S113>/k_brake_suprress_hold'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_Sustain_wo_reset(LCK_U.LCK_VehSigInputs.BrkPedalApplied,
                         k_brake_suprress_hold, &LCK_B.sf_Sustain_wo_reset_p,
                         &LCK_DW.sf_Sustain_wo_reset_p);

    /* RelationalOperator: '<S113>/Relational Operator1' incorporates:
     *  Constant: '<S113>/RIGHT_TURN_SIGNAL'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator1_o = (LCK_U.LCK_VehSigInputs.DirectionIndSwitchPos ==
      RIGHT_TURN_SIGNAL);

    /* Chart: '<S125>/Sustain_wo_reset' incorporates:
     *  Constant: '<S113>/k_turn_suprress_hold'
     */
    LCK_Sustain_wo_reset(LCK_B.RelationalOperator1_o, k_turn_suprress_hold,
                         &LCK_B.sf_Sustain_wo_reset_ce,
                         &LCK_DW.sf_Sustain_wo_reset_ce);

    /* Chart: '<S126>/Sustain_wo_reset' incorporates:
     *  Constant: '<S113>/k_HLR_suprress_hold'
     */
    LCK_Sustain_wo_reset_n(0.0F, k_HLR_suprress_hold,
      &LCK_B.sf_Sustain_wo_reset_cl, &LCK_DW.sf_Sustain_wo_reset_cl);

    /* Chart: '<S127>/Sustain_wo_reset' incorporates:
     *  Constant: '<S113>/k_driver_suppression_hold_time'
     */
    LCK_Sustain_wo_reset_n(LCK_B.warn_output, k_driver_suppression_hold_time,
      &LCK_B.sf_Sustain_wo_reset_cw, &LCK_DW.sf_Sustain_wo_reset_cw);

    /* RelationalOperator: '<S113>/Relational Operator17' incorporates:
     *  Constant: '<S113>/C_ZERO4'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator17_o = (LCK_U.LCK_VehSigInputs.Steer_Ang < C_ZERO);

    /* Logic: '<S113>/Logical Operator19' */
    LCK_B.LogicalOperator19 = (LCK_B.LogicalOperator2_c &&
      LCK_B.RelationalOperator17_o);

    /* DataTypeConversion: '<S113>/Data Type Conversion12' */
    LCK_B.DataTypeConversion12 = LCK_B.LogicalOperator19;

    /* Chart: '<S128>/Sustain_wo_reset' incorporates:
     *  Constant: '<S113>/k_StrAng_CR_suppress_hold_4'
     */
    LCK_Sustain_wo_reset_n(LCK_B.DataTypeConversion12, k_StrAng_CR_suppress_hold,
      &LCK_B.sf_Sustain_wo_reset_h, &LCK_DW.sf_Sustain_wo_reset_h);

    /* Abs: '<S168>/Abs2' */
    LCK_B.Abs2_l = (real32_T)fabs(LCK_B.Switch9_e);

    /* Sum: '<S168>/Add2' incorporates:
     *  Constant: '<S168>/k_LCK_host_veh_width'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.Add2 = LCK_U.LCK_LanSigInputs.VID_Lane_Width - k_LCK_host_veh_width;

    /* Saturate: '<S168>/Saturation' incorporates:
     *  Gain: '<S168>/Gain18'
     */
    LCK_B.Gain18 = LCK_P.Gain18_Gain * LCK_B.Add2;
    if (LCK_B.Gain18 > LCK_P.Saturation_UpperSat_cd) {
      LCK_B.Saturation_n = LCK_P.Saturation_UpperSat_cd;
    } else if (LCK_B.Gain18 < LCK_P.Saturation_LowerSat_hx) {
      LCK_B.Saturation_n = LCK_P.Saturation_LowerSat_hx;
    } else {
      LCK_B.Saturation_n = LCK_B.Gain18;
    }

    /* End of Saturate: '<S168>/Saturation' */

    /* Sum: '<S168>/Add3' incorporates:
     *  Constant: '<S168>/k_LCK_Entry_DistBuffer'
     */
    LCK_B.Add3 = LCK_B.Saturation_n - k_LCK_Entry_DistBuffer;

    /* Switch: '<S168>/Switch65' */
    if (LCK_B.DataTypeConversion23 > LCK_P.Switch65_Threshold) {
      /* MinMax: '<S168>/MinMax1' */
      LCK_B.Switch65 = LCK_B.Add3;
    } else {
      /* MinMax: '<S168>/MinMax1' incorporates:
       *  Constant: '<S168>/k_LCK_SP_A0_Rdy2Act1'
       */
      LCK_B.Switch65 = k_LCK_SP_A0_Rdy2Act_Max;
    }

    /* End of Switch: '<S168>/Switch65' */

    /* MinMax: '<S168>/MinMax1' */
    if ((LCK_B.Switch65 < k_LCK_SP_A0_Rdy2Act_Max) || rtIsNaNF
        (k_LCK_SP_A0_Rdy2Act_Max)) {
      LCK_B.MinMax1 = LCK_B.Switch65;
    } else {
      LCK_B.MinMax1 = k_LCK_SP_A0_Rdy2Act_Max;
    }

    /* MinMax: '<S168>/MinMax2' */
    if ((LCK_B.MinMax1 > k_LCK_SP_A0_Rdy2Act_Min) || rtIsNaNF
        (k_LCK_SP_A0_Rdy2Act_Min)) {
      LCK_B.MinMax2 = LCK_B.MinMax1;
    } else {
      LCK_B.MinMax2 = k_LCK_SP_A0_Rdy2Act_Min;
    }

    /* End of MinMax: '<S168>/MinMax2' */

    /* Switch: '<S168>/Switch66' incorporates:
     *  Constant: '<S168>/k_LCK_SP_A0_Rdy2Act3'
     *  Constant: '<S168>/k_LCK_SP_A0_Rdy2Act4'
     */
    if (k_LCK_A0_Rdy2Act_UseConst > LCK_P.Switch66_Threshold) {
      LCK_B.Switch66 = k_LCK_SP_A0_Rdy2Act;
    } else {
      LCK_B.Switch66 = LCK_B.MinMax2;
    }

    /* End of Switch: '<S168>/Switch66' */

    /* RelationalOperator: '<S168>/Relational Operator16' */
    LCK_B.RelationalOperator16_k = (LCK_B.Abs2_l <= LCK_B.Switch66);

    /* DataTypeConversion: '<S168>/Data Type Conversion32' */
    LCK_B.DataTypeConversion32 = LCK_B.RelationalOperator16_k;

    /* Chart: '<S199>/Delay_Trig' incorporates:
     *  Constant: '<S168>/k_LCK_LnCetr_DlyTm_Rdy2Act'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion32, k_LCK_LnCetr_DlyTm_Rdy2Act,
                   &LCK_B.sf_Delay_Trig_a, &LCK_DW.sf_Delay_Trig_a);

    /* Abs: '<S168>/Abs5' */
    LCK_B.Abs5 = (real32_T)fabs(LCK_B.Switch10_g);

    /* RelationalOperator: '<S168>/Relational Operator17' incorporates:
     *  Constant: '<S168>/k_LCK_SP_A1_Rdy2Act'
     */
    LCK_B.RelationalOperator17_a = (LCK_B.Abs5 <= k_LCK_SP_A1_Rdy2Act);

    /* DataTypeConversion: '<S168>/Data Type Conversion5' */
    LCK_B.DataTypeConversion5_p = LCK_B.RelationalOperator17_a;

    /* Chart: '<S200>/Delay_Trig' incorporates:
     *  Constant: '<S168>/k_LCK_LnCetr_DlyTm_Rdy2Act1'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion5_p, k_LCK_LnCetr_DlyTm_Rdy2Act,
                   &LCK_B.sf_Delay_Trig_jg, &LCK_DW.sf_Delay_Trig_jg);

    /* Delay: '<S168>/Delay1' */
    LCK_B.Delay1_k5 = LCK_DW.Delay1_DSTATE_a;

    /* RelationalOperator: '<S168>/Relational Operator99' incorporates:
     *  Constant: '<S168>/LCK_MODE_ACTIVE2'
     */
    LCK_B.RelationalOperator99 = (LCK_B.Delay1_k5 != LCK_MODE_ACTIVE);

    /* Delay: '<S168>/Delay' */
    LCK_B.Delay_j = LCK_DW.Delay_DSTATE_c;

    /* RelationalOperator: '<S168>/Relational Operator199' incorporates:
     *  Constant: '<S168>/LCK_MODE_ACTIVE2'
     */
    LCK_B.RelationalOperator199 = (LCK_MODE_ACTIVE == LCK_B.Delay_j);

    /* Logic: '<S168>/Logical Operator86' */
    LCK_B.LogicalOperator86 = (LCK_B.RelationalOperator99 &&
      LCK_B.RelationalOperator199);

    /* DataTypeConversion: '<S168>/Data Type Conversion84' */
    LCK_B.DataTypeConversion84 = LCK_B.LogicalOperator86;

    /* Chart: '<S202>/Trigger Hold' */
    guard1 = false;
    if (LCK_B.DataTypeConversion84 == 1.0F) {
      LCK_DW.count = 0.0F;
      LCK_DW.count_enable = 1.0F;
      guard1 = true;
    } else if ((LCK_DW.count <= k_LCK_HaloTime) && (LCK_DW.count_enable == 1.0F))
    {
      guard1 = true;
    } else {
      LCK_B.Out = 0.0F;
      LCK_DW.count_enable = 0.0F;
    }

    if (guard1) {
      LCK_B.Out = 1.0F;
      LCK_DW.count += ML_TIME_MSEC;
    }

    /* End of Chart: '<S202>/Trigger Hold' */

    /* Switch: '<S160>/Switch6' incorporates:
     *  Constant: '<S160>/Constant20'
     *  Constant: '<S160>/k_LCK_VisionOnly'
     */
    if (k_LCK_VisionOnly >= LCK_P.Switch6_Threshold) {
      LCK_B.Switch6_c = LCK_P.Constant20_Value_n;
    } else {
      LCK_B.Switch6_c = LCK_B.LatRq;
    }

    /* End of Switch: '<S160>/Switch6' */

    /* Gain: '<S201>/Gain 0' */
    velocity_ms = floor((real_T)c_BIT0 * LCK_B.Switch6_c);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain0_h = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S201>/Gain 0' */

    /* Logic: '<S168>/Logical Operator58' */
    LCK_B.LogicalOperator58 = ((!LCK_B.DataTypeConversion3_h) &&
      (!LCK_B.DataTypeConversion4_l));

    /* Gain: '<S201>/Gain1' */
    LCK_B.Gain1_m = (uint16_T)(LCK_B.LogicalOperator58 ? (int32_T)c_BIT1 : 0);

    /* Switch: '<S113>/Switch55' incorporates:
     *  Constant: '<S113>/Constant61'
     *  Constant: '<S113>/k_LCG_Configured'
     */
    if (k_LCG_Configured > LCK_P.Switch55_Threshold) {
      LCK_B.Switch55 = LCK_P.Constant61_Value_c;
    } else {
      LCK_B.Switch55 = LCK_B.sf_Sustain_wo_reset_o.sustain_value;
    }

    /* End of Switch: '<S113>/Switch55' */

    /* Logic: '<S113>/Logical Operator4' */
    LCK_B.LogicalOperator4_a = ((LCK_B.sf_Sustain_wo_reset.sustain_value != 0.0)
      || (LCK_B.Switch55 != 0.0) || (LCK_B.sf_Sustain_wo_reset_n.sustain_value
      != 0.0) || (LCK_B.sf_Sustain_wo_reset_c.sustain_value != 0.0) ||
      (LCK_B.sf_Sustain_wo_reset_e.sustain_value != 0.0));

    /* Logic: '<S168>/Logical Operator64' */
    LCK_B.LogicalOperator64 = !LCK_B.LogicalOperator4_a;

    /* Gain: '<S201>/Gain2' */
    LCK_B.Gain2_hh = (uint16_T)(LCK_B.LogicalOperator64 ? (int32_T)c_BIT2 : 0);

    /* Switch: '<S113>/Switch1' incorporates:
     *  Constant: '<S113>/Constant1'
     *  Constant: '<S113>/k_LCG_Configured1'
     */
    if (k_LCG_Configured > LCK_P.Switch1_Threshold) {
      LCK_B.Switch1_e = LCK_P.Constant1_Value_d;
    } else {
      LCK_B.Switch1_e = LCK_B.sf_Sustain_wo_reset_ce.sustain_value;
    }

    /* End of Switch: '<S113>/Switch1' */

    /* Logic: '<S113>/Logical Operator5' */
    LCK_B.LogicalOperator5_d = ((LCK_B.sf_Sustain_wo_reset_p.sustain_value !=
      0.0) || (LCK_B.Switch1_e != 0.0) ||
      (LCK_B.sf_Sustain_wo_reset_cl.sustain_value != 0.0) ||
      (LCK_B.sf_Sustain_wo_reset_cw.sustain_value != 0.0) ||
      (LCK_B.sf_Sustain_wo_reset_h.sustain_value != 0.0));

    /* Logic: '<S168>/Logical Operator65' */
    LCK_B.LogicalOperator65 = !LCK_B.LogicalOperator5_d;

    /* Gain: '<S201>/Gain3' */
    LCK_B.Gain3_a = (uint16_T)(LCK_B.LogicalOperator65 ? (int32_T)c_BIT3 : 0);

    /* Logic: '<S168>/Logical Operator26' */
    LCK_B.LogicalOperator26 = ((LCK_B.sf_Delay_Trig_a.Delay_Trig != 0.0F) &&
      (LCK_B.sf_Delay_Trig_jg.Delay_Trig != 0.0F));

    /* Gain: '<S201>/Gain4' */
    LCK_B.Gain4_d = (uint16_T)(LCK_B.LogicalOperator26 ? (int32_T)c_BIT4 : 0);

    /* RelationalOperator: '<S168>/Relational Operator12' incorporates:
     *  Constant: '<S111>/Constant5'
     *  Constant: '<S168>/ELK_MODE_STAGE1_LEFT'
     */
    LCK_B.RelationalOperator12_h = (LCK_P.Constant5_Value_ml <
      LCK_P.ELK_MODE_STAGE1_LEFT_Value);

    /* Gain: '<S201>/Gain5' */
    LCK_B.Gain5_mv = (uint16_T)(LCK_B.RelationalOperator12_h ? (int32_T)c_BIT5 :
      0);

    /* RelationalOperator: '<S168>/Relational Operator19' incorporates:
     *  Constant: '<S168>/Constant40'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator19_i = (LCK_U.LCK_VehSigInputs.LKATrqOvrlTrqDStat !=
      LCK_P.Constant40_Value);

    /* Gain: '<S201>/Gain6' */
    LCK_B.Gain6_h = (uint16_T)(LCK_B.RelationalOperator19_i ? (int32_T)c_BIT6 :
      0);

    /* Logic: '<S168>/Logical Operator93' */
    LCK_B.LogicalOperator93 = !(LCK_B.Out != 0.0F);

    /* Switch: '<S168>/Switch62' incorporates:
     *  Constant: '<S168>/LCK_HaloTime_Expired'
     *  Constant: '<S168>/k_LCK_HaloTime_Switch'
     */
    if (k_LCK_HaloTime_Switch >= LCK_P.Switch62_Threshold) {
      LCK_B.Switch62 = LCK_P.LCK_HaloTime_Expired_Value;
    } else {
      LCK_B.Switch62 = LCK_B.LogicalOperator93;
    }

    /* End of Switch: '<S168>/Switch62' */

    /* Gain: '<S201>/Gain7' */
    velocity_ms = floor((real_T)c_BIT7 * LCK_B.Switch62);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain7_i = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S201>/Gain7' */

    /* Gain: '<S201>/Gain8' incorporates:
     *  Constant: '<S168>/Constant32'
     */
    velocity_ms = floor((real_T)c_BIT8 * LCK_P.Constant32_Value);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain8_h = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S201>/Gain8' */

    /* Gain: '<S201>/Gain9' incorporates:
     *  Constant: '<S168>/Constant30'
     */
    velocity_ms = floor((real_T)c_BIT9 * LCK_P.Constant30_Value);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain9_i = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S201>/Gain9' */

    /* Gain: '<S201>/Gain10' incorporates:
     *  Constant: '<S168>/Constant36'
     */
    velocity_ms = floor((real_T)c_BIT10 * LCK_P.Constant36_Value_e);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain10_a = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S201>/Gain10' */

    /* Gain: '<S201>/Gain11' incorporates:
     *  Constant: '<S168>/Constant33'
     */
    velocity_ms = floor((real_T)c_BIT11 * LCK_P.Constant33_Value);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain11_i = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S201>/Gain11' */

    /* Gain: '<S201>/Gain12' incorporates:
     *  Constant: '<S168>/Constant34'
     */
    velocity_ms = floor((real_T)c_BIT12 * LCK_P.Constant34_Value_a);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain12_p = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S201>/Gain12' */

    /* Gain: '<S201>/Gain13' incorporates:
     *  Constant: '<S168>/Constant37'
     */
    velocity_ms = floor((real_T)c_BIT13 * LCK_P.Constant37_Value_d);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain13_d = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S201>/Gain13' */

    /* Gain: '<S201>/Gain14' incorporates:
     *  Constant: '<S168>/Constant38'
     */
    velocity_ms = floor((real_T)c_BIT14 * LCK_P.Constant38_Value);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain14_h = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S201>/Gain14' */

    /* Gain: '<S201>/Gain15' incorporates:
     *  Constant: '<S168>/Constant35'
     */
    velocity_ms = floor((real_T)c_BIT15 * LCK_P.Constant35_Value);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain15_p = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S201>/Gain15' */

    /* Sum: '<S201>/Add' */
    tmp = (uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)
      (uint16_T)((uint32_T)LCK_B.Gain0_h + LCK_B.Gain1_m) + LCK_B.Gain2_hh) +
      LCK_B.Gain3_a) + LCK_B.Gain4_d);
    LCK_B.Add_m4 = (uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)
      ((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)
      (uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)
      ((uint32_T)(uint16_T)((uint32_T)tmp + LCK_B.Gain5_mv) + LCK_B.Gain6_h) +
      LCK_B.Gain7_i) + LCK_B.Gain8_h) + LCK_B.Gain9_i) + LCK_B.Gain10_a) +
      LCK_B.Gain11_i) + LCK_B.Gain12_p) + LCK_B.Gain13_d) + LCK_B.Gain14_h) +
      LCK_B.Gain15_p);

    /* DataTypeConversion: '<S168>/Data Type Conversion14' */
    LCK_B.DataTypeConversion14 = LCK_B.Add_m4;

    /* DataTypeConversion: '<S168>/Data Type Conversion94' incorporates:
     *  Constant: '<S168>/k_LCK_Ready2Active_Mask'
     */
    vxs = (real32_T)floor(k_LCK_Ready2Active_Mask);
    if (rtIsNaNF(vxs) || rtIsInfF(vxs)) {
      vxs = 0.0F;
    } else {
      vxs = (real32_T)fmod(vxs, 65536.0);
    }

    LCK_B.DataTypeConversion94 = (uint16_T)(vxs < 0.0F ? (int32_T)(uint16_T)
      -(int16_T)(uint16_T)-vxs : (int32_T)(uint16_T)vxs);

    /* End of DataTypeConversion: '<S168>/Data Type Conversion94' */

    /* S-Function (sfix_bitop): '<S168>/Idle2ReadyBitwise 1' */
    LCK_B.Idle2ReadyBitwise1 = (uint16_T)(LCK_B.DataTypeConversion14 &
      LCK_B.DataTypeConversion94);

    /* RelationalOperator: '<S168>/Relational_Operator2' incorporates:
     *  Constant: '<S168>/Ready2Active_Mask1'
     */
    LCK_B.Relational_Operator2 = (LCK_B.Idle2ReadyBitwise1 ==
      k_LCK_Ready2Active_Mask);

    /* Logic: '<S154>/Logical Operator3' */
    LCK_B.LogicalOperator3_n = ((!(LCK_B.Switch5_k != 0.0)) &&
      (!LCK_B.RelationalOperator));

    /* Logic: '<S151>/Logical Operator60' */
    LCK_B.LogicalOperator60 = (LCK_B.DataTypeConversion3_h ||
      LCK_B.DataTypeConversion4_l);

    /* DataTypeConversion: '<S151>/Data Type Conversion34' */
    LCK_B.DataTypeConversion34 = LCK_B.LogicalOperator60;

    /* Chart: '<S174>/Delay_Trig' incorporates:
     *  Constant: '<S151>/k_LCK_Ovrd_DlyTm_Rdy2Idl1'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion34, k_LCK_Ovrd_DlyTm_Rdy2Idl,
                   &LCK_B.sf_Delay_Trig_j, &LCK_DW.sf_Delay_Trig_j);

    /* RelationalOperator: '<S151>/Relational Operator51' incorporates:
     *  Constant: '<S151>/const2'
     */
    LCK_B.RelationalOperator51 = (LCK_B.Switch6_c == LCK_P.const2_Value);

    /* RelationalOperator: '<S151>/Relational Operator26' incorporates:
     *  Constant: '<S151>/const1'
     */
    LCK_B.RelationalOperator26_c = (LCK_B.RelationalOperator ==
      LCK_P.const1_Value);

    /* Logic: '<S151>/Logical Operator57' */
    LCK_B.LogicalOperator57 = (LCK_B.RelationalOperator51 &&
      LCK_B.RelationalOperator26_c);

    /* RelationalOperator: '<S151>/Relational Operator64' incorporates:
     *  Constant: '<S151>/k_LCK_VehSpd_TJA_ICA_Bound2'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator64 = (LCK_U.LCK_VehSigInputs.Vehicle_Speed >
      k_LCK_VehSpd_TJA_ICA_Bound);

    /* RelationalOperator: '<S151>/Relational Operator63' incorporates:
     *  Constant: '<S151>/const3'
     */
    LCK_B.RelationalOperator63 = (LCK_B.Switch6_c == LCK_P.const3_Value);

    /* Switch: '<S151>/Switch16' */
    if (LCK_B.RelationalOperator64) {
      LCK_B.Switch16_e = LCK_B.LogicalOperator57;
    } else {
      LCK_B.Switch16_e = LCK_B.RelationalOperator63;
    }

    /* End of Switch: '<S151>/Switch16' */

    /* Gain: '<S173>/Gain 0' */
    LCK_B.Gain0_j = (uint16_T)(LCK_B.Switch16_e ? (int32_T)c_BIT0 : 0);

    /* Gain: '<S173>/Gain1' */
    vxs = (real32_T)floor((real32_T)c_BIT1 * LCK_B.sf_Delay_Trig_j.Delay_Trig);
    if (rtIsNaNF(vxs) || rtIsInfF(vxs)) {
      vxs = 0.0F;
    } else {
      vxs = (real32_T)fmod(vxs, 65536.0);
    }

    LCK_B.Gain1_ep = (uint16_T)(vxs < 0.0F ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-vxs : (int32_T)(uint16_T)vxs);

    /* End of Gain: '<S173>/Gain1' */

    /* Gain: '<S173>/Gain2' */
    LCK_B.Gain2_dj = (uint16_T)(LCK_B.LogicalOperator4_a ? (int32_T)c_BIT2 : 0);

    /* Gain: '<S173>/Gain3' */
    LCK_B.Gain3_e = (uint16_T)(LCK_B.LogicalOperator5_d ? (int32_T)c_BIT3 : 0);

    /* Logic: '<S151>/Logical Operator59' incorporates:
     *  Constant: '<S5>/Constant1'
     *  Constant: '<S5>/Constant3'
     */
    LCK_B.LogicalOperator59 = ((LCK_P.Constant3_Value_i != 0.0) ||
      (LCK_P.Constant1_Value_lh != 0.0));

    /* Switch: '<S151>/Switch58' incorporates:
     *  Constant: '<S151>/Constant70'
     *  Constant: '<S151>/k_LCG_Configured1'
     */
    if (k_LCG_Configured > LCK_P.Switch58_Threshold) {
      LCK_B.Switch58 = LCK_P.Constant70_Value;
    } else {
      LCK_B.Switch58 = LCK_B.LogicalOperator59;
    }

    /* End of Switch: '<S151>/Switch58' */

    /* Gain: '<S173>/Gain4' */
    velocity_ms = floor((real_T)c_BIT4 * LCK_B.Switch58);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain4_h = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S173>/Gain4' */

    /* RelationalOperator: '<S151>/Relational Operator13' incorporates:
     *  Constant: '<S111>/Constant5'
     *  Constant: '<S151>/ELK_MODE_STAGE1_LEFT1'
     */
    LCK_B.RelationalOperator13_a = (LCK_P.Constant5_Value_ml >=
      LCK_P.ELK_MODE_STAGE1_LEFT1_Value);

    /* Gain: '<S173>/Gain5' */
    LCK_B.Gain5_i = (uint16_T)(LCK_B.RelationalOperator13_a ? (int32_T)c_BIT5 :
      0);

    /* RelationalOperator: '<S151>/Relational Operator27' incorporates:
     *  Constant: '<S151>/Constant55'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.RelationalOperator27_o = (LCK_U.LCK_VehSigInputs.LKATrqOvrlTrqDStat ==
      LCK_P.Constant55_Value_i);

    /* Gain: '<S173>/Gain6' */
    LCK_B.Gain6_p = (uint16_T)(LCK_B.RelationalOperator27_o ? (int32_T)c_BIT6 :
      0);

    /* Gain: '<S173>/Gain7' */
    vxs = (real32_T)floor((real32_T)c_BIT7 * LCK_B.sf_Delay_Trig_hu.Delay_Trig);
    if (rtIsNaNF(vxs) || rtIsInfF(vxs)) {
      vxs = 0.0F;
    } else {
      vxs = (real32_T)fmod(vxs, 65536.0);
    }

    LCK_B.Gain7_n = (uint16_T)(vxs < 0.0F ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-vxs : (int32_T)(uint16_T)vxs);

    /* End of Gain: '<S173>/Gain7' */

    /* Gain: '<S173>/Gain8' incorporates:
     *  Constant: '<S151>/Constant1'
     */
    velocity_ms = floor((real_T)c_BIT8 * LCK_P.Constant1_Value_ch);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain8_l = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S173>/Gain8' */

    /* Gain: '<S173>/Gain9' incorporates:
     *  Constant: '<S151>/Constant39'
     */
    velocity_ms = floor((real_T)c_BIT9 * LCK_P.Constant39_Value_n);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain9_e = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S173>/Gain9' */

    /* Gain: '<S173>/Gain10' incorporates:
     *  Constant: '<S151>/Constant45'
     */
    velocity_ms = floor((real_T)c_BIT10 * LCK_P.Constant45_Value);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain10_d = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S173>/Gain10' */

    /* Gain: '<S173>/Gain11' incorporates:
     *  Constant: '<S151>/Constant42'
     */
    velocity_ms = floor((real_T)c_BIT11 * LCK_P.Constant42_Value);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain11_g = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S173>/Gain11' */

    /* Gain: '<S173>/Gain12' incorporates:
     *  Constant: '<S151>/Constant43'
     */
    velocity_ms = floor((real_T)c_BIT12 * LCK_P.Constant43_Value);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain12_i = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S173>/Gain12' */

    /* Gain: '<S173>/Gain13' incorporates:
     *  Constant: '<S151>/Constant46'
     */
    velocity_ms = floor((real_T)c_BIT13 * LCK_P.Constant46_Value);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain13_n = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S173>/Gain13' */

    /* Gain: '<S173>/Gain14' incorporates:
     *  Constant: '<S151>/Constant47'
     */
    velocity_ms = floor((real_T)c_BIT14 * LCK_P.Constant47_Value);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain14_g = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S173>/Gain14' */

    /* Gain: '<S173>/Gain15' incorporates:
     *  Constant: '<S151>/Constant44'
     */
    velocity_ms = floor((real_T)c_BIT15 * LCK_P.Constant44_Value);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 65536.0);
    }

    LCK_B.Gain15_a = (uint16_T)(velocity_ms < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-velocity_ms : (int32_T)(uint16_T)velocity_ms);

    /* End of Gain: '<S173>/Gain15' */

    /* Sum: '<S173>/Add' */
    tmp = (uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)
      (uint16_T)((uint32_T)LCK_B.Gain0_j + LCK_B.Gain1_ep) + LCK_B.Gain2_dj) +
      LCK_B.Gain3_e) + LCK_B.Gain4_h);
    LCK_B.Add_hv = (uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)
      ((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)
      (uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)
      ((uint32_T)(uint16_T)((uint32_T)tmp + LCK_B.Gain5_i) + LCK_B.Gain6_p) +
      LCK_B.Gain7_n) + LCK_B.Gain8_l) + LCK_B.Gain9_e) + LCK_B.Gain10_d) +
      LCK_B.Gain11_g) + LCK_B.Gain12_i) + LCK_B.Gain13_n) + LCK_B.Gain14_g) +
      LCK_B.Gain15_a);

    /* DataTypeConversion: '<S151>/Data Type Conversion87' */
    LCK_B.TJA_VehInvalid_Magic = LCK_B.Add_hv;

    /* DataTypeConversion: '<S151>/Data Type Conversion91' incorporates:
     *  Constant: '<S151>/k_LCK_Active2Ready_Mask'
     */
    vxs = (real32_T)floor(k_LCK_Active2Ready_Mask);
    if (rtIsNaNF(vxs) || rtIsInfF(vxs)) {
      vxs = 0.0F;
    } else {
      vxs = (real32_T)fmod(vxs, 65536.0);
    }

    LCK_B.DataTypeConversion91 = (uint16_T)(vxs < 0.0F ? (int32_T)(uint16_T)
      -(int16_T)(uint16_T)-vxs : (int32_T)(uint16_T)vxs);

    /* End of DataTypeConversion: '<S151>/Data Type Conversion91' */

    /* S-Function (sfix_bitop): '<S151>/Active2ReadyBitwise Operator' */
    LCK_B.Active2ReadyBitwiseOperator = (uint16_T)(LCK_B.TJA_VehInvalid_Magic &
      LCK_B.DataTypeConversion91);

    /* RelationalOperator: '<S151>/Relational_Operator3' incorporates:
     *  Constant: '<S151>/ZERO4'
     */
    LCK_B.Relational_Operator3 = (LCK_B.Active2ReadyBitwiseOperator != C_ZERO);

    /* Logic: '<S156>/Logical Operator3' */
    LCK_B.LogicalOperator3_p = ((!(LCK_B.Switch5_k != 0.0)) &&
      (!LCK_B.RelationalOperator));

    /* RelationalOperator: '<S155>/Relational Operator40' incorporates:
     *  Constant: '<S111>/Constant3'
     *  Constant: '<S155>/const26'
     */
    LCK_B.RelationalOperator40_a = (LCK_P.Constant3_Value_pd !=
      LCK_P.const26_Value);

    /* RelationalOperator: '<S155>/Relational Operator41' incorporates:
     *  Constant: '<S155>/const27'
     */
    LCK_B.RelationalOperator41_h = (LCK_B.Switch5_k == LCK_P.const27_Value);

    /* RelationalOperator: '<S155>/Relational Operator42' incorporates:
     *  Constant: '<S155>/const28'
     */
    LCK_B.RelationalOperator42_m = (LCK_B.RelationalOperator ==
      LCK_P.const28_Value);

    /* Logic: '<S155>/Logical Operator36' */
    LCK_B.LogicalOperator36 = (LCK_B.RelationalOperator41_h ||
      LCK_B.RelationalOperator42_m);

    /* Logic: '<S155>/Logical Operator35' */
    LCK_B.LogicalOperator35 = (LCK_B.RelationalOperator40_a &&
      LCK_B.LogicalOperator36);

    /* Logic: '<S157>/Logical Operator16' */
    LCK_B.LogicalOperator16_m = (LCK_B.LogicalOperator35 &&
      LCK_B.Relational_Operator10);

    /* Delay: '<S171>/Delay' */
    LCK_B.Delay_m = LCK_DW.Delay_DSTATE_p;

    /* RelationalOperator: '<S171>/Relational Operator34' incorporates:
     *  Constant: '<S171>/const21'
     */
    LCK_B.RelationalOperator34 = (LCK_B.Delay_m == LCK_P.const21_Value);

    /* Delay: '<S171>/Delay2' */
    LCK_B.Delay2 = LCK_DW.Delay2_DSTATE;

    /* RelationalOperator: '<S171>/Relational Operator9' incorporates:
     *  Constant: '<S171>/const9'
     */
    LCK_B.RelationalOperator9_n = (LCK_B.Delay2 == LCK_P.const9_Value);

    /* RelationalOperator: '<S223>/Compare' incorporates:
     *  Constant: '<S223>/Constant'
     *  Inport: '<Root>/ZOP_LC_Command'
     */
    LCK_B.Compare_j = (LCK_U.ZOP_LC_Command == LCK_P.CompareToConstant_const);

    /* RelationalOperator: '<S224>/Compare' incorporates:
     *  Constant: '<S224>/Constant'
     *  Inport: '<Root>/ZOP_LC_Command'
     */
    LCK_B.Compare_g = (LCK_U.ZOP_LC_Command == LCK_P.CompareToConstant1_const);

    /* Switch: '<S171>/Switch1' incorporates:
     *  Constant: '<S171>/const14'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    if (LCK_B.Compare_g) {
      LCK_B.Switch1_l = LCK_P.const14_Value;
    } else {
      LCK_B.Switch1_l = LCK_U.LCK_VehSigInputs.DirectionIndSwitchPos;
    }

    /* End of Switch: '<S171>/Switch1' */

    /* Switch: '<S171>/Switch7' incorporates:
     *  Constant: '<S171>/const13'
     */
    if (LCK_B.Compare_j) {
      LCK_B.Switch7_o = LCK_P.const13_Value;
    } else {
      LCK_B.Switch7_o = LCK_B.Switch1_l;
    }

    /* End of Switch: '<S171>/Switch7' */

    /* RelationalOperator: '<S171>/Relational Operator1' incorporates:
     *  Constant: '<S171>/const1'
     */
    LCK_B.RelationalOperator1_k = (LCK_P.const1_Value_k == LCK_B.Switch7_o);

    /* RelationalOperator: '<S171>/Relational Operator10' incorporates:
     *  Constant: '<S171>/const11'
     *  Inport: '<Root>/ZOP_LC_Command'
     */
    LCK_B.RelationalOperator10_a = (LCK_P.const11_Value == LCK_U.ZOP_LC_Command);

    /* Logic: '<S171>/Logical Operator9' */
    LCK_B.LogicalOperator9_i = (LCK_B.RelationalOperator1_k ||
      LCK_B.RelationalOperator10_a);

    /* RelationalOperator: '<S171>/Relational Operator13' incorporates:
     *  Constant: '<S171>/const15'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator13_b = (LCK_U.LCK_LanSigInputs.VID_Lin_01_Type ==
      LCK_P.const15_Value);

    /* Logic: '<S171>/Logical Operator31' */
    LCK_B.LogicalOperator31_e = (LCK_B.RelationalOperator34 &&
      LCK_B.RelationalOperator9_n && LCK_B.LogicalOperator9_i &&
      LCK_B.RelationalOperator13_b);

    /* RelationalOperator: '<S171>/Relational Operator11' incorporates:
     *  Constant: '<S171>/const12'
     *  Inport: '<Root>/ZOP_LC_Command'
     */
    LCK_B.RelationalOperator11_n = (LCK_U.ZOP_LC_Command == LCK_P.const12_Value);

    /* RelationalOperator: '<S171>/Relational Operator2' incorporates:
     *  Constant: '<S171>/const3'
     */
    LCK_B.RelationalOperator2_k = (LCK_B.Switch7_o == LCK_P.const3_Value_b);

    /* Logic: '<S171>/Logical Operator10' */
    LCK_B.LogicalOperator10_e = (LCK_B.RelationalOperator11_n ||
      LCK_B.RelationalOperator2_k);

    /* RelationalOperator: '<S171>/Relational Operator14' incorporates:
     *  Constant: '<S171>/const16'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.RelationalOperator14_n = (LCK_U.LCK_LanSigInputs.VID_Lin_02_Type ==
      LCK_P.const16_Value);

    /* Logic: '<S171>/Logical Operator1' */
    LCK_B.LogicalOperator1_l = (LCK_B.LogicalOperator10_e &&
      LCK_B.RelationalOperator34 && LCK_B.RelationalOperator9_n &&
      LCK_B.RelationalOperator14_n);

    /* Delay: '<S171>/Delay1' */
    LCK_B.Delay1_m = LCK_DW.Delay1_DSTATE_f;

    /* RelationalOperator: '<S171>/Relational Operator4' incorporates:
     *  Constant: '<S171>/const4'
     */
    LCK_B.RelationalOperator4_m = (LCK_B.Delay1_m == LCK_P.const4_Value);

    /* RelationalOperator: '<S171>/Relational Operator3' incorporates:
     *  Constant: '<S171>/const2'
     */
    LCK_B.RelationalOperator3_mm = (LCK_B.Switch7_o != LCK_P.const2_Value_a);

    /* Abs: '<S171>/Abs' */
    LCK_B.Abs_h = (real32_T)fabs(LCK_B.Switch9_e);

    /* RelationalOperator: '<S171>/Relational Operator6' incorporates:
     *  Constant: '<S171>/const6'
     */
    LCK_B.RelationalOperator6_k = (LCK_B.Abs_h <= LCK_P.const6_Value);

    /* Abs: '<S171>/Abs1' */
    LCK_B.Abs1_p = (real32_T)fabs(LCK_B.Switch9_e);

    /* RelationalOperator: '<S171>/Relational Operator7' incorporates:
     *  Constant: '<S171>/const7'
     */
    LCK_B.RelationalOperator7_l = (LCK_B.Abs1_p <= LCK_P.const7_Value);

    /* Logic: '<S171>/Logical Operator3' */
    LCK_B.LogicalOperator3_i = (LCK_B.RelationalOperator6_k &&
      LCK_B.RelationalOperator7_l);

    /* Logic: '<S171>/Logical Operator5' */
    LCK_B.LogicalOperator5_o = (LCK_B.RelationalOperator3_mm ||
      LCK_B.LogicalOperator3_i);

    /* Logic: '<S171>/Logical Operator7' incorporates:
     *  Constant: '<S171>/const10'
     */
    LCK_B.LogicalOperator7_i = (LCK_B.LogicalOperator5_o || (k_LC_Exit_Switch !=
      0.0F));

    /* Logic: '<S171>/Logical Operator2' */
    LCK_B.LogicalOperator2_a = (LCK_B.RelationalOperator4_m &&
      LCK_B.LogicalOperator7_i);

    /* RelationalOperator: '<S171>/Relational Operator12' incorporates:
     *  Constant: '<S171>/const9'
     */
    LCK_B.RelationalOperator12_d = (LCK_P.const9_Value == LCK_B.Switch7_o);

    /* Logic: '<S171>/Logical Operator12' */
    LCK_B.LogicalOperator12_l = (LCK_B.LogicalOperator2_a ||
      LCK_B.RelationalOperator12_d);

    /* RelationalOperator: '<S171>/Relational Operator8' incorporates:
     *  Constant: '<S171>/const8'
     */
    LCK_B.RelationalOperator8_o = (LCK_B.Switch7_o != LCK_P.const8_Value);

    /* Logic: '<S171>/Logical Operator6' */
    LCK_B.LogicalOperator6_l = (LCK_B.LogicalOperator3_i ||
      LCK_B.RelationalOperator8_o);

    /* Logic: '<S171>/Logical Operator8' incorporates:
     *  Constant: '<S171>/const10'
     */
    LCK_B.LogicalOperator8_l = ((k_LC_Exit_Switch != 0.0F) ||
      LCK_B.LogicalOperator6_l);

    /* RelationalOperator: '<S171>/Relational Operator5' incorporates:
     *  Constant: '<S171>/const5'
     */
    LCK_B.RelationalOperator5_d = (LCK_B.Delay1_m == LCK_P.const5_Value);

    /* Logic: '<S171>/Logical Operator4' */
    LCK_B.LogicalOperator4_m = (LCK_B.LogicalOperator8_l &&
      LCK_B.RelationalOperator5_d);

    /* Logic: '<S171>/Logical Operator11' */
    LCK_B.LogicalOperator11_n = (LCK_B.RelationalOperator12_d ||
      LCK_B.LogicalOperator4_m);

    /* Chart: '<S5>/LCK Mode Manager' incorporates:
     *  Constant: '<S111>/Constant3'
     */
    if (LCK_DW.is_active_c177_LCK == 0U) {
      LCK_DW.is_active_c177_LCK = 1U;
      LCK_DW.is_c177_LCK = LCK_IN_LCK_Off;

      /* Outport: '<Root>/LCK_Mode' */
      LCK_Y.LCK_Mode = LCK_MODE_OFF;
    } else {
      switch (LCK_DW.is_c177_LCK) {
       case LCK_IN_LCKActive:
        if (LCK_B.LogicalOperator3_n) {
          LCK_DW.is_LCKActive = LCK_IN_NO_ACTIVE_CHILD_a;
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Off;

          /* Outport: '<Root>/LCK_Mode' */
          LCK_Y.LCK_Mode = LCK_MODE_OFF;
        } else if (LCK_P.Constant3_Value_pd) {
          LCK_DW.is_LCKActive = LCK_IN_NO_ACTIVE_CHILD_a;
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Error;

          /* Outport: '<Root>/LCK_Mode' */
          LCK_Y.LCK_Mode = LCK_MODE_ERROR;
        } else if (LCK_B.Relational_Operator1) {
          LCK_DW.is_LCKActive = LCK_IN_NO_ACTIVE_CHILD_a;
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Idle;

          /* Outport: '<Root>/LCK_Mode' */
          LCK_Y.LCK_Mode = LCK_MODE_IDLE;
        } else if (LCK_B.Relational_Operator3) {
          LCK_DW.is_LCKActive = LCK_IN_NO_ACTIVE_CHILD_a;
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Ready;

          /* Outport: '<Root>/LCK_Mode' */
          LCK_Y.LCK_Mode = LCK_MODE_READY;
        } else {
          switch (LCK_DW.is_LCKActive) {
           case LCK_IN_LCK_INIT:
            if (LCK_B.LogicalOperator31_e) {
              LCK_DW.is_LCKActive = LCK_IN_LEFTLC;

              /* Outport: '<Root>/LCK_Mode' */
              LCK_Y.LCK_Mode = LCK_MODE_LEFT_LANE_CHANGE;
            } else {
              if (LCK_B.LogicalOperator1_l) {
                LCK_DW.is_LCKActive = LCK_IN_RIGHTLC;

                /* Outport: '<Root>/LCK_Mode' */
                LCK_Y.LCK_Mode = LCK_MODE_RIGHT_LANE_CHANGE;
              }
            }
            break;

           case LCK_IN_LEFTLC:
            if (LCK_B.LogicalOperator12_l) {
              LCK_DW.is_LCKActive = LCK_IN_LCK_INIT;

              /* Outport: '<Root>/LCK_Mode' */
              LCK_Y.LCK_Mode = LCK_MODE_ACTIVE;
            }
            break;

           default:
            if (LCK_B.LogicalOperator11_n) {
              LCK_DW.is_LCKActive = LCK_IN_LCK_INIT;

              /* Outport: '<Root>/LCK_Mode' */
              LCK_Y.LCK_Mode = LCK_MODE_ACTIVE;
            }
            break;
          }
        }
        break;

       case LCK_IN_LCK_Error:
        if (LCK_B.LogicalOperator16_m) {
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Ready;

          /* Outport: '<Root>/LCK_Mode' */
          LCK_Y.LCK_Mode = LCK_MODE_READY;
        } else if (LCK_B.LogicalOperator3_p) {
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Off;

          /* Outport: '<Root>/LCK_Mode' */
          LCK_Y.LCK_Mode = LCK_MODE_OFF;
        } else {
          if (LCK_B.LogicalOperator35) {
            LCK_DW.is_c177_LCK = LCK_IN_LCK_Idle;

            /* Outport: '<Root>/LCK_Mode' */
            LCK_Y.LCK_Mode = LCK_MODE_IDLE;
          }
        }
        break;

       case LCK_IN_LCK_Idle:
        if (LCK_P.Constant3_Value_pd) {
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Error;

          /* Outport: '<Root>/LCK_Mode' */
          LCK_Y.LCK_Mode = LCK_MODE_ERROR;
        } else if (LCK_B.LogicalOperator3_j) {
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Off;

          /* Outport: '<Root>/LCK_Mode' */
          LCK_Y.LCK_Mode = LCK_MODE_OFF;
        } else {
          if (LCK_B.Relational_Operator10) {
            LCK_DW.is_c177_LCK = LCK_IN_LCK_Ready;

            /* Outport: '<Root>/LCK_Mode' */
            LCK_Y.LCK_Mode = LCK_MODE_READY;
          }
        }
        break;

       case LCK_IN_LCK_Off:
        if (LCK_B.LogicalOperator49) {
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Ready;

          /* Outport: '<Root>/LCK_Mode' */
          LCK_Y.LCK_Mode = LCK_MODE_READY;
        } else {
          if (LCK_B.LogicalOperator_c) {
            LCK_DW.is_c177_LCK = LCK_IN_LCK_Idle;

            /* Outport: '<Root>/LCK_Mode' */
            LCK_Y.LCK_Mode = LCK_MODE_IDLE;
          }
        }
        break;

       default:
        if (LCK_P.Constant3_Value_pd) {
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Error;

          /* Outport: '<Root>/LCK_Mode' */
          LCK_Y.LCK_Mode = LCK_MODE_ERROR;
        } else if (LCK_B.LogicalOperator3_b) {
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Off;

          /* Outport: '<Root>/LCK_Mode' */
          LCK_Y.LCK_Mode = LCK_MODE_OFF;
        } else if (LCK_B.Relational_Operator1) {
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Idle;

          /* Outport: '<Root>/LCK_Mode' */
          LCK_Y.LCK_Mode = LCK_MODE_IDLE;
        } else {
          if (LCK_B.Relational_Operator2) {
            LCK_DW.is_c177_LCK = LCK_IN_LCKActive;
            LCK_DW.is_LCKActive = LCK_IN_LCK_INIT;

            /* Outport: '<Root>/LCK_Mode' */
            LCK_Y.LCK_Mode = LCK_MODE_ACTIVE;
          }
        }
        break;
      }
    }

    /* End of Chart: '<S5>/LCK Mode Manager' */

    /* RelationalOperator: '<S6>/Relational Operator2' incorporates:
     *  Constant: '<S6>/Constant3'
     *  Outport: '<Root>/LCK_Mode'
     */
    LCK_B.RelationalOperator2_h = (LCK_Y.LCK_Mode == LCK_P.Constant3_Value_p);

    /* RelationalOperator: '<S6>/Relational Operator3' incorporates:
     *  Constant: '<S6>/Constant5'
     *  Outport: '<Root>/LCK_Mode'
     */
    LCK_B.RelationalOperator3_d = (LCK_Y.LCK_Mode == LCK_P.Constant5_Value_e);

    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S6>/Constant6'
     *  Constant: '<S6>/Constant7'
     */
    if (LCK_B.RelationalOperator3_d) {
      LCK_B.Switch2_m = LCK_P.Constant6_Value_lb;
    } else {
      LCK_B.Switch2_m = LCK_P.Constant7_Value_p;
    }

    /* End of Switch: '<S6>/Switch2' */

    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/Constant4'
     */
    if (LCK_B.RelationalOperator2_h) {
      LCK_B.Switch1_f = LCK_P.Constant4_Value_k;
    } else {
      LCK_B.Switch1_f = LCK_B.Switch2_m;
    }

    /* End of Switch: '<S6>/Switch1' */

    /* DataTypeConversion: '<S6>/Data Type Conversion17' */
    LCK_B.DataTypeConversion17 = LCK_B.Switch1_f;

    /* Delay: '<S6>/Delay2' */
    LCK_B.Delay2_h = LCK_DW.Delay2_DSTATE_e;

    /* Chart: '<S6>/Chart' incorporates:
     *  Outport: '<Root>/LCK_Mode'
     */
    if (LCK_DW.is_active_c3_LCK == 0U) {
      LCK_DW.is_active_c3_LCK = 1U;
      LCK_DW.is_c3_LCK = LCK_IN_Initialization;
      LCK_B.LC_Phase = 0.0F;
    } else {
      switch (LCK_DW.is_c3_LCK) {
       case LCK_IN_Initialization:
        LCK_B.LC_Phase = 0.0F;
        if (LCK_Y.LCK_Mode == 5.0F) {
          LCK_DW.is_c3_LCK = LCK_IN_LC_Phase1;
          LCK_B.LC_Phase = 1.0F;
        } else {
          if (LCK_Y.LCK_Mode == 6.0F) {
            LCK_DW.is_c3_LCK = LCK_IN_LC_Phase3;
            LCK_B.LC_Phase = 3.0F;
          }
        }
        break;

       case LCK_IN_LC_Phase1:
        LCK_B.LC_Phase = 1.0F;
        if ((LCK_Y.LCK_Mode != 5.0F) && (LCK_Y.LCK_Mode != 6.0F)) {
          LCK_DW.is_c3_LCK = LCK_IN_Initialization;
          LCK_B.LC_Phase = 0.0F;
        } else {
          if (LCK_B.Switch9_e - LCK_B.Delay2_h < -1.0F) {
            LCK_DW.is_c3_LCK = LCK_IN_LC_Phase2;
            LCK_B.LC_Phase = 2.0F;
          }
        }
        break;

       case LCK_IN_LC_Phase2:
        LCK_B.LC_Phase = 2.0F;
        if ((LCK_Y.LCK_Mode != 5.0F) && (LCK_Y.LCK_Mode != 6.0F)) {
          LCK_DW.is_c3_LCK = LCK_IN_Initialization;
          LCK_B.LC_Phase = 0.0F;
        } else {
          if (LCK_B.Switch9_e - LCK_B.Delay2_h > 1.0F) {
            LCK_DW.is_c3_LCK = LCK_IN_LC_Phase1;
            LCK_B.LC_Phase = 1.0F;
          }
        }
        break;

       case LCK_IN_LC_Phase3:
        LCK_B.LC_Phase = 3.0F;
        if ((LCK_Y.LCK_Mode != 5.0F) && (LCK_Y.LCK_Mode != 6.0F)) {
          LCK_DW.is_c3_LCK = LCK_IN_Initialization;
          LCK_B.LC_Phase = 0.0F;
        } else {
          if (LCK_B.Switch9_e - LCK_B.Delay2_h > 1.0F) {
            LCK_DW.is_c3_LCK = LCK_IN_LC_Phase4;
            LCK_B.LC_Phase = 4.0F;
          }
        }
        break;

       default:
        LCK_B.LC_Phase = 4.0F;
        if ((LCK_Y.LCK_Mode != 5.0F) && (LCK_Y.LCK_Mode != 6.0F)) {
          LCK_DW.is_c3_LCK = LCK_IN_Initialization;
          LCK_B.LC_Phase = 0.0F;
        } else {
          if (LCK_B.Switch9_e - LCK_B.Delay2_h < -1.0F) {
            LCK_DW.is_c3_LCK = LCK_IN_LC_Phase3;
            LCK_B.LC_Phase = 3.0F;
          }
        }
        break;
      }
    }

    /* End of Chart: '<S6>/Chart' */

    /* RelationalOperator: '<S6>/Relational Operator' incorporates:
     *  Constant: '<S6>/Constant1'
     *  Outport: '<Root>/LCK_Mode'
     */
    LCK_B.RelationalOperator_cq = (LCK_Y.LCK_Mode > LCK_P.Constant1_Value_cn);

    /* DataTypeConversion: '<S6>/Data Type Conversion18' */
    LCK_B.DataTypeConversion18 = LCK_B.RelationalOperator_cq;

    /* Gain: '<S231>/Gain' */
    LCK_B.Gain_b = C_KPH2MPS * LCK_B.DataTypeConversion16;

    /* Chart: '<S231>/Chart1' incorporates:
     *  Constant: '<S231>/Constant1'
     */
    if (LCK_DW.is_active_c4_LCK == 0U) {
      LCK_DW.is_active_c4_LCK = 1U;
      LCK_DW.is_c4_LCK = LCK_IN_Init;
      LCK_DW.iter_cnt = 0.0;
      LCK_B.LC_path_gen_flag = 0.0F;
      LCK_B.pass_cnt = 0.0F;
      LCK_B.long_s = 0.0F;
    } else {
      switch (LCK_DW.is_c4_LCK) {
       case LCK_IN_Init:
        if (LCK_B.DataTypeConversion18 == 1.0) {
          LCK_DW.is_c4_LCK = LCK_IN_LC_Gen;
          LCK_B.LC_path_gen_flag = 1.0F;
          LCK_DW.iter_cnt = 0.0;
          LCK_B.pass_cnt++;
          LCK_B.long_s = 0.0F;
        }
        break;

       case LCK_IN_LC_Flag_Clear:
        if (LCK_DW.iter_cnt == LCK_P.Constant1_Value_i) {
          LCK_DW.is_c4_LCK = LCK_IN_LC_Gen;
          LCK_B.LC_path_gen_flag = 1.0F;
          LCK_DW.iter_cnt = 0.0;
          LCK_B.pass_cnt++;
          LCK_B.long_s = 0.0F;
        } else if (LCK_B.DataTypeConversion18 == 0.0) {
          LCK_DW.is_c4_LCK = LCK_IN_Init;
          LCK_DW.iter_cnt = 0.0;
          LCK_B.LC_path_gen_flag = 0.0F;
          LCK_B.pass_cnt = 0.0F;
          LCK_B.long_s = 0.0F;
        } else {
          LCK_DW.iter_cnt++;
          LCK_B.pass_cnt++;
          LCK_B.long_s += (real32_T)(LCK_B.Gain_b * 0.02);
        }
        break;

       default:
        if (LCK_B.LC_path_gen_flag == 1.0F) {
          LCK_DW.is_c4_LCK = LCK_IN_LC_Flag_Clear;
          LCK_B.LC_path_gen_flag = 0.0F;
          LCK_B.pass_cnt++;
          LCK_B.long_s += (real32_T)(LCK_B.Gain_b * 0.02);
        } else if (LCK_B.DataTypeConversion18 == 0.0) {
          LCK_DW.is_c4_LCK = LCK_IN_Init;
          LCK_DW.iter_cnt = 0.0;
          LCK_B.LC_path_gen_flag = 0.0F;
          LCK_B.pass_cnt = 0.0F;
          LCK_B.long_s = 0.0F;
        } else {
          LCK_B.LC_path_gen_flag = 0.0F;
          LCK_B.pass_cnt++;
        }
        break;
      }
    }

    /* End of Chart: '<S231>/Chart1' */

    /* DataTypeConversion: '<S231>/Data Type Conversion1' */
    LCK_B.DataTypeConversion1 = LCK_B.LC_path_gen_flag;

    /* Product: '<S231>/Product1' */
    LCK_B.Product1 = LCK_B.Switch9_e * LCK_B.DataTypeConversion17;

    /* Sum: '<S231>/Subtract2' */
    LCK_B.Subtract2 = LCK_B.DataTypeConversion15 - LCK_B.Product1;

    /* RelationalOperator: '<S231>/Relational Operator6' incorporates:
     *  Constant: '<S231>/Constant10'
     */
    LCK_B.RelationalOperator6_g = (LCK_B.LC_Phase == LCK_P.Constant10_Value_g);

    /* RelationalOperator: '<S231>/Relational Operator5' incorporates:
     *  Constant: '<S231>/Constant9'
     */
    LCK_B.RelationalOperator5_c = (LCK_B.LC_Phase == LCK_P.Constant9_Value_b);

    /* Logic: '<S231>/Logical Operator1' */
    LCK_B.LogicalOperator1_g = (LCK_B.RelationalOperator6_g ||
      LCK_B.RelationalOperator5_c);

    /* Abs: '<S231>/Abs' */
    LCK_B.Abs_b = (real32_T)fabs(LCK_B.Switch9_e);

    /* Switch: '<S231>/Switch5' */
    if (LCK_B.LogicalOperator1_g) {
      LCK_B.Switch5_d = (real32_T)LCK_B.Subtract2;
    } else {
      LCK_B.Switch5_d = LCK_B.Abs_b;
    }

    /* End of Switch: '<S231>/Switch5' */

    /* Outport: '<Root>/LC_dx' incorporates:
     *  Abs: '<S231>/Abs2'
     */
    LCK_Y.LC_dx = (real32_T)fabs(LCK_B.Switch5_d);

    /* Gain: '<S231>/Gain1' incorporates:
     *  Outport: '<Root>/LC_dx'
     */
    LCK_B.Gain1 = (real_T)LCK_P.Gain1_Gain_e * LCK_Y.LC_dx;

    /* DataTypeConversion: '<S231>/Data Type Conversion3' */
    LCK_B.DataTypeConversion3 = LCK_B.long_s;

    /* DataTypeConversion: '<S231>/Data Type Conversion4' */
    LCK_B.DataTypeConversion4_o = (real32_T)LCK_B.DataTypeConversion16;

    /* Lookup_n-D: '<S231>/Lookup_Table' */
    LCK_B.Lookup_Table = look1_iflf_binlcpw(LCK_B.DataTypeConversion4_o,
      k_LCK_VspdBks, LCK_P.Lookup_Table_tableData, 15U);

    /* DataTypeConversion: '<S231>/Data Type Conversion5' */
    LCK_B.DataTypeConversion5 = LCK_B.Lookup_Table;

    /* MATLAB Function: '<S231>/Path_Planning_Function ' */
    memcpy(&LCK_B.output[0], &LCK_B.DataTypeConversion2[0], 3200U * sizeof
           (real_T));
    LCK_B.search_latoff = 0.0;
    LCK_B.search_theta = 0.0;
    LCK_B.search_kappa = 0.0;
    velocity_ms = LCK_B.DataTypeConversion16 / 3.6;
    if (LCK_B.DataTypeConversion1 == 1.0) {
      LCK_calculateLEN(LCK_B.DataTypeConversion16, LCK_B.DataTypeConversion5);
      LCK_DW.LC_TgtDy_temp = velocity_ms * LCK_B.DataTypeConversion5;
      Te = fabs(LCK_B.Gain1) / LCK_B.DataTypeConversion15 *
        LCK_B.DataTypeConversion5;
      Te -= LCK_mod(Te);
      vxs = (real32_T)velocity_ms * (real32_T)sin((real32_T)atan
        (LCK_B.Switch10_g));
      sf_internal_predicateOutput = (rtIsNaNF(vxs) || (vxs < -0.4));
      if (sf_internal_predicateOutput) {
        vxs = -0.4F;
      }

      sf_internal_predicateOutput = (rtIsNaNF(vxs) || (vxs > 0.4));
      if (sf_internal_predicateOutput) {
        vxs = 0.4F;
      }

      LCK_quintic_polynomial(LCK_B.Switch9_e, vxs, LCK_B.Switch9_e + (real32_T)
        (fabs(LCK_B.Gain1) * LCK_B.DataTypeConversion17), Te, &a0, &a1, &a2, &a3,
        &a4, &a5);
      LCK_combination(a0, a1, a3, a4, a5, Te, velocity_ms, LCK_B.ref_poly);
      LCK_reference_generator_oneshot(LCK_B.Switch9_e, LCK_B.Switch10_g, 0.0F,
        0.0F, Te, velocity_ms, LCK_B.reference);
      velocity_ms = LCK_find_valid_ref_max_len(LCK_B.reference);
      LCK_reference_generation(LCK_B.reference, LCK_B.ref_poly, velocity_ms,
        LCK_B.trajs_new_origin);
      LCK_calculat_delta_heading(LCK_B.reference, LCK_B.trajs_new_origin,
        velocity_ms, LCK_B.delta_heading_rad);
      LCK_calculate_kappa(LCK_B.trajs_new_origin, velocity_ms - 1.0, LCK_B.dv0);
      for (i = 0; i < 800; i++) {
        LCK_B.output[i] = LCK_B.trajs_new_origin[i];
        LCK_B.output[i + 800] = LCK_B.ref_poly[i];
      }

      for (i = 0; i < 400; i++) {
        LCK_B.output[i + 1600] = LCK_B.delta_heading_rad[i];
        LCK_B.output[i + 2000] = LCK_B.dv0[i];
      }

      for (i = 0; i < 800; i++) {
        LCK_B.output[i + 2400] = -1.0;
      }

      LCK_calculate_max_ref(LCK_B.output, &velocity_ms, &Te);
      LCK_Reshape(LCK_B.output, velocity_ms, 0.0F);
      LCK_post_processing(LCK_B.output, LCK_B.DataTypeConversion3,
                          &LCK_B.search_latoff, &LCK_B.search_theta,
                          &LCK_B.search_kappa);
    } else {
      if (LCK_B.DataTypeConversion1 == 0.0) {
        LCK_post_processing(LCK_B.DataTypeConversion2, LCK_B.DataTypeConversion3,
                            &LCK_B.search_latoff, &LCK_B.search_theta,
                            &LCK_B.search_kappa);
      }
    }

    LCK_B.LC_TgtDy = LCK_DW.LC_TgtDy_temp;

    /* End of MATLAB Function: '<S231>/Path_Planning_Function ' */

    /* Gain: '<S6>/Gain1' */
    LCK_B.Gain1_i = LCK_P.Gain1_Gain * LCK_B.search_kappa;

    /* Sum: '<S6>/Subtract2' */
    LCK_B.Subtract2_g = LCK_B.Switch11_h + LCK_B.Gain1_i;

    /* DataTypeConversion: '<S6>/Data Type Conversion2' */
    LCK_B.LC_A2 = (real32_T)LCK_B.Subtract2_g;

    /* UnitDelay: '<S25>/Unit Delay' */
    LCK_B.UnitDelay_b = LCK_DW.UnitDelay_DSTATE_b;

    /* Product: '<S22>/Product6' incorporates:
     *  Constant: '<S22>/k_LCK_Fac_Vspd2RngThr_FalRec'
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.Product6 = k_LCK_Fac_Vspd2RngThr_FalRec *
      LCK_U.LCK_VehSigInputs.Vehicle_Speed;

    /* RelationalOperator: '<S22>/Relational Operator2' incorporates:
     *  Inport: '<Root>/LCK_TrackSigInputs'
     */
    LCK_B.RelationalOperator2_d = (LCK_B.Product6 <
      LCK_U.LCK_TrackSigInputs.CIPV1ObjRange);

    /* Switch: '<S22>/Switch10' incorporates:
     *  Constant: '<S22>/Constant8'
     *  Constant: '<S22>/Constant9'
     */
    if (LCK_B.RelationalOperator2_d) {
      LCK_B.Switch10_gl = LCK_P.Constant8_Value_e;
    } else {
      LCK_B.Switch10_gl = LCK_P.Constant9_Value_h;
    }

    /* End of Switch: '<S22>/Switch10' */

    /* RelationalOperator: '<S22>/Relational Operator1' incorporates:
     *  Constant: '<S22>/Constant5'
     *  Inport: '<Root>/LCK_TrackSigInputs'
     */
    LCK_B.RelationalOperator1_d = (LCK_U.LCK_TrackSigInputs.CIPV1ObjTrackID >
      LCK_P.Constant5_Value_k);

    /* Switch: '<S22>/Switch1' incorporates:
     *  Constant: '<S22>/Constant2'
     */
    if (LCK_B.RelationalOperator1_d) {
      LCK_B.Switch1_hu = LCK_B.Switch10_gl;
    } else {
      LCK_B.Switch1_hu = LCK_P.Constant2_Value_o;
    }

    /* End of Switch: '<S22>/Switch1' */

    /* Lookup_n-D: '<S22>/k_LCK_RngThr_FalRec' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.k_LCK_RngThr_FalRec_o = look1_iflf_binlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_LCK_VspdBks, k_LCK_RngThr_FalRec,
       15U);

    /* Sum: '<S22>/Sum3' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.Sum3_c = LCK_U.LCK_LanSigInputs.VID_Lin_01_Range +
      LCK_U.LCK_LanSigInputs.VID_Lin_02_Range;

    /* Product: '<S22>/Divide1' incorporates:
     *  Constant: '<S22>/Constant6'
     */
    LCK_B.Divide1 = LCK_B.Sum3_c / (real32_T)LCK_P.Constant6_Value_j;

    /* RelationalOperator: '<S22>/Relational Operator' */
    LCK_B.RelationalOperator_j = (LCK_B.k_LCK_RngThr_FalRec_o >= LCK_B.Divide1);

    /* Switch: '<S22>/Switch8' incorporates:
     *  Constant: '<S22>/Constant10'
     */
    if (LCK_B.RelationalOperator_j) {
      LCK_B.Switch8_e = LCK_B.Switch1_hu;
    } else {
      LCK_B.Switch8_e = LCK_P.Constant10_Value_hk;
    }

    /* End of Switch: '<S22>/Switch8' */

    /* Switch: '<S22>/Switch2' incorporates:
     *  Constant: '<S22>/Constant1'
     */
    if (LCK_B.Switch_l) {
      LCK_B.Switch2_md = LCK_P.Constant1_Value_jn;
    } else {
      LCK_B.Switch2_md = LCK_B.Switch8_e;
    }

    /* End of Switch: '<S22>/Switch2' */

    /* RelationalOperator: '<S10>/Relational Operator3' incorporates:
     *  Constant: '<S10>/Constant2'
     */
    LCK_B.RelationalOperator3_dj = (LCK_B.Switch2_md == LCK_P.Constant2_Value_bg);

    /* Switch: '<S10>/Switch2' incorporates:
     *  Constant: '<S10>/k_LCK_TimCon_A2Flt_Normal'
     *  Constant: '<S10>/k_LCK_TimCon_A2Flt_Strong'
     */
    if (LCK_B.RelationalOperator3_dj) {
      LCK_B.Switch2_n = k_LCK_TimCon_A2Flt_Strong;
    } else {
      LCK_B.Switch2_n = k_LCK_TimCon_A2Flt_Normal;
    }

    /* End of Switch: '<S10>/Switch2' */

    /* Sum: '<S29>/Sum2' incorporates:
     *  Constant: '<S10>/Constant44'
     */
    LCK_B.Sum2_h = ML_TIME_MSEC + LCK_B.Switch2_n;

    /* Product: '<S29>/Product1' incorporates:
     *  Constant: '<S10>/Constant44'
     */
    LCK_B.Product1_l = ML_TIME_MSEC / LCK_B.Sum2_h;

    /* Sum: '<S25>/Sum' */
    LCK_B.Sum_k = LCK_B.Switch11_h - LCK_B.UnitDelay_b;

    /* Product: '<S25>/Product' */
    LCK_B.Product_g = LCK_B.Product1_l * LCK_B.Sum_k;

    /* Saturate: '<S25>/Saturation' incorporates:
     *  Sum: '<S25>/Sum1'
     */
    LCK_B.Sum1_l = LCK_B.Product_g + LCK_B.UnitDelay_b;
    if (LCK_B.Sum1_l > LCK_P.Saturation_UpperSat_k) {
      LCK_B.Saturation_a = LCK_P.Saturation_UpperSat_k;
    } else if (LCK_B.Sum1_l < LCK_P.Saturation_LowerSat_k) {
      LCK_B.Saturation_a = LCK_P.Saturation_LowerSat_k;
    } else {
      LCK_B.Saturation_a = LCK_B.Sum1_l;
    }

    /* End of Saturate: '<S25>/Saturation' */

    /* Switch: '<S1>/Switch' incorporates:
     *  Constant: '<S1>/Constant'
     *  Outport: '<Root>/LCK_Mode'
     */
    if (LCK_B.Switch_l) {
      LCK_B.Switch_h = LCK_P.Constant_Value_g;
    } else {
      LCK_B.Switch_h = LCK_Y.LCK_Mode;
    }

    /* End of Switch: '<S1>/Switch' */

    /* RelationalOperator: '<S9>/Relational Operator16' incorporates:
     *  Constant: '<S9>/LCK_MODE_ACTIVE'
     */
    LCK_B.RelationalOperator16_g = (LCK_B.Switch_h >= LCK_MODE_ACTIVE);

    /* RelationalOperator: '<S9>/Relational Operator1' incorporates:
     *  Constant: '<S9>/LCK_MODE_LEFT_LANE_CHANGE'
     */
    LCK_B.RelationalOperator1_c = (LCK_B.Switch_h == LCK_MODE_LEFT_LANE_CHANGE);

    /* RelationalOperator: '<S9>/Relational Operator2' incorporates:
     *  Constant: '<S9>/LCK_MODE_RIGHT_LANE_CHANGE'
     */
    LCK_B.RelationalOperator2_hw = (LCK_B.Switch_h == LCK_MODE_RIGHT_LANE_CHANGE);

    /* Switch: '<S9>/Switch2' incorporates:
     *  Constant: '<S9>/Constant3'
     *  Constant: '<S9>/Constant4'
     */
    if (LCK_B.RelationalOperator2_hw) {
      LCK_B.Switch2_os = LCK_P.Constant3_Value_o5;
    } else {
      LCK_B.Switch2_os = LCK_P.Constant4_Value_a;
    }

    /* End of Switch: '<S9>/Switch2' */

    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S9>/Constant1'
     */
    if (LCK_B.RelationalOperator1_c) {
      LCK_B.Switch1_fi = LCK_P.Constant1_Value_n0;
    } else {
      LCK_B.Switch1_fi = LCK_B.Switch2_os;
    }

    /* End of Switch: '<S9>/Switch1' */

    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/Constant2'
     */
    if (LCK_B.RelationalOperator16_g) {
      LCK_B.Switch_hf = LCK_B.Switch1_fi;
    } else {
      LCK_B.Switch_hf = LCK_P.Constant2_Value_jg;
    }

    /* End of Switch: '<S9>/Switch' */

    /* RelationalOperator: '<S13>/Relational Operator3' incorporates:
     *  Constant: '<S13>/Constant2'
     */
    LCK_B.RelationalOperator3_n = (LCK_B.Switch_hf > LCK_P.Constant2_Value_e);

    /* Switch: '<S13>/Switch2' */
    if (LCK_B.RelationalOperator3_n) {
      LCK_B.Switch2_e = LCK_B.LC_A2;
    } else {
      LCK_B.Switch2_e = LCK_B.Saturation_a;
    }

    /* End of Switch: '<S13>/Switch2' */

    /* Gain: '<S16>/C_KPH2MPS' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.C_KPH2MPS_k = C_KPH2MPS * LCK_U.LCK_VehSigInputs.Vehicle_Speed;

    /* UnitDelay: '<S57>/Unit Delay' */
    LCK_B.UnitDelay_g = LCK_DW.UnitDelay_DSTATE_j;

    /* Sum: '<S58>/Sum2' incorporates:
     *  Constant: '<S17>/ML_TIME_MSEC'
     *  Constant: '<S17>/k_LCK_TimCon_RadFlt'
     */
    LCK_B.Sum2_d = ML_TIME_MSEC + k_LCK_TimCon_RadFlt;

    /* Product: '<S58>/Product1' incorporates:
     *  Constant: '<S17>/ML_TIME_MSEC'
     */
    LCK_B.Product1_b = ML_TIME_MSEC / LCK_B.Sum2_d;

    /* Signum: '<S43>/Sign' incorporates:
     *  Gain: '<S17>/Gain'
     */
    LCK_B.Gain_i = LCK_P.Gain_Gain_c * LCK_B.Switch2_e;

    /* Abs: '<S17>/Abs' */
    LCK_B.Abs_m = (real32_T)fabs(LCK_B.Gain_i);

    /* RelationalOperator: '<S55>/Compare' incorporates:
     *  Constant: '<S55>/Constant'
     */
    LCK_B.Compare = (uint8_T)(LCK_B.Abs_m < LCK_P.CompareToConstant_const_m);

    /* Switch: '<S17>/Switch' incorporates:
     *  Constant: '<S17>/Constant22'
     */
    if (LCK_B.Compare >= LCK_P.Switch_Threshold) {
      LCK_B.Switch_c = LCK_P.Constant22_Value_j;
    } else {
      LCK_B.Switch_c = LCK_B.Gain_i;
    }

    /* End of Switch: '<S17>/Switch' */

    /* MinMax: '<S17>/MinMax2' incorporates:
     *  Abs: '<S17>/Abs3'
     */
    LCK_B.Abs3 = (real32_T)fabs(LCK_B.Switch_c);
    if ((LCK_B.Abs3 > C_NEARZERO) || rtIsNaNF(C_NEARZERO)) {
      LCK_B.MinMax2_o = LCK_B.Abs3;
    } else {
      LCK_B.MinMax2_o = C_NEARZERO;
    }

    /* End of MinMax: '<S17>/MinMax2' */

    /* Product: '<S17>/Divide' incorporates:
     *  Constant: '<S17>/Constant2'
     */
    Road_Radius = LCK_P.Constant2_Value_b / LCK_B.MinMax2_o;

    /* Sum: '<S57>/Sum' */
    LCK_B.Sum_fx = Road_Radius - LCK_B.UnitDelay_g;

    /* Product: '<S57>/Product' */
    LCK_B.Product_k = LCK_B.Product1_b * LCK_B.Sum_fx;

    /* Saturate: '<S57>/Saturation' incorporates:
     *  Sum: '<S57>/Sum1'
     */
    LCK_B.Sum1_pj = LCK_B.Product_k + LCK_B.UnitDelay_g;
    if (LCK_B.Sum1_pj > LCK_P.Saturation_UpperSat_m) {
      LCK_B.Saturation_k3 = LCK_P.Saturation_UpperSat_m;
    } else if (LCK_B.Sum1_pj < LCK_P.Saturation_LowerSat_g) {
      LCK_B.Saturation_k3 = LCK_P.Saturation_LowerSat_g;
    } else {
      LCK_B.Saturation_k3 = LCK_B.Sum1_pj;
    }

    /* End of Saturate: '<S57>/Saturation' */

    /* Lookup_n-D: '<S16>/Lookup_Table' */
    LCK_B.Lookup_Table_m = look1_iflf_binlcpw(LCK_B.Saturation_k3, k_LCK_RadBks,
      LCK_P.Lookup_Table_tableData_i, 13U);

    /* Product: '<S16>/Product3' */
    LCK_B.Product3 = LCK_B.C_KPH2MPS_k * LCK_B.Lookup_Table_m;

    /* Product: '<S16>/Product6' */
    LCK_B.Product6_n = LCK_B.Switch2_e * LCK_B.Product3 * LCK_B.Product3;

    /* UnitDelay: '<S23>/Unit Delay' */
    LCK_B.UnitDelay_e = LCK_DW.UnitDelay_DSTATE_d;

    /* Switch: '<S10>/Switch10' incorporates:
     *  Constant: '<S10>/k_LCK_TimCon_A0Flt_Normal'
     *  Constant: '<S10>/k_LCK_TimCon_A0Flt_Strong'
     */
    if (LCK_B.RelationalOperator3_dj) {
      LCK_B.Switch10_p = k_LCK_TimCon_A0Flt_Strong;
    } else {
      LCK_B.Switch10_p = k_LCK_TimCon_A0Flt_Normal;
    }

    /* End of Switch: '<S10>/Switch10' */

    /* Sum: '<S27>/Sum2' incorporates:
     *  Constant: '<S10>/Constant42'
     */
    LCK_B.Sum2_h2 = ML_TIME_MSEC + LCK_B.Switch10_p;

    /* Product: '<S27>/Product1' incorporates:
     *  Constant: '<S10>/Constant42'
     */
    LCK_B.Product1_d = ML_TIME_MSEC / LCK_B.Sum2_h2;

    /* Sum: '<S23>/Sum' */
    LCK_B.Sum_d = LCK_B.Switch9_e - LCK_B.UnitDelay_e;

    /* Product: '<S23>/Product' */
    LCK_B.Product_go = LCK_B.Product1_d * LCK_B.Sum_d;

    /* Saturate: '<S23>/Saturation' incorporates:
     *  Sum: '<S23>/Sum1'
     */
    LCK_B.Sum1_j = LCK_B.Product_go + LCK_B.UnitDelay_e;
    if (LCK_B.Sum1_j > LCK_P.Saturation_UpperSat_f) {
      LCK_B.Saturation_l = LCK_P.Saturation_UpperSat_f;
    } else if (LCK_B.Sum1_j < LCK_P.Saturation_LowerSat_p) {
      LCK_B.Saturation_l = LCK_P.Saturation_LowerSat_p;
    } else {
      LCK_B.Saturation_l = LCK_B.Sum1_j;
    }

    /* End of Saturate: '<S23>/Saturation' */

    /* UnitDelay: '<S232>/Unit Delay' */
    LCK_B.UnitDelay_h = LCK_DW.UnitDelay_DSTATE_l;

    /* Gain: '<S232>/Gain2' incorporates:
     *  Constant: '<S232>/Constant3'
     */
    LCK_B.Gain2_m = LCK_P.Gain2_Gain_i * LCK_P.Constant3_Value_c;

    /* Gain: '<S232>/Gain' */
    LCK_B.Gain_k = ML_TIME_MSEC * LCK_B.Gain2_m;

    /* Product: '<S232>/Product3' incorporates:
     *  Constant: '<S232>/const'
     */
    LCK_B.Product3_p = LCK_B.Gain_k / LCK_P.const_Value;

    /* Gain: '<S232>/Gain1' incorporates:
     *  Constant: '<S232>/Constant3'
     */
    LCK_B.Gain1_b = ML_TIME_MSEC * LCK_P.Constant3_Value_c;

    /* Product: '<S232>/Product5' incorporates:
     *  Constant: '<S232>/const1'
     */
    LCK_B.Product5 = LCK_B.Gain1_b / LCK_P.const1_Value_g;

    /* DataTypeConversion: '<S6>/Data Type Conversion3' */
    LCK_B.LC_A0 = LCK_B.search_latoff;

    /* Chart: '<S6>/Chart1' */
    if (LCK_DW.is_active_c9_LCK == 0U) {
      LCK_DW.is_active_c9_LCK = 1U;
      LCK_DW.is_c9_LCK = LCK_IN_Initialization;
      LCK_B.LC_A0_f = 0.0F;
    } else {
      switch (LCK_DW.is_c9_LCK) {
       case LCK_IN_Initialization:
        if (LCK_B.LC_Phase == 1.0F) {
          LCK_DW.is_c9_LCK = LCK_IN_LC_Phase1;
          LCK_B.LC_A0_f = LCK_B.Switch9_e - (real32_T)LCK_B.LC_A0;
        } else {
          if (LCK_B.LC_Phase == 3.0F) {
            LCK_DW.is_c9_LCK = LCK_IN_LC_Phase3_b;
            LCK_B.LC_A0_f = LCK_B.Switch9_e - (real32_T)LCK_B.LC_A0;
          }
        }
        break;

       case LCK_IN_LC_Phase1:
        if (LCK_B.LC_Phase == 0.0F) {
          LCK_DW.is_c9_LCK = LCK_IN_Initialization;
          LCK_B.LC_A0_f = 0.0F;
        } else {
          sf_internal_predicateOutput = ((LCK_B.LC_Phase == 2.0F) &&
            (LCK_B.LC_path_gen_flag == 0.0F));
          if (sf_internal_predicateOutput) {
            LCK_DW.is_c9_LCK = LCK_IN_LC_Phase1p5;
            LCK_B.LC_A0_f = (LCK_B.Switch9_e + (real32_T)
                             LCK_B.DataTypeConversion15) - (real32_T)LCK_B.LC_A0;
          } else {
            sf_internal_predicateOutput = ((LCK_B.LC_Phase == 2.0F) &&
              (LCK_B.LC_path_gen_flag == 1.0F));
            if (sf_internal_predicateOutput) {
              LCK_DW.is_c9_LCK = LCK_IN_LC_Phase2_j;
              LCK_B.LC_A0_f = LCK_B.Switch9_e - (real32_T)LCK_B.LC_A0;
            } else {
              LCK_B.LC_A0_f = LCK_B.Switch9_e - (real32_T)LCK_B.LC_A0;
            }
          }
        }
        break;

       case LCK_IN_LC_Phase1p5:
        if (LCK_B.LC_Phase == 0.0F) {
          LCK_DW.is_c9_LCK = LCK_IN_Initialization;
          LCK_B.LC_A0_f = 0.0F;
        } else if (LCK_B.LC_Phase == 1.0F) {
          LCK_DW.is_c9_LCK = LCK_IN_LC_Phase1;
          LCK_B.LC_A0_f = LCK_B.Switch9_e - (real32_T)LCK_B.LC_A0;
        } else if (LCK_B.LC_path_gen_flag == 1.0F) {
          LCK_DW.is_c9_LCK = LCK_IN_LC_Phase2_j;
          LCK_B.LC_A0_f = LCK_B.Switch9_e - (real32_T)LCK_B.LC_A0;
        } else {
          LCK_B.LC_A0_f = (LCK_B.Switch9_e + (real32_T)
                           LCK_B.DataTypeConversion15) - (real32_T)LCK_B.LC_A0;
        }
        break;

       case LCK_IN_LC_Phase2_j:
        if (LCK_B.LC_Phase == 1.0F) {
          LCK_DW.is_c9_LCK = LCK_IN_LC_Phase1;
          LCK_B.LC_A0_f = LCK_B.Switch9_e - (real32_T)LCK_B.LC_A0;
        } else if (LCK_B.LC_Phase == 0.0F) {
          LCK_DW.is_c9_LCK = LCK_IN_Initialization;
          LCK_B.LC_A0_f = 0.0F;
        } else {
          LCK_B.LC_A0_f = LCK_B.Switch9_e - (real32_T)LCK_B.LC_A0;
        }
        break;

       case LCK_IN_LC_Phase3_b:
        if (LCK_B.LC_Phase == 0.0F) {
          LCK_DW.is_c9_LCK = LCK_IN_Initialization;
          LCK_B.LC_A0_f = 0.0F;
        } else {
          sf_internal_predicateOutput = ((LCK_B.LC_Phase == 4.0F) &&
            (LCK_B.LC_path_gen_flag == 0.0F));
          if (sf_internal_predicateOutput) {
            LCK_DW.is_c9_LCK = LCK_IN_LC_Phase3p5;
            LCK_B.LC_A0_f = (LCK_B.Switch9_e - (real32_T)
                             LCK_B.DataTypeConversion15) - (real32_T)LCK_B.LC_A0;
          } else {
            sf_internal_predicateOutput = ((LCK_B.LC_Phase == 4.0F) &&
              (LCK_B.LC_path_gen_flag == 1.0F));
            if (sf_internal_predicateOutput) {
              LCK_DW.is_c9_LCK = LCK_IN_LC_Phase4_i;
              LCK_B.LC_A0_f = LCK_B.Switch9_e - (real32_T)LCK_B.LC_A0;
            } else {
              LCK_B.LC_A0_f = LCK_B.Switch9_e - (real32_T)LCK_B.LC_A0;
            }
          }
        }
        break;

       case LCK_IN_LC_Phase3p5:
        if (LCK_B.LC_Phase == 0.0F) {
          LCK_DW.is_c9_LCK = LCK_IN_Initialization;
          LCK_B.LC_A0_f = 0.0F;
        } else if (LCK_B.LC_Phase == 3.0F) {
          LCK_DW.is_c9_LCK = LCK_IN_LC_Phase3_b;
          LCK_B.LC_A0_f = LCK_B.Switch9_e - (real32_T)LCK_B.LC_A0;
        } else if (LCK_B.LC_path_gen_flag == 1.0F) {
          LCK_DW.is_c9_LCK = LCK_IN_LC_Phase4_i;
          LCK_B.LC_A0_f = LCK_B.Switch9_e - (real32_T)LCK_B.LC_A0;
        } else {
          LCK_B.LC_A0_f = (LCK_B.Switch9_e - (real32_T)
                           LCK_B.DataTypeConversion15) - (real32_T)LCK_B.LC_A0;
        }
        break;

       default:
        if (LCK_B.LC_Phase == 3.0F) {
          LCK_DW.is_c9_LCK = LCK_IN_LC_Phase3_b;
          LCK_B.LC_A0_f = LCK_B.Switch9_e - (real32_T)LCK_B.LC_A0;
        } else if (LCK_B.LC_Phase == 0.0F) {
          LCK_DW.is_c9_LCK = LCK_IN_Initialization;
          LCK_B.LC_A0_f = 0.0F;
        } else {
          LCK_B.LC_A0_f = LCK_B.Switch9_e - (real32_T)LCK_B.LC_A0;
        }
        break;
      }
    }

    /* End of Chart: '<S6>/Chart1' */

    /* Sum: '<S232>/Sum' */
    LCK_B.Sum_a = LCK_B.LC_A0_f - LCK_B.UnitDelay_h;

    /* RelationalOperator: '<S232>/Relational Operator1' */
    LCK_B.RelationalOperator1_il = (LCK_B.Product5 < LCK_B.Sum_a);

    /* Switch: '<S232>/Switch19' */
    if (LCK_B.RelationalOperator1_il) {
      LCK_B.Switch19_f = LCK_B.Product5;
    } else {
      LCK_B.Switch19_f = LCK_B.Sum_a;
    }

    /* End of Switch: '<S232>/Switch19' */

    /* RelationalOperator: '<S232>/Relational Operator4' */
    LCK_B.RelationalOperator4_b = (LCK_B.Product3_p > LCK_B.Switch19_f);

    /* Switch: '<S232>/Switch20' */
    if (LCK_B.RelationalOperator4_b) {
      LCK_B.Switch20_l = LCK_B.Product3_p;
    } else {
      LCK_B.Switch20_l = LCK_B.Switch19_f;
    }

    /* End of Switch: '<S232>/Switch20' */

    /* Sum: '<S232>/Sum1' */
    LCK_B.Sum1_om = LCK_B.Switch20_l + LCK_B.UnitDelay_h;

    /* DataTypeConversion: '<S6>/Data Type Conversion' */
    LCK_B.LC_A0_e = LCK_B.Sum1_om;

    /* Switch: '<S13>/Switch10' */
    if (LCK_B.RelationalOperator3_n) {
      LCK_B.Switch10_e = LCK_B.LC_A0_e;
    } else {
      LCK_B.Switch10_e = LCK_B.Saturation_l;
    }

    /* End of Switch: '<S13>/Switch10' */

    /* Chart: '<S60>/Chart1' incorporates:
     *  Constant: '<S60>/RadLowLmt'
     *  Constant: '<S60>/RadUpLmt'
     */
    if (LCK_DW.is_active_c36_LCK == 0U) {
      LCK_DW.is_active_c36_LCK = 1U;
      if (LCK_B.Saturation_k3 > LCK_P.RadUpLmt_Value) {
        LCK_DW.is_c36_LCK = LCK_IN_State_0;
        LCK_B.Str_Flag = LCK_BOOLEAN_TURE;
      } else {
        LCK_DW.is_c36_LCK = LCK_IN_State_1;
        LCK_B.Str_Flag = LCK_BOOLEAN_TURE;
      }
    } else if (LCK_DW.is_c36_LCK == LCK_IN_State_0) {
      LCK_B.Str_Flag = LCK_BOOLEAN_TURE;
      if (LCK_B.Saturation_k3 <= LCK_P.RadLowLmt_Value) {
        LCK_DW.is_c36_LCK = LCK_IN_State_1;
      }
    } else {
      LCK_B.Str_Flag = LCK_BOOLEAN_TURE;
      if (LCK_B.Saturation_k3 > LCK_P.RadUpLmt_Value) {
        LCK_DW.is_c36_LCK = LCK_IN_State_0;
      }
    }

    /* End of Chart: '<S60>/Chart1' */

    /* Lookup_n-D: '<S16>/k_LCK_A0ShiftFac_Dy_LftCurv' */
    LCK_B.k_LCK_A0ShiftFac_Dy_LftCurv_f = look1_iflf_binlcpw(LCK_B.Switch10_e,
      k_LCK_DyBks_Curv, k_LCK_A0ShiftFac_Dy_LftCurv, 18U);

    /* RelationalOperator: '<S64>/Compare' incorporates:
     *  Constant: '<S64>/Constant'
     */
    LCK_B.Compare_d = (LCK_B.Gain_i <= LCK_P.Constant_Value_a);

    /* Lookup_n-D: '<S16>/k_LCK_A0ShiftFac_Dy_RgtCurv' */
    LCK_B.k_LCK_A0ShiftFac_Dy_RgtCurv_n = look1_iflf_binlcpw(LCK_B.Switch10_e,
      k_LCK_DyBks_Curv, k_LCK_A0ShiftFac_Dy_RgtCurv, 18U);

    /* Switch: '<S16>/Switch4' */
    if (LCK_B.Compare_d) {
      LCK_B.Switch4_e = LCK_B.k_LCK_A0ShiftFac_Dy_LftCurv_f;
    } else {
      LCK_B.Switch4_e = LCK_B.k_LCK_A0ShiftFac_Dy_RgtCurv_n;
    }

    /* End of Switch: '<S16>/Switch4' */

    /* Switch: '<S16>/Switch2' incorporates:
     *  Constant: '<S16>/Constant2'
     */
    if (LCK_B.Str_Flag) {
      LCK_B.Switch2_cv = LCK_P.Constant2_Value_h;
    } else {
      LCK_B.Switch2_cv = LCK_B.Switch4_e;
    }

    /* End of Switch: '<S16>/Switch2' */

    /* Lookup_n-D: '<S16>/k_LCK_A0Shift_LftCurv' */
    LCK_B.k_LCK_A0Shift_LftCurv_a = look1_iflf_binlcpw(LCK_B.Saturation_k3,
      k_LCK_RadBks, k_LCK_A0Shift_LftCurv, 13U);

    /* Lookup_n-D: '<S16>/k_LCK_A0Shift_RgtCurv' */
    LCK_B.k_LCK_A0Shift_RgtCurv_d = look1_iflf_binlcpw(LCK_B.Saturation_k3,
      k_LCK_RadBks, k_LCK_A0Shift_RgtCurv, 13U);

    /* Switch: '<S16>/Switch1' */
    if (LCK_B.Compare_d) {
      LCK_B.Switch1_kd = LCK_B.k_LCK_A0Shift_LftCurv_a;
    } else {
      LCK_B.Switch1_kd = LCK_B.k_LCK_A0Shift_RgtCurv_d;
    }

    /* End of Switch: '<S16>/Switch1' */

    /* Switch: '<S16>/Switch' incorporates:
     *  Constant: '<S16>/k_LCK_A0Shift_StraLan'
     */
    if (LCK_B.Str_Flag) {
      LCK_B.Switch_f = k_LCK_A0Shift_StraLan;
    } else {
      LCK_B.Switch_f = LCK_B.Switch1_kd;
    }

    /* End of Switch: '<S16>/Switch' */

    /* Lookup_n-D: '<S16>/k_LCK_A0ShiftFac_Vspd' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.k_LCK_A0ShiftFac_Vspd_k = look1_iflf_binlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_LCK_VspdBks,
       k_LCK_A0ShiftFac_Vspd, 15U);

    /* Product: '<S16>/Product7' */
    LCK_B.Product7 = LCK_B.Switch2_cv * LCK_B.Switch_f *
      LCK_B.k_LCK_A0ShiftFac_Vspd_k;

    /* Sum: '<S16>/Add' */
    LCK_B.Add = LCK_B.Switch10_e + LCK_B.Product7;

    /* RelationalOperator: '<S47>/Relational Operator15' incorporates:
     *  Constant: '<S47>/Constant3'
     */
    LCK_B.RelationalOperator15_a = (LCK_P.Constant3_Value_g == LCK_B.Switch_hf);

    /* UnitDelay: '<S47>/Unit Delay2' */
    LCK_B.UnitDelay2_o = LCK_DW.UnitDelay2_DSTATE_i;

    /* RelationalOperator: '<S47>/Relational Operator14' incorporates:
     *  Constant: '<S47>/Constant4'
     */
    LCK_B.RelationalOperator14_g = (LCK_B.UnitDelay2_o ==
      LCK_P.Constant4_Value_n);

    /* Logic: '<S47>/Logical Operator8' */
    LCK_B.LogicalOperator8_a = (LCK_B.RelationalOperator15_a &&
      LCK_B.RelationalOperator14_g);

    /* DataTypeConversion: '<S47>/Data Type Conversion54' */
    LCK_B.DataTypeConversion54 = LCK_B.LogicalOperator8_a;

    /* Chart: '<S49>/Trigger Hold' incorporates:
     *  Constant: '<S47>/k_LCK_SigFacHldTim_ActSta'
     */
    LCK_TriggerHold_i(LCK_B.DataTypeConversion54, k_LCK_SigFacHldTim_ActSta,
                      &LCK_B.sf_TriggerHold_i);

    /* Lookup_n-D: '<S47>/k_LCK_A0Fac_ActSta' */
    LCK_B.k_LCK_A0Fac_ActSta_o = look1_iflf_linlcpw(LCK_B.sf_TriggerHold_i.count,
      k_LCK_TimBks_ActSta, k_LCK_A0Fac_ActSta, 6U);

    /* Switch: '<S47>/Switch4' */
    if (LCK_B.sf_TriggerHold_i.Out) {
      /* MinMax: '<S46>/MinMax' */
      LCK_B.Switch4_j = LCK_B.k_LCK_A0Fac_ActSta_o;
    } else {
      /* MinMax: '<S46>/MinMax' incorporates:
       *  Constant: '<S47>/Constant7'
       */
      LCK_B.Switch4_j = LCK_P.Constant7_Value_l;
    }

    /* End of Switch: '<S47>/Switch4' */

    /* Abs: '<S48>/Abs' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.Abs_d = (real32_T)fabs(LCK_U.LCK_VehSigInputs.Steer_Torq);

    /* RelationalOperator: '<S48>/Relational Operator6' incorporates:
     *  Constant: '<S48>/k_LCK_TorqThr_DrvStim'
     */
    LCK_B.RelationalOperator6_gx = (k_LCK_TorqThr_DrvStim <= LCK_B.Abs_d);

    /* DataTypeConversion: '<S48>/Data Type Conversion4' */
    LCK_B.DataTypeConversion4_i = LCK_B.RelationalOperator6_gx;

    /* Chart: '<S51>/Delay_Trig' incorporates:
     *  Constant: '<S48>/k_LCK_DlyTm_DrvStim'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion4_i, k_LCK_DlyTm_DrvStim,
                   &LCK_B.sf_Delay_Trig, &LCK_DW.sf_Delay_Trig);

    /* RelationalOperator: '<S48>/Relational Operator' incorporates:
     *  Constant: '<S48>/k_LCK_TorqThrBig_DrvStim'
     */
    LCK_B.RelationalOperator_h = (LCK_B.Abs_d >= k_LCK_TorqThrBig_DrvStim);

    /* Logic: '<S48>/Logical Operator' */
    LCK_B.LogicalOperator_e = ((LCK_B.sf_Delay_Trig.Delay_Trig != 0.0F) ||
      LCK_B.RelationalOperator_h);

    /* Chart: '<S52>/Trigger Hold' incorporates:
     *  Constant: '<S48>/k_LCK_SigFacHldTim_DrvStim'
     */
    LCK_TriggerHold(LCK_B.LogicalOperator_e, k_LCK_SigFacHldTim_DrvStim,
                    &LCK_B.sf_TriggerHold_k);

    /* Lookup_n-D: '<S48>/k_LCK_A0Fac_DrvStm' */
    LCK_B.k_LCK_A0Fac_DrvStm_c = look1_iflf_linlcpw(LCK_B.sf_TriggerHold_k.count,
      k_LCK_TimBks_DrvStm, k_LCK_A0Fac_DrvStm, 6U);

    /* Switch: '<S48>/Switch11' */
    if (LCK_B.sf_TriggerHold_k.Out) {
      /* MinMax: '<S46>/MinMax' */
      LCK_B.Switch11_i2 = LCK_B.k_LCK_A0Fac_DrvStm_c;
    } else {
      /* MinMax: '<S46>/MinMax' incorporates:
       *  Constant: '<S48>/Constant22'
       */
      LCK_B.Switch11_i2 = LCK_P.Constant22_Value_o;
    }

    /* End of Switch: '<S48>/Switch11' */

    /* MinMax: '<S46>/MinMax' */
    if ((LCK_B.Switch4_j < LCK_B.Switch11_i2) || rtIsNaNF(LCK_B.Switch11_i2)) {
      LCK_B.A0_Wekng_Fac = LCK_B.Switch4_j;
    } else {
      LCK_B.A0_Wekng_Fac = LCK_B.Switch11_i2;
    }

    /* Relay: '<S73>/Relay' incorporates:
     *  Product: '<S16>/Product'
     */
    LCK_B.Product_mm = LCK_B.Add * LCK_B.A0_Wekng_Fac;

    /* UnitDelay: '<S24>/Unit Delay' */
    LCK_B.UnitDelay_f = LCK_DW.UnitDelay_DSTATE_g;

    /* Switch: '<S10>/Switch1' incorporates:
     *  Constant: '<S10>/k_LCK_TimCon_A1Flt_Normal'
     *  Constant: '<S10>/k_LCK_TimCon_A1Flt_Strong'
     */
    if (LCK_B.RelationalOperator3_dj) {
      LCK_B.Switch1_g = k_LCK_TimCon_A1Flt_Strong;
    } else {
      LCK_B.Switch1_g = k_LCK_TimCon_A1Flt_Normal;
    }

    /* End of Switch: '<S10>/Switch1' */

    /* Sum: '<S28>/Sum2' incorporates:
     *  Constant: '<S10>/Constant43'
     */
    LCK_B.Sum2_dv = ML_TIME_MSEC + LCK_B.Switch1_g;

    /* Product: '<S28>/Product1' incorporates:
     *  Constant: '<S10>/Constant43'
     */
    LCK_B.Product1_e = ML_TIME_MSEC / LCK_B.Sum2_dv;

    /* Sum: '<S24>/Sum' */
    LCK_B.Sum_p = LCK_B.Switch10_g - LCK_B.UnitDelay_f;

    /* Product: '<S24>/Product' */
    LCK_B.Product_c = LCK_B.Product1_e * LCK_B.Sum_p;

    /* Saturate: '<S24>/Saturation' incorporates:
     *  Sum: '<S24>/Sum1'
     */
    LCK_B.Sum1_c = LCK_B.Product_c + LCK_B.UnitDelay_f;
    if (LCK_B.Sum1_c > LCK_P.Saturation_UpperSat_fe) {
      LCK_B.Saturation_e = LCK_P.Saturation_UpperSat_fe;
    } else if (LCK_B.Sum1_c < LCK_P.Saturation_LowerSat_j) {
      LCK_B.Saturation_e = LCK_P.Saturation_LowerSat_j;
    } else {
      LCK_B.Saturation_e = LCK_B.Sum1_c;
    }

    /* End of Saturate: '<S24>/Saturation' */

    /* Trigonometry: '<S6>/Trigonometric Function' */
    LCK_B.TrigonometricFunction = tan(LCK_B.search_theta);

    /* Sum: '<S6>/Subtract1' */
    LCK_B.Subtract1_m = LCK_B.Switch10_g - LCK_B.TrigonometricFunction;

    /* DataTypeConversion: '<S6>/Data Type Conversion1' */
    LCK_B.LC_A1 = (real32_T)LCK_B.Subtract1_m;

    /* Switch: '<S13>/Switch1' */
    if (LCK_B.RelationalOperator3_n) {
      LCK_B.Switch1_fw = LCK_B.LC_A1;
    } else {
      LCK_B.Switch1_fw = LCK_B.Saturation_e;
    }

    /* End of Switch: '<S13>/Switch1' */

    /* Product: '<S16>/Product4' */
    LCK_B.Product4 = LCK_B.Switch1_fw * LCK_B.Product3;

    /* UnitDelay: '<S26>/Unit Delay' */
    LCK_B.UnitDelay_o = LCK_DW.UnitDelay_DSTATE_f;

    /* Switch: '<S10>/Switch3' incorporates:
     *  Constant: '<S10>/k_LCK_TimCon_A3Flt_Normal'
     *  Constant: '<S10>/k_LCK_TimCon_A3Flt_Strong'
     */
    if (LCK_B.RelationalOperator3_dj) {
      LCK_B.Switch3_d = k_LCK_TimCon_A3Flt_Strong;
    } else {
      LCK_B.Switch3_d = k_LCK_TimCon_A3Flt_Normal;
    }

    /* End of Switch: '<S10>/Switch3' */

    /* Sum: '<S30>/Sum2' incorporates:
     *  Constant: '<S10>/Constant1'
     */
    LCK_B.Sum2_bp = ML_TIME_MSEC + LCK_B.Switch3_d;

    /* Product: '<S30>/Product1' incorporates:
     *  Constant: '<S10>/Constant1'
     */
    LCK_B.Product1_m = ML_TIME_MSEC / LCK_B.Sum2_bp;

    /* DataTypeConversion: '<S8>/Data Type Conversion3' incorporates:
     *  Constant: '<S8>/AVP_C3_Coff'
     */
    LCK_B.DataTypeConversion3_e = (real32_T)LCK_P.AVP_C3_Coff_Value;

    /* Product: '<S8>/Product3' incorporates:
     *  Inport: '<Root>/AVP_Info'
     */
    LCK_B.Product3_f = LCK_U.AVP_Info.Tractory_c3 * LCK_B.DataTypeConversion3_e;

    /* Sum: '<S244>/Sum6' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.Sum6 = LCK_U.LCK_LanSigInputs.VID_Lin_01_A3 +
      LCK_U.LCK_LanSigInputs.VID_Lin_02_A3;

    /* Gain: '<S244>/Gain5' */
    LCK_B.Gain5 = LCK_P.Gain5_Gain * LCK_B.Sum6;

    /* Switch: '<S244>/Switch16' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    if (LCK_B.RelationalOperator2_b) {
      LCK_B.Switch16 = LCK_U.LCK_LanSigInputs.VID_Lin_01_A3;
    } else {
      LCK_B.Switch16 = LCK_B.Gain5;
    }

    /* End of Switch: '<S244>/Switch16' */

    /* Switch: '<S244>/Switch15' incorporates:
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    if (LCK_B.RelationalOperator1_m) {
      LCK_B.Switch15 = LCK_U.LCK_LanSigInputs.VID_Lin_02_A3;
    } else {
      LCK_B.Switch15 = LCK_B.Switch16;
    }

    /* End of Switch: '<S244>/Switch15' */

    /* Switch: '<S8>/Switch3' incorporates:
     *  Inport: '<Root>/Fus_Lane_Info'
     */
    if (LCK_B.LogicalOperator23) {
      LCK_B.Switch3_f =
        LCK_U.Fus_Lane_Info.primaryObjTrajectory.curveFunc.latDistanceThirdOrderCoeff;
    } else {
      LCK_B.Switch3_f = LCK_B.Switch15;
    }

    /* End of Switch: '<S8>/Switch3' */

    /* Switch: '<S8>/Switch12' */
    if (LCK_B.Switch_l) {
      LCK_B.Switch12_a = LCK_B.Product3_f;
    } else {
      LCK_B.Switch12_a = LCK_B.Switch3_f;
    }

    /* End of Switch: '<S8>/Switch12' */

    /* Sum: '<S26>/Sum' */
    LCK_B.Sum_h = LCK_B.Switch12_a - LCK_B.UnitDelay_o;

    /* Product: '<S26>/Product' */
    LCK_B.Product_e = LCK_B.Product1_m * LCK_B.Sum_h;

    /* Saturate: '<S26>/Saturation' incorporates:
     *  Sum: '<S26>/Sum1'
     */
    LCK_B.Sum1_d = LCK_B.Product_e + LCK_B.UnitDelay_o;
    if (LCK_B.Sum1_d > LCK_P.Saturation_UpperSat_o) {
      LCK_B.Saturation_as = LCK_P.Saturation_UpperSat_o;
    } else if (LCK_B.Sum1_d < LCK_P.Saturation_LowerSat_a) {
      LCK_B.Saturation_as = LCK_P.Saturation_LowerSat_a;
    } else {
      LCK_B.Saturation_as = LCK_B.Sum1_d;
    }

    /* End of Saturate: '<S26>/Saturation' */

    /* Product: '<S16>/Product5' */
    LCK_B.Product5_i = LCK_B.Saturation_as * LCK_B.Product3 * LCK_B.Product3 *
      LCK_B.Product3;

    /* Relay: '<S73>/Relay1' incorporates:
     *  Sum: '<S16>/Sum1'
     */
    LCK_B.Sum1_nd = ((LCK_B.Product_mm + LCK_B.Product4) + LCK_B.Product6_n) +
      LCK_B.Product5_i;
    if (LCK_B.Sum1_nd >= LCK_P.Relay1_OnVal) {
      LCK_DW.Relay1_Mode = true;
    } else {
      if (LCK_B.Sum1_nd <= LCK_P.Relay1_OffVal) {
        LCK_DW.Relay1_Mode = false;
      }
    }

    if (LCK_DW.Relay1_Mode) {
      LCK_B.Relay1 = LCK_P.Relay1_YOn;
    } else {
      LCK_B.Relay1 = LCK_P.Relay1_YOff;
    }

    /* End of Relay: '<S73>/Relay1' */

    /* Switch: '<S73>/Switch15' incorporates:
     *  Constant: '<S73>/k_LCK_Lat_Ctrl_PFac_Lft'
     *  Constant: '<S73>/k_LCK_Lat_Ctrl_PFac_Rgt'
     */
    if (LCK_B.Relay1 > LCK_P.Switch15_Threshold) {
      LCK_B.Switch15_l = k_LCK_Lat_Ctrl_PFac_Rgt;
    } else {
      LCK_B.Switch15_l = k_LCK_Lat_Ctrl_PFac_Lft;
    }

    /* End of Switch: '<S73>/Switch15' */

    /* Lookup_n-D: '<S77>/k_LCK_Lat_PFac_Vspd' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.k_LCK_Lat_PFac_Vspd_o = look1_iflf_linlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_LCK_VspdBks, k_LCK_Lat_PFac_Vspd,
       15U);

    /* Lookup_n-D: '<S78>/k_LCK_Lat_PFac_Rad' */
    LCK_B.k_LCK_Lat_PFac_Rad_e = look1_iflf_linlcpw(LCK_B.Saturation_k3,
      k_LCK_RadBks, k_LCK_Lat_PFac_Rad, 13U);

    /* Abs: '<S79>/Abs4' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.Abs4 = (real32_T)fabs(LCK_U.LCK_VehSigInputs.Steer_Spd);

    /* Lookup_n-D: '<S79>/k_LCK_Lat_PFac_SS_Str' */
    LCK_B.k_LCK_Lat_PFac_SS_Str_k = look1_iflf_linlcpw(LCK_B.Abs4,
      k_LCK_StrSpdBks, k_LCK_Lat_PFac_SS_Str, 7U);

    /* Lookup_n-D: '<S79>/k_LCK_Lat_PFac_SS_Cur' */
    LCK_B.k_LCK_Lat_PFac_SS_Cur_l = look1_iflf_linlcpw(LCK_B.Abs4,
      k_LCK_StrSpdBks, k_LCK_Lat_PFac_SS_Cur, 7U);

    /* Switch: '<S79>/Switch19' */
    if (LCK_B.Str_Flag) {
      LCK_B.Switch19_m = LCK_B.k_LCK_Lat_PFac_SS_Str_k;
    } else {
      LCK_B.Switch19_m = LCK_B.k_LCK_Lat_PFac_SS_Cur_l;
    }

    /* End of Switch: '<S79>/Switch19' */

    /* Gain: '<S85>/Gain' incorporates:
     *  Constant: '<S85>/k_LCK_Lat_Ctrl_Kp'
     */
    LCK_B.Gain_f = LCK_P.Gain_Gain_o * k_LCK_Lat_Ctrl_Kp;

    /* Abs: '<S76>/Abs' */
    LCK_B.Abs_eh = (real32_T)fabs(LCK_B.Sum1_nd);

    /* Lookup_n-D: '<S76>/k_LCK_Lat_PFac_Dy_Str' */
    LCK_B.k_LCK_Lat_PFac_Dy_Str_n = look1_iflf_linlcpw(LCK_B.Abs_eh,
      k_LCK_Lat_DyBks, k_LCK_Lat_PFac_Dy_Str, 9U);

    /* Lookup_n-D: '<S76>/k_LCK_Lat_PFac_Dy_InnLftCur' */
    LCK_B.k_LCK_Lat_PFac_Dy_InnLftCur_b = look1_iflf_linlcpw(LCK_B.Abs_eh,
      k_LCK_Lat_DyBks, k_LCK_Lat_PFac_Dy_InnLftCur, 9U);

    /* Relay: '<S61>/Relay' */
    if (LCK_B.Sum1_nd >= LCK_P.Relay_OnVal) {
      LCK_DW.Relay_Mode = true;
    } else {
      if (LCK_B.Sum1_nd <= LCK_P.Relay_OffVal) {
        LCK_DW.Relay_Mode = false;
      }
    }

    if (LCK_DW.Relay_Mode) {
      LCK_B.Relay = LCK_P.Relay_YOn;
    } else {
      LCK_B.Relay = LCK_P.Relay_YOff;
    }

    /* End of Relay: '<S61>/Relay' */

    /* RelationalOperator: '<S65>/Compare' incorporates:
     *  Constant: '<S65>/Constant'
     */
    LCK_B.Compare_b = (LCK_B.Relay > LCK_P.Constant_Value_m);

    /* RelationalOperator: '<S66>/Compare' incorporates:
     *  Constant: '<S66>/Constant'
     */
    LCK_B.Compare_h = (LCK_B.Relay < LCK_P.Constant_Value_mf);

    /* Switch: '<S61>/Switch6' */
    if (LCK_B.Compare_d) {
      LCK_B.Switch6_gy = LCK_B.Compare_b;
    } else {
      LCK_B.Switch6_gy = LCK_B.Compare_h;
    }

    /* End of Switch: '<S61>/Switch6' */

    /* Lookup_n-D: '<S76>/k_LCK_Lat_PFac_Dy_OutLftCur' */
    LCK_B.k_LCK_Lat_PFac_Dy_OutLftCur_g = look1_iflf_linlcpw(LCK_B.Abs_eh,
      k_LCK_Lat_DyBks, k_LCK_Lat_PFac_Dy_OutLftCur, 9U);

    /* Lookup_n-D: '<S76>/k_LCK_Lat_PFac_Dy_InnRgtCur' */
    LCK_B.k_LCK_Lat_PFac_Dy_InnRgtCur_i = look1_iflf_linlcpw(LCK_B.Abs_eh,
      k_LCK_Lat_DyBks, k_LCK_Lat_PFac_Dy_InnRgtCur, 9U);

    /* Lookup_n-D: '<S76>/k_LCK_Lat_PFac_Dy_OutRgtCur' */
    LCK_B.k_LCK_Lat_PFac_Dy_OutRgtCur_g = look1_iflf_linlcpw(LCK_B.Abs_eh,
      k_LCK_Lat_DyBks, k_LCK_Lat_PFac_Dy_OutRgtCur, 9U);

    /* Switch: '<S76>/Switch10' incorporates:
     *  Switch: '<S76>/Switch13'
     */
    if (LCK_B.Switch6_gy) {
      LCK_B.Switch10_l = LCK_B.k_LCK_Lat_PFac_Dy_InnLftCur_b;
      LCK_B.Switch13_n = LCK_B.k_LCK_Lat_PFac_Dy_InnRgtCur_i;
    } else {
      LCK_B.Switch10_l = LCK_B.k_LCK_Lat_PFac_Dy_OutLftCur_g;
      LCK_B.Switch13_n = LCK_B.k_LCK_Lat_PFac_Dy_OutRgtCur_g;
    }

    /* End of Switch: '<S76>/Switch10' */

    /* Switch: '<S76>/Switch12' */
    if (LCK_B.Compare_d) {
      LCK_B.Switch12_o = LCK_B.Switch10_l;
    } else {
      LCK_B.Switch12_o = LCK_B.Switch13_n;
    }

    /* End of Switch: '<S76>/Switch12' */

    /* Switch: '<S76>/Switch3' */
    if (LCK_B.Str_Flag) {
      LCK_B.Switch3_e = LCK_B.k_LCK_Lat_PFac_Dy_Str_n;
    } else {
      LCK_B.Switch3_e = LCK_B.Switch12_o;
    }

    /* End of Switch: '<S76>/Switch3' */

    /* Product: '<S85>/Product' */
    LCK_B.Product_o = LCK_B.Gain_f * LCK_B.Switch15_l * LCK_B.Switch3_e *
      LCK_B.k_LCK_Lat_PFac_Vspd_o * LCK_B.k_LCK_Lat_PFac_Rad_e *
      LCK_B.Switch19_m;

    /* UnitDelay: '<S83>/Unit Delay' */
    LCK_B.UnitDelay_eo = LCK_DW.UnitDelay_DSTATE_ao;

    /* Sum: '<S83>/Sum' */
    LCK_B.Sum_do = LCK_B.Product_o - LCK_B.UnitDelay_eo;

    /* Gain: '<S83>/Gain1' incorporates:
     *  Constant: '<S83>/k_LCK_Lat_KpKdIncSlopeLmt'
     */
    LCK_B.Gain1_ht = ML_TIME_MSEC * k_LCK_Lat_KpKdIncSlopeLmt;

    /* Product: '<S83>/Product5' incorporates:
     *  Constant: '<S83>/const1'
     */
    LCK_B.Product5_e = LCK_B.Gain1_ht / (real32_T)LCK_P.const1_Value_c;

    /* RelationalOperator: '<S83>/Relational Operator1' */
    LCK_B.RelationalOperator1_mc = (LCK_B.Product5_e < LCK_B.Sum_do);

    /* Switch: '<S83>/Switch19' */
    if (LCK_B.RelationalOperator1_mc) {
      LCK_B.Switch19_j = LCK_B.Product5_e;
    } else {
      LCK_B.Switch19_j = LCK_B.Sum_do;
    }

    /* End of Switch: '<S83>/Switch19' */

    /* Gain: '<S83>/Gain2' incorporates:
     *  Constant: '<S83>/k_LCK_Lat_KpKdDecSlopeLmt'
     */
    LCK_B.Gain2_a = LCK_P.Gain2_Gain_l * k_LCK_Lat_KpKdDecSlopeLmt;

    /* Gain: '<S83>/Gain' */
    LCK_B.Gain_bz = ML_TIME_MSEC * LCK_B.Gain2_a;

    /* Product: '<S83>/Product3' incorporates:
     *  Constant: '<S83>/const'
     */
    LCK_B.Product3_l = LCK_B.Gain_bz / (real32_T)LCK_P.const_Value_k;

    /* RelationalOperator: '<S83>/Relational Operator4' */
    LCK_B.RelationalOperator4_h = (LCK_B.Product3_l > LCK_B.Switch19_j);

    /* Switch: '<S83>/Switch20' */
    if (LCK_B.RelationalOperator4_h) {
      LCK_B.Switch20_n = LCK_B.Product3_l;
    } else {
      LCK_B.Switch20_n = LCK_B.Switch19_j;
    }

    /* End of Switch: '<S83>/Switch20' */

    /* Sum: '<S83>/Sum1' */
    LCK_B.Sum1_oe = LCK_B.Switch20_n + LCK_B.UnitDelay_eo;

    /* Gain: '<S71>/Gain4' */
    LCK_B.Gain4_o = LCK_P.Gain4_Gain_m * LCK_B.Sum1_oe;

    /* Product: '<S71>/Product6' */
    LCK_B.Product6_e = LCK_B.Gain4_o * LCK_B.Sum1_nd;

    /* UnitDelay: '<S82>/Unit Delay' */
    LCK_B.UnitDelay_k = LCK_DW.UnitDelay_DSTATE_lg;

    /* Gain: '<S82>/Gain2' incorporates:
     *  Constant: '<S82>/k_LCK_Lat_KpKdDecSlopeLmt'
     */
    LCK_B.Gain2_c = LCK_P.Gain2_Gain_p * k_LCK_Lat_KpKdDecSlopeLmt;

    /* Gain: '<S82>/Gain' */
    LCK_B.Gain_d = ML_TIME_MSEC * LCK_B.Gain2_c;

    /* Product: '<S82>/Product3' incorporates:
     *  Constant: '<S82>/const'
     */
    LCK_B.Product3_fc = LCK_B.Gain_d / LCK_P.const_Value_o;

    /* Gain: '<S82>/Gain1' incorporates:
     *  Constant: '<S82>/k_LCK_Lat_KpKdIncSlopeLmt'
     */
    LCK_B.Gain1_k = ML_TIME_MSEC * k_LCK_Lat_KpKdIncSlopeLmt;

    /* Product: '<S82>/Product5' incorporates:
     *  Constant: '<S82>/const1'
     */
    LCK_B.Product5_j = LCK_B.Gain1_k / LCK_P.const1_Value_p;

    /* Product: '<S84>/Product6' incorporates:
     *  Constant: '<S84>/k_LCK_Lat_Ctrl_Kp'
     *  Constant: '<S84>/k_LCK_Lat_Ctrl_Kp_NearGain'
     */
    LCK_B.Product6_g = k_LCK_Lat_Ctrl_Kp * k_LCK_Lat_Ctrl_Kp_NearGain;

    /* Gain: '<S84>/Gain' */
    LCK_B.Gain_du = LCK_P.Gain_Gain_l2 * LCK_B.Product6_g;

    /* Relay: '<S73>/Relay' */
    if (LCK_B.Product_mm >= LCK_P.Relay_OnVal_i) {
      LCK_DW.Relay_Mode_a = true;
    } else {
      if (LCK_B.Product_mm <= LCK_P.Relay_OffVal_n) {
        LCK_DW.Relay_Mode_a = false;
      }
    }

    if (LCK_DW.Relay_Mode_a) {
      LCK_B.Relay_b = LCK_P.Relay_YOn_g;
    } else {
      LCK_B.Relay_b = LCK_P.Relay_YOff_e;
    }

    /* Switch: '<S73>/Switch25' incorporates:
     *  Constant: '<S73>/k_LCK_Lat_Ctrl_PFac_Lft'
     *  Constant: '<S73>/k_LCK_Lat_Ctrl_PFac_Rgt'
     */
    if (LCK_B.Relay_b > LCK_P.Switch25_Threshold) {
      LCK_B.Switch25 = k_LCK_Lat_Ctrl_PFac_Rgt;
    } else {
      LCK_B.Switch25 = k_LCK_Lat_Ctrl_PFac_Lft;
    }

    /* End of Switch: '<S73>/Switch25' */

    /* Abs: '<S75>/Abs' */
    LCK_B.Abs_j = (real32_T)fabs(LCK_B.Product_mm);

    /* Lookup_n-D: '<S75>/k_LCK_Lat_PFac_Dy_Str' */
    LCK_B.k_LCK_Lat_PFac_Dy_Str_f = look1_iflf_linlcpw(LCK_B.Abs_j,
      k_LCK_Lat_DyBks, k_LCK_Lat_PFac_Dy_Str, 9U);

    /* Lookup_n-D: '<S75>/k_LCK_Lat_PFac_Dy_InnLftCur' */
    LCK_B.k_LCK_Lat_PFac_Dy_InnLftCur_e = look1_iflf_linlcpw(LCK_B.Abs_j,
      k_LCK_Lat_DyBks, k_LCK_Lat_PFac_Dy_InnLftCur, 9U);

    /* Relay: '<S61>/Relay1' */
    if (LCK_B.Product_mm >= LCK_P.Relay1_OnVal_c) {
      LCK_DW.Relay1_Mode_j = true;
    } else {
      if (LCK_B.Product_mm <= LCK_P.Relay1_OffVal_b) {
        LCK_DW.Relay1_Mode_j = false;
      }
    }

    if (LCK_DW.Relay1_Mode_j) {
      LCK_B.Relay1_n = LCK_P.Relay1_YOn_a;
    } else {
      LCK_B.Relay1_n = LCK_P.Relay1_YOff_c;
    }

    /* End of Relay: '<S61>/Relay1' */

    /* RelationalOperator: '<S67>/Compare' incorporates:
     *  Constant: '<S67>/Constant'
     */
    LCK_B.Compare_c = (LCK_B.Relay1_n > LCK_P.Constant_Value_h);

    /* RelationalOperator: '<S68>/Compare' incorporates:
     *  Constant: '<S68>/Constant'
     */
    LCK_B.Compare_e = (LCK_B.Relay1_n < LCK_P.Constant_Value_c);

    /* Switch: '<S61>/Switch7' */
    if (LCK_B.Compare_d) {
      LCK_B.Switch7_p = LCK_B.Compare_c;
    } else {
      LCK_B.Switch7_p = LCK_B.Compare_e;
    }

    /* End of Switch: '<S61>/Switch7' */

    /* Lookup_n-D: '<S75>/k_LCK_Lat_PFac_Dy_OutLftCur' */
    LCK_B.k_LCK_Lat_PFac_Dy_OutLftCur_o = look1_iflf_linlcpw(LCK_B.Abs_j,
      k_LCK_Lat_DyBks, k_LCK_Lat_PFac_Dy_OutLftCur, 9U);

    /* Lookup_n-D: '<S75>/k_LCK_Lat_PFac_Dy_InnRgtCur' */
    LCK_B.k_LCK_Lat_PFac_Dy_InnRgtCur_c = look1_iflf_linlcpw(LCK_B.Abs_j,
      k_LCK_Lat_DyBks, k_LCK_Lat_PFac_Dy_InnRgtCur, 9U);

    /* Lookup_n-D: '<S75>/k_LCK_Lat_PFac_Dy_OutRgtCur' */
    LCK_B.k_LCK_Lat_PFac_Dy_OutRgtCur_a = look1_iflf_linlcpw(LCK_B.Abs_j,
      k_LCK_Lat_DyBks, k_LCK_Lat_PFac_Dy_OutRgtCur, 9U);

    /* Switch: '<S75>/Switch10' incorporates:
     *  Switch: '<S75>/Switch13'
     */
    if (LCK_B.Switch7_p) {
      LCK_B.Switch10_pb = LCK_B.k_LCK_Lat_PFac_Dy_InnLftCur_e;
      LCK_B.Switch13_i = LCK_B.k_LCK_Lat_PFac_Dy_InnRgtCur_c;
    } else {
      LCK_B.Switch10_pb = LCK_B.k_LCK_Lat_PFac_Dy_OutLftCur_o;
      LCK_B.Switch13_i = LCK_B.k_LCK_Lat_PFac_Dy_OutRgtCur_a;
    }

    /* End of Switch: '<S75>/Switch10' */

    /* Switch: '<S75>/Switch12' */
    if (LCK_B.Compare_d) {
      LCK_B.Switch12_p = LCK_B.Switch10_pb;
    } else {
      LCK_B.Switch12_p = LCK_B.Switch13_i;
    }

    /* End of Switch: '<S75>/Switch12' */

    /* Switch: '<S75>/Switch3' */
    if (LCK_B.Str_Flag) {
      LCK_B.Switch3_g = LCK_B.k_LCK_Lat_PFac_Dy_Str_f;
    } else {
      LCK_B.Switch3_g = LCK_B.Switch12_p;
    }

    /* End of Switch: '<S75>/Switch3' */

    /* Product: '<S84>/Product' */
    LCK_B.Product_ge = LCK_B.Gain_du * LCK_B.Switch25 * LCK_B.Switch3_g *
      LCK_B.k_LCK_Lat_PFac_Vspd_o * LCK_B.k_LCK_Lat_PFac_Rad_e *
      LCK_B.Switch19_m;

    /* Sum: '<S82>/Sum' */
    LCK_B.Sum_kt = LCK_B.Product_ge - LCK_B.UnitDelay_k;

    /* RelationalOperator: '<S82>/Relational Operator1' */
    LCK_B.RelationalOperator1_f = (LCK_B.Product5_j < LCK_B.Sum_kt);

    /* Switch: '<S82>/Switch19' */
    if (LCK_B.RelationalOperator1_f) {
      LCK_B.Switch19_i = LCK_B.Product5_j;
    } else {
      LCK_B.Switch19_i = LCK_B.Sum_kt;
    }

    /* End of Switch: '<S82>/Switch19' */

    /* RelationalOperator: '<S82>/Relational Operator4' */
    LCK_B.RelationalOperator4_bz = (LCK_B.Product3_fc > LCK_B.Switch19_i);

    /* Switch: '<S82>/Switch20' */
    if (LCK_B.RelationalOperator4_bz) {
      LCK_B.Switch20_d = LCK_B.Product3_fc;
    } else {
      LCK_B.Switch20_d = LCK_B.Switch19_i;
    }

    /* End of Switch: '<S82>/Switch20' */

    /* Sum: '<S82>/Sum1' */
    LCK_B.Sum1_dz = LCK_B.Switch20_d + LCK_B.UnitDelay_k;

    /* Gain: '<S71>/Gain1' */
    LCK_B.Gain1_is = LCK_P.Gain1_Gain_j * LCK_B.Sum1_dz;

    /* Product: '<S71>/Product' */
    LCK_B.Product_g4 = LCK_B.Product_mm * LCK_B.Gain1_is;

    /* Sum: '<S71>/Add2' */
    LCK_B.Add2_i = LCK_B.Product_g4 + LCK_B.Product6_e;

    /* RelationalOperator: '<S87>/LowerRelop1' incorporates:
     *  Constant: '<S71>/k_LCK_Lat_PTermMax'
     */
    LCK_B.LowerRelop1 = (LCK_B.Add2_i > k_LCK_Lat_PTermMax);

    /* Gain: '<S71>/Gain' incorporates:
     *  Constant: '<S71>/k_LCK_Lat_PTermMax'
     */
    LCK_B.Gain_n = LCK_P.Gain_Gain_e * k_LCK_Lat_PTermMax;

    /* RelationalOperator: '<S87>/UpperRelop' */
    LCK_B.UpperRelop = (LCK_B.Add2_i < LCK_B.Gain_n);

    /* Switch: '<S87>/Switch' */
    if (LCK_B.UpperRelop) {
      LCK_B.Switch_n = LCK_B.Gain_n;
    } else {
      LCK_B.Switch_n = LCK_B.Add2_i;
    }

    /* End of Switch: '<S87>/Switch' */

    /* Switch: '<S87>/Switch2' incorporates:
     *  Constant: '<S71>/k_LCK_Lat_PTermMax'
     */
    if (LCK_B.LowerRelop1) {
      LCK_B.Switch2_j = k_LCK_Lat_PTermMax;
    } else {
      LCK_B.Switch2_j = LCK_B.Switch_n;
    }

    /* End of Switch: '<S87>/Switch2' */

    /* RelationalOperator: '<S69>/Compare' incorporates:
     *  Constant: '<S69>/Constant'
     */
    LCK_B.Compare_m = (LCK_B.Switch_hf == LCK_P.CompareToConstant4_const);

    /* Logic: '<S19>/Logical Operator' */
    I_Term_Reset_Flag = (LCK_B.sf_TriggerHold_i.Out ||
                         LCK_B.sf_TriggerHold_k.Out || LCK_B.Compare_m);

    /* Abs: '<S74>/Abs' */
    LCK_B.Abs_hl = (real32_T)fabs(LCK_B.Product_mm);

    /* Lookup_n-D: '<S74>/k_LCK_Lat_ILmtFac_Dy_StraLan' */
    LCK_B.k_LCK_Lat_ILmtFac_Dy_StraLan_c = look1_iflf_linlcpw(LCK_B.Abs_hl,
      k_LCK_Lat_DyBks, k_LCK_Lat_ILmtFac_Dy_StraLan, 9U);

    /* Lookup_n-D: '<S74>/k_LCK_Lat_ILmtFac_Dy_CurvLan' */
    LCK_B.k_LCK_Lat_ILmtFac_Dy_CurvLan_p = look1_iflf_linlcpw(LCK_B.Abs_hl,
      k_LCK_Lat_DyBks, k_LCK_Lat_ILmtFac_Dy_CurvLan, 9U);

    /* Lookup_n-D: '<S74>/k_LCK_Lat_ILmtFac_Vspd_StraLan' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.k_LCK_Lat_ILmtFac_Vspd_StraLa_h = look1_iflf_linlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_LCK_VspdBks,
       k_LCK_Lat_ILmtFac_Vspd_StraLan, 15U);

    /* Lookup_n-D: '<S74>/k_LCK_Lat_ILmtFac_Vspd_CurvLan' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.k_LCK_Lat_ILmtFac_Vspd_CurvLa_i = look1_iflf_linlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_LCK_VspdBks,
       k_LCK_Lat_ILmtFac_Vspd_CurvLan, 15U);

    /* Switch: '<S74>/Switch4' incorporates:
     *  Switch: '<S74>/Switch5'
     */
    if (LCK_B.Str_Flag) {
      LCK_B.Switch4_al = LCK_B.k_LCK_Lat_ILmtFac_Dy_StraLan_c;
      LCK_B.Switch5_l = LCK_B.k_LCK_Lat_ILmtFac_Vspd_StraLa_h;
    } else {
      LCK_B.Switch4_al = LCK_B.k_LCK_Lat_ILmtFac_Dy_CurvLan_p;
      LCK_B.Switch5_l = LCK_B.k_LCK_Lat_ILmtFac_Vspd_CurvLa_i;
    }

    /* End of Switch: '<S74>/Switch4' */

    /* Lookup_n-D: '<S74>/k_LCK_Lat_ILmtFac_Rad' */
    LCK_B.k_LCK_Lat_ILmtFac_Rad_m = look1_iflf_linlcpw(LCK_B.Saturation_k3,
      k_LCK_RadBks, k_LCK_Lat_ILmtFac_Rad, 13U);

    /* Sum: '<S74>/Add' incorporates:
     *  Constant: '<S74>/Constant'
     *  Constant: '<S74>/k_LCK_Lat_ILmtFac_Rad_NearGain'
     */
    LCK_B.Add_p = LCK_P.Constant_Value_ad + k_LCK_Lat_ILmtFac_Rad_NearGain;

    /* Product: '<S74>/Divide' */
    LCK_B.Divide_gq = LCK_B.k_LCK_Lat_ILmtFac_Rad_m / LCK_B.Add_p;

    /* Product: '<S74>/Product7' incorporates:
     *  Constant: '<S74>/k_LCK_Lat_ILmtFac_Rad_NearGain'
     */
    LCK_B.Product7_i = LCK_B.Divide_gq * k_LCK_Lat_ILmtFac_Rad_NearGain;

    /* Product: '<S74>/Product2' incorporates:
     *  Constant: '<S74>/k_LCK_Lat_ITermLmt_Dy'
     */
    LCK_B.Product2_c = k_LCK_Lat_ITermLmt_Dy * LCK_B.Switch4_al *
      LCK_B.Switch5_l * LCK_B.Product7_i;

    /* Switch: '<S71>/Switch2' incorporates:
     *  Constant: '<S71>/Constant4'
     */
    if (I_Term_Reset_Flag) {
      LCK_B.Switch2_mj = LCK_P.Constant4_Value_it;
    } else {
      LCK_B.Switch2_mj = LCK_B.Product2_c;
    }

    /* End of Switch: '<S71>/Switch2' */

    /* UnitDelay: '<S71>/Unit Delay1' */
    LCK_B.UnitDelay1_h = LCK_DW.UnitDelay1_DSTATE_j;

    /* Lookup_n-D: '<S77>/k_LCK_Lat_IFac_Vspd' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.k_LCK_Lat_IFac_Vspd_c = look1_iflf_linlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_LCK_VspdBks, k_LCK_Lat_IFac_Vspd,
       15U);

    /* Lookup_n-D: '<S78>/k_LCK_Lat_IFac_Rad' */
    LCK_B.k_LCK_Lat_IFac_Rad_d = look1_iflf_linlcpw(LCK_B.Saturation_k3,
      k_LCK_RadBks, k_LCK_Lat_IFac_Rad, 13U);

    /* Product: '<S80>/Product' incorporates:
     *  Constant: '<S80>/k_LCK_Lat_Ctrl_Ki'
     */
    LCK_B.Product_b = k_LCK_Lat_Ctrl_Ki * LCK_B.k_LCK_Lat_IFac_Vspd_c *
      LCK_B.k_LCK_Lat_IFac_Rad_d;

    /* Gain: '<S71>/Gain5' */
    LCK_B.Gain5_m = LCK_P.Gain5_Gain_o * LCK_B.Product_b;

    /* Product: '<S71>/Product3' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    LCK_B.Product3_n = LCK_B.Product_mm * LCK_B.Gain5_m * ML_TIME_SEC;

    /* Sum: '<S71>/Add3' */
    LCK_B.Add3_n = LCK_B.UnitDelay1_h + LCK_B.Product3_n;

    /* Switch: '<S71>/Switch1' incorporates:
     *  Constant: '<S19>/Constant'
     */
    if (LCK_P.Constant_Value_p) {
      LCK_B.Switch1_ep = LCK_B.UnitDelay1_h;
    } else {
      LCK_B.Switch1_ep = LCK_B.Add3_n;
    }

    /* End of Switch: '<S71>/Switch1' */

    /* RelationalOperator: '<S89>/LowerRelop1' */
    LCK_B.LowerRelop1_f = (LCK_B.Switch1_ep > LCK_B.Switch2_mj);

    /* Gain: '<S71>/Gain8' */
    LCK_B.Gain8 = LCK_P.Gain8_Gain * LCK_B.Switch2_mj;

    /* RelationalOperator: '<S89>/UpperRelop' */
    LCK_B.UpperRelop_n = (LCK_B.Switch1_ep < LCK_B.Gain8);

    /* Switch: '<S89>/Switch' */
    if (LCK_B.UpperRelop_n) {
      LCK_B.Switch_fi = LCK_B.Gain8;
    } else {
      LCK_B.Switch_fi = LCK_B.Switch1_ep;
    }

    /* End of Switch: '<S89>/Switch' */

    /* Switch: '<S89>/Switch2' */
    if (LCK_B.LowerRelop1_f) {
      LCK_B.Switch2_l = LCK_B.Switch2_mj;
    } else {
      LCK_B.Switch2_l = LCK_B.Switch_fi;
    }

    /* End of Switch: '<S89>/Switch2' */

    /* Product: '<S74>/Product1' incorporates:
     *  Constant: '<S74>/k_LCK_Lat_ITermLmt_Dy'
     */
    LCK_B.Product1_hm = LCK_B.Switch4_al * LCK_B.Switch5_l * LCK_B.Divide_gq *
      k_LCK_Lat_ITermLmt_Dy;

    /* Switch: '<S71>/Switch3' incorporates:
     *  Constant: '<S71>/Constant5'
     */
    if (I_Term_Reset_Flag) {
      LCK_B.Switch3_ez = LCK_P.Constant5_Value_n;
    } else {
      LCK_B.Switch3_ez = LCK_B.Product1_hm;
    }

    /* End of Switch: '<S71>/Switch3' */

    /* UnitDelay: '<S71>/Unit Delay' */
    LCK_B.UnitDelay_et = LCK_DW.UnitDelay_DSTATE_ly;

    /* Product: '<S71>/Product1' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    LCK_B.Product1_hl = ML_TIME_SEC * LCK_B.Gain5_m * LCK_B.Sum1_nd;

    /* Sum: '<S71>/Add1' */
    LCK_B.Add1 = LCK_B.UnitDelay_et + LCK_B.Product1_hl;

    /* Switch: '<S71>/Switch4' incorporates:
     *  Constant: '<S19>/Constant'
     */
    if (LCK_P.Constant_Value_p) {
      LCK_B.Switch4_k = LCK_B.UnitDelay_et;
    } else {
      LCK_B.Switch4_k = LCK_B.Add1;
    }

    /* End of Switch: '<S71>/Switch4' */

    /* RelationalOperator: '<S88>/LowerRelop1' */
    LCK_B.LowerRelop1_i = (LCK_B.Switch4_k > LCK_B.Switch3_ez);

    /* Gain: '<S71>/Gain2' */
    LCK_B.Gain2_an = LCK_P.Gain2_Gain_b * LCK_B.Switch3_ez;

    /* RelationalOperator: '<S88>/UpperRelop' */
    LCK_B.UpperRelop_j = (LCK_B.Switch4_k < LCK_B.Gain2_an);

    /* Switch: '<S88>/Switch' */
    if (LCK_B.UpperRelop_j) {
      LCK_B.Switch_k = LCK_B.Gain2_an;
    } else {
      LCK_B.Switch_k = LCK_B.Switch4_k;
    }

    /* End of Switch: '<S88>/Switch' */

    /* Switch: '<S88>/Switch2' */
    if (LCK_B.LowerRelop1_i) {
      LCK_B.Switch2_k = LCK_B.Switch3_ez;
    } else {
      LCK_B.Switch2_k = LCK_B.Switch_k;
    }

    /* End of Switch: '<S88>/Switch2' */

    /* Sum: '<S71>/Add4' */
    LCK_B.Add4 = LCK_B.Switch2_l + LCK_B.Switch2_k;

    /* Lookup_n-D: '<S47>/k_LCK_HAFac_ActSta' */
    LCK_B.k_LCK_HAFac_ActSta_f = look1_iflf_linlcpw(LCK_B.sf_TriggerHold_i.count,
      k_LCK_TimBks_ActSta, k_LCK_HAFac_ActSta, 6U);

    /* Switch: '<S47>/Switch3' */
    if (LCK_B.sf_TriggerHold_i.Out) {
      /* MinMax: '<S46>/MinMax1' */
      LCK_B.Switch3_fe = LCK_B.k_LCK_HAFac_ActSta_f;
    } else {
      /* MinMax: '<S46>/MinMax1' incorporates:
       *  Constant: '<S47>/Constant5'
       */
      LCK_B.Switch3_fe = LCK_P.Constant5_Value_o1;
    }

    /* End of Switch: '<S47>/Switch3' */

    /* Lookup_n-D: '<S48>/k_LCK_HAFac_DrvStm' */
    LCK_B.k_LCK_HAFac_DrvStm_n = look1_iflf_linlcpw(LCK_B.sf_TriggerHold_k.count,
      k_LCK_TimBks_DrvStm, k_LCK_HAFac_DrvStm, 6U);

    /* Switch: '<S48>/Switch1' */
    if (LCK_B.sf_TriggerHold_k.Out) {
      /* MinMax: '<S46>/MinMax1' */
      LCK_B.Switch1_ku = LCK_B.k_LCK_HAFac_DrvStm_n;
    } else {
      /* MinMax: '<S46>/MinMax1' incorporates:
       *  Constant: '<S48>/Constant1'
       */
      LCK_B.Switch1_ku = LCK_P.Constant1_Value_mz;
    }

    /* End of Switch: '<S48>/Switch1' */

    /* MinMax: '<S46>/MinMax1' */
    if ((LCK_B.Switch3_fe < LCK_B.Switch1_ku) || rtIsNaNF(LCK_B.Switch1_ku)) {
      LCK_B.HA_Wekng_Fac = LCK_B.Switch3_fe;
    } else {
      LCK_B.HA_Wekng_Fac = LCK_B.Switch1_ku;
    }

    /* Product: '<S16>/Product1' */
    LCK_B.Product1_j = LCK_B.Switch1_fw * LCK_B.HA_Wekng_Fac;

    /* Trigonometry: '<S16>/Trigonometric Function' */
    LCK_B.TrigonometricFunction_b = (real32_T)atan(LCK_B.Product1_j);

    /* Trigonometry: '<S16>/Trigonometric Function1' */
    LCK_B.TrigonometricFunction1 = (real32_T)sin(LCK_B.TrigonometricFunction_b);

    /* Relay: '<S73>/Relay2' incorporates:
     *  Product: '<S16>/Product10'
     */
    LCK_B.Product10 = LCK_B.C_KPH2MPS_k * LCK_B.TrigonometricFunction1;

    /* UnitDelay: '<S81>/Unit Delay' */
    LCK_B.UnitDelay_ke = LCK_DW.UnitDelay_DSTATE_n;

    /* Gain: '<S81>/Gain2' incorporates:
     *  Constant: '<S81>/k_LCK_Lat_KpKdDecSlopeLmt'
     */
    LCK_B.Gain2_e = LCK_P.Gain2_Gain_k * k_LCK_Lat_KpKdDecSlopeLmt;

    /* Gain: '<S81>/Gain' */
    LCK_B.Gain_c = ML_TIME_MSEC * LCK_B.Gain2_e;

    /* Product: '<S81>/Product3' incorporates:
     *  Constant: '<S81>/const'
     */
    LCK_B.Product3_b = LCK_B.Gain_c / (real32_T)LCK_P.const_Value_i;

    /* Gain: '<S81>/Gain1' incorporates:
     *  Constant: '<S81>/k_LCK_Lat_KpKdIncSlopeLmt'
     */
    LCK_B.Gain1_d = ML_TIME_MSEC * k_LCK_Lat_KpKdIncSlopeLmt;

    /* Product: '<S81>/Product5' incorporates:
     *  Constant: '<S81>/const1'
     */
    LCK_B.Product5_d = LCK_B.Gain1_d / (real32_T)LCK_P.const1_Value_gj;

    /* Relay: '<S73>/Relay2' */
    if (LCK_B.Product10 >= LCK_P.Relay2_OnVal) {
      LCK_DW.Relay2_Mode = true;
    } else {
      if (LCK_B.Product10 <= LCK_P.Relay2_OffVal) {
        LCK_DW.Relay2_Mode = false;
      }
    }

    if (LCK_DW.Relay2_Mode) {
      LCK_B.Relay2 = LCK_P.Relay2_YOn;
    } else {
      LCK_B.Relay2 = LCK_P.Relay2_YOff;
    }

    /* Switch: '<S73>/Switch1' incorporates:
     *  Constant: '<S73>/k_LCK_Lat_Ctrl_DFac_Lft'
     *  Constant: '<S73>/k_LCK_Lat_Ctrl_DFac_Rgt'
     */
    if (LCK_B.Relay2 > LCK_P.Switch1_Threshold_g) {
      LCK_B.Switch1_p = k_LCK_Lat_Ctrl_DFac_Rgt;
    } else {
      LCK_B.Switch1_p = k_LCK_Lat_Ctrl_DFac_Lft;
    }

    /* End of Switch: '<S73>/Switch1' */

    /* Lookup_n-D: '<S77>/k_LCK_Lat_DFac_Vspd' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.k_LCK_Lat_DFac_Vspd_p = look1_iflf_linlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_LCK_VspdBks, k_LCK_Lat_DFac_Vspd,
       15U);

    /* Lookup_n-D: '<S78>/k_LCK_Lat_DFac_Rad' */
    LCK_B.k_LCK_Lat_DFac_Rad_m = look1_iflf_linlcpw(LCK_B.Saturation_k3,
      k_LCK_RadBks, k_LCK_Lat_DFac_Rad, 13U);

    /* Lookup_n-D: '<S79>/k_LCK_Lat_DFac_SS_Str' */
    LCK_B.k_LCK_Lat_DFac_SS_Str_l = look1_iflf_linlcpw(LCK_B.Abs4,
      k_LCK_StrSpdBks, k_LCK_Lat_DFac_SS_Str, 7U);

    /* Lookup_n-D: '<S79>/k_LCK_Lat_DFac_SS_Cur' */
    LCK_B.k_LCK_Lat_DFac_SS_Cur_i = look1_iflf_linlcpw(LCK_B.Abs4,
      k_LCK_StrSpdBks, k_LCK_Lat_DFac_SS_Cur, 7U);

    /* Switch: '<S79>/Switch17' */
    if (LCK_B.Str_Flag) {
      LCK_B.Switch17_m = LCK_B.k_LCK_Lat_DFac_SS_Str_l;
    } else {
      LCK_B.Switch17_m = LCK_B.k_LCK_Lat_DFac_SS_Cur_i;
    }

    /* End of Switch: '<S79>/Switch17' */

    /* Product: '<S72>/Product' incorporates:
     *  Constant: '<S72>/k_LCK_Lat_Ctrl_Kd'
     */
    LCK_B.Product_k1 = k_LCK_Lat_Ctrl_Kd * LCK_B.Switch1_p *
      LCK_B.k_LCK_Lat_DFac_Vspd_p * LCK_B.k_LCK_Lat_DFac_Rad_m *
      LCK_B.Switch17_m;

    /* Sum: '<S81>/Sum' */
    LCK_B.Sum_ab = LCK_B.Product_k1 - LCK_B.UnitDelay_ke;

    /* RelationalOperator: '<S81>/Relational Operator1' */
    LCK_B.RelationalOperator1_e = (LCK_B.Product5_d < LCK_B.Sum_ab);

    /* Switch: '<S81>/Switch19' */
    if (LCK_B.RelationalOperator1_e) {
      LCK_B.Switch19_a = LCK_B.Product5_d;
    } else {
      LCK_B.Switch19_a = LCK_B.Sum_ab;
    }

    /* End of Switch: '<S81>/Switch19' */

    /* RelationalOperator: '<S81>/Relational Operator4' */
    LCK_B.RelationalOperator4_a = (LCK_B.Product3_b > LCK_B.Switch19_a);

    /* Switch: '<S81>/Switch20' */
    if (LCK_B.RelationalOperator4_a) {
      LCK_B.Switch20_h = LCK_B.Product3_b;
    } else {
      LCK_B.Switch20_h = LCK_B.Switch19_a;
    }

    /* End of Switch: '<S81>/Switch20' */

    /* Sum: '<S81>/Sum1' */
    LCK_B.Sum1_ob = LCK_B.Switch20_h + LCK_B.UnitDelay_ke;

    /* Gain: '<S71>/Gain3' */
    LCK_B.Gain3_o = LCK_P.Gain3_Gain_m * LCK_B.Sum1_ob;

    /* Product: '<S71>/Product2' */
    LCK_B.Product2_cq = LCK_B.Product10 * LCK_B.Gain3_o;

    /* Sum: '<S71>/Add' */
    LCK_B.Add_j = (LCK_B.Switch2_j + LCK_B.Add4) + LCK_B.Product2_cq;

    /* UnitDelay: '<S86>/Unit Delay' */
    LCK_B.UnitDelay_m = LCK_DW.UnitDelay_DSTATE_do;

    /* Sum: '<S86>/Sum' */
    LCK_B.Sum_l = LCK_B.Add_j - LCK_B.UnitDelay_m;

    /* Sum: '<S90>/Sum2' incorporates:
     *  Constant: '<S71>/ML_TIME_MSEC2'
     *  Constant: '<S71>/k_LCK_Lat_Ctrl_TimCon_CmdFlt'
     */
    LCK_B.Sum2_f = ML_TIME_MSEC + k_LCK_Lat_Ctrl_TimCon_CmdFlt;

    /* Product: '<S90>/Product1' incorporates:
     *  Constant: '<S71>/ML_TIME_MSEC2'
     */
    LCK_B.Product1_lb = ML_TIME_MSEC / LCK_B.Sum2_f;

    /* Product: '<S86>/Product' */
    LCK_B.Product_ov = LCK_B.Product1_lb * LCK_B.Sum_l;

    /* Saturate: '<S86>/Saturation' incorporates:
     *  Sum: '<S86>/Sum1'
     */
    LCK_B.Sum1_lc = LCK_B.Product_ov + LCK_B.UnitDelay_m;
    if (LCK_B.Sum1_lc > LCK_P.Saturation_UpperSat_n) {
      /* Saturate: '<S71>/Saturation' */
      LCK_B.Saturation_d = LCK_P.Saturation_UpperSat_n;
    } else if (LCK_B.Sum1_lc < LCK_P.Saturation_LowerSat_e) {
      /* Saturate: '<S71>/Saturation' */
      LCK_B.Saturation_d = LCK_P.Saturation_LowerSat_e;
    } else {
      /* Saturate: '<S71>/Saturation' */
      LCK_B.Saturation_d = LCK_B.Sum1_lc;
    }

    /* End of Saturate: '<S86>/Saturation' */

    /* Saturate: '<S71>/Saturation' */
    if (LCK_B.Saturation_d > LCK_P.Saturation_UpperSat_i) {
      LCK_B.Saturation_g = LCK_P.Saturation_UpperSat_i;
    } else if (LCK_B.Saturation_d < LCK_P.Saturation_LowerSat_aw) {
      LCK_B.Saturation_g = LCK_P.Saturation_LowerSat_aw;
    } else {
      LCK_B.Saturation_g = LCK_B.Saturation_d;
    }

    /* UnitDelay: '<S32>/Unit Delay' */
    LCK_B.UnitDelay_i = LCK_DW.UnitDelay_DSTATE_k;

    /* Sum: '<S36>/Sum2' incorporates:
     *  Constant: '<S11>/ML_TIME_MSEC2'
     *  Constant: '<S11>/k_LCK_Ffw_TimCon_CmdFlt'
     */
    LCK_B.Sum2_fa = ML_TIME_MSEC + k_LCK_Ffw_TimCon_CmdFlt;

    /* Product: '<S36>/Product1' incorporates:
     *  Constant: '<S11>/ML_TIME_MSEC2'
     */
    LCK_B.Product1_k = ML_TIME_MSEC / LCK_B.Sum2_fa;

    /* Gain: '<S17>/Gain2' */
    LCK_B.Gain2_g = LCK_P.Gain2_Gain_bt * LCK_B.Saturation_as;

    /* Gain: '<S17>/C_KPH2MPS' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.C_KPH2MPS_i = C_KPH2MPS * LCK_U.LCK_VehSigInputs.Vehicle_Speed;

    /* Lookup_n-D: '<S17>/Lookup_Table' */
    LCK_B.Lookup_Table_k = look1_iflf_binlcpw(LCK_B.Saturation_k3, k_LCK_RadBks,
      LCK_P.Lookup_Table_tableData_h, 13U);

    /* Product: '<S17>/Product3' */
    LCK_B.Product3_c = LCK_B.C_KPH2MPS_i * LCK_B.Lookup_Table_k;

    /* Product: '<S17>/Product1' */
    LCK_B.Product1_kz = LCK_B.Gain2_g * LCK_B.Product3_c;

    /* Sum: '<S17>/Sum' */
    LCK_B.Sum_e = LCK_B.Gain_i + LCK_B.Product1_kz;

    /* Abs: '<S17>/Abs1' */
    LCK_B.Abs1_b = (real32_T)fabs(LCK_B.Sum_e);

    /* RelationalOperator: '<S56>/Compare' incorporates:
     *  Constant: '<S56>/Constant'
     */
    LCK_B.Compare_l = (uint8_T)(LCK_B.Abs1_b < LCK_P.CompareToConstant1_const_j);

    /* Switch: '<S17>/Switch1' incorporates:
     *  Constant: '<S17>/Constant1'
     */
    if (LCK_B.Compare_l >= LCK_P.Switch1_Threshold_p) {
      LCK_B.Switch1_b = LCK_P.Constant1_Value_j;
    } else {
      LCK_B.Switch1_b = LCK_B.Sum_e;
    }

    /* End of Switch: '<S17>/Switch1' */

    /* Switch: '<S31>/Switch8' incorporates:
     *  Constant: '<S31>/k_LCK_Ffw_CvatSwh'
     */
    if (k_LCK_Ffw_CvatSwh > LCK_P.Switch8_Threshold_a) {
      LCK_B.Switch8_o = LCK_B.Gain_i;
    } else {
      LCK_B.Switch8_o = LCK_B.Switch1_b;
    }

    /* End of Switch: '<S31>/Switch8' */

    /* Abs: '<S31>/Abs1' */
    LCK_B.Abs1_k = (real32_T)fabs(LCK_B.Switch8_o);

    /* Lookup_n-D: '<S31>/k_LCK_FfwTorq_Cvat' */
    LCK_B.k_LCK_FfwTorq_Cvat_k = look1_iflf_linlcpw(LCK_B.Abs1_k, k_LCK_CvatrBks,
      k_LCK_FfwTorq_Cvat, 15U);

    /* Lookup_n-D: '<S31>/k_LCK_FfwFac_CvatRate_Lft' */
    LCK_B.k_LCK_FfwFac_CvatRate_Lft_k = look1_iflf_linlcpw(LCK_B.Gain2_g,
      k_LCK_CvatRateBks, k_LCK_FfwFac_CvatRate_Lft, 14U);

    /* RelationalOperator: '<S34>/Compare' incorporates:
     *  Constant: '<S34>/Constant'
     */
    LCK_B.Compare_f = (LCK_B.Switch8_o <= LCK_P.Constant_Value_n);

    /* Lookup_n-D: '<S31>/k_LCK_FfwFac_CvatRate_Rgt' */
    LCK_B.k_LCK_FfwFac_CvatRate_Rgt_m = look1_iflf_linlcpw(LCK_B.Gain2_g,
      k_LCK_CvatRateBks, k_LCK_FfwFac_CvatRate_Rgt, 14U);

    /* Switch: '<S31>/Switch1' */
    if (LCK_B.Compare_f) {
      LCK_B.Switch1_hx = LCK_B.k_LCK_FfwFac_CvatRate_Lft_k;
    } else {
      LCK_B.Switch1_hx = LCK_B.k_LCK_FfwFac_CvatRate_Rgt_m;
    }

    /* End of Switch: '<S31>/Switch1' */

    /* Lookup_n-D: '<S31>/k_LCK_FfwFac_Rad_Lft' */
    LCK_B.k_LCK_FfwFac_Rad_Lft_f = look1_iflf_linlcpw(LCK_B.Saturation_k3,
      k_LCK_RadBks, k_LCK_FfwFac_Rad_Lft, 13U);

    /* RelationalOperator: '<S33>/Compare' incorporates:
     *  Constant: '<S33>/Constant'
     */
    LCK_B.Compare_n = (LCK_B.Switch8_o <= LCK_P.Constant_Value_gs);

    /* Lookup_n-D: '<S31>/k_LCK_FfwFac_Rad_Rgt' */
    LCK_B.k_LCK_FfwFac_Rad_Rgt_p = look1_iflf_linlcpw(LCK_B.Saturation_k3,
      k_LCK_RadBks, k_LCK_FfwFac_Rad_Rgt, 13U);

    /* Switch: '<S31>/Switch6' */
    if (LCK_B.Compare_n) {
      LCK_B.Switch6_k = LCK_B.k_LCK_FfwFac_Rad_Lft_f;
    } else {
      LCK_B.Switch6_k = LCK_B.k_LCK_FfwFac_Rad_Rgt_p;
    }

    /* End of Switch: '<S31>/Switch6' */

    /* Lookup_n-D: '<S31>/k_LCK_FfwFac_Vspd' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.k_LCK_FfwFac_Vspd_l = look1_iflf_linlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_LCK_VspdBks, k_LCK_FfwFac_Vspd,
       15U);

    /* Signum: '<S31>/Sign' incorporates:
     *  Gain: '<S31>/Gain'
     */
    LCK_B.Gain_j = LCK_P.Gain_Gain_b * LCK_B.Switch8_o;
    if (LCK_B.Gain_j < 0.0F) {
      LCK_B.Sign = -1.0F;
    } else if (LCK_B.Gain_j > 0.0F) {
      LCK_B.Sign = 1.0F;
    } else if (LCK_B.Gain_j == 0.0F) {
      LCK_B.Sign = 0.0F;
    } else {
      LCK_B.Sign = (rtNaNF);
    }

    /* End of Signum: '<S31>/Sign' */

    /* Product: '<S31>/Product2' */
    LCK_B.Product2_p = LCK_B.k_LCK_FfwTorq_Cvat_k * LCK_B.Switch1_hx *
      LCK_B.Switch6_k * LCK_B.k_LCK_FfwFac_Vspd_l * LCK_B.Sign;

    /* Abs: '<S31>/Abs' */
    LCK_B.Abs_dm = (real32_T)fabs(LCK_B.Product_mm);

    /* Lookup_n-D: '<S31>/k_LCK_FfwFac_Dy' */
    LCK_B.k_LCK_FfwFac_Dy_e = look1_iflf_linlcpw(LCK_B.Abs_dm, k_LCK_Ffw_DyBks,
      k_LCK_FfwFac_Dy, 7U);

    /* Lookup_n-D: '<S31>/k_LCK_FfwDeltaFac_Rad_Lft' */
    LCK_B.k_LCK_FfwDeltaFac_Rad_Lft_b = look1_iflf_linlcpw(LCK_B.Saturation_k3,
      k_LCK_RadBks, k_LCK_FfwDeltaFac_Rad_Lft, 13U);

    /* RelationalOperator: '<S35>/Compare' incorporates:
     *  Constant: '<S35>/Constant'
     */
    LCK_B.Compare_c1 = (LCK_B.Switch8_o <= LCK_P.Constant_Value_cs);

    /* Lookup_n-D: '<S31>/k_LCK_FfwDeltaFac_Rad_Rgt' */
    LCK_B.k_LCK_FfwDeltaFac_Rad_Rgt_c = look1_iflf_linlcpw(LCK_B.Saturation_k3,
      k_LCK_RadBks, k_LCK_FfwDeltaFac_Rad_Rgt, 13U);

    /* Switch: '<S31>/Switch7' */
    if (LCK_B.Compare_c1) {
      LCK_B.Switch7_oi = LCK_B.k_LCK_FfwDeltaFac_Rad_Lft_b;
    } else {
      LCK_B.Switch7_oi = LCK_B.k_LCK_FfwDeltaFac_Rad_Rgt_c;
    }

    /* End of Switch: '<S31>/Switch7' */

    /* Lookup_n-D: '<S31>/k_LCK_FfwDeltaFac_Vspd' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.k_LCK_FfwDeltaFac_Vspd_f = look1_iflf_linlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_LCK_VspdBks,
       k_LCK_FfwDeltaFac_Vspd, 15U);

    /* Signum: '<S31>/Sign1' incorporates:
     *  Gain: '<S31>/Gain1'
     */
    LCK_B.Gain1_e = LCK_P.Gain1_Gain_g * LCK_B.Product_mm;
    if (LCK_B.Gain1_e < 0.0F) {
      LCK_B.Sign1 = -1.0F;
    } else if (LCK_B.Gain1_e > 0.0F) {
      LCK_B.Sign1 = 1.0F;
    } else if (LCK_B.Gain1_e == 0.0F) {
      LCK_B.Sign1 = 0.0F;
    } else {
      LCK_B.Sign1 = (rtNaNF);
    }

    /* End of Signum: '<S31>/Sign1' */

    /* Product: '<S31>/Product3' */
    LCK_B.Product3_m = LCK_B.k_LCK_FfwFac_Dy_e * LCK_B.Switch7_oi *
      LCK_B.k_LCK_FfwDeltaFac_Vspd_f * LCK_B.k_LCK_FfwTorq_Cvat_k * LCK_B.Sign1;

    /* Sum: '<S31>/Add' */
    LCK_B.Add_m = LCK_B.Product2_p + LCK_B.Product3_m;

    /* Sum: '<S32>/Sum' */
    LCK_B.Sum_hj = LCK_B.Add_m - LCK_B.UnitDelay_i;

    /* Product: '<S32>/Product' */
    LCK_B.Product_n = LCK_B.Product1_k * LCK_B.Sum_hj;

    /* Saturate: '<S32>/Saturation' incorporates:
     *  Sum: '<S32>/Sum1'
     */
    LCK_B.Sum1_lv = LCK_B.Product_n + LCK_B.UnitDelay_i;
    if (LCK_B.Sum1_lv > LCK_P.Saturation_UpperSat_a) {
      LCK_B.Saturation_d5 = LCK_P.Saturation_UpperSat_a;
    } else if (LCK_B.Sum1_lv < LCK_P.Saturation_LowerSat_gy) {
      LCK_B.Saturation_d5 = LCK_P.Saturation_LowerSat_gy;
    } else {
      LCK_B.Saturation_d5 = LCK_B.Sum1_lv;
    }

    /* End of Saturate: '<S32>/Saturation' */

    /* UnitDelay: '<S105>/Unit Delay' */
    LCK_B.UnitDelay_ek = LCK_DW.UnitDelay_DSTATE_fy;

    /* Sum: '<S108>/Sum2' incorporates:
     *  Constant: '<S92>/ML_TIME_MSEC2'
     *  Constant: '<S92>/k_LCK_LatCtrl_TimCon_CmdFlt'
     */
    LCK_B.Sum2_i = ML_TIME_MSEC + k_LCK_LatCtrl_TimCon_CmdFlt;

    /* Product: '<S108>/Product1' incorporates:
     *  Constant: '<S92>/ML_TIME_MSEC2'
     */
    LCK_B.Product1_k2 = ML_TIME_MSEC / LCK_B.Sum2_i;

    /* Relay: '<S94>/Relay' incorporates:
     *  Gain: '<S16>/C_RAD2DEG'
     */
    LCK_B.C_RAD2DEG_f = C_RAD2DEG * LCK_B.TrigonometricFunction_b;

    /* UnitDelay: '<S103>/Unit Delay' */
    LCK_B.UnitDelay_hg = LCK_DW.UnitDelay_DSTATE_l1;

    /* Gain: '<S103>/Gain2' incorporates:
     *  Constant: '<S103>/k_LCK_KpKdDecSlopeLmt'
     */
    LCK_B.Gain2_h = LCK_P.Gain2_Gain_a * k_LCK_KpKdDecSlopeLmt;

    /* Gain: '<S103>/Gain' */
    LCK_B.Gain_kf = ML_TIME_MSEC * LCK_B.Gain2_h;

    /* Product: '<S103>/Product3' incorporates:
     *  Constant: '<S103>/const'
     */
    LCK_B.Product3_i = LCK_B.Gain_kf / LCK_P.const_Value_m;

    /* Gain: '<S103>/Gain1' incorporates:
     *  Constant: '<S103>/k_LCK_KpKdIncSlopeLmt'
     */
    LCK_B.Gain1_f = ML_TIME_MSEC * k_LCK_KpKdIncSlopeLmt;

    /* Product: '<S103>/Product5' incorporates:
     *  Constant: '<S103>/const1'
     */
    LCK_B.Product5_ei = LCK_B.Gain1_f / LCK_P.const1_Value_f;

    /* Relay: '<S94>/Relay' */
    if (LCK_B.C_RAD2DEG_f >= LCK_P.Relay_OnVal_h) {
      LCK_DW.Relay_Mode_p = true;
    } else {
      if (LCK_B.C_RAD2DEG_f <= LCK_P.Relay_OffVal_l) {
        LCK_DW.Relay_Mode_p = false;
      }
    }

    if (LCK_DW.Relay_Mode_p) {
      LCK_B.Relay_k = LCK_P.Relay_YOn_e;
    } else {
      LCK_B.Relay_k = LCK_P.Relay_YOff_k;
    }

    /* Switch: '<S94>/Switch25' incorporates:
     *  Constant: '<S94>/k_LCK_LatCtrl_PFac_Lft'
     *  Constant: '<S94>/k_LCK_LatCtrl_PFac_Rgt'
     */
    if (LCK_B.Relay_k > LCK_P.Switch25_Threshold_i) {
      LCK_B.Switch25_n = k_LCK_LatCtrl_PFac_Rgt;
    } else {
      LCK_B.Switch25_n = k_LCK_LatCtrl_PFac_Lft;
    }

    /* End of Switch: '<S94>/Switch25' */

    /* Abs: '<S95>/Abs2' */
    LCK_B.Abs2_mb = (real32_T)fabs(LCK_B.C_RAD2DEG_f);

    /* Lookup_n-D: '<S95>/k_LCK_PFac_Ha_StrCen' */
    LCK_B.k_LCK_PFac_Ha_StrCen = look1_iflf_linlcpw(LCK_B.Abs2_mb,
      k_LCK_HedAngDiffX, k_LCK_PFac_HaStrCen, 9U);

    /* Abs: '<S59>/Abs' */
    LCK_B.Abs_of = (real32_T)fabs(LCK_B.Product_mm);

    /* Switch: '<S59>/Switch5' incorporates:
     *  Constant: '<S59>/CenLowLmt0'
     *  Constant: '<S59>/CenLowLmt1'
     *  Constant: '<S59>/CenUpLmt0'
     *  Constant: '<S59>/CenUpLmt1'
     *  Switch: '<S59>/Switch2'
     */
    if (LCK_B.Str_Flag) {
      LCK_B.Switch5_j = LCK_P.CenUpLmt0_Value;
      LCK_B.Switch2_g0 = LCK_P.CenLowLmt0_Value;
    } else {
      LCK_B.Switch5_j = LCK_P.CenUpLmt1_Value;
      LCK_B.Switch2_g0 = LCK_P.CenLowLmt1_Value;
    }

    /* End of Switch: '<S59>/Switch5' */

    /* Chart: '<S59>/Chart' */
    if (LCK_DW.is_active_c33_LCK == 0U) {
      LCK_DW.is_active_c33_LCK = 1U;
      if (LCK_B.Abs_of < LCK_B.Switch2_g0) {
        LCK_DW.is_c33_LCK = LCK_IN_State_0;
        LCK_B.Cen_Flag = LCK_BOOLEAN_TURE;
      } else {
        LCK_DW.is_c33_LCK = LCK_IN_State_1;
        LCK_B.Cen_Flag = LCK_BOOLEAN_FALSE;
      }
    } else if (LCK_DW.is_c33_LCK == LCK_IN_State_0) {
      LCK_B.Cen_Flag = LCK_BOOLEAN_TURE;
      if (LCK_B.Abs_of >= LCK_B.Switch5_j) {
        LCK_DW.is_c33_LCK = LCK_IN_State_1;
        LCK_B.Cen_Flag = LCK_BOOLEAN_FALSE;
      }
    } else {
      LCK_B.Cen_Flag = LCK_BOOLEAN_FALSE;
      if (LCK_B.Abs_of <= LCK_B.Switch2_g0) {
        LCK_DW.is_c33_LCK = LCK_IN_State_0;
        LCK_B.Cen_Flag = LCK_BOOLEAN_TURE;
      }
    }

    /* End of Chart: '<S59>/Chart' */

    /* Lookup_n-D: '<S95>/k_LCK_PFac_HaStrSid' */
    LCK_B.k_LCK_PFac_HaStrSid_e = look1_iflf_linlcpw(LCK_B.Abs2_mb,
      k_LCK_HedAngDiffX, k_LCK_PFac_HaStrSid, 9U);

    /* Lookup_n-D: '<S95>/k_LCK_PFac_HaCurCen' */
    LCK_B.k_LCK_PFac_HaCurCen_a = look1_iflf_linlcpw(LCK_B.Abs2_mb,
      k_LCK_HedAngDiffX, k_LCK_PFac_HaCurCen, 9U);

    /* Lookup_n-D: '<S95>/k_LCK_PFac_HaCurSid' */
    LCK_B.k_LCK_PFac_HaCurSid_f = look1_iflf_linlcpw(LCK_B.Abs2_mb,
      k_LCK_HedAngDiffX, k_LCK_PFac_HaCurSid, 9U);

    /* Switch: '<S95>/Switch1' incorporates:
     *  Switch: '<S95>/Switch3'
     */
    if (LCK_B.Cen_Flag) {
      LCK_B.Switch1_i = LCK_B.k_LCK_PFac_Ha_StrCen;
      LCK_B.Switch3_j = LCK_B.k_LCK_PFac_HaCurCen_a;
    } else {
      LCK_B.Switch1_i = LCK_B.k_LCK_PFac_HaStrSid_e;
      LCK_B.Switch3_j = LCK_B.k_LCK_PFac_HaCurSid_f;
    }

    /* End of Switch: '<S95>/Switch1' */

    /* Switch: '<S95>/Switch9' */
    if (LCK_B.Str_Flag) {
      LCK_B.Switch9_h = LCK_B.Switch1_i;
    } else {
      LCK_B.Switch9_h = LCK_B.Switch3_j;
    }

    /* End of Switch: '<S95>/Switch9' */

    /* Lookup_n-D: '<S47>/k_LCK_HARFac_ActSta' */
    LCK_B.k_LCK_HARFac_ActSta_m = look1_iflf_linlcpw
      (LCK_B.sf_TriggerHold_i.count, k_LCK_TimBks_ActSta, k_LCK_HARFac_ActSta,
       6U);

    /* Switch: '<S47>/Switch5' */
    if (LCK_B.sf_TriggerHold_i.Out) {
      /* MinMax: '<S46>/MinMax2' */
      LCK_B.Switch5_o = LCK_B.k_LCK_HARFac_ActSta_m;
    } else {
      /* MinMax: '<S46>/MinMax2' incorporates:
       *  Constant: '<S47>/Constant6'
       */
      LCK_B.Switch5_o = LCK_P.Constant6_Value_f;
    }

    /* End of Switch: '<S47>/Switch5' */

    /* Lookup_n-D: '<S48>/k_LCK_HARFac_DrvStm' */
    LCK_B.k_LCK_HARFac_DrvStm_j = look1_iflf_linlcpw
      (LCK_B.sf_TriggerHold_k.count, k_LCK_TimBks_DrvStm, k_LCK_HARFac_DrvStm,
       6U);

    /* Switch: '<S48>/Switch2' */
    if (LCK_B.sf_TriggerHold_k.Out) {
      /* MinMax: '<S46>/MinMax2' */
      LCK_B.Switch2_nn = LCK_B.k_LCK_HARFac_DrvStm_j;
    } else {
      /* MinMax: '<S46>/MinMax2' incorporates:
       *  Constant: '<S48>/Constant2'
       */
      LCK_B.Switch2_nn = LCK_P.Constant2_Value_f;
    }

    /* End of Switch: '<S48>/Switch2' */

    /* MinMax: '<S46>/MinMax2' */
    if ((LCK_B.Switch5_o < LCK_B.Switch2_nn) || rtIsNaNF(LCK_B.Switch2_nn)) {
      LCK_B.HAR_Wekng_Fac = LCK_B.Switch5_o;
    } else {
      LCK_B.HAR_Wekng_Fac = LCK_B.Switch2_nn;
    }

    /* UnitDelay: '<S44>/Unit Delay' */
    LCK_B.UnitDelay_ez = LCK_DW.UnitDelay_DSTATE_p;

    /* Sum: '<S45>/Sum2' incorporates:
     *  Constant: '<S14>/Constant25'
     *  Constant: '<S14>/k_LCK_TimCon_YawRtFlt'
     */
    LCK_B.Sum2_fn = ML_TIME_MSEC + k_LCK_TimCon_YawRtFlt;

    /* Product: '<S45>/Product1' incorporates:
     *  Constant: '<S14>/Constant25'
     */
    LCK_B.Product1_ee = ML_TIME_MSEC / LCK_B.Sum2_fn;

    /* Sum: '<S44>/Sum' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.Sum_hs = LCK_U.LCK_VehSigInputs.Veh_Yaw_Rate - LCK_B.UnitDelay_ez;

    /* Product: '<S44>/Product' */
    LCK_B.Product_n4 = LCK_B.Product1_ee * LCK_B.Sum_hs;

    /* Saturate: '<S44>/Saturation' incorporates:
     *  Sum: '<S44>/Sum1'
     */
    LCK_B.Sum1_oq = LCK_B.Product_n4 + LCK_B.UnitDelay_ez;
    if (LCK_B.Sum1_oq > LCK_P.Saturation_UpperSat_mv) {
      LCK_B.Saturation_j = LCK_P.Saturation_UpperSat_mv;
    } else if (LCK_B.Sum1_oq < LCK_P.Saturation_LowerSat_ge) {
      LCK_B.Saturation_j = LCK_P.Saturation_LowerSat_ge;
    } else {
      LCK_B.Saturation_j = LCK_B.Sum1_oq;
    }

    /* End of Saturate: '<S44>/Saturation' */

    /* Product: '<S43>/Product1' incorporates:
     *  Constant: '<S43>/ '
     */
    LCK_B.Product1_n3 = LCK_B.Saturation_j * k_LCK_YawRateSign;

    /* Signum: '<S43>/Sign' */
    if (LCK_B.Gain_i < 0.0F) {
      LCK_B.Sign_m = -1.0F;
    } else if (LCK_B.Gain_i > 0.0F) {
      LCK_B.Sign_m = 1.0F;
    } else if (LCK_B.Gain_i == 0.0F) {
      LCK_B.Sign_m = 0.0F;
    } else {
      LCK_B.Sign_m = (rtNaNF);
    }

    /* Gain: '<S43>/Gain1' */
    LCK_B.Gain1_ba = LCK_P.Gain1_Gain_cs * LCK_B.Sign_m;

    /* Lookup_n-D: '<S43>/k_LCK_YawRate_Offset_LftCurv' */
    LCK_B.k_LCK_YawRate_Offset_LftCurv_i = look1_iflf_linlcpw
      (LCK_B.Saturation_k3, k_LCK_RadBks, k_LCK_YawRate_Offset_LftCurv, 13U);

    /* Lookup_n-D: '<S43>/k_LCK_YawRate_Offset_RgtCurv' */
    LCK_B.k_LCK_YawRate_Offset_RgtCurv_c = look1_iflf_linlcpw
      (LCK_B.Saturation_k3, k_LCK_RadBks, k_LCK_YawRate_Offset_RgtCurv, 13U);

    /* Switch: '<S43>/Switch1' */
    if (LCK_B.Compare_d) {
      LCK_B.Switch1_hq = LCK_B.k_LCK_YawRate_Offset_LftCurv_i;
    } else {
      LCK_B.Switch1_hq = LCK_B.k_LCK_YawRate_Offset_RgtCurv_c;
    }

    /* End of Switch: '<S43>/Switch1' */

    /* Switch: '<S43>/Switch18' incorporates:
     *  Constant: '<S43>/Constant2'
     */
    if (LCK_B.Str_Flag) {
      LCK_B.Switch18_d = LCK_P.Constant2_Value_br;
    } else {
      LCK_B.Switch18_d = LCK_B.Switch1_hq;
    }

    /* End of Switch: '<S43>/Switch18' */

    /* Lookup_n-D: '<S43>/k_LCK_YR_OffstFac_Dy_LftCurv' */
    LCK_B.k_LCK_YR_OffstFac_Dy_LftCurv_d = look1_iflf_binlcpw(LCK_B.Switch10_e,
      k_LCK_DyBks_Curv, k_LCK_YR_OffstFac_Dy_LftCurv, 18U);

    /* Lookup_n-D: '<S43>/k_LCK_YR_OffstFac_Dy_InnRgtCurv' */
    LCK_B.k_LCK_YR_OffstFac_Dy_InnRgtCurv = look1_iflf_binlcpw(LCK_B.Switch10_e,
      k_LCK_DyBks_Curv, k_LCK_YR_OffstFac_Dy_RgtCurv, 18U);

    /* Switch: '<S43>/Switch4' */
    if (LCK_B.Compare_d) {
      LCK_B.Switch4_cg = LCK_B.k_LCK_YR_OffstFac_Dy_LftCurv_d;
    } else {
      LCK_B.Switch4_cg = LCK_B.k_LCK_YR_OffstFac_Dy_InnRgtCurv;
    }

    /* End of Switch: '<S43>/Switch4' */

    /* Lookup_n-D: '<S43>/k_LCK_YawRate_OffsetFac_Vspd' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.k_LCK_YawRate_OffsetFac_Vspd_d = look1_iflf_linlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_LCK_VspdBks,
       k_LCK_YawRate_OffsetFac_Vspd, 15U);

    /* Product: '<S43>/Product2' */
    LCK_B.Product2_m = LCK_B.Gain1_ba * LCK_B.Switch18_d * LCK_B.Switch4_cg *
      LCK_B.k_LCK_YawRate_OffsetFac_Vspd_d;

    /* Sum: '<S43>/Sum1' */
    LCK_B.Sum1_e = LCK_B.Product1_n3 + LCK_B.Product2_m;

    /* Gain: '<S43>/C_DEG2RAD' */
    LCK_B.C_DEG2RAD_i = C_DEG2RAD * LCK_B.Sum1_e;

    /* Gain: '<S43>/C_KPH2MPS' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.C_KPH2MPS_b = C_KPH2MPS * LCK_U.LCK_VehSigInputs.Vehicle_Speed;

    /* Product: '<S43>/Product8' */
    LCK_B.Product8 = LCK_B.Gain_i * LCK_B.C_KPH2MPS_b;

    /* Sum: '<S43>/Sum4' */
    LCK_B.Sum4_n = LCK_B.C_DEG2RAD_i + LCK_B.Product8;

    /* Gain: '<S43>/C_RAD2DEG' */
    LCK_B.C_RAD2DEG_m = C_RAD2DEG * LCK_B.Sum4_n;

    /* Relay: '<S94>/Relay1' incorporates:
     *  Product: '<S16>/Product2'
     */
    LCK_B.Product2_p3 = LCK_B.HAR_Wekng_Fac * LCK_B.C_RAD2DEG_m;

    /* Abs: '<S96>/Abs3' */
    LCK_B.Abs3_f = (real32_T)fabs(LCK_B.Product2_p3);

    /* Lookup_n-D: '<S96>/k_LCK_PFac_HadStrCen' */
    LCK_B.k_LCK_PFac_HadStrCen_i = look1_iflf_linlcpw(LCK_B.Abs3_f,
      k_LCK_HedAngRateDiffX, k_LCK_PFac_HadStrCen, 9U);

    /* Lookup_n-D: '<S96>/k_LCK_PFac_HadStrSid' */
    LCK_B.k_LCK_PFac_HadStrSid_b = look1_iflf_linlcpw(LCK_B.Abs3_f,
      k_LCK_HedAngRateDiffX, k_LCK_PFac_HadStrSid, 9U);

    /* Lookup_n-D: '<S96>/k_LCK_PFac_HadCurCen' */
    LCK_B.k_LCK_PFac_HadCurCen_c = look1_iflf_linlcpw(LCK_B.Abs3_f,
      k_LCK_HedAngRateDiffX, k_LCK_PFac_HadCurCen, 9U);

    /* Lookup_n-D: '<S96>/k_LCK_PFac_HadCurSid' */
    LCK_B.k_LCK_PFac_HadCurSid_e = look1_iflf_linlcpw(LCK_B.Abs3_f,
      k_LCK_HedAngRateDiffX, k_LCK_PFac_HadCurSid, 9U);

    /* Switch: '<S96>/Switch5' incorporates:
     *  Switch: '<S96>/Switch6'
     */
    if (LCK_B.Cen_Flag) {
      LCK_B.Switch5_je = LCK_B.k_LCK_PFac_HadStrCen_i;
      LCK_B.Switch6_g = LCK_B.k_LCK_PFac_HadCurCen_c;
    } else {
      LCK_B.Switch5_je = LCK_B.k_LCK_PFac_HadStrSid_b;
      LCK_B.Switch6_g = LCK_B.k_LCK_PFac_HadCurSid_e;
    }

    /* End of Switch: '<S96>/Switch5' */

    /* Switch: '<S96>/Switch12' */
    if (LCK_B.Str_Flag) {
      LCK_B.Switch12_i = LCK_B.Switch5_je;
    } else {
      LCK_B.Switch12_i = LCK_B.Switch6_g;
    }

    /* End of Switch: '<S96>/Switch12' */

    /* Abs: '<S97>/Abs1' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.Abs1_g = (real32_T)fabs(LCK_U.LCK_VehSigInputs.Steer_Ang);

    /* Lookup_n-D: '<S97>/k_LCK_PFac_SA_StrCen' */
    LCK_B.k_LCK_PFac_SA_StrCen_o = look1_iflf_linlcpw(LCK_B.Abs1_g,
      k_LCK_StrAngBks, k_LCK_PFac_SA_StrCen, 7U);

    /* Lookup_n-D: '<S97>/k_LCK_PFac_SA_StrSid' */
    LCK_B.k_LCK_PFac_SA_StrSid_k = look1_iflf_linlcpw(LCK_B.Abs1_g,
      k_LCK_StrAngBks, k_LCK_PFac_SA_StrSid, 7U);

    /* Lookup_n-D: '<S97>/k_LCK_PFac_SA_CurCen' */
    LCK_B.k_LCK_PFac_SA_CurCen_i = look1_iflf_linlcpw(LCK_B.Abs1_g,
      k_LCK_StrAngBks, k_LCK_PFac_SA_CurCen, 7U);

    /* Lookup_n-D: '<S97>/k_LCK_PFac_SA_CurSid' */
    LCK_B.k_LCK_PFac_SA_CurSid_j = look1_iflf_linlcpw(LCK_B.Abs1_g,
      k_LCK_StrAngBks, k_LCK_PFac_SA_CurSid, 7U);

    /* Switch: '<S97>/Switch19' incorporates:
     *  Switch: '<S97>/Switch22'
     */
    if (LCK_B.Cen_Flag) {
      LCK_B.Switch19_n = LCK_B.k_LCK_PFac_SA_StrCen_o;
      LCK_B.Switch22 = LCK_B.k_LCK_PFac_SA_CurCen_i;
    } else {
      LCK_B.Switch19_n = LCK_B.k_LCK_PFac_SA_StrSid_k;
      LCK_B.Switch22 = LCK_B.k_LCK_PFac_SA_CurSid_j;
    }

    /* End of Switch: '<S97>/Switch19' */

    /* Switch: '<S97>/Switch24' */
    if (LCK_B.Str_Flag) {
      LCK_B.Switch24 = LCK_B.Switch19_n;
    } else {
      LCK_B.Switch24 = LCK_B.Switch22;
    }

    /* End of Switch: '<S97>/Switch24' */

    /* Abs: '<S98>/Abs4' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.Abs4_a = (real32_T)fabs(LCK_U.LCK_VehSigInputs.Steer_Spd);

    /* Lookup_n-D: '<S98>/k_LCK_PFac_SS_StrCen' */
    LCK_B.k_LCK_PFac_SS_StrCen_e = look1_iflf_linlcpw(LCK_B.Abs4_a,
      k_LCK_StrSpdBks, k_LCK_PFac_SS_StrCen, 7U);

    /* Lookup_n-D: '<S98>/k_LCK_PFac_SS_StrSid' */
    LCK_B.k_LCK_PFac_SS_StrSid_i = look1_iflf_linlcpw(LCK_B.Abs4_a,
      k_LCK_StrSpdBks, k_LCK_PFac_SS_StrSid, 7U);

    /* Lookup_n-D: '<S98>/k_LCK_PFac_SS_CurCen' */
    LCK_B.k_LCK_PFac_SS_CurCen_o = look1_iflf_linlcpw(LCK_B.Abs4_a,
      k_LCK_StrSpdBks, k_LCK_PFac_SS_CurCen, 7U);

    /* Lookup_n-D: '<S98>/k_LCK_PFac_SS_CurSid' */
    LCK_B.k_LCK_PFac_SS_CurSid_b = look1_iflf_linlcpw(LCK_B.Abs4_a,
      k_LCK_StrSpdBks, k_LCK_PFac_SS_CurSid, 7U);

    /* Switch: '<S98>/Switch13' incorporates:
     *  Switch: '<S98>/Switch16'
     */
    if (LCK_B.Cen_Flag) {
      LCK_B.Switch13_ib = LCK_B.k_LCK_PFac_SS_StrCen_e;
      LCK_B.Switch16_g = LCK_B.k_LCK_PFac_SS_CurCen_o;
    } else {
      LCK_B.Switch13_ib = LCK_B.k_LCK_PFac_SS_StrSid_i;
      LCK_B.Switch16_g = LCK_B.k_LCK_PFac_SS_CurSid_b;
    }

    /* End of Switch: '<S98>/Switch13' */

    /* Abs: '<S99>/Abs' */
    LCK_B.Abs_p = (real32_T)fabs(LCK_B.Product_mm);

    /* Lookup_n-D: '<S99>/k_LCK_PFac_Dy' */
    LCK_B.k_LCK_PFac_Dy_k = look1_iflf_linlcpw(LCK_B.Abs_p, k_LCK_Hed_DyBks,
      k_LCK_PFac_Dy, 9U);

    /* Lookup_n-D: '<S99>/k_LCK_PFac_Dy_Curv' */
    LCK_B.k_LCK_PFac_Dy_Curv_l = look1_iflf_linlcpw(LCK_B.Abs_p, k_LCK_Hed_DyBks,
      k_LCK_PFac_Dy_Curv, 9U);

    /* Switch: '<S98>/Switch18' incorporates:
     *  Switch: '<S99>/Switch27'
     */
    if (LCK_B.Str_Flag) {
      LCK_B.Switch18_i = LCK_B.Switch13_ib;
      LCK_B.Switch27 = LCK_B.k_LCK_PFac_Dy_k;
    } else {
      LCK_B.Switch18_i = LCK_B.Switch16_g;
      LCK_B.Switch27 = LCK_B.k_LCK_PFac_Dy_Curv_l;
    }

    /* End of Switch: '<S98>/Switch18' */

    /* Lookup_n-D: '<S100>/k_LCK_PFac_Vspd' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.k_LCK_PFac_Vspd_a = look1_iflf_linlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_LCK_VspdBks, k_LCK_PFac_Vspd, 15U);

    /* Lookup_n-D: '<S101>/k_LCK_PFac_Rad' */
    LCK_B.k_LCK_PFac_Rad_p = look1_iflf_linlcpw(LCK_B.Saturation_k3,
      k_LCK_RadBks, k_LCK_PFac_Rad, 13U);

    /* Product: '<S104>/Product' incorporates:
     *  Constant: '<S104>/k_LCK_LatCtrl_Kp'
     */
    LCK_B.Product_ev = k_LCK_LatCtrl_Kp * LCK_B.Switch25_n * LCK_B.Switch9_h *
      LCK_B.Switch12_i * LCK_B.Switch24 * LCK_B.Switch18_i * LCK_B.Switch27 *
      LCK_B.k_LCK_PFac_Vspd_a * LCK_B.k_LCK_PFac_Rad_p;

    /* Sum: '<S103>/Sum' */
    LCK_B.Sum_ax = LCK_B.Product_ev - LCK_B.UnitDelay_hg;

    /* RelationalOperator: '<S103>/Relational Operator1' */
    LCK_B.RelationalOperator1_ep = (LCK_B.Product5_ei < LCK_B.Sum_ax);

    /* Switch: '<S103>/Switch19' */
    if (LCK_B.RelationalOperator1_ep) {
      LCK_B.Switch19_d = LCK_B.Product5_ei;
    } else {
      LCK_B.Switch19_d = LCK_B.Sum_ax;
    }

    /* End of Switch: '<S103>/Switch19' */

    /* RelationalOperator: '<S103>/Relational Operator4' */
    LCK_B.RelationalOperator4_e4 = (LCK_B.Product3_i > LCK_B.Switch19_d);

    /* Switch: '<S103>/Switch20' */
    if (LCK_B.RelationalOperator4_e4) {
      LCK_B.Switch20_i = LCK_B.Product3_i;
    } else {
      LCK_B.Switch20_i = LCK_B.Switch19_d;
    }

    /* End of Switch: '<S103>/Switch20' */

    /* Sum: '<S103>/Sum1' */
    LCK_B.Sum1_oc = LCK_B.Switch20_i + LCK_B.UnitDelay_hg;

    /* Gain: '<S92>/Gain1' */
    LCK_B.Gain1_es = LCK_P.Gain1_Gain_k * LCK_B.Sum1_oc;

    /* Product: '<S92>/Product' */
    LCK_B.Product_d = LCK_B.Gain1_es * LCK_B.C_RAD2DEG_f;

    /* RelationalOperator: '<S106>/LowerRelop1' incorporates:
     *  Constant: '<S92>/k_LCK_PTermMax'
     */
    LCK_B.LowerRelop1_i3 = (LCK_B.Product_d > k_LCK_PTermMax);

    /* Gain: '<S92>/Gain' incorporates:
     *  Constant: '<S92>/k_LCK_PTermMax'
     */
    LCK_B.Gain_nc = LCK_P.Gain_Gain_c2 * k_LCK_PTermMax;

    /* RelationalOperator: '<S106>/UpperRelop' */
    LCK_B.UpperRelop_o = (LCK_B.Product_d < LCK_B.Gain_nc);

    /* Switch: '<S106>/Switch' */
    if (LCK_B.UpperRelop_o) {
      LCK_B.Switch_i = LCK_B.Gain_nc;
    } else {
      LCK_B.Switch_i = LCK_B.Product_d;
    }

    /* End of Switch: '<S106>/Switch' */

    /* Switch: '<S106>/Switch2' incorporates:
     *  Constant: '<S92>/k_LCK_PTermMax'
     */
    if (LCK_B.LowerRelop1_i3) {
      LCK_B.Switch2_o = k_LCK_PTermMax;
    } else {
      LCK_B.Switch2_o = LCK_B.Switch_i;
    }

    /* End of Switch: '<S106>/Switch2' */

    /* UnitDelay: '<S102>/Unit Delay' */
    LCK_B.UnitDelay_gl = LCK_DW.UnitDelay_DSTATE_ah;

    /* Gain: '<S102>/Gain2' incorporates:
     *  Constant: '<S102>/k_LCK_KpKdDecSlopeLmt'
     */
    LCK_B.Gain2_j = LCK_P.Gain2_Gain_o * k_LCK_KpKdDecSlopeLmt;

    /* Gain: '<S102>/Gain' */
    LCK_B.Gain_m = ML_TIME_MSEC * LCK_B.Gain2_j;

    /* Product: '<S102>/Product3' incorporates:
     *  Constant: '<S102>/const'
     */
    LCK_B.Product3_pu = LCK_B.Gain_m / LCK_P.const_Value_n;

    /* Gain: '<S102>/Gain1' incorporates:
     *  Constant: '<S102>/k_LCK_KpKdIncSlopeLmt'
     */
    LCK_B.Gain1_bh = ML_TIME_MSEC * k_LCK_KpKdIncSlopeLmt;

    /* Product: '<S102>/Product5' incorporates:
     *  Constant: '<S102>/const1'
     */
    LCK_B.Product5_k = LCK_B.Gain1_bh / LCK_P.const1_Value_j;

    /* Relay: '<S94>/Relay1' */
    if (LCK_B.Product2_p3 >= LCK_P.Relay1_OnVal_a) {
      LCK_DW.Relay1_Mode_f = true;
    } else {
      if (LCK_B.Product2_p3 <= LCK_P.Relay1_OffVal_o) {
        LCK_DW.Relay1_Mode_f = false;
      }
    }

    if (LCK_DW.Relay1_Mode_f) {
      LCK_B.Relay1_k = LCK_P.Relay1_YOn_k;
    } else {
      LCK_B.Relay1_k = LCK_P.Relay1_YOff_p;
    }

    /* Switch: '<S94>/Switch26' incorporates:
     *  Constant: '<S94>/k_LCK_LatCtrl_DFac_Lft'
     *  Constant: '<S94>/k_LCK_LatCtrl_DFac_Rgt'
     */
    if (LCK_B.Relay1_k > LCK_P.Switch26_Threshold) {
      LCK_B.Switch26 = k_LCK_LatCtrl_DFac_Rgt;
    } else {
      LCK_B.Switch26 = k_LCK_LatCtrl_DFac_Lft;
    }

    /* End of Switch: '<S94>/Switch26' */

    /* Lookup_n-D: '<S95>/k_LCK_DFac_HaStrCen' */
    LCK_B.k_LCK_DFac_HaStrCen_e = look1_iflf_linlcpw(LCK_B.Abs2_mb,
      k_LCK_HedAngDiffX, k_LCK_DFac_HaStrCen, 9U);

    /* Lookup_n-D: '<S95>/k_LCK_DFac_HaStrSid' */
    LCK_B.k_LCK_DFac_HaStrSid_a = look1_iflf_linlcpw(LCK_B.Abs2_mb,
      k_LCK_HedAngDiffX, k_LCK_DFac_HaStrSid, 9U);

    /* Lookup_n-D: '<S95>/k_LCK_DFac_HaCurCen' */
    LCK_B.k_LCK_DFac_HaCurCen_g = look1_iflf_linlcpw(LCK_B.Abs2_mb,
      k_LCK_HedAngDiffX, k_LCK_DFac_HaCurCen, 9U);

    /* Lookup_n-D: '<S95>/k_LCK_DFac_HaCurSid' */
    LCK_B.k_LCK_DFac_HaCurSid_a = look1_iflf_linlcpw(LCK_B.Abs2_mb,
      k_LCK_HedAngDiffX, k_LCK_DFac_HaCurSid, 9U);

    /* Switch: '<S95>/Switch2' incorporates:
     *  Switch: '<S95>/Switch4'
     */
    if (LCK_B.Cen_Flag) {
      LCK_B.Switch2_nnp = LCK_B.k_LCK_DFac_HaStrCen_e;
      LCK_B.Switch4_f = LCK_B.k_LCK_DFac_HaCurCen_g;
    } else {
      LCK_B.Switch2_nnp = LCK_B.k_LCK_DFac_HaStrSid_a;
      LCK_B.Switch4_f = LCK_B.k_LCK_DFac_HaCurSid_a;
    }

    /* End of Switch: '<S95>/Switch2' */

    /* Switch: '<S95>/Switch10' */
    if (LCK_B.Str_Flag) {
      LCK_B.Switch10_i = LCK_B.Switch2_nnp;
    } else {
      LCK_B.Switch10_i = LCK_B.Switch4_f;
    }

    /* End of Switch: '<S95>/Switch10' */

    /* Lookup_n-D: '<S96>/k_LCK_DFac_HadStrCen' */
    LCK_B.k_LCK_DFac_HadStrCen_d = look1_iflf_linlcpw(LCK_B.Abs3_f,
      k_LCK_HedAngRateDiffX, k_LCK_DFac_HadStrCen, 9U);

    /* Lookup_n-D: '<S96>/k_LCK_DFac_HadStrSid' */
    LCK_B.k_LCK_DFac_HadStrSid_p = look1_iflf_linlcpw(LCK_B.Abs3_f,
      k_LCK_HedAngRateDiffX, k_LCK_DFac_HadStrSid, 9U);

    /* Lookup_n-D: '<S96>/k_LCK_DFac_HadCurCen' */
    LCK_B.k_LCK_DFac_HadCurCen_l = look1_iflf_linlcpw(LCK_B.Abs3_f,
      k_LCK_HedAngRateDiffX, k_LCK_DFac_HadCurCen, 9U);

    /* Lookup_n-D: '<S96>/k_LCK_DFac_HadCurSid' */
    LCK_B.k_LCK_DFac_HadCurSid_d = look1_iflf_linlcpw(LCK_B.Abs3_f,
      k_LCK_HedAngRateDiffX, k_LCK_DFac_HadCurSid, 9U);

    /* Switch: '<S96>/Switch7' incorporates:
     *  Switch: '<S96>/Switch8'
     */
    if (LCK_B.Cen_Flag) {
      LCK_B.Switch7_i = LCK_B.k_LCK_DFac_HadStrCen_d;
      LCK_B.Switch8_jq = LCK_B.k_LCK_DFac_HadCurCen_l;
    } else {
      LCK_B.Switch7_i = LCK_B.k_LCK_DFac_HadStrSid_p;
      LCK_B.Switch8_jq = LCK_B.k_LCK_DFac_HadCurSid_d;
    }

    /* End of Switch: '<S96>/Switch7' */

    /* Switch: '<S96>/Switch11' */
    if (LCK_B.Str_Flag) {
      LCK_B.Switch11_i5 = LCK_B.Switch7_i;
    } else {
      LCK_B.Switch11_i5 = LCK_B.Switch8_jq;
    }

    /* End of Switch: '<S96>/Switch11' */

    /* Lookup_n-D: '<S97>/k_LCK_DFac_SA_StrCen' */
    LCK_B.k_LCK_DFac_SA_StrCen_a = look1_iflf_linlcpw(LCK_B.Abs1_g,
      k_LCK_StrAngBks, k_LCK_DFac_SA_StrCen, 7U);

    /* Lookup_n-D: '<S97>/k_LCK_DFac_SA_StrSid' */
    LCK_B.k_LCK_DFac_SA_StrSid_p = look1_iflf_linlcpw(LCK_B.Abs1_g,
      k_LCK_StrAngBks, k_LCK_DFac_SA_StrSid, 7U);

    /* Lookup_n-D: '<S97>/k_LCK_DFac_SA_CurCen' */
    LCK_B.k_LCK_DFac_SA_CurCen_c = look1_iflf_linlcpw(LCK_B.Abs1_g,
      k_LCK_StrAngBks, k_LCK_DFac_SA_CurCen, 7U);

    /* Lookup_n-D: '<S97>/k_LCK_DFac_SA_CurSid' */
    LCK_B.k_LCK_DFac_SA_CurSid_a = look1_iflf_linlcpw(LCK_B.Abs1_g,
      k_LCK_StrAngBks, k_LCK_DFac_SA_CurSid, 7U);

    /* Switch: '<S97>/Switch21' incorporates:
     *  Switch: '<S97>/Switch23'
     */
    if (LCK_B.Cen_Flag) {
      LCK_B.Switch21_l = LCK_B.k_LCK_DFac_SA_StrCen_a;
      LCK_B.Switch23 = LCK_B.k_LCK_DFac_SA_CurCen_c;
    } else {
      LCK_B.Switch21_l = LCK_B.k_LCK_DFac_SA_StrSid_p;
      LCK_B.Switch23 = LCK_B.k_LCK_DFac_SA_CurSid_a;
    }

    /* End of Switch: '<S97>/Switch21' */

    /* Switch: '<S97>/Switch20' */
    if (LCK_B.Str_Flag) {
      LCK_B.Switch20_e = LCK_B.Switch21_l;
    } else {
      LCK_B.Switch20_e = LCK_B.Switch23;
    }

    /* End of Switch: '<S97>/Switch20' */

    /* Lookup_n-D: '<S98>/k_LCK_DFac_SS_StrCen' */
    LCK_B.k_LCK_DFac_SS_StrCen_l = look1_iflf_linlcpw(LCK_B.Abs4_a,
      k_LCK_StrSpdBks, k_LCK_DFac_SS_StrCen, 7U);

    /* Lookup_n-D: '<S98>/k_LCK_DFac_SS_StrSid' */
    LCK_B.k_LCK_DFac_SS_StrSid_a = look1_iflf_linlcpw(LCK_B.Abs4_a,
      k_LCK_StrSpdBks, k_LCK_DFac_SS_StrSid, 7U);

    /* Lookup_n-D: '<S98>/k_LCK_DFac_SS_CurCen' */
    LCK_B.k_LCK_DFac_SS_CurCen_p = look1_iflf_linlcpw(LCK_B.Abs4_a,
      k_LCK_StrSpdBks, k_LCK_DFac_SS_CurCen, 7U);

    /* Lookup_n-D: '<S98>/k_LCK_DFac_SS_CurSid' */
    LCK_B.k_LCK_DFac_SS_CurSid_k = look1_iflf_linlcpw(LCK_B.Abs4_a,
      k_LCK_StrSpdBks, k_LCK_DFac_SS_CurSid, 7U);

    /* Switch: '<S98>/Switch15' incorporates:
     *  Switch: '<S98>/Switch17'
     */
    if (LCK_B.Cen_Flag) {
      LCK_B.Switch15_n = LCK_B.k_LCK_DFac_SS_StrCen_l;
      LCK_B.Switch17_a = LCK_B.k_LCK_DFac_SS_CurCen_p;
    } else {
      LCK_B.Switch15_n = LCK_B.k_LCK_DFac_SS_StrSid_a;
      LCK_B.Switch17_a = LCK_B.k_LCK_DFac_SS_CurSid_k;
    }

    /* End of Switch: '<S98>/Switch15' */

    /* Lookup_n-D: '<S99>/k_LCK_DFac_Dy' */
    LCK_B.k_LCK_DFac_Dy_m = look1_iflf_linlcpw(LCK_B.Abs_p, k_LCK_Hed_DyBks,
      k_LCK_DFac_Dy, 9U);

    /* Lookup_n-D: '<S99>/k_LCK_DFac_Dy_Curv' */
    LCK_B.k_LCK_DFac_Dy_Curv_a = look1_iflf_linlcpw(LCK_B.Abs_p, k_LCK_Hed_DyBks,
      k_LCK_DFac_Dy_Curv, 9U);

    /* Switch: '<S98>/Switch14' incorporates:
     *  Switch: '<S99>/Switch28'
     */
    if (LCK_B.Str_Flag) {
      LCK_B.Switch14_l = LCK_B.Switch15_n;
      LCK_B.Switch28 = LCK_B.k_LCK_DFac_Dy_m;
    } else {
      LCK_B.Switch14_l = LCK_B.Switch17_a;
      LCK_B.Switch28 = LCK_B.k_LCK_DFac_Dy_Curv_a;
    }

    /* End of Switch: '<S98>/Switch14' */

    /* Lookup_n-D: '<S100>/k_LCK_DFac_Vspd' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.k_LCK_DFac_Vspd_a = look1_iflf_linlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_LCK_VspdBks, k_LCK_DFac_Vspd, 15U);

    /* Lookup_n-D: '<S101>/k_LCK_DFac_Rad' */
    LCK_B.k_LCK_DFac_Rad_b = look1_iflf_linlcpw(LCK_B.Saturation_k3,
      k_LCK_RadBks, k_LCK_DFac_Rad, 13U);

    /* Product: '<S93>/Product' incorporates:
     *  Constant: '<S93>/k_LCK_LatCtrl_Kd'
     */
    LCK_B.Product_f = k_LCK_LatCtrl_Kd * LCK_B.Switch26 * LCK_B.Switch10_i *
      LCK_B.Switch11_i5 * LCK_B.Switch20_e * LCK_B.Switch14_l * LCK_B.Switch28 *
      LCK_B.k_LCK_DFac_Vspd_a * LCK_B.k_LCK_DFac_Rad_b;

    /* Sum: '<S102>/Sum' */
    LCK_B.Sum_fg = LCK_B.Product_f - LCK_B.UnitDelay_gl;

    /* RelationalOperator: '<S102>/Relational Operator1' */
    LCK_B.RelationalOperator1_kq = (LCK_B.Product5_k < LCK_B.Sum_fg);

    /* Switch: '<S102>/Switch19' */
    if (LCK_B.RelationalOperator1_kq) {
      LCK_B.Switch19_o = LCK_B.Product5_k;
    } else {
      LCK_B.Switch19_o = LCK_B.Sum_fg;
    }

    /* End of Switch: '<S102>/Switch19' */

    /* RelationalOperator: '<S102>/Relational Operator4' */
    LCK_B.RelationalOperator4_fl = (LCK_B.Product3_pu > LCK_B.Switch19_o);

    /* Switch: '<S102>/Switch20' */
    if (LCK_B.RelationalOperator4_fl) {
      LCK_B.Switch20_b = LCK_B.Product3_pu;
    } else {
      LCK_B.Switch20_b = LCK_B.Switch19_o;
    }

    /* End of Switch: '<S102>/Switch20' */

    /* Sum: '<S102>/Sum1' */
    LCK_B.Sum1_h = LCK_B.Switch20_b + LCK_B.UnitDelay_gl;

    /* Gain: '<S92>/Gain3' */
    LCK_B.Gain3_n = LCK_P.Gain3_Gain_a * LCK_B.Sum1_h;

    /* Product: '<S92>/Product2' */
    LCK_B.Product2_h = LCK_B.Product2_p3 * LCK_B.Gain3_n;

    /* RelationalOperator: '<S107>/LowerRelop1' incorporates:
     *  Constant: '<S92>/k_LCK_DTermMax'
     */
    LCK_B.LowerRelop1_fo = (LCK_B.Product2_h > k_LCK_DTermMax);

    /* Gain: '<S92>/Gain4' incorporates:
     *  Constant: '<S92>/k_LCK_DTermMax'
     */
    LCK_B.Gain4_p = LCK_P.Gain4_Gain_c * k_LCK_DTermMax;

    /* RelationalOperator: '<S107>/UpperRelop' */
    LCK_B.UpperRelop_p = (LCK_B.Product2_h < LCK_B.Gain4_p);

    /* Switch: '<S107>/Switch' */
    if (LCK_B.UpperRelop_p) {
      LCK_B.Switch_o = LCK_B.Gain4_p;
    } else {
      LCK_B.Switch_o = LCK_B.Product2_h;
    }

    /* End of Switch: '<S107>/Switch' */

    /* Switch: '<S107>/Switch2' incorporates:
     *  Constant: '<S92>/k_LCK_DTermMax'
     */
    if (LCK_B.LowerRelop1_fo) {
      LCK_B.Switch2_h = k_LCK_DTermMax;
    } else {
      LCK_B.Switch2_h = LCK_B.Switch_o;
    }

    /* End of Switch: '<S107>/Switch2' */

    /* Sum: '<S92>/Add' */
    LCK_B.Add_e = LCK_B.Switch2_o + LCK_B.Switch2_h;

    /* Sum: '<S105>/Sum' */
    LCK_B.Sum_is = LCK_B.Add_e - LCK_B.UnitDelay_ek;

    /* Product: '<S105>/Product' */
    LCK_B.Product_gof = LCK_B.Product1_k2 * LCK_B.Sum_is;

    /* Saturate: '<S105>/Saturation' incorporates:
     *  Sum: '<S105>/Sum1'
     */
    LCK_B.Sum1_g = LCK_B.Product_gof + LCK_B.UnitDelay_ek;
    if (LCK_B.Sum1_g > LCK_P.Saturation_UpperSat_h) {
      /* Saturate: '<S92>/Saturation' */
      LCK_B.Saturation_lf = LCK_P.Saturation_UpperSat_h;
    } else if (LCK_B.Sum1_g < LCK_P.Saturation_LowerSat_hy) {
      /* Saturate: '<S92>/Saturation' */
      LCK_B.Saturation_lf = LCK_P.Saturation_LowerSat_hy;
    } else {
      /* Saturate: '<S92>/Saturation' */
      LCK_B.Saturation_lf = LCK_B.Sum1_g;
    }

    /* End of Saturate: '<S105>/Saturation' */

    /* Saturate: '<S92>/Saturation' */
    if (LCK_B.Saturation_lf > LCK_P.Saturation_UpperSat_b) {
      LCK_B.Saturation_kk = LCK_P.Saturation_UpperSat_b;
    } else if (LCK_B.Saturation_lf < LCK_P.Saturation_LowerSat_jc) {
      LCK_B.Saturation_kk = LCK_P.Saturation_LowerSat_jc;
    } else {
      LCK_B.Saturation_kk = LCK_B.Saturation_lf;
    }

    /* Sum: '<S37>/Sum2' */
    LCK_B.Sum2_k = (LCK_B.Saturation_g + LCK_B.Saturation_kk) +
      LCK_B.Saturation_d5;

    /* RelationalOperator: '<S37>/Relational Operator3' incorporates:
     *  Constant: '<S37>/Constant2'
     */
    LCK_B.RelationalOperator3_n4 = (LCK_B.Switch2_md <= LCK_P.Constant2_Value_c);

    /* Switch: '<S37>/Switch10' incorporates:
     *  Constant: '<S37>/Constant1'
     */
    if (LCK_B.RelationalOperator3_n4) {
      LCK_B.Switch10_gr = LCK_B.Sum2_k;
    } else {
      LCK_B.Switch10_gr = LCK_P.Constant1_Value_n;
    }

    /* End of Switch: '<S37>/Switch10' */

    /* Abs: '<S37>/Abs' */
    LCK_B.Abs_os = (real32_T)fabs(LCK_B.Switch10_gr);

    /* Lookup_n-D: '<S37>/k_LCK_NonLinCompTab' */
    LCK_B.k_LCK_NonLinCompTab_e = look1_iflf_linlcpw(LCK_B.Abs_os,
      k_LCK_TorqCmdBks, k_LCK_NonLinCompTab, 19U);

    /* Lookup_n-D: '<S37>/k_LCK_NonLinCompFac_Vspd' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.k_LCK_NonLinCompFac_Vspd_p = look1_iflf_linlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_LCK_VspdBks,
       k_LCK_NonLinCompFac_Vspd, 15U);

    /* Product: '<S37>/Product3' */
    LCK_B.Product3_a = LCK_B.Switch10_gr * LCK_B.k_LCK_NonLinCompTab_e *
      LCK_B.k_LCK_NonLinCompFac_Vspd_p;

    /* Switch: '<S37>/Switch3' incorporates:
     *  Constant: '<S37>/k_LCK_NonLinearComp_En'
     */
    if (k_LCK_NonLinearComp_En >= LCK_P.Switch3_Threshold_b) {
      /* Saturate: '<S37>/Saturation1' */
      LCK_B.Switch3_eo = LCK_B.Product3_a;
    } else {
      /* Saturate: '<S37>/Saturation1' */
      LCK_B.Switch3_eo = LCK_B.Switch10_gr;
    }

    /* End of Switch: '<S37>/Switch3' */

    /* Saturate: '<S37>/Saturation1' */
    if (LCK_B.Switch3_eo > LCK_P.Saturation1_UpperSat) {
      LCK_B.Saturation1 = LCK_P.Saturation1_UpperSat;
    } else if (LCK_B.Switch3_eo < LCK_P.Saturation1_LowerSat) {
      LCK_B.Saturation1 = LCK_P.Saturation1_LowerSat;
    } else {
      LCK_B.Saturation1 = LCK_B.Switch3_eo;
    }

    /* RelationalOperator: '<S39>/Compare' incorporates:
     *  Constant: '<S39>/Constant'
     */
    LCK_B.Compare_hy = (LCK_B.Switch_hf >= LCK_P.CompareToConstant_const_n);

    /* Switch: '<S38>/Switch4' incorporates:
     *  Constant: '<S38>/Constant1'
     */
    if (LCK_B.Compare_hy) {
      LCK_B.Switch4_o = LCK_B.Saturation1;
    } else {
      LCK_B.Switch4_o = LCK_P.Constant1_Value_dy;
    }

    /* End of Switch: '<S38>/Switch4' */

    /* UnitDelay: '<S38>/Unit Delay' */
    LCK_B.UnitDelay_mx = LCK_DW.UnitDelay_DSTATE_jh;

    /* Sum: '<S38>/Sum' */
    LCK_B.Sum_lb = LCK_B.Switch4_o - LCK_B.UnitDelay_mx;

    /* UnitDelay: '<S38>/Unit Delay1' */
    LCK_B.UnitDelay1_o = LCK_DW.UnitDelay1_DSTATE_e;

    /* RelationalOperator: '<S40>/Compare' incorporates:
     *  Constant: '<S40>/Constant'
     */
    LCK_B.Compare_ed = (LCK_B.UnitDelay1_o == LCK_P.CompareToConstant1_const_m);

    /* Logic: '<S38>/Logical Operator' */
    LCK_B.LogicalOperator_h = (LCK_B.Compare_hy && LCK_B.Compare_ed);

    /* Chart: '<S41>/Trigger Hold' incorporates:
     *  Constant: '<S38>/Constant2'
     */
    LCK_TriggerHold(LCK_B.LogicalOperator_h, LCK_P.Constant2_Value_aq,
                    &LCK_B.sf_TriggerHold);

    /* Lookup_n-D: '<S38>/k_LCK_RatLmtFac_TorqCmd_Vspd' incorporates:
     *  Inport: '<Root>/LCK_VehSigInputs'
     */
    LCK_B.k_LCK_RatLmtFac_TorqCmd_Vspd_b = look1_iflf_linlcpw
      (LCK_U.LCK_VehSigInputs.Vehicle_Speed, k_LCK_VspdBks,
       k_LCK_RatLmtFac_TorqCmd_Vspd, 15U);

    /* Abs: '<S38>/Abs' */
    LCK_B.Abs_k = (real32_T)fabs(LCK_B.Saturation1);

    /* Lookup_n-D: '<S38>/k_LCK_RatLmt_TorqCmd' */
    LCK_B.k_LCK_RatLmt_TorqCmd_e = look1_iflf_linlcpw(LCK_B.Abs_k,
      k_LCK_TorqCmdBks, k_LCK_RatLmt_TorqCmd, 19U);

    /* Product: '<S38>/Product1' */
    LCK_B.Product1_ex = LCK_B.k_LCK_RatLmtFac_TorqCmd_Vspd_b *
      LCK_B.k_LCK_RatLmt_TorqCmd_e;

    /* Switch: '<S38>/Switch' incorporates:
     *  Constant: '<S38>/Constant3'
     */
    if (LCK_B.sf_TriggerHold.Out) {
      LCK_B.Switch_b = LCK_P.Constant3_Value_cw;
    } else {
      LCK_B.Switch_b = LCK_B.Product1_ex;
    }

    /* End of Switch: '<S38>/Switch' */

    /* Gain: '<S38>/Gain1' */
    LCK_B.Gain1_f4 = ML_TIME_MSEC * LCK_B.Switch_b;

    /* Product: '<S38>/Product5' incorporates:
     *  Constant: '<S38>/const1'
     */
    LCK_B.Product5_eg = LCK_B.Gain1_f4 / LCK_P.const1_Value_jp;

    /* RelationalOperator: '<S38>/Relational Operator1' */
    LCK_B.RelationalOperator1_oj = (LCK_B.Product5_eg < LCK_B.Sum_lb);

    /* Switch: '<S38>/Switch19' */
    if (LCK_B.RelationalOperator1_oj) {
      LCK_B.Switch19_ob = LCK_B.Product5_eg;
    } else {
      LCK_B.Switch19_ob = LCK_B.Sum_lb;
    }

    /* End of Switch: '<S38>/Switch19' */

    /* Gain: '<S38>/Gain2' */
    LCK_B.Gain2_d = LCK_P.Gain2_Gain_a5 * LCK_B.Switch_b;

    /* Gain: '<S38>/Gain' */
    LCK_B.Gain_nl = ML_TIME_MSEC * LCK_B.Gain2_d;

    /* Product: '<S38>/Product3' incorporates:
     *  Constant: '<S38>/const'
     */
    LCK_B.Product3_j = LCK_B.Gain_nl / LCK_P.const_Value_c;

    /* RelationalOperator: '<S38>/Relational Operator4' */
    LCK_B.RelationalOperator4_nt = (LCK_B.Product3_j > LCK_B.Switch19_ob);

    /* Switch: '<S38>/Switch20' */
    if (LCK_B.RelationalOperator4_nt) {
      LCK_B.Switch20_hb = LCK_B.Product3_j;
    } else {
      LCK_B.Switch20_hb = LCK_B.Switch19_ob;
    }

    /* End of Switch: '<S38>/Switch20' */

    /* Sum: '<S38>/Sum1' */
    LatCtrl_LCK_TorqCmd = LCK_B.Switch20_hb + LCK_B.UnitDelay_mx;

    /* Sum: '<S37>/Sum1' */
    LCK_B.Sum1_nr = LCK_B.Saturation_g + LCK_B.Saturation_kk;

    /* Switch: '<S37>/Switch1' incorporates:
     *  Constant: '<S37>/Constant3'
     */
    if (LCK_B.RelationalOperator3_n4) {
      LCK_PID_TorqCmd = LCK_B.Sum1_nr;
    } else {
      LCK_PID_TorqCmd = (real32_T)LCK_P.Constant3_Value_a;
    }

    /* End of Switch: '<S37>/Switch1' */

    /* Product: '<S37>/Divide' */
    LCK_B.Divide_h = LCK_PID_TorqCmd / LCK_B.Switch10_gr;

    /* Gain: '<S11>/Gain3' */
    LCK_B.Gain3_p = LCK_P.Gain3_Gain_g * LCK_B.Product3_m;

    /* Gain: '<S11>/Gain' */
    LCK_B.Gain_o = LCK_P.Gain_Gain_pt * LCK_B.k_LCK_FfwFac_Dy_e;

    /* Gain: '<S11>/Gain2' */
    LCK_B.Gain2_du = LCK_P.Gain2_Gain_d * LCK_B.Product2_p;

    /* Gain: '<S11>/Gain1' */
    LCK_B.Gain1_j = LCK_P.Gain1_Gain_f * LCK_B.Switch1_hx;

    /* Sum: '<S71>/Add5' */
    LCK_B.Add5 = LCK_B.Switch2_l + LCK_B.Switch2_k;

    /* Gain: '<S17>/Gain3' */
    Curvature_Rate = LCK_P.Gain3_Gain_gl * LCK_B.Saturation_as;

    /* Sum: '<S231>/Subtract1' */
    LCK_B.Subtract1_i = LCK_B.LC_TgtDy - LCK_B.long_s;

    /* RelationalOperator: '<S231>/Relational Operator1' */
    LCK_B.RelationalOperator1_oq = (LCK_B.LC_TgtDy >= LCK_B.long_s);

    /* Switch: '<S231>/Switch1' incorporates:
     *  Constant: '<S231>/Constant2'
     */
    if (LCK_B.RelationalOperator1_oq) {
      LCK_B.Switch1_c = LCK_B.Subtract1_i;
    } else {
      LCK_B.Switch1_c = LCK_P.Constant2_Value_j;
    }

    /* End of Switch: '<S231>/Switch1' */

    /* DataTypeConversion: '<S231>/Data Type Conversion6' */
    LCK_B.DataTypeConversion6_l = (real32_T)LCK_B.Switch1_c;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    LCK_B.LC_Dis_dy = LCK_B.DataTypeConversion6_l;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' incorporates:
     *  Outport: '<Root>/LC_dx'
     */
    LCK_B.LC_Dis_dx = LCK_Y.LC_dx;

    /* Saturate: '<S231>/Saturation1' incorporates:
     *  Constant: '<S231>/ML_TIME_SEC'
     *  Product: '<S231>/Product'
     */
    LCK_B.Product_g2 = LCK_B.pass_cnt * ML_TIME_SEC;
    if (LCK_B.Product_g2 > LCK_P.Saturation1_UpperSat_j) {
      LCK_B.Saturation1_b = LCK_P.Saturation1_UpperSat_j;
    } else if (LCK_B.Product_g2 < LCK_P.Saturation1_LowerSat_k) {
      LCK_B.Saturation1_b = LCK_P.Saturation1_LowerSat_k;
    } else {
      LCK_B.Saturation1_b = LCK_B.Product_g2;
    }

    /* End of Saturate: '<S231>/Saturation1' */

    /* RelationalOperator: '<S7>/Relational Operator20' incorporates:
     *  Constant: '<S7>/Constant29'
     *  Outport: '<Root>/LCK_Mode'
     */
    LCK_B.RelationalOperator20_e = (LCK_Y.LCK_Mode == LCK_P.Constant29_Value_j);

    /* DataTypeConversion: '<S7>/Data Type Conversion' */
    LCK_B.DataTypeConversion_m = LCK_B.RelationalOperator20_e;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    LCK_B.LKS_Error = LCK_B.DataTypeConversion_m;

    /* RelationalOperator: '<S7>/Relational Operator2' incorporates:
     *  Constant: '<S7>/Constant3'
     *  Outport: '<Root>/LCK_Mode'
     */
    LCK_B.RelationalOperator2_bc = (LCK_Y.LCK_Mode == LCK_P.Constant3_Value_k3);

    /* RelationalOperator: '<S7>/Relational Operator3' incorporates:
     *  Constant: '<S7>/Constant5'
     *  Outport: '<Root>/LCK_Mode'
     */
    LCK_B.RelationalOperator3_e = (LCK_Y.LCK_Mode == LCK_P.Constant5_Value_b);

    /* Switch: '<S7>/Switch2' incorporates:
     *  Constant: '<S7>/Constant6'
     *  Constant: '<S7>/Constant7'
     */
    if (LCK_B.RelationalOperator3_e) {
      LCK_B.Switch2_g = LCK_P.Constant6_Value_k;
    } else {
      LCK_B.Switch2_g = LCK_P.Constant7_Value_j;
    }

    /* End of Switch: '<S7>/Switch2' */

    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/Constant4'
     */
    if (LCK_B.RelationalOperator2_bc) {
      LCK_B.Switch1_k = LCK_P.Constant4_Value_ih;
    } else {
      LCK_B.Switch1_k = LCK_B.Switch2_g;
    }

    /* End of Switch: '<S7>/Switch1' */

    /* DataTypeConversion: '<S7>/Data Type Conversion3' */
    LCK_B.DataTypeConversion3_m = (real32_T)LCK_B.Switch1_k;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    LCK_B.LC_Direction = LCK_B.DataTypeConversion3_m;

    /* RelationalOperator: '<S7>/Relational Operator4' incorporates:
     *  Constant: '<S7>/Constant9'
     *  Outport: '<Root>/LCK_Mode'
     */
    LCK_B.RelationalOperator4_ap = (LCK_Y.LCK_Mode == LCK_P.Constant9_Value_l);

    /* RelationalOperator: '<S7>/Relational Operator1' incorporates:
     *  Constant: '<S7>/Constant1'
     *  Outport: '<Root>/LCK_Mode'
     */
    LCK_B.RelationalOperator1_df = (LCK_Y.LCK_Mode == LCK_P.Constant1_Value_o);

    /* RelationalOperator: '<S7>/Relational Operator5' incorporates:
     *  Constant: '<S7>/Constant12'
     *  Outport: '<Root>/LCK_Mode'
     */
    LCK_B.RelationalOperator5_ck = (LCK_Y.LCK_Mode == LCK_P.Constant12_Value_o);

    /* Switch: '<S7>/Switch5' incorporates:
     *  Constant: '<S7>/Constant13'
     *  Constant: '<S7>/Constant14'
     */
    if (LCK_B.RelationalOperator5_ck) {
      LCK_B.Switch5_kl = LCK_P.Constant13_Value_n;
    } else {
      LCK_B.Switch5_kl = LCK_P.Constant14_Value_b;
    }

    /* End of Switch: '<S7>/Switch5' */

    /* Switch: '<S7>/Switch4' incorporates:
     *  Constant: '<S7>/Constant11'
     */
    if (LCK_B.RelationalOperator1_df) {
      LCK_B.Switch4_l = LCK_P.Constant11_Value_e;
    } else {
      LCK_B.Switch4_l = LCK_B.Switch5_kl;
    }

    /* End of Switch: '<S7>/Switch4' */

    /* Switch: '<S7>/Switch3' incorporates:
     *  Constant: '<S7>/Constant10'
     */
    if (LCK_B.RelationalOperator4_ap) {
      LCK_B.Switch3_h = LCK_P.Constant10_Value_b;
    } else {
      LCK_B.Switch3_h = LCK_B.Switch4_l;
    }

    /* End of Switch: '<S7>/Switch3' */

    /* DataTypeConversion: '<S7>/Data Type Conversion1' */
    LCK_B.DataTypeConversion1_b = (real32_T)LCK_B.Switch3_h;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    LCK_B.LKS_Status = LCK_B.DataTypeConversion1_b;

    /* RelationalOperator: '<S7>/Relational Operator7' incorporates:
     *  Constant: '<S7>/Constant16'
     *  Outport: '<Root>/LCK_Mode'
     */
    LCK_B.RelationalOperator7_c = (LCK_Y.LCK_Mode == LCK_P.Constant16_Value_k);

    /* RelationalOperator: '<S7>/Relational Operator6' incorporates:
     *  Constant: '<S7>/Constant15'
     *  Inport: '<Root>/ZOP_LC_Command'
     */
    LCK_B.RelationalOperator6_l = (LCK_U.ZOP_LC_Command !=
      LCK_P.Constant15_Value_i);

    /* Logic: '<S7>/Logical Operator2' */
    LCK_B.LogicalOperator2_n = (LCK_B.RelationalOperator7_c &&
      LCK_B.RelationalOperator6_l);

    /* RelationalOperator: '<S7>/Relational Operator8' incorporates:
     *  Constant: '<S7>/Constant18'
     *  Outport: '<Root>/LCK_Mode'
     */
    LCK_B.RelationalOperator8_i = (LCK_Y.LCK_Mode > LCK_P.Constant18_Value_g);

    /* Logic: '<S7>/Logical Operator1' */
    LCK_B.LogicalOperator1_c = (LCK_B.RelationalOperator6_l &&
      LCK_B.RelationalOperator8_i);

    /* RelationalOperator: '<S7>/Relational Operator9' incorporates:
     *  Constant: '<S7>/Constant20'
     *  Outport: '<Root>/LCK_Mode'
     */
    LCK_B.RelationalOperator9_e = (LCK_Y.LCK_Mode == LCK_P.Constant20_Value_p);

    /* Delay: '<S7>/Delay1' */
    LCK_B.Delay1_i = LCK_DW.Delay1_DSTATE_j;

    /* RelationalOperator: '<S7>/Relational Operator10' incorporates:
     *  Constant: '<S7>/Constant21'
     */
    LCK_B.RelationalOperator10_m = (LCK_B.Delay1_i > LCK_P.Constant21_Value_j);

    /* Logic: '<S7>/Logical Operator3' */
    LCK_B.LogicalOperator3_g = (LCK_B.RelationalOperator9_e &&
      LCK_B.RelationalOperator10_m);

    /* DataTypeConversion: '<S7>/Data Type Conversion54' */
    LCK_B.DataTypeConversion54_k = LCK_B.LogicalOperator3_g;

    /* Chart: '<S235>/Trigger Hold' incorporates:
     *  Constant: '<S7>/Constant22'
     */
    LCK_TriggerHold_i(LCK_B.DataTypeConversion54_k, LCK_P.Constant22_Value_k,
                      &LCK_B.sf_TriggerHold_b);

    /* Switch: '<S7>/Switch7' incorporates:
     *  Constant: '<S7>/Constant19'
     */
    if (LCK_B.LogicalOperator1_c) {
      LCK_B.Switch7_c = LCK_P.Constant19_Value_kv;
    } else {
      LCK_B.Switch7_c = LCK_B.sf_TriggerHold_b.Out;
    }

    /* End of Switch: '<S7>/Switch7' */

    /* Switch: '<S7>/Switch6' incorporates:
     *  Constant: '<S7>/Constant17'
     */
    if (LCK_B.LogicalOperator2_n) {
      LCK_B.Switch6_kp = (real32_T)LCK_P.Constant17_Value_h;
    } else {
      LCK_B.Switch6_kp = (real32_T)LCK_B.Switch7_c;
    }

    /* End of Switch: '<S7>/Switch6' */

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    LCK_B.LC_Request = LCK_B.Switch6_kp;

    /* Gain: '<S5>/Gain' incorporates:
     *  Outport: '<Root>/LCK_Mode'
     */
    LCK_B.Gain_hz = LCK_P.Gain_Gain_bk * LCK_Y.LCK_Mode;

    /* DataTypeConversion: '<S5>/Data Type Conversion3' */
    LCK_B.DataTypeConversion3_a = LCK_B.TJA_VehInvalid_Magic;

    /* DataTypeConversion: '<S5>/Data Type Conversion2' */
    LCK_B.DataTypeConversion2_k = LCK_B.Idle2ReadyBitwise1;

    /* DataTypeConversion: '<S5>/Data Type Conversion1' */
    LCK_B.DataTypeConversion1_j = LCK_B.DataTypeConversion13;

    /* DataTypeConversion: '<S5>/Data Type Conversion' */
    LCK_B.DataTypeConversion_c = LCK_B.Idle2ReadyBitwise;

    /* Logic: '<S7>/Logical Operator' */
    LCK_B.LogicalOperator_i = !(LCK_B.f_hands_on_wheel != 0.0F);

    /* DataTypeConversion: '<S7>/Data Type Conversion2' */
    LCK_B.DataTypeConversion2_b = LCK_B.LogicalOperator_i;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    LCK_B.Handsoff_Warning = LCK_B.DataTypeConversion2_b;
    LCK_B.LCK_PID_Main_Version = LCK_P.LCK_PID_Main_Version_Value;
    LCK_B.LCK_PID_Minor_Version = LCK_P.LCK_PID_Minor_Version_Value;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_LCK_Debug_Info_at_inport_0' incorporates:
     *  Constant: '<S4>/LCK_PID_Main_Version'
     *  Constant: '<S4>/LCK_PID_Minor_Version'
     *  Inport: '<Root>/LCK_LanSigInputs'
     */
    LCK_B.LanSigInputs = LCK_U.LCK_LanSigInputs;

    /* SignalConversion: '<S7>/TmpBufferAtConstant8Outport1' incorporates:
     *  Constant: '<S7>/Constant8'
     */
    LCK_B.TmpBufferAtConstant8Outport1 = LCK_P.Constant8_Value_l;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    LCK_B.LKS_Passive_Rea = LCK_B.TmpBufferAtConstant8Outport1;

    /* SignalConversion: '<S7>/TmpBufferAtConstant2Outport1' incorporates:
     *  Constant: '<S7>/Constant2'
     */
    LCK_B.TmpBufferAtConstant2Outport1 = LCK_P.Constant2_Value_i;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    LCK_B.LC_pro_reason = LCK_B.TmpBufferAtConstant2Outport1;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    LCK_B.LC_Proposal = LCK_B.TmpBufferAtConstant2Outport1;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    LCK_B.LC_Reason = LCK_B.TmpBufferAtConstant2Outport1;

    /* SignalConversion: '<S7>/TmpBufferAtConstant23Outport1' incorporates:
     *  Constant: '<S7>/Constant23'
     */
    LCK_B.TmpBufferAtConstant23Outport1 = LCK_P.Constant23_Value_h;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    LCK_B.LC_Tip = LCK_B.TmpBufferAtConstant23Outport1;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    LCK_B.LC_Fail_Tip = LCK_B.TmpBufferAtConstant23Outport1;
    LCK_B.k_HighAccel_suppress_hold_a = k_HighAccel_suppress_hold;

    /* Update for Delay: '<S231>/Delay1' incorporates:
     *  Constant: '<S113>/k_HighAccel_suppress_hold'
     */
    memcpy(&LCK_DW.Delay1_DSTATE[0], &LCK_B.output[0], 3200U * sizeof(real_T));

    /* Update for Delay: '<S244>/Delay5' */
    LCK_DW.Delay5_DSTATE = LCK_B.Switch1_o;

    /* Update for Delay: '<S244>/Delay1' incorporates:
     *  Outport: '<Root>/LCK_Mode'
     */
    LCK_DW.Delay1_DSTATE_i = LCK_Y.LCK_Mode;

    /* Update for Delay: '<S242>/Delay' */
    LCK_DW.Delay_DSTATE = LCK_B.Switch;

    /* Update for UnitDelay: '<S240>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE = LCK_B.Saturation;

    /* Update for UnitDelay: '<S241>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_a = LCK_B.Saturation_k;

    /* Update for Delay: '<S242>/Delay1' */
    LCK_DW.Delay1_DSTATE_c = LCK_B.Switch;

    /* Update for Delay: '<S243>/Delay5' incorporates:
     *  Outport: '<Root>/LCK_Mode'
     */
    LCK_DW.Delay5_DSTATE_n = LCK_Y.LCK_Mode;

    /* Update for UnitDelay: '<S141>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_h = LCK_B.Saturation_b;

    /* Update for UnitDelay: '<S114>/Unit Delay2' */
    LCK_DW.UnitDelay2_DSTATE = LCK_B.Abs_o;

    /* Update for UnitDelay: '<S114>/Unit Delay1' */
    LCK_DW.UnitDelay1_DSTATE = LCK_B.Switch13_b;

    /* Update for UnitDelay: '<S159>/Unit Delay6' */
    LCK_DW.UnitDelay6_DSTATE = LCK_B.Switch69;

    /* Update for UnitDelay: '<S159>/Unit Delay11' */
    LCK_DW.UnitDelay11_DSTATE = LCK_B.Switch67;

    /* Update for UnitDelay: '<S159>/Unit Delay7' */
    LCK_DW.UnitDelay7_DSTATE = LCK_B.Switch67;

    /* Update for Atomic SubSystem: '<S172>/First_Order_Lag_Filter2' */
    /* Update for UnitDelay: '<S226>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_j5 = LCK_B.Sum1_a;

    /* End of Update for SubSystem: '<S172>/First_Order_Lag_Filter2' */

    /* Update for Atomic SubSystem: '<S109>/Det_Driver_Steer_Override' */
    /* Update for UnitDelay: '<S112>/Unit Delay1' */
    LCK_DW.UnitDelay1_DSTATE_g = LCK_B.DataTypeConversion3_h;

    /* Update for UnitDelay: '<S112>/Unit Delay2' */
    LCK_DW.UnitDelay2_DSTATE_c = LCK_B.DataTypeConversion4_l;

    /* Update for Delay: '<S112>/Delay1' */
    LCK_DW.Delay1_DSTATE_k = LCK_B.Gain_hz;

    /* Update for Delay: '<S112>/Delay' */
    LCK_DW.Delay_DSTATE_b = LatCtrl_LCK_TorqCmd;

    /* End of Update for SubSystem: '<S109>/Det_Driver_Steer_Override' */

    /* Update for Atomic SubSystem: '<S109>/Filter_steer_angle_CR' */
    /* Update for UnitDelay: '<S147>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_jx = LCK_B.Saturation_p;

    /* End of Update for SubSystem: '<S109>/Filter_steer_angle_CR' */

    /* Update for Delay: '<S168>/Delay1' */
    LCK_DW.Delay1_DSTATE_a = LCK_B.Gain_hz;

    /* Update for Delay: '<S168>/Delay' */
    LCK_DW.Delay_DSTATE_c = LCK_B.Delay1_k5;

    /* Update for Delay: '<S171>/Delay' */
    LCK_DW.Delay_DSTATE_p = LCK_B.Gain_hz;

    /* Update for Delay: '<S171>/Delay2' */
    LCK_DW.Delay2_DSTATE = LCK_B.Switch7_o;

    /* Update for Delay: '<S171>/Delay1' */
    LCK_DW.Delay1_DSTATE_f = LCK_B.LC_Phase;

    /* Update for Delay: '<S6>/Delay2' */
    LCK_DW.Delay2_DSTATE_e = LCK_B.Switch9_e;

    /* Update for UnitDelay: '<S25>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_b = LCK_B.Saturation_a;

    /* Update for UnitDelay: '<S57>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_j = LCK_B.Saturation_k3;

    /* Update for UnitDelay: '<S23>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_d = LCK_B.Saturation_l;

    /* Update for UnitDelay: '<S232>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_l = LCK_B.Sum1_om;

    /* Update for UnitDelay: '<S47>/Unit Delay2' */
    LCK_DW.UnitDelay2_DSTATE_i = LCK_B.Switch_hf;

    /* Update for UnitDelay: '<S24>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_g = LCK_B.Saturation_e;

    /* Update for UnitDelay: '<S26>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_f = LCK_B.Saturation_as;

    /* Update for UnitDelay: '<S83>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_ao = LCK_B.Sum1_oe;

    /* Update for UnitDelay: '<S82>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_lg = LCK_B.Sum1_dz;

    /* Update for UnitDelay: '<S71>/Unit Delay1' */
    LCK_DW.UnitDelay1_DSTATE_j = LCK_B.Switch2_l;

    /* Update for UnitDelay: '<S71>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_ly = LCK_B.Switch2_k;

    /* Update for UnitDelay: '<S81>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_n = LCK_B.Sum1_ob;

    /* Update for UnitDelay: '<S86>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_do = LCK_B.Saturation_d;

    /* Update for UnitDelay: '<S32>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_k = LCK_B.Saturation_d5;

    /* Update for UnitDelay: '<S105>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_fy = LCK_B.Saturation_lf;

    /* Update for UnitDelay: '<S103>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_l1 = LCK_B.Sum1_oc;

    /* Update for UnitDelay: '<S44>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_p = LCK_B.Saturation_j;

    /* Update for UnitDelay: '<S102>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_ah = LCK_B.Sum1_h;

    /* Update for UnitDelay: '<S38>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_jh = LatCtrl_LCK_TorqCmd;

    /* Update for UnitDelay: '<S38>/Unit Delay1' */
    LCK_DW.UnitDelay1_DSTATE_e = LCK_B.Switch_hf;

    /* Update for Delay: '<S7>/Delay1' incorporates:
     *  Outport: '<Root>/LCK_Mode'
     */
    LCK_DW.Delay1_DSTATE_j = LCK_Y.LCK_Mode;

    /* End of Outputs for SubSystem: '<Root>/Lateral_Control_Module' */
    LCK_DW.i = 0.0;
  } else {
    LCK_DW.i++;
  }

  /* End of Chart: '<Root>/Main_OS' */

  /* BusCreator: '<Root>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' incorporates:
   *  Outport: '<Root>/Lateral_HMI'
   */
  LCK_Y.Lateral_HMI.LKS_Error = LCK_B.LKS_Error;
  LCK_Y.Lateral_HMI.LKS_Passive_Rea = LCK_B.LKS_Passive_Rea;
  LCK_Y.Lateral_HMI.LKS_Status = LCK_B.LKS_Status;
  LCK_Y.Lateral_HMI.LC_pro_reason = LCK_B.LC_pro_reason;
  LCK_Y.Lateral_HMI.LC_Proposal = LCK_B.LC_Proposal;
  LCK_Y.Lateral_HMI.LC_Reason = LCK_B.LC_Reason;
  LCK_Y.Lateral_HMI.LC_Request = LCK_B.LC_Request;
  LCK_Y.Lateral_HMI.LC_Tip = LCK_B.LC_Tip;
  LCK_Y.Lateral_HMI.LC_Fail_Tip = LCK_B.LC_Fail_Tip;
  LCK_Y.Lateral_HMI.LC_Dis_dy = LCK_B.LC_Dis_dy;
  LCK_Y.Lateral_HMI.LC_Dis_dx = LCK_B.LC_Dis_dx;
  LCK_Y.Lateral_HMI.LC_Direction = LCK_B.LC_Direction;
  LCK_Y.Lateral_HMI.Handsoff_Warning = LCK_B.Handsoff_Warning;
}

/* Model update function */
void LCK_update(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++LCK_M->Timing.clockTick0)) {
    ++LCK_M->Timing.clockTickH0;
  }

  LCK_M->Timing.taskTime0 = LCK_M->Timing.clockTick0 * LCK_M->Timing.stepSize0 +
    LCK_M->Timing.clockTickH0 * LCK_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void LCK_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)LCK_M, 0,
                sizeof(RT_MODEL_LCK_T));
  LCK_M->Timing.stepSize0 = 0.01;

  /* block I/O */
  (void) memset(((void *) &LCK_B), 0,
                sizeof(B_LCK_T));

  /* exported global signals */
  Road_Radius = 0.0F;
  LatCtrl_LCK_TorqCmd = 0.0F;
  LCK_PID_TorqCmd = 0.0F;
  Curvature_Rate = 0.0F;
  I_Term_Reset_Flag = false;

  /* states (dwork) */
  (void) memset((void *)&LCK_DW, 0,
                sizeof(DW_LCK_T));

  /* external inputs */
  (void)memset(&LCK_U, 0, sizeof(ExtU_LCK_T));

  /* external outputs */
  (void) memset((void *)&LCK_Y, 0,
                sizeof(ExtY_LCK_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    LCK_rti_init_trc_pointers();
  }

  LCK_DW.i = 0.0;

  /* SystemInitialize for Chart: '<Root>/Main_OS' incorporates:
   *  SubSystem: '<Root>/Lateral_Control_Module'
   */
  /* InitializeConditions for Delay: '<S231>/Delay1' */
  memcpy(&LCK_DW.Delay1_DSTATE[0], &LCK_P.Delay1_InitialCondition[0], 3200U *
         sizeof(real_T));

  /* InitializeConditions for Delay: '<S244>/Delay5' */
  LCK_DW.Delay5_DSTATE = LCK_P.Delay5_InitialCondition;

  /* InitializeConditions for Delay: '<S244>/Delay1' */
  LCK_DW.Delay1_DSTATE_i = LCK_P.Delay1_InitialCondition_a;

  /* InitializeConditions for Delay: '<S242>/Delay' */
  LCK_DW.Delay_DSTATE = LCK_P.Delay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S240>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE = LCK_P.UnitDelay_InitialCondition_o;

  /* InitializeConditions for UnitDelay: '<S241>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_a = LCK_P.UnitDelay_InitialCondition_b;

  /* InitializeConditions for Delay: '<S242>/Delay1' */
  LCK_DW.Delay1_DSTATE_c = LCK_P.Delay1_InitialCondition_c;

  /* InitializeConditions for Delay: '<S243>/Delay5' */
  LCK_DW.Delay5_DSTATE_n = LCK_P.Delay5_InitialCondition_b;

  /* InitializeConditions for UnitDelay: '<S141>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_h = LCK_P.UnitDelay_InitialCondition_bi;

  /* InitializeConditions for UnitDelay: '<S114>/Unit Delay2' */
  LCK_DW.UnitDelay2_DSTATE = LCK_P.UnitDelay2_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S114>/Unit Delay1' */
  LCK_DW.UnitDelay1_DSTATE = LCK_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S159>/Unit Delay6' */
  LCK_DW.UnitDelay6_DSTATE = LCK_P.UnitDelay6_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S159>/Unit Delay11' */
  LCK_DW.UnitDelay11_DSTATE = LCK_P.UnitDelay11_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S159>/Unit Delay7' */
  LCK_DW.UnitDelay7_DSTATE = LCK_P.UnitDelay7_InitialCondition;

  /* InitializeConditions for Delay: '<S168>/Delay1' */
  LCK_DW.Delay1_DSTATE_a = LCK_P.Delay1_InitialCondition_i;

  /* InitializeConditions for Delay: '<S168>/Delay' */
  LCK_DW.Delay_DSTATE_c = LCK_P.Delay_InitialCondition_d;

  /* InitializeConditions for Delay: '<S171>/Delay' */
  LCK_DW.Delay_DSTATE_p = LCK_P.Delay_InitialCondition_h;

  /* InitializeConditions for Delay: '<S171>/Delay2' */
  LCK_DW.Delay2_DSTATE = LCK_P.Delay2_InitialCondition;

  /* InitializeConditions for Delay: '<S171>/Delay1' */
  LCK_DW.Delay1_DSTATE_f = LCK_P.Delay1_InitialCondition_l;

  /* InitializeConditions for Delay: '<S6>/Delay2' */
  LCK_DW.Delay2_DSTATE_e = LCK_P.Delay2_InitialCondition_g;

  /* InitializeConditions for UnitDelay: '<S25>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_b = LCK_P.UnitDelay_InitialCondition_j;

  /* InitializeConditions for UnitDelay: '<S57>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_j = LCK_P.UnitDelay_InitialCondition_gt;

  /* InitializeConditions for UnitDelay: '<S23>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_d = LCK_P.UnitDelay_InitialCondition_g0;

  /* InitializeConditions for UnitDelay: '<S232>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_l = LCK_P.UnitDelay_InitialCondition_f;

  /* InitializeConditions for UnitDelay: '<S47>/Unit Delay2' */
  LCK_DW.UnitDelay2_DSTATE_i = LCK_P.UnitDelay2_InitialCondition_i;

  /* InitializeConditions for UnitDelay: '<S24>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_g = LCK_P.UnitDelay_InitialCondition_i;

  /* InitializeConditions for UnitDelay: '<S26>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_f = LCK_P.UnitDelay_InitialCondition_n;

  /* InitializeConditions for UnitDelay: '<S83>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_ao = LCK_P.UnitDelay_InitialCondition_fy;

  /* InitializeConditions for UnitDelay: '<S82>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_lg = LCK_P.UnitDelay_InitialCondition_d;

  /* InitializeConditions for UnitDelay: '<S71>/Unit Delay1' */
  LCK_DW.UnitDelay1_DSTATE_j = LCK_P.UnitDelay1_InitialCondition_h;

  /* InitializeConditions for UnitDelay: '<S71>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_ly = LCK_P.UnitDelay_InitialCondition_p;

  /* InitializeConditions for UnitDelay: '<S81>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_n = LCK_P.UnitDelay_InitialCondition_e;

  /* InitializeConditions for UnitDelay: '<S86>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_do = LCK_P.UnitDelay_InitialCondition_k;

  /* InitializeConditions for UnitDelay: '<S32>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_k = LCK_P.UnitDelay_InitialCondition_bz;

  /* InitializeConditions for UnitDelay: '<S105>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_fy = LCK_P.UnitDelay_InitialCondition_a;

  /* InitializeConditions for UnitDelay: '<S103>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_l1 = LCK_P.UnitDelay_InitialCondition_jm;

  /* InitializeConditions for UnitDelay: '<S44>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_p = LCK_P.UnitDelay_InitialCondition_i4;

  /* InitializeConditions for UnitDelay: '<S102>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_ah = LCK_P.UnitDelay_InitialCondition_m;

  /* InitializeConditions for UnitDelay: '<S38>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_jh = LCK_P.UnitDelay_InitialCondition_l;

  /* InitializeConditions for UnitDelay: '<S38>/Unit Delay1' */
  LCK_DW.UnitDelay1_DSTATE_e = LCK_P.UnitDelay1_InitialCondition_i;

  /* InitializeConditions for Delay: '<S7>/Delay1' */
  LCK_DW.Delay1_DSTATE_j = LCK_P.Delay1_InitialCondition_j;

  /* SystemInitialize for Chart: '<S248>/signal_sustain' */
  LCK_signal_sustain_Init(&LCK_B.sf_signal_sustain_k,
    &LCK_DW.sf_signal_sustain_k);

  /* SystemInitialize for Chart: '<S249>/signal_sustain' */
  LCK_signal_sustain_Init(&LCK_B.sf_signal_sustain_c,
    &LCK_DW.sf_signal_sustain_c);

  /* SystemInitialize for Chart: '<S184>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_o, &LCK_DW.sf_Delay_Trig_o);

  /* SystemInitialize for Chart: '<S185>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_kt, &LCK_DW.sf_Delay_Trig_kt);

  /* SystemInitialize for Chart: '<S186>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_c, &LCK_DW.sf_Delay_Trig_c);

  /* SystemInitialize for Chart: '<S187>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_i, &LCK_DW.sf_Delay_Trig_i);

  /* SystemInitialize for Chart: '<S188>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_b, &LCK_DW.sf_Delay_Trig_b);

  /* SystemInitialize for Chart: '<S139>/Delay_Trig' */
  LCK_Delay_Trig_a_Init(&LCK_B.sf_Delay_Trig_k, &LCK_DW.sf_Delay_Trig_k);

  /* SystemInitialize for Chart: '<S140>/Delay_Trig' */
  LCK_Delay_Trig_a_Init(&LCK_B.sf_Delay_Trig_l, &LCK_DW.sf_Delay_Trig_l);

  /* SystemInitialize for Chart: '<S142>/signal_sustain' */
  LCK_DW.is_active_c106_sBhctwPzzXYJVM_j = 0U;
  LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKU_g = LCK_IN_NO_ACTIVE_CHILD_a;
  LCK_DW.i_m = 0.0F;
  LCK_B.sustain_value_p = 0.0F;

  /* SystemInitialize for Chart: '<S189>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_bq, &LCK_DW.sf_Delay_Trig_bq);

  /* SystemInitialize for Chart: '<S190>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_g, &LCK_DW.sf_Delay_Trig_g);

  /* SystemInitialize for Chart: '<S182>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_m, &LCK_DW.sf_Delay_Trig_m);

  /* SystemInitialize for Chart: '<S206>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_ol, &LCK_DW.sf_Delay_Trig_ol);

  /* SystemInitialize for Chart: '<S217>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_m4, &LCK_DW.sf_Delay_Trig_m4);

  /* SystemInitialize for Chart: '<S177>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_f, &LCK_DW.sf_Delay_Trig_f);

  /* SystemInitialize for Chart: '<S178>/signal_sustain' */
  LCK_DW.is_active_c106_sBhctwPzzXYJVM5h = 0U;
  LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKUwD = LCK_IN_NO_ACTIVE_CHILD_a;
  LCK_DW.i_p = 0.0F;
  LCK_B.sustain_value = 0.0F;

  /* SystemInitialize for Chart: '<S218>/Delay_Trig' */
  LCK_Delay_Trig_n_Init(&LCK_B.sf_Delay_Trig_gz, &LCK_DW.sf_Delay_Trig_gz);

  /* SystemInitialize for Chart: '<S219>/Delay_Trig' */
  LCK_Delay_Trig_n_Init(&LCK_B.sf_Delay_Trig_gc, &LCK_DW.sf_Delay_Trig_gc);

  /* SystemInitialize for Chart: '<S207>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_h, &LCK_DW.sf_Delay_Trig_h);

  /* SystemInitialize for Chart: '<S208>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_g1, &LCK_DW.sf_Delay_Trig_g1);

  /* SystemInitialize for Chart: '<S209>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_jy, &LCK_DW.sf_Delay_Trig_jy);

  /* SystemInitialize for Chart: '<S210>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_c5, &LCK_DW.sf_Delay_Trig_c5);

  /* SystemInitialize for Atomic SubSystem: '<S172>/First_Order_Lag_Filter2' */
  /* InitializeConditions for UnitDelay: '<S226>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_j5 = LCK_P.UnitDelay_InitialCondition_g;

  /* End of SystemInitialize for SubSystem: '<S172>/First_Order_Lag_Filter2' */

  /* SystemInitialize for Chart: '<S225>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_hu, &LCK_DW.sf_Delay_Trig_hu);

  /* SystemInitialize for Chart: '<S153>/Chart' */
  LCK_DW.is_active_c6_LCK = 0U;
  LCK_DW.is_c6_LCK = LCK_IN_NO_ACTIVE_CHILD_a;

  /* SystemInitialize for Chart: '<S160>/LCK_TJA_LatRq_Manager' */
  LCK_DW.is_LatRqOn = LCK_IN_NO_ACTIVE_CHILD_a;
  LCK_DW.is_active_c42_LCK = 0U;
  LCK_DW.is_c42_LCK = LCK_IN_NO_ACTIVE_CHILD_a;
  LCK_B.LCKON_TJAOFF = 0.0F;
  LCK_B.LatRq = 0.0F;

  /* SystemInitialize for Atomic SubSystem: '<S109>/Det_Driver_Steer_Override' */
  /* InitializeConditions for UnitDelay: '<S112>/Unit Delay1' */
  LCK_DW.UnitDelay1_DSTATE_g = LCK_P.UnitDelay1_InitialCondition_c;

  /* InitializeConditions for UnitDelay: '<S112>/Unit Delay2' */
  LCK_DW.UnitDelay2_DSTATE_c = LCK_P.UnitDelay2_InitialCondition_f;

  /* InitializeConditions for Delay: '<S112>/Delay1' */
  LCK_DW.Delay1_DSTATE_k = LCK_P.Delay1_InitialCondition_d;

  /* InitializeConditions for Delay: '<S112>/Delay' */
  LCK_DW.Delay_DSTATE_b = LCK_P.Delay_InitialCondition_i;

  /* SystemInitialize for Chart: '<S112>/left_distance_sustain_period' */
  LCK_DW.is_active_c176_LCK = 0U;
  LCK_DW.is_c176_LCK = LCK_IN_NO_ACTIVE_CHILD_a;
  LCK_DW.i_h = 0.0F;
  LCK_B.sustain_value_out = 0.0F;

  /* SystemInitialize for Chart: '<S112>/Right_distance_sustain_period' */
  LCK_DW.is_active_c175_LCK = 0U;
  LCK_DW.is_c175_LCK = LCK_IN_NO_ACTIVE_CHILD_a;
  LCK_DW.i_mx = 0.0F;
  LCK_B.sustain_value_out_a = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S109>/Det_Driver_Steer_Override' */

  /* SystemInitialize for Chart: '<S119>/Sustain_wo_reset' */
  LCK_Sustain_wo_reset_Init(&LCK_B.sf_Sustain_wo_reset,
    &LCK_DW.sf_Sustain_wo_reset);

  /* SystemInitialize for Chart: '<S120>/Sustain_wo_reset' */
  LCK_Sustain_wo_reset_Init(&LCK_B.sf_Sustain_wo_reset_o,
    &LCK_DW.sf_Sustain_wo_reset_o);

  /* SystemInitialize for Chart: '<S121>/Sustain_wo_reset' */
  LCK_Sustain_wo_reset_l_Init(&LCK_B.sf_Sustain_wo_reset_n,
    &LCK_DW.sf_Sustain_wo_reset_n);

  /* SystemInitialize for Atomic SubSystem: '<S109>/Filter_steer_angle_CR' */
  /* InitializeConditions for UnitDelay: '<S147>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_jx = LCK_P.UnitDelay_InitialCondition;

  /* SystemInitialize for Chart: '<S148>/CR_inhibit' */
  LCK_DW.is_active_c201_LateralControl_f = 0U;
  LCK_DW.is_c201_LateralControl_fcns_lib = LCK_IN_NO_ACTIVE_CHILD_a;
  LCK_DW.i_i = 0.0F;
  LCK_B.warn_output = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S109>/Filter_steer_angle_CR' */

  /* SystemInitialize for Chart: '<S122>/Sustain_wo_reset' */
  LCK_Sustain_wo_reset_l_Init(&LCK_B.sf_Sustain_wo_reset_c,
    &LCK_DW.sf_Sustain_wo_reset_c);

  /* SystemInitialize for Chart: '<S123>/Sustain_wo_reset' */
  LCK_Sustain_wo_reset_l_Init(&LCK_B.sf_Sustain_wo_reset_e,
    &LCK_DW.sf_Sustain_wo_reset_e);

  /* SystemInitialize for Chart: '<S124>/Sustain_wo_reset' */
  LCK_Sustain_wo_reset_Init(&LCK_B.sf_Sustain_wo_reset_p,
    &LCK_DW.sf_Sustain_wo_reset_p);

  /* SystemInitialize for Chart: '<S125>/Sustain_wo_reset' */
  LCK_Sustain_wo_reset_Init(&LCK_B.sf_Sustain_wo_reset_ce,
    &LCK_DW.sf_Sustain_wo_reset_ce);

  /* SystemInitialize for Chart: '<S126>/Sustain_wo_reset' */
  LCK_Sustain_wo_reset_l_Init(&LCK_B.sf_Sustain_wo_reset_cl,
    &LCK_DW.sf_Sustain_wo_reset_cl);

  /* SystemInitialize for Chart: '<S127>/Sustain_wo_reset' */
  LCK_Sustain_wo_reset_l_Init(&LCK_B.sf_Sustain_wo_reset_cw,
    &LCK_DW.sf_Sustain_wo_reset_cw);

  /* SystemInitialize for Chart: '<S128>/Sustain_wo_reset' */
  LCK_Sustain_wo_reset_l_Init(&LCK_B.sf_Sustain_wo_reset_h,
    &LCK_DW.sf_Sustain_wo_reset_h);

  /* SystemInitialize for Chart: '<S199>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_a, &LCK_DW.sf_Delay_Trig_a);

  /* SystemInitialize for Chart: '<S200>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_jg, &LCK_DW.sf_Delay_Trig_jg);

  /* SystemInitialize for Chart: '<S202>/Trigger Hold' */
  LCK_DW.count = 0.0F;
  LCK_DW.count_enable = 0.0F;
  LCK_B.Out = 0.0F;

  /* SystemInitialize for Chart: '<S174>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig_j, &LCK_DW.sf_Delay_Trig_j);

  /* SystemInitialize for Chart: '<S5>/LCK Mode Manager' */
  LCK_DW.is_LCKActive = LCK_IN_NO_ACTIVE_CHILD_a;
  LCK_DW.is_active_c177_LCK = 0U;
  LCK_DW.is_c177_LCK = LCK_IN_NO_ACTIVE_CHILD_a;

  /* InitializeConditions for Outport: '<Root>/LCK_Mode' incorporates:
   *  Chart: '<S5>/LCK Mode Manager'
   */
  LCK_Y.LCK_Mode = 0.0F;

  /* SystemInitialize for Chart: '<S6>/Chart' */
  LCK_DW.is_active_c3_LCK = 0U;
  LCK_DW.is_c3_LCK = LCK_IN_NO_ACTIVE_CHILD_a;

  /* SystemInitialize for Chart: '<S231>/Chart1' */
  LCK_DW.is_active_c4_LCK = 0U;
  LCK_DW.is_c4_LCK = LCK_IN_NO_ACTIVE_CHILD_a;

  /* SystemInitialize for MATLAB Function: '<S231>/Path_Planning_Function ' */
  LCK_DW.LC_TgtDy_temp = 0.0;

  /* SystemInitialize for Chart: '<S6>/Chart1' */
  LCK_DW.is_active_c9_LCK = 0U;
  LCK_DW.is_c9_LCK = LCK_IN_NO_ACTIVE_CHILD_a;

  /* SystemInitialize for Chart: '<S60>/Chart1' */
  LCK_DW.is_active_c36_LCK = 0U;
  LCK_DW.is_c36_LCK = LCK_IN_NO_ACTIVE_CHILD_a;

  /* SystemInitialize for Chart: '<S49>/Trigger Hold' */
  LCK_TriggerHold_e_Init(&LCK_B.sf_TriggerHold_i);

  /* SystemInitialize for Chart: '<S51>/Delay_Trig' */
  LCK_Delay_Trig_Init(&LCK_B.sf_Delay_Trig, &LCK_DW.sf_Delay_Trig);

  /* SystemInitialize for Chart: '<S52>/Trigger Hold' */
  LCK_TriggerHold_Init(&LCK_B.sf_TriggerHold_k);

  /* SystemInitialize for Chart: '<S59>/Chart' */
  LCK_DW.is_active_c33_LCK = 0U;
  LCK_DW.is_c33_LCK = LCK_IN_NO_ACTIVE_CHILD_a;

  /* SystemInitialize for Chart: '<S41>/Trigger Hold' */
  LCK_TriggerHold_Init(&LCK_B.sf_TriggerHold);

  /* SystemInitialize for Chart: '<S235>/Trigger Hold' */
  LCK_TriggerHold_e_Init(&LCK_B.sf_TriggerHold_b);

  /* SystemInitialize for Outport: '<S1>/LatCtrl_LCK_TorqCmd' */
  LatCtrl_LCK_TorqCmd = LCK_P.LatCtrl_LCK_TorqCmd_Y0;

  /* SystemInitialize for Outport: '<S1>/LCK_Debug_Info' */
  LCK_B.Saturation_l =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.SPP_Coeff.SPP_A0_Fltd;
  LCK_B.Saturation_e =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.SPP_Coeff.SPP_A1_Fltd;
  LCK_B.Saturation_a =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.SPP_Coeff.SPP_A2_Fltd;
  LCK_B.Saturation_as =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.SPP_Coeff.SPP_A3_Fltd;

  /* SystemInitialize for Relay: '<S73>/Relay1' incorporates:
   *  Outport: '<S1>/LCK_Debug_Info'
   */
  LCK_B.Sum1_nd = LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.PID_Control_Signals.Dy_1;

  /* SystemInitialize for Relay: '<S73>/Relay' incorporates:
   *  Outport: '<S1>/LCK_Debug_Info'
   */
  LCK_B.Product_mm =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.PID_Control_Signals.Dy_0;

  /* SystemInitialize for Relay: '<S73>/Relay2' incorporates:
   *  Outport: '<S1>/LCK_Debug_Info'
   */
  LCK_B.Product10 =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.PID_Control_Signals.Lat_Rate;

  /* SystemInitialize for Relay: '<S94>/Relay' incorporates:
   *  Outport: '<S1>/LCK_Debug_Info'
   */
  LCK_B.C_RAD2DEG_f =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.PID_Control_Signals.Hed_Ang;

  /* SystemInitialize for Relay: '<S94>/Relay1' incorporates:
   *  Outport: '<S1>/LCK_Debug_Info'
   */
  LCK_B.Product2_p3 =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.PID_Control_Signals.Hed_Ang_Rat;

  /* SystemInitialize for Outport: '<S1>/LCK_Debug_Info' */
  LCK_B.Saturation_k3 =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Curve_Parameters.Road_Radius;

  /* SystemInitialize for Signum: '<S43>/Sign' incorporates:
   *  Outport: '<S1>/LCK_Debug_Info'
   */
  LCK_B.Gain_i =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Curve_Parameters.Curvature_0;

  /* SystemInitialize for Outport: '<S1>/LCK_Debug_Info' */
  LCK_B.Switch1_b =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Curve_Parameters.Curvature_1;
  LCK_B.Gain2_g =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Curve_Parameters.Curvature_Rate;
  LCK_B.Saturation_g =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Lat_Ctrl_Info.Lat_Ctr_Cmd;
  LCK_B.Switch2_j =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Lat_Ctrl_Info.Lat_Ctrl_PTerm;
  LCK_B.Add4 =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Lat_Ctrl_Info.Lat_Ctrl_ITerm;
  LCK_B.Product2_cq =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Lat_Ctrl_Info.Lat_Ctrl_DTerm;
  LCK_B.Product_g4 =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Lat_Ctrl_Info.Lat_Ctrl_PTerm_0;
  LCK_B.Product6_e =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Lat_Ctrl_Info.Lat_Ctrl_PTerm_1;
  LCK_B.Switch2_l =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Lat_Ctrl_Info.Lat_Ctrl_ITerm_0;
  LCK_B.Switch2_k =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Lat_Ctrl_Info.Lat_Ctrl_ITerm_1;
  LCK_B.Saturation_kk =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.LatCtrl_Info.LatCtrl_Cmd;
  LCK_B.Switch2_o =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.LatCtrl_Info.LatCtrl_PTerm;
  LCK_B.Switch2_h =
    LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.LatCtrl_Info.LatCtrl_DTerm;
  LCK_B.Sum1_oc = LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.LatCtrl_Info.LatCtrl_P;
  LCK_B.Sum1_h = LCK_P.LCK_Debug_Info_Y0.LCK_Ctrl_Info.LatCtrl_Info.LatCtrl_D;
  LCK_B.DataTypeConversion_c = LCK_P.LCK_Debug_Info_Y0.LCK_State_Info.signal1;
  LCK_B.DataTypeConversion1_j = LCK_P.LCK_Debug_Info_Y0.LCK_State_Info.signal2;
  LCK_B.DataTypeConversion2_k = LCK_P.LCK_Debug_Info_Y0.LCK_State_Info.signal3;
  LCK_B.DataTypeConversion3_a = LCK_P.LCK_Debug_Info_Y0.LCK_State_Info.signal4;
  LCK_B.Gain_hz = LCK_P.LCK_Debug_Info_Y0.LCK_State_Info.signal5;
  LCK_B.Switch13 = LCK_P.LCK_Debug_Info_Y0.SPP_Info.SPP_Conf;

  /* SystemInitialize for Outport: '<Root>/SPP_Type' incorporates:
   *  Outport: '<S1>/LCK_Debug_Info'
   */
  LCK_Y.SPP_Type = LCK_P.LCK_Debug_Info_Y0.SPP_Info.SPP_Type;

  /* SystemInitialize for Outport: '<S1>/LCK_Debug_Info' */
  LCK_B.Switch9_e = LCK_P.LCK_Debug_Info_Y0.SPP_Info.SPP_A0;
  LCK_B.Switch10_g = LCK_P.LCK_Debug_Info_Y0.SPP_Info.SPP_A1;
  LCK_B.Switch11_h = LCK_P.LCK_Debug_Info_Y0.SPP_Info.SPP_A2;
  LCK_B.Switch12_a = LCK_P.LCK_Debug_Info_Y0.SPP_Info.SPP_A3;
  LCK_B.LanSigInputs = LCK_P.LCK_Debug_Info_Y0.LanSigInputs;

  /* SystemInitialize for Outport: '<S1>/Lateral_HMI' */
  LCK_B.LKS_Error = LCK_P.Lateral_HMI_Y0;
  LCK_B.LKS_Passive_Rea = LCK_P.Lateral_HMI_Y0;
  LCK_B.LKS_Status = LCK_P.Lateral_HMI_Y0;
  LCK_B.LC_pro_reason = LCK_P.Lateral_HMI_Y0;
  LCK_B.LC_Proposal = LCK_P.Lateral_HMI_Y0;
  LCK_B.LC_Reason = LCK_P.Lateral_HMI_Y0;
  LCK_B.LC_Request = LCK_P.Lateral_HMI_Y0;
  LCK_B.LC_Tip = LCK_P.Lateral_HMI_Y0;
  LCK_B.LC_Fail_Tip = LCK_P.Lateral_HMI_Y0;
  LCK_B.LC_Dis_dy = LCK_P.Lateral_HMI_Y0;
  LCK_B.LC_Dis_dx = LCK_P.Lateral_HMI_Y0;
  LCK_B.LC_Direction = LCK_P.Lateral_HMI_Y0;
  LCK_B.Handsoff_Warning = LCK_P.Lateral_HMI_Y0;

  /* SystemInitialize for Outport: '<Root>/LC_dx' incorporates:
   *  Outport: '<S1>/LC_dx'
   */
  LCK_Y.LC_dx = LCK_P.LC_dx_Y0;
}

/* Model terminate function */
void LCK_terminate(void)
{
  /* (no terminate code required) */
}
