/*********************** dSPACE target specific file *************************

   Header file VLC_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Thu Dec 10 09:16:22 2020

   Copyright 2020, dSPACE GmbH. All rights reserved.

 *****************************************************************************/
#ifndef RTI_HEADER_VLC_trc_ptr_h_
#define RTI_HEADER_VLC_trc_ptr_h_

/* Include the model header file. */
#include "VLC.h"
#include "VLC_private.h"
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
EXTERN_C volatile COM_PROPACT_ST *p_0_VLC_COM_PROPACT_ST_0;
EXTERN_C volatile real_T *p_0_VLC_real_T_1;
EXTERN_C volatile real32_T *p_0_VLC_real32_T_2;
EXTERN_C volatile boolean_T *p_0_VLC_boolean_T_3;
EXTERN_C volatile real_T *p_2_VLC_real_T_0;
EXTERN_C volatile real32_T *p_2_VLC_real32_T_1;
EXTERN_C volatile uint32_T *p_2_VLC_uint32_T_2;
EXTERN_C volatile real_T *p_3_VLC_real_T_0;
EXTERN_C volatile real32_T *p_3_VLC_real32_T_1;
EXTERN_C volatile int8_T *p_3_VLC_int8_T_2;
EXTERN_C volatile uint8_T *p_3_VLC_uint8_T_3;

/*
 *  Declare the general function for TRC pointer initialization
 */
EXTERN_C void VLC_rti_init_trc_pointers(void);

#endif                                 /* RTI_HEADER_VLC_trc_ptr_h_ */
