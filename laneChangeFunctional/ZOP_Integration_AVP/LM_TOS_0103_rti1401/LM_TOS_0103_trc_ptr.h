/*********************** dSPACE target specific file *************************

   Header file LM_TOS_0103_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Sun Jan  3 17:18:15 2021

   Copyright 2021, dSPACE GmbH. All rights reserved.

 *****************************************************************************/
#ifndef RTI_HEADER_LM_TOS_0103_trc_ptr_h_
#define RTI_HEADER_LM_TOS_0103_trc_ptr_h_

/* Include the model header file. */
#include "LM_TOS_0103.h"
#include "LM_TOS_0103_private.h"
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
EXTERN_C volatile FUS_OUTOBJ_LIST_ST *p_0_LM_TOS_0103_FUS_OUTOBJ_LIST_ST_0;
EXTERN_C volatile TARGETOBJECTS_ST_adp *p_0_LM_TOS_0103_TARGETOBJECTS_ST_adp_1;
EXTERN_C volatile SEGMENTS_ST_adp *p_0_LM_TOS_0103_SEGMENTS_ST_adp_2;
EXTERN_C volatile LM_LANE_ST *p_0_LM_TOS_0103_LM_LANE_ST_3;
EXTERN_C volatile HWA_TARGETOBJECT_OUTPUT_ST
  *p_0_LM_TOS_0103_HWA_TARGETOBJECT_OUTPUT_ST_4;
EXTERN_C volatile HMI_OUTPUT_ST_APT *p_0_LM_TOS_0103_HMI_OUTPUT_ST_APT_5;
EXTERN_C volatile HMI_DISPLAY_ARRAY_ST *p_0_LM_TOS_0103_HMI_DISPLAY_ARRAY_ST_6;
EXTERN_C volatile FUS_OBJ_DATA_ST *p_0_LM_TOS_0103_FUS_OBJ_DATA_ST_7;
EXTERN_C volatile LANES_BAS_INFO_ST_adt *p_0_LM_TOS_0103_LANES_BAS_INFO_ST_adt_8;
EXTERN_C volatile NARROW_LANE_SUPPORT_OUTPUT_ST
  *p_0_LM_TOS_0103_NARROW_LANE_SUPPORT_OUTPUT_ST_9;
EXTERN_C volatile TARGETOBJECT *p_0_LM_TOS_0103_TARGETOBJECT_10;
EXTERN_C volatile SEGMENT *p_0_LM_TOS_0103_SEGMENT_11;
EXTERN_C volatile HMI_DISPLAY_ST *p_0_LM_TOS_0103_HMI_DISPLAY_ST_12;
EXTERN_C volatile real_T *p_0_LM_TOS_0103_real_T_13;
EXTERN_C volatile real32_T *p_0_LM_TOS_0103_real32_T_14;
EXTERN_C volatile uint16_T *p_0_LM_TOS_0103_uint16_T_15;
EXTERN_C volatile uint8_T *p_0_LM_TOS_0103_uint8_T_16;
EXTERN_C volatile real_T *p_1_LM_TOS_0103_real_T_0;
EXTERN_C volatile int_T *p_2_LM_TOS_0103_int_T_0;

/*
 *  Declare the general function for TRC pointer initialization
 */
EXTERN_C void LM_TOS_0103_rti_init_trc_pointers(void);

#endif                                 /* RTI_HEADER_LM_TOS_0103_trc_ptr_h_ */
