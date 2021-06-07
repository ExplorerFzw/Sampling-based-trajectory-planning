/*********************** dSPACE target specific file *************************

   Header file AVP_Main_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Wed Mar 17 16:04:08 2021

   Copyright 2021, dSPACE GmbH. All rights reserved.

 *****************************************************************************/
#ifndef RTI_HEADER_AVP_Main_trc_ptr_h_
#define RTI_HEADER_AVP_Main_trc_ptr_h_

/* Include the model header file. */
#include "AVP_Main.h"
#include "AVP_Main_private.h"
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
EXTERN_C volatile uint8_T *p_0_AVP_Main_uint8_T_0;
EXTERN_C volatile boolean_T *p_0_AVP_Main_boolean_T_1;
EXTERN_C volatile real_T *p_2_AVP_Main_real_T_0;
EXTERN_C volatile uint8_T *p_2_AVP_Main_uint8_T_1;

/*
 *  Declare the general function for TRC pointer initialization
 */
EXTERN_C void AVP_Main_rti_init_trc_pointers(void);

#endif                                 /* RTI_HEADER_AVP_Main_trc_ptr_h_ */
