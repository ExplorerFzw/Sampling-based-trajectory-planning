/*********************** dSPACE target specific file *************************

   Header file fusionAlg_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Tue Dec 29 14:49:17 2020

   Copyright 2020, dSPACE GmbH. All rights reserved.

 *****************************************************************************/
#ifndef RTI_HEADER_fusionAlg_trc_ptr_h_
#define RTI_HEADER_fusionAlg_trc_ptr_h_

/* Include the model header file. */
#include "fusionAlg.h"
#include "fusionAlg_private.h"
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
EXTERN_C volatile FUS_VISION_OBJ_DATA_ST *p_0_fusionAlg_FUS_VISION_OBJ_DATA_ST_0;
EXTERN_C volatile FUS_VISION_OBJ_LIST_ST *p_0_fusionAlg_FUS_VISION_OBJ_LIST_ST_1;
EXTERN_C volatile FUS_OBJALG_ST *p_0_fusionAlg_FUS_OBJALG_ST_2;
EXTERN_C volatile FUS_RADAR_DATA_ST *p_0_fusionAlg_FUS_RADAR_DATA_ST_3;
EXTERN_C volatile FUS_RADOBJ_LIST_ST *p_0_fusionAlg_FUS_RADOBJ_LIST_ST_4;
EXTERN_C volatile FUS_EYEQ4_LANE_DATA_ST *p_0_fusionAlg_FUS_EYEQ4_LANE_DATA_ST_5;
EXTERN_C volatile FUS_EYEQ4_ROADEDGE_DATA_ST
  *p_0_fusionAlg_FUS_EYEQ4_ROADEDGE_DATA_ST_6;
EXTERN_C volatile OBJECT_ST *p_0_fusionAlg_OBJECT_ST_7;
EXTERN_C volatile FUS_OBJ_DATA_ST *p_0_fusionAlg_FUS_OBJ_DATA_ST_8;
EXTERN_C volatile FUS_EYEQ4_LANE_ADJA_ST *p_0_fusionAlg_FUS_EYEQ4_LANE_ADJA_ST_9;
EXTERN_C volatile Adja_Prot *p_0_fusionAlg_Adja_Prot_10;
EXTERN_C volatile Host_Prot *p_0_fusionAlg_Host_Prot_11;
EXTERN_C volatile FUS_EYEQ4_LANE_PROT_ST
  *p_0_fusionAlg_FUS_EYEQ4_LANE_PROT_ST_12;
EXTERN_C volatile FUS_EYEQ4_ROADEDGE_PROT_ST
  *p_0_fusionAlg_FUS_EYEQ4_ROADEDGE_PROT_ST_13;
EXTERN_C volatile FUS_RADAR_STATE_ST *p_0_fusionAlg_FUS_RADAR_STATE_ST_14;
EXTERN_C volatile FUS_VEHICLE_DATA_ST *p_0_fusionAlg_FUS_VEHICLE_DATA_ST_15;
EXTERN_C volatile FUS_EYEQ4_LANE_PROT_HEADER_ST
  *p_0_fusionAlg_FUS_EYEQ4_LANE_PROT_HEADER_ST_16;
EXTERN_C volatile FUS_VISOBJ_UINT8_RESERVED_ST
  *p_0_fusionAlg_FUS_VISOBJ_UINT8_RESERVED_ST_17;
EXTERN_C volatile FUS_VISOBJ_UINT32_RESERVED_ST
  *p_0_fusionAlg_FUS_VISOBJ_UINT32_RESERVED_ST_18;
EXTERN_C volatile FUS_UINT32_RESERVED_ST
  *p_0_fusionAlg_FUS_UINT32_RESERVED_ST_19;
EXTERN_C volatile uint32_T *p_0_fusionAlg_uint32_T_20;
EXTERN_C volatile real32_T *p_0_fusionAlg_real32_T_21;
EXTERN_C volatile uint16_T *p_0_fusionAlg_uint16_T_22;
EXTERN_C volatile real_T *p_2_fusionAlg_real_T_0;
EXTERN_C volatile real32_T *p_2_fusionAlg_real32_T_1;
EXTERN_C volatile uint32_T *p_2_fusionAlg_uint32_T_2;
EXTERN_C volatile int16_T *p_2_fusionAlg_int16_T_3;
EXTERN_C volatile uint16_T *p_2_fusionAlg_uint16_T_4;
EXTERN_C volatile uint8_T *p_2_fusionAlg_uint8_T_5;

/*
 *  Declare the general function for TRC pointer initialization
 */
EXTERN_C void fusionAlg_rti_init_trc_pointers(void);

#endif                                 /* RTI_HEADER_fusionAlg_trc_ptr_h_ */
