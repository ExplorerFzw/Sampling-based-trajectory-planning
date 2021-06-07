/***************************************************************************

   Source file AccTarSel_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Wed Dec  2 15:41:53 2020

   Copyright 2020, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "AccTarSel_trc_ptr.h"
#include "AccTarSel.h"
#include "AccTarSel_private.h"

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
volatile FUS_OBJDATA_ST *p_0_AccTarSel_FUS_OBJDATA_ST_0 = NULL;
volatile ATS_INTERNAL_OBJINFO_ST *p_0_AccTarSel_ATS_INTERNAL_OBJINFO_ST_1 = NULL;
volatile Obj_Data *p_0_AccTarSel_Obj_Data_2 = NULL;
volatile OBJDATA_ST *p_0_AccTarSel_OBJDATA_ST_3 = NULL;
volatile ATS_OBJINFO_ST *p_0_AccTarSel_ATS_OBJINFO_ST_4 = NULL;
volatile ATS_PO_ST *p_0_AccTarSel_ATS_PO_ST_5 = NULL;
volatile NET_DRVACTION_ST *p_0_AccTarSel_NET_DRVACTION_ST_6 = NULL;
volatile AST_INFO_ST *p_0_AccTarSel_AST_INFO_ST_7 = NULL;
volatile real32_T *p_0_AccTarSel_real32_T_8 = NULL;
volatile int32_T *p_0_AccTarSel_int32_T_9 = NULL;
volatile boolean_T *p_0_AccTarSel_boolean_T_10 = NULL;
volatile OBJDATA_ST *p_0_AccTarSel_OBJDATA_ST_11 = NULL;
volatile real32_T *p_0_AccTarSel_real32_T_12 = NULL;
volatile boolean_T *p_0_AccTarSel_boolean_T_13 = NULL;
volatile COM_VEHBUS_ST *p_1_AccTarSel_COM_VEHBUS_ST_0 = NULL;
volatile FUS_OBJ_OUTPUT_ST *p_1_AccTarSel_FUS_OBJ_OUTPUT_ST_1 = NULL;
volatile VSI_VEHSTATE_ST *p_1_AccTarSel_VSI_VEHSTATE_ST_2 = NULL;
volatile SYS_INFO_ST *p_1_AccTarSel_SYS_INFO_ST_3 = NULL;
volatile FUS_OBJDATA_ST *p_1_AccTarSel_FUS_OBJDATA_ST_4 = NULL;
volatile NET_DRVACTION_ST *p_1_AccTarSel_NET_DRVACTION_ST_5 = NULL;
volatile Radar410_Info_ST *p_1_AccTarSel_Radar410_Info_ST_6 = NULL;
volatile real_T *p_2_AccTarSel_real_T_0 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_1 = NULL;
volatile boolean_T *p_2_AccTarSel_boolean_T_2 = NULL;
volatile ATS_INTERNAL_OBJINFO_ST *p_2_AccTarSel_ATS_INTERNAL_OBJINFO_ST_3 = NULL;
volatile ATS_OBJINFO_ST *p_2_AccTarSel_ATS_OBJINFO_ST_4 = NULL;
volatile ATS_OBJINFO_ST *p_2_AccTarSel_ATS_OBJINFO_ST_5 = NULL;
volatile ATS_PO_ST *p_2_AccTarSel_ATS_PO_ST_6 = NULL;
volatile real_T *p_2_AccTarSel_real_T_7 = NULL;
volatile int32_T *p_2_AccTarSel_int32_T_8 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_9 = NULL;
volatile uint32_T *p_2_AccTarSel_uint32_T_10 = NULL;
volatile boolean_T *p_2_AccTarSel_boolean_T_11 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_12 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_13 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_14 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_15 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_16 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_17 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_18 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_19 = NULL;
volatile ATS_INTERNAL_OBJINFO_ST *p_3_AccTarSel_ATS_INTERNAL_OBJINFO_ST_0 = NULL;
volatile ATS_PO_ST *p_3_AccTarSel_ATS_PO_ST_1 = NULL;
volatile real32_T *p_3_AccTarSel_real32_T_2 = NULL;
volatile int8_T *p_3_AccTarSel_int8_T_3 = NULL;
volatile uint8_T *p_3_AccTarSel_uint8_T_4 = NULL;
volatile boolean_T *p_3_AccTarSel_boolean_T_5 = NULL;
volatile ACC_LGTCTRL_ST *p_4_AccTarSel_ACC_LGTCTRL_ST_0 = NULL;
volatile ATS_PO_ST *p_4_AccTarSel_ATS_PO_ST_1 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_AccTarSel_FUS_OBJDATA_ST_0 = &AccTarSel_B.BusCreator;
  p_0_AccTarSel_ATS_INTERNAL_OBJINFO_ST_1 = &AccTarSel_B.ATS_Internal_ObjInfo_st;
  p_0_AccTarSel_Obj_Data_2 = &AccTarSel_B.VectorConcatenate[0];
  p_0_AccTarSel_OBJDATA_ST_3 = &AccTarSel_B.Selector;
  p_0_AccTarSel_ATS_OBJINFO_ST_4 = &AccTarSel_B.Selector_k;
  p_0_AccTarSel_ATS_PO_ST_5 = &AccTarSel_B.Memory1;
  p_0_AccTarSel_NET_DRVACTION_ST_6 = &AccTarSel_B.BusCreator_oy;
  p_0_AccTarSel_AST_INFO_ST_7 = &AccTarSel_B.AST_Info_st;
  p_0_AccTarSel_real32_T_8 = &AccTarSel_B.Abs;
  p_0_AccTarSel_int32_T_9 = &AccTarSel_B.ForIterator;
  p_0_AccTarSel_boolean_T_10 = &AccTarSel_B.ACC_SpdIncSw;
  p_0_AccTarSel_OBJDATA_ST_11 = &AccTarSel_B.CoreSubsys[39].BusCreator;
  p_0_AccTarSel_real32_T_12 = &AccTarSel_B.CoreSubsys[39].Add;
  p_0_AccTarSel_boolean_T_13 = &AccTarSel_B.CoreSubsys[39].DataTypeConversion9;
  p_1_AccTarSel_COM_VEHBUS_ST_0 = &AccTarSel_U.CANInput;
  p_1_AccTarSel_FUS_OBJ_OUTPUT_ST_1 = &AccTarSel_U.ObjList;
  p_1_AccTarSel_VSI_VEHSTATE_ST_2 = &AccTarSel_U.VSI_VehState_st;
  p_1_AccTarSel_SYS_INFO_ST_3 = &AccTarSel_U.SYS_Info_st;
  p_1_AccTarSel_FUS_OBJDATA_ST_4 = &AccTarSel_U.FUS_ObjData_st;
  p_1_AccTarSel_NET_DRVACTION_ST_5 = &AccTarSel_U.DrvActSimu;
  p_1_AccTarSel_Radar410_Info_ST_6 = &AccTarSel_U.ObjRadarList;
  p_2_AccTarSel_real_T_0 = &AccTarSel_P.P_vyCutInThres;
  p_2_AccTarSel_real32_T_1 = &AccTarSel_P.P_aFOCApproachIntpAcitve;
  p_2_AccTarSel_boolean_T_2 = &AccTarSel_P.P_CutInEnable;
  p_2_AccTarSel_ATS_INTERNAL_OBJINFO_ST_3 = &AccTarSel_P.Memory_InitialCondition;
  p_2_AccTarSel_ATS_OBJINFO_ST_4 = &AccTarSel_P.ObjInfo_Y0;
  p_2_AccTarSel_ATS_OBJINFO_ST_5 = &AccTarSel_P.Zero1_Value[0];
  p_2_AccTarSel_ATS_PO_ST_6 = &AccTarSel_P.Memory1_InitialCondition;
  p_2_AccTarSel_real_T_7 = &AccTarSel_P.Constant_Value;
  p_2_AccTarSel_int32_T_8 = &AccTarSel_P.ForIterator_IterationLimit;
  p_2_AccTarSel_real32_T_9 = &AccTarSel_P.Constant1_Value_f;
  p_2_AccTarSel_uint32_T_10 = &AccTarSel_P.Delay_DelayLength;
  p_2_AccTarSel_boolean_T_11 = &AccTarSel_P.Constant2_Value_e;
  p_2_AccTarSel_real32_T_12 = &AccTarSel_P.CoreSubsys.Constant1_Value;
  p_2_AccTarSel_real32_T_13 = &AccTarSel_P.IfActionSubsystem2_f.Constant_Value;
  p_2_AccTarSel_real32_T_14 = &AccTarSel_P.ObjStopped.Constant2_Value;
  p_2_AccTarSel_real32_T_15 = &AccTarSel_P.ObjNoStop.Constant2_Value;
  p_2_AccTarSel_real32_T_16 = &AccTarSel_P.IfActionSubsystem1_h.Constant_Value;
  p_2_AccTarSel_real32_T_17 = &AccTarSel_P.IfActionSubsystem2_l.Constant_Value;
  p_2_AccTarSel_real32_T_18 = &AccTarSel_P.IfActionSubsystem3.Constant2_Value;
  p_2_AccTarSel_real32_T_19 = &AccTarSel_P.IfActionSubsystem_m.Constant2_Value;
  p_3_AccTarSel_ATS_INTERNAL_OBJINFO_ST_0 = &AccTarSel_DW.Memory_PreviousInput;
  p_3_AccTarSel_ATS_PO_ST_1 = &AccTarSel_DW.Memory1_PreviousInput;
  p_3_AccTarSel_real32_T_2 = &AccTarSel_DW.Delay_DSTATE;
  p_3_AccTarSel_int8_T_3 = &AccTarSel_DW.If_ActiveSubsystem;
  p_3_AccTarSel_uint8_T_4 = &AccTarSel_DW.is_active_c3_AccTarSel;
  p_3_AccTarSel_boolean_T_5 = &AccTarSel_DW.Memory_PreviousInput_o;
  p_4_AccTarSel_ACC_LGTCTRL_ST_0 = &AccTarSel_Y.ACC_LgtCtrl_st;
  p_4_AccTarSel_ATS_PO_ST_1 = &AccTarSel_Y.ATS_Po_st;
}

void AccTarSel_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
