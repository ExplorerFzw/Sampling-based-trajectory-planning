/*********************** dSPACE target specific file *************************

   Header file AccTarSel_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Wed Dec  2 15:41:53 2020

   Copyright 2020, dSPACE GmbH. All rights reserved.

 *****************************************************************************/
#ifndef RTI_HEADER_AccTarSel_trc_ptr_h_
#define RTI_HEADER_AccTarSel_trc_ptr_h_

/* Include the model header file. */
#include "AccTarSel.h"
#include "AccTarSel_private.h"
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
EXTERN_C volatile FUS_OBJDATA_ST *p_0_AccTarSel_FUS_OBJDATA_ST_0;
EXTERN_C volatile ATS_INTERNAL_OBJINFO_ST
  *p_0_AccTarSel_ATS_INTERNAL_OBJINFO_ST_1;
EXTERN_C volatile Obj_Data *p_0_AccTarSel_Obj_Data_2;
EXTERN_C volatile OBJDATA_ST *p_0_AccTarSel_OBJDATA_ST_3;
EXTERN_C volatile ATS_OBJINFO_ST *p_0_AccTarSel_ATS_OBJINFO_ST_4;
EXTERN_C volatile ATS_PO_ST *p_0_AccTarSel_ATS_PO_ST_5;
EXTERN_C volatile NET_DRVACTION_ST *p_0_AccTarSel_NET_DRVACTION_ST_6;
EXTERN_C volatile AST_INFO_ST *p_0_AccTarSel_AST_INFO_ST_7;
EXTERN_C volatile real32_T *p_0_AccTarSel_real32_T_8;
EXTERN_C volatile int32_T *p_0_AccTarSel_int32_T_9;
EXTERN_C volatile boolean_T *p_0_AccTarSel_boolean_T_10;
EXTERN_C volatile OBJDATA_ST *p_0_AccTarSel_OBJDATA_ST_11;
EXTERN_C volatile real32_T *p_0_AccTarSel_real32_T_12;
EXTERN_C volatile boolean_T *p_0_AccTarSel_boolean_T_13;
EXTERN_C volatile COM_VEHBUS_ST *p_1_AccTarSel_COM_VEHBUS_ST_0;
EXTERN_C volatile FUS_OBJ_OUTPUT_ST *p_1_AccTarSel_FUS_OBJ_OUTPUT_ST_1;
EXTERN_C volatile VSI_VEHSTATE_ST *p_1_AccTarSel_VSI_VEHSTATE_ST_2;
EXTERN_C volatile SYS_INFO_ST *p_1_AccTarSel_SYS_INFO_ST_3;
EXTERN_C volatile FUS_OBJDATA_ST *p_1_AccTarSel_FUS_OBJDATA_ST_4;
EXTERN_C volatile NET_DRVACTION_ST *p_1_AccTarSel_NET_DRVACTION_ST_5;
EXTERN_C volatile Radar410_Info_ST *p_1_AccTarSel_Radar410_Info_ST_6;
EXTERN_C volatile real_T *p_2_AccTarSel_real_T_0;
EXTERN_C volatile real32_T *p_2_AccTarSel_real32_T_1;
EXTERN_C volatile boolean_T *p_2_AccTarSel_boolean_T_2;
EXTERN_C volatile ATS_INTERNAL_OBJINFO_ST
  *p_2_AccTarSel_ATS_INTERNAL_OBJINFO_ST_3;
EXTERN_C volatile ATS_OBJINFO_ST *p_2_AccTarSel_ATS_OBJINFO_ST_4;
EXTERN_C volatile ATS_OBJINFO_ST *p_2_AccTarSel_ATS_OBJINFO_ST_5;
EXTERN_C volatile ATS_PO_ST *p_2_AccTarSel_ATS_PO_ST_6;
EXTERN_C volatile real_T *p_2_AccTarSel_real_T_7;
EXTERN_C volatile int32_T *p_2_AccTarSel_int32_T_8;
EXTERN_C volatile real32_T *p_2_AccTarSel_real32_T_9;
EXTERN_C volatile uint32_T *p_2_AccTarSel_uint32_T_10;
EXTERN_C volatile boolean_T *p_2_AccTarSel_boolean_T_11;
EXTERN_C volatile real32_T *p_2_AccTarSel_real32_T_12;
EXTERN_C volatile real32_T *p_2_AccTarSel_real32_T_13;
EXTERN_C volatile real32_T *p_2_AccTarSel_real32_T_14;
EXTERN_C volatile real32_T *p_2_AccTarSel_real32_T_15;
EXTERN_C volatile real32_T *p_2_AccTarSel_real32_T_16;
EXTERN_C volatile real32_T *p_2_AccTarSel_real32_T_17;
EXTERN_C volatile real32_T *p_2_AccTarSel_real32_T_18;
EXTERN_C volatile real32_T *p_2_AccTarSel_real32_T_19;
EXTERN_C volatile ATS_INTERNAL_OBJINFO_ST
  *p_3_AccTarSel_ATS_INTERNAL_OBJINFO_ST_0;
EXTERN_C volatile ATS_PO_ST *p_3_AccTarSel_ATS_PO_ST_1;
EXTERN_C volatile real32_T *p_3_AccTarSel_real32_T_2;
EXTERN_C volatile int8_T *p_3_AccTarSel_int8_T_3;
EXTERN_C volatile uint8_T *p_3_AccTarSel_uint8_T_4;
EXTERN_C volatile boolean_T *p_3_AccTarSel_boolean_T_5;
EXTERN_C volatile ACC_LGTCTRL_ST *p_4_AccTarSel_ACC_LGTCTRL_ST_0;
EXTERN_C volatile ATS_PO_ST *p_4_AccTarSel_ATS_PO_ST_1;

/*
 *  Declare the general function for TRC pointer initialization
 */
EXTERN_C void AccTarSel_rti_init_trc_pointers(void);

#endif                                 /* RTI_HEADER_AccTarSel_trc_ptr_h_ */
