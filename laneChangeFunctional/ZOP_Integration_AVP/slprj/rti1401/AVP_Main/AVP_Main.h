/*
 * Code generation for system model 'AVP_Main'
 * For more details, see corresponding source file AVP_Main.c
 *
 */

#ifndef RTW_HEADER_AVP_Main_h_
#define RTW_HEADER_AVP_Main_h_
#include <string.h>
#ifndef AVP_Main_COMMON_INCLUDES_
# define AVP_Main_COMMON_INCLUDES_
#include <rti_assert.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* AVP_Main_COMMON_INCLUDES_ */

#include "AVP_Main_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Block signals for model 'AVP_Main' */
#ifndef AVP_Main_MDLREF_HIDE_CHILD_

typedef struct {
  uint8_T Switch3;                     /* '<S3>/Switch3' */
  uint8_T Switch2;                     /* '<S3>/Switch2' */
  uint8_T Switch;                      /* '<S3>/Switch' */
  boolean_T RelationalOperator;        /* '<S3>/Relational Operator' */
  boolean_T RelationalOperator3;       /* '<S3>/Relational Operator3' */
  boolean_T RelationalOperator2;       /* '<S3>/Relational Operator2' */
  boolean_T RelationalOperator4;       /* '<S3>/Relational Operator4' */
  boolean_T LogicalOperator;           /* '<S3>/Logical Operator' */
  boolean_T LogicalOperator1;          /* '<S3>/Logical Operator1' */
  boolean_T RelationalOperator1;       /* '<S3>/Relational Operator1' */
} B_AVP_Main_c_T;

#endif                                 /*AVP_Main_MDLREF_HIDE_CHILD_*/

#ifndef AVP_Main_MDLREF_HIDE_CHILD_

/* Parameters (default storage) */
struct P_AVP_Main_T_ {
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Constant2'
                                        */
  uint8_T Constant_Value;              /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S3>/Constant'
                                        */
  uint8_T Constant4_Value;             /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S3>/Constant4'
                                        */
  uint8_T Constant3_Value;             /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S3>/Constant3'
                                        */
  uint8_T Constant5_Value;             /* Computed Parameter: Constant5_Value
                                        * Referenced by: '<S3>/Constant5'
                                        */
  uint8_T Constant7_Value;             /* Computed Parameter: Constant7_Value
                                        * Referenced by: '<S3>/Constant7'
                                        */
  uint8_T Constant9_Value;             /* Computed Parameter: Constant9_Value
                                        * Referenced by: '<S3>/Constant9'
                                        */
  uint8_T Constant10_Value;            /* Computed Parameter: Constant10_Value
                                        * Referenced by: '<S3>/Constant10'
                                        */
  uint8_T Constant8_Value;             /* Computed Parameter: Constant8_Value
                                        * Referenced by: '<S3>/Constant8'
                                        */
  uint8_T Constant1_Value;             /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S3>/Constant1'
                                        */
  uint8_T Constant2_Value_h;           /* Computed Parameter: Constant2_Value_h
                                        * Referenced by: '<S3>/Constant2'
                                        */
  uint8_T Constant6_Value;             /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<S3>/Constant6'
                                        */
};

#endif                                 /*AVP_Main_MDLREF_HIDE_CHILD_*/

#ifndef AVP_Main_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_AVP_Main_T {
  const char_T **errorStatus;
};

#endif                                 /*AVP_Main_MDLREF_HIDE_CHILD_*/

#ifndef AVP_Main_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_AVP_Main_T rtm;
} MdlrefDW_AVP_Main_T;

#endif                                 /*AVP_Main_MDLREF_HIDE_CHILD_*/

extern void AVP_Main_Start(real_T *rty_AVPTrajectoryPoint_headingA);
extern void AVP_Main(const AVP_OUTPUT_ST *rtu_AVP_Info, const uint8_T
                     *rtu_AVPReq, uint8_T *rty_AVPPark, uint8_T *rty_AVPRes,
                     real32_T *rty_AVPTrajectoryPoint_dx, real32_T
                     *rty_AVPTrajectoryPoint_dy, real_T
                     *rty_AVPTrajectoryPoint_headingA, boolean_T
                     *rty_AVPTrajectoryLine_lineValid, real32_T
                     *rty_AVPTrajectoryLine_C0, real32_T
                     *rty_AVPTrajectoryLine_C1, real32_T
                     *rty_AVPTrajectoryLine_C2, real32_T
                     *rty_AVPTrajectoryLine_C3);

/* Model reference registration function */
extern void AVP_Main_initialize(const char_T **rt_errorStatus);

#ifndef AVP_Main_MDLREF_HIDE_CHILD_

extern MdlrefDW_AVP_Main_T AVP_Main_MdlrefDW;

#endif                                 /*AVP_Main_MDLREF_HIDE_CHILD_*/

#ifndef AVP_Main_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_AVP_Main_c_T AVP_Main_B;

#endif                                 /*AVP_Main_MDLREF_HIDE_CHILD_*/

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
 * '<Root>' : 'AVP_Main'
 * '<S1>'   : 'AVP_Main/AVP_Module'
 * '<S2>'   : 'AVP_Main/RTI Data'
 * '<S3>'   : 'AVP_Main/AVP_Module/Subsystem'
 * '<S4>'   : 'AVP_Main/RTI Data/RTI Data Store'
 * '<S5>'   : 'AVP_Main/RTI Data/RTI Data Store/RTI Data Store'
 * '<S6>'   : 'AVP_Main/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 */
#endif                                 /* RTW_HEADER_AVP_Main_h_ */
