/*
 * Intergration_data.c
 *
 * Code generation for model "Intergration".
 *
 * Model version              : 1.139
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Fri Dec 11 09:12:57 2020
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Intergration.h"
#include "Intergration_private.h"

/* Model block global parameters (default storage) */
real_T rtP_P_vyCutInThres = 0.5;       /* Variable: P_vyCutInThres
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_A = 2.0F;               /* Variable: P_A
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_Cd = 0.29F;             /* Variable: P_Cd
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_Cf = 0.1F;              /* Variable: P_Cf
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_DC2ECMargin = 0.1F;     /* Variable: P_DC2ECMargin
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_Dev4IEnd = 0.1F;        /* Variable: P_Dev4IEnd
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_DriveOffAdd = 400.0F;   /* Variable: P_DriveOffAdd
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_Ki = 0.08F;             /* Variable: P_Ki
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_Kp = 0.2F;              /* Variable: P_Kp
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_SlopeMax = 2.0F;        /* Variable: P_SlopeMax
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_SlopeMin = 0.2F;        /* Variable: P_SlopeMin
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_StandStillFactEC = 1.0F;/* Variable: P_StandStillFactEC
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_StsddAxRamp = 2.0F;     /* Variable: P_StsddAxRamp
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_aDiffaF = 0.05F;        /* Variable: P_aDiffaF
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_aFOCApproachIntpAcitve = -0.8F;/* Variable: P_aFOCApproachIntpAcitve
                                               * Referenced by: '<Root>/ACC'
                                               */
real32_T rtP_P_aFOCApproachIntpEnsure = -1.6F;/* Variable: P_aFOCApproachIntpEnsure
                                               * Referenced by: '<Root>/ACC'
                                               */
real32_T rtP_P_aStsd = -1.0F;          /* Variable: P_aStsd
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_adtMaxBDC = 1.0F;       /* Variable: P_adtMaxBDC
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_dAimMin = 4.5F;         /* Variable: P_dAimMin
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_dAxMax = 2.0F;          /* Variable: P_dAxMax
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_dAxMin = -4.0F;         /* Variable: P_dAxMin
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_dIRamp = 1.0F;          /* Variable: P_dIRamp
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_dObjDrvOffMax = 6.0F;   /* Variable: P_dObjDrvOffMax
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_dObjDrvOffMin = 3.0F;   /* Variable: P_dObjDrvOffMin
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_dObjLowHystDecToStop = 4.5F;/* Variable: P_dObjLowHystDecToStop
                                            * Referenced by: '<Root>/ACC'
                                            */
real32_T rtP_P_dObjUpperHystDecToStop = 5.5F;/* Variable: P_dObjUpperHystDecToStop
                                              * Referenced by: '<Root>/ACC'
                                              */
real32_T rtP_P_dResMax = 5.0F;         /* Variable: P_dResMax
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_dSlopeLim = 0.3F;       /* Variable: P_dSlopeLim
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_dStandStill = 3.0F;     /* Variable: P_dStandStill
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_dStandStillMin = 2.0F;  /* Variable: P_dStandStillMin
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_dvarYMax4PO = 1.0F;     /* Variable: P_dvarYMax4PO
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_dyCutInThres = 3.6F;    /* Variable: P_dyCutInThres
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_facBDCInit = 0.7F;      /* Variable: P_facBDCInit
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_facBDCIterCalc = 0.8F;  /* Variable: P_facBDCIterCalc
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_facFOCNegDiff = 0.25F;  /* Variable: P_facFOCNegDiff
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_facFOCPosDiff = 0.2F;   /* Variable: P_facFOCPosDiff
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_kapHystThres = 0.001F;  /* Variable: P_kapHystThres
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_plausMin4PO = 0.5F;     /* Variable: P_plausMin4PO
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_probExistMin4PO = 0.8F; /* Variable: P_probExistMin4PO
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tARawFilt = 0.2F;       /* Variable: P_tARawFilt
                                        * Referenced by: '<Root>/VSI'
                                        */
real32_T rtP_P_tARefFilter = 0.2F;     /* Variable: P_tARefFilter
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_tAxsFilt = 0.2F;        /* Variable: P_tAxsFilt
                                        * Referenced by: '<Root>/VSI'
                                        */
real32_T rtP_P_tBDCStartFilt = 0.2F;   /* Variable: P_tBDCStartFilt
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tCurvFilt = 0.2F;       /* Variable: P_tCurvFilt
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tCutInFilt = 0.5F;      /* Variable: P_tCutInFilt
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tDriveOffThr = 5.0F;    /* Variable: P_tDriveOffThr
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_tFOCStationaryFast = 3.0F;/* Variable: P_tFOCStationaryFast
                                          * Referenced by: '<Root>/ACC'
                                          */
real32_T rtP_P_tFOCStationarySlow = 4.5F;/* Variable: P_tFOCStationarySlow
                                          * Referenced by: '<Root>/ACC'
                                          */
real32_T rtP_P_tFiltAxAbsPO = 0.5F;    /* Variable: P_tFiltAxAbsPO
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tFiltVxAxPOFast = 0.15F;/* Variable: P_tFiltVxAxPOFast
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tFiltVxAxPOSlow = 0.25F;/* Variable: P_tFiltVxAxPOSlow
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tFxMergeFilter = 0.1F;  /* Variable: P_tFxMergeFilter
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_tMinDrvPhase = 2.0F;    /* Variable: P_tMinDrvPhase
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tRollingFilt = 0.5F;    /* Variable: P_tRollingFilt
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tRollingFinFilt = 1.0F; /* Variable: P_tRollingFinFilt
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tSSCNeg = 4.5F;         /* Variable: P_tSSCNeg
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tSSCPos = 5.5F;         /* Variable: P_tSSCPos
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tSasFilt = 0.25F;       /* Variable: P_tSasFilt
                                        * Referenced by: '<Root>/VSI'
                                        */
real32_T rtP_P_tSlopeFilter1 = 0.4F;   /* Variable: P_tSlopeFilter1
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_tSlopeFilter2 = 0.1F;   /* Variable: P_tSlopeFilter2
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_tTimeGapSet = 1.8F;     /* Variable: P_tTimeGapSet
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tToStop = 5.0F;         /* Variable: P_tToStop
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tToStopInBDC = 6.0F;    /* Variable: P_tToStopInBDC
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tToStopTrig = 4.0F;     /* Variable: P_tToStopTrig
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tVVehFilt = 0.3F;       /* Variable: P_tVVehFilt
                                        * Referenced by: '<Root>/VSI'
                                        */
real32_T rtP_P_tYrsFilt = 0.25F;       /* Variable: P_tYrsFilt
                                        * Referenced by: '<Root>/VSI'
                                        */
real32_T rtP_P_vDriveOffThr = 1.4F;    /* Variable: P_vDriveOffThr
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_vEgoDecToStop = 3.0F;   /* Variable: P_vEgoDecToStop
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_vEgoLowBDC = 4.0F;      /* Variable: P_vEgoLowBDC
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_vFOCNegDiff = 4.0F;     /* Variable: P_vFOCNegDiff
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_vFOCPosDiff = 5.0F;     /* Variable: P_vFOCPosDiff
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_vFOCStationaryFast = 10.0F;/* Variable: P_vFOCStationaryFast
                                           * Referenced by: '<Root>/ACC'
                                           */
real32_T rtP_P_vFOCStationarySlow = 5.0F;/* Variable: P_vFOCStationarySlow
                                          * Referenced by: '<Root>/ACC'
                                          */
real32_T rtP_P_vHi = 3.0F;             /* Variable: P_vHi
                                        * Referenced by: '<Root>/VSI'
                                        */
real32_T rtP_P_vLo = 1.0F;             /* Variable: P_vLo
                                        * Referenced by: '<Root>/VSI'
                                        */
real32_T rtP_P_vObjDrvOff = 1.0F;      /* Variable: P_vObjDrvOff
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_vObjLowHystDecToStop = 0.5F;/* Variable: P_vObjLowHystDecToStop
                                            * Referenced by: '<Root>/ACC'
                                            */
real32_T rtP_P_vObjNoStop = 1.0F;      /* Variable: P_vObjNoStop
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_vObjReCalc = 1.0F;      /* Variable: P_vObjReCalc
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_vObjStop = 0.3F;        /* Variable: P_vObjStop
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_vObjUpperHystDecToStop = 1.0F;/* Variable: P_vObjUpperHystDecToStop
                                              * Referenced by: '<Root>/ACC'
                                              */
real32_T rtP_P_vStandStill = 0.3F;     /* Variable: P_vStandStill
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_vStandStillHyst = 0.3F; /* Variable: P_vStandStillHyst
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_x165_On = 1.0F;         /* Variable: P_x165_On
                                        * Referenced by: '<S206>/P_x165_On'
                                        */
real32_T rtP_P_x242_On = 1.0F;         /* Variable: P_x242_On
                                        * Referenced by: '<S207>/P_x242_On'
                                        */
real32_T rtP_P_x246_On = 1.0F;         /* Variable: P_x246_On
                                        * Referenced by: '<S208>/P_x246_On'
                                        */
real32_T rtP_StRatio = 15.2F;          /* Variable: StRatio
                                        * Referenced by: '<Root>/VSI'
                                        */
real32_T rtP_TransRatio = 7.38F;       /* Variable: TransRatio
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_d_WheelBase = 2.8F;       /* Variable: d_WheelBase
                                        * Referenced by: '<Root>/VSI'
                                        */
real32_T rtP_m_Vehicle = 2000.0F;      /* Variable: m_Vehicle
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_r_Wheel = 0.347F;         /* Variable: r_Wheel
                                        * Referenced by: '<Root>/VLC'
                                        */
boolean_T rtP_P_CutInEnable = 0;       /* Variable: P_CutInEnable
                                        * Referenced by: '<Root>/ACC'
                                        */
boolean_T rtP_P_PlausIntegDisable = 0; /* Variable: P_PlausIntegDisable
                                        * Referenced by: '<Root>/ACC'
                                        */
boolean_T rtP_P_StandObjEnable = 0;    /* Variable: P_StandObjEnable
                                        * Referenced by: '<Root>/ACC'
                                        */

/* Block parameters (default storage) */
P_Intergration_T Intergration_P = {
  /* Mask Parameter: BitwiseOperator2_BitMask
   * Referenced by: '<S235>/Bitwise Operator2'
   */
  16383U,

  /* Mask Parameter: BitwiseOperator1_BitMask
   * Referenced by: '<S235>/Bitwise Operator1'
   */
  16383U,

  /* Mask Parameter: BitwiseOperator_BitMask
   * Referenced by: '<S237>/Bitwise Operator'
   */
  255U,

  /* Mask Parameter: BitwiseOperator1_BitMask_b
   * Referenced by: '<S217>/Bitwise Operator1'
   */
  255U,

  /* Mask Parameter: BitwiseOperator2_BitMask_i
   * Referenced by: '<S218>/Bitwise Operator2'
   */
  248U,

  /* Mask Parameter: BitwiseOperator1_BitMask_p
   * Referenced by: '<S219>/Bitwise Operator1'
   */
  255U,

  /* Mask Parameter: BitwiseOperator2_BitMask_p
   * Referenced by: '<S220>/Bitwise Operator2'
   */
  248U,

  /* Mask Parameter: BitwiseOperator1_BitMask_g
   * Referenced by: '<S224>/Bitwise Operator1'
   */
  255U,

  /* Mask Parameter: BitwiseOperator2_BitMask_f
   * Referenced by: '<S225>/Bitwise Operator2'
   */
  248U,

  /* Mask Parameter: BitwiseOperator1_BitMask_k
   * Referenced by: '<S226>/Bitwise Operator1'
   */
  255U,

  /* Mask Parameter: BitwiseOperator2_BitMask_l
   * Referenced by: '<S227>/Bitwise Operator2'
   */
  248U,

  /* Mask Parameter: BitwiseOperator1_BitMask_c
   * Referenced by: '<S231>/Bitwise Operator1'
   */
  255U,

  /* Mask Parameter: BitwiseOperator2_BitMask_m
   * Referenced by: '<S232>/Bitwise Operator2'
   */
  248U,

  /* Mask Parameter: BitwiseOperator1_BitMask_f
   * Referenced by: '<S250>/Bitwise Operator1'
   */
  255U,

  /* Mask Parameter: BitwiseOperator2_BitMask_n
   * Referenced by: '<S250>/Bitwise Operator2'
   */
  255U,

  /* Mask Parameter: BitwiseOperator1_BitMask_h
   * Referenced by: '<S251>/Bitwise Operator1'
   */
  255U,

  /* Mask Parameter: BitwiseOperator2_BitMask_j
   * Referenced by: '<S251>/Bitwise Operator2'
   */
  255U,

  /* Mask Parameter: BitwiseOperator1_BitMask_n
   * Referenced by: '<S255>/Bitwise Operator1'
   */
  255U,

  /* Mask Parameter: BitwiseOperator2_BitMask_i1
   * Referenced by: '<S255>/Bitwise Operator2'
   */
  255U,

  /* Mask Parameter: BitwiseOperator1_BitMask_i
   * Referenced by: '<S261>/Bitwise Operator1'
   */
  255U,

  /* Mask Parameter: BitwiseOperator2_BitMask_c
   * Referenced by: '<S261>/Bitwise Operator2'
   */
  255U,

  /* Mask Parameter: BitwiseOperator2_BitMask_fz
   * Referenced by: '<S237>/Bitwise Operator2'
   */
  120U,

  /* Mask Parameter: BitwiseOperator1_BitMask_hk
   * Referenced by: '<S237>/Bitwise Operator1'
   */
  7U,

  /* Mask Parameter: BitwiseOperator_BitMask_b
   * Referenced by: '<S238>/Bitwise Operator'
   */
  64U,

  /* Mask Parameter: BitwiseOperator1_BitMask_hs
   * Referenced by: '<S238>/Bitwise Operator1'
   */
  48U,

  /* Mask Parameter: BitwiseOperator_BitMask_a
   * Referenced by: '<S239>/Bitwise Operator'
   */
  56U,

  /* Mask Parameter: BitwiseOperator1_BitMask_fd
   * Referenced by: '<S239>/Bitwise Operator1'
   */
  7U,

  /* Mask Parameter: BitwiseOperator2_BitMask_lf
   * Referenced by: '<S240>/Bitwise Operator2'
   */
  128U,

  /* Mask Parameter: BitwiseOperator_BitMask_f
   * Referenced by: '<S243>/Bitwise Operator'
   */
  255U,

  /* Mask Parameter: BitwiseOperator1_BitMask_e
   * Referenced by: '<S244>/Bitwise Operator1'
   */
  127U,

  /* Mask Parameter: BitwiseOperator2_BitMask_d
   * Referenced by: '<S244>/Bitwise Operator2'
   */
  128U,

  /* Mask Parameter: BitwiseOperator2_BitMask_m0
   * Referenced by: '<S245>/Bitwise Operator2'
   */
  28U,

  /* Mask Parameter: BitwiseOperator1_BitMask_d
   * Referenced by: '<S245>/Bitwise Operator1'
   */
  224U,

  /* Mask Parameter: BitwiseOperator3_BitMask
   * Referenced by: '<S246>/Bitwise Operator3'
   */
  224U,

  /* Mask Parameter: BitwiseOperator2_BitMask_ng
   * Referenced by: '<S246>/Bitwise Operator2'
   */
  3U,

  /* Mask Parameter: BitwiseOperator1_BitMask_pj
   * Referenced by: '<S246>/Bitwise Operator1'
   */
  28U,

  /* Mask Parameter: BitwiseOperator3_BitMask_d
   * Referenced by: '<S247>/Bitwise Operator3'
   */
  112U,

  /* Mask Parameter: BitwiseOperator1_BitMask_bb
   * Referenced by: '<S247>/Bitwise Operator1'
   */
  15U,

  /* Mask Parameter: BitwiseOperator3_BitMask_o
   * Referenced by: '<S242>/Bitwise Operator3'
   */
  224U,

  /* Mask Parameter: BitwiseOperator3_BitMask_a
   * Referenced by: '<S212>/Bitwise Operator3'
   */
  128U,

  /* Mask Parameter: BitwiseOperator1_BitMask_k4
   * Referenced by: '<S212>/Bitwise Operator1'
   */
  16U,

  /* Mask Parameter: BitwiseOperator2_BitMask_a
   * Referenced by: '<S212>/Bitwise Operator2'
   */
  4U,

  /* Mask Parameter: BitwiseOperator2_BitMask_pv
   * Referenced by: '<S213>/Bitwise Operator2'
   */
  192U,

  /* Mask Parameter: BitwiseOperator1_BitMask_bt
   * Referenced by: '<S213>/Bitwise Operator1'
   */
  8U,

  /* Mask Parameter: BitwiseOperator3_BitMask_l
   * Referenced by: '<S213>/Bitwise Operator3'
   */
  2U,

  /* Mask Parameter: BitwiseOperator2_BitMask_h
   * Referenced by: '<S214>/Bitwise Operator2'
   */
  15U,

  /* Mask Parameter: BitwiseOperator1_BitMask_j
   * Referenced by: '<S218>/Bitwise Operator1'
   */
  6U,

  /* Mask Parameter: BitwiseOperator1_BitMask_o
   * Referenced by: '<S220>/Bitwise Operator1'
   */
  6U,

  /* Mask Parameter: BitwiseOperator2_BitMask_lp
   * Referenced by: '<S221>/Bitwise Operator2'
   */
  15U,

  /* Mask Parameter: BitwiseOperator1_BitMask_bs
   * Referenced by: '<S225>/Bitwise Operator1'
   */
  6U,

  /* Mask Parameter: BitwiseOperator1_BitMask_iy
   * Referenced by: '<S227>/Bitwise Operator1'
   */
  6U,

  /* Mask Parameter: BitwiseOperator2_BitMask_n4
   * Referenced by: '<S228>/Bitwise Operator2'
   */
  15U,

  /* Mask Parameter: BitwiseOperator2_BitMask_k
   * Referenced by: '<S233>/Bitwise Operator2'
   */
  15U,

  /* Mask Parameter: BitwiseOperator2_BitMask_e
   * Referenced by: '<S252>/Bitwise Operator2'
   */
  15U,

  /* Mask Parameter: BitwiseOperator2_BitMask_em
   * Referenced by: '<S256>/Bitwise Operator2'
   */
  15U,

  /* Mask Parameter: BitwiseOperator2_BitMask_ly
   * Referenced by: '<S262>/Bitwise Operator2'
   */
  240U,

  /* Mask Parameter: BitwiseOperator1_BitMask_a
   * Referenced by: '<S260>/Bitwise Operator1'
   */
  255U,

  /* Computed Parameter: Memory_InitialCondition
   * Referenced by: '<Root>/Memory'
   */
  {
    0.0F,                              /* EngineTorqReq */
    false,                             /* EngineTorqReqSt */
    0.0F,                              /* ACCState */
    false,                             /* CDDEnable */
    0.0F,                              /* CDDAxtar */
    false,                             /* CDDDriveoffReq */
    false                              /* CDDStandstillReq */
  },

  /* Expression: 0.5
   * Referenced by: '<S235>/Constant'
   */
  0.5,

  /* Expression: 848
   * Referenced by: '<S235>/Constant4'
   */
  848.0,

  /* Expression: 0.5
   * Referenced by: '<S235>/Constant5'
   */
  0.5,

  /* Expression: 848
   * Referenced by: '<S235>/Constant1'
   */
  848.0,

  /* Expression: 0.0
   * Referenced by: '<S203>/Delay'
   */
  0.0,

  /* Expression: 7.22
   * Referenced by: '<S237>/Constant2'
   */
  7.22,

  /* Expression: 0.005
   * Referenced by: '<S237>/Constant3'
   */
  0.005,

  /* Expression: 0.005
   * Referenced by: '<S237>/Constant'
   */
  0.005,

  /* Expression: 7.22
   * Referenced by: '<S237>/Constant1'
   */
  7.22,

  /* Expression: 12.7
   * Referenced by: '<S243>/Constant'
   */
  12.7,

  /* Expression: 0.1
   * Referenced by: '<S243>/Constant1'
   */
  0.1,

  /* Expression: 0.1
   * Referenced by: '<S243>/Constant4'
   */
  0.1,

  /* Expression: 12.7
   * Referenced by: '<S243>/Constant5'
   */
  12.7,

  /* Expression: -1
   * Referenced by: '<S203>/Constant6'
   */
  -1.0,

  /* Expression: 14
   * Referenced by: '<S203>/Switch'
   */
  14.0,

  /* Expression: 1
   * Referenced by: '<S203>/Constant5'
   */
  1.0,

  /* Expression: 0.0
   * Referenced by: '<S211>/Delay'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S195>/Constant7'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S211>/Constant6'
   */
  -1.0,

  /* Expression: 14
   * Referenced by: '<S211>/Switch'
   */
  14.0,

  /* Expression: 1
   * Referenced by: '<S211>/Constant5'
   */
  1.0,

  /* Expression: 0.05625
   * Referenced by: '<S219>/Constant1'
   */
  0.05625,

  /* Expression: 0.05625
   * Referenced by: '<S219>/Constant'
   */
  0.05625,

  /* Expression: 0.05625
   * Referenced by: '<S217>/Constant1'
   */
  0.05625,

  /* Expression: 0.05625
   * Referenced by: '<S217>/Constant'
   */
  0.05625,

  /* Expression: 0.0
   * Referenced by: '<S216>/Delay'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S196>/Constant1'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S216>/Constant6'
   */
  -1.0,

  /* Expression: 14
   * Referenced by: '<S216>/Switch'
   */
  14.0,

  /* Expression: 1
   * Referenced by: '<S216>/Constant5'
   */
  1.0,

  /* Expression: 0.05625
   * Referenced by: '<S226>/Constant1'
   */
  0.05625,

  /* Expression: 0.05625
   * Referenced by: '<S226>/Constant'
   */
  0.05625,

  /* Expression: 0.05625
   * Referenced by: '<S224>/Constant1'
   */
  0.05625,

  /* Expression: 0.05625
   * Referenced by: '<S224>/Constant'
   */
  0.05625,

  /* Expression: 0.0
   * Referenced by: '<S223>/Delay'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S197>/Constant1'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S223>/Constant6'
   */
  -1.0,

  /* Expression: 14
   * Referenced by: '<S223>/Switch'
   */
  14.0,

  /* Expression: 1
   * Referenced by: '<S223>/Constant5'
   */
  1.0,

  /* Expression: 0.05625
   * Referenced by: '<S231>/Constant'
   */
  0.05625,

  /* Expression: 0.0
   * Referenced by: '<S230>/Delay'
   */
  0.0,

  /* Expression: 0.05625
   * Referenced by: '<S231>/Constant1'
   */
  0.05625,

  /* Expression: 0
   * Referenced by: '<S198>/Constant1'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S230>/Constant6'
   */
  -1.0,

  /* Expression: 14
   * Referenced by: '<S230>/Switch'
   */
  14.0,

  /* Expression: 1
   * Referenced by: '<S230>/Constant5'
   */
  1.0,

  /* Expression: 9.8
   * Referenced by: '<S8>/Constant1'
   */
  9.8,

  /* Expression: 2
   * Referenced by: '<S250>/Constant1'
   */
  2.0,

  /* Expression: 0.001
   * Referenced by: '<S250>/Constant2'
   */
  0.001,

  /* Expression: 0.001
   * Referenced by: '<S250>/Constant3'
   */
  0.001,

  /* Expression: 2
   * Referenced by: '<S250>/Constant4'
   */
  2.0,

  /* Expression: 180
   * Referenced by: '<S251>/Constant1'
   */
  180.0,

  /* Expression: 0.01
   * Referenced by: '<S251>/Constant2'
   */
  0.01,

  /* Expression: 0.0
   * Referenced by: '<S249>/Delay'
   */
  0.0,

  /* Expression: 0.01
   * Referenced by: '<S251>/Constant3'
   */
  0.01,

  /* Expression: 180
   * Referenced by: '<S251>/Constant4'
   */
  180.0,

  /* Expression: 0
   * Referenced by: '<S204>/Constant2'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S249>/Constant6'
   */
  -1.0,

  /* Expression: 14
   * Referenced by: '<S249>/Switch'
   */
  14.0,

  /* Expression: 1
   * Referenced by: '<S249>/Constant5'
   */
  1.0,

  /* Expression: 0.0
   * Referenced by: '<S254>/Delay'
   */
  0.0,

  /* Expression: 9.8
   * Referenced by: '<S8>/Constant'
   */
  9.8,

  /* Expression: 2
   * Referenced by: '<S255>/Constant1'
   */
  2.0,

  /* Expression: 0.001
   * Referenced by: '<S255>/Constant2'
   */
  0.001,

  /* Expression: 0.001
   * Referenced by: '<S255>/Constant3'
   */
  0.001,

  /* Expression: 2
   * Referenced by: '<S255>/Constant4'
   */
  2.0,

  /* Expression: 0
   * Referenced by: '<S205>/Constant1'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S254>/Constant6'
   */
  -1.0,

  /* Expression: 14
   * Referenced by: '<S254>/Switch'
   */
  14.0,

  /* Expression: 1
   * Referenced by: '<S254>/Constant5'
   */
  1.0,

  /* Expression: 780
   * Referenced by: '<S261>/Constant1'
   */
  780.0,

  /* Expression: 0.1
   * Referenced by: '<S261>/Constant2'
   */
  0.1,

  /* Expression: 0.1
   * Referenced by: '<S261>/Constant3'
   */
  0.1,

  /* Expression: 780
   * Referenced by: '<S261>/Constant4'
   */
  780.0,

  /* Expression: 0.0
   * Referenced by: '<S258>/Delay'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S9>/Constant1'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S258>/Constant6'
   */
  -1.0,

  /* Expression: 14
   * Referenced by: '<S258>/Switch'
   */
  14.0,

  /* Expression: 1
   * Referenced by: '<S258>/Constant5'
   */
  1.0,

  /* Computed Parameter: Switch_Threshold_dw
   * Referenced by: '<S206>/Switch'
   */
  0.0F,

  /* Computed Parameter: EngineTorqReq_Value
   * Referenced by: '<S206>/EngineTorqReq'
   */
  0.0F,

  /* Computed Parameter: Switch1_Threshold
   * Referenced by: '<S206>/Switch1'
   */
  0.0F,

  /* Computed Parameter: ACCAccReqValTolMin_Value
   * Referenced by: '<S207>/ACCAccReqValTolMin'
   */
  0.0F,

  /* Computed Parameter: Switch6_Threshold
   * Referenced by: '<S207>/Switch6'
   */
  0.0F,

  /* Computed Parameter: ACCSysFltSts_Value
   * Referenced by: '<S207>/ACCSysFltSts'
   */
  0.0F,

  /* Computed Parameter: Switch5_Threshold
   * Referenced by: '<S207>/Switch5'
   */
  0.0F,

  /* Computed Parameter: ACCAccReqValTolMax_Value
   * Referenced by: '<S207>/ACCAccReqValTolMax'
   */
  0.0F,

  /* Computed Parameter: CDDAxtar_Value
   * Referenced by: '<S207>/CDDAxtar'
   */
  0.0F,

  /* Computed Parameter: Switch4_Threshold
   * Referenced by: '<S207>/Switch4'
   */
  0.0F,

  /* Computed Parameter: Switch3_Threshold
   * Referenced by: '<S207>/Switch3'
   */
  0.0F,

  /* Computed Parameter: uDLookupTable_tableData
   * Referenced by: '<S207>/1-D Lookup Table'
   */
  { 0.0F, 1.0F, 2.0F, 5.0F, 3.0F },

  /* Computed Parameter: uDLookupTable_bp01Data
   * Referenced by: '<S207>/1-D Lookup Table'
   */
  { 0.0F, 1.0F, 2.0F, 3.0F, 4.0F },

  /* Computed Parameter: ACCState_Value
   * Referenced by: '<S207>/ACCState'
   */
  0.0F,

  /* Computed Parameter: Switch2_Threshold
   * Referenced by: '<S207>/Switch2'
   */
  0.0F,

  /* Computed Parameter: ChACCShtdwnMd_Value
   * Referenced by: '<S207>/ChACCShtdwnMd'
   */
  0.0F,

  /* Computed Parameter: AEBDclReqVal_Value
   * Referenced by: '<S201>/AEBDclReqVal'
   */
  0.0F,

  /* Computed Parameter: ACCAEBBrkJerkLvlReq_Radar_Value
   * Referenced by: '<S201>/ACCAEBBrkJerkLvlReq_Radar'
   */
  0.0F,

  /* Computed Parameter: AEBSysSts_Radar_Value
   * Referenced by: '<S201>/AEBSysSts_Radar'
   */
  1.0F,

  /* Computed Parameter: AEBHydBrkAstLvlReq_Value
   * Referenced by: '<S201>/AEBHydBrkAstLvlReq'
   */
  0.0F,

  /* Computed Parameter: AEBPedtrnSysSts_Value
   * Referenced by: '<S201>/AEBPedtrnSysSts'
   */
  1.0F,

  /* Computed Parameter: AEBPedtrnSysFltSts_Value
   * Referenced by: '<S201>/AEBPedtrnSysFltSts'
   */
  0.0F,

  /* Computed Parameter: AEBSysFltSts_Radar_Value
   * Referenced by: '<S201>/AEBSysFltSts_Radar'
   */
  0.0F,

  /* Computed Parameter: ACCAccReqValGrdMin_Value
   * Referenced by: '<S201>/ACCAccReqValGrdMin'
   */
  0.0F,

  /* Computed Parameter: ACCAccReqValGrdMax_Value
   * Referenced by: '<S201>/ACCAccReqValGrdMax'
   */
  0.0F,

  /* Computed Parameter: RdrCalPrgsReq_Value
   * Referenced by: '<S208>/RdrCalPrgsReq'
   */
  0.0F,

  /* Computed Parameter: FCWSysFltSts_Value
   * Referenced by: '<S208>/FCWSysFltSts'
   */
  0.0F,

  /* Computed Parameter: FCWSnstvtLvl_Value
   * Referenced by: '<S208>/FCWSnstvtLvl'
   */
  0.0F,

  /* Computed Parameter: FCWrnngSts_Value
   * Referenced by: '<S208>/FCWrnngSts'
   */
  0.0F,

  /* Computed Parameter: FCWDspCmd_Value
   * Referenced by: '<S208>/FCWDspCmd'
   */
  0.0F,

  /* Computed Parameter: AEBPedtrnDspCmd_Value
   * Referenced by: '<S208>/AEBPedtrnDspCmd'
   */
  0.0F,

  /* Computed Parameter: AEBMsgReq_Value
   * Referenced by: '<S208>/AEBMsgReq'
   */
  0.0F,

  /* Computed Parameter: AEBDspCmd_Value
   * Referenced by: '<S208>/AEBDspCmd'
   */
  0.0F,

  /* Computed Parameter: ACCSysFltSts_246_Value
   * Referenced by: '<S208>/ACCSysFltSts_246'
   */
  0.0F,

  /* Computed Parameter: ACCSysCanclReq_Value
   * Referenced by: '<S208>/ACCSysCanclReq'
   */
  0.0F,

  /* Computed Parameter: ACCMsgReq_Value
   * Referenced by: '<S208>/ACCMsgReq'
   */
  0.0F,

  /* Computed Parameter: SetSpdConvert_Gain
   * Referenced by: '<S208>/SetSpdConvert'
   */
  3.78F,

  /* Computed Parameter: ACCDrvrSeldTrgtDistLvl_Value
   * Referenced by: '<S208>/ACCDrvrSeldTrgtDistLvl'
   */
  0.0F,

  /* Computed Parameter: uDLookupTable1_tableData
   * Referenced by: '<S208>/1-D Lookup Table1'
   */
  { 1.0F, 2.0F, 3.0F, 4.0F, 5.0F },

  /* Computed Parameter: uDLookupTable1_bp01Data
   * Referenced by: '<S208>/1-D Lookup Table1'
   */
  { 5.0F, 10.0F, 20.0F, 30.0F, 40.0F },

  /* Computed Parameter: ACCDrvrSelTrgtSpd_Value
   * Referenced by: '<S208>/ACCDrvrSelTrgtSpd'
   */
  0.0F,

  /* Computed Parameter: ACCDetObjDistLvl_Value
   * Referenced by: '<S208>/ACCDetObjDistLvl'
   */
  0.0F,

  /* Computed Parameter: Switch7_Threshold
   * Referenced by: '<S208>/Switch7'
   */
  0.0F,

  /* Computed Parameter: Constant2_Value_f
   * Referenced by: '<S195>/Constant2'
   */
  1.0F,

  /* Computed Parameter: Constant3_Value_d
   * Referenced by: '<S195>/Constant3'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_i
   * Referenced by: '<S195>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant4_Value_i
   * Referenced by: '<S195>/Constant4'
   */
  1.0F,

  /* Computed Parameter: Constant1_Value_hk
   * Referenced by: '<S195>/Constant1'
   */
  1.0F,

  /* Computed Parameter: ACC_Error_Value
   * Referenced by: '<S209>/ACC_Error'
   */
  0.0F,

  /* Computed Parameter: ACC_Passive_Res_Value
   * Referenced by: '<S209>/ACC_Passive_Res'
   */
  0.0F,

  /* Computed Parameter: ACC_Tip_Value
   * Referenced by: '<S209>/ACC_Tip'
   */
  0.0F,

  /* Computed Parameter: TimeGapRes_Value
   * Referenced by: '<S209>/TimeGapRes'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_m
   * Referenced by: '<Root>/Constant'
   */
  0.005F,

  /* Computed Parameter: Delay_DelayLength
   * Referenced by: '<S203>/Delay'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength_j
   * Referenced by: '<S211>/Delay'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength_o
   * Referenced by: '<S216>/Delay'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength_jf
   * Referenced by: '<S223>/Delay'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength_m
   * Referenced by: '<S230>/Delay'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength_p
   * Referenced by: '<S249>/Delay'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength_b
   * Referenced by: '<S254>/Delay'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength_e
   * Referenced by: '<S258>/Delay'
   */
  1U,

  /* Computed Parameter: Constant6_Value_o
   * Referenced by: '<S235>/Constant6'
   */
  1U,

  /* Computed Parameter: EngineTorqReqSt_Value
   * Referenced by: '<S206>/EngineTorqReqSt'
   */
  0,

  /* Computed Parameter: CDDStandstillReq_Value
   * Referenced by: '<S207>/CDDStandstillReq'
   */
  0,

  /* Computed Parameter: CDDDriveoffReq_Value
   * Referenced by: '<S207>/CDDDriveoffReq'
   */
  0,

  /* Computed Parameter: CDDEnable_Value
   * Referenced by: '<S207>/CDDEnable'
   */
  0,

  /* Computed Parameter: ACCReqBrkPrfrd_Value
   * Referenced by: '<S207>/ACCReqBrkPrfrd'
   */
  0,

  /* Computed Parameter: ACCMinBrkReqSts_Value
   * Referenced by: '<S207>/ACCMinBrkReqSts'
   */
  0,

  /* Computed Parameter: AEBPrflReq_Value
   * Referenced by: '<S201>/AEBPrflReq'
   */
  0,

  /* Computed Parameter: AEBDclReqSts_Value
   * Referenced by: '<S201>/AEBDclReqSts'
   */
  0,

  /* Computed Parameter: ACCGoNotfr_Value
   * Referenced by: '<S208>/ACCGoNotfr'
   */
  0,

  /* Computed Parameter: ACCDrvrTkovReq_Value
   * Referenced by: '<S208>/ACCDrvrTkovReq'
   */
  0,

  /* Computed Parameter: ACCObjDet_Value
   * Referenced by: '<S208>/ACCObjDet'
   */
  0,

  /* Computed Parameter: Constant2_Value_mr
   * Referenced by: '<S200>/Constant2'
   */
  0U,

  /* Computed Parameter: Constant3_Value_b
   * Referenced by: '<S200>/Constant3'
   */
  7U,

  /* Computed Parameter: Constant_Value_fv
   * Referenced by: '<S244>/Constant'
   */
  0U,

  /* Computed Parameter: Constant_Value_j
   * Referenced by: '<S201>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_hq
   * Referenced by: '<S201>/Constant1'
   */
  7U,

  /* Computed Parameter: Constant5_Value_k
   * Referenced by: '<S195>/Constant5'
   */
  0U,

  /* Computed Parameter: Constant6_Value_kg
   * Referenced by: '<S195>/Constant6'
   */
  7U,

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S196>/Constant'
   */
  0U,

  /* Computed Parameter: Constant6_Value_ko
   * Referenced by: '<S196>/Constant6'
   */
  7U,

  /* Computed Parameter: Constant_Value_e2
   * Referenced by: '<S197>/Constant'
   */
  0U,

  /* Computed Parameter: Constant6_Value_gh
   * Referenced by: '<S197>/Constant6'
   */
  7U,

  /* Computed Parameter: Constant_Value_o
   * Referenced by: '<S198>/Constant'
   */
  0U,

  /* Computed Parameter: Constant6_Value_bu
   * Referenced by: '<S198>/Constant6'
   */
  7U,

  /* Computed Parameter: Constant_Value_d
   * Referenced by: '<S204>/Constant'
   */
  0U,

  /* Computed Parameter: Constant6_Value_l
   * Referenced by: '<S204>/Constant6'
   */
  7U,

  /* Computed Parameter: Constant_Value_im
   * Referenced by: '<S205>/Constant'
   */
  0U,

  /* Computed Parameter: Constant6_Value_ea
   * Referenced by: '<S205>/Constant6'
   */
  7U,

  /* Computed Parameter: Constant_Value_dg
   * Referenced by: '<S9>/Constant'
   */
  0U,

  /* Computed Parameter: Constant6_Value_gr
   * Referenced by: '<S9>/Constant6'
   */
  7U
};
