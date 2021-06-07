/*********************** dSPACE target specific file *************************

   Header file Intergration_TJA_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Wed Dec 30 09:26:26 2020

   Copyright 2020, dSPACE GmbH. All rights reserved.

 *****************************************************************************/
#ifndef RTI_HEADER_Intergration_TJA_trc_ptr_h_
#define RTI_HEADER_Intergration_TJA_trc_ptr_h_

/* Include the model header file. */
#include "Intergration_TJA.h"
#include "Intergration_TJA_private.h"
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
EXTERN_C volatile EYEQ4_DATA_RT_ST *p_0_Intergration_TJA_EYEQ4_DATA_RT_ST_0;
EXTERN_C volatile FUS_OBJ_OUTPUT_ST *p_0_Intergration_TJA_FUS_OBJ_OUTPUT_ST_1;
EXTERN_C volatile Radar410_Info_ST *p_0_Intergration_TJA_Radar410_Info_ST_2;
EXTERN_C volatile BusArray_308 *p_0_Intergration_TJA_BusArray_308_3;
EXTERN_C volatile LANE_ST *p_0_Intergration_TJA_LANE_ST_4;
EXTERN_C volatile COM_VEHBUS_ST *p_0_Intergration_TJA_COM_VEHBUS_ST_5;
EXTERN_C volatile FUS_LANE_OUTPUT_ST *p_0_Intergration_TJA_FUS_LANE_OUTPUT_ST_6;
EXTERN_C volatile ROADEDGE_DATA_ST *p_0_Intergration_TJA_ROADEDGE_DATA_ST_7;
EXTERN_C volatile OBJECT_ST *p_0_Intergration_TJA_OBJECT_ST_8;
EXTERN_C volatile FUS_ROAD_EDGE_OUTPUT_ST
  *p_0_Intergration_TJA_FUS_ROAD_EDGE_OUTPUT_ST_9;
EXTERN_C volatile Obj_Data *p_0_Intergration_TJA_Obj_Data_10;
EXTERN_C volatile Adja_Prot *p_0_Intergration_TJA_Adja_Prot_11;
EXTERN_C volatile x246 *p_0_Intergration_TJA_x246_12;
EXTERN_C volatile LatCtrl_LCK_LanSigInputs_t
  *p_0_Intergration_TJA_LatCtrl_LCK_LanSigInputs_t_13;
EXTERN_C volatile Host_Prot *p_0_Intergration_TJA_Host_Prot_14;
EXTERN_C volatile Radar_Status *p_0_Intergration_TJA_Radar_Status_15;
EXTERN_C volatile LatCtrl_LCK_VehSigInputs_t
  *p_0_Intergration_TJA_LatCtrl_LCK_VehSigInputs_t_16;
EXTERN_C volatile ATS_PO_ST *p_0_Intergration_TJA_ATS_PO_ST_17;
EXTERN_C volatile x255 *p_0_Intergration_TJA_x255_18;
EXTERN_C volatile x24E *p_0_Intergration_TJA_x24E_19;
EXTERN_C volatile x242 *p_0_Intergration_TJA_x242_20;
EXTERN_C volatile x251 *p_0_Intergration_TJA_x251_21;
EXTERN_C volatile x24C *p_0_Intergration_TJA_x24C_22;
EXTERN_C volatile VSI_VEHSTATE_ST *p_0_Intergration_TJA_VSI_VEHSTATE_ST_23;
EXTERN_C volatile Bus_308 *p_0_Intergration_TJA_Bus_308_24;
EXTERN_C volatile ACC_LGTCTRL_ST *p_0_Intergration_TJA_ACC_LGTCTRL_ST_25;
EXTERN_C volatile x1EC *p_0_Intergration_TJA_x1EC_26;
EXTERN_C volatile x1E5 *p_0_Intergration_TJA_x1E5_27;
EXTERN_C volatile VLC_LGTCMD_ST *p_0_Intergration_TJA_VLC_LGTCMD_ST_28;
EXTERN_C volatile xAC *p_0_Intergration_TJA_xAC_29;
EXTERN_C volatile x19C *p_0_Intergration_TJA_x19C_30;
EXTERN_C volatile x194 *p_0_Intergration_TJA_x194_31;
EXTERN_C volatile x185 *p_0_Intergration_TJA_x185_32;
EXTERN_C volatile OBJECT_FRAME_INFO *p_0_Intergration_TJA_OBJECT_FRAME_INFO_33;
EXTERN_C volatile Host_Prot_Header *p_0_Intergration_TJA_Host_Prot_Header_34;
EXTERN_C volatile xFB *p_0_Intergration_TJA_xFB_35;
EXTERN_C volatile xAF *p_0_Intergration_TJA_xAF_36;
EXTERN_C volatile x46A *p_0_Intergration_TJA_x46A_37;
EXTERN_C volatile x376 *p_0_Intergration_TJA_x376_38;
EXTERN_C volatile x23C *p_0_Intergration_TJA_x23C_39;
EXTERN_C volatile x1E9 *p_0_Intergration_TJA_x1E9_40;
EXTERN_C volatile x1E1 *p_0_Intergration_TJA_x1E1_41;
EXTERN_C volatile x1B6 *p_0_Intergration_TJA_x1B6_42;
EXTERN_C volatile x165 *p_0_Intergration_TJA_x165_43;
EXTERN_C volatile real_T *p_0_Intergration_TJA_real_T_44;
EXTERN_C volatile SYS_INFO_ST *p_0_Intergration_TJA_SYS_INFO_ST_45;
EXTERN_C volatile LatCtrl_LCK_TrackSigInputs_t
  *p_0_Intergration_TJA_LatCtrl_LCK_TrackSigInputs_t_46;
EXTERN_C volatile uint32_T *p_0_Intergration_TJA_uint32_T_47;
EXTERN_C volatile real32_T *p_0_Intergration_TJA_real32_T_48;
EXTERN_C volatile int32_T *p_0_Intergration_TJA_int32_T_49;
EXTERN_C volatile uint16_T *p_0_Intergration_TJA_uint16_T_50;
EXTERN_C volatile int16_T *p_0_Intergration_TJA_int16_T_51;
EXTERN_C volatile uint8_T *p_0_Intergration_TJA_uint8_T_52;
EXTERN_C volatile int8_T *p_0_Intergration_TJA_int8_T_53;
EXTERN_C volatile boolean_T *p_0_Intergration_TJA_boolean_T_54;
EXTERN_C volatile SYS_INFO_ST *p_1_Intergration_TJA_SYS_INFO_ST_0;
EXTERN_C volatile COM_VEHDYN_ST *p_1_Intergration_TJA_COM_VEHDYN_ST_1;
EXTERN_C volatile COM_PROPACT_ST *p_1_Intergration_TJA_COM_PROPACT_ST_2;
EXTERN_C volatile NET_DRVACTION_ST *p_1_Intergration_TJA_NET_DRVACTION_ST_3;
EXTERN_C volatile FUS_OBJDATA_ST *p_1_Intergration_TJA_FUS_OBJDATA_ST_4;
EXTERN_C volatile real32_T *p_1_Intergration_TJA_real32_T_5;
EXTERN_C volatile real32_T *p_2_Intergration_TJA_real32_T_0;
EXTERN_C volatile uint16_T *p_2_Intergration_TJA_uint16_T_1;
EXTERN_C volatile uint8_T *p_2_Intergration_TJA_uint8_T_2;
EXTERN_C volatile BusArray_308 *p_2_Intergration_TJA_BusArray_308_3;
EXTERN_C volatile BusArray_308 *p_2_Intergration_TJA_BusArray_308_4;
EXTERN_C volatile BusArray_308 *p_2_Intergration_TJA_BusArray_308_5;
EXTERN_C volatile BusArray_308 *p_2_Intergration_TJA_BusArray_308_6;
EXTERN_C volatile x255 *p_2_Intergration_TJA_x255_7;
EXTERN_C volatile ACC_LGTCTRL_ST *p_2_Intergration_TJA_ACC_LGTCTRL_ST_8;
EXTERN_C volatile Bus_308 *p_2_Intergration_TJA_Bus_308_9;
EXTERN_C volatile Bus_308 *p_2_Intergration_TJA_Bus_308_10;
EXTERN_C volatile Bus_308 *p_2_Intergration_TJA_Bus_308_11;
EXTERN_C volatile Bus_308 *p_2_Intergration_TJA_Bus_308_12;
EXTERN_C volatile Bus_308 *p_2_Intergration_TJA_Bus_308_13;
EXTERN_C volatile Bus_308 *p_2_Intergration_TJA_Bus_308_14;
EXTERN_C volatile Bus_308 *p_2_Intergration_TJA_Bus_308_15;
EXTERN_C volatile Bus_308 *p_2_Intergration_TJA_Bus_308_16;
EXTERN_C volatile Bus_308 *p_2_Intergration_TJA_Bus_308_17;
EXTERN_C volatile Bus_308 *p_2_Intergration_TJA_Bus_308_18;
EXTERN_C volatile Bus_308 *p_2_Intergration_TJA_Bus_308_19;
EXTERN_C volatile Bus_308 *p_2_Intergration_TJA_Bus_308_20;
EXTERN_C volatile Bus_308 *p_2_Intergration_TJA_Bus_308_21;
EXTERN_C volatile Bus_308 *p_2_Intergration_TJA_Bus_308_22;
EXTERN_C volatile Bus_308 *p_2_Intergration_TJA_Bus_308_23;
EXTERN_C volatile Bus_308 *p_2_Intergration_TJA_Bus_308_24;
EXTERN_C volatile VLC_LGTCMD_ST *p_2_Intergration_TJA_VLC_LGTCMD_ST_25;
EXTERN_C volatile real_T *p_2_Intergration_TJA_real_T_26;
EXTERN_C volatile real32_T *p_2_Intergration_TJA_real32_T_27;
EXTERN_C volatile uint32_T *p_2_Intergration_TJA_uint32_T_28;
EXTERN_C volatile uint16_T *p_2_Intergration_TJA_uint16_T_29;
EXTERN_C volatile boolean_T *p_2_Intergration_TJA_boolean_T_30;
EXTERN_C volatile uint8_T *p_2_Intergration_TJA_uint8_T_31;
EXTERN_C volatile real32_T *p_2_Intergration_TJA_real32_T_32;
EXTERN_C volatile real32_T *p_2_Intergration_TJA_real32_T_33;
EXTERN_C volatile real32_T *p_2_Intergration_TJA_real32_T_34;
EXTERN_C volatile real32_T *p_2_Intergration_TJA_real32_T_35;
EXTERN_C volatile real32_T *p_2_Intergration_TJA_real32_T_36;
EXTERN_C volatile real32_T *p_2_Intergration_TJA_real32_T_37;
EXTERN_C volatile BusArray_308 *p_3_Intergration_TJA_BusArray_308_0;
EXTERN_C volatile ACC_LGTCTRL_ST *p_3_Intergration_TJA_ACC_LGTCTRL_ST_1;
EXTERN_C volatile Bus_308 *p_3_Intergration_TJA_Bus_308_2;
EXTERN_C volatile VLC_LGTCMD_ST *p_3_Intergration_TJA_VLC_LGTCMD_ST_3;
EXTERN_C volatile real_T *p_3_Intergration_TJA_real_T_4;
EXTERN_C volatile real32_T *p_3_Intergration_TJA_real32_T_6;
EXTERN_C volatile int32_T *p_3_Intergration_TJA_int32_T_7;
EXTERN_C volatile int_T *p_3_Intergration_TJA_int_T_8;
EXTERN_C volatile int16_T *p_3_Intergration_TJA_int16_T_9;
EXTERN_C volatile int8_T *p_3_Intergration_TJA_int8_T_10;
EXTERN_C volatile uint8_T *p_3_Intergration_TJA_uint8_T_11;
EXTERN_C volatile VLC_LGTCMD_ST *p_4_Intergration_TJA_VLC_LGTCMD_ST_0;
EXTERN_C volatile ACC_LGTCTRL_ST *p_4_Intergration_TJA_ACC_LGTCTRL_ST_1;
EXTERN_C volatile ARS308_RX *p_4_Intergration_TJA_ARS308_RX_2;
EXTERN_C volatile real_T *p_4_Intergration_TJA_real_T_3;

/*
 *  Declare the general function for TRC pointer initialization
 */
EXTERN_C void Intergration_TJA_rti_init_trc_pointers(void);

#endif                                 /* RTI_HEADER_Intergration_TJA_trc_ptr_h_ */
