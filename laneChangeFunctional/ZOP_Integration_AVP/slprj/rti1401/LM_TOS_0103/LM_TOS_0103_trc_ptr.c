/***************************************************************************

   Source file LM_TOS_0103_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Wed Jan  6 16:49:46 2021

   Copyright 2021, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "LM_TOS_0103_trc_ptr.h"
#include "LM_TOS_0103.h"
#include "LM_TOS_0103_private.h"

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
volatile FUS_OUTOBJ_LIST_ST *p_0_LM_TOS_0103_FUS_OUTOBJ_LIST_ST_0 = NULL;
volatile TARGETOBJECTS_ST_adp *p_0_LM_TOS_0103_TARGETOBJECTS_ST_adp_1 = NULL;
volatile SEGMENTS_ST_adp *p_0_LM_TOS_0103_SEGMENTS_ST_adp_2 = NULL;
volatile LM_LANE_ST *p_0_LM_TOS_0103_LM_LANE_ST_3 = NULL;
volatile HMI_OUTPUT_ST_APT *p_0_LM_TOS_0103_HMI_OUTPUT_ST_APT_4 = NULL;
volatile FUS_OBJ_DATA_ST *p_0_LM_TOS_0103_FUS_OBJ_DATA_ST_5 = NULL;
volatile LANES_BAS_INFO_ST_adt *p_0_LM_TOS_0103_LANES_BAS_INFO_ST_adt_6 = NULL;
volatile TARGETOBJECT *p_0_LM_TOS_0103_TARGETOBJECT_7 = NULL;
volatile SEGMENT *p_0_LM_TOS_0103_SEGMENT_8 = NULL;
volatile real32_T *p_0_LM_TOS_0103_real32_T_9 = NULL;
volatile uint8_T *p_0_LM_TOS_0103_uint8_T_10 = NULL;
volatile real_T *p_2_LM_TOS_0103_real_T_0 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_LM_TOS_0103_FUS_OUTOBJ_LIST_ST_0 =
    &LM_TOS_0103_B.BusConversion_InsertedFor_LM_TO;
  p_0_LM_TOS_0103_TARGETOBJECTS_ST_adp_1 = &LM_TOS_0103_B.LM_TOS_ALGORISM_o3;
  p_0_LM_TOS_0103_SEGMENTS_ST_adp_2 = &LM_TOS_0103_B.LM_TOS_ALGORISM_o4;
  p_0_LM_TOS_0103_LM_LANE_ST_3 = &LM_TOS_0103_B.BusCreator;
  p_0_LM_TOS_0103_HMI_OUTPUT_ST_APT_4 = &LM_TOS_0103_B.LM_TOS_ALGORISM_o7;
  p_0_LM_TOS_0103_FUS_OBJ_DATA_ST_5 = &LM_TOS_0103_B.Selector18;
  p_0_LM_TOS_0103_LANES_BAS_INFO_ST_adt_6 = &LM_TOS_0103_B.LM_TOS_ALGORISM_o2;
  p_0_LM_TOS_0103_TARGETOBJECT_7 = &LM_TOS_0103_B.BusCreator1;
  p_0_LM_TOS_0103_SEGMENT_8 = &LM_TOS_0103_B.BusCreator1_n;
  p_0_LM_TOS_0103_real32_T_9 = &LM_TOS_0103_B.VectorConcatenate_j0[0];
  p_0_LM_TOS_0103_uint8_T_10 = &LM_TOS_0103_B.LM_TOS_ALGORISM_o1;
  p_2_LM_TOS_0103_real_T_0 = &LM_TOS_0103_P_g.Constant18_Value;
}

void LM_TOS_0103_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
