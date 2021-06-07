/*********************** dSPACE target specific file *************************

   Header file LCK_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1401 7.12 (02-May-2019)
   Wed Feb 10 09:08:45 2021

   Copyright 2021, dSPACE GmbH. All rights reserved.

 *****************************************************************************/
#ifndef RTI_HEADER_LCK_trc_ptr_h_
#define RTI_HEADER_LCK_trc_ptr_h_

/* Include the model header file. */
#include "LCK.h"
#include "LCK_private.h"
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
EXTERN_C volatile real_T *p_0_LCK_real_T_0;
EXTERN_C volatile LatCtrl_LCK_LanSigInputs_t
  *p_0_LCK_LatCtrl_LCK_LanSigInputs_t_1;
EXTERN_C volatile real_T *p_0_LCK_real_T_2;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_3;
EXTERN_C volatile uint16_T *p_0_LCK_uint16_T_4;
EXTERN_C volatile uint8_T *p_0_LCK_uint8_T_5;
EXTERN_C volatile boolean_T *p_0_LCK_boolean_T_6;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_7;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_8;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_9;
EXTERN_C volatile boolean_T *p_0_LCK_boolean_T_10;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_11;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_12;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_13;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_14;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_15;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_16;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_17;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_18;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_19;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_20;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_21;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_22;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_23;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_24;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_25;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_26;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_27;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_28;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_29;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_30;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_31;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_32;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_33;
EXTERN_C volatile real_T *p_0_LCK_real_T_34;
EXTERN_C volatile real_T *p_0_LCK_real_T_35;
EXTERN_C volatile real_T *p_0_LCK_real_T_36;
EXTERN_C volatile real_T *p_0_LCK_real_T_37;
EXTERN_C volatile real_T *p_0_LCK_real_T_38;
EXTERN_C volatile real_T *p_0_LCK_real_T_39;
EXTERN_C volatile real_T *p_0_LCK_real_T_40;
EXTERN_C volatile real_T *p_0_LCK_real_T_41;
EXTERN_C volatile real_T *p_0_LCK_real_T_42;
EXTERN_C volatile real_T *p_0_LCK_real_T_43;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_44;
EXTERN_C volatile boolean_T *p_0_LCK_boolean_T_45;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_46;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_47;
EXTERN_C volatile boolean_T *p_0_LCK_boolean_T_48;
EXTERN_C volatile real32_T *p_0_LCK_real32_T_49;
EXTERN_C volatile boolean_T *p_0_LCK_boolean_T_50;
EXTERN_C volatile LatCtrl_LCK_LanSigInputs_t
  *p_1_LCK_LatCtrl_LCK_LanSigInputs_t_0;
EXTERN_C volatile LatCtrl_LCK_TrackSigInputs_t
  *p_1_LCK_LatCtrl_LCK_TrackSigInputs_t_1;
EXTERN_C volatile LatCtrl_LCK_VehSigInputs_t
  *p_1_LCK_LatCtrl_LCK_VehSigInputs_t_2;
EXTERN_C volatile real32_T *p_1_LCK_real32_T_3;
EXTERN_C volatile real_T *p_1_LCK_real_T_4;
EXTERN_C volatile FUS_LANE_OUTPUT_ST *p_1_LCK_FUS_LANE_OUTPUT_ST_5;
EXTERN_C volatile real_T *p_1_LCK_real_T_6;
EXTERN_C volatile AVP_OUTPUT_ST *p_1_LCK_AVP_OUTPUT_ST_7;
EXTERN_C volatile real_T *p_2_LCK_real_T_0;
EXTERN_C volatile real32_T *p_2_LCK_real32_T_1;
EXTERN_C volatile uint8_T *p_2_LCK_uint8_T_2;
EXTERN_C volatile struct_mangFo2BVnlYQ9swmRAj7G
  *p_2_LCK_struct_mangFo2BVnlYQ9swmRAj7G_3;
EXTERN_C volatile real_T *p_2_LCK_real_T_4;
EXTERN_C volatile real32_T *p_2_LCK_real32_T_5;
EXTERN_C volatile uint32_T *p_2_LCK_uint32_T_6;
EXTERN_C volatile uint16_T *p_2_LCK_uint16_T_7;
EXTERN_C volatile boolean_T *p_2_LCK_boolean_T_8;
EXTERN_C volatile uint8_T *p_2_LCK_uint8_T_9;
EXTERN_C volatile real_T *p_3_LCK_real_T_0;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_1;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_2;
EXTERN_C volatile boolean_T *p_3_LCK_boolean_T_3;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_4;
EXTERN_C volatile boolean_T *p_3_LCK_boolean_T_5;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_6;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_7;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_8;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_9;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_10;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_11;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_12;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_13;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_14;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_15;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_16;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_17;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_18;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_19;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_20;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_21;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_22;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_23;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_24;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_25;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_26;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_27;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_28;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_29;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_30;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_31;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_32;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_33;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_34;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_35;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_36;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_37;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_38;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_39;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_40;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_41;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_42;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_43;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_44;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_45;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_46;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_47;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_48;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_49;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_50;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_51;
EXTERN_C volatile real_T *p_3_LCK_real_T_52;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_53;
EXTERN_C volatile real_T *p_3_LCK_real_T_54;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_55;
EXTERN_C volatile real_T *p_3_LCK_real_T_56;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_57;
EXTERN_C volatile real_T *p_3_LCK_real_T_58;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_59;
EXTERN_C volatile real_T *p_3_LCK_real_T_60;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_61;
EXTERN_C volatile real_T *p_3_LCK_real_T_62;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_63;
EXTERN_C volatile real_T *p_3_LCK_real_T_64;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_65;
EXTERN_C volatile real_T *p_3_LCK_real_T_66;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_67;
EXTERN_C volatile real_T *p_3_LCK_real_T_68;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_69;
EXTERN_C volatile real_T *p_3_LCK_real_T_70;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_71;
EXTERN_C volatile real_T *p_3_LCK_real_T_72;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_73;
EXTERN_C volatile real_T *p_3_LCK_real_T_74;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_75;
EXTERN_C volatile real32_T *p_3_LCK_real32_T_76;
EXTERN_C volatile uint8_T *p_3_LCK_uint8_T_77;
EXTERN_C volatile real32_T *p_4_LCK_real32_T_0;
EXTERN_C volatile HMI_Lateral_t *p_4_LCK_HMI_Lateral_t_1;
EXTERN_C volatile real32_T *p_4_LCK_real32_T_2;

/*
 *  Declare the general function for TRC pointer initialization
 */
EXTERN_C void LCK_rti_init_trc_pointers(void);

#endif                                 /* RTI_HEADER_LCK_trc_ptr_h_ */
