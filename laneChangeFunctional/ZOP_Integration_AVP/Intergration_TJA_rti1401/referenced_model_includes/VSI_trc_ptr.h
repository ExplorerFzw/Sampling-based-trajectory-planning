/*********************** dSPACE target specific file *************************

   Header file VSI_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Mon Dec 28 15:32:56 2020

   Copyright 2020, dSPACE GmbH. All rights reserved.

 *****************************************************************************/
#ifndef RTI_HEADER_VSI_trc_ptr_h_
#define RTI_HEADER_VSI_trc_ptr_h_

/* Include the model header file. */
#include "VSI.h"
#include "VSI_private.h"
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
EXTERN_C volatile COM_VEHDYN_ST *p_0_VSI_COM_VEHDYN_ST_0;
EXTERN_C volatile VSI_VEHSTATE_ST *p_0_VSI_VSI_VEHSTATE_ST_1;
EXTERN_C volatile real_T *p_0_VSI_real_T_2;
EXTERN_C volatile real32_T *p_0_VSI_real32_T_3;
EXTERN_C volatile boolean_T *p_0_VSI_boolean_T_4;
EXTERN_C volatile real_T *p_2_VSI_real_T_0;
EXTERN_C volatile real32_T *p_2_VSI_real32_T_1;
EXTERN_C volatile real32_T *p_3_VSI_real32_T_0;

/*
 *  Declare the general function for TRC pointer initialization
 */
EXTERN_C void VSI_rti_init_trc_pointers(void);

#endif                                 /* RTI_HEADER_VSI_trc_ptr_h_ */
