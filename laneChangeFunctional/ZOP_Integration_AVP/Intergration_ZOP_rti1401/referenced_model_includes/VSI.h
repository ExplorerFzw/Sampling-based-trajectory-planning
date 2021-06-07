/*
 * Code generation for system model 'VSI'
 * For more details, see corresponding source file VSI.c
 *
 */

#ifndef RTW_HEADER_VSI_h_
#define RTW_HEADER_VSI_h_
#include <string.h>
#ifndef VSI_COMMON_INCLUDES_
# define VSI_COMMON_INCLUDES_
#include <rti_assert.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* VSI_COMMON_INCLUDES_ */

#include "VSI_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for model 'VSI' */
#ifndef VSI_MDLREF_HIDE_CHILD_

typedef struct {
  COM_VEHDYN_ST COM_VehDyn_st;         /* '<S1>/Bus Creator1' */
  VSI_VEHSTATE_ST VSI_VehState_st;     /* '<Root>/Bus Creator' */
  real_T Divide4;                      /* '<S1>/Divide4' */
  real32_T Divide7;                    /* '<S1>/Divide7' */
  real32_T YrsSensor;                  /* '<S1>/Gain' */
  real32_T SasSensor;                  /* '<S1>/Divide6' */
  real32_T vFL;                        /* '<S1>/Divide' */
  real32_T vFR;                        /* '<S1>/Divide1' */
  real32_T vRL;                        /* '<S1>/Divide2' */
  real32_T vRR;                        /* '<S1>/Divide3' */
  real32_T Max;                        /* '<S9>/Max' */
  real32_T filtFactor;                 /* '<S9>/Divide' */
  real32_T Multiply;                   /* '<S9>/Multiply' */
  real32_T Add;                        /* '<S9>/Add' */
  real32_T Memory1;                    /* '<S3>/Memory1' */
  real32_T Multiply1;                  /* '<S9>/Multiply1' */
  real32_T Add1;                       /* '<S9>/Add1' */
  real32_T Switch;                     /* '<S3>/Switch' */
  real32_T Max_e;                      /* '<S11>/Max' */
  real32_T filtFactor_b;               /* '<S11>/Divide' */
  real32_T Multiply_c;                 /* '<S11>/Multiply' */
  real32_T Add_a;                      /* '<S11>/Add' */
  real32_T Memory4;                    /* '<S3>/Memory4' */
  real32_T Multiply1_o;                /* '<S11>/Multiply1' */
  real32_T Add1_f;                     /* '<S11>/Add1' */
  real32_T Max_h;                      /* '<S8>/Max' */
  real32_T filtFactor_j;               /* '<S8>/Divide' */
  real32_T Multiply_a;                 /* '<S8>/Multiply' */
  real32_T Add_f;                      /* '<S8>/Add' */
  real32_T Memory2;                    /* '<S3>/Memory2' */
  real32_T Multiply1_d;                /* '<S8>/Multiply1' */
  real32_T Add1_c;                     /* '<S8>/Add1' */
  real32_T Divide2;                    /* '<S3>/Divide2' */
  real32_T Switch2;                    /* '<S3>/Switch2' */
  real32_T Divide1;                    /* '<S3>/Divide1' */
  real32_T Max_b;                      /* '<S7>/Max' */
  real32_T filtFactor_d;               /* '<S7>/Divide' */
  real32_T Multiply_d;                 /* '<S7>/Multiply' */
  real32_T Add_e;                      /* '<S7>/Add' */
  real32_T Memory;                     /* '<S3>/Memory' */
  real32_T Multiply1_n;                /* '<S7>/Multiply1' */
  real32_T Add1_n;                     /* '<S7>/Add1' */
  real32_T Switch1;                    /* '<S3>/Switch1' */
  real32_T Memory5;                    /* '<S3>/Memory5' */
  real32_T Subtract;                   /* '<S3>/Subtract' */
  real32_T Max_i;                      /* '<S3>/Max' */
  real32_T Divide3;                    /* '<S3>/Divide3' */
  real32_T Max_iy;                     /* '<S10>/Max' */
  real32_T filtFactor_e;               /* '<S10>/Divide' */
  real32_T Multiply_i;                 /* '<S10>/Multiply' */
  real32_T Add_aw;                     /* '<S10>/Add' */
  real32_T Memory3;                    /* '<S3>/Memory3' */
  real32_T Multiply1_d0;               /* '<S10>/Multiply1' */
  real32_T Add1_fz;                    /* '<S10>/Add1' */
  real32_T Add_p;                      /* '<S3>/Add' */
  real32_T Curv;                       /* '<S3>/MATLAB Function3' */
  real32_T vRaw;                       /* '<S3>/MATLAB Function1' */
  boolean_T vFLValid;                  /* '<S1>/Logical Operator3' */
  boolean_T vFRValid;                  /* '<S1>/Logical Operator5' */
  boolean_T vRLValid;                  /* '<S1>/Logical Operator6' */
  boolean_T vRRValid;                  /* '<S1>/Logical Operator4' */
  boolean_T AxSensorValid;             /* '<S1>/Logical Operator2' */
  boolean_T YrsSensorValid;            /* '<S1>/Logical Operator1' */
  boolean_T SasSensorValid;            /* '<S1>/Logical Operator' */
} B_VSI_c_T;

#endif                                 /*VSI_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'VSI' */
#ifndef VSI_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T Memory1_PreviousInput;      /* '<S3>/Memory1' */
  real32_T Memory4_PreviousInput;      /* '<S3>/Memory4' */
  real32_T Memory2_PreviousInput;      /* '<S3>/Memory2' */
  real32_T Memory_PreviousInput;       /* '<S3>/Memory' */
  real32_T Memory5_PreviousInput;      /* '<S3>/Memory5' */
  real32_T Memory3_PreviousInput;      /* '<S3>/Memory3' */
} DW_VSI_f_T;

#endif                                 /*VSI_MDLREF_HIDE_CHILD_*/

#ifndef VSI_MDLREF_HIDE_CHILD_

/* Parameters (default storage) */
struct P_VSI_T_ {
  real_T Constant4_Value;              /* Expression: 180
                                        * Referenced by: '<S1>/Constant4'
                                        */
  real_T Pi_Value;                     /* Expression: pi
                                        * Referenced by: '<S1>/Pi'
                                        */
  real_T Constant_Value;               /* Expression: 3.6
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S3>/Constant2'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T Constant3_Value;              /* Expression: 0.001
                                        * Referenced by: '<S3>/Constant3'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S1>/Gain'
                                        */
  real32_T Constant_Value_f;           /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S9>/Constant'
                                        */
  real32_T Memory1_InitialCondition;   /* Computed Parameter: Memory1_InitialCondition
                                        * Referenced by: '<S3>/Memory1'
                                        */
  real32_T Constant_Value_p;           /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S11>/Constant'
                                        */
  real32_T Memory4_InitialCondition;   /* Computed Parameter: Memory4_InitialCondition
                                        * Referenced by: '<S3>/Memory4'
                                        */
  real32_T Constant_Value_by;          /* Computed Parameter: Constant_Value_by
                                        * Referenced by: '<S8>/Constant'
                                        */
  real32_T Memory2_InitialCondition;   /* Computed Parameter: Memory2_InitialCondition
                                        * Referenced by: '<S3>/Memory2'
                                        */
  real32_T Gain_Gain_c;                /* Computed Parameter: Gain_Gain_c
                                        * Referenced by: '<S3>/Gain'
                                        */
  real32_T Constant_Value_a;           /* Computed Parameter: Constant_Value_a
                                        * Referenced by: '<S7>/Constant'
                                        */
  real32_T Memory_InitialCondition;    /* Computed Parameter: Memory_InitialCondition
                                        * Referenced by: '<S3>/Memory'
                                        */
  real32_T Memory5_InitialCondition;   /* Computed Parameter: Memory5_InitialCondition
                                        * Referenced by: '<S3>/Memory5'
                                        */
  real32_T Constant_Value_c;           /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S10>/Constant'
                                        */
  real32_T Memory3_InitialCondition;   /* Computed Parameter: Memory3_InitialCondition
                                        * Referenced by: '<S3>/Memory3'
                                        */
};

#endif                                 /*VSI_MDLREF_HIDE_CHILD_*/

#ifndef VSI_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_VSI_T {
  const char_T **errorStatus;
};

#endif                                 /*VSI_MDLREF_HIDE_CHILD_*/

#ifndef VSI_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_VSI_T rtm;
} MdlrefDW_VSI_T;

#endif                                 /*VSI_MDLREF_HIDE_CHILD_*/

/* Model block global parameters (default storage) */
extern real32_T rtP_P_tARawFilt;       /* Variable: P_tARawFilt
                                        * Referenced by: '<S3>/P_tARawFilt'
                                        */
extern real32_T rtP_P_tAxsFilt;        /* Variable: P_tAxsFilt
                                        * Referenced by: '<S3>/P_tAxsFilt'
                                        */
extern real32_T rtP_P_tSasFilt;        /* Variable: P_tSasFilt
                                        * Referenced by: '<S3>/P_tSasFilt'
                                        */
extern real32_T rtP_P_tVVehFilt;       /* Variable: P_tVVehFilt
                                        * Referenced by: '<S3>/P_tVVehFilt'
                                        */
extern real32_T rtP_P_tYrsFilt;        /* Variable: P_tYrsFilt
                                        * Referenced by: '<S3>/P_tYrsFilt'
                                        */
extern real32_T rtP_P_vHi;             /* Variable: P_vHi
                                        * Referenced by: '<S3>/P_vHi'
                                        */
extern real32_T rtP_P_vLo;             /* Variable: P_vLo
                                        * Referenced by: '<S3>/P_vLo'
                                        */
extern real32_T rtP_StRatio;           /* Variable: StRatio
                                        * Referenced by: '<S3>/StRatio'
                                        */
extern real32_T rtP_d_WheelBase;       /* Variable: d_WheelBase
                                        * Referenced by: '<S3>/d_WheelBase'
                                        */
extern void VSI_Init(void);
extern void VSI_Reset(void);
extern void VSI_Update(void);
extern void VSI(const SYS_INFO_ST *rtu_SYS_Info_st, const COM_VEHBUS_ST
                *rtu_COM_VehBus_st, real32_T *rty_VSI_VehState_st_YrsF, real32_T
                *rty_VSI_VehState_st_AxSensorF, real32_T
                *rty_VSI_VehState_st_StWheelAngl, real32_T
                *rty_VSI_VehState_st_vRef, real32_T *rty_VSI_VehState_st_aRef,
                real32_T *rty_VSI_VehState_st_AxSlope, boolean_T
                *rty_VSI_VehState_st_AxSlopeVali, real32_T
                *rty_VSI_VehState_st_Curvature);

/* Model reference registration function */
extern void VSI_initialize(const char_T **rt_errorStatus);

#ifndef VSI_MDLREF_HIDE_CHILD_

extern MdlrefDW_VSI_T VSI_MdlrefDW;

#endif                                 /*VSI_MDLREF_HIDE_CHILD_*/

#ifndef VSI_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_VSI_c_T VSI_B;

/* Block states (default storage) */
extern DW_VSI_f_T VSI_DW;

#endif                                 /*VSI_MDLREF_HIDE_CHILD_*/

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
 * '<Root>' : 'VSI'
 * '<S1>'   : 'VSI/Adapter_VSI'
 * '<S2>'   : 'VSI/RTI Data'
 * '<S3>'   : 'VSI/VSI'
 * '<S4>'   : 'VSI/RTI Data/RTI Data Store'
 * '<S5>'   : 'VSI/RTI Data/RTI Data Store/RTI Data Store'
 * '<S6>'   : 'VSI/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S7>'   : 'VSI/VSI/LPFilter_Ax_Sensor'
 * '<S8>'   : 'VSI/VSI/LPFilter_Sas'
 * '<S9>'   : 'VSI/VSI/LPFilter_Yrs'
 * '<S10>'  : 'VSI/VSI/LPFilter_aRef'
 * '<S11>'  : 'VSI/VSI/LPFilter_vRef'
 * '<S12>'  : 'VSI/VSI/MATLAB Function1'
 * '<S13>'  : 'VSI/VSI/MATLAB Function3'
 */
#endif                                 /* RTW_HEADER_VSI_h_ */
