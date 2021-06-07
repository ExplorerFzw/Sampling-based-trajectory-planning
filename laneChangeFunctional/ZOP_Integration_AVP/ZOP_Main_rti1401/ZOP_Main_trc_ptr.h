/*********************** dSPACE target specific file *************************

   Header file ZOP_Main_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Wed Feb  3 13:27:16 2021

   Copyright 2021, dSPACE GmbH. All rights reserved.

 *****************************************************************************/
#ifndef RTI_HEADER_ZOP_Main_trc_ptr_h_
#define RTI_HEADER_ZOP_Main_trc_ptr_h_

/* Include the model header file. */
#include "ZOP_Main.h"
#include "ZOP_Main_private.h"
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
EXTERN_C volatile ZOP_Var_ST *p_0_ZOP_Main_ZOP_Var_ST_0;
EXTERN_C volatile MapInfo_ST_Post *p_0_ZOP_Main_MapInfo_ST_Post_1;
EXTERN_C volatile ZOP_Object_ST *p_0_ZOP_Main_ZOP_Object_ST_2;
EXTERN_C volatile VSI_VEHSTATE_ST *p_0_ZOP_Main_VSI_VEHSTATE_ST_3;
EXTERN_C volatile Light_Info_ST *p_0_ZOP_Main_Light_Info_ST_4;
EXTERN_C volatile LKS_Status_ST *p_0_ZOP_Main_LKS_Status_ST_5;
EXTERN_C volatile real_T *p_0_ZOP_Main_real_T_6;
EXTERN_C volatile SystemCmd_ST *p_0_ZOP_Main_SystemCmd_ST_7;
EXTERN_C volatile real32_T *p_0_ZOP_Main_real32_T_8;
EXTERN_C volatile int16_T *p_0_ZOP_Main_int16_T_9;
EXTERN_C volatile uint8_T *p_0_ZOP_Main_uint8_T_10;
EXTERN_C volatile int8_T *p_0_ZOP_Main_int8_T_11;
EXTERN_C volatile boolean_T *p_0_ZOP_Main_boolean_T_12;
EXTERN_C volatile SystemCmd_ST *p_1_ZOP_Main_SystemCmd_ST_0;
EXTERN_C volatile VSI_VEHSTATE_ST *p_1_ZOP_Main_VSI_VEHSTATE_ST_1;
EXTERN_C volatile FUS_OBJ_OUTPUT_ST *p_1_ZOP_Main_FUS_OBJ_OUTPUT_ST_2;
EXTERN_C volatile FUS_LANE_OUTPUT_ST *p_1_ZOP_Main_FUS_LANE_OUTPUT_ST_3;
EXTERN_C volatile LANEMODEL_OUTPUT_ST *p_1_ZOP_Main_LANEMODEL_OUTPUT_ST_4;
EXTERN_C volatile HWA_TARGETOBJECT_OUTPUT_ST
  *p_1_ZOP_Main_HWA_TARGETOBJECT_OUTPUT_ST_5;
EXTERN_C volatile ACC_Status_ST *p_1_ZOP_Main_ACC_Status_ST_6;
EXTERN_C volatile real32_T *p_1_ZOP_Main_real32_T_7;
EXTERN_C volatile ATS_PO_ST *p_1_ZOP_Main_ATS_PO_ST_8;
EXTERN_C volatile real32_T *p_1_ZOP_Main_real32_T_9;
EXTERN_C volatile MapInfo_ST *p_1_ZOP_Main_MapInfo_ST_10;
EXTERN_C volatile Light_Info_ST *p_1_ZOP_Main_Light_Info_ST_11;
EXTERN_C volatile real_T *p_1_ZOP_Main_real_T_12;
EXTERN_C volatile ZOP_HMI_REQ *p_1_ZOP_Main_ZOP_HMI_REQ_13;
EXTERN_C volatile real32_T *p_2_ZOP_Main_real32_T_0;
EXTERN_C volatile int8_T *p_2_ZOP_Main_int8_T_1;
EXTERN_C volatile uint8_T *p_2_ZOP_Main_uint8_T_2;
EXTERN_C volatile LKS_Status_ST *p_2_ZOP_Main_LKS_Status_ST_3;
EXTERN_C volatile ZOP2HMI *p_2_ZOP_Main_ZOP2HMI_4;
EXTERN_C volatile real_T *p_2_ZOP_Main_real_T_5;
EXTERN_C volatile real32_T *p_2_ZOP_Main_real32_T_6;
EXTERN_C volatile int16_T *p_2_ZOP_Main_int16_T_7;
EXTERN_C volatile boolean_T *p_2_ZOP_Main_boolean_T_8;
EXTERN_C volatile int8_T *p_2_ZOP_Main_int8_T_9;
EXTERN_C volatile real_T *p_3_ZOP_Main_real_T_0;
EXTERN_C volatile real32_T *p_3_ZOP_Main_real32_T_1;
EXTERN_C volatile int32_T *p_3_ZOP_Main_int32_T_2;
EXTERN_C volatile int8_T *p_3_ZOP_Main_int8_T_3;
EXTERN_C volatile boolean_T *p_3_ZOP_Main_boolean_T_4;
EXTERN_C volatile int8_T *p_3_ZOP_Main_int8_T_5;
EXTERN_C volatile uint8_T *p_3_ZOP_Main_uint8_T_6;
EXTERN_C volatile ZOP2ACC *p_4_ZOP_Main_ZOP2ACC_0;
EXTERN_C volatile ZOP2LCK *p_4_ZOP_Main_ZOP2LCK_1;
EXTERN_C volatile ZOP2TJA *p_4_ZOP_Main_ZOP2TJA_2;
EXTERN_C volatile int8_T *p_4_ZOP_Main_int8_T_3;
EXTERN_C volatile boolean_T *p_4_ZOP_Main_boolean_T_4;
EXTERN_C volatile ZOP2HMI *p_4_ZOP_Main_ZOP2HMI_5;

/*
 *  Declare the general function for TRC pointer initialization
 */
EXTERN_C void ZOP_Main_rti_init_trc_pointers(void);

#endif                                 /* RTI_HEADER_ZOP_Main_trc_ptr_h_ */
