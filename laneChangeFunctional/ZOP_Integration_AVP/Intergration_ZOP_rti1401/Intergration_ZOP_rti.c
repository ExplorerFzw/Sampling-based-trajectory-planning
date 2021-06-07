/*********************** dSPACE target specific file *************************

   Include file Intergration_ZOP_rti.c:

   Definition of functions and variables for the system I/O and for
   the hardware and software interrupts used.

   RTI1401 7.12 (02-May-2019)
   Wed Mar 17 16:07:06 2021

   Copyright 2021, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

#if !(defined(__RTI_SIMENGINE__) || defined(RTIMP_FRAME))
# error This file may be included only by the RTI(-MP) simulation engine.
#endif

/* Include the model header file. */
#include "Intergration_ZOP.h"
#include "Intergration_ZOP_private.h"

/* Defines for block output and parameter structure existence */
#define RTI_rtB_STRUCTURE_EXISTS       1
#define RTI_rtP_STRUCTURE_EXISTS       1
#define RTB_STRUCTURE_NAME             Intergration_ZOP_B
#define RTP_STRUCTURE_NAME             Intergration_ZOP_P

/* dSPACE generated includes for header files */
#include <brtenv.h>
#include <rtkernel.h>
#include <rti_assert.h>
#include <rtidefineddatatypes.h>
#include <CAN1401Tp1.h>
#include <dsts.h>
#include <DsCanBoard.h>
#include <rtican_ds1401.h>
#ifndef dsRtmGetNumSampleTimes
# define dsRtmGetNumSampleTimes(rtm)   9
#endif

#ifndef dsRtmGetTPtr
# define dsRtmGetTPtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef dsRtmSetTaskTime
# define dsRtmSetTaskTime(rtm, sti, val) (dsRtmGetTPtr((rtm))[sti] = (val))
#endif

/****** Definitions: task functions for timer tasks *********************/

/* Timer Task 1. (Base rate). */
static void rti_TIMERA(rtk_p_task_control_block task)
{
  /* Task entry code BEGIN */
  /* -- None. -- */
  /* Task entry code END */

  /* Task code. */
  baseRateService(task);

  /* Task exit code BEGIN */
  /* -- None. -- */
  /* Task exit code END */
}

/****** Definitions: task functions for HW interrupts *******************/

/* HW Interrupt: <S28>/_CAN_TYPE1_INT_M3_C1 */
static void rti_CAN8(rtk_p_task_control_block task)
{
  /* Task entry code BEGIN */
  /* -- None. -- */
  /* Task entry code END */

  /* Task code. */
  {
    int32_T i;

    /* {S!d11661}RateTransition: '<S28>/Rate Transition2' */
    Intergration_ZOP_B.RateTransition2 = Intergration_ZOP_B.Add_kb;

    /* {S!d11658}S-Function (rti_commonblock): '<S35>/S-Function1' */
    Intergrat_FunctionCallSubsystem();

    /* {E!d11658}End of Outputs for S-Function (rti_commonblock): '<S35>/S-Function1' */

    /* {S!d11663}RateTransition: '<S28>/Rate Transition1' */
    switch (Intergration_ZOP_DW.RateTransition1_read_buf) {
     case 0:
      Intergration_ZOP_DW.RateTransition1_write_buf = 1;
      break;

     case 1:
      Intergration_ZOP_DW.RateTransition1_write_buf = 0;
      break;

     default:
      Intergration_ZOP_DW.RateTransition1_write_buf = (int8_T)
        (Intergration_ZOP_DW.RateTransition1_last_buf_wr == 0);
      break;
    }

    if (Intergration_ZOP_DW.RateTransition1_write_buf != 0) {
      for (i = 0; i < 40; i++) {
        Intergration_ZOP_DW.RateTransition1_Buffer1[i] =
          Intergration_ZOP_B.Assignment_k[i];
      }
    } else {
      for (i = 0; i < 40; i++) {
        Intergration_ZOP_DW.RateTransition1_Buffer0[i] =
          Intergration_ZOP_B.Assignment_k[i];
      }
    }

    Intergration_ZOP_DW.RateTransition1_last_buf_wr =
      Intergration_ZOP_DW.RateTransition1_write_buf;
    Intergration_ZOP_DW.RateTransition1_write_buf = -1;

    /* {E!d11663}End of RateTransition: '<S28>/Rate Transition1' */
  }

  /* Task exit code BEGIN */
  /* -- None. -- */
  /* Task exit code END */
}

/* HW Interrupt: <S28>/CAN_TYPE1_INT_M3_C1 */
static void rti_CAN7(rtk_p_task_control_block task)
{
  /* Task entry code BEGIN */
  /* -- None. -- */
  /* Task entry code END */

  /* Task code. */
  {
    /* {S!d11650}S-Function (rti_commonblock): '<S32>/S-Function1' */
    Intergra_FunctionCallSubsystem1();

    /* {E!d11650}End of Outputs for S-Function (rti_commonblock): '<S32>/S-Function1' */

    /* {S!d11653}RateTransition: '<S28>/Rate Transition3' */
    switch (Intergration_ZOP_DW.RateTransition3_read_buf) {
     case 0:
      Intergration_ZOP_DW.RateTransition3_write_buf = 1;
      break;

     case 1:
      Intergration_ZOP_DW.RateTransition3_write_buf = 0;
      break;

     default:
      Intergration_ZOP_DW.RateTransition3_write_buf = (int8_T)
        (Intergration_ZOP_DW.RateTransition3_last_buf_wr == 0);
      break;
    }

    if (Intergration_ZOP_DW.RateTransition3_write_buf != 0) {
      Intergration_ZOP_DW.RateTransition3_Buffer1 =
        Intergration_ZOP_B.SFunction1_o3_dn;
    } else {
      Intergration_ZOP_DW.RateTransition3_Buffer0 =
        Intergration_ZOP_B.SFunction1_o3_dn;
    }

    Intergration_ZOP_DW.RateTransition3_last_buf_wr =
      Intergration_ZOP_DW.RateTransition3_write_buf;
    Intergration_ZOP_DW.RateTransition3_write_buf = -1;

    /* {E!d11653}End of RateTransition: '<S28>/Rate Transition3' */

    /* {S!d11655}RateTransition: '<S28>/Rate Transition4' */
    switch (Intergration_ZOP_DW.RateTransition4_read_buf) {
     case 0:
      Intergration_ZOP_DW.RateTransition4_write_buf = 1;
      break;

     case 1:
      Intergration_ZOP_DW.RateTransition4_write_buf = 0;
      break;

     default:
      Intergration_ZOP_DW.RateTransition4_write_buf = (int8_T)
        (Intergration_ZOP_DW.RateTransition4_last_buf_wr == 0);
      break;
    }

    if (Intergration_ZOP_DW.RateTransition4_write_buf != 0) {
      Intergration_ZOP_DW.RateTransition4_Buffer1 =
        Intergration_ZOP_B.SFunction1_o2_pj;
    } else {
      Intergration_ZOP_DW.RateTransition4_Buffer0 =
        Intergration_ZOP_B.SFunction1_o2_pj;
    }

    Intergration_ZOP_DW.RateTransition4_last_buf_wr =
      Intergration_ZOP_DW.RateTransition4_write_buf;
    Intergration_ZOP_DW.RateTransition4_write_buf = -1;

    /* {E!d11655}End of RateTransition: '<S28>/Rate Transition4' */

    /* {S!d11657}RateTransition: '<S28>/Rate Transition5' */
    switch (Intergration_ZOP_DW.RateTransition5_read_buf) {
     case 0:
      Intergration_ZOP_DW.RateTransition5_write_buf = 1;
      break;

     case 1:
      Intergration_ZOP_DW.RateTransition5_write_buf = 0;
      break;

     default:
      Intergration_ZOP_DW.RateTransition5_write_buf = (int8_T)
        (Intergration_ZOP_DW.RateTransition5_last_buf_wr == 0);
      break;
    }

    if (Intergration_ZOP_DW.RateTransition5_write_buf != 0) {
      Intergration_ZOP_DW.RateTransition5_Buffer1 =
        Intergration_ZOP_B.SFunction1_o1_fg;
    } else {
      Intergration_ZOP_DW.RateTransition5_Buffer0 =
        Intergration_ZOP_B.SFunction1_o1_fg;
    }

    Intergration_ZOP_DW.RateTransition5_last_buf_wr =
      Intergration_ZOP_DW.RateTransition5_write_buf;
    Intergration_ZOP_DW.RateTransition5_write_buf = -1;

    /* {E!d11657}End of RateTransition: '<S28>/Rate Transition5' */
  }

  /* Task exit code BEGIN */
  /* -- None. -- */
  /* Task exit code END */
}

/* HW Interrupt: <S29>/___CAN_TYPE1_INT_M3_C1 */
static void rti_CAN6(rtk_p_task_control_block task)
{
  /* Task entry code BEGIN */
  /* -- None. -- */
  /* Task entry code END */

  /* Task code. */
  {
    int32_T i;

    /* {S!d11675}RateTransition: '<S29>/Rate Transition2' */
    Intergration_ZOP_B.RateTransition2_g = Intergration_ZOP_B.Add_os;

    /* {S!d11672}S-Function (rti_commonblock): '<S42>/S-Function1' */
    Intergr_FunctionCallSubsystem_a();

    /* {E!d11672}End of Outputs for S-Function (rti_commonblock): '<S42>/S-Function1' */

    /* {S!d11677}RateTransition: '<S29>/Rate Transition1' */
    switch (Intergration_ZOP_DW.RateTransition1_read_buf_j) {
     case 0:
      Intergration_ZOP_DW.RateTransition1_write_buf_o = 1;
      break;

     case 1:
      Intergration_ZOP_DW.RateTransition1_write_buf_o = 0;
      break;

     default:
      Intergration_ZOP_DW.RateTransition1_write_buf_o = (int8_T)
        (Intergration_ZOP_DW.RateTransition1_last_buf_wr_m == 0);
      break;
    }

    if (Intergration_ZOP_DW.RateTransition1_write_buf_o != 0) {
      for (i = 0; i < 40; i++) {
        Intergration_ZOP_DW.RateTransition1_Buffer1_g[i] =
          Intergration_ZOP_B.Assignment_m[i];
      }
    } else {
      for (i = 0; i < 40; i++) {
        Intergration_ZOP_DW.RateTransition1_Buffer0_i[i] =
          Intergration_ZOP_B.Assignment_m[i];
      }
    }

    Intergration_ZOP_DW.RateTransition1_last_buf_wr_m =
      Intergration_ZOP_DW.RateTransition1_write_buf_o;
    Intergration_ZOP_DW.RateTransition1_write_buf_o = -1;

    /* {E!d11677}End of RateTransition: '<S29>/Rate Transition1' */
  }

  /* Task exit code BEGIN */
  /* -- None. -- */
  /* Task exit code END */
}

/* HW Interrupt: <S29>/__CAN_TYPE1_INT_M3_C1 */
static void rti_CAN5(rtk_p_task_control_block task)
{
  /* Task entry code BEGIN */
  /* -- None. -- */
  /* Task entry code END */

  /* Task code. */
  {
    /* {S!d11664}S-Function (rti_commonblock): '<S41>/S-Function1' */
    Interg_FunctionCallSubsystem1_b();

    /* {E!d11664}End of Outputs for S-Function (rti_commonblock): '<S41>/S-Function1' */

    /* {S!d11667}RateTransition: '<S29>/Rate Transition3' */
    switch (Intergration_ZOP_DW.RateTransition3_read_buf_k) {
     case 0:
      Intergration_ZOP_DW.RateTransition3_write_buf_j = 1;
      break;

     case 1:
      Intergration_ZOP_DW.RateTransition3_write_buf_j = 0;
      break;

     default:
      Intergration_ZOP_DW.RateTransition3_write_buf_j = (int8_T)
        (Intergration_ZOP_DW.RateTransition3_last_buf_wr_e == 0);
      break;
    }

    if (Intergration_ZOP_DW.RateTransition3_write_buf_j != 0) {
      Intergration_ZOP_DW.RateTransition3_Buffer1_e =
        Intergration_ZOP_B.SFunction1_o3_mr;
    } else {
      Intergration_ZOP_DW.RateTransition3_Buffer0_i =
        Intergration_ZOP_B.SFunction1_o3_mr;
    }

    Intergration_ZOP_DW.RateTransition3_last_buf_wr_e =
      Intergration_ZOP_DW.RateTransition3_write_buf_j;
    Intergration_ZOP_DW.RateTransition3_write_buf_j = -1;

    /* {E!d11667}End of RateTransition: '<S29>/Rate Transition3' */

    /* {S!d11669}RateTransition: '<S29>/Rate Transition4' */
    switch (Intergration_ZOP_DW.RateTransition4_read_buf_m) {
     case 0:
      Intergration_ZOP_DW.RateTransition4_write_buf_a = 1;
      break;

     case 1:
      Intergration_ZOP_DW.RateTransition4_write_buf_a = 0;
      break;

     default:
      Intergration_ZOP_DW.RateTransition4_write_buf_a = (int8_T)
        (Intergration_ZOP_DW.RateTransition4_last_buf_wr_p == 0);
      break;
    }

    if (Intergration_ZOP_DW.RateTransition4_write_buf_a != 0) {
      Intergration_ZOP_DW.RateTransition4_Buffer1_n =
        Intergration_ZOP_B.SFunction1_o2_hj;
    } else {
      Intergration_ZOP_DW.RateTransition4_Buffer0_p =
        Intergration_ZOP_B.SFunction1_o2_hj;
    }

    Intergration_ZOP_DW.RateTransition4_last_buf_wr_p =
      Intergration_ZOP_DW.RateTransition4_write_buf_a;
    Intergration_ZOP_DW.RateTransition4_write_buf_a = -1;

    /* {E!d11669}End of RateTransition: '<S29>/Rate Transition4' */

    /* {S!d11671}RateTransition: '<S29>/Rate Transition5' */
    switch (Intergration_ZOP_DW.RateTransition5_read_buf_l) {
     case 0:
      Intergration_ZOP_DW.RateTransition5_write_buf_m = 1;
      break;

     case 1:
      Intergration_ZOP_DW.RateTransition5_write_buf_m = 0;
      break;

     default:
      Intergration_ZOP_DW.RateTransition5_write_buf_m = (int8_T)
        (Intergration_ZOP_DW.RateTransition5_last_buf_wr_n == 0);
      break;
    }

    if (Intergration_ZOP_DW.RateTransition5_write_buf_m != 0) {
      Intergration_ZOP_DW.RateTransition5_Buffer1_l =
        Intergration_ZOP_B.SFunction1_o1_em;
    } else {
      Intergration_ZOP_DW.RateTransition5_Buffer0_a =
        Intergration_ZOP_B.SFunction1_o1_em;
    }

    Intergration_ZOP_DW.RateTransition5_last_buf_wr_n =
      Intergration_ZOP_DW.RateTransition5_write_buf_m;
    Intergration_ZOP_DW.RateTransition5_write_buf_m = -1;

    /* {E!d11671}End of RateTransition: '<S29>/Rate Transition5' */
  }

  /* Task exit code BEGIN */
  /* -- None. -- */
  /* Task exit code END */
}

/* HW Interrupt: <S31>/_CAN_TYPE1_INT_M3_C2 */
static void rti_CAN2(rtk_p_task_control_block task)
{
  /* Task entry code BEGIN */
  /* -- None. -- */
  /* Task entry code END */

  /* Task code. */
  {
    int32_T i;

    /* {S!d11703}RateTransition: '<S31>/Rate Transition2' */
    Intergration_ZOP_B.RateTransition2_b = Intergration_ZOP_B.Add_p;

    /* {S!d11700}S-Function (rti_commonblock): '<S56>/S-Function1' */
    Intergr_FunctionCallSubsystem_j();

    /* {E!d11700}End of Outputs for S-Function (rti_commonblock): '<S56>/S-Function1' */

    /* {S!d11705}RateTransition: '<S31>/Rate Transition1' */
    switch (Intergration_ZOP_DW.RateTransition1_read_buf_o) {
     case 0:
      Intergration_ZOP_DW.RateTransition1_write_buf_n = 1;
      break;

     case 1:
      Intergration_ZOP_DW.RateTransition1_write_buf_n = 0;
      break;

     default:
      Intergration_ZOP_DW.RateTransition1_write_buf_n = (int8_T)
        (Intergration_ZOP_DW.RateTransition1_last_buf_wr_f == 0);
      break;
    }

    if (Intergration_ZOP_DW.RateTransition1_write_buf_n != 0) {
      for (i = 0; i < 40; i++) {
        Intergration_ZOP_DW.RateTransition1_Buffer1_c[i] =
          Intergration_ZOP_B.Assignment[i];
      }
    } else {
      for (i = 0; i < 40; i++) {
        Intergration_ZOP_DW.RateTransition1_Buffer0_l[i] =
          Intergration_ZOP_B.Assignment[i];
      }
    }

    Intergration_ZOP_DW.RateTransition1_last_buf_wr_f =
      Intergration_ZOP_DW.RateTransition1_write_buf_n;
    Intergration_ZOP_DW.RateTransition1_write_buf_n = -1;

    /* {E!d11705}End of RateTransition: '<S31>/Rate Transition1' */
  }

  /* Task exit code BEGIN */
  /* -- None. -- */
  /* Task exit code END */
}

/* HW Interrupt: <S31>/CAN_TYPE1_INT_M3_C2 */
static void rti_CAN1(rtk_p_task_control_block task)
{
  /* Task entry code BEGIN */
  /* -- None. -- */
  /* Task entry code END */

  /* Task code. */
  {
    /* {S!d11692}S-Function (rti_commonblock): '<S53>/S-Function1' */
    Inter_FunctionCallSubsystem1_bb();

    /* {E!d11692}End of Outputs for S-Function (rti_commonblock): '<S53>/S-Function1' */

    /* {S!d11695}RateTransition: '<S31>/Rate Transition3' */
    switch (Intergration_ZOP_DW.RateTransition3_read_buf_n) {
     case 0:
      Intergration_ZOP_DW.RateTransition3_write_buf_n = 1;
      break;

     case 1:
      Intergration_ZOP_DW.RateTransition3_write_buf_n = 0;
      break;

     default:
      Intergration_ZOP_DW.RateTransition3_write_buf_n = (int8_T)
        (Intergration_ZOP_DW.RateTransition3_last_buf_wr_i == 0);
      break;
    }

    if (Intergration_ZOP_DW.RateTransition3_write_buf_n != 0) {
      Intergration_ZOP_DW.RateTransition3_Buffer1_d =
        Intergration_ZOP_B.SFunction1_o3_fm;
    } else {
      Intergration_ZOP_DW.RateTransition3_Buffer0_l =
        Intergration_ZOP_B.SFunction1_o3_fm;
    }

    Intergration_ZOP_DW.RateTransition3_last_buf_wr_i =
      Intergration_ZOP_DW.RateTransition3_write_buf_n;
    Intergration_ZOP_DW.RateTransition3_write_buf_n = -1;

    /* {E!d11695}End of RateTransition: '<S31>/Rate Transition3' */

    /* {S!d11697}RateTransition: '<S31>/Rate Transition4' */
    switch (Intergration_ZOP_DW.RateTransition4_read_buf_a) {
     case 0:
      Intergration_ZOP_DW.RateTransition4_write_buf_g = 1;
      break;

     case 1:
      Intergration_ZOP_DW.RateTransition4_write_buf_g = 0;
      break;

     default:
      Intergration_ZOP_DW.RateTransition4_write_buf_g = (int8_T)
        (Intergration_ZOP_DW.RateTransition4_last_buf_wr_p1 == 0);
      break;
    }

    if (Intergration_ZOP_DW.RateTransition4_write_buf_g != 0) {
      Intergration_ZOP_DW.RateTransition4_Buffer1_o =
        Intergration_ZOP_B.SFunction1_o2_kk;
    } else {
      Intergration_ZOP_DW.RateTransition4_Buffer0_m =
        Intergration_ZOP_B.SFunction1_o2_kk;
    }

    Intergration_ZOP_DW.RateTransition4_last_buf_wr_p1 =
      Intergration_ZOP_DW.RateTransition4_write_buf_g;
    Intergration_ZOP_DW.RateTransition4_write_buf_g = -1;

    /* {E!d11697}End of RateTransition: '<S31>/Rate Transition4' */

    /* {S!d11699}RateTransition: '<S31>/Rate Transition5' */
    switch (Intergration_ZOP_DW.RateTransition5_read_buf_o) {
     case 0:
      Intergration_ZOP_DW.RateTransition5_write_buf_o = 1;
      break;

     case 1:
      Intergration_ZOP_DW.RateTransition5_write_buf_o = 0;
      break;

     default:
      Intergration_ZOP_DW.RateTransition5_write_buf_o = (int8_T)
        (Intergration_ZOP_DW.RateTransition5_last_buf_wr_i == 0);
      break;
    }

    if (Intergration_ZOP_DW.RateTransition5_write_buf_o != 0) {
      Intergration_ZOP_DW.RateTransition5_Buffer1_c =
        Intergration_ZOP_B.SFunction1_o1_kv;
    } else {
      Intergration_ZOP_DW.RateTransition5_Buffer0_am =
        Intergration_ZOP_B.SFunction1_o1_kv;
    }

    Intergration_ZOP_DW.RateTransition5_last_buf_wr_i =
      Intergration_ZOP_DW.RateTransition5_write_buf_o;
    Intergration_ZOP_DW.RateTransition5_write_buf_o = -1;

    /* {E!d11699}End of RateTransition: '<S31>/Rate Transition5' */
  }

  /* Task exit code BEGIN */
  /* -- None. -- */
  /* Task exit code END */
}

/* HW Interrupt: <S30>/___CAN_TYPE1_INT_M3_C2 */
static void rti_CAN4(rtk_p_task_control_block task)
{
  /* Task entry code BEGIN */
  /* -- None. -- */
  /* Task entry code END */

  /* Task code. */
  {
    int32_T i;

    /* {S!d11689}RateTransition: '<S30>/Rate Transition2' */
    Intergration_ZOP_B.RateTransition2_p = Intergration_ZOP_B.Add_g;

    /* {S!d11686}S-Function (rti_commonblock): '<S49>/S-Function1' */
    Intergr_FunctionCallSubsystem_g();

    /* {E!d11686}End of Outputs for S-Function (rti_commonblock): '<S49>/S-Function1' */

    /* {S!d11691}RateTransition: '<S30>/Rate Transition1' */
    switch (Intergration_ZOP_DW.RateTransition1_read_buf_h) {
     case 0:
      Intergration_ZOP_DW.RateTransition1_write_buf_p = 1;
      break;

     case 1:
      Intergration_ZOP_DW.RateTransition1_write_buf_p = 0;
      break;

     default:
      Intergration_ZOP_DW.RateTransition1_write_buf_p = (int8_T)
        (Intergration_ZOP_DW.RateTransition1_last_buf_wr_d == 0);
      break;
    }

    if (Intergration_ZOP_DW.RateTransition1_write_buf_p != 0) {
      for (i = 0; i < 40; i++) {
        Intergration_ZOP_DW.RateTransition1_Buffer1_j[i] =
          Intergration_ZOP_B.Assignment_n[i];
      }
    } else {
      for (i = 0; i < 40; i++) {
        Intergration_ZOP_DW.RateTransition1_Buffer0_h[i] =
          Intergration_ZOP_B.Assignment_n[i];
      }
    }

    Intergration_ZOP_DW.RateTransition1_last_buf_wr_d =
      Intergration_ZOP_DW.RateTransition1_write_buf_p;
    Intergration_ZOP_DW.RateTransition1_write_buf_p = -1;

    /* {E!d11691}End of RateTransition: '<S30>/Rate Transition1' */
  }

  /* Task exit code BEGIN */
  /* -- None. -- */
  /* Task exit code END */
}

/* HW Interrupt: <S30>/__CAN_TYPE1_INT_M3_C2 */
static void rti_CAN3(rtk_p_task_control_block task)
{
  /* Task entry code BEGIN */
  /* -- None. -- */
  /* Task entry code END */

  /* Task code. */
  {
    /* {S!d11678}S-Function (rti_commonblock): '<S48>/S-Function1' */
    Interg_FunctionCallSubsystem1_o();

    /* {E!d11678}End of Outputs for S-Function (rti_commonblock): '<S48>/S-Function1' */

    /* {S!d11681}RateTransition: '<S30>/Rate Transition3' */
    switch (Intergration_ZOP_DW.RateTransition3_read_buf_e) {
     case 0:
      Intergration_ZOP_DW.RateTransition3_write_buf_p = 1;
      break;

     case 1:
      Intergration_ZOP_DW.RateTransition3_write_buf_p = 0;
      break;

     default:
      Intergration_ZOP_DW.RateTransition3_write_buf_p = (int8_T)
        (Intergration_ZOP_DW.RateTransition3_last_buf_wr_l == 0);
      break;
    }

    if (Intergration_ZOP_DW.RateTransition3_write_buf_p != 0) {
      Intergration_ZOP_DW.RateTransition3_Buffer1_m =
        Intergration_ZOP_B.SFunction1_o3_fj;
    } else {
      Intergration_ZOP_DW.RateTransition3_Buffer0_e =
        Intergration_ZOP_B.SFunction1_o3_fj;
    }

    Intergration_ZOP_DW.RateTransition3_last_buf_wr_l =
      Intergration_ZOP_DW.RateTransition3_write_buf_p;
    Intergration_ZOP_DW.RateTransition3_write_buf_p = -1;

    /* {E!d11681}End of RateTransition: '<S30>/Rate Transition3' */

    /* {S!d11683}RateTransition: '<S30>/Rate Transition4' */
    switch (Intergration_ZOP_DW.RateTransition4_read_buf_n) {
     case 0:
      Intergration_ZOP_DW.RateTransition4_write_buf_m = 1;
      break;

     case 1:
      Intergration_ZOP_DW.RateTransition4_write_buf_m = 0;
      break;

     default:
      Intergration_ZOP_DW.RateTransition4_write_buf_m = (int8_T)
        (Intergration_ZOP_DW.RateTransition4_last_buf_wr_d == 0);
      break;
    }

    if (Intergration_ZOP_DW.RateTransition4_write_buf_m != 0) {
      Intergration_ZOP_DW.RateTransition4_Buffer1_h =
        Intergration_ZOP_B.SFunction1_o2_jjg;
    } else {
      Intergration_ZOP_DW.RateTransition4_Buffer0_h =
        Intergration_ZOP_B.SFunction1_o2_jjg;
    }

    Intergration_ZOP_DW.RateTransition4_last_buf_wr_d =
      Intergration_ZOP_DW.RateTransition4_write_buf_m;
    Intergration_ZOP_DW.RateTransition4_write_buf_m = -1;

    /* {E!d11683}End of RateTransition: '<S30>/Rate Transition4' */

    /* {S!d11685}RateTransition: '<S30>/Rate Transition5' */
    switch (Intergration_ZOP_DW.RateTransition5_read_buf_lg) {
     case 0:
      Intergration_ZOP_DW.RateTransition5_write_buf_p = 1;
      break;

     case 1:
      Intergration_ZOP_DW.RateTransition5_write_buf_p = 0;
      break;

     default:
      Intergration_ZOP_DW.RateTransition5_write_buf_p = (int8_T)
        (Intergration_ZOP_DW.RateTransition5_last_buf_wr_l == 0);
      break;
    }

    if (Intergration_ZOP_DW.RateTransition5_write_buf_p != 0) {
      Intergration_ZOP_DW.RateTransition5_Buffer1_j =
        Intergration_ZOP_B.SFunction1_o1_bkm;
    } else {
      Intergration_ZOP_DW.RateTransition5_Buffer0_c =
        Intergration_ZOP_B.SFunction1_o1_bkm;
    }

    Intergration_ZOP_DW.RateTransition5_last_buf_wr_l =
      Intergration_ZOP_DW.RateTransition5_write_buf_p;
    Intergration_ZOP_DW.RateTransition5_write_buf_p = -1;

    /* {E!d11685}End of RateTransition: '<S30>/Rate Transition5' */
  }

  /* Task exit code BEGIN */
  /* -- None. -- */
  /* Task exit code END */
}

/* ===== Declarations of RTI blocks ======================================== */

/* dSPACE I/O Board DS1_RTICAN #3 */

/* ...  definition of channel struct */
can_tp1_canChannel* can_type1_channel_M3_C1;

/* ...  definition of channel struct */
can_tp1_canChannel* can_type1_channel_M3_C2;

/* declare pointers to CAN message structures for support of TX-Custom code */
can_tp1_canMsg* CANTP1_TX_SPMSG_M3_C1_STD;
can_tp1_canMsg* CANTP1_TX_SPMSG_M3_C1_XTD;

/* declare pointer to CAN message object for STD-Msg */
can_tp1_canMsg* CANTP1_RX_SPMSG_M3_C1_STD;

/* declare needed identifiers for mcr-queue */
can_tp1_canMsg* CANTP1_RX_M3_C1_MCRCLT_STD;

/* declare pointers to CAN message structures for support of TX-Custom code */
can_tp1_canMsg* CANTP1_TX_SPMSG_M3_C2_STD;
can_tp1_canMsg* CANTP1_TX_SPMSG_M3_C2_XTD;

/* declare pointer to CAN message object for STD-Msg */
can_tp1_canMsg* CANTP1_RX_SPMSG_M3_C2_STD;

/* declare needed identifiers for mcr-queue */
can_tp1_canMsg* CANTP1_RX_M3_C2_MCRCLT_STD;

/* ... definition of message variable for the RTICAN blocks */
can_tp1_canMsg* can_type1_msg_M3[CANTP1_M3_NUMMSG];

/* dSPACE I/O Board DS1_RTICAN #1 */

/* ...  definition of channel struct */
can_tp1_canChannel* can_type1_channel_M1_C2;

/* ...  definition of channel struct */
can_tp1_canChannel* can_type1_channel_M1_C1;

/* declare pointers to CAN message structures for support of TX-Custom code */
can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C2_STD;
can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C2_XTD;

/* declare pointer to CAN message object for STD-Msg */
can_tp1_canMsg* CANTP1_RX_SPMSG_M1_C2_STD;

/* declare needed identifiers for mcr-queue */
can_tp1_canMsg* CANTP1_RX_M1_C2_MCRCLT_STD;

/* declare pointers to CAN message structures for support of TX-Custom code */
can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C1_STD;
can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C1_XTD;

/* declare pointer to CAN message object for STD-Msg */
can_tp1_canMsg* CANTP1_RX_SPMSG_M1_C1_STD;

/* declare needed identifiers for mcr-queue */
can_tp1_canMsg* CANTP1_RX_M1_C1_MCRCLT_STD;

/* ... definition of message variable for the RTICAN blocks */
can_tp1_canMsg* can_type1_msg_M1[CANTP1_M1_NUMMSG];

/* dSPACE I/O Board DS1_RTICAN #2 */

/* ...  definition of channel struct */
can_tp1_canChannel* can_type1_channel_M2_C2;

/* declare pointers to CAN message structures for support of TX-Custom code */
can_tp1_canMsg* CANTP1_TX_SPMSG_M2_C2_STD;
can_tp1_canMsg* CANTP1_TX_SPMSG_M2_C2_XTD;

/* declare pointer to CAN message object for STD-Msg */
can_tp1_canMsg* CANTP1_RX_SPMSG_M2_C2_STD;

/* declare needed identifiers for mcr-queue */
can_tp1_canMsg* CANTP1_RX_M2_C2_MCRCLT_STD;

/* ... definition of message variable for the RTICAN blocks */
can_tp1_canMsg* can_type1_msg_M2[CANTP1_M2_NUMMSG];

/* dSPACE I/O Board RTICAN_GLOBAL #0 */

/* ===== Definition of interface functions for simulation engine =========== */
#if GRTINTERFACE == 1
#ifdef MULTITASKING
# define dsIsSampleHit(RTM,sti)        rtmGetSampleHitPtr(RTM)[sti]
#else
# define dsIsSampleHit(RTM,sti)        1
#endif

#else
#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

# define dsIsSampleHit(RTM,sti)        rtmStepTask(RTM, sti)
#endif

#undef __INLINE
#if defined(_INLINE)
# define __INLINE                      static inline
#else
# define __INLINE                      static
#endif

/*Define additional variables*/
static time_T dsTFinal = -1.0;

#define dsGetTFinal(rtm)               (dsTFinal)

static time_T dsStepSize = 0.01;

# define dsGetStepSize(rtm)            (dsStepSize)

static void rti_mdl_initialize_host_services(void)
{
  ts_timestamp_type ts = { 0, 0 };

  host_service(1, &ts);
  DsDaq_Init(0, 32, 1);
}

static void rti_mdl_initialize_io_boards(void)
{
  /* Registering of RTI products and modules at VCM */
  {
    vcm_module_register(VCM_MID_RTI1401, (void *) 0,
                        VCM_TXT_RTI1401, 7, 12, 0,
                        VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);

    {
      vcm_module_descriptor_type* msg_mod_ptr;
      msg_mod_ptr = vcm_module_register(VCM_MID_MATLAB, (void *) 0,
        VCM_TXT_MATLAB, 9, 5, 0,
        VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
      vcm_module_register(VCM_MID_SIMULINK, msg_mod_ptr,
                          VCM_TXT_SIMULINK, 9, 2, 0,
                          VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
      vcm_module_register(VCM_MID_RTW, msg_mod_ptr,
                          VCM_TXT_RTW, 9, 0, 0,
                          VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
      vcm_module_register(VCM_MID_STATEFLOW, msg_mod_ptr,
                          VCM_TXT_STATEFLOW, 9, 2, 0,
                          VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
      vcm_module_register(VCM_MID_STATEFLOW_CODER, msg_mod_ptr,
                          VCM_TXT_STATEFLOW_CODER, 9, 0, 0,
                          VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
    }

    vcm_module_register(VCM_MID_RTICAN, (void *) 0,
                        VCM_TXT_RTICAN, 3, 4, 8,
                        VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
  }

  /* dSPACE I/O Board DS1_RTICAN #3 */
  /* Initialization of DS1501 board */
  can_tp1_communication_init(can_tp1_address_table[2].module_addr,
    CAN_TP1_INT_ENABLE);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the CAN communication: 500 kbit/s */
  can_type1_channel_M3_C1 = can_tp1_channel_init(can_tp1_address_table[2].
    module_addr, 0, (500 * 1000), CAN_TP1_STD, CAN_TP1_NO_SUBINT);
  can_tp1_channel_termination_set(can_type1_channel_M3_C1,
    CAN_TP1_TERMINATION_ON);

  /* ... Initialize TX message structs for custom code  */
  CANTP1_TX_SPMSG_M3_C1_STD = can_tp1_msg_tx_register(can_type1_channel_M3_C1, 3,
    1050, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);
  CANTP1_TX_SPMSG_M3_C1_XTD = can_tp1_msg_tx_register(can_type1_channel_M3_C1, 3,
    1100, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);

  /* ... Initialize STD RX message for RX Service support */
  {
    UInt32 mask = 0;
    UInt32 queueSize = 64;
    UInt32 msgId = 1;
    CANTP1_RX_SPMSG_M3_C1_STD = can_tp1_msg_rx_register(can_type1_channel_M3_C1,
      0, 1, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DATA_INFO |
      CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT);

    /* set the queue depth */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M3_C1_STD,CAN_TP1_MSG_DSMCR_BUFFER,
                    &queueSize);

    /* set the mask to select which messages are received by service mode */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M3_C1_STD,CAN_TP1_MSG_MASK, &mask);

    /* create the r-buffer */
    can_tp1_dsmcr_client_create(CANTP1_RX_SPMSG_M3_C1_STD,
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_RX_M3_C1_MCRCLT_STD );
  }

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the Partial Networking Settings */

  /* dSPACE RTICAN TX Message Block: "ESC_DA_MESSAGE" Id:295 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X127] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C1, 1, 295, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "ESC_FrontWheelSpeedKPH" Id:291 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X123] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C1, 0, 291, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "ESC_RearWheelSpeedKPH" Id:292 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X124] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C1, 0, 292, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "ESC_Status" Id:294 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X126] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C1, 1, 294, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "YRS1" Id:305 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X131] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C1, 1, 305, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "YRS2" Id:306 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X132] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C1, 1, 306, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "SAS_Status" Id:225 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0XE1] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C1, 0, 225, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "GW_HSC2_BCM_FrP04" Id:1130 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X46A] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C1, 3, 1130, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO,
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "GW_HSC2_BCM_FrP06" Id:540 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X21C] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C1, 3, 540, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO,
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "GW_HSC2_ECM_FrP04" Id:404 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X194] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C1, 2, 404, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO,
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "SAS_HSC2_FrP00" Id:485 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X1E5] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C1, 2, 485, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO,
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "SCS_HSC2_FrP02" Id:389 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X185] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C1, 2, 389, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO,
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "SCS_HSC2_FrP05" Id:489 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X1E9] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C1, 2, 489, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO,
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "SCS_HSC2_FrP19" Id:572 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X23C] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C1, 3, 572, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO,
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Tester_HSC2_ECM_FrP00" Id:201 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0XC9] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C1, 0, 201, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO,
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN RX Message Block: "Obj_0_Status" Id:1546 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_RX_STD_0X60A] = can_tp1_msg_rx_register
    (can_type1_channel_M3_C1, 3, 1546, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), 0);

  /* dSPACE RTICAN RX Message Block: "Obj_1_General" Id:1547 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_RX_STD_0X60B] = can_tp1_msg_rx_register
    (can_type1_channel_M3_C1, 4, 1547, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), 1);

  /* dSPACE RTICAN RX Message Block: "Obj_0_Status" Id:1562 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_RX_STD_0X61A] = can_tp1_msg_rx_register
    (can_type1_channel_M3_C1, 4, 1562, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), 2);

  /* dSPACE RTICAN RX Message Block: "Obj_1_General" Id:1563 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_RX_STD_0X61B] = can_tp1_msg_rx_register
    (can_type1_channel_M3_C1, 4, 1563, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), 3);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the CAN communication: 500 kbit/s */
  can_type1_channel_M3_C2 = can_tp1_channel_init(can_tp1_address_table[2].
    module_addr, 1, (500 * 1000), CAN_TP1_STD, CAN_TP1_NO_SUBINT);
  can_tp1_channel_termination_set(can_type1_channel_M3_C2,
    CAN_TP1_TERMINATION_ON);

  /* ... Initialize TX message structs for custom code  */
  CANTP1_TX_SPMSG_M3_C2_STD = can_tp1_msg_tx_register(can_type1_channel_M3_C2, 3,
    1050, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);
  CANTP1_TX_SPMSG_M3_C2_XTD = can_tp1_msg_tx_register(can_type1_channel_M3_C2, 3,
    1100, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);

  /* ... Initialize STD RX message for RX Service support */
  {
    UInt32 mask = 0;
    UInt32 queueSize = 64;
    UInt32 msgId = 1;
    CANTP1_RX_SPMSG_M3_C2_STD = can_tp1_msg_rx_register(can_type1_channel_M3_C2,
      0, 1, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DATA_INFO |
      CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT);

    /* set the queue depth */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M3_C2_STD,CAN_TP1_MSG_DSMCR_BUFFER,
                    &queueSize);

    /* set the mask to select which messages are received by service mode */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M3_C2_STD,CAN_TP1_MSG_MASK, &mask);

    /* create the r-buffer */
    can_tp1_dsmcr_client_create(CANTP1_RX_SPMSG_M3_C2_STD,
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_RX_M3_C2_MCRCLT_STD );
  }

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the Partial Networking Settings */

  /* dSPACE RTICAN RX Message Block: "Obj_0_Status" Id:1594 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C2_RX_STD_0X63A] = can_tp1_msg_rx_register
    (can_type1_channel_M3_C2, 5, 1594, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), 4);

  /* dSPACE RTICAN RX Message Block: "Obj_1_General" Id:1595 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C2_RX_STD_0X63B] = can_tp1_msg_rx_register
    (can_type1_channel_M3_C2, 5, 1595, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), 5);

  /* dSPACE RTICAN RX Message Block: "Obj_0_Status" Id:1578 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C2_RX_STD_0X62A] = can_tp1_msg_rx_register
    (can_type1_channel_M3_C2, 4, 1578, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), 6);

  /* dSPACE RTICAN RX Message Block: "Obj_1_General" Id:1579 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C2_RX_STD_0X62B] = can_tp1_msg_rx_register
    (can_type1_channel_M3_C2, 5, 1579, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), 7);

  /* dSPACE RTICAN RX Message Block: "Obj_0_Status" Id:1546 */
  Intergration_ZOP_B.SFunction1_o4_go = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o5_ow = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o6_mj = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Obj_1_General" Id:1547 */
  Intergration_ZOP_B.SFunction1_o8_oh = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o9_ne = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o10_ai = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Obj_0_Status" Id:1562 */
  Intergration_ZOP_B.SFunction1_o4_pc = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o5_h4 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o6_py = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Obj_1_General" Id:1563 */
  Intergration_ZOP_B.SFunction1_o8_kly = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o9_dw = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o10_l4 = 0;/* deltatime */

  /* dSPACE RTICAN TX Message Block: "ESC_DA_MESSAGE" Id:295 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X127]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_l5 = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_nx = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_dy = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_kl = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "ESC_FrontWheelSpeedKPH" Id:291 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X123]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_c2m = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_dj = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_ksi = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_ml = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "ESC_RearWheelSpeedKPH" Id:292 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X124]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_cd = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_pv = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_bk = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_fo = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "ESC_Status" Id:294 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X126]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_cr = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_hk = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_cm = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_ol = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "YRS1" Id:305 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X131]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_jb = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_ny = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_pe = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_b4 = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "YRS2" Id:306 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X132]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_pw = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_b32 = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_hh = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_cr = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "SAS_Status" Id:225 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0XE1]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_bvm = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_a2 = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_gp = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_eh = 0;/* delaytime */
  }

  /* dSPACE RTICAN RX Message Block: "Obj_0_Status" Id:1594 */
  Intergration_ZOP_B.SFunction1_o4_bb = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o5_jad = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o6_iq = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Obj_1_General" Id:1595 */
  Intergration_ZOP_B.SFunction1_o8_kx = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o9_gn = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o10_ad = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Obj_0_Status" Id:1578 */
  Intergration_ZOP_B.SFunction1_o4_igv = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o5_nd = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o6_gq = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Obj_1_General" Id:1579 */
  Intergration_ZOP_B.SFunction1_o8_cf = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o9_au = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o10_pd = 0;/* deltatime */

  /* dSPACE I/O Board DS1_RTICAN #1 */
  /* Initialization of DS1501 board */
  can_tp1_communication_init(can_tp1_address_table[0].module_addr,
    CAN_TP1_INT_ENABLE);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the CAN communication: 500 kbit/s */
  can_type1_channel_M1_C2 = can_tp1_channel_init(can_tp1_address_table[0].
    module_addr, 1, (500 * 1000), CAN_TP1_STD, CAN_TP1_NO_SUBINT);
  can_tp1_channel_termination_set(can_type1_channel_M1_C2,
    CAN_TP1_TERMINATION_ON);

  /* ... Initialize TX message structs for custom code  */
  CANTP1_TX_SPMSG_M1_C2_STD = can_tp1_msg_tx_register(can_type1_channel_M1_C2, 3,
    1050, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);
  CANTP1_TX_SPMSG_M1_C2_XTD = can_tp1_msg_tx_register(can_type1_channel_M1_C2, 3,
    1100, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);

  /* ... Initialize STD RX message for RX Service support */
  {
    UInt32 mask = 0;
    UInt32 queueSize = 64;
    UInt32 msgId = 1;
    CANTP1_RX_SPMSG_M1_C2_STD = can_tp1_msg_rx_register(can_type1_channel_M1_C2,
      0, 1, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DATA_INFO |
      CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT);

    /* set the queue depth */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M1_C2_STD,CAN_TP1_MSG_DSMCR_BUFFER,
                    &queueSize);

    /* set the mask to select which messages are received by service mode */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M1_C2_STD,CAN_TP1_MSG_MASK, &mask);

    /* create the r-buffer */
    can_tp1_dsmcr_client_create(CANTP1_RX_SPMSG_M1_C2_STD,
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_RX_M1_C2_MCRCLT_STD );
  }

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the Partial Networking Settings */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_00" Id:768 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 2, 768, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_01" Id:769 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 769, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_10" Id:778 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 778, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_11" Id:779 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 779, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_12" Id:780 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 780, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_13" Id:781 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 781, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_14" Id:782 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 782, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_15" Id:783 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 783, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_16" Id:784 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 784, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_17" Id:785 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 785, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_18" Id:786 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 786, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_19" Id:787 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 787, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_02" Id:770 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 770, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_20" Id:788 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 788, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_21" Id:789 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 789, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_22" Id:790 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 790, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_23" Id:791 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 791, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_24" Id:792 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 792, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_25" Id:793 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 793, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_26" Id:794 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 794, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_27" Id:795 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 5, 795, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_28" Id:796 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 5, 796, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_29" Id:797 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 5, 797, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_03" Id:771 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 771, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_30" Id:798 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 5, 798, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_31" Id:799 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 5, 799, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_04" Id:772 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 772, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_05" Id:773 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 773, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_06" Id:774 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 774, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_07" Id:775 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 775, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_08" Id:776 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 776, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_09" Id:777 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 777, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "ZOP_NarrowLine_1" Id:570 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 1, 570, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "ZOP_NarrowLine_2" Id:571 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 1, 571, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "ZOP_Output_01" Id:565 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X235] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 1, 565, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "ZOP_Output_02" Id:566 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X236] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 1, 566, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "ACC_Output_01" Id:597 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X255] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 2, 597, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "BCM_Info_1" Id:540 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X21C] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 1, 540, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "BCM_Info_2" Id:1130 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X46A] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 5, 1130, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Steer_Info" Id:485 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X1E5] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 0, 485, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Veh_Gear" Id:404 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X194] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 0, 404, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "LKS_TJA_Info_Output_01" Id:613 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X265] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 2, 613, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "LKS_TJA_Info_Output_02" Id:614 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X266] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 2, 614, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Veh_WhlSpd_00" Id:588 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X24C] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 2, 588, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Veh_WhlSpd_01" Id:590 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X24E] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 2, 590, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "ABX_APA_Msg_00" Id:1810 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X712] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 5, 1810, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "ABX_APA_Msg_01" Id:1811 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X713] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 5, 1811, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "ABX_APA_Msg_02" Id:1812 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X714] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 5, 1812, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN RX Message Block: "ACC_Input" Id:592 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X250] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C2, 2, 592, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "AVP_HDMAP_Msg_01" Id:1809 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X711] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C2, 5, 1809, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "AVP_HDMAP_Msg_00" Id:1808 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X710] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C2, 5, 1808, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "Map_Info_1" Id:534 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X216] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C2, 1, 534, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "Map_Info" Id:533 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X215] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C2, 1, 533, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "Traffic_Info_00" Id:528 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X210] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C2, 1, 528, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "Localization_00" Id:538 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X21A] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C2, 1, 538, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "ZOP_Input_01" Id:560 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X230] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C2, 1, 560, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "APA_ABX_Msg_00" Id:1813 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X715] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C2, 5, 1813, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "LKS_Info_Input" Id:608 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X260] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C2, 2, 608, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the CAN communication: 500 kbit/s */
  can_type1_channel_M1_C1 = can_tp1_channel_init(can_tp1_address_table[0].
    module_addr, 0, (500 * 1000), CAN_TP1_STD, CAN_TP1_NO_SUBINT);
  can_tp1_channel_termination_set(can_type1_channel_M1_C1,
    CAN_TP1_TERMINATION_ON);

  /* ... Initialize TX message structs for custom code  */
  CANTP1_TX_SPMSG_M1_C1_STD = can_tp1_msg_tx_register(can_type1_channel_M1_C1, 3,
    1050, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);
  CANTP1_TX_SPMSG_M1_C1_XTD = can_tp1_msg_tx_register(can_type1_channel_M1_C1, 3,
    1100, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);

  /* ... Initialize STD RX message for RX Service support */
  {
    UInt32 mask = 0;
    UInt32 queueSize = 64;
    UInt32 msgId = 1;
    CANTP1_RX_SPMSG_M1_C1_STD = can_tp1_msg_rx_register(can_type1_channel_M1_C1,
      0, 1, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DATA_INFO |
      CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT);

    /* set the queue depth */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M1_C1_STD,CAN_TP1_MSG_DSMCR_BUFFER,
                    &queueSize);

    /* set the mask to select which messages are received by service mode */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M1_C1_STD,CAN_TP1_MSG_MASK, &mask);

    /* create the r-buffer */
    can_tp1_dsmcr_client_create(CANTP1_RX_SPMSG_M1_C1_STD,
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_RX_M1_C1_MCRCLT_STD );
  }

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the Partial Networking Settings */

  /* dSPACE RTICAN TX Message Block: "RADAR_HSC2_FVCM_FrP00" Id:357 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X165] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C1, 0, 357, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "RADAR_HSC2_FrP00" Id:578 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X242] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C1, 2, 578, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "RADAR_HSC2_FrP01" Id:580 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X244] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C1, 2, 580, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "RADAR_HSC2_FrP02" Id:582 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X246] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C1, 2, 582, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "FVCM_HSC2_FrP03" Id:509 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X1FD] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C1, 1, 509, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO,
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "FVCM_HSC2_FrP02" Id:359 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X167] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C1, 0, 359, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO,
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "FVCM_HSC2_FrP01" Id:358 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X166] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C1, 0, 358, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO,
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_ECM_FrP04" Id:404 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X194] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 0, 404, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_ECM_FrP27" Id:251 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XFB] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 0, 251, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_FrP04" Id:481 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E1] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 0, 481, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "SAS_HSC2_FrP00" Id:485 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E5] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 0, 485, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP02" Id:389 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X185] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 0, 389, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP05" Id:489 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E9] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 1, 489, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP19" Id:572 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X23C] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 2, 572, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP22" Id:588 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24C] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 2, 588, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP23" Id:590 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24E] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 2, 590, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_HCU_FrP00" Id:175 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAF] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 0, 175, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_HCU_FrP08" Id:172 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAC] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 0, 172, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "EHBS_HSC2_FrP00" Id:438 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1B6] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 0, 438, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_BCM_FrP04" Id:1130 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X46A] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 5, 1130, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_FICM_FrP02" Id:886 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X376] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 5, 886, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "EPS_HSC2_FrP03" Id:492 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1EC] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 1, 492, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP24" Id:593 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X251] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 2, 593, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_HCU_FrP13" Id:412 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X19C] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 0, 412, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_BCM_FrP06" Id:540 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X21C] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 1, 540, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "Tester_HSC2_ECM_FrP00" Id:201 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XC9] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 0, 201, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "ACC_Input" Id:592 */
  Intergration_ZOP_B.SFunction1_o4_ev = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o5_ja = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o6_ey = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "AVP_HDMAP_Msg_01" Id:1809 */
  Intergration_ZOP_B.SFunction1_o5_f4 = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o6_i3 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o7_al = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "AVP_HDMAP_Msg_00" Id:1808 */
  Intergration_ZOP_B.SFunction1_o4_asy = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o5_js = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o6_ge = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Map_Info_1" Id:534 */
  Intergration_ZOP_B.SFunction1_o9_l1 = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_ia = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_oo = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Map_Info" Id:533 */
  Intergration_ZOP_B.SFunction1_o7_nj = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o8_ff = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o9_hq = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Traffic_Info_00" Id:528 */
  Intergration_ZOP_B.SFunction1_o5_hvo = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o6_cph = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o7_mo = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Localization_00" Id:538 */
  Intergration_ZOP_B.SFunction1_o3_mi = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o4_ar = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o5_fy = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "ZOP_Input_01" Id:560 */
  Intergration_ZOP_B.SFunction1_o6_fz = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o7_ne = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o8_gc = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "APA_ABX_Msg_00" Id:1813 */
  Intergration_ZOP_B.SFunction1_o3_cdh = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o4_c1 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o5_dn = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "LKS_Info_Input" Id:608 */
  Intergration_ZOP_B.SFunction1_o3_kw = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o4_aju = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o5_py = 0;/* deltatime */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_00" Id:768 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_iy = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_gp = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_jg = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_g3 = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_01" Id:769 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_cm = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_nk = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_dyq = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_cku = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_10" Id:778 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_ka = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_bp = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_ec = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_d2o = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_11" Id:779 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_hu = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_cj = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_bc = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_dg = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_12" Id:780 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_b0 = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_ep = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_bt = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_lo4 = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_13" Id:781 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_go = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_mo3 = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_io2 = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_e5 = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_14" Id:782 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_ca = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_ld0 = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_no = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_g4 = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_15" Id:783 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_mf = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_ju = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_pa = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_oe = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_16" Id:784 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_n5 = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_jj = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_i2 = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_nv = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_17" Id:785 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_lu = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_kn = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_er = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_n3 = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_18" Id:786 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_c4 = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_jjy = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_h1 = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_cz = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_19" Id:787 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_ku = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_am = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_gr = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_pm3 = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_02" Id:770 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_eq = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_c3 = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_dpi = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_ov = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_20" Id:788 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_nhq = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_er = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_nq = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_io = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_21" Id:789 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_ag = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_b1 = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_k0 = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_fd = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_22" Id:790 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_gj = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_hea = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_ikj = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_hu = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_23" Id:791 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_a1 = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_djf = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_gt = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_cx = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_24" Id:792 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_ac = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_eb = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_acj = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_crf = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_25" Id:793 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_ks = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_dc = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_pp = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_h5h = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_26" Id:794 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_cru = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_hg3 = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_ip = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_d3 = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_27" Id:795 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_mi = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_mc5 = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_hqg = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_fm = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_28" Id:796 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_mv = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_ke = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_ld = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_jg = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_29" Id:797 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_gw = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_cr = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_hma = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_fe = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_03" Id:771 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_bvg = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_op = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_ci = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_ph = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_30" Id:798 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_fqz = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_i2 = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_fc2 = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_gd = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_31" Id:799 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_jk = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_pg = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_h4 = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_gz = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_04" Id:772 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_eh0 = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_pq = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_ai = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_nm = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_05" Id:773 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_bf = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_gtb = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_jp = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_dn = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_06" Id:774 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_cp = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_iw1 = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_blf = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_ehf = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_07" Id:775 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_e4 = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_lf = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_jt = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_ip = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_08" Id:776 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_e1 = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_nkm = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_d3g = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_bg = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_09" Id:777 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_gi = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_hgs = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_pfg = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_fu = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "ZOP_NarrowLine_1" Id:570 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_e5 = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_nc = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_bw = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_cxg = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "ZOP_NarrowLine_2" Id:571 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_h1 = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_h3 = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_od = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_lew = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "ZOP_Output_01" Id:565 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X235]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_bj = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_os = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_hx = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_bm0 = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "ZOP_Output_02" Id:566 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X236]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_de = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_gt = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_ij = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_eds = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "ACC_Output_01" Id:597 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X255]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_nt = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_oa = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_mlh = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_ff = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "BCM_Info_1" Id:540 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X21C]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_c1i = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_co = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_in = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_iy = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "BCM_Info_2" Id:1130 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X46A]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_fz = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_lq = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_ny = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_ai = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Steer_Info" Id:485 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X1E5]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_pd = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_ls = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_lkg = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_ah = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Veh_Gear" Id:404 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X194]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_b4 = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_a1 = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_ov = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_dh = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "LKS_TJA_Info_Output_01" Id:613 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X265]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_na = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_lxr = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_hn = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_e3 = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "LKS_TJA_Info_Output_02" Id:614 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X266]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_el = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_ba = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_gk = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_fx = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Veh_WhlSpd_00" Id:588 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X24C]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_k1j = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_hy = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_fc = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_lxe = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Veh_WhlSpd_01" Id:590 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X24E]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_bh = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_dvi = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_inj = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_ba = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "ABX_APA_Msg_00" Id:1810 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X712]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_lr0 = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_ek = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_pfz = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_jq = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "ABX_APA_Msg_01" Id:1811 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X713]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_en = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_l34 = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_oo = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_kc = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "ABX_APA_Msg_02" Id:1812 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X714]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_p4 = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_kq = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_ei = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_hw = 0;/* delaytime */
  }

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_ECM_FrP04" Id:404 */
  Intergration_ZOP_B.SFunction1_o5 = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o6 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o7 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_ECM_FrP27" Id:251 */
  Intergration_ZOP_B.SFunction1_o5_j = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o6_f = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o7_l = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_FrP04" Id:481 */
  Intergration_ZOP_B.SFunction1_o12 = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o13 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o14 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "SAS_HSC2_FrP00" Id:485 */
  Intergration_ZOP_B.SFunction1_o11_g = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o12_k = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o13_l = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP02" Id:389 */
  Intergration_ZOP_B.SFunction1_o5_o = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o6_i = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o7_e = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP05" Id:489 */
  Intergration_ZOP_B.SFunction1_o5_ag = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o6_g = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o7_b = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP19" Id:572 */
  Intergration_ZOP_B.SFunction1_o5_i = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o6_m = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o7_g = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP22" Id:588 */
  Intergration_ZOP_B.SFunction1_o14_c = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o15 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o16 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP23" Id:590 */
  Intergration_ZOP_B.SFunction1_o13_i = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_a = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_o = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_HCU_FrP00" Id:175 */
  Intergration_ZOP_B.SFunction1_o9_je = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_o = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_f = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_HCU_FrP08" Id:172 */
  Intergration_ZOP_B.SFunction1_o7_p = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o8_g = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o9_j0 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "EHBS_HSC2_FrP00" Id:438 */
  Intergration_ZOP_B.SFunction1_o5_b = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o6_k = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o7_c = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_BCM_FrP04" Id:1130 */
  Intergration_ZOP_B.SFunction1_o21 = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o22 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o23 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_FICM_FrP02" Id:886 */
  Intergration_ZOP_B.SFunction1_o3_pi = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o4_n = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o5_en = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "EPS_HSC2_FrP03" Id:492 */
  Intergration_ZOP_B.SFunction1_o8_ct = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o9_c = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o10_cc = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP24" Id:593 */
  Intergration_ZOP_B.SFunction1_o11_j = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o12_d = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o13_d = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_HCU_FrP13" Id:412 */
  Intergration_ZOP_B.SFunction1_o6_jq = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o7_ia = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o8_cv = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_BCM_FrP06" Id:540 */
  Intergration_ZOP_B.SFunction1_o3_hb = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o4_k2 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o5_e1 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Tester_HSC2_ECM_FrP00" Id:201 */
  Intergration_ZOP_B.SFunction1_o8_alo = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o9_gk4 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o10_ac = 0;/* deltatime */

  /* dSPACE RTICAN TX Message Block: "RADAR_HSC2_FVCM_FrP00" Id:357 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X165]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_bsg = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_mc = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_au = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_c5 = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "RADAR_HSC2_FrP00" Id:578 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X242]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_ce = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_fl = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_os = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_hy = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "RADAR_HSC2_FrP01" Id:580 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X244]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_o1 = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_fs = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_kl = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_kx = 0;/* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "RADAR_HSC2_FrP02" Id:582 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X246]->timestamp > 0.0) {
    Intergration_ZOP_B.SFunction1_o1_cn = 0;/* processed - flag */
    Intergration_ZOP_B.SFunction1_o2_e5 = 0;/* timestamp */
    Intergration_ZOP_B.SFunction1_o3_e5 = 0;/* deltatime */
    Intergration_ZOP_B.SFunction1_o4_cm0 = 0;/* delaytime */
  }

  /* dSPACE I/O Board DS1_RTICAN #2 */
  /* Initialization of DS1501 board */
  can_tp1_communication_init(can_tp1_address_table[1].module_addr,
    CAN_TP1_INT_ENABLE);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the CAN communication: 500 kbit/s */
  can_type1_channel_M2_C2 = can_tp1_channel_init(can_tp1_address_table[1].
    module_addr, 1, (500 * 1000), CAN_TP1_STD, CAN_TP1_NO_SUBINT);
  can_tp1_channel_termination_set(can_type1_channel_M2_C2,
    CAN_TP1_TERMINATION_ON);

  /* ... Initialize TX message structs for custom code  */
  CANTP1_TX_SPMSG_M2_C2_STD = can_tp1_msg_tx_register(can_type1_channel_M2_C2, 3,
    1050, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);
  CANTP1_TX_SPMSG_M2_C2_XTD = can_tp1_msg_tx_register(can_type1_channel_M2_C2, 3,
    1100, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);

  /* ... Initialize STD RX message for RX Service support */
  {
    UInt32 mask = 0;
    UInt32 queueSize = 64;
    UInt32 msgId = 1;
    CANTP1_RX_SPMSG_M2_C2_STD = can_tp1_msg_rx_register(can_type1_channel_M2_C2,
      0, 1, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DATA_INFO |
      CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT);

    /* set the queue depth */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M2_C2_STD,CAN_TP1_MSG_DSMCR_BUFFER,
                    &queueSize);

    /* set the mask to select which messages are received by service mode */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M2_C2_STD,CAN_TP1_MSG_MASK, &mask);

    /* create the r-buffer */
    can_tp1_dsmcr_client_create(CANTP1_RX_SPMSG_M2_C2_STD,
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_RX_M2_C2_MCRCLT_STD );
  }

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the Partial Networking Settings */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_00_Part1of2" Id:80 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X50] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 2, 80, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_00_Part2of2" Id:32 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X20] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 0, 32, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_01_Part1of2" Id:81 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X51] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 3, 81, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_01_Part2of2" Id:33 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X21] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 0, 33, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_02_Part1of2" Id:82 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X52] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 3, 82, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_02_Part2of2" Id:34 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X22] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 0, 34, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_03_Part1of2" Id:83 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X53] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 3, 83, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_03_Part2of2" Id:35 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X23] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 0, 35, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_04_Part1of2" Id:84 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X54] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 3, 84, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_04_Part2of2" Id:36 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X24] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 0, 36, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_05_Part1of2" Id:85 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X55] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 3, 85, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_05_Part2of2" Id:37 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X25] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 0, 37, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_06_Part1of2" Id:86 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X56] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 3, 86, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_06_Part2of2" Id:38 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X26] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 0, 38, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_07_Part1of2" Id:87 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X57] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 3, 87, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_07_Part2of2" Id:39 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X27] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 0, 39, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_08_Part1of2" Id:88 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X58] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 3, 88, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_08_Part2of2" Id:40 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X28] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 0, 40, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_09_Part1of2" Id:89 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X59] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 3, 89, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_09_Part2of2" Id:41 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X29] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 0, 41, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_10_Part1of2" Id:90 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5A] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 3, 90, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_10_Part2of2" Id:42 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2A] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 0, 42, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_11_Part1of2" Id:91 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5B] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 3, 91, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_11_Part2of2" Id:43 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2B] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 0, 43, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_12_Part1of2" Id:92 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5C] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 3, 92, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_12_Part2of2" Id:44 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2C] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 0, 44, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_13_Part1of2" Id:93 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5D] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 3, 93, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_13_Part2of2" Id:45 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2D] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 0, 45, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_14_Part1of2" Id:94 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5E] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 4, 94, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_14_Part2of2" Id:46 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2E] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 1, 46, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_15_Part1of2" Id:95 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5F] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 4, 95, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_15_Part2of2" Id:47 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2F] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 1, 47, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_16_Part1of2" Id:96 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X60] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 4, 96, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_16_Part2of2" Id:48 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X30] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 1, 48, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_17_Part1of2" Id:97 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X61] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 4, 97, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_17_Part2of2" Id:49 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X31] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 1, 49, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_18_Part1of2" Id:98 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X62] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 4, 98, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_18_Part2of2" Id:50 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X32] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 1, 50, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_19_Part1of2" Id:99 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X63] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 4, 99, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_19_Part2of2" Id:51 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X33] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 1, 51, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_20_Part1of2" Id:100 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X64] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 4, 100, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_20_Part2of2" Id:52 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X34] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 1, 52, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_21_Part1of2" Id:101 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X65] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 4, 101, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_21_Part2of2" Id:53 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X35] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 1, 53, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_22_Part1of2" Id:102 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X66] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 4, 102, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_22_Part2of2" Id:54 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X36] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 1, 54, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_23_Part1of2" Id:103 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X67] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 4, 103, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_23_Part2of2" Id:55 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X37] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 1, 55, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_24_Part1of2" Id:104 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X68] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 4, 104, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_24_Part2of2" Id:56 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X38] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 1, 56, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_25_Part1of2" Id:105 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X69] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 4, 105, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_25_Part2of2" Id:57 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X39] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 1, 57, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_26_Part1of2" Id:106 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6A] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 4, 106, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_26_Part2of2" Id:58 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3A] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 1, 58, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_27_Part1of2" Id:107 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6B] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 4, 107, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_27_Part2of2" Id:59 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3B] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 2, 59, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_28_Part1of2" Id:108 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6C] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 5, 108, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_28_Part2of2" Id:60 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3C] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 2, 60, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_29_Part1of2" Id:109 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6D] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 5, 109, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_29_Part2of2" Id:61 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3D] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 2, 61, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_30_Part1of2" Id:110 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6E] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 5, 110, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_30_Part2of2" Id:62 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3E] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 2, 62, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_31_Part1of2" Id:111 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6F] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 5, 111, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_31_Part2of2" Id:63 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3F] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 2, 63, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_32_Part1of2" Id:112 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X70] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 5, 112, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_32_Part2of2" Id:64 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X40] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 2, 64, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_33_Part1of2" Id:113 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X71] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 5, 113, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_33_Part2of2" Id:65 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X41] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 2, 65, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_34_Part1of2" Id:114 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X72] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 5, 114, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_34_Part2of2" Id:66 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X42] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 2, 66, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_35_Part1of2" Id:115 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X73] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 5, 115, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_35_Part2of2" Id:67 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X43] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 2, 67, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_36_Part1of2" Id:116 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X74] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 5, 116, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_36_Part2of2" Id:68 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X44] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 2, 68, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_37_Part1of2" Id:117 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X75] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 5, 117, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_37_Part2of2" Id:69 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X45] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 2, 69, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_38_Part1of2" Id:118 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X76] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 5, 118, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_38_Part2of2" Id:70 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X46] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 2, 70, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_39_Part1of2" Id:119 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X77] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 5, 119, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_39_Part2of2" Id:71 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X47] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 2, 71, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Status" Id:128 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X80] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C2, 5, 128, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_00_Part1of2" Id:80 */
  Intergration_ZOP_B.SFunction1_o13_p = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_l = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_g = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_00_Part2of2" Id:32 */
  Intergration_ZOP_B.SFunction1_o9_p = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_k = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_n = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_01_Part1of2" Id:81 */
  Intergration_ZOP_B.SFunction1_o13_jt = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_k = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_op = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_01_Part2of2" Id:33 */
  Intergration_ZOP_B.SFunction1_o9_g3 = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_g = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_ac = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_02_Part1of2" Id:82 */
  Intergration_ZOP_B.SFunction1_o13_pq = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_p = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_b = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_02_Part2of2" Id:34 */
  Intergration_ZOP_B.SFunction1_o9_b = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_i = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_e4 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_03_Part1of2" Id:83 */
  Intergration_ZOP_B.SFunction1_o13_o = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_n = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_n = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_03_Part2of2" Id:35 */
  Intergration_ZOP_B.SFunction1_o9_o = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_f = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_d = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_04_Part1of2" Id:84 */
  Intergration_ZOP_B.SFunction1_o13_g = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_pg = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_np = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_04_Part2of2" Id:36 */
  Intergration_ZOP_B.SFunction1_o9_a = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_fa = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_i = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_05_Part1of2" Id:85 */
  Intergration_ZOP_B.SFunction1_o13_gz = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_g = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_a = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_05_Part2of2" Id:37 */
  Intergration_ZOP_B.SFunction1_o9_m = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_g0 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_nk = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_06_Part1of2" Id:86 */
  Intergration_ZOP_B.SFunction1_o13_ic = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_kk = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_bw = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_06_Part2of2" Id:38 */
  Intergration_ZOP_B.SFunction1_o9_l = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_n0 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_az = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_07_Part1of2" Id:87 */
  Intergration_ZOP_B.SFunction1_o13_h = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_b = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_o2 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_07_Part2of2" Id:39 */
  Intergration_ZOP_B.SFunction1_o9_kj = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_i5 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_as = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_08_Part1of2" Id:88 */
  Intergration_ZOP_B.SFunction1_o13_f = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_j2 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_k = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_08_Part2of2" Id:40 */
  Intergration_ZOP_B.SFunction1_o9_g4 = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_e = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_ij = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_09_Part1of2" Id:89 */
  Intergration_ZOP_B.SFunction1_o13_c = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_j4 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_d = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_09_Part2of2" Id:41 */
  Intergration_ZOP_B.SFunction1_o9_el = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_kt = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_bw = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_10_Part1of2" Id:90 */
  Intergration_ZOP_B.SFunction1_o13_k = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_ll = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_o5 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_10_Part2of2" Id:42 */
  Intergration_ZOP_B.SFunction1_o9_po = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_fz = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_c = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_11_Part1of2" Id:91 */
  Intergration_ZOP_B.SFunction1_o13_iz = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_m = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_om = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_11_Part2of2" Id:43 */
  Intergration_ZOP_B.SFunction1_o9_kjw = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_i0 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_dh = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_12_Part1of2" Id:92 */
  Intergration_ZOP_B.SFunction1_o13_gk = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_f = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_ji = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_12_Part2of2" Id:44 */
  Intergration_ZOP_B.SFunction1_o9_ab = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_hu = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_ijt = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_13_Part1of2" Id:93 */
  Intergration_ZOP_B.SFunction1_o13_ok = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_nw = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_c = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_13_Part2of2" Id:45 */
  Intergration_ZOP_B.SFunction1_o9_pg = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_fe = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_ic = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_14_Part1of2" Id:94 */
  Intergration_ZOP_B.SFunction1_o13_cs = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_jq = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_ga = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_14_Part2of2" Id:46 */
  Intergration_ZOP_B.SFunction1_o9_nq = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_ou = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_is = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_15_Part1of2" Id:95 */
  Intergration_ZOP_B.SFunction1_o13_a = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_e = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_l = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_15_Part2of2" Id:47 */
  Intergration_ZOP_B.SFunction1_o9_fk = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_pj = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_dx = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_16_Part1of2" Id:96 */
  Intergration_ZOP_B.SFunction1_o13_go = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_h = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_nn = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_16_Part2of2" Id:48 */
  Intergration_ZOP_B.SFunction1_o9_ml = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_pjk = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_im = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_17_Part1of2" Id:97 */
  Intergration_ZOP_B.SFunction1_o13_m = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_pe = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_jm = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_17_Part2of2" Id:49 */
  Intergration_ZOP_B.SFunction1_o9_oq = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_op = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_py = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_18_Part1of2" Id:98 */
  Intergration_ZOP_B.SFunction1_o13_li = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_pq = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_e = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_18_Part2of2" Id:50 */
  Intergration_ZOP_B.SFunction1_o9_jk = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_cv = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_m5 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_19_Part1of2" Id:99 */
  Intergration_ZOP_B.SFunction1_o13_mk = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_i = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_ew = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_19_Part2of2" Id:51 */
  Intergration_ZOP_B.SFunction1_o9_ij = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_fh = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_by = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_20_Part1of2" Id:100 */
  Intergration_ZOP_B.SFunction1_o13_mn = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_d = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_i = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_20_Part2of2" Id:52 */
  Intergration_ZOP_B.SFunction1_o9_gp = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_k3 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_nn = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_21_Part1of2" Id:101 */
  Intergration_ZOP_B.SFunction1_o13_an = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_o = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_m = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_21_Part2of2" Id:53 */
  Intergration_ZOP_B.SFunction1_o9_dv = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_jd = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_p1 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_22_Part1of2" Id:102 */
  Intergration_ZOP_B.SFunction1_o13_je = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_kx = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_ao = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_22_Part2of2" Id:54 */
  Intergration_ZOP_B.SFunction1_o9_ee = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_mk = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_og = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_23_Part1of2" Id:103 */
  Intergration_ZOP_B.SFunction1_o13_fu = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_ly = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_as = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_23_Part2of2" Id:55 */
  Intergration_ZOP_B.SFunction1_o9_fo = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_dt = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_ne = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_24_Part1of2" Id:104 */
  Intergration_ZOP_B.SFunction1_o13_nn = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_jl = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_p = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_24_Part2of2" Id:56 */
  Intergration_ZOP_B.SFunction1_o9_ny = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_ge = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_gx = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_25_Part1of2" Id:105 */
  Intergration_ZOP_B.SFunction1_o13_n3 = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_lr = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_a3 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_25_Part2of2" Id:57 */
  Intergration_ZOP_B.SFunction1_o9_p2 = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_g3 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_e0 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_26_Part1of2" Id:106 */
  Intergration_ZOP_B.SFunction1_o13_nz = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_gs = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_lt = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_26_Part2of2" Id:58 */
  Intergration_ZOP_B.SFunction1_o9_kl = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_ae = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_b1 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_27_Part1of2" Id:107 */
  Intergration_ZOP_B.SFunction1_o13_kc = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_pgf = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_lz = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_27_Part2of2" Id:59 */
  Intergration_ZOP_B.SFunction1_o9_ha = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_np = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_kj = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_28_Part1of2" Id:108 */
  Intergration_ZOP_B.SFunction1_o13_fa = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_fe = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_km = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_28_Part2of2" Id:60 */
  Intergration_ZOP_B.SFunction1_o9_hy = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_dh = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_f4 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_29_Part1of2" Id:109 */
  Intergration_ZOP_B.SFunction1_o13_pd = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_og = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_bv = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_29_Part2of2" Id:61 */
  Intergration_ZOP_B.SFunction1_o9_lr = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_fu = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_nc = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_30_Part1of2" Id:110 */
  Intergration_ZOP_B.SFunction1_o13_pr = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_na = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_db = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_30_Part2of2" Id:62 */
  Intergration_ZOP_B.SFunction1_o9_cc = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_in = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_ii = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_31_Part1of2" Id:111 */
  Intergration_ZOP_B.SFunction1_o13_av = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_he = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_ci = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_31_Part2of2" Id:63 */
  Intergration_ZOP_B.SFunction1_o9_gc = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_a1 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_mb = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_32_Part1of2" Id:112 */
  Intergration_ZOP_B.SFunction1_o13_gol = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_ej = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_au = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_32_Part2of2" Id:64 */
  Intergration_ZOP_B.SFunction1_o9_o0 = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_hs = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_fj = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_33_Part1of2" Id:113 */
  Intergration_ZOP_B.SFunction1_o13_jo = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_gd = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_jl = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_33_Part2of2" Id:65 */
  Intergration_ZOP_B.SFunction1_o9_pd = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_o1 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_eq = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_34_Part1of2" Id:114 */
  Intergration_ZOP_B.SFunction1_o13_d2 = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_lo = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_kp = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_34_Part2of2" Id:66 */
  Intergration_ZOP_B.SFunction1_o9_k4 = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_eq = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_gm = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_35_Part1of2" Id:115 */
  Intergration_ZOP_B.SFunction1_o13_jx = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_hz = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_id = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_35_Part2of2" Id:67 */
  Intergration_ZOP_B.SFunction1_o9_du = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_o2 = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_n1 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_36_Part1of2" Id:116 */
  Intergration_ZOP_B.SFunction1_o13_d0 = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_eb = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_iz = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_36_Part2of2" Id:68 */
  Intergration_ZOP_B.SFunction1_o9_gr = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_eg = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_ps = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_37_Part1of2" Id:117 */
  Intergration_ZOP_B.SFunction1_o13_pj = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_bt = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_kt = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_37_Part2of2" Id:69 */
  Intergration_ZOP_B.SFunction1_o9_lq = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_jo = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_dm = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_38_Part1of2" Id:118 */
  Intergration_ZOP_B.SFunction1_o13_hi = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_ac = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_bj = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_38_Part2of2" Id:70 */
  Intergration_ZOP_B.SFunction1_o9_js = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_az = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_ay = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_39_Part1of2" Id:119 */
  Intergration_ZOP_B.SFunction1_o13_pu = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o14_id = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o15_o4 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_39_Part2of2" Id:71 */
  Intergration_ZOP_B.SFunction1_o9_b0 = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o10_azf = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o11_gb = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "FRS_Status" Id:128 */
  Intergration_ZOP_B.SFunction1_o12_dy = 0;/* processed - flag */
  Intergration_ZOP_B.SFunction1_o13_hp = 0;/* timestamp */
  Intergration_ZOP_B.SFunction1_o14_nu = 0;/* deltatime */

  /* dSPACE I/O Board RTICAN_GLOBAL #0 */
}

/* Function rti_mdl_slave_load() is empty */
#define rti_mdl_slave_load()

/* Function rti_mdl_rtk_initialize() is empty */
#define rti_mdl_rtk_initialize()

static void rti_mdl_initialize_io_units(void)
{
  /* dSPACE I/O Board DS1_RTICAN #3 */
  /* Start CAN controller */
  can_tp1_channel_start(can_type1_channel_M3_C1, CAN_TP1_INT_DISABLE);

  /* Start CAN controller */
  can_tp1_channel_start(can_type1_channel_M3_C2, CAN_TP1_INT_DISABLE);

  /* Set the type1CAN error level */
  rtican_type1_error_level = 0;

  /* ... Reset all taskqueue-specific error variables */
  rtican_type1_tq_err_all_reset(2);

  /* ... Clear all message data buffers */
  can_tp1_all_data_clear(can_tp1_address_table[2].module_addr);

  /* dSPACE RTICAN STD Srvc-Message Block */
  {
    static int numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][0] = can_tp1_msg_wakeup
              (CANTP1_RX_SPMSG_M3_C1_STD))== DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][1] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X127])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][0] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X123])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][0] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X124])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][1] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X126])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][1] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X131])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][1] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X132])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][0] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0XE1])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][3] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X46A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][3] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X21C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][2] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X194])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][2] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X1E5])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][2] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X185])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][2] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X1E9])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][3] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0X23C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][0] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_TX_STD_0XC9])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][3] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_RX_STD_0X60A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][4] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_RX_STD_0X60B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][4] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_RX_STD_0X61A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][4] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_RX_STD_0X61B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  /* dSPACE RTICAN STD Srvc-Message Block */
  {
    static int numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][0] = can_tp1_msg_wakeup
              (CANTP1_RX_SPMSG_M3_C2_STD))== DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][5] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C2_RX_STD_0X63A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][5] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C2_RX_STD_0X63B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][4] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C2_RX_STD_0X62A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][5] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C2_RX_STD_0X62B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  /* dSPACE I/O Board DS1_RTICAN #1 */
  /* Start CAN controller */
  can_tp1_channel_start(can_type1_channel_M1_C2, CAN_TP1_INT_DISABLE);

  /* Start CAN controller */
  can_tp1_channel_start(can_type1_channel_M1_C1, CAN_TP1_INT_DISABLE);

  /* Set the type1CAN error level */
  rtican_type1_error_level = 0;

  /* ... Reset all taskqueue-specific error variables */
  rtican_type1_tq_err_all_reset(0);

  /* ... Clear all message data buffers */
  can_tp1_all_data_clear(can_tp1_address_table[0].module_addr);

  /* dSPACE RTICAN STD Srvc-Message Block */
  {
    static int numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (CANTP1_RX_SPMSG_M1_C2_STD))== DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X235])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X236])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X255])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X21C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X46A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X1E5])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X194])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X265])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X266])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X24C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X24E])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X712])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X713])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X714])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X250])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X711])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X710])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X216])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X215])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X210])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X21A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X230])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X715])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X260])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  /* dSPACE RTICAN STD Srvc-Message Block */
  {
    static int numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (CANTP1_RX_SPMSG_M1_C1_STD))== DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X165])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X242])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X244])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X246])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X1FD])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X167])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X166])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X194])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XFB])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E1])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E5])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X185])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E9])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X23C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24E])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAF])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAC])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1B6])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X46A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X376])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1EC])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X251])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X19C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X21C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XC9])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  /* dSPACE I/O Board DS1_RTICAN #2 */
  /* Start CAN controller */
  can_tp1_channel_start(can_type1_channel_M2_C2, CAN_TP1_INT_DISABLE);

  /* Set the type1CAN error level */
  rtican_type1_error_level = 0;

  /* ... Reset all taskqueue-specific error variables */
  rtican_type1_tq_err_all_reset(1);

  /* ... Clear all message data buffers */
  can_tp1_all_data_clear(can_tp1_address_table[1].module_addr);

  /* dSPACE RTICAN STD Srvc-Message Block */
  {
    static int numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (CANTP1_RX_SPMSG_M2_C2_STD))== DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X50])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X20])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X51])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X21])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X52])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X22])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X53])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X23])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X54])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X24])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X55])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X25])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X56])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X26])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X57])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X27])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X58])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X28])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X59])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X29])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5D])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2D])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5E])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2E])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5F])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2F])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X60])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X30])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X61])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X31])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X62])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X32])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X63])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X33])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X64])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X34])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X65])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X35])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X66])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X36])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X67])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X37])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X68])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X38])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X69])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X39])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6D])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3D])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6E])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3E])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6F])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3F])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X70])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X40])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X71])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X41])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X72])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X42])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X73])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X43])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X74])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X44])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X75])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X45])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X76])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X46])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X77])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X47])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X80])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }
}

/* Function rti_mdl_acknowledge_interrupts() is empty */
#define rti_mdl_acknowledge_interrupts()

/* Function rti_mdl_timetables_register() is empty */
#define rti_mdl_timetables_register()

static void rti_mdl_background(void)
{
  /* DsDaq background call */
  DsDaq_Background(0);

  /* dSPACE I/O Board CAN Type 1 #1 Unit:RTICANMM */
  {
    DsTError error;
    error = DsCanBoard_updateAll();
  }

  {
    extern void backgroundFunction_21143421();
    backgroundFunction_21143421();
  }

  /* dSPACE I/O Board DS1_RTICAN #3 */
  {
    real_T bg_code_exec_time;
    static real_T bg_code_last_exec_time = 0.0;
    bg_code_exec_time = RTLIB_TIC_READ();
    if ((bg_code_exec_time - bg_code_last_exec_time) > 0.25 ||
        (bg_code_exec_time - bg_code_last_exec_time) < 0) {
      /* ... Check taskqueue-specific error variables */
      rtican_type1_tq_err_all_chk(can_tp1_address_table[2].module_addr, 2);
      bg_code_last_exec_time = bg_code_exec_time;
    }
  }

  /* copy DPMEM - buffers in background */
  {
    /* call update function for CAN Tp1 CAN interface (module number: 3) */
    can_tp1_msg_copy_all_to_mem(can_tp1_address_table[2].module_addr);
  }

  /* dSPACE I/O Board DS1_RTICAN #1 */
  {
    real_T bg_code_exec_time;
    static real_T bg_code_last_exec_time = 0.0;
    bg_code_exec_time = RTLIB_TIC_READ();
    if ((bg_code_exec_time - bg_code_last_exec_time) > 0.25 ||
        (bg_code_exec_time - bg_code_last_exec_time) < 0) {
      /* ... Check taskqueue-specific error variables */
      rtican_type1_tq_err_all_chk(can_tp1_address_table[0].module_addr, 0);
      bg_code_last_exec_time = bg_code_exec_time;
    }
  }

  /* copy DPMEM - buffers in background */
  {
    /* call update function for CAN Tp1 CAN interface (module number: 1) */
    can_tp1_msg_copy_all_to_mem(can_tp1_address_table[0].module_addr);
  }

  /* dSPACE I/O Board DS1_RTICAN #2 */
  {
    real_T bg_code_exec_time;
    static real_T bg_code_last_exec_time = 0.0;
    bg_code_exec_time = RTLIB_TIC_READ();
    if ((bg_code_exec_time - bg_code_last_exec_time) > 0.25 ||
        (bg_code_exec_time - bg_code_last_exec_time) < 0) {
      /* ... Check taskqueue-specific error variables */
      rtican_type1_tq_err_all_chk(can_tp1_address_table[1].module_addr, 1);
      bg_code_last_exec_time = bg_code_exec_time;
    }
  }

  /* copy DPMEM - buffers in background */
  {
    /* call update function for CAN Tp1 CAN interface (module number: 2) */
    can_tp1_msg_copy_all_to_mem(can_tp1_address_table[1].module_addr);
  }
}

__INLINE void rti_mdl_sample_input(void)
{
  /* Calls for base sample time: [0.01, 0.0] */
  /* dSPACE I/O Board DS1_RTICAN #1 Unit:DEFAULT */
  /* call update function for CAN Tp1 CAN interface (module number: 1) */
  can_tp1_msg_copy_all_to_mem(can_tp1_address_table[0].module_addr);

  /* dSPACE I/O Board DS1_RTICAN #2 Unit:DEFAULT */
  /* call update function for CAN Tp1 CAN interface (module number: 2) */
  can_tp1_msg_copy_all_to_mem(can_tp1_address_table[1].module_addr);
}

static void rti_mdl_daq_service()
{
  /* dSPACE Host Service */
  host_service(1, rtk_current_task_absolute_time_ptr_get());
  DsDaq_Service(0, 0, 1, (DsDaqSTimestampStruct *)
                rtk_current_task_absolute_time_ptr_get());
}

#undef __INLINE

/****** [EOF] ****************************************************************/
