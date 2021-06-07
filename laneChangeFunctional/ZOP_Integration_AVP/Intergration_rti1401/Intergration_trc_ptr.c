/***************************************************************************

   Source file Intergration_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Fri Dec 11 09:12:57 2020

   Copyright 2020, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "Intergration_trc_ptr.h"
#include "Intergration.h"
#include "Intergration_private.h"

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
volatile FUS_OBJ_OUTPUT_ST *p_0_Intergration_FUS_OBJ_OUTPUT_ST_0 = NULL;
volatile Radar410_Info_ST *p_0_Intergration_Radar410_Info_ST_1 = NULL;
volatile COM_VEHBUS_ST *p_0_Intergration_COM_VEHBUS_ST_2 = NULL;
volatile Obj_Data *p_0_Intergration_Obj_Data_3 = NULL;
volatile x246 *p_0_Intergration_x246_4 = NULL;
volatile Radar_Status *p_0_Intergration_Radar_Status_5 = NULL;
volatile ATS_PO_ST *p_0_Intergration_ATS_PO_ST_6 = NULL;
volatile x255 *p_0_Intergration_x255_7 = NULL;
volatile x24E *p_0_Intergration_x24E_8 = NULL;
volatile x242 *p_0_Intergration_x242_9 = NULL;
volatile x251 *p_0_Intergration_x251_10 = NULL;
volatile x24C *p_0_Intergration_x24C_11 = NULL;
volatile VSI_VEHSTATE_ST *p_0_Intergration_VSI_VEHSTATE_ST_12 = NULL;
volatile x1EC *p_0_Intergration_x1EC_13 = NULL;
volatile x1E5 *p_0_Intergration_x1E5_14 = NULL;
volatile VLC_LGTCMD_ST *p_0_Intergration_VLC_LGTCMD_ST_15 = NULL;
volatile xAC *p_0_Intergration_xAC_16 = NULL;
volatile x19C *p_0_Intergration_x19C_17 = NULL;
volatile x194 *p_0_Intergration_x194_18 = NULL;
volatile x185 *p_0_Intergration_x185_19 = NULL;
volatile xFB *p_0_Intergration_xFB_20 = NULL;
volatile xAF *p_0_Intergration_xAF_21 = NULL;
volatile x46A *p_0_Intergration_x46A_22 = NULL;
volatile x376 *p_0_Intergration_x376_23 = NULL;
volatile x23C *p_0_Intergration_x23C_24 = NULL;
volatile x1E9 *p_0_Intergration_x1E9_25 = NULL;
volatile x1E1 *p_0_Intergration_x1E1_26 = NULL;
volatile x1B6 *p_0_Intergration_x1B6_27 = NULL;
volatile x165 *p_0_Intergration_x165_28 = NULL;
volatile real_T *p_0_Intergration_real_T_29 = NULL;
volatile SYS_INFO_ST *p_0_Intergration_SYS_INFO_ST_30 = NULL;
volatile real32_T *p_0_Intergration_real32_T_31 = NULL;
volatile uint16_T *p_0_Intergration_uint16_T_32 = NULL;
volatile uint8_T *p_0_Intergration_uint8_T_33 = NULL;
volatile boolean_T *p_0_Intergration_boolean_T_34 = NULL;
volatile SYS_INFO_ST *p_1_Intergration_SYS_INFO_ST_0 = NULL;
volatile COM_VEHDYN_ST *p_1_Intergration_COM_VEHDYN_ST_1 = NULL;
volatile COM_PROPACT_ST *p_1_Intergration_COM_PROPACT_ST_2 = NULL;
volatile NET_DRVACTION_ST *p_1_Intergration_NET_DRVACTION_ST_3 = NULL;
volatile FUS_OBJDATA_ST *p_1_Intergration_FUS_OBJDATA_ST_4 = NULL;
volatile uint16_T *p_2_Intergration_uint16_T_0 = NULL;
volatile uint8_T *p_2_Intergration_uint8_T_1 = NULL;
volatile VLC_LGTCMD_ST *p_2_Intergration_VLC_LGTCMD_ST_2 = NULL;
volatile real_T *p_2_Intergration_real_T_3 = NULL;
volatile real32_T *p_2_Intergration_real32_T_4 = NULL;
volatile uint32_T *p_2_Intergration_uint32_T_5 = NULL;
volatile uint16_T *p_2_Intergration_uint16_T_6 = NULL;
volatile boolean_T *p_2_Intergration_boolean_T_7 = NULL;
volatile uint8_T *p_2_Intergration_uint8_T_8 = NULL;
volatile VLC_LGTCMD_ST *p_3_Intergration_VLC_LGTCMD_ST_0 = NULL;
volatile real_T *p_3_Intergration_real_T_1 = NULL;
volatile int32_T *p_3_Intergration_int32_T_2 = NULL;
volatile int_T *p_3_Intergration_int_T_3 = NULL;
volatile VLC_LGTCMD_ST *p_4_Intergration_VLC_LGTCMD_ST_0 = NULL;
volatile ACC_LGTCTRL_ST *p_4_Intergration_ACC_LGTCTRL_ST_1 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_Intergration_FUS_OBJ_OUTPUT_ST_0 = &Intergration_B.FUS_ObjOutput_st;
  p_0_Intergration_Radar410_Info_ST_1 = &Intergration_B.BusCreator;
  p_0_Intergration_COM_VEHBUS_ST_2 = &Intergration_B.COM_VehBus_st;
  p_0_Intergration_Obj_Data_3 = &Intergration_B.BusCreator_e;
  p_0_Intergration_x246_4 = &Intergration_B.BusCreator2;
  p_0_Intergration_Radar_Status_5 = &Intergration_B.BusCreator_b;
  p_0_Intergration_ATS_PO_ST_6 = &Intergration_B.ATS_Po_st;
  p_0_Intergration_x255_7 = &Intergration_B.BusCreator_hr;
  p_0_Intergration_x24E_8 = &Intergration_B.BusCreator8;
  p_0_Intergration_x242_9 = &Intergration_B.COM_x242_st;
  p_0_Intergration_x251_10 = &Intergration_B.BusCreator16;
  p_0_Intergration_x24C_11 = &Intergration_B.BusCreator7;
  p_0_Intergration_VSI_VEHSTATE_ST_12 =
    &Intergration_B.BusConversion_InsertedFor_ACC_a;
  p_0_Intergration_x1EC_13 = &Intergration_B.BusCreator15;
  p_0_Intergration_x1E5_14 = &Intergration_B.BusCreator3;
  p_0_Intergration_VLC_LGTCMD_ST_15 = &Intergration_B.Memory;
  p_0_Intergration_xAC_16 = &Intergration_B.BusCreator11;
  p_0_Intergration_x19C_17 = &Intergration_B.BusCreator17;
  p_0_Intergration_x194_18 = &Intergration_B.BusCreator_bu;
  p_0_Intergration_x185_19 = &Intergration_B.BusCreator4;
  p_0_Intergration_xFB_20 = &Intergration_B.BusCreator1;
  p_0_Intergration_xAF_21 = &Intergration_B.BusCreator10;
  p_0_Intergration_x46A_22 = &Intergration_B.BusCreator13;
  p_0_Intergration_x376_23 = &Intergration_B.BusCreator14;
  p_0_Intergration_x23C_24 = &Intergration_B.BusCreator6;
  p_0_Intergration_x1E9_25 = &Intergration_B.BusCreator5;
  p_0_Intergration_x1E1_26 = &Intergration_B.BusCreator2_f;
  p_0_Intergration_x1B6_27 = &Intergration_B.BusCreator12;
  p_0_Intergration_x165_28 = &Intergration_B.COM_x165_st;
  p_0_Intergration_real_T_29 = &Intergration_B.SFunction1_o1;
  p_0_Intergration_SYS_INFO_ST_30 = &Intergration_B.SYS_Info_st;
  p_0_Intergration_real32_T_31 = &Intergration_B.DataTypeConversion21;
  p_0_Intergration_uint16_T_32 = &Intergration_B.DataTypeConversion1_gt;
  p_0_Intergration_uint8_T_33 = &Intergration_B.DataTypeConversion1_as;
  p_0_Intergration_boolean_T_34 = &Intergration_B.DataTypeConversion8_d1;
  p_1_Intergration_SYS_INFO_ST_0 = &Intergration_U.SYS_Info_st;
  p_1_Intergration_COM_VEHDYN_ST_1 = &Intergration_U.COM_VehDyn;
  p_1_Intergration_COM_PROPACT_ST_2 = &Intergration_U.COM_PropAct;
  p_1_Intergration_NET_DRVACTION_ST_3 = &Intergration_U.DrvAct;
  p_1_Intergration_FUS_OBJDATA_ST_4 = &Intergration_U.FUS_ObjData_st;
  p_2_Intergration_uint16_T_0 = &Intergration_P.BitwiseOperator2_BitMask;
  p_2_Intergration_uint8_T_1 = &Intergration_P.BitwiseOperator2_BitMask_fz;
  p_2_Intergration_VLC_LGTCMD_ST_2 = &Intergration_P.Memory_InitialCondition;
  p_2_Intergration_real_T_3 = &Intergration_P.Constant_Value;
  p_2_Intergration_real32_T_4 = &Intergration_P.Switch_Threshold_dw;
  p_2_Intergration_uint32_T_5 = &Intergration_P.Delay_DelayLength;
  p_2_Intergration_uint16_T_6 = &Intergration_P.Constant6_Value_o;
  p_2_Intergration_boolean_T_7 = &Intergration_P.EngineTorqReqSt_Value;
  p_2_Intergration_uint8_T_8 = &Intergration_P.Constant2_Value_mr;
  p_3_Intergration_VLC_LGTCMD_ST_0 = &Intergration_DW.Memory_PreviousInput;
  p_3_Intergration_real_T_1 = &Intergration_DW.Delay_DSTATE;
  p_3_Intergration_int32_T_2 = &Intergration_DW.i;
  p_3_Intergration_int_T_3 = &Intergration_DW.SFunction1_IWORK[0];
  p_4_Intergration_VLC_LGTCMD_ST_0 = &Intergration_Y.VLC_LgtCmd_st;
  p_4_Intergration_ACC_LGTCTRL_ST_1 = &Intergration_Y.ACC_LgtCtrl_st;
}

void Intergration_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
