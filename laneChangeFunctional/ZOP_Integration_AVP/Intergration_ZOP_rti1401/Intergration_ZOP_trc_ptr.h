/*********************** dSPACE target specific file *************************

   Header file Intergration_ZOP_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Wed Mar 17 16:07:06 2021

   Copyright 2021, dSPACE GmbH. All rights reserved.

 *****************************************************************************/
#ifndef RTI_HEADER_Intergration_ZOP_trc_ptr_h_
#define RTI_HEADER_Intergration_ZOP_trc_ptr_h_

/* Include the model header file. */
#include "Intergration_ZOP.h"
#include "Intergration_ZOP_private.h"
#ifdef EXTERN_C
#undef EXTERN_C
#endif

#ifdef __cplusplus
#define EXTERN_C                       extern "C"
#else
#define EXTERN_C                       extern
#endif

/*
 *  Declare the global TRC pointers
 */
EXTERN_C volatile EYEQ4_DATA_RT_ST *p_0_Intergration_ZOP_EYEQ4_DATA_RT_ST_0;
EXTERN_C volatile ARS308_RX *p_0_Intergration_ZOP_ARS308_RX_1;
EXTERN_C volatile FUS_OBJ_OUTPUT_ST *p_0_Intergration_ZOP_FUS_OBJ_OUTPUT_ST_2;
EXTERN_C volatile LANEMODEL_OUTPUT_ST
  *p_0_Intergration_ZOP_LANEMODEL_OUTPUT_ST_3;
EXTERN_C volatile Radar410_Info_ST *p_0_Intergration_ZOP_Radar410_Info_ST_4;
EXTERN_C volatile BusArray_308 *p_0_Intergration_ZOP_BusArray_308_5;
EXTERN_C volatile HWA_TARGETOBJECT_OUTPUT_ST
  *p_0_Intergration_ZOP_HWA_TARGETOBJECT_OUTPUT_ST_6;
EXTERN_C volatile HMI_OUTPUT_ST *p_0_Intergration_ZOP_HMI_OUTPUT_ST_7;
EXTERN_C volatile LANE_ST *p_0_Intergration_ZOP_LANE_ST_8;
EXTERN_C volatile COM_VEHBUS_ST *p_0_Intergration_ZOP_COM_VEHBUS_ST_9;
EXTERN_C volatile FUS_LANE_OUTPUT_ST *p_0_Intergration_ZOP_FUS_LANE_OUTPUT_ST_10;
EXTERN_C volatile ROADEDGE_DATA_ST *p_0_Intergration_ZOP_ROADEDGE_DATA_ST_11;
EXTERN_C volatile OBJECT_ST *p_0_Intergration_ZOP_OBJECT_ST_12;
EXTERN_C volatile FUS_ROAD_EDGE_OUTPUT_ST
  *p_0_Intergration_ZOP_FUS_ROAD_EDGE_OUTPUT_ST_13;
EXTERN_C volatile Obj_Data *p_0_Intergration_ZOP_Obj_Data_14;
EXTERN_C volatile MapInfo_ST *p_0_Intergration_ZOP_MapInfo_ST_15;
EXTERN_C volatile Adja_Prot *p_0_Intergration_ZOP_Adja_Prot_16;
EXTERN_C volatile x246 *p_0_Intergration_ZOP_x246_17;
EXTERN_C volatile NARROW_LANE_SUPPORT_OUTPUT_ST
  *p_0_Intergration_ZOP_NARROW_LANE_SUPPORT_OUTPUT_ST_18;
EXTERN_C volatile LatCtrl_LCK_LanSigInputs_t
  *p_0_Intergration_ZOP_LatCtrl_LCK_LanSigInputs_t_19;
EXTERN_C volatile Host_Prot *p_0_Intergration_ZOP_Host_Prot_20;
EXTERN_C volatile Radar_Status *p_0_Intergration_ZOP_Radar_Status_21;
EXTERN_C volatile LatCtrl_LCK_VehSigInputs_t
  *p_0_Intergration_ZOP_LatCtrl_LCK_VehSigInputs_t_22;
EXTERN_C volatile ATS_PO_ST *p_0_Intergration_ZOP_ATS_PO_ST_23;
EXTERN_C volatile x255 *p_0_Intergration_ZOP_x255_24;
EXTERN_C volatile x24E *p_0_Intergration_ZOP_x24E_25;
EXTERN_C volatile x242 *p_0_Intergration_ZOP_x242_26;
EXTERN_C volatile ACC_LGTCTRL_ST *p_0_Intergration_ZOP_ACC_LGTCTRL_ST_27;
EXTERN_C volatile x251 *p_0_Intergration_ZOP_x251_28;
EXTERN_C volatile x24C *p_0_Intergration_ZOP_x24C_29;
EXTERN_C volatile VSI_VEHSTATE_ST *p_0_Intergration_ZOP_VSI_VEHSTATE_ST_30;
EXTERN_C volatile Bus_308 *p_0_Intergration_ZOP_Bus_308_31;
EXTERN_C volatile AVP_OUTPUT_ST *p_0_Intergration_ZOP_AVP_OUTPUT_ST_32;
EXTERN_C volatile x1EC *p_0_Intergration_ZOP_x1EC_33;
EXTERN_C volatile x1E5 *p_0_Intergration_ZOP_x1E5_34;
EXTERN_C volatile ZOP2ACC *p_0_Intergration_ZOP_ZOP2ACC_35;
EXTERN_C volatile VLC_LGTCMD_ST *p_0_Intergration_ZOP_VLC_LGTCMD_ST_36;
EXTERN_C volatile xAC *p_0_Intergration_ZOP_xAC_37;
EXTERN_C volatile x19C *p_0_Intergration_ZOP_x19C_38;
EXTERN_C volatile x194 *p_0_Intergration_ZOP_x194_39;
EXTERN_C volatile x185 *p_0_Intergration_ZOP_x185_40;
EXTERN_C volatile OBJECT_FRAME_INFO *p_0_Intergration_ZOP_OBJECT_FRAME_INFO_41;
EXTERN_C volatile Light_Info_ST *p_0_Intergration_ZOP_Light_Info_ST_42;
EXTERN_C volatile Host_Prot_Header *p_0_Intergration_ZOP_Host_Prot_Header_43;
EXTERN_C volatile Header_308 *p_0_Intergration_ZOP_Header_308_44;
EXTERN_C volatile HMI_DISPLAY_ST *p_0_Intergration_ZOP_HMI_DISPLAY_ST_45;
EXTERN_C volatile xFB *p_0_Intergration_ZOP_xFB_46;
EXTERN_C volatile xAF *p_0_Intergration_ZOP_xAF_47;
EXTERN_C volatile x46A *p_0_Intergration_ZOP_x46A_48;
EXTERN_C volatile x376 *p_0_Intergration_ZOP_x376_49;
EXTERN_C volatile x23C *p_0_Intergration_ZOP_x23C_50;
EXTERN_C volatile x1E9 *p_0_Intergration_ZOP_x1E9_51;
EXTERN_C volatile x1E1 *p_0_Intergration_ZOP_x1E1_52;
EXTERN_C volatile x1B6 *p_0_Intergration_ZOP_x1B6_53;
EXTERN_C volatile x165 *p_0_Intergration_ZOP_x165_54;
EXTERN_C volatile real_T *p_0_Intergration_ZOP_real_T_55;
EXTERN_C volatile ZOP_HMI_REQ *p_0_Intergration_ZOP_ZOP_HMI_REQ_56;
EXTERN_C volatile SystemCmd_ST *p_0_Intergration_ZOP_SystemCmd_ST_57;
EXTERN_C volatile SYS_INFO_ST *p_0_Intergration_ZOP_SYS_INFO_ST_58;
EXTERN_C volatile LatCtrl_LCK_TrackSigInputs_t
  *p_0_Intergration_ZOP_LatCtrl_LCK_TrackSigInputs_t_59;
EXTERN_C volatile ACC_Status_ST *p_0_Intergration_ZOP_ACC_Status_ST_60;
EXTERN_C volatile ACC_HMI_REQ *p_0_Intergration_ZOP_ACC_HMI_REQ_61;
EXTERN_C volatile uint32_T *p_0_Intergration_ZOP_uint32_T_62;
EXTERN_C volatile real32_T *p_0_Intergration_ZOP_real32_T_63;
EXTERN_C volatile int32_T *p_0_Intergration_ZOP_int32_T_64;
EXTERN_C volatile uint16_T *p_0_Intergration_ZOP_uint16_T_65;
EXTERN_C volatile int16_T *p_0_Intergration_ZOP_int16_T_66;
EXTERN_C volatile uint8_T *p_0_Intergration_ZOP_uint8_T_67;
EXTERN_C volatile int8_T *p_0_Intergration_ZOP_int8_T_68;
EXTERN_C volatile boolean_T *p_0_Intergration_ZOP_boolean_T_69;
EXTERN_C volatile SYS_INFO_ST *p_1_Intergration_ZOP_SYS_INFO_ST_0;
EXTERN_C volatile COM_VEHDYN_ST *p_1_Intergration_ZOP_COM_VEHDYN_ST_1;
EXTERN_C volatile COM_PROPACT_ST *p_1_Intergration_ZOP_COM_PROPACT_ST_2;
EXTERN_C volatile NET_DRVACTION_ST *p_1_Intergration_ZOP_NET_DRVACTION_ST_3;
EXTERN_C volatile FUS_OBJDATA_ST *p_1_Intergration_ZOP_FUS_OBJDATA_ST_4;
EXTERN_C volatile real32_T *p_2_Intergration_ZOP_real32_T_0;
EXTERN_C volatile uint16_T *p_2_Intergration_ZOP_uint16_T_1;
EXTERN_C volatile uint8_T *p_2_Intergration_ZOP_uint8_T_2;
EXTERN_C volatile BusArray_308 *p_2_Intergration_ZOP_BusArray_308_3;
EXTERN_C volatile BusArray_308 *p_2_Intergration_ZOP_BusArray_308_4;
EXTERN_C volatile BusArray_308 *p_2_Intergration_ZOP_BusArray_308_5;
EXTERN_C volatile BusArray_308 *p_2_Intergration_ZOP_BusArray_308_6;
EXTERN_C volatile ATS_PO_ST *p_2_Intergration_ZOP_ATS_PO_ST_7;
EXTERN_C volatile ACC_LGTCTRL_ST *p_2_Intergration_ZOP_ACC_LGTCTRL_ST_8;
EXTERN_C volatile x255 *p_2_Intergration_ZOP_x255_9;
EXTERN_C volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_10;
EXTERN_C volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_11;
EXTERN_C volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_12;
EXTERN_C volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_13;
EXTERN_C volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_14;
EXTERN_C volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_15;
EXTERN_C volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_16;
EXTERN_C volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_17;
EXTERN_C volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_18;
EXTERN_C volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_19;
EXTERN_C volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_20;
EXTERN_C volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_21;
EXTERN_C volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_22;
EXTERN_C volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_23;
EXTERN_C volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_24;
EXTERN_C volatile Bus_308 *p_2_Intergration_ZOP_Bus_308_25;
EXTERN_C volatile VLC_LGTCMD_ST *p_2_Intergration_ZOP_VLC_LGTCMD_ST_26;
EXTERN_C volatile real_T *p_2_Intergration_ZOP_real_T_27;
EXTERN_C volatile real32_T *p_2_Intergration_ZOP_real32_T_28;
EXTERN_C volatile uint32_T *p_2_Intergration_ZOP_uint32_T_29;
EXTERN_C volatile uint16_T *p_2_Intergration_ZOP_uint16_T_30;
EXTERN_C volatile boolean_T *p_2_Intergration_ZOP_boolean_T_31;
EXTERN_C volatile int8_T *p_2_Intergration_ZOP_int8_T_32;
EXTERN_C volatile uint8_T *p_2_Intergration_ZOP_uint8_T_33;
EXTERN_C volatile real32_T *p_2_Intergration_ZOP_real32_T_34;
EXTERN_C volatile real32_T *p_2_Intergration_ZOP_real32_T_35;
EXTERN_C volatile real32_T *p_2_Intergration_ZOP_real32_T_36;
EXTERN_C volatile real32_T *p_2_Intergration_ZOP_real32_T_37;
EXTERN_C volatile real32_T *p_2_Intergration_ZOP_real32_T_38;
EXTERN_C volatile real32_T *p_2_Intergration_ZOP_real32_T_39;
EXTERN_C volatile BusArray_308 *p_3_Intergration_ZOP_BusArray_308_0;
EXTERN_C volatile ATS_PO_ST *p_3_Intergration_ZOP_ATS_PO_ST_1;
EXTERN_C volatile ACC_LGTCTRL_ST *p_3_Intergration_ZOP_ACC_LGTCTRL_ST_2;
EXTERN_C volatile Bus_308 *p_3_Intergration_ZOP_Bus_308_3;
EXTERN_C volatile VLC_LGTCMD_ST *p_3_Intergration_ZOP_VLC_LGTCMD_ST_4;
EXTERN_C volatile real_T *p_3_Intergration_ZOP_real_T_5;
EXTERN_C volatile real32_T *p_3_Intergration_ZOP_real32_T_7;
EXTERN_C volatile int32_T *p_3_Intergration_ZOP_int32_T_8;
EXTERN_C volatile int_T *p_3_Intergration_ZOP_int_T_9;
EXTERN_C volatile int16_T *p_3_Intergration_ZOP_int16_T_10;
EXTERN_C volatile int8_T *p_3_Intergration_ZOP_int8_T_11;
EXTERN_C volatile uint8_T *p_3_Intergration_ZOP_uint8_T_12;
EXTERN_C volatile boolean_T *p_3_Intergration_ZOP_boolean_T_13;
EXTERN_C volatile int8_T *p_3_Intergration_ZOP_int8_T_14;
EXTERN_C volatile uint8_T *p_3_Intergration_ZOP_uint8_T_15;
EXTERN_C volatile boolean_T *p_3_Intergration_ZOP_boolean_T_16;
EXTERN_C volatile VLC_LGTCMD_ST *p_4_Intergration_ZOP_VLC_LGTCMD_ST_0;
EXTERN_C volatile ACC_LGTCTRL_ST *p_4_Intergration_ZOP_ACC_LGTCTRL_ST_1;

/*
 *  Declare the general function for TRC pointer initialization
 */
EXTERN_C void Intergration_ZOP_rti_init_trc_pointers(void);

#endif                                 /* RTI_HEADER_Intergration_ZOP_trc_ptr_h_ */
