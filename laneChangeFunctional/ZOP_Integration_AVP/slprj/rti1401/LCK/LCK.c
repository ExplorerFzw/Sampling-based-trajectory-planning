/*
 * Code generation for system model 'LCK'
 *
 * Model                      : LCK
 * Model version              : 1.378
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Mar 17 16:04:39 2021
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "LCK_trc_ptr.h"
#include "rti_initref_cpp.h"
#include "LCK.h"
#include "LCK_private.h"
#include "LinearInterpolation_QGOh67Ah.h"
#include "Reshape_xg6fIkJE.h"
#include "calculat_delta_heading_e3M0G2eJ.h"
#include "combination_MXznzaCx.h"
#include "look1_iflf_binlcpw.h"
#include "look1_iflf_linlcpw.h"
#include "mod_nP8BelbH.h"
#include "quintic_polynomial_BNGgawA6.h"
#include "reference_generator_on_cu2irh4N.h"
#include "rt_powd_snf.h"
#include "rt_roundd_snf.h"

/* Named constants for Chart: '<S51>/Delay_Trig' */
#define LCK_IN_NO_ACTIVE_CHILD_f       ((uint8_T)0U)
#define LCK_IN_OFF                     ((uint8_T)1U)
#define LCK_IN_ON                      ((uint8_T)2U)
#define LCK_IN_Trig                    ((uint8_T)3U)

/* Named constants for Chart: '<S119>/Sustain_wo_reset' */
#define LCK_IN_Hold                    ((uint8_T)1U)
#define LCK_IN_NO_ACTIVE_CHILD_c       ((uint8_T)0U)
#define LCK_IN_Standby                 ((uint8_T)2U)

/* Named constants for Chart: '<S120>/Sustain_wo_reset' */
#define LCK_IN_Hold_f                  ((uint8_T)1U)
#define LCK_IN_NO_ACTIVE_CHILD_h       ((uint8_T)0U)
#define LCK_IN_Standby_d               ((uint8_T)2U)

/* Named constants for Chart: '<S121>/Sustain_wo_reset' */
#define LCK_IN_Hold_f1                 ((uint8_T)1U)
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

/* Named constants for Chart: '<S243>/signal_sustain' */
#define LCK_IN_Hold_d                  ((uint8_T)1U)
#define LCK_IN_NO_ACTIVE_CHILD_i       ((uint8_T)0U)
#define LCK_IN_Standby_o               ((uint8_T)2U)

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
#define LCK_IN_Standby_oa              ((uint8_T)2U)

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

/* Named constants for Chart: '<S242>/IntelligentEvasionSM' */
#define LCK_IN_IntEvaOff               ((uint8_T)1U)
#define LCK_IN_IntEvaOn                ((uint8_T)2U)

/* Exported block signals */
real32_T Road_Radius;                  /* '<S17>/Divide' */
real32_T LCK_PID_TorqCmd;              /* '<S37>/Switch1' */
real32_T Curvature_Rate;               /* '<S17>/Gain3' */
boolean_T I_Term_Reset_Flag;           /* '<S19>/Logical Operator' */
P_LCK_T LCK_P_g = {
  1.0,
  -1.0,
  4.0E-5F,
  4.0E-5F,
  0U,
  1U,
  0U,

  {
    {
      {
        0.0F,                          /* SPP_A0_Fltd */
        0.0F,                          /* SPP_A1_Fltd */
        0.0F,                          /* SPP_A2_Fltd */
        0.0F                           /* SPP_A3_Fltd */
      },                               /* SPP_Coeff */

      {
        0.0F,                          /* Dy_1 */
        0.0F,                          /* Dy_0 */
        0.0F,                          /* Lat_Rate */
        0.0F,                          /* Hed_Ang */
        0.0F                           /* Hed_Ang_Rat */
      },                               /* PID_Control_Signals */

      {
        0.0F,                          /* Road_Radius */
        0.0F,                          /* Curvature_0 */
        0.0F,                          /* Curvature_1 */
        0.0F                           /* Curvature_Rate */
      },                               /* Curve_Parameters */

      {
        0.0F,                          /* Lat_Ctr_Cmd */
        0.0F,                          /* Lat_Ctrl_PTerm */
        0.0F,                          /* Lat_Ctrl_ITerm */
        0.0F,                          /* Lat_Ctrl_DTerm */
        0.0F,                          /* Lat_Ctrl_PTerm_0 */
        0.0F,                          /* Lat_Ctrl_PTerm_1 */
        0.0F,                          /* Lat_Ctrl_ITerm_0 */
        0.0F                           /* Lat_Ctrl_ITerm_1 */
      },                               /* Lat_Ctrl_Info */

      {
        0.0F,                          /* LatCtrl_Cmd */
        0.0F,                          /* LatCtrl_PTerm */
        0.0F,                          /* LatCtrl_DTerm */
        0.0F,                          /* LatCtrl_P */
        0.0F                           /* LatCtrl_D */
      }                                /* LatCtrl_Info */
    },                                 /* LCK_Ctrl_Info */

    {
      0.0F,                            /* signal1 */
      0.0F,                            /* signal2 */
      0.0F,                            /* signal3 */
      0.0F,                            /* signal4 */
      0.0F                             /* signal5 */
    },                                 /* LCK_State_Info */

    {
      0.0F,                            /* SPP_Conf */
      0.0F,                            /* SPP_Type */
      0.0F,                            /* SPP_A0 */
      0.0F,                            /* SPP_A1 */
      0.0F,                            /* SPP_A2 */
      0.0F                             /* SPP_A3 */
    },                                 /* SPP_Info */

    {
      0.0F,                            /* VID_Lin_01_ProbExists */
      0.0F,                            /* VID_Lin_01_Type */
      0.0F,                            /* VID_Lin_01_A0 */
      0.0F,                            /* VID_Lin_01_A1 */
      0.0F,                            /* VID_Lin_01_A2 */
      0.0F,                            /* VID_Lin_01_A3 */
      0.0F,                            /* VID_Lin_01_Range */
      0.0F,                            /* VID_Lin_02_ProbExists */
      0.0F,                            /* VID_Lin_02_Type */
      0.0F,                            /* VID_Lin_02_A0 */
      0.0F,                            /* VID_Lin_02_A1 */
      0.0F,                            /* VID_Lin_02_A2 */
      0.0F,                            /* VID_Lin_02_A3 */
      0.0F,                            /* VID_Lin_02_Range */
      0.0F                             /* VID_Lane_Width */
    }                                  /* LanSigInputs */
  },
  0.0,
  0.0,
  4.0,
  0.0,
  0.0,

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0 },
  -1.0,
  0.0,
  0.0,
  5.0,
  3.0,
  0.0,
  1.0,
  2.0,
  30.0,
  3.0,
  0.0,
  3.0,
  4.0,
  3.0,
  2.0,
  1.0,
  3.0,
  2000.0,
  3.0,
  0.0,
  3.0,
  3.0,
  2000.0,
  3.0,
  3.0,
  0.0,
  200.0,
  3.0,
  0.5,
  0.0,
  1.0,
  1.0,
  0.5,
  0.0,
  2.0,
  0.0,
  5.0,
  0.0,
  6.0,
  4.0,
  4.0,
  0.0,
  4.0,
  4.0,
  0.0,
  3.0,
  3.0,
  1.0,
  3.0,
  3.0,
  0.0,
  0.0,
  0.0,
  1.0,
  4.0,
  0.0,
  4.0,
  0.0,
  2.0,
  4.0,
  0.0,
  4.0,
  0.0,
  3.0,
  4.0,
  0.0,
  4.0,
  0.0,
  0.0,
  3.0,
  1.0,
  1.0,
  0.5,
  0.0,
  0.0,
  0.5,
  1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  2.0,
  1.0,
  0.5,
  1.0,
  0.0,
  0.5,
  0.0,
  1.0,
  0.0,
  2.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  1.0,
  1.0,
  2.0,
  -1.0,
  1.0,
  2.0,
  1.0,
  0.0,
  1.0,
  0.0,
  0.0,
  0.0,
  10.0,
  2.0,
  1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  10.0,
  2.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  1.0,
  1.0,
  1.0,
  4.0,
  0.0,
  0.0,
  1.0,
  1.0,
  2.0,
  1.0,
  2.0,
  -1.0,
  2.0,
  2.0,
  2.0,
  1.0,
  0.3,
  0.01,
  2.0,
  4.0,
  5.0,
  -1.0,
  6.0,
  0.0,
  4.0,
  5000.0,
  1.0,
  3.0,
  -0.5,
  4.0,
  4000.0,
  3800.0,
  1.0,
  0.0,
  1.0,
  0.0,
  0.0,
  0.0,
  5.0,
  1.0,
  2.0,
  6.0,
  0.0,
  4.0,
  2.0,
  0.0,
  1.0,
  3.0,
  0.0,
  1.0,
  4.0,
  0.0,
  1.0,
  2.0,
  4.0,
  4.0,
  4.0,
  -1.0F,
  0.5F,
  0.0F,
  0.5F,
  0.0F,
  0.0F,
  65535.0F,
  -65535.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  65535.0F,
  -65535.0F,
  0.0F,
  65535.0F,
  -65535.0F,
  0.0F,
  0.0F,
  0.5F,
  0.5F,
  0.0F,
  0.5F,
  0.1F,
  1.0F,
  0.0F,
  0.0F,
  0.5F,
  0.0F,
  65535.0F,
  -65535.0F,
  0.0F,
  0.0F,
  1.0F,
  0.5F,
  0.5F,
  0.5F,
  0.5F,
  2.0F,
  0.5F,
  0.0F,
  0.1F,
  0.0F,
  0.5F,
  0.5F,
  10.0F,
  0.0F,
  0.5F,
  0.5F,
  0.0F,
  0.0F,
  0.5F,
  0.5F,
  0.5F,
  0.5F,
  0.5F,
  0.0F,
  0.0F,
  0.0F,
  0.97F,

  { 8.5F, 8.5F, 8.5F, 8.5F, 8.5F, 8.5F, 7.5F, 7.5F, 7.5F, 6.5F, 6.5F, 6.5F, 6.5F,
    6.5F, 6.5F, 6.5F },
  0.0F,
  65535.0F,
  -65535.0F,
  0.0F,
  1.0F,
  0.0F,
  2.0F,
  65535.0F,
  -65535.0F,

  { 0.4F, 0.4F, 0.5F, 0.5F, 0.5F, 0.6F, 0.6F, 0.6F, 0.7F, 0.7F, 0.7F, 0.8F, 0.8F,
    1.2F },
  0.0F,
  65535.0F,
  -65535.0F,
  0.0F,
  0.5F,
  -1.0F,
  1000.0F,
  1000.0F,
  1.0F,
  0.0F,
  1.0F,
  1.0F,
  0.0F,
  65535.0F,
  -65535.0F,
  0.0F,
  0.0F,
  0.5F,
  65535.0F,
  -65535.0F,
  0.02F,
  -0.02F,
  1.0F,
  0.0F,
  0.0F,
  2.0F,
  0.02F,
  -0.02F,
  1.0F,
  -1.0F,
  0.0F,
  0.0F,
  0.0F,
  -1.0F,
  -1.0F,
  0.0F,
  -1.0F,
  1000.0F,
  1000.0F,
  2.0F,
  0.02F,
  -0.02F,
  1.0F,
  0.0F,
  0.0F,
  0.02F,
  -0.02F,
  1.0F,
  -1.0F,
  0.0F,
  0.0F,
  -1.0F,
  -1.0F,
  0.0F,
  1.0F,
  0.0F,
  -1.0F,
  -1.0F,
  0.0F,
  0.0F,
  -1.0F,
  1.0F,
  1.0F,
  0.0F,
  -1.0F,
  0.02F,
  -0.02F,
  1.0F,
  0.0F,
  0.0F,
  -1.0F,
  0.0F,
  65535.0F,
  -65535.0F,
  3.0F,
  -3.0F,
  0.0F,
  0.0F,
  6.0F,

  { 0.4F, 0.4F, 0.5F, 0.5F, 0.5F, 0.6F, 0.6F, 0.6F, 0.7F, 0.7F, 0.7F, 0.8F, 0.8F,
    1.2F },
  0.0F,
  0.0F,
  0.0F,
  -1.0F,
  0.0F,
  -1.0F,
  65535.0F,
  -65535.0F,
  0.0F,
  0.0F,
  -1.0F,
  1000.0F,
  1000.0F,
  0.05F,
  -0.05F,
  1.0F,
  0.0F,
  0.0F,
  0.3F,
  0.35F,
  0.2F,
  0.25F,
  1.0F,
  1.0F,
  0.0F,
  65535.0F,
  -65535.0F,
  -1.0F,
  0.0F,
  -1.0F,
  -1.0F,
  0.0F,
  -1.0F,
  1000.0F,
  1000.0F,
  0.05F,
  -0.05F,
  1.0F,
  0.0F,
  0.0F,
  -1.0F,
  -1.0F,
  65535.0F,
  -65535.0F,
  3.0F,
  -3.0F,
  0.0F,
  0.5F,
  3.0F,
  -3.0F,
  0.0F,
  0.0F,
  1.0F,
  1500.0F,
  1000.0F,
  -1.0F,
  1000.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  6.0F,
  6.0F,
  0.0F,
  0.0F,
  500.0F,
  1.0F,
  0.0F,
  0.0F,
  0.0F,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1000U,
  1000U,
  1000U,
  1000U,
  0,
  0,
  0,
  0,
  0,
  0,
  128U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  2U,
  0U,
  2U,
  3U,
  0U,
  4U,
  2U,
  0U,
  0U,
  2U,
  3U,
  1U,
  1U,
  1U,
  0U,
  1U,
  2U,
  0U,
  0U,
  1U
};

MdlrefDW_LCK_T LCK_MdlrefDW;

/* Block signals (default storage) */
B_LCK_c_T LCK_B;

/* Block states (default storage) */
DW_LCK_f_T LCK_DW;

/* Forward declaration for local functions */
static real_T LCK_calculateLEN(real_T velocity, real_T TIME);
static void LCK_post_processing_AufhNa1N(const real_T output[3200], real_T
  long_S, real_T *search_latoff, real_T *search_theta, real_T *search_kappa);
static real_T LCK_find_valid_ref_max_len(const real_T reference[800]);
static void LCK_reference_generation(const real_T trajs_local[800], const real_T
  p_store[800], real_T ref_len_valid, real_T trajs_new[800]);
static void LCK_calculate_kappa_LQ2awkOm(const real_T trajs_new[800], real_T
  ref_len_valid, real_T kappa[400]);
static void LCK_calculate_max_ref(const real_T output[3200], real_T *max_ref,
  real_T *valid_len);

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
 *    '<S124>/Sustain_wo_reset'
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
 *    '<S124>/Sustain_wo_reset'
 * Common block description:
 *   _GWMAB30P4.LKAFN.000_319_
 */
void LCK_Sustain_wo_reset(const boolean_T *rtu_input, real32_T rtu_sustain_time,
  B_Sustain_wo_reset_LCK_T *localB, DW_Sustain_wo_reset_LCK_T *localDW)
{
  /* Chart: '<S119>/Sustain_wo_reset' */
  if (localDW->is_active_c12_sBqLU0Pgy8bIAIArm == 0U) {
    localDW->is_active_c12_sBqLU0Pgy8bIAIArm = 1U;
    localDW->is_c12_sBqLU0Pgy8bIAIArmVW3x7F_ = LCK_IN_Standby;
    localDW->i = 0.0;
  } else if (localDW->is_c12_sBqLU0Pgy8bIAIArmVW3x7F_ == LCK_IN_Hold) {
    if (*rtu_input) {
      localDW->i = 0.0;
      localDW->is_c12_sBqLU0Pgy8bIAIArmVW3x7F_ = LCK_IN_Hold;
      localB->sustain_value = 1.0;
    } else if (localDW->i >= rtu_sustain_time) {
      localDW->is_c12_sBqLU0Pgy8bIAIArmVW3x7F_ = LCK_IN_Standby;
      localDW->i = 0.0;
    } else {
      localDW->i += ML_TIME_MSEC;
    }
  } else if (*rtu_input) {
    localDW->is_c12_sBqLU0Pgy8bIAIArmVW3x7F_ = LCK_IN_Hold;
    localB->sustain_value = 1.0;
  } else {
    localB->sustain_value = 0.0;
  }

  /* End of Chart: '<S119>/Sustain_wo_reset' */
}

/*
 * System initialize for atomic system:
 *    '<S120>/Sustain_wo_reset'
 *    '<S125>/Sustain_wo_reset'
 */
void LCK_Sustain_wo_reset_k_Init(B_Sustain_wo_reset_LCK_j_T *localB,
  DW_Sustain_wo_reset_LCK_p_T *localDW)
{
  localDW->is_active_c12_sBqLU0Pgy8bIAIArm = 0U;
  localDW->is_c12_sBqLU0Pgy8bIAIArmVW3x7F_ = LCK_IN_NO_ACTIVE_CHILD_h;
  localDW->i = 0.0;
  localB->sustain_value = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S120>/Sustain_wo_reset'
 *    '<S125>/Sustain_wo_reset'
 * Common block description:
 *   _GWMAB30P4.LKAFN.000_319_
 */
void LCK_Sustain_wo_reset_o(boolean_T rtu_input, real32_T rtu_sustain_time,
  B_Sustain_wo_reset_LCK_j_T *localB, DW_Sustain_wo_reset_LCK_p_T *localDW)
{
  /* Chart: '<S120>/Sustain_wo_reset' */
  if (localDW->is_active_c12_sBqLU0Pgy8bIAIArm == 0U) {
    localDW->is_active_c12_sBqLU0Pgy8bIAIArm = 1U;
    localDW->is_c12_sBqLU0Pgy8bIAIArmVW3x7F_ = LCK_IN_Standby_d;
    localDW->i = 0.0;
  } else if (localDW->is_c12_sBqLU0Pgy8bIAIArmVW3x7F_ == LCK_IN_Hold_f) {
    if (rtu_input) {
      localDW->i = 0.0;
      localDW->is_c12_sBqLU0Pgy8bIAIArmVW3x7F_ = LCK_IN_Hold_f;
      localB->sustain_value = 1.0;
    } else if (localDW->i >= rtu_sustain_time) {
      localDW->is_c12_sBqLU0Pgy8bIAIArmVW3x7F_ = LCK_IN_Standby_d;
      localDW->i = 0.0;
    } else {
      localDW->i += ML_TIME_MSEC;
    }
  } else if (rtu_input) {
    localDW->is_c12_sBqLU0Pgy8bIAIArmVW3x7F_ = LCK_IN_Hold_f;
    localB->sustain_value = 1.0;
  } else {
    localB->sustain_value = 0.0;
  }

  /* End of Chart: '<S120>/Sustain_wo_reset' */
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
  } else if (localDW->is_c12_sqdm0ogyh9qRUMkFAfEQ2EB_ == LCK_IN_Hold_f1) {
    if (rtu_input != 0.0F) {
      localDW->i = 0.0;
      localDW->is_c12_sqdm0ogyh9qRUMkFAfEQ2EB_ = LCK_IN_Hold_f1;
      localB->sustain_value = rtu_input;
    } else if (localDW->i >= rtu_sustain_time) {
      localDW->is_c12_sqdm0ogyh9qRUMkFAfEQ2EB_ = LCK_IN_Standby_g;
      localDW->i = 0.0;
    } else {
      localDW->i += ML_TIME_MSEC;
    }
  } else if (rtu_input != 0.0F) {
    localDW->is_c12_sqdm0ogyh9qRUMkFAfEQ2EB_ = LCK_IN_Hold_f1;
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
 *    '<S243>/signal_sustain'
 *    '<S253>/signal_sustain'
 *    '<S254>/signal_sustain'
 */
void LCK_signal_sustain_Init(B_signal_sustain_LCK_T *localB,
  DW_signal_sustain_LCK_T *localDW)
{
  localDW->is_active_c106_sMO8bLBWfTvOHfGk = 0U;
  localDW->is_c106_sMO8bLBWfTvOHfGkBHxhSIH = LCK_IN_NO_ACTIVE_CHILD_i;
  localDW->i = 0.0F;
  localB->sustain_value = 0.0F;
}

/*
 * Output and update for atomic system:
 *    '<S243>/signal_sustain'
 *    '<S253>/signal_sustain'
 *    '<S254>/signal_sustain'
 * Common block description:
 *   _GWMAB30P4.LKAFN.000_299_
 */
void LCK_signal_sustain(boolean_T rtu_input, real_T rtu_sustain_time, boolean_T
  rtu_clear, B_signal_sustain_LCK_T *localB, DW_signal_sustain_LCK_T *localDW)
{
  /* Chart: '<S243>/signal_sustain' */
  if (localDW->is_active_c106_sMO8bLBWfTvOHfGk == 0U) {
    localDW->is_active_c106_sMO8bLBWfTvOHfGk = 1U;
    localDW->is_c106_sMO8bLBWfTvOHfGkBHxhSIH = LCK_IN_Standby_o;
    localDW->i = 0.0F;
  } else if (localDW->is_c106_sMO8bLBWfTvOHfGkBHxhSIH == LCK_IN_Hold_d) {
    if (rtu_input && (localDW->i < rtu_sustain_time) && (!rtu_clear)) {
      localDW->i = 0.0F;
      localDW->is_c106_sMO8bLBWfTvOHfGkBHxhSIH = LCK_IN_Hold_d;
      localB->sustain_value = 1.0F;
    } else if ((localDW->i >= rtu_sustain_time) || rtu_clear) {
      localDW->is_c106_sMO8bLBWfTvOHfGkBHxhSIH = LCK_IN_Standby_o;
      localDW->i = 0.0F;
    } else {
      localDW->i += ML_TIME_MSEC;
    }
  } else if (rtu_input && (!rtu_clear)) {
    localDW->is_c106_sMO8bLBWfTvOHfGkBHxhSIH = LCK_IN_Hold_d;
    localB->sustain_value = 1.0F;
  } else {
    localB->sustain_value = 0.0F;
  }

  /* End of Chart: '<S243>/signal_sustain' */
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
static void LCK_post_processing_AufhNa1N(const real_T output[3200], real_T
  long_S, real_T *search_latoff, real_T *search_theta, real_T *search_kappa)
{
  memcpy(&LCK_B.ref_S[0], &output[800], 400U * sizeof(real_T));
  *search_latoff = LinearInterpolation_QGOh67Ah(&output[800], &output[1200],
    long_S);
  *search_theta = LinearInterpolation_QGOh67Ah(LCK_B.ref_S, &output[1600],
    long_S);
  *search_kappa = LinearInterpolation_QGOh67Ah(LCK_B.ref_S, &output[2000],
    long_S);
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
static void LCK_calculate_kappa_LQ2awkOm(const real_T trajs_new[800], real_T
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

/* System initialize for referenced model: 'LCK' */
void LCK_Init(real32_T *rty_LCK_Mode, real32_T *rty_SPP_Type, real32_T
              *rty_Lateral_HMI_LKS_Error, real32_T
              *rty_Lateral_HMI_LKS_Passive_Rea, real32_T
              *rty_Lateral_HMI_LKS_Status, real32_T
              *rty_Lateral_HMI_LC_pro_reason, real32_T
              *rty_Lateral_HMI_LC_Proposal, real32_T *rty_Lateral_HMI_LC_Reason,
              real32_T *rty_Lateral_HMI_LC_Request, real32_T
              *rty_Lateral_HMI_LC_Tip, real32_T *rty_Lateral_HMI_LC_Fail_Tip,
              real32_T *rty_Lateral_HMI_LC_Dis_dy, real32_T
              *rty_Lateral_HMI_LC_Dis_dx, real32_T *rty_Lateral_HMI_LC_Direction,
              real32_T *rty_Lateral_HMI_Handsoff_Warnin, real32_T *rty_LC_dx)
{
  LCK_DW.i = 0.0;

  /* SystemInitialize for Chart: '<Root>/Main_OS' incorporates:
   *  SubSystem: '<Root>/Lateral_Control_Module'
   */
  /* InitializeConditions for Delay: '<S231>/Delay1' */
  memcpy(&LCK_DW.Delay1_DSTATE[0], &LCK_P_g.Delay1_InitialCondition[0], 3200U *
         sizeof(real_T));

  /* InitializeConditions for Delay: '<S244>/Delay' */
  LCK_DW.Delay_DSTATE = LCK_P_g.Delay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S240>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE = LCK_P_g.UnitDelay_InitialCondition_o;

  /* InitializeConditions for UnitDelay: '<S241>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_a = LCK_P_g.UnitDelay_InitialCondition_b;

  /* InitializeConditions for Delay: '<S244>/Delay1' */
  LCK_DW.Delay1_DSTATE_c = LCK_P_g.Delay1_InitialCondition_c;

  /* InitializeConditions for Delay: '<S8>/Delay' */
  LCK_DW.Delay_DSTATE_f = LCK_P_g.Delay_InitialCondition_p;

  /* InitializeConditions for Delay: '<S246>/Delay5' */
  LCK_DW.Delay5_DSTATE = LCK_P_g.Delay5_InitialCondition;

  /* InitializeConditions for Delay: '<S246>/Delay1' */
  LCK_DW.Delay1_DSTATE_i = LCK_P_g.Delay1_InitialCondition_a;

  /* InitializeConditions for Delay: '<S245>/Delay5' */
  LCK_DW.Delay5_DSTATE_n = LCK_P_g.Delay5_InitialCondition_b;

  /* InitializeConditions for UnitDelay: '<S141>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_h = LCK_P_g.UnitDelay_InitialCondition_bi;

  /* InitializeConditions for UnitDelay: '<S114>/Unit Delay2' */
  LCK_DW.UnitDelay2_DSTATE = LCK_P_g.UnitDelay2_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S114>/Unit Delay1' */
  LCK_DW.UnitDelay1_DSTATE = LCK_P_g.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S159>/Unit Delay6' */
  LCK_DW.UnitDelay6_DSTATE = LCK_P_g.UnitDelay6_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S159>/Unit Delay11' */
  LCK_DW.UnitDelay11_DSTATE = LCK_P_g.UnitDelay11_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S159>/Unit Delay7' */
  LCK_DW.UnitDelay7_DSTATE = LCK_P_g.UnitDelay7_InitialCondition;

  /* InitializeConditions for Delay: '<S168>/Delay1' */
  LCK_DW.Delay1_DSTATE_a = LCK_P_g.Delay1_InitialCondition_i;

  /* InitializeConditions for Delay: '<S168>/Delay' */
  LCK_DW.Delay_DSTATE_c = LCK_P_g.Delay_InitialCondition_d;

  /* InitializeConditions for Delay: '<S171>/Delay' */
  LCK_DW.Delay_DSTATE_p = LCK_P_g.Delay_InitialCondition_h;

  /* InitializeConditions for Delay: '<S171>/Delay2' */
  LCK_DW.Delay2_DSTATE = LCK_P_g.Delay2_InitialCondition;

  /* InitializeConditions for Delay: '<S171>/Delay1' */
  LCK_DW.Delay1_DSTATE_f = LCK_P_g.Delay1_InitialCondition_l;

  /* InitializeConditions for Delay: '<S6>/Delay2' */
  LCK_DW.Delay2_DSTATE_e = LCK_P_g.Delay2_InitialCondition_g;

  /* InitializeConditions for UnitDelay: '<S25>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_b = LCK_P_g.UnitDelay_InitialCondition_j;

  /* InitializeConditions for UnitDelay: '<S57>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_j = LCK_P_g.UnitDelay_InitialCondition_gt;

  /* InitializeConditions for UnitDelay: '<S23>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_d = LCK_P_g.UnitDelay_InitialCondition_g0;

  /* InitializeConditions for UnitDelay: '<S232>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_l = LCK_P_g.UnitDelay_InitialCondition_f;

  /* InitializeConditions for UnitDelay: '<S47>/Unit Delay2' */
  LCK_DW.UnitDelay2_DSTATE_i = LCK_P_g.UnitDelay2_InitialCondition_i;

  /* InitializeConditions for UnitDelay: '<S24>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_g = LCK_P_g.UnitDelay_InitialCondition_i;

  /* InitializeConditions for UnitDelay: '<S26>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_f = LCK_P_g.UnitDelay_InitialCondition_n;

  /* InitializeConditions for UnitDelay: '<S83>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_ao = LCK_P_g.UnitDelay_InitialCondition_fy;

  /* InitializeConditions for UnitDelay: '<S82>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_lg = LCK_P_g.UnitDelay_InitialCondition_d;

  /* InitializeConditions for UnitDelay: '<S71>/Unit Delay1' */
  LCK_DW.UnitDelay1_DSTATE_j = LCK_P_g.UnitDelay1_InitialCondition_h;

  /* InitializeConditions for UnitDelay: '<S71>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_ly = LCK_P_g.UnitDelay_InitialCondition_p;

  /* InitializeConditions for UnitDelay: '<S81>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_n = LCK_P_g.UnitDelay_InitialCondition_e;

  /* InitializeConditions for UnitDelay: '<S86>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_do = LCK_P_g.UnitDelay_InitialCondition_k;

  /* InitializeConditions for UnitDelay: '<S32>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_k = LCK_P_g.UnitDelay_InitialCondition_bz;

  /* InitializeConditions for UnitDelay: '<S105>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_fy = LCK_P_g.UnitDelay_InitialCondition_a;

  /* InitializeConditions for UnitDelay: '<S103>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_l1 = LCK_P_g.UnitDelay_InitialCondition_jm;

  /* InitializeConditions for UnitDelay: '<S44>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_p = LCK_P_g.UnitDelay_InitialCondition_i4;

  /* InitializeConditions for UnitDelay: '<S102>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_ah = LCK_P_g.UnitDelay_InitialCondition_m;

  /* InitializeConditions for UnitDelay: '<S38>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_jh = LCK_P_g.UnitDelay_InitialCondition_l;

  /* InitializeConditions for UnitDelay: '<S38>/Unit Delay1' */
  LCK_DW.UnitDelay1_DSTATE_e = LCK_P_g.UnitDelay1_InitialCondition_i;

  /* InitializeConditions for Delay: '<S7>/Delay1' */
  LCK_DW.Delay1_DSTATE_j = LCK_P_g.Delay1_InitialCondition_j;

  /* SystemInitialize for Chart: '<S253>/signal_sustain' */
  LCK_signal_sustain_Init(&LCK_B.sf_signal_sustain_k,
    &LCK_DW.sf_signal_sustain_k);

  /* SystemInitialize for Chart: '<S254>/signal_sustain' */
  LCK_signal_sustain_Init(&LCK_B.sf_signal_sustain_c,
    &LCK_DW.sf_signal_sustain_c);

  /* SystemInitialize for Chart: '<S243>/signal_sustain' */
  LCK_signal_sustain_Init(&LCK_B.sf_signal_sustain_e,
    &LCK_DW.sf_signal_sustain_e);

  /* SystemInitialize for Enabled SubSystem: '<S8>/Subsystem4' */
  /* InitializeConditions for Delay: '<S248>/Delay1' */
  LCK_DW.Delay1_DSTATE_p = LCK_P_g.Delay1_InitialCondition_g;

  /* InitializeConditions for Delay: '<S248>/Delay2' */
  LCK_DW.Delay2_DSTATE_b = LCK_P_g.Delay2_InitialCondition_d;

  /* InitializeConditions for Delay: '<S248>/Delay3' */
  LCK_DW.Delay3_DSTATE = LCK_P_g.Delay3_InitialCondition;

  /* InitializeConditions for Delay: '<S248>/Delay4' */
  LCK_DW.Delay4_DSTATE = LCK_P_g.Delay4_InitialCondition;

  /* SystemInitialize for Outport: '<S248>/Out1' */
  LCK_B.PO_A0_Hold = LCK_P_g.Out1_Y0;

  /* SystemInitialize for Outport: '<S248>/Out2' */
  LCK_B.PO_A1_Hold = LCK_P_g.Out2_Y0;

  /* SystemInitialize for Outport: '<S248>/Out3' */
  LCK_B.PO_A2_Hold = LCK_P_g.Out3_Y0;

  /* SystemInitialize for Outport: '<S248>/Out4' */
  LCK_B.PO_A3_Hold = LCK_P_g.Out4_Y0;

  /* End of SystemInitialize for SubSystem: '<S8>/Subsystem4' */

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
  LCK_DW.UnitDelay_DSTATE_j5 = LCK_P_g.UnitDelay_InitialCondition_g;

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
  LCK_DW.UnitDelay1_DSTATE_g = LCK_P_g.UnitDelay1_InitialCondition_c;

  /* InitializeConditions for UnitDelay: '<S112>/Unit Delay2' */
  LCK_DW.UnitDelay2_DSTATE_c = LCK_P_g.UnitDelay2_InitialCondition_f;

  /* InitializeConditions for Delay: '<S112>/Delay1' */
  LCK_DW.Delay1_DSTATE_k = LCK_P_g.Delay1_InitialCondition_d;

  /* InitializeConditions for Delay: '<S112>/Delay' */
  LCK_DW.Delay_DSTATE_b = LCK_P_g.Delay_InitialCondition_i;

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
  LCK_Sustain_wo_reset_k_Init(&LCK_B.sf_Sustain_wo_reset_o,
    &LCK_DW.sf_Sustain_wo_reset_o);

  /* SystemInitialize for Chart: '<S121>/Sustain_wo_reset' */
  LCK_Sustain_wo_reset_l_Init(&LCK_B.sf_Sustain_wo_reset_n,
    &LCK_DW.sf_Sustain_wo_reset_n);

  /* SystemInitialize for Atomic SubSystem: '<S109>/Filter_steer_angle_CR' */
  /* InitializeConditions for UnitDelay: '<S147>/Unit Delay' */
  LCK_DW.UnitDelay_DSTATE_jx = LCK_P_g.UnitDelay_InitialCondition;

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
  LCK_Sustain_wo_reset_k_Init(&LCK_B.sf_Sustain_wo_reset_ce,
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

  /* SystemInitialize for Chart: '<S242>/IntelligentEvasionSM' */
  LCK_DW.is_active_c10_LCK = 0U;
  LCK_DW.is_c10_LCK = LCK_IN_NO_ACTIVE_CHILD_a;
  LCK_B.IntEvaSta = 0.0F;

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
  *rty_LCK_Mode = 0.0F;

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
  LatCtrl_LCK_TorqCmd = LCK_P_g.LatCtrl_LCK_TorqCmd_Y0;

  /* SystemInitialize for Outport: '<S1>/LCK_Debug_Info' */
  LCK_B.Saturation_l =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.SPP_Coeff.SPP_A0_Fltd;
  LCK_B.Saturation_e =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.SPP_Coeff.SPP_A1_Fltd;
  LCK_B.Saturation_a =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.SPP_Coeff.SPP_A2_Fltd;
  LCK_B.Saturation_as =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.SPP_Coeff.SPP_A3_Fltd;

  /* SystemInitialize for Relay: '<S73>/Relay1' incorporates:
   *  Outport: '<S1>/LCK_Debug_Info'
   */
  LCK_B.Sum1_nd =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.PID_Control_Signals.Dy_1;

  /* SystemInitialize for Relay: '<S73>/Relay' incorporates:
   *  Outport: '<S1>/LCK_Debug_Info'
   */
  LCK_B.Product_mm =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.PID_Control_Signals.Dy_0;

  /* SystemInitialize for Relay: '<S73>/Relay2' incorporates:
   *  Outport: '<S1>/LCK_Debug_Info'
   */
  LCK_B.Product10 =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.PID_Control_Signals.Lat_Rate;

  /* SystemInitialize for Relay: '<S94>/Relay' incorporates:
   *  Outport: '<S1>/LCK_Debug_Info'
   */
  LCK_B.C_RAD2DEG_f =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.PID_Control_Signals.Hed_Ang;

  /* SystemInitialize for Relay: '<S94>/Relay1' incorporates:
   *  Outport: '<S1>/LCK_Debug_Info'
   */
  LCK_B.Product2_p3 =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.PID_Control_Signals.Hed_Ang_Rat;

  /* SystemInitialize for Outport: '<S1>/LCK_Debug_Info' */
  LCK_B.Saturation_k3 =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Curve_Parameters.Road_Radius;

  /* SystemInitialize for Signum: '<S43>/Sign' incorporates:
   *  Outport: '<S1>/LCK_Debug_Info'
   */
  LCK_B.Gain_i =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Curve_Parameters.Curvature_0;

  /* SystemInitialize for Outport: '<S1>/LCK_Debug_Info' */
  LCK_B.Switch1_b =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Curve_Parameters.Curvature_1;
  LCK_B.Gain2_g =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Curve_Parameters.Curvature_Rate;
  LCK_B.Saturation_g =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Lat_Ctrl_Info.Lat_Ctr_Cmd;
  LCK_B.Switch2_j =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Lat_Ctrl_Info.Lat_Ctrl_PTerm;
  LCK_B.Add4 =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Lat_Ctrl_Info.Lat_Ctrl_ITerm;
  LCK_B.Product2_cq =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Lat_Ctrl_Info.Lat_Ctrl_DTerm;
  LCK_B.Product_g4 =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Lat_Ctrl_Info.Lat_Ctrl_PTerm_0;
  LCK_B.Product6_e =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Lat_Ctrl_Info.Lat_Ctrl_PTerm_1;
  LCK_B.Switch2_l4 =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Lat_Ctrl_Info.Lat_Ctrl_ITerm_0;
  LCK_B.Switch2_k =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.Lat_Ctrl_Info.Lat_Ctrl_ITerm_1;
  LCK_B.Saturation_kk =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.LatCtrl_Info.LatCtrl_Cmd;
  LCK_B.Switch2_o =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.LatCtrl_Info.LatCtrl_PTerm;
  LCK_B.Switch2_h =
    LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.LatCtrl_Info.LatCtrl_DTerm;
  LCK_B.Sum1_oc = LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.LatCtrl_Info.LatCtrl_P;
  LCK_B.Sum1_h = LCK_P_g.LCK_Debug_Info_Y0.LCK_Ctrl_Info.LatCtrl_Info.LatCtrl_D;
  LCK_B.DataTypeConversion_c = LCK_P_g.LCK_Debug_Info_Y0.LCK_State_Info.signal1;
  LCK_B.DataTypeConversion1_j = LCK_P_g.LCK_Debug_Info_Y0.LCK_State_Info.signal2;
  LCK_B.DataTypeConversion2_k = LCK_P_g.LCK_Debug_Info_Y0.LCK_State_Info.signal3;
  LCK_B.DataTypeConversion3_a = LCK_P_g.LCK_Debug_Info_Y0.LCK_State_Info.signal4;
  LCK_B.Gain_hz = LCK_P_g.LCK_Debug_Info_Y0.LCK_State_Info.signal5;
  LCK_B.Switch13 = LCK_P_g.LCK_Debug_Info_Y0.SPP_Info.SPP_Conf;
  *rty_SPP_Type = LCK_P_g.LCK_Debug_Info_Y0.SPP_Info.SPP_Type;
  LCK_B.Switch9_e = LCK_P_g.LCK_Debug_Info_Y0.SPP_Info.SPP_A0;
  LCK_B.Switch10_g = LCK_P_g.LCK_Debug_Info_Y0.SPP_Info.SPP_A1;
  LCK_B.Switch11_h = LCK_P_g.LCK_Debug_Info_Y0.SPP_Info.SPP_A2;
  LCK_B.Switch12_a = LCK_P_g.LCK_Debug_Info_Y0.SPP_Info.SPP_A3;
  LCK_B.LanSigInputs = LCK_P_g.LCK_Debug_Info_Y0.LanSigInputs;

  /* SystemInitialize for Outport: '<S1>/Lateral_HMI' */
  *rty_Lateral_HMI_LKS_Error = LCK_P_g.Lateral_HMI_Y0;
  *rty_Lateral_HMI_LKS_Passive_Rea = LCK_P_g.Lateral_HMI_Y0;
  *rty_Lateral_HMI_LKS_Status = LCK_P_g.Lateral_HMI_Y0;
  *rty_Lateral_HMI_LC_pro_reason = LCK_P_g.Lateral_HMI_Y0;
  *rty_Lateral_HMI_LC_Proposal = LCK_P_g.Lateral_HMI_Y0;
  *rty_Lateral_HMI_LC_Reason = LCK_P_g.Lateral_HMI_Y0;
  *rty_Lateral_HMI_LC_Request = LCK_P_g.Lateral_HMI_Y0;
  *rty_Lateral_HMI_LC_Tip = LCK_P_g.Lateral_HMI_Y0;
  *rty_Lateral_HMI_LC_Fail_Tip = LCK_P_g.Lateral_HMI_Y0;
  *rty_Lateral_HMI_LC_Dis_dy = LCK_P_g.Lateral_HMI_Y0;
  *rty_Lateral_HMI_LC_Dis_dx = LCK_P_g.Lateral_HMI_Y0;
  *rty_Lateral_HMI_LC_Direction = LCK_P_g.Lateral_HMI_Y0;
  *rty_Lateral_HMI_Handsoff_Warnin = LCK_P_g.Lateral_HMI_Y0;

  /* SystemInitialize for Outport: '<S1>/LC_dx' */
  *rty_LC_dx = LCK_P_g.LC_dx_Y0;
}

/* System reset for referenced model: 'LCK' */
void LCK_Reset(void)
{
  /* SystemReset for Chart: '<Root>/Main_OS' */
  LCK_DW.i = 0.0;
}

/* Outputs for referenced model: 'LCK' */
void LCK(const LatCtrl_LCK_LanSigInputs_t *rtu_LCK_LanSigInputs, const
         LatCtrl_LCK_TrackSigInputs_t *rtu_LCK_TrackSigInputs, const
         LatCtrl_LCK_VehSigInputs_t *rtu_LCK_VehSigInputs, const real32_T
         *rtu_TJA_State, const real_T *rtu_ZOP_LCK_Activate, const real_T
         *rtu_ZOP_LC_Command, const uint8_T *rtu_Lane_Bias_Flag, const uint8_T
         *rtu_Fus_Lane_Info_primaryObjTra, const real32_T
         *rtu_Fus_Lane_Info_primaryObjT_k, const real32_T
         *rtu_Fus_Lane_Info_primaryObj_ka, const real32_T
         *rtu_Fus_Lane_Info_primaryOb_kaa, const real32_T
         *rtu_Fus_Lane_Info_primaryObjT_e, const real_T
         *rtu_Ramp_Lane_Valid_Flag, const AVP_OUTPUT_ST *rtu_AVP_Info, real32_T *
         rty_LCK_Mode, real32_T *rty_SPP_Type, real32_T
         *rty_Lateral_HMI_LKS_Error, real32_T *rty_Lateral_HMI_LKS_Passive_Rea,
         real32_T *rty_Lateral_HMI_LKS_Status, real32_T
         *rty_Lateral_HMI_LC_pro_reason, real32_T *rty_Lateral_HMI_LC_Proposal,
         real32_T *rty_Lateral_HMI_LC_Reason, real32_T
         *rty_Lateral_HMI_LC_Request, real32_T *rty_Lateral_HMI_LC_Tip, real32_T
         *rty_Lateral_HMI_LC_Fail_Tip, real32_T *rty_Lateral_HMI_LC_Dis_dy,
         real32_T *rty_Lateral_HMI_LC_Dis_dx, real32_T
         *rty_Lateral_HMI_LC_Direction, real32_T
         *rty_Lateral_HMI_Handsoff_Warnin, real32_T *rty_LC_dx)
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
    LCK_B.DataTypeConversion = (real32_T)LCK_P_g.AVP_C0_Coff_Value;

    /* Product: '<S8>/Product' */
    LCK_B.Product = rtu_AVP_Info->Tractory_c0 * LCK_B.DataTypeConversion;

    /* DataTypeConversion: '<S247>/Data Type Conversion3' incorporates:
     *  Constant: '<S247>/Constant5'
     */
    LCK_B.DataTypeConversion3_ey = (LCK_P_g.Constant5_Value != 0.0);

    /* RelationalOperator: '<S247>/Relational Operator2' incorporates:
     *  Constant: '<S247>/Constant2'
     */
    LCK_B.RelationalOperator2 = (rtu_AVP_Info->EndPoint_x <=
      LCK_P_g.Constant2_Value);

    /* Abs: '<S247>/Abs' */
    LCK_B.Abs = (real32_T)fabs(LCK_B.Product);

    /* RelationalOperator: '<S247>/Relational Operator4' incorporates:
     *  Constant: '<S247>/Constant3'
     */
    LCK_B.RelationalOperator4 = (LCK_B.Abs >= LCK_P_g.Constant3_Value);

    /* DataTypeConversion: '<S247>/Data Type Conversion2' incorporates:
     *  Constant: '<S247>/Constant4'
     */
    velocity_ms = floor(LCK_P_g.Constant4_Value);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 256.0);
    }

    LCK_B.DataTypeConversion2_k4 = (uint8_T)(velocity_ms < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-velocity_ms : (int32_T)(uint8_T)velocity_ms);

    /* End of DataTypeConversion: '<S247>/Data Type Conversion2' */

    /* RelationalOperator: '<S247>/Relational Operator5' */
    LCK_B.RelationalOperator5 = (rtu_AVP_Info->AVP_STATE ==
      LCK_B.DataTypeConversion2_k4);

    /* DataTypeConversion: '<S247>/Data Type Conversion4' incorporates:
     *  Constant: '<S247>/Constant6'
     */
    velocity_ms = floor(LCK_P_g.Constant6_Value);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 256.0);
    }

    LCK_B.DataTypeConversion4_g = (uint8_T)(velocity_ms < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-velocity_ms : (int32_T)(uint8_T)velocity_ms);

    /* End of DataTypeConversion: '<S247>/Data Type Conversion4' */

    /* RelationalOperator: '<S247>/Relational Operator6' */
    LCK_B.RelationalOperator6 = (rtu_AVP_Info->AVP_STATE ==
      LCK_B.DataTypeConversion4_g);

    /* Logic: '<S247>/Logical Operator1' */
    LCK_B.LogicalOperator1 = (LCK_B.RelationalOperator2 ||
      LCK_B.RelationalOperator4 || LCK_B.RelationalOperator5 ||
      LCK_B.RelationalOperator6);

    /* DataTypeConversion: '<S247>/Data Type Conversion' incorporates:
     *  Constant: '<S247>/Constant'
     */
    velocity_ms = floor(LCK_P_g.Constant_Value_o);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 256.0);
    }

    LCK_B.DataTypeConversion_b = (uint8_T)(velocity_ms < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-velocity_ms : (int32_T)(uint8_T)velocity_ms);

    /* End of DataTypeConversion: '<S247>/Data Type Conversion' */

    /* RelationalOperator: '<S247>/Relational Operator3' */
    LCK_B.RelationalOperator3 = (rtu_AVP_Info->AVP_STATE ==
      LCK_B.DataTypeConversion_b);

    /* DataTypeConversion: '<S247>/Data Type Conversion1' incorporates:
     *  Constant: '<S247>/Constant1'
     */
    velocity_ms = floor(LCK_P_g.Constant1_Value_p);
    if (rtIsNaN(velocity_ms) || rtIsInf(velocity_ms)) {
      velocity_ms = 0.0;
    } else {
      velocity_ms = fmod(velocity_ms, 256.0);
    }

    LCK_B.DataTypeConversion1_a3 = (uint8_T)(velocity_ms < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-velocity_ms : (int32_T)(uint8_T)velocity_ms);

    /* End of DataTypeConversion: '<S247>/Data Type Conversion1' */

    /* RelationalOperator: '<S247>/Relational Operator1' */
    LCK_B.RelationalOperator1 = (rtu_AVP_Info->AVP_STATE ==
      LCK_B.DataTypeConversion1_a3);

    /* Logic: '<S247>/Logical Operator' */
    LCK_B.LogicalOperator = (LCK_B.RelationalOperator3 ||
      LCK_B.RelationalOperator1);

    /* Switch: '<S247>/Switch' */
    if (LCK_B.LogicalOperator1) {
      LCK_B.Switch_l = LCK_B.DataTypeConversion3_ey;
    } else {
      LCK_B.Switch_l = LCK_B.LogicalOperator;
    }

    /* End of Switch: '<S247>/Switch' */

    /* Switch: '<S247>/Switch1' incorporates:
     *  Constant: '<S247>/Constant7'
     *  Constant: '<S247>/DisableAVP'
     */
    if (LCK_P_g.DisableAVP_Value) {
      LCK_B.Switch1_i5 = LCK_P_g.Constant7_Value_e;
    } else {
      LCK_B.Switch1_i5 = LCK_B.Switch_l;
    }

    /* End of Switch: '<S247>/Switch1' */

    /* Sum: '<S8>/Sum1' */
    LCK_B.Sum1 = rtu_LCK_LanSigInputs->VID_Lin_01_Range +
      rtu_LCK_LanSigInputs->VID_Lin_02_Range;

    /* RelationalOperator: '<S8>/Relational Operator2' incorporates:
     *  Constant: '<S8>/Constant59'
     */
    LCK_B.RelationalOperator2_f = (LCK_B.Sum1 <= LCK_P_g.Constant59_Value);

    /* RelationalOperator: '<S8>/Relational Operator1' incorporates:
     *  Constant: '<S8>/Constant1'
     */
    LCK_B.RelationalOperator1_i = (*rtu_Fus_Lane_Info_primaryObjTra >=
      LCK_P_g.Constant1_Value_m);

    /* Delay: '<S244>/Delay' */
    LCK_B.Delay = LCK_DW.Delay_DSTATE;

    /* RelationalOperator: '<S244>/Relational Operator27' incorporates:
     *  Constant: '<S244>/Constant37'
     */
    LCK_B.RelationalOperator27 = (LCK_B.Delay >= LCK_P_g.Constant37_Value);

    /* UnitDelay: '<S240>/Unit Delay' */
    LCK_B.UnitDelay = LCK_DW.UnitDelay_DSTATE;

    /* Sum: '<S249>/Sum2' incorporates:
     *  Constant: '<S8>/Constant42'
     *  Constant: '<S8>/k_LCK_TinCon_LaneProbFlt'
     */
    LCK_B.Sum2 = ML_TIME_MSEC + k_LCK_TinCon_LaneProbFlt;

    /* Product: '<S249>/Product1' incorporates:
     *  Constant: '<S8>/Constant42'
     */
    LCK_B.Product1_h = ML_TIME_MSEC / LCK_B.Sum2;

    /* Sum: '<S240>/Sum' */
    LCK_B.Sum_n = rtu_LCK_LanSigInputs->VID_Lin_01_ProbExists - LCK_B.UnitDelay;

    /* Product: '<S240>/Product' */
    LCK_B.Product_m = LCK_B.Product1_h * LCK_B.Sum_n;

    /* Saturate: '<S240>/Saturation' incorporates:
     *  Sum: '<S240>/Sum1'
     */
    LCK_B.Sum1_n = LCK_B.Product_m + LCK_B.UnitDelay;
    if (LCK_B.Sum1_n > LCK_P_g.Saturation_UpperSat_c) {
      LCK_B.Saturation = LCK_P_g.Saturation_UpperSat_c;
    } else if (LCK_B.Sum1_n < LCK_P_g.Saturation_LowerSat_o) {
      LCK_B.Saturation = LCK_P_g.Saturation_LowerSat_o;
    } else {
      LCK_B.Saturation = LCK_B.Sum1_n;
    }

    /* End of Saturate: '<S240>/Saturation' */

    /* RelationalOperator: '<S237>/Relational Operator' incorporates:
     *  Constant: '<S237>/Constant'
     */
    LCK_B.RelationalOperator = (LCK_B.Saturation >= k_LCK_SPPConfHigh_ProbThre);

    /* UnitDelay: '<S241>/Unit Delay' */
    LCK_B.UnitDelay_a = LCK_DW.UnitDelay_DSTATE_a;

    /* Sum: '<S250>/Sum2' incorporates:
     *  Constant: '<S8>/Constant30'
     *  Constant: '<S8>/k_LCK_TinCon_LaneProbFlt1'
     */
    LCK_B.Sum2_j = ML_TIME_MSEC + k_LCK_TinCon_LaneProbFlt;

    /* Product: '<S250>/Product1' incorporates:
     *  Constant: '<S8>/Constant30'
     */
    LCK_B.Product1_n = ML_TIME_MSEC / LCK_B.Sum2_j;

    /* Sum: '<S241>/Sum' */
    LCK_B.Sum_i = rtu_LCK_LanSigInputs->VID_Lin_02_ProbExists -
      LCK_B.UnitDelay_a;

    /* Product: '<S241>/Product' */
    LCK_B.Product_a = LCK_B.Product1_n * LCK_B.Sum_i;

    /* Saturate: '<S241>/Saturation' incorporates:
     *  Sum: '<S241>/Sum1'
     */
    LCK_B.Sum1_o = LCK_B.Product_a + LCK_B.UnitDelay_a;
    if (LCK_B.Sum1_o > LCK_P_g.Saturation_UpperSat_l) {
      LCK_B.Saturation_k = LCK_P_g.Saturation_UpperSat_l;
    } else if (LCK_B.Sum1_o < LCK_P_g.Saturation_LowerSat_h) {
      LCK_B.Saturation_k = LCK_P_g.Saturation_LowerSat_h;
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
    LCK_B.LogicalOperator_o = (LCK_B.RelationalOperator &&
      LCK_B.RelationalOperator3_m);

    /* RelationalOperator: '<S237>/Relational Operator1' incorporates:
     *  Constant: '<S237>/Constant2'
     */
    LCK_B.RelationalOperator1_m = (LCK_B.Saturation >=
      k_LCK_SPPConfMedHigh_ProbThre);

    /* RelationalOperator: '<S237>/Relational Operator4' incorporates:
     *  Constant: '<S237>/Constant8'
     */
    LCK_B.RelationalOperator4_f = (LCK_B.Saturation_k >=
      k_LCK_SPPConfMedHigh_ProbThre);

    /* Logic: '<S237>/Logical Operator1' */
    LCK_B.LogicalOperator1_f = (LCK_B.RelationalOperator1_m &&
      LCK_B.RelationalOperator4_f);

    /* RelationalOperator: '<S237>/Relational Operator2' incorporates:
     *  Constant: '<S237>/Constant4'
     */
    LCK_B.RelationalOperator2_m = (LCK_B.Saturation >= k_LCK_SPPConfMed_ProbThre);

    /* RelationalOperator: '<S237>/Relational Operator5' incorporates:
     *  Constant: '<S237>/Constant9'
     */
    LCK_B.RelationalOperator5_j = (LCK_B.Saturation_k >=
      k_LCK_SPPConfMed_ProbThre);

    /* Logic: '<S237>/Logical Operator2' */
    LCK_B.LogicalOperator2 = (LCK_B.RelationalOperator2_m &&
      LCK_B.RelationalOperator5_j);

    /* Switch: '<S237>/Switch2' incorporates:
     *  Constant: '<S237>/Constant5'
     *  Constant: '<S237>/Constant6'
     */
    if (LCK_B.LogicalOperator2) {
      LCK_B.Switch2 = LCK_P_g.Constant5_Value_d;
    } else {
      LCK_B.Switch2 = LCK_P_g.Constant6_Value_l;
    }

    /* End of Switch: '<S237>/Switch2' */

    /* Switch: '<S237>/Switch1' incorporates:
     *  Constant: '<S237>/Constant3'
     */
    if (LCK_B.LogicalOperator1_f) {
      LCK_B.Switch1 = LCK_P_g.Constant3_Value_k;
    } else {
      LCK_B.Switch1 = LCK_B.Switch2;
    }

    /* End of Switch: '<S237>/Switch1' */

    /* Switch: '<S237>/Switch' incorporates:
     *  Constant: '<S237>/Constant1'
     */
    if (LCK_B.LogicalOperator_o) {
      LCK_B.Switch = LCK_P_g.Constant1_Value_f;
    } else {
      LCK_B.Switch = LCK_B.Switch1;
    }

    /* End of Switch: '<S237>/Switch' */

    /* RelationalOperator: '<S244>/Relational Operator24' incorporates:
     *  Constant: '<S244>/Constant34'
     */
    LCK_B.RelationalOperator24 = (LCK_B.Switch < LCK_P_g.Constant34_Value);

    /* Logic: '<S244>/Logical Operator22' */
    LCK_B.LogicalOperator22 = (LCK_B.RelationalOperator27 &&
      LCK_B.RelationalOperator24);

    /* RelationalOperator: '<S244>/Relational Operator45' incorporates:
     *  Constant: '<S244>/Constant56'
     */
    LCK_B.RelationalOperator45 = (LCK_B.Switch >= LCK_P_g.Constant56_Value);

    /* Chart: '<S253>/signal_sustain' incorporates:
     *  Constant: '<S244>/Constant53'
     */
    LCK_signal_sustain(LCK_B.LogicalOperator22, LCK_P_g.Constant53_Value,
                       LCK_B.RelationalOperator45, &LCK_B.sf_signal_sustain_k,
                       &LCK_DW.sf_signal_sustain_k);

    /* Delay: '<S244>/Delay1' */
    LCK_B.Delay1_k = LCK_DW.Delay1_DSTATE_c;

    /* RelationalOperator: '<S244>/Relational Operator29' incorporates:
     *  Constant: '<S244>/Constant39'
     */
    LCK_B.RelationalOperator29 = (LCK_B.Delay1_k >= LCK_P_g.Constant39_Value);

    /* RelationalOperator: '<S244>/Relational Operator26' incorporates:
     *  Constant: '<S244>/Constant36'
     */
    LCK_B.RelationalOperator26 = (LCK_B.Switch < LCK_P_g.Constant36_Value);

    /* Logic: '<S244>/Logical Operator23' */
    LCK_B.LogicalOperator23 = (LCK_B.RelationalOperator29 &&
      LCK_B.RelationalOperator26);

    /* RelationalOperator: '<S244>/Relational Operator46' incorporates:
     *  Constant: '<S244>/Constant57'
     */
    LCK_B.RelationalOperator46 = (LCK_B.Switch >= LCK_P_g.Constant57_Value);

    /* Chart: '<S254>/signal_sustain' incorporates:
     *  Constant: '<S244>/Constant54'
     */
    LCK_signal_sustain(LCK_B.LogicalOperator23, LCK_P_g.Constant54_Value,
                       LCK_B.RelationalOperator46, &LCK_B.sf_signal_sustain_c,
                       &LCK_DW.sf_signal_sustain_c);

    /* Delay: '<S8>/Delay' */
    LCK_B.Delay_m5 = LCK_DW.Delay_DSTATE_f;

    /* RelationalOperator: '<S8>/Relational Operator27' incorporates:
     *  Constant: '<S8>/Constant37'
     */
    LCK_B.RelationalOperator27_l = (LCK_B.Delay_m5 >= LCK_P_g.Constant37_Value_g);

    /* RelationalOperator: '<S8>/Relational Operator24' incorporates:
     *  Constant: '<S8>/Constant34'
     */
    LCK_B.RelationalOperator24_p = (*rtu_Fus_Lane_Info_primaryObjTra ==
      LCK_P_g.Constant34_Value_b);

    /* Logic: '<S8>/Logical Operator22' */
    LCK_B.LogicalOperator22_f = (LCK_B.RelationalOperator27_l &&
      LCK_B.RelationalOperator24_p);

    /* RelationalOperator: '<S8>/Relational Operator45' incorporates:
     *  Constant: '<S8>/Constant56'
     */
    LCK_B.RelationalOperator45_a = (*rtu_Fus_Lane_Info_primaryObjTra >=
      LCK_P_g.Constant56_Value_a);

    /* Chart: '<S243>/signal_sustain' incorporates:
     *  Constant: '<S8>/Constant53'
     */
    LCK_signal_sustain(LCK_B.LogicalOperator22_f, LCK_P_g.Constant53_Value_f,
                       LCK_B.RelationalOperator45_a, &LCK_B.sf_signal_sustain_e,
                       &LCK_DW.sf_signal_sustain_e);

    /* Logic: '<S8>/Logical Operator1' */
    LCK_B.LogicalOperator1_e = (LCK_B.RelationalOperator1_i ||
      (LCK_B.sf_signal_sustain_e.sustain_value != 0.0F));

    /* Logic: '<S8>/Logical Operator23' */
    LCK_B.LogicalOperator23_b = (LCK_B.RelationalOperator2_f &&
      LCK_B.LogicalOperator1_e);

    /* Gain: '<S8>/Gain2' */
    LCK_B.Gain2_l = (uint8_T)(LCK_B.LogicalOperator23_b ? (int32_T)
      LCK_P_g.Gain2_Gain_g : 0);

    /* Outputs for Enabled SubSystem: '<S8>/Subsystem4' incorporates:
     *  EnablePort: '<S248>/Enable'
     */
    if (LCK_B.LogicalOperator22_f) {
      /* Delay: '<S248>/Delay1' */
      LCK_B.Delay1_e = LCK_DW.Delay1_DSTATE_p;

      /* Delay: '<S248>/Delay2' */
      LCK_B.Delay2_f = LCK_DW.Delay2_DSTATE_b;

      /* Delay: '<S248>/Delay3' */
      LCK_B.Delay3 = LCK_DW.Delay3_DSTATE;

      /* Delay: '<S248>/Delay4' */
      LCK_B.Delay4 = LCK_DW.Delay4_DSTATE;

      /* MATLAB Function: '<S248>/MATLAB Function' */
      LCK_B.PO_A0_Hold = LCK_B.Delay1_e;
      LCK_B.PO_A1_Hold = LCK_B.Delay2_f;
      LCK_B.PO_A2_Hold = LCK_B.Delay3;
      LCK_B.PO_A3_Hold = LCK_B.Delay4;
    }

    /* End of Outputs for SubSystem: '<S8>/Subsystem4' */

    /* Switch: '<S8>/Switch15' */
    if (LCK_B.sf_signal_sustain_e.sustain_value > LCK_P_g.Switch15_Threshold) {
      LCK_B.Switch15 = LCK_B.PO_A0_Hold;
    } else {
      LCK_B.Switch15 = *rtu_Fus_Lane_Info_primaryObjT_k;
    }

    /* End of Switch: '<S8>/Switch15' */

    /* RelationalOperator: '<S246>/Relational Operator1' incorporates:
     *  Constant: '<S246>/Constant1'
     */
    LCK_B.RelationalOperator1_mz = (rtu_LCK_LanSigInputs->VID_Lin_01_ProbExists <=
      LCK_P_g.Constant1_Value_e);

    /* Delay: '<S246>/Delay5' */
    LCK_B.Delay5 = LCK_DW.Delay5_DSTATE;

    /* RelationalOperator: '<S246>/Relational Operator20' incorporates:
     *  Constant: '<S246>/Constant29'
     */
    LCK_B.RelationalOperator20 = (rtu_LCK_LanSigInputs->VID_Lane_Width <=
      LCK_P_g.Constant29_Value);

    /* Switch: '<S246>/Switch1' */
    if (LCK_B.RelationalOperator20) {
      LCK_B.Switch1_o = LCK_B.Delay5;
    } else {
      LCK_B.Switch1_o = rtu_LCK_LanSigInputs->VID_Lane_Width;
    }

    /* End of Switch: '<S246>/Switch1' */

    /* Gain: '<S246>/Gain4' */
    LCK_B.Gain4 = LCK_P_g.Gain4_Gain * LCK_B.Switch1_o;

    /* Sum: '<S246>/Sum5' */
    LCK_B.Sum5 = rtu_LCK_LanSigInputs->VID_Lin_01_A0 + LCK_B.Gain4;

    /* Switch: '<S246>/Switch17' incorporates:
     *  Constant: '<S246>/Constant8'
     */
    if (LCK_B.RelationalOperator1_mz) {
      LCK_B.Switch17 = LCK_P_g.Constant8_Value;
    } else {
      LCK_B.Switch17 = LCK_B.Sum5;
    }

    /* End of Switch: '<S246>/Switch17' */

    /* RelationalOperator: '<S246>/Relational Operator4' incorporates:
     *  Constant: '<S246>/Constant9'
     */
    LCK_B.RelationalOperator4_i = (*rtu_Ramp_Lane_Valid_Flag ==
      LCK_P_g.Constant9_Value);

    /* RelationalOperator: '<S246>/Relational Operator2' incorporates:
     *  Constant: '<S246>/Constant2'
     */
    LCK_B.RelationalOperator2_b = (rtu_LCK_LanSigInputs->VID_Lin_02_ProbExists <=
      LCK_P_g.Constant2_Value_l);

    /* Gain: '<S246>/Gain3' */
    LCK_B.Gain3 = LCK_P_g.Gain3_Gain * LCK_B.Switch1_o;

    /* Sum: '<S246>/Sum4' */
    LCK_B.Sum4 = rtu_LCK_LanSigInputs->VID_Lin_02_A0 - LCK_B.Gain3;

    /* Switch: '<S246>/Switch8' incorporates:
     *  Constant: '<S246>/Constant5'
     *  Constant: '<S246>/Constant7'
     *  Switch: '<S246>/Switch4'
     */
    if (LCK_B.RelationalOperator2_b) {
      LCK_B.Switch8 = LCK_P_g.Constant7_Value;
      LCK_B.Switch4 = LCK_P_g.Constant5_Value_h;
    } else {
      LCK_B.Switch8 = LCK_B.Sum4;
      LCK_B.Switch4 = LCK_B.Switch8;
    }

    /* End of Switch: '<S246>/Switch8' */

    /* RelationalOperator: '<S246>/Relational Operator6' incorporates:
     *  Constant: '<S246>/Constant10'
     */
    LCK_B.RelationalOperator6_h = (*rtu_Ramp_Lane_Valid_Flag ==
      LCK_P_g.Constant10_Value);

    /* Switch: '<S246>/Switch3' incorporates:
     *  Constant: '<S246>/Constant6'
     *  Switch: '<S246>/Switch6'
     */
    if (LCK_B.RelationalOperator1_mz) {
      LCK_B.Switch3 = LCK_B.Switch4;
      LCK_B.Switch6 = LCK_P_g.Constant6_Value_e;
    } else {
      LCK_B.Switch3 = LCK_B.Switch17;
      LCK_B.Switch6 = LCK_B.Switch17;
    }

    /* End of Switch: '<S246>/Switch3' */

    /* Delay: '<S246>/Delay1' */
    LCK_B.Delay1_b = LCK_DW.Delay1_DSTATE_i;

    /* RelationalOperator: '<S246>/Relational Operator5' incorporates:
     *  Constant: '<S246>/Constant4'
     */
    LCK_B.RelationalOperator5_jg = (LCK_B.Delay1_b == LCK_P_g.Constant4_Value_j);

    /* RelationalOperator: '<S246>/Relational Operator3' incorporates:
     *  Constant: '<S246>/Constant3'
     */
    LCK_B.RelationalOperator3_c = (LCK_B.Delay1_b == LCK_P_g.Constant3_Value_o);

    /* Sum: '<S246>/Sum3' */
    LCK_B.Sum3 = rtu_LCK_LanSigInputs->VID_Lin_01_A0 +
      rtu_LCK_LanSigInputs->VID_Lin_02_A0;

    /* Gain: '<S246>/Gain' */
    LCK_B.Gain_g = LCK_P_g.Gain_Gain_pu * LCK_B.Sum3;

    /* Switch: '<S246>/Switch5' incorporates:
     *  Switch: '<S246>/Switch10'
     */
    if (LCK_B.RelationalOperator2_b) {
      LCK_B.Switch5 = LCK_B.Switch6;
      LCK_B.Switch10 = LCK_B.Switch17;
    } else {
      LCK_B.Switch5 = LCK_B.Switch8;
      LCK_B.Switch10 = LCK_B.Gain_g;
    }

    /* End of Switch: '<S246>/Switch5' */

    /* Switch: '<S246>/Switch9' */
    if (LCK_B.RelationalOperator1_mz) {
      LCK_B.Switch9 = LCK_B.Switch8;
    } else {
      LCK_B.Switch9 = LCK_B.Switch10;
    }

    /* End of Switch: '<S246>/Switch9' */

    /* Switch: '<S246>/Switch7' */
    if (LCK_B.RelationalOperator3_c) {
      LCK_B.Switch7 = LCK_B.Switch5;
    } else {
      LCK_B.Switch7 = LCK_B.Switch9;
    }

    /* End of Switch: '<S246>/Switch7' */

    /* Switch: '<S246>/Switch2' */
    if (LCK_B.RelationalOperator5_jg) {
      LCK_B.Switch2_l = LCK_B.Switch3;
    } else {
      LCK_B.Switch2_l = LCK_B.Switch7;
    }

    /* End of Switch: '<S246>/Switch2' */

    /* Switch: '<S246>/Switch19' */
    if (LCK_B.RelationalOperator6_h) {
      LCK_B.Switch19 = LCK_B.Switch8;
    } else {
      LCK_B.Switch19 = LCK_B.Switch2_l;
    }

    /* End of Switch: '<S246>/Switch19' */

    /* Switch: '<S246>/Switch18' */
    if (LCK_B.RelationalOperator4_i) {
      LCK_B.Switch18 = (real32_T)LCK_B.Switch17;
    } else {
      LCK_B.Switch18 = (real32_T)LCK_B.Switch19;
    }

    /* End of Switch: '<S246>/Switch18' */

    /* Switch: '<S8>/Switch7' */
    if (LCK_B.Gain2_l > LCK_P_g.Switch7_Threshold) {
      LCK_B.Switch7_d = LCK_B.Switch15;
    } else {
      LCK_B.Switch7_d = LCK_B.Switch18;
    }

    /* End of Switch: '<S8>/Switch7' */

    /* Product: '<S8>/Product4' incorporates:
     *  Constant: '<S8>/EvaCoff'
     */
    LCK_B.Product4 = rtu_LCK_LanSigInputs->VID_Lane_Width *
      LCK_P_g.EvaCoff_Value;

    /* Sum: '<S8>/Subtract' */
    LCK_B.Subtract = LCK_B.Switch7_d + LCK_B.Product4;

    /* RelationalOperator: '<S152>/Relational Operator' incorporates:
     *  Constant: '<S152>/Constant6'
     */
    LCK_B.RelationalOperator_p = (rtu_LCK_VehSigInputs->LDWLKASwReq ==
      LCK_P_g.Constant6_Value_a);

    /* RelationalOperator: '<S244>/Relational Operator25' incorporates:
     *  Constant: '<S244>/Constant35'
     */
    LCK_B.RelationalOperator25 = (LCK_B.Saturation <
      k_LCK_SPPConfMedHigh_ProbThre);

    /* RelationalOperator: '<S244>/Relational Operator39' incorporates:
     *  Constant: '<S244>/Constant50'
     */
    LCK_B.RelationalOperator39 = (LCK_B.Saturation_k >=
      k_LCK_SPPConfMedHigh_ProbThre);

    /* RelationalOperator: '<S244>/Relational Operator42' incorporates:
     *  Constant: '<S244>/Constant61'
     */
    LCK_B.RelationalOperator42 = (LCK_P_g.Constant61_Value >
      rtu_LCK_LanSigInputs->VID_Lin_02_Type);

    /* RelationalOperator: '<S244>/Relational Operator41' incorporates:
     *  Constant: '<S244>/Constant55'
     */
    LCK_B.RelationalOperator41 = (rtu_LCK_LanSigInputs->VID_Lin_02_Type >
      LCK_P_g.Constant55_Value);

    /* Logic: '<S244>/Logical Operator24' */
    LCK_B.LogicalOperator24 = (LCK_B.RelationalOperator42 &&
      LCK_B.RelationalOperator41);

    /* Logic: '<S244>/Logical Operator15' */
    LCK_B.LogicalOperator15 = ((LCK_B.sf_signal_sustain_k.sustain_value != 0.0F)
      && LCK_B.RelationalOperator25 && LCK_B.RelationalOperator39 &&
      LCK_B.LogicalOperator24);

    /* Delay: '<S245>/Delay5' */
    LCK_B.Delay5_i = LCK_DW.Delay5_DSTATE_n;

    /* RelationalOperator: '<S245>/Relational Operator20' incorporates:
     *  Constant: '<S245>/Constant29'
     */
    LCK_B.RelationalOperator20_g = (LCK_B.Delay5_i == LCK_P_g.Constant29_Value_k);

    /* Logic: '<S245>/Logical Operator27' */
    LCK_B.LogicalOperator27 = (LCK_B.LogicalOperator15 &&
      LCK_B.RelationalOperator20_g);

    /* RelationalOperator: '<S244>/Relational Operator28' incorporates:
     *  Constant: '<S244>/Constant38'
     */
    LCK_B.RelationalOperator28 = (LCK_B.Saturation_k <
      k_LCK_SPPConfMedHigh_ProbThre);

    /* RelationalOperator: '<S244>/Relational Operator40' incorporates:
     *  Constant: '<S244>/Constant51'
     */
    LCK_B.RelationalOperator40 = (LCK_B.Saturation >=
      k_LCK_SPPConfMedHigh_ProbThre);

    /* RelationalOperator: '<S244>/Relational Operator44' incorporates:
     *  Constant: '<S244>/Constant63'
     */
    LCK_B.RelationalOperator44 = (LCK_P_g.Constant63_Value >
      rtu_LCK_LanSigInputs->VID_Lin_01_Type);

    /* RelationalOperator: '<S244>/Relational Operator43' incorporates:
     *  Constant: '<S244>/Constant62'
     */
    LCK_B.RelationalOperator43 = (rtu_LCK_LanSigInputs->VID_Lin_01_Type >
      LCK_P_g.Constant62_Value);

    /* Logic: '<S244>/Logical Operator31' */
    LCK_B.LogicalOperator31 = (LCK_B.RelationalOperator44 &&
      LCK_B.RelationalOperator43);

    /* Logic: '<S244>/Logical Operator16' */
    LCK_B.LogicalOperator16 = ((LCK_B.sf_signal_sustain_c.sustain_value != 0.0F)
      && LCK_B.RelationalOperator28 && LCK_B.RelationalOperator40 &&
      LCK_B.LogicalOperator31);

    /* Logic: '<S245>/Logical Operator28' */
    LCK_B.LogicalOperator28 = (LCK_B.RelationalOperator20_g &&
      LCK_B.LogicalOperator16);

    /* Logic: '<S239>/Logical Operator25' */
    LCK_B.LogicalOperator25 = (LCK_B.LogicalOperator27 ||
      LCK_B.LogicalOperator28);

    /* Switch: '<S239>/Switch7' incorporates:
     *  Constant: '<S239>/Constant59'
     */
    if (LCK_B.LogicalOperator25) {
      LCK_B.Switch7_f = LCK_P_g.Constant59_Value_j;
    } else {
      LCK_B.Switch7_f = LCK_B.Switch;
    }

    /* End of Switch: '<S239>/Switch7' */

    /* DataTypeConversion: '<S239>/Data Type Conversion' */
    LCK_B.DataTypeConversion_i = (real32_T)LCK_B.Switch7_f;

    /* Switch: '<S8>/Switch6' incorporates:
     *  Constant: '<S8>/Constant4'
     */
    if (LCK_B.Gain2_l > LCK_P_g.Switch6_Threshold_j) {
      LCK_B.Switch6_f = LCK_B.DataTypeConversion_i;
    } else {
      LCK_B.Switch6_f = (real32_T)LCK_P_g.Constant4_Value_h;
    }

    /* End of Switch: '<S8>/Switch6' */

    /* Switch: '<S8>/Switch13' incorporates:
     *  Constant: '<S8>/Constant6'
     */
    if (LCK_B.Switch1_i5) {
      LCK_B.Switch13 = (real32_T)LCK_P_g.Constant6_Value_b;
    } else {
      LCK_B.Switch13 = LCK_B.Switch6_f;
    }

    /* End of Switch: '<S8>/Switch13' */

    /* RelationalOperator: '<S170>/Relational Operator44' incorporates:
     *  Constant: '<S170>/Constant51'
     */
    LCK_B.RelationalOperator44_f = (LCK_B.Switch13 == LCK_P_g.Constant51_Value);

    /* DataTypeConversion: '<S170>/Data Type Conversion25' */
    LCK_B.DataTypeConversion25 = LCK_B.RelationalOperator44_f;

    /* RelationalOperator: '<S238>/Relational Operator6' incorporates:
     *  Constant: '<S238>/Constant10'
     */
    LCK_B.RelationalOperator6_e = (rtu_LCK_LanSigInputs->VID_Lin_01_Type ==
      LCK_P_g.Constant10_Value_h);

    /* RelationalOperator: '<S238>/Relational Operator7' incorporates:
     *  Constant: '<S238>/Constant11'
     */
    LCK_B.RelationalOperator7 = (rtu_LCK_LanSigInputs->VID_Lin_02_Type ==
      LCK_P_g.Constant11_Value_c);

    /* Logic: '<S238>/Logical Operator3' */
    LCK_B.LogicalOperator3 = (LCK_B.RelationalOperator6_e &&
      LCK_B.RelationalOperator7);

    /* RelationalOperator: '<S238>/Relational Operator10' incorporates:
     *  Constant: '<S238>/Constant15'
     */
    LCK_B.RelationalOperator10 = (LCK_P_g.Constant15_Value >
      rtu_LCK_LanSigInputs->VID_Lin_01_Type);

    /* RelationalOperator: '<S238>/Relational Operator8' incorporates:
     *  Constant: '<S238>/Constant13'
     */
    LCK_B.RelationalOperator8 = (rtu_LCK_LanSigInputs->VID_Lin_01_Type >
      LCK_P_g.Constant13_Value);

    /* Logic: '<S238>/Logical Operator4' */
    LCK_B.LogicalOperator4 = (LCK_B.RelationalOperator10 &&
      LCK_B.RelationalOperator8);

    /* RelationalOperator: '<S238>/Relational Operator9' incorporates:
     *  Constant: '<S238>/Constant16'
     */
    LCK_B.RelationalOperator9 = (LCK_P_g.Constant16_Value <=
      rtu_LCK_LanSigInputs->VID_Lin_02_Type);

    /* RelationalOperator: '<S238>/Relational Operator11' incorporates:
     *  Constant: '<S238>/Constant14'
     */
    LCK_B.RelationalOperator11 = (rtu_LCK_LanSigInputs->VID_Lin_02_Type ==
      LCK_P_g.Constant14_Value);

    /* Logic: '<S238>/Logical Operator5' */
    LCK_B.LogicalOperator5 = (LCK_B.RelationalOperator9 ||
      LCK_B.RelationalOperator11);

    /* Logic: '<S238>/Logical Operator6' */
    LCK_B.LogicalOperator6 = (LCK_B.LogicalOperator4 && LCK_B.LogicalOperator5);

    /* RelationalOperator: '<S238>/Relational Operator12' incorporates:
     *  Constant: '<S238>/Constant20'
     */
    LCK_B.RelationalOperator12 = (LCK_P_g.Constant20_Value >
      rtu_LCK_LanSigInputs->VID_Lin_02_Type);

    /* RelationalOperator: '<S238>/Relational Operator14' incorporates:
     *  Constant: '<S238>/Constant18'
     */
    LCK_B.RelationalOperator14 = (rtu_LCK_LanSigInputs->VID_Lin_02_Type >
      LCK_P_g.Constant18_Value);

    /* Logic: '<S238>/Logical Operator7' */
    LCK_B.LogicalOperator7 = (LCK_B.RelationalOperator12 &&
      LCK_B.RelationalOperator14);

    /* RelationalOperator: '<S238>/Relational Operator15' incorporates:
     *  Constant: '<S238>/Constant21'
     */
    LCK_B.RelationalOperator15 = (LCK_P_g.Constant21_Value <=
      rtu_LCK_LanSigInputs->VID_Lin_01_Type);

    /* RelationalOperator: '<S238>/Relational Operator13' incorporates:
     *  Constant: '<S238>/Constant19'
     */
    LCK_B.RelationalOperator13 = (rtu_LCK_LanSigInputs->VID_Lin_01_Type ==
      LCK_P_g.Constant19_Value);

    /* Logic: '<S238>/Logical Operator8' */
    LCK_B.LogicalOperator8 = (LCK_B.RelationalOperator15 ||
      LCK_B.RelationalOperator13);

    /* Logic: '<S238>/Logical Operator9' */
    LCK_B.LogicalOperator9 = (LCK_B.LogicalOperator7 && LCK_B.LogicalOperator8);

    /* RelationalOperator: '<S238>/Relational Operator16' incorporates:
     *  Constant: '<S238>/Constant25'
     */
    LCK_B.RelationalOperator16 = (LCK_P_g.Constant25_Value >
      rtu_LCK_LanSigInputs->VID_Lin_01_Type);

    /* RelationalOperator: '<S238>/Relational Operator18' incorporates:
     *  Constant: '<S238>/Constant23'
     */
    LCK_B.RelationalOperator18 = (rtu_LCK_LanSigInputs->VID_Lin_01_Type >
      LCK_P_g.Constant23_Value);

    /* Logic: '<S238>/Logical Operator10' */
    LCK_B.LogicalOperator10 = (LCK_B.RelationalOperator16 &&
      LCK_B.RelationalOperator18);

    /* RelationalOperator: '<S238>/Relational Operator19' incorporates:
     *  Constant: '<S238>/Constant26'
     */
    LCK_B.RelationalOperator19 = (LCK_P_g.Constant26_Value >
      rtu_LCK_LanSigInputs->VID_Lin_02_Type);

    /* RelationalOperator: '<S238>/Relational Operator17' incorporates:
     *  Constant: '<S238>/Constant24'
     */
    LCK_B.RelationalOperator17 = (rtu_LCK_LanSigInputs->VID_Lin_02_Type >
      LCK_P_g.Constant24_Value);

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
      LCK_B.Switch6_a = LCK_P_g.Constant27_Value;
    } else {
      LCK_B.Switch6_a = LCK_P_g.Constant28_Value;
    }

    /* End of Switch: '<S238>/Switch6' */

    /* Switch: '<S238>/Switch5' incorporates:
     *  Constant: '<S238>/Constant22'
     */
    if (LCK_B.LogicalOperator9) {
      LCK_B.Switch5_m = LCK_P_g.Constant22_Value;
    } else {
      LCK_B.Switch5_m = LCK_B.Switch6_a;
    }

    /* End of Switch: '<S238>/Switch5' */

    /* Switch: '<S238>/Switch4' incorporates:
     *  Constant: '<S238>/Constant17'
     */
    if (LCK_B.LogicalOperator6) {
      LCK_B.Switch4_c = LCK_P_g.Constant17_Value;
    } else {
      LCK_B.Switch4_c = LCK_B.Switch5_m;
    }

    /* End of Switch: '<S238>/Switch4' */

    /* Switch: '<S238>/Switch3' incorporates:
     *  Constant: '<S238>/Constant12'
     */
    if (LCK_B.LogicalOperator3) {
      LCK_B.Switch3_p = LCK_P_g.Constant12_Value;
    } else {
      LCK_B.Switch3_p = LCK_B.Switch4_c;
    }

    /* End of Switch: '<S238>/Switch3' */

    /* Switch: '<S239>/Switch8' incorporates:
     *  Constant: '<S239>/Constant60'
     */
    if (LCK_B.LogicalOperator25) {
      LCK_B.Switch8_j = LCK_P_g.Constant60_Value;
    } else {
      LCK_B.Switch8_j = LCK_B.Switch3_p;
    }

    /* End of Switch: '<S239>/Switch8' */

    /* DataTypeConversion: '<S239>/Data Type Conversion1' */
    LCK_B.DataTypeConversion1_a = (real32_T)LCK_B.Switch8_j;

    /* Switch: '<S8>/Switch8' incorporates:
     *  Constant: '<S8>/Constant5'
     */
    if (LCK_B.Gain2_l > LCK_P_g.Switch8_Threshold_l) {
      LCK_B.Switch8_i = LCK_B.DataTypeConversion1_a;
    } else {
      LCK_B.Switch8_i = (real32_T)LCK_P_g.Constant5_Value_m;
    }

    /* End of Switch: '<S8>/Switch8' */

    /* Switch: '<S8>/Switch14' incorporates:
     *  Constant: '<S8>/Constant7'
     */
    if (LCK_B.Switch1_i5) {
      *rty_SPP_Type = (real32_T)LCK_P_g.Constant7_Value_n;
    } else {
      *rty_SPP_Type = LCK_B.Switch8_i;
    }

    /* End of Switch: '<S8>/Switch14' */

    /* RelationalOperator: '<S164>/Relational Operator202' incorporates:
     *  Constant: '<S164>/Constant4'
     */
    LCK_B.RelationalOperator202 = (*rty_SPP_Type != TJA_SP_TYPE_POONLY);

    /* Logic: '<S164>/Logical Operator150' incorporates:
     *  Constant: '<S164>/Constant7'
     */
    LCK_B.LogicalOperator150 = (LCK_B.RelationalOperator202 ||
      (k_LCK_Enable_POOnly != 0.0F));

    /* RelationalOperator: '<S164>/Relational Operator24' incorporates:
     *  Constant: '<S164>/k_LCK_SPTyp_UpLmt_Idl2Rdy1'
     */
    LCK_B.RelationalOperator24_g = (*rty_SPP_Type <= k_LCK_SPTyp_UpLmt_Idl2Rdy);

    /* RelationalOperator: '<S164>/Relational Operator43' incorporates:
     *  Constant: '<S164>/k_LCK_SPTyp_LowLmt_Idl2Rdy1'
     */
    LCK_B.RelationalOperator43_j = (*rty_SPP_Type >= k_LCK_SPTyp_LowLmt_Idl2Rdy);

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
     */
    LCK_B.RelationalOperator28_k = (TJA_SP_TYPE_BLMONLY == *rty_SPP_Type);

    /* RelationalOperator: '<S164>/Relational Operator50' incorporates:
     *  Constant: '<S164>/Constant60'
     */
    LCK_B.RelationalOperator50 = (*rty_SPP_Type == TJA_SP_TYPE_POBLM);

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
     */
    LCK_B.RelationalOperator9_c = (rtu_LCK_LanSigInputs->VID_Lane_Width >=
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
     */
    LCK_B.RelationalOperator10_c = (rtu_LCK_LanSigInputs->VID_Lane_Width <=
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
    LCK_B.DataTypeConversion2_l = (real32_T)LCK_P_g.AVP_C2_Coff_Value;

    /* Product: '<S8>/Product2' */
    LCK_B.Product2 = rtu_AVP_Info->Tractory_c2 * LCK_B.DataTypeConversion2_l;

    /* Switch: '<S8>/Switch17' */
    if (LCK_B.sf_signal_sustain_e.sustain_value > LCK_P_g.Switch17_Threshold) {
      LCK_B.Switch17_e = LCK_B.PO_A2_Hold;
    } else {
      LCK_B.Switch17_e = *rtu_Fus_Lane_Info_primaryOb_kaa;
    }

    /* End of Switch: '<S8>/Switch17' */

    /* Sum: '<S246>/Sum2' */
    LCK_B.Sum2_b = rtu_LCK_LanSigInputs->VID_Lin_01_A2 +
      rtu_LCK_LanSigInputs->VID_Lin_02_A2;

    /* Gain: '<S246>/Gain2' */
    LCK_B.Gain2 = LCK_P_g.Gain2_Gain * LCK_B.Sum2_b;

    /* Switch: '<S246>/Switch14' */
    if (LCK_B.RelationalOperator2_b) {
      LCK_B.Switch14 = rtu_LCK_LanSigInputs->VID_Lin_01_A2;
    } else {
      LCK_B.Switch14 = LCK_B.Gain2;
    }

    /* End of Switch: '<S246>/Switch14' */

    /* Switch: '<S246>/Switch13' */
    if (LCK_B.RelationalOperator1_mz) {
      LCK_B.Switch13_o = rtu_LCK_LanSigInputs->VID_Lin_02_A2;
    } else {
      LCK_B.Switch13_o = LCK_B.Switch14;
    }

    /* End of Switch: '<S246>/Switch13' */

    /* Switch: '<S8>/Switch2' */
    if (LCK_B.Gain2_l > LCK_P_g.Switch2_Threshold_h) {
      LCK_B.Switch2_b = LCK_B.Switch17_e;
    } else {
      LCK_B.Switch2_b = LCK_B.Switch13_o;
    }

    /* End of Switch: '<S8>/Switch2' */

    /* Switch: '<S8>/Switch11' */
    if (LCK_B.Switch1_i5) {
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
    LCK_B.Divide = LCK_P_g.Constant4_Value_e / k_LCK_LM_ROC_Idl2Rdy;

    /* Gain: '<S167>/Gain' */
    LCK_B.Gain = LCK_P_g.Gain_Gain * LCK_B.Divide;

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

    /* Sum: '<S141>/Sum' */
    LCK_B.Sum_f = rtu_LCK_VehSigInputs->Steer_Torq - LCK_B.UnitDelay_n;

    /* Product: '<S141>/Product' */
    LCK_B.Product_i = LCK_B.Product1_p * LCK_B.Sum_f;

    /* Saturate: '<S141>/Saturation' incorporates:
     *  Sum: '<S141>/Sum1'
     */
    LCK_B.Sum1_p = LCK_B.Product_i + LCK_B.UnitDelay_n;
    if (LCK_B.Sum1_p > LCK_P_g.Saturation_UpperSat_cp) {
      LCK_B.Saturation_b = LCK_P_g.Saturation_UpperSat_cp;
    } else if (LCK_B.Sum1_p < LCK_P_g.Saturation_LowerSat_n) {
      LCK_B.Saturation_b = LCK_P_g.Saturation_LowerSat_n;
    } else {
      LCK_B.Saturation_b = LCK_B.Sum1_p;
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
      LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKU_g = LCK_IN_Standby_oa;
      LCK_DW.i_m = 0.0F;
    } else if (LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKU_g == LCK_IN_Hold_o) {
      if ((LCK_B.Switch13_b != 0.0F) && (LCK_DW.i_m < k_hands_on_wheel_hold_msec)
          && (!(C_ZERO != 0.0F))) {
        LCK_DW.i_m = 0.0F;
        LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKU_g = LCK_IN_Hold_o;
        LCK_B.sustain_value_p = LCK_B.Switch13_b;
      } else if ((LCK_DW.i_m >= k_hands_on_wheel_hold_msec) || (C_ZERO != 0.0F))
      {
        LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKU_g = LCK_IN_Standby_oa;
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
    LCK_B.f_hands_on_wheel = LCK_P_g.Gain_Gain_n * LCK_B.sustain_value_p;

    /* DataTypeConversion: '<S167>/Data Type Conversion11' */
    LCK_B.DataTypeConversion11 = LCK_B.f_hands_on_wheel;

    /* Chart: '<S189>/Delay_Trig' incorporates:
     *  Constant: '<S167>/k_LCK_HndsOnWhel_DlyTm_Idl2Rdy'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion11, k_LCK_HndsOnWhel_DlyTm_Idl2Rdy,
                   &LCK_B.sf_Delay_Trig_bq, &LCK_DW.sf_Delay_Trig_bq);

    /* Abs: '<S167>/Abs' */
    LCK_B.Abs_e = (real32_T)fabs(rtu_LCK_VehSigInputs->Veh_Yaw_Rate);

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
     */
    LCK_B.Product_p = rtu_LCK_VehSigInputs->Vehicle_Speed *
      k_LCK_Rng2VehSpd_Ratio_Thr;

    /* RelationalOperator: '<S165>/Relational Operator213' */
    LCK_B.RelationalOperator213 = (rtu_LCK_LanSigInputs->VID_Lin_01_Range <=
      LCK_B.Product_p);

    /* RelationalOperator: '<S165>/Relational Operator216' */
    LCK_B.RelationalOperator216 = (LCK_B.Product_p >=
      rtu_LCK_LanSigInputs->VID_Lin_02_Range);

    /* RelationalOperator: '<S165>/Relational Operator217' incorporates:
     *  Constant: '<S165>/k_LCK_LowRng_Spd_Thr'
     */
    LCK_B.RelationalOperator217 = (rtu_LCK_VehSigInputs->Vehicle_Speed >=
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
     */
    LCK_B.RelationalOperator2_o = (rtu_LCK_VehSigInputs->Vehicle_Speed <=
      k_LCK_VehSpd_Uplmt_Idl2Rdy);

    /* Switch: '<S166>/Switch5' incorporates:
     *  Constant: '<S111>/Constant19'
     *  Constant: '<S166>/Constant19'
     *  Constant: '<S166>/k_LCK_VisionOnly'
     */
    if (k_LCK_VisionOnly >= LCK_P_g.Switch5_Threshold) {
      LCK_B.Switch5_k = LCK_P_g.Constant19_Value_i;
    } else {
      LCK_B.Switch5_k = LCK_P_g.Constant19_Value_e;
    }

    /* End of Switch: '<S166>/Switch5' */

    /* Switch: '<S167>/Switch77' incorporates:
     *  Constant: '<S167>/k_LCK_VehSpd_LowLmtFus_Idl2Rdy'
     *  Constant: '<S167>/k_LCK_VehSpd_LowlmtVis_Idl2Rdy'
     */
    if (LCK_B.Switch5_k >= LCK_P_g.Switch77_Threshold) {
      LCK_B.Switch77 = k_LCK_VehSpd_LowLmtFus_Idl2Rdy;
    } else {
      LCK_B.Switch77 = k_LCK_VehSpd_LowlmtVis_Idl2Rdy;
    }

    /* End of Switch: '<S167>/Switch77' */

    /* RelationalOperator: '<S167>/Relational Operator15' */
    LCK_B.RelationalOperator15_d = (rtu_LCK_VehSigInputs->Vehicle_Speed >=
      LCK_B.Switch77);

    /* Logic: '<S167>/Logical Operator44' */
    LCK_B.LogicalOperator44 = (LCK_B.RelationalOperator2_o &&
      LCK_B.RelationalOperator15_d);

    /* Gain: '<S191>/Gain 0' */
    LCK_B.Gain0 = (uint16_T)(LCK_B.LogicalOperator44 ? (int32_T)c_BIT0 : 0);

    /* RelationalOperator: '<S167>/Relational Operator4' incorporates:
     *  Constant: '<S167>/k_LCK_VehSpd_TJA_ICA_Bound'
     */
    LCK_B.RelationalOperator4_e = (rtu_LCK_VehSigInputs->Vehicle_Speed <=
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
    velocity_ms = floor((real_T)c_BIT5 * LCK_P_g.Constant4_Value_jf);
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
    velocity_ms = floor((real_T)c_BIT8 * LCK_P_g.Constant1_Value_a);
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
    velocity_ms = floor((real_T)c_BIT9 * LCK_P_g.Constant5_Value_a);
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
    velocity_ms = floor((real_T)c_BIT10 * LCK_P_g.Constant2_Value_d);
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
    velocity_ms = floor((real_T)c_BIT11 * LCK_P_g.Constant11_Value_k);
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
    velocity_ms = floor((real_T)c_BIT12 * LCK_P_g.Constant16_Value_b);
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
    velocity_ms = floor((real_T)c_BIT13 * LCK_P_g.Constant3_Value_ob);
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
    velocity_ms = floor((real_T)c_BIT14 * LCK_P_g.Constant9_Value_e);
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
    velocity_ms = floor((real_T)c_BIT15 * LCK_P_g.Constant15_Value_p);
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
    LCK_B.RelationalOperator8_d = (LCK_B.Switch13 == LCK_P_g.Constant50_Value);

    /* DataTypeConversion: '<S170>/Data Type Conversion16' */
    LCK_B.DataTypeConversion16_l = LCK_B.RelationalOperator8_d;

    /* Chart: '<S217>/Delay_Trig' incorporates:
     *  Constant: '<S170>/k_LCK_SPconfInvld_DlyTm_Rdy2Idl'
     */
    LCK_Delay_Trig(LCK_B.DataTypeConversion16_l, k_LCK_SPconfInvld_DlyTm_Rdy2Idl,
                   &LCK_B.sf_Delay_Trig_m4, &LCK_DW.sf_Delay_Trig_m4);

    /* MinMax: '<S159>/MinMax3' */
    vxs = rtu_LCK_LanSigInputs->VID_Lin_01_Range;
    LCK_B.MinMax3 = rtu_LCK_LanSigInputs->VID_Lin_02_Range;
    if ((vxs < LCK_B.MinMax3) || rtIsNaNF(LCK_B.MinMax3)) {
      LCK_B.MinMax3 = vxs;
    }

    /* End of MinMax: '<S159>/MinMax3' */

    /* Switch: '<S159>/Switch67' incorporates:
     *  Constant: '<S111>/Constant1'
     *  Constant: '<S159>/k_LCK_UseSP_MaxRange'
     */
    if (k_LCK_UseSP_MaxRange >= LCK_P_g.Switch67_Threshold) {
      LCK_B.Switch67 = LCK_P_g.Constant1_Value_l;
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
     */
    LCK_B.RelationalOperator207 = (TJA_SP_TYPE_BLMONLY == *rty_SPP_Type);

    /* Logic: '<S159>/Logical Operator155' */
    LCK_B.LogicalOperator155 = !LCK_B.RelationalOperator207;

    /* DataTypeConversion: '<S159>/Data Type Conversion88' */
    LCK_B.DataTypeConversion88 = LCK_B.LogicalOperator155;

    /* Chart: '<S178>/signal_sustain' incorporates:
     *  Constant: '<S159>/k_LCK_Junc_SusTime'
     */
    if (LCK_DW.is_active_c106_sBhctwPzzXYJVM5h == 0U) {
      LCK_DW.is_active_c106_sBhctwPzzXYJVM5h = 1U;
      LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKUwD = LCK_IN_Standby_oa;
      LCK_DW.i_p = 0.0F;
    } else if (LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKUwD == LCK_IN_Hold_o) {
      if ((LCK_B.sf_Delay_Trig_f.Delay_Trig != 0.0F) && (LCK_DW.i_p <
           k_LCK_Junc_SusTime) && (!(LCK_B.DataTypeConversion88 != 0.0F))) {
        LCK_DW.i_p = 0.0F;
        LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKUwD = LCK_IN_Hold_o;
        LCK_B.sustain_value = LCK_B.sf_Delay_Trig_f.Delay_Trig;
      } else if ((LCK_DW.i_p >= k_LCK_Junc_SusTime) ||
                 (LCK_B.DataTypeConversion88 != 0.0F)) {
        LCK_DW.is_c106_sBhctwPzzXYJVM5hCuWKUwD = LCK_IN_Standby_oa;
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
     */
    LCK_B.RelationalOperator204 = (TJA_SP_TYPE_BLMONLY == *rty_SPP_Type);

    /* RelationalOperator: '<S159>/Relational Operator208' incorporates:
     *  Constant: '<S159>/k_LCK_MinJunction_Range'
     */
    LCK_B.RelationalOperator208 = (LCK_B.Switch67 < k_LCK_MinJunction_Range);

    /* Logic: '<S159>/Logical Operator157' */
    LCK_B.LogicalOperator157 = (LCK_B.RelationalOperator204 &&
      LCK_B.RelationalOperator208 && (LCK_B.sustain_value != 0.0F));

    /* Lookup_n-D: '<S170>/k_LCK_SPconfLow_DlyTm_Rdy2Idl_Table' */
    LCK_B.k_LCK_SPconfLow_DlyTm_Rdy2Idl_T = look1_iflf_binlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_LCK_SPconfLow_DlyTm_Rdy2Idl_x,
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
    if (k_Use_Constant_SPP_Timer > LCK_P_g.Switch63_Threshold) {
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
    LCK_B.RelationalOperator45_g = (LCK_B.Switch13 == LCK_P_g.Constant52_Value);

    /* DataTypeConversion: '<S170>/Data Type Conversion26' */
    LCK_B.DataTypeConversion26 = LCK_B.RelationalOperator45_g;

    /* Lookup_n-D: '<S170>/k_LCK_SPconfMed_DlyTm_Rdy2Idl_Table' */
    LCK_B.k_LCK_SPconfMed_DlyTm_Rdy2Idl_T = look1_iflf_binlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_LCK_SPconfMed_DlyTm_Rdy2Idl_x,
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
    if (k_Use_Constant_SPP_Timer > LCK_P_g.Switch64_Threshold) {
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
     */
    LCK_B.RelationalOperator20_d = (rtu_LCK_LanSigInputs->VID_Lane_Width <
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
     */
    LCK_B.RelationalOperator21 = (rtu_LCK_LanSigInputs->VID_Lane_Width >
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
    LCK_B.Divide_g = LCK_P_g.Constant4_Value_i / k_LCK_LM_ROC_Rdy2Idl;

    /* Gain: '<S169>/Gain' */
    LCK_B.Gain_h = LCK_P_g.Gain_Gain_f * LCK_B.Divide_g;

    /* RelationalOperator: '<S169>/Relational Operator22' */
    LCK_B.RelationalOperator22 = (LCK_B.Abs_a >= LCK_B.Gain_h);

    /* RelationalOperator: '<S169>/Relational Operator1' incorporates:
     *  Constant: '<S169>/k_LCK_LowRng_Spd_Thr1'
     */
    LCK_B.RelationalOperator1_l = (rtu_LCK_VehSigInputs->Vehicle_Speed >=
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

    /* Abs: '<S172>/Abs17' */
    LCK_B.Abs17 = (real32_T)fabs(rtu_LCK_VehSigInputs->Veh_Yaw_Rate);

    /* Gain: '<S172>/Gain17' */
    LCK_B.Gain17 = LCK_P_g.Gain17_Gain * LCK_B.Switch11_h;

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
    LCK_B.Divide_c = LCK_P_g.Constant54_Value_f / LCK_B.MinMax;

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
     */
    LCK_B.RelationalOperator14_b = (rtu_LCK_VehSigInputs->Vehicle_Speed >
      k_LCK_VehSpd_Uplmt_Rdy2Idl);

    /* Switch: '<S169>/Switch11' incorporates:
     *  Constant: '<S169>/k_LCK_VehSpd_LowLmtFus_Rdy2Idl'
     *  Constant: '<S169>/k_LCK_VehSpd_LowlmtVis_Rdy2Idl'
     */
    if (LCK_B.Switch5_k >= LCK_P_g.Switch11_Threshold) {
      LCK_B.Switch11 = LCK_P_g.k_LCK_VehSpd_LowLmtFus_Rdy2Idl_;
    } else {
      LCK_B.Switch11 = k_LCK_VehSpd_LowlmtVis_Rdy2Idl;
    }

    /* End of Switch: '<S169>/Switch11' */

    /* RelationalOperator: '<S169>/Relational Operator18' */
    LCK_B.RelationalOperator18_i = (rtu_LCK_VehSigInputs->Vehicle_Speed <
      LCK_B.Switch11);

    /* Logic: '<S169>/Logical Operator45' */
    LCK_B.LogicalOperator45 = (LCK_B.RelationalOperator14_b ||
      LCK_B.RelationalOperator18_i);

    /* Gain: '<S211>/Gain 0' */
    LCK_B.Gain0_k = (uint16_T)(LCK_B.LogicalOperator45 ? (int32_T)c_BIT0 : 0);

    /* Logic: '<S8>/Logical Operator' */
    LCK_B.LogicalOperator_c = ((LCK_B.Gain2_l != 0) || LCK_B.Switch1_i5);

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
    if (k_LCK_VisionOnly >= LCK_P_g.Switch8_Threshold) {
      LCK_B.Switch8_h = LCK_P_g.Constant22_Value_d;
    } else {
      LCK_B.Switch8_h = LCK_B.LogicalOperator27_i;
    }

    /* End of Switch: '<S169>/Switch8' */

    /* RelationalOperator: '<S169>/Relational Operator7' incorporates:
     *  Constant: '<S169>/k_LCK_VehSpd_TJA_ICA_Bound1'
     */
    LCK_B.RelationalOperator7_g = (rtu_LCK_VehSigInputs->Vehicle_Speed <=
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
    if (LCK_B.LogicalOperator_c) {
      LCK_B.Switch1_h = LCK_P_g.Constant5_Value_o;
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
    velocity_ms = floor((real_T)c_BIT4 * LCK_P_g.Constant3_Value_b);
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
    LCK_B.LogicalOperator1_fv = !(LCK_P_g.Constant4_Value_jf != 0.0);

    /* Logic: '<S169>/Logical Operator46' incorporates:
     *  Constant: '<S111>/Constant3'
     */
    LCK_B.LogicalOperator46 = !LCK_P_g.Constant3_Value_pd;

    /* Logic: '<S169>/Logical Operator47' */
    LCK_B.LogicalOperator47 = (LCK_B.LogicalOperator1_fv &&
      LCK_B.LogicalOperator46);

    /* Gain: '<S211>/Gain5' */
    LCK_B.Gain5_h = (uint16_T)(LCK_B.LogicalOperator47 ? (int32_T)c_BIT5 : 0);

    /* RelationalOperator: '<S169>/Relational Operator27' incorporates:
     *  Constant: '<S169>/Constant55'
     */
    LCK_B.RelationalOperator27_k = (rtu_LCK_VehSigInputs->LKATrqOvrlTrqDStat ==
      LCK_P_g.Constant55_Value_h);

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
    if (LCK_B.LogicalOperator_c) {
      LCK_B.Switch2_c = LCK_P_g.Constant6_Value_o;
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
    velocity_ms = floor((real_T)c_BIT9 * LCK_P_g.Constant1_Value_c);
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
    velocity_ms = floor((real_T)c_BIT10 * LCK_P_g.Constant2_Value_a);
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
    velocity_ms = floor((real_T)c_BIT11 * LCK_P_g.Constant18_Value_c);
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
    velocity_ms = floor((real_T)c_BIT12 * LCK_P_g.Constant24_Value_k);
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
    velocity_ms = floor((real_T)c_BIT13 * LCK_P_g.Constant8_Value_p);
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
    velocity_ms = floor((real_T)c_BIT14 * LCK_P_g.Constant10_Value_f);
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
    velocity_ms = floor((real_T)c_BIT15 * LCK_P_g.Constant29_Value_e);
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

    /* Chart: '<S153>/Chart' */
    if (LCK_DW.is_active_c6_LCK == 0U) {
      LCK_DW.is_active_c6_LCK = 1U;
      LCK_DW.is_c6_LCK = LCK_IN_TJA_Lat_Req_Reset;
      LCK_B.TJA_Lat_Req = 0.0;
    } else if (LCK_DW.is_c6_LCK == LCK_IN_TJA_Lat_Req_Reset) {
      LCK_B.TJA_Lat_Req = 0.0;
      if (*rtu_TJA_State == 3.0F) {
        LCK_DW.is_c6_LCK = LCK_IN_TJA_Lat_Req_Set;
        LCK_B.TJA_Lat_Req = 1.0;
      }
    } else {
      LCK_B.TJA_Lat_Req = 1.0;
      sf_internal_predicateOutput = ((*rtu_TJA_State < 3.0F) || (*rtu_TJA_State ==
        5.0F));
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
     */
    LCK_B.RelationalOperator1_h = (*rtu_ZOP_LCK_Activate ==
      LCK_P_g.Constant1_Value_co);

    /* Logic: '<S153>/Logical Operator' */
    LCK_B.LogicalOperator_l = (LCK_B.DataTypeConversion89_m ||
      LCK_B.RelationalOperator1_h);

    /* Chart: '<S160>/LCK_TJA_LatRq_Manager' incorporates:
     *  Constant: '<S160>/Constant1'
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
        if (LCK_B.RelationalOperator_p && (rtu_LCK_VehSigInputs->Vehicle_Speed >=
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
      if ((!LCK_B.RelationalOperator_p) || (rtu_LCK_VehSigInputs->Vehicle_Speed <
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
      if ((!LCK_B.LogicalOperator_l) && LCK_B.RelationalOperator_p &&
          (rtu_LCK_VehSigInputs->Vehicle_Speed >= k_LCK_TJALCK_SWSpeed)) {
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
    /* Lookup_n-D: '<S112>/k_LCK_ovrd_torq_thold_per_spd' */
    LCK_B.k_LCK_ovrd_torq_thold_per_spd = look1_iflf_linlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_LCK_ovrd_torq_thold_per_spd_x,
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
    LCK_B.Gain_do = LCK_P_g.Gain_Gain_p * LCK_B.Switch_d;

    /* Switch: '<S112>/Switch3' incorporates:
     *  Constant: '<S112>/Constant10'
     *  Constant: '<S112>/Constant15'
     */
    if (k_Ovrd_torq_thold_per_spd_sw >= LCK_P_g.Switch3_Threshold) {
      LCK_B.Switch3_c = LCK_B.Gain_do;
    } else {
      LCK_B.Switch3_c = k_override_right_torq_thold;
    }

    /* End of Switch: '<S112>/Switch3' */

    /* RelationalOperator: '<S112>/Relational Operator6' */
    LCK_B.RelationalOperator6_b = (rtu_LCK_VehSigInputs->Steer_Torq <=
      LCK_B.Switch3_c);

    /* DataTypeConversion: '<S112>/Data Type Conversion1' */
    LCK_B.DataTypeConversion1_d = LCK_B.RelationalOperator6_b;

    /* Delay: '<S112>/Delay1' */
    LCK_B.Delay1_el = LCK_DW.Delay1_DSTATE_k;

    /* Switch: '<S112>/Switch2' incorporates:
     *  Constant: '<S112>/Constant14'
     *  Constant: '<S112>/Constant7'
     */
    if (k_Ovrd_torq_thold_per_spd_sw >= LCK_P_g.Switch2_Threshold) {
      LCK_B.Switch2_a = LCK_B.Switch_d;
    } else {
      LCK_B.Switch2_a = k_override_left_torq_thold;
    }

    /* End of Switch: '<S112>/Switch2' */

    /* RelationalOperator: '<S112>/Relational Operator3' */
    LCK_B.RelationalOperator3_m4 = (rtu_LCK_VehSigInputs->Steer_Torq >=
      LCK_B.Switch2_a);

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
    LCK_B.RelationalOperator1_lx = (LCK_B.Delay_b > LCK_P_g.Constant1_Value);

    /* Logic: '<S112>/Logical Operator1' */
    LCK_B.LogicalOperator1_ch = (LCK_B.RelationalOperator1_lx &&
      (LCK_B.sustain_value_out_a != 0.0F));

    /* DataTypeConversion: '<S112>/Data Type Conversion4' */
    LCK_B.DataTypeConversion4_l = LCK_B.LogicalOperator1_ch;

    /* RelationalOperator: '<S112>/Relational Operator' incorporates:
     *  Constant: '<S112>/Constant'
     */
    LCK_B.RelationalOperator_g = (LCK_B.Delay_b < LCK_P_g.Constant_Value);

    /* Logic: '<S112>/Logical Operator' */
    LCK_B.LogicalOperator_ew = (LCK_B.RelationalOperator_g &&
      (LCK_B.sustain_value_out != 0.0F));

    /* DataTypeConversion: '<S112>/Data Type Conversion3' */
    LCK_B.DataTypeConversion3_h = LCK_B.LogicalOperator_ew;

    /* End of Outputs for SubSystem: '<S109>/Det_Driver_Steer_Override' */

    /* Chart: '<S119>/Sustain_wo_reset' incorporates:
     *  Constant: '<S113>/k_brake_suprress_hold'
     */
    LCK_Sustain_wo_reset(&rtu_LCK_VehSigInputs->BrkPedalApplied,
                         k_brake_suprress_hold, &LCK_B.sf_Sustain_wo_reset,
                         &LCK_DW.sf_Sustain_wo_reset);

    /* RelationalOperator: '<S113>/Relational Operator' incorporates:
     *  Constant: '<S113>/LEFT_TURN_SIGNAL'
     */
    LCK_B.RelationalOperator_c = (rtu_LCK_VehSigInputs->DirectionIndSwitchPos ==
      LEFT_TURN_SIGNAL);

    /* Chart: '<S120>/Sustain_wo_reset' incorporates:
     *  Constant: '<S113>/k_turn_suprress_hold'
     */
    LCK_Sustain_wo_reset_o(LCK_B.RelationalOperator_c, k_turn_suprress_hold,
      &LCK_B.sf_Sustain_wo_reset_o, &LCK_DW.sf_Sustain_wo_reset_o);

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

    /* Sum: '<S147>/Sum' */
    LCK_B.Sum_kz = rtu_LCK_VehSigInputs->Steer_Spd - LCK_B.UnitDelay_nc;

    /* Product: '<S147>/Product' */
    LCK_B.Product_kb = LCK_B.Product1_dm * LCK_B.Sum_kz;

    /* Saturate: '<S147>/Saturation' incorporates:
     *  Sum: '<S147>/Sum1'
     */
    LCK_B.Sum1_hk = LCK_B.Product_kb + LCK_B.UnitDelay_nc;
    if (LCK_B.Sum1_hk > LCK_P_g.Saturation_UpperSat) {
      LCK_B.Saturation_p = LCK_P_g.Saturation_UpperSat;
    } else if (LCK_B.Sum1_hk < LCK_P_g.Saturation_LowerSat) {
      LCK_B.Saturation_p = LCK_P_g.Saturation_LowerSat;
    } else {
      LCK_B.Saturation_p = LCK_B.Sum1_hk;
    }

    /* End of Saturate: '<S147>/Saturation' */

    /* Abs: '<S116>/Abs2' */
    LCK_B.Abs2_p = (real32_T)fabs(LCK_B.Saturation_p);

    /* Lookup_n-D: '<S116>/LCK_Steer_angel_CR_threshold_LUT' */
    LCK_B.LCK_Steer_angel_CR_threshold_LU = look1_iflf_linlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_StrAng_CR_threshold_x,
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

    /* Lookup_n-D: '<S116>/Steer_angel_CR_threshold_LUT' */
    LCK_B.Steer_angel_CR_threshold_LUT = look1_iflf_linlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_StrAng_CR_threshold_x,
       k_StrAng_CR_threshold_z, 6U);

    /* Lookup_n-D: '<S116>/Steer_angel_CR_threshold_hs_LUT' */
    LCK_B.Steer_angel_CR_threshold_hs_LUT = look1_iflf_linlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_StrAng_CR_threshold_x,
       k_hs_StrAng_CR_threshold_z, 6U);

    /* Lookup_n-D: '<S116>/Steer_angel_CR_threshold_ls_LUT' */
    LCK_B.Steer_angel_CR_threshold_ls_LUT = look1_iflf_linlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_StrAng_CR_threshold_x,
       k_ls_StrAng_CR_threshold_z, 6U);

    /* MultiPortSwitch: '<S116>/Multiport Switch' incorporates:
     *  Constant: '<S116>/LSS_SnvtySet'
     */
    switch ((int32_T)LCK_P_g.LSS_SnvtySet_Value_o) {
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
    /* Lookup_n-D: '<S115>/accel_pedal_pos_per_speed' */
    LCK_B.accel_pedal_pos_per_speed = look1_iflf_linlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_accel_pedal_pos_per_speed_x,
       k_accel_pedal_pos_per_speed_z, 12U);

    /* Sum: '<S115>/Add2' */
    LCK_B.Add2_l = rtu_LCK_VehSigInputs->AccPedalPosition -
      LCK_B.accel_pedal_pos_per_speed;

    /* RelationalOperator: '<S115>/Relational Operator3' incorporates:
     *  Constant: '<S115>/k_LCK_accel_inhibit_thold'
     */
    LCK_B.RelationalOperator3_j = (LCK_B.Add2_l > k_LCK_accel_inhibit_thold);

    /* RelationalOperator: '<S115>/Relational Operator1' incorporates:
     *  Constant: '<S115>/Constant11'
     */
    LCK_B.RelationalOperator1_ip = (rtu_LCK_VehSigInputs->Gear_Pos ==
      LCK_P_g.Constant11_Value);

    /* Logic: '<S115>/Logical Operator2' */
    LCK_B.LogicalOperator2_c = (LCK_B.RelationalOperator1_ip &&
      LCK_B.RelationalOperator3_j);
    LCK_B.LSS_SnvtySet = LCK_P_g.LSS_SnvtySet_Value;

    /* End of Outputs for SubSystem: '<S109>/Filter_Accel_Pedal' */

    /* RelationalOperator: '<S113>/Relational Operator16' incorporates:
     *  Constant: '<S113>/C_ZERO3'
     *  Constant: '<S115>/LSS_SnvtySet'
     */
    LCK_B.RelationalOperator16_b = (rtu_LCK_VehSigInputs->Steer_Ang > C_ZERO);

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
     */
    LCK_Sustain_wo_reset(&rtu_LCK_VehSigInputs->BrkPedalApplied,
                         k_brake_suprress_hold, &LCK_B.sf_Sustain_wo_reset_p,
                         &LCK_DW.sf_Sustain_wo_reset_p);

    /* RelationalOperator: '<S113>/Relational Operator1' incorporates:
     *  Constant: '<S113>/RIGHT_TURN_SIGNAL'
     */
    LCK_B.RelationalOperator1_o = (rtu_LCK_VehSigInputs->DirectionIndSwitchPos ==
      RIGHT_TURN_SIGNAL);

    /* Chart: '<S125>/Sustain_wo_reset' incorporates:
     *  Constant: '<S113>/k_turn_suprress_hold'
     */
    LCK_Sustain_wo_reset_o(LCK_B.RelationalOperator1_o, k_turn_suprress_hold,
      &LCK_B.sf_Sustain_wo_reset_ce, &LCK_DW.sf_Sustain_wo_reset_ce);

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
     */
    LCK_B.RelationalOperator17_o = (rtu_LCK_VehSigInputs->Steer_Ang < C_ZERO);

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

    /* Chart: '<S242>/IntelligentEvasionSM' */
    if (LCK_DW.is_active_c10_LCK == 0U) {
      LCK_DW.is_active_c10_LCK = 1U;
      LCK_DW.is_c10_LCK = LCK_IN_IntEvaOff;
      LCK_B.IntEvaSta = 0.0F;
    } else if (LCK_DW.is_c10_LCK == LCK_IN_IntEvaOff) {
      LCK_B.IntEvaSta = 0.0F;
      if (rtu_LCK_VehSigInputs->Vehicle_Speed >= k_IntEvaSpdOn) {
        LCK_DW.is_c10_LCK = LCK_IN_IntEvaOn;
        LCK_B.IntEvaSta = 1.0F;
      }
    } else {
      LCK_B.IntEvaSta = 1.0F;
      if (rtu_LCK_VehSigInputs->Vehicle_Speed < k_IntEvaSpdOn - 15.0F) {
        LCK_DW.is_c10_LCK = LCK_IN_IntEvaOff;
        LCK_B.IntEvaSta = 0.0F;
      }
    }

    /* End of Chart: '<S242>/IntelligentEvasionSM' */

    /* Switch: '<S242>/Switch19' incorporates:
     *  Constant: '<S242>/Constant8'
     */
    if (LCK_B.IntEvaSta > LCK_P_g.Switch19_Threshold) {
      LCK_B.Switch19_of = *rtu_Lane_Bias_Flag;
    } else {
      LCK_B.Switch19_of = LCK_P_g.Constant8_Value_pt;
    }

    /* End of Switch: '<S242>/Switch19' */

    /* RelationalOperator: '<S8>/Relational Operator3' incorporates:
     *  Constant: '<S8>/Constant2'
     */
    LCK_B.RelationalOperator3_k = (LCK_B.Switch19_of ==
      LCK_P_g.Constant2_Value_az);

    /* Product: '<S8>/Product5' incorporates:
     *  Constant: '<S8>/EvaCoff1'
     */
    LCK_B.Product5 = rtu_LCK_LanSigInputs->VID_Lane_Width *
      LCK_P_g.EvaCoff1_Value;

    /* Sum: '<S8>/Subtract1' */
    LCK_B.Subtract1_p = LCK_B.Switch7_d - LCK_B.Product5;

    /* RelationalOperator: '<S8>/Relational Operator4' incorporates:
     *  Constant: '<S8>/Constant3'
     */
    LCK_B.RelationalOperator4_n = (LCK_B.Switch19_of ==
      LCK_P_g.Constant3_Value_ko);

    /* Switch: '<S8>/Switch5' */
    if (LCK_B.RelationalOperator4_n) {
      LCK_B.Switch5_h = LCK_B.Subtract1_p;
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
    if (LCK_B.Switch1_i5) {
      LCK_B.Switch9_e = LCK_B.Product;
    } else {
      LCK_B.Switch9_e = LCK_B.Switch4_a;
    }

    /* End of Switch: '<S8>/Switch9' */

    /* DataTypeConversion: '<S8>/Data Type Conversion1' incorporates:
     *  Constant: '<S8>/AVP_C1_Coff'
     */
    LCK_B.DataTypeConversion1_e = (real32_T)LCK_P_g.AVP_C1_Coff_Value;

    /* Product: '<S8>/Product1' */
    LCK_B.Product1_c = rtu_AVP_Info->Tractory_c1 * LCK_B.DataTypeConversion1_e;

    /* Switch: '<S8>/Switch16' */
    if (LCK_B.sf_signal_sustain_e.sustain_value > LCK_P_g.Switch16_Threshold) {
      LCK_B.Switch16 = LCK_B.PO_A1_Hold;
    } else {
      LCK_B.Switch16 = *rtu_Fus_Lane_Info_primaryObj_ka;
    }

    /* End of Switch: '<S8>/Switch16' */

    /* RelationalOperator: '<S246>/Relational Operator7' incorporates:
     *  Constant: '<S246>/Constant12'
     */
    LCK_B.RelationalOperator7_j = (*rtu_Ramp_Lane_Valid_Flag ==
      LCK_P_g.Constant12_Value_e);

    /* RelationalOperator: '<S246>/Relational Operator8' incorporates:
     *  Constant: '<S246>/Constant11'
     */
    LCK_B.RelationalOperator8_a = (*rtu_Ramp_Lane_Valid_Flag ==
      LCK_P_g.Constant11_Value_b);

    /* Sum: '<S246>/Sum1' */
    LCK_B.Sum1_pd = rtu_LCK_LanSigInputs->VID_Lin_01_A1 +
      rtu_LCK_LanSigInputs->VID_Lin_02_A1;

    /* Gain: '<S246>/Gain1' */
    LCK_B.Gain1_h = LCK_P_g.Gain1_Gain_d * LCK_B.Sum1_pd;

    /* Switch: '<S246>/Switch12' */
    if (LCK_B.RelationalOperator2_b) {
      LCK_B.Switch12 = rtu_LCK_LanSigInputs->VID_Lin_01_A1;
    } else {
      LCK_B.Switch12 = LCK_B.Gain1_h;
    }

    /* End of Switch: '<S246>/Switch12' */

    /* Switch: '<S246>/Switch11' */
    if (LCK_B.RelationalOperator1_mz) {
      LCK_B.Switch11_i = rtu_LCK_LanSigInputs->VID_Lin_02_A1;
    } else {
      LCK_B.Switch11_i = LCK_B.Switch12;
    }

    /* End of Switch: '<S246>/Switch11' */

    /* Switch: '<S246>/Switch21' */
    if (LCK_B.RelationalOperator8_a) {
      LCK_B.Switch21 = rtu_LCK_LanSigInputs->VID_Lin_01_A1;
    } else {
      LCK_B.Switch21 = LCK_B.Switch11_i;
    }

    /* End of Switch: '<S246>/Switch21' */

    /* Switch: '<S246>/Switch20' */
    if (LCK_B.RelationalOperator7_j) {
      LCK_B.Switch20 = rtu_LCK_LanSigInputs->VID_Lin_02_A1;
    } else {
      LCK_B.Switch20 = LCK_B.Switch21;
    }

    /* End of Switch: '<S246>/Switch20' */

    /* Switch: '<S8>/Switch1' */
    if (LCK_B.Gain2_l > LCK_P_g.Switch1_Threshold_d) {
      LCK_B.Switch1_eu = LCK_B.Switch16;
    } else {
      LCK_B.Switch1_eu = LCK_B.Switch20;
    }

    /* End of Switch: '<S8>/Switch1' */

    /* Switch: '<S8>/Switch10' */
    if (LCK_B.Switch1_i5) {
      LCK_B.Switch10_g = LCK_B.Product1_c;
    } else {
      LCK_B.Switch10_g = LCK_B.Switch1_eu;
    }

    /* End of Switch: '<S8>/Switch10' */

    /* DataTypeConversion: '<S6>/Data Type Conversion15' */
    LCK_B.DataTypeConversion15 = rtu_LCK_LanSigInputs->VID_Lane_Width;

    /* DataTypeConversion: '<S6>/Data Type Conversion16' */
    LCK_B.DataTypeConversion16 = rtu_LCK_VehSigInputs->Vehicle_Speed;

    /* Logic: '<S161>/Logical Operator' */
    LCK_B.LogicalOperator_c3 = ((LCK_B.Switch5_k != 0.0) ||
      LCK_B.RelationalOperator_p);

    /* RelationalOperator: '<S167>/Relational_Operator10' incorporates:
     *  Constant: '<S167>/Idle2Ready_Mask'
     */
    LCK_B.Relational_Operator10 = (LCK_B.Idle2ReadyBitwise ==
      k_LCK_Idle2Ready_Mask);

    /* Logic: '<S162>/Logical Operator48' */
    LCK_B.LogicalOperator48 = ((LCK_B.Switch5_k != 0.0) ||
      LCK_B.RelationalOperator_p);

    /* RelationalOperator: '<S162>/Relational_Operator6' incorporates:
     *  Constant: '<S162>/ZERO7'
     */
    LCK_B.Relational_Operator6 = (0.0 == LCK_P_g.ZERO7_Value);

    /* Logic: '<S162>/Logical Operator49' */
    LCK_B.LogicalOperator49 = (LCK_B.LogicalOperator48 &&
      LCK_B.Relational_Operator10 && LCK_B.Relational_Operator6);

    /* Logic: '<S158>/Logical Operator3' */
    LCK_B.LogicalOperator3_j = ((!(LCK_B.Switch5_k != 0.0)) &&
      (!LCK_B.RelationalOperator_p));

    /* Logic: '<S163>/Logical Operator3' */
    LCK_B.LogicalOperator3_b = ((!(LCK_B.Switch5_k != 0.0)) &&
      (!LCK_B.RelationalOperator_p));

    /* RelationalOperator: '<S169>/Relational_Operator1' incorporates:
     *  Constant: '<S169>/ZERO1'
     */
    LCK_B.Relational_Operator1 = (LCK_B.Ready2IdleBitwiseOperator1 != C_ZERO);

    /* Abs: '<S168>/Abs2' */
    LCK_B.Abs2_l = (real32_T)fabs(LCK_B.Switch9_e);

    /* Sum: '<S168>/Add2' incorporates:
     *  Constant: '<S168>/k_LCK_host_veh_width'
     */
    LCK_B.Add2 = rtu_LCK_LanSigInputs->VID_Lane_Width - k_LCK_host_veh_width;

    /* Saturate: '<S168>/Saturation' incorporates:
     *  Gain: '<S168>/Gain18'
     */
    LCK_B.Gain18 = LCK_P_g.Gain18_Gain * LCK_B.Add2;
    if (LCK_B.Gain18 > LCK_P_g.Saturation_UpperSat_cd) {
      LCK_B.Saturation_n = LCK_P_g.Saturation_UpperSat_cd;
    } else if (LCK_B.Gain18 < LCK_P_g.Saturation_LowerSat_hx) {
      LCK_B.Saturation_n = LCK_P_g.Saturation_LowerSat_hx;
    } else {
      LCK_B.Saturation_n = LCK_B.Gain18;
    }

    /* End of Saturate: '<S168>/Saturation' */

    /* Sum: '<S168>/Add3' incorporates:
     *  Constant: '<S168>/k_LCK_Entry_DistBuffer'
     */
    LCK_B.Add3 = LCK_B.Saturation_n - k_LCK_Entry_DistBuffer;

    /* Switch: '<S168>/Switch65' */
    if (LCK_B.DataTypeConversion23 > LCK_P_g.Switch65_Threshold) {
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
    if (k_LCK_A0_Rdy2Act_UseConst > LCK_P_g.Switch66_Threshold) {
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
    if (k_LCK_VisionOnly >= LCK_P_g.Switch6_Threshold) {
      LCK_B.Switch6_c = LCK_P_g.Constant20_Value_n;
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
    if (k_LCG_Configured > LCK_P_g.Switch55_Threshold) {
      LCK_B.Switch55 = LCK_P_g.Constant61_Value_c;
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
    if (k_LCG_Configured > LCK_P_g.Switch1_Threshold) {
      LCK_B.Switch1_e = LCK_P_g.Constant1_Value_d;
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
    LCK_B.RelationalOperator12_h = (LCK_P_g.Constant5_Value_ml <
      LCK_P_g.ELK_MODE_STAGE1_LEFT_Value);

    /* Gain: '<S201>/Gain5' */
    LCK_B.Gain5_mv = (uint16_T)(LCK_B.RelationalOperator12_h ? (int32_T)c_BIT5 :
      0);

    /* RelationalOperator: '<S168>/Relational Operator19' incorporates:
     *  Constant: '<S168>/Constant40'
     */
    LCK_B.RelationalOperator19_i = (rtu_LCK_VehSigInputs->LKATrqOvrlTrqDStat !=
      LCK_P_g.Constant40_Value);

    /* Gain: '<S201>/Gain6' */
    LCK_B.Gain6_h = (uint16_T)(LCK_B.RelationalOperator19_i ? (int32_T)c_BIT6 :
      0);

    /* Logic: '<S168>/Logical Operator93' */
    LCK_B.LogicalOperator93 = !(LCK_B.Out != 0.0F);

    /* Switch: '<S168>/Switch62' incorporates:
     *  Constant: '<S168>/LCK_HaloTime_Expired'
     *  Constant: '<S168>/k_LCK_HaloTime_Switch'
     */
    if (k_LCK_HaloTime_Switch >= LCK_P_g.Switch62_Threshold) {
      LCK_B.Switch62 = LCK_P_g.LCK_HaloTime_Expired_Value;
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
    velocity_ms = floor((real_T)c_BIT8 * LCK_P_g.Constant32_Value);
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
    velocity_ms = floor((real_T)c_BIT9 * LCK_P_g.Constant30_Value);
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
    velocity_ms = floor((real_T)c_BIT10 * LCK_P_g.Constant36_Value_e);
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
    velocity_ms = floor((real_T)c_BIT11 * LCK_P_g.Constant33_Value);
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
    velocity_ms = floor((real_T)c_BIT12 * LCK_P_g.Constant34_Value_a);
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
    velocity_ms = floor((real_T)c_BIT13 * LCK_P_g.Constant37_Value_d);
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
    velocity_ms = floor((real_T)c_BIT14 * LCK_P_g.Constant38_Value);
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
    velocity_ms = floor((real_T)c_BIT15 * LCK_P_g.Constant35_Value);
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
      (!LCK_B.RelationalOperator_p));

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
    LCK_B.RelationalOperator51 = (LCK_B.Switch6_c == LCK_P_g.const2_Value);

    /* RelationalOperator: '<S151>/Relational Operator26' incorporates:
     *  Constant: '<S151>/const1'
     */
    LCK_B.RelationalOperator26_c = (LCK_B.RelationalOperator_p ==
      LCK_P_g.const1_Value);

    /* Logic: '<S151>/Logical Operator57' */
    LCK_B.LogicalOperator57 = (LCK_B.RelationalOperator51 &&
      LCK_B.RelationalOperator26_c);

    /* RelationalOperator: '<S151>/Relational Operator64' incorporates:
     *  Constant: '<S151>/k_LCK_VehSpd_TJA_ICA_Bound2'
     */
    LCK_B.RelationalOperator64 = (rtu_LCK_VehSigInputs->Vehicle_Speed >
      k_LCK_VehSpd_TJA_ICA_Bound);

    /* RelationalOperator: '<S151>/Relational Operator63' incorporates:
     *  Constant: '<S151>/const3'
     */
    LCK_B.RelationalOperator63 = (LCK_B.Switch6_c == LCK_P_g.const3_Value);

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
    LCK_B.LogicalOperator59 = ((LCK_P_g.Constant3_Value_i != 0.0) ||
      (LCK_P_g.Constant1_Value_lh != 0.0));

    /* Switch: '<S151>/Switch58' incorporates:
     *  Constant: '<S151>/Constant70'
     *  Constant: '<S151>/k_LCG_Configured1'
     */
    if (k_LCG_Configured > LCK_P_g.Switch58_Threshold) {
      LCK_B.Switch58 = LCK_P_g.Constant70_Value;
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
    LCK_B.RelationalOperator13_a = (LCK_P_g.Constant5_Value_ml >=
      LCK_P_g.ELK_MODE_STAGE1_LEFT1_Value);

    /* Gain: '<S173>/Gain5' */
    LCK_B.Gain5_i = (uint16_T)(LCK_B.RelationalOperator13_a ? (int32_T)c_BIT5 :
      0);

    /* RelationalOperator: '<S151>/Relational Operator27' incorporates:
     *  Constant: '<S151>/Constant55'
     */
    LCK_B.RelationalOperator27_o = (rtu_LCK_VehSigInputs->LKATrqOvrlTrqDStat ==
      LCK_P_g.Constant55_Value_i);

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
    velocity_ms = floor((real_T)c_BIT8 * LCK_P_g.Constant1_Value_ch);
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
    velocity_ms = floor((real_T)c_BIT9 * LCK_P_g.Constant39_Value_n);
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
    velocity_ms = floor((real_T)c_BIT10 * LCK_P_g.Constant45_Value);
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
    velocity_ms = floor((real_T)c_BIT11 * LCK_P_g.Constant42_Value);
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
    velocity_ms = floor((real_T)c_BIT12 * LCK_P_g.Constant43_Value);
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
    velocity_ms = floor((real_T)c_BIT13 * LCK_P_g.Constant46_Value);
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
    velocity_ms = floor((real_T)c_BIT14 * LCK_P_g.Constant47_Value);
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
    velocity_ms = floor((real_T)c_BIT15 * LCK_P_g.Constant44_Value);
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
      (!LCK_B.RelationalOperator_p));

    /* RelationalOperator: '<S155>/Relational Operator40' incorporates:
     *  Constant: '<S111>/Constant3'
     *  Constant: '<S155>/const26'
     */
    LCK_B.RelationalOperator40_a = (LCK_P_g.Constant3_Value_pd !=
      LCK_P_g.const26_Value);

    /* RelationalOperator: '<S155>/Relational Operator41' incorporates:
     *  Constant: '<S155>/const27'
     */
    LCK_B.RelationalOperator41_h = (LCK_B.Switch5_k == LCK_P_g.const27_Value);

    /* RelationalOperator: '<S155>/Relational Operator42' incorporates:
     *  Constant: '<S155>/const28'
     */
    LCK_B.RelationalOperator42_m = (LCK_B.RelationalOperator_p ==
      LCK_P_g.const28_Value);

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
    LCK_B.RelationalOperator34 = (LCK_B.Delay_m == LCK_P_g.const21_Value);

    /* Delay: '<S171>/Delay2' */
    LCK_B.Delay2 = LCK_DW.Delay2_DSTATE;

    /* RelationalOperator: '<S171>/Relational Operator9' incorporates:
     *  Constant: '<S171>/const9'
     */
    LCK_B.RelationalOperator9_n = (LCK_B.Delay2 == LCK_P_g.const9_Value);

    /* RelationalOperator: '<S223>/Compare' incorporates:
     *  Constant: '<S223>/Constant'
     */
    LCK_B.Compare_j = (*rtu_ZOP_LC_Command == LCK_P_g.CompareToConstant_const);

    /* RelationalOperator: '<S224>/Compare' incorporates:
     *  Constant: '<S224>/Constant'
     */
    LCK_B.Compare_g = (*rtu_ZOP_LC_Command == LCK_P_g.CompareToConstant1_const);

    /* Switch: '<S171>/Switch1' incorporates:
     *  Constant: '<S171>/const14'
     */
    if (LCK_B.Compare_g) {
      LCK_B.Switch1_l = LCK_P_g.const14_Value;
    } else {
      LCK_B.Switch1_l = rtu_LCK_VehSigInputs->DirectionIndSwitchPos;
    }

    /* End of Switch: '<S171>/Switch1' */

    /* Switch: '<S171>/Switch7' incorporates:
     *  Constant: '<S171>/const13'
     */
    if (LCK_B.Compare_j) {
      LCK_B.Switch7_o = LCK_P_g.const13_Value;
    } else {
      LCK_B.Switch7_o = LCK_B.Switch1_l;
    }

    /* End of Switch: '<S171>/Switch7' */

    /* RelationalOperator: '<S171>/Relational Operator1' incorporates:
     *  Constant: '<S171>/const1'
     */
    LCK_B.RelationalOperator1_k = (LCK_P_g.const1_Value_k == LCK_B.Switch7_o);

    /* RelationalOperator: '<S171>/Relational Operator10' incorporates:
     *  Constant: '<S171>/const11'
     */
    LCK_B.RelationalOperator10_a = (LCK_P_g.const11_Value == *rtu_ZOP_LC_Command);

    /* Logic: '<S171>/Logical Operator9' */
    LCK_B.LogicalOperator9_i = (LCK_B.RelationalOperator1_k ||
      LCK_B.RelationalOperator10_a);

    /* RelationalOperator: '<S171>/Relational Operator13' incorporates:
     *  Constant: '<S171>/const15'
     */
    LCK_B.RelationalOperator13_b = (rtu_LCK_LanSigInputs->VID_Lin_01_Type ==
      LCK_P_g.const15_Value);

    /* Logic: '<S171>/Logical Operator31' */
    LCK_B.LogicalOperator31_e = (LCK_B.RelationalOperator34 &&
      LCK_B.RelationalOperator9_n && LCK_B.LogicalOperator9_i &&
      LCK_B.RelationalOperator13_b);

    /* RelationalOperator: '<S171>/Relational Operator11' incorporates:
     *  Constant: '<S171>/const12'
     */
    LCK_B.RelationalOperator11_n = (*rtu_ZOP_LC_Command == LCK_P_g.const12_Value);

    /* RelationalOperator: '<S171>/Relational Operator2' incorporates:
     *  Constant: '<S171>/const3'
     */
    LCK_B.RelationalOperator2_k = (LCK_B.Switch7_o == LCK_P_g.const3_Value_b);

    /* Logic: '<S171>/Logical Operator10' */
    LCK_B.LogicalOperator10_e = (LCK_B.RelationalOperator11_n ||
      LCK_B.RelationalOperator2_k);

    /* RelationalOperator: '<S171>/Relational Operator14' incorporates:
     *  Constant: '<S171>/const16'
     */
    LCK_B.RelationalOperator14_n = (rtu_LCK_LanSigInputs->VID_Lin_02_Type ==
      LCK_P_g.const16_Value);

    /* Logic: '<S171>/Logical Operator1' */
    LCK_B.LogicalOperator1_l = (LCK_B.LogicalOperator10_e &&
      LCK_B.RelationalOperator34 && LCK_B.RelationalOperator9_n &&
      LCK_B.RelationalOperator14_n);

    /* Delay: '<S171>/Delay1' */
    LCK_B.Delay1_m = LCK_DW.Delay1_DSTATE_f;

    /* RelationalOperator: '<S171>/Relational Operator4' incorporates:
     *  Constant: '<S171>/const4'
     */
    LCK_B.RelationalOperator4_m = (LCK_B.Delay1_m == LCK_P_g.const4_Value);

    /* RelationalOperator: '<S171>/Relational Operator3' incorporates:
     *  Constant: '<S171>/const2'
     */
    LCK_B.RelationalOperator3_mm = (LCK_B.Switch7_o != LCK_P_g.const2_Value_a);

    /* Abs: '<S171>/Abs' */
    LCK_B.Abs_h = (real32_T)fabs(LCK_B.Switch9_e);

    /* RelationalOperator: '<S171>/Relational Operator6' incorporates:
     *  Constant: '<S171>/const6'
     */
    LCK_B.RelationalOperator6_k = (LCK_B.Abs_h <= LCK_P_g.const6_Value);

    /* Abs: '<S171>/Abs1' */
    LCK_B.Abs1_p = (real32_T)fabs(LCK_B.Switch9_e);

    /* RelationalOperator: '<S171>/Relational Operator7' incorporates:
     *  Constant: '<S171>/const7'
     */
    LCK_B.RelationalOperator7_l = (LCK_B.Abs1_p <= LCK_P_g.const7_Value);

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
    LCK_B.RelationalOperator12_d = (LCK_P_g.const9_Value == LCK_B.Switch7_o);

    /* Logic: '<S171>/Logical Operator12' */
    LCK_B.LogicalOperator12_l = (LCK_B.LogicalOperator2_a ||
      LCK_B.RelationalOperator12_d);

    /* RelationalOperator: '<S171>/Relational Operator8' incorporates:
     *  Constant: '<S171>/const8'
     */
    LCK_B.RelationalOperator8_o = (LCK_B.Switch7_o != LCK_P_g.const8_Value);

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
    LCK_B.RelationalOperator5_d = (LCK_B.Delay1_m == LCK_P_g.const5_Value);

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
      *rty_LCK_Mode = LCK_MODE_OFF;
    } else {
      switch (LCK_DW.is_c177_LCK) {
       case LCK_IN_LCKActive:
        if (LCK_B.LogicalOperator3_n) {
          LCK_DW.is_LCKActive = LCK_IN_NO_ACTIVE_CHILD_a;
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Off;
          *rty_LCK_Mode = LCK_MODE_OFF;
        } else if (LCK_P_g.Constant3_Value_pd) {
          LCK_DW.is_LCKActive = LCK_IN_NO_ACTIVE_CHILD_a;
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Error;
          *rty_LCK_Mode = LCK_MODE_ERROR;
        } else if (LCK_B.Relational_Operator1) {
          LCK_DW.is_LCKActive = LCK_IN_NO_ACTIVE_CHILD_a;
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Idle;
          *rty_LCK_Mode = LCK_MODE_IDLE;
        } else if (LCK_B.Relational_Operator3) {
          LCK_DW.is_LCKActive = LCK_IN_NO_ACTIVE_CHILD_a;
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Ready;
          *rty_LCK_Mode = LCK_MODE_READY;
        } else {
          switch (LCK_DW.is_LCKActive) {
           case LCK_IN_LCK_INIT:
            if (LCK_B.LogicalOperator31_e) {
              LCK_DW.is_LCKActive = LCK_IN_LEFTLC;
              *rty_LCK_Mode = LCK_MODE_LEFT_LANE_CHANGE;
            } else {
              if (LCK_B.LogicalOperator1_l) {
                LCK_DW.is_LCKActive = LCK_IN_RIGHTLC;
                *rty_LCK_Mode = LCK_MODE_RIGHT_LANE_CHANGE;
              }
            }
            break;

           case LCK_IN_LEFTLC:
            if (LCK_B.LogicalOperator12_l) {
              LCK_DW.is_LCKActive = LCK_IN_LCK_INIT;
              *rty_LCK_Mode = LCK_MODE_ACTIVE;
            }
            break;

           default:
            if (LCK_B.LogicalOperator11_n) {
              LCK_DW.is_LCKActive = LCK_IN_LCK_INIT;
              *rty_LCK_Mode = LCK_MODE_ACTIVE;
            }
            break;
          }
        }
        break;

       case LCK_IN_LCK_Error:
        if (LCK_B.LogicalOperator16_m) {
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Ready;
          *rty_LCK_Mode = LCK_MODE_READY;
        } else if (LCK_B.LogicalOperator3_p) {
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Off;
          *rty_LCK_Mode = LCK_MODE_OFF;
        } else {
          if (LCK_B.LogicalOperator35) {
            LCK_DW.is_c177_LCK = LCK_IN_LCK_Idle;
            *rty_LCK_Mode = LCK_MODE_IDLE;
          }
        }
        break;

       case LCK_IN_LCK_Idle:
        if (LCK_P_g.Constant3_Value_pd) {
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Error;
          *rty_LCK_Mode = LCK_MODE_ERROR;
        } else if (LCK_B.LogicalOperator3_j) {
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Off;
          *rty_LCK_Mode = LCK_MODE_OFF;
        } else {
          if (LCK_B.Relational_Operator10) {
            LCK_DW.is_c177_LCK = LCK_IN_LCK_Ready;
            *rty_LCK_Mode = LCK_MODE_READY;
          }
        }
        break;

       case LCK_IN_LCK_Off:
        if (LCK_B.LogicalOperator49) {
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Ready;
          *rty_LCK_Mode = LCK_MODE_READY;
        } else {
          if (LCK_B.LogicalOperator_c3) {
            LCK_DW.is_c177_LCK = LCK_IN_LCK_Idle;
            *rty_LCK_Mode = LCK_MODE_IDLE;
          }
        }
        break;

       default:
        if (LCK_P_g.Constant3_Value_pd) {
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Error;
          *rty_LCK_Mode = LCK_MODE_ERROR;
        } else if (LCK_B.LogicalOperator3_b) {
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Off;
          *rty_LCK_Mode = LCK_MODE_OFF;
        } else if (LCK_B.Relational_Operator1) {
          LCK_DW.is_c177_LCK = LCK_IN_LCK_Idle;
          *rty_LCK_Mode = LCK_MODE_IDLE;
        } else {
          if (LCK_B.Relational_Operator2) {
            LCK_DW.is_c177_LCK = LCK_IN_LCKActive;
            LCK_DW.is_LCKActive = LCK_IN_LCK_INIT;
            *rty_LCK_Mode = LCK_MODE_ACTIVE;
          }
        }
        break;
      }
    }

    /* End of Chart: '<S5>/LCK Mode Manager' */

    /* RelationalOperator: '<S6>/Relational Operator2' incorporates:
     *  Constant: '<S6>/Constant3'
     */
    LCK_B.RelationalOperator2_h = (*rty_LCK_Mode == LCK_P_g.Constant3_Value_p);

    /* RelationalOperator: '<S6>/Relational Operator3' incorporates:
     *  Constant: '<S6>/Constant5'
     */
    LCK_B.RelationalOperator3_d = (*rty_LCK_Mode == LCK_P_g.Constant5_Value_e);

    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S6>/Constant6'
     *  Constant: '<S6>/Constant7'
     */
    if (LCK_B.RelationalOperator3_d) {
      LCK_B.Switch2_m = LCK_P_g.Constant6_Value_lb;
    } else {
      LCK_B.Switch2_m = LCK_P_g.Constant7_Value_p;
    }

    /* End of Switch: '<S6>/Switch2' */

    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/Constant4'
     */
    if (LCK_B.RelationalOperator2_h) {
      LCK_B.Switch1_f = LCK_P_g.Constant4_Value_k;
    } else {
      LCK_B.Switch1_f = LCK_B.Switch2_m;
    }

    /* End of Switch: '<S6>/Switch1' */

    /* DataTypeConversion: '<S6>/Data Type Conversion17' */
    LCK_B.DataTypeConversion17 = LCK_B.Switch1_f;

    /* Delay: '<S6>/Delay2' */
    LCK_B.Delay2_h = LCK_DW.Delay2_DSTATE_e;

    /* Chart: '<S6>/Chart' */
    if (LCK_DW.is_active_c3_LCK == 0U) {
      LCK_DW.is_active_c3_LCK = 1U;
      LCK_DW.is_c3_LCK = LCK_IN_Initialization;
      LCK_B.LC_Phase = 0.0F;
    } else {
      switch (LCK_DW.is_c3_LCK) {
       case LCK_IN_Initialization:
        LCK_B.LC_Phase = 0.0F;
        if (*rty_LCK_Mode == 5.0F) {
          LCK_DW.is_c3_LCK = LCK_IN_LC_Phase1;
          LCK_B.LC_Phase = 1.0F;
        } else {
          if (*rty_LCK_Mode == 6.0F) {
            LCK_DW.is_c3_LCK = LCK_IN_LC_Phase3;
            LCK_B.LC_Phase = 3.0F;
          }
        }
        break;

       case LCK_IN_LC_Phase1:
        LCK_B.LC_Phase = 1.0F;
        if ((*rty_LCK_Mode != 5.0F) && (*rty_LCK_Mode != 6.0F)) {
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
        if ((*rty_LCK_Mode != 5.0F) && (*rty_LCK_Mode != 6.0F)) {
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
        if ((*rty_LCK_Mode != 5.0F) && (*rty_LCK_Mode != 6.0F)) {
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
        if ((*rty_LCK_Mode != 5.0F) && (*rty_LCK_Mode != 6.0F)) {
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
     */
    LCK_B.RelationalOperator_cq = (*rty_LCK_Mode > LCK_P_g.Constant1_Value_cn);

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
        if (LCK_DW.iter_cnt == LCK_P_g.Constant1_Value_i) {
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
    LCK_B.RelationalOperator6_g = (LCK_B.LC_Phase == LCK_P_g.Constant10_Value_g);

    /* RelationalOperator: '<S231>/Relational Operator5' incorporates:
     *  Constant: '<S231>/Constant9'
     */
    LCK_B.RelationalOperator5_c = (LCK_B.LC_Phase == LCK_P_g.Constant9_Value_b);

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

    /* Abs: '<S231>/Abs2' */
    *rty_LC_dx = (real32_T)fabs(LCK_B.Switch5_d);

    /* Gain: '<S231>/Gain1' */
    LCK_B.Gain1 = (real_T)LCK_P_g.Gain1_Gain_e * *rty_LC_dx;

    /* DataTypeConversion: '<S231>/Data Type Conversion3' */
    LCK_B.DataTypeConversion3 = LCK_B.long_s;

    /* DataTypeConversion: '<S231>/Data Type Conversion4' */
    LCK_B.DataTypeConversion4_o = (real32_T)LCK_B.DataTypeConversion16;

    /* Lookup_n-D: '<S231>/Lookup_Table' */
    LCK_B.Lookup_Table = look1_iflf_binlcpw(LCK_B.DataTypeConversion4_o,
      k_LCK_VspdBks, LCK_P_g.Lookup_Table_tableData, 15U);

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
      Te -= mod_nP8BelbH(Te);
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

      quintic_polynomial_BNGgawA6(LCK_B.Switch9_e, vxs, LCK_B.Switch9_e +
        (real32_T)(fabs(LCK_B.Gain1) * LCK_B.DataTypeConversion17), Te, &a0, &a1,
        &a2, &a3, &a4, &a5);
      combination_MXznzaCx(a0, a1, a3, a4, a5, Te, velocity_ms, LCK_B.ref_poly);
      reference_generator_on_cu2irh4N(LCK_B.Switch9_e, LCK_B.Switch10_g, 0.0F,
        0.0F, Te, velocity_ms, LCK_B.reference);
      velocity_ms = LCK_find_valid_ref_max_len(LCK_B.reference);
      LCK_reference_generation(LCK_B.reference, LCK_B.ref_poly, velocity_ms,
        LCK_B.trajs_new_origin);
      calculat_delta_heading_e3M0G2eJ(LCK_B.reference, LCK_B.trajs_new_origin,
        velocity_ms, LCK_B.delta_heading_rad);
      LCK_calculate_kappa_LQ2awkOm(LCK_B.trajs_new_origin, velocity_ms - 1.0,
        LCK_B.dv0);
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
      Reshape_xg6fIkJE(LCK_B.output, velocity_ms, 0.0F);
      LCK_post_processing_AufhNa1N(LCK_B.output, LCK_B.DataTypeConversion3,
        &LCK_B.search_latoff, &LCK_B.search_theta, &LCK_B.search_kappa);
    } else {
      if (LCK_B.DataTypeConversion1 == 0.0) {
        LCK_post_processing_AufhNa1N(LCK_B.DataTypeConversion2,
          LCK_B.DataTypeConversion3, &LCK_B.search_latoff, &LCK_B.search_theta,
          &LCK_B.search_kappa);
      }
    }

    LCK_B.LC_TgtDy = LCK_DW.LC_TgtDy_temp;

    /* End of MATLAB Function: '<S231>/Path_Planning_Function ' */

    /* Gain: '<S6>/Gain1' */
    LCK_B.Gain1_i = LCK_P_g.Gain1_Gain * LCK_B.search_kappa;

    /* Sum: '<S6>/Subtract2' */
    LCK_B.Subtract2_g = LCK_B.Switch11_h + LCK_B.Gain1_i;

    /* DataTypeConversion: '<S6>/Data Type Conversion2' */
    LCK_B.LC_A2 = (real32_T)LCK_B.Subtract2_g;

    /* UnitDelay: '<S25>/Unit Delay' */
    LCK_B.UnitDelay_b = LCK_DW.UnitDelay_DSTATE_b;

    /* Product: '<S22>/Product6' incorporates:
     *  Constant: '<S22>/k_LCK_Fac_Vspd2RngThr_FalRec'
     */
    LCK_B.Product6 = k_LCK_Fac_Vspd2RngThr_FalRec *
      rtu_LCK_VehSigInputs->Vehicle_Speed;

    /* RelationalOperator: '<S22>/Relational Operator2' */
    LCK_B.RelationalOperator2_d = (LCK_B.Product6 <
      rtu_LCK_TrackSigInputs->CIPV1ObjRange);

    /* Switch: '<S22>/Switch10' incorporates:
     *  Constant: '<S22>/Constant8'
     *  Constant: '<S22>/Constant9'
     */
    if (LCK_B.RelationalOperator2_d) {
      LCK_B.Switch10_gl = LCK_P_g.Constant8_Value_e;
    } else {
      LCK_B.Switch10_gl = LCK_P_g.Constant9_Value_h;
    }

    /* End of Switch: '<S22>/Switch10' */

    /* RelationalOperator: '<S22>/Relational Operator1' incorporates:
     *  Constant: '<S22>/Constant5'
     */
    LCK_B.RelationalOperator1_d = (rtu_LCK_TrackSigInputs->CIPV1ObjTrackID >
      LCK_P_g.Constant5_Value_k);

    /* Switch: '<S22>/Switch1' incorporates:
     *  Constant: '<S22>/Constant2'
     */
    if (LCK_B.RelationalOperator1_d) {
      LCK_B.Switch1_hu = LCK_B.Switch10_gl;
    } else {
      LCK_B.Switch1_hu = LCK_P_g.Constant2_Value_o;
    }

    /* End of Switch: '<S22>/Switch1' */

    /* Lookup_n-D: '<S22>/k_LCK_RngThr_FalRec' */
    LCK_B.k_LCK_RngThr_FalRec_o = look1_iflf_binlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_LCK_VspdBks, k_LCK_RngThr_FalRec,
       15U);

    /* Sum: '<S22>/Sum3' */
    LCK_B.Sum3_c = rtu_LCK_LanSigInputs->VID_Lin_01_Range +
      rtu_LCK_LanSigInputs->VID_Lin_02_Range;

    /* Product: '<S22>/Divide1' incorporates:
     *  Constant: '<S22>/Constant6'
     */
    LCK_B.Divide1 = LCK_B.Sum3_c / (real32_T)LCK_P_g.Constant6_Value_j;

    /* RelationalOperator: '<S22>/Relational Operator' */
    LCK_B.RelationalOperator_j = (LCK_B.k_LCK_RngThr_FalRec_o >= LCK_B.Divide1);

    /* Switch: '<S22>/Switch8' incorporates:
     *  Constant: '<S22>/Constant10'
     */
    if (LCK_B.RelationalOperator_j) {
      LCK_B.Switch8_e = LCK_B.Switch1_hu;
    } else {
      LCK_B.Switch8_e = LCK_P_g.Constant10_Value_hk;
    }

    /* End of Switch: '<S22>/Switch8' */

    /* Switch: '<S22>/Switch2' incorporates:
     *  Constant: '<S22>/Constant1'
     */
    if (LCK_B.Switch1_i5) {
      LCK_B.Switch2_md = LCK_P_g.Constant1_Value_jn;
    } else {
      LCK_B.Switch2_md = LCK_B.Switch8_e;
    }

    /* End of Switch: '<S22>/Switch2' */

    /* RelationalOperator: '<S10>/Relational Operator3' incorporates:
     *  Constant: '<S10>/Constant2'
     */
    LCK_B.RelationalOperator3_dj = (LCK_B.Switch2_md ==
      LCK_P_g.Constant2_Value_bg);

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
    if (LCK_B.Sum1_l > LCK_P_g.Saturation_UpperSat_k) {
      LCK_B.Saturation_a = LCK_P_g.Saturation_UpperSat_k;
    } else if (LCK_B.Sum1_l < LCK_P_g.Saturation_LowerSat_k) {
      LCK_B.Saturation_a = LCK_P_g.Saturation_LowerSat_k;
    } else {
      LCK_B.Saturation_a = LCK_B.Sum1_l;
    }

    /* End of Saturate: '<S25>/Saturation' */

    /* Switch: '<S1>/Switch' incorporates:
     *  Constant: '<S1>/Constant'
     */
    if (LCK_B.Switch1_i5) {
      LCK_B.Switch_h = LCK_P_g.Constant_Value_g;
    } else {
      LCK_B.Switch_h = *rty_LCK_Mode;
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
      LCK_B.Switch2_os = LCK_P_g.Constant3_Value_o5;
    } else {
      LCK_B.Switch2_os = LCK_P_g.Constant4_Value_a;
    }

    /* End of Switch: '<S9>/Switch2' */

    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S9>/Constant1'
     */
    if (LCK_B.RelationalOperator1_c) {
      LCK_B.Switch1_fi = LCK_P_g.Constant1_Value_n0;
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
      LCK_B.Switch_hf = LCK_P_g.Constant2_Value_jg;
    }

    /* End of Switch: '<S9>/Switch' */

    /* RelationalOperator: '<S13>/Relational Operator3' incorporates:
     *  Constant: '<S13>/Constant2'
     */
    LCK_B.RelationalOperator3_n = (LCK_B.Switch_hf > LCK_P_g.Constant2_Value_e);

    /* Switch: '<S13>/Switch2' */
    if (LCK_B.RelationalOperator3_n) {
      LCK_B.Switch2_e = LCK_B.LC_A2;
    } else {
      LCK_B.Switch2_e = LCK_B.Saturation_a;
    }

    /* End of Switch: '<S13>/Switch2' */

    /* Gain: '<S16>/C_KPH2MPS' */
    LCK_B.C_KPH2MPS_k = C_KPH2MPS * rtu_LCK_VehSigInputs->Vehicle_Speed;

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
    LCK_B.Gain_i = LCK_P_g.Gain_Gain_c * LCK_B.Switch2_e;

    /* Abs: '<S17>/Abs' */
    LCK_B.Abs_m = (real32_T)fabs(LCK_B.Gain_i);

    /* RelationalOperator: '<S55>/Compare' incorporates:
     *  Constant: '<S55>/Constant'
     */
    LCK_B.Compare = (uint8_T)(LCK_B.Abs_m < LCK_P_g.CompareToConstant_const_m);

    /* Switch: '<S17>/Switch' incorporates:
     *  Constant: '<S17>/Constant22'
     */
    if (LCK_B.Compare >= LCK_P_g.Switch_Threshold) {
      LCK_B.Switch_c = LCK_P_g.Constant22_Value_j;
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
    Road_Radius = LCK_P_g.Constant2_Value_b / LCK_B.MinMax2_o;

    /* Sum: '<S57>/Sum' */
    LCK_B.Sum_fx = Road_Radius - LCK_B.UnitDelay_g;

    /* Product: '<S57>/Product' */
    LCK_B.Product_k = LCK_B.Product1_b * LCK_B.Sum_fx;

    /* Saturate: '<S57>/Saturation' incorporates:
     *  Sum: '<S57>/Sum1'
     */
    LCK_B.Sum1_pj = LCK_B.Product_k + LCK_B.UnitDelay_g;
    if (LCK_B.Sum1_pj > LCK_P_g.Saturation_UpperSat_m) {
      LCK_B.Saturation_k3 = LCK_P_g.Saturation_UpperSat_m;
    } else if (LCK_B.Sum1_pj < LCK_P_g.Saturation_LowerSat_g) {
      LCK_B.Saturation_k3 = LCK_P_g.Saturation_LowerSat_g;
    } else {
      LCK_B.Saturation_k3 = LCK_B.Sum1_pj;
    }

    /* End of Saturate: '<S57>/Saturation' */

    /* Lookup_n-D: '<S16>/Lookup_Table' */
    LCK_B.Lookup_Table_m = look1_iflf_binlcpw(LCK_B.Saturation_k3, k_LCK_RadBks,
      LCK_P_g.Lookup_Table_tableData_i, 13U);

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
    if (LCK_B.Sum1_j > LCK_P_g.Saturation_UpperSat_f) {
      LCK_B.Saturation_l = LCK_P_g.Saturation_UpperSat_f;
    } else if (LCK_B.Sum1_j < LCK_P_g.Saturation_LowerSat_p) {
      LCK_B.Saturation_l = LCK_P_g.Saturation_LowerSat_p;
    } else {
      LCK_B.Saturation_l = LCK_B.Sum1_j;
    }

    /* End of Saturate: '<S23>/Saturation' */

    /* UnitDelay: '<S232>/Unit Delay' */
    LCK_B.UnitDelay_h = LCK_DW.UnitDelay_DSTATE_l;

    /* Gain: '<S232>/Gain2' incorporates:
     *  Constant: '<S232>/Constant3'
     */
    LCK_B.Gain2_m = LCK_P_g.Gain2_Gain_i * LCK_P_g.Constant3_Value_c;

    /* Gain: '<S232>/Gain' */
    LCK_B.Gain_k = ML_TIME_MSEC * LCK_B.Gain2_m;

    /* Product: '<S232>/Product3' incorporates:
     *  Constant: '<S232>/const'
     */
    LCK_B.Product3_p = LCK_B.Gain_k / LCK_P_g.const_Value;

    /* Gain: '<S232>/Gain1' incorporates:
     *  Constant: '<S232>/Constant3'
     */
    LCK_B.Gain1_b = ML_TIME_MSEC * LCK_P_g.Constant3_Value_c;

    /* Product: '<S232>/Product5' incorporates:
     *  Constant: '<S232>/const1'
     */
    LCK_B.Product5_p = LCK_B.Gain1_b / LCK_P_g.const1_Value_g;

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
    LCK_B.RelationalOperator1_il = (LCK_B.Product5_p < LCK_B.Sum_a);

    /* Switch: '<S232>/Switch19' */
    if (LCK_B.RelationalOperator1_il) {
      LCK_B.Switch19_f = LCK_B.Product5_p;
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
      if (LCK_B.Saturation_k3 > LCK_P_g.RadUpLmt_Value) {
        LCK_DW.is_c36_LCK = LCK_IN_State_0;
        LCK_B.Str_Flag = LCK_BOOLEAN_TURE;
      } else {
        LCK_DW.is_c36_LCK = LCK_IN_State_1;
        LCK_B.Str_Flag = LCK_BOOLEAN_TURE;
      }
    } else if (LCK_DW.is_c36_LCK == LCK_IN_State_0) {
      LCK_B.Str_Flag = LCK_BOOLEAN_TURE;
      if (LCK_B.Saturation_k3 <= LCK_P_g.RadLowLmt_Value) {
        LCK_DW.is_c36_LCK = LCK_IN_State_1;
      }
    } else {
      LCK_B.Str_Flag = LCK_BOOLEAN_TURE;
      if (LCK_B.Saturation_k3 > LCK_P_g.RadUpLmt_Value) {
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
    LCK_B.Compare_d = (LCK_B.Gain_i <= LCK_P_g.Constant_Value_a);

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
      LCK_B.Switch2_cv = LCK_P_g.Constant2_Value_h;
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

    /* Lookup_n-D: '<S16>/k_LCK_A0ShiftFac_Vspd' */
    LCK_B.k_LCK_A0ShiftFac_Vspd_k = look1_iflf_binlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_LCK_VspdBks, k_LCK_A0ShiftFac_Vspd,
       15U);

    /* Product: '<S16>/Product7' */
    LCK_B.Product7 = LCK_B.Switch2_cv * LCK_B.Switch_f *
      LCK_B.k_LCK_A0ShiftFac_Vspd_k;

    /* Sum: '<S16>/Add' */
    LCK_B.Add = LCK_B.Switch10_e + LCK_B.Product7;

    /* RelationalOperator: '<S47>/Relational Operator15' incorporates:
     *  Constant: '<S47>/Constant3'
     */
    LCK_B.RelationalOperator15_a = (LCK_P_g.Constant3_Value_g == LCK_B.Switch_hf);

    /* UnitDelay: '<S47>/Unit Delay2' */
    LCK_B.UnitDelay2_o = LCK_DW.UnitDelay2_DSTATE_i;

    /* RelationalOperator: '<S47>/Relational Operator14' incorporates:
     *  Constant: '<S47>/Constant4'
     */
    LCK_B.RelationalOperator14_g = (LCK_B.UnitDelay2_o ==
      LCK_P_g.Constant4_Value_n);

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
      LCK_B.Switch4_j = LCK_P_g.Constant7_Value_l;
    }

    /* End of Switch: '<S47>/Switch4' */

    /* Abs: '<S48>/Abs' */
    LCK_B.Abs_d = (real32_T)fabs(rtu_LCK_VehSigInputs->Steer_Torq);

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
      LCK_B.Switch11_i2 = LCK_P_g.Constant22_Value_o;
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
    if (LCK_B.Sum1_c > LCK_P_g.Saturation_UpperSat_fe) {
      LCK_B.Saturation_e = LCK_P_g.Saturation_UpperSat_fe;
    } else if (LCK_B.Sum1_c < LCK_P_g.Saturation_LowerSat_j) {
      LCK_B.Saturation_e = LCK_P_g.Saturation_LowerSat_j;
    } else {
      LCK_B.Saturation_e = LCK_B.Sum1_c;
    }

    /* End of Saturate: '<S24>/Saturation' */

    /* Trigonometry: '<S6>/Trigonometric Function' */
    LCK_B.TrigonometricFunction = tan(LCK_B.search_theta);

    /* Sum: '<S6>/Subtract1' */
    LCK_B.Subtract1 = LCK_B.Switch10_g - LCK_B.TrigonometricFunction;

    /* DataTypeConversion: '<S6>/Data Type Conversion1' */
    LCK_B.LC_A1 = (real32_T)LCK_B.Subtract1;

    /* Switch: '<S13>/Switch1' */
    if (LCK_B.RelationalOperator3_n) {
      LCK_B.Switch1_fw = LCK_B.LC_A1;
    } else {
      LCK_B.Switch1_fw = LCK_B.Saturation_e;
    }

    /* End of Switch: '<S13>/Switch1' */

    /* Product: '<S16>/Product4' */
    LCK_B.Product4_c = LCK_B.Switch1_fw * LCK_B.Product3;

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
    LCK_B.DataTypeConversion3_e = (real32_T)LCK_P_g.AVP_C3_Coff_Value;

    /* Product: '<S8>/Product3' */
    LCK_B.Product3_f = rtu_AVP_Info->Tractory_c3 * LCK_B.DataTypeConversion3_e;

    /* Switch: '<S8>/Switch18' */
    if (LCK_B.sf_signal_sustain_e.sustain_value > LCK_P_g.Switch18_Threshold) {
      LCK_B.Switch18_k = LCK_B.PO_A3_Hold;
    } else {
      LCK_B.Switch18_k = *rtu_Fus_Lane_Info_primaryObjT_e;
    }

    /* End of Switch: '<S8>/Switch18' */

    /* Sum: '<S246>/Sum6' */
    LCK_B.Sum6 = rtu_LCK_LanSigInputs->VID_Lin_01_A3 +
      rtu_LCK_LanSigInputs->VID_Lin_02_A3;

    /* Gain: '<S246>/Gain5' */
    LCK_B.Gain5 = LCK_P_g.Gain5_Gain * LCK_B.Sum6;

    /* Switch: '<S246>/Switch16' */
    if (LCK_B.RelationalOperator2_b) {
      LCK_B.Switch16_c = rtu_LCK_LanSigInputs->VID_Lin_01_A3;
    } else {
      LCK_B.Switch16_c = LCK_B.Gain5;
    }

    /* End of Switch: '<S246>/Switch16' */

    /* Switch: '<S246>/Switch15' */
    if (LCK_B.RelationalOperator1_mz) {
      LCK_B.Switch15_d = rtu_LCK_LanSigInputs->VID_Lin_02_A3;
    } else {
      LCK_B.Switch15_d = LCK_B.Switch16_c;
    }

    /* End of Switch: '<S246>/Switch15' */

    /* Switch: '<S8>/Switch3' */
    if (LCK_B.Gain2_l > LCK_P_g.Switch3_Threshold_g) {
      LCK_B.Switch3_f = LCK_B.Switch18_k;
    } else {
      LCK_B.Switch3_f = LCK_B.Switch15_d;
    }

    /* End of Switch: '<S8>/Switch3' */

    /* Switch: '<S8>/Switch12' */
    if (LCK_B.Switch1_i5) {
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
    if (LCK_B.Sum1_d > LCK_P_g.Saturation_UpperSat_o) {
      LCK_B.Saturation_as = LCK_P_g.Saturation_UpperSat_o;
    } else if (LCK_B.Sum1_d < LCK_P_g.Saturation_LowerSat_a) {
      LCK_B.Saturation_as = LCK_P_g.Saturation_LowerSat_a;
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
    LCK_B.Sum1_nd = ((LCK_B.Product_mm + LCK_B.Product4_c) + LCK_B.Product6_n) +
      LCK_B.Product5_i;
    if (LCK_B.Sum1_nd >= LCK_P_g.Relay1_OnVal) {
      LCK_DW.Relay1_Mode = true;
    } else {
      if (LCK_B.Sum1_nd <= LCK_P_g.Relay1_OffVal) {
        LCK_DW.Relay1_Mode = false;
      }
    }

    if (LCK_DW.Relay1_Mode) {
      LCK_B.Relay1 = LCK_P_g.Relay1_YOn;
    } else {
      LCK_B.Relay1 = LCK_P_g.Relay1_YOff;
    }

    /* End of Relay: '<S73>/Relay1' */

    /* Switch: '<S73>/Switch15' incorporates:
     *  Constant: '<S73>/k_LCK_Lat_Ctrl_PFac_Lft'
     *  Constant: '<S73>/k_LCK_Lat_Ctrl_PFac_Rgt'
     */
    if (LCK_B.Relay1 > LCK_P_g.Switch15_Threshold_n) {
      LCK_B.Switch15_l = k_LCK_Lat_Ctrl_PFac_Rgt;
    } else {
      LCK_B.Switch15_l = k_LCK_Lat_Ctrl_PFac_Lft;
    }

    /* End of Switch: '<S73>/Switch15' */

    /* Lookup_n-D: '<S77>/k_LCK_Lat_PFac_Vspd' */
    LCK_B.k_LCK_Lat_PFac_Vspd_o = look1_iflf_linlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_LCK_VspdBks, k_LCK_Lat_PFac_Vspd,
       15U);

    /* Lookup_n-D: '<S78>/k_LCK_Lat_PFac_Rad' */
    LCK_B.k_LCK_Lat_PFac_Rad_e = look1_iflf_linlcpw(LCK_B.Saturation_k3,
      k_LCK_RadBks, k_LCK_Lat_PFac_Rad, 13U);

    /* Abs: '<S79>/Abs4' */
    LCK_B.Abs4 = (real32_T)fabs(rtu_LCK_VehSigInputs->Steer_Spd);

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
    LCK_B.Gain_f = LCK_P_g.Gain_Gain_o * k_LCK_Lat_Ctrl_Kp;

    /* Abs: '<S76>/Abs' */
    LCK_B.Abs_eh = (real32_T)fabs(LCK_B.Sum1_nd);

    /* Lookup_n-D: '<S76>/k_LCK_Lat_PFac_Dy_Str' */
    LCK_B.k_LCK_Lat_PFac_Dy_Str_n = look1_iflf_linlcpw(LCK_B.Abs_eh,
      k_LCK_Lat_DyBks, k_LCK_Lat_PFac_Dy_Str, 9U);

    /* Lookup_n-D: '<S76>/k_LCK_Lat_PFac_Dy_InnLftCur' */
    LCK_B.k_LCK_Lat_PFac_Dy_InnLftCur_b = look1_iflf_linlcpw(LCK_B.Abs_eh,
      k_LCK_Lat_DyBks, k_LCK_Lat_PFac_Dy_InnLftCur, 9U);

    /* Relay: '<S61>/Relay' */
    if (LCK_B.Sum1_nd >= LCK_P_g.Relay_OnVal) {
      LCK_DW.Relay_Mode = true;
    } else {
      if (LCK_B.Sum1_nd <= LCK_P_g.Relay_OffVal) {
        LCK_DW.Relay_Mode = false;
      }
    }

    if (LCK_DW.Relay_Mode) {
      LCK_B.Relay = LCK_P_g.Relay_YOn;
    } else {
      LCK_B.Relay = LCK_P_g.Relay_YOff;
    }

    /* End of Relay: '<S61>/Relay' */

    /* RelationalOperator: '<S65>/Compare' incorporates:
     *  Constant: '<S65>/Constant'
     */
    LCK_B.Compare_b = (LCK_B.Relay > LCK_P_g.Constant_Value_m);

    /* RelationalOperator: '<S66>/Compare' incorporates:
     *  Constant: '<S66>/Constant'
     */
    LCK_B.Compare_h = (LCK_B.Relay < LCK_P_g.Constant_Value_mf);

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
    LCK_B.Product5_e = LCK_B.Gain1_ht / (real32_T)LCK_P_g.const1_Value_c;

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
    LCK_B.Gain2_a = LCK_P_g.Gain2_Gain_l * k_LCK_Lat_KpKdDecSlopeLmt;

    /* Gain: '<S83>/Gain' */
    LCK_B.Gain_bz = ML_TIME_MSEC * LCK_B.Gain2_a;

    /* Product: '<S83>/Product3' incorporates:
     *  Constant: '<S83>/const'
     */
    LCK_B.Product3_l = LCK_B.Gain_bz / (real32_T)LCK_P_g.const_Value_k;

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
    LCK_B.Gain4_o = LCK_P_g.Gain4_Gain_m * LCK_B.Sum1_oe;

    /* Product: '<S71>/Product6' */
    LCK_B.Product6_e = LCK_B.Gain4_o * LCK_B.Sum1_nd;

    /* UnitDelay: '<S82>/Unit Delay' */
    LCK_B.UnitDelay_k = LCK_DW.UnitDelay_DSTATE_lg;

    /* Gain: '<S82>/Gain2' incorporates:
     *  Constant: '<S82>/k_LCK_Lat_KpKdDecSlopeLmt'
     */
    LCK_B.Gain2_c = LCK_P_g.Gain2_Gain_p * k_LCK_Lat_KpKdDecSlopeLmt;

    /* Gain: '<S82>/Gain' */
    LCK_B.Gain_d = ML_TIME_MSEC * LCK_B.Gain2_c;

    /* Product: '<S82>/Product3' incorporates:
     *  Constant: '<S82>/const'
     */
    LCK_B.Product3_fc = LCK_B.Gain_d / LCK_P_g.const_Value_o;

    /* Gain: '<S82>/Gain1' incorporates:
     *  Constant: '<S82>/k_LCK_Lat_KpKdIncSlopeLmt'
     */
    LCK_B.Gain1_k = ML_TIME_MSEC * k_LCK_Lat_KpKdIncSlopeLmt;

    /* Product: '<S82>/Product5' incorporates:
     *  Constant: '<S82>/const1'
     */
    LCK_B.Product5_j = LCK_B.Gain1_k / LCK_P_g.const1_Value_p;

    /* Product: '<S84>/Product6' incorporates:
     *  Constant: '<S84>/k_LCK_Lat_Ctrl_Kp'
     *  Constant: '<S84>/k_LCK_Lat_Ctrl_Kp_NearGain'
     */
    LCK_B.Product6_g = k_LCK_Lat_Ctrl_Kp * k_LCK_Lat_Ctrl_Kp_NearGain;

    /* Gain: '<S84>/Gain' */
    LCK_B.Gain_du = LCK_P_g.Gain_Gain_l * LCK_B.Product6_g;

    /* Relay: '<S73>/Relay' */
    if (LCK_B.Product_mm >= LCK_P_g.Relay_OnVal_i) {
      LCK_DW.Relay_Mode_a = true;
    } else {
      if (LCK_B.Product_mm <= LCK_P_g.Relay_OffVal_n) {
        LCK_DW.Relay_Mode_a = false;
      }
    }

    if (LCK_DW.Relay_Mode_a) {
      LCK_B.Relay_b = LCK_P_g.Relay_YOn_g;
    } else {
      LCK_B.Relay_b = LCK_P_g.Relay_YOff_e;
    }

    /* Switch: '<S73>/Switch25' incorporates:
     *  Constant: '<S73>/k_LCK_Lat_Ctrl_PFac_Lft'
     *  Constant: '<S73>/k_LCK_Lat_Ctrl_PFac_Rgt'
     */
    if (LCK_B.Relay_b > LCK_P_g.Switch25_Threshold) {
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
    if (LCK_B.Product_mm >= LCK_P_g.Relay1_OnVal_c) {
      LCK_DW.Relay1_Mode_j = true;
    } else {
      if (LCK_B.Product_mm <= LCK_P_g.Relay1_OffVal_b) {
        LCK_DW.Relay1_Mode_j = false;
      }
    }

    if (LCK_DW.Relay1_Mode_j) {
      LCK_B.Relay1_n = LCK_P_g.Relay1_YOn_a;
    } else {
      LCK_B.Relay1_n = LCK_P_g.Relay1_YOff_c;
    }

    /* End of Relay: '<S61>/Relay1' */

    /* RelationalOperator: '<S67>/Compare' incorporates:
     *  Constant: '<S67>/Constant'
     */
    LCK_B.Compare_c = (LCK_B.Relay1_n > LCK_P_g.Constant_Value_h);

    /* RelationalOperator: '<S68>/Compare' incorporates:
     *  Constant: '<S68>/Constant'
     */
    LCK_B.Compare_e = (LCK_B.Relay1_n < LCK_P_g.Constant_Value_c);

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
    LCK_B.Gain1_is = LCK_P_g.Gain1_Gain_j * LCK_B.Sum1_dz;

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
    LCK_B.Gain_n = LCK_P_g.Gain_Gain_e * k_LCK_Lat_PTermMax;

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
    LCK_B.Compare_m = (LCK_B.Switch_hf == LCK_P_g.CompareToConstant4_const);

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

    /* Lookup_n-D: '<S74>/k_LCK_Lat_ILmtFac_Vspd_StraLan' */
    LCK_B.k_LCK_Lat_ILmtFac_Vspd_StraLa_h = look1_iflf_linlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_LCK_VspdBks,
       k_LCK_Lat_ILmtFac_Vspd_StraLan, 15U);

    /* Lookup_n-D: '<S74>/k_LCK_Lat_ILmtFac_Vspd_CurvLan' */
    LCK_B.k_LCK_Lat_ILmtFac_Vspd_CurvLa_i = look1_iflf_linlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_LCK_VspdBks,
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
    LCK_B.Add_p = LCK_P_g.Constant_Value_ad + k_LCK_Lat_ILmtFac_Rad_NearGain;

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
      LCK_B.Switch2_mj = LCK_P_g.Constant4_Value_it;
    } else {
      LCK_B.Switch2_mj = LCK_B.Product2_c;
    }

    /* End of Switch: '<S71>/Switch2' */

    /* UnitDelay: '<S71>/Unit Delay1' */
    LCK_B.UnitDelay1_h = LCK_DW.UnitDelay1_DSTATE_j;

    /* Lookup_n-D: '<S77>/k_LCK_Lat_IFac_Vspd' */
    LCK_B.k_LCK_Lat_IFac_Vspd_c = look1_iflf_linlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_LCK_VspdBks, k_LCK_Lat_IFac_Vspd,
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
    LCK_B.Gain5_m = LCK_P_g.Gain5_Gain_o * LCK_B.Product_b;

    /* Product: '<S71>/Product3' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    LCK_B.Product3_n = LCK_B.Product_mm * LCK_B.Gain5_m * ML_TIME_SEC;

    /* Sum: '<S71>/Add3' */
    LCK_B.Add3_n = LCK_B.UnitDelay1_h + LCK_B.Product3_n;

    /* Switch: '<S71>/Switch1' incorporates:
     *  Constant: '<S19>/Constant'
     */
    if (LCK_P_g.Constant_Value_p) {
      LCK_B.Switch1_ep = LCK_B.UnitDelay1_h;
    } else {
      LCK_B.Switch1_ep = LCK_B.Add3_n;
    }

    /* End of Switch: '<S71>/Switch1' */

    /* RelationalOperator: '<S89>/LowerRelop1' */
    LCK_B.LowerRelop1_f = (LCK_B.Switch1_ep > LCK_B.Switch2_mj);

    /* Gain: '<S71>/Gain8' */
    LCK_B.Gain8 = LCK_P_g.Gain8_Gain * LCK_B.Switch2_mj;

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
      LCK_B.Switch2_l4 = LCK_B.Switch2_mj;
    } else {
      LCK_B.Switch2_l4 = LCK_B.Switch_fi;
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
      LCK_B.Switch3_ez = LCK_P_g.Constant5_Value_n;
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
    if (LCK_P_g.Constant_Value_p) {
      LCK_B.Switch4_k = LCK_B.UnitDelay_et;
    } else {
      LCK_B.Switch4_k = LCK_B.Add1;
    }

    /* End of Switch: '<S71>/Switch4' */

    /* RelationalOperator: '<S88>/LowerRelop1' */
    LCK_B.LowerRelop1_i = (LCK_B.Switch4_k > LCK_B.Switch3_ez);

    /* Gain: '<S71>/Gain2' */
    LCK_B.Gain2_an = LCK_P_g.Gain2_Gain_b * LCK_B.Switch3_ez;

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
    LCK_B.Add4 = LCK_B.Switch2_l4 + LCK_B.Switch2_k;

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
      LCK_B.Switch3_fe = LCK_P_g.Constant5_Value_o1;
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
      LCK_B.Switch1_ku = LCK_P_g.Constant1_Value_mz;
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
    LCK_B.Gain2_e = LCK_P_g.Gain2_Gain_k * k_LCK_Lat_KpKdDecSlopeLmt;

    /* Gain: '<S81>/Gain' */
    LCK_B.Gain_c = ML_TIME_MSEC * LCK_B.Gain2_e;

    /* Product: '<S81>/Product3' incorporates:
     *  Constant: '<S81>/const'
     */
    LCK_B.Product3_b = LCK_B.Gain_c / (real32_T)LCK_P_g.const_Value_i;

    /* Gain: '<S81>/Gain1' incorporates:
     *  Constant: '<S81>/k_LCK_Lat_KpKdIncSlopeLmt'
     */
    LCK_B.Gain1_d = ML_TIME_MSEC * k_LCK_Lat_KpKdIncSlopeLmt;

    /* Product: '<S81>/Product5' incorporates:
     *  Constant: '<S81>/const1'
     */
    LCK_B.Product5_d = LCK_B.Gain1_d / (real32_T)LCK_P_g.const1_Value_gj;

    /* Relay: '<S73>/Relay2' */
    if (LCK_B.Product10 >= LCK_P_g.Relay2_OnVal) {
      LCK_DW.Relay2_Mode = true;
    } else {
      if (LCK_B.Product10 <= LCK_P_g.Relay2_OffVal) {
        LCK_DW.Relay2_Mode = false;
      }
    }

    if (LCK_DW.Relay2_Mode) {
      LCK_B.Relay2 = LCK_P_g.Relay2_YOn;
    } else {
      LCK_B.Relay2 = LCK_P_g.Relay2_YOff;
    }

    /* Switch: '<S73>/Switch1' incorporates:
     *  Constant: '<S73>/k_LCK_Lat_Ctrl_DFac_Lft'
     *  Constant: '<S73>/k_LCK_Lat_Ctrl_DFac_Rgt'
     */
    if (LCK_B.Relay2 > LCK_P_g.Switch1_Threshold_g) {
      LCK_B.Switch1_p = k_LCK_Lat_Ctrl_DFac_Rgt;
    } else {
      LCK_B.Switch1_p = k_LCK_Lat_Ctrl_DFac_Lft;
    }

    /* End of Switch: '<S73>/Switch1' */

    /* Lookup_n-D: '<S77>/k_LCK_Lat_DFac_Vspd' */
    LCK_B.k_LCK_Lat_DFac_Vspd_p = look1_iflf_linlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_LCK_VspdBks, k_LCK_Lat_DFac_Vspd,
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
    LCK_B.Gain3_o = LCK_P_g.Gain3_Gain_m * LCK_B.Sum1_ob;

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
    if (LCK_B.Sum1_lc > LCK_P_g.Saturation_UpperSat_n) {
      /* Saturate: '<S71>/Saturation' */
      LCK_B.Saturation_d = LCK_P_g.Saturation_UpperSat_n;
    } else if (LCK_B.Sum1_lc < LCK_P_g.Saturation_LowerSat_e) {
      /* Saturate: '<S71>/Saturation' */
      LCK_B.Saturation_d = LCK_P_g.Saturation_LowerSat_e;
    } else {
      /* Saturate: '<S71>/Saturation' */
      LCK_B.Saturation_d = LCK_B.Sum1_lc;
    }

    /* End of Saturate: '<S86>/Saturation' */

    /* Saturate: '<S71>/Saturation' */
    if (LCK_B.Saturation_d > LCK_P_g.Saturation_UpperSat_i) {
      LCK_B.Saturation_g = LCK_P_g.Saturation_UpperSat_i;
    } else if (LCK_B.Saturation_d < LCK_P_g.Saturation_LowerSat_aw) {
      LCK_B.Saturation_g = LCK_P_g.Saturation_LowerSat_aw;
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
    LCK_B.Gain2_g = LCK_P_g.Gain2_Gain_bt * LCK_B.Saturation_as;

    /* Gain: '<S17>/C_KPH2MPS' */
    LCK_B.C_KPH2MPS_i = C_KPH2MPS * rtu_LCK_VehSigInputs->Vehicle_Speed;

    /* Lookup_n-D: '<S17>/Lookup_Table' */
    LCK_B.Lookup_Table_k = look1_iflf_binlcpw(LCK_B.Saturation_k3, k_LCK_RadBks,
      LCK_P_g.Lookup_Table_tableData_h, 13U);

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
    LCK_B.Compare_l = (uint8_T)(LCK_B.Abs1_b <
      LCK_P_g.CompareToConstant1_const_j);

    /* Switch: '<S17>/Switch1' incorporates:
     *  Constant: '<S17>/Constant1'
     */
    if (LCK_B.Compare_l >= LCK_P_g.Switch1_Threshold_p) {
      LCK_B.Switch1_b = LCK_P_g.Constant1_Value_j;
    } else {
      LCK_B.Switch1_b = LCK_B.Sum_e;
    }

    /* End of Switch: '<S17>/Switch1' */

    /* Switch: '<S31>/Switch8' incorporates:
     *  Constant: '<S31>/k_LCK_Ffw_CvatSwh'
     */
    if (k_LCK_Ffw_CvatSwh > LCK_P_g.Switch8_Threshold_a) {
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
    LCK_B.Compare_f = (LCK_B.Switch8_o <= LCK_P_g.Constant_Value_n);

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
    LCK_B.Compare_n = (LCK_B.Switch8_o <= LCK_P_g.Constant_Value_gs);

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

    /* Lookup_n-D: '<S31>/k_LCK_FfwFac_Vspd' */
    LCK_B.k_LCK_FfwFac_Vspd_l = look1_iflf_linlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_LCK_VspdBks, k_LCK_FfwFac_Vspd,
       15U);

    /* Signum: '<S31>/Sign' incorporates:
     *  Gain: '<S31>/Gain'
     */
    LCK_B.Gain_j = LCK_P_g.Gain_Gain_b * LCK_B.Switch8_o;
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
    LCK_B.Compare_c1 = (LCK_B.Switch8_o <= LCK_P_g.Constant_Value_cs);

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

    /* Lookup_n-D: '<S31>/k_LCK_FfwDeltaFac_Vspd' */
    LCK_B.k_LCK_FfwDeltaFac_Vspd_f = look1_iflf_linlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_LCK_VspdBks,
       k_LCK_FfwDeltaFac_Vspd, 15U);

    /* Signum: '<S31>/Sign1' incorporates:
     *  Gain: '<S31>/Gain1'
     */
    LCK_B.Gain1_e = LCK_P_g.Gain1_Gain_g * LCK_B.Product_mm;
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
    if (LCK_B.Sum1_lv > LCK_P_g.Saturation_UpperSat_a) {
      LCK_B.Saturation_d5 = LCK_P_g.Saturation_UpperSat_a;
    } else if (LCK_B.Sum1_lv < LCK_P_g.Saturation_LowerSat_gy) {
      LCK_B.Saturation_d5 = LCK_P_g.Saturation_LowerSat_gy;
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
    LCK_B.Gain2_h = LCK_P_g.Gain2_Gain_a * k_LCK_KpKdDecSlopeLmt;

    /* Gain: '<S103>/Gain' */
    LCK_B.Gain_kf = ML_TIME_MSEC * LCK_B.Gain2_h;

    /* Product: '<S103>/Product3' incorporates:
     *  Constant: '<S103>/const'
     */
    LCK_B.Product3_i = LCK_B.Gain_kf / LCK_P_g.const_Value_m;

    /* Gain: '<S103>/Gain1' incorporates:
     *  Constant: '<S103>/k_LCK_KpKdIncSlopeLmt'
     */
    LCK_B.Gain1_f = ML_TIME_MSEC * k_LCK_KpKdIncSlopeLmt;

    /* Product: '<S103>/Product5' incorporates:
     *  Constant: '<S103>/const1'
     */
    LCK_B.Product5_ei = LCK_B.Gain1_f / LCK_P_g.const1_Value_f;

    /* Relay: '<S94>/Relay' */
    if (LCK_B.C_RAD2DEG_f >= LCK_P_g.Relay_OnVal_h) {
      LCK_DW.Relay_Mode_p = true;
    } else {
      if (LCK_B.C_RAD2DEG_f <= LCK_P_g.Relay_OffVal_l) {
        LCK_DW.Relay_Mode_p = false;
      }
    }

    if (LCK_DW.Relay_Mode_p) {
      LCK_B.Relay_k = LCK_P_g.Relay_YOn_e;
    } else {
      LCK_B.Relay_k = LCK_P_g.Relay_YOff_k;
    }

    /* Switch: '<S94>/Switch25' incorporates:
     *  Constant: '<S94>/k_LCK_LatCtrl_PFac_Lft'
     *  Constant: '<S94>/k_LCK_LatCtrl_PFac_Rgt'
     */
    if (LCK_B.Relay_k > LCK_P_g.Switch25_Threshold_i) {
      LCK_B.Switch25_n = k_LCK_LatCtrl_PFac_Rgt;
    } else {
      LCK_B.Switch25_n = k_LCK_LatCtrl_PFac_Lft;
    }

    /* End of Switch: '<S94>/Switch25' */

    /* Abs: '<S95>/Abs2' */
    LCK_B.Abs2_m = (real32_T)fabs(LCK_B.C_RAD2DEG_f);

    /* Lookup_n-D: '<S95>/k_LCK_PFac_Ha_StrCen' */
    LCK_B.k_LCK_PFac_Ha_StrCen = look1_iflf_linlcpw(LCK_B.Abs2_m,
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
      LCK_B.Switch5_j = LCK_P_g.CenUpLmt0_Value;
      LCK_B.Switch2_g0 = LCK_P_g.CenLowLmt0_Value;
    } else {
      LCK_B.Switch5_j = LCK_P_g.CenUpLmt1_Value;
      LCK_B.Switch2_g0 = LCK_P_g.CenLowLmt1_Value;
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
    LCK_B.k_LCK_PFac_HaStrSid_e = look1_iflf_linlcpw(LCK_B.Abs2_m,
      k_LCK_HedAngDiffX, k_LCK_PFac_HaStrSid, 9U);

    /* Lookup_n-D: '<S95>/k_LCK_PFac_HaCurCen' */
    LCK_B.k_LCK_PFac_HaCurCen_a = look1_iflf_linlcpw(LCK_B.Abs2_m,
      k_LCK_HedAngDiffX, k_LCK_PFac_HaCurCen, 9U);

    /* Lookup_n-D: '<S95>/k_LCK_PFac_HaCurSid' */
    LCK_B.k_LCK_PFac_HaCurSid_f = look1_iflf_linlcpw(LCK_B.Abs2_m,
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
      LCK_B.Switch5_o = LCK_P_g.Constant6_Value_f;
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
      LCK_B.Switch2_nn = LCK_P_g.Constant2_Value_f;
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

    /* Sum: '<S44>/Sum' */
    LCK_B.Sum_hs = rtu_LCK_VehSigInputs->Veh_Yaw_Rate - LCK_B.UnitDelay_ez;

    /* Product: '<S44>/Product' */
    LCK_B.Product_n4 = LCK_B.Product1_ee * LCK_B.Sum_hs;

    /* Saturate: '<S44>/Saturation' incorporates:
     *  Sum: '<S44>/Sum1'
     */
    LCK_B.Sum1_oq = LCK_B.Product_n4 + LCK_B.UnitDelay_ez;
    if (LCK_B.Sum1_oq > LCK_P_g.Saturation_UpperSat_mv) {
      LCK_B.Saturation_j = LCK_P_g.Saturation_UpperSat_mv;
    } else if (LCK_B.Sum1_oq < LCK_P_g.Saturation_LowerSat_ge) {
      LCK_B.Saturation_j = LCK_P_g.Saturation_LowerSat_ge;
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
    LCK_B.Gain1_ba = LCK_P_g.Gain1_Gain_c * LCK_B.Sign_m;

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
      LCK_B.Switch18_d = LCK_P_g.Constant2_Value_br;
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

    /* Lookup_n-D: '<S43>/k_LCK_YawRate_OffsetFac_Vspd' */
    LCK_B.k_LCK_YawRate_OffsetFac_Vspd_d = look1_iflf_linlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_LCK_VspdBks,
       k_LCK_YawRate_OffsetFac_Vspd, 15U);

    /* Product: '<S43>/Product2' */
    LCK_B.Product2_m = LCK_B.Gain1_ba * LCK_B.Switch18_d * LCK_B.Switch4_cg *
      LCK_B.k_LCK_YawRate_OffsetFac_Vspd_d;

    /* Sum: '<S43>/Sum1' */
    LCK_B.Sum1_e = LCK_B.Product1_n3 + LCK_B.Product2_m;

    /* Gain: '<S43>/C_DEG2RAD' */
    LCK_B.C_DEG2RAD_i = C_DEG2RAD * LCK_B.Sum1_e;

    /* Gain: '<S43>/C_KPH2MPS' */
    LCK_B.C_KPH2MPS_b = C_KPH2MPS * rtu_LCK_VehSigInputs->Vehicle_Speed;

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

    /* Abs: '<S97>/Abs1' */
    LCK_B.Abs1_g = (real32_T)fabs(rtu_LCK_VehSigInputs->Steer_Ang);

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

    /* Abs: '<S98>/Abs4' */
    LCK_B.Abs4_a = (real32_T)fabs(rtu_LCK_VehSigInputs->Steer_Spd);

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

    /* Lookup_n-D: '<S100>/k_LCK_PFac_Vspd' */
    LCK_B.k_LCK_PFac_Vspd_a = look1_iflf_linlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_LCK_VspdBks, k_LCK_PFac_Vspd, 15U);

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
    LCK_B.Gain1_es = LCK_P_g.Gain1_Gain_k * LCK_B.Sum1_oc;

    /* Product: '<S92>/Product' */
    LCK_B.Product_d = LCK_B.Gain1_es * LCK_B.C_RAD2DEG_f;

    /* RelationalOperator: '<S106>/LowerRelop1' incorporates:
     *  Constant: '<S92>/k_LCK_PTermMax'
     */
    LCK_B.LowerRelop1_i3 = (LCK_B.Product_d > k_LCK_PTermMax);

    /* Gain: '<S92>/Gain' incorporates:
     *  Constant: '<S92>/k_LCK_PTermMax'
     */
    LCK_B.Gain_nc = LCK_P_g.Gain_Gain_c2 * k_LCK_PTermMax;

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
    LCK_B.Gain2_j = LCK_P_g.Gain2_Gain_o * k_LCK_KpKdDecSlopeLmt;

    /* Gain: '<S102>/Gain' */
    LCK_B.Gain_m = ML_TIME_MSEC * LCK_B.Gain2_j;

    /* Product: '<S102>/Product3' incorporates:
     *  Constant: '<S102>/const'
     */
    LCK_B.Product3_pu = LCK_B.Gain_m / LCK_P_g.const_Value_n;

    /* Gain: '<S102>/Gain1' incorporates:
     *  Constant: '<S102>/k_LCK_KpKdIncSlopeLmt'
     */
    LCK_B.Gain1_bh = ML_TIME_MSEC * k_LCK_KpKdIncSlopeLmt;

    /* Product: '<S102>/Product5' incorporates:
     *  Constant: '<S102>/const1'
     */
    LCK_B.Product5_k = LCK_B.Gain1_bh / LCK_P_g.const1_Value_j;

    /* Relay: '<S94>/Relay1' */
    if (LCK_B.Product2_p3 >= LCK_P_g.Relay1_OnVal_a) {
      LCK_DW.Relay1_Mode_f = true;
    } else {
      if (LCK_B.Product2_p3 <= LCK_P_g.Relay1_OffVal_o) {
        LCK_DW.Relay1_Mode_f = false;
      }
    }

    if (LCK_DW.Relay1_Mode_f) {
      LCK_B.Relay1_k = LCK_P_g.Relay1_YOn_k;
    } else {
      LCK_B.Relay1_k = LCK_P_g.Relay1_YOff_p;
    }

    /* Switch: '<S94>/Switch26' incorporates:
     *  Constant: '<S94>/k_LCK_LatCtrl_DFac_Lft'
     *  Constant: '<S94>/k_LCK_LatCtrl_DFac_Rgt'
     */
    if (LCK_B.Relay1_k > LCK_P_g.Switch26_Threshold) {
      LCK_B.Switch26 = k_LCK_LatCtrl_DFac_Rgt;
    } else {
      LCK_B.Switch26 = k_LCK_LatCtrl_DFac_Lft;
    }

    /* End of Switch: '<S94>/Switch26' */

    /* Lookup_n-D: '<S95>/k_LCK_DFac_HaStrCen' */
    LCK_B.k_LCK_DFac_HaStrCen_e = look1_iflf_linlcpw(LCK_B.Abs2_m,
      k_LCK_HedAngDiffX, k_LCK_DFac_HaStrCen, 9U);

    /* Lookup_n-D: '<S95>/k_LCK_DFac_HaStrSid' */
    LCK_B.k_LCK_DFac_HaStrSid_a = look1_iflf_linlcpw(LCK_B.Abs2_m,
      k_LCK_HedAngDiffX, k_LCK_DFac_HaStrSid, 9U);

    /* Lookup_n-D: '<S95>/k_LCK_DFac_HaCurCen' */
    LCK_B.k_LCK_DFac_HaCurCen_g = look1_iflf_linlcpw(LCK_B.Abs2_m,
      k_LCK_HedAngDiffX, k_LCK_DFac_HaCurCen, 9U);

    /* Lookup_n-D: '<S95>/k_LCK_DFac_HaCurSid' */
    LCK_B.k_LCK_DFac_HaCurSid_a = look1_iflf_linlcpw(LCK_B.Abs2_m,
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

    /* Lookup_n-D: '<S100>/k_LCK_DFac_Vspd' */
    LCK_B.k_LCK_DFac_Vspd_a = look1_iflf_linlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_LCK_VspdBks, k_LCK_DFac_Vspd, 15U);

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
    LCK_B.Gain3_n = LCK_P_g.Gain3_Gain_a * LCK_B.Sum1_h;

    /* Product: '<S92>/Product2' */
    LCK_B.Product2_h = LCK_B.Product2_p3 * LCK_B.Gain3_n;

    /* RelationalOperator: '<S107>/LowerRelop1' incorporates:
     *  Constant: '<S92>/k_LCK_DTermMax'
     */
    LCK_B.LowerRelop1_fo = (LCK_B.Product2_h > k_LCK_DTermMax);

    /* Gain: '<S92>/Gain4' incorporates:
     *  Constant: '<S92>/k_LCK_DTermMax'
     */
    LCK_B.Gain4_p = LCK_P_g.Gain4_Gain_c * k_LCK_DTermMax;

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
    if (LCK_B.Sum1_g > LCK_P_g.Saturation_UpperSat_h) {
      /* Saturate: '<S92>/Saturation' */
      LCK_B.Saturation_lf = LCK_P_g.Saturation_UpperSat_h;
    } else if (LCK_B.Sum1_g < LCK_P_g.Saturation_LowerSat_hy) {
      /* Saturate: '<S92>/Saturation' */
      LCK_B.Saturation_lf = LCK_P_g.Saturation_LowerSat_hy;
    } else {
      /* Saturate: '<S92>/Saturation' */
      LCK_B.Saturation_lf = LCK_B.Sum1_g;
    }

    /* End of Saturate: '<S105>/Saturation' */

    /* Saturate: '<S92>/Saturation' */
    if (LCK_B.Saturation_lf > LCK_P_g.Saturation_UpperSat_b) {
      LCK_B.Saturation_kk = LCK_P_g.Saturation_UpperSat_b;
    } else if (LCK_B.Saturation_lf < LCK_P_g.Saturation_LowerSat_jc) {
      LCK_B.Saturation_kk = LCK_P_g.Saturation_LowerSat_jc;
    } else {
      LCK_B.Saturation_kk = LCK_B.Saturation_lf;
    }

    /* Sum: '<S37>/Sum2' */
    LCK_B.Sum2_k = (LCK_B.Saturation_g + LCK_B.Saturation_kk) +
      LCK_B.Saturation_d5;

    /* RelationalOperator: '<S37>/Relational Operator3' incorporates:
     *  Constant: '<S37>/Constant2'
     */
    LCK_B.RelationalOperator3_n4 = (LCK_B.Switch2_md <=
      LCK_P_g.Constant2_Value_c);

    /* Switch: '<S37>/Switch10' incorporates:
     *  Constant: '<S37>/Constant1'
     */
    if (LCK_B.RelationalOperator3_n4) {
      LCK_B.Switch10_gr = LCK_B.Sum2_k;
    } else {
      LCK_B.Switch10_gr = LCK_P_g.Constant1_Value_n;
    }

    /* End of Switch: '<S37>/Switch10' */

    /* Abs: '<S37>/Abs' */
    LCK_B.Abs_os = (real32_T)fabs(LCK_B.Switch10_gr);

    /* Lookup_n-D: '<S37>/k_LCK_NonLinCompTab' */
    LCK_B.k_LCK_NonLinCompTab_e = look1_iflf_linlcpw(LCK_B.Abs_os,
      k_LCK_TorqCmdBks, k_LCK_NonLinCompTab, 19U);

    /* Lookup_n-D: '<S37>/k_LCK_NonLinCompFac_Vspd' */
    LCK_B.k_LCK_NonLinCompFac_Vspd_p = look1_iflf_linlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_LCK_VspdBks,
       k_LCK_NonLinCompFac_Vspd, 15U);

    /* Product: '<S37>/Product3' */
    LCK_B.Product3_a = LCK_B.Switch10_gr * LCK_B.k_LCK_NonLinCompTab_e *
      LCK_B.k_LCK_NonLinCompFac_Vspd_p;

    /* Switch: '<S37>/Switch3' incorporates:
     *  Constant: '<S37>/k_LCK_NonLinearComp_En'
     */
    if (k_LCK_NonLinearComp_En >= LCK_P_g.Switch3_Threshold_b) {
      /* Saturate: '<S37>/Saturation1' */
      LCK_B.Switch3_eo = LCK_B.Product3_a;
    } else {
      /* Saturate: '<S37>/Saturation1' */
      LCK_B.Switch3_eo = LCK_B.Switch10_gr;
    }

    /* End of Switch: '<S37>/Switch3' */

    /* Saturate: '<S37>/Saturation1' */
    if (LCK_B.Switch3_eo > LCK_P_g.Saturation1_UpperSat) {
      LCK_B.Saturation1 = LCK_P_g.Saturation1_UpperSat;
    } else if (LCK_B.Switch3_eo < LCK_P_g.Saturation1_LowerSat) {
      LCK_B.Saturation1 = LCK_P_g.Saturation1_LowerSat;
    } else {
      LCK_B.Saturation1 = LCK_B.Switch3_eo;
    }

    /* RelationalOperator: '<S39>/Compare' incorporates:
     *  Constant: '<S39>/Constant'
     */
    LCK_B.Compare_hy = (LCK_B.Switch_hf >= LCK_P_g.CompareToConstant_const_n);

    /* Switch: '<S38>/Switch4' incorporates:
     *  Constant: '<S38>/Constant1'
     */
    if (LCK_B.Compare_hy) {
      LCK_B.Switch4_o = LCK_B.Saturation1;
    } else {
      LCK_B.Switch4_o = LCK_P_g.Constant1_Value_dy;
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
    LCK_B.Compare_ed = (LCK_B.UnitDelay1_o == LCK_P_g.CompareToConstant1_const_m);

    /* Logic: '<S38>/Logical Operator' */
    LCK_B.LogicalOperator_h = (LCK_B.Compare_hy && LCK_B.Compare_ed);

    /* Chart: '<S41>/Trigger Hold' incorporates:
     *  Constant: '<S38>/Constant2'
     */
    LCK_TriggerHold(LCK_B.LogicalOperator_h, LCK_P_g.Constant2_Value_aq,
                    &LCK_B.sf_TriggerHold);

    /* Lookup_n-D: '<S38>/k_LCK_RatLmtFac_TorqCmd_Vspd' */
    LCK_B.k_LCK_RatLmtFac_TorqCmd_Vspd_b = look1_iflf_linlcpw
      (rtu_LCK_VehSigInputs->Vehicle_Speed, k_LCK_VspdBks,
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
      LCK_B.Switch_b = LCK_P_g.Constant3_Value_cw;
    } else {
      LCK_B.Switch_b = LCK_B.Product1_ex;
    }

    /* End of Switch: '<S38>/Switch' */

    /* Gain: '<S38>/Gain1' */
    LCK_B.Gain1_f4 = ML_TIME_MSEC * LCK_B.Switch_b;

    /* Product: '<S38>/Product5' incorporates:
     *  Constant: '<S38>/const1'
     */
    LCK_B.Product5_eg = LCK_B.Gain1_f4 / LCK_P_g.const1_Value_jp;

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
    LCK_B.Gain2_d = LCK_P_g.Gain2_Gain_a5 * LCK_B.Switch_b;

    /* Gain: '<S38>/Gain' */
    LCK_B.Gain_nl = ML_TIME_MSEC * LCK_B.Gain2_d;

    /* Product: '<S38>/Product3' incorporates:
     *  Constant: '<S38>/const'
     */
    LCK_B.Product3_j = LCK_B.Gain_nl / LCK_P_g.const_Value_c;

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
      LCK_PID_TorqCmd = (real32_T)LCK_P_g.Constant3_Value_a;
    }

    /* End of Switch: '<S37>/Switch1' */

    /* Product: '<S37>/Divide' */
    LCK_B.Divide_h = LCK_PID_TorqCmd / LCK_B.Switch10_gr;

    /* Gain: '<S11>/Gain3' */
    LCK_B.Gain3_p = LCK_P_g.Gain3_Gain_g * LCK_B.Product3_m;

    /* Gain: '<S11>/Gain' */
    LCK_B.Gain_o = LCK_P_g.Gain_Gain_pt * LCK_B.k_LCK_FfwFac_Dy_e;

    /* Gain: '<S11>/Gain2' */
    LCK_B.Gain2_du = LCK_P_g.Gain2_Gain_d * LCK_B.Product2_p;

    /* Gain: '<S11>/Gain1' */
    LCK_B.Gain1_j = LCK_P_g.Gain1_Gain_f * LCK_B.Switch1_hx;

    /* Sum: '<S71>/Add5' */
    LCK_B.Add5 = LCK_B.Switch2_l4 + LCK_B.Switch2_k;

    /* Gain: '<S17>/Gain3' */
    Curvature_Rate = LCK_P_g.Gain3_Gain_gl * LCK_B.Saturation_as;

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
      LCK_B.Switch1_c = LCK_P_g.Constant2_Value_j;
    }

    /* End of Switch: '<S231>/Switch1' */

    /* DataTypeConversion: '<S231>/Data Type Conversion6' */
    LCK_B.DataTypeConversion6_l = (real32_T)LCK_B.Switch1_c;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    *rty_Lateral_HMI_LC_Dis_dy = LCK_B.DataTypeConversion6_l;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    *rty_Lateral_HMI_LC_Dis_dx = *rty_LC_dx;

    /* Saturate: '<S231>/Saturation1' incorporates:
     *  Constant: '<S231>/ML_TIME_SEC'
     *  Product: '<S231>/Product'
     */
    LCK_B.Product_g2 = LCK_B.pass_cnt * ML_TIME_SEC;
    if (LCK_B.Product_g2 > LCK_P_g.Saturation1_UpperSat_j) {
      LCK_B.Saturation1_b = LCK_P_g.Saturation1_UpperSat_j;
    } else if (LCK_B.Product_g2 < LCK_P_g.Saturation1_LowerSat_k) {
      LCK_B.Saturation1_b = LCK_P_g.Saturation1_LowerSat_k;
    } else {
      LCK_B.Saturation1_b = LCK_B.Product_g2;
    }

    /* End of Saturate: '<S231>/Saturation1' */

    /* RelationalOperator: '<S7>/Relational Operator20' incorporates:
     *  Constant: '<S7>/Constant29'
     */
    LCK_B.RelationalOperator20_e = (*rty_LCK_Mode == LCK_P_g.Constant29_Value_j);

    /* DataTypeConversion: '<S7>/Data Type Conversion' */
    LCK_B.DataTypeConversion_m = LCK_B.RelationalOperator20_e;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    *rty_Lateral_HMI_LKS_Error = LCK_B.DataTypeConversion_m;

    /* RelationalOperator: '<S7>/Relational Operator2' incorporates:
     *  Constant: '<S7>/Constant3'
     */
    LCK_B.RelationalOperator2_bc = (*rty_LCK_Mode == LCK_P_g.Constant3_Value_k3);

    /* RelationalOperator: '<S7>/Relational Operator3' incorporates:
     *  Constant: '<S7>/Constant5'
     */
    LCK_B.RelationalOperator3_e = (*rty_LCK_Mode == LCK_P_g.Constant5_Value_b);

    /* Switch: '<S7>/Switch2' incorporates:
     *  Constant: '<S7>/Constant6'
     *  Constant: '<S7>/Constant7'
     */
    if (LCK_B.RelationalOperator3_e) {
      LCK_B.Switch2_g = LCK_P_g.Constant6_Value_k;
    } else {
      LCK_B.Switch2_g = LCK_P_g.Constant7_Value_j;
    }

    /* End of Switch: '<S7>/Switch2' */

    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/Constant4'
     */
    if (LCK_B.RelationalOperator2_bc) {
      LCK_B.Switch1_k = LCK_P_g.Constant4_Value_ih;
    } else {
      LCK_B.Switch1_k = LCK_B.Switch2_g;
    }

    /* End of Switch: '<S7>/Switch1' */

    /* DataTypeConversion: '<S7>/Data Type Conversion3' */
    LCK_B.DataTypeConversion3_m = (real32_T)LCK_B.Switch1_k;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    *rty_Lateral_HMI_LC_Direction = LCK_B.DataTypeConversion3_m;

    /* RelationalOperator: '<S7>/Relational Operator4' incorporates:
     *  Constant: '<S7>/Constant9'
     */
    LCK_B.RelationalOperator4_ap = (*rty_LCK_Mode == LCK_P_g.Constant9_Value_l);

    /* RelationalOperator: '<S7>/Relational Operator1' incorporates:
     *  Constant: '<S7>/Constant1'
     */
    LCK_B.RelationalOperator1_df = (*rty_LCK_Mode == LCK_P_g.Constant1_Value_o);

    /* RelationalOperator: '<S7>/Relational Operator5' incorporates:
     *  Constant: '<S7>/Constant12'
     */
    LCK_B.RelationalOperator5_ck = (*rty_LCK_Mode == LCK_P_g.Constant12_Value_o);

    /* Switch: '<S7>/Switch5' incorporates:
     *  Constant: '<S7>/Constant13'
     *  Constant: '<S7>/Constant14'
     */
    if (LCK_B.RelationalOperator5_ck) {
      LCK_B.Switch5_kl = LCK_P_g.Constant13_Value_n;
    } else {
      LCK_B.Switch5_kl = LCK_P_g.Constant14_Value_b;
    }

    /* End of Switch: '<S7>/Switch5' */

    /* Switch: '<S7>/Switch4' incorporates:
     *  Constant: '<S7>/Constant11'
     */
    if (LCK_B.RelationalOperator1_df) {
      LCK_B.Switch4_l = LCK_P_g.Constant11_Value_e;
    } else {
      LCK_B.Switch4_l = LCK_B.Switch5_kl;
    }

    /* End of Switch: '<S7>/Switch4' */

    /* Switch: '<S7>/Switch3' incorporates:
     *  Constant: '<S7>/Constant10'
     */
    if (LCK_B.RelationalOperator4_ap) {
      LCK_B.Switch3_h = LCK_P_g.Constant10_Value_b;
    } else {
      LCK_B.Switch3_h = LCK_B.Switch4_l;
    }

    /* End of Switch: '<S7>/Switch3' */

    /* DataTypeConversion: '<S7>/Data Type Conversion1' */
    LCK_B.DataTypeConversion1_b = (real32_T)LCK_B.Switch3_h;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    *rty_Lateral_HMI_LKS_Status = LCK_B.DataTypeConversion1_b;

    /* RelationalOperator: '<S7>/Relational Operator7' incorporates:
     *  Constant: '<S7>/Constant16'
     */
    LCK_B.RelationalOperator7_c = (*rty_LCK_Mode == LCK_P_g.Constant16_Value_k);

    /* RelationalOperator: '<S7>/Relational Operator6' incorporates:
     *  Constant: '<S7>/Constant15'
     */
    LCK_B.RelationalOperator6_l = (*rtu_ZOP_LC_Command !=
      LCK_P_g.Constant15_Value_i);

    /* Logic: '<S7>/Logical Operator2' */
    LCK_B.LogicalOperator2_n = (LCK_B.RelationalOperator7_c &&
      LCK_B.RelationalOperator6_l);

    /* RelationalOperator: '<S7>/Relational Operator8' incorporates:
     *  Constant: '<S7>/Constant18'
     */
    LCK_B.RelationalOperator8_i = (*rty_LCK_Mode > LCK_P_g.Constant18_Value_g);

    /* Logic: '<S7>/Logical Operator1' */
    LCK_B.LogicalOperator1_c = (LCK_B.RelationalOperator6_l &&
      LCK_B.RelationalOperator8_i);

    /* RelationalOperator: '<S7>/Relational Operator9' incorporates:
     *  Constant: '<S7>/Constant20'
     */
    LCK_B.RelationalOperator9_e = (*rty_LCK_Mode == LCK_P_g.Constant20_Value_p);

    /* Delay: '<S7>/Delay1' */
    LCK_B.Delay1_i = LCK_DW.Delay1_DSTATE_j;

    /* RelationalOperator: '<S7>/Relational Operator10' incorporates:
     *  Constant: '<S7>/Constant21'
     */
    LCK_B.RelationalOperator10_m = (LCK_B.Delay1_i > LCK_P_g.Constant21_Value_j);

    /* Logic: '<S7>/Logical Operator3' */
    LCK_B.LogicalOperator3_g = (LCK_B.RelationalOperator9_e &&
      LCK_B.RelationalOperator10_m);

    /* DataTypeConversion: '<S7>/Data Type Conversion54' */
    LCK_B.DataTypeConversion54_k = LCK_B.LogicalOperator3_g;

    /* Chart: '<S235>/Trigger Hold' incorporates:
     *  Constant: '<S7>/Constant22'
     */
    LCK_TriggerHold_i(LCK_B.DataTypeConversion54_k, LCK_P_g.Constant22_Value_k,
                      &LCK_B.sf_TriggerHold_b);

    /* Switch: '<S7>/Switch7' incorporates:
     *  Constant: '<S7>/Constant19'
     */
    if (LCK_B.LogicalOperator1_c) {
      LCK_B.Switch7_c = LCK_P_g.Constant19_Value_k;
    } else {
      LCK_B.Switch7_c = LCK_B.sf_TriggerHold_b.Out;
    }

    /* End of Switch: '<S7>/Switch7' */

    /* Switch: '<S7>/Switch6' incorporates:
     *  Constant: '<S7>/Constant17'
     */
    if (LCK_B.LogicalOperator2_n) {
      LCK_B.Switch6_kp = (real32_T)LCK_P_g.Constant17_Value_h;
    } else {
      LCK_B.Switch6_kp = (real32_T)LCK_B.Switch7_c;
    }

    /* End of Switch: '<S7>/Switch6' */

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    *rty_Lateral_HMI_LC_Request = LCK_B.Switch6_kp;

    /* Gain: '<S5>/Gain' */
    LCK_B.Gain_hz = LCK_P_g.Gain_Gain_bk * *rty_LCK_Mode;

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
    *rty_Lateral_HMI_Handsoff_Warnin = LCK_B.DataTypeConversion2_b;
    LCK_B.LCK_PID_Main_Version = LCK_P_g.LCK_PID_Main_Version_Value;
    LCK_B.LCK_PID_Minor_Version = LCK_P_g.LCK_PID_Minor_Version_Value;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_LCK_Debug_Info_at_inport_0' incorporates:
     *  Constant: '<S4>/LCK_PID_Main_Version'
     *  Constant: '<S4>/LCK_PID_Minor_Version'
     */
    LCK_B.LanSigInputs = *rtu_LCK_LanSigInputs;

    /* SignalConversion: '<S7>/TmpBufferAtConstant8Outport1' incorporates:
     *  Constant: '<S7>/Constant8'
     */
    LCK_B.TmpBufferAtConstant8Outport1 = LCK_P_g.Constant8_Value_l;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    *rty_Lateral_HMI_LKS_Passive_Rea = LCK_B.TmpBufferAtConstant8Outport1;

    /* SignalConversion: '<S7>/TmpBufferAtConstant2Outport1' incorporates:
     *  Constant: '<S7>/Constant2'
     */
    LCK_B.TmpBufferAtConstant2Outport1 = LCK_P_g.Constant2_Value_i;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    *rty_Lateral_HMI_LC_pro_reason = LCK_B.TmpBufferAtConstant2Outport1;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    *rty_Lateral_HMI_LC_Proposal = LCK_B.TmpBufferAtConstant2Outport1;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    *rty_Lateral_HMI_LC_Reason = LCK_B.TmpBufferAtConstant2Outport1;

    /* SignalConversion: '<S7>/TmpBufferAtConstant23Outport1' incorporates:
     *  Constant: '<S7>/Constant23'
     */
    LCK_B.TmpBufferAtConstant23Outport1 = LCK_P_g.Constant23_Value_h;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    *rty_Lateral_HMI_LC_Tip = LCK_B.TmpBufferAtConstant23Outport1;

    /* SignalConversion: '<S1>/BusConversion_InsertedFor_Lateral_HMI_at_inport_0' */
    *rty_Lateral_HMI_LC_Fail_Tip = LCK_B.TmpBufferAtConstant23Outport1;
    LCK_B.k_HighAccel_suppress_hold_a = k_HighAccel_suppress_hold;

    /* Update for Delay: '<S231>/Delay1' incorporates:
     *  Constant: '<S113>/k_HighAccel_suppress_hold'
     */
    memcpy(&LCK_DW.Delay1_DSTATE[0], &LCK_B.output[0], 3200U * sizeof(real_T));

    /* Update for Delay: '<S244>/Delay' */
    LCK_DW.Delay_DSTATE = LCK_B.Switch;

    /* Update for UnitDelay: '<S240>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE = LCK_B.Saturation;

    /* Update for UnitDelay: '<S241>/Unit Delay' */
    LCK_DW.UnitDelay_DSTATE_a = LCK_B.Saturation_k;

    /* Update for Delay: '<S244>/Delay1' */
    LCK_DW.Delay1_DSTATE_c = LCK_B.Switch;

    /* Update for Delay: '<S8>/Delay' */
    LCK_DW.Delay_DSTATE_f = *rtu_Fus_Lane_Info_primaryObjTra;

    /* Update for Enabled SubSystem: '<S8>/Subsystem4' incorporates:
     *  EnablePort: '<S248>/Enable'
     */
    if (LCK_B.LogicalOperator22_f) {
      /* Update for Delay: '<S248>/Delay1' */
      LCK_DW.Delay1_DSTATE_p = LCK_B.Switch18;

      /* Update for Delay: '<S248>/Delay2' */
      LCK_DW.Delay2_DSTATE_b = *rtu_Fus_Lane_Info_primaryObj_ka;

      /* Update for Delay: '<S248>/Delay3' */
      LCK_DW.Delay3_DSTATE = *rtu_Fus_Lane_Info_primaryOb_kaa;

      /* Update for Delay: '<S248>/Delay4' */
      LCK_DW.Delay4_DSTATE = *rtu_Fus_Lane_Info_primaryObjT_e;
    }

    /* End of Update for SubSystem: '<S8>/Subsystem4' */

    /* Update for Delay: '<S246>/Delay5' */
    LCK_DW.Delay5_DSTATE = LCK_B.Switch1_o;

    /* Update for Delay: '<S246>/Delay1' */
    LCK_DW.Delay1_DSTATE_i = *rty_LCK_Mode;

    /* Update for Delay: '<S245>/Delay5' */
    LCK_DW.Delay5_DSTATE_n = *rty_LCK_Mode;

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
    LCK_DW.UnitDelay1_DSTATE_j = LCK_B.Switch2_l4;

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

    /* Update for Delay: '<S7>/Delay1' */
    LCK_DW.Delay1_DSTATE_j = *rty_LCK_Mode;

    /* End of Outputs for SubSystem: '<Root>/Lateral_Control_Module' */
    LCK_DW.i = 0.0;
  } else {
    LCK_DW.i++;
  }

  /* End of Chart: '<Root>/Main_OS' */
}

/* Update for referenced model: 'LCK' */
void LCK_Update(void)
{
}

/* Model initialize function */
void LCK_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_LCK_T *const LCK_M = &(LCK_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(LCK_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) &LCK_B), 0,
                sizeof(B_LCK_c_T));

  /* exported global signals */
  Road_Radius = 0.0F;
  LCK_PID_TorqCmd = 0.0F;
  Curvature_Rate = 0.0F;
  I_Term_Reset_Flag = false;

  /* states (dwork) */
  (void) memset((void *)&LCK_DW, 0,
                sizeof(DW_LCK_f_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    LCK_rti_init_trc_pointers();
    RTI_INIT_CODE_ENV();
  }
}
