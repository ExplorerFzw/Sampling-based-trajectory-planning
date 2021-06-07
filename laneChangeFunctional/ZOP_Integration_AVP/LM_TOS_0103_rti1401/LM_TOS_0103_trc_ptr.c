/***************************************************************************

   Source file LM_TOS_0103_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Sun Jan  3 17:18:15 2021

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
volatile HWA_TARGETOBJECT_OUTPUT_ST
  *p_0_LM_TOS_0103_HWA_TARGETOBJECT_OUTPUT_ST_4 = NULL;
volatile HMI_OUTPUT_ST_APT *p_0_LM_TOS_0103_HMI_OUTPUT_ST_APT_5 = NULL;
volatile HMI_DISPLAY_ARRAY_ST *p_0_LM_TOS_0103_HMI_DISPLAY_ARRAY_ST_6 = NULL;
volatile FUS_OBJ_DATA_ST *p_0_LM_TOS_0103_FUS_OBJ_DATA_ST_7 = NULL;
volatile LANES_BAS_INFO_ST_adt *p_0_LM_TOS_0103_LANES_BAS_INFO_ST_adt_8 = NULL;
volatile NARROW_LANE_SUPPORT_OUTPUT_ST
  *p_0_LM_TOS_0103_NARROW_LANE_SUPPORT_OUTPUT_ST_9 = NULL;
volatile TARGETOBJECT *p_0_LM_TOS_0103_TARGETOBJECT_10 = NULL;
volatile SEGMENT *p_0_LM_TOS_0103_SEGMENT_11 = NULL;
volatile HMI_DISPLAY_ST *p_0_LM_TOS_0103_HMI_DISPLAY_ST_12 = NULL;
volatile real_T *p_0_LM_TOS_0103_real_T_13 = NULL;
volatile real32_T *p_0_LM_TOS_0103_real32_T_14 = NULL;
volatile uint16_T *p_0_LM_TOS_0103_uint16_T_15 = NULL;
volatile uint8_T *p_0_LM_TOS_0103_uint8_T_16 = NULL;
volatile real_T *p_1_LM_TOS_0103_real_T_0 = NULL;
volatile int_T *p_2_LM_TOS_0103_int_T_0 = NULL;

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
  p_0_LM_TOS_0103_HWA_TARGETOBJECT_OUTPUT_ST_4 =
    &LM_TOS_0103_B.LM_TOS_ALGORISM_o5;
  p_0_LM_TOS_0103_HMI_OUTPUT_ST_APT_5 = &LM_TOS_0103_B.LM_TOS_ALGORISM_o7;
  p_0_LM_TOS_0103_HMI_DISPLAY_ARRAY_ST_6 = &LM_TOS_0103_B.BusCreator_h;
  p_0_LM_TOS_0103_FUS_OBJ_DATA_ST_7 =
    &LM_TOS_0103_B.TmpSignalConversionAtSelectorIn[0];
  p_0_LM_TOS_0103_LANES_BAS_INFO_ST_adt_8 = &LM_TOS_0103_B.LM_TOS_ALGORISM_o2;
  p_0_LM_TOS_0103_NARROW_LANE_SUPPORT_OUTPUT_ST_9 =
    &LM_TOS_0103_B.LM_TOS_ALGORISM_o8;
  p_0_LM_TOS_0103_TARGETOBJECT_10 = &LM_TOS_0103_B.BusCreator1;
  p_0_LM_TOS_0103_SEGMENT_11 = &LM_TOS_0103_B.BusCreator1_ch;
  p_0_LM_TOS_0103_HMI_DISPLAY_ST_12 = &LM_TOS_0103_B.Selector_a;
  p_0_LM_TOS_0103_real_T_13 = &LM_TOS_0103_B.DataTypeConversion;
  p_0_LM_TOS_0103_real32_T_14 = &LM_TOS_0103_B.VectorConcatenate_a[0];
  p_0_LM_TOS_0103_uint16_T_15 = &LM_TOS_0103_B.LM_TOS_ALGORISM_o9;
  p_0_LM_TOS_0103_uint8_T_16 = &LM_TOS_0103_B.LM_TOS_ALGORISM_o1;
  p_1_LM_TOS_0103_real_T_0 = &LM_TOS_0103_P.Constant18_Value;
  p_2_LM_TOS_0103_int_T_0 = &LM_TOS_0103_DW.SFunction1_IWORK[0];
}

void LM_TOS_0103_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
