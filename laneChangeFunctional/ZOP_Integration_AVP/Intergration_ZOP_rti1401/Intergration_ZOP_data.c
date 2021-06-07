/*
 * Intergration_ZOP_data.c
 *
 * Code generation for model "Intergration_ZOP".
 *
 * Model version              : 1.385
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Mar 17 16:07:06 2021
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Intergration_ZOP.h"
#include "Intergration_ZOP_private.h"

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
real32_T rtP_P_StsdCase = 1.0F;        /* Variable: P_StsdCase
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_StsddAxRamp = 1.0F;     /* Variable: P_StsddAxRamp
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_aDiffaF = 0.05F;        /* Variable: P_aDiffaF
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_aFOCApproachIntpAcitve = -0.6F;/* Variable: P_aFOCApproachIntpAcitve
                                               * Referenced by: '<Root>/ACC'
                                               */
real32_T rtP_P_aFOCApproachIntpEnsure = -1.8F;/* Variable: P_aFOCApproachIntpEnsure
                                               * Referenced by: '<Root>/ACC'
                                               */
real32_T rtP_P_dAimMin = 4.5F;         /* Variable: P_dAimMin
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_dAimMinAVP = 1.5F;      /* Variable: P_dAimMinAVP
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
real32_T rtP_P_dObjDrvOffMax = 5.0F;   /* Variable: P_dObjDrvOffMax
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_dObjDrvOffMin = 3.0F;   /* Variable: P_dObjDrvOffMin
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_dObjLowHystDecToStop = 4.5F;/* Variable: P_dObjLowHystDecToStop
                                            * Referenced by: '<Root>/ACC'
                                            */
real32_T rtP_P_dObjLowHystDecToStopAVP = 1.5F;/* Variable: P_dObjLowHystDecToStopAVP
                                               * Referenced by: '<Root>/ACC'
                                               */
real32_T rtP_P_dObjUpperHystDecToStop = 5.0F;/* Variable: P_dObjUpperHystDecToStop
                                              * Referenced by: '<Root>/ACC'
                                              */
real32_T rtP_P_dSlopeLim = 0.3F;       /* Variable: P_dSlopeLim
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_dvarYMax4PO = 1.0F;     /* Variable: P_dvarYMax4PO
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_dyCutInThres = 3.6F;    /* Variable: P_dyCutInThres
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_facFOCNegDiff = 0.3F;   /* Variable: P_facFOCNegDiff
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_facFOCPosDiff = 0.2F;   /* Variable: P_facFOCPosDiff
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_kapHystThres = 0.0005F; /* Variable: P_kapHystThres
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
real32_T rtP_P_tAxTrackNegLower = 0.3F;/* Variable: P_tAxTrackNegLower
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tAxTrackNegUpper = 0.6F;/* Variable: P_tAxTrackNegUpper
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tAxTrackPosLower = 1.0F;/* Variable: P_tAxTrackPosLower
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tAxTrackPosUpper = 2.0F;/* Variable: P_tAxTrackPosUpper
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tAxsFilt = 0.2F;        /* Variable: P_tAxsFilt
                                        * Referenced by: '<Root>/VSI'
                                        */
real32_T rtP_P_tCSC = 3.5F;            /* Variable: P_tCSC
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
real32_T rtP_P_tFOCStatAccelFast = 4.0F;/* Variable: P_tFOCStatAccelFast
                                         * Referenced by: '<Root>/ACC'
                                         */
real32_T rtP_P_tFOCStatAccelSlow = 3.5F;/* Variable: P_tFOCStatAccelSlow
                                         * Referenced by: '<Root>/ACC'
                                         */
real32_T rtP_P_tFOCStatDecelFast = 4.0F;/* Variable: P_tFOCStatDecelFast
                                         * Referenced by: '<Root>/ACC'
                                         */
real32_T rtP_P_tFOCStatDecelSlow = 3.2F;/* Variable: P_tFOCStatDecelSlow
                                         * Referenced by: '<Root>/ACC'
                                         */
real32_T rtP_P_tFiltAxAbsPONegFast = 0.1F;/* Variable: P_tFiltAxAbsPONegFast
                                           * Referenced by: '<Root>/ACC'
                                           */
real32_T rtP_P_tFiltAxAbsPONegSlow = 0.4F;/* Variable: P_tFiltAxAbsPONegSlow
                                           * Referenced by: '<Root>/ACC'
                                           */
real32_T rtP_P_tFiltAxAbsPOPosFast = 1.2F;/* Variable: P_tFiltAxAbsPOPosFast
                                           * Referenced by: '<Root>/ACC'
                                           */
real32_T rtP_P_tFiltAxAbsPOPosSlow = 2.0F;/* Variable: P_tFiltAxAbsPOPosSlow
                                           * Referenced by: '<Root>/ACC'
                                           */
real32_T rtP_P_tFiltAxAbsPOStand = 2.0F;/* Variable: P_tFiltAxAbsPOStand
                                         * Referenced by: '<Root>/ACC'
                                         */
real32_T rtP_P_tFiltDAim = 0.1F;       /* Variable: P_tFiltDAim
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tFiltDsd = 0.1F;        /* Variable: P_tFiltDsd
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_tFiltSpdLim = 3.0F;     /* Variable: P_tFiltSpdLim
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
real32_T rtP_P_tPredObjLeav = 1.2F;    /* Variable: P_tPredObjLeav
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
real32_T rtP_P_vFOCNegDiff = 4.0F;     /* Variable: P_vFOCNegDiff
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_vFOCPosDiff = 5.0F;     /* Variable: P_vFOCPosDiff
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_vFOCStationaryFast = 15.0F;/* Variable: P_vFOCStationaryFast
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
real32_T rtP_P_vLowSpd = 0.83F;        /* Variable: P_vLowSpd
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_P_vObjDrvOff = 0.5F;      /* Variable: P_vObjDrvOff
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_vObjLowHystDecToStop = 0.5F;/* Variable: P_vObjLowHystDecToStop
                                            * Referenced by: '<Root>/ACC'
                                            */
real32_T rtP_P_vObjUpperHystDecToStop = 0.8F;/* Variable: P_vObjUpperHystDecToStop
                                              * Referenced by: '<Root>/ACC'
                                              */
real32_T rtP_P_vStandStill = 0.3F;     /* Variable: P_vStandStill
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_vStandStillHyst = 0.3F; /* Variable: P_vStandStillHyst
                                        * Referenced by: '<Root>/ACC'
                                        */
real32_T rtP_P_x165_On = 1.0F;         /* Variable: P_x165_On
                                        * Referenced by: '<S413>/P_x165_On'
                                        */
real32_T rtP_P_x242_On = 1.0F;         /* Variable: P_x242_On
                                        * Referenced by: '<S414>/P_x242_On'
                                        */
real32_T rtP_P_x246_On = 1.0F;         /* Variable: P_x246_On
                                        * Referenced by: '<S415>/P_x246_On'
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
real32_T rtP_k_ZOP_ALC_D10 = 1500.0F;  /* Variable: k_ZOP_ALC_D10
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
real32_T rtP_k_ZOP_ALC_Enable = 1.0F;  /* Variable: k_ZOP_ALC_Enable
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
real32_T rtP_k_ZOP_ALC_Ramp = 1.0F;    /* Variable: k_ZOP_ALC_Ramp
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
real32_T rtP_k_ZOP_HoldCnt = 50.0F;    /* Variable: k_ZOP_HoldCnt
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
real32_T rtP_k_ZOP_LCProCnt = 15.0F;   /* Variable: k_ZOP_LCProCnt
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
real32_T rtP_k_ZOP_LCTimeMax = 15.0F;  /* Variable: k_ZOP_LCTimeMax
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
real32_T rtP_k_ZOP_LS_ChangingDist = 5.0F;/* Variable: k_ZOP_LS_ChangingDist
                                           * Referenced by: '<Root>/ZOP_Main'
                                           */
real32_T rtP_k_ZOP_LS_ChangingTime = 0.5F;/* Variable: k_ZOP_LS_ChangingTime
                                           * Referenced by: '<Root>/ZOP_Main'
                                           */
real32_T rtP_k_ZOP_MapFlag_Enable = 0.0F;/* Variable: k_ZOP_MapFlag_Enable
                                          * Referenced by: '<Root>/ZOP_Main'
                                          */
real32_T rtP_k_ZOP_ObjSpd_cf = 0.05F;  /* Variable: k_ZOP_ObjSpd_cf
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
real32_T rtP_k_ZOP_SpdCkDstThr = 50.0F;/* Variable: k_ZOP_SpdCkDstThr
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
real32_T rtP_k_ZOP_SpdLmt_Enable = 1.0F;/* Variable: k_ZOP_SpdLmt_Enable
                                         * Referenced by: '<Root>/ZOP_Main'
                                         */
real32_T rtP_k_ZOP_SpdLoThr = 4.0F;    /* Variable: k_ZOP_SpdLoThr
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
real32_T rtP_k_ZOP_V2X_Enable = 1.0F;  /* Variable: k_ZOP_V2X_Enable
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
real32_T rtP_k_ZOP_VcTJA_Enable = 1.0F;/* Variable: k_ZOP_VcTJA_Enable
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
real32_T rtP_k_ZOP_VoiceAct_Enable = 1.0F;/* Variable: k_ZOP_VoiceAct_Enable
                                           * Referenced by: '<Root>/ZOP_Main'
                                           */
real32_T rtP_m_Vehicle = 2000.0F;      /* Variable: m_Vehicle
                                        * Referenced by: '<Root>/VLC'
                                        */
real32_T rtP_r_Wheel = 0.347F;         /* Variable: r_Wheel
                                        * Referenced by: '<Root>/VLC'
                                        */
boolean_T rtP_P_CutInEnable = 1;       /* Variable: P_CutInEnable
                                        * Referenced by: '<Root>/ACC'
                                        */
boolean_T rtP_P_PlausIntegDisable = 0; /* Variable: P_PlausIntegDisable
                                        * Referenced by: '<Root>/ACC'
                                        */
boolean_T rtP_P_StandObjEnable = 0;    /* Variable: P_StandObjEnable
                                        * Referenced by: '<Root>/ACC'
                                        */
int8_T rtP_k_ZOP_ALC_SCnt = 30;        /* Variable: k_ZOP_ALC_SCnt
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
int8_T rtP_k_ZOP_ALC_SCnt_LC = 20;     /* Variable: k_ZOP_ALC_SCnt_LC
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
int8_T rtP_k_ZOP_ALC_SCnt_Thr = 15;    /* Variable: k_ZOP_ALC_SCnt_Thr
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
int8_T rtP_k_ZOP_ALC_SCnt_Thr_LC = 15; /* Variable: k_ZOP_ALC_SCnt_Thr_LC
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
int8_T rtP_k_ZOP_ALC_SNCnt = 30;       /* Variable: k_ZOP_ALC_SNCnt
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
int8_T rtP_k_ZOP_ALC_SNCnt_LC = 20;    /* Variable: k_ZOP_ALC_SNCnt_LC
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
int8_T rtP_k_ZOP_ALC_SpdEnable = 0;    /* Variable: k_ZOP_ALC_SpdEnable
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
int8_T rtP_k_ZOP_SpdLoTimeThr = 50;    /* Variable: k_ZOP_SpdLoTimeThr
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
uint8_T rtP_MODE_ZOP_ACTIVE = 3U;      /* Variable: MODE_ZOP_ACTIVE
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
uint8_T rtP_MODE_ZOP_ERROR = 15U;      /* Variable: MODE_ZOP_ERROR
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
uint8_T rtP_MODE_ZOP_FINISH = 10U;     /* Variable: MODE_ZOP_FINISH
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
uint8_T rtP_MODE_ZOP_HOLD = 6U;        /* Variable: MODE_ZOP_HOLD
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
uint8_T rtP_MODE_ZOP_LC = 7U;          /* Variable: MODE_ZOP_LC
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
uint8_T rtP_MODE_ZOP_OFF = 0U;         /* Variable: MODE_ZOP_OFF
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
uint8_T rtP_MODE_ZOP_OVERIDE = 8U;     /* Variable: MODE_ZOP_OVERIDE
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
uint8_T rtP_MODE_ZOP_PASSIVE = 1U;     /* Variable: MODE_ZOP_PASSIVE
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */
uint8_T rtP_MODE_ZOP_READY = 2U;       /* Variable: MODE_ZOP_READY
                                        * Referenced by: '<Root>/ZOP_Main'
                                        */

/* Block parameters (default storage) */
P_Intergration_ZOP_T Intergration_ZOP_P = {
  1.0F,
  2.0F,
  16383U,
  16383U,
  255U,
  1U,
  255U,
  248U,
  255U,
  248U,
  255U,
  248U,
  255U,
  248U,
  255U,
  248U,
  255U,
  255U,
  255U,
  255U,
  255U,
  255U,
  255U,
  255U,
  1U,
  120U,
  7U,
  64U,
  48U,
  56U,
  7U,
  128U,
  255U,
  127U,
  128U,
  28U,
  224U,
  224U,
  3U,
  28U,
  112U,
  15U,
  224U,
  128U,
  16U,
  4U,
  192U,
  8U,
  2U,
  15U,
  6U,
  6U,
  15U,
  6U,
  6U,
  15U,
  15U,
  15U,
  15U,
  240U,
  255U,

  {
    {
      {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      } }
    /* objects */
  },

  {
    {
      {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      } }
    /* objects */
  },

  {
    {
      {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      } }
    /* objects */
  },

  {
    {
      {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* RCS */
        0.0F,                          /* DynProp */
        0.0F,                          /* VrelLat */
        0.0F,                          /* VrelLong */
        0.0F,                          /* DistLat */
        0.0F,                          /* DistLong */
        0.0F                           /* ID */
      } }
    /* objects */
  },

  {
    false,                             /* Valid */
    0.0F,                              /* Index */
    0.0F,                              /* dx */
    0.0F,                              /* dy */
    0.0F,                              /* vx */
    0.0F,                              /* vy */
    0.0F,                              /* ax */
    0.0F,                              /* vxAbs */
    0.0F,                              /* axAbs */
    0.0F,                              /* Type */
    0.0F                               /* MotionSts */
  },

  {
    0U,                                /* ACCCMDType */
    0.0F,                              /* ACCVLCMainReq */
    0.0F,                              /* ACCAxtar */
    0.0F,                              /* ACCAxTarUpperComfBand */
    0.0F,                              /* ACCAxTarLowerComfBand */
    false,                             /* ACCBrkPrfrd */
    false,                             /* ACCDriveoffReq */
    false,                             /* ACCStandstillReq */
    0.0F,                              /* ACCdSet */
    0.0F,                              /* ACCvSet */
    0U                                 /* ACC_Disable_Msk */
  },

  {
    0.0F,                              /* Vehicle_Front_dy */
    0.0F,                              /* Vehicle_Front_dx */
    0.0F,                              /* Vehicle_Front_Type */
    0.0F,                              /* ACC_Tip */
    0.0F,                              /* ACC_Status */
    0.0F,                              /* ACC_Passive_Rea */
    0.0F,                              /* ACC_Error */
    0.0F,                              /* TimeGapRes */
    0.0F                               /* vSetDis */
  },

  {
    0.0F,                              /* RCS */
    0.0F,                              /* DynProp */
    0.0F,                              /* VrelLat */
    0.0F,                              /* VrelLong */
    0.0F,                              /* DistLat */
    0.0F,                              /* DistLong */
    0.0F                               /* ID */
  },

  { {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    } },

  {
    0.0F,                              /* RCS */
    0.0F,                              /* DynProp */
    0.0F,                              /* VrelLat */
    0.0F,                              /* VrelLong */
    0.0F,                              /* DistLat */
    0.0F,                              /* DistLong */
    0.0F                               /* ID */
  },

  { {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    } },

  {
    0.0F,                              /* RCS */
    0.0F,                              /* DynProp */
    0.0F,                              /* VrelLat */
    0.0F,                              /* VrelLong */
    0.0F,                              /* DistLat */
    0.0F,                              /* DistLong */
    0.0F                               /* ID */
  },

  { {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    } },

  {
    0.0F,                              /* RCS */
    0.0F,                              /* DynProp */
    0.0F,                              /* VrelLat */
    0.0F,                              /* VrelLong */
    0.0F,                              /* DistLat */
    0.0F,                              /* DistLong */
    0.0F                               /* ID */
  },

  { {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* RCS */
      0.0F,                            /* DynProp */
      0.0F,                            /* VrelLat */
      0.0F,                            /* VrelLong */
      0.0F,                            /* DistLat */
      0.0F,                            /* DistLong */
      0.0F                             /* ID */
    } },

  {
    0.0F,                              /* RCS */
    0.0F,                              /* DynProp */
    0.0F,                              /* VrelLat */
    0.0F,                              /* VrelLong */
    0.0F,                              /* DistLat */
    0.0F,                              /* DistLong */
    0.0F                               /* ID */
  },

  {
    0.0F,                              /* RCS */
    0.0F,                              /* DynProp */
    0.0F,                              /* VrelLat */
    0.0F,                              /* VrelLong */
    0.0F,                              /* DistLat */
    0.0F,                              /* DistLong */
    0.0F                               /* ID */
  },

  {
    0.0F,                              /* RCS */
    0.0F,                              /* DynProp */
    0.0F,                              /* VrelLat */
    0.0F,                              /* VrelLong */
    0.0F,                              /* DistLat */
    0.0F,                              /* DistLong */
    0.0F                               /* ID */
  },

  {
    0.0F,                              /* RCS */
    0.0F,                              /* DynProp */
    0.0F,                              /* VrelLat */
    0.0F,                              /* VrelLong */
    0.0F,                              /* DistLat */
    0.0F,                              /* DistLong */
    0.0F                               /* ID */
  },

  {
    0.0F,                              /* RCS */
    0.0F,                              /* DynProp */
    0.0F,                              /* VrelLat */
    0.0F,                              /* VrelLong */
    0.0F,                              /* DistLat */
    0.0F,                              /* DistLong */
    0.0F                               /* ID */
  },

  {
    0.0F,                              /* RCS */
    0.0F,                              /* DynProp */
    0.0F,                              /* VrelLat */
    0.0F,                              /* VrelLong */
    0.0F,                              /* DistLat */
    0.0F,                              /* DistLong */
    0.0F                               /* ID */
  },

  {
    0.0F,                              /* RCS */
    0.0F,                              /* DynProp */
    0.0F,                              /* VrelLat */
    0.0F,                              /* VrelLong */
    0.0F,                              /* DistLat */
    0.0F,                              /* DistLong */
    0.0F                               /* ID */
  },

  {
    0.0F,                              /* RCS */
    0.0F,                              /* DynProp */
    0.0F,                              /* VrelLat */
    0.0F,                              /* VrelLong */
    0.0F,                              /* DistLat */
    0.0F,                              /* DistLong */
    0.0F                               /* ID */
  },

  {
    0.0F,                              /* EngineTorqReq */
    false,                             /* EngineTorqReqSt */
    0.0F,                              /* ACCState */
    false,                             /* CDDEnable */
    0.0F,                              /* CDDAxtar */
    false,                             /* CDDDriveoffReq */
    false                              /* CDDStandstillReq */
  },
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  1.0,
  0.0,
  10.0,
  0.0,
  11.0,
  0.0,
  12.0,
  0.0,
  13.0,
  0.0,
  14.0,
  0.0,
  15.0,
  0.0,
  16.0,
  0.0,
  17.0,
  0.0,
  18.0,
  0.0,
  19.0,
  0.0,
  2.0,
  0.0,
  20.0,
  0.0,
  21.0,
  0.0,
  22.0,
  0.0,
  23.0,
  0.0,
  24.0,
  0.0,
  25.0,
  0.0,
  26.0,
  0.0,
  27.0,
  0.0,
  28.0,
  0.0,
  29.0,
  0.0,
  3.0,
  0.0,
  30.0,
  0.0,
  31.0,
  0.0,
  4.0,
  0.0,
  5.0,
  0.0,
  6.0,
  0.0,
  7.0,
  0.0,
  8.0,
  0.0,
  9.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.5,
  848.0,
  0.5,
  848.0,
  0.0,
  7.22,
  0.005,
  0.005,
  7.22,
  12.7,
  0.1,
  0.1,
  12.7,
  -1.0,
  14.0,
  1.0,
  0.0,
  1.0,
  0.0,
  0.0,
  -1.0,
  14.0,
  1.0,
  0.05625,
  0.05625,
  0.05625,
  0.05625,
  0.0,
  0.0,
  -1.0,
  14.0,
  1.0,
  0.05625,
  0.05625,
  0.05625,
  0.05625,
  0.0,
  0.0,
  -1.0,
  14.0,
  1.0,
  0.05625,
  0.0,
  0.05625,
  0.0,
  -1.0,
  14.0,
  1.0,
  9.8,
  2.0,
  0.001,
  0.001,
  2.0,
  180.0,
  0.01,
  0.0,
  0.01,
  180.0,
  0.0,
  -1.0,
  14.0,
  1.0,
  0.0,
  9.8,
  2.0,
  0.001,
  0.001,
  2.0,
  0.0,
  -1.0,
  14.0,
  1.0,
  0.0,
  0.0,
  0.001,
  -0.001,
  60.0,
  0.5,
  0.0,
  0.0,
  0.0,
  0.0,
  3.0,
  1.0,
  1.0,
  100.0,
  0.01,
  0.0,
  0.0,
  0.0,
  1.0,
  4.0,
  0.0,
  1.0,
  0.0,
  5.0,
  0.0,
  0.0,
  2.0,
  0.0,
  0.0,
  0.0,
  2.0,
  2.0,
  1.0,
  0.0,
  780.0,
  0.1,
  0.1,
  780.0,
  0.0,
  0.0,
  -1.0,
  14.0,
  1.0,
  1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  1.0,
  1.0,
  0.3,
  1.0,
  0.15,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.27777777777777779,
  0.27777777777777779,
  0.27777777777777779,
  1.0,
  4.0,
  2.0,
  8.0,
  0.0,
  0.0,
  0.0,
  0.0,
  1.401E+6,
  1.0,
  1.0,
  0.0,
  500.0,
  2.1143421E+7,
  1.0,
  0.0F,
  1.0F,
  0.0F,
  0.0F,
  255.0F,
  0.0F,
  1.0F,
  0.0F,
  1.0F,
  0.0F,
  0.0F,
  255.0F,
  0.0F,
  1.0F,
  0.0F,
  1.0F,
  0.0F,
  0.0F,
  255.0F,
  0.0F,
  1.0F,
  0.0F,
  1.0F,
  0.0F,
  0.0F,
  255.0F,
  0.0F,
  1.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,

  { 0.0F, 1.0F, 2.0F, 5.0F, 3.0F },

  { 0.0F, 1.0F, 2.0F, 3.0F, 4.0F },
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  1.0F,
  0.0F,
  1.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  3.78F,

  { 1.0F, 2.0F, 3.0F, 4.0F, 5.0F },

  { 5.0F, 10.0F, 20.0F, 30.0F, 40.0F },
  0.0F,
  0.0F,
  0.0F,
  0.0F,

  { 0.0F, 2.0F, 3.0F, 3.0F, 4.0F },

  { 0.0F, 1.0F, 2.0F, 3.0F, 4.0F },
  0.0F,
  0.0F,
  0.0F,
  3.78F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,

  { 0.0F, 0.0F, 1.0F, 1.0F, 2.0F },

  { 0.0F, 1.0F, 2.0F, 3.0F, 4.0F },
  1.0F,
  3.0F,
  2.0F,
  3.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.01F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  4.0F,
  2.0F,
  6.0F,
  0.0F,
  3.0F,
  1.0F,
  0.1F,
  0.0F,
  0.08F,
  0.0F,
  0.0F,
  3.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  0.0F,
  0.0F,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  3U,
  2U,
  3U,
  2U,
  3U,
  2U,
  3U,
  2U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  128U,
  128U,
  0U,
  7U,
  0U,
  0U,
  7U,
  0U,
  7U,
  0U,
  7U,
  0U,
  7U,
  0U,
  7U,
  0U,
  7U,
  0U,
  7U,
  0U,
  7U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  1U,

  /* Start of '<S391>/If Action Subsystem2' */
  {
    5.0F
  }
  ,

  /* End of '<S391>/If Action Subsystem2' */

  /* Start of '<S391>/If Action Subsystem1' */
  {
    4.0F
  }
  ,

  /* End of '<S391>/If Action Subsystem1' */

  /* Start of '<S391>/If Action Subsystem' */
  {
    0.0F
  }
  ,

  /* End of '<S391>/If Action Subsystem' */

  /* Start of '<S417>/If Action Subsystem2' */
  {
    5.0F
  }
  ,

  /* End of '<S417>/If Action Subsystem2' */

  /* Start of '<S417>/If Action Subsystem1' */
  {
    4.0F
  }
  ,

  /* End of '<S417>/If Action Subsystem1' */

  /* Start of '<S417>/If Action Subsystem' */
  {
    0.0F
  }
  /* End of '<S417>/If Action Subsystem' */
};
