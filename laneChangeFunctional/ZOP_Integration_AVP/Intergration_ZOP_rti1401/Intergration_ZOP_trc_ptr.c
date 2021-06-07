/***************************************************************************

   Source file Intergration_ZOP_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Wed Mar 17 16:07:06 2021

   Copyright 2021, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "Intergration_ZOP_trc_ptr.h"
#include "Intergration_ZOP.h"
#include "Intergration_ZOP_private.h"

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
volatile EYEQ4_DATA_RT_ST *p_0_Intergration_ZOP_EYEQ4_DATA_RT_ST_0 = NULL;
volatile ARS308_RX *p_0_Intergration_ZOP_ARS308_RX_1 = NULL;
volatile FUS_OBJ_OUTPUT_ST *p_0_Intergration_ZOP_FUS_OBJ_OUTPUT_ST_2 = NULL;
volatile LANEMODEL_OUTPUT_ST *p_0_Intergration_ZOP_LANEMODEL_OUTPUT_ST_3 = NULL;
volatile Radar410_Info_ST *p_0_Intergration_ZOP_Radar410_Info_ST_4 = NULL;
volatile BusArray_308 *p_0_Intergration_ZOP_BusArray_308_5 = NULL;
volatile HWA_TARGETOBJECT_OUTPUT_ST
  *p_0_Intergration_ZOP_HWA_TARGETOBJECT_OUTPUT_ST_6 = NULL;
volatile HMI_OUTPUT_ST *p_0_Intergration_ZOP_HMI_OUTPUT_ST_7 = NULL;
volatile LANE_ST *p_0_Intergration_ZOP_LANE_ST_8 = NULL;
volatile COM_VEHBUS_ST *p_0_Intergration_ZOP_COM_VEHBUS_ST_9 = NULL;
volatile FUS_LANE_OUTPUT_ST *p_0_Intergration_ZOP_FUS_LANE_OUTPUT_ST_10 = NULL;
volatile ROADEDGE_DATA_ST *p_0_Intergration_ZOP_ROADEDGE_DATA_ST_11 = NULL;
volatile OBJECT_ST *p_0_Intergration_ZOP_OBJECT_ST_12 = NULL;
volatile FUS_ROAD_EDGE_OUTPUT_ST
  *p_0_Intergration_ZOP_FUS_ROAD_EDGE_OUTPUT_ST_13 = NULL;
volatile Obj_Data *p_0_Intergration_ZOP_Obj_Data_14 = NULL;
volatile MapInfo_ST *p_0_Intergration_ZOP_MapInfo_ST_15 = NULL;
volatile Adja_Prot *p_0_Intergration_ZOP_Adja_Prot_16 = NULL;
volatile x246 *p_0_Intergration_ZOP_x246_17 = NULL;
volatile NARROW_LANE_SUPPORT_OUTPUT_ST
  *p_0_Intergration_ZOP_NARROW_LANE_SUPPORT_OUTPUT_ST_18 = NULL;
volatile LatCtrl_LCK_LanSigInputs_t
  *p_0_Intergration_ZOP_LatCtrl_LCK_LanSigInputs_t_19 = NULL;
volatile Host_Prot *p_0_Intergration_ZOP_Host_Prot_20 = NULL;
volatile Radar_Status *p_0_Intergration_ZOP_Radar_Status_21 = NULL;
volatile LatCtrl_LCK_VehSigInputs_t
  *p_0_Intergration_ZOP_LatCtrl_LCK_VehSigInputs_t_22 = NULL;
volatile ATS_PO_ST *p_0_Intergration_ZOP_ATS_PO_ST_23 = NULL;
volatile x255 *p_0_Intergration_ZOP_x255_24 = NULL;
volatile x24E *p_0_Intergration_ZOP_x24E_25 = NULL;
volatile x242 *p_0_Intergration_ZOP_x242_26 = NULL;
volatile ACC_LGTCTRL_ST *p_0_Intergration_ZOP_ACC_LGTCTRL_ST_27 = NULL;
volatile x251 *p_0_Intergration_ZOP_x251_28 = NULL;
volatile x24C *p_0_Intergration_ZOP_x24C_29 = NULL;
volatile VSI_VEHSTATE_ST *p_0_Intergration_ZOP_VSI_VEHSTATE_ST_30 = NULL;
volatile Bus_308 *p_0_Intergration_ZOP_Bus_308_31 = NULL;
volatile AVP_OUTPUT_ST *p_0_Intergration_ZOP_AVP_OUTPUT_ST_32 = NULL;
volatile x1EC *p_0_Intergration_ZOP_x1EC_33 = NULL;
volatile x1E5 *p_0_Intergration_ZOP_x1E5_34 = NULL;
volatile ZOP2ACC *p_0_Intergration_ZOP_ZOP2ACC_35 = NULL;
volatile VLC_LGTCMD_ST *p_0_Intergration_ZOP_VLC_LGTCMD_ST_36 = NULL;
volatile xAC *p_0_Intergration_ZOP_xAC_37 = NULL;
volatile x19C *p_0_Intergration_ZOP_x19C_38 = NULL;
volatile x194 *p_0_Intergration_ZOP_x194_39 = NULL;
volatile x185 *p_0_Intergration_ZOP_x185_40 = NULL;
volatile OBJECT_FRAME_INFO *p_0_Intergration_ZOP_OBJECT_FRAME_INFO_41 = NULL;
volatile Light_Info_ST *p_0_Intergration_ZOP_Light_Info_ST_42 = NULL;
volatile Host_Prot_Header *p_0_Intergration_ZOP_Host_Prot_Header_43 = NULL;
volatile Header_308 *p_0_Intergration_ZOP_Header_308_44 = NULL;
volatile HMI_DISPLAY_ST *p_0_Intergration_ZOP_HMI_DISPLAY_ST_45 = NULL;
volatile xFB *p_0_Intergration_ZOP_xFB_46 = NULL;
volatile xAF *p_0_Intergration_ZOP_xAF_47 = NULL;
volatile x46A *p_0_Intergration_ZOP_x46A_48 = NULL;
volatile x376 *p_0_Intergration_ZOP_x376_49 = NULL;
volatile x23C *p_0_Intergration_ZOP_x23C_50 = NULL;
volatile x1E9 *p_0_Intergration_ZOP_x1E9_51 = NULL;
volatile x1E1 *p_0_Intergration_ZOP_x1E1_52 = NULL;
volatile x1B6 *p_0_Intergration_ZOP_x1B6_53 = NULL;
volatile x165 *p_0_Intergration_ZOP_x165_54 = NULL;
volatile real_T *p_0_Intergration_ZOP_real_T_55 = NULL;
volatile ZOP_HMI_REQ *p_0_Intergration_ZOP_ZOP_HMI_REQ_56 = NULL;
volatile SystemCmd_ST *p_0_Intergration_ZOP_SystemCmd_ST_57 = NULL;
volatile SYS_INFO_ST *p_0_Intergration_ZOP_SYS_INFO_ST_58 = NULL;
volatile LatCtrl_LCK_TrackSigInputs_t
  *p_0_Intergration_ZOP_LatCtrl_LCK_TrackSigInputs_t_59 = NULL;
volatile ACC_Status_ST *p_0_Intergration_ZOP_ACC_Status_ST_60 = NULL;
volatile ACC_HMI_REQ *p_0_Intergration_ZOP_ACC_HMI_REQ_61 = NULL;
volatile uint32_T *p_0_Intergration_ZOP_uint32_T_62 = NULL;
volatile real32_T *p_0_Intergration_ZOP_real32_T_63 = NULL;
volatile int32_T *p_0_Intergration_ZOP_int32_T_64 = NULL;
volatile uint16_T *p_0_Intergration_ZOP_uint16_T_65 = NULL;
volatile int16_T *p_0_Intergration_ZOP_int16_T_66 = NULL;
volatile uint8_T *p_0_Intergration_ZOP_uint8_T_67 = NULL;
volatile int8_T *p_0_Intergration_ZOP_int8_T_68 = NULL;
volatile boolean_T *p_0_Intergration_ZOP_boolean_T_69 = NULL;
volatile SYS_INFO_ST *p_1_Intergration_ZOP_SYS_INFO_ST_0 = NULL;
volatile COM_VEHDYN_ST *p_1_Intergration_ZOP_COM_VEHDYN_ST_1 = NULL;
volatile COM_PROPACT_ST *p_1_Intergration_ZOP_COM_PROPACT_ST_2 = NULL;
volatile NET_DRVACTION_ST *p_1_Intergration_ZOP_NET_DRVACTION_ST_3 = NULL;
volatile FUS_OBJDATA_ST *p_1_Intergration_ZOP_FUS_OBJDATA_ST_4 = NULL;
volatile real32_T *p_2_Intergration_ZOP_real32_T_0 = NULL;
volatile uint16_T *p_2_Intergration_ZOP_uint16_T_1 = NULL;
volatile uint8_T *p_2_Intergration_ZOP_uint8_T_2 = NULL;
volatile BusArray_308 *p_2_Intergration_ZOP_BusArray_308_3 = NULL;
volatile BusArray_308 *p_2_Intergration_ZOP_BusArray_308_4 = NULL;
volatile BusArray_308 *p_2_Intergration_ZOP_BusArray_308_5 = NULL;
volatile BusArray_308 *p_2_Intergration_ZOP_BusArray_308_6 = NULL;
volatile ATS_PO_ST *p_2_Intergration_ZOP_ATS_PO_ST_7 = NULL;
volatile ACC_LGTCTRL_ST *p_2_Intergration_ZOP_ACC_LGTCTRL_ST_8 = NULL;
volatile x255 *p_2_Intergration_ZOP_x255_9 = NULL;
volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_10 = NULL;
volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_11 = NULL;
volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_12 = NULL;
volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_13 = NULL;
volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_14 = NULL;
volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_15 = NULL;
volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_16 = NULL;
volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_17 = NULL;
volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_18 = NULL;
volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_19 = NULL;
volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_20 = NULL;
volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_21 = NULL;
volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_22 = NULL;
volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_23 = NULL;
volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_24 = NULL;
volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_25 = NULL;
volatile VLC_LGTCMD_ST *p_2_Intergration_ZOP_VLC_LGTCMD_ST_26 = NULL;
volatile real_T *p_2_Intergration_ZOP_real_T_27 = NULL;
volatile real32_T *p_2_Intergration_ZOP_real32_T_28 = NULL;
volatile uint32_T *p_2_Intergration_ZOP_uint32_T_29 = NULL;
volatile uint16_T *p_2_Intergration_ZOP_uint16_T_30 = NULL;
volatile boolean_T *p_2_Intergration_ZOP_boolean_T_31 = NULL;
volatile int8_T *p_2_Intergration_ZOP_int8_T_32 = NULL;
volatile uint8_T *p_2_Intergration_ZOP_uint8_T_33 = NULL;
volatile real32_T *p_2_Intergration_ZOP_real32_T_34 = NULL;
volatile real32_T *p_2_Intergration_ZOP_real32_T_35 = NULL;
volatile real32_T *p_2_Intergration_ZOP_real32_T_36 = NULL;
volatile real32_T *p_2_Intergration_ZOP_real32_T_37 = NULL;
volatile real32_T *p_2_Intergration_ZOP_real32_T_38 = NULL;
volatile real32_T *p_2_Intergration_ZOP_real32_T_39 = NULL;
volatile BusArray_308 *p_3_Intergration_ZOP_BusArray_308_0 = NULL;
volatile ATS_PO_ST *p_3_Intergration_ZOP_ATS_PO_ST_1 = NULL;
volatile ACC_LGTCTRL_ST *p_3_Intergration_ZOP_ACC_LGTCTRL_ST_2 = NULL;
volatile Bus_308 *p_3_Intergration_ZOP_Bus_308_3 = NULL;
volatile VLC_LGTCMD_ST *p_3_Intergration_ZOP_VLC_LGTCMD_ST_4 = NULL;
volatile real_T *p_3_Intergration_ZOP_real_T_5 = NULL;
volatile real32_T *p_3_Intergration_ZOP_real32_T_7 = NULL;
volatile int32_T *p_3_Intergration_ZOP_int32_T_8 = NULL;
volatile int_T *p_3_Intergration_ZOP_int_T_9 = NULL;
volatile int16_T *p_3_Intergration_ZOP_int16_T_10 = NULL;
volatile int8_T *p_3_Intergration_ZOP_int8_T_11 = NULL;
volatile uint8_T *p_3_Intergration_ZOP_uint8_T_12 = NULL;
volatile boolean_T *p_3_Intergration_ZOP_boolean_T_13 = NULL;
volatile int8_T *p_3_Intergration_ZOP_int8_T_14 = NULL;
volatile uint8_T *p_3_Intergration_ZOP_uint8_T_15 = NULL;
volatile boolean_T *p_3_Intergration_ZOP_boolean_T_16 = NULL;
volatile VLC_LGTCMD_ST *p_4_Intergration_ZOP_VLC_LGTCMD_ST_0 = NULL;
volatile ACC_LGTCTRL_ST *p_4_Intergration_ZOP_ACC_LGTCTRL_ST_1 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_Intergration_ZOP_EYEQ4_DATA_RT_ST_0 = &Intergration_ZOP_B.BusCreator2;
  p_0_Intergration_ZOP_ARS308_RX_1 = &Intergration_ZOP_B.BusCreator1;
  p_0_Intergration_ZOP_FUS_OBJ_OUTPUT_ST_2 =
    &Intergration_ZOP_B.FUS_ObjOutput_st;
  p_0_Intergration_ZOP_LANEMODEL_OUTPUT_ST_3 = &Intergration_ZOP_B.RoadModel_o1;
  p_0_Intergration_ZOP_Radar410_Info_ST_4 = &Intergration_ZOP_B.BusCreator;
  p_0_Intergration_ZOP_BusArray_308_5 = &Intergration_ZOP_B.Memory;
  p_0_Intergration_ZOP_HWA_TARGETOBJECT_OUTPUT_ST_6 =
    &Intergration_ZOP_B.RoadModel_o2;
  p_0_Intergration_ZOP_HMI_OUTPUT_ST_7 = &Intergration_ZOP_B.RoadModel_o3;
  p_0_Intergration_ZOP_LANE_ST_8 = &Intergration_ZOP_B.BusCreator_h;
  p_0_Intergration_ZOP_COM_VEHBUS_ST_9 = &Intergration_ZOP_B.COM_VehBus_st;
  p_0_Intergration_ZOP_FUS_LANE_OUTPUT_ST_10 =
    &Intergration_ZOP_B.FUS_LaneOutput_st;
  p_0_Intergration_ZOP_ROADEDGE_DATA_ST_11 = &Intergration_ZOP_B.BusCreator_h0;
  p_0_Intergration_ZOP_OBJECT_ST_12 = &Intergration_ZOP_B.BusCreator4;
  p_0_Intergration_ZOP_FUS_ROAD_EDGE_OUTPUT_ST_13 =
    &Intergration_ZOP_B.FUS_RoadEdgeOutput_st;
  p_0_Intergration_ZOP_Obj_Data_14 = &Intergration_ZOP_B.BusCreator_e;
  p_0_Intergration_ZOP_MapInfo_ST_15 = &Intergration_ZOP_B.BusCreator1_j;
  p_0_Intergration_ZOP_Adja_Prot_16 = &Intergration_ZOP_B.BusCreator4_px;
  p_0_Intergration_ZOP_x246_17 = &Intergration_ZOP_B.BusCreator2_f;
  p_0_Intergration_ZOP_NARROW_LANE_SUPPORT_OUTPUT_ST_18 =
    &Intergration_ZOP_B.RoadModel_o4;
  p_0_Intergration_ZOP_LatCtrl_LCK_LanSigInputs_t_19 =
    &Intergration_ZOP_B.BusCreator_f3;
  p_0_Intergration_ZOP_Host_Prot_20 = &Intergration_ZOP_B.BusCreator4_cf;
  p_0_Intergration_ZOP_Radar_Status_21 = &Intergration_ZOP_B.BusCreator_b;
  p_0_Intergration_ZOP_LatCtrl_LCK_VehSigInputs_t_22 =
    &Intergration_ZOP_B.BusCreator27;
  p_0_Intergration_ZOP_ATS_PO_ST_23 = &Intergration_ZOP_B.UnitDelay5;
  p_0_Intergration_ZOP_x255_24 = &Intergration_ZOP_B.BusCreator_kl;
  p_0_Intergration_ZOP_x24E_25 = &Intergration_ZOP_B.BusCreator8;
  p_0_Intergration_ZOP_x242_26 = &Intergration_ZOP_B.COM_x242_st;
  p_0_Intergration_ZOP_ACC_LGTCTRL_ST_27 = &Intergration_ZOP_B.Memory2;
  p_0_Intergration_ZOP_x251_28 = &Intergration_ZOP_B.BusCreator16;
  p_0_Intergration_ZOP_x24C_29 = &Intergration_ZOP_B.BusCreator7;
  p_0_Intergration_ZOP_VSI_VEHSTATE_ST_30 =
    &Intergration_ZOP_B.BusConversion_InsertedFor_ACC_a;
  p_0_Intergration_ZOP_Bus_308_31 = &Intergration_ZOP_B.Memory5[0];
  p_0_Intergration_ZOP_AVP_OUTPUT_ST_32 =
    &Intergration_ZOP_B.BusConversion_InsertedFor_ACC_m;
  p_0_Intergration_ZOP_x1EC_33 = &Intergration_ZOP_B.BusCreator15;
  p_0_Intergration_ZOP_x1E5_34 = &Intergration_ZOP_B.BusCreator3_m;
  p_0_Intergration_ZOP_ZOP2ACC_35 =
    &Intergration_ZOP_B.BusConversion_InsertedFor_AC_a3;
  p_0_Intergration_ZOP_VLC_LGTCMD_ST_36 = &Intergration_ZOP_B.Memory_a;
  p_0_Intergration_ZOP_xAC_37 = &Intergration_ZOP_B.BusCreator11;
  p_0_Intergration_ZOP_x19C_38 = &Intergration_ZOP_B.BusCreator17;
  p_0_Intergration_ZOP_x194_39 = &Intergration_ZOP_B.BusCreator_bu;
  p_0_Intergration_ZOP_x185_40 = &Intergration_ZOP_B.BusCreator4_ku;
  p_0_Intergration_ZOP_OBJECT_FRAME_INFO_41 = &Intergration_ZOP_B.BusCreator1_nj;
  p_0_Intergration_ZOP_Light_Info_ST_42 = &Intergration_ZOP_B.BusCreator7_a;
  p_0_Intergration_ZOP_Host_Prot_Header_43 = &Intergration_ZOP_B.BusCreator1_k;
  p_0_Intergration_ZOP_Header_308_44 = &Intergration_ZOP_B.BusCreator3_g;
  p_0_Intergration_ZOP_HMI_DISPLAY_ST_45 = &Intergration_ZOP_B.Selector;
  p_0_Intergration_ZOP_xFB_46 = &Intergration_ZOP_B.BusCreator1_mw;
  p_0_Intergration_ZOP_xAF_47 = &Intergration_ZOP_B.BusCreator10;
  p_0_Intergration_ZOP_x46A_48 = &Intergration_ZOP_B.BusCreator13;
  p_0_Intergration_ZOP_x376_49 = &Intergration_ZOP_B.BusCreator14;
  p_0_Intergration_ZOP_x23C_50 = &Intergration_ZOP_B.BusCreator6;
  p_0_Intergration_ZOP_x1E9_51 = &Intergration_ZOP_B.BusCreator5_i;
  p_0_Intergration_ZOP_x1E1_52 = &Intergration_ZOP_B.BusCreator2_fa;
  p_0_Intergration_ZOP_x1B6_53 = &Intergration_ZOP_B.BusCreator12;
  p_0_Intergration_ZOP_x165_54 = &Intergration_ZOP_B.COM_x165_st;
  p_0_Intergration_ZOP_real_T_55 = &Intergration_ZOP_B.SFunction1_o1;
  p_0_Intergration_ZOP_ZOP_HMI_REQ_56 = &Intergration_ZOP_B.BusCreator9;
  p_0_Intergration_ZOP_SystemCmd_ST_57 = &Intergration_ZOP_B.BusCreator2_bj;
  p_0_Intergration_ZOP_SYS_INFO_ST_58 = &Intergration_ZOP_B.SYS_Info_st;
  p_0_Intergration_ZOP_LatCtrl_LCK_TrackSigInputs_t_59 =
    &Intergration_ZOP_B.BusConversion_InsertedFor_Mod_d;
  p_0_Intergration_ZOP_ACC_Status_ST_60 = &Intergration_ZOP_B.ACC_o3;
  p_0_Intergration_ZOP_ACC_HMI_REQ_61 = &Intergration_ZOP_B.BusCreator8_o;
  p_0_Intergration_ZOP_uint32_T_62 = &Intergration_ZOP_B.sfcn_o3;
  p_0_Intergration_ZOP_real32_T_63 = &Intergration_ZOP_B.RateTransition2;
  p_0_Intergration_ZOP_int32_T_64 = &Intergration_ZOP_B.sfcn_o22;
  p_0_Intergration_ZOP_uint16_T_65 = &Intergration_ZOP_B.sfcn_o1;
  p_0_Intergration_ZOP_int16_T_66 = &Intergration_ZOP_B.sfcn_o35;
  p_0_Intergration_ZOP_uint8_T_67 = &Intergration_ZOP_B.state;
  p_0_Intergration_ZOP_int8_T_68 = &Intergration_ZOP_B.sfcn_o138;
  p_0_Intergration_ZOP_boolean_T_69 = &Intergration_ZOP_B.Equal;
  p_1_Intergration_ZOP_SYS_INFO_ST_0 = &Intergration_ZOP_U.SYS_Info_st;
  p_1_Intergration_ZOP_COM_VEHDYN_ST_1 = &Intergration_ZOP_U.COM_VehDyn;
  p_1_Intergration_ZOP_COM_PROPACT_ST_2 = &Intergration_ZOP_U.COM_PropAct;
  p_1_Intergration_ZOP_NET_DRVACTION_ST_3 = &Intergration_ZOP_U.DrvActSimu;
  p_1_Intergration_ZOP_FUS_OBJDATA_ST_4 = &Intergration_ZOP_U.ObjListSimu;
  p_2_Intergration_ZOP_real32_T_0 = &Intergration_ZOP_P.CompareToConstant_const;
  p_2_Intergration_ZOP_uint16_T_1 = &Intergration_ZOP_P.BitwiseOperator2_BitMask;
  p_2_Intergration_ZOP_uint8_T_2 =
    &Intergration_ZOP_P.BitwiseOperator2_BitMask_fz;
  p_2_Intergration_ZOP_BusArray_308_3 =
    &Intergration_ZOP_P.Memory_InitialCondition;
  p_2_Intergration_ZOP_BusArray_308_4 =
    &Intergration_ZOP_P.Memory_InitialCondition_h;
  p_2_Intergration_ZOP_BusArray_308_5 =
    &Intergration_ZOP_P.Memory_InitialCondition_j;
  p_2_Intergration_ZOP_BusArray_308_6 =
    &Intergration_ZOP_P.Memory_InitialCondition_b;
  p_2_Intergration_ZOP_ATS_PO_ST_7 =
    &Intergration_ZOP_P.UnitDelay5_InitialCondition;
  p_2_Intergration_ZOP_ACC_LGTCTRL_ST_8 =
    &Intergration_ZOP_P.Memory2_InitialCondition;
  p_2_Intergration_ZOP_x255_9 = &Intergration_ZOP_P.ux255_Y0;
  p_2_Intergration_ZOP_Bus_308_10 = &Intergration_ZOP_P.Out1_Y0;
  p_2_Intergration_ZOP_Bus_308_11 = &Intergration_ZOP_P.Constant_Value[0];
  p_2_Intergration_ZOP_Bus_308_12 = &Intergration_ZOP_P.Out1_Y0_o;
  p_2_Intergration_ZOP_Bus_308_13 = &Intergration_ZOP_P.Constant_Value_e[0];
  p_2_Intergration_ZOP_Bus_308_14 = &Intergration_ZOP_P.Out1_Y0_d;
  p_2_Intergration_ZOP_Bus_308_15 = &Intergration_ZOP_P.Constant_Value_h[0];
  p_2_Intergration_ZOP_Bus_308_16 = &Intergration_ZOP_P.Out1_Y0_c;
  p_2_Intergration_ZOP_Bus_308_17 = &Intergration_ZOP_P.Constant_Value_g[0];
  p_2_Intergration_ZOP_Bus_308_18 = &Intergration_ZOP_P.Memory5_InitialCondition;
  p_2_Intergration_ZOP_Bus_308_19 =
    &Intergration_ZOP_P.RateTransition1_InitialConditio;
  p_2_Intergration_ZOP_Bus_308_20 =
    &Intergration_ZOP_P.Memory5_InitialCondition_b;
  p_2_Intergration_ZOP_Bus_308_21 =
    &Intergration_ZOP_P.RateTransition1_InitialCondit_k;
  p_2_Intergration_ZOP_Bus_308_22 =
    &Intergration_ZOP_P.Memory5_InitialCondition_a;
  p_2_Intergration_ZOP_Bus_308_23 =
    &Intergration_ZOP_P.RateTransition1_InitialCondit_m;
  p_2_Intergration_ZOP_Bus_308_24 =
    &Intergration_ZOP_P.Memory5_InitialCondition_i;
  p_2_Intergration_ZOP_Bus_308_25 =
    &Intergration_ZOP_P.RateTransition1_InitialCondit_e;
  p_2_Intergration_ZOP_VLC_LGTCMD_ST_26 =
    &Intergration_ZOP_P.Memory_InitialCondition_c;
  p_2_Intergration_ZOP_real_T_27 = &Intergration_ZOP_P.NumObj_Y0;
  p_2_Intergration_ZOP_real32_T_28 = &Intergration_ZOP_P.CountHead_Y0;
  p_2_Intergration_ZOP_uint32_T_29 = &Intergration_ZOP_P.Delay_DelayLength;
  p_2_Intergration_ZOP_uint16_T_30 = &Intergration_ZOP_P.Constant6_Value_o;
  p_2_Intergration_ZOP_boolean_T_31 = &Intergration_ZOP_P.EngineTorqReqSt_Value;
  p_2_Intergration_ZOP_int8_T_32 =
    &Intergration_ZOP_P.UnitDelay2_InitialCondition;
  p_2_Intergration_ZOP_uint8_T_33 = &Intergration_ZOP_P.Gain5_Gain;
  p_2_Intergration_ZOP_real32_T_34 =
    &Intergration_ZOP_P.IfActionSubsystem2.Constant_Value;
  p_2_Intergration_ZOP_real32_T_35 =
    &Intergration_ZOP_P.IfActionSubsystem1.Constant_Value;
  p_2_Intergration_ZOP_real32_T_36 =
    &Intergration_ZOP_P.IfActionSubsystem.Constant_Value;
  p_2_Intergration_ZOP_real32_T_37 =
    &Intergration_ZOP_P.IfActionSubsystem2_l.Constant_Value;
  p_2_Intergration_ZOP_real32_T_38 =
    &Intergration_ZOP_P.IfActionSubsystem1_d.Constant_Value;
  p_2_Intergration_ZOP_real32_T_39 =
    &Intergration_ZOP_P.IfActionSubsystem_e.Constant_Value;
  p_3_Intergration_ZOP_BusArray_308_0 =
    &Intergration_ZOP_DW.Memory_PreviousInput;
  p_3_Intergration_ZOP_ATS_PO_ST_1 = &Intergration_ZOP_DW.UnitDelay5_DSTATE;
  p_3_Intergration_ZOP_ACC_LGTCTRL_ST_2 =
    &Intergration_ZOP_DW.Memory2_PreviousInput;
  p_3_Intergration_ZOP_Bus_308_3 = &Intergration_ZOP_DW.Memory5_PreviousInput[0];
  p_3_Intergration_ZOP_VLC_LGTCMD_ST_4 =
    &Intergration_ZOP_DW.Memory_PreviousInput_c;
  p_3_Intergration_ZOP_real_T_5 = &Intergration_ZOP_DW.Delay_DSTATE;
  p_3_Intergration_ZOP_real32_T_7 = &Intergration_ZOP_DW.Delay1_DSTATE_p[0];
  p_3_Intergration_ZOP_int32_T_8 = &Intergration_ZOP_DW.i_g;
  p_3_Intergration_ZOP_int_T_9 = &Intergration_ZOP_DW.SFunction1_IWORK[0];
  p_3_Intergration_ZOP_int16_T_10 = &Intergration_ZOP_DW.roll_count;
  p_3_Intergration_ZOP_int8_T_11 = &Intergration_ZOP_DW.UnitDelay4_6_DSTATE;
  p_3_Intergration_ZOP_uint8_T_12 = &Intergration_ZOP_DW.UnitDelay1_1_DSTATE;
  p_3_Intergration_ZOP_boolean_T_13 = &Intergration_ZOP_DW.Delay2_DSTATE_g;
  p_3_Intergration_ZOP_int8_T_14 =
    &Intergration_ZOP_DW.RateTransition1_write_buf;
  p_3_Intergration_ZOP_uint8_T_15 = &Intergration_ZOP_DW.icLoad;
  p_3_Intergration_ZOP_boolean_T_16 =
    &Intergration_ZOP_DW.Memory1_PreviousInput_o;
  p_4_Intergration_ZOP_VLC_LGTCMD_ST_0 = &Intergration_ZOP_Y.VLC_LgtCmd_st;
  p_4_Intergration_ZOP_ACC_LGTCTRL_ST_1 = &Intergration_ZOP_Y.ACC_LgtCtrl_st;
}

void Intergration_ZOP_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
