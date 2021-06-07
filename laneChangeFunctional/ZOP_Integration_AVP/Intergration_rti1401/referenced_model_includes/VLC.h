/*
 * Code generation for system model 'VLC'
 * For more details, see corresponding source file VLC.c
 *
 */

#ifndef RTW_HEADER_VLC_h_
#define RTW_HEADER_VLC_h_
#include <math.h>
#include <string.h>
#ifndef VLC_COMMON_INCLUDES_
# define VLC_COMMON_INCLUDES_
#include <rti_assert.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* VLC_COMMON_INCLUDES_ */

#include "VLC_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for model 'VLC' */
#ifndef VLC_MDLREF_HIDE_CHILD_

typedef struct {
  COM_PROPACT_ST COM_PropAct_st;       /* '<S1>/Bus Creator2' */
  real_T Memory1;                      /* '<S5>/Memory1' */
  real_T Memory;                       /* '<S5>/Memory' */
  real_T DC_Enable;                    /* '<S5>/Actuator_Choice' */
  real_T EC_Enable;                    /* '<S5>/Actuator_Choice' */
  real32_T Memory_j;                   /* '<Root>/Memory' */
  real32_T Product;                    /* '<Root>/Product' */
  real32_T Product1;                   /* '<Root>/Product1' */
  real32_T Memory_k;                   /* '<S12>/Memory' */
  real32_T Delay1;                     /* '<S12>/Delay1' */
  real32_T Memory2;                    /* '<S11>/Memory2' */
  real32_T Abs;                        /* '<S14>/Abs' */
  real32_T Merge;                      /* '<S14>/Merge' */
  real32_T Max;                        /* '<S13>/Max' */
  real32_T filtFactor;                 /* '<S13>/Divide' */
  real32_T Multiply;                   /* '<S13>/Multiply' */
  real32_T Add;                        /* '<S13>/Add' */
  real32_T Memory1_p;                  /* '<S11>/Memory1' */
  real32_T Multiply1;                  /* '<S13>/Multiply1' */
  real32_T Add1;                       /* '<S13>/Add1' */
  real32_T Add_p;                      /* '<S11>/Add' */
  real32_T Multiply_m;                 /* '<S11>/Multiply' */
  real32_T MinMax;                     /* '<S11>/MinMax' */
  real32_T Gain;                       /* '<S11>/Gain' */
  real32_T Max_h;                      /* '<S11>/Max' */
  real32_T Add1_j;                     /* '<S11>/Add1' */
  real32_T Switch5;                    /* '<S12>/Switch5' */
  real32_T Max_p;                      /* '<S17>/Max' */
  real32_T filtFactor_l;               /* '<S17>/Divide' */
  real32_T Multiply_g;                 /* '<S17>/Multiply' */
  real32_T Add_h;                      /* '<S17>/Add' */
  real32_T Memory2_n;                  /* '<S12>/Memory2' */
  real32_T Multiply1_a;                /* '<S17>/Multiply1' */
  real32_T Add1_a;                     /* '<S17>/Add1' */
  real32_T Sum;                        /* '<Root>/Sum' */
  real32_T Fxtar_merge;                /* '<S5>/Fxtar_merge' */
  real32_T Max_j;                      /* '<S24>/Max' */
  real32_T filtFactor_g;               /* '<S24>/Divide' */
  real32_T Multiply_i;                 /* '<S24>/Multiply' */
  real32_T Add_e;                      /* '<S24>/Add' */
  real32_T Memory2_d;                  /* '<S5>/Memory2' */
  real32_T Multiply1_h;                /* '<S24>/Multiply1' */
  real32_T Add1_o;                     /* '<S24>/Add1' */
  real32_T Delay1_d;                   /* '<S27>/Delay1' */
  real32_T Switch;                     /* '<S26>/Switch' */
  real32_T Switch_j;                   /* '<S25>/Switch' */
  real32_T Switch2;                    /* '<S25>/Switch2' */
  real32_T Divide;                     /* '<S25>/Divide' */
  real32_T MinMax1;                    /* '<S25>/MinMax1' */
  real32_T MinMax_a;                   /* '<S25>/MinMax' */
  real32_T Switch3;                    /* '<S25>/Switch3' */
  real32_T Switch4;                    /* '<S25>/Switch4' */
  real32_T Divide_f;                   /* '<S5>/Divide' */
  real32_T Multiply_ot;                /* '<S27>/Multiply' */
  real32_T Add1_k;                     /* '<S27>/Add1' */
  real32_T Max_c;                      /* '<S27>/Max' */
  real32_T Add1_l;                     /* '<S12>/Add1' */
  real32_T Max1;                       /* '<S12>/Max1' */
  real32_T VLCState;                   /* '<Root>/VLC_StateMachine' */
  real32_T AxTar_Lim;                  /* '<Root>/VLC_StateMachine' */
  real32_T Gain_e;                     /* '<S16>/Gain' */
  real32_T Max_h1;                     /* '<S16>/Max' */
  real32_T FxTar;                      /* '<S6>/VLC_DriveOff' */
  real32_T P_Kp;                       /* '<S18>/P_Kp' */
  real32_T aKP;                        /* '<S18>/Switch1' */
  real32_T Abs4;                       /* '<S19>/Abs4' */
  real32_T Abs3;                       /* '<S19>/Abs3' */
  real32_T Max_h2;                     /* '<S19>/Max' */
  real32_T Max_b;                      /* '<S22>/Max' */
  real32_T filtFactor_h;               /* '<S22>/Divide' */
  real32_T Multiply_k;                 /* '<S22>/Multiply' */
  real32_T Add_m;                      /* '<S22>/Add' */
  real32_T Memory_d;                   /* '<S19>/Memory' */
  real32_T Multiply1_g;                /* '<S22>/Multiply1' */
  real32_T Add1_h;                     /* '<S22>/Add1' */
  real32_T Add_l;                      /* '<S19>/Add' */
  real32_T Abs1;                       /* '<S19>/Abs1' */
  real32_T Abs2;                       /* '<S19>/Abs2' */
  real32_T Memory1_b;                  /* '<S19>/Memory1' */
  real32_T Product1_o;                 /* '<S19>/Product1' */
  real32_T Product1_m;                 /* '<S18>/Product1' */
  real32_T Multiply_n;                 /* '<S18>/Multiply' */
  real32_T Memory1_n;                  /* '<S18>/Memory1' */
  real32_T Add4;                       /* '<S18>/Add4' */
  real32_T aKI;                        /* '<S18>/Switch2' */
  real32_T Add1_n;                     /* '<S18>/Add1' */
  real32_T aSlope;                     /* '<S18>/Switch' */
  real32_T MathFunction;               /* '<S20>/Math Function' */
  real32_T Product_h;                  /* '<S20>/Product' */
  real32_T Product1_b;                 /* '<S20>/Product1' */
  real32_T Divide_fz;                  /* '<S20>/Divide' */
  real32_T Add2;                       /* '<S18>/Add2' */
  real32_T IGain;                      /* '<S19>/IGain_cal' */
  boolean_T Equal4;                    /* '<S12>/Equal4' */
  boolean_T Equal5;                    /* '<S12>/Equal5' */
  boolean_T AND1;                      /* '<S12>/AND1' */
  boolean_T RelationalOperator;        /* '<S14>/Relational Operator' */
  boolean_T Switch1[2];                /* '<S25>/Switch1' */
  boolean_T Equal;                     /* '<S25>/Equal' */
  boolean_T OR;                        /* '<S25>/OR' */
  boolean_T Equal_l;                   /* '<S26>/Equal' */
  boolean_T Equal_j;                   /* '<S18>/Equal' */
} B_VLC_c_T;

#endif                                 /*VLC_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'VLC' */
#ifndef VLC_MDLREF_HIDE_CHILD_

typedef struct {
  real_T Memory1_PreviousInput;        /* '<S5>/Memory1' */
  real_T Memory_PreviousInput;         /* '<S5>/Memory' */
  real32_T Delay1_DSTATE;              /* '<S12>/Delay1' */
  real32_T Delay1_DSTATE_c;            /* '<S27>/Delay1' */
  real32_T Memory_PreviousInput_l;     /* '<Root>/Memory' */
  real32_T Memory_PreviousInput_e;     /* '<S12>/Memory' */
  real32_T Memory2_PreviousInput;      /* '<S11>/Memory2' */
  real32_T Memory1_PreviousInput_f;    /* '<S11>/Memory1' */
  real32_T Memory2_PreviousInput_j;    /* '<S12>/Memory2' */
  real32_T Memory2_PreviousInput_d;    /* '<S5>/Memory2' */
  real32_T Memory_PreviousInput_k;     /* '<S19>/Memory' */
  real32_T Memory1_PreviousInput_j;    /* '<S19>/Memory1' */
  real32_T Memory1_PreviousInput_e;    /* '<S18>/Memory1' */
  int8_T If_ActiveSubsystem;           /* '<Root>/If' */
  uint8_T icLoad;                      /* '<S12>/Delay1' */
  uint8_T icLoad_g;                    /* '<S27>/Delay1' */
  uint8_T is_active_c3_VLC;            /* '<Root>/VLC_StateMachine' */
  uint8_T is_c3_VLC;                   /* '<Root>/VLC_StateMachine' */
} DW_VLC_f_T;

#endif                                 /*VLC_MDLREF_HIDE_CHILD_*/

/* Zero-crossing (trigger) state for model 'VLC' */
#ifndef VLC_MDLREF_HIDE_CHILD_

typedef struct {
  ZCSigState Delay1_Reset_ZCE;         /* '<S12>/Delay1' */
  ZCSigState Delay1_Reset_ZCE_h;       /* '<S27>/Delay1' */
} ZCE_VLC_T;

#endif                                 /*VLC_MDLREF_HIDE_CHILD_*/

#ifndef VLC_MDLREF_HIDE_CHILD_

/* Parameters (default storage) */
struct P_VLC_T_ {
  real_T Memory1_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S5>/Memory1'
                                        */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S5>/Memory'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S25>/Constant1'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S25>/Constant4'
                                        */
  real_T Constant_Value;               /* Expression: 3
                                        * Referenced by: '<S25>/Constant'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S25>/Constant2'
                                        */
  real_T Efficiency_Value;             /* Expression: 1
                                        * Referenced by: '<S5>/Efficiency'
                                        */
  real32_T Constant1_Value_p;          /* Computed Parameter: Constant1_Value_p
                                        * Referenced by: '<S18>/Constant1'
                                        */
  real32_T Constant2_Value_g;          /* Computed Parameter: Constant2_Value_g
                                        * Referenced by: '<S18>/Constant2'
                                        */
  real32_T Constant_Value_i;           /* Computed Parameter: Constant_Value_i
                                        * Referenced by: '<S22>/Constant'
                                        */
  real32_T Memory_InitialCondition_l;  /* Computed Parameter: Memory_InitialCondition_l
                                        * Referenced by: '<S19>/Memory'
                                        */
  real32_T Memory1_InitialCondition_j; /* Computed Parameter: Memory1_InitialCondition_j
                                        * Referenced by: '<S19>/Memory1'
                                        */
  real32_T Memory1_InitialCondition_p; /* Computed Parameter: Memory1_InitialCondition_p
                                        * Referenced by: '<S18>/Memory1'
                                        */
  real32_T Constant_Value_i0;          /* Computed Parameter: Constant_Value_i0
                                        * Referenced by: '<S18>/Constant'
                                        */
  real32_T Constant4_Value_f;          /* Computed Parameter: Constant4_Value_f
                                        * Referenced by: '<S20>/Constant4'
                                        */
  real32_T Constant6_Value;            /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<S20>/Constant6'
                                        */
  real32_T Constant_Value_g;           /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S15>/Constant'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S16>/Gain'
                                        */
  real32_T Memory_InitialCondition_i;  /* Computed Parameter: Memory_InitialCondition_i
                                        * Referenced by: '<Root>/Memory'
                                        */
  real32_T Memory_InitialCondition_e;  /* Computed Parameter: Memory_InitialCondition_e
                                        * Referenced by: '<S12>/Memory'
                                        */
  real32_T Memory2_InitialCondition;   /* Computed Parameter: Memory2_InitialCondition
                                        * Referenced by: '<S11>/Memory2'
                                        */
  real32_T Constant_Value_j;           /* Computed Parameter: Constant_Value_j
                                        * Referenced by: '<S13>/Constant'
                                        */
  real32_T Memory1_InitialCondition_h; /* Computed Parameter: Memory1_InitialCondition_h
                                        * Referenced by: '<S11>/Memory1'
                                        */
  real32_T Gain_Gain_j;                /* Computed Parameter: Gain_Gain_j
                                        * Referenced by: '<S11>/Gain'
                                        */
  real32_T Constant_Value_c;           /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S17>/Constant'
                                        */
  real32_T Memory2_InitialCondition_h; /* Computed Parameter: Memory2_InitialCondition_h
                                        * Referenced by: '<S12>/Memory2'
                                        */
  real32_T Constant_Value_n;           /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S24>/Constant'
                                        */
  real32_T Memory2_InitialCondition_n; /* Computed Parameter: Memory2_InitialCondition_n
                                        * Referenced by: '<S5>/Memory2'
                                        */
  real32_T MMotMin_Value;              /* Computed Parameter: MMotMin_Value
                                        * Referenced by: '<S5>/MMotMin'
                                        */
  real32_T Switch1_Threshold;          /* Computed Parameter: Switch1_Threshold
                                        * Referenced by: '<S25>/Switch1'
                                        */
  real32_T Switch2_Threshold;          /* Computed Parameter: Switch2_Threshold
                                        * Referenced by: '<S25>/Switch2'
                                        */
  real32_T Switch3_Threshold;          /* Computed Parameter: Switch3_Threshold
                                        * Referenced by: '<S25>/Switch3'
                                        */
  real32_T Constant7_Value;            /* Computed Parameter: Constant7_Value
                                        * Referenced by: '<S12>/Constant7'
                                        */
  uint32_T Delay1_DelayLength;         /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S12>/Delay1'
                                        */
  uint32_T Delay1_DelayLength_g;       /* Computed Parameter: Delay1_DelayLength_g
                                        * Referenced by: '<S27>/Delay1'
                                        */
};

#endif                                 /*VLC_MDLREF_HIDE_CHILD_*/

#ifndef VLC_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_VLC_T {
  const char_T **errorStatus;
};

#endif                                 /*VLC_MDLREF_HIDE_CHILD_*/

#ifndef VLC_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_VLC_T rtm;
} MdlrefDW_VLC_T;

#endif                                 /*VLC_MDLREF_HIDE_CHILD_*/

/* Model block global parameters (default storage) */
extern real32_T rtP_P_A;               /* Variable: P_A
                                        * Referenced by: '<S20>/P_A'
                                        */
extern real32_T rtP_P_Cd;              /* Variable: P_Cd
                                        * Referenced by: '<S20>/P_Cd'
                                        */
extern real32_T rtP_P_Cf;              /* Variable: P_Cf
                                        * Referenced by:
                                        *   '<S6>/P_Cf'
                                        *   '<S18>/P_Cf'
                                        */
extern real32_T rtP_P_DC2ECMargin;     /* Variable: P_DC2ECMargin
                                        * Referenced by: '<S5>/P_DC2ECMargin'
                                        */
extern real32_T rtP_P_Dev4IEnd;        /* Variable: P_Dev4IEnd
                                        * Referenced by: '<S19>/P_Dev4IEnd'
                                        */
extern real32_T rtP_P_DriveOffAdd;     /* Variable: P_DriveOffAdd
                                        * Referenced by: '<S6>/P_DriveOffAdd'
                                        */
extern real32_T rtP_P_Ki;              /* Variable: P_Ki
                                        * Referenced by: '<S19>/P_Ki'
                                        */
extern real32_T rtP_P_Kp;              /* Variable: P_Kp
                                        * Referenced by: '<S18>/P_Kp'
                                        */
extern real32_T rtP_P_SlopeMax;        /* Variable: P_SlopeMax
                                        * Referenced by: '<S16>/P_SlopeMax'
                                        */
extern real32_T rtP_P_SlopeMin;        /* Variable: P_SlopeMin
                                        * Referenced by: '<S14>/P_SlopeMin'
                                        */
extern real32_T rtP_P_StandStillFactEC;/* Variable: P_StandStillFactEC
                                        * Referenced by: '<S6>/P_StandStillFactEC'
                                        */
extern real32_T rtP_P_StsddAxRamp;     /* Variable: P_StsddAxRamp
                                        * Referenced by: '<S27>/P_StsddAxRamp'
                                        */
extern real32_T rtP_P_aDiffaF;         /* Variable: P_aDiffaF
                                        * Referenced by: '<S19>/P_aDiffaF'
                                        */
extern real32_T rtP_P_aStsd;           /* Variable: P_aStsd
                                        * Referenced by:
                                        *   '<S26>/P_aStsd'
                                        *   '<S27>/P_aStsd'
                                        */
extern real32_T rtP_P_dAxMax;          /* Variable: P_dAxMax
                                        * Referenced by: '<Root>/P_dAxMax'
                                        */
extern real32_T rtP_P_dAxMin;          /* Variable: P_dAxMin
                                        * Referenced by: '<Root>/P_dAxMin'
                                        */
extern real32_T rtP_P_dIRamp;          /* Variable: P_dIRamp
                                        * Referenced by: '<S19>/P_dIRamp'
                                        */
extern real32_T rtP_P_dSlopeLim;       /* Variable: P_dSlopeLim
                                        * Referenced by: '<S11>/Constant1'
                                        */
extern real32_T rtP_P_tARefFilter;     /* Variable: P_tARefFilter
                                        * Referenced by: '<S19>/P_tARefFilter'
                                        */
extern real32_T rtP_P_tDriveOffThr;    /* Variable: P_tDriveOffThr
                                        * Referenced by: '<S12>/P_tDriveOffThr'
                                        */
extern real32_T rtP_P_tFxMergeFilter;  /* Variable: P_tFxMergeFilter
                                        * Referenced by: '<S5>/Constant'
                                        */
extern real32_T rtP_P_tSlopeFilter1;   /* Variable: P_tSlopeFilter1
                                        * Referenced by: '<S11>/Constant'
                                        */
extern real32_T rtP_P_tSlopeFilter2;   /* Variable: P_tSlopeFilter2
                                        * Referenced by: '<S12>/Constant'
                                        */
extern real32_T rtP_P_vDriveOffThr;    /* Variable: P_vDriveOffThr
                                        * Referenced by: '<S12>/P_vDriveOffThr'
                                        */
extern real32_T rtP_TransRatio;        /* Variable: TransRatio
                                        * Referenced by:
                                        *   '<S1>/TransRatio'
                                        *   '<S5>/TransRatio'
                                        */
extern real32_T rtP_m_Vehicle;         /* Variable: m_Vehicle
                                        * Referenced by:
                                        *   '<S5>/m_Vehicle'
                                        *   '<S6>/m_Vehicle'
                                        *   '<S18>/m_Vehicle'
                                        *   '<S20>/m_Vehicle'
                                        */
extern real32_T rtP_r_Wheel;           /* Variable: r_Wheel
                                        * Referenced by:
                                        *   '<S5>/r_Wheel'
                                        *   '<S25>/r_Wheel'
                                        */
extern void VLC_Init(void);
extern void VLC_Reset(void);
extern void VLC_Start(void);
extern void VLC_Update(void);
extern void VLC(const ACC_LGTCTRL_ST *rtu_ACC_LgtCtrl_st, const SYS_INFO_ST
                *rtu_SYS_Info_st, const VSI_VEHSTATE_ST *rtu_VSI_VehState_st,
                const COM_VEHBUS_ST *rtu_COM_VehBus_st, VLC_LGTCMD_ST
                *rty_Output);

/* Model reference registration function */
extern void VLC_initialize(const char_T **rt_errorStatus);

#ifndef VLC_MDLREF_HIDE_CHILD_

extern MdlrefDW_VLC_T VLC_MdlrefDW;

#endif                                 /*VLC_MDLREF_HIDE_CHILD_*/

#ifndef VLC_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_VLC_c_T VLC_B;

/* Block states (default storage) */
extern DW_VLC_f_T VLC_DW;

/* Previous zero-crossings (trigger) states */
extern ZCE_VLC_T VLC_PrevZCX;

#endif                                 /*VLC_MDLREF_HIDE_CHILD_*/

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'VLC'
 * '<S1>'   : 'VLC/AdapterRx_VLC'
 * '<S2>'   : 'VLC/RTI Data'
 * '<S3>'   : 'VLC/SlopeProcess'
 * '<S4>'   : 'VLC/VLC_Core'
 * '<S5>'   : 'VLC/VLC_Post'
 * '<S6>'   : 'VLC/VLC_SSM'
 * '<S7>'   : 'VLC/VLC_StateMachine'
 * '<S8>'   : 'VLC/RTI Data/RTI Data Store'
 * '<S9>'   : 'VLC/RTI Data/RTI Data Store/RTI Data Store'
 * '<S10>'  : 'VLC/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S11>'  : 'VLC/SlopeProcess/SlopeF'
 * '<S12>'  : 'VLC/SlopeProcess/SlopeFreeze'
 * '<S13>'  : 'VLC/SlopeProcess/SlopeF/LPFilter_Slope'
 * '<S14>'  : 'VLC/SlopeProcess/SlopeF/SlopeLim'
 * '<S15>'  : 'VLC/SlopeProcess/SlopeF/SlopeLim/If Action Subsystem'
 * '<S16>'  : 'VLC/SlopeProcess/SlopeF/SlopeLim/If Action Subsystem1'
 * '<S17>'  : 'VLC/SlopeProcess/SlopeFreeze/LPFilter_Slope'
 * '<S18>'  : 'VLC/VLC_Core/VLC_AxCtrl'
 * '<S19>'  : 'VLC/VLC_Core/VLC_AxCtrl/Dev_I'
 * '<S20>'  : 'VLC/VLC_Core/VLC_AxCtrl/Subsystem'
 * '<S21>'  : 'VLC/VLC_Core/VLC_AxCtrl/Dev_I/IGain_cal'
 * '<S22>'  : 'VLC/VLC_Core/VLC_AxCtrl/Dev_I/LPFilter'
 * '<S23>'  : 'VLC/VLC_Post/Actuator_Choice'
 * '<S24>'  : 'VLC/VLC_Post/LPFilter'
 * '<S25>'  : 'VLC/VLC_Post/PostProcess'
 * '<S26>'  : 'VLC/VLC_Post/PostProcess/Subsystem'
 * '<S27>'  : 'VLC/VLC_Post/PostProcess/Subsystem/Subsystem'
 * '<S28>'  : 'VLC/VLC_SSM/VLC_DriveOff'
 */
#endif                                 /* RTW_HEADER_VLC_h_ */
