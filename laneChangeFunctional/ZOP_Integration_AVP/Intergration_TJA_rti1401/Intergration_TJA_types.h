/*
 * Intergration_TJA_types.h
 *
 * Code generation for model "Intergration_TJA".
 *
 * Model version              : 1.241
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Dec 30 09:26:26 2020
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Intergration_TJA_types_h_
#define RTW_HEADER_Intergration_TJA_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "LatCtrl_LCK_LanSigInputs_t.h"
#include "LatCtrl_LCK_TrackSigInputs_t.h"
#include "LatCtrl_LCK_VehSigInputs_t.h"
#include "LatCtrl_LCK_SPPInfo_t.h"
#ifndef DEFINED_TYPEDEF_FOR_SYS_INFO_ST_
#define DEFINED_TYPEDEF_FOR_SYS_INFO_ST_

typedef struct {
  real32_T dT;
} SYS_INFO_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_COM_VEHDYN_ST_
#define DEFINED_TYPEDEF_FOR_COM_VEHDYN_ST_

typedef struct {
  real32_T AxSensor;
  real32_T YrsSensor;
  real32_T SasSensor;
  real32_T WhlSpd_FL;
  boolean_T WhlSpd_FL_Valid;
  real32_T WhlSpd_FR;
  boolean_T WhlSpd_FR_Valid;
  real32_T WhlSpd_RL;
  boolean_T WhlSpd_RL_Valid;
  real32_T WhlSpd_RR;
  boolean_T WhlSpd_RR_Valid;
  boolean_T AxSensor_Valid;
  boolean_T YrsSensor_Valid;
  boolean_T SasSensor_Valid;
} COM_VEHDYN_ST;

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

#ifndef DEFINED_TYPEDEF_FOR_NET_DRVACTION_ST_
#define DEFINED_TYPEDEF_FOR_NET_DRVACTION_ST_

typedef struct {
  boolean_T BrakePedalApply;
  boolean_T DrvOverride;
  boolean_T ACC_MainSw;
  boolean_T ACC_CancelSw;
  boolean_T ACC_SetSw;
  boolean_T ACC_SetSwK1;
  boolean_T ACC_ResSw;
  boolean_T ACC_SpdIncSw;
  boolean_T ACC_SpdIncSwK1;
  boolean_T ACC_SpdDecSw;
  boolean_T ACC_SpdDecSwK1;
  boolean_T ACC_DistIncSw;
  boolean_T ACC_DistDecSw;
  real32_T GearLever;
} NET_DRVACTION_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_OBJDATA_ST_
#define DEFINED_TYPEDEF_FOR_OBJDATA_ST_

typedef struct {
  boolean_T Hist;
  boolean_T Valid;
  real32_T dx;
  real32_T dvarX;
  real32_T dy;
  real32_T dvarY;
  real32_T vx;
  real32_T vy;
  real32_T ax;
  real32_T ay;
  real32_T MotionSts;
  real32_T Type;
  real32_T probExist;
  real32_T ID;
} OBJDATA_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_OBJDATA_ST_
#define DEFINED_TYPEDEF_FOR_FUS_OBJDATA_ST_

typedef struct {
  real_T timeStamp;
  OBJDATA_ST objdata_st[40];
} FUS_OBJDATA_ST;

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

#ifndef DEFINED_TYPEDEF_FOR_FUS_OBJ_TRACK_EST_ST_
#define DEFINED_TYPEDEF_FOR_FUS_OBJ_TRACK_EST_ST_

typedef struct {
  real32_T longPosition;
  real32_T latPosition;
  real32_T headingAngle;
  real32_T speed;
  real32_T yawRate;
  real32_T longRelativeVelocity;
  real32_T latRelativeVelocity;
  real32_T longAbsoluteVelocity;
  real32_T latAbsoluteVelocity;
  real32_T acceleration;
  real32_T longRelativeAcceleration;
  real32_T latRelativeAcceleration;
  real32_T longAbsoluteAcceleration;
  real32_T latAbsoluteAcceleration;
  real32_T curvature;
} FUS_OBJ_TRACK_EST_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_OBJ_TRACK_PROP_ST_
#define DEFINED_TYPEDEF_FOR_FUS_OBJ_TRACK_PROP_ST_

typedef struct {
  uint8_T id;
  uint8_T fusionSource;
  uint8_T motionModel;
  uint8_T trackStatus;
  uint8_T positionConfidence;
  uint8_T fcwConfidence;
  uint8_T tjaConfidence;
  uint8_T leftNearLaneMarkingConfidence;
  uint8_T rightNearLaneMarkingConfidence;
  uint8_T visionId;
  real32_T accelerationStdDev;
  real32_T headingAngleStdDev;
  real32_T latPositionStdDev;
  real32_T longPositionStdDev;
  real32_T speedStdDev;
} FUS_OBJ_TRACK_PROP_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_OBJ_TRACK_INFO_ST_
#define DEFINED_TYPEDEF_FOR_FUS_OBJ_TRACK_INFO_ST_

typedef struct {
  uint8_T valid;
  uint8_T type;
  uint8_T nearestSide;
  uint8_T motionPatternCurrent;
  uint8_T motionPatternHistory;
  real32_T width;
  real32_T height;
  real32_T length;
  real32_T distanceToleftNearLaneMarking;
  real32_T distanceToRightNearLaneMarking;
} FUS_OBJ_TRACK_INFO_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_OBJ_DATA_ST_
#define DEFINED_TYPEDEF_FOR_FUS_OBJ_DATA_ST_

typedef struct {
  FUS_OBJ_TRACK_EST_ST obj_estimate;
  FUS_OBJ_TRACK_PROP_ST obj_property;
  FUS_OBJ_TRACK_INFO_ST obj_information;
} FUS_OBJ_DATA_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_OBJ_OUTPUT_ST_
#define DEFINED_TYPEDEF_FOR_FUS_OBJ_OUTPUT_ST_

typedef struct {
  real_T timeStamp;
  FUS_OBJ_DATA_ST objects[40];
  uint32_T frameNum;
} FUS_OBJ_OUTPUT_ST;

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

#ifndef DEFINED_TYPEDEF_FOR_Obj_Data_
#define DEFINED_TYPEDEF_FOR_Obj_Data_

typedef struct {
  real32_T Msg_CheckSum1;
  real32_T Msg_AliveCounter1;
  real32_T Obj_ExstProb;
  real32_T Obj_XVelRel_Stdev;
  real32_T Obj_XAccRel;
  real32_T Obj_ObstacleProb;
  real32_T Obj_MotionPattern;
  real32_T Obj_YPos_Stdev;
  real32_T Obj_ValidFlag;
  real32_T Obj_XPos_Stdev;
  real32_T Obj_UpdateFlag;
  real32_T Obj_ID;
  real32_T Msg_CheckSum2;
  real32_T Msg_AliveCounter2;
  real32_T Obj_MeasFlag;
  real32_T Obj_YVelRel;
  real32_T Obj_Type;
  real32_T Obj_XPos;
  real32_T Obj_YPos;
  real32_T Obj_XVelRel;
} Obj_Data;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Radar_Status_
#define DEFINED_TYPEDEF_FOR_Radar_Status_

typedef struct {
  real32_T Msg_CheckSum;
  real32_T Msg_AliveCounter;
  real32_T Status_MisAlign;
  real32_T Status_HWErr;
  real32_T Status_BlkProg;
  real32_T Fail;
  real32_T MeasEnabled;
  real32_T Host_Yaw;
  real32_T HostSpeed;
  real32_T TimeStamp;
  real32_T Latency;
} Radar_Status;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Radar410_Info_ST_
#define DEFINED_TYPEDEF_FOR_Radar410_Info_ST_

typedef struct {
  Obj_Data x50_20_Obj_00;
  Obj_Data x51_21_Obj_01;
  Obj_Data x52_22_Obj_02;
  Obj_Data x53_23_Obj_03;
  Obj_Data x54_24_Obj_04;
  Obj_Data x55_25_Obj_05;
  Obj_Data x56_26_Obj_06;
  Obj_Data x57_27_Obj_07;
  Obj_Data x58_28_Obj_08;
  Obj_Data x59_29_Obj_09;
  Obj_Data x5A_2A_Obj_10;
  Obj_Data x5B_2B_Obj_11;
  Obj_Data x5C_2C_Obj_12;
  Obj_Data x5D_2D_Obj_13;
  Obj_Data x5E_2E_Obj_14;
  Obj_Data x5F_2F_Obj_15;
  Obj_Data x60_30_Obj_16;
  Obj_Data x61_31_Obj_17;
  Obj_Data x62_32_Obj_18;
  Obj_Data x63_33_Obj_19;
  Obj_Data x64_34_Obj_20;
  Obj_Data x65_35_Obj_21;
  Obj_Data x66_36_Obj_22;
  Obj_Data x67_37_Obj_23;
  Obj_Data x68_38_Obj_24;
  Obj_Data x69_39_Obj_25;
  Obj_Data x6A_3A_Obj_26;
  Obj_Data x6B_3B_Obj_27;
  Obj_Data x6C_3C_Obj_28;
  Obj_Data x6D_3D_Obj_29;
  Obj_Data x6E_3E_Obj_30;
  Obj_Data x6F_3F_Obj_31;
  Obj_Data x70_40_Obj_32;
  Obj_Data x71_41_Obj_33;
  Obj_Data x72_42_Obj_34;
  Obj_Data x73_43_Obj_35;
  Obj_Data x74_44_Obj_36;
  Obj_Data x75_45_Obj_37;
  Obj_Data x76_46_Obj_38;
  Obj_Data x77_47_Obj_39;
  Radar_Status x80_Status;
} Radar410_Info_ST;

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

#ifndef DEFINED_TYPEDEF_FOR_ATS_PO_ST_
#define DEFINED_TYPEDEF_FOR_ATS_PO_ST_

typedef struct {
  boolean_T Valid;
  real32_T Index;
  real32_T dx;
  real32_T dy;
  real32_T vx;
  real32_T vy;
  real32_T ax;
  real32_T vxAbs;
  real32_T axAbs;
  real32_T Type;
  real32_T MotionSts;
} ATS_PO_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AST_INFO_ST_
#define DEFINED_TYPEDEF_FOR_AST_INFO_ST_

typedef struct {
  real32_T MainState;
  real32_T vSet;
  real32_T tMinInDrv;
} AST_INFO_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ATS_OBJINFO_ST_
#define DEFINED_TYPEDEF_FOR_ATS_OBJINFO_ST_

typedef struct {
  real32_T dx;
  real32_T dy;
  real32_T vx;
  real32_T vy;
  real32_T dyToTraj;
  real32_T dyCutInPred;
  real32_T probCutInRaw;
  real32_T probCutInFilt;
  real32_T probEgoLane;
  real32_T plausEgoLane;
  boolean_T ValidEgoLane;
  real32_T ID;
} ATS_OBJINFO_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ATS_INTERNAL_OBJINFO_ST_
#define DEFINED_TYPEDEF_FOR_ATS_INTERNAL_OBJINFO_ST_

typedef struct {
  real_T tmeStamp;
  ATS_OBJINFO_ST ats_obj_st[40];
} ATS_INTERNAL_OBJINFO_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Bus_308_
#define DEFINED_TYPEDEF_FOR_Bus_308_

typedef struct {
  real32_T RCS;
  real32_T DynProp;
  real32_T VrelLat;
  real32_T VrelLong;
  real32_T DistLat;
  real32_T DistLong;
  real32_T ID;
} Bus_308;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Header_308_
#define DEFINED_TYPEDEF_FOR_Header_308_

typedef struct {
  real32_T ObjNum;
  real32_T tStamp;
  real32_T Version;
} Header_308;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ARS308_RX_
#define DEFINED_TYPEDEF_FOR_ARS308_RX_

typedef struct {
  Bus_308 leftFrontRadar_General[40];
  Header_308 LeftFrontRadar_Status;
  Bus_308 rightFrontRadar_General[40];
  Header_308 rightFrontRadar_Status;
  Bus_308 rightRearRadar_General[40];
  Header_308 rightRearRadar_Status;
  Bus_308 leftRearRadar_General[40];
  Header_308 leftRearRadar_Status;
} ARS308_RX;

#endif

#ifndef DEFINED_TYPEDEF_FOR_BusArray_308_
#define DEFINED_TYPEDEF_FOR_BusArray_308_

typedef struct {
  Bus_308 objects[40];
} BusArray_308;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Host_Prot_Header_
#define DEFINED_TYPEDEF_FOR_Host_Prot_Header_

typedef struct {
  real32_T LH_Sync_ID;
  real32_T LH_Lanes_Count;
  real32_T LH_Estimated_Width;
  real32_T LH_Sonw_On_Road_Prob;
} Host_Prot_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Host_Prot_
#define DEFINED_TYPEDEF_FOR_Host_Prot_

typedef struct {
  real32_T LH_Line_First_C0;
  real32_T LH_Line_First_C1;
  real32_T LH_Line_First_C2;
  real32_T LH_Line_First_C3;
  real32_T LH_side;
  real32_T LH_Existence_Probability;
  real32_T LH_First_VR_End;
  real32_T LH_First_VR_Start;
  real32_T LH_Lanemark_Type;
  real32_T LH_Lanemark_Type_Conf;
  real32_T LH_Marker_Width;
  real32_T LH_Marker_Width_STD;
  real32_T LH_Track_ID;
  real32_T LH_Color;
  real32_T LH_DLM_Type;
} Host_Prot;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Adja_Prot_
#define DEFINED_TYPEDEF_FOR_Adja_Prot_

typedef struct {
  real32_T LA_Line_C0;
  real32_T LA_Line_C1;
  real32_T LA_Line_C2;
  real32_T LA_Line_C3;
  real32_T LA_Exist_Probability;
  real32_T LA_Lane_Track_ID;
  real32_T LA_Lanemark_Type;
  real32_T LA_Lanemark_Type_Conf;
  real32_T LA_Line_Role;
  real32_T LA_Marker_Width;
  real32_T LA_Marker_Width_STD;
  real32_T LA_View_Range_End;
  real32_T LA_View_Range_Start;
  real32_T LA_Age;
  real32_T LA_Color;
  real32_T LA_Color_Conf;
  real32_T LA_DLM_Type;
} Adja_Prot;

#endif

#ifndef DEFINED_TYPEDEF_FOR_LANE_ST_
#define DEFINED_TYPEDEF_FOR_LANE_ST_

typedef struct {
  Host_Prot_Header Host_Prot_Header;
  Host_Prot Host_Prot[2];
  Adja_Prot Adja_Prot[4];
} LANE_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ROAD_EDGE_ST_
#define DEFINED_TYPEDEF_FOR_ROAD_EDGE_ST_

typedef struct {
  real32_T LRE_Age;
  real32_T LRE_ExistProb;
  real32_T LRE_Type;
  real32_T LRE_ID;
  real32_T LRE_LineC0;
  real32_T LRE_LineC1;
  real32_T LRE_LineC2;
  real32_T LRE_LineC3;
  real32_T LRE_Start;
  real32_T LRE_End;
  real32_T LRE_Side;
  real32_T LRE_Height;
  real32_T LRE_Height_STD;
  real32_T LRE_Index;
} ROAD_EDGE_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ROADEDGE_DATA_ST_
#define DEFINED_TYPEDEF_FOR_ROADEDGE_DATA_ST_

typedef struct {
  ROAD_EDGE_ST RoadEdgeProtHeader;
  ROAD_EDGE_ST RoadEdgeProtA;
  ROAD_EDGE_ST RoadEdgeProtB;
  ROAD_EDGE_ST RoadEdgeProtC;
} ROADEDGE_DATA_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_OBJECT_FRAME_INFO_
#define DEFINED_TYPEDEF_FOR_OBJECT_FRAME_INFO_

typedef struct {
  real32_T FrameID;
  real32_T DaytimeIndicator;
  real32_T SyncID;
} OBJECT_FRAME_INFO;

#endif

#ifndef DEFINED_TYPEDEF_FOR_OBJECT_ST_
#define DEFINED_TYPEDEF_FOR_OBJECT_ST_

typedef struct {
  real32_T OBJ_ID;
  real32_T OBJ_Existence_Probability;
  real32_T OBJ_Right_Out_Of_Image;
  real32_T OBJ_Left_Out_Of_Image;
  real32_T OBJ_Top_Out_Of_Image;
  real32_T OBJ_Bottom_Out_Of_Image;
  real32_T OBJ_Age_Seconds;
  real32_T OBJ_Width;
  real32_T OBJ_Length;
  real32_T OBJ_Height;
  real32_T OBJ_Abs_Long_Velocity;
  real32_T OBJ_Abs_Long_Velocity_STD;
  real32_T OBJ_Abs_Lat_Velocity;
  real32_T OBJ_Abs_Lat_Velocity_STD;
  real32_T OBJ_Abs_Long_Acc;
  real32_T OBJ_Abs_Long_Acc_STD;
  real32_T OBJ_Abs_Lat_Acc;
  real32_T OBJ_Abs_Lat_Acc_STD;
  real32_T OBJ_Inv_TTC;
  real32_T OBJ_Inv_TTC_STD;
  real32_T OBJ_Object_Age;
  real32_T OBJ_Measuring_Status;
  real32_T OBJ_Object_Class;
  real32_T OBJ_Class_Probability;
  real32_T OBJ_Long_Distance;
  real32_T OBJ_Long_Distance_STD;
  real32_T OBJ_Lat_Distance;
  real32_T OBJ_Lat_Distance_STD;
  real32_T OBJ_Absolute_Speed;
  real32_T OBJ_Heading;
  real32_T OBJ_Angle_Mid_V;
  real32_T OBJ_Angle_Mid;
  real32_T OBJ_Angle_Mid_STD;
  real32_T OBJ_Angle_Mid_STD_V;
} OBJECT_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EYEQ4_DATA_RT_ST_
#define DEFINED_TYPEDEF_FOR_EYEQ4_DATA_RT_ST_

typedef struct {
  LANE_ST LANE_DATA_ST;
  ROADEDGE_DATA_ST ROADEDGE_ST;
  OBJECT_FRAME_INFO OBJ_FRAME_INFO;
  OBJECT_ST OBJ_BUS[40];
} EYEQ4_DATA_RT_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_LANE_START_POINT_
#define DEFINED_TYPEDEF_FOR_FUS_LANE_START_POINT_

typedef struct {
  real32_T x0;
  real32_T y0;
} FUS_LANE_START_POINT;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_LANE_TRACK_EST_ST_
#define DEFINED_TYPEDEF_FOR_FUS_LANE_TRACK_EST_ST_

typedef struct {
  real32_T latDistanceZeroOrderCoeff;
  real32_T latDistanceFirstOrderCoeff;
  real32_T latDistanceSecondOrderCoeff;
  real32_T latDistanceThirdOrderCoeff;
  real32_T longDistanceToend;
  FUS_LANE_START_POINT startPoint;
} FUS_LANE_TRACK_EST_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_LANE_DATA_ST_
#define DEFINED_TYPEDEF_FOR_FUS_LANE_DATA_ST_

typedef struct {
  uint8_T id;
  uint8_T traceStatus;
  uint8_T quality;
  uint8_T color;
  uint32_T type;
  real32_T width;
  FUS_LANE_TRACK_EST_ST curFunction;
} FUS_LANE_DATA_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_LANE_PRIMARY_TRA_
#define DEFINED_TYPEDEF_FOR_FUS_LANE_PRIMARY_TRA_

typedef struct {
  uint8_T id;
  uint8_T traceStatus;
  uint8_T quality;
  FUS_LANE_TRACK_EST_ST curveFunc;
} FUS_LANE_PRIMARY_TRA;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_LANE_OUTPUT_ST_
#define DEFINED_TYPEDEF_FOR_FUS_LANE_OUTPUT_ST_

typedef struct {
  real_T timestamp;
  uint32_T frameNum;
  real32_T hostLaneWidth;
  real32_T leftLaneWidth;
  real32_T rightLaneWidth;
  FUS_LANE_DATA_ST leftHostLane;
  FUS_LANE_DATA_ST rightHostLane;
  FUS_LANE_DATA_ST leftNeighborLane;
  FUS_LANE_DATA_ST rightNeighborLane;
  FUS_LANE_PRIMARY_TRA primaryObjTrajectory;
  uint32_T laneChangeStatus;
} FUS_LANE_OUTPUT_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_ROAD_EDGE_DATA_ST_
#define DEFINED_TYPEDEF_FOR_FUS_ROAD_EDGE_DATA_ST_

typedef struct {
  uint8_T quality;
  uint8_T reserved;
  uint16_T type;
  uint32_T id;
  uint32_T trackStatus;
  FUS_LANE_TRACK_EST_ST roadEdgeCurve;
} FUS_ROAD_EDGE_DATA_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_ROAD_EDGE_OUTPUT_ST_
#define DEFINED_TYPEDEF_FOR_FUS_ROAD_EDGE_OUTPUT_ST_

typedef struct {
  real_T timestamp;
  uint32_T frameNum;
  uint32_T hostVehPos;
  FUS_ROAD_EDGE_DATA_ST leftRoadEdge;
  FUS_ROAD_EDGE_DATA_ST rightRoadEdge;
  uint8_T errorFlag;
  uint8_T detectedEdgeCnt;
} FUS_ROAD_EDGE_OUTPUT_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_EYEQ4_LANE_PROT_HEADER_ST_
#define DEFINED_TYPEDEF_FOR_FUS_EYEQ4_LANE_PROT_HEADER_ST_

typedef struct {
  uint32_T lhsyncid;
  uint32_T lhlanecount;
  real32_T lhestimatedwidth;
  real32_T lhsnowonroadprob;
} FUS_EYEQ4_LANE_PROT_HEADER_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_EYEQ4_LANE_PROT_ST_
#define DEFINED_TYPEDEF_FOR_FUS_EYEQ4_LANE_PROT_ST_

typedef struct {
  real32_T lhlinefirstC0;
  real32_T lhlinefirstC1;
  real32_T lhlinefirstC2;
  real32_T lhlinefirstC3;
  uint32_T lhside;
  real32_T lhfirstvrStart;
  real32_T lhfirstvrEnd;
  uint32_T lhtrackid;
  uint32_T lhcolor;
  real32_T lhmarkerwidth;
  real32_T lhmarkerwidthSTD;
  real32_T lhexistenceprobability;
  uint32_T lhlanemarktype;
  uint32_T lhlanemarktypeconf;
  uint32_T lhdlmtype;
} FUS_EYEQ4_LANE_PROT_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_EYEQ4_LANE_ADJA_ST_
#define DEFINED_TYPEDEF_FOR_FUS_EYEQ4_LANE_ADJA_ST_

typedef struct {
  real32_T lhlinefirstC0;
  real32_T lhlinefirstC1;
  real32_T lhlinefirstC2;
  real32_T lhlinefirstC3;
  uint32_T linerole;
  uint32_T lanetrackid;
  uint32_T age;
  uint32_T color;
  uint32_T colorconf;
  real32_T lanemarkerwidth;
  real32_T lanemarkerwidthSTD;
  real32_T lavrstart;
  real32_T lavrend;
  real32_T laexistprobalility;
  uint32_T lalanemarktype;
  uint32_T lalanemarktypeconf;
  uint32_T ladlmtype;
} FUS_EYEQ4_LANE_ADJA_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_EYEQ4_ROADEDGE_PROT_ST_
#define DEFINED_TYPEDEF_FOR_FUS_EYEQ4_ROADEDGE_PROT_ST_

typedef struct {
  uint32_T lreage;
  real32_T lreexistprob;
  uint32_T lretype;
  uint32_T lreid;
  real32_T lrelineC0;
  real32_T lrelineC1;
  real32_T lrelineC2;
  real32_T lrelineC3;
  real32_T lrevrStart;
  real32_T lrevrEnd;
  uint32_T lreside;
  real32_T lreheight;
  real32_T lreheightstd;
  uint32_T lreindex;
} FUS_EYEQ4_ROADEDGE_PROT_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_OUTOBJ_LIST_ST_
#define DEFINED_TYPEDEF_FOR_FUS_OUTOBJ_LIST_ST_

typedef struct {
  FUS_OBJ_DATA_ST fus_output_01_obj;
  FUS_OBJ_DATA_ST fus_output_02_obj;
  FUS_OBJ_DATA_ST fus_output_03_obj;
  FUS_OBJ_DATA_ST fus_output_04_obj;
  FUS_OBJ_DATA_ST fus_output_05_obj;
  FUS_OBJ_DATA_ST fus_output_06_obj;
  FUS_OBJ_DATA_ST fus_output_07_obj;
  FUS_OBJ_DATA_ST fus_output_08_obj;
  FUS_OBJ_DATA_ST fus_output_09_obj;
  FUS_OBJ_DATA_ST fus_output_10_obj;
  FUS_OBJ_DATA_ST fus_output_11_obj;
  FUS_OBJ_DATA_ST fus_output_12_obj;
  FUS_OBJ_DATA_ST fus_output_13_obj;
  FUS_OBJ_DATA_ST fus_output_14_obj;
  FUS_OBJ_DATA_ST fus_output_15_obj;
  FUS_OBJ_DATA_ST fus_output_16_obj;
  FUS_OBJ_DATA_ST fus_output_17_obj;
  FUS_OBJ_DATA_ST fus_output_18_obj;
  FUS_OBJ_DATA_ST fus_output_19_obj;
  FUS_OBJ_DATA_ST fus_output_20_obj;
  FUS_OBJ_DATA_ST fus_output_21_obj;
  FUS_OBJ_DATA_ST fus_output_22_obj;
  FUS_OBJ_DATA_ST fus_output_23_obj;
  FUS_OBJ_DATA_ST fus_output_24_obj;
  FUS_OBJ_DATA_ST fus_output_25_obj;
  FUS_OBJ_DATA_ST fus_output_26_obj;
  FUS_OBJ_DATA_ST fus_output_27_obj;
  FUS_OBJ_DATA_ST fus_output_28_obj;
  FUS_OBJ_DATA_ST fus_output_29_obj;
  FUS_OBJ_DATA_ST fus_output_30_obj;
  FUS_OBJ_DATA_ST fus_output_31_obj;
  FUS_OBJ_DATA_ST fus_output_32_obj;
  FUS_OBJ_DATA_ST fus_output_33_obj;
  FUS_OBJ_DATA_ST fus_output_34_obj;
  FUS_OBJ_DATA_ST fus_output_35_obj;
  FUS_OBJ_DATA_ST fus_output_36_obj;
  FUS_OBJ_DATA_ST fus_output_37_obj;
  FUS_OBJ_DATA_ST fus_output_38_obj;
  FUS_OBJ_DATA_ST fus_output_39_obj;
  FUS_OBJ_DATA_ST fus_output_40_obj;
} FUS_OUTOBJ_LIST_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_UINT8_RESERVED_ST_
#define DEFINED_TYPEDEF_FOR_FUS_UINT8_RESERVED_ST_

typedef struct {
  uint8_T reserved1;
  uint8_T reserved0;
} FUS_UINT8_RESERVED_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_RADAR_OBJ_ST_
#define DEFINED_TYPEDEF_FOR_FUS_RADAR_OBJ_ST_

typedef struct {
  real32_T objObstacleProb;
  real32_T objXPos_Stdev;
  real32_T objYPos_Stdev;
  real32_T objXVelRel_Stdev;
  real32_T objXAccRel;
  real32_T objExstProb;
  real32_T objYVelRel;
  real32_T objXVelRel;
  real32_T objXPos;
  real32_T objYPos;
  uint8_T objID;
  uint8_T objUpdateFlag;
  uint8_T objValidFlag;
  uint8_T objMotionPattern;
  uint8_T objType;
  uint8_T objMeasFlag;
  FUS_UINT8_RESERVED_ST reserved;
} FUS_RADAR_OBJ_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_RADOBJ_LIST_ST_
#define DEFINED_TYPEDEF_FOR_FUS_RADOBJ_LIST_ST_

typedef struct {
  FUS_RADAR_OBJ_ST radar_01_obj;
  FUS_RADAR_OBJ_ST radar_02_obj;
  FUS_RADAR_OBJ_ST radar_03_obj;
  FUS_RADAR_OBJ_ST radar_04_obj;
  FUS_RADAR_OBJ_ST radar_05_obj;
  FUS_RADAR_OBJ_ST radar_06_obj;
  FUS_RADAR_OBJ_ST radar_07_obj;
  FUS_RADAR_OBJ_ST radar_08_obj;
  FUS_RADAR_OBJ_ST radar_09_obj;
  FUS_RADAR_OBJ_ST radar_10_obj;
  FUS_RADAR_OBJ_ST radar_11_obj;
  FUS_RADAR_OBJ_ST radar_12_obj;
  FUS_RADAR_OBJ_ST radar_13_obj;
  FUS_RADAR_OBJ_ST radar_14_obj;
  FUS_RADAR_OBJ_ST radar_15_obj;
  FUS_RADAR_OBJ_ST radar_16_obj;
  FUS_RADAR_OBJ_ST radar_17_obj;
  FUS_RADAR_OBJ_ST radar_18_obj;
  FUS_RADAR_OBJ_ST radar_19_obj;
  FUS_RADAR_OBJ_ST radar_20_obj;
  FUS_RADAR_OBJ_ST radar_21_obj;
  FUS_RADAR_OBJ_ST radar_22_obj;
  FUS_RADAR_OBJ_ST radar_23_obj;
  FUS_RADAR_OBJ_ST radar_24_obj;
  FUS_RADAR_OBJ_ST radar_25_obj;
  FUS_RADAR_OBJ_ST radar_26_obj;
  FUS_RADAR_OBJ_ST radar_27_obj;
  FUS_RADAR_OBJ_ST radar_28_obj;
  FUS_RADAR_OBJ_ST radar_29_obj;
  FUS_RADAR_OBJ_ST radar_30_obj;
  FUS_RADAR_OBJ_ST radar_31_obj;
  FUS_RADAR_OBJ_ST radar_32_obj;
  FUS_RADAR_OBJ_ST radar_33_obj;
  FUS_RADAR_OBJ_ST radar_34_obj;
  FUS_RADAR_OBJ_ST radar_35_obj;
  FUS_RADAR_OBJ_ST radar_36_obj;
  FUS_RADAR_OBJ_ST radar_37_obj;
  FUS_RADAR_OBJ_ST radar_38_obj;
  FUS_RADAR_OBJ_ST radar_39_obj;
  FUS_RADAR_OBJ_ST radar_40_obj;
} FUS_RADOBJ_LIST_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_RADAR_STATE_ST_
#define DEFINED_TYPEDEF_FOR_FUS_RADAR_STATE_ST_

typedef struct {
  real32_T hostYaw;
  real32_T hostSpeed;
  uint16_T timeStamp;
  uint8_T statusHWErr;
  uint8_T statusBlkProg;
  uint8_T statusMisAlign;
  uint8_T sGUFail;
  uint8_T measEnabled;
  uint8_T msgAliveCounter;
  uint8_T latency;
  uint8_T msgCheckSum;
  FUS_UINT8_RESERVED_ST reservedField;
} FUS_RADAR_STATE_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_UINT32_RESERVED_ST_
#define DEFINED_TYPEDEF_FOR_FUS_UINT32_RESERVED_ST_

typedef struct {
  uint32_T reserved0;
  uint32_T reserved1;
} FUS_UINT32_RESERVED_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_VISOBJ_UINT8_RESERVED_ST_
#define DEFINED_TYPEDEF_FOR_FUS_VISOBJ_UINT8_RESERVED_ST_

typedef struct {
  uint8_T reserved0;
  uint8_T reserved1;
  uint8_T reserved2;
} FUS_VISOBJ_UINT8_RESERVED_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_VISION_OBJ_STAGE_AGE_ST_
#define DEFINED_TYPEDEF_FOR_FUS_VISION_OBJ_STAGE_AGE_ST_

typedef struct {
  uint16_T totalAge;
  uint16_T initAge;
  uint16_T measureAge;
  uint16_T predictAge;
} FUS_VISION_OBJ_STAGE_AGE_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_VISION_OBJ_BOUNDARY_
#define DEFINED_TYPEDEF_FOR_FUS_VISION_OBJ_BOUNDARY_

typedef struct {
  int16_T X1;
  int16_T Y1;
  int16_T X2;
  int16_T Y2;
} FUS_VISION_OBJ_BOUNDARY;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_VISION_OBJ_COORD_ST_
#define DEFINED_TYPEDEF_FOR_FUS_VISION_OBJ_COORD_ST_

typedef struct {
  real32_T lateral;
  real32_T lateralVariance;
  real32_T longitudinal;
  real32_T longitudinalVariance;
} FUS_VISION_OBJ_COORD_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_VISION_OBJ_VELOCITY_
#define DEFINED_TYPEDEF_FOR_FUS_VISION_OBJ_VELOCITY_

typedef struct {
  real32_T Vx;
  real32_T VxVariance;
  real32_T Vy;
  real32_T VyVariance;
} FUS_VISION_OBJ_VELOCITY;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_VISION_OBJ_ANGLE_ST_
#define DEFINED_TYPEDEF_FOR_FUS_VISION_OBJ_ANGLE_ST_

typedef struct {
  real32_T centerAngle;
  real32_T centerAngleVariance;
} FUS_VISION_OBJ_ANGLE_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_VISION_OBJ_ACCE_ST_
#define DEFINED_TYPEDEF_FOR_FUS_VISION_OBJ_ACCE_ST_

typedef struct {
  real32_T Ax;
  real32_T AxVariance;
  real32_T Ay;
  real32_T AyVariance;
} FUS_VISION_OBJ_ACCE_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_VISION_BOXSIZE_ST_
#define DEFINED_TYPEDEF_FOR_FUS_VISION_BOXSIZE_ST_

typedef struct {
  real32_T length;
  real32_T width;
  real32_T height;
} FUS_VISION_BOXSIZE_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_VISOBJ_UINT32_RESERVED_ST_
#define DEFINED_TYPEDEF_FOR_FUS_VISOBJ_UINT32_RESERVED_ST_

typedef struct {
  uint32_T reserved0;
  uint32_T reserved1;
} FUS_VISOBJ_UINT32_RESERVED_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_VISION_OBJ_ST_
#define DEFINED_TYPEDEF_FOR_FUS_VISION_OBJ_ST_

typedef struct {
  uint32_T obj_ID;
  uint32_T obj_status;
  FUS_VISION_OBJ_STAGE_AGE_ST obj_stageAge;
  FUS_VISION_OBJ_BOUNDARY obj_boundary;
  uint32_T obj_type;
  uint32_T obj_typeConf;
  FUS_VISION_OBJ_COORD_ST obj_coordinate;
  FUS_VISION_OBJ_VELOCITY obj_velocity;
  FUS_VISION_OBJ_ANGLE_ST obj_angleOfCenter;
  real32_T obj_TTC;
  real32_T obj_TTCVariance;
  FUS_VISION_OBJ_ACCE_ST obj_acceleration;
  real32_T obj_existProb;
  FUS_VISION_BOXSIZE_ST AyVariance;
  uint8_T obj_angleOfObject;
  FUS_VISOBJ_UINT8_RESERVED_ST reserved1;
  real32_T obj_Heading;
  real32_T obj_Heading_STD;
  real32_T obj_Heading_V;
  real32_T obj_Heading_STD_V;
  FUS_VISOBJ_UINT32_RESERVED_ST reserved2;
} FUS_VISION_OBJ_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_VISION_OBJ_LIST_ST_
#define DEFINED_TYPEDEF_FOR_FUS_VISION_OBJ_LIST_ST_

typedef struct {
  FUS_VISION_OBJ_ST vision_01_obj;
  FUS_VISION_OBJ_ST vision_02_obj;
  FUS_VISION_OBJ_ST vision_03_obj;
  FUS_VISION_OBJ_ST vision_04_obj;
  FUS_VISION_OBJ_ST vision_05_obj;
  FUS_VISION_OBJ_ST vision_06_obj;
  FUS_VISION_OBJ_ST vision_07_obj;
  FUS_VISION_OBJ_ST vision_08_obj;
  FUS_VISION_OBJ_ST vision_09_obj;
  FUS_VISION_OBJ_ST vision_10_obj;
  FUS_VISION_OBJ_ST vision_11_obj;
  FUS_VISION_OBJ_ST vision_12_obj;
  FUS_VISION_OBJ_ST vision_13_obj;
  FUS_VISION_OBJ_ST vision_14_obj;
  FUS_VISION_OBJ_ST vision_15_obj;
  FUS_VISION_OBJ_ST vision_16_obj;
  FUS_VISION_OBJ_ST vision_17_obj;
  FUS_VISION_OBJ_ST vision_18_obj;
  FUS_VISION_OBJ_ST vision_19_obj;
  FUS_VISION_OBJ_ST vision_20_obj;
  FUS_VISION_OBJ_ST vision_21_obj;
  FUS_VISION_OBJ_ST vision_22_obj;
  FUS_VISION_OBJ_ST vision_23_obj;
  FUS_VISION_OBJ_ST vision_24_obj;
  FUS_VISION_OBJ_ST vision_25_obj;
  FUS_VISION_OBJ_ST vision_26_obj;
  FUS_VISION_OBJ_ST vision_27_obj;
  FUS_VISION_OBJ_ST vision_28_obj;
  FUS_VISION_OBJ_ST vision_29_obj;
  FUS_VISION_OBJ_ST vision_30_obj;
  FUS_VISION_OBJ_ST vision_31_obj;
  FUS_VISION_OBJ_ST vision_32_obj;
  FUS_VISION_OBJ_ST vision_33_obj;
  FUS_VISION_OBJ_ST vision_34_obj;
  FUS_VISION_OBJ_ST vision_35_obj;
  FUS_VISION_OBJ_ST vision_36_obj;
  FUS_VISION_OBJ_ST vision_37_obj;
  FUS_VISION_OBJ_ST vision_38_obj;
  FUS_VISION_OBJ_ST vision_39_obj;
  FUS_VISION_OBJ_ST vision_40_obj;
} FUS_VISION_OBJ_LIST_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_EYEQ4_LANE_DATA_ST_
#define DEFINED_TYPEDEF_FOR_FUS_EYEQ4_LANE_DATA_ST_

typedef struct {
  real_T timestamp;
  uint32_T frameNum;
  uint32_T laneChangeStatus;
  FUS_EYEQ4_LANE_PROT_HEADER_ST laneHostProtHeader;
  FUS_EYEQ4_LANE_PROT_ST laneHostProtA;
  FUS_EYEQ4_LANE_PROT_ST laneHostProtB;
  FUS_EYEQ4_LANE_ADJA_ST laneAdjaProtA;
  FUS_EYEQ4_LANE_ADJA_ST laneAdjaProtB;
  FUS_EYEQ4_LANE_ADJA_ST laneAdjaProtC;
  FUS_EYEQ4_LANE_ADJA_ST laneAdjaProtD;
  uint32_T errorFlag;
  uint32_T reserved;
} FUS_EYEQ4_LANE_DATA_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_VISION_OBJ_DATA_ST_
#define DEFINED_TYPEDEF_FOR_FUS_VISION_OBJ_DATA_ST_

typedef struct {
  real_T timestamp;
  uint32_T frameNum;
  uint8_T count;
  FUS_VISOBJ_UINT8_RESERVED_ST reserved;
  FUS_VISION_OBJ_LIST_ST objList;
  uint32_T dayNightState;
  FUS_VISOBJ_UINT32_RESERVED_ST reserved1;
} FUS_VISION_OBJ_DATA_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FUS_EYEQ4_ROADEDGE_DATA_ST_
#define DEFINED_TYPEDEF_FOR_FUS_EYEQ4_ROADEDGE_DATA_ST_

typedef struct {
  real_T timestamp;
  uint32_T frameNum;
  FUS_EYEQ4_ROADEDGE_PROT_ST roadEdgeProtHeader;
  FUS_EYEQ4_ROADEDGE_PROT_ST roadEdgeProtA;
  FUS_EYEQ4_ROADEDGE_PROT_ST roadEdgeProtB;
  FUS_EYEQ4_ROADEDGE_PROT_ST roadEdgeProtC;
  uint32_T errorFlag;
  uint32_T reserved;
} FUS_EYEQ4_ROADEDGE_DATA_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HMI_Lateral_t_
#define DEFINED_TYPEDEF_FOR_HMI_Lateral_t_

typedef struct {
  real32_T LKS_Error;
  real32_T LKS_Passive_Rea;
  real32_T LKS_Status;
  real32_T LC_pro_reason;
  real32_T LC_Proposal;
  real32_T LC_Reason;
  real32_T LC_Request;
  real32_T LC_Tip;
  real32_T LC_Fail_Tip;
  real32_T LC_Dis_dy;
  real32_T LC_Dis_dx;
  real32_T LC_Direction;
  real32_T Handsoff_Warning;
} HMI_Lateral_t;

#endif

#ifndef DEFINED_TYPEDEF_FOR_x242_
#define DEFINED_TYPEDEF_FOR_x242_

typedef struct {
  real32_T ACCAccReqValTolMinHSC2;
  boolean_T ACCSdslReq_RadarHSC2;
  real32_T ACCSysFltSts_SCSHSC2;
  boolean_T ACCGoReqHSC2;
  real32_T ACCAccReqValTolMaxHSC2;
  real32_T ACCAccReqValHSC2;
  boolean_T ACCAccReqStsHSC2;
  real32_T ACCSysSts_RadarHSC2;
  real32_T ChACCShtdwnMdHSC2;
  boolean_T ACCReqBrkPrfrdHSC2;
  boolean_T ACCMinBrkReqStsHSC2;
} x242;

#endif

#ifndef DEFINED_TYPEDEF_FOR_x165_
#define DEFINED_TYPEDEF_FOR_x165_

typedef struct {
  boolean_T ACCToqReqStsHSC2;
  real32_T ACCToqReqValHSC2;
} x165;

#endif

#ifndef DEFINED_TYPEDEF_FOR_x246_
#define DEFINED_TYPEDEF_FOR_x246_

typedef struct {
  real32_T RdrCalPrgsReqHSC2;
  real32_T FCWSysFltSts_RadarHSC2;
  real32_T FCWSnstvtLvl_RadarHSC2;
  real32_T FCWrnngSts_RadarHSC2;
  real32_T FCWDspCmd_RadarHSC2;
  real32_T AEBPedtrnDspCmdHSC2;
  real32_T AEBMsgReqHSC2;
  real32_T AEBDspCmd_RadarHSC2;
  real32_T ACCSysFltSts_RadarHSC2;
  real32_T ACCSysCanclReq_RadarHSC2;
  boolean_T ACCObjDet_RadarHSC2;
  real32_T ACCMsgReqHSC2;
  boolean_T ACCGoNotfr_RadarHSC2;
  boolean_T ACCDrvrTkovReqHSC2;
  real32_T ACCDrvrSelTrgtSpd_RadarHSC2;
  real32_T ACCDrvrSeldTrgtDistLvl_RadarHSC2;
  real32_T ACCDetObjDistLvl_RadarHSC2;
} x246;

#endif

#ifndef DEFINED_TYPEDEF_FOR_x255_
#define DEFINED_TYPEDEF_FOR_x255_

typedef struct {
  real32_T Vehicle_Front_dy;
  real32_T Vehicle_Front_dx;
  real32_T Vehicle_Front_Type;
  real32_T ACC_Tip;
  real32_T ACC_Status;
  real32_T ACC_Passive_Rea;
  real32_T ACC_Error;
  real32_T TimeGapRes;
  real32_T vSetDis;
} x255;

#endif

/* Parameters for system: '<S331>/If Action Subsystem' */
typedef struct P_IfActionSubsystem_Intergrat_T_ P_IfActionSubsystem_Intergrat_T;

/* Parameters (default storage) */
typedef struct P_Intergration_TJA_T_ P_Intergration_TJA_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Intergration_TJA_T RT_MODEL_Intergration_TJA_T;

#endif                                 /* RTW_HEADER_Intergration_TJA_types_h_ */
