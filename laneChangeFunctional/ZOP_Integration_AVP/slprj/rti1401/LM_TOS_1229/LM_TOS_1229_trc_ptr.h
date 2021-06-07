/*********************** dSPACE target specific file *************************

   Header file LM_TOS_1229_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Sun Jan  3 16:54:22 2021

   Copyright 2021, dSPACE GmbH. All rights reserved.

 *****************************************************************************/
#ifndef RTI_HEADER_LM_TOS_1229_trc_ptr_h_
#define RTI_HEADER_LM_TOS_1229_trc_ptr_h_

/* Include the model header file. */
#include "LM_TOS_1229.h"
#include "LM_TOS_1229_private.h"
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
EXTERN_C volatile FUS_OUTOBJ_LIST_ST *p_0_LM_TOS_1229_FUS_OUTOBJ_LIST_ST_0;
EXTERN_C volatile TARGETOBJECTS_ST_adp *p_0_LM_TOS_1229_TARGETOBJECTS_ST_adp_1;
EXTERN_C volatile SEGMENTS_ST_adp *p_0_LM_TOS_1229_SEGMENTS_ST_adp_2;
EXTERN_C volatile LM_LANE_ST *p_0_LM_TOS_1229_LM_LANE_ST_3;
EXTERN_C volatile HMI_OUTPUT_ST_APT *p_0_LM_TOS_1229_HMI_OUTPUT_ST_APT_4;
EXTERN_C volatile FUS_OBJ_DATA_ST *p_0_LM_TOS_1229_FUS_OBJ_DATA_ST_5;
EXTERN_C volatile LANES_BAS_INFO_ST_adt *p_0_LM_TOS_1229_LANES_BAS_INFO_ST_adt_6;
EXTERN_C volatile TARGETOBJECT *p_0_LM_TOS_1229_TARGETOBJECT_7;
EXTERN_C volatile SEGMENT *p_0_LM_TOS_1229_SEGMENT_8;
EXTERN_C volatile real32_T *p_0_LM_TOS_1229_real32_T_9;
EXTERN_C volatile uint8_T *p_0_LM_TOS_1229_uint8_T_10;
EXTERN_C volatile struct_eln0t1jxxLshCuJyjHYAu
  *p_2_LM_TOS_1229_struct_eln0t1jxxLshCuJyjHYAu_0;
EXTERN_C volatile HWA_TARGETOBJECT_OUTPUT_ST
  *p_2_LM_TOS_1229_HWA_TARGETOBJECT_OUTPUT_ST_1;
EXTERN_C volatile struct_1oMhPRdySKj2NQxq9SQXLD
  *p_2_LM_TOS_1229_struct_1oMhPRdySKj2NQxq9SQXLD_2;
EXTERN_C volatile NARROW_LANE_SUPPORT_OUTPUT_ST
  *p_2_LM_TOS_1229_NARROW_LANE_SUPPORT_OUTPUT_ST_3;
EXTERN_C volatile real_T *p_2_LM_TOS_1229_real_T_4;
EXTERN_C volatile int32_T *p_3_LM_TOS_1229_int32_T_0;

/*
 *  Declare the general function for TRC pointer initialization
 */
EXTERN_C void LM_TOS_1229_rti_init_trc_pointers(void);

#endif                                 /* RTI_HEADER_LM_TOS_1229_trc_ptr_h_ */
