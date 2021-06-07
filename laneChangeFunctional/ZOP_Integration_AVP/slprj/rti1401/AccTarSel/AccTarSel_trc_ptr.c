/***************************************************************************

   Source file AccTarSel_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Tue Mar 16 18:26:32 2021

   Copyright 2021, dSPACE GmbH. All rights reserved.

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
volatile ATS_PO_ST *p_0_AccTarSel_ATS_PO_ST_4 = NULL;
volatile ATS_OBJINFO_ST *p_0_AccTarSel_ATS_OBJINFO_ST_5 = NULL;
volatile ACC_FOC_INFO_ST *p_0_AccTarSel_ACC_FOC_INFO_ST_6 = NULL;
volatile AVP_OUTPUT_ST *p_0_AccTarSel_AVP_OUTPUT_ST_7 = NULL;
volatile NET_DRVACTION_ST *p_0_AccTarSel_NET_DRVACTION_ST_8 = NULL;
volatile AST_INFO_ST *p_0_AccTarSel_AST_INFO_ST_9 = NULL;
volatile ACC_HMI_REQ *p_0_AccTarSel_ACC_HMI_REQ_10 = NULL;
volatile real32_T *p_0_AccTarSel_real32_T_11 = NULL;
volatile int32_T *p_0_AccTarSel_int32_T_12 = NULL;
volatile uint16_T *p_0_AccTarSel_uint16_T_13 = NULL;
volatile uint8_T *p_0_AccTarSel_uint8_T_14 = NULL;
volatile boolean_T *p_0_AccTarSel_boolean_T_15 = NULL;
volatile OBJDATA_ST *p_0_AccTarSel_OBJDATA_ST_16 = NULL;
volatile real32_T *p_0_AccTarSel_real32_T_17 = NULL;
volatile boolean_T *p_0_AccTarSel_boolean_T_18 = NULL;
volatile OBJDATA_ST *p_0_AccTarSel_OBJDATA_ST_19 = NULL;
volatile real32_T *p_0_AccTarSel_real32_T_20 = NULL;
volatile boolean_T *p_0_AccTarSel_boolean_T_21 = NULL;
volatile OBJDATA_ST *p_0_AccTarSel_OBJDATA_ST_22 = NULL;
volatile real32_T *p_0_AccTarSel_real32_T_23 = NULL;
volatile boolean_T *p_0_AccTarSel_boolean_T_24 = NULL;
volatile OBJDATA_ST *p_0_AccTarSel_OBJDATA_ST_25 = NULL;
volatile real32_T *p_0_AccTarSel_real32_T_26 = NULL;
volatile boolean_T *p_0_AccTarSel_boolean_T_27 = NULL;
volatile ATS_INTERNAL_OBJINFO_ST *p_2_AccTarSel_ATS_INTERNAL_OBJINFO_ST_0 = NULL;
volatile ACC_FOC_INFO_ST *p_2_AccTarSel_ACC_FOC_INFO_ST_1 = NULL;
volatile ACC_FOC_INFO_ST *p_2_AccTarSel_ACC_FOC_INFO_ST_2 = NULL;
volatile ACC_FOC_INFO_ST *p_2_AccTarSel_ACC_FOC_INFO_ST_3 = NULL;
volatile ATS_OBJINFO_ST *p_2_AccTarSel_ATS_OBJINFO_ST_4 = NULL;
volatile ATS_OBJINFO_ST *p_2_AccTarSel_ATS_OBJINFO_ST_5 = NULL;
volatile ATS_PO_ST *p_2_AccTarSel_ATS_PO_ST_6 = NULL;
volatile ATS_PO_ST *p_2_AccTarSel_ATS_PO_ST_7 = NULL;
volatile ATS_PO_ST *p_2_AccTarSel_ATS_PO_ST_8 = NULL;
volatile real_T *p_2_AccTarSel_real_T_9 = NULL;
volatile int32_T *p_2_AccTarSel_int32_T_10 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_11 = NULL;
volatile uint32_T *p_2_AccTarSel_uint32_T_12 = NULL;
volatile uint16_T *p_2_AccTarSel_uint16_T_13 = NULL;
volatile boolean_T *p_2_AccTarSel_boolean_T_14 = NULL;
volatile int8_T *p_2_AccTarSel_int8_T_15 = NULL;
volatile uint8_T *p_2_AccTarSel_uint8_T_16 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_17 = NULL;
volatile boolean_T *p_2_AccTarSel_boolean_T_18 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_19 = NULL;
volatile boolean_T *p_2_AccTarSel_boolean_T_20 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_21 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_22 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_23 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_24 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_25 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_26 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_27 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_28 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_29 = NULL;
volatile boolean_T *p_2_AccTarSel_boolean_T_30 = NULL;
volatile boolean_T *p_2_AccTarSel_boolean_T_31 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_32 = NULL;
volatile real32_T *p_2_AccTarSel_real32_T_33 = NULL;
volatile ATS_INTERNAL_OBJINFO_ST *p_3_AccTarSel_ATS_INTERNAL_OBJINFO_ST_0 = NULL;
volatile ACC_FOC_INFO_ST *p_3_AccTarSel_ACC_FOC_INFO_ST_1 = NULL;
volatile ATS_PO_ST *p_3_AccTarSel_ATS_PO_ST_2 = NULL;
volatile real32_T *p_3_AccTarSel_real32_T_3 = NULL;
volatile int32_T *p_3_AccTarSel_int32_T_4 = NULL;
volatile boolean_T *p_3_AccTarSel_boolean_T_5 = NULL;
volatile uint8_T *p_3_AccTarSel_uint8_T_6 = NULL;
volatile boolean_T *p_3_AccTarSel_boolean_T_7 = NULL;

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
  p_0_AccTarSel_ATS_PO_ST_4 = &AccTarSel_B.Memory1[0];
  p_0_AccTarSel_ATS_OBJINFO_ST_5 = &AccTarSel_B.Selector1_c;
  p_0_AccTarSel_ACC_FOC_INFO_ST_6 = &AccTarSel_B.Memory1_h[0];
  p_0_AccTarSel_AVP_OUTPUT_ST_7 = &AccTarSel_B.BusCreator_i;
  p_0_AccTarSel_NET_DRVACTION_ST_8 = &AccTarSel_B.BusCreator_m;
  p_0_AccTarSel_AST_INFO_ST_9 = &AccTarSel_B.AST_Info_st;
  p_0_AccTarSel_ACC_HMI_REQ_10 = &AccTarSel_B.BusConversion_InsertedFor_ACC_S;
  p_0_AccTarSel_real32_T_11 = &AccTarSel_B.Merge_m;
  p_0_AccTarSel_int32_T_12 = &AccTarSel_B.uDLookupTable_n;
  p_0_AccTarSel_uint16_T_13 = &AccTarSel_B.Gain_p;
  p_0_AccTarSel_uint8_T_14 = &AccTarSel_B.Memory3;
  p_0_AccTarSel_boolean_T_15 = &AccTarSel_B.RelationalOperator;
  p_0_AccTarSel_OBJDATA_ST_16 = &AccTarSel_B.CoreSubsys_p[39].BusCreator;
  p_0_AccTarSel_real32_T_17 = &AccTarSel_B.CoreSubsys_p[39].Add;
  p_0_AccTarSel_boolean_T_18 = &AccTarSel_B.CoreSubsys_p[39].DataTypeConversion9;
  p_0_AccTarSel_OBJDATA_ST_19 = &AccTarSel_B.CoreSubsys[39].BusCreator;
  p_0_AccTarSel_real32_T_20 = &AccTarSel_B.CoreSubsys[39].vx;
  p_0_AccTarSel_boolean_T_21 = &AccTarSel_B.CoreSubsys[39].Hist;
  p_0_AccTarSel_OBJDATA_ST_22 = &AccTarSel_B.IfActionSubsystem2.ObjData;
  p_0_AccTarSel_real32_T_23 = &AccTarSel_B.IfActionSubsystem2.Add;
  p_0_AccTarSel_boolean_T_24 =
    &AccTarSel_B.IfActionSubsystem2.RelationalOperator1;
  p_0_AccTarSel_OBJDATA_ST_25 = &AccTarSel_B.IfActionSubsystem.ObjData;
  p_0_AccTarSel_real32_T_26 = &AccTarSel_B.IfActionSubsystem.Add;
  p_0_AccTarSel_boolean_T_27 =
    &AccTarSel_B.IfActionSubsystem.RelationalOperator1;
  p_2_AccTarSel_ATS_INTERNAL_OBJINFO_ST_0 =
    &AccTarSel_P_g.Memory_InitialCondition;
  p_2_AccTarSel_ACC_FOC_INFO_ST_1 = &AccTarSel_P_g.FOCInfo_Y0;
  p_2_AccTarSel_ACC_FOC_INFO_ST_2 = &AccTarSel_P_g.Zero1_Value[0];
  p_2_AccTarSel_ACC_FOC_INFO_ST_3 = &AccTarSel_P_g.Memory1_InitialCondition;
  p_2_AccTarSel_ATS_OBJINFO_ST_4 = &AccTarSel_P_g.ObjInfo_Y0;
  p_2_AccTarSel_ATS_OBJINFO_ST_5 = &AccTarSel_P_g.Zero1_Value_k[0];
  p_2_AccTarSel_ATS_PO_ST_6 = &AccTarSel_P_g.POInfo_Y0;
  p_2_AccTarSel_ATS_PO_ST_7 = &AccTarSel_P_g.Zero1_Value_g[0];
  p_2_AccTarSel_ATS_PO_ST_8 = &AccTarSel_P_g.Memory1_InitialCondition_e;
  p_2_AccTarSel_real_T_9 = &AccTarSel_P_g.Constant1_Value;
  p_2_AccTarSel_int32_T_10 = &AccTarSel_P_g.CMDType_Y0;
  p_2_AccTarSel_real32_T_11 = &AccTarSel_P_g.aMin_Y0;
  p_2_AccTarSel_uint32_T_12 = &AccTarSel_P_g.Delay1_DelayLength;
  p_2_AccTarSel_uint16_T_13 = &AccTarSel_P_g.Constant4_Value_ig;
  p_2_AccTarSel_boolean_T_14 = &AccTarSel_P_g.DecToStopArray_Y0;
  p_2_AccTarSel_int8_T_15 = &AccTarSel_P_g.Constant_Value_ok;
  p_2_AccTarSel_uint8_T_16 = &AccTarSel_P_g.Gain3_Gain_a;
  p_2_AccTarSel_real32_T_17 =
    &AccTarSel_P_g.IfActionSubsystem2_a.Constant1_Value;
  p_2_AccTarSel_boolean_T_18 =
    &AccTarSel_P_g.IfActionSubsystem2_a.Constant_Value;
  p_2_AccTarSel_real32_T_19 =
    &AccTarSel_P_g.IfActionSubsystem_av.Constant1_Value;
  p_2_AccTarSel_boolean_T_20 =
    &AccTarSel_P_g.IfActionSubsystem_av.Constant_Value;
  p_2_AccTarSel_real32_T_21 = &AccTarSel_P_g.CoreSubsys_p.Constant1_Value;
  p_2_AccTarSel_real32_T_22 = &AccTarSel_P_g.CoreSubsys.Constant11_Value;
  p_2_AccTarSel_real32_T_23 = &AccTarSel_P_g.AVP_Deactivate.Constant_Value;
  p_2_AccTarSel_real32_T_24 = &AccTarSel_P_g.AVP_Activate.Constant_Value;
  p_2_AccTarSel_real32_T_25 = &AccTarSel_P_g.IfActionSubsystem3.Constant_Value;
  p_2_AccTarSel_real32_T_26 = &AccTarSel_P_g.IfActionSubsystem2.Constant2_Value;
  p_2_AccTarSel_real32_T_27 = &AccTarSel_P_g.IfActionSubsystem1.Constant_Value;
  p_2_AccTarSel_real32_T_28 = &AccTarSel_P_g.IfActionSubsystem.Constant2_Value;
  p_2_AccTarSel_real32_T_29 = &AccTarSel_P_g.IfActionSubsystem2_f.Constant_Value;
  p_2_AccTarSel_boolean_T_30 = &AccTarSel_P_g.Leaving.Constant_Value;
  p_2_AccTarSel_boolean_T_31 = &AccTarSel_P_g.Approaching.Constant_Value;
  p_2_AccTarSel_real32_T_32 =
    &AccTarSel_P_g.IfActionSubsystem3_i.Constant2_Value;
  p_2_AccTarSel_real32_T_33 =
    &AccTarSel_P_g.IfActionSubsystem_mf.Constant2_Value;
  p_3_AccTarSel_ATS_INTERNAL_OBJINFO_ST_0 = &AccTarSel_DW.Memory_PreviousInput;
  p_3_AccTarSel_ACC_FOC_INFO_ST_1 = &AccTarSel_DW.Memory1_PreviousInput[0];
  p_3_AccTarSel_ATS_PO_ST_2 = &AccTarSel_DW.Memory1_PreviousInput_b[0];
  p_3_AccTarSel_real32_T_3 = &AccTarSel_DW.Delay_DSTATE;
  p_3_AccTarSel_int32_T_4 = &AccTarSel_DW.Memory1_PreviousInput_h;
  p_3_AccTarSel_boolean_T_5 = &AccTarSel_DW.Delay1_DSTATE;
  p_3_AccTarSel_uint8_T_6 = &AccTarSel_DW.Memory3_PreviousInput;
  p_3_AccTarSel_boolean_T_7 = &AccTarSel_DW.Memory_PreviousInput_l;
}

void AccTarSel_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
