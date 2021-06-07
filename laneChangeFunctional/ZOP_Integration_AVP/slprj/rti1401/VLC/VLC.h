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
  real_T Memory1;                      /* '<S6>/Memory1' */
  real_T Memory;                       /* '<S6>/Memory' */
  real_T DC_Enable;                    /* '<S6>/Actuator_Choice' */
  real_T EC_Enable;                    /* '<S6>/Actuator_Choice' */
  real32_T Memory_j;                   /* '<Root>/Memory' */
  real32_T Product;                    /* '<Root>/Product' */
  real32_T Product1;                   /* '<Root>/Product1' */
  real32_T Memory_k;                   /* '<S13>/Memory' */
  real32_T Delay1;                     /* '<S13>/Delay1' */
  real32_T Memory2;                    /* '<S12>/Memory2' */
  real32_T Abs;                        /* '<S15>/Abs' */
  real32_T Merge;                      /* '<S15>/Merge' */
  real32_T Max;                        /* '<S14>/Max' */
  real32_T filtFactor;                 /* '<S14>/Divide' */
  real32_T Multiply;                   /* '<S14>/Multiply' */
  real32_T Add;                        /* '<S14>/Add' */
  real32_T Memory1_p;                  /* '<S12>/Memory1' */
  real32_T Multiply1;                  /* '<S14>/Multiply1' */
  real32_T Add1;                       /* '<S14>/Add1' */
  real32_T Add_p;                      /* '<S12>/Add' */
  real32_T Multiply_m;                 /* '<S12>/Multiply' */
  real32_T MinMax;                     /* '<S12>/MinMax' */
  real32_T Gain;                       /* '<S12>/Gain' */
  real32_T Max_h;                      /* '<S12>/Max' */
  real32_T Add1_j;                     /* '<S12>/Add1' */
  real32_T Switch5;                    /* '<S13>/Switch5' */
  real32_T Max_p;                      /* '<S18>/Max' */
  real32_T filtFactor_l;               /* '<S18>/Divide' */
  real32_T Multiply_g;                 /* '<S18>/Multiply' */
  real32_T Add_h;                      /* '<S18>/Add' */
  real32_T Memory2_n;                  /* '<S13>/Memory2' */
  real32_T Multiply1_a;                /* '<S18>/Multiply1' */
  real32_T Add1_a;                     /* '<S18>/Add1' */
  real32_T Sum;                        /* '<Root>/Sum' */
  real32_T Fxtar_merge;                /* '<S6>/Fxtar_merge' */
  real32_T Max_j;                      /* '<S27>/Max' */
  real32_T filtFactor_g;               /* '<S27>/Divide' */
  real32_T Multiply_i;                 /* '<S27>/Multiply' */
  real32_T Add_e;                      /* '<S27>/Add' */
  real32_T Memory2_d;                  /* '<S6>/Memory2' */
  real32_T Multiply1_h;                /* '<S27>/Multiply1' */
  real32_T Add1_o;                     /* '<S27>/Add1' */
  real32_T Merge_m;                    /* '<S30>/Merge' */
  real32_T Delay1_d;                   /* '<S31>/Delay1' */
  real32_T uDLookupTable;              /* '<S29>/1-D Lookup Table' */
  real32_T uDLookupTable1;             /* '<S29>/1-D Lookup Table1' */
  real32_T P_aStsd;                    /* '<S29>/P_aStsd' */
  real32_T Switch;                     /* '<S29>/Switch' */
  real32_T Switch6;                    /* '<S28>/Switch6' */
  real32_T Switch_j;                   /* '<S28>/Switch' */
  real32_T Switch2;                    /* '<S28>/Switch2' */
  real32_T Divide;                     /* '<S28>/Divide' */
  real32_T MinMax1;                    /* '<S28>/MinMax1' */
  real32_T MinMax_a;                   /* '<S28>/MinMax' */
  real32_T Switch3;                    /* '<S28>/Switch3' */
  real32_T Switch4;                    /* '<S28>/Switch4' */
  real32_T Divide_f;                   /* '<S6>/Divide' */
  real32_T Multiply_ot;                /* '<S31>/Multiply' */
  real32_T Add1_k;                     /* '<S31>/Add1' */
  real32_T Max_c;                      /* '<S31>/Max' */
  real32_T Add1_l;                     /* '<S13>/Add1' */
  real32_T Max1;                       /* '<S13>/Max1' */
  real32_T VLCState;                   /* '<Root>/VLC_StateMachine' */
  real32_T AxTar_Lim;                  /* '<Root>/VLC_StateMachine' */
  real32_T In1;                        /* '<S32>/In1' */
  real32_T Gain_e;                     /* '<S17>/Gain' */
  real32_T Max_h1;                     /* '<S17>/Max' */
  real32_T FxTar;                      /* '<S7>/VLC_DriveOff' */
  real32_T P_Kp;                       /* '<S21>/P_Kp' */
  real32_T aKP;                        /* '<S21>/Switch1' */
  real32_T Abs4;                       /* '<S22>/Abs4' */
  real32_T Abs3;                       /* '<S22>/Abs3' */
  real32_T Max_h2;                     /* '<S22>/Max' */
  real32_T Max_b;                      /* '<S25>/Max' */
  real32_T filtFactor_h;               /* '<S25>/Divide' */
  real32_T Multiply_k;                 /* '<S25>/Multiply' */
  real32_T Add_m;                      /* '<S25>/Add' */
  real32_T Memory_d;                   /* '<S22>/Memory' */
  real32_T Multiply1_g;                /* '<S25>/Multiply1' */
  real32_T Add1_h;                     /* '<S25>/Add1' */
  real32_T Add_l;                      /* '<S22>/Add' */
  real32_T Abs1;                       /* '<S22>/Abs1' */
  real32_T Abs2;                       /* '<S22>/Abs2' */
  real32_T Memory1_b;                  /* '<S22>/Memory1' */
  real32_T Product1_o;                 /* '<S22>/Product1' */
  real32_T Product1_m;                 /* '<S21>/Product1' */
  real32_T Multiply_n;                 /* '<S21>/Multiply' */
  real32_T Memory1_n;                  /* '<S21>/Memory1' */
  real32_T Add4;                       /* '<S21>/Add4' */
  real32_T aKI;                        /* '<S21>/Switch2' */
  real32_T Add1_n;                     /* '<S21>/Add1' */
  real32_T aSlope;                     /* '<S21>/Switch' */
  real32_T MathFunction;               /* '<S23>/Math Function' */
  real32_T Product_h;                  /* '<S23>/Product' */
  real32_T Product1_b;                 /* '<S23>/Product1' */
  real32_T Divide_fz;                  /* '<S23>/Divide' */
  real32_T Add2;                       /* '<S21>/Add2' */
  real32_T IGain;                      /* '<S22>/IGain_cal' */
  boolean_T RelationalOperator;        /* '<Root>/Relational Operator' */
  boolean_T Equal4;                    /* '<S13>/Equal4' */
  boolean_T Equal5;                    /* '<S13>/Equal5' */
  boolean_T AND1;                      /* '<S13>/AND1' */
  boolean_T RelationalOperator_m;      /* '<S15>/Relational Operator' */
  boolean_T Switch1[2];                /* '<S28>/Switch1' */
  boolean_T Equal;                     /* '<S28>/Equal' */
  boolean_T OR;                        /* '<S28>/OR' */
  boolean_T Equal1;                    /* '<S30>/Equal1' */
  boolean_T Equal2;                    /* '<S30>/Equal2' */
  boolean_T AND;                       /* '<S30>/AND' */
  boolean_T Equal_l;                   /* '<S29>/Equal' */
  boolean_T Equal_j;                   /* '<S21>/Equal' */
} B_VLC_c_T;

#endif                                 /*VLC_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'VLC' */
#ifndef VLC_MDLREF_HIDE_CHILD_

typedef struct {
  real_T Memory1_PreviousInput;        /* '<S6>/Memory1' */
  real_T Memory_PreviousInput;         /* '<S6>/Memory' */
  real32_T Delay1_DSTATE;              /* '<S13>/Delay1' */
  real32_T Delay1_DSTATE_c;            /* '<S31>/Delay1' */
  real32_T Memory_PreviousInput_l;     /* '<Root>/Memory' */
  real32_T Memory_PreviousInput_e;     /* '<S13>/Memory' */
  real32_T Memory2_PreviousInput;      /* '<S12>/Memory2' */
  real32_T Memory1_PreviousInput_f;    /* '<S12>/Memory1' */
  real32_T Memory2_PreviousInput_j;    /* '<S13>/Memory2' */
  real32_T Memory2_PreviousInput_d;    /* '<S6>/Memory2' */
  real32_T Memory_PreviousInput_k;     /* '<S22>/Memory' */
  real32_T Memory1_PreviousInput_j;    /* '<S22>/Memory1' */
  real32_T Memory1_PreviousInput_e;    /* '<S21>/Memory1' */
  int8_T If_ActiveSubsystem;           /* '<Root>/If' */
  uint8_T icLoad;                      /* '<S13>/Delay1' */
  uint8_T icLoad_g;                    /* '<S31>/Delay1' */
  uint8_T is_active_c3_VLC;            /* '<Root>/VLC_StateMachine' */
  uint8_T is_c3_VLC;                   /* '<Root>/VLC_StateMachine' */
} DW_VLC_f_T;

#endif                                 /*VLC_MDLREF_HIDE_CHILD_*/

/* Zero-crossing (trigger) state for model 'VLC' */
#ifndef VLC_MDLREF_HIDE_CHILD_

typedef struct {
  ZCSigState Delay1_Reset_ZCE;         /* '<S13>/Delay1' */
  ZCSigState Delay1_Reset_ZCE_h;       /* '<S31>/Delay1' */
  ZCSigState TriggeredSubsystem_Trig_ZCE;/* '<S29>/Triggered Subsystem' */
} ZCE_VLC_T;

#endif                                 /*VLC_MDLREF_HIDE_CHILD_*/

#ifndef VLC_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S15>/If Action Subsystem' */
struct P_IfActionSubsystem_VLC_T_ {
  real32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S16>/Constant'
                                        */
};

#endif                                 /*VLC_MDLREF_HIDE_CHILD_*/

#ifndef VLC_MDLREF_HIDE_CHILD_

/* Parameters (default storage) */
struct P_VLC_T_ {
  real_T Memory1_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S6>/Memory1'
                                        */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S6>/Memory'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S28>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 3
                                        * Referenced by: '<S28>/Constant'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S28>/Constant2'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S28>/Constant4'
                                        */
  real_T Efficiency_Value;             /* Expression: 1
                                        * Referenced by: '<S6>/Efficiency'
                                        */
  real32_T Constant1_Value_p;          /* Computed Parameter: Constant1_Value_p
                                        * Referenced by: '<S21>/Constant1'
                                        */
  real32_T Constant2_Value_g;          /* Computed Parameter: Constant2_Value_g
                                        * Referenced by: '<S21>/Constant2'
                                        */
  real32_T Constant_Value_i;           /* Computed Parameter: Constant_Value_i
                                        * Referenced by: '<S25>/Constant'
                                        */
  real32_T Memory_InitialCondition_l;  /* Computed Parameter: Memory_InitialCondition_l
                                        * Referenced by: '<S22>/Memory'
                                        */
  real32_T Memory1_InitialCondition_j; /* Computed Parameter: Memory1_InitialCondition_j
                                        * Referenced by: '<S22>/Memory1'
                                        */
  real32_T Memory1_InitialCondition_p; /* Computed Parameter: Memory1_InitialCondition_p
                                        * Referenced by: '<S21>/Memory1'
                                        */
  real32_T Constant_Value_i0;          /* Computed Parameter: Constant_Value_i0
                                        * Referenced by: '<S21>/Constant'
                                        */
  real32_T Constant4_Value_f;          /* Computed Parameter: Constant4_Value_f
                                        * Referenced by: '<S23>/Constant4'
                                        */
  real32_T Constant6_Value;            /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<S23>/Constant6'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S17>/Gain'
                                        */
  real32_T Out1_Y0;                    /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S32>/Out1'
                                        */
  real32_T P_aStsd_Value;              /* Computed Parameter: P_aStsd_Value
                                        * Referenced by: '<S34>/P_aStsd'
                                        */
  real32_T Memory_InitialCondition_i;  /* Computed Parameter: Memory_InitialCondition_i
                                        * Referenced by: '<Root>/Memory'
                                        */
  real32_T Memory_InitialCondition_e;  /* Computed Parameter: Memory_InitialCondition_e
                                        * Referenced by: '<S13>/Memory'
                                        */
  real32_T Memory2_InitialCondition;   /* Computed Parameter: Memory2_InitialCondition
                                        * Referenced by: '<S12>/Memory2'
                                        */
  real32_T Constant_Value_j;           /* Computed Parameter: Constant_Value_j
                                        * Referenced by: '<S14>/Constant'
                                        */
  real32_T Memory1_InitialCondition_h; /* Computed Parameter: Memory1_InitialCondition_h
                                        * Referenced by: '<S12>/Memory1'
                                        */
  real32_T Gain_Gain_j;                /* Computed Parameter: Gain_Gain_j
                                        * Referenced by: '<S12>/Gain'
                                        */
  real32_T Constant_Value_c;           /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S18>/Constant'
                                        */
  real32_T Memory2_InitialCondition_h; /* Computed Parameter: Memory2_InitialCondition_h
                                        * Referenced by: '<S13>/Memory2'
                                        */
  real32_T Constant_Value_n;           /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S27>/Constant'
                                        */
  real32_T Memory2_InitialCondition_n; /* Computed Parameter: Memory2_InitialCondition_n
                                        * Referenced by: '<S6>/Memory2'
                                        */
  real32_T MMotMin_Value;              /* Computed Parameter: MMotMin_Value
                                        * Referenced by: '<S6>/MMotMin'
                                        */
  real32_T Switch1_Threshold;          /* Computed Parameter: Switch1_Threshold
                                        * Referenced by: '<S28>/Switch1'
                                        */
  real32_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S30>/Constant3'
                                        */
  real32_T uDLookupTable_tableData[2]; /* Computed Parameter: uDLookupTable_tableData
                                        * Referenced by: '<S29>/1-D Lookup Table'
                                        */
  real32_T uDLookupTable_bp01Data[2];  /* Computed Parameter: uDLookupTable_bp01Data
                                        * Referenced by: '<S29>/1-D Lookup Table'
                                        */
  real32_T uDLookupTable1_tableData[2];/* Computed Parameter: uDLookupTable1_tableData
                                        * Referenced by: '<S29>/1-D Lookup Table1'
                                        */
  real32_T uDLookupTable1_bp01Data[2]; /* Computed Parameter: uDLookupTable1_bp01Data
                                        * Referenced by: '<S29>/1-D Lookup Table1'
                                        */
  real32_T P_aStsd_Threshold;          /* Computed Parameter: P_aStsd_Threshold
                                        * Referenced by: '<S29>/P_aStsd'
                                        */
  real32_T P_DecToStopCase_Value;      /* Computed Parameter: P_DecToStopCase_Value
                                        * Referenced by: '<S28>/P_DecToStopCase'
                                        */
  real32_T Switch6_Threshold;          /* Computed Parameter: Switch6_Threshold
                                        * Referenced by: '<S28>/Switch6'
                                        */
  real32_T Switch2_Threshold;          /* Computed Parameter: Switch2_Threshold
                                        * Referenced by: '<S28>/Switch2'
                                        */
  real32_T P_AxtarEC_Value;            /* Computed Parameter: P_AxtarEC_Value
                                        * Referenced by: '<S28>/P_AxtarEC'
                                        */
  real32_T Switch3_Threshold;          /* Computed Parameter: Switch3_Threshold
                                        * Referenced by: '<S28>/Switch3'
                                        */
  real32_T P_TrqReqDC_Value;           /* Computed Parameter: P_TrqReqDC_Value
                                        * Referenced by: '<S28>/P_TrqReqDC'
                                        */
  real32_T Constant7_Value;            /* Computed Parameter: Constant7_Value
                                        * Referenced by: '<S13>/Constant7'
                                        */
  uint32_T Delay1_DelayLength;         /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S13>/Delay1'
                                        */
  uint32_T Delay1_DelayLength_g;       /* Computed Parameter: Delay1_DelayLength_g
                                        * Referenced by: '<S31>/Delay1'
                                        */
  P_IfActionSubsystem_VLC_T IfActionSubsystem_a;/* '<S30>/If Action Subsystem' */
  P_IfActionSubsystem_VLC_T IfActionSubsystem;/* '<S15>/If Action Subsystem' */
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
                                        * Referenced by: '<S23>/P_A'
                                        */
extern real32_T rtP_P_Cd;              /* Variable: P_Cd
                                        * Referenced by: '<S23>/P_Cd'
                                        */
extern real32_T rtP_P_Cf;              /* Variable: P_Cf
                                        * Referenced by:
                                        *   '<S7>/P_Cf'
                                        *   '<S21>/P_Cf'
                                        */
extern real32_T rtP_P_DC2ECMargin;     /* Variable: P_DC2ECMargin
                                        * Referenced by: '<S6>/P_DC2ECMargin'
                                        */
extern real32_T rtP_P_Dev4IEnd;        /* Variable: P_Dev4IEnd
                                        * Referenced by: '<S22>/P_Dev4IEnd'
                                        */
extern real32_T rtP_P_DriveOffAdd;     /* Variable: P_DriveOffAdd
                                        * Referenced by: '<S7>/P_DriveOffAdd'
                                        */
extern real32_T rtP_P_Ki;              /* Variable: P_Ki
                                        * Referenced by: '<S22>/P_Ki'
                                        */
extern real32_T rtP_P_Kp;              /* Variable: P_Kp
                                        * Referenced by: '<S21>/P_Kp'
                                        */
extern real32_T rtP_P_SlopeMax;        /* Variable: P_SlopeMax
                                        * Referenced by: '<S17>/P_SlopeMax'
                                        */
extern real32_T rtP_P_SlopeMin;        /* Variable: P_SlopeMin
                                        * Referenced by: '<S15>/P_SlopeMin'
                                        */
extern real32_T rtP_P_StandStillFactEC;/* Variable: P_StandStillFactEC
                                        * Referenced by: '<S7>/P_StandStillFactEC'
                                        */
extern real32_T rtP_P_StsdCase;        /* Variable: P_StsdCase
                                        * Referenced by: '<S29>/Constant'
                                        */
extern real32_T rtP_P_StsddAxRamp;     /* Variable: P_StsddAxRamp
                                        * Referenced by: '<S31>/P_StsddAxRamp'
                                        */
extern real32_T rtP_P_aDiffaF;         /* Variable: P_aDiffaF
                                        * Referenced by: '<S22>/P_aDiffaF'
                                        */
extern real32_T rtP_P_dAxMax;          /* Variable: P_dAxMax
                                        * Referenced by: '<Root>/P_dAxMax'
                                        */
extern real32_T rtP_P_dAxMin;          /* Variable: P_dAxMin
                                        * Referenced by: '<Root>/P_dAxMin'
                                        */
extern real32_T rtP_P_dIRamp;          /* Variable: P_dIRamp
                                        * Referenced by: '<S22>/P_dIRamp'
                                        */
extern real32_T rtP_P_dSlopeLim;       /* Variable: P_dSlopeLim
                                        * Referenced by: '<S12>/Constant1'
                                        */
extern real32_T rtP_P_tARefFilter;     /* Variable: P_tARefFilter
                                        * Referenced by: '<S22>/P_tARefFilter'
                                        */
extern real32_T rtP_P_tDriveOffThr;    /* Variable: P_tDriveOffThr
                                        * Referenced by: '<S13>/P_tDriveOffThr'
                                        */
extern real32_T rtP_P_tFxMergeFilter;  /* Variable: P_tFxMergeFilter
                                        * Referenced by: '<S6>/Constant'
                                        */
extern real32_T rtP_P_tSlopeFilter1;   /* Variable: P_tSlopeFilter1
                                        * Referenced by: '<S12>/Constant'
                                        */
extern real32_T rtP_P_tSlopeFilter2;   /* Variable: P_tSlopeFilter2
                                        * Referenced by: '<S13>/Constant'
                                        */
extern real32_T rtP_P_vDriveOffThr;    /* Variable: P_vDriveOffThr
                                        * Referenced by: '<S13>/P_vDriveOffThr'
                                        */
extern real32_T rtP_P_vLowSpd;         /* Variable: P_vLowSpd
                                        * Referenced by: '<Root>/P_vLowSpd'
                                        */
extern real32_T rtP_TransRatio;        /* Variable: TransRatio
                                        * Referenced by:
                                        *   '<S1>/TransRatio'
                                        *   '<S6>/TransRatio'
                                        */
extern real32_T rtP_m_Vehicle;         /* Variable: m_Vehicle
                                        * Referenced by:
                                        *   '<S6>/m_Vehicle'
                                        *   '<S7>/m_Vehicle'
                                        *   '<S21>/m_Vehicle'
                                        *   '<S23>/m_Vehicle'
                                        */
extern real32_T rtP_r_Wheel;           /* Variable: r_Wheel
                                        * Referenced by:
                                        *   '<S6>/r_Wheel'
                                        *   '<S28>/r_Wheel'
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

extern void VLC_IfActionSubsystem(real32_T *rty_Out1, P_IfActionSubsystem_VLC_T *
  localP);

#endif                                 /*VLC_MDLREF_HIDE_CHILD_*/

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
 * '<S4>'   : 'VLC/Subsystem'
 * '<S5>'   : 'VLC/VLC_Core'
 * '<S6>'   : 'VLC/VLC_Post'
 * '<S7>'   : 'VLC/VLC_SSM'
 * '<S8>'   : 'VLC/VLC_StateMachine'
 * '<S9>'   : 'VLC/RTI Data/RTI Data Store'
 * '<S10>'  : 'VLC/RTI Data/RTI Data Store/RTI Data Store'
 * '<S11>'  : 'VLC/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S12>'  : 'VLC/SlopeProcess/SlopeF'
 * '<S13>'  : 'VLC/SlopeProcess/SlopeFreeze'
 * '<S14>'  : 'VLC/SlopeProcess/SlopeF/LPFilter_Slope'
 * '<S15>'  : 'VLC/SlopeProcess/SlopeF/SlopeLim'
 * '<S16>'  : 'VLC/SlopeProcess/SlopeF/SlopeLim/If Action Subsystem'
 * '<S17>'  : 'VLC/SlopeProcess/SlopeF/SlopeLim/If Action Subsystem1'
 * '<S18>'  : 'VLC/SlopeProcess/SlopeFreeze/LPFilter_Slope'
 * '<S19>'  : 'VLC/Subsystem/If Action Subsystem'
 * '<S20>'  : 'VLC/Subsystem/If Action Subsystem1'
 * '<S21>'  : 'VLC/VLC_Core/VLC_AxCtrl'
 * '<S22>'  : 'VLC/VLC_Core/VLC_AxCtrl/Dev_I'
 * '<S23>'  : 'VLC/VLC_Core/VLC_AxCtrl/Subsystem'
 * '<S24>'  : 'VLC/VLC_Core/VLC_AxCtrl/Dev_I/IGain_cal'
 * '<S25>'  : 'VLC/VLC_Core/VLC_AxCtrl/Dev_I/LPFilter'
 * '<S26>'  : 'VLC/VLC_Post/Actuator_Choice'
 * '<S27>'  : 'VLC/VLC_Post/LPFilter'
 * '<S28>'  : 'VLC/VLC_Post/PostProcess'
 * '<S29>'  : 'VLC/VLC_Post/PostProcess/Subsystem'
 * '<S30>'  : 'VLC/VLC_Post/PostProcess/Subsystem1'
 * '<S31>'  : 'VLC/VLC_Post/PostProcess/Subsystem/Subsystem'
 * '<S32>'  : 'VLC/VLC_Post/PostProcess/Subsystem/Triggered Subsystem'
 * '<S33>'  : 'VLC/VLC_Post/PostProcess/Subsystem1/If Action Subsystem'
 * '<S34>'  : 'VLC/VLC_Post/PostProcess/Subsystem1/If Action Subsystem1'
 * '<S35>'  : 'VLC/VLC_SSM/VLC_DriveOff'
 */
#endif                                 /* RTW_HEADER_VLC_h_ */
