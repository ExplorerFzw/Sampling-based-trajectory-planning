/*********************** dSPACE target specific file *************************

   Header file fusionAlg_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Mon Nov 30 14:31:24 2020

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
EXTERN_C volatile FUS_OBJALG_ST *p_0_fusionAlg_FUS_OBJALG_ST_0;
EXTERN_C volatile FUS_RADAR_DATA_ST *p_0_fusionAlg_FUS_RADAR_DATA_ST_1;
EXTERN_C volatile FUS_RADOBJ_LIST_ST *p_0_fusionAlg_FUS_RADOBJ_LIST_ST_2;
EXTERN_C volatile FUS_OBJ_DATA_ST *p_0_fusionAlg_FUS_OBJ_DATA_ST_3;
EXTERN_C volatile FUS_RADAR_STATE_ST *p_0_fusionAlg_FUS_RADAR_STATE_ST_4;
EXTERN_C volatile FUS_VEHICLE_DATA_ST *p_0_fusionAlg_FUS_VEHICLE_DATA_ST_5;
EXTERN_C volatile FUS_UINT32_RESERVED_ST *p_0_fusionAlg_FUS_UINT32_RESERVED_ST_6;
EXTERN_C volatile real32_T *p_0_fusionAlg_real32_T_7;
EXTERN_C volatile Radar410_Info_ST *p_1_fusionAlg_Radar410_Info_ST_0;
EXTERN_C volatile real32_T *p_1_fusionAlg_real32_T_1;
EXTERN_C volatile COM_VEHBUS_ST *p_1_fusionAlg_COM_VEHBUS_ST_2;
EXTERN_C volatile real_T *p_2_fusionAlg_real_T_0;
EXTERN_C volatile real32_T *p_2_fusionAlg_real32_T_1;
EXTERN_C volatile uint32_T *p_2_fusionAlg_uint32_T_2;
EXTERN_C volatile uint8_T *p_2_fusionAlg_uint8_T_3;
EXTERN_C volatile FUS_OBJ_OUTPUT_ST *p_4_fusionAlg_FUS_OBJ_OUTPUT_ST_0;

/*
 *  Declare the general function for TRC pointer initialization
 */
EXTERN_C void fusionAlg_rti_init_trc_pointers(void);

#endif                                 /* RTI_HEADER_fusionAlg_trc_ptr_h_ */
