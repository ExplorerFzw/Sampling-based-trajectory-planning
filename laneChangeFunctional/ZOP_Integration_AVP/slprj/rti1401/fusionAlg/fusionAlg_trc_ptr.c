/***************************************************************************

   Source file fusionAlg_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Fri Jan 29 10:17:07 2021

   Copyright 2021, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "fusionAlg_trc_ptr.h"
#include "fusionAlg.h"
#include "fusionAlg_private.h"

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
volatile FUS_ARS308_DATA_ST *p_0_fusionAlg_FUS_ARS308_DATA_ST_0 = NULL;
volatile FUS_VISION_OBJ_DATA_ST *p_0_fusionAlg_FUS_VISION_OBJ_DATA_ST_1 = NULL;
volatile FUS_VISION_OBJ_LIST_ST *p_0_fusionAlg_FUS_VISION_OBJ_LIST_ST_2 = NULL;
volatile FUS_OBJALG_ST *p_0_fusionAlg_FUS_OBJALG_ST_3 = NULL;
volatile FUS_RADAR_DATA_ST *p_0_fusionAlg_FUS_RADAR_DATA_ST_4 = NULL;
volatile FUS_RADOBJ_LIST_ST *p_0_fusionAlg_FUS_RADOBJ_LIST_ST_5 = NULL;
volatile FUS_EYEQ4_LANE_DATA_ST *p_0_fusionAlg_FUS_EYEQ4_LANE_DATA_ST_6 = NULL;
volatile FUS_EYEQ4_ROADEDGE_DATA_ST *p_0_fusionAlg_FUS_EYEQ4_ROADEDGE_DATA_ST_7 =
  NULL;
volatile OBJECT_ST *p_0_fusionAlg_OBJECT_ST_8 = NULL;
volatile FUS_OBJ_DATA_ST *p_0_fusionAlg_FUS_OBJ_DATA_ST_9 = NULL;
volatile FUS_EYEQ4_LANE_ADJA_ST *p_0_fusionAlg_FUS_EYEQ4_LANE_ADJA_ST_10 = NULL;
volatile Adja_Prot *p_0_fusionAlg_Adja_Prot_11 = NULL;
volatile Host_Prot *p_0_fusionAlg_Host_Prot_12 = NULL;
volatile FUS_EYEQ4_LANE_PROT_ST *p_0_fusionAlg_FUS_EYEQ4_LANE_PROT_ST_13 = NULL;
volatile FUS_EYEQ4_ROADEDGE_PROT_ST *p_0_fusionAlg_FUS_EYEQ4_ROADEDGE_PROT_ST_14
  = NULL;
volatile FUS_RADAR_STATE_ST *p_0_fusionAlg_FUS_RADAR_STATE_ST_15 = NULL;
volatile Bus_308 *p_0_fusionAlg_Bus_308_16 = NULL;
volatile FUS_VEHICLE_DATA_ST *p_0_fusionAlg_FUS_VEHICLE_DATA_ST_17 = NULL;
volatile FUS_EYEQ4_LANE_PROT_HEADER_ST
  *p_0_fusionAlg_FUS_EYEQ4_LANE_PROT_HEADER_ST_18 = NULL;
volatile FUS_VISOBJ_UINT8_RESERVED_ST
  *p_0_fusionAlg_FUS_VISOBJ_UINT8_RESERVED_ST_19 = NULL;
volatile FUS_VISOBJ_UINT32_RESERVED_ST
  *p_0_fusionAlg_FUS_VISOBJ_UINT32_RESERVED_ST_20 = NULL;
volatile FUS_UINT32_RESERVED_ST *p_0_fusionAlg_FUS_UINT32_RESERVED_ST_21 = NULL;
volatile uint32_T *p_0_fusionAlg_uint32_T_22 = NULL;
volatile real32_T *p_0_fusionAlg_real32_T_23 = NULL;
volatile uint16_T *p_0_fusionAlg_uint16_T_24 = NULL;
volatile uint8_T *p_0_fusionAlg_uint8_T_25 = NULL;
volatile real_T *p_2_fusionAlg_real_T_0 = NULL;
volatile real32_T *p_2_fusionAlg_real32_T_1 = NULL;
volatile uint32_T *p_2_fusionAlg_uint32_T_2 = NULL;
volatile int16_T *p_2_fusionAlg_int16_T_3 = NULL;
volatile uint16_T *p_2_fusionAlg_uint16_T_4 = NULL;
volatile uint8_T *p_2_fusionAlg_uint8_T_5 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_fusionAlg_FUS_ARS308_DATA_ST_0 = &fusionAlg_B.BusCreator;
  p_0_fusionAlg_FUS_VISION_OBJ_DATA_ST_1 = &fusionAlg_B.BusCreator1;
  p_0_fusionAlg_FUS_VISION_OBJ_LIST_ST_2 = &fusionAlg_B.ObjList;
  p_0_fusionAlg_FUS_OBJALG_ST_3 = &fusionAlg_B.FusionAlg_o1;
  p_0_fusionAlg_FUS_RADAR_DATA_ST_4 = &fusionAlg_B.BusCreator_l;
  p_0_fusionAlg_FUS_RADOBJ_LIST_ST_5 = &fusionAlg_B.radarObj;
  p_0_fusionAlg_FUS_EYEQ4_LANE_DATA_ST_6 = &fusionAlg_B.BusCreator_n;
  p_0_fusionAlg_FUS_EYEQ4_ROADEDGE_DATA_ST_7 = &fusionAlg_B.BusCreator_f;
  p_0_fusionAlg_OBJECT_ST_8 = &fusionAlg_B.Selector;
  p_0_fusionAlg_FUS_OBJ_DATA_ST_9 = &fusionAlg_B.BusCreator3;
  p_0_fusionAlg_FUS_EYEQ4_LANE_ADJA_ST_10 = &fusionAlg_B.BusCreator1_i;
  p_0_fusionAlg_Adja_Prot_11 = &fusionAlg_B.Selector2_c;
  p_0_fusionAlg_Host_Prot_12 = &fusionAlg_B.Selector_a;
  p_0_fusionAlg_FUS_EYEQ4_LANE_PROT_ST_13 = &fusionAlg_B.BusCreator1_d;
  p_0_fusionAlg_FUS_EYEQ4_ROADEDGE_PROT_ST_14 = &fusionAlg_B.BusCreator1_hkq;
  p_0_fusionAlg_FUS_RADAR_STATE_ST_15 = &fusionAlg_B.BusCreator1_fl;
  p_0_fusionAlg_Bus_308_16 = &fusionAlg_B.Selector_n;
  p_0_fusionAlg_FUS_VEHICLE_DATA_ST_17 = &fusionAlg_B.BusCreator_fo;
  p_0_fusionAlg_FUS_EYEQ4_LANE_PROT_HEADER_ST_18 = &fusionAlg_B.BusCreator1_ky;
  p_0_fusionAlg_FUS_VISOBJ_UINT8_RESERVED_ST_19 =
    &fusionAlg_B.BusConversion_InsertedFor_Bu_pp;
  p_0_fusionAlg_FUS_VISOBJ_UINT32_RESERVED_ST_20 =
    &fusionAlg_B.BusConversion_InsertedFor_Bu_md;
  p_0_fusionAlg_FUS_UINT32_RESERVED_ST_21 = &fusionAlg_B.reserved;
  p_0_fusionAlg_uint32_T_22 = &fusionAlg_B.LH_Lanemark_Type;
  p_0_fusionAlg_real32_T_23 = &fusionAlg_B.Obj_Status_cu;
  p_0_fusionAlg_uint16_T_24 = &fusionAlg_B.DataTypeConversion_nj;
  p_0_fusionAlg_uint8_T_25 = &fusionAlg_B.Switch;
  p_2_fusionAlg_real_T_0 = &fusionAlg_P_g.timestamp_Value;
  p_2_fusionAlg_real32_T_1 = &fusionAlg_P_g.Constant2_Value;
  p_2_fusionAlg_uint32_T_2 = &fusionAlg_P_g.frameNum_Value;
  p_2_fusionAlg_int16_T_3 = &fusionAlg_P_g.Constant_Value_ew;
  p_2_fusionAlg_uint16_T_4 = &fusionAlg_P_g.Switch_Threshold;
  p_2_fusionAlg_uint8_T_5 = &fusionAlg_P_g.Constant_Value_ob;
}

void fusionAlg_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
