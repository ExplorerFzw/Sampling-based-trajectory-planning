/*
 * Code generation for system model 'AVP_Main'
 *
 * Model                      : AVP_Main
 * Model version              : 1.397
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Mar 17 16:04:08 2021
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "AVP_Main_trc_ptr.h"
#include "rti_initref_cpp.h"
#include "AVP_Main.h"
#include "AVP_Main_private.h"

P_AVP_Main_T AVP_Main_P_g = {
  /* Expression: 0
   * Referenced by: '<S1>/Constant2'
   */
  0.0,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S3>/Constant'
   */
  1U,

  /* Computed Parameter: Constant4_Value
   * Referenced by: '<S3>/Constant4'
   */
  1U,

  /* Computed Parameter: Constant3_Value
   * Referenced by: '<S3>/Constant3'
   */
  2U,

  /* Computed Parameter: Constant5_Value
   * Referenced by: '<S3>/Constant5'
   */
  3U,

  /* Computed Parameter: Constant7_Value
   * Referenced by: '<S3>/Constant7'
   */
  3U,

  /* Computed Parameter: Constant9_Value
   * Referenced by: '<S3>/Constant9'
   */
  2U,

  /* Computed Parameter: Constant10_Value
   * Referenced by: '<S3>/Constant10'
   */
  0U,

  /* Computed Parameter: Constant8_Value
   * Referenced by: '<S3>/Constant8'
   */
  1U,

  /* Computed Parameter: Constant1_Value
   * Referenced by: '<S3>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant2_Value_h
   * Referenced by: '<S3>/Constant2'
   */
  1U,

  /* Computed Parameter: Constant6_Value
   * Referenced by: '<S3>/Constant6'
   */
  0U
};

MdlrefDW_AVP_Main_T AVP_Main_MdlrefDW;

/* Block signals (default storage) */
B_AVP_Main_c_T AVP_Main_B;

/* Start for referenced model: 'AVP_Main' */
void AVP_Main_Start(real_T *rty_AVPTrajectoryPoint_headingA)
{
  /* Start for Constant: '<S1>/Constant2' */
  *rty_AVPTrajectoryPoint_headingA = AVP_Main_P_g.Constant2_Value;
}

/* Output and update for referenced model: 'AVP_Main' */
void AVP_Main(const AVP_OUTPUT_ST *rtu_AVP_Info, const uint8_T *rtu_AVPReq,
              uint8_T *rty_AVPPark, uint8_T *rty_AVPRes, real32_T
              *rty_AVPTrajectoryPoint_dx, real32_T *rty_AVPTrajectoryPoint_dy,
              real_T *rty_AVPTrajectoryPoint_headingA, boolean_T
              *rty_AVPTrajectoryLine_lineValid, real32_T
              *rty_AVPTrajectoryLine_C0, real32_T *rty_AVPTrajectoryLine_C1,
              real32_T *rty_AVPTrajectoryLine_C2, real32_T
              *rty_AVPTrajectoryLine_C3)
{
  /* RelationalOperator: '<S3>/Relational Operator' incorporates:
   *  Constant: '<S3>/Constant'
   */
  AVP_Main_B.RelationalOperator = (*rtu_AVPReq == AVP_Main_P_g.Constant_Value);

  /* RelationalOperator: '<S3>/Relational Operator3' incorporates:
   *  Constant: '<S3>/Constant4'
   */
  AVP_Main_B.RelationalOperator3 = (rtu_AVP_Info->AVP_STATE ==
    AVP_Main_P_g.Constant4_Value);

  /* RelationalOperator: '<S3>/Relational Operator2' incorporates:
   *  Constant: '<S3>/Constant3'
   */
  AVP_Main_B.RelationalOperator2 = (rtu_AVP_Info->AVP_STATE ==
    AVP_Main_P_g.Constant3_Value);

  /* RelationalOperator: '<S3>/Relational Operator4' incorporates:
   *  Constant: '<S3>/Constant5'
   */
  AVP_Main_B.RelationalOperator4 = (rtu_AVP_Info->AVP_STATE ==
    AVP_Main_P_g.Constant5_Value);

  /* Logic: '<S3>/Logical Operator' */
  AVP_Main_B.LogicalOperator = (AVP_Main_B.RelationalOperator3 ||
    AVP_Main_B.RelationalOperator2 || AVP_Main_B.RelationalOperator4);

  /* Logic: '<S3>/Logical Operator1' */
  AVP_Main_B.LogicalOperator1 = (AVP_Main_B.LogicalOperator &&
    AVP_Main_B.RelationalOperator);

  /* DataTypeConversion: '<S3>/Data Type Conversion' */
  *rty_AVPRes = AVP_Main_B.LogicalOperator1;

  /* Switch: '<S3>/Switch3' incorporates:
   *  Constant: '<S3>/Constant10'
   *  Constant: '<S3>/Constant8'
   */
  if (AVP_Main_B.RelationalOperator3) {
    AVP_Main_B.Switch3 = AVP_Main_P_g.Constant8_Value;
  } else {
    AVP_Main_B.Switch3 = AVP_Main_P_g.Constant10_Value;
  }

  /* End of Switch: '<S3>/Switch3' */

  /* Switch: '<S3>/Switch2' incorporates:
   *  Constant: '<S3>/Constant9'
   */
  if (AVP_Main_B.RelationalOperator2) {
    AVP_Main_B.Switch2 = AVP_Main_P_g.Constant9_Value;
  } else {
    AVP_Main_B.Switch2 = AVP_Main_B.Switch3;
  }

  /* End of Switch: '<S3>/Switch2' */

  /* Switch: '<S3>/Switch1' incorporates:
   *  Constant: '<S3>/Constant7'
   */
  if (AVP_Main_B.RelationalOperator4) {
    *rty_AVPPark = AVP_Main_P_g.Constant7_Value;
  } else {
    *rty_AVPPark = AVP_Main_B.Switch2;
  }

  /* End of Switch: '<S3>/Switch1' */

  /* RelationalOperator: '<S3>/Relational Operator1' incorporates:
   *  Constant: '<S3>/Constant6'
   */
  AVP_Main_B.RelationalOperator1 = (rtu_AVP_Info->AVP_STATE ==
    AVP_Main_P_g.Constant6_Value);

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/Constant1'
   *  Constant: '<S3>/Constant2'
   */
  if (AVP_Main_B.RelationalOperator1) {
    AVP_Main_B.Switch = AVP_Main_P_g.Constant1_Value;
  } else {
    AVP_Main_B.Switch = AVP_Main_P_g.Constant2_Value_h;
  }

  /* End of Switch: '<S3>/Switch' */

  /* DataTypeConversion: '<S3>/Data Type Conversion1' */
  *rty_AVPTrajectoryLine_lineValid = (AVP_Main_B.Switch != 0);

  /* SignalConversion: '<S1>/TmpSignal ConversionAtBus Selector2Outport2' */
  *rty_AVPTrajectoryPoint_dx = rtu_AVP_Info->EndPoint_x;

  /* SignalConversion: '<S1>/TmpSignal ConversionAtBus Selector2Outport3' */
  *rty_AVPTrajectoryPoint_dy = rtu_AVP_Info->EndPoint_y;

  /* SignalConversion: '<S1>/TmpSignal ConversionAtBus Selector2Outport4' */
  *rty_AVPTrajectoryLine_C0 = rtu_AVP_Info->Tractory_c0;

  /* SignalConversion: '<S1>/TmpSignal ConversionAtBus Selector2Outport5' */
  *rty_AVPTrajectoryLine_C1 = rtu_AVP_Info->Tractory_c1;

  /* SignalConversion: '<S1>/TmpSignal ConversionAtBus Selector2Outport6' */
  *rty_AVPTrajectoryLine_C2 = rtu_AVP_Info->Tractory_c2;

  /* SignalConversion: '<S1>/TmpSignal ConversionAtBus Selector2Outport7' */
  *rty_AVPTrajectoryLine_C3 = rtu_AVP_Info->Tractory_c3;

  /* Constant: '<S1>/Constant2' */
  *rty_AVPTrajectoryPoint_headingA = AVP_Main_P_g.Constant2_Value;
}

/* Model initialize function */
void AVP_Main_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_AVP_Main_T *const AVP_Main_M = &(AVP_Main_MdlrefDW.rtm);

  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(AVP_Main_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) &AVP_Main_B), 0,
                sizeof(B_AVP_Main_c_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    AVP_Main_rti_init_trc_pointers();
    RTI_INIT_CODE_ENV();
  }
}
