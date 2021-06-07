/***************************************************************************

   Source file ZOP_Main_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Wed Mar 10 09:27:21 2021

   Copyright 2021, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "ZOP_Main_trc_ptr.h"
#include "ZOP_Main.h"
#include "ZOP_Main_private.h"

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
volatile ZOP_Var_ST *p_0_ZOP_Main_ZOP_Var_ST_0 = NULL;
volatile MapInfo_ST_Post *p_0_ZOP_Main_MapInfo_ST_Post_1 = NULL;
volatile ZOP_Object_ST *p_0_ZOP_Main_ZOP_Object_ST_2 = NULL;
volatile VSI_VEHSTATE_ST *p_0_ZOP_Main_VSI_VEHSTATE_ST_3 = NULL;
volatile ZOP2ACC *p_0_ZOP_Main_ZOP2ACC_4 = NULL;
volatile Light_Info_ST *p_0_ZOP_Main_Light_Info_ST_5 = NULL;
volatile LKS_Status_ST *p_0_ZOP_Main_LKS_Status_ST_6 = NULL;
volatile real_T *p_0_ZOP_Main_real_T_7 = NULL;
volatile ZOP2TJA *p_0_ZOP_Main_ZOP2TJA_8 = NULL;
volatile ZOP2LCK *p_0_ZOP_Main_ZOP2LCK_9 = NULL;
volatile ZOP2HMI *p_0_ZOP_Main_ZOP2HMI_10 = NULL;
volatile SystemCmd_ST *p_0_ZOP_Main_SystemCmd_ST_11 = NULL;
volatile real32_T *p_0_ZOP_Main_real32_T_12 = NULL;
volatile int16_T *p_0_ZOP_Main_int16_T_13 = NULL;
volatile uint8_T *p_0_ZOP_Main_uint8_T_14 = NULL;
volatile int8_T *p_0_ZOP_Main_int8_T_15 = NULL;
volatile boolean_T *p_0_ZOP_Main_boolean_T_16 = NULL;
volatile LKS_Status_ST *p_2_ZOP_Main_LKS_Status_ST_0 = NULL;
volatile ZOP2HMI *p_2_ZOP_Main_ZOP2HMI_1 = NULL;
volatile real_T *p_2_ZOP_Main_real_T_2 = NULL;
volatile real32_T *p_2_ZOP_Main_real32_T_3 = NULL;
volatile int16_T *p_2_ZOP_Main_int16_T_4 = NULL;
volatile boolean_T *p_2_ZOP_Main_boolean_T_5 = NULL;
volatile int8_T *p_2_ZOP_Main_int8_T_6 = NULL;
volatile real_T *p_3_ZOP_Main_real_T_0 = NULL;
volatile real32_T *p_3_ZOP_Main_real32_T_1 = NULL;
volatile int32_T *p_3_ZOP_Main_int32_T_2 = NULL;
volatile int8_T *p_3_ZOP_Main_int8_T_3 = NULL;
volatile boolean_T *p_3_ZOP_Main_boolean_T_4 = NULL;
volatile int8_T *p_3_ZOP_Main_int8_T_5 = NULL;
volatile uint8_T *p_3_ZOP_Main_uint8_T_6 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_ZOP_Main_ZOP_Var_ST_0 = &ZOP_Main_B.ZOP_Vars;
  p_0_ZOP_Main_MapInfo_ST_Post_1 = &ZOP_Main_B.BusCreator1;
  p_0_ZOP_Main_ZOP_Object_ST_2 = &ZOP_Main_B.BusCreator3;
  p_0_ZOP_Main_VSI_VEHSTATE_ST_3 = &ZOP_Main_B.VehStatus;
  p_0_ZOP_Main_ZOP2ACC_4 = &ZOP_Main_B.BusCreator2;
  p_0_ZOP_Main_Light_Info_ST_5 = &ZOP_Main_B.BusCreator4;
  p_0_ZOP_Main_LKS_Status_ST_6 = &ZOP_Main_B.LKS_Output;
  p_0_ZOP_Main_real_T_7 = &ZOP_Main_B.Switch4;
  p_0_ZOP_Main_ZOP2TJA_8 = &ZOP_Main_B.BusCreator3_m;
  p_0_ZOP_Main_ZOP2LCK_9 = &ZOP_Main_B.BusCreator1_p;
  p_0_ZOP_Main_ZOP2HMI_10 = &ZOP_Main_B.BusCreator2_n;
  p_0_ZOP_Main_SystemCmd_ST_11 = &ZOP_Main_B.BusCreator5;
  p_0_ZOP_Main_real32_T_12 = &ZOP_Main_B.DataTypeConversion17;
  p_0_ZOP_Main_int16_T_13 = &ZOP_Main_B.Gain_c0;
  p_0_ZOP_Main_uint8_T_14 = &ZOP_Main_B.DataTypeConversion26;
  p_0_ZOP_Main_int8_T_15 = &ZOP_Main_B.UnitDelay3;
  p_0_ZOP_Main_boolean_T_16 = &ZOP_Main_B.RelationalOperator2;
  p_2_ZOP_Main_LKS_Status_ST_0 = &ZOP_Main_P_g.Out1_Y0;
  p_2_ZOP_Main_ZOP2HMI_1 = &ZOP_Main_P_g.ZOP2HMI_Y0;
  p_2_ZOP_Main_real_T_2 = &ZOP_Main_P_g.v_des_Y0;
  p_2_ZOP_Main_real32_T_3 = &ZOP_Main_P_g.case_num_Y0;
  p_2_ZOP_Main_int16_T_4 = &ZOP_Main_P_g.LC_Cmd_Y0;
  p_2_ZOP_Main_boolean_T_5 = &ZOP_Main_P_g.TargetExist_Y0;
  p_2_ZOP_Main_int8_T_6 = &ZOP_Main_P_g.UnitDelay1_InitialCondition_b;
  p_3_ZOP_Main_real_T_0 = &ZOP_Main_DW.Add7_DWORK1;
  p_3_ZOP_Main_real32_T_1 = &ZOP_Main_DW.UnitDelay4_DSTATE;
  p_3_ZOP_Main_int32_T_2 = &ZOP_Main_DW.i;
  p_3_ZOP_Main_int8_T_3 = &ZOP_Main_DW.UnitDelay3_DSTATE;
  p_3_ZOP_Main_boolean_T_4 = &ZOP_Main_DW.UnitDelay2_DSTATE;
  p_3_ZOP_Main_int8_T_5 = &ZOP_Main_DW.ZOP_Ready;
  p_3_ZOP_Main_uint8_T_6 = &ZOP_Main_DW.is_active_c2_ZOP_Main;
}

void ZOP_Main_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
