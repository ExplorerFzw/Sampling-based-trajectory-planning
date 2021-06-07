/***************************************************************************

   Source file fusionAlg_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Mon Nov 30 14:31:24 2020

   Copyright 2020, dSPACE GmbH. All rights reserved.

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
volatile FUS_OBJALG_ST *p_0_fusionAlg_FUS_OBJALG_ST_0 = NULL;
volatile FUS_RADAR_DATA_ST *p_0_fusionAlg_FUS_RADAR_DATA_ST_1 = NULL;
volatile FUS_RADOBJ_LIST_ST *p_0_fusionAlg_FUS_RADOBJ_LIST_ST_2 = NULL;
volatile FUS_OBJ_DATA_ST *p_0_fusionAlg_FUS_OBJ_DATA_ST_3 = NULL;
volatile FUS_RADAR_STATE_ST *p_0_fusionAlg_FUS_RADAR_STATE_ST_4 = NULL;
volatile FUS_VEHICLE_DATA_ST *p_0_fusionAlg_FUS_VEHICLE_DATA_ST_5 = NULL;
volatile FUS_UINT32_RESERVED_ST *p_0_fusionAlg_FUS_UINT32_RESERVED_ST_6 = NULL;
volatile real32_T *p_0_fusionAlg_real32_T_7 = NULL;
volatile Radar410_Info_ST *p_1_fusionAlg_Radar410_Info_ST_0 = NULL;
volatile real32_T *p_1_fusionAlg_real32_T_1 = NULL;
volatile COM_VEHBUS_ST *p_1_fusionAlg_COM_VEHBUS_ST_2 = NULL;
volatile real_T *p_2_fusionAlg_real_T_0 = NULL;
volatile real32_T *p_2_fusionAlg_real32_T_1 = NULL;
volatile uint32_T *p_2_fusionAlg_uint32_T_2 = NULL;
volatile uint8_T *p_2_fusionAlg_uint8_T_3 = NULL;
volatile FUS_OBJ_OUTPUT_ST *p_4_fusionAlg_FUS_OBJ_OUTPUT_ST_0 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_fusionAlg_FUS_OBJALG_ST_0 = &fusionAlg_B.FusionnAlg;
  p_0_fusionAlg_FUS_RADAR_DATA_ST_1 = &fusionAlg_B.BusCreator_l;
  p_0_fusionAlg_FUS_RADOBJ_LIST_ST_2 = &fusionAlg_B.radarObj;
  p_0_fusionAlg_FUS_OBJ_DATA_ST_3 = &fusionAlg_B.BusCreator3;
  p_0_fusionAlg_FUS_RADAR_STATE_ST_4 = &fusionAlg_B.BusCreator1_fl;
  p_0_fusionAlg_FUS_VEHICLE_DATA_ST_5 = &fusionAlg_B.BusCreator_f;
  p_0_fusionAlg_FUS_UINT32_RESERVED_ST_6 = &fusionAlg_B.reserved;
  p_0_fusionAlg_real32_T_7 = &fusionAlg_B.YawRate;
  p_1_fusionAlg_Radar410_Info_ST_0 = &fusionAlg_U.Radar410_Info_st;
  p_1_fusionAlg_real32_T_1 = &fusionAlg_U.EyeQ4_Info_st;
  p_1_fusionAlg_COM_VEHBUS_ST_2 = &fusionAlg_U.COM_VehBus_st;
  p_2_fusionAlg_real_T_0 = &fusionAlg_P.timestamp_Value;
  p_2_fusionAlg_real32_T_1 = &fusionAlg_P.Gain1_Gain;
  p_2_fusionAlg_uint32_T_2 = &fusionAlg_P.frameNum_Value;
  p_2_fusionAlg_uint8_T_3 = &fusionAlg_P.Constant_Value_o;
  p_4_fusionAlg_FUS_OBJ_OUTPUT_ST_0 = &fusionAlg_Y.FUS_ObjOutput_st;
}

void fusionAlg_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
