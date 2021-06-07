/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : fusion_define.h
* Description   :
* Version       : v1.0
* Create Time   : 2020/10/22
* Author   		: meepo
* Modify history:
*******************************************************************************
* Modify Time   Modify person  Modification
* ------------------------------------------------------------------------------
*
*******************************************************************************/

#ifndef __H_FUSION_DEFINE__
#define __H_FUSION_DEFINE__

/************************** Include *******************************************/

#include <map>
#include <list>
#include <deque>
#include "basic_type.h"

#include "p_vision_object.h"
#include "p_radar_object.h"
#include "p_fusion_output.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/************************** Macro *********************************************/

//radar calibration param
#define FLRADAR_ANGEL						(1.1345F)       //rad  65  
#define FLRADAR_XDISPLACE					(3.36F)         //m
#define FLRADAR_YDISPLACE					(0.82F)         //m
#define FRRADAR_ANGEL						(-1.1345F)      //rad  -65
#define FRRADAR_XDISPLACE					(3.86F)         //m
#define FRRADAR_YDISPLACE					(-0.82F)        //m
#define RLRADAR_ANGEL						(2.3213F)       //rad  133
#define RLRADAR_XDISPLACE					(-0.74F)        //m
#define RLRADAR_YDISPLACE					(0.735F)        //m
#define RRRADAR_ANGEL						(-2.3387F)      //rad  -134
#define RRRADAR_XDISPLACE					(-0.74F)        //m
#define RRRADAR_YDISPLACE					(-0.735F)       //m

// radar sensor mounting locatin in VCS
#define RADAR_MOUNT_LONG_POSN				(3.5F)		// [m]
#define RADAR_MOUNT_LAT_POSN				(0.0F)		// [m]
#define RADAR_MOUNT_HEIGHT					(1.0F)		// [m] 

// vision sensor mounting locatin in VCS
#define VISION_MOUNT_LONG_POSN				(2.58F)		// [m]
#define VISION_MOUNT_LAT_POSN				(-0.16F)	// [m]
#define VISION_MOUNT_HEIGHT					(1.5F)		// [m]

// radar can transmission and extraction latency
#define RADAR_CANTRANS_AND_EXTRACT_LATENCY  (150U)		// unit [us], factor [1us]
// vision frame collection latency
#define VISION_FRAME_LANTENCY               (22700U)	// unit [us], factor [1us]
#define UTILS_FUSION_INTERNAL_MAX_OBJ_NUM	(64 * 4U)	// max internal fusion track number

#define UTILS_RADAR_MAX_OBJID_NUM			(256U)		// max radar object id
#define CORNER_RADAR_MAX_OUT_NUM			(15U)				

#define FUSION_US_TO_S						(1000000.0F)

/*ego motion status*/
#define EGOMOTION_UNKNOWN                   (0U)
#define EGOMOTION_STAND1                    (1U)
#define EGOMOTION_STAND2                    (2U)
#define EGOMOTION_STAND3                    (3U)
#define EGOMOTION_FWD1                      (4U)
#define EGOMOTION_FWD2                      (5U)
#define EGOMOTION_BACK1                     (6U)
#define EGOMOTION_BACK2                     (7U)

#define RADARSTATUS_CROSS                   (4U)
#define RADARSTATUS_MOVING                  (3U)
#define RADARSTATUS_STOPPED                 (2U)
#define RADARSTATUS_STATIONARY              (1U)
#define RADARSTATUS_UNKNOWN                 (0U)

#define RADARTYPE_UNKNOWN                   (0U)
#define RADARTYPE_4WHEElER                  (1U)
#define RADARTYPE_2WHEElER                  (2U)
#define RADARTYPE_PEDESTRIAN                (3U)

#define FUSION_BLIND_ZONE_AREA				(4.0F)

#define FUSION_US_TO_S						(1000000.0F)

/*fusion object status*/
#define FUSION_OBJECT_VAILID				(1U)
#define FUSION_OBJECT_INVALID				(0U)

/*vision object status*/
#define VISION_OBJSTATUS_INITIALIZED		(0U)
#define VISION_OBJSTATUS_MEASURED			(1U)
#define VISION_OBJSTATUS_PREDICTED			(2U)

/*vision object type*/
#define VISION_TYPE_UNKNOWN					(0U)
#define VISION_TYPE_PEDESTRAIN				(1U)
#define VISION_TYPE_CAR						(2U)
#define VISION_TYPE_TRUCK					(3U)

#define VISION_NIGHT						(0U)
#define VISION_TWILIGHT						(1U)
#define VISION_DAY							(2U)
#define VISION_UNKNOWN						(255U)

/*fusion source kind*/
#define FUSION_SOURCE_VISION_ONLY			(0U)
#define FUSION_SOURCE_RADAR_ONLY			(1U)
#define FUSION_SOURCE_RADAR_VISION			(2U)

/*fusion motion pattern*/
#define FUSION_MOTION_UNKNOWN				(0U)
#define FUSION_MOTION_STATIONARY			(1U)
#define FUSION_MOTION_DRIVING				(2U)
#define FUSION_MOTION_ONCOMING				(3U)
#define FUSION_MOTION_DRIVINGSTOP			(4U)
#define FUSION_MOTION_ONCOMINGSTOP			(5U)
#define FUSION_MOTION_RECEDING				(2U)

/*fusion object type*/
#define FUSION_TYPE_UNKNOWN					(0U)
#define FUSION_TYPE_CAR						(1U)
#define FUSION_TYPE_MOTOCYCLE				(2U)
#define FUSION_TYPE_TRUCK					(3U)
#define FUSION_TYPE_PEDESTRAIN				(4U)
#define FUSION_TYPE_BICYCLE					(9U)
#define FUSION_TYPE_UNKCAR					(10U)

//track status, 0:Invalid, 1 : Merged, 2 : New, 3 : New_Coasted, 5 : Updated, 6 : Coasted.
#define TRACK_STATUS_INVALID				(0U)
//#define TRACK_STATUS_MERGED					(1U)
#define TRACK_STATUS_NEW					(2U)
#define TRACK_STATUS_NEW_COASTED			(3U)
#define TRACK_STATUS_UPDATED				(5U)
#define TRACK_STATUS_COASTED				(6U)

#define REAR_CENTER							(0U)
#define REAR_RIGHT							(1U)
#define RIGHT_CENTER						(2U)
#define FRONT_RIGHT							(3U)
#define FRONT_CENTER						(4U)
#define FRONT_LEFT							(5U)
#define LEFT_CENTER							(6U)
#define REAR_LEFT							(7U)

#define FUSIONTYPE_MINIVISCNT               (15U)
#define PEDESTRIAN_LONG 					(1.0F)
#define PEDESTRIAN_WIDTH 					(1.0F)
#define VEHICLE_LONG 						(5.0F)
#define VEHICLE_WIDTH 						(2.0F)

#define VISION_NIGHT						(0U)
#define VISION_TWILIGHT						(1U)
#define VISION_DAY							(2U)
#define VISION_UNKNOWN						(255U)

#define	FRONT_RADAR							(0U)
#define FRONT_LEFT_RADAR					(1U)
#define REAR_LEFT_RADAR						(2U)
#define REAR_RIGHT_RADAR					(3U)
#define FRONT_RIGHT_RADAR					(4U)
#define SUM_RADAR							(5U)

#define PRIMARY_OBJ_NUM						(50)
#define MATRIX_DIM							(4)

const float32 RELIABLE_EXISTPROB = 75.0F;

typedef std::map<uint16, uint16> radarIdMap;		// <object id, >
typedef std::list<uint16> availClusterIDList;	// <available cluster id>
/************************** Struct And Enum ***********************************/
//X1:left top,X2:right bottom
typedef struct sObjBoundary
{
	float32 Xcenter;
	float32 Ycenter;
}ObjBoundary;

typedef struct sFUSION_AlgParameter_t
{
	float32 FUSIONGLOB_OBSROBTHRES;
	float32 FUSIONGLOB_VISCONFITHRES;
	float32 CONFIDENCE_BZCOAST;
	float32 CONFIDENCE_BZAREA;
	float32 CONFIDENCE_YRTHRES;
	float32 CONFIDENCE_DLTXSMALLTHRES;
	float32 CONFIDENCE_DLTXMEDTHRES;
	float32 CONFIDENCE_DLTXBIGTHRES;
	float32 CONFIDENCE_DLTYSMALLTHRES;
	float32 CONFIDENCE_DLTYMEDTHRES;
	float32 CONFIDENCE_DLTYBIGTHRES;
	float32 CONFIDENCE_DLTSPEEDSMALLTHRES;
	float32 CONFIDENCE_DLTSPEEDMEDTHRES;
	float32 CONFIDENCE_DLTSPEEDBIGTHRES;
	float32 CONFIDENCE_DLTHEADINGSMALLTHRES;
	float32 CONFIDENCE_DLTHEADINGMEDTHRES;
	float32 CONFIDENCE_DLTHEADINGBIGTHRES;
	float32 CONFIDENCE_DLTACCSMALLTHRES;
	float32 CONFIDENCE_DLTACCMEDTHRES;
	float32 CONFIDENCE_DLTACCBIGTHRES;
	float32 CONFIDENCE_VISONLYPEDFCW;
	float32 ASSOCIATION_NIGHTCOEFF;
	float32 ASSOCIATION_SCORETHRES;
	float32 ASSOCIATION_VISSYSXERR;
	float32 ASSOCIATION_KPRESCORE;
	float32 ASSOCIATION_KOBSPROB;
	float32 ASSOCIATION_KCLASSIFICATION;
	float32 ASSOCIATION_XLOGTHRESPED;
	float32 ASSOCIATION_KSXPED;
	float32 ASSOCIATION_KSYPED;
	float32 ASSOCIATION_KSSPEEDPED;
	float32 ASSOCIATION_KSTTCPED;
	float32 ASSOCIATION_KSANGLEPED;
	float32 ASSOCIATION_KLXPED;
	float32 ASSOCIATION_KLYPED;
	float32 ASSOCIATION_KLSPEEDPED;
	float32 ASSOCIATION_KLTTCPED;
	float32 ASSOCIATION_XSLOGTHRESCAR;
	float32 ASSOCIATION_XMLOGTHRESCAR;
	float32 ASSOCIATION_XBLOGTHRESCAR;
	float32 ASSOCIATION_KSXCAR;
	float32 ASSOCIATION_KSYCAR;
	float32 ASSOCIATION_KSSPEEDCAR;
	float32 ASSOCIATION_KSTTCCAR;
	float32 ASSOCIATION_KSANGLECAR;
	float32 ASSOCIATION_KMXCAR;
	float32 ASSOCIATION_KMYCAR;
	float32 ASSOCIATION_KMSPEEDCAR;
	float32 ASSOCIATION_KMTTCCAR;
	float32 ASSOCIATION_KMANGLECAR;
	float32 ASSOCIATION_KBXCAR;
	float32 ASSOCIATION_KBYCAR;
	float32 ASSOCIATION_KBSPEEDCAR;
	float32 ASSOCIATION_KBTTCCAR;
	float32 ASSOCIATION_KBANGLECAR;
	float32 ASSOCIATION_KLXCAR;
	float32 ASSOCIATION_KLYCAR;
	float32 ASSOCIATION_KLSPEEDCAR;
	float32 ASSOCIATION_KLTTCCAR;
	float32 ASSOCIATION_KLANGLECAR;
	float32 UPDATE_VALSPEEDHEAD;
	float32 UPDATE_FASTMOVSPEED;
	float32 UPDATE_TYPEBYVISCNTCAR;
	float32 UPDATE_TYPEBYVISCNTPED;
	float32 UPDATE_DXLIMIT;
	float32 UPDATE_DYLIMIT;
	float32 UPDATE_DVXLIMIT;
	float32 UPDATE_DVYLIMIT;
	float32 UPDATE_FK11;
	float32 UPDATE_FK13;
	float32 UPDATE_FK22;
	float32 UPDATE_FK23;
	float32 UPDATE_FK31;
	float32 UPDATE_FK33;
	float32 UPDATE_FK42;
	float32 UPDATE_FK43;
	float32 UPDATE_FK51;
	float32 UPDATE_FK53;
	float32 UPDATE_FK62;
	float32 UPDATE_FK63;
	float32 UPDATE_RK11;
	float32 UPDATE_RK13;
	float32 UPDATE_RK22;
	float32 UPDATE_RK23;
	float32 UPDATE_RK31;
	float32 UPDATE_RK33;
	float32 UPDATE_RK42;
	float32 UPDATE_RK43;
	float32 UPDATE_RK51;
	float32 UPDATE_RK53;
	float32 UPDATE_RK62;
	float32 UPDATE_RK63;

	float32 reserved[64];
}FUSION_AlgParameter;

typedef struct sFUSION_InitParameter_t
{
	FUSION_AlgParameter   algParameters;
	uint32                res[128];
}FUSION_InitParameter;

typedef struct sPrimaryObjTja_t
{
	ObjBoundary objPos[PRIMARY_OBJ_NUM];
	ObjBoundary vehPos;
	ObjBoundary staPos;
	FusionPrimaryObjTrajectoryData primaryObjTra;
	uint8_t		posCount;
	uint8_t		index;
	uint8_t		valid;
	uint8_t		id;
	uint8_t		age;
	uint8_t		fusionID;
	uint32_t	visionID;
	uint32_t	clusterID;
}PrimaryObjTja;
// cluster state info
typedef struct sRadarCluster_t
{
	uint32		ID;
	bool        isAssociate;
	uint8		isInvision;
	uint32		visionID;
	uint8		isInFusion;
	uint32		fusionID;
	uint8		numOfRadar;
	radarIdMap	radarID;
	uint8		radarIndex;

	float32		f_x;
	float32		f_y;
	float32		f_vx;
	float32		f_vy;
	float32		objXVelRel;
	float32		objYVelRel;
	uint8		objType;
	float32		objObstacleProb;
	float32     objExsitProb;
} RadarCluster;

// fusion internal state info for each fusion object
typedef struct sFusionObjInternalState_t
{
	// Object dynamics state
	float32 longPosn;			// The longitudinal distance to the middle of nearest facing side of the object.Measured in the reference coordinate system
	float32 latPosn;			// The lateral distance to the middle of nearest facing side of the object.Measured in the reference coordinate system
	float32 headingAngle;		// The heading angle for a vechile.It is defined as the angle between the heading of the detected vehicle and the heading of the host vehicle.
	float32 speed;				// The vehicle speed relative to the ground and in direction of the vehicle traveling
	float32 longAbsoluteVel;	// The longitudinal velocity of the object in the reference coordinate system.
	float32 latAbsoluteVel;		// The lateral velocity of the object in the reference coordinate system.
	float32 longRelativeVel;	
	float32 latRelativeVel;

	float32 acceleration;				// The vehicle acceleration relative to the ground and in direction of the vehicle traveling
	float32 longAbsoluteAcceleration;	// The longitudinal acceleration of the object in the reference coordinate system.
	float32 latAbsoluteAcceleration;	// The lateral acceleration of the object in the reference coordinate system.
	float32 longRelativeAcceleration;
	float32 latRelativeAcceleration;
	float32 curvature;			// the curvature of the object trajectory
	float32 width;				// object bbox width
	float32 length;				// object bbox length
				
	// Object predicted dynamics state
	float32 predLongPosn;		// Predicted longitudinal position
	float32 predLatPosn;		// Predicted lateral position
	float32 predVx;				// Predicted longitudinal velocity
	float32 predVy;				// Predicted lateral velocity
	float32 predSpeed;			// Predicted speed
	float32 predHeadingAngle;	// Predicted heading angle
	float32 predAcceleration;	// Predicted acceleration
							  
	uint8 motionCunt;
	bool IsFastMoveable;
	bool IsFastMoveable_ped;
	bool visionOnlyIsInBlindZone;

	bool f_is_moving;			// If the target is currently moving
	bool f_is_moveable;			// If the target is movable in its history
	bool f_is_oncoming;			// If the target is oncoming
	bool f_is_receding;			// if the target is receding

	float32 time_since_racam_fusion; // increased if fusion source is 2.
									 // set to 0 if fusion source is not 2.
	float32 time_since_vision_only;
	float32 time_since_mea_update;	// The lapsed time since the latest measurement update.
	float32 time_since_radar_vision;// The time since this is a radar-vision track (i.e., contain both radar and vision track.).
									// <0 means this track has never been a radar-vision track;
									// >0 means how long ago we lose vision or radar parts in this track.
									// 0 means this is currently a radar-vision track.
	float32 time_since_heading_valid;
	float32 time_since_heading_unknown;
	float32 time_since_fast_moveable;
	float32 time_since_fast_moveable_ped;
	float32 time_since_type_unknown;
	uint8 visionConfirmCnt;
	uint8 nearestSide; // which object side that is nearest (facing) the host vehicle,0:rear,1:front,2:right side,3:Left Side,4:unknown
	uint8 motionPatternCurrent; // 0:unknown,1:stationary,2:receding,3:oncoming
	uint8 motionPatternHistory; // 0:unknown,1:stopped,2:recedable,3:oncomeable

	float32 distanceToleftNearLaneMarking; // The lateral distance between the object and the closest lane marking to the left
	float32 distanceToRightNearLaneMarking; // The lateral distance between the object and the closest lane marking to the right
								
	// Object covariances
	float32 accelerationStdDev; // Standard deviation for object acceleration
	float32 headingAngleStdDev; // Standard deviation for the heading angle of the object
	float32 latPositionStdDev;	// Standard deviation for the lateral position of the object
	float32 longPositionStdDev; // standard deviation for longitudinal position of the object
	float32 speedStdDev;		// Standard deviation for object speed

	//Object confidence
	uint8 cmbbPrimaryConfidence;	// The primary object confidence for the function CMbB.0:Not Reliable,1:Coasted reliable,2:Brake support reliable,3.Braking reliable
	uint8 cmbbSecondaryConfidence;	// The secondary object confidence for the function CMbB.0:Not Reliable,1:reliable
	uint8 positionConfidence;		// The confidence of the position estimation
	float32 positionConfidenceScore;// Score for deciding the position confidence
	uint8 fcwConfidence;			// The object confidence for function FCW.0:Not Reliable,1:Warning reliable
	uint8 tjaConfidence;			// The object confidence for function TJA.0:Not Reliable,1:Reliable 1,2:Reliable 2

	// Object status
	uint8 fusionSource;						// fusionSource(Used in RoadGeometryFusion).0:Vision only,1:Radar only,2:Fused radar vision
	uint8 visionOnlyFusionBefore;			// last fusionSource
	uint8 oID;								// If this object is in the output to FUNCTION, this is the id for output.
	uint8 leftNearLaneMarkingConfidence;	// Left nearest lane marking confidence.Not Reliable
	uint8 motionModel;						// The motion model used for the object.0:Constant acceleration motion model,1:Coordinated turn motion model
	uint8 rightNearLaneMarkingConfidence;	// Right nearest lane marking confidence.0:Not reliable,1:Reliable
	uint8 trackStatus;						// The internal track status,0:Invalid,1:Merged,2:New,3:New_Coasted, 5:Updated, 6:Coasted.
	uint8 opTrackStatus;					// The output track status, used the solve the problem of fast reuse the output id.
	uint8 isVisInside;						// Flag saying if this fusion object contains a vision track
	uint8 isClusterInside;
	uint8 object_class;						// Object type classification.4:Pedestrian;1:Vehicle;other:0
	uint32 visID;							// associated vision  ID
	uint32 clusterID;						// associated cluster ID
	uint32 id;								// The obj id.
	float32 age;							// Target life span up to corrent time.
	// add wahtever field needed here for each fusion object state
	float32 x_referencepoint;				//The longitudinal distance to the reference point;
	float32 y_referencepoint;				//The lateral distance to the reference point;
	float32 vx_referecncepoint;				//The vx of reference point
	float32 vy_referecncepoint;				//The vy of reference point
	//float32 referencePointObjRelVx;
	//float32 referencePointObjRelVy;
	uint32 preID;
	uint8 referencePointID;      //one body have 8 possible reference points;0:back centre;1:back right;2:right centre;3right forward;4:forward centre
								 //5:left forward;6:left centre;7:left back
	ObjBoundary obj_boundary;//bbox
	float32 priority_score; // Fusion object priority score. The lower the score, the higher the priority. The highest N objects will be output to the FUNCTION.
	uint32 alive_counter;

}FusionObjInternalState;

// Information needed for each track from radar sensor
typedef struct sRadarTrackDetail_t {
	uint8  radarIndex;		// radar index 0 front radar;1 front left 2 front right 3 rear right 4 rear left
	uint16 objID;			// radar input object id
	uint8 objValidFlag;		//0:invalid;1:valid
	uint8 isDoubleBounceTrack;	// Is this track from radar double bounce
	// uint8 isNotOnRoadTrack;	// Is this track coming from overhead/ground surface object
	//uint8 isLowQuailityTrack; // Is this track a low quality track;
	//float32 deltaT;			// the time difference between radar and vision
	uint8	isInCluster;		// is this radar track associated to a Cluster
	uint32	ClusterID;			// the fusion object ID this radar track is associated to
	float32 objXAccAbs;			// absolute longitudinal acceleration of the object; modify radar object's relative longitudinal acceleration to absolute longitudinal acceleration.
	float32 objXAccRel;			// relative longitudinal acceleration of the object;
	float32 objYVelAbs;			// absolute lateral velocity of the object; modify radar object's relative lateral velocity to absolute lateral velocity.
	float32 objXVelAbs;			// absolute longitudinal velocity of the object. modify radar object's relative longitudinal velocity to absolute longitudinal velocity.
	float32 objXVelRel;			// relative longitudinal velocity of the object, used to calculate TTC.
	float32 objYVelRel;			// relative lateral velocity of the object.
	float32 objXPos;			// position of target object in longitudinal direction. modify the origin of coordinate from sensor position to rear axis center.
	float32 objYPos;			// position of target object in latera direction. modify the origin of coordinate from sensor position to rear axis center.
	float32 objTTC;				// Object time-to-collision estimation.
	float32 objObstacleProb;	//estimated probability of the object being an obstacle; min:0  Max:99.9998   Unit:%
	float32 objExstProb;		// existence probability of this radar track
	float32 objXPos_Stdev;		//estimated 3-sigma standard deviation value of longitudinal position of the object. min:0  Max:12.7   Unit:m
	float32 objYPos_Stdev;		//estimated 3-sigma standard deviation value of lateral position of the object. min:0  Max:12.7   Unit:m
	float32 objXVelRel_Stdev;	//estimated 3-sigma standard deviation value of the relative longitudinal velocity of the object. min:0  Max:6.35   Unit:m/s
	uint8   objUpdateFlag;		//flag to indicate newly created object in CAN bus.
	uint8   objMotionPattern;	//Motion type of object
	uint8   objType;			//To indicate the estimated type of Object. 0~3
	uint8   objMeasFlag;        //This signal indicates whether the latest sensor measurement observed the object or extrapolated.
}RadarTrackDetail;

// Information needed for each track from vision sensor
typedef struct sVisTrackDetail_t {

	uint8				obj_ValidFlag;
	uint8				isInFusionObj;			// is this vision track associated to a fusion object
	uint32				associatedFusObjID;		// the fusion object ID that this vision track is associated to
	uint8				isClusterInside;		// is this vision track associated to a cluster
	uint32				associatedClusterID;	// the cluster ID that this vision track is associated to
	uint32				obj_ID;					// vision input Object ID
	VisionObjcoord		obj_coordinate;			// Object position vector
	float32				longPosition_summarize; //The longitudinal distance to the summarize point;
	float32				latPosition_summarize;	//The lateral distance to the summarize point;
	VisionObjStatus		obj_status;				// Object status
	VisionObjStageAge	obj_stageAge;			// Object total age and stage age, lifetime in frames
	VisionObjBoundary	obj_boundary;			// Object Bounding box pixel location on the image plane							
	VisionObjType		obj_type;				// Object classification
	uint32				obj_typeConfi;			// existence confidence value.									 
	VisionObjVelocity	obj_velocity;			// Object velocity vector, absolute velocity and their variances
	VisionObjAcce		obj_acceleration;		// Object acceleration
	VisionObjAngle		obj_angleOfCenter;		// Angle of object rear/front center and their variances									
	float32				obj_TTC;				// Object time-to-collision estimation (TTC)
	float32				obj_TTCVariance;		// variance measurement
	float32				probOfAssociation[UTILS_RADAR_MAX_OBJID_NUM]; // association probability to each radar candidate blob
}VisTrackDetail;

typedef struct EgoParam_t {
	float32    EgoSpeedVal;
	float32    EgoYawRateVal;
	float32	   EgoAccVal;
}EgoParam;

typedef std::map<uint32, VisTrackDetail> VisTrackDetailMap; // <objID, vision detail>
typedef std::map<uint16, RadarTrackDetail> RadarTrackDetailMap; // <objID, radar detail>
typedef std::map<uint32, FusionObjInternalState> FusionObjInternalStateMap; // <objID, fusion detail>
typedef std::map<uint32, RadarCluster> RadarClusterMap;						// <objID, cluster detail>

// fusion system info
typedef struct sFusionSystemInternalInfo_t
{
	float32			timeStamp;				//Common timestamp for all object and barrier signals; unit [1us]
	float32			timeStampPrevious;		//timestamp for previous look; unit [1us]
	float32			visionTiemstamp;		// new timestamp for vision after time compensation; unit [1us]
	float32			radarTimestamp;			// new timestamp for radar after time compensation; unit [1us]
	float32			trackTimeStamp;			// new timestamp for internal track list after time compensation; unit [1us]
	uint32			lookIndex;				//The current Racam look index
	uint8			numOfActiveObj;			// number of fusion objects in current look
	uint8			numOfUnassignedOutputID;// Number of unassigned output ID
	uint8			radarErrorFlag;
	uint8			unassignedOutputID[FUSION_OBJ_OUT_MAX];
	uint32			minAvaliableFusID;		// id that is available for new track
	uint32			dayNightState;			// 0:night 1:twilight 2:day 255:unkown 							 
	EgoParam		egoSpeedAndYawrate;
	PrimaryObjTja	primaryObjTra;
	CornerRadarObj  cornerRadarObj[CORNER_RADAR_MAX_OUT_NUM];
	//std::deque<std::pair<uint64, float32> > hostYawTimeQue;	/* by Wugsz, vehicle data smooth logic must be moved to data sync logic */
	availClusterIDList			availClusterID;
	FusionObjInternalStateMap	fusObjIntState;
	RadarTrackDetailMap			radarIntDetail;
	VisTrackDetailMap			visIntDetail;
	RadarClusterMap				clusterDetail;
}FusionSystemInternalInfo;

/*
description of a curve as function f(x)= a + bx + cx^2 +dx^3
this structure defines the coefficient of the curve function
*/
typedef struct sBarrierCurveFunction_t
{
	float32 latDistanceZeroOrderCoeff;	// coefficient a
	float32 latDistanceFirstOrderCoeff; // coefficient b
	float32 latDistanceSecondOrderCoeff;// coefficient c
	float32 latDistanceThirdOrderCoeff; // coefficient d
	float32 longDistanceToend;			// end of the curve
}BarrierCurveFunction;

// define the barrier estimation
typedef struct sFusionBarrier_t {
	BarrierCurveFunction curveCoeff;	// the coefficient of the 3rd order polynomial
	uint8 confidence;					// confidence of the current barrier estimation: 0 not-valid, 1 low, 2 median, 3 high
	float32 maxLongPosn;				// the max long distance that this estimation is valid
}FusionBarrier;


// fusion barrier info, which include right and left barrier
typedef struct sFusionBarrierInfo_t
{
	FusionBarrier leftBarrier;
	FusionBarrier rightBarrier;
}FusionBarrierInfo;


typedef struct sFusionLnaeInfo_t
{
		uint16  LQ;
		float32 LC0;
		float32 LC1;
		float32 LC2;
		float32 LC3;
		float32 LViewRange;
		uint16  RQ;
		float32 RC0;
		float32 RC1;
		float32 RC2;
		float32 RC3;
		float32 RViewRange;

		uint16  LAQ;
		float32 LAC0;
		float32 LAC1;
		float32 LAC2;
		float32 LAC3;
		float32 LAViewRange;
		uint16  RAQ;
		float32 RAC0;
		float32 RAC1;
		float32 RAC2;
		float32 RAC3;
		float32 RAViewRange;
        

		uint32  hostposition;

}FusionLnaeInfo;


/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

extern FUSION_AlgParameter		gFusionAlgParameter;
extern FusionSystemInternalInfo gFusionIntInfo;
extern uint16_t					gErrorDTC;

extern FusionLnaeInfo gFusionLaneIntInfo;

/************************** External Function Decleration *********************/



#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_FUSION_DEFINE__ */
