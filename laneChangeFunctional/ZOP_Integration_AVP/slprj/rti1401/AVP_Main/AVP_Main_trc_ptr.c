/***************************************************************************

   Source file AVP_Main_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Wed Mar 17 16:04:08 2021

   Copyright 2021, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "AVP_Main_trc_ptr.h"
#include "AVP_Main.h"
#include "AVP_Main_private.h"

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
volatile uint8_T *p_0_AVP_Main_uint8_T_0 = NULL;
volatile boolean_T *p_0_AVP_Main_boolean_T_1 = NULL;
volatile real_T *p_2_AVP_Main_real_T_0 = NULL;
volatile uint8_T *p_2_AVP_Main_uint8_T_1 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_AVP_Main_uint8_T_0 = &AVP_Main_B.Switch3;
  p_0_AVP_Main_boolean_T_1 = &AVP_Main_B.RelationalOperator;
  p_2_AVP_Main_real_T_0 = &AVP_Main_P_g.Constant2_Value;
  p_2_AVP_Main_uint8_T_1 = &AVP_Main_P_g.Constant_Value;
}

void AVP_Main_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
