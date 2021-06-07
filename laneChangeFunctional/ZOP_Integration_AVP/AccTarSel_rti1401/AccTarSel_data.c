/*
 * AccTarSel_data.c
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

#include "AccTarSel.h"
#include "AccTarSel_private.h"

/* Block parameters (default storage) */
P_AccTarSel_T AccTarSel_P = {
  /* Variable: P_vyCutInThres
   * Referenced by: '<S93>/P_vyCutInThres'
   */
  0.5,

  /* Variable: P_aFOCApproachIntpAcitve
   * Referenced by: '<S24>/P_aFOCApproachIntpAcitve'
   */
  -0.8F,

  /* Variable: P_aFOCApproachIntpEnsure
   * Referenced by: '<S24>/P_aFOCApproachIntpEnsure'
   */
  -1.6F,

  /* Variable: P_adtMaxBDC
   * Referenced by: '<S48>/P_adtMaxBDC'
   */
  1.0F,

  /* Variable: P_dAimMin
   * Referenced by: '<S23>/P_dAimMin'
   */
  5.0F,

  /* Variable: P_dObjDrvOffMax
   * Referenced by: '<S9>/P_dObjDrvOffMax'
   */
  5.5F,

  /* Variable: P_dObjDrvOffMin
   * Referenced by: '<S9>/P_dObjDrvOffMin'
   */
  3.0F,

  /* Variable: P_dObjLowHystDecToStop
   * Referenced by: '<S28>/P_dObjLowHystDecToStop'
   */
  5.0F,

  /* Variable: P_dObjUpperHystDecToStop
   * Referenced by: '<S28>/P_dObjUpperHystDecToStop'
   */
  4.5F,

  /* Variable: P_dResMax
   * Referenced by: '<S53>/P_dResMax'
   */
  5.0F,

  /* Variable: P_dStandStill
   * Referenced by:
   *   '<S53>/P_dStandStill'
   *   '<S62>/P_dStandStill'
   */
  2.0F,

  /* Variable: P_dStandStillMin
   * Referenced by: '<S62>/P_dStandStillMin'
   */
  1.5F,

  /* Variable: P_dvarYMax4PO
   * Referenced by: '<S105>/P_dvarYMax4PO'
   */
  1.0F,

  /* Variable: P_dyCutInThres
   * Referenced by: '<S93>/P_dyCutInThres'
   */
  3.6F,

  /* Variable: P_facBDCInit
   * Referenced by: '<S62>/P_facBDCInit'
   */
  0.7F,

  /* Variable: P_facBDCIterCalc
   * Referenced by:
   *   '<S64>/P_facBDCIterCalc'
   *   '<S65>/P_facBDCIterCalc'
   */
  0.8F,

  /* Variable: P_facFOCNegDiff
   * Referenced by:
   *   '<S72>/P_facFOCNegDiff'
   *   '<S73>/P_facFOCNegDiff'
   *   '<S74>/P_facFOCNegDiff'
   */
  0.25F,

  /* Variable: P_facFOCPosDiff
   * Referenced by:
   *   '<S72>/P_facFOCPosDiff'
   *   '<S75>/P_facFOCPosDiff'
   *   '<S76>/P_facFOCPosDiff'
   */
  0.25F,

  /* Variable: P_kapHystThres
   * Referenced by: '<S111>/P_kapHystThres'
   */
  0.001F,

  /* Variable: P_plausMin4PO
   * Referenced by: '<S108>/P_plausMin4PO'
   */
  0.5F,

  /* Variable: P_probExistMin4PO
   * Referenced by: '<S105>/P_probExistMin4PO'
   */
  0.8F,

  /* Variable: P_tBDCStartFilt
   * Referenced by: '<S48>/P_tBDCStartFilt'
   */
  1.0F,

  /* Variable: P_tCurvFilt
   * Referenced by: '<S111>/P_tCurvFilt'
   */
  0.2F,

  /* Variable: P_tCutInFilt
   * Referenced by: '<S93>/P_tCutInFilt'
   */
  0.5F,

  /* Variable: P_tFOCStationary
   * Referenced by: '<S27>/P_tFOCStationary'
   */
  4.0F,

  /* Variable: P_tFiltAxAbsPO
   * Referenced by: '<S127>/Constant1'
   */
  0.5F,

  /* Variable: P_tFiltVxAxPO
   * Referenced by: '<S127>/Constant'
   */
  0.1F,

  /* Variable: P_tMinDrvPhase
   * Referenced by: '<Root>/P_tMinDrvPhase'
   */
  1.0F,

  /* Variable: P_tRollingFilt
   * Referenced by: '<S45>/P_tRollingFilt'
   */
  0.8F,

  /* Variable: P_tRollingFinFilt
   * Referenced by: '<S45>/P_tRollingFinFilt'
   */
  1.5F,

  /* Variable: P_tSSCNeg
   * Referenced by: '<S16>/P_tSSCNeg'
   */
  4.5F,

  /* Variable: P_tSSCPos
   * Referenced by: '<S16>/P_tSSCPos'
   */
  5.5F,

  /* Variable: P_tTimeGapSet
   * Referenced by: '<S23>/P_tTimeGapSet'
   */
  1.8F,

  /* Variable: P_tToStop
   * Referenced by: '<S57>/P_tToStop'
   */
  5.0F,

  /* Variable: P_tToStopInBDC
   * Referenced by: '<S57>/P_tToStopInBDC'
   */
  6.0F,

  /* Variable: P_tToStopTrig
   * Referenced by: '<S52>/P_tToStop'
   */
  4.0F,

  /* Variable: P_vEgoDecToStop
   * Referenced by: '<S28>/P_vEgoDecToStop'
   */
  3.0F,

  /* Variable: P_vEgoLowBDC
   * Referenced by: '<S40>/P_vEgoLowBDC'
   */
  4.0F,

  /* Variable: P_vFOCNegDiff
   * Referenced by:
   *   '<S72>/P_vFOCNegDiff'
   *   '<S73>/P_vFOCNegDiff'
   */
  4.0F,

  /* Variable: P_vFOCPosDiff
   * Referenced by:
   *   '<S72>/P_vFOCPosDiff'
   *   '<S76>/P_vFOCPosDiff'
   */
  4.0F,

  /* Variable: P_vObjDrvOff
   * Referenced by: '<S9>/P_vObjDrvOff'
   */
  1.5F,

  /* Variable: P_vObjLowHystDecToStop
   * Referenced by: '<S28>/P_vObjLowHystDecToStop'
   */
  0.5F,

  /* Variable: P_vObjNoStop
   * Referenced by: '<S52>/P_vObjNoStop'
   */
  1.0F,

  /* Variable: P_vObjReCalc
   * Referenced by: '<S53>/P_vObjReCalc'
   */
  1.0F,

  /* Variable: P_vObjStop
   * Referenced by: '<S52>/P_vObjStop'
   */
  0.3F,

  /* Variable: P_vObjUpperHystDecToStop
   * Referenced by: '<S28>/P_vObjUpperHystDecToStop'
   */
  1.0F,

  /* Variable: P_vStandStill
   * Referenced by: '<Root>/P_vStandStill'
   */
  0.3F,

  /* Variable: P_CutInEnable
   * Referenced by: '<S93>/P_CutInEnable'
   */
  0,

  /* Variable: P_PlausIntegDisable
   * Referenced by: '<S87>/Constant4'
   */
  1,

  /* Variable: P_StandObjEnable
   * Referenced by: '<S107>/P_StandObjEnable'
   */
  0,

  /* Computed Parameter: Memory_InitialCondition
   * Referenced by: '<Root>/Memory'
   */
  {
    0.0,                               /* tmeStamp */

    {
      {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      } }
    /* ats_obj_st */
  },

  /* Computed Parameter: ObjInfo_Y0
   * Referenced by: '<S3>/ObjInfo'
   */
  {
    0.0F,                              /* dx */
    0.0F,                              /* dy */
    0.0F,                              /* vx */
    0.0F,                              /* vy */
    0.0F,                              /* dyToTraj */
    0.0F,                              /* dyCutInPred */
    0.0F,                              /* probCutInRaw */
    0.0F,                              /* probCutInFilt */
    0.0F,                              /* probEgoLane */
    0.0F,                              /* plausEgoLane */
    false,                             /* ValidEgoLane */
    0.0F                               /* ID */
  },

  /* Computed Parameter: Zero1_Value
   * Referenced by: '<S3>/Zero1'
   */
  { {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    } },

  /* Computed Parameter: Memory1_InitialCondition
   * Referenced by: '<Root>/Memory1'
   */
  {
    false,                             /* Valid */
    0.0F,                              /* Index */
    0.0F,                              /* dx */
    0.0F,                              /* dy */
    0.0F,                              /* vx */
    0.0F,                              /* vy */
    0.0F,                              /* ax */
    0.0F,                              /* axAbs */
    0.0F                               /* Type */
  },

  /* Expression: 1
   * Referenced by: '<S45>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S93>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/Constant'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant5'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant1'
   */
  0.0,

  /* Computed Parameter: ForIterator_IterationLimit
   * Referenced by: '<S63>/For Iterator'
   */
  10,

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S63>/Constant'
   */
  1,

  /* Computed Parameter: Constant_Value_d
   * Referenced by: '<S83>/Constant'
   */
  0,

  /* Computed Parameter: Constant2_Value_i
   * Referenced by: '<Root>/Constant2'
   */
  40,

  /* Computed Parameter: Constant1_Value_f
   * Referenced by: '<S30>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant2_Value_is
   * Referenced by: '<S30>/Constant2'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S37>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value_d
   * Referenced by: '<S36>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_f
   * Referenced by: '<S36>/Constant'
   */
  2.0F,

  /* Computed Parameter: Constant2_Value_p
   * Referenced by: '<S36>/Constant2'
   */
  255.0F,

  /* Computed Parameter: Constant2_Value_a
   * Referenced by: '<S45>/Constant2'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_h
   * Referenced by: '<S49>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_g
   * Referenced by: '<S50>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_o
   * Referenced by: '<S51>/Constant'
   */
  1.0F,

  /* Computed Parameter: Memory_InitialCondition_l
   * Referenced by: '<S42>/Memory'
   */
  0.0F,

  /* Computed Parameter: Memory1_InitialCondition_p
   * Referenced by: '<S42>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Merge1_InitialOutput
   * Referenced by: '<S42>/Merge1'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value_b
   * Referenced by: '<S56>/Constant1'
   */
  -0.1F,

  /* Computed Parameter: Constant2_Value_b
   * Referenced by: '<S56>/Constant2'
   */
  2.0F,

  /* Computed Parameter: aMax_Y0
   * Referenced by: '<S63>/aMax'
   */
  0.0F,

  /* Computed Parameter: T_Y0
   * Referenced by: '<S63>/T'
   */
  0.0F,

  /* Computed Parameter: T30_Y0
   * Referenced by: '<S63>/T30'
   */
  0.0F,

  /* Computed Parameter: Memory2_InitialCondition
   * Referenced by: '<S63>/Memory2'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value_a
   * Referenced by: '<S64>/Constant1'
   */
  1.0F,

  /* Computed Parameter: Memory_InitialCondition_m
   * Referenced by: '<S63>/Memory'
   */
  0.0F,

  /* Computed Parameter: Memory3_InitialCondition
   * Referenced by: '<S63>/Memory3'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value_a5
   * Referenced by: '<S65>/Constant1'
   */
  1.0F,

  /* Computed Parameter: Memory1_InitialCondition_n
   * Referenced by: '<S63>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Gain3_Gain
   * Referenced by: '<S63>/Gain3'
   */
  -2.0F,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S63>/Gain'
   */
  0.7F,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S63>/Gain1'
   */
  3.0F,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<S63>/Gain2'
   */
  0.7F,

  /* Computed Parameter: Gain4_Gain
   * Referenced by: '<S63>/Gain4'
   */
  0.3F,

  /* Computed Parameter: Gain5_Gain
   * Referenced by: '<S63>/Gain5'
   */
  0.5F,

  /* Computed Parameter: Gain6_Gain
   * Referenced by: '<S63>/Gain6'
   */
  0.333333343F,

  /* Computed Parameter: Gain7_Gain
   * Referenced by: '<S63>/Gain7'
   */
  0.166666672F,

  /* Computed Parameter: Gain8_Gain
   * Referenced by: '<S63>/Gain8'
   */
  0.3F,

  /* Computed Parameter: Constant_Value_da
   * Referenced by: '<S62>/Constant'
   */
  -0.1F,

  /* Computed Parameter: Gain1_Gain_f
   * Referenced by: '<S62>/Gain1'
   */
  1.0F,

  /* Computed Parameter: Gain2_Gain_g
   * Referenced by: '<S62>/Gain2'
   */
  0.0F,

  /* Computed Parameter: Gain_Gain_p
   * Referenced by: '<S62>/Gain'
   */
  -0.666666687F,

  /* Computed Parameter: Gain_Gain_m
   * Referenced by: '<S61>/Gain'
   */
  -1.0F,

  /* Computed Parameter: Constant_Value_pc
   * Referenced by: '<S60>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value_e
   * Referenced by: '<S60>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant3_Value
   * Referenced by: '<S60>/Constant3'
   */
  0.0F,

  /* Computed Parameter: Constant4_Value
   * Referenced by: '<S60>/Constant4'
   */
  0.0F,

  /* Computed Parameter: Constant5_Value_j
   * Referenced by: '<S60>/Constant5'
   */
  0.0F,

  /* Computed Parameter: Constant6_Value
   * Referenced by: '<S60>/Constant6'
   */
  0.0F,

  /* Computed Parameter: Constant7_Value
   * Referenced by: '<S60>/Constant7'
   */
  0.0F,

  /* Computed Parameter: Constant2_Value_c
   * Referenced by: '<S73>/Constant2'
   */
  2.0F,

  /* Computed Parameter: Constant2_Value_j
   * Referenced by: '<S76>/Constant2'
   */
  2.0F,

  /* Computed Parameter: Constant_Value_oa
   * Referenced by: '<S76>/Constant'
   */
  -1.0F,

  /* Computed Parameter: Constant_Value_ha
   * Referenced by: '<S21>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_b
   * Referenced by: '<S35>/Constant'
   */
  255.0F,

  /* Computed Parameter: Constant1_Value_fq
   * Referenced by: '<S35>/Constant1'
   */
  -0.1F,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<S35>/Switch'
   */
  0.0F,

  /* Computed Parameter: Constant2_Value_cl
   * Referenced by: '<S33>/Constant2'
   */
  0.1F,

  /* Computed Parameter: uDLookupTable_tableData
   * Referenced by: '<S32>/1-D Lookup Table'
   */
  { 3.0F, 20.0F },

  /* Computed Parameter: uDLookupTable_bp01Data
   * Referenced by: '<S32>/1-D Lookup Table'
   */
  { 0.0F, 20.0F },

  /* Computed Parameter: Gain_Gain_f
   * Referenced by: '<S32>/Gain'
   */
  0.7F,

  /* Computed Parameter: Constant_Value_nv
   * Referenced by: '<S34>/Constant'
   */
  2.0F,

  /* Computed Parameter: Constant1_Value_h
   * Referenced by: '<S34>/Constant1'
   */
  2.0F,

  /* Computed Parameter: Gain_Gain_k
   * Referenced by: '<S34>/Gain'
   */
  -1.0F,

  /* Computed Parameter: Constant6_Value_e
   * Referenced by: '<S52>/Constant6'
   */
  0.5F,

  /* Computed Parameter: Memory_InitialCondition_lb
   * Referenced by: '<S22>/Memory'
   */
  0.0F,

  /* Computed Parameter: Constant3_Value_n
   * Referenced by: '<S57>/Constant3'
   */
  2.0F,

  /* Computed Parameter: Constant2_Value_m
   * Referenced by: '<S57>/Constant2'
   */
  3.0F,

  /* Computed Parameter: Constant7_Value_n
   * Referenced by: '<S53>/Constant7'
   */
  -0.3F,

  /* Computed Parameter: Constant8_Value
   * Referenced by: '<S53>/Constant8'
   */
  2.0F,

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S53>/Constant'
   */
  -0.5F,

  /* Computed Parameter: Constant1_Value_fi
   * Referenced by: '<S53>/Constant1'
   */
  2.0F,

  /* Computed Parameter: Memory2_InitialCondition_k
   * Referenced by: '<S22>/Memory2'
   */
  0.0F,

  /* Computed Parameter: Memory1_4_InitialCondition
   * Referenced by: '<S22>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Memory1_2_InitialCondition
   * Referenced by: '<S22>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Memory1_3_InitialCondition
   * Referenced by: '<S22>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Memory1_5_InitialCondition
   * Referenced by: '<S22>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Memory1_6_InitialCondition
   * Referenced by: '<S22>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Memory1_7_InitialCondition
   * Referenced by: '<S22>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Memory1_8_InitialCondition
   * Referenced by: '<S22>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value_fr
   * Referenced by: '<S39>/Constant1'
   */
  3.0F,

  /* Computed Parameter: Constant3_Value_g
   * Referenced by: '<S39>/Constant3'
   */
  2.0F,

  /* Computed Parameter: Constant2_Value_g
   * Referenced by: '<S41>/Constant2'
   */
  1.0F,

  /* Computed Parameter: Constant3_Value_m
   * Referenced by: '<S41>/Constant3'
   */
  2.0F,

  /* Computed Parameter: Memory_InitialCondition_g
   * Referenced by: '<S41>/Memory'
   */
  0.0F,

  /* Computed Parameter: Constant4_Value_n
   * Referenced by: '<S41>/Constant4'
   */
  1.0F,

  /* Computed Parameter: Constant1_Value_be
   * Referenced by: '<S41>/Constant1'
   */
  3.0F,

  /* Computed Parameter: Memory1_8_InitialCondition_n
   * Referenced by: '<S41>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Memory1_7_InitialCondition_n
   * Referenced by: '<S41>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Memory1_6_InitialCondition_n
   * Referenced by: '<S41>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Memory1_5_InitialCondition_n
   * Referenced by: '<S41>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Memory1_4_InitialCondition_n
   * Referenced by: '<S41>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Memory1_3_InitialCondition_n
   * Referenced by: '<S41>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Memory1_2_InitialCondition_n
   * Referenced by: '<S41>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Merge_2_InitialOutput
   * Referenced by: '<S41>/Merge'
   */
  0.0F,

  /* Computed Parameter: Merge_3_InitialOutput
   * Referenced by: '<S41>/Merge'
   */
  0.0F,

  /* Computed Parameter: Merge_4_InitialOutput
   * Referenced by: '<S41>/Merge'
   */
  0.0F,

  /* Computed Parameter: Merge_5_InitialOutput
   * Referenced by: '<S41>/Merge'
   */
  0.0F,

  /* Computed Parameter: Merge_6_InitialOutput
   * Referenced by: '<S41>/Merge'
   */
  0.0F,

  /* Computed Parameter: Merge_7_InitialOutput
   * Referenced by: '<S41>/Merge'
   */
  0.0F,

  /* Computed Parameter: Merge_8_InitialOutput
   * Referenced by: '<S41>/Merge'
   */
  0.0F,

  /* Computed Parameter: Gain_Gain_j
   * Referenced by: '<S27>/Gain'
   */
  -1.0F,

  /* Computed Parameter: Constant5_Value_k
   * Referenced by: '<S27>/Constant5'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_c
   * Referenced by: '<S19>/Constant'
   */
  16.0F,

  /* Computed Parameter: uDLookupTable_tableData_j
   * Referenced by: '<S94>/1-D Lookup Table'
   */
  { 0.0F, 1.5F },

  /* Computed Parameter: uDLookupTable_bp01Data_c
   * Referenced by: '<S94>/1-D Lookup Table'
   */
  { 0.5F, 1.5F },

  /* Computed Parameter: Constant_Value_k
   * Referenced by: '<S94>/Constant'
   */
  0.0F,

  /* Computed Parameter: Switch_Threshold_i
   * Referenced by: '<S94>/Switch'
   */
  0.0F,

  /* Computed Parameter: uDLookupTable1_tableData
   * Referenced by: '<S94>/1-D Lookup Table1'
   */
  { 1.0F, 0.0F },

  /* Computed Parameter: uDLookupTable1_bp01Data
   * Referenced by: '<S94>/1-D Lookup Table1'
   */
  { 1.0F, 1.8F },

  /* Computed Parameter: Constant_Value_ga
   * Referenced by: '<S95>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_no
   * Referenced by: '<S96>/Constant'
   */
  1.0F,

  /* Computed Parameter: Merge_InitialOutput
   * Referenced by: '<S93>/Merge'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_a
   * Referenced by: '<S92>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_pu
   * Referenced by: '<S90>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_hd
   * Referenced by: '<S97>/Constant'
   */
  3.0F,

  /* Computed Parameter: uDLookupTable_tableData_n
   * Referenced by: '<S102>/1-D Lookup Table'
   */
  { 1.6F, 1.6F, 1.8F },

  /* Computed Parameter: uDLookupTable_bp01Data_m
   * Referenced by: '<S102>/1-D Lookup Table'
   */
  { 0.0F, 20.0F, 40.0F },

  /* Computed Parameter: uDLookupTable1_tableData_d
   * Referenced by: '<S102>/1-D Lookup Table1'
   */
  { -1.0F, 1.0F },

  /* Computed Parameter: uDLookupTable1_bp01Data_b
   * Referenced by: '<S102>/1-D Lookup Table1'
   */
  { -0.2F, 0.2F },

  /* Computed Parameter: uDLookupTable_tableData_jd
   * Referenced by: '<S106>/1-D Lookup Table'
   */
  { 80.0F, 120.0F },

  /* Computed Parameter: uDLookupTable_bp01Data_n
   * Referenced by: '<S106>/1-D Lookup Table'
   */
  { 11.11F, 22.22F },

  /* Computed Parameter: Constant_Value_cs
   * Referenced by: '<S106>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_ar
   * Referenced by: '<S107>/Constant'
   */
  2.0F,

  /* Computed Parameter: Constant1_Value_j
   * Referenced by: '<S107>/Constant1'
   */
  4.0F,

  /* Computed Parameter: Constant2_Value_f
   * Referenced by: '<S107>/Constant2'
   */
  1.0F,

  /* Computed Parameter: Constant3_Value_md
   * Referenced by: '<S107>/Constant3'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_gd
   * Referenced by: '<S86>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_pb
   * Referenced by: '<S88>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value_l
   * Referenced by: '<S85>/Constant1'
   */
  0.5F,

  /* Computed Parameter: Constant3_Value_c
   * Referenced by: '<S87>/Constant3'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value_bc
   * Referenced by: '<S87>/Constant1'
   */
  1.0F,

  /* Computed Parameter: Constant2_Value_jk
   * Referenced by: '<S87>/Constant2'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_b0
   * Referenced by: '<S87>/Constant'
   */
  0.6F,

  /* Computed Parameter: Constant5_Value_e
   * Referenced by: '<S110>/Constant5'
   */
  255.0F,

  /* Computed Parameter: Constant_Value_b4
   * Referenced by: '<S110>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value_fqq
   * Referenced by: '<S110>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant2_Value_h
   * Referenced by: '<S110>/Constant2'
   */
  0.0F,

  /* Computed Parameter: Constant3_Value_nq
   * Referenced by: '<S110>/Constant3'
   */
  0.0F,

  /* Computed Parameter: Constant4_Value_f
   * Referenced by: '<S110>/Constant4'
   */
  0.0F,

  /* Computed Parameter: Constant7_Value_c
   * Referenced by: '<S110>/Constant7'
   */
  0.0F,

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S83>/Delay'
   */
  65535.0F,

  /* Computed Parameter: Merge5_InitialOutput
   * Referenced by: '<S83>/Merge5'
   */
  0.0F,

  /* Computed Parameter: Merge_InitialOutput_b
   * Referenced by: '<S83>/Merge'
   */
  0.0F,

  /* Computed Parameter: Merge1_InitialOutput_k
   * Referenced by: '<S83>/Merge1'
   */
  0.0F,

  /* Computed Parameter: Merge2_InitialOutput
   * Referenced by: '<S83>/Merge2'
   */
  0.0F,

  /* Computed Parameter: Merge3_InitialOutput
   * Referenced by: '<S83>/Merge3'
   */
  0.0F,

  /* Computed Parameter: Merge4_InitialOutput
   * Referenced by: '<S83>/Merge4'
   */
  0.0F,

  /* Computed Parameter: axAbsInit_Value
   * Referenced by: '<S83>/axAbsInit'
   */
  0.0F,

  /* Computed Parameter: Merge7_InitialOutput
   * Referenced by: '<S83>/Merge7'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_dd
   * Referenced by: '<S129>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_ag
   * Referenced by: '<S128>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_o3
   * Referenced by: '<S130>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant3_Value_b
   * Referenced by: '<S4>/Constant3'
   */
  0.0F,

  /* Computed Parameter: uDLookupTable_tableData_b
   * Referenced by: '<S111>/1-D Lookup Table'
   */
  { -0.1F, -0.002F, 0.0F, 0.0F, 0.002F, 0.1F },

  /* Computed Parameter: uDLookupTable_bp01Data_d
   * Referenced by: '<S111>/1-D Lookup Table'
   */
  { -0.1F, -0.002F, -0.001F, 0.001F, 0.002F, 0.1F },

  /* Computed Parameter: Constant1_Value_e1
   * Referenced by: '<S111>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant3_Value_k
   * Referenced by: '<S111>/Constant3'
   */
  1.0F,

  /* Computed Parameter: Memory_InitialCondition_go
   * Referenced by: '<S111>/Memory'
   */
  0.0F,

  /* Computed Parameter: Constant2_Value_fp
   * Referenced by: '<S4>/Constant2'
   */
  0.5F,

  /* Computed Parameter: Constant4_Value_n5
   * Referenced by: '<S4>/Constant4'
   */
  0.0F,

  /* Computed Parameter: Constant5_Value_b
   * Referenced by: '<S4>/Constant5'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_m
   * Referenced by: '<S16>/Constant'
   */
  0.0F,

  /* Computed Parameter: Memory_InitialCondition_a
   * Referenced by: '<S1>/Memory'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_f3
   * Referenced by: '<S14>/Constant'
   */
  16.0F,

  /* Computed Parameter: Constant_Value_m4
   * Referenced by: '<S17>/Constant'
   */
  -5.0F,

  /* Computed Parameter: Constant_Value_dn
   * Referenced by: '<S18>/Constant'
   */
  2.0F,

  /* Computed Parameter: Gain_Gain_ki
   * Referenced by: '<Root>/Gain'
   */
  1.1F,

  /* Computed Parameter: Gain1_Gain_p
   * Referenced by: '<Root>/Gain1'
   */
  0.9F,

  /* Computed Parameter: vSet_Value
   * Referenced by: '<S16>/vSet'
   */
  25.0F,

  /* Computed Parameter: Delay_DelayLength
   * Referenced by: '<S83>/Delay'
   */
  1U,

  /* Computed Parameter: Constant2_Value_e
   * Referenced by: '<S60>/Constant2'
   */
  0,

  /* Computed Parameter: Constant_Value_fj
   * Referenced by: '<S22>/Constant'
   */
  0,

  /* Computed Parameter: Memory1_1_InitialCondition
   * Referenced by: '<S22>/Memory1'
   */
  0,

  /* Computed Parameter: Memory1_1_InitialCondition_n
   * Referenced by: '<S41>/Memory1'
   */
  0,

  /* Computed Parameter: Merge_1_InitialOutput
   * Referenced by: '<S41>/Merge'
   */
  0,

  /* Computed Parameter: Constant5_Value_n
   * Referenced by: '<S28>/Constant5'
   */
  1,

  /* Computed Parameter: Constant6_Value_m
   * Referenced by: '<S28>/Constant6'
   */
  0,

  /* Computed Parameter: Constant1_Value_i
   * Referenced by: '<S19>/Constant1'
   */
  0,

  /* Computed Parameter: Constant_Value_ao
   * Referenced by: '<S89>/Constant'
   */
  0,

  /* Computed Parameter: Constant_Value_n5
   * Referenced by: '<S109>/Constant'
   */
  1,

  /* Computed Parameter: Constant6_Value_l
   * Referenced by: '<S110>/Constant6'
   */
  0,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S3>/Out1'
   */
  0,

  /* Computed Parameter: Zero_Value
   * Referenced by: '<S3>/Zero'
   */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },

  /* Computed Parameter: Merge6_InitialOutput
   * Referenced by: '<S83>/Merge6'
   */
  0,

  /* Computed Parameter: Memory_InitialCondition_h
   * Referenced by: '<S10>/Memory'
   */
  0,

  /* Computed Parameter: Memory1_InitialCondition_h
   * Referenced by: '<S10>/Memory1'
   */
  0,

  /* Computed Parameter: Constant_Value_kx
   * Referenced by: '<S9>/Constant'
   */
  1,

  /* Computed Parameter: Memory_InitialCondition_o
   * Referenced by: '<S15>/Memory'
   */
  0,

  /* Computed Parameter: Constant_Value_dc
   * Referenced by: '<Root>/Constant'
   */
  0,

  /* Start of '<S117>/CoreSubsys' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S118>/Constant1'
     */
    3.68F,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S118>/Constant3'
     */
    0.0F,

    /* Computed Parameter: Constant1_Value_e
     * Referenced by: '<S117>/Constant1'
     */
    0.0F,

    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S117>/Constant2'
     */
    0.0F,

    /* Computed Parameter: Constant4_Value
     * Referenced by: '<S117>/Constant4'
     */
    0.0F,

    /* Computed Parameter: uDLookupTable_tableData
     * Referenced by: '<S119>/1-D Lookup Table'
     */
    { 0.0F, 1.0F, 4.0F, 2.0F, 0.0F, 0.0F },

    /* Computed Parameter: uDLookupTable_bp01Data
     * Referenced by: '<S119>/1-D Lookup Table'
     */
    { 0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F },

    /* Computed Parameter: uDLookupTable_tableData_p
     * Referenced by: '<S120>/1-D Lookup Table'
     */
    { 0.0F, 3.0F, 2.0F, 1.0F },

    /* Computed Parameter: uDLookupTable_bp01Data_l
     * Referenced by: '<S120>/1-D Lookup Table'
     */
    { 0.0F, 1.0F, 2.0F, 3.0F },

    /* Computed Parameter: Constant3_Value_f
     * Referenced by: '<S117>/Constant3'
     */
    0.999F
  }
  ,

  /* End of '<S117>/CoreSubsys' */

  /* Start of '<S27>/If Action Subsystem2' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S70>/Constant'
     */
    0.0F
  }
  ,

  /* End of '<S27>/If Action Subsystem2' */

  /* Start of '<S52>/ObjStopped' */
  {
    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S55>/Constant2'
     */
    0.0F
  }
  ,

  /* End of '<S52>/ObjStopped' */

  /* Start of '<S52>/ObjNoStop' */
  {
    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S54>/Constant2'
     */
    255.0F
  }
  ,

  /* End of '<S52>/ObjNoStop' */

  /* Start of '<S39>/If Action Subsystem1' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S43>/Constant'
     */
    0.0F
  }
  ,

  /* End of '<S39>/If Action Subsystem1' */

  /* Start of '<S42>/If Action Subsystem2' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S46>/Constant'
     */
    0.0F
  }
  ,

  /* End of '<S42>/If Action Subsystem2' */

  /* Start of '<S21>/If Action Subsystem3' */
  {
    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S31>/Constant2'
     */
    2.0F
  }
  ,

  /* End of '<S21>/If Action Subsystem3' */

  /* Start of '<S21>/If Action Subsystem' */
  {
    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S29>/Constant2'
     */
    1.0F
  }
  /* End of '<S21>/If Action Subsystem' */
};
