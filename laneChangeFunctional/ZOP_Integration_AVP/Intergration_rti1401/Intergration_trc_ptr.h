/*********************** dSPACE target specific file *************************

   Header file Intergration_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Fri Dec 11 09:12:57 2020

   Copyright 2020, dSPACE GmbH. All rights reserved.

 *****************************************************************************/
#ifndef RTI_HEADER_Intergration_trc_ptr_h_
#define RTI_HEADER_Intergration_trc_ptr_h_

/* Include the model header file. */
#include "Intergration.h"
#include "Intergration_private.h"
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
EXTERN_C volatile FUS_OBJ_OUTPUT_ST *p_0_Intergration_FUS_OBJ_OUTPUT_ST_0;
EXTERN_C volatile Radar410_Info_ST *p_0_Intergration_Radar410_Info_ST_1;
EXTERN_C volatile COM_VEHBUS_ST *p_0_Intergration_COM_VEHBUS_ST_2;
EXTERN_C volatile Obj_Data *p_0_Intergration_Obj_Data_3;
EXTERN_C volatile x246 *p_0_Intergration_x246_4;
EXTERN_C volatile Radar_Status *p_0_Intergration_Radar_Status_5;
EXTERN_C volatile ATS_PO_ST *p_0_Intergration_ATS_PO_ST_6;
EXTERN_C volatile x255 *p_0_Intergration_x255_7;
EXTERN_C volatile x24E *p_0_Intergration_x24E_8;
EXTERN_C volatile x242 *p_0_Intergration_x242_9;
EXTERN_C volatile x251 *p_0_Intergration_x251_10;
EXTERN_C volatile x24C *p_0_Intergration_x24C_11;
EXTERN_C volatile VSI_VEHSTATE_ST *p_0_Intergration_VSI_VEHSTATE_ST_12;
EXTERN_C volatile x1EC *p_0_Intergration_x1EC_13;
EXTERN_C volatile x1E5 *p_0_Intergration_x1E5_14;
EXTERN_C volatile VLC_LGTCMD_ST *p_0_Intergration_VLC_LGTCMD_ST_15;
EXTERN_C volatile xAC *p_0_Intergration_xAC_16;
EXTERN_C volatile x19C *p_0_Intergration_x19C_17;
EXTERN_C volatile x194 *p_0_Intergration_x194_18;
EXTERN_C volatile x185 *p_0_Intergration_x185_19;
EXTERN_C volatile xFB *p_0_Intergration_xFB_20;
EXTERN_C volatile xAF *p_0_Intergration_xAF_21;
EXTERN_C volatile x46A *p_0_Intergration_x46A_22;
EXTERN_C volatile x376 *p_0_Intergration_x376_23;
EXTERN_C volatile x23C *p_0_Intergration_x23C_24;
EXTERN_C volatile x1E9 *p_0_Intergration_x1E9_25;
EXTERN_C volatile x1E1 *p_0_Intergration_x1E1_26;
EXTERN_C volatile x1B6 *p_0_Intergration_x1B6_27;
EXTERN_C volatile x165 *p_0_Intergration_x165_28;
EXTERN_C volatile real_T *p_0_Intergration_real_T_29;
EXTERN_C volatile SYS_INFO_ST *p_0_Intergration_SYS_INFO_ST_30;
EXTERN_C volatile real32_T *p_0_Intergration_real32_T_31;
EXTERN_C volatile uint16_T *p_0_Intergration_uint16_T_32;
EXTERN_C volatile uint8_T *p_0_Intergration_uint8_T_33;
EXTERN_C volatile boolean_T *p_0_Intergration_boolean_T_34;
EXTERN_C volatile SYS_INFO_ST *p_1_Intergration_SYS_INFO_ST_0;
EXTERN_C volatile COM_VEHDYN_ST *p_1_Intergration_COM_VEHDYN_ST_1;
EXTERN_C volatile COM_PROPACT_ST *p_1_Intergration_COM_PROPACT_ST_2;
EXTERN_C volatile NET_DRVACTION_ST *p_1_Intergration_NET_DRVACTION_ST_3;
EXTERN_C volatile FUS_OBJDATA_ST *p_1_Intergration_FUS_OBJDATA_ST_4;
EXTERN_C volatile uint16_T *p_2_Intergration_uint16_T_0;
EXTERN_C volatile uint8_T *p_2_Intergration_uint8_T_1;
EXTERN_C volatile VLC_LGTCMD_ST *p_2_Intergration_VLC_LGTCMD_ST_2;
EXTERN_C volatile real_T *p_2_Intergration_real_T_3;
EXTERN_C volatile real32_T *p_2_Intergration_real32_T_4;
EXTERN_C volatile uint32_T *p_2_Intergration_uint32_T_5;
EXTERN_C volatile uint16_T *p_2_Intergration_uint16_T_6;
EXTERN_C volatile boolean_T *p_2_Intergration_boolean_T_7;
EXTERN_C volatile uint8_T *p_2_Intergration_uint8_T_8;
EXTERN_C volatile VLC_LGTCMD_ST *p_3_Intergration_VLC_LGTCMD_ST_0;
EXTERN_C volatile real_T *p_3_Intergration_real_T_1;
EXTERN_C volatile int32_T *p_3_Intergration_int32_T_2;
EXTERN_C volatile int_T *p_3_Intergration_int_T_3;
EXTERN_C volatile VLC_LGTCMD_ST *p_4_Intergration_VLC_LGTCMD_ST_0;
EXTERN_C volatile ACC_LGTCTRL_ST *p_4_Intergration_ACC_LGTCTRL_ST_1;

/*
 *  Declare the general function for TRC pointer initialization
 */
EXTERN_C void Intergration_rti_init_trc_pointers(void);

#endif                                 /* RTI_HEADER_Intergration_trc_ptr_h_ */
