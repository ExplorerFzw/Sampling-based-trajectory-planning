/*
 * VLC_types.h
 *
 * Code generation for model "VLC".
 *
 * Model version              : 1.1232
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Mon Dec 28 15:32:39 2020
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_VLC_types_h_
#define RTW_HEADER_VLC_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_ACC_LGTCTRL_ST_
#define DEFINED_TYPEDEF_FOR_ACC_LGTCTRL_ST_

typedef struct {
  real32_T ACCVLCMainReq;
  real32_T ACCAxtar;
  real32_T ACCAxTarUpperComfBand;
  real32_T ACCAxTarLowerComfBand;
  boolean_T ACCBrkPrfrd;
  boolean_T ACCDriveoffReq;
  boolean_T ACCStandstillReq;
  real32_T ACCdSet;
  real32_T ACCvSet;
  uint16_T ACC_Disable_Msk;
} ACC_LGTCTRL_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SYS_INFO_ST_
#define DEFINED_TYPEDEF_FOR_SYS_INFO_ST_

typedef struct {
  real32_T dT;
} SYS_INFO_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VSI_VEHSTATE_ST_
#define DEFINED_TYPEDEF_FOR_VSI_VEHSTATE_ST_

typedef struct {
  real32_T YrsF;
  real32_T AxSensorF;
  real32_T StWheelAngleF;
  real32_T vRef;
  real32_T aRef;
  real32_T AxSlope;
  boolean_T AxSlopeValid;
  real32_T Curvature;
} VSI_VEHSTATE_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_x194_
#define DEFINED_TYPEDEF_FOR_x194_

typedef struct {
  real32_T TrShftLvrPos;
  boolean_T TrShftLvrPosV;
  real32_T TrEstdGear;
  boolean_T TrEstdGearV;
} x194;

#endif

#ifndef DEFINED_TYPEDEF_FOR_xFB_
#define DEFINED_TYPEDEF_FOR_xFB_

typedef struct {
  boolean_T AccelOvrd;
  real32_T PtACCToqReqResp;
} xFB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_x1E1_
#define DEFINED_TYPEDEF_FOR_x1E1_

typedef struct {
  boolean_T CCSwStsDistDecSwA;
  boolean_T CCSwStsDistIncSwA;
  boolean_T CCSwStsSpdDecSwA;
  boolean_T CCSwStsSpdIncSwA;
  boolean_T CCSwStsSetSwA;
  boolean_T CCSwStsRsmSwA;
  boolean_T CCSwStsOnSwA;
  boolean_T CCSwStsCanclSwA;
} x1E1;

#endif

#ifndef DEFINED_TYPEDEF_FOR_x1E5_
#define DEFINED_TYPEDEF_FOR_x1E5_

typedef struct {
  real32_T StrgWhlAngGrd;
  real32_T StrgWhlAng;
  boolean_T StrgWhlAngSnsrFlt;
  boolean_T StrgWhlAngSnsrMultCapb;
  boolean_T StrgWhlAngSnsrInid;
  real32_T StrgWhlAngSnsrCalSts;
  boolean_T StrgWhlAngV;
} x1E5;

#endif

#ifndef DEFINED_TYPEDEF_FOR_x185_
#define DEFINED_TYPEDEF_FOR_x185_

typedef struct {
  real32_T VSELatAcc;
  real32_T VSELongtAcc;
  boolean_T VSELongtAccV;
  boolean_T VSELatAccV;
} x185;

#endif

#ifndef DEFINED_TYPEDEF_FOR_x1E9_
#define DEFINED_TYPEDEF_FOR_x1E9_

typedef struct {
  real32_T VehDynYawRate;
  boolean_T VehDynYawRateV;
  boolean_T EnDragToqRducnA;
  boolean_T ABSA;
} x1E9;

#endif

#ifndef DEFINED_TYPEDEF_FOR_x23C_
#define DEFINED_TYPEDEF_FOR_x23C_

typedef struct {
  real32_T VehSpdAvg;
  boolean_T VehSpdAvgV;
} x23C;

#endif

#ifndef DEFINED_TYPEDEF_FOR_x24C_
#define DEFINED_TYPEDEF_FOR_x24C_

typedef struct {
  real32_T WhlGndVelLDrvn_Radar;
  real32_T WhlGndVelRDrvn_Radar;
  real32_T BrkPdlDrvrAppdPrs_Radar;
  real32_T LDrvnWhlRotlDircn;
  real32_T RDrvnWhlRotlDircn;
  boolean_T WhlGndVelLDrvnV_Radar;
  boolean_T WhlGndVelRDrvnV_Radar;
  boolean_T WhlBrkPrsSts;
  boolean_T BrkDiscTemSts;
  boolean_T BrkPdlDrvrAppdPrsV_Radar;
} x24C;

#endif

#ifndef DEFINED_TYPEDEF_FOR_x24E_
#define DEFINED_TYPEDEF_FOR_x24E_

typedef struct {
  real32_T WhlGndVelLNonDrvn_Radar;
  real32_T WhlGndVelRNonDrvn_Radar;
  boolean_T WhlGndVelLNonDrvnV_Radar;
  boolean_T WhlGndVelRNonDrvnV_Radar;
  real32_T LNonDrvnWhlRotlDircn_Radar;
  real32_T TCSOpngMd_Radar;
  real32_T TCSOpngSts_Radar;
  real32_T RNonDrvnWhlRotlDircn_Radar;
  real32_T VSEMd_Radar;
  real32_T VSESts_Radar;
} x24E;

#endif

#ifndef DEFINED_TYPEDEF_FOR_xAF_
#define DEFINED_TYPEDEF_FOR_xAF_

typedef struct {
  boolean_T EPTAccelActuPosV;
  boolean_T EPTBrkPdlDscrtInptSts;
  boolean_T EPTBrkPdlDscrtInptStsV;
  boolean_T EPTStCmdOn;
  real32_T EPTAccelActuPos;
} xAF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_xAC_
#define DEFINED_TYPEDEF_FOR_xAC_

typedef struct {
  real32_T EPTTrInptShaftMaxAvlblToq;
  real32_T EPTTrInptShaftMinAvlblToq;
  boolean_T EPTTrInptShaftMaxAvlblToqV;
  boolean_T EPTTrInptShaftMinAvlblToqV;
} xAC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_x1B6_
#define DEFINED_TYPEDEF_FOR_x1B6_

typedef struct {
  real32_T BrkPdlAppdV;
  boolean_T BrkPdlAppd;
} x1B6;

#endif

#ifndef DEFINED_TYPEDEF_FOR_x46A_
#define DEFINED_TYPEDEF_FOR_x46A_

typedef struct {
  real32_T DircnIndLampSwSts;
} x46A;

#endif

#ifndef DEFINED_TYPEDEF_FOR_x376_
#define DEFINED_TYPEDEF_FOR_x376_

typedef struct {
  real32_T LDWLKASwReq;
} x376;

#endif

#ifndef DEFINED_TYPEDEF_FOR_x1EC_
#define DEFINED_TYPEDEF_FOR_x1EC_

typedef struct {
  real32_T ChLKACtrlSts;
  boolean_T DrvrStrgDlvrdToqV;
  real32_T DrvrStrgDlvrdToq;
  real32_T ChLKARespToq;
  boolean_T ChLKARespToqV;
} x1EC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_x251_
#define DEFINED_TYPEDEF_FOR_x251_

typedef struct {
  real32_T VehTrgtLongtAcc;
  real32_T ChAEBDclReqResp;
  real32_T ChACCAEBBrkJerkReqResp;
  real32_T ChAEBPrflReqResp;
  real32_T ChACCReqFlrSts;
  real32_T ChAEBHydBrkAstReqResp;
  real32_T ChACCAccReqResp;
  real32_T VehSdslSts;
} x251;

#endif

#ifndef DEFINED_TYPEDEF_FOR_x19C_
#define DEFINED_TYPEDEF_FOR_x19C_

typedef struct {
  real32_T EPTTrInptShaftSpd;
  real32_T EPTTrInptShaftToq;
  boolean_T EPTTrInptShaftSpdV;
  boolean_T EPTTrInptShaftToqV;
} x19C;

#endif

#ifndef DEFINED_TYPEDEF_FOR_COM_VEHBUS_ST_
#define DEFINED_TYPEDEF_FOR_COM_VEHBUS_ST_

typedef struct {
  x194 x194;
  xFB xFB;
  x1E1 x1E1;
  x1E5 x1E5;
  x185 x185;
  x1E9 x1E9;
  x23C x23C;
  x24C x24C;
  x24E x24E;
  xAF xAF;
  xAC xAC;
  x1B6 x1B6;
  x46A x46A;
  x376 x376;
  x1EC x1EC;
  x251 x251;
  x19C x19C;
} COM_VEHBUS_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_COM_PROPACT_ST_
#define DEFINED_TYPEDEF_FOR_COM_PROPACT_ST_

typedef struct {
  real32_T MMotAct;
  real32_T MMotMax;
  real32_T MMotMin;
  boolean_T BrakeForce;
} COM_PROPACT_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VLC_LGTCMD_ST_
#define DEFINED_TYPEDEF_FOR_VLC_LGTCMD_ST_

typedef struct {
  real32_T EngineTorqReq;
  boolean_T EngineTorqReqSt;
  real32_T ACCState;
  boolean_T CDDEnable;
  real32_T CDDAxtar;
  boolean_T CDDDriveoffReq;
  boolean_T CDDStandstillReq;
} VLC_LGTCMD_ST;

#endif

/* Custom Type definition for MATLAB Function: '<S22>/IGain_cal' */
#ifndef struct_tag_skA4KFEZ4HPkJJBOYCrevdH
#define struct_tag_skA4KFEZ4HPkJJBOYCrevdH

struct tag_skA4KFEZ4HPkJJBOYCrevdH
{
  uint32_T SafeEq;
  uint32_T Absolute;
  uint32_T NaNBias;
  uint32_T NaNWithFinite;
  uint32_T FiniteWithNaN;
  uint32_T NaNWithNaN;
};

#endif                                 /*struct_tag_skA4KFEZ4HPkJJBOYCrevdH*/

#ifndef typedef_skA4KFEZ4HPkJJBOYCrevdH_VLC_T
#define typedef_skA4KFEZ4HPkJJBOYCrevdH_VLC_T

typedef struct tag_skA4KFEZ4HPkJJBOYCrevdH skA4KFEZ4HPkJJBOYCrevdH_VLC_T;

#endif                                 /*typedef_skA4KFEZ4HPkJJBOYCrevdH_VLC_T*/

#ifndef struct_tag_sJCxfmxS8gBOONUZjbjUd9E
#define struct_tag_sJCxfmxS8gBOONUZjbjUd9E

struct tag_sJCxfmxS8gBOONUZjbjUd9E
{
  boolean_T CaseSensitivity;
  boolean_T StructExpand;
  char_T PartialMatching[6];
  boolean_T IgnoreNulls;
};

#endif                                 /*struct_tag_sJCxfmxS8gBOONUZjbjUd9E*/

#ifndef typedef_sJCxfmxS8gBOONUZjbjUd9E_VLC_T
#define typedef_sJCxfmxS8gBOONUZjbjUd9E_VLC_T

typedef struct tag_sJCxfmxS8gBOONUZjbjUd9E sJCxfmxS8gBOONUZjbjUd9E_VLC_T;

#endif                                 /*typedef_sJCxfmxS8gBOONUZjbjUd9E_VLC_T*/

/* Parameters for system: '<S15>/If Action Subsystem' */
typedef struct P_IfActionSubsystem_VLC_T_ P_IfActionSubsystem_VLC_T;

/* Parameters (default storage) */
typedef struct P_VLC_T_ P_VLC_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_VLC_T RT_MODEL_VLC_T;

#endif                                 /* RTW_HEADER_VLC_types_h_ */
