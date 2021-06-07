/***************************************************************************

   Source file VLC_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Fri Jan 22 10:54:09 2021

   Copyright 2021, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "VLC_trc_ptr.h"
#include "VLC.h"
#include "VLC_private.h"

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
volatile COM_PROPACT_ST *p_0_VLC_COM_PROPACT_ST_0 = NULL;
volatile real_T *p_0_VLC_real_T_1 = NULL;
volatile real32_T *p_0_VLC_real32_T_2 = NULL;
volatile boolean_T *p_0_VLC_boolean_T_3 = NULL;
volatile real_T *p_2_VLC_real_T_0 = NULL;
volatile real32_T *p_2_VLC_real32_T_1 = NULL;
volatile uint32_T *p_2_VLC_uint32_T_2 = NULL;
volatile real32_T *p_2_VLC_real32_T_3 = NULL;
volatile real32_T *p_2_VLC_real32_T_4 = NULL;
volatile real_T *p_3_VLC_real_T_0 = NULL;
volatile real32_T *p_3_VLC_real32_T_1 = NULL;
volatile int8_T *p_3_VLC_int8_T_2 = NULL;
volatile uint8_T *p_3_VLC_uint8_T_3 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_VLC_COM_PROPACT_ST_0 = &VLC_B.COM_PropAct_st;
  p_0_VLC_real_T_1 = &VLC_B.Memory1;
  p_0_VLC_real32_T_2 = &VLC_B.Memory_j;
  p_0_VLC_boolean_T_3 = &VLC_B.RelationalOperator;
  p_2_VLC_real_T_0 = &VLC_P_g.Memory1_InitialCondition;
  p_2_VLC_real32_T_1 = &VLC_P_g.Constant1_Value_p;
  p_2_VLC_uint32_T_2 = &VLC_P_g.Delay1_DelayLength;
  p_2_VLC_real32_T_3 = &VLC_P_g.IfActionSubsystem_a.Constant_Value;
  p_2_VLC_real32_T_4 = &VLC_P_g.IfActionSubsystem.Constant_Value;
  p_3_VLC_real_T_0 = &VLC_DW.Memory1_PreviousInput;
  p_3_VLC_real32_T_1 = &VLC_DW.Delay1_DSTATE;
  p_3_VLC_int8_T_2 = &VLC_DW.If_ActiveSubsystem;
  p_3_VLC_uint8_T_3 = &VLC_DW.icLoad;
}

void VLC_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
