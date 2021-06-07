/*
 * LM_TOS_1229_types.h
 *
 * Code generation for model "LM_TOS_1229".
 *
 * Model version              : 1.303
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sun Jan  3 16:54:22 2021
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LM_TOS_1229_types_h_
#define RTW_HEADER_LM_TOS_1229_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
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

#ifndef DEFINED_TYPEDEF_FOR_LANE_BAS_INFO_ST_adt_
#define DEFINED_TYPEDEF_FOR_LANE_BAS_INFO_ST_adt_

typedef struct {
  uint8_T objectNum_un8;
  boolean_T available_b;
  real32_T lane_dwidth_f;
  real32_T front_lane_length_f;
  real32_T rear_lane_length_f;
} LANE_BAS_INFO_ST_adt;

#endif

#ifndef DEFINED_TYPEDEF_FOR_LANES_BAS_INFO_ST_adt_
#define DEFINED_TYPEDEF_FOR_LANES_BAS_INFO_ST_adt_

typedef struct {
  LANE_BAS_INFO_ST_adt lane_0;
  LANE_BAS_INFO_ST_adt lane_1;
  LANE_BAS_INFO_ST_adt lane_2;
  LANE_BAS_INFO_ST_adt lane_3;
  LANE_BAS_INFO_ST_adt lane_4;
} LANES_BAS_INFO_ST_adt;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TARGETOBJECT_adp_
#define DEFINED_TYPEDEF_FOR_TARGETOBJECT_adp_

typedef struct {
  real32_T dis2EgoLaneCenter;
  real32_T TTC_f;
  uint8_T ID_un8;
  uint8_T Index_un8;
  real32_T probWithinLane_arr_f_0;
  real32_T probWithinLane_arr_f_1;
  real32_T probWithinLane_arr_f_2;
  real32_T probWithinLane_arr_f_3;
  real32_T probWithinLane_arr_f_4;
  real32_T probCutIn_f;
  real32_T probCutOut_f;
  real32_T overlap_f;
  real32_T trackingTimeWithinLane_f;
} TARGETOBJECT_adp;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TARGETOBJECTS_ST_adp_
#define DEFINED_TYPEDEF_FOR_TARGETOBJECTS_ST_adp_

typedef struct {
  TARGETOBJECT_adp LANE_0_TARGETOBJECT_0_ST;
  TARGETOBJECT_adp LANE_0_TARGETOBJECT_1_ST;
  TARGETOBJECT_adp LANE_0_TARGETOBJECT_2_ST;
  TARGETOBJECT_adp LANE_0_TARGETOBJECT_3_ST;
  TARGETOBJECT_adp LANE_0_TARGETOBJECT_4_ST;
  TARGETOBJECT_adp LANE_0_TARGETOBJECT_5_ST;
  TARGETOBJECT_adp LANE_0_TARGETOBJECT_6_ST;
  TARGETOBJECT_adp LANE_0_TARGETOBJECT_7_ST;
  TARGETOBJECT_adp LANE_0_TARGETOBJECT_8_ST;
  TARGETOBJECT_adp LANE_0_TARGETOBJECT_9_ST;
  TARGETOBJECT_adp LANE_1_TARGETOBJECT_0_ST;
  TARGETOBJECT_adp LANE_1_TARGETOBJECT_1_ST;
  TARGETOBJECT_adp LANE_1_TARGETOBJECT_2_ST;
  TARGETOBJECT_adp LANE_1_TARGETOBJECT_3_ST;
  TARGETOBJECT_adp LANE_1_TARGETOBJECT_4_ST;
  TARGETOBJECT_adp LANE_1_TARGETOBJECT_5_ST;
  TARGETOBJECT_adp LANE_1_TARGETOBJECT_6_ST;
  TARGETOBJECT_adp LANE_1_TARGETOBJECT_7_ST;
  TARGETOBJECT_adp LANE_1_TARGETOBJECT_8_ST;
  TARGETOBJECT_adp LANE_1_TARGETOBJECT_9_ST;
  TARGETOBJECT_adp LANE_2_TARGETOBJECT_0_ST;
  TARGETOBJECT_adp LANE_2_TARGETOBJECT_1_ST;
  TARGETOBJECT_adp LANE_2_TARGETOBJECT_2_ST;
  TARGETOBJECT_adp LANE_2_TARGETOBJECT_3_ST;
  TARGETOBJECT_adp LANE_2_TARGETOBJECT_4_ST;
  TARGETOBJECT_adp LANE_2_TARGETOBJECT_5_ST;
  TARGETOBJECT_adp LANE_2_TARGETOBJECT_6_ST;
  TARGETOBJECT_adp LANE_2_TARGETOBJECT_7_ST;
  TARGETOBJECT_adp LANE_2_TARGETOBJECT_8_ST;
  TARGETOBJECT_adp LANE_2_TARGETOBJECT_9_ST;
  TARGETOBJECT_adp LANE_3_TARGETOBJECT_0_ST;
  TARGETOBJECT_adp LANE_3_TARGETOBJECT_1_ST;
  TARGETOBJECT_adp LANE_3_TARGETOBJECT_2_ST;
  TARGETOBJECT_adp LANE_3_TARGETOBJECT_3_ST;
  TARGETOBJECT_adp LANE_3_TARGETOBJECT_4_ST;
  TARGETOBJECT_adp LANE_3_TARGETOBJECT_5_ST;
  TARGETOBJECT_adp LANE_3_TARGETOBJECT_6_ST;
  TARGETOBJECT_adp LANE_3_TARGETOBJECT_7_ST;
  TARGETOBJECT_adp LANE_3_TARGETOBJECT_8_ST;
  TARGETOBJECT_adp LANE_3_TARGETOBJECT_9_ST;
  TARGETOBJECT_adp LANE_4_TARGETOBJECT_0_ST;
  TARGETOBJECT_adp LANE_4_TARGETOBJECT_1_ST;
  TARGETOBJECT_adp LANE_4_TARGETOBJECT_2_ST;
  TARGETOBJECT_adp LANE_4_TARGETOBJECT_3_ST;
  TARGETOBJECT_adp LANE_4_TARGETOBJECT_4_ST;
  TARGETOBJECT_adp LANE_4_TARGETOBJECT_5_ST;
  TARGETOBJECT_adp LANE_4_TARGETOBJECT_6_ST;
  TARGETOBJECT_adp LANE_4_TARGETOBJECT_7_ST;
  TARGETOBJECT_adp LANE_4_TARGETOBJECT_8_ST;
  TARGETOBJECT_adp LANE_4_TARGETOBJECT_9_ST;
} TARGETOBJECTS_ST_adp;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SEGMENT_adp_
#define DEFINED_TYPEDEF_FOR_SEGMENT_adp_

typedef struct {
  real32_T coef_arr_f_0;
  real32_T coef_arr_f_1;
  real32_T coef_arr_f_2;
  real32_T coef_arr_f_3;
  real32_T dlowerLimit_f;
  real32_T dupperLimit_f;
  uint8_T numOfSegment_un8;
  boolean_T available_b;
  boolean_T detectedByVideo_b;
  real32_T quality_f;
} SEGMENT_adp;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SEGMENTS_ST_adp_
#define DEFINED_TYPEDEF_FOR_SEGMENTS_ST_adp_

typedef struct {
  SEGMENT_adp LANE_0_SEGMENT_0_ST_adp;
  SEGMENT_adp LANE_0_SEGMENT_1_ST_adp;
  SEGMENT_adp LANE_0_SEGMENT_2_ST_adp;
  SEGMENT_adp LANE_0_SEGMENT_3_ST_adp;
  SEGMENT_adp LANE_0_SEGMENT_4_ST_adp;
  SEGMENT_adp LANE_0_SEGMENT_5_ST_adp;
  SEGMENT_adp LANE_1_SEGMENT_0_ST_adp;
  SEGMENT_adp LANE_1_SEGMENT_1_ST_adp;
  SEGMENT_adp LANE_1_SEGMENT_2_ST_adp;
  SEGMENT_adp LANE_1_SEGMENT_3_ST_adp;
  SEGMENT_adp LANE_1_SEGMENT_4_ST_adp;
  SEGMENT_adp LANE_1_SEGMENT_5_ST_adp;
  SEGMENT_adp LANE_2_SEGMENT_0_ST_adp;
  SEGMENT_adp LANE_2_SEGMENT_1_ST_adp;
  SEGMENT_adp LANE_2_SEGMENT_2_ST_adp;
  SEGMENT_adp LANE_2_SEGMENT_3_ST_adp;
  SEGMENT_adp LANE_2_SEGMENT_4_ST_adp;
  SEGMENT_adp LANE_2_SEGMENT_5_ST_adp;
  SEGMENT_adp LANE_3_SEGMENT_0_ST_adp;
  SEGMENT_adp LANE_3_SEGMENT_1_ST_adp;
  SEGMENT_adp LANE_3_SEGMENT_2_ST_adp;
  SEGMENT_adp LANE_3_SEGMENT_3_ST_adp;
  SEGMENT_adp LANE_3_SEGMENT_4_ST_adp;
  SEGMENT_adp LANE_3_SEGMENT_5_ST_adp;
  SEGMENT_adp LANE_4_SEGMENT_0_ST_adp;
  SEGMENT_adp LANE_4_SEGMENT_1_ST_adp;
  SEGMENT_adp LANE_4_SEGMENT_2_ST_adp;
  SEGMENT_adp LANE_4_SEGMENT_3_ST_adp;
  SEGMENT_adp LANE_4_SEGMENT_4_ST_adp;
  SEGMENT_adp LANE_4_SEGMENT_5_ST_adp;
} SEGMENTS_ST_adp;

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

#ifndef DEFINED_TYPEDEF_FOR_HMI_DISPLAY_ST_
#define DEFINED_TYPEDEF_FOR_HMI_DISPLAY_ST_

typedef struct {
  uint8_T objject_ID;
  uint8_T obj_type;
  real32_T dx;
  real32_T dy;
  uint8_T obj_attr;
} HMI_DISPLAY_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HMI_OUTPUT_ST_APT_
#define DEFINED_TYPEDEF_FOR_HMI_OUTPUT_ST_APT_

typedef struct {
  HMI_DISPLAY_ST obj_0;
  HMI_DISPLAY_ST obj_1;
  HMI_DISPLAY_ST obj_2;
  HMI_DISPLAY_ST obj_3;
  HMI_DISPLAY_ST obj_4;
  HMI_DISPLAY_ST obj_5;
  HMI_DISPLAY_ST obj_6;
  HMI_DISPLAY_ST obj_7;
  HMI_DISPLAY_ST obj_8;
  HMI_DISPLAY_ST obj_9;
  HMI_DISPLAY_ST obj_10;
  HMI_DISPLAY_ST obj_11;
  HMI_DISPLAY_ST obj_12;
  HMI_DISPLAY_ST obj_13;
  HMI_DISPLAY_ST obj_14;
  HMI_DISPLAY_ST obj_15;
  HMI_DISPLAY_ST obj_16;
  HMI_DISPLAY_ST obj_17;
  HMI_DISPLAY_ST obj_18;
  HMI_DISPLAY_ST obj_19;
  HMI_DISPLAY_ST obj_20;
  HMI_DISPLAY_ST obj_21;
  HMI_DISPLAY_ST obj_22;
  HMI_DISPLAY_ST obj_23;
  HMI_DISPLAY_ST obj_24;
  HMI_DISPLAY_ST obj_25;
  HMI_DISPLAY_ST obj_26;
  HMI_DISPLAY_ST obj_27;
  HMI_DISPLAY_ST obj_28;
  HMI_DISPLAY_ST obj_29;
  HMI_DISPLAY_ST obj_30;
  HMI_DISPLAY_ST obj_31;
} HMI_OUTPUT_ST_APT;

#endif

#ifndef DEFINED_TYPEDEF_FOR_NARROW_LANE_SUPPORT_OUTPUT_ST_
#define DEFINED_TYPEDEF_FOR_NARROW_LANE_SUPPORT_OUTPUT_ST_

typedef struct {
  boolean_T leftNRAActive_b;
  boolean_T rightNRAActive_b;
  uint8_T m_countLeftNRA;
  uint8_T m_countRightNRA;
  real32_T d2LeftRE;
  real32_T d2RightRE;
  real32_T l_c0;
  real32_T l_c1;
  real32_T l_c2;
  uint16_T l_line_type;
  real32_T l_start_x0;
  real32_T l_end_x0;
  real32_T r_c0;
  real32_T r_c1;
  real32_T r_c2;
  uint16_T r_line_type;
  real32_T r_start_x0;
  real32_T r_end_x0;
} NARROW_LANE_SUPPORT_OUTPUT_ST;

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

#ifndef DEFINED_TYPEDEF_FOR_HMI_DISPLAY_ARRAY_ST_
#define DEFINED_TYPEDEF_FOR_HMI_DISPLAY_ARRAY_ST_

typedef struct {
  HMI_DISPLAY_ST hmi_display_array_st[32];
} HMI_DISPLAY_ARRAY_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_LANEMODEL_OUTPUT_ST_
#define DEFINED_TYPEDEF_FOR_LANEMODEL_OUTPUT_ST_

typedef struct {
  uint8_T egoLaneID_un8;
  LM_LANE_ST LANES_ST[5];
} LANEMODEL_OUTPUT_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HMI_OUTPUT_ST_
#define DEFINED_TYPEDEF_FOR_HMI_OUTPUT_ST_

typedef struct {
  uint8_T count_obj;
  HMI_DISPLAY_ARRAY_ST hmi_display_info_st;
} HMI_OUTPUT_ST;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_eln0t1jxxLshCuJyjHYAu_
#define DEFINED_TYPEDEF_FOR_struct_eln0t1jxxLshCuJyjHYAu_

typedef struct {
  uint8_T signal1;
  LM_LANE_ST signal2[5];
} struct_eln0t1jxxLshCuJyjHYAu;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_1oMhPRdySKj2NQxq9SQXLD_
#define DEFINED_TYPEDEF_FOR_struct_1oMhPRdySKj2NQxq9SQXLD_

typedef struct {
  uint8_T signal1;
  HMI_DISPLAY_ARRAY_ST signal2;
} struct_1oMhPRdySKj2NQxq9SQXLD;

#endif

/* Parameters (default storage) */
typedef struct P_LM_TOS_1229_T_ P_LM_TOS_1229_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_LM_TOS_1229_T RT_MODEL_LM_TOS_1229_T;

#endif                                 /* RTW_HEADER_LM_TOS_1229_types_h_ */
