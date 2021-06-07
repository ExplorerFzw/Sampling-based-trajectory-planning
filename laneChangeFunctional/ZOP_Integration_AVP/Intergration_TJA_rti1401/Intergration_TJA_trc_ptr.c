/***************************************************************************

   Source file Intergration_TJA_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Wed Dec 30 09:26:26 2020

   Copyright 2020, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "Intergration_TJA_trc_ptr.h"
#include "Intergration_TJA.h"
#include "Intergration_TJA_private.h"

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
volatile EYEQ4_DATA_RT_ST *p_0_Intergration_TJA_EYEQ4_DATA_RT_ST_0 = NULL;
volatile FUS_OBJ_OUTPUT_ST *p_0_Intergration_TJA_FUS_OBJ_OUTPUT_ST_1 = NULL;
volatile Radar410_Info_ST *p_0_Intergration_TJA_Radar410_Info_ST_2 = NULL;
volatile BusArray_308 *p_0_Intergration_TJA_BusArray_308_3 = NULL;
volatile LANE_ST *p_0_Intergration_TJA_LANE_ST_4 = NULL;
volatile COM_VEHBUS_ST *p_0_Intergration_TJA_COM_VEHBUS_ST_5 = NULL;
volatile FUS_LANE_OUTPUT_ST *p_0_Intergration_TJA_FUS_LANE_OUTPUT_ST_6 = NULL;
volatile ROADEDGE_DATA_ST *p_0_Intergration_TJA_ROADEDGE_DATA_ST_7 = NULL;
volatile OBJECT_ST *p_0_Intergration_TJA_OBJECT_ST_8 = NULL;
volatile FUS_ROAD_EDGE_OUTPUT_ST *p_0_Intergration_TJA_FUS_ROAD_EDGE_OUTPUT_ST_9
  = NULL;
volatile Obj_Data *p_0_Intergration_TJA_Obj_Data_10 = NULL;
volatile Adja_Prot *p_0_Intergration_TJA_Adja_Prot_11 = NULL;
volatile x246 *p_0_Intergration_TJA_x246_12 = NULL;
volatile LatCtrl_LCK_LanSigInputs_t
  *p_0_Intergration_TJA_LatCtrl_LCK_LanSigInputs_t_13 = NULL;
volatile Host_Prot *p_0_Intergration_TJA_Host_Prot_14 = NULL;
volatile Radar_Status *p_0_Intergration_TJA_Radar_Status_15 = NULL;
volatile LatCtrl_LCK_VehSigInputs_t
  *p_0_Intergration_TJA_LatCtrl_LCK_VehSigInputs_t_16 = NULL;
volatile ATS_PO_ST *p_0_Intergration_TJA_ATS_PO_ST_17 = NULL;
volatile x255 *p_0_Intergration_TJA_x255_18 = NULL;
volatile x24E *p_0_Intergration_TJA_x24E_19 = NULL;
volatile x242 *p_0_Intergration_TJA_x242_20 = NULL;
volatile x251 *p_0_Intergration_TJA_x251_21 = NULL;
volatile x24C *p_0_Intergration_TJA_x24C_22 = NULL;
volatile VSI_VEHSTATE_ST *p_0_Intergration_TJA_VSI_VEHSTATE_ST_23 = NULL;
volatile Bus_308 *p_0_Intergration_TJA_Bus_308_24 = NULL;
volatile ACC_LGTCTRL_ST *p_0_Intergration_TJA_ACC_LGTCTRL_ST_25 = NULL;
volatile x1EC *p_0_Intergration_TJA_x1EC_26 = NULL;
volatile x1E5 *p_0_Intergration_TJA_x1E5_27 = NULL;
volatile VLC_LGTCMD_ST *p_0_Intergration_TJA_VLC_LGTCMD_ST_28 = NULL;
volatile xAC *p_0_Intergration_TJA_xAC_29 = NULL;
volatile x19C *p_0_Intergration_TJA_x19C_30 = NULL;
volatile x194 *p_0_Intergration_TJA_x194_31 = NULL;
volatile x185 *p_0_Intergration_TJA_x185_32 = NULL;
volatile OBJECT_FRAME_INFO *p_0_Intergration_TJA_OBJECT_FRAME_INFO_33 = NULL;
volatile Host_Prot_Header *p_0_Intergration_TJA_Host_Prot_Header_34 = NULL;
volatile xFB *p_0_Intergration_TJA_xFB_35 = NULL;
volatile xAF *p_0_Intergration_TJA_xAF_36 = NULL;
volatile x46A *p_0_Intergration_TJA_x46A_37 = NULL;
volatile x376 *p_0_Intergration_TJA_x376_38 = NULL;
volatile x23C *p_0_Intergration_TJA_x23C_39 = NULL;
volatile x1E9 *p_0_Intergration_TJA_x1E9_40 = NULL;
volatile x1E1 *p_0_Intergration_TJA_x1E1_41 = NULL;
volatile x1B6 *p_0_Intergration_TJA_x1B6_42 = NULL;
volatile x165 *p_0_Intergration_TJA_x165_43 = NULL;
volatile real_T *p_0_Intergration_TJA_real_T_44 = NULL;
volatile SYS_INFO_ST *p_0_Intergration_TJA_SYS_INFO_ST_45 = NULL;
volatile LatCtrl_LCK_TrackSigInputs_t
  *p_0_Intergration_TJA_LatCtrl_LCK_TrackSigInputs_t_46 = NULL;
volatile uint32_T *p_0_Intergration_TJA_uint32_T_47 = NULL;
volatile real32_T *p_0_Intergration_TJA_real32_T_48 = NULL;
volatile int32_T *p_0_Intergration_TJA_int32_T_49 = NULL;
volatile uint16_T *p_0_Intergration_TJA_uint16_T_50 = NULL;
volatile int16_T *p_0_Intergration_TJA_int16_T_51 = NULL;
volatile uint8_T *p_0_Intergration_TJA_uint8_T_52 = NULL;
volatile int8_T *p_0_Intergration_TJA_int8_T_53 = NULL;
volatile boolean_T *p_0_Intergration_TJA_boolean_T_54 = NULL;
volatile SYS_INFO_ST *p_1_Intergration_TJA_SYS_INFO_ST_0 = NULL;
volatile COM_VEHDYN_ST *p_1_Intergration_TJA_COM_VEHDYN_ST_1 = NULL;
volatile COM_PROPACT_ST *p_1_Intergration_TJA_COM_PROPACT_ST_2 = NULL;
volatile NET_DRVACTION_ST *p_1_Intergration_TJA_NET_DRVACTION_ST_3 = NULL;
volatile FUS_OBJDATA_ST *p_1_Intergration_TJA_FUS_OBJDATA_ST_4 = NULL;
volatile real32_T *p_1_Intergration_TJA_real32_T_5 = NULL;
volatile real32_T *p_2_Intergration_TJA_real32_T_0 = NULL;
volatile uint16_T *p_2_Intergration_TJA_uint16_T_1 = NULL;
volatile uint8_T *p_2_Intergration_TJA_uint8_T_2 = NULL;
volatile BusArray_308 *p_2_Intergration_TJA_BusArray_308_3 = NULL;
volatile BusArray_308 *p_2_Intergration_TJA_BusArray_308_4 = NULL;
volatile BusArray_308 *p_2_Intergration_TJA_BusArray_308_5 = NULL;
volatile BusArray_308 *p_2_Intergration_TJA_BusArray_308_6 = NULL;
volatile x255 *p_2_Intergration_TJA_x255_7 = NULL;
volatile ACC_LGTCTRL_ST *p_2_Intergration_TJA_ACC_LGTCTRL_ST_8 = NULL;
volatile Bus_308 *p_2_Intergration_TJA_Bus_308_9 = NULL;
volatile Bus_308 *p_2_Intergration_TJA_Bus_308_10 = NULL;
volatile Bus_308 *p_2_Intergration_TJA_Bus_308_11 = NULL;
volatile Bus_308 *p_2_Intergration_TJA_Bus_308_12 = NULL;
volatile Bus_308 *p_2_Intergration_TJA_Bus_308_13 = NULL;
volatile Bus_308 *p_2_Intergration_TJA_Bus_308_14 = NULL;
volatile Bus_308 *p_2_Intergration_TJA_Bus_308_15 = NULL;
volatile Bus_308 *p_2_Intergration_TJA_Bus_308_16 = NULL;
volatile Bus_308 *p_2_Intergration_TJA_Bus_308_17 = NULL;
volatile Bus_308 *p_2_Intergration_TJA_Bus_308_18 = NULL;
volatile Bus_308 *p_2_Intergration_TJA_Bus_308_19 = NULL;
volatile Bus_308 *p_2_Intergration_TJA_Bus_308_20 = NULL;
volatile Bus_308 *p_2_Intergration_TJA_Bus_308_21 = NULL;
volatile Bus_308 *p_2_Intergration_TJA_Bus_308_22 = NULL;
volatile Bus_308 *p_2_Intergration_TJA_Bus_308_23 = NULL;
volatile Bus_308 *p_2_Intergration_TJA_Bus_308_24 = NULL;
volatile VLC_LGTCMD_ST *p_2_Intergration_TJA_VLC_LGTCMD_ST_25 = NULL;
volatile real_T *p_2_Intergration_TJA_real_T_26 = NULL;
volatile real32_T *p_2_Intergration_TJA_real32_T_27 = NULL;
volatile uint32_T *p_2_Intergration_TJA_uint32_T_28 = NULL;
volatile uint16_T *p_2_Intergration_TJA_uint16_T_29 = NULL;
volatile boolean_T *p_2_Intergration_TJA_boolean_T_30 = NULL;
volatile uint8_T *p_2_Intergration_TJA_uint8_T_31 = NULL;
volatile real32_T *p_2_Intergration_TJA_real32_T_32 = NULL;
volatile real32_T *p_2_Intergration_TJA_real32_T_33 = NULL;
volatile real32_T *p_2_Intergration_TJA_real32_T_34 = NULL;
volatile real32_T *p_2_Intergration_TJA_real32_T_35 = NULL;
volatile real32_T *p_2_Intergration_TJA_real32_T_36 = NULL;
volatile real32_T *p_2_Intergration_TJA_real32_T_37 = NULL;
volatile BusArray_308 *p_3_Intergration_TJA_BusArray_308_0 = NULL;
volatile ACC_LGTCTRL_ST *p_3_Intergration_TJA_ACC_LGTCTRL_ST_1 = NULL;
volatile Bus_308 *p_3_Intergration_TJA_Bus_308_2 = NULL;
volatile VLC_LGTCMD_ST *p_3_Intergration_TJA_VLC_LGTCMD_ST_3 = NULL;
volatile real_T *p_3_Intergration_TJA_real_T_4 = NULL;
volatile real32_T *p_3_Intergration_TJA_real32_T_6 = NULL;
volatile int32_T *p_3_Intergration_TJA_int32_T_7 = NULL;
volatile int_T *p_3_Intergration_TJA_int_T_8 = NULL;
volatile int16_T *p_3_Intergration_TJA_int16_T_9 = NULL;
volatile int8_T *p_3_Intergration_TJA_int8_T_10 = NULL;
volatile uint8_T *p_3_Intergration_TJA_uint8_T_11 = NULL;
volatile VLC_LGTCMD_ST *p_4_Intergration_TJA_VLC_LGTCMD_ST_0 = NULL;
volatile ACC_LGTCTRL_ST *p_4_Intergration_TJA_ACC_LGTCTRL_ST_1 = NULL;
volatile ARS308_RX *p_4_Intergration_TJA_ARS308_RX_2 = NULL;
volatile real_T *p_4_Intergration_TJA_real_T_3 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_Intergration_TJA_EYEQ4_DATA_RT_ST_0 = &Intergration_TJA_B.BusCreator2;
  p_0_Intergration_TJA_FUS_OBJ_OUTPUT_ST_1 =
    &Intergration_TJA_B.FUS_ObjOutput_st;
  p_0_Intergration_TJA_Radar410_Info_ST_2 = &Intergration_TJA_B.BusCreator;
  p_0_Intergration_TJA_BusArray_308_3 = &Intergration_TJA_B.Memory;
  p_0_Intergration_TJA_LANE_ST_4 = &Intergration_TJA_B.BusCreator_h;
  p_0_Intergration_TJA_COM_VEHBUS_ST_5 = &Intergration_TJA_B.COM_VehBus_st;
  p_0_Intergration_TJA_FUS_LANE_OUTPUT_ST_6 =
    &Intergration_TJA_B.FUS_LaneOutput_st;
  p_0_Intergration_TJA_ROADEDGE_DATA_ST_7 = &Intergration_TJA_B.BusCreator_h0;
  p_0_Intergration_TJA_OBJECT_ST_8 = &Intergration_TJA_B.BusCreator4;
  p_0_Intergration_TJA_FUS_ROAD_EDGE_OUTPUT_ST_9 =
    &Intergration_TJA_B.FUS_RoadEdgeOutput_st;
  p_0_Intergration_TJA_Obj_Data_10 = &Intergration_TJA_B.BusCreator_e;
  p_0_Intergration_TJA_Adja_Prot_11 = &Intergration_TJA_B.BusCreator4_px;
  p_0_Intergration_TJA_x246_12 = &Intergration_TJA_B.BusCreator2_f;
  p_0_Intergration_TJA_LatCtrl_LCK_LanSigInputs_t_13 =
    &Intergration_TJA_B.BusConversion_InsertedFor_Model;
  p_0_Intergration_TJA_Host_Prot_14 = &Intergration_TJA_B.BusCreator4_cf;
  p_0_Intergration_TJA_Radar_Status_15 = &Intergration_TJA_B.BusCreator_b;
  p_0_Intergration_TJA_LatCtrl_LCK_VehSigInputs_t_16 =
    &Intergration_TJA_B.BusConversion_InsertedFor_Mod_m;
  p_0_Intergration_TJA_ATS_PO_ST_17 = &Intergration_TJA_B.ATS_Po_st;
  p_0_Intergration_TJA_x255_18 = &Intergration_TJA_B.BusCreator_hr;
  p_0_Intergration_TJA_x24E_19 = &Intergration_TJA_B.BusCreator8;
  p_0_Intergration_TJA_x242_20 = &Intergration_TJA_B.COM_x242_st;
  p_0_Intergration_TJA_x251_21 = &Intergration_TJA_B.BusCreator16;
  p_0_Intergration_TJA_x24C_22 = &Intergration_TJA_B.BusCreator7;
  p_0_Intergration_TJA_VSI_VEHSTATE_ST_23 =
    &Intergration_TJA_B.BusConversion_InsertedFor_ACC_a;
  p_0_Intergration_TJA_Bus_308_24 = &Intergration_TJA_B.RateTransition1[0];
  p_0_Intergration_TJA_ACC_LGTCTRL_ST_25 = &Intergration_TJA_B.Memory2_m;
  p_0_Intergration_TJA_x1EC_26 = &Intergration_TJA_B.BusCreator15;
  p_0_Intergration_TJA_x1E5_27 = &Intergration_TJA_B.BusCreator3_m;
  p_0_Intergration_TJA_VLC_LGTCMD_ST_28 = &Intergration_TJA_B.Memory_a;
  p_0_Intergration_TJA_xAC_29 = &Intergration_TJA_B.BusCreator11;
  p_0_Intergration_TJA_x19C_30 = &Intergration_TJA_B.BusCreator17;
  p_0_Intergration_TJA_x194_31 = &Intergration_TJA_B.BusCreator_bu;
  p_0_Intergration_TJA_x185_32 = &Intergration_TJA_B.BusCreator4_ku;
  p_0_Intergration_TJA_OBJECT_FRAME_INFO_33 = &Intergration_TJA_B.BusCreator1_nj;
  p_0_Intergration_TJA_Host_Prot_Header_34 = &Intergration_TJA_B.BusCreator1_k;
  p_0_Intergration_TJA_xFB_35 = &Intergration_TJA_B.BusCreator1_m;
  p_0_Intergration_TJA_xAF_36 = &Intergration_TJA_B.BusCreator10;
  p_0_Intergration_TJA_x46A_37 = &Intergration_TJA_B.BusCreator13;
  p_0_Intergration_TJA_x376_38 = &Intergration_TJA_B.BusCreator14;
  p_0_Intergration_TJA_x23C_39 = &Intergration_TJA_B.BusCreator6;
  p_0_Intergration_TJA_x1E9_40 = &Intergration_TJA_B.BusCreator5_i;
  p_0_Intergration_TJA_x1E1_41 = &Intergration_TJA_B.BusCreator2_fa;
  p_0_Intergration_TJA_x1B6_42 = &Intergration_TJA_B.BusCreator12;
  p_0_Intergration_TJA_x165_43 = &Intergration_TJA_B.COM_x165_st;
  p_0_Intergration_TJA_real_T_44 = &Intergration_TJA_B.SFunction1_o1;
  p_0_Intergration_TJA_SYS_INFO_ST_45 = &Intergration_TJA_B.SYS_Info_st;
  p_0_Intergration_TJA_LatCtrl_LCK_TrackSigInputs_t_46 =
    &Intergration_TJA_B.BusConversion_InsertedFor_Mod_d;
  p_0_Intergration_TJA_uint32_T_47 = &Intergration_TJA_B.sfcn_o3;
  p_0_Intergration_TJA_real32_T_48 = &Intergration_TJA_B.DataTypeConversion10;
  p_0_Intergration_TJA_int32_T_49 = &Intergration_TJA_B.sfcn_o22;
  p_0_Intergration_TJA_uint16_T_50 = &Intergration_TJA_B.sfcn_o1;
  p_0_Intergration_TJA_int16_T_51 = &Intergration_TJA_B.sfcn_o35;
  p_0_Intergration_TJA_uint8_T_52 = &Intergration_TJA_B.sfcn_o2;
  p_0_Intergration_TJA_int8_T_53 = &Intergration_TJA_B.sfcn_o138;
  p_0_Intergration_TJA_boolean_T_54 = &Intergration_TJA_B.sfcn_o23;
  p_1_Intergration_TJA_SYS_INFO_ST_0 = &Intergration_TJA_U.SYS_Info_st;
  p_1_Intergration_TJA_COM_VEHDYN_ST_1 = &Intergration_TJA_U.COM_VehDyn;
  p_1_Intergration_TJA_COM_PROPACT_ST_2 = &Intergration_TJA_U.COM_PropAct;
  p_1_Intergration_TJA_NET_DRVACTION_ST_3 = &Intergration_TJA_U.DrvAct;
  p_1_Intergration_TJA_FUS_OBJDATA_ST_4 = &Intergration_TJA_U.FUS_ObjData_st;
  p_1_Intergration_TJA_real32_T_5 = &Intergration_TJA_U.Input1;
  p_2_Intergration_TJA_real32_T_0 = &Intergration_TJA_P.CompareToConstant_const;
  p_2_Intergration_TJA_uint16_T_1 = &Intergration_TJA_P.BitwiseOperator2_BitMask;
  p_2_Intergration_TJA_uint8_T_2 =
    &Intergration_TJA_P.BitwiseOperator2_BitMask_fz;
  p_2_Intergration_TJA_BusArray_308_3 =
    &Intergration_TJA_P.Memory_InitialCondition;
  p_2_Intergration_TJA_BusArray_308_4 =
    &Intergration_TJA_P.Memory_InitialCondition_m;
  p_2_Intergration_TJA_BusArray_308_5 =
    &Intergration_TJA_P.Memory_InitialCondition_n;
  p_2_Intergration_TJA_BusArray_308_6 =
    &Intergration_TJA_P.Memory_InitialCondition_f;
  p_2_Intergration_TJA_x255_7 = &Intergration_TJA_P.ux255_Y0;
  p_2_Intergration_TJA_ACC_LGTCTRL_ST_8 =
    &Intergration_TJA_P.Memory2_InitialCondition;
  p_2_Intergration_TJA_Bus_308_9 = &Intergration_TJA_P.Struct_308_Y0;
  p_2_Intergration_TJA_Bus_308_10 = &Intergration_TJA_P.Constant_Value[0];
  p_2_Intergration_TJA_Bus_308_11 =
    &Intergration_TJA_P.Memory2_InitialCondition_d;
  p_2_Intergration_TJA_Bus_308_12 = &Intergration_TJA_P.Struct_308_Y0_g;
  p_2_Intergration_TJA_Bus_308_13 = &Intergration_TJA_P.Constant_Value_g[0];
  p_2_Intergration_TJA_Bus_308_14 =
    &Intergration_TJA_P.Memory2_InitialCondition_o;
  p_2_Intergration_TJA_Bus_308_15 = &Intergration_TJA_P.Struct_308_Y0_gu;
  p_2_Intergration_TJA_Bus_308_16 = &Intergration_TJA_P.Constant_Value_e[0];
  p_2_Intergration_TJA_Bus_308_17 =
    &Intergration_TJA_P.Memory2_InitialCondition_oc;
  p_2_Intergration_TJA_Bus_308_18 = &Intergration_TJA_P.Struct_308_Y0_o;
  p_2_Intergration_TJA_Bus_308_19 = &Intergration_TJA_P.Constant_Value_j[0];
  p_2_Intergration_TJA_Bus_308_20 =
    &Intergration_TJA_P.Memory2_InitialCondition_b;
  p_2_Intergration_TJA_Bus_308_21 =
    &Intergration_TJA_P.RateTransition1_InitialConditio;
  p_2_Intergration_TJA_Bus_308_22 =
    &Intergration_TJA_P.RateTransition8_InitialConditio;
  p_2_Intergration_TJA_Bus_308_23 =
    &Intergration_TJA_P.RateTransition1_InitialCondit_d;
  p_2_Intergration_TJA_Bus_308_24 =
    &Intergration_TJA_P.RateTransition8_InitialCondit_b;
  p_2_Intergration_TJA_VLC_LGTCMD_ST_25 =
    &Intergration_TJA_P.Memory_InitialCondition_c;
  p_2_Intergration_TJA_real_T_26 = &Intergration_TJA_P.Constant_Value_h;
  p_2_Intergration_TJA_real32_T_27 = &Intergration_TJA_P.Out1_Y0;
  p_2_Intergration_TJA_uint32_T_28 = &Intergration_TJA_P.Delay_DelayLength;
  p_2_Intergration_TJA_uint16_T_29 = &Intergration_TJA_P.Constant6_Value_o;
  p_2_Intergration_TJA_boolean_T_30 = &Intergration_TJA_P.EngineTorqReqSt_Value;
  p_2_Intergration_TJA_uint8_T_31 = &Intergration_TJA_P.Gain8_Gain;
  p_2_Intergration_TJA_real32_T_32 =
    &Intergration_TJA_P.IfActionSubsystem2.Constant_Value;
  p_2_Intergration_TJA_real32_T_33 =
    &Intergration_TJA_P.IfActionSubsystem1.Constant_Value;
  p_2_Intergration_TJA_real32_T_34 =
    &Intergration_TJA_P.IfActionSubsystem.Constant_Value;
  p_2_Intergration_TJA_real32_T_35 =
    &Intergration_TJA_P.IfActionSubsystem2_h.Constant_Value;
  p_2_Intergration_TJA_real32_T_36 =
    &Intergration_TJA_P.IfActionSubsystem1_i.Constant_Value;
  p_2_Intergration_TJA_real32_T_37 =
    &Intergration_TJA_P.IfActionSubsystem_d.Constant_Value;
  p_3_Intergration_TJA_BusArray_308_0 =
    &Intergration_TJA_DW.Memory_PreviousInput;
  p_3_Intergration_TJA_ACC_LGTCTRL_ST_1 =
    &Intergration_TJA_DW.Memory2_PreviousInput;
  p_3_Intergration_TJA_Bus_308_2 = &Intergration_TJA_DW.RateTransition1_Buffer0
    [0];
  p_3_Intergration_TJA_VLC_LGTCMD_ST_3 =
    &Intergration_TJA_DW.Memory_PreviousInput_c;
  p_3_Intergration_TJA_real_T_4 = &Intergration_TJA_DW.Delay_DSTATE;
  p_3_Intergration_TJA_real32_T_6 = &Intergration_TJA_DW.Delay_DSTATE_f;
  p_3_Intergration_TJA_int32_T_7 = &Intergration_TJA_DW.i_g;
  p_3_Intergration_TJA_int_T_8 = &Intergration_TJA_DW.SFunction1_IWORK[0];
  p_3_Intergration_TJA_int16_T_9 = &Intergration_TJA_DW.roll_count;
  p_3_Intergration_TJA_int8_T_10 =
    &Intergration_TJA_DW.RateTransition1_write_buf;
  p_3_Intergration_TJA_uint8_T_11 = &Intergration_TJA_DW.icLoad;
  p_4_Intergration_TJA_VLC_LGTCMD_ST_0 = &Intergration_TJA_Y.VLC_LgtCmd_st;
  p_4_Intergration_TJA_ACC_LGTCTRL_ST_1 = &Intergration_TJA_Y.ACC_LgtCtrl_st;
  p_4_Intergration_TJA_ARS308_RX_2 = &Intergration_TJA_Y.ARS308_Rx;
  p_4_Intergration_TJA_real_T_3 = &Intergration_TJA_Y.ZOP_active;
}

void Intergration_TJA_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
