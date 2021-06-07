/*
 * Code generation for system model 'VSI'
 *
 * Model                      : VSI
 * Model version              : 1.378
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Thu Jan  7 20:45:40 2021
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "VSI_trc_ptr.h"
#include "rti_initref_cpp.h"
#include "VSI.h"
#include "VSI_private.h"

P_VSI_T VSI_P_g = {
  /* Expression: 180
   * Referenced by: '<S1>/Constant4'
   */
  180.0,

  /* Expression: pi
   * Referenced by: '<S1>/Pi'
   */
  3.1415926535897931,

  /* Expression: 3.6
   * Referenced by: '<S1>/Constant'
   */
  3.6,

  /* Expression: 0
   * Referenced by: '<S3>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S3>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S3>/Constant1'
   */
  0.0,

  /* Expression: 0.001
   * Referenced by: '<S3>/Constant3'
   */
  0.001,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S1>/Gain'
   */
  -1.0F,

  /* Computed Parameter: Constant_Value_f
   * Referenced by: '<S9>/Constant'
   */
  1.0F,

  /* Computed Parameter: Memory1_InitialCondition
   * Referenced by: '<S3>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_p
   * Referenced by: '<S11>/Constant'
   */
  1.0F,

  /* Computed Parameter: Memory4_InitialCondition
   * Referenced by: '<S3>/Memory4'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_by
   * Referenced by: '<S8>/Constant'
   */
  1.0F,

  /* Computed Parameter: Memory2_InitialCondition
   * Referenced by: '<S3>/Memory2'
   */
  0.0F,

  /* Computed Parameter: Gain_Gain_c
   * Referenced by: '<S3>/Gain'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_a
   * Referenced by: '<S7>/Constant'
   */
  1.0F,

  /* Computed Parameter: Memory_InitialCondition
   * Referenced by: '<S3>/Memory'
   */
  0.0F,

  /* Computed Parameter: Memory5_InitialCondition
   * Referenced by: '<S3>/Memory5'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_c
   * Referenced by: '<S10>/Constant'
   */
  1.0F,

  /* Computed Parameter: Memory3_InitialCondition
   * Referenced by: '<S3>/Memory3'
   */
  0.0F
};

MdlrefDW_VSI_T VSI_MdlrefDW;

/* Block signals (default storage) */
B_VSI_c_T VSI_B;

/* Block states (default storage) */
DW_VSI_f_T VSI_DW;

/* System initialize for referenced model: 'VSI' */
void VSI_Init(void)
{
  /* InitializeConditions for Memory: '<S3>/Memory1' */
  VSI_DW.Memory1_PreviousInput = VSI_P_g.Memory1_InitialCondition;

  /* InitializeConditions for Memory: '<S3>/Memory4' */
  VSI_DW.Memory4_PreviousInput = VSI_P_g.Memory4_InitialCondition;

  /* InitializeConditions for Memory: '<S3>/Memory2' */
  VSI_DW.Memory2_PreviousInput = VSI_P_g.Memory2_InitialCondition;

  /* InitializeConditions for Memory: '<S3>/Memory' */
  VSI_DW.Memory_PreviousInput = VSI_P_g.Memory_InitialCondition;

  /* InitializeConditions for Memory: '<S3>/Memory5' */
  VSI_DW.Memory5_PreviousInput = VSI_P_g.Memory5_InitialCondition;

  /* InitializeConditions for Memory: '<S3>/Memory3' */
  VSI_DW.Memory3_PreviousInput = VSI_P_g.Memory3_InitialCondition;
}

/* System reset for referenced model: 'VSI' */
void VSI_Reset(void)
{
  /* InitializeConditions for Memory: '<S3>/Memory1' */
  VSI_DW.Memory1_PreviousInput = VSI_P_g.Memory1_InitialCondition;

  /* InitializeConditions for Memory: '<S3>/Memory4' */
  VSI_DW.Memory4_PreviousInput = VSI_P_g.Memory4_InitialCondition;

  /* InitializeConditions for Memory: '<S3>/Memory2' */
  VSI_DW.Memory2_PreviousInput = VSI_P_g.Memory2_InitialCondition;

  /* InitializeConditions for Memory: '<S3>/Memory' */
  VSI_DW.Memory_PreviousInput = VSI_P_g.Memory_InitialCondition;

  /* InitializeConditions for Memory: '<S3>/Memory5' */
  VSI_DW.Memory5_PreviousInput = VSI_P_g.Memory5_InitialCondition;

  /* InitializeConditions for Memory: '<S3>/Memory3' */
  VSI_DW.Memory3_PreviousInput = VSI_P_g.Memory3_InitialCondition;
}

/* Outputs for referenced model: 'VSI' */
void VSI(const SYS_INFO_ST *rtu_SYS_Info_st, const COM_VEHBUS_ST
         *rtu_COM_VehBus_st, real32_T *rty_VSI_VehState_st_YrsF, real32_T
         *rty_VSI_VehState_st_AxSensorF, real32_T
         *rty_VSI_VehState_st_StWheelAngl, real32_T *rty_VSI_VehState_st_vRef,
         real32_T *rty_VSI_VehState_st_aRef, real32_T
         *rty_VSI_VehState_st_AxSlope, boolean_T
         *rty_VSI_VehState_st_AxSlopeVali, real32_T
         *rty_VSI_VehState_st_Curvature)
{
  int32_T WhlSpd_valid_cnt;
  real32_T u0;
  real32_T u1;
  real32_T u1_0;
  real_T u0_0;
  real_T u1_1;

  /* Product: '<S1>/Divide4' incorporates:
   *  Constant: '<S1>/Constant4'
   *  Constant: '<S1>/Pi'
   */
  VSI_B.Divide4 = VSI_P_g.Constant4_Value / VSI_P_g.Pi_Value;

  /* Product: '<S1>/Divide7' */
  VSI_B.Divide7 = (real32_T)(rtu_COM_VehBus_st->x1E9.VehDynYawRate /
    VSI_B.Divide4);

  /* Gain: '<S1>/Gain' */
  VSI_B.YrsSensor = VSI_P_g.Gain_Gain * VSI_B.Divide7;

  /* Product: '<S1>/Divide6' */
  VSI_B.SasSensor = (real32_T)(rtu_COM_VehBus_st->x1E5.StrgWhlAng /
    VSI_B.Divide4);

  /* Product: '<S1>/Divide' incorporates:
   *  Constant: '<S1>/Constant'
   */
  VSI_B.vFL = (real32_T)(rtu_COM_VehBus_st->x24E.WhlGndVelLNonDrvn_Radar /
    VSI_P_g.Constant_Value);

  /* Logic: '<S1>/Logical Operator3' */
  VSI_B.vFLValid = !rtu_COM_VehBus_st->x24E.WhlGndVelLNonDrvnV_Radar;

  /* Product: '<S1>/Divide1' incorporates:
   *  Constant: '<S1>/Constant'
   */
  VSI_B.vFR = (real32_T)(rtu_COM_VehBus_st->x24E.WhlGndVelRNonDrvn_Radar /
    VSI_P_g.Constant_Value);

  /* Logic: '<S1>/Logical Operator5' */
  VSI_B.vFRValid = !rtu_COM_VehBus_st->x24E.WhlGndVelRNonDrvnV_Radar;

  /* Product: '<S1>/Divide2' incorporates:
   *  Constant: '<S1>/Constant'
   */
  VSI_B.vRL = (real32_T)(rtu_COM_VehBus_st->x24C.WhlGndVelLDrvn_Radar /
    VSI_P_g.Constant_Value);

  /* Logic: '<S1>/Logical Operator6' */
  VSI_B.vRLValid = !(rtu_COM_VehBus_st->x24C.WhlGndVelLDrvn_Radar != 0.0F);

  /* Product: '<S1>/Divide3' incorporates:
   *  Constant: '<S1>/Constant'
   */
  VSI_B.vRR = (real32_T)(rtu_COM_VehBus_st->x24C.WhlGndVelRDrvn_Radar /
    VSI_P_g.Constant_Value);

  /* Logic: '<S1>/Logical Operator4' */
  VSI_B.vRRValid = !rtu_COM_VehBus_st->x24C.WhlGndVelRDrvnV_Radar;

  /* Logic: '<S1>/Logical Operator2' */
  VSI_B.AxSensorValid = !rtu_COM_VehBus_st->x185.VSELongtAccV;

  /* Logic: '<S1>/Logical Operator1' */
  VSI_B.YrsSensorValid = !rtu_COM_VehBus_st->x1E9.VehDynYawRateV;

  /* Logic: '<S1>/Logical Operator' */
  VSI_B.SasSensorValid = !rtu_COM_VehBus_st->x1E5.StrgWhlAngV;

  /* BusCreator: '<S1>/Bus Creator1' */
  VSI_B.COM_VehDyn_st.AxSensor = rtu_COM_VehBus_st->x185.VSELongtAcc;
  VSI_B.COM_VehDyn_st.YrsSensor = VSI_B.YrsSensor;
  VSI_B.COM_VehDyn_st.SasSensor = VSI_B.SasSensor;
  VSI_B.COM_VehDyn_st.WhlSpd_FL = VSI_B.vFL;
  VSI_B.COM_VehDyn_st.WhlSpd_FL_Valid = VSI_B.vFLValid;
  VSI_B.COM_VehDyn_st.WhlSpd_FR = VSI_B.vFR;
  VSI_B.COM_VehDyn_st.WhlSpd_FR_Valid = VSI_B.vFRValid;
  VSI_B.COM_VehDyn_st.WhlSpd_RL = VSI_B.vRL;
  VSI_B.COM_VehDyn_st.WhlSpd_RL_Valid = VSI_B.vRLValid;
  VSI_B.COM_VehDyn_st.WhlSpd_RR = VSI_B.vRR;
  VSI_B.COM_VehDyn_st.WhlSpd_RR_Valid = VSI_B.vRRValid;
  VSI_B.COM_VehDyn_st.AxSensor_Valid = VSI_B.AxSensorValid;
  VSI_B.COM_VehDyn_st.YrsSensor_Valid = VSI_B.YrsSensorValid;
  VSI_B.COM_VehDyn_st.SasSensor_Valid = VSI_B.SasSensorValid;

  /* MinMax: '<S9>/Max' incorporates:
   *  Constant: '<S3>/P_tYrsFilt'
   */
  u0 = rtu_SYS_Info_st->dT;
  u1 = rtP_P_tYrsFilt;
  if ((u0 > u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  VSI_B.Max = u1;

  /* End of MinMax: '<S9>/Max' */

  /* Product: '<S9>/Divide' */
  VSI_B.filtFactor = rtu_SYS_Info_st->dT / VSI_B.Max;

  /* Product: '<S9>/Multiply' */
  VSI_B.Multiply = VSI_B.COM_VehDyn_st.YrsSensor * VSI_B.filtFactor;

  /* Sum: '<S9>/Add' incorporates:
   *  Constant: '<S9>/Constant'
   */
  VSI_B.Add = VSI_P_g.Constant_Value_f - VSI_B.filtFactor;

  /* Memory: '<S3>/Memory1' */
  VSI_B.Memory1 = VSI_DW.Memory1_PreviousInput;

  /* Product: '<S9>/Multiply1' */
  VSI_B.Multiply1 = VSI_B.Add * VSI_B.Memory1;

  /* Sum: '<S9>/Add1' */
  VSI_B.Add1 = VSI_B.Multiply + VSI_B.Multiply1;

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/Constant'
   */
  if (VSI_B.COM_VehDyn_st.YrsSensor_Valid) {
    VSI_B.Switch = VSI_B.Add1;
  } else {
    VSI_B.Switch = (real32_T)VSI_P_g.Constant_Value_b;
  }

  /* End of Switch: '<S3>/Switch' */

  /* MATLAB Function: '<S3>/MATLAB Function1' */
  WhlSpd_valid_cnt = 0;
  if (VSI_B.COM_VehDyn_st.WhlSpd_FL_Valid) {
    WhlSpd_valid_cnt = 1;
  }

  if (VSI_B.COM_VehDyn_st.WhlSpd_FR_Valid) {
    WhlSpd_valid_cnt++;
  }

  if (VSI_B.COM_VehDyn_st.WhlSpd_RL_Valid) {
    WhlSpd_valid_cnt++;
  }

  if (VSI_B.COM_VehDyn_st.WhlSpd_RR_Valid) {
    WhlSpd_valid_cnt++;
  }

  if (WhlSpd_valid_cnt == 4) {
    if ((VSI_B.COM_VehDyn_st.WhlSpd_FL + VSI_B.COM_VehDyn_st.WhlSpd_FR) / 2.0F >=
        (VSI_B.COM_VehDyn_st.WhlSpd_RL + VSI_B.COM_VehDyn_st.WhlSpd_RR) / 2.0F)
    {
      u0 = VSI_B.COM_VehDyn_st.WhlSpd_FL;
      u1 = VSI_B.COM_VehDyn_st.WhlSpd_FR;
      if ((u0 < u1) || rtIsNaNF(u1)) {
        u1 = u0;
      }

      u0 = VSI_B.COM_VehDyn_st.WhlSpd_RL;
      u1_0 = VSI_B.COM_VehDyn_st.WhlSpd_RR;
      if ((u0 > u1_0) || rtIsNaNF(u1_0)) {
        u1_0 = u0;
      }

      VSI_B.vRaw = (u1 + u1_0) / 2.0F;
    } else {
      u0 = VSI_B.COM_VehDyn_st.WhlSpd_FL;
      u1 = VSI_B.COM_VehDyn_st.WhlSpd_FR;
      if ((u0 > u1) || rtIsNaNF(u1)) {
        u1 = u0;
      }

      u0 = VSI_B.COM_VehDyn_st.WhlSpd_RL;
      u1_0 = VSI_B.COM_VehDyn_st.WhlSpd_RR;
      if ((u0 < u1_0) || rtIsNaNF(u1_0)) {
        u1_0 = u0;
      }

      VSI_B.vRaw = (u1 + u1_0) / 2.0F;
    }
  } else {
    VSI_B.vRaw = (((VSI_B.COM_VehDyn_st.WhlSpd_FL * (real32_T)
                    VSI_B.COM_VehDyn_st.WhlSpd_FL_Valid +
                    VSI_B.COM_VehDyn_st.WhlSpd_FR * (real32_T)
                    VSI_B.COM_VehDyn_st.WhlSpd_FR_Valid) +
                   VSI_B.COM_VehDyn_st.WhlSpd_RL * (real32_T)
                   VSI_B.COM_VehDyn_st.WhlSpd_RL_Valid) +
                  VSI_B.COM_VehDyn_st.WhlSpd_RR * (real32_T)
                  VSI_B.COM_VehDyn_st.WhlSpd_RR_Valid) / (real32_T)
      WhlSpd_valid_cnt;
  }

  /* End of MATLAB Function: '<S3>/MATLAB Function1' */

  /* MinMax: '<S11>/Max' incorporates:
   *  Constant: '<S3>/P_tVVehFilt'
   */
  u0 = rtu_SYS_Info_st->dT;
  u1 = rtP_P_tVVehFilt;
  if ((u0 > u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  VSI_B.Max_e = u1;

  /* End of MinMax: '<S11>/Max' */

  /* Product: '<S11>/Divide' */
  VSI_B.filtFactor_b = rtu_SYS_Info_st->dT / VSI_B.Max_e;

  /* Product: '<S11>/Multiply' */
  VSI_B.Multiply_c = VSI_B.vRaw * VSI_B.filtFactor_b;

  /* Sum: '<S11>/Add' incorporates:
   *  Constant: '<S11>/Constant'
   */
  VSI_B.Add_a = VSI_P_g.Constant_Value_p - VSI_B.filtFactor_b;

  /* Memory: '<S3>/Memory4' */
  VSI_B.Memory4 = VSI_DW.Memory4_PreviousInput;

  /* Product: '<S11>/Multiply1' */
  VSI_B.Multiply1_o = VSI_B.Add_a * VSI_B.Memory4;

  /* Sum: '<S11>/Add1' */
  VSI_B.Add1_f = VSI_B.Multiply_c + VSI_B.Multiply1_o;

  /* MinMax: '<S8>/Max' incorporates:
   *  Constant: '<S3>/P_tSasFilt'
   */
  u0 = rtu_SYS_Info_st->dT;
  u1 = rtP_P_tSasFilt;
  if ((u0 > u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  VSI_B.Max_h = u1;

  /* End of MinMax: '<S8>/Max' */

  /* Product: '<S8>/Divide' */
  VSI_B.filtFactor_j = rtu_SYS_Info_st->dT / VSI_B.Max_h;

  /* Product: '<S8>/Multiply' */
  VSI_B.Multiply_a = VSI_B.COM_VehDyn_st.SasSensor * VSI_B.filtFactor_j;

  /* Sum: '<S8>/Add' incorporates:
   *  Constant: '<S8>/Constant'
   */
  VSI_B.Add_f = VSI_P_g.Constant_Value_by - VSI_B.filtFactor_j;

  /* Memory: '<S3>/Memory2' */
  VSI_B.Memory2 = VSI_DW.Memory2_PreviousInput;

  /* Product: '<S8>/Multiply1' */
  VSI_B.Multiply1_d = VSI_B.Add_f * VSI_B.Memory2;

  /* Sum: '<S8>/Add1' */
  VSI_B.Add1_c = VSI_B.Multiply_a + VSI_B.Multiply1_d;

  /* Product: '<S3>/Divide2' incorporates:
   *  Constant: '<S3>/StRatio'
   */
  VSI_B.Divide2 = VSI_B.Add1_c / rtP_StRatio;

  /* Switch: '<S3>/Switch2' incorporates:
   *  Constant: '<S3>/Constant2'
   */
  if (VSI_B.COM_VehDyn_st.SasSensor_Valid) {
    VSI_B.Switch2 = VSI_B.Divide2;
  } else {
    VSI_B.Switch2 = (real32_T)VSI_P_g.Constant2_Value;
  }

  /* End of Switch: '<S3>/Switch2' */

  /* Product: '<S3>/Divide1' incorporates:
   *  Constant: '<S3>/d_WheelBase'
   */
  VSI_B.Divide1 = VSI_B.Switch2 / rtP_d_WheelBase;

  /* MATLAB Function: '<S3>/MATLAB Function3' incorporates:
   *  Constant: '<S3>/P_vHi'
   *  Constant: '<S3>/P_vLo'
   */
  if (VSI_B.Add1_f < rtP_P_vLo) {
    VSI_B.Curv = VSI_B.Divide1;
  } else if (VSI_B.Add1_f > rtP_P_vHi) {
    VSI_B.Curv = VSI_B.Switch / VSI_B.Add1_f;
  } else {
    VSI_B.Curv = (VSI_B.Add1_f - rtP_P_vLo) / (rtP_P_vHi - rtP_P_vLo) *
      (VSI_B.Switch / VSI_B.Add1_f - VSI_B.Divide1) + VSI_B.Divide1;
  }

  /* End of MATLAB Function: '<S3>/MATLAB Function3' */

  /* Gain: '<S3>/Gain' */
  VSI_B.VSI_VehState_st.Curvature = VSI_P_g.Gain_Gain_c * VSI_B.Curv;

  /* MinMax: '<S7>/Max' incorporates:
   *  Constant: '<S3>/P_tAxsFilt'
   */
  u0 = rtu_SYS_Info_st->dT;
  u1 = rtP_P_tAxsFilt;
  if ((u0 > u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  VSI_B.Max_b = u1;

  /* End of MinMax: '<S7>/Max' */

  /* Product: '<S7>/Divide' */
  VSI_B.filtFactor_d = rtu_SYS_Info_st->dT / VSI_B.Max_b;

  /* Product: '<S7>/Multiply' */
  VSI_B.Multiply_d = VSI_B.COM_VehDyn_st.AxSensor * VSI_B.filtFactor_d;

  /* Sum: '<S7>/Add' incorporates:
   *  Constant: '<S7>/Constant'
   */
  VSI_B.Add_e = VSI_P_g.Constant_Value_a - VSI_B.filtFactor_d;

  /* Memory: '<S3>/Memory' */
  VSI_B.Memory = VSI_DW.Memory_PreviousInput;

  /* Product: '<S7>/Multiply1' */
  VSI_B.Multiply1_n = VSI_B.Add_e * VSI_B.Memory;

  /* Sum: '<S7>/Add1' */
  VSI_B.Add1_n = VSI_B.Multiply_d + VSI_B.Multiply1_n;

  /* Switch: '<S3>/Switch1' incorporates:
   *  Constant: '<S3>/Constant1'
   */
  if (VSI_B.COM_VehDyn_st.AxSensor_Valid) {
    VSI_B.Switch1 = VSI_B.Add1_n;
  } else {
    VSI_B.Switch1 = (real32_T)VSI_P_g.Constant1_Value;
  }

  /* End of Switch: '<S3>/Switch1' */

  /* Memory: '<S3>/Memory5' */
  VSI_B.Memory5 = VSI_DW.Memory5_PreviousInput;

  /* Sum: '<S3>/Subtract' */
  VSI_B.Subtract = VSI_B.Add1_f - VSI_B.Memory5;

  /* MinMax: '<S3>/Max' incorporates:
   *  Constant: '<S3>/Constant3'
   */
  u0_0 = VSI_P_g.Constant3_Value;
  u1_1 = rtu_SYS_Info_st->dT;
  if ((u0_0 > u1_1) || rtIsNaN(u1_1)) {
    u1_1 = u0_0;
  }

  VSI_B.Max_i = (real32_T)u1_1;

  /* End of MinMax: '<S3>/Max' */

  /* Product: '<S3>/Divide3' */
  VSI_B.Divide3 = VSI_B.Subtract / VSI_B.Max_i;

  /* MinMax: '<S10>/Max' incorporates:
   *  Constant: '<S3>/P_tARawFilt'
   */
  u0 = rtu_SYS_Info_st->dT;
  u1 = rtP_P_tARawFilt;
  if ((u0 > u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  VSI_B.Max_iy = u1;

  /* End of MinMax: '<S10>/Max' */

  /* Product: '<S10>/Divide' */
  VSI_B.filtFactor_e = rtu_SYS_Info_st->dT / VSI_B.Max_iy;

  /* Product: '<S10>/Multiply' */
  VSI_B.Multiply_i = VSI_B.Divide3 * VSI_B.filtFactor_e;

  /* Sum: '<S10>/Add' incorporates:
   *  Constant: '<S10>/Constant'
   */
  VSI_B.Add_aw = VSI_P_g.Constant_Value_c - VSI_B.filtFactor_e;

  /* Memory: '<S3>/Memory3' */
  VSI_B.Memory3 = VSI_DW.Memory3_PreviousInput;

  /* Product: '<S10>/Multiply1' */
  VSI_B.Multiply1_d0 = VSI_B.Add_aw * VSI_B.Memory3;

  /* Sum: '<S10>/Add1' */
  VSI_B.Add1_fz = VSI_B.Multiply_i + VSI_B.Multiply1_d0;

  /* Sum: '<S3>/Add' */
  VSI_B.Add_p = VSI_B.Switch1 - VSI_B.Add1_fz;

  /* BusCreator: '<Root>/Bus Creator' */
  VSI_B.VSI_VehState_st.YrsF = VSI_B.Switch;
  VSI_B.VSI_VehState_st.AxSensorF = VSI_B.Switch1;
  VSI_B.VSI_VehState_st.StWheelAngleF = VSI_B.Switch2;
  VSI_B.VSI_VehState_st.vRef = VSI_B.Add1_f;
  VSI_B.VSI_VehState_st.aRef = VSI_B.Add1_fz;
  VSI_B.VSI_VehState_st.AxSlope = VSI_B.Add_p;
  VSI_B.VSI_VehState_st.AxSlopeValid = VSI_B.COM_VehDyn_st.AxSensor_Valid;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_VSI_VehState_st_at_inport_0' */
  *rty_VSI_VehState_st_YrsF = VSI_B.VSI_VehState_st.YrsF;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_VSI_VehState_st_at_inport_0' */
  *rty_VSI_VehState_st_AxSensorF = VSI_B.VSI_VehState_st.AxSensorF;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_VSI_VehState_st_at_inport_0' */
  *rty_VSI_VehState_st_StWheelAngl = VSI_B.VSI_VehState_st.StWheelAngleF;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_VSI_VehState_st_at_inport_0' */
  *rty_VSI_VehState_st_vRef = VSI_B.VSI_VehState_st.vRef;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_VSI_VehState_st_at_inport_0' */
  *rty_VSI_VehState_st_aRef = VSI_B.VSI_VehState_st.aRef;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_VSI_VehState_st_at_inport_0' */
  *rty_VSI_VehState_st_AxSlope = VSI_B.VSI_VehState_st.AxSlope;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_VSI_VehState_st_at_inport_0' */
  *rty_VSI_VehState_st_AxSlopeVali = VSI_B.VSI_VehState_st.AxSlopeValid;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_VSI_VehState_st_at_inport_0' */
  *rty_VSI_VehState_st_Curvature = VSI_B.VSI_VehState_st.Curvature;
}

/* Update for referenced model: 'VSI' */
void VSI_Update(void)
{
  /* Update for Memory: '<S3>/Memory1' */
  VSI_DW.Memory1_PreviousInput = VSI_B.Add1;

  /* Update for Memory: '<S3>/Memory4' */
  VSI_DW.Memory4_PreviousInput = VSI_B.Add1_f;

  /* Update for Memory: '<S3>/Memory2' */
  VSI_DW.Memory2_PreviousInput = VSI_B.Add1_c;

  /* Update for Memory: '<S3>/Memory' */
  VSI_DW.Memory_PreviousInput = VSI_B.Add1_n;

  /* Update for Memory: '<S3>/Memory5' */
  VSI_DW.Memory5_PreviousInput = VSI_B.Add1_f;

  /* Update for Memory: '<S3>/Memory3' */
  VSI_DW.Memory3_PreviousInput = VSI_B.Add1_fz;
}

/* Model initialize function */
void VSI_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_VSI_T *const VSI_M = &(VSI_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(VSI_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) &VSI_B), 0,
                sizeof(B_VSI_c_T));

  /* states (dwork) */
  (void) memset((void *)&VSI_DW, 0,
                sizeof(DW_VSI_f_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    VSI_rti_init_trc_pointers();
    RTI_INIT_CODE_ENV();
  }
}
