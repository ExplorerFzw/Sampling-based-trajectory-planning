/***************************************************************************

   Source file VSI_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Thu Jan  7 20:45:40 2021

   Copyright 2021, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "VSI_trc_ptr.h"
#include "VSI.h"
#include "VSI_private.h"

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
volatile COM_VEHDYN_ST *p_0_VSI_COM_VEHDYN_ST_0 = NULL;
volatile VSI_VEHSTATE_ST *p_0_VSI_VSI_VEHSTATE_ST_1 = NULL;
volatile real_T *p_0_VSI_real_T_2 = NULL;
volatile real32_T *p_0_VSI_real32_T_3 = NULL;
volatile boolean_T *p_0_VSI_boolean_T_4 = NULL;
volatile real_T *p_2_VSI_real_T_0 = NULL;
volatile real32_T *p_2_VSI_real32_T_1 = NULL;
volatile real32_T *p_3_VSI_real32_T_0 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_VSI_COM_VEHDYN_ST_0 = &VSI_B.COM_VehDyn_st;
  p_0_VSI_VSI_VEHSTATE_ST_1 = &VSI_B.VSI_VehState_st;
  p_0_VSI_real_T_2 = &VSI_B.Divide4;
  p_0_VSI_real32_T_3 = &VSI_B.Divide7;
  p_0_VSI_boolean_T_4 = &VSI_B.vFLValid;
  p_2_VSI_real_T_0 = &VSI_P_g.Constant4_Value;
  p_2_VSI_real32_T_1 = &VSI_P_g.Gain_Gain;
  p_3_VSI_real32_T_0 = &VSI_DW.Memory1_PreviousInput;
}

void VSI_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
