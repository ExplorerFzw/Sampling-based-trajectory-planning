/*
 * ZOP_Main_types.h
 *
 * Code generation for model "ZOP_Main".
 *
 * Model version              : 1.335
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Feb  3 13:27:16 2021
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ZOP_Main_types_h_
#define RTW_HEADER_ZOP_Main_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_SystemCmd_ST_
#define DEFINED_TYPEDEF_FOR_SystemCmd_ST_

typedef struct {
  uint8_T SystemEnable;
  uint8_T SystemOn;
  uint8_T SystemCancel;
} SystemCmd_ST;

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

#ifndef DEFINED_TYPEDEF_FOR_TARGETOBJECT_
#define DEFINED_TYPEDEF_FOR_TARGETOBJECT_

typedef struct {
  real32_T dis2EgoLaneCenter;
  real32_T TTC_f;
  uint8_T ID_un8;
  uint8_T Index_un8;
  real32_T probWithinLane_arr_f[5];
  real32_T probCutIn_f;
  real32_T probCutOut_f;
  real32_T overlap_f;
  real32_T trackingTimeWithinLane_f;
} TARGETOBJECT;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SEGMENT_
#define DEFINED_TYPEDEF_FOR_SEGMENT_

typedef struct {
  real32_T coef_arr_f[4];
  real32_T dlowerLimit_f;
  real32_T dupperLimit_f;
  uint8_T numOfSegment_un8;
  boolean_T available_b;
  boolean_T detectedByVideo_b;
  real32_T quality_f;
} SEGMENT;

#endif

#ifndef DEFINED_TYPEDEF_FOR_LM_LANE_ST_
#define DEFINED_TYPEDEF_FOR_LM_LANE_ST_

typedef struct {
  TARGETOBJECT ObjectList_st[10];
  uint8_T objectNum_un8;
  boolean_T available_b;
  real32_T lane_dwidth_f;
  real32_T front_lane_length_f;
  real32_T rear_lane_length_f;
  SEGMENT SRGMENT[6];
} LM_LANE_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_LANEMODEL_OUTPUT_ST_
#define DEFINED_TYPEDEF_FOR_LANEMODEL_OUTPUT_ST_

typedef struct {
  uint8_T egoLaneID_un8;
  LM_LANE_ST LANES_ST[5];
} LANEMODEL_OUTPUT_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HWA_TARGETOBJECT_OUTPUT_ST_
#define DEFINED_TYPEDEF_FOR_HWA_TARGETOBJECT_OUTPUT_ST_

typedef struct {
  TARGETOBJECT L_NEIGHBORLANE_TAROBJ_0_ST;
  TARGETOBJECT L_NEIGHBORLANE_TAROBJ_1_ST;
  TARGETOBJECT L_NEIGHBORLANE_TAROBJ_2_ST;
  TARGETOBJECT L_NEIGHBORLANE_TAROBJ_3_ST;
  TARGETOBJECT EGOLANE_TAROBJ_0_ST;
  TARGETOBJECT EGOLANE_TAROBJ_1_ST;
  TARGETOBJECT EGOLANE_TAROBJ_2_ST;
  TARGETOBJECT EGOLANE_TAROBJ_3_ST;
  TARGETOBJECT R_NEIGHBORLANE_TAROBJ_0_ST;
  TARGETOBJECT R_NEIGHBORLANE_TAROBJ_1_ST;
  TARGETOBJECT R_NEIGHBORLANE_TAROBJ_2_ST;
  TARGETOBJECT R_NEIGHBORLANE_TAROBJ_3_ST;
} HWA_TARGETOBJECT_OUTPUT_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ACC_Status_ST_
#define DEFINED_TYPEDEF_FOR_ACC_Status_ST_

typedef struct {
  uint8_T state;
  uint8_T ready;
  uint8_T active;
  uint8_T overide;
  uint8_T cancle;
  uint8_T error;
} ACC_Status_ST;

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

#ifndef DEFINED_TYPEDEF_FOR_MapInfo_ST_
#define DEFINED_TYPEDEF_FOR_MapInfo_ST_

typedef struct {
  int8_T LaneNum;
  uint16_T MapFlag;
  real_T TgtSpd;
  int8_T isInZopZone;
  int8_T LaneIndex;
  int8_T LocIndex;
  real32_T Dist2Dest;
  real32_T Dist2Start;
  real32_T Dist2StopLine;
  real32_T Dist2Merge;
  real_T LocLat;
  real_T LocLon;
  real32_T SpeedLimit[3];
} MapInfo_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Light_Info_ST_
#define DEFINED_TYPEDEF_FOR_Light_Info_ST_

typedef struct {
  int8_T color;
  real32_T time;
  real32_T dist;
} Light_Info_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ZOP_HMI_REQ_
#define DEFINED_TYPEDEF_FOR_ZOP_HMI_REQ_

typedef struct {
  uint8_T ZOP_Enable;
  uint8_T ZOP_Destination_Target;
  uint8_T Function_Activation;
  uint8_T DMS_DriverEye_St;
  uint8_T LC_Req;
} ZOP_HMI_REQ;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ZOP2LCK_
#define DEFINED_TYPEDEF_FOR_ZOP2LCK_

typedef struct {
  uint8_T state;
  uint8_T activate_lck;
  int8_T lc_cmd;
} ZOP2LCK;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ZOP2ACC_
#define DEFINED_TYPEDEF_FOR_ZOP2ACC_

typedef struct {
  uint8_T state;
  uint8_T activate_acc;
  real32_T spd_lmt;
  real32_T light_des_spd;
  real32_T light_a_des;
  int8_T case_num;
  real32_T light_dist;
} ZOP2ACC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ZOP2TJA_
#define DEFINED_TYPEDEF_FOR_ZOP2TJA_

typedef struct {
  uint8_T activate_tja;
  uint8_T is_zop_active;
} ZOP2TJA;

#endif

#ifndef DEFINED_TYPEDEF_FOR_LKS_Status_ST_
#define DEFINED_TYPEDEF_FOR_LKS_Status_ST_

typedef struct {
  uint8_T state;
  uint8_T ready;
  uint8_T active;
  uint8_T overide;
  uint8_T cancle;
  uint8_T error;
  uint8_T lc_finish;
  uint8_T lc_fail;
  real32_T lc_dist;
} LKS_Status_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_MapInfo_ST_Post_
#define DEFINED_TYPEDEF_FOR_MapInfo_ST_Post_

typedef struct {
  int8_T LaneNum;
  uint16_T MapFlag;
  real_T TgtSpd;
  int8_T isInZopZone;
  int8_T LaneIndex;
  int8_T LocIndex;
  real32_T Dist2Dest;
  real32_T Dist2Start;
  real32_T Dist2StopLine;
  real32_T Dist2Merge;
  real_T LocLat;
  real_T LocLon;
  real32_T SpeedLimit[3];
  int8_T LaneStable;
} MapInfo_ST_Post;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ZOP2HMI_
#define DEFINED_TYPEDEF_FOR_ZOP2HMI_

typedef struct {
  int8_T LCDir;
  int8_T LCRes;
  int8_T LCTip;
  int8_T LCFailTip;
  int8_T LCReqTip;
  int8_T LCProp;
  int8_T LCPropRes;
} ZOP2HMI;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ZOP_Object_ST_
#define DEFINED_TYPEDEF_FOR_ZOP_Object_ST_

typedef struct {
  uint8_T id;
  real32_T x;
  real32_T y;
  real32_T vx;
  real32_T vy;
  real32_T ax;
  real32_T ay;
  int8_T dir;
  int8_T dir_f;
  int8_T exist[2];
} ZOP_Object_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ZOP_Var_ST_
#define DEFINED_TYPEDEF_FOR_ZOP_Var_ST_

typedef struct {
  int8_T LnLo;
  int8_T LnHi;
  int8_T LSafeNCnt;
  int8_T RSafeNCnt;
  int8_T LSafeCnt;
  int8_T RSafeCnt;
  int8_T LSafeRaw;
  int8_T RSafeRaw;
  int8_T Safe;
  uint32_T holdTimeCnt;
  uint32_T lcTimeCnt;
  uint32_T lcProTimeCnt;
  uint32_T lcDirCnt;
  int8_T LCResult;
  int8_T DesLane;
  int8_T CmdLane;
  int8_T LCDir;
  int8_T LCCmd;
  uint16_T LCRes;
  uint16_T LCTip;
  uint16_T LCNRes;
  real32_T LCTime;
  real32_T LCDist;
  int8_T FinishState;
  int8_T LCFailTip;
  real32_T Spd[3];
  real32_T SpdTmp[3];
  uint32_T SpdTimeCnt[3];
  uint16_T MapFlag;
  int8_T MapFlagDir;
} ZOP_Var_ST;

#endif

/* Custom Type definition for Chart: '<S4>/ZOP_State_Machine' */
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

#ifndef typedef_skA4KFEZ4HPkJJBOYCrevdH_ZOP_M_T
#define typedef_skA4KFEZ4HPkJJBOYCrevdH_ZOP_M_T

typedef struct tag_skA4KFEZ4HPkJJBOYCrevdH skA4KFEZ4HPkJJBOYCrevdH_ZOP_M_T;

#endif                                 /*typedef_skA4KFEZ4HPkJJBOYCrevdH_ZOP_M_T*/

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

#ifndef typedef_sJCxfmxS8gBOONUZjbjUd9E_ZOP_M_T
#define typedef_sJCxfmxS8gBOONUZjbjUd9E_ZOP_M_T

typedef struct tag_sJCxfmxS8gBOONUZjbjUd9E sJCxfmxS8gBOONUZjbjUd9E_ZOP_M_T;

#endif                                 /*typedef_sJCxfmxS8gBOONUZjbjUd9E_ZOP_M_T*/

/* Parameters (default storage) */
typedef struct P_ZOP_Main_T_ P_ZOP_Main_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_ZOP_Main_T RT_MODEL_ZOP_Main_T;

#endif                                 /* RTW_HEADER_ZOP_Main_types_h_ */
