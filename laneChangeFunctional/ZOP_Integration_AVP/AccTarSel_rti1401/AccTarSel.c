/*
 * AccTarSel.c
 *
 * Code generation for model "AccTarSel".
 *
 * Model version              : 1.222
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Dec  2 15:41:53 2020
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AccTarSel_trc_ptr.h"
#include "AccTarSel.h"
#include "AccTarSel_private.h"

/* Named constants for Chart: '<S22>/BDC_State_Machine' */
#define AccTarSel_IN_ACTIVE            ((uint8_T)1U)
#define AccTarSel_IN_CALC              ((uint8_T)2U)
#define AccTarSel_IN_NO_ACTIVE_CHILD   ((uint8_T)0U)
#define AccTarSel_IN_PASSIVE           ((uint8_T)3U)
#define AccTarSel_IN_RECALC            ((uint8_T)4U)

/* Named constants for Chart: '<Root>/ACC_State_Machine' */
#define AccTarSel_IN_Drive             ((uint8_T)1U)
#define AccTarSel_IN_OFF               ((uint8_T)2U)
#define AccTarSel_IN_OVERRIDE          ((uint8_T)3U)
#define AccTarSel_IN_PASSIVE_f         ((uint8_T)4U)
#define AccTarSel_IN_Standstill        ((uint8_T)2U)

/* Block signals (default storage) */
B_AccTarSel_T AccTarSel_B;

/* Block states (default storage) */
DW_AccTarSel_T AccTarSel_DW;

/* External inputs (root inport signals with default storage) */
ExtU_AccTarSel_T AccTarSel_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_AccTarSel_T AccTarSel_Y;

/* Real-time model */
RT_MODEL_AccTarSel_T AccTarSel_M_;
RT_MODEL_AccTarSel_T *const AccTarSel_M = &AccTarSel_M_;

/* Lookup Binary Search Utility BINARYSEARCH_real32_T */
void BINARYSEARCH_real32_T(uint32_T *piLeft, uint32_T *piRght, real32_T u, const
  real32_T *pData, uint32_T iHi)
{
  /* Find the location of current input value in the data table. */
  *piLeft = 0U;
  *piRght = iHi;
  if (u <= pData[0] ) {
    /* Less than or equal to the smallest point in the table. */
    *piRght = 0U;
  } else if (u >= pData[iHi] ) {
    /* Greater than or equal to the largest point in the table. */
    *piLeft = iHi;
  } else {
    uint32_T i;

    /* Do a binary search. */
    while (( *piRght - *piLeft ) > 1U ) {
      /* Get the average of the left and right indices using to Floor rounding. */
      i = (*piLeft + *piRght) >> 1;

      /* Move either the right index or the left index so that */
      /*  LeftDataPoint <= CurrentValue < RightDataPoint */
      if (u < pData[i] ) {
        *piRght = i;
      } else {
        *piLeft = i;
      }
    }
  }
}

/* Lookup Utility LookUp_real32_T_real32_T */
void LookUp_real32_T_real32_T(real32_T *pY, const real32_T *pYData, real32_T u,
  const real32_T *pUData, uint32_T iHi)
{
  uint32_T iLeft;
  uint32_T iRght;
  BINARYSEARCH_real32_T( &(iLeft), &(iRght), u, pUData, iHi);

  {
    real32_T lambda;
    if (pUData[iRght] > pUData[iLeft] ) {
      real32_T num;
      real32_T den;
      den = pUData[iRght];
      den -= pUData[iLeft];
      num = u;
      num -= pUData[iLeft];
      lambda = num / den;
    } else {
      lambda = 0.0F;
    }

    {
      real32_T yLeftCast;
      real32_T yRghtCast;
      yLeftCast = pYData[iLeft];
      yRghtCast = pYData[iRght];
      yLeftCast += lambda * ( yRghtCast - yLeftCast );
      (*pY) = yLeftCast;
    }
  }
}

real32_T look1_iflf_linlxpw(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
{
  real32_T frac;
  uint32_T bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'linear'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'linear'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    bpIdx = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Linear Search */
    for (bpIdx = maxIndex >> 1U; u0 < bp0[bpIdx]; bpIdx--) {
    }

    while (u0 >= bp0[bpIdx + 1U]) {
      bpIdx++;
    }

    frac = (u0 - bp0[bpIdx]) / (bp0[bpIdx + 1U] - bp0[bpIdx]);
  } else {
    bpIdx = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[bpIdx + 1U] - table[bpIdx]) * frac + table[bpIdx];
}

real32_T look1_iflf_linlcpw(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
{
  real32_T frac;
  uint32_T bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'linear'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'linear'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    bpIdx = 0U;
    frac = 0.0F;
  } else if (u0 < bp0[maxIndex]) {
    /* Linear Search */
    for (bpIdx = maxIndex >> 1U; u0 < bp0[bpIdx]; bpIdx--) {
    }

    while (u0 >= bp0[bpIdx + 1U]) {
      bpIdx++;
    }

    frac = (u0 - bp0[bpIdx]) / (bp0[bpIdx + 1U] - bp0[bpIdx]);
  } else {
    bpIdx = maxIndex - 1U;
    frac = 1.0F;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[bpIdx + 1U] - table[bpIdx]) * frac + table[bpIdx];
}

uint32_T plook_u32f_lincka(real32_T u, const real32_T bp[], uint32_T maxIndex)
{
  uint32_T bpIndex;

  /* Prelookup - Index only
     Index Search method: 'linear'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp[0U]) {
    bpIndex = 0U;
  } else if (u < bp[maxIndex]) {
    bpIndex = linsearch_u32f(u, bp, maxIndex >> 1U);
  } else {
    bpIndex = maxIndex;
  }

  return bpIndex;
}

uint32_T linsearch_u32f(real32_T u, const real32_T bp[], uint32_T startIndex)
{
  uint32_T bpIndex;

  /* Linear Search */
  for (bpIndex = startIndex; u < bp[bpIndex]; bpIndex--) {
  }

  while (u >= bp[bpIndex + 1U]) {
    bpIndex++;
  }

  return bpIndex;
}

/*
 * Output and update for action system:
 *    '<S21>/If Action Subsystem'
 *    '<S21>/If Action Subsystem3'
 */
void AccTarSel_IfActionSubsystem(real32_T rtu_In1, real32_T *rty_Out1, real32_T *
  rty_Out2, P_IfActionSubsystem_AccTarSel_T *localP)
{
  /* Inport: '<S29>/In1' */
  *rty_Out1 = rtu_In1;

  /* SignalConversion: '<S29>/OutportBuffer_InsertedFor_Out2_at_inport_0' incorporates:
   *  Constant: '<S29>/Constant2'
   */
  *rty_Out2 = localP->Constant2_Value;
}

/*
 * Output and update for action system:
 *    '<S42>/If Action Subsystem2'
 *    '<S39>/If Action Subsystem1'
 *    '<S27>/If Action Subsystem2'
 */
void AccTarSel_IfActionSubsystem2(real32_T *rty_Out1,
  P_IfActionSubsystem2_AccTarSe_T *localP)
{
  /* SignalConversion: '<S46>/OutportBuffer_InsertedFor_Out1_at_inport_0' incorporates:
   *  Constant: '<S46>/Constant'
   */
  *rty_Out1 = localP->Constant_Value;
}

/*
 * Output and update for action system:
 *    '<S42>/If Action Subsystem3'
 *    '<S20>/If Action Subsystem'
 *    '<S20>/If Action Subsystem1'
 *    '<S16>/If Action Subsystem'
 *    '<S16>/If Action Subsystem1'
 *    '<S86>/If Action Subsystem'
 *    '<S87>/If Action Subsystem'
 *    '<S87>/If Action Subsystem1'
 *    '<S88>/If Action Subsystem'
 *    '<S111>/If Action Subsystem'
 *    '<S111>/If Action Subsystem1'
 */
void AccTarSel_IfActionSubsystem3(real32_T rtu_In1, real32_T *rty_Out1)
{
  /* Inport: '<S47>/In1' */
  *rty_Out1 = rtu_In1;
}

/*
 * Output and update for action system:
 *    '<S52>/ObjNoStop'
 *    '<S52>/ObjStopped'
 */
void AccTarSel_ObjNoStop(real32_T *rty_tToStop, real32_T *rty_dToStop,
  P_ObjNoStop_AccTarSel_T *localP)
{
  /* SignalConversion: '<S54>/OutportBuffer_InsertedFor_dToStop_at_inport_0' incorporates:
   *  Constant: '<S54>/Constant2'
   */
  *rty_dToStop = localP->Constant2_Value;

  /* SignalConversion: '<S54>/OutportBuffer_InsertedFor_tToStop_at_inport_0' incorporates:
   *  Constant: '<S54>/Constant2'
   */
  *rty_tToStop = localP->Constant2_Value;
}

/*
 * Output and update for action system:
 *    '<S27>/If Action Subsystem1'
 *    '<S27>/If Action Subsystem4'
 */
void AccTarSel_IfActionSubsystem1(real32_T rtu_vRelAim, real32_T rtu_vRel,
  real32_T *rty_Out1)
{
  /* Sum: '<S69>/Add' */
  *rty_Out1 = rtu_vRelAim - rtu_vRel;
}

/*
 * Output and update for action system:
 *    '<S28>/If Action Subsystem'
 *    '<S28>/If Action Subsystem1'
 *    '<S28>/If Action Subsystem2'
 *    '<S89>/If Action Subsystem'
 *    '<S9>/If Action Subsystem'
 *    '<S9>/If Action Subsystem1'
 */
void AccTarSel_IfActionSubsystem_d(boolean_T rtu_In1, boolean_T *rty_Out1)
{
  /* Inport: '<S77>/In1' */
  *rty_Out1 = rtu_In1;
}

real32_T rt_powf_snf(real32_T u0, real32_T u1)
{
  real32_T y;
  real32_T tmp;
  real32_T tmp_0;
  if (rtIsNaNF(u0) || rtIsNaNF(u1)) {
    y = (rtNaNF);
  } else {
    tmp = (real32_T)fabs(u0);
    tmp_0 = (real32_T)fabs(u1);
    if (rtIsInfF(u1)) {
      if (tmp == 1.0F) {
        y = 1.0F;
      } else if (tmp > 1.0F) {
        if (u1 > 0.0F) {
          y = (rtInfF);
        } else {
          y = 0.0F;
        }
      } else if (u1 > 0.0F) {
        y = 0.0F;
      } else {
        y = (rtInfF);
      }
    } else if (tmp_0 == 0.0F) {
      y = 1.0F;
    } else if (tmp_0 == 1.0F) {
      if (u1 > 0.0F) {
        y = u0;
      } else {
        y = 1.0F / u0;
      }
    } else if (u1 == 2.0F) {
      y = u0 * u0;
    } else if ((u1 == 0.5F) && (u0 >= 0.0F)) {
      y = (real32_T)sqrt(u0);
    } else if ((u0 < 0.0F) && (u1 > (real32_T)floor(u1))) {
      y = (rtNaNF);
    } else {
      y = (real32_T)pow(u0, u1);
    }
  }

  return y;
}

/* Model output function */
void AccTarSel_output(void)
{
  /* local scratch DWork variables */
  int32_T ForEach_itr;
  boolean_T sf_internal_predicateOutput;
  uint32_T bpIdx;
  int32_T i_cnt;
  int8_T rtAction;
  real32_T rtb_ImpSel_InsertedFor_In1_at_0;
  real32_T rtb_ImpSel_InsertedFor_In1_at_1;
  real32_T rtb_ImpSel_InsertedFor_In1_at_2;
  real32_T rtb_ImpSel_InsertedFor_In1_at_3;
  real32_T rtb_ImpSel_InsertedFor_In1_at_4;
  real32_T rtb_ImpSel_InsertedFor_In1_at_5;
  real32_T rtb_ImpSel_InsertedFor_In1_at_6;
  int8_T rtAction_0;
  int32_T i;
  real32_T u1;
  real32_T u0;
  real32_T u1_0;
  real32_T u1_1;
  real32_T u0_0;
  real32_T u0_1;

  /* DataTypeConversion: '<S10>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/CANInput'
   */
  AccTarSel_B.BusCreator_oy.BrakePedalApply =
    AccTarSel_U.CANInput.x1B6.BrkPdlAppd;

  /* DataTypeConversion: '<S10>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/CANInput'
   */
  AccTarSel_B.BusCreator_oy.DrvOverride = AccTarSel_U.CANInput.xFB.AccelOvrd;

  /* DataTypeConversion: '<S10>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/CANInput'
   */
  AccTarSel_B.BusCreator_oy.ACC_MainSw = AccTarSel_U.CANInput.x1E1.CCSwStsOnSwA;

  /* DataTypeConversion: '<S10>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/CANInput'
   */
  AccTarSel_B.BusCreator_oy.ACC_CancelSw =
    AccTarSel_U.CANInput.x1E1.CCSwStsCanclSwA;

  /* DataTypeConversion: '<S10>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/CANInput'
   */
  AccTarSel_B.BusCreator_oy.ACC_SetSw = AccTarSel_U.CANInput.x1E1.CCSwStsSetSwA;

  /* DataTypeConversion: '<S10>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/CANInput'
   */
  AccTarSel_B.BusCreator_oy.ACC_ResSw = AccTarSel_U.CANInput.x1E1.CCSwStsRsmSwA;

  /* DataTypeConversion: '<S10>/Data Type Conversion6' incorporates:
   *  Inport: '<Root>/CANInput'
   */
  AccTarSel_B.ACC_SpdIncSw = AccTarSel_U.CANInput.x1E1.CCSwStsSpdIncSwA;

  /* Memory: '<S10>/Memory' */
  AccTarSel_B.ACC_SpdIncSwK1 = AccTarSel_DW.Memory_PreviousInput_o;

  /* DataTypeConversion: '<S10>/Data Type Conversion7' incorporates:
   *  Inport: '<Root>/CANInput'
   */
  AccTarSel_B.ACC_SpdDecSw = AccTarSel_U.CANInput.x1E1.CCSwStsSpdDecSwA;

  /* Memory: '<S10>/Memory1' */
  AccTarSel_B.ACC_SpdDecSwK1 = AccTarSel_DW.Memory1_PreviousInput_f;

  /* DataTypeConversion: '<S10>/Data Type Conversion8' incorporates:
   *  Inport: '<Root>/CANInput'
   */
  AccTarSel_B.BusCreator_oy.ACC_DistIncSw =
    AccTarSel_U.CANInput.x1E1.CCSwStsDistIncSwA;

  /* DataTypeConversion: '<S10>/Data Type Conversion9' incorporates:
   *  Inport: '<Root>/CANInput'
   */
  AccTarSel_B.BusCreator_oy.ACC_DistDecSw =
    AccTarSel_U.CANInput.x1E1.CCSwStsDistDecSwA;

  /* DataTypeConversion: '<S10>/Data Type Conversion10' incorporates:
   *  Inport: '<Root>/CANInput'
   */
  AccTarSel_B.BusCreator_oy.GearLever = AccTarSel_U.CANInput.x194.TrShftLvrPos;

  /* BusCreator: '<S10>/Bus Creator' */
  AccTarSel_B.BusCreator_oy.ACC_SpdIncSw = AccTarSel_B.ACC_SpdIncSw;
  AccTarSel_B.BusCreator_oy.ACC_SpdIncSwK1 = AccTarSel_B.ACC_SpdIncSwK1;
  AccTarSel_B.BusCreator_oy.ACC_SpdDecSw = AccTarSel_B.ACC_SpdDecSw;
  AccTarSel_B.BusCreator_oy.ACC_SpdDecSwK1 = AccTarSel_B.ACC_SpdDecSwK1;

  /* Memory: '<Root>/Memory' */
  AccTarSel_B.ATS_Internal_ObjInfo_st = AccTarSel_DW.Memory_PreviousInput;

  /* Concatenate: '<S6>/Vector Concatenate' incorporates:
   *  Inport: '<Root>/ObjRadarList'
   */
  AccTarSel_B.VectorConcatenate[0] = AccTarSel_U.ObjRadarList.x50_20_Obj_00;
  AccTarSel_B.VectorConcatenate[1] = AccTarSel_U.ObjRadarList.x51_21_Obj_01;
  AccTarSel_B.VectorConcatenate[2] = AccTarSel_U.ObjRadarList.x52_22_Obj_02;
  AccTarSel_B.VectorConcatenate[3] = AccTarSel_U.ObjRadarList.x53_23_Obj_03;
  AccTarSel_B.VectorConcatenate[4] = AccTarSel_U.ObjRadarList.x54_24_Obj_04;
  AccTarSel_B.VectorConcatenate[5] = AccTarSel_U.ObjRadarList.x55_25_Obj_05;
  AccTarSel_B.VectorConcatenate[6] = AccTarSel_U.ObjRadarList.x56_26_Obj_06;
  AccTarSel_B.VectorConcatenate[7] = AccTarSel_U.ObjRadarList.x57_27_Obj_07;
  AccTarSel_B.VectorConcatenate[8] = AccTarSel_U.ObjRadarList.x58_28_Obj_08;
  AccTarSel_B.VectorConcatenate[9] = AccTarSel_U.ObjRadarList.x59_29_Obj_09;
  AccTarSel_B.VectorConcatenate[10] = AccTarSel_U.ObjRadarList.x5A_2A_Obj_10;
  AccTarSel_B.VectorConcatenate[11] = AccTarSel_U.ObjRadarList.x5B_2B_Obj_11;
  AccTarSel_B.VectorConcatenate[12] = AccTarSel_U.ObjRadarList.x5C_2C_Obj_12;
  AccTarSel_B.VectorConcatenate[13] = AccTarSel_U.ObjRadarList.x5D_2D_Obj_13;
  AccTarSel_B.VectorConcatenate[14] = AccTarSel_U.ObjRadarList.x5E_2E_Obj_14;
  AccTarSel_B.VectorConcatenate[15] = AccTarSel_U.ObjRadarList.x5F_2F_Obj_15;
  AccTarSel_B.VectorConcatenate[16] = AccTarSel_U.ObjRadarList.x60_30_Obj_16;
  AccTarSel_B.VectorConcatenate[17] = AccTarSel_U.ObjRadarList.x61_31_Obj_17;
  AccTarSel_B.VectorConcatenate[18] = AccTarSel_U.ObjRadarList.x62_32_Obj_18;
  AccTarSel_B.VectorConcatenate[19] = AccTarSel_U.ObjRadarList.x63_33_Obj_19;
  AccTarSel_B.VectorConcatenate[20] = AccTarSel_U.ObjRadarList.x64_34_Obj_20;
  AccTarSel_B.VectorConcatenate[21] = AccTarSel_U.ObjRadarList.x65_35_Obj_21;
  AccTarSel_B.VectorConcatenate[22] = AccTarSel_U.ObjRadarList.x66_36_Obj_22;
  AccTarSel_B.VectorConcatenate[23] = AccTarSel_U.ObjRadarList.x67_37_Obj_23;
  AccTarSel_B.VectorConcatenate[24] = AccTarSel_U.ObjRadarList.x68_38_Obj_24;
  AccTarSel_B.VectorConcatenate[25] = AccTarSel_U.ObjRadarList.x69_39_Obj_25;
  AccTarSel_B.VectorConcatenate[26] = AccTarSel_U.ObjRadarList.x6A_3A_Obj_26;
  AccTarSel_B.VectorConcatenate[27] = AccTarSel_U.ObjRadarList.x6B_3B_Obj_27;
  AccTarSel_B.VectorConcatenate[28] = AccTarSel_U.ObjRadarList.x6C_3C_Obj_28;
  AccTarSel_B.VectorConcatenate[29] = AccTarSel_U.ObjRadarList.x6D_3D_Obj_29;
  AccTarSel_B.VectorConcatenate[30] = AccTarSel_U.ObjRadarList.x6E_3E_Obj_30;
  AccTarSel_B.VectorConcatenate[31] = AccTarSel_U.ObjRadarList.x6F_3F_Obj_31;
  AccTarSel_B.VectorConcatenate[32] = AccTarSel_U.ObjRadarList.x70_40_Obj_32;
  AccTarSel_B.VectorConcatenate[33] = AccTarSel_U.ObjRadarList.x71_41_Obj_33;
  AccTarSel_B.VectorConcatenate[34] = AccTarSel_U.ObjRadarList.x72_42_Obj_34;
  AccTarSel_B.VectorConcatenate[35] = AccTarSel_U.ObjRadarList.x73_43_Obj_35;
  AccTarSel_B.VectorConcatenate[36] = AccTarSel_U.ObjRadarList.x74_44_Obj_36;
  AccTarSel_B.VectorConcatenate[37] = AccTarSel_U.ObjRadarList.x75_45_Obj_37;
  AccTarSel_B.VectorConcatenate[38] = AccTarSel_U.ObjRadarList.x76_46_Obj_38;
  AccTarSel_B.VectorConcatenate[39] = AccTarSel_U.ObjRadarList.x77_47_Obj_39;

  /* Outputs for Iterator SubSystem: '<S6>/For Each Subsystem' incorporates:
   *  ForEach: '<S117>/For Each'
   */
  for (ForEach_itr = 0; ForEach_itr < 40; ForEach_itr++) {
    /* ForEachSliceSelector: '<S117>/ImpSel_InsertedFor_In1_at_outport_0' */
    u0 = AccTarSel_B.VectorConcatenate[ForEach_itr].Obj_XAccRel;
    rtb_ImpSel_InsertedFor_In1_at_0 = AccTarSel_B.VectorConcatenate[ForEach_itr]
      .Obj_MotionPattern;
    u1 = AccTarSel_B.VectorConcatenate[ForEach_itr].Obj_ValidFlag;
    u0_1 = AccTarSel_B.VectorConcatenate[ForEach_itr].Obj_UpdateFlag;
    rtb_ImpSel_InsertedFor_In1_at_1 = AccTarSel_B.VectorConcatenate[ForEach_itr]
      .Obj_ID;
    rtb_ImpSel_InsertedFor_In1_at_2 = AccTarSel_B.VectorConcatenate[ForEach_itr]
      .Obj_YVelRel;
    rtb_ImpSel_InsertedFor_In1_at_3 = AccTarSel_B.VectorConcatenate[ForEach_itr]
      .Obj_Type;
    rtb_ImpSel_InsertedFor_In1_at_4 = AccTarSel_B.VectorConcatenate[ForEach_itr]
      .Obj_XPos;
    rtb_ImpSel_InsertedFor_In1_at_5 = AccTarSel_B.VectorConcatenate[ForEach_itr]
      .Obj_YPos;
    rtb_ImpSel_InsertedFor_In1_at_6 = AccTarSel_B.VectorConcatenate[ForEach_itr]
      .Obj_XVelRel;

    /* DataTypeConversion: '<S117>/Data Type Conversion9' */
    AccTarSel_B.CoreSubsys[ForEach_itr].DataTypeConversion9 = (u0_1 != 0.0F);

    /* DataTypeConversion: '<S117>/Data Type Conversion' */
    AccTarSel_B.CoreSubsys[ForEach_itr].Valid = (u1 != 0.0F);

    /* Sum: '<S118>/Add' incorporates:
     *  Constant: '<S118>/Constant1'
     */
    AccTarSel_B.CoreSubsys[ForEach_itr].Add = rtb_ImpSel_InsertedFor_In1_at_4 -
      AccTarSel_P.CoreSubsys.Constant1_Value;

    /* MinMax: '<S118>/Max' incorporates:
     *  Constant: '<S118>/Constant3'
     */
    u0_1 = AccTarSel_B.CoreSubsys[ForEach_itr].Add;
    u1 = AccTarSel_P.CoreSubsys.Constant3_Value;
    if ((u0_1 > u1) || rtIsNaNF(u1)) {
      u1 = u0_1;
    }

    AccTarSel_B.CoreSubsys[ForEach_itr].dx = u1;

    /* End of MinMax: '<S118>/Max' */

    /* DataTypeConversion: '<S117>/Data Type Conversion2' */
    AccTarSel_B.CoreSubsys[ForEach_itr].dy = rtb_ImpSel_InsertedFor_In1_at_5;

    /* DataTypeConversion: '<S117>/Data Type Conversion1' */
    AccTarSel_B.CoreSubsys[ForEach_itr].vx = rtb_ImpSel_InsertedFor_In1_at_6;

    /* DataTypeConversion: '<S117>/Data Type Conversion3' */
    AccTarSel_B.CoreSubsys[ForEach_itr].vy = rtb_ImpSel_InsertedFor_In1_at_2;

    /* DataTypeConversion: '<S117>/Data Type Conversion4' */
    AccTarSel_B.CoreSubsys[ForEach_itr].ax = u0;

    /* Lookup_n-D: '<S119>/1-D Lookup Table' */
    bpIdx = plook_u32f_lincka(rtb_ImpSel_InsertedFor_In1_at_0,
      AccTarSel_P.CoreSubsys.uDLookupTable_bp01Data, 5U);
    AccTarSel_B.CoreSubsys[ForEach_itr].uDLookupTable =
      AccTarSel_P.CoreSubsys.uDLookupTable_tableData[bpIdx];

    /* DataTypeConversion: '<S117>/Data Type Conversion6' */
    AccTarSel_B.CoreSubsys[ForEach_itr].MotionSts =
      AccTarSel_B.CoreSubsys[ForEach_itr].uDLookupTable;

    /* Lookup_n-D: '<S120>/1-D Lookup Table' */
    bpIdx = plook_u32f_lincka(rtb_ImpSel_InsertedFor_In1_at_3,
      AccTarSel_P.CoreSubsys.uDLookupTable_bp01Data_l, 3U);
    AccTarSel_B.CoreSubsys[ForEach_itr].uDLookupTable_o =
      AccTarSel_P.CoreSubsys.uDLookupTable_tableData_p[bpIdx];

    /* DataTypeConversion: '<S117>/Data Type Conversion7' */
    AccTarSel_B.CoreSubsys[ForEach_itr].Type =
      AccTarSel_B.CoreSubsys[ForEach_itr].uDLookupTable_o;

    /* DataTypeConversion: '<S117>/Data Type Conversion8' */
    AccTarSel_B.CoreSubsys[ForEach_itr].ID = rtb_ImpSel_InsertedFor_In1_at_1;

    /* BusCreator: '<S117>/Bus Creator' incorporates:
     *  Constant: '<S117>/Constant1'
     *  Constant: '<S117>/Constant2'
     *  Constant: '<S117>/Constant3'
     *  Constant: '<S117>/Constant4'
     */
    AccTarSel_B.CoreSubsys[ForEach_itr].BusCreator.Hist =
      AccTarSel_B.CoreSubsys[ForEach_itr].DataTypeConversion9;
    AccTarSel_B.CoreSubsys[ForEach_itr].BusCreator.Valid =
      AccTarSel_B.CoreSubsys[ForEach_itr].Valid;
    AccTarSel_B.CoreSubsys[ForEach_itr].BusCreator.dx =
      AccTarSel_B.CoreSubsys[ForEach_itr].dx;
    AccTarSel_B.CoreSubsys[ForEach_itr].BusCreator.dvarX =
      AccTarSel_P.CoreSubsys.Constant1_Value_e;
    AccTarSel_B.CoreSubsys[ForEach_itr].BusCreator.dy =
      AccTarSel_B.CoreSubsys[ForEach_itr].dy;
    AccTarSel_B.CoreSubsys[ForEach_itr].BusCreator.dvarY =
      AccTarSel_P.CoreSubsys.Constant2_Value;
    AccTarSel_B.CoreSubsys[ForEach_itr].BusCreator.vx =
      AccTarSel_B.CoreSubsys[ForEach_itr].vx;
    AccTarSel_B.CoreSubsys[ForEach_itr].BusCreator.vy =
      AccTarSel_B.CoreSubsys[ForEach_itr].vy;
    AccTarSel_B.CoreSubsys[ForEach_itr].BusCreator.ax =
      AccTarSel_B.CoreSubsys[ForEach_itr].ax;
    AccTarSel_B.CoreSubsys[ForEach_itr].BusCreator.ay =
      AccTarSel_P.CoreSubsys.Constant4_Value;
    AccTarSel_B.CoreSubsys[ForEach_itr].BusCreator.MotionSts =
      AccTarSel_B.CoreSubsys[ForEach_itr].MotionSts;
    AccTarSel_B.CoreSubsys[ForEach_itr].BusCreator.Type =
      AccTarSel_B.CoreSubsys[ForEach_itr].Type;
    AccTarSel_B.CoreSubsys[ForEach_itr].BusCreator.probExist =
      AccTarSel_P.CoreSubsys.Constant3_Value_f;
    AccTarSel_B.CoreSubsys[ForEach_itr].BusCreator.ID =
      AccTarSel_B.CoreSubsys[ForEach_itr].ID;

    /* ForEachSliceAssignment: '<S117>/ImpAsg_InsertedFor_Out1_at_inport_0' */
    AccTarSel_B.BusCreator.objdata_st[ForEach_itr] =
      AccTarSel_B.CoreSubsys[ForEach_itr].BusCreator;
  }

  /* End of Outputs for SubSystem: '<S6>/For Each Subsystem' */

  /* BusCreator: '<S6>/Bus Creator' incorporates:
   *  Constant: '<S6>/Constant'
   */
  AccTarSel_B.BusCreator.timeStamp = AccTarSel_P.Constant_Value_p;

  /* Abs: '<S111>/Abs' incorporates:
   *  Inport: '<Root>/VSI_VehState_st'
   */
  AccTarSel_B.Abs = (real32_T)fabs(AccTarSel_U.VSI_VehState_st.Curvature);

  /* RelationalOperator: '<S111>/Relational Operator' incorporates:
   *  Constant: '<S111>/P_kapHystThres'
   */
  AccTarSel_B.RelationalOperator = (AccTarSel_B.Abs <=
    AccTarSel_P.P_kapHystThres);

  /* Lookup_n-D: '<S111>/1-D Lookup Table' incorporates:
   *  Inport: '<Root>/VSI_VehState_st'
   */
  AccTarSel_B.uDLookupTable = look1_iflf_linlxpw
    (AccTarSel_U.VSI_VehState_st.Curvature, AccTarSel_P.uDLookupTable_bp01Data_d,
     AccTarSel_P.uDLookupTable_tableData_b, 5U);

  /* If: '<S111>/If' incorporates:
   *  Constant: '<S111>/Constant1'
   */
  if (AccTarSel_B.RelationalOperator) {
    /* Outputs for IfAction SubSystem: '<S111>/If Action Subsystem' incorporates:
     *  ActionPort: '<S112>/Action Port'
     */
    AccTarSel_IfActionSubsystem3(AccTarSel_P.Constant1_Value_e1,
      &AccTarSel_B.Merge);

    /* End of Outputs for SubSystem: '<S111>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S111>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S113>/Action Port'
     */
    AccTarSel_IfActionSubsystem3(AccTarSel_B.uDLookupTable, &AccTarSel_B.Merge);

    /* End of Outputs for SubSystem: '<S111>/If Action Subsystem1' */
  }

  /* End of If: '<S111>/If' */

  /* Product: '<S111>/Divide' incorporates:
   *  Constant: '<S111>/P_tCurvFilt'
   *  Inport: '<Root>/SYS_Info_st'
   */
  AccTarSel_B.Divide = AccTarSel_U.SYS_Info_st.dT / AccTarSel_P.P_tCurvFilt;

  /* Product: '<S111>/Multiply' */
  AccTarSel_B.Multiply = AccTarSel_B.Merge * AccTarSel_B.Divide;

  /* Sum: '<S111>/Add' incorporates:
   *  Constant: '<S111>/Constant3'
   */
  AccTarSel_B.Add = AccTarSel_P.Constant3_Value_k - AccTarSel_B.Divide;

  /* Memory: '<S111>/Memory' */
  AccTarSel_B.Memory = AccTarSel_DW.Memory_PreviousInput_g;

  /* Product: '<S111>/Multiply1' */
  AccTarSel_B.Multiply1 = AccTarSel_B.Add * AccTarSel_B.Memory;

  /* Sum: '<S111>/Add1' */
  AccTarSel_B.Add1 = AccTarSel_B.Multiply + AccTarSel_B.Multiply1;

  /* Product: '<S4>/Multiply' incorporates:
   *  Constant: '<S4>/Constant2'
   */
  AccTarSel_B.b = AccTarSel_B.Add1 * AccTarSel_P.Constant2_Value_fp;

  /* Outputs for Iterator SubSystem: '<Root>/ACC_Target_Selection' incorporates:
   *  ForIterator: '<S3>/For Iterator'
   */
  /* Constant: '<Root>/Constant2' */
  if (0 < AccTarSel_P.Constant2_Value_i) {
    /* Outputs for Atomic SubSystem: '<S82>/ValidObjCalc' */
    /* MinMax: '<S87>/Min' incorporates:
     *  Constant: '<S87>/Constant1'
     */
    u1_0 = AccTarSel_P.Constant1_Value_bc;

    /* MinMax: '<S87>/Min1' incorporates:
     *  Constant: '<S87>/Constant2'
     */
    u1_1 = AccTarSel_P.Constant2_Value_jk;

    /* MinMax: '<S87>/Max' incorporates:
     *  Constant: '<S87>/Constant'
     */
    u0_0 = AccTarSel_P.Constant_Value_b0;

    /* End of Outputs for SubSystem: '<S82>/ValidObjCalc' */

    /* Constant: '<S83>/axAbsInit' */
    AccTarSel_B.axAbs_j = AccTarSel_P.axAbsInit_Value;

    /* BusCreator: '<S83>/Bus Creator' */
    AccTarSel_B.BusCreator_o.axAbs = AccTarSel_B.axAbs_j;
  }

  /* Constant: '<Root>/Constant2' */
  for (i_cnt = 0; i_cnt < AccTarSel_P.Constant2_Value_i; i_cnt++) {
    AccTarSel_B.ForIterator = i_cnt;

    /* Selector: '<S3>/Selector' */
    AccTarSel_B.Selector =
      AccTarSel_B.BusCreator.objdata_st[AccTarSel_B.ForIterator];

    /* Selector: '<S3>/Selector1' */
    AccTarSel_B.Selector1 =
      AccTarSel_B.ATS_Internal_ObjInfo_st.ats_obj_st[AccTarSel_B.ForIterator];

    /* Outputs for Atomic SubSystem: '<S82>/ValidObjCalc' */
    /* If: '<S86>/If' incorporates:
     *  Constant: '<S86>/Constant'
     */
    if (AccTarSel_B.Selector.Valid) {
      /* Outputs for IfAction SubSystem: '<S86>/DistanceToTraj' incorporates:
       *  ActionPort: '<S97>/Action Port'
       */
      /* Math: '<S97>/Square' incorporates:
       *  Constant: '<S97>/Constant'
       */
      u0 = AccTarSel_B.Selector.dx;
      rtb_ImpSel_InsertedFor_In1_at_0 = AccTarSel_P.Constant_Value_hd;
      if ((u0 < 0.0F) && (rtb_ImpSel_InsertedFor_In1_at_0 > (real32_T)floor
                          (rtb_ImpSel_InsertedFor_In1_at_0))) {
        AccTarSel_B.Square = -rt_powf_snf(-u0, rtb_ImpSel_InsertedFor_In1_at_0);
      } else {
        AccTarSel_B.Square = rt_powf_snf(u0, rtb_ImpSel_InsertedFor_In1_at_0);
      }

      /* End of Math: '<S97>/Square' */

      /* Product: '<S97>/Multiply' incorporates:
       *  Constant: '<S4>/Constant3'
       */
      AccTarSel_B.Multiply_p3 = AccTarSel_B.Square *
        AccTarSel_P.Constant3_Value_b;

      /* Math: '<S97>/Square1' */
      AccTarSel_B.Square1 = AccTarSel_B.Selector.dx * AccTarSel_B.Selector.dx;

      /* Product: '<S97>/Multiply1' */
      AccTarSel_B.Multiply1_d = AccTarSel_B.Square1 * AccTarSel_B.b;

      /* Product: '<S97>/Multiply2' incorporates:
       *  Constant: '<S4>/Constant4'
       */
      AccTarSel_B.Multiply2 = AccTarSel_B.Selector.dx *
        AccTarSel_P.Constant4_Value_n5;

      /* Sum: '<S97>/Add' incorporates:
       *  Constant: '<S4>/Constant5'
       */
      AccTarSel_B.Add_c = ((AccTarSel_B.Multiply_p3 + AccTarSel_B.Multiply1_d) +
                           AccTarSel_B.Multiply2) +
        AccTarSel_P.Constant5_Value_b;

      /* Sum: '<S97>/Add1' */
      AccTarSel_B.dyToTraj = AccTarSel_B.Selector.dy - AccTarSel_B.Add_c;

      /* End of Outputs for SubSystem: '<S86>/DistanceToTraj' */
    } else {
      /* Outputs for IfAction SubSystem: '<S86>/If Action Subsystem' incorporates:
       *  ActionPort: '<S98>/Action Port'
       */
      AccTarSel_IfActionSubsystem3(AccTarSel_P.Constant_Value_gd,
        &AccTarSel_B.dyToTraj);

      /* End of Outputs for SubSystem: '<S86>/If Action Subsystem' */
    }

    /* End of If: '<S86>/If' */

    /* If: '<S85>/If1' */
    if (AccTarSel_B.Selector.Valid) {
      /* Outputs for IfAction SubSystem: '<S85>/Subsystem' incorporates:
       *  ActionPort: '<S91>/Action Port'
       */
      /* RelationalOperator: '<S91>/Relational Operator3' */
      AccTarSel_B.RelationalOperator3_d = (AccTarSel_B.Selector1.ID ==
        AccTarSel_B.Selector.ID);

      /* If: '<S91>/If' incorporates:
       *  Inport: '<S92>/In1'
       */
      if (AccTarSel_B.RelationalOperator3_d) {
        /* Outputs for IfAction SubSystem: '<S91>/Subsystem' incorporates:
         *  ActionPort: '<S93>/Action Port'
         */
        /* Abs: '<S93>/Abs' */
        AccTarSel_B.Abs_b = (real32_T)fabs(AccTarSel_B.dyToTraj);

        /* Abs: '<S93>/Abs1' */
        AccTarSel_B.Abs1 = (real32_T)fabs(AccTarSel_B.Selector.vy);

        /* RelationalOperator: '<S93>/Relational Operator' incorporates:
         *  Constant: '<S93>/P_dyCutInThres'
         */
        AccTarSel_B.RelationalOperator_g = (AccTarSel_B.Abs_b <=
          AccTarSel_P.P_dyCutInThres);

        /* Product: '<S93>/Multiply' */
        AccTarSel_B.Multiply_c = AccTarSel_B.dyToTraj * AccTarSel_B.Selector.vy;

        /* RelationalOperator: '<S93>/Relational Operator1' incorporates:
         *  Constant: '<S93>/Constant2'
         */
        AccTarSel_B.RelationalOperator1_jr = (AccTarSel_B.Multiply_c <
          AccTarSel_P.Constant2_Value);

        /* RelationalOperator: '<S93>/Relational Operator2' incorporates:
         *  Constant: '<S93>/P_vyCutInThres'
         */
        AccTarSel_B.RelationalOperator2_m = (AccTarSel_B.Abs1 >
          AccTarSel_P.P_vyCutInThres);

        /* Logic: '<S93>/Logical Operator' incorporates:
         *  Constant: '<S93>/P_CutInEnable'
         */
        AccTarSel_B.LogicalOperator_g = (AccTarSel_P.P_CutInEnable &&
          AccTarSel_B.RelationalOperator_g && AccTarSel_B.RelationalOperator1_jr
          && AccTarSel_B.RelationalOperator2_m);

        /* If: '<S93>/If' incorporates:
         *  Inport: '<S95>/dy'
         */
        if (AccTarSel_B.LogicalOperator_g) {
          /* Outputs for IfAction SubSystem: '<S93>/If Action Subsystem' incorporates:
           *  ActionPort: '<S94>/Action Port'
           */
          /* Abs: '<S94>/Abs1' */
          AccTarSel_B.Abs1_c = (real32_T)fabs(AccTarSel_B.Selector.vy);

          /* Lookup_n-D: '<S94>/1-D Lookup Table' */
          AccTarSel_B.tPred = look1_iflf_linlcpw(AccTarSel_B.Abs1_c,
            AccTarSel_P.uDLookupTable_bp01Data_c,
            AccTarSel_P.uDLookupTable_tableData_j, 1U);

          /* Product: '<S94>/Multiply' */
          AccTarSel_B.Multiply_n = AccTarSel_B.Selector.vy * AccTarSel_B.tPred;

          /* Sum: '<S94>/Add' */
          AccTarSel_B.Add_kt = AccTarSel_B.dyToTraj + AccTarSel_B.Multiply_n;

          /* MinMax: '<S94>/Max' incorporates:
           *  Constant: '<S94>/Constant'
           */
          u0_1 = AccTarSel_B.Add_kt;
          u1 = AccTarSel_P.Constant_Value_k;
          if ((u0_1 > u1) || rtIsNaNF(u1)) {
            u1 = u0_1;
          }

          AccTarSel_B.Max_gs = u1;

          /* End of MinMax: '<S94>/Max' */

          /* MinMax: '<S94>/Max1' incorporates:
           *  Constant: '<S94>/Constant'
           */
          u0_1 = AccTarSel_P.Constant_Value_k;
          u0 = AccTarSel_B.Add_kt;
          if ((u0_1 < u0) || rtIsNaNF(u0)) {
            u0 = u0_1;
          }

          AccTarSel_B.Max1_m = u0;

          /* End of MinMax: '<S94>/Max1' */

          /* Switch: '<S94>/Switch' */
          if (AccTarSel_B.dyToTraj > AccTarSel_P.Switch_Threshold_i) {
            AccTarSel_B.dyPred = AccTarSel_B.Max_gs;
          } else {
            AccTarSel_B.dyPred = AccTarSel_B.Max1_m;
          }

          /* End of Switch: '<S94>/Switch' */

          /* Abs: '<S94>/Abs' */
          AccTarSel_B.Abs_i = (real32_T)fabs(AccTarSel_B.dyPred);

          /* Lookup_n-D: '<S94>/1-D Lookup Table1' */
          AccTarSel_B.probCutIn = look1_iflf_linlcpw(AccTarSel_B.Abs_i,
            AccTarSel_P.uDLookupTable1_bp01Data,
            AccTarSel_P.uDLookupTable1_tableData, 1U);

          /* SignalConversion: '<S94>/OutportBufferForOut2' */
          AccTarSel_B.dyCutInPred = AccTarSel_B.dyPred;

          /* End of Outputs for SubSystem: '<S93>/If Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S93>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S95>/Action Port'
           */
          /* SignalConversion: '<S95>/OutportBuffer_InsertedFor_Out1_at_inport_0' incorporates:
           *  Constant: '<S95>/Constant'
           */
          AccTarSel_B.probCutIn = AccTarSel_P.Constant_Value_ga;
          AccTarSel_B.dyCutInPred = AccTarSel_B.dyToTraj;

          /* End of Outputs for SubSystem: '<S93>/If Action Subsystem1' */
        }

        /* End of If: '<S93>/If' */

        /* MinMax: '<S96>/Max' incorporates:
         *  Constant: '<S93>/P_tCutInFilt'
         *  Inport: '<Root>/SYS_Info_st'
         */
        u0_1 = AccTarSel_U.SYS_Info_st.dT;
        u1 = AccTarSel_P.P_tCutInFilt;
        if ((u0_1 > u1) || rtIsNaNF(u1)) {
          u1 = u0_1;
        }

        AccTarSel_B.Max_c = u1;

        /* End of MinMax: '<S96>/Max' */

        /* Product: '<S96>/Divide' incorporates:
         *  Inport: '<Root>/SYS_Info_st'
         */
        AccTarSel_B.filtFactor_b = AccTarSel_U.SYS_Info_st.dT /
          AccTarSel_B.Max_c;

        /* Sum: '<S96>/Add' incorporates:
         *  Constant: '<S96>/Constant'
         */
        AccTarSel_B.Add_n = AccTarSel_P.Constant_Value_no -
          AccTarSel_B.filtFactor_b;

        /* Product: '<S96>/Multiply' */
        AccTarSel_B.Multiply_m = AccTarSel_B.probCutIn *
          AccTarSel_B.filtFactor_b;

        /* Product: '<S96>/Multiply1' */
        AccTarSel_B.Multiply1_i = AccTarSel_B.Add_n *
          AccTarSel_B.Selector1.probCutInFilt;

        /* Sum: '<S96>/Add1' */
        AccTarSel_B.Merge_n = AccTarSel_B.Multiply_m + AccTarSel_B.Multiply1_i;

        /* SignalConversion: '<S93>/OutportBufferForprobCutInRaw' */
        AccTarSel_B.Merge2 = AccTarSel_B.probCutIn;

        /* End of Outputs for SubSystem: '<S91>/Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S91>/If Action Subsystem' incorporates:
         *  ActionPort: '<S92>/Action Port'
         */
        /* SignalConversion: '<S92>/OutportBuffer_InsertedFor_probCutInFiltInit_at_inport_0' incorporates:
         *  Constant: '<S92>/Constant'
         */
        AccTarSel_B.Merge_n = AccTarSel_P.Constant_Value_a;

        /* SignalConversion: '<S92>/OutportBuffer_InsertedFor_probCutInRawInit_at_inport_0' incorporates:
         *  Constant: '<S92>/Constant'
         */
        AccTarSel_B.Merge2 = AccTarSel_P.Constant_Value_a;
        AccTarSel_B.dyCutInPred = AccTarSel_B.dyToTraj;

        /* End of Outputs for SubSystem: '<S91>/If Action Subsystem' */
      }

      /* End of If: '<S91>/If' */
      /* End of Outputs for SubSystem: '<S85>/Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S85>/If Action Subsystem' incorporates:
       *  ActionPort: '<S90>/Action Port'
       */
      /* SignalConversion: '<S90>/OutportBuffer_InsertedFor_Out1_at_inport_0' incorporates:
       *  Constant: '<S90>/Constant'
       */
      AccTarSel_B.Merge_n = AccTarSel_P.Constant_Value_pu;

      /* SignalConversion: '<S90>/OutportBuffer_InsertedFor_Out2_at_inport_0' incorporates:
       *  Constant: '<S90>/Constant'
       */
      AccTarSel_B.dyCutInPred = AccTarSel_P.Constant_Value_pu;

      /* SignalConversion: '<S90>/OutportBuffer_InsertedFor_Out3_at_inport_0' incorporates:
       *  Constant: '<S90>/Constant'
       */
      AccTarSel_B.Merge2 = AccTarSel_P.Constant_Value_pu;

      /* End of Outputs for SubSystem: '<S85>/If Action Subsystem' */
    }

    /* End of If: '<S85>/If1' */

    /* If: '<S88>/If' incorporates:
     *  Constant: '<S88>/Constant'
     */
    if (AccTarSel_B.Selector.Valid) {
      /* Outputs for IfAction SubSystem: '<S88>/Subsystem' incorporates:
       *  ActionPort: '<S102>/Action Port'
       */
      /* Lookup_n-D: '<S102>/1-D Lookup Table' */
      AccTarSel_B.dyWidthTraj = look1_iflf_linlcpw(AccTarSel_B.Selector.dx,
        AccTarSel_P.uDLookupTable_bp01Data_m,
        AccTarSel_P.uDLookupTable_tableData_n, 2U);

      /* Abs: '<S102>/Abs' */
      AccTarSel_B.dyToTrajAbs = (real32_T)fabs(AccTarSel_B.dyToTraj);

      /* Sum: '<S102>/Add' */
      AccTarSel_B.Add_ko = AccTarSel_B.dyWidthTraj - AccTarSel_B.dyToTrajAbs;

      /* Product: '<S102>/Divide' */
      AccTarSel_B.Divide_n = AccTarSel_B.Add_ko / AccTarSel_B.dyWidthTraj;

      /* Lookup_n-D: '<S102>/1-D Lookup Table1' */
      AccTarSel_B.Merge_ns = look1_iflf_linlcpw(AccTarSel_B.Divide_n,
        AccTarSel_P.uDLookupTable1_bp01Data_b,
        AccTarSel_P.uDLookupTable1_tableData_d, 1U);

      /* End of Outputs for SubSystem: '<S88>/Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S88>/If Action Subsystem' incorporates:
       *  ActionPort: '<S101>/Action Port'
       */
      AccTarSel_IfActionSubsystem3(AccTarSel_P.Constant_Value_pb,
        &AccTarSel_B.Merge_ns);

      /* End of Outputs for SubSystem: '<S88>/If Action Subsystem' */
    }

    /* End of If: '<S88>/If' */

    /* RelationalOperator: '<S85>/Relational Operator2' incorporates:
     *  Constant: '<S85>/Constant1'
     */
    AccTarSel_B.isCutIn = (AccTarSel_B.Merge_n > AccTarSel_P.Constant1_Value_l);

    /* Product: '<S87>/Multiply' incorporates:
     *  Inport: '<Root>/SYS_Info_st'
     */
    AccTarSel_B.Multiply_o = AccTarSel_B.Merge_ns * AccTarSel_U.SYS_Info_st.dT;

    /* RelationalOperator: '<S87>/Relational Operator' */
    AccTarSel_B.RelationalOperator_o = (AccTarSel_B.Selector.ID !=
      AccTarSel_B.Selector1.ID);

    /* Switch: '<S87>/Switch' incorporates:
     *  Constant: '<S87>/Constant3'
     */
    if (AccTarSel_B.RelationalOperator_o) {
      AccTarSel_B.Switch = AccTarSel_P.Constant3_Value_c;
    } else {
      AccTarSel_B.Switch = AccTarSel_B.Selector1.plausEgoLane;
    }

    /* End of Switch: '<S87>/Switch' */

    /* Sum: '<S87>/Add' */
    AccTarSel_B.Add_a = AccTarSel_B.Multiply_o + AccTarSel_B.Switch;

    /* MinMax: '<S87>/Min' */
    u0 = AccTarSel_B.Add_a;
    if ((!(u0 < u1_0)) && (!rtIsNaNF(u1_0))) {
      u0 = u1_0;
    }

    AccTarSel_B.Min_c = u0;

    /* MinMax: '<S87>/Min1' */
    u1 = AccTarSel_B.Min_c;
    if ((!(u1 > u1_1)) && (!rtIsNaNF(u1_1))) {
      u1 = u1_1;
    }

    AccTarSel_B.Min1 = u1;

    /* Switch: '<S87>/Switch1' incorporates:
     *  Constant: '<S87>/Constant4'
     */
    if (AccTarSel_P.P_PlausIntegDisable) {
      AccTarSel_B.Switch1 = AccTarSel_B.Merge_ns;
    } else {
      AccTarSel_B.Switch1 = AccTarSel_B.Min1;
    }

    /* End of Switch: '<S87>/Switch1' */

    /* MinMax: '<S87>/Max' */
    u1 = AccTarSel_B.Switch1;
    if ((u0_0 > u1) || rtIsNaNF(u1)) {
      u1 = u0_0;
    }

    AccTarSel_B.Max_g = u1;

    /* If: '<S87>/If' */
    if (AccTarSel_B.isCutIn) {
      /* Outputs for IfAction SubSystem: '<S87>/If Action Subsystem' incorporates:
       *  ActionPort: '<S99>/Action Port'
       */
      AccTarSel_IfActionSubsystem3(AccTarSel_B.Max_g, &AccTarSel_B.Merge_k);

      /* End of Outputs for SubSystem: '<S87>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S87>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S100>/Action Port'
       */
      AccTarSel_IfActionSubsystem3(AccTarSel_B.Switch1, &AccTarSel_B.Merge_k);

      /* End of Outputs for SubSystem: '<S87>/If Action Subsystem1' */
    }

    /* End of If: '<S87>/If' */

    /* If: '<S89>/If' incorporates:
     *  Constant: '<S89>/Constant'
     */
    if (AccTarSel_B.Selector.Valid) {
      /* Outputs for IfAction SubSystem: '<S89>/Subsystem' incorporates:
       *  ActionPort: '<S104>/Action Port'
       */
      /* RelationalOperator: '<S105>/Relational Operator' incorporates:
       *  Constant: '<S105>/P_dvarYMax4PO'
       */
      AccTarSel_B.RelationalOperator_p = (AccTarSel_B.Selector.dvarY <=
        AccTarSel_P.P_dvarYMax4PO);

      /* RelationalOperator: '<S105>/Relational Operator1' incorporates:
       *  Constant: '<S105>/P_probExistMin4PO'
       */
      AccTarSel_B.RelationalOperator1_p = (AccTarSel_B.Selector.probExist >=
        AccTarSel_P.P_probExistMin4PO);

      /* Logic: '<S105>/Logical Operator' */
      AccTarSel_B.LogicalOperator = (AccTarSel_B.RelationalOperator_p &&
        AccTarSel_B.RelationalOperator1_p);

      /* Lookup_n-D: '<S106>/1-D Lookup Table' incorporates:
       *  Inport: '<Root>/VSI_VehState_st'
       */
      AccTarSel_B.uDLookupTable_d = look1_iflf_linlcpw
        (AccTarSel_U.VSI_VehState_st.vRef, AccTarSel_P.uDLookupTable_bp01Data_n,
         AccTarSel_P.uDLookupTable_tableData_jd, 1U);

      /* RelationalOperator: '<S106>/Relational Operator1' incorporates:
       *  Constant: '<S106>/Constant'
       */
      AccTarSel_B.RelationalOperator1_k = (AccTarSel_B.Selector.dx >
        AccTarSel_P.Constant_Value_cs);

      /* RelationalOperator: '<S106>/Relational Operator' */
      AccTarSel_B.RelationalOperator_c = (AccTarSel_B.Selector.dx <=
        AccTarSel_B.uDLookupTable_d);

      /* Logic: '<S106>/Logical Operator' */
      AccTarSel_B.LogicalOperator_n = (AccTarSel_B.RelationalOperator1_k &&
        AccTarSel_B.RelationalOperator_c);

      /* RelationalOperator: '<S107>/Relational Operator2' incorporates:
       *  Constant: '<S107>/Constant2'
       */
      AccTarSel_B.RelationalOperator2 = (AccTarSel_B.Selector.MotionSts ==
        AccTarSel_P.Constant2_Value_f);

      /* RelationalOperator: '<S107>/Relational Operator3' incorporates:
       *  Constant: '<S107>/Constant3'
       */
      AccTarSel_B.RelationalOperator3 = (AccTarSel_B.Selector.Type !=
        AccTarSel_P.Constant3_Value_md);

      /* Logic: '<S107>/Logical Operator' incorporates:
       *  Constant: '<S107>/P_StandObjEnable'
       */
      AccTarSel_B.LogicalOperator_m = (AccTarSel_B.RelationalOperator2 &&
        AccTarSel_B.RelationalOperator3 && AccTarSel_P.P_StandObjEnable);

      /* RelationalOperator: '<S107>/Relational Operator' incorporates:
       *  Constant: '<S107>/Constant'
       */
      AccTarSel_B.RelationalOperator_i = (AccTarSel_B.Selector.MotionSts ==
        AccTarSel_P.Constant_Value_ar);

      /* RelationalOperator: '<S107>/Relational Operator1' incorporates:
       *  Constant: '<S107>/Constant1'
       */
      AccTarSel_B.RelationalOperator1_l = (AccTarSel_B.Selector.MotionSts ==
        AccTarSel_P.Constant1_Value_j);

      /* Logic: '<S107>/Logical Operator1' */
      AccTarSel_B.LogicalOperator1 = (AccTarSel_B.RelationalOperator_i ||
        AccTarSel_B.RelationalOperator1_l || AccTarSel_B.LogicalOperator_m);

      /* RelationalOperator: '<S108>/Relational Operator1' incorporates:
       *  Constant: '<S108>/P_plausMin4PO'
       */
      AccTarSel_B.RelationalOperator1_j = (AccTarSel_B.Merge_k >=
        AccTarSel_P.P_plausMin4PO);

      /* Logic: '<S104>/Logical Operator' */
      AccTarSel_B.Merge_o = (AccTarSel_B.LogicalOperator_n &&
        AccTarSel_B.LogicalOperator1 && AccTarSel_B.LogicalOperator &&
        AccTarSel_B.RelationalOperator1_j);

      /* End of Outputs for SubSystem: '<S89>/Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S89>/If Action Subsystem' incorporates:
       *  ActionPort: '<S103>/Action Port'
       */
      AccTarSel_IfActionSubsystem_d(AccTarSel_P.Constant_Value_ao,
        &AccTarSel_B.Merge_o);

      /* End of Outputs for SubSystem: '<S89>/If Action Subsystem' */
    }

    /* End of If: '<S89>/If' */

    /* BusCreator: '<S84>/Bus Creator' */
    AccTarSel_B.BusCreator_p.dx = AccTarSel_B.Selector.dx;
    AccTarSel_B.BusCreator_p.dy = AccTarSel_B.Selector.dy;
    AccTarSel_B.BusCreator_p.vx = AccTarSel_B.Selector.vx;
    AccTarSel_B.BusCreator_p.vy = AccTarSel_B.Selector.vy;
    AccTarSel_B.BusCreator_p.dyToTraj = AccTarSel_B.dyToTraj;
    AccTarSel_B.BusCreator_p.dyCutInPred = AccTarSel_B.dyCutInPred;
    AccTarSel_B.BusCreator_p.probCutInRaw = AccTarSel_B.Merge2;
    AccTarSel_B.BusCreator_p.probCutInFilt = AccTarSel_B.Merge_n;
    AccTarSel_B.BusCreator_p.probEgoLane = AccTarSel_B.Merge_ns;
    AccTarSel_B.BusCreator_p.plausEgoLane = AccTarSel_B.Merge_k;
    AccTarSel_B.BusCreator_p.ValidEgoLane = AccTarSel_B.Merge_o;
    AccTarSel_B.BusCreator_p.ID = AccTarSel_B.Selector.ID;

    /* End of Outputs for SubSystem: '<S82>/ValidObjCalc' */

    /* Assignment: '<S3>/Assignment' incorporates:
     *  Assignment: '<S3>/Assignment1'
     *  Constant: '<S3>/Zero'
     *  Constant: '<S3>/Zero1'
     */
    if (i_cnt == 0) {
      for (i = 0; i < 40; i++) {
        AccTarSel_B.Assignment[i] = AccTarSel_P.Zero_Value[i];
      }

      memcpy(&AccTarSel_B.Assignment1[0], &AccTarSel_P.Zero1_Value[0], 40U *
             sizeof(ATS_OBJINFO_ST));
    }

    AccTarSel_B.Assignment[AccTarSel_B.ForIterator] = AccTarSel_B.Merge_o;

    /* End of Assignment: '<S3>/Assignment' */

    /* Assignment: '<S3>/Assignment1' */
    AccTarSel_B.Assignment1[AccTarSel_B.ForIterator] = AccTarSel_B.BusCreator_p;

    /* RelationalOperator: '<S83>/Relational Operator1' incorporates:
     *  Constant: '<S83>/Constant'
     */
    AccTarSel_B.RelationalOperator1 = (AccTarSel_B.ForIterator ==
      AccTarSel_P.Constant_Value_d);

    /* Delay: '<S83>/Delay' */
    if (AccTarSel_B.RelationalOperator1) {
      AccTarSel_DW.Delay_DSTATE = AccTarSel_P.Delay_InitialCondition;
    }

    AccTarSel_B.Delay = AccTarSel_DW.Delay_DSTATE;

    /* End of Delay: '<S83>/Delay' */

    /* RelationalOperator: '<S83>/Relational Operator' */
    AccTarSel_B.RelationalOperator_d = (AccTarSel_B.Selector.dx <
      AccTarSel_B.Delay);

    /* Logic: '<S83>/AND' */
    AccTarSel_B.AND_h = (AccTarSel_B.Merge_o && AccTarSel_B.RelationalOperator_d);

    /* DataTypeConversion: '<S83>/Data Type Conversion' */
    AccTarSel_B.DataTypeConversion = (real32_T)AccTarSel_B.ForIterator;

    /* If: '<S83>/If1' incorporates:
     *  Inport: '<S109>/In2'
     */
    if (AccTarSel_B.AND_h) {
      /* Outputs for IfAction SubSystem: '<S83>/If Action Subsystem' incorporates:
       *  ActionPort: '<S109>/Action Port'
       */
      /* SignalConversion: '<S109>/OutportBuffer_InsertedFor_valid_at_inport_0' incorporates:
       *  Constant: '<S109>/Constant'
       */
      AccTarSel_B.Valid = AccTarSel_P.Constant_Value_n5;
      AccTarSel_B.Index = AccTarSel_B.DataTypeConversion;

      /* SignalConversion: '<S109>/SigConversion_InsertedFor_Bus Selector_at_outport_0' incorporates:
       *  Inport: '<S109>/In2'
       */
      AccTarSel_B.dx = AccTarSel_B.Selector.dx;

      /* SignalConversion: '<S109>/SigConversion_InsertedFor_Bus Selector_at_outport_1' */
      AccTarSel_B.dy = AccTarSel_B.Selector.dy;

      /* SignalConversion: '<S109>/SigConversion_InsertedFor_Bus Selector_at_outport_2' */
      AccTarSel_B.vx_o = AccTarSel_B.Selector.vx;

      /* SignalConversion: '<S109>/SigConversion_InsertedFor_Bus Selector_at_outport_3' */
      AccTarSel_B.vy = AccTarSel_B.Selector.vy;

      /* SignalConversion: '<S109>/SigConversion_InsertedFor_Bus Selector_at_outport_4' */
      AccTarSel_B.ax_a = AccTarSel_B.Selector.ax;

      /* SignalConversion: '<S109>/SigConversion_InsertedFor_Bus Selector_at_outport_5' */
      AccTarSel_B.Type = AccTarSel_B.Selector.Type;

      /* End of Outputs for SubSystem: '<S83>/If Action Subsystem' */
    } else {
      if (AccTarSel_B.RelationalOperator1) {
        /* Outputs for IfAction SubSystem: '<S83>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S110>/Action Port'
         */
        /* SignalConversion: '<S110>/OutportBuffer_InsertedFor_valid_at_inport_0' incorporates:
         *  Constant: '<S110>/Constant6'
         */
        AccTarSel_B.Valid = AccTarSel_P.Constant6_Value_l;

        /* SignalConversion: '<S110>/OutportBuffer_InsertedFor_index_at_inport_0' incorporates:
         *  Constant: '<S110>/Constant5'
         */
        AccTarSel_B.Index = AccTarSel_P.Constant5_Value_e;

        /* SignalConversion: '<S110>/OutportBuffer_InsertedFor_dx_at_inport_0' incorporates:
         *  Constant: '<S110>/Constant'
         */
        AccTarSel_B.dx = AccTarSel_P.Constant_Value_b4;

        /* SignalConversion: '<S110>/OutportBuffer_InsertedFor_dy_at_inport_0' incorporates:
         *  Constant: '<S110>/Constant1'
         */
        AccTarSel_B.dy = AccTarSel_P.Constant1_Value_fqq;

        /* SignalConversion: '<S110>/OutportBuffer_InsertedFor_vx_at_inport_0' incorporates:
         *  Constant: '<S110>/Constant2'
         */
        AccTarSel_B.vx_o = AccTarSel_P.Constant2_Value_h;

        /* SignalConversion: '<S110>/OutportBuffer_InsertedFor_vy_at_inport_0' incorporates:
         *  Constant: '<S110>/Constant3'
         */
        AccTarSel_B.vy = AccTarSel_P.Constant3_Value_nq;

        /* SignalConversion: '<S110>/OutportBuffer_InsertedFor_ax_at_inport_0' incorporates:
         *  Constant: '<S110>/Constant4'
         */
        AccTarSel_B.ax_a = AccTarSel_P.Constant4_Value_f;

        /* SignalConversion: '<S110>/OutportBuffer_InsertedFor_Type_at_inport_0' incorporates:
         *  Constant: '<S110>/Constant7'
         */
        AccTarSel_B.Type = AccTarSel_P.Constant7_Value_c;

        /* End of Outputs for SubSystem: '<S83>/If Action Subsystem1' */
      }
    }

    /* End of If: '<S83>/If1' */

    /* BusCreator: '<S83>/Bus Creator' */
    AccTarSel_B.BusCreator_o.Valid = AccTarSel_B.Valid;
    AccTarSel_B.BusCreator_o.Index = AccTarSel_B.Index;
    AccTarSel_B.BusCreator_o.dx = AccTarSel_B.dx;
    AccTarSel_B.BusCreator_o.dy = AccTarSel_B.dy;
    AccTarSel_B.BusCreator_o.vx = AccTarSel_B.vx_o;
    AccTarSel_B.BusCreator_o.vy = AccTarSel_B.vy;
    AccTarSel_B.BusCreator_o.ax = AccTarSel_B.ax_a;
    AccTarSel_B.BusCreator_o.Type = AccTarSel_B.Type;

    /* Update for Delay: '<S83>/Delay' */
    AccTarSel_DW.Delay_DSTATE = AccTarSel_B.dx;
  }

  /* End of Outputs for SubSystem: '<Root>/ACC_Target_Selection' */

  /* Memory: '<Root>/Memory1' */
  AccTarSel_B.Memory1 = AccTarSel_DW.Memory1_PreviousInput;

  /* RelationalOperator: '<S11>/Relational Operator' */
  AccTarSel_B.RelationalOperator_a = (AccTarSel_B.Memory1.Index ==
    AccTarSel_B.BusCreator_o.Index);

  /* Logic: '<S11>/AND' */
  AccTarSel_B.AND = (AccTarSel_B.Memory1.Valid &&
                     AccTarSel_B.RelationalOperator_a &&
                     AccTarSel_B.BusCreator_o.Valid);

  /* SignalConversion: '<S11>/SigConversion_InsertedFor_Bus Selector_at_outport_2' */
  AccTarSel_B.vx = AccTarSel_B.BusCreator_o.vx;

  /* SignalConversion: '<S11>/SigConversion_InsertedFor_Bus Selector_at_outport_3' */
  AccTarSel_B.ax = AccTarSel_B.BusCreator_o.ax;

  /* If: '<S11>/If' incorporates:
   *  Inport: '<S126>/ax'
   *  Inport: '<S126>/vx'
   */
  if (AccTarSel_B.AND) {
    /* Outputs for IfAction SubSystem: '<S11>/preFilt' incorporates:
     *  ActionPort: '<S127>/Action Port'
     */
    /* MinMax: '<S129>/Max' incorporates:
     *  Constant: '<S127>/Constant'
     *  Inport: '<Root>/SYS_Info_st'
     */
    u0_0 = AccTarSel_U.SYS_Info_st.dT;
    u1 = AccTarSel_P.P_tFiltVxAxPO;
    if ((u0_0 > u1) || rtIsNaNF(u1)) {
      u1 = u0_0;
    }

    AccTarSel_B.Max_e = u1;

    /* End of MinMax: '<S129>/Max' */

    /* Product: '<S129>/Divide' incorporates:
     *  Inport: '<Root>/SYS_Info_st'
     */
    AccTarSel_B.filtFactor = AccTarSel_U.SYS_Info_st.dT / AccTarSel_B.Max_e;

    /* Product: '<S129>/Multiply' */
    AccTarSel_B.Multiply_p = AccTarSel_B.ax * AccTarSel_B.filtFactor;

    /* Sum: '<S129>/Add' incorporates:
     *  Constant: '<S129>/Constant'
     */
    AccTarSel_B.Add_l = AccTarSel_P.Constant_Value_dd - AccTarSel_B.filtFactor;

    /* Product: '<S129>/Multiply1' */
    AccTarSel_B.Multiply1_k = AccTarSel_B.Add_l * AccTarSel_B.Memory1.ax;

    /* Sum: '<S129>/Add1' */
    AccTarSel_B.Add1_g = AccTarSel_B.Multiply_p + AccTarSel_B.Multiply1_k;

    /* Sum: '<S127>/Add' incorporates:
     *  Inport: '<Root>/VSI_VehState_st'
     */
    AccTarSel_B.Add_h = AccTarSel_B.Add1_g + AccTarSel_U.VSI_VehState_st.aRef;

    /* SignalConversion: '<S127>/OutportBufferForaxPreFilt' */
    AccTarSel_B.ax_p = AccTarSel_B.Add1_g;

    /* MinMax: '<S128>/Max' incorporates:
     *  Constant: '<S127>/Constant1'
     *  Inport: '<Root>/SYS_Info_st'
     */
    u0_0 = AccTarSel_U.SYS_Info_st.dT;
    u1 = AccTarSel_P.P_tFiltAxAbsPO;
    if ((u0_0 > u1) || rtIsNaNF(u1)) {
      u1 = u0_0;
    }

    AccTarSel_B.Max_f = u1;

    /* End of MinMax: '<S128>/Max' */

    /* Product: '<S128>/Divide' incorporates:
     *  Inport: '<Root>/SYS_Info_st'
     */
    AccTarSel_B.filtFactor_f = AccTarSel_U.SYS_Info_st.dT / AccTarSel_B.Max_f;

    /* Sum: '<S128>/Add' incorporates:
     *  Constant: '<S128>/Constant'
     */
    AccTarSel_B.Add_p = AccTarSel_P.Constant_Value_ag - AccTarSel_B.filtFactor_f;

    /* Product: '<S128>/Multiply' */
    AccTarSel_B.Multiply_k = AccTarSel_B.Add_h * AccTarSel_B.filtFactor_f;

    /* Product: '<S128>/Multiply1' */
    AccTarSel_B.Multiply1_j = AccTarSel_B.Add_p * AccTarSel_B.Memory1.axAbs;

    /* Sum: '<S128>/Add1' */
    AccTarSel_B.axAbs = AccTarSel_B.Multiply_k + AccTarSel_B.Multiply1_j;

    /* MinMax: '<S130>/Max' incorporates:
     *  Constant: '<S127>/Constant'
     *  Inport: '<Root>/SYS_Info_st'
     */
    u0_0 = AccTarSel_U.SYS_Info_st.dT;
    u1 = AccTarSel_P.P_tFiltVxAxPO;
    if ((u0_0 > u1) || rtIsNaNF(u1)) {
      u1 = u0_0;
    }

    AccTarSel_B.Max_d = u1;

    /* End of MinMax: '<S130>/Max' */

    /* Product: '<S130>/Divide' incorporates:
     *  Inport: '<Root>/SYS_Info_st'
     */
    AccTarSel_B.filtFactor_c = AccTarSel_U.SYS_Info_st.dT / AccTarSel_B.Max_d;

    /* Sum: '<S130>/Add' incorporates:
     *  Constant: '<S130>/Constant'
     */
    AccTarSel_B.Add_k = AccTarSel_P.Constant_Value_o3 - AccTarSel_B.filtFactor_c;

    /* Product: '<S130>/Multiply' */
    AccTarSel_B.Multiply_ps = AccTarSel_B.vx * AccTarSel_B.filtFactor_c;

    /* Product: '<S130>/Multiply1' */
    AccTarSel_B.Multiply1_n = AccTarSel_B.Add_k * AccTarSel_B.Memory1.vx;

    /* Sum: '<S130>/Add1' */
    AccTarSel_B.vx_m = AccTarSel_B.Multiply_ps + AccTarSel_B.Multiply1_n;

    /* End of Outputs for SubSystem: '<S11>/preFilt' */
  } else {
    /* Outputs for IfAction SubSystem: '<S11>/If Action Subsystem' incorporates:
     *  ActionPort: '<S126>/Action Port'
     */
    AccTarSel_B.vx_m = AccTarSel_B.vx;
    AccTarSel_B.ax_n = AccTarSel_B.ax;

    /* Sum: '<S126>/Add' incorporates:
     *  Inport: '<Root>/VSI_VehState_st'
     *  Inport: '<S126>/ax'
     *  Inport: '<S126>/vx'
     */
    AccTarSel_B.axAbs = AccTarSel_B.ax_n + AccTarSel_U.VSI_VehState_st.aRef;

    /* SignalConversion: '<S126>/OutportBufferForaxPreFiltInit' */
    AccTarSel_B.ax_p = AccTarSel_B.ax_n;

    /* End of Outputs for SubSystem: '<S11>/If Action Subsystem' */
  }

  /* End of If: '<S11>/If' */

  /* BusCreator: '<S11>/Bus Creator' incorporates:
   *  Outport: '<Root>/ATS_Po_st'
   */
  AccTarSel_Y.ATS_Po_st.Valid = AccTarSel_B.BusCreator_o.Valid;
  AccTarSel_Y.ATS_Po_st.Index = AccTarSel_B.BusCreator_o.Index;
  AccTarSel_Y.ATS_Po_st.dx = AccTarSel_B.BusCreator_o.dx;
  AccTarSel_Y.ATS_Po_st.dy = AccTarSel_B.BusCreator_o.dy;
  AccTarSel_Y.ATS_Po_st.vx = AccTarSel_B.vx_m;
  AccTarSel_Y.ATS_Po_st.vy = AccTarSel_B.BusCreator_o.vy;
  AccTarSel_Y.ATS_Po_st.ax = AccTarSel_B.ax_p;
  AccTarSel_Y.ATS_Po_st.axAbs = AccTarSel_B.axAbs;
  AccTarSel_Y.ATS_Po_st.Type = AccTarSel_B.BusCreator_o.Type;

  /* RelationalOperator: '<S9>/Relational Operator6' incorporates:
   *  Constant: '<S9>/P_dObjDrvOffMax'
   *  Outport: '<Root>/ATS_Po_st'
   */
  AccTarSel_B.RelationalOperator6 = (AccTarSel_Y.ATS_Po_st.dx >
    AccTarSel_P.P_dObjDrvOffMax);

  /* RelationalOperator: '<S9>/Relational Operator7' incorporates:
   *  Constant: '<S9>/P_dObjDrvOffMin'
   *  Outport: '<Root>/ATS_Po_st'
   */
  AccTarSel_B.RelationalOperator7 = (AccTarSel_Y.ATS_Po_st.dx >
    AccTarSel_P.P_dObjDrvOffMin);

  /* Sum: '<S9>/Add' incorporates:
   *  Inport: '<Root>/VSI_VehState_st'
   *  Outport: '<Root>/ATS_Po_st'
   */
  AccTarSel_B.vAbsObj = AccTarSel_Y.ATS_Po_st.vx +
    AccTarSel_U.VSI_VehState_st.vRef;

  /* RelationalOperator: '<S9>/Relational Operator8' incorporates:
   *  Constant: '<S9>/P_vObjDrvOff'
   */
  AccTarSel_B.RelationalOperator8 = (AccTarSel_B.vAbsObj >
    AccTarSel_P.P_vObjDrvOff);

  /* Logic: '<S9>/AND2' */
  AccTarSel_B.AND2 = (AccTarSel_B.RelationalOperator7 &&
                      AccTarSel_B.RelationalOperator8);

  /* Logic: '<S9>/AND3' */
  AccTarSel_B.AND3 = (AccTarSel_B.RelationalOperator6 || AccTarSel_B.AND2);

  /* If: '<S9>/If' incorporates:
   *  Constant: '<S9>/Constant'
   *  Outport: '<Root>/ATS_Po_st'
   */
  if (AccTarSel_Y.ATS_Po_st.Valid) {
    /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem' incorporates:
     *  ActionPort: '<S124>/Action Port'
     */
    AccTarSel_IfActionSubsystem_d(AccTarSel_B.AND3, &AccTarSel_B.DrvOffEnable);

    /* End of Outputs for SubSystem: '<S9>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S125>/Action Port'
     */
    AccTarSel_IfActionSubsystem_d(AccTarSel_P.Constant_Value_kx,
      &AccTarSel_B.DrvOffEnable);

    /* End of Outputs for SubSystem: '<S9>/If Action Subsystem1' */
  }

  /* End of If: '<S9>/If' */

  /* Chart: '<Root>/ACC_State_Machine' incorporates:
   *  Constant: '<Root>/P_tMinDrvPhase'
   *  Constant: '<Root>/P_vStandStill'
   *  Inport: '<Root>/SYS_Info_st'
   *  Inport: '<Root>/VSI_VehState_st'
   */
  if (AccTarSel_DW.is_active_c3_AccTarSel == 0U) {
    AccTarSel_DW.is_active_c3_AccTarSel = 1U;
    AccTarSel_DW.is_c3_AccTarSel = AccTarSel_IN_OFF;
    AccTarSel_B.AST_Info_st.MainState = 0.0F;
    AccTarSel_B.AST_Info_st.tMinInDrv = 0.0F;
    AccTarSel_B.AST_Info_st.vSet = 0.0F;
  } else {
    switch (AccTarSel_DW.is_c3_AccTarSel) {
     case AccTarSel_IN_ACTIVE:
      if (AccTarSel_B.BusCreator_oy.DrvOverride) {
        AccTarSel_DW.is_ACTIVE = AccTarSel_IN_NO_ACTIVE_CHILD;
        AccTarSel_DW.is_c3_AccTarSel = AccTarSel_IN_OVERRIDE;
        AccTarSel_B.AST_Info_st.MainState = 4.0F;
        AccTarSel_B.AST_Info_st.tMinInDrv = 0.0F;
      } else {
        sf_internal_predicateOutput = (AccTarSel_B.BusCreator_oy.ACC_CancelSw ||
          AccTarSel_B.BusCreator_oy.BrakePedalApply ||
          (AccTarSel_B.BusCreator_oy.GearLever < 3.0F));
        if (sf_internal_predicateOutput) {
          AccTarSel_DW.is_ACTIVE = AccTarSel_IN_NO_ACTIVE_CHILD;
          AccTarSel_DW.is_c3_AccTarSel = AccTarSel_IN_PASSIVE_f;
          AccTarSel_B.AST_Info_st.MainState = 1.0F;
          AccTarSel_B.AST_Info_st.tMinInDrv = 0.0F;
        } else if (!AccTarSel_B.BusCreator_oy.ACC_MainSw) {
          AccTarSel_DW.is_ACTIVE = AccTarSel_IN_NO_ACTIVE_CHILD;
          AccTarSel_DW.is_c3_AccTarSel = AccTarSel_IN_OFF;
          AccTarSel_B.AST_Info_st.MainState = 0.0F;
          AccTarSel_B.AST_Info_st.tMinInDrv = 0.0F;
          AccTarSel_B.AST_Info_st.vSet = 0.0F;
        } else {
          if (AccTarSel_B.BusCreator_oy.ACC_SpdIncSw &&
              (!AccTarSel_B.BusCreator_oy.ACC_SpdIncSwK1)) {
            AccTarSel_B.AST_Info_st.vSet += 1.32275128F;
          } else {
            if (AccTarSel_B.BusCreator_oy.ACC_SpdDecSw &&
                (!AccTarSel_B.BusCreator_oy.ACC_SpdDecSwK1)) {
              AccTarSel_B.AST_Info_st.vSet -= 1.32275128F;
            }
          }

          sf_internal_predicateOutput = (rtIsNaNF(AccTarSel_B.AST_Info_st.vSet) ||
            (AccTarSel_B.AST_Info_st.vSet > 31.746031746031743));
          if (sf_internal_predicateOutput) {
            u0 = 31.7460308F;
          } else {
            u0 = AccTarSel_B.AST_Info_st.vSet;
          }

          AccTarSel_B.AST_Info_st.vSet = u0;
          sf_internal_predicateOutput = (rtIsNaNF(AccTarSel_B.AST_Info_st.vSet) ||
            (AccTarSel_B.AST_Info_st.vSet < 7.9365079365079358));
          if (sf_internal_predicateOutput) {
            u0 = 7.9365077F;
          } else {
            u0 = AccTarSel_B.AST_Info_st.vSet;
          }

          AccTarSel_B.AST_Info_st.vSet = u0;
          if (AccTarSel_DW.is_ACTIVE == AccTarSel_IN_Drive) {
            sf_internal_predicateOutput = ((AccTarSel_U.VSI_VehState_st.vRef <
              AccTarSel_P.P_vStandStill) && (AccTarSel_B.AST_Info_st.tMinInDrv ==
              0.0F));
            if (sf_internal_predicateOutput) {
              AccTarSel_DW.is_ACTIVE = AccTarSel_IN_Standstill;
              AccTarSel_B.AST_Info_st.MainState = 3.0F;
              AccTarSel_B.AST_Info_st.tMinInDrv = AccTarSel_P.P_tMinDrvPhase;
            } else if (AccTarSel_B.AST_Info_st.tMinInDrv >
                       AccTarSel_U.SYS_Info_st.dT) {
              AccTarSel_B.AST_Info_st.tMinInDrv -= AccTarSel_U.SYS_Info_st.dT;
            } else {
              AccTarSel_B.AST_Info_st.tMinInDrv = 0.0F;
            }
          } else {
            if (AccTarSel_B.DrvOffEnable) {
              AccTarSel_DW.is_ACTIVE = AccTarSel_IN_Drive;
              AccTarSel_B.AST_Info_st.MainState = 2.0F;
            }
          }
        }
      }
      break;

     case AccTarSel_IN_OFF:
      if (AccTarSel_B.BusCreator_oy.ACC_MainSw) {
        AccTarSel_DW.is_c3_AccTarSel = AccTarSel_IN_PASSIVE_f;
        AccTarSel_B.AST_Info_st.MainState = 1.0F;
        AccTarSel_B.AST_Info_st.tMinInDrv = 0.0F;
      }
      break;

     case AccTarSel_IN_OVERRIDE:
      if (!AccTarSel_B.BusCreator_oy.DrvOverride) {
        AccTarSel_DW.is_c3_AccTarSel = AccTarSel_IN_ACTIVE;
        if (AccTarSel_B.BusCreator_oy.ACC_SetSw) {
          AccTarSel_B.AST_Info_st.vSet = AccTarSel_U.VSI_VehState_st.vRef /
            1.05F;
        }

        AccTarSel_DW.is_ACTIVE = AccTarSel_IN_Drive;
        AccTarSel_B.AST_Info_st.MainState = 2.0F;
      } else {
        sf_internal_predicateOutput = (AccTarSel_B.BusCreator_oy.ACC_CancelSw ||
          AccTarSel_B.BusCreator_oy.BrakePedalApply ||
          (AccTarSel_B.BusCreator_oy.GearLever < 3.0F));
        if (sf_internal_predicateOutput) {
          AccTarSel_DW.is_c3_AccTarSel = AccTarSel_IN_PASSIVE_f;
          AccTarSel_B.AST_Info_st.MainState = 1.0F;
          AccTarSel_B.AST_Info_st.tMinInDrv = 0.0F;
        } else {
          if (!AccTarSel_B.BusCreator_oy.ACC_MainSw) {
            AccTarSel_DW.is_c3_AccTarSel = AccTarSel_IN_OFF;
            AccTarSel_B.AST_Info_st.MainState = 0.0F;
            AccTarSel_B.AST_Info_st.tMinInDrv = 0.0F;
            AccTarSel_B.AST_Info_st.vSet = 0.0F;
          }
        }
      }
      break;

     default:
      sf_internal_predicateOutput = ((AccTarSel_B.BusCreator_oy.ACC_SetSw ||
        (AccTarSel_B.BusCreator_oy.ACC_ResSw && (AccTarSel_B.AST_Info_st.vSet !=
        0.0F))) && (!AccTarSel_B.BusCreator_oy.BrakePedalApply) &&
        (AccTarSel_B.BusCreator_oy.GearLever >= 3.0F));
      if (sf_internal_predicateOutput) {
        AccTarSel_DW.is_c3_AccTarSel = AccTarSel_IN_ACTIVE;
        if (AccTarSel_B.BusCreator_oy.ACC_SetSw) {
          AccTarSel_B.AST_Info_st.vSet = AccTarSel_U.VSI_VehState_st.vRef /
            1.05F;
        }

        AccTarSel_DW.is_ACTIVE = AccTarSel_IN_Drive;
        AccTarSel_B.AST_Info_st.MainState = 2.0F;
      } else {
        if (!AccTarSel_B.BusCreator_oy.ACC_MainSw) {
          AccTarSel_DW.is_c3_AccTarSel = AccTarSel_IN_OFF;
          AccTarSel_B.AST_Info_st.MainState = 0.0F;
          AccTarSel_B.AST_Info_st.tMinInDrv = 0.0F;
          AccTarSel_B.AST_Info_st.vSet = 0.0F;
        }
      }
      break;
    }
  }

  /* End of Chart: '<Root>/ACC_State_Machine' */

  /* Sum: '<S16>/Add' incorporates:
   *  Inport: '<Root>/VSI_VehState_st'
   */
  AccTarSel_B.vDiff = AccTarSel_B.AST_Info_st.vSet -
    AccTarSel_U.VSI_VehState_st.vRef;

  /* RelationalOperator: '<S16>/Relational Operator' incorporates:
   *  Constant: '<S16>/Constant'
   */
  AccTarSel_B.RelationalOperator_k = (AccTarSel_B.vDiff >
    AccTarSel_P.Constant_Value_m);

  /* If: '<S16>/If' incorporates:
   *  Constant: '<S16>/P_tSSCNeg'
   *  Constant: '<S16>/P_tSSCPos'
   */
  if (AccTarSel_B.RelationalOperator_k) {
    /* Outputs for IfAction SubSystem: '<S16>/If Action Subsystem' incorporates:
     *  ActionPort: '<S80>/Action Port'
     */
    AccTarSel_IfActionSubsystem3(AccTarSel_P.P_tSSCPos, &AccTarSel_B.tSSC);

    /* End of Outputs for SubSystem: '<S16>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S16>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S81>/Action Port'
     */
    AccTarSel_IfActionSubsystem3(AccTarSel_P.P_tSSCNeg, &AccTarSel_B.tSSC);

    /* End of Outputs for SubSystem: '<S16>/If Action Subsystem1' */
  }

  /* End of If: '<S16>/If' */

  /* Product: '<S16>/Divide' */
  AccTarSel_B.aSSC = AccTarSel_B.vDiff / AccTarSel_B.tSSC;

  /* Memory: '<S15>/Memory' */
  AccTarSel_B.Memory_p = AccTarSel_DW.Memory_PreviousInput_j1;

  /* Memory: '<S1>/Memory' */
  AccTarSel_B.Memory_a = AccTarSel_DW.Memory_PreviousInput_a;

  /* If: '<S15>/If' incorporates:
   *  Outport: '<Root>/ATS_Po_st'
   */
  if (AccTarSel_Y.ATS_Po_st.Valid) {
    rtAction = 0;

    /* Outputs for IfAction SubSystem: '<S15>/FollowObjValid' incorporates:
     *  ActionPort: '<S20>/Action Port'
     */
    /* Sum: '<S21>/Add' incorporates:
     *  Inport: '<Root>/VSI_VehState_st'
     */
    AccTarSel_B.vAbsObj_e = AccTarSel_Y.ATS_Po_st.vx +
      AccTarSel_U.VSI_VehState_st.vRef;

    /* RelationalOperator: '<S21>/Relational Operator2' incorporates:
     *  Constant: '<S21>/Constant'
     */
    AccTarSel_B.RelationalOperator2_f = (AccTarSel_Y.ATS_Po_st.vx >=
      AccTarSel_P.Constant_Value_ha);

    /* SignalConversion: '<S21>/SigConversion_InsertedFor_Bus Selector1_at_outport_2' */
    AccTarSel_B.axAbs_h = AccTarSel_Y.ATS_Po_st.axAbs;

    /* RelationalOperator: '<S21>/Relational Operator1' incorporates:
     *  Constant: '<S21>/Constant'
     */
    AccTarSel_B.RelationalOperator1_m = (AccTarSel_B.axAbs_h >=
      AccTarSel_P.Constant_Value_ha);

    /* MinMax: '<S35>/Min1' incorporates:
     *  Constant: '<S35>/Constant1'
     */
    u0_0 = AccTarSel_B.axAbs_h;
    u0 = AccTarSel_P.Constant1_Value_fq;
    if ((u0_0 < u0) || rtIsNaNF(u0)) {
      u0 = u0_0;
    }

    AccTarSel_B.Min1_l = u0;

    /* End of MinMax: '<S35>/Min1' */

    /* Product: '<S35>/Divide' */
    AccTarSel_B.Divide_p = AccTarSel_B.vAbsObj_e / AccTarSel_B.Min1_l;

    /* Abs: '<S35>/Abs' */
    AccTarSel_B.Abs_f = (real32_T)fabs(AccTarSel_B.Divide_p);

    /* MinMax: '<S35>/Min' incorporates:
     *  Constant: '<S35>/Constant'
     */
    u0_0 = AccTarSel_P.Constant_Value_b;
    u0 = AccTarSel_B.Abs_f;
    if ((u0_0 < u0) || rtIsNaNF(u0)) {
      u0 = u0_0;
    }

    AccTarSel_B.Min_p = u0;

    /* End of MinMax: '<S35>/Min' */

    /* Switch: '<S35>/Switch' incorporates:
     *  Constant: '<S35>/Constant'
     */
    if (AccTarSel_B.axAbs_h >= AccTarSel_P.Switch_Threshold) {
      AccTarSel_B.Switch_p = AccTarSel_P.Constant_Value_b;
    } else {
      AccTarSel_B.Switch_p = AccTarSel_B.Min_p;
    }

    /* End of Switch: '<S35>/Switch' */

    /* Abs: '<S33>/Abs' */
    AccTarSel_B.Abs_fz = (real32_T)fabs(AccTarSel_Y.ATS_Po_st.vx);

    /* RelationalOperator: '<S33>/Relational Operator' incorporates:
     *  Constant: '<S33>/Constant2'
     */
    AccTarSel_B.RelationalOperator_pq = (AccTarSel_B.Abs_fz <
      AccTarSel_P.Constant2_Value_cl);

    /* Lookup_n-D: '<S32>/1-D Lookup Table' */
    AccTarSel_B.uDLookupTable_n = look1_iflf_linlxpw(AccTarSel_B.vAbsObj_e,
      AccTarSel_P.uDLookupTable_bp01Data, AccTarSel_P.uDLookupTable_tableData,
      1U);

    /* Product: '<S23>/Multiply' incorporates:
     *  Constant: '<S23>/P_tTimeGapSet'
     *  Inport: '<Root>/VSI_VehState_st'
     */
    AccTarSel_B.Multiply_h = AccTarSel_U.VSI_VehState_st.vRef *
      AccTarSel_P.P_tTimeGapSet;

    /* MinMax: '<S23>/Max' incorporates:
     *  Constant: '<S23>/P_dAimMin'
     */
    u0_0 = AccTarSel_B.Multiply_h;
    u1 = AccTarSel_P.P_dAimMin;
    if ((u0_0 > u1) || rtIsNaNF(u1)) {
      u1 = u0_0;
    }

    AccTarSel_B.Max_h = u1;

    /* End of MinMax: '<S23>/Max' */

    /* Gain: '<S32>/Gain' */
    AccTarSel_B.Gain = AccTarSel_P.Gain_Gain_f * AccTarSel_Y.ATS_Po_st.dx;

    /* MinMax: '<S32>/Min' */
    u0_0 = AccTarSel_B.uDLookupTable_n;
    u0 = AccTarSel_B.Max_h;
    if ((u0_0 < u0) || rtIsNaNF(u0)) {
      u0 = u0_0;
    }

    u1_0 = AccTarSel_B.Gain;
    if ((!(u0 < u1_0)) && (!rtIsNaNF(u1_0))) {
      u0 = u1_0;
    }

    AccTarSel_B.Min_d = u0;

    /* End of MinMax: '<S32>/Min' */

    /* Sum: '<S32>/Add1' */
    AccTarSel_B.dSlowDown = AccTarSel_Y.ATS_Po_st.dx - AccTarSel_B.Min_d;

    /* If: '<S33>/If' incorporates:
     *  Inport: '<S37>/aAbsObj'
     */
    if (AccTarSel_B.RelationalOperator_pq) {
      /* Outputs for IfAction SubSystem: '<S33>/Subsystem1' incorporates:
       *  ActionPort: '<S37>/Action Port'
       */
      /* SignalConversion: '<S37>/OutportBuffer_InsertedFor_tSameSpd_at_inport_0' incorporates:
       *  Constant: '<S37>/Constant'
       */
      AccTarSel_B.Merge_h = AccTarSel_P.Constant_Value_e;
      AccTarSel_B.Merge1 = AccTarSel_B.axAbs_h;

      /* End of Outputs for SubSystem: '<S33>/Subsystem1' */
    } else {
      /* Outputs for IfAction SubSystem: '<S33>/Subsystem' incorporates:
       *  ActionPort: '<S36>/Action Port'
       */
      /* Math: '<S36>/Square1' */
      AccTarSel_B.Square1_p = AccTarSel_Y.ATS_Po_st.vx *
        AccTarSel_Y.ATS_Po_st.vx;

      /* Sum: '<S36>/Add1' incorporates:
       *  Constant: '<S36>/Constant1'
       */
      AccTarSel_B.Add1_f = AccTarSel_P.Constant1_Value_d - AccTarSel_B.Square1_p;

      /* Product: '<S36>/Multiply' incorporates:
       *  Constant: '<S36>/Constant'
       */
      AccTarSel_B.Multiply_lj = AccTarSel_B.dSlowDown *
        AccTarSel_P.Constant_Value_f;

      /* Product: '<S36>/Divide' */
      AccTarSel_B.Divide_g = AccTarSel_B.Add1_f / AccTarSel_B.Multiply_lj;

      /* Product: '<S36>/Divide1' */
      AccTarSel_B.Divide1_a = AccTarSel_Y.ATS_Po_st.vx / AccTarSel_B.Divide_g;

      /* Abs: '<S36>/Abs' */
      AccTarSel_B.Abs_p = (real32_T)fabs(AccTarSel_B.Divide1_a);

      /* Sum: '<S36>/Add' */
      AccTarSel_B.Merge1 = AccTarSel_B.Divide_g + AccTarSel_B.axAbs_h;

      /* MinMax: '<S36>/Min' incorporates:
       *  Constant: '<S36>/Constant2'
       */
      u0_0 = AccTarSel_P.Constant2_Value_p;
      u0 = AccTarSel_B.Abs_p;
      if ((u0_0 < u0) || rtIsNaNF(u0)) {
        u0 = u0_0;
      }

      AccTarSel_B.Merge_h = u0;

      /* End of MinMax: '<S36>/Min' */
      /* End of Outputs for SubSystem: '<S33>/Subsystem' */
    }

    /* End of If: '<S33>/If' */

    /* RelationalOperator: '<S21>/Relational Operator' */
    AccTarSel_B.RelationalOperator_l = (AccTarSel_B.Switch_p >=
      AccTarSel_B.Merge_h);

    /* Logic: '<S21>/OR' */
    AccTarSel_B.OR = (AccTarSel_B.RelationalOperator1_m ||
                      AccTarSel_B.RelationalOperator_l);

    /* Math: '<S34>/Square1' incorporates:
     *  Inport: '<Root>/VSI_VehState_st'
     */
    AccTarSel_B.Square1_o = AccTarSel_U.VSI_VehState_st.vRef *
      AccTarSel_U.VSI_VehState_st.vRef;

    /* Math: '<S34>/Square' */
    AccTarSel_B.Square_a = AccTarSel_B.vAbsObj_e * AccTarSel_B.vAbsObj_e;

    /* Abs: '<S34>/Abs' */
    AccTarSel_B.Abs_o = (real32_T)fabs(AccTarSel_B.axAbs_h);

    /* Product: '<S34>/Multiply' incorporates:
     *  Constant: '<S34>/Constant'
     */
    AccTarSel_B.Multiply_on = AccTarSel_B.Abs_o * AccTarSel_P.Constant_Value_nv;

    /* Product: '<S34>/Divide' */
    AccTarSel_B.Divide_o = AccTarSel_B.Square_a / AccTarSel_B.Multiply_on;

    /* Sum: '<S34>/Add' */
    AccTarSel_B.Add_g = AccTarSel_B.dSlowDown + AccTarSel_B.Divide_o;

    /* Product: '<S34>/Multiply1' incorporates:
     *  Constant: '<S34>/Constant1'
     */
    AccTarSel_B.Multiply1_e = AccTarSel_B.Add_g * AccTarSel_P.Constant1_Value_h;

    /* Product: '<S34>/Divide1' */
    AccTarSel_B.Divide1 = AccTarSel_B.Square1_o / AccTarSel_B.Multiply1_e;

    /* Gain: '<S34>/Gain' */
    AccTarSel_B.Gain_m = AccTarSel_P.Gain_Gain_k * AccTarSel_B.Divide1;

    /* If: '<S21>/If1' */
    if (AccTarSel_B.RelationalOperator2_f) {
      /* Outputs for IfAction SubSystem: '<S21>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S30>/Action Port'
       */
      /* SignalConversion: '<S30>/OutportBuffer_InsertedFor_Out1_at_inport_0' incorporates:
       *  Constant: '<S30>/Constant1'
       */
      AccTarSel_B.aApproach = AccTarSel_P.Constant1_Value_f;

      /* SignalConversion: '<S30>/OutportBuffer_InsertedFor_Out2_at_inport_0' incorporates:
       *  Constant: '<S30>/Constant2'
       */
      AccTarSel_B.case_b = AccTarSel_P.Constant2_Value_is;

      /* End of Outputs for SubSystem: '<S21>/If Action Subsystem2' */
    } else if (AccTarSel_B.OR) {
      /* Outputs for IfAction SubSystem: '<S21>/If Action Subsystem' incorporates:
       *  ActionPort: '<S29>/Action Port'
       */
      AccTarSel_IfActionSubsystem(AccTarSel_B.Merge1, &AccTarSel_B.aApproach,
        &AccTarSel_B.case_b, &AccTarSel_P.IfActionSubsystem_m);

      /* End of Outputs for SubSystem: '<S21>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S21>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S31>/Action Port'
       */
      AccTarSel_IfActionSubsystem(AccTarSel_B.Gain_m, &AccTarSel_B.aApproach,
        &AccTarSel_B.case_b, &AccTarSel_P.IfActionSubsystem3);

      /* End of Outputs for SubSystem: '<S21>/If Action Subsystem3' */
    }

    /* End of If: '<S21>/If1' */

    /* Sum: '<S40>/Add' incorporates:
     *  Inport: '<Root>/VSI_VehState_st'
     */
    AccTarSel_B.vAbsObj_b = AccTarSel_U.VSI_VehState_st.vRef +
      AccTarSel_Y.ATS_Po_st.vx;

    /* RelationalOperator: '<S52>/Relational Operator4' incorporates:
     *  Constant: '<S52>/P_vObjNoStop'
     */
    AccTarSel_B.RelationalOperator4 = (AccTarSel_B.vAbsObj_b >
      AccTarSel_P.P_vObjNoStop);

    /* SignalConversion: '<S40>/SigConversion_InsertedFor_Bus Selector1_at_outport_1' */
    AccTarSel_B.axAbs_h3 = AccTarSel_Y.ATS_Po_st.axAbs;

    /* RelationalOperator: '<S52>/Relational Operator5' incorporates:
     *  Constant: '<S52>/Constant6'
     */
    AccTarSel_B.RelationalOperator5 = (AccTarSel_B.axAbs_h3 >
      AccTarSel_P.Constant6_Value_e);

    /* Logic: '<S52>/AND' */
    AccTarSel_B.AND_hk = (AccTarSel_B.RelationalOperator4 &&
                          AccTarSel_B.RelationalOperator5);

    /* RelationalOperator: '<S52>/Relational Operator2' incorporates:
     *  Constant: '<S52>/P_vObjStop'
     */
    AccTarSel_B.RelationalOperator2_j = (AccTarSel_B.vAbsObj_b <
      AccTarSel_P.P_vObjStop);

    /* If: '<S52>/If' */
    if (AccTarSel_B.AND_hk) {
      /* Outputs for IfAction SubSystem: '<S52>/ObjNoStop' incorporates:
       *  ActionPort: '<S54>/Action Port'
       */
      AccTarSel_ObjNoStop(&AccTarSel_B.tToStop, &AccTarSel_B.dObjToStop,
                          &AccTarSel_P.ObjNoStop);

      /* End of Outputs for SubSystem: '<S52>/ObjNoStop' */
    } else if (AccTarSel_B.RelationalOperator2_j) {
      /* Outputs for IfAction SubSystem: '<S52>/ObjStopped' incorporates:
       *  ActionPort: '<S55>/Action Port'
       */
      AccTarSel_ObjNoStop(&AccTarSel_B.tToStop, &AccTarSel_B.dObjToStop,
                          &AccTarSel_P.ObjStopped);

      /* End of Outputs for SubSystem: '<S52>/ObjStopped' */
    } else {
      /* Outputs for IfAction SubSystem: '<S52>/ObjStopping' incorporates:
       *  ActionPort: '<S56>/Action Port'
       */
      /* MinMax: '<S56>/Min' incorporates:
       *  Constant: '<S56>/Constant1'
       */
      u0_0 = AccTarSel_B.axAbs_h3;
      u0 = AccTarSel_P.Constant1_Value_b;
      if ((u0_0 < u0) || rtIsNaNF(u0)) {
        u0 = u0_0;
      }

      AccTarSel_B.Min_cs = u0;

      /* End of MinMax: '<S56>/Min' */

      /* Product: '<S56>/Divide1' */
      AccTarSel_B.Divide1_p = AccTarSel_B.vAbsObj_b / AccTarSel_B.Min_cs;

      /* Abs: '<S56>/Abs' */
      AccTarSel_B.tToStop = (real32_T)fabs(AccTarSel_B.Divide1_p);

      /* Math: '<S56>/Square' */
      AccTarSel_B.Square_bq = AccTarSel_B.vAbsObj_b * AccTarSel_B.vAbsObj_b;

      /* Product: '<S56>/Multiply' incorporates:
       *  Constant: '<S56>/Constant2'
       */
      AccTarSel_B.Multiply_f = AccTarSel_B.Min_cs *
        AccTarSel_P.Constant2_Value_b;

      /* Product: '<S56>/Divide2' */
      AccTarSel_B.Divide2_f = AccTarSel_B.Square_bq / AccTarSel_B.Multiply_f;

      /* Abs: '<S56>/Abs1' */
      AccTarSel_B.dObjToStop = (real32_T)fabs(AccTarSel_B.Divide2_f);

      /* End of Outputs for SubSystem: '<S52>/ObjStopping' */
    }

    /* End of If: '<S52>/If' */

    /* Memory: '<S22>/Memory' */
    AccTarSel_B.Memory_i = AccTarSel_DW.Memory_PreviousInput_k;

    /* RelationalOperator: '<S57>/Relational Operator' incorporates:
     *  Constant: '<S57>/Constant3'
     */
    AccTarSel_B.RelationalOperator_b = (AccTarSel_B.Memory_i ==
      AccTarSel_P.Constant3_Value_n);

    /* RelationalOperator: '<S57>/Relational Operator1' incorporates:
     *  Constant: '<S57>/Constant2'
     */
    AccTarSel_B.RelationalOperator1_n = (AccTarSel_B.Memory_i ==
      AccTarSel_P.Constant2_Value_m);

    /* Logic: '<S57>/OR' */
    AccTarSel_B.OR_m = (AccTarSel_B.RelationalOperator_b ||
                        AccTarSel_B.RelationalOperator1_n);

    /* Switch: '<S57>/Switch' incorporates:
     *  Constant: '<S57>/P_tToStop'
     *  Constant: '<S57>/P_tToStopInBDC'
     */
    if (AccTarSel_B.OR_m) {
      AccTarSel_B.Switch_e = AccTarSel_P.P_tToStopInBDC;
    } else {
      AccTarSel_B.Switch_e = AccTarSel_P.P_tToStop;
    }

    /* End of Switch: '<S57>/Switch' */

    /* RelationalOperator: '<S52>/Relational Operator1' */
    AccTarSel_B.RelationalOperator1_a = (AccTarSel_B.tToStop <
      AccTarSel_B.Switch_e);

    /* RelationalOperator: '<S52>/Relational Operator3' incorporates:
     *  Constant: '<S52>/P_tToStop'
     */
    AccTarSel_B.RelationalOperator3_dy = (AccTarSel_B.tToStop <
      AccTarSel_P.P_tToStopTrig);

    /* RelationalOperator: '<S40>/Relational Operator2' incorporates:
     *  Constant: '<S40>/P_vEgoLowBDC'
     *  Inport: '<Root>/VSI_VehState_st'
     */
    AccTarSel_B.RelationalOperator2_n = (AccTarSel_U.VSI_VehState_st.vRef <
      AccTarSel_P.P_vEgoLowBDC);

    /* SignalConversion: '<S40>/SigConversion_InsertedFor_Bus Selector1_at_outport_2' */
    AccTarSel_B.dx_l = AccTarSel_Y.ATS_Po_st.dx;

    /* Math: '<S53>/Square' incorporates:
     *  Inport: '<Root>/VSI_VehState_st'
     */
    AccTarSel_B.Square_b = AccTarSel_U.VSI_VehState_st.vRef *
      AccTarSel_U.VSI_VehState_st.vRef;

    /* MinMax: '<S53>/Min' incorporates:
     *  Constant: '<S53>/Constant7'
     *  Inport: '<Root>/VSI_VehState_st'
     */
    u0_0 = AccTarSel_U.VSI_VehState_st.aRef;
    u0 = AccTarSel_P.Constant7_Value_n;
    if ((u0_0 < u0) || rtIsNaNF(u0)) {
      u0 = u0_0;
    }

    AccTarSel_B.Min_m = u0;

    /* End of MinMax: '<S53>/Min' */

    /* Product: '<S53>/Multiply' incorporates:
     *  Constant: '<S53>/Constant8'
     */
    AccTarSel_B.Multiply_cv = AccTarSel_B.Min_m * AccTarSel_P.Constant8_Value;

    /* Product: '<S53>/Divide2' */
    AccTarSel_B.dEgoToStop = AccTarSel_B.Square_b / AccTarSel_B.Multiply_cv;

    /* Abs: '<S53>/Abs' */
    AccTarSel_B.Abs_j = (real32_T)fabs(AccTarSel_B.dEgoToStop);

    /* Sum: '<S53>/Add2' incorporates:
     *  Constant: '<S53>/P_dStandStill'
     */
    AccTarSel_B.dRes = ((AccTarSel_B.dObjToStop + AccTarSel_B.dx_l) -
                        AccTarSel_B.Abs_j) - AccTarSel_P.P_dStandStill;

    /* RelationalOperator: '<S53>/Relational Operator4' incorporates:
     *  Constant: '<S53>/P_dResMax'
     */
    AccTarSel_B.RelationalOperator4_k = (AccTarSel_B.dRes >
      AccTarSel_P.P_dResMax);

    /* RelationalOperator: '<S53>/Relational Operator5' incorporates:
     *  Constant: '<S53>/P_vObjReCalc'
     */
    AccTarSel_B.RelationalOperator5_g = (AccTarSel_B.vAbsObj_b >
      AccTarSel_P.P_vObjReCalc);

    /* RelationalOperator: '<S53>/Relational Operator2' incorporates:
     *  Constant: '<S53>/Constant'
     */
    AccTarSel_B.RelationalOperator2_nk = (AccTarSel_B.dRes <
      AccTarSel_P.Constant_Value_l);

    /* Logic: '<S53>/OR' */
    AccTarSel_B.OR_g = (AccTarSel_B.RelationalOperator4_k ||
                        AccTarSel_B.RelationalOperator5_g ||
                        AccTarSel_B.RelationalOperator2_nk);

    /* RelationalOperator: '<S53>/Relational Operator' incorporates:
     *  Constant: '<S53>/Constant1'
     */
    AccTarSel_B.RelationalOperator_ij = (AccTarSel_B.Memory_i ==
      AccTarSel_P.Constant1_Value_fi);

    /* Memory: '<S22>/Memory2' */
    AccTarSel_B.Memory2 = AccTarSel_DW.Memory2_PreviousInput;

    /* Memory: '<S22>/Memory1' */
    AccTarSel_B.T30 = AccTarSel_DW.Memory1_4_PreviousInput;

    /* RelationalOperator: '<S53>/Relational Operator1' */
    AccTarSel_B.RelationalOperator1_b = (AccTarSel_B.Memory2 >= AccTarSel_B.T30);

    /* Logic: '<S53>/AND' */
    AccTarSel_B.AND_l = (AccTarSel_B.OR_g && AccTarSel_B.RelationalOperator_ij &&
                         AccTarSel_B.RelationalOperator1_b);

    /* Chart: '<S22>/BDC_State_Machine' incorporates:
     *  Inport: '<Root>/SYS_Info_st'
     */
    if (AccTarSel_DW.is_active_c1_AccTarSel == 0U) {
      AccTarSel_DW.is_active_c1_AccTarSel = 1U;
      AccTarSel_DW.is_c1_AccTarSel = AccTarSel_IN_PASSIVE;
      AccTarSel_B.BDC_State = 0.0F;
      AccTarSel_B.tElapse = 0.0F;
    } else {
      switch (AccTarSel_DW.is_c1_AccTarSel) {
       case AccTarSel_IN_ACTIVE:
        AccTarSel_B.BDC_State = 2.0F;
        sf_internal_predicateOutput = (AccTarSel_B.RelationalOperator1_a &&
          AccTarSel_B.RelationalOperator2_n);
        if (!sf_internal_predicateOutput) {
          AccTarSel_DW.is_c1_AccTarSel = AccTarSel_IN_PASSIVE;
          AccTarSel_B.BDC_State = 0.0F;
          AccTarSel_B.tElapse = 0.0F;
        } else if (AccTarSel_B.AND_l) {
          AccTarSel_DW.is_c1_AccTarSel = AccTarSel_IN_RECALC;
          AccTarSel_B.BDC_State = 3.0F;
          AccTarSel_B.tElapse = AccTarSel_U.SYS_Info_st.dT;
        } else {
          AccTarSel_B.tElapse += AccTarSel_U.SYS_Info_st.dT;
        }
        break;

       case AccTarSel_IN_CALC:
        AccTarSel_B.BDC_State = 1.0F;
        sf_internal_predicateOutput = (AccTarSel_B.RelationalOperator1_a &&
          AccTarSel_B.RelationalOperator2_n);
        if (!sf_internal_predicateOutput) {
          AccTarSel_DW.is_c1_AccTarSel = AccTarSel_IN_PASSIVE;
          AccTarSel_B.BDC_State = 0.0F;
          AccTarSel_B.tElapse = 0.0F;
        } else {
          sf_internal_predicateOutput = AccTarSel_B.RelationalOperator3_dy;
          if (sf_internal_predicateOutput) {
            AccTarSel_DW.is_c1_AccTarSel = AccTarSel_IN_ACTIVE;
            AccTarSel_B.BDC_State = 2.0F;
            AccTarSel_B.tElapse += AccTarSel_U.SYS_Info_st.dT;
          }
        }
        break;

       case AccTarSel_IN_PASSIVE:
        AccTarSel_B.BDC_State = 0.0F;
        sf_internal_predicateOutput = (AccTarSel_B.RelationalOperator1_a &&
          AccTarSel_B.RelationalOperator2_n);
        if (sf_internal_predicateOutput) {
          AccTarSel_DW.is_c1_AccTarSel = AccTarSel_IN_CALC;
          AccTarSel_B.BDC_State = 1.0F;
          AccTarSel_B.tElapse = 0.0F;
        }
        break;

       default:
        AccTarSel_B.BDC_State = 3.0F;
        sf_internal_predicateOutput = AccTarSel_B.RelationalOperator3_dy;
        if (sf_internal_predicateOutput) {
          AccTarSel_DW.is_c1_AccTarSel = AccTarSel_IN_ACTIVE;
          AccTarSel_B.BDC_State = 2.0F;
          AccTarSel_B.tElapse += AccTarSel_U.SYS_Info_st.dT;
        } else {
          sf_internal_predicateOutput = AccTarSel_B.RelationalOperator3_dy;
          if (!sf_internal_predicateOutput) {
            AccTarSel_DW.is_c1_AccTarSel = AccTarSel_IN_CALC;
            AccTarSel_B.BDC_State = 1.0F;
            AccTarSel_B.tElapse = 0.0F;
          }
        }
        break;
      }
    }

    /* End of Chart: '<S22>/BDC_State_Machine' */

    /* Memory: '<S22>/Memory1' */
    AccTarSel_B.SmoothStopCond = AccTarSel_DW.Memory1_1_PreviousInput;
    AccTarSel_B.aMax = AccTarSel_DW.Memory1_2_PreviousInput;
    AccTarSel_B.T = AccTarSel_DW.Memory1_3_PreviousInput;
    AccTarSel_B.adt1 = AccTarSel_DW.Memory1_5_PreviousInput;
    AccTarSel_B.adt2 = AccTarSel_DW.Memory1_6_PreviousInput;
    AccTarSel_B.a0 = AccTarSel_DW.Memory1_7_PreviousInput;
    AccTarSel_B.a0Raw = AccTarSel_DW.Memory1_8_PreviousInput;

    /* RelationalOperator: '<S39>/Relational Operator' incorporates:
     *  Constant: '<S39>/Constant3'
     */
    AccTarSel_B.RelationalOperator_h = (AccTarSel_B.BDC_State ==
      AccTarSel_P.Constant3_Value_g);

    /* RelationalOperator: '<S39>/Relational Operator1' incorporates:
     *  Constant: '<S39>/Constant1'
     */
    AccTarSel_B.RelationalOperator1_d = (AccTarSel_B.BDC_State ==
      AccTarSel_P.Constant1_Value_fr);

    /* Logic: '<S39>/OR' */
    AccTarSel_B.OR_d = (AccTarSel_B.RelationalOperator_h ||
                        AccTarSel_B.RelationalOperator1_d);

    /* RelationalOperator: '<S41>/Relational Operator' incorporates:
     *  Constant: '<S41>/Constant2'
     */
    AccTarSel_B.RelationalOperator_ps = (AccTarSel_B.BDC_State ==
      AccTarSel_P.Constant2_Value_g);

    /* RelationalOperator: '<S41>/Relational Operator1' incorporates:
     *  Constant: '<S41>/Constant3'
     */
    AccTarSel_B.RelationalOperator1_o = (AccTarSel_B.BDC_State ==
      AccTarSel_P.Constant3_Value_m);

    /* Memory: '<S41>/Memory' */
    AccTarSel_B.Memory_e = AccTarSel_DW.Memory_PreviousInput_n;

    /* RelationalOperator: '<S41>/Relational Operator2' incorporates:
     *  Constant: '<S41>/Constant4'
     */
    AccTarSel_B.RelationalOperator2_d = (AccTarSel_B.Memory_e ==
      AccTarSel_P.Constant4_Value_n);

    /* Logic: '<S41>/OR1' */
    AccTarSel_B.OR1 = (AccTarSel_B.RelationalOperator1_o &&
                       AccTarSel_B.RelationalOperator2_d);

    /* RelationalOperator: '<S41>/Relational Operator3' incorporates:
     *  Constant: '<S41>/Constant1'
     */
    AccTarSel_B.RelationalOperator3_h = (AccTarSel_B.BDC_State ==
      AccTarSel_P.Constant1_Value_be);

    /* Logic: '<S41>/OR' */
    AccTarSel_B.OR_b = (AccTarSel_B.RelationalOperator_ps || AccTarSel_B.OR1 ||
                        AccTarSel_B.RelationalOperator3_h);

    /* Memory: '<S41>/Memory1' */
    AccTarSel_B.a0Raw_o = AccTarSel_DW.Memory1_8_PreviousInput_h;
    AccTarSel_B.a0_d = AccTarSel_DW.Memory1_7_PreviousInput_b;
    AccTarSel_B.adt2_c = AccTarSel_DW.Memory1_6_PreviousInput_c;
    AccTarSel_B.adt1_m = AccTarSel_DW.Memory1_5_PreviousInput_a;
    AccTarSel_B.T30_p = AccTarSel_DW.Memory1_4_PreviousInput_k;
    AccTarSel_B.T_b = AccTarSel_DW.Memory1_3_PreviousInput_d;
    AccTarSel_B.aMax_i = AccTarSel_DW.Memory1_2_PreviousInput_p;
    AccTarSel_B.SmoothStopCond_c = AccTarSel_DW.Memory1_1_PreviousInput_h;

    /* If: '<S41>/If' */
    if (AccTarSel_B.OR_b) {
      rtAction_0 = 0;

      /* Outputs for IfAction SubSystem: '<S41>/calc' incorporates:
       *  ActionPort: '<S59>/Action Port'
       */
      /* Gain: '<S62>/Gain1' */
      AccTarSel_B.Gain1 = AccTarSel_P.Gain1_Gain_f * AccTarSel_B.Memory_a;

      /* Gain: '<S62>/Gain2' incorporates:
       *  Inport: '<Root>/VSI_VehState_st'
       */
      AccTarSel_B.Gain2 = AccTarSel_P.Gain2_Gain_g *
        AccTarSel_U.VSI_VehState_st.aRef;

      /* Sum: '<S62>/Add1' */
      AccTarSel_B.Add1_e = AccTarSel_B.Gain1 + AccTarSel_B.Gain2;

      /* MinMax: '<S62>/Min' incorporates:
       *  Constant: '<S62>/Constant'
       */
      u0_0 = AccTarSel_P.Constant_Value_da;
      u0 = AccTarSel_B.Add1_e;
      if ((u0_0 < u0) || rtIsNaNF(u0)) {
        u0 = u0_0;
      }

      AccTarSel_B.Min_j = u0;

      /* End of MinMax: '<S62>/Min' */

      /* SignalConversion: '<S62>/SigConversion_InsertedFor_Bus Selector_at_outport_1' incorporates:
       *  Inport: '<Root>/VSI_VehState_st'
       */
      AccTarSel_B.vRef = AccTarSel_U.VSI_VehState_st.vRef;

      /* Math: '<S62>/Square' */
      AccTarSel_B.Square_g = AccTarSel_B.vRef * AccTarSel_B.vRef;

      /* Sum: '<S62>/Add' incorporates:
       *  Constant: '<S62>/P_dStandStill'
       */
      AccTarSel_B.Add_hf = (AccTarSel_Y.ATS_Po_st.dx + AccTarSel_B.dObjToStop) -
        AccTarSel_P.P_dStandStill;

      /* MinMax: '<S62>/Max' incorporates:
       *  Constant: '<S62>/P_dStandStillMin'
       */
      u0_0 = AccTarSel_B.Add_hf;
      u1 = AccTarSel_P.P_dStandStillMin;
      if ((u0_0 > u1) || rtIsNaNF(u1)) {
        u1 = u0_0;
      }

      AccTarSel_B.dAimBDC = u1;

      /* End of MinMax: '<S62>/Max' */

      /* Product: '<S62>/Divide' */
      AccTarSel_B.Divide_m = AccTarSel_B.Square_g / AccTarSel_B.dAimBDC;

      /* Gain: '<S62>/Gain' */
      AccTarSel_B.Gain_g = AccTarSel_P.Gain_Gain_p * AccTarSel_B.Divide_m;

      /* RelationalOperator: '<S59>/Relational Operator' */
      AccTarSel_B.SmoothStopCond_l = (AccTarSel_B.Min_j >= AccTarSel_B.Gain_g);

      /* SignalConversion: '<S59>/BusConversion_InsertedFor_Profile_at_inport_0' */
      AccTarSel_B.SmoothStopCond_p = AccTarSel_B.SmoothStopCond_l;

      /* Switch: '<S59>/Switch' */
      if (AccTarSel_B.SmoothStopCond_l) {
        AccTarSel_B.a0_o = AccTarSel_B.Min_j;
      } else {
        AccTarSel_B.a0_o = AccTarSel_B.Gain_g;
      }

      /* End of Switch: '<S59>/Switch' */

      /* Product: '<S62>/Multiply' incorporates:
       *  Constant: '<S62>/P_facBDCInit'
       */
      AccTarSel_B.Multiply_ky = AccTarSel_B.vRef * AccTarSel_P.P_facBDCInit;

      /* Product: '<S62>/Multiply1' incorporates:
       *  Constant: '<S62>/P_facBDCInit'
       */
      AccTarSel_B.Multiply1_g = AccTarSel_B.dAimBDC * AccTarSel_P.P_facBDCInit;

      /* Outputs for Iterator SubSystem: '<S61>/Iteration' incorporates:
       *  ForIterator: '<S63>/For Iterator'
       */
      for (i_cnt = 1; i_cnt <= AccTarSel_P.ForIterator_IterationLimit; i_cnt++)
      {
        AccTarSel_B.ForIterator_b = i_cnt;

        /* RelationalOperator: '<S63>/Relational Operator' incorporates:
         *  Constant: '<S63>/Constant'
         */
        AccTarSel_B.RelationalOperator_f = (AccTarSel_B.ForIterator_b ==
          AccTarSel_P.Constant_Value_n);

        /* Memory: '<S63>/Memory2' */
        AccTarSel_B.Memory2_f = AccTarSel_DW.Memory2_PreviousInput_i;

        /* Product: '<S64>/Multiply' incorporates:
         *  Constant: '<S64>/P_facBDCIterCalc'
         */
        AccTarSel_B.Multiply_hg = AccTarSel_B.Memory2_f *
          AccTarSel_P.P_facBDCIterCalc;

        /* Sum: '<S64>/Add' incorporates:
         *  Constant: '<S64>/Constant1'
         *  Constant: '<S64>/P_facBDCIterCalc'
         */
        AccTarSel_B.Add_p1 = AccTarSel_P.Constant1_Value_a -
          AccTarSel_P.P_facBDCIterCalc;

        /* Memory: '<S63>/Memory' */
        AccTarSel_B.Memory_eb = AccTarSel_DW.Memory_PreviousInput_j;

        /* Product: '<S64>/Multiply1' */
        AccTarSel_B.Multiply1_k2 = AccTarSel_B.Add_p1 * AccTarSel_B.Memory_eb;

        /* Sum: '<S64>/Add1' */
        AccTarSel_B.Add1_k4 = AccTarSel_B.Multiply_hg + AccTarSel_B.Multiply1_k2;

        /* Switch: '<S64>/Switch' */
        if (AccTarSel_B.RelationalOperator_f) {
          AccTarSel_B.Switch_h = AccTarSel_B.Multiply1_g;
        } else {
          AccTarSel_B.Switch_h = AccTarSel_B.Add1_k4;
        }

        /* End of Switch: '<S64>/Switch' */

        /* Sum: '<S63>/Add' */
        AccTarSel_B.Add_d = AccTarSel_B.dAimBDC - AccTarSel_B.Switch_h;

        /* Memory: '<S63>/Memory3' */
        AccTarSel_B.Memory3 = AccTarSel_DW.Memory3_PreviousInput;

        /* Product: '<S65>/Multiply' incorporates:
         *  Constant: '<S65>/P_facBDCIterCalc'
         */
        AccTarSel_B.Multiply_i = AccTarSel_B.Memory3 *
          AccTarSel_P.P_facBDCIterCalc;

        /* Sum: '<S65>/Add' incorporates:
         *  Constant: '<S65>/Constant1'
         *  Constant: '<S65>/P_facBDCIterCalc'
         */
        AccTarSel_B.Add_gt = AccTarSel_P.Constant1_Value_a5 -
          AccTarSel_P.P_facBDCIterCalc;

        /* Memory: '<S63>/Memory1' */
        AccTarSel_B.Memory1_l = AccTarSel_DW.Memory1_PreviousInput_m;

        /* Product: '<S65>/Multiply1' */
        AccTarSel_B.Multiply1_k3 = AccTarSel_B.Add_gt * AccTarSel_B.Memory1_l;

        /* Sum: '<S65>/Add1' */
        AccTarSel_B.Add1_n = AccTarSel_B.Multiply_i + AccTarSel_B.Multiply1_k3;

        /* Switch: '<S65>/Switch' */
        if (AccTarSel_B.RelationalOperator_f) {
          AccTarSel_B.Switch_e1 = AccTarSel_B.Multiply_ky;
        } else {
          AccTarSel_B.Switch_e1 = AccTarSel_B.Add1_n;
        }

        /* End of Switch: '<S65>/Switch' */

        /* Gain: '<S63>/Gain3' */
        AccTarSel_B.Gain3 = AccTarSel_P.Gain3_Gain * AccTarSel_B.Switch_e1;

        /* Gain: '<S63>/Gain' */
        AccTarSel_B.Gain_i = AccTarSel_P.Gain_Gain * AccTarSel_B.Switch_e1;

        /* Product: '<S63>/Divide' */
        AccTarSel_B.Divide_np = AccTarSel_B.Add_d / AccTarSel_B.Gain_i;

        /* Gain: '<S63>/Gain1' */
        AccTarSel_B.T_hw = AccTarSel_P.Gain1_Gain * AccTarSel_B.Divide_np;

        /* Gain: '<S63>/Gain2' */
        AccTarSel_B.u7T = AccTarSel_P.Gain2_Gain * AccTarSel_B.T_hw;

        /* Product: '<S63>/Divide1' */
        AccTarSel_B.aMax_f = AccTarSel_B.Gain3 / AccTarSel_B.u7T;

        /* Sum: '<S63>/Add2' */
        AccTarSel_B.Add2 = AccTarSel_B.aMax_f + AccTarSel_B.a0_o;

        /* Gain: '<S63>/Gain4' */
        AccTarSel_B.u3T = AccTarSel_P.Gain4_Gain * AccTarSel_B.T_hw;

        /* Product: '<S63>/Multiply' */
        AccTarSel_B.Multiply_l = AccTarSel_B.Add2 * AccTarSel_B.u3T;

        /* Gain: '<S63>/Gain5' */
        AccTarSel_B.Gain5 = AccTarSel_P.Gain5_Gain * AccTarSel_B.Multiply_l;

        /* Sum: '<S63>/Add1' */
        AccTarSel_B.v30new = AccTarSel_B.Gain5 + AccTarSel_B.vRef;

        /* Math: '<S63>/Square' */
        AccTarSel_B.Square_k = AccTarSel_B.u3T * AccTarSel_B.u3T;

        /* Product: '<S63>/Multiply2' */
        AccTarSel_B.Multiply2_a = AccTarSel_B.a0_o * AccTarSel_B.Square_k;

        /* Gain: '<S63>/Gain6' */
        AccTarSel_B.Gain6 = AccTarSel_P.Gain6_Gain * AccTarSel_B.Multiply2_a;

        /* Product: '<S63>/Multiply3' */
        AccTarSel_B.Multiply3 = AccTarSel_B.aMax_f * AccTarSel_B.Square_k;

        /* Gain: '<S63>/Gain7' */
        AccTarSel_B.Gain7 = AccTarSel_P.Gain7_Gain * AccTarSel_B.Multiply3;

        /* Product: '<S63>/Multiply1' */
        AccTarSel_B.Multiply1_do = AccTarSel_B.u3T * AccTarSel_B.vRef;

        /* Sum: '<S63>/Add3' */
        AccTarSel_B.d30new = (AccTarSel_B.Gain6 + AccTarSel_B.Gain7) +
          AccTarSel_B.Multiply1_do;

        /* Gain: '<S63>/Gain8' */
        AccTarSel_B.T30_k = AccTarSel_P.Gain8_Gain * AccTarSel_B.T_hw;

        /* Update for Memory: '<S63>/Memory2' */
        AccTarSel_DW.Memory2_PreviousInput_i = AccTarSel_B.Switch_h;

        /* Update for Memory: '<S63>/Memory' */
        AccTarSel_DW.Memory_PreviousInput_j = AccTarSel_B.d30new;

        /* Update for Memory: '<S63>/Memory3' */
        AccTarSel_DW.Memory3_PreviousInput = AccTarSel_B.Switch_e1;

        /* Update for Memory: '<S63>/Memory1' */
        AccTarSel_DW.Memory1_PreviousInput_m = AccTarSel_B.v30new;
      }

      /* End of Outputs for SubSystem: '<S61>/Iteration' */

      /* SignalConversion: '<S59>/BusConversion_InsertedFor_Profile_at_inport_0' */
      AccTarSel_B.aMax_o = AccTarSel_B.aMax_f;

      /* SignalConversion: '<S59>/BusConversion_InsertedFor_Profile_at_inport_0' */
      AccTarSel_B.T_h = AccTarSel_B.T_hw;

      /* SignalConversion: '<S59>/BusConversion_InsertedFor_Profile_at_inport_0' */
      AccTarSel_B.T30_o = AccTarSel_B.T30_k;

      /* Sum: '<S61>/Add' */
      AccTarSel_B.Add_i = AccTarSel_B.aMax_f - AccTarSel_B.a0_o;

      /* Product: '<S61>/Divide' */
      AccTarSel_B.adt1_j = AccTarSel_B.Add_i / AccTarSel_B.T30_k;

      /* SignalConversion: '<S59>/BusConversion_InsertedFor_Profile_at_inport_0' */
      AccTarSel_B.adt1_h = AccTarSel_B.adt1_j;

      /* Gain: '<S61>/Gain' */
      AccTarSel_B.Gain_p = AccTarSel_P.Gain_Gain_m * AccTarSel_B.aMax_f;

      /* Sum: '<S61>/Add1' */
      AccTarSel_B.Add1_d = AccTarSel_B.T_hw - AccTarSel_B.T30_k;

      /* Product: '<S61>/Divide1' */
      AccTarSel_B.adt2_p = AccTarSel_B.Gain_p / AccTarSel_B.Add1_d;

      /* SignalConversion: '<S59>/BusConversion_InsertedFor_Profile_at_inport_0' */
      AccTarSel_B.adt2_b = AccTarSel_B.adt2_p;

      /* SignalConversion: '<S59>/BusConversion_InsertedFor_Profile_at_inport_0' */
      AccTarSel_B.a0_j = AccTarSel_B.a0_o;

      /* SignalConversion: '<S59>/BusConversion_InsertedFor_Profile_at_inport_0' */
      AccTarSel_B.a0Raw_h = AccTarSel_B.Min_j;

      /* End of Outputs for SubSystem: '<S41>/calc' */
    } else if (AccTarSel_B.RelationalOperator1_o) {
      rtAction_0 = 1;

      /* Outputs for IfAction SubSystem: '<S41>/If Action Subsystem' incorporates:
       *  ActionPort: '<S58>/Action Port'
       */
      /* SignalConversion: '<S58>/BusConversion_InsertedFor_Out1_at_inport_0' */
      AccTarSel_B.SmoothStopCond_p = AccTarSel_B.SmoothStopCond_c;

      /* SignalConversion: '<S58>/BusConversion_InsertedFor_Out1_at_inport_0' */
      AccTarSel_B.aMax_o = AccTarSel_B.aMax_i;

      /* SignalConversion: '<S58>/BusConversion_InsertedFor_Out1_at_inport_0' */
      AccTarSel_B.T_h = AccTarSel_B.T_b;

      /* SignalConversion: '<S58>/BusConversion_InsertedFor_Out1_at_inport_0' */
      AccTarSel_B.T30_o = AccTarSel_B.T30_p;

      /* SignalConversion: '<S58>/BusConversion_InsertedFor_Out1_at_inport_0' */
      AccTarSel_B.adt1_h = AccTarSel_B.adt1_m;

      /* SignalConversion: '<S58>/BusConversion_InsertedFor_Out1_at_inport_0' */
      AccTarSel_B.adt2_b = AccTarSel_B.adt2_c;

      /* SignalConversion: '<S58>/BusConversion_InsertedFor_Out1_at_inport_0' */
      AccTarSel_B.a0_j = AccTarSel_B.a0_d;

      /* SignalConversion: '<S58>/BusConversion_InsertedFor_Out1_at_inport_0' */
      AccTarSel_B.a0Raw_h = AccTarSel_B.a0Raw_o;

      /* End of Outputs for SubSystem: '<S41>/If Action Subsystem' */
    } else {
      rtAction_0 = 2;

      /* Outputs for IfAction SubSystem: '<S41>/default' incorporates:
       *  ActionPort: '<S60>/Action Port'
       */
      /* SignalConversion: '<S60>/TmpBufferAtConstant1Outport1' incorporates:
       *  Constant: '<S60>/Constant1'
       */
      AccTarSel_B.aMax_o = AccTarSel_P.Constant1_Value_e;

      /* SignalConversion: '<S60>/TmpBufferAtConstant2Outport1' incorporates:
       *  Constant: '<S60>/Constant2'
       */
      AccTarSel_B.SmoothStopCond_p = AccTarSel_P.Constant2_Value_e;

      /* SignalConversion: '<S60>/TmpBufferAtConstant3Outport1' incorporates:
       *  Constant: '<S60>/Constant3'
       */
      AccTarSel_B.T30_o = AccTarSel_P.Constant3_Value;

      /* SignalConversion: '<S60>/TmpBufferAtConstant4Outport1' incorporates:
       *  Constant: '<S60>/Constant4'
       */
      AccTarSel_B.adt1_h = AccTarSel_P.Constant4_Value;

      /* SignalConversion: '<S60>/TmpBufferAtConstant5Outport1' incorporates:
       *  Constant: '<S60>/Constant5'
       */
      AccTarSel_B.adt2_b = AccTarSel_P.Constant5_Value_j;

      /* SignalConversion: '<S60>/TmpBufferAtConstant6Outport1' incorporates:
       *  Constant: '<S60>/Constant6'
       */
      AccTarSel_B.a0_j = AccTarSel_P.Constant6_Value;

      /* SignalConversion: '<S60>/TmpBufferAtConstant7Outport1' incorporates:
       *  Constant: '<S60>/Constant7'
       */
      AccTarSel_B.a0Raw_h = AccTarSel_P.Constant7_Value;

      /* SignalConversion: '<S60>/TmpBufferAtConstantOutport1' incorporates:
       *  Constant: '<S60>/Constant'
       */
      AccTarSel_B.T_h = AccTarSel_P.Constant_Value_pc;

      /* End of Outputs for SubSystem: '<S41>/default' */
    }

    AccTarSel_DW.If_ActiveSubsystem_o = rtAction_0;

    /* End of If: '<S41>/If' */

    /* If: '<S39>/If' */
    if (AccTarSel_B.OR_d) {
      rtAction_0 = 0;

      /* Outputs for IfAction SubSystem: '<S39>/If Action Subsystem' incorporates:
       *  ActionPort: '<S42>/Action Port'
       */
      /* RelationalOperator: '<S42>/Relational Operator' */
      AccTarSel_B.RelationalOperator_n = (AccTarSel_B.tElapse <=
        AccTarSel_B.T30_o);

      /* RelationalOperator: '<S42>/Relational Operator1' */
      AccTarSel_B.RelationalOperator1_e = (AccTarSel_B.tElapse <=
        AccTarSel_B.T_h);

      /* Memory: '<S42>/Memory' */
      AccTarSel_B.Memory_c = AccTarSel_DW.Memory_PreviousInput_g0;

      /* If: '<S42>/If' */
      if (AccTarSel_B.RelationalOperator_n) {
        /* Outputs for IfAction SubSystem: '<S42>/If Action Subsystem' incorporates:
         *  ActionPort: '<S44>/Action Port'
         */
        /* Product: '<S44>/Multiply' */
        AccTarSel_B.Multiply_mn = AccTarSel_B.tElapse * AccTarSel_B.adt1_h;

        /* Sum: '<S44>/Add' */
        AccTarSel_B.aCharact = AccTarSel_B.a0_j + AccTarSel_B.Multiply_mn;

        /* End of Outputs for SubSystem: '<S42>/If Action Subsystem' */
      } else if (AccTarSel_B.RelationalOperator1_e) {
        /* Outputs for IfAction SubSystem: '<S42>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S45>/Action Port'
         */
        /* Sum: '<S45>/Add1' */
        AccTarSel_B.Add1_hp = AccTarSel_B.tElapse - AccTarSel_B.T30_o;

        /* Product: '<S45>/Multiply' */
        AccTarSel_B.Multiply_nu = AccTarSel_B.Add1_hp * AccTarSel_B.adt2_b;

        /* Sum: '<S45>/Add' */
        AccTarSel_B.Add_m = AccTarSel_B.aMax_o + AccTarSel_B.Multiply_nu;

        /* MinMax: '<S49>/Max' incorporates:
         *  Constant: '<S45>/P_tRollingFilt'
         *  Inport: '<Root>/SYS_Info_st'
         */
        u0_0 = AccTarSel_U.SYS_Info_st.dT;
        u1 = AccTarSel_P.P_tRollingFilt;
        if ((u0_0 > u1) || rtIsNaNF(u1)) {
          u1 = u0_0;
        }

        AccTarSel_B.Max_j = u1;

        /* End of MinMax: '<S49>/Max' */

        /* Product: '<S49>/Divide' incorporates:
         *  Inport: '<Root>/SYS_Info_st'
         */
        AccTarSel_B.filtFactor_h = AccTarSel_U.SYS_Info_st.dT /
          AccTarSel_B.Max_j;

        /* Sum: '<S49>/Add' incorporates:
         *  Constant: '<S49>/Constant'
         */
        AccTarSel_B.Add_cl = AccTarSel_P.Constant_Value_h -
          AccTarSel_B.filtFactor_h;

        /* Product: '<S49>/Multiply' incorporates:
         *  Constant: '<S45>/Constant2'
         */
        AccTarSel_B.Multiply_h5 = AccTarSel_P.Constant2_Value_a *
          AccTarSel_B.filtFactor_h;

        /* Product: '<S49>/Multiply1' */
        AccTarSel_B.Multiply1_p = AccTarSel_B.Add_cl * AccTarSel_B.Memory_c;

        /* Sum: '<S49>/Add1' */
        AccTarSel_B.Add1_a = AccTarSel_B.Multiply_h5 + AccTarSel_B.Multiply1_p;

        /* MinMax: '<S50>/Max' incorporates:
         *  Constant: '<S45>/P_tRollingFinFilt'
         *  Inport: '<Root>/SYS_Info_st'
         */
        u0_0 = AccTarSel_U.SYS_Info_st.dT;
        u1 = AccTarSel_P.P_tRollingFinFilt;
        if ((u0_0 > u1) || rtIsNaNF(u1)) {
          u1 = u0_0;
        }

        AccTarSel_B.Max_c3 = u1;

        /* End of MinMax: '<S50>/Max' */

        /* Product: '<S50>/Divide' incorporates:
         *  Inport: '<Root>/SYS_Info_st'
         */
        AccTarSel_B.filtFactor_m = AccTarSel_U.SYS_Info_st.dT /
          AccTarSel_B.Max_c3;

        /* Sum: '<S50>/Add' incorporates:
         *  Constant: '<S50>/Constant'
         */
        AccTarSel_B.Add_kk = AccTarSel_P.Constant_Value_g -
          AccTarSel_B.filtFactor_m;

        /* Product: '<S50>/Multiply' */
        AccTarSel_B.Multiply_a3 = AccTarSel_B.Add_m * AccTarSel_B.filtFactor_m;

        /* Product: '<S50>/Multiply1' */
        AccTarSel_B.Multiply1_b = AccTarSel_B.Add_kk * AccTarSel_B.Memory_c;

        /* Sum: '<S50>/Add1' */
        AccTarSel_B.Add1_l = AccTarSel_B.Multiply_a3 + AccTarSel_B.Multiply1_b;

        /* RelationalOperator: '<S45>/Relational Operator' incorporates:
         *  Constant: '<S45>/Constant'
         */
        AccTarSel_B.RelationalOperator_op = (AccTarSel_B.dRes >
          AccTarSel_P.Constant_Value);

        /* Switch: '<S45>/Switch' */
        if (AccTarSel_B.RelationalOperator_op) {
          AccTarSel_B.aCharact = AccTarSel_B.Add1_a;
        } else {
          AccTarSel_B.aCharact = AccTarSel_B.Add1_l;
        }

        /* End of Switch: '<S45>/Switch' */
        /* End of Outputs for SubSystem: '<S42>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S42>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S46>/Action Port'
         */
        AccTarSel_IfActionSubsystem2(&AccTarSel_B.aCharact,
          &AccTarSel_P.IfActionSubsystem2_l);

        /* End of Outputs for SubSystem: '<S42>/If Action Subsystem2' */
      }

      /* End of If: '<S42>/If' */

      /* Memory: '<S42>/Memory1' */
      AccTarSel_B.Memory1_n = AccTarSel_DW.Memory1_PreviousInput_a;

      /* If: '<S42>/If1' incorporates:
       *  Constant: '<S48>/P_adtMaxBDC'
       */
      if (AccTarSel_B.SmoothStopCond_p) {
        /* Outputs for IfAction SubSystem: '<S42>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S47>/Action Port'
         */
        AccTarSel_IfActionSubsystem3(AccTarSel_B.aCharact, &AccTarSel_B.aBDC);

        /* End of Outputs for SubSystem: '<S42>/If Action Subsystem3' */
      } else {
        /* Outputs for IfAction SubSystem: '<S42>/Subsystem' incorporates:
         *  ActionPort: '<S48>/Action Port'
         */
        /* MinMax: '<S51>/Max' incorporates:
         *  Constant: '<S48>/P_tBDCStartFilt'
         *  Inport: '<Root>/SYS_Info_st'
         */
        u0_0 = AccTarSel_U.SYS_Info_st.dT;
        u1 = AccTarSel_P.P_tBDCStartFilt;
        if ((u0_0 > u1) || rtIsNaNF(u1)) {
          u1 = u0_0;
        }

        AccTarSel_B.Max_n = u1;

        /* End of MinMax: '<S51>/Max' */

        /* Product: '<S51>/Divide' incorporates:
         *  Inport: '<Root>/SYS_Info_st'
         */
        AccTarSel_B.filtFactor_cf = AccTarSel_U.SYS_Info_st.dT /
          AccTarSel_B.Max_n;

        /* Sum: '<S51>/Add' incorporates:
         *  Constant: '<S51>/Constant'
         */
        AccTarSel_B.Add_pi = AccTarSel_P.Constant_Value_o -
          AccTarSel_B.filtFactor_cf;

        /* Product: '<S51>/Multiply' */
        AccTarSel_B.Multiply_e = AccTarSel_B.aCharact *
          AccTarSel_B.filtFactor_cf;

        /* Product: '<S51>/Multiply1' */
        AccTarSel_B.Multiply1_ie = AccTarSel_B.Add_pi * AccTarSel_B.Memory1_n;

        /* Sum: '<S51>/Add1' */
        AccTarSel_B.Add1_h = AccTarSel_B.Multiply_e + AccTarSel_B.Multiply1_ie;

        /* RelationalOperator: '<S48>/Relational Operator' incorporates:
         *  Inport: '<Root>/SYS_Info_st'
         */
        AccTarSel_B.RelationalOperator_i2 = (AccTarSel_B.tElapse <=
          AccTarSel_U.SYS_Info_st.dT);

        /* Switch: '<S48>/Switch' */
        if (AccTarSel_B.RelationalOperator_i2) {
          AccTarSel_B.aBDC = AccTarSel_B.a0Raw_h;
        } else {
          AccTarSel_B.aBDC = AccTarSel_B.Add1_h;
        }

        /* End of Switch: '<S48>/Switch' */
        AccTarSel_B.P_adtMaxBDC = AccTarSel_P.P_adtMaxBDC;

        /* End of Outputs for SubSystem: '<S42>/Subsystem' */
      }

      /* End of If: '<S42>/If1' */

      /* SignalConversion: '<S42>/OutportBufferForOut1' */
      AccTarSel_B.Merge_d = AccTarSel_B.aBDC;

      /* End of Outputs for SubSystem: '<S39>/If Action Subsystem' */
    } else {
      rtAction_0 = 1;

      /* Outputs for IfAction SubSystem: '<S39>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S43>/Action Port'
       */
      AccTarSel_IfActionSubsystem2(&AccTarSel_B.Merge_d,
        &AccTarSel_P.IfActionSubsystem1_h);

      /* End of Outputs for SubSystem: '<S39>/If Action Subsystem1' */
    }

    AccTarSel_DW.If_ActiveSubsystem_j = rtAction_0;

    /* End of If: '<S39>/If' */

    /* SignalConversion: '<S27>/SigConversion_InsertedFor_Bus Selector_at_outport_0' */
    AccTarSel_B.axAbs_h3v = AccTarSel_Y.ATS_Po_st.axAbs;

    /* Product: '<S72>/Divide' incorporates:
     *  Constant: '<S72>/P_facFOCNegDiff'
     *  Constant: '<S72>/P_vFOCNegDiff'
     */
    AccTarSel_B.Divide_b = AccTarSel_P.P_vFOCNegDiff /
      AccTarSel_P.P_facFOCNegDiff;

    /* MinMax: '<S72>/Min' */
    u0_0 = AccTarSel_B.Max_h;
    u0 = AccTarSel_B.Divide_b;
    if ((u0_0 < u0) || rtIsNaNF(u0)) {
      u0 = u0_0;
    }

    AccTarSel_B.dThresNeg = u0;

    /* End of MinMax: '<S72>/Min' */

    /* Sum: '<S72>/Add1' */
    AccTarSel_B.dBreakPointNeg = AccTarSel_B.Max_h - AccTarSel_B.dThresNeg;

    /* RelationalOperator: '<S72>/Relational Operator' */
    AccTarSel_B.RelationalOperator_ob = (AccTarSel_Y.ATS_Po_st.dx <
      AccTarSel_B.dBreakPointNeg);

    /* RelationalOperator: '<S72>/Relational Operator1' */
    AccTarSel_B.RelationalOperator1_kx = (AccTarSel_Y.ATS_Po_st.dx <
      AccTarSel_B.Max_h);

    /* Product: '<S72>/Divide1' incorporates:
     *  Constant: '<S72>/P_facFOCPosDiff'
     *  Constant: '<S72>/P_vFOCPosDiff'
     */
    AccTarSel_B.Divide1_o = AccTarSel_P.P_vFOCPosDiff /
      AccTarSel_P.P_facFOCPosDiff;

    /* Sum: '<S72>/Add2' */
    AccTarSel_B.dBreakPointPos = AccTarSel_B.Max_h + AccTarSel_B.Divide1_o;

    /* RelationalOperator: '<S72>/Relational Operator2' */
    AccTarSel_B.RelationalOperator2_h = (AccTarSel_Y.ATS_Po_st.dx <
      AccTarSel_B.dBreakPointPos);

    /* If: '<S72>/If' */
    if (AccTarSel_B.RelationalOperator_ob) {
      /* Outputs for IfAction SubSystem: '<S72>/If Action Subsystem' incorporates:
       *  ActionPort: '<S73>/Action Port'
       */
      /* Product: '<S73>/Multiply' incorporates:
       *  Constant: '<S73>/P_facFOCNegDiff'
       *  Constant: '<S73>/P_vFOCNegDiff'
       */
      AccTarSel_B.aConstNegPhase_i = AccTarSel_P.P_vFOCNegDiff *
        AccTarSel_P.P_facFOCNegDiff;

      /* Sum: '<S73>/Add' */
      AccTarSel_B.Add_bb = AccTarSel_B.dBreakPointNeg - AccTarSel_Y.ATS_Po_st.dx;

      /* Product: '<S73>/Multiply1' */
      AccTarSel_B.Multiply1_f = AccTarSel_B.aConstNegPhase_i *
        AccTarSel_B.Add_bb;

      /* Abs: '<S73>/Abs' */
      AccTarSel_B.Abs_fo = (real32_T)fabs(AccTarSel_B.Multiply1_f);

      /* Math: '<S73>/Square' incorporates:
       *  Constant: '<S73>/P_vFOCNegDiff'
       */
      AccTarSel_B.Square_o = AccTarSel_P.P_vFOCNegDiff *
        AccTarSel_P.P_vFOCNegDiff;

      /* Product: '<S73>/Multiply2' incorporates:
       *  Constant: '<S73>/Constant2'
       */
      AccTarSel_B.Multiply2_l = AccTarSel_B.Abs_fo *
        AccTarSel_P.Constant2_Value_c;

      /* Sum: '<S73>/Add1' */
      AccTarSel_B.Add1_i = AccTarSel_B.Square_o + AccTarSel_B.Multiply2_l;

      /* SignalConversion: '<S73>/OutportBuffer_InsertedFor_vLower_at_inport_0' incorporates:
       *  Constant: '<S73>/P_vFOCNegDiff'
       */
      AccTarSel_B.Merge2_i = AccTarSel_P.P_vFOCNegDiff;

      /* Sqrt: '<S73>/Sqrt' */
      AccTarSel_B.Merge1_l = (real32_T)sqrt(AccTarSel_B.Add1_i);

      /* End of Outputs for SubSystem: '<S72>/If Action Subsystem' */
    } else if (AccTarSel_B.RelationalOperator1_kx) {
      /* Outputs for IfAction SubSystem: '<S72>/If Action Subsystem4' incorporates:
       *  ActionPort: '<S74>/Action Port'
       */
      /* Sum: '<S74>/Add' */
      AccTarSel_B.Add_as = AccTarSel_B.Max_h - AccTarSel_Y.ATS_Po_st.dx;

      /* Product: '<S74>/Multiply' incorporates:
       *  Constant: '<S74>/P_facFOCNegDiff'
       */
      AccTarSel_B.Multiply_k4 = AccTarSel_P.P_facFOCNegDiff * AccTarSel_B.Add_as;

      /* SignalConversion: '<S74>/OutportBufferForvLower' */
      AccTarSel_B.Merge2_i = AccTarSel_B.Multiply_k4;

      /* SignalConversion: '<S74>/OutportBufferForvUpper' */
      AccTarSel_B.Merge1_l = AccTarSel_B.Multiply_k4;

      /* End of Outputs for SubSystem: '<S72>/If Action Subsystem4' */
    } else if (AccTarSel_B.RelationalOperator2_h) {
      /* Outputs for IfAction SubSystem: '<S72>/If Action Subsystem5' incorporates:
       *  ActionPort: '<S75>/Action Port'
       */
      /* Sum: '<S75>/Add' */
      AccTarSel_B.Add_gh = AccTarSel_B.Max_h - AccTarSel_Y.ATS_Po_st.dx;

      /* Product: '<S75>/Multiply' incorporates:
       *  Constant: '<S75>/P_facFOCPosDiff'
       */
      AccTarSel_B.Multiply_a = AccTarSel_P.P_facFOCPosDiff * AccTarSel_B.Add_gh;

      /* SignalConversion: '<S75>/OutportBufferForvLower' */
      AccTarSel_B.Merge2_i = AccTarSel_B.Multiply_a;

      /* SignalConversion: '<S75>/OutportBufferForvUpper' */
      AccTarSel_B.Merge1_l = AccTarSel_B.Multiply_a;

      /* End of Outputs for SubSystem: '<S72>/If Action Subsystem5' */
    } else {
      /* Outputs for IfAction SubSystem: '<S72>/If Action Subsystem6' incorporates:
       *  ActionPort: '<S76>/Action Port'
       */
      /* Product: '<S76>/Multiply' incorporates:
       *  Constant: '<S76>/P_facFOCPosDiff'
       *  Constant: '<S76>/P_vFOCPosDiff'
       */
      AccTarSel_B.aConstNegPhase = AccTarSel_P.P_vFOCPosDiff *
        AccTarSel_P.P_facFOCPosDiff;

      /* Sum: '<S76>/Add' */
      AccTarSel_B.Add_b = AccTarSel_Y.ATS_Po_st.dx - AccTarSel_B.dBreakPointPos;

      /* Product: '<S76>/Multiply1' */
      AccTarSel_B.Multiply1_dc = AccTarSel_B.aConstNegPhase * AccTarSel_B.Add_b;

      /* Abs: '<S76>/Abs' */
      AccTarSel_B.Abs_oh = (real32_T)fabs(AccTarSel_B.Multiply1_dc);

      /* Math: '<S76>/Square' incorporates:
       *  Constant: '<S76>/P_vFOCPosDiff'
       */
      AccTarSel_B.Square_h = AccTarSel_P.P_vFOCPosDiff *
        AccTarSel_P.P_vFOCPosDiff;

      /* Product: '<S76>/Multiply2' incorporates:
       *  Constant: '<S76>/Constant2'
       */
      AccTarSel_B.Multiply2_g = AccTarSel_B.Abs_oh *
        AccTarSel_P.Constant2_Value_j;

      /* Sum: '<S76>/Add1' */
      AccTarSel_B.Add1_k = AccTarSel_B.Square_h + AccTarSel_B.Multiply2_g;

      /* Product: '<S76>/Multiply3' incorporates:
       *  Constant: '<S76>/Constant'
       *  Constant: '<S76>/P_vFOCPosDiff'
       */
      AccTarSel_B.Merge1_l = AccTarSel_P.P_vFOCPosDiff *
        AccTarSel_P.Constant_Value_oa;

      /* Sqrt: '<S76>/Sqrt' */
      AccTarSel_B.vUpper = (real32_T)sqrt(AccTarSel_B.Add1_k);

      /* Product: '<S76>/Multiply4' incorporates:
       *  Constant: '<S76>/Constant'
       */
      AccTarSel_B.Merge2_i = AccTarSel_P.Constant_Value_oa * AccTarSel_B.vUpper;

      /* End of Outputs for SubSystem: '<S72>/If Action Subsystem6' */
    }

    /* End of If: '<S72>/If' */

    /* RelationalOperator: '<S27>/Relational Operator' */
    AccTarSel_B.phase1 = (AccTarSel_Y.ATS_Po_st.vx >= AccTarSel_B.Merge1_l);

    /* RelationalOperator: '<S27>/Relational Operator1' */
    AccTarSel_B.phase2 = (AccTarSel_Y.ATS_Po_st.vx <= AccTarSel_B.Merge2_i);

    /* If: '<S27>/If1' */
    if (AccTarSel_B.phase1) {
      /* Outputs for IfAction SubSystem: '<S27>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S69>/Action Port'
       */
      AccTarSel_IfActionSubsystem1(AccTarSel_B.Merge1_l,
        AccTarSel_Y.ATS_Po_st.vx, &AccTarSel_B.Merge_de);

      /* End of Outputs for SubSystem: '<S27>/If Action Subsystem1' */
    } else if (AccTarSel_B.phase2) {
      /* Outputs for IfAction SubSystem: '<S27>/If Action Subsystem4' incorporates:
       *  ActionPort: '<S71>/Action Port'
       */
      AccTarSel_IfActionSubsystem1(AccTarSel_B.Merge2_i,
        AccTarSel_Y.ATS_Po_st.vx, &AccTarSel_B.Merge_de);

      /* End of Outputs for SubSystem: '<S27>/If Action Subsystem4' */
    } else {
      /* Outputs for IfAction SubSystem: '<S27>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S70>/Action Port'
       */
      AccTarSel_IfActionSubsystem2(&AccTarSel_B.Merge_de,
        &AccTarSel_P.IfActionSubsystem2_f);

      /* End of Outputs for SubSystem: '<S27>/If Action Subsystem2' */
    }

    /* End of If: '<S27>/If1' */

    /* Gain: '<S27>/Gain' */
    AccTarSel_B.vDeltaRaw = AccTarSel_P.Gain_Gain_j * AccTarSel_B.Merge_de;

    /* Product: '<S27>/Divide2' incorporates:
     *  Constant: '<S27>/P_tFOCStationary'
     */
    AccTarSel_B.Divide2 = AccTarSel_B.vDeltaRaw / AccTarSel_P.P_tFOCStationary;

    /* Sum: '<S27>/Add3' */
    AccTarSel_B.Add3 = AccTarSel_B.axAbs_h3v + AccTarSel_B.Divide2;

    /* RelationalOperator: '<S27>/Relational Operator3' incorporates:
     *  Constant: '<S27>/Constant5'
     */
    AccTarSel_B.RelationalOperator3_j = (AccTarSel_B.axAbs_h3v <
      AccTarSel_P.Constant5_Value_k);

    /* Switch: '<S27>/Switch' */
    if (AccTarSel_B.RelationalOperator3_j) {
      AccTarSel_B.aStat = AccTarSel_B.Add3;
    } else {
      AccTarSel_B.aStat = AccTarSel_B.Divide2;
    }

    /* End of Switch: '<S27>/Switch' */

    /* RelationalOperator: '<S24>/Relational Operator' incorporates:
     *  Constant: '<S24>/P_aFOCApproachIntpAcitve'
     */
    AccTarSel_B.RelationalOperator_dk = (AccTarSel_B.aStat <=
      AccTarSel_P.P_aFOCApproachIntpAcitve);

    /* RelationalOperator: '<S24>/Relational Operator1' incorporates:
     *  Constant: '<S24>/P_aFOCApproachIntpEnsure'
     */
    AccTarSel_B.RelationalOperator1_bu = (AccTarSel_B.aApproach <=
      AccTarSel_P.P_aFOCApproachIntpEnsure);

    /* Logic: '<S24>/Logical Operator' */
    AccTarSel_B.LogicalOperator_g3 = (AccTarSel_B.RelationalOperator_dk ||
      AccTarSel_B.RelationalOperator1_bu);

    /* RelationalOperator: '<S24>/Relational Operator2' incorporates:
     *  Constant: '<S24>/P_aFOCApproachIntpAcitve'
     */
    AccTarSel_B.RelationalOperator2_g = (AccTarSel_B.aApproach >
      AccTarSel_P.P_aFOCApproachIntpAcitve);

    /* If: '<S24>/If' incorporates:
     *  Inport: '<S67>/aStat'
     */
    if (AccTarSel_B.LogicalOperator_g3) {
      /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem' incorporates:
       *  ActionPort: '<S66>/Action Port'
       */
      /* MinMax: '<S66>/Min' */
      u0_0 = AccTarSel_B.aStat;
      u0 = AccTarSel_B.aApproach;
      if ((u0_0 < u0) || rtIsNaNF(u0)) {
        u0 = u0_0;
      }

      AccTarSel_B.aFocMix = u0;

      /* End of MinMax: '<S66>/Min' */
      /* End of Outputs for SubSystem: '<S24>/If Action Subsystem' */
    } else if (AccTarSel_B.RelationalOperator2_g) {
      /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S67>/Action Port'
       */
      AccTarSel_B.aFocMix = AccTarSel_B.aStat;

      /* End of Outputs for SubSystem: '<S24>/If Action Subsystem1' */
    } else {
      /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S68>/Action Port'
       */
      /* SignalConversion: '<S68>/TmpSignal ConversionAtLookup Table DynamicInport2' incorporates:
       *  Constant: '<S24>/P_aFOCApproachIntpAcitve'
       *  Constant: '<S24>/P_aFOCApproachIntpEnsure'
       */
      AccTarSel_B.TmpSignalConversionAtLookupTabl[0] =
        AccTarSel_P.P_aFOCApproachIntpEnsure;
      AccTarSel_B.TmpSignalConversionAtLookupTabl[1] =
        AccTarSel_P.P_aFOCApproachIntpAcitve;

      /* SignalConversion: '<S68>/TmpSignal ConversionAtLookup Table DynamicInport3' */
      AccTarSel_B.TmpSignalConversionAtLookupTa_g[0] = AccTarSel_B.aApproach;
      AccTarSel_B.TmpSignalConversionAtLookupTa_g[1] = AccTarSel_B.aStat;

      /* S-Function (sfix_look1_dyn): '<S68>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S68>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real32_T
       * Input1  Data Type:  Floating Point real32_T
       * Input2  Data Type:  Floating Point real32_T
       * Output0 Data Type:  Floating Point real32_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real32_T_real32_T( &(AccTarSel_B.LookupTableDynamic),
        &AccTarSel_B.TmpSignalConversionAtLookupTa_g[0], AccTarSel_B.aApproach,
        &AccTarSel_B.TmpSignalConversionAtLookupTabl[0], 1U);

      /* SignalConversion: '<S68>/OutportBufferForOut1' */
      AccTarSel_B.aFocMix = AccTarSel_B.LookupTableDynamic;

      /* End of Outputs for SubSystem: '<S24>/If Action Subsystem2' */
    }

    /* End of If: '<S24>/If' */

    /* If: '<S20>/If' incorporates:
     *  Constant: '<S22>/Constant'
     */
    if (AccTarSel_P.Constant_Value_fj) {
      /* Outputs for IfAction SubSystem: '<S20>/If Action Subsystem' incorporates:
       *  ActionPort: '<S25>/Action Port'
       */
      AccTarSel_IfActionSubsystem3(AccTarSel_B.Merge_d, &AccTarSel_B.Merge_j);

      /* End of Outputs for SubSystem: '<S20>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S20>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S26>/Action Port'
       */
      AccTarSel_IfActionSubsystem3(AccTarSel_B.aFocMix, &AccTarSel_B.Merge_j);

      /* End of Outputs for SubSystem: '<S20>/If Action Subsystem1' */
    }

    /* End of If: '<S20>/If' */

    /* RelationalOperator: '<S28>/Relational Operator1' incorporates:
     *  Constant: '<S28>/P_dObjLowHystDecToStop'
     */
    AccTarSel_B.RelationalOperator1_kd = (AccTarSel_Y.ATS_Po_st.dx <
      AccTarSel_P.P_dObjLowHystDecToStop);

    /* Sum: '<S28>/Add' incorporates:
     *  Inport: '<Root>/VSI_VehState_st'
     */
    AccTarSel_B.vAbsObj_c = AccTarSel_Y.ATS_Po_st.vx +
      AccTarSel_U.VSI_VehState_st.vRef;

    /* RelationalOperator: '<S28>/Relational Operator' incorporates:
     *  Constant: '<S28>/P_vObjLowHystDecToStop'
     */
    AccTarSel_B.RelationalOperator_aa = (AccTarSel_B.vAbsObj_c <
      AccTarSel_P.P_vObjLowHystDecToStop);

    /* RelationalOperator: '<S28>/Relational Operator2' incorporates:
     *  Constant: '<S28>/P_vEgoDecToStop'
     *  Inport: '<Root>/VSI_VehState_st'
     */
    AccTarSel_B.RelationalOperator2_hl = (AccTarSel_U.VSI_VehState_st.vRef <
      AccTarSel_P.P_vEgoDecToStop);

    /* Logic: '<S28>/AND' */
    AccTarSel_B.AND_d = (AccTarSel_B.RelationalOperator1_kd &&
                         AccTarSel_B.RelationalOperator_aa &&
                         AccTarSel_B.RelationalOperator2_hl);

    /* RelationalOperator: '<S28>/Relational Operator3' incorporates:
     *  Constant: '<S28>/P_vObjUpperHystDecToStop'
     */
    AccTarSel_B.RelationalOperator3_c = (AccTarSel_B.vAbsObj_c >
      AccTarSel_P.P_vObjUpperHystDecToStop);

    /* RelationalOperator: '<S28>/Relational Operator4' incorporates:
     *  Constant: '<S28>/P_dObjUpperHystDecToStop'
     */
    AccTarSel_B.RelationalOperator4_n = (AccTarSel_Y.ATS_Po_st.dx >
      AccTarSel_P.P_dObjUpperHystDecToStop);

    /* Logic: '<S28>/AND1' */
    AccTarSel_B.AND1 = (AccTarSel_B.RelationalOperator3_c ||
                        AccTarSel_B.RelationalOperator4_n);

    /* If: '<S28>/If' incorporates:
     *  Constant: '<S28>/Constant5'
     *  Constant: '<S28>/Constant6'
     */
    if (AccTarSel_B.AND_d) {
      /* Outputs for IfAction SubSystem: '<S28>/If Action Subsystem' incorporates:
       *  ActionPort: '<S77>/Action Port'
       */
      AccTarSel_IfActionSubsystem_d(AccTarSel_P.Constant5_Value_n,
        &AccTarSel_B.Merge1_b);

      /* End of Outputs for SubSystem: '<S28>/If Action Subsystem' */
    } else if (AccTarSel_B.AND1) {
      /* Outputs for IfAction SubSystem: '<S28>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S78>/Action Port'
       */
      AccTarSel_IfActionSubsystem_d(AccTarSel_P.Constant6_Value_m,
        &AccTarSel_B.Merge1_b);

      /* End of Outputs for SubSystem: '<S28>/If Action Subsystem1' */
    } else {
      /* Outputs for IfAction SubSystem: '<S28>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S79>/Action Port'
       */
      AccTarSel_IfActionSubsystem_d(AccTarSel_B.Memory_p, &AccTarSel_B.Merge1_b);

      /* End of Outputs for SubSystem: '<S28>/If Action Subsystem2' */
    }

    /* End of If: '<S28>/If' */
    /* End of Outputs for SubSystem: '<S15>/FollowObjValid' */
  } else {
    rtAction = 1;

    /* Outputs for IfAction SubSystem: '<S15>/FollowObjInvalid' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    /* SignalConversion: '<S19>/OutportBuffer_InsertedFor_a_at_inport_0' incorporates:
     *  Constant: '<S19>/Constant'
     */
    AccTarSel_B.Merge_j = AccTarSel_P.Constant_Value_c;

    /* SignalConversion: '<S19>/OutportBuffer_InsertedFor_DecToStop_at_inport_0' incorporates:
     *  Constant: '<S19>/Constant1'
     */
    AccTarSel_B.Merge1_b = AccTarSel_P.Constant1_Value_i;

    /* End of Outputs for SubSystem: '<S15>/FollowObjInvalid' */
  }

  AccTarSel_DW.If_ActiveSubsystem = rtAction;

  /* End of If: '<S15>/If' */

  /* MinMax: '<S13>/Min' incorporates:
   *  Constant: '<S14>/Constant'
   */
  u0_0 = AccTarSel_B.aSSC;
  u0 = AccTarSel_B.Merge_j;
  if ((u0_0 < u0) || rtIsNaNF(u0)) {
    u0 = u0_0;
  }

  u1_0 = AccTarSel_P.Constant_Value_f3;
  if ((!(u0 < u1_0)) && (!rtIsNaNF(u1_0))) {
    u0 = u1_0;
  }

  AccTarSel_B.Min = u0;

  /* End of MinMax: '<S13>/Min' */

  /* MinMax: '<S12>/Max' incorporates:
   *  Constant: '<S17>/Constant'
   */
  u0_0 = AccTarSel_B.Min;
  u1 = AccTarSel_P.Constant_Value_m4;
  if ((u0_0 > u1) || rtIsNaNF(u1)) {
    u1 = u0_0;
  }

  AccTarSel_B.Max = u1;

  /* End of MinMax: '<S12>/Max' */

  /* MinMax: '<S12>/Max1' incorporates:
   *  Constant: '<S18>/Constant'
   */
  u0_0 = AccTarSel_B.Max;
  u0 = AccTarSel_P.Constant_Value_dn;
  if ((u0_0 < u0) || rtIsNaNF(u0)) {
    u0 = u0_0;
  }

  AccTarSel_B.Max1 = u0;

  /* End of MinMax: '<S12>/Max1' */

  /* Gain: '<Root>/Gain' */
  AccTarSel_Y.ACC_LgtCtrl_st.ACCAxTarUpperComfBand = AccTarSel_P.Gain_Gain_ki *
    AccTarSel_B.Max1;

  /* Gain: '<Root>/Gain1' */
  AccTarSel_Y.ACC_LgtCtrl_st.ACCAxTarLowerComfBand = AccTarSel_P.Gain1_Gain_p *
    AccTarSel_B.Max1;

  /* Logic: '<Root>/NOT' */
  AccTarSel_Y.ACC_LgtCtrl_st.ACCDriveoffReq = !AccTarSel_B.Merge1_b;

  /* BusCreator: '<Root>/Bus Creator1' incorporates:
   *  Constant: '<Root>/Constant'
   *  Outport: '<Root>/ACC_LgtCtrl_st'
   */
  AccTarSel_Y.ACC_LgtCtrl_st.ACCVLCMainReq = AccTarSel_B.AST_Info_st.MainState;
  AccTarSel_Y.ACC_LgtCtrl_st.ACCAxtar = AccTarSel_B.Max1;
  AccTarSel_Y.ACC_LgtCtrl_st.ACCBrkPrfrd = AccTarSel_P.Constant_Value_dc;
  AccTarSel_Y.ACC_LgtCtrl_st.ACCStandstillReq = AccTarSel_B.Merge1_b;
  AccTarSel_Y.ACC_LgtCtrl_st.ACCvSet = AccTarSel_B.AST_Info_st.vSet;

  /* Constant: '<S16>/vSet' */
  AccTarSel_B.vSet = AccTarSel_P.vSet_Value;

  /* BusCreator: '<Root>/Bus Creator' incorporates:
   *  Constant: '<Root>/Constant5'
   */
  AccTarSel_B.ATS_Internal_ObjInfo_st_f.tmeStamp = AccTarSel_P.Constant5_Value;
  memcpy(&AccTarSel_B.ATS_Internal_ObjInfo_st_f.ats_obj_st[0],
         &AccTarSel_B.Assignment1[0], 40U * sizeof(ATS_OBJINFO_ST));

  /* Selector: '<Root>/Selector' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  AccTarSel_B.Selector_k = AccTarSel_B.ATS_Internal_ObjInfo_st_f.ats_obj_st
    [(int32_T)AccTarSel_P.Constant1_Value];
}

/* Model update function */
void AccTarSel_update(void)
{
  /* Update for Memory: '<S10>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_o = AccTarSel_B.ACC_SpdIncSw;

  /* Update for Memory: '<S10>/Memory1' */
  AccTarSel_DW.Memory1_PreviousInput_f = AccTarSel_B.ACC_SpdDecSw;

  /* Update for Memory: '<Root>/Memory' */
  AccTarSel_DW.Memory_PreviousInput = AccTarSel_B.ATS_Internal_ObjInfo_st_f;

  /* Update for Memory: '<S111>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_g = AccTarSel_B.Add1;

  /* Update for Memory: '<Root>/Memory1' incorporates:
   *  Outport: '<Root>/ATS_Po_st'
   */
  AccTarSel_DW.Memory1_PreviousInput = AccTarSel_Y.ATS_Po_st;

  /* Update for Memory: '<S15>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_j1 = AccTarSel_B.Merge1_b;

  /* Update for Memory: '<S1>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_a = AccTarSel_B.Max1;

  /* Update for If: '<S15>/If' */
  if (AccTarSel_DW.If_ActiveSubsystem == 0) {
    /* Update for IfAction SubSystem: '<S15>/FollowObjValid' incorporates:
     *  ActionPort: '<S20>/Action Port'
     */
    /* Update for Memory: '<S22>/Memory' */
    AccTarSel_DW.Memory_PreviousInput_k = AccTarSel_B.BDC_State;

    /* Update for Memory: '<S22>/Memory2' */
    AccTarSel_DW.Memory2_PreviousInput = AccTarSel_B.tElapse;

    /* Update for Memory: '<S22>/Memory1' */
    AccTarSel_DW.Memory1_4_PreviousInput = AccTarSel_B.T30_o;
    AccTarSel_DW.Memory1_1_PreviousInput = AccTarSel_B.SmoothStopCond_p;
    AccTarSel_DW.Memory1_2_PreviousInput = AccTarSel_B.aMax_o;
    AccTarSel_DW.Memory1_3_PreviousInput = AccTarSel_B.T_h;
    AccTarSel_DW.Memory1_5_PreviousInput = AccTarSel_B.adt1_h;
    AccTarSel_DW.Memory1_6_PreviousInput = AccTarSel_B.adt2_b;
    AccTarSel_DW.Memory1_7_PreviousInput = AccTarSel_B.a0_j;
    AccTarSel_DW.Memory1_8_PreviousInput = AccTarSel_B.a0Raw_h;

    /* Update for Memory: '<S41>/Memory' */
    AccTarSel_DW.Memory_PreviousInput_n = AccTarSel_B.BDC_State;

    /* Update for Memory: '<S41>/Memory1' */
    AccTarSel_DW.Memory1_8_PreviousInput_h = AccTarSel_B.a0Raw_h;
    AccTarSel_DW.Memory1_7_PreviousInput_b = AccTarSel_B.a0_j;
    AccTarSel_DW.Memory1_6_PreviousInput_c = AccTarSel_B.adt2_b;
    AccTarSel_DW.Memory1_5_PreviousInput_a = AccTarSel_B.adt1_h;
    AccTarSel_DW.Memory1_4_PreviousInput_k = AccTarSel_B.T30_o;
    AccTarSel_DW.Memory1_3_PreviousInput_d = AccTarSel_B.T_h;
    AccTarSel_DW.Memory1_2_PreviousInput_p = AccTarSel_B.aMax_o;
    AccTarSel_DW.Memory1_1_PreviousInput_h = AccTarSel_B.SmoothStopCond_p;

    /* Update for If: '<S39>/If' */
    if (AccTarSel_DW.If_ActiveSubsystem_j == 0) {
      /* Update for IfAction SubSystem: '<S39>/If Action Subsystem' incorporates:
       *  ActionPort: '<S42>/Action Port'
       */
      /* Update for Memory: '<S42>/Memory' */
      AccTarSel_DW.Memory_PreviousInput_g0 = AccTarSel_B.aCharact;

      /* Update for Memory: '<S42>/Memory1' */
      AccTarSel_DW.Memory1_PreviousInput_a = AccTarSel_B.aBDC;

      /* End of Update for SubSystem: '<S39>/If Action Subsystem' */
    }

    /* End of Update for If: '<S39>/If' */
    /* End of Update for SubSystem: '<S15>/FollowObjValid' */
  }

  /* End of Update for If: '<S15>/If' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++AccTarSel_M->Timing.clockTick0)) {
    ++AccTarSel_M->Timing.clockTickH0;
  }

  AccTarSel_M->Timing.taskTime0 = AccTarSel_M->Timing.clockTick0 *
    AccTarSel_M->Timing.stepSize0 + AccTarSel_M->Timing.clockTickH0 *
    AccTarSel_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void AccTarSel_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)AccTarSel_M, 0,
                sizeof(RT_MODEL_AccTarSel_T));
  AccTarSel_M->Timing.stepSize0 = 0.005;

  /* block I/O */
  (void) memset(((void *) &AccTarSel_B), 0,
                sizeof(B_AccTarSel_T));

  /* states (dwork) */
  (void) memset((void *)&AccTarSel_DW, 0,
                sizeof(DW_AccTarSel_T));

  /* external inputs */
  (void)memset(&AccTarSel_U, 0, sizeof(ExtU_AccTarSel_T));

  /* external outputs */
  (void) memset((void *)&AccTarSel_Y, 0,
                sizeof(ExtY_AccTarSel_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    AccTarSel_rti_init_trc_pointers();
  }

  {
    /* local scratch DWork variables */
    int32_T ForEach_itr;
    static const OBJDATA_ST tmp = { false,/* Hist */
      false,                           /* Valid */
      0.0F,                            /* dx */
      0.0F,                            /* dvarX */
      0.0F,                            /* dy */
      0.0F,                            /* dvarY */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* ax */
      0.0F,                            /* ay */
      0.0F,                            /* MotionSts */
      0.0F,                            /* Type */
      0.0F,                            /* probExist */
      0.0F                             /* ID */
    };

    /* Start for Iterator SubSystem: '<S6>/For Each Subsystem' */
    for (ForEach_itr = 0; ForEach_itr < 40; ForEach_itr++) {
      AccTarSel_B.CoreSubsys[ForEach_itr].DataTypeConversion9 = false;
      AccTarSel_B.CoreSubsys[ForEach_itr].Valid = false;
      AccTarSel_B.CoreSubsys[ForEach_itr].Add = 0.0F;
      AccTarSel_B.CoreSubsys[ForEach_itr].dx = 0.0F;
      AccTarSel_B.CoreSubsys[ForEach_itr].dy = 0.0F;
      AccTarSel_B.CoreSubsys[ForEach_itr].vx = 0.0F;
      AccTarSel_B.CoreSubsys[ForEach_itr].vy = 0.0F;
      AccTarSel_B.CoreSubsys[ForEach_itr].ax = 0.0F;
      AccTarSel_B.CoreSubsys[ForEach_itr].uDLookupTable = 0.0F;
      AccTarSel_B.CoreSubsys[ForEach_itr].MotionSts = 0.0F;
      AccTarSel_B.CoreSubsys[ForEach_itr].uDLookupTable_o = 0.0F;
      AccTarSel_B.CoreSubsys[ForEach_itr].Type = 0.0F;
      AccTarSel_B.CoreSubsys[ForEach_itr].ID = 0.0F;
      AccTarSel_B.CoreSubsys[ForEach_itr].BusCreator = tmp;
    }

    /* End of Start for SubSystem: '<S6>/For Each Subsystem' */

    /* Start for Iterator SubSystem: '<Root>/ACC_Target_Selection' */
    /* Start for Constant: '<S83>/axAbsInit' */
    AccTarSel_B.axAbs_j = AccTarSel_P.axAbsInit_Value;

    /* End of Start for SubSystem: '<Root>/ACC_Target_Selection' */

    /* Start for If: '<S15>/If' */
    AccTarSel_DW.If_ActiveSubsystem = -1;

    /* Start for IfAction SubSystem: '<S15>/FollowObjValid' */
    /* Start for If: '<S41>/If' */
    AccTarSel_DW.If_ActiveSubsystem_o = -1;

    /* Start for If: '<S39>/If' */
    AccTarSel_DW.If_ActiveSubsystem_j = -1;

    /* End of Start for SubSystem: '<S15>/FollowObjValid' */
  }

  {
    int32_T i;

    /* InitializeConditions for Memory: '<S10>/Memory' */
    AccTarSel_DW.Memory_PreviousInput_o = AccTarSel_P.Memory_InitialCondition_h;

    /* InitializeConditions for Memory: '<S10>/Memory1' */
    AccTarSel_DW.Memory1_PreviousInput_f =
      AccTarSel_P.Memory1_InitialCondition_h;

    /* InitializeConditions for Memory: '<Root>/Memory' */
    AccTarSel_DW.Memory_PreviousInput = AccTarSel_P.Memory_InitialCondition;

    /* InitializeConditions for Memory: '<S111>/Memory' */
    AccTarSel_DW.Memory_PreviousInput_g = AccTarSel_P.Memory_InitialCondition_go;

    /* InitializeConditions for Memory: '<Root>/Memory1' */
    AccTarSel_DW.Memory1_PreviousInput = AccTarSel_P.Memory1_InitialCondition;

    /* InitializeConditions for Memory: '<S15>/Memory' */
    AccTarSel_DW.Memory_PreviousInput_j1 = AccTarSel_P.Memory_InitialCondition_o;

    /* InitializeConditions for Memory: '<S1>/Memory' */
    AccTarSel_DW.Memory_PreviousInput_a = AccTarSel_P.Memory_InitialCondition_a;

    /* SystemInitialize for Iterator SubSystem: '<Root>/ACC_Target_Selection' */
    /* InitializeConditions for Delay: '<S83>/Delay' */
    AccTarSel_DW.Delay_DSTATE = AccTarSel_P.Delay_InitialCondition;

    /* SystemInitialize for Atomic SubSystem: '<S82>/ValidObjCalc' */
    /* SystemInitialize for IfAction SubSystem: '<S85>/Subsystem' */
    /* SystemInitialize for IfAction SubSystem: '<S91>/Subsystem' */
    /* SystemInitialize for Merge: '<S93>/Merge' */
    AccTarSel_B.probCutIn = AccTarSel_P.Merge_InitialOutput;

    /* End of SystemInitialize for SubSystem: '<S91>/Subsystem' */
    /* End of SystemInitialize for SubSystem: '<S85>/Subsystem' */
    /* End of SystemInitialize for SubSystem: '<S82>/ValidObjCalc' */

    /* SystemInitialize for Merge: '<S83>/Merge6' */
    AccTarSel_B.Valid = AccTarSel_P.Merge6_InitialOutput;

    /* SystemInitialize for Merge: '<S83>/Merge5' */
    AccTarSel_B.Index = AccTarSel_P.Merge5_InitialOutput;

    /* SystemInitialize for Merge: '<S83>/Merge' */
    AccTarSel_B.dx = AccTarSel_P.Merge_InitialOutput_b;

    /* SystemInitialize for Merge: '<S83>/Merge1' */
    AccTarSel_B.dy = AccTarSel_P.Merge1_InitialOutput_k;

    /* SystemInitialize for Merge: '<S83>/Merge2' */
    AccTarSel_B.vx_o = AccTarSel_P.Merge2_InitialOutput;

    /* SystemInitialize for Merge: '<S83>/Merge3' */
    AccTarSel_B.vy = AccTarSel_P.Merge3_InitialOutput;

    /* SystemInitialize for Merge: '<S83>/Merge4' */
    AccTarSel_B.ax_a = AccTarSel_P.Merge4_InitialOutput;

    /* SystemInitialize for Merge: '<S83>/Merge7' */
    AccTarSel_B.Type = AccTarSel_P.Merge7_InitialOutput;

    /* SystemInitialize for BusCreator: '<S83>/Bus Creator' */
    AccTarSel_B.BusCreator_o.Valid = AccTarSel_B.Valid;
    AccTarSel_B.BusCreator_o.Index = AccTarSel_B.Index;
    AccTarSel_B.BusCreator_o.dx = AccTarSel_B.dx;
    AccTarSel_B.BusCreator_o.dy = AccTarSel_B.dy;
    AccTarSel_B.BusCreator_o.vx = AccTarSel_B.vx_o;
    AccTarSel_B.BusCreator_o.vy = AccTarSel_B.vy;
    AccTarSel_B.BusCreator_o.ax = AccTarSel_B.ax_a;
    AccTarSel_B.BusCreator_o.axAbs = AccTarSel_B.axAbs_j;
    AccTarSel_B.BusCreator_o.Type = AccTarSel_B.Type;

    /* SystemInitialize for Outport: '<S3>/Out1' */
    for (i = 0; i < 40; i++) {
      AccTarSel_B.Assignment[i] = AccTarSel_P.Out1_Y0;
    }

    /* End of SystemInitialize for Outport: '<S3>/Out1' */

    /* SystemInitialize for Outport: '<S3>/ObjInfo' */
    for (i = 0; i < 40; i++) {
      AccTarSel_B.Assignment1[i] = AccTarSel_P.ObjInfo_Y0;
    }

    /* End of SystemInitialize for Outport: '<S3>/ObjInfo' */
    /* End of SystemInitialize for SubSystem: '<Root>/ACC_Target_Selection' */

    /* SystemInitialize for Chart: '<Root>/ACC_State_Machine' */
    AccTarSel_DW.is_ACTIVE = AccTarSel_IN_NO_ACTIVE_CHILD;
    AccTarSel_DW.is_active_c3_AccTarSel = 0U;
    AccTarSel_DW.is_c3_AccTarSel = AccTarSel_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for IfAction SubSystem: '<S15>/FollowObjValid' */
    /* InitializeConditions for Memory: '<S22>/Memory' */
    AccTarSel_DW.Memory_PreviousInput_k = AccTarSel_P.Memory_InitialCondition_lb;

    /* InitializeConditions for Memory: '<S22>/Memory2' */
    AccTarSel_DW.Memory2_PreviousInput = AccTarSel_P.Memory2_InitialCondition_k;

    /* InitializeConditions for Memory: '<S22>/Memory1' */
    AccTarSel_DW.Memory1_4_PreviousInput =
      AccTarSel_P.Memory1_4_InitialCondition;
    AccTarSel_DW.Memory1_1_PreviousInput =
      AccTarSel_P.Memory1_1_InitialCondition;
    AccTarSel_DW.Memory1_2_PreviousInput =
      AccTarSel_P.Memory1_2_InitialCondition;
    AccTarSel_DW.Memory1_3_PreviousInput =
      AccTarSel_P.Memory1_3_InitialCondition;
    AccTarSel_DW.Memory1_5_PreviousInput =
      AccTarSel_P.Memory1_5_InitialCondition;
    AccTarSel_DW.Memory1_6_PreviousInput =
      AccTarSel_P.Memory1_6_InitialCondition;
    AccTarSel_DW.Memory1_7_PreviousInput =
      AccTarSel_P.Memory1_7_InitialCondition;
    AccTarSel_DW.Memory1_8_PreviousInput =
      AccTarSel_P.Memory1_8_InitialCondition;

    /* InitializeConditions for Memory: '<S41>/Memory' */
    AccTarSel_DW.Memory_PreviousInput_n = AccTarSel_P.Memory_InitialCondition_g;

    /* InitializeConditions for Memory: '<S41>/Memory1' */
    AccTarSel_DW.Memory1_8_PreviousInput_h =
      AccTarSel_P.Memory1_8_InitialCondition_n;
    AccTarSel_DW.Memory1_7_PreviousInput_b =
      AccTarSel_P.Memory1_7_InitialCondition_n;
    AccTarSel_DW.Memory1_6_PreviousInput_c =
      AccTarSel_P.Memory1_6_InitialCondition_n;
    AccTarSel_DW.Memory1_5_PreviousInput_a =
      AccTarSel_P.Memory1_5_InitialCondition_n;
    AccTarSel_DW.Memory1_4_PreviousInput_k =
      AccTarSel_P.Memory1_4_InitialCondition_n;
    AccTarSel_DW.Memory1_3_PreviousInput_d =
      AccTarSel_P.Memory1_3_InitialCondition_n;
    AccTarSel_DW.Memory1_2_PreviousInput_p =
      AccTarSel_P.Memory1_2_InitialCondition_n;
    AccTarSel_DW.Memory1_1_PreviousInput_h =
      AccTarSel_P.Memory1_1_InitialCondition_n;

    /* SystemInitialize for Chart: '<S22>/BDC_State_Machine' */
    AccTarSel_DW.is_active_c1_AccTarSel = 0U;
    AccTarSel_DW.is_c1_AccTarSel = AccTarSel_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for IfAction SubSystem: '<S41>/calc' */
    /* SystemInitialize for Iterator SubSystem: '<S61>/Iteration' */
    /* InitializeConditions for Memory: '<S63>/Memory2' */
    AccTarSel_DW.Memory2_PreviousInput_i = AccTarSel_P.Memory2_InitialCondition;

    /* InitializeConditions for Memory: '<S63>/Memory' */
    AccTarSel_DW.Memory_PreviousInput_j = AccTarSel_P.Memory_InitialCondition_m;

    /* InitializeConditions for Memory: '<S63>/Memory3' */
    AccTarSel_DW.Memory3_PreviousInput = AccTarSel_P.Memory3_InitialCondition;

    /* InitializeConditions for Memory: '<S63>/Memory1' */
    AccTarSel_DW.Memory1_PreviousInput_m =
      AccTarSel_P.Memory1_InitialCondition_n;

    /* SystemInitialize for Outport: '<S63>/aMax' */
    AccTarSel_B.aMax_f = AccTarSel_P.aMax_Y0;

    /* SystemInitialize for Outport: '<S63>/T' */
    AccTarSel_B.T_hw = AccTarSel_P.T_Y0;

    /* SystemInitialize for Outport: '<S63>/T30' */
    AccTarSel_B.T30_k = AccTarSel_P.T30_Y0;

    /* End of SystemInitialize for SubSystem: '<S61>/Iteration' */
    /* End of SystemInitialize for SubSystem: '<S41>/calc' */

    /* SystemInitialize for Merge: '<S41>/Merge' */
    AccTarSel_B.SmoothStopCond_p = AccTarSel_P.Merge_1_InitialOutput;
    AccTarSel_B.aMax_o = AccTarSel_P.Merge_2_InitialOutput;
    AccTarSel_B.T_h = AccTarSel_P.Merge_3_InitialOutput;
    AccTarSel_B.T30_o = AccTarSel_P.Merge_4_InitialOutput;
    AccTarSel_B.adt1_h = AccTarSel_P.Merge_5_InitialOutput;
    AccTarSel_B.adt2_b = AccTarSel_P.Merge_6_InitialOutput;
    AccTarSel_B.a0_j = AccTarSel_P.Merge_7_InitialOutput;
    AccTarSel_B.a0Raw_h = AccTarSel_P.Merge_8_InitialOutput;

    /* SystemInitialize for IfAction SubSystem: '<S39>/If Action Subsystem' */
    /* InitializeConditions for Memory: '<S42>/Memory' */
    AccTarSel_DW.Memory_PreviousInput_g0 = AccTarSel_P.Memory_InitialCondition_l;

    /* InitializeConditions for Memory: '<S42>/Memory1' */
    AccTarSel_DW.Memory1_PreviousInput_a =
      AccTarSel_P.Memory1_InitialCondition_p;

    /* SystemInitialize for Merge: '<S42>/Merge1' */
    AccTarSel_B.aBDC = AccTarSel_P.Merge1_InitialOutput;

    /* End of SystemInitialize for SubSystem: '<S39>/If Action Subsystem' */
    /* End of SystemInitialize for SubSystem: '<S15>/FollowObjValid' */
  }
}

/* Model terminate function */
void AccTarSel_terminate(void)
{
  /* (no terminate code required) */
}
