
/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#include "rtwtypes.h"
#endif

#include "funsionAlg_sfun_bus.h"

/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
#include <math.h>
#include <string.h>
#include "fusion_runnables.h"
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 1
#define y_width 1

/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
/* extern double func(double a); */
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Start function
 *
 */
void funsionAlg_sfun_Start_wrapper(void)
{
/* %%%-SFUNWIZ_wrapper_Start_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * Custom Start code goes here.
 */
FusionAlg_Init_V();
/* %%%-SFUNWIZ_wrapper_Start_Changes_END --- EDIT HERE TO _BEGIN */
}
/*
 * Output function
 *
 */
void funsionAlg_sfun_Outputs_wrapper(const FUS_RADAR_DATA_ST *In_RadarData_st,
			const FUS_ARS308_DATA_ST *In_ARS308Data_st,
			const FUS_VEHICLE_DATA_ST *In_VehicleData_st,
			const FUS_VISION_OBJ_DATA_ST *In_VisionObjData_st,
			const FUS_EYEQ4_LANE_DATA_ST *In_VisionLaneData_st,
			const FUS_EYEQ4_ROADEDGE_DATA_ST *In_VisionRoadEdgeData_st,
			const uint16_T *In_ErrorFlag,
			FUS_OBJALG_ST *Out_FusionObjInfo_st,
			FUS_LANE_OUTPUT_ST *Out_FusionLaneInfo_st,
			FUS_ROAD_EDGE_OUTPUT_ST *Out_FusionRoadEdgeInfo_st)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
/* This sample sets the output equal to the input
      y0[0] = u0[0]; 
 For complex signals use: y0[0].re = u0[0].re; 
      y0[0].im = u0[0].im;
      y1[0].re = u1[0].re;
      y1[0].im = u1[0].im;
 */
static VehicleData vehicleData;
static CanRadarObjList radarData;
static CanRadarObjList leftFrontRadarData;
static CanRadarObjList rightFrontRadarData;
static CanRadarObjList rightRearRadarData;
static CanRadarObjList leftRearRadarData;
static VisionObjList objData;
static EyeVisionLaneMark laneData;
static VisionLaneRoadedge roadEdgeData;
static FusionOutputList fusionOutInfo;
//memset(&objData,0, sizeof(VisionObjList));
//memset(&laneData,0,sizeof(EyeVisionLaneMark));

vehicleData.speed=In_VehicleData_st->speed;
vehicleData.yawRate=In_VehicleData_st->yawRate;
vehicleData.vehicleMotionStatus = In_VehicleData_st->motionStatus;
vehicleData.acceleration = In_VehicleData_st->acceleration;

radarData.timestamp = In_RadarData_st->timestamp;
radarData.frameNum = In_RadarData_st->frameNum;
radarData.count = In_RadarData_st->count;
radarData.errType = In_RadarData_st->errType;
memcpy(radarData.radarObj, &(In_RadarData_st->radarObj), sizeof(RadarObj)*40);
memcpy(&radarData.radarState, &(In_RadarData_st->radarState),sizeof(RadarFRSState));
memcpy(radarData.reserved, &(In_RadarData_st->reserved),sizeof(uint32_t)*2);

leftFrontRadarData.timestamp = In_ARS308Data_st->leftFrontRadar.timestamp;
leftFrontRadarData.frameNum = In_ARS308Data_st->leftFrontRadar.frameNum;
leftFrontRadarData.count = In_ARS308Data_st->leftFrontRadar.count;
leftFrontRadarData.errType = In_ARS308Data_st->leftFrontRadar.errType;
memcpy(leftFrontRadarData.radarObj, &(In_ARS308Data_st->leftFrontRadar.radarObj), sizeof(RadarObj)*40);
memcpy(&leftFrontRadarData.radarState, &(In_ARS308Data_st->leftFrontRadar.radarState),sizeof(RadarFRSState));
memcpy(leftFrontRadarData.reserved, &(In_ARS308Data_st->leftFrontRadar.reserved),sizeof(uint32_t)*2);

rightFrontRadarData.timestamp = In_ARS308Data_st->rightFrontRadar.timestamp;
rightFrontRadarData.frameNum = In_ARS308Data_st->rightFrontRadar.frameNum;
rightFrontRadarData.count = In_ARS308Data_st->rightFrontRadar.count;
rightFrontRadarData.errType = In_ARS308Data_st->rightFrontRadar.errType;
memcpy(rightFrontRadarData.radarObj, &(In_ARS308Data_st->rightFrontRadar.radarObj), sizeof(RadarObj)*40);
memcpy(&rightFrontRadarData.radarState, &(In_ARS308Data_st->rightFrontRadar.radarState),sizeof(RadarFRSState));
memcpy(rightFrontRadarData.reserved, &(In_ARS308Data_st->rightFrontRadar.reserved),sizeof(uint32_t)*2);

rightRearRadarData.timestamp = In_ARS308Data_st->rightRearRadar.timestamp;
rightRearRadarData.frameNum = In_ARS308Data_st->rightRearRadar.frameNum;
rightRearRadarData.count = In_ARS308Data_st->rightRearRadar.count;
rightRearRadarData.errType = In_ARS308Data_st->rightRearRadar.errType;
memcpy(rightRearRadarData.radarObj, &(In_ARS308Data_st->rightRearRadar.radarObj), sizeof(RadarObj)*40);
memcpy(&rightRearRadarData.radarState, &(In_ARS308Data_st->rightRearRadar.radarState),sizeof(RadarFRSState));
memcpy(rightRearRadarData.reserved, &(In_ARS308Data_st->rightRearRadar.reserved),sizeof(uint32_t)*2);

leftRearRadarData.timestamp = In_ARS308Data_st->leftRearRadar.timestamp;
leftRearRadarData.frameNum = In_ARS308Data_st->leftRearRadar.frameNum;
leftRearRadarData.count = In_ARS308Data_st->leftRearRadar.count;
leftRearRadarData.errType = In_ARS308Data_st->leftRearRadar.errType;
memcpy(leftRearRadarData.radarObj, &(In_ARS308Data_st->leftRearRadar.radarObj), sizeof(RadarObj)*40);
memcpy(&leftRearRadarData.radarState, &(In_ARS308Data_st->leftRearRadar.radarState),sizeof(RadarFRSState));
memcpy(leftRearRadarData.reserved, &(In_ARS308Data_st->leftRearRadar.reserved),sizeof(uint32_t)*2);

objData.objTimestamp = In_VisionObjData_st->timestamp;
objData.objFrameNum = In_VisionObjData_st->frameNum;
objData.objCount = In_VisionObjData_st->count;
objData.dayNightState = In_VisionObjData_st->dayNightState;
memcpy(objData.reserved, &(In_VisionObjData_st->reserved), sizeof(uint8_t)*3);
memcpy(objData.reserved1,&(In_VisionObjData_st->reserved1),sizeof(uint32_t)*2);
memcpy(objData.objList,&(In_VisionObjData_st->objList),sizeof(VisionObj)*40);

laneData.timestamp = In_VisionLaneData_st->timestamp;
laneData.frameNum = In_VisionLaneData_st->frameNum;
laneData.laneChangeStatus = In_VisionLaneData_st->laneChangeStatus;
laneData.errorFlag = In_VisionLaneData_st->errorFlag;
laneData.reserved = In_VisionLaneData_st->reserved;
memcpy(&laneData.lanaHostProtHeader, &(In_VisionLaneData_st->laneHostProtHeader),sizeof(Lanehostprotheader));
memcpy(&laneData.lanehostprota,&(In_VisionLaneData_st->laneHostProtA),sizeof(LanehostProtA));
memcpy(&laneData.lanehostprotb,&(In_VisionLaneData_st->laneHostProtB),sizeof(LanehostProtB));
memcpy(&laneData.laneadjaprota,&(In_VisionLaneData_st->laneAdjaProtA),sizeof(LaneadjaProtA));
memcpy(&laneData.laneadjaprotb,&(In_VisionLaneData_st->laneAdjaProtB),sizeof(LaneadjaProtB));
memcpy(&laneData.laneadjaprotc,&(In_VisionLaneData_st->laneAdjaProtC),sizeof(LaneadjaProtC));
memcpy(&laneData.laneadjaprotd,&(In_VisionLaneData_st->laneAdjaProtD),sizeof(LaneadjaProtD));

roadEdgeData.timestamp = In_VisionRoadEdgeData_st->timestamp;
roadEdgeData.frameNum = In_VisionRoadEdgeData_st->frameNum;
roadEdgeData.errorFlag = In_VisionRoadEdgeData_st->errorFlag;
roadEdgeData.reserved = In_VisionRoadEdgeData_st->reserved;
memcpy(&roadEdgeData.laneroadedgeprotheader,&(In_VisionRoadEdgeData_st->roadEdgeProtHeader),sizeof(LaneRoadedgeProtHeader));
memcpy(&roadEdgeData.laneroadedgeprota,&(In_VisionRoadEdgeData_st->roadEdgeProtA),sizeof(LaneRoadedgeProtA));
memcpy(&roadEdgeData.laneroadedgeprotb,&(In_VisionRoadEdgeData_st->roadEdgeProtB),sizeof(LaneRoadedgeProtB));
memcpy(&roadEdgeData.laneroadedgeprotc,&(In_VisionRoadEdgeData_st->roadEdgeProtC),sizeof(LaneRoadedgeProtC));

FusionAlg_Run_V(&vehicleData, &radarData, &leftFrontRadarData, &rightFrontRadarData, &leftRearRadarData, &rightRearRadarData, &objData, &laneData, &roadEdgeData, *In_ErrorFlag, &fusionOutInfo);

Out_FusionObjInfo_st->timeStamp = (double)fusionOutInfo.objOutInfo.timeStamp;
Out_FusionObjInfo_st->frameNum  = fusionOutInfo.objOutInfo.frameNum;
Out_FusionLaneInfo_st->timestamp = (double)fusionOutInfo.objOutInfo.timeStamp;
Out_FusionLaneInfo_st->frameNum = fusionOutInfo.laneOutInfo.frameNum;
Out_FusionLaneInfo_st->hostLaneWidth = fusionOutInfo.laneOutInfo.hostLaneWidth;
Out_FusionLaneInfo_st->leftLaneWidth = fusionOutInfo.laneOutInfo.leftLaneWidth;
Out_FusionLaneInfo_st->rightLaneWidth = fusionOutInfo.laneOutInfo.rightLaneWidth;
Out_FusionLaneInfo_st->laneChangeStatus = fusionOutInfo.laneOutInfo.laneChangeStatus;
Out_FusionRoadEdgeInfo_st->timestamp = (double)fusionOutInfo.objOutInfo.timeStamp;
Out_FusionRoadEdgeInfo_st->frameNum = fusionOutInfo.roadEdgeOutInfo.frameNum;
Out_FusionRoadEdgeInfo_st->hostVehPos = fusionOutInfo.roadEdgeOutInfo.hostVehPos;
Out_FusionRoadEdgeInfo_st->errorFlag = fusionOutInfo.roadEdgeOutInfo.errorFlag;
Out_FusionRoadEdgeInfo_st->detectedEdgeCnt = fusionOutInfo.roadEdgeOutInfo.detectedEdgeCnt;
    
memcpy(&(Out_FusionObjInfo_st->objects), fusionOutInfo.objOutInfo.objects, sizeof(FusionObjData)*40);
memcpy(&(Out_FusionLaneInfo_st->leftHostLane),&fusionOutInfo.laneOutInfo.leftHostLane,sizeof(FusionLaneData));
memcpy(&(Out_FusionLaneInfo_st->rightHostLane),&fusionOutInfo.laneOutInfo.rightHostLane,sizeof(FusionLaneData));
memcpy(&(Out_FusionLaneInfo_st->leftNeighborLane),&fusionOutInfo.laneOutInfo.leftNeighborLane,sizeof(FusionLaneData));
memcpy(&(Out_FusionLaneInfo_st->rightNeighborLane),&fusionOutInfo.laneOutInfo.rightNeighborLane,sizeof(FusionLaneData));
memcpy(&(Out_FusionLaneInfo_st->primaryObjTrajectory),&fusionOutInfo.laneOutInfo.primaryObjTra,sizeof(FusionPrimaryObjTrajectoryData));
memcpy(&(Out_FusionRoadEdgeInfo_st->leftRoadEdge),&fusionOutInfo.roadEdgeOutInfo.leftRoadEdge,sizeof(FusionRoadEdgeData));
memcpy(&(Out_FusionRoadEdgeInfo_st->rightRoadEdge),&fusionOutInfo.roadEdgeOutInfo.rightRoadEdge,sizeof(FusionRoadEdgeData));
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
 * Terminate function
 *
 */
void funsionAlg_sfun_Terminate_wrapper(void)
{
/* %%%-SFUNWIZ_wrapper_Terminate_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * Custom Terminate code goes here.
 */
FusionAlg_DeInit_V();
/* %%%-SFUNWIZ_wrapper_Terminate_Changes_END --- EDIT HERE TO _BEGIN */
}

