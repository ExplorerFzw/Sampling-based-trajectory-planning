/******************************************************************************
# Copyright (c) 2020 AP, S/W Center, SAIC Motor Passenger Vehicle Co., Ltd.
# All rights reserved.
*******************************************************************************
* File name     : p_fusion_output.h
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

#ifndef __H_P_FUSION_OUTPUT__
#define __H_P_FUSION_OUTPUT__

#include "basic_type.h"

/************************** Include *******************************************/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/************************** Macro *********************************************/

#define FUSION_OBJ_OUT_MAX			(40U)
#define FUSION_TLR_OUT_MAX			(8U)
#define FUSION_FREESPACE_OUT_MAX	(120U)

/************************** Struct And Enum ***********************************/

/*
	Fusion Source
	0: vision only
	1: radar only
	2: fused radar vision
	255: unkown
*/
typedef uint8_t FusionSource;

/*
	Fusion motion model

	0: CA
	1: CTRA
	255: unkown
*/
typedef uint8_t FusionMotionModel;

/*
	Fusion obj trace status
	
	0:New,
	1:Measured,
	2:Predicted,
*/
typedef uint8_t FusionObjTrackStatus;

/*
	Fusion Object classification
	
	0: Unknown
	1: Pedestrian
	2: Cyclist
	3: Bus
	4: Small_Medium_Car
	5: Trucks
	6: Tri-Motor
	7: Special_vehicle
	8: Tiny_car
	9: Ambulance
	10: UncertainVehicle
*/
typedef uint8_t FusionObjType;

/*
	Fusion Object near side
	
	0: Rear
	1: Front
	2: Right
	3: Left
	4: Unknown
*/
typedef uint8_t FusionObjNearSideType;

/*
	Fusion Object motion pattern
	
	0: Unknown
	1: Stationary
	2: Driving
	3: Oncoming
	4: Driving stopped
	5: Oncoming stopped
*/
typedef uint8_t FusionObjMotionPattern;

/*
	fusion object estimate
*/
typedef struct sFusionObjTrackEstimate_t
{
	float32_t longPosition;					/**< The longitudinal distance to the middle of nearest facing side of the object.Measured in the reference coordinate system */
	float32_t latPosition;					/**< The lateral distance to the middle of nearest facing side of the object.Measured in the reference coordinate system */
	float32_t headingAngle;					/**< The heading angle for a vechile.It is defined as the angle between the heading of the detected vehicle and the heading of the host vehicle. */
	float32_t speed;						/**< The vehicle speed relative to the ground and in direction of the vehicle traveling */
	float32_t yawRate;						/**< The yawRate of the object in the reference coordinate system */
	float32_t longRelativeVelocity;			/**< The longitudinal relative velocity of the object and the host vehicle. */
	float32_t latRelativeVelocity;			/**< The lateral relative velocity of the object and the host vehicle. */
	float32_t longAbsoluteVelocity;			/**< The longitudinal absolute velocity of the object relative to the ground in the reference coordinate system. */
	float32_t latAbsoluteVelocity;			/**< The lateral absolute velocity of the object relative to the ground in the reference coordinate system. */
	float32_t acceleration;					/**< The vehicle acceleration relative to the ground and in direction of the vehicle traveling */
	float32_t longRelativeAcceleration; 	/**< The longitudinal relative acceleration of the object and the host vehicle. */
	float32_t latRelativeAcceleration; 		/**< The lateral relative acceleration of the object and the host vehicle. */
	float32_t longAbsoluteAcceleration;		/**< The longitudinal absolute acceleration of the object relative to the ground in the reference coordinate system. */
	float32_t latAbsoluteAcceleration;		/**< The lateral absolute acceleration of the object relative to the ground in the reference coordinate system. */
	float32_t curvature;					/**< the curvature of the object trajectory */
}FusionObjTrackEstimate;

/*
	fusion object property
*/
typedef struct sFusionObjTrackProperty_t
{
	uint8_t					id;								/**< The obj id.The id number needs to be equal to the index in the object stucture */
	FusionSource			fusionSource;					/**< fusionSource. */
	FusionMotionModel		motionModel;					/**< The motion model used for the object.0:Constant acceleration motion model,1:Coordinated turn motion model */
	FusionObjTrackStatus	trackStatus;					/**< The track status. */
	uint8_t					positionConfidence;				/**< Position confidence(Used in RoadGeometryFusion).0:Not Reliable 1,2:Reliable 2 */
	uint8_t					fcwConfidence;					/**< The object confidence for function FCW.0:Not Reliable,1:Warning reliable */
	uint8_t					tjaConfidence;					/**< The object confidence for function TJA.0:Not Reliable,1:Reliable 1,2:Reliable 2 */
	uint8_t					leftNearLaneMarkingConfidence;	/**< Left nearest lane marking confidence.Not Reliable */
	uint8_t					rightNearLaneMarkingConfidence;	/**< Right nearest lane marking confidence.0:Not reliable,1:Reliable */
	uint8_t					visionId;						/**< The vision id for the object.Note!The vision id number do not need to be equal to the index in the object structure. */
	float32_t				accelerationStdDev;				/**< Standard deviation for object acceleration */
	float32_t				headingAngleStdDev;				/**< Standard deviation for the heading angle of the object */
	float32_t				latPositionStdDev;				/**< Standard deviation for the lateral position of the object */
	float32_t				longPositionStdDev;				/**< standard deviation for longitudinal position of the object */
	float32_t				speedStdDev;					/**< Standard deviation for object speed */
}FusionObjTrackProperty;

/*
	fusion object information
*/
typedef struct sFusionObjTrackInformation_t
{
	uint8_t 				valid;								/**< the valid of fusion obj. 0: invalid; 1: valid*/
	FusionObjType			type;								/**< the type of fusion obj*/
	FusionObjNearSideType	nearestSide;						/**< which object side that is nearest (facing) the host vehicle */
	FusionObjMotionPattern	motionPatternCurrent;				/**< The motion pattern of the object at the current moment*/
	FusionObjMotionPattern	motionPatternHistory;				/**< The motion pattern of the object at the history moment*/
	float32_t				width;								/**< The object width.The width is the extent of the nearest facing side */
	float32_t				height;								/**< The object height. */
	float32_t				length;								/**< The object length. */
	float32_t				distanceToleftNearLaneMarking;		/**< The lateral distance between the object and the closest lane marking to the left */
	float32_t				distanceToRightNearLaneMarking;		/**< The lateral distance between the object and the closest lane marking to the right */
}FusionObjTrackInformation;

/*
	fusion object data
*/
typedef struct sFusionObjData_t
{
	FusionObjTrackEstimate    obj_estimate;
	FusionObjTrackProperty    obj_property;
	FusionObjTrackInformation obj_information;
}FusionObjData;

/*
	FusionObjOutInfo list
*/
typedef struct sFusionObjOutInfo_t
{
	float64_t			timeStamp;						/**< Common timestamp for all object and barrier signals */
	FusionObjData		objects[FUSION_OBJ_OUT_MAX];	/**< fusion obj */
	uint32_t			frameNum;						/**< frame nmber */
	uint8_t				reserved[4];
}FusionObjOutInfo; /**< sizeof(FusionObjOutInfo) is xx bytes*/


/*
	fusion lane start point
*/
typedef struct sFusionLaneStartPoint_t
{
	float32_t x0;
	float32_t y0;
} FusionLaneStartPoint;

/*
	Fusion Lane marker type
	
	0: None,
	1: Solid,
	2: Dashed,
	3: Solid Dashed
	4: Dashed Solid
	5: Double(Left Dased, Right Solid)
	6: Double(Left Solid, Right Dased)
	7: Double(Double Dashed)
	8: Double(Double Solid)
	9: Botts Dots
	10: Invalid
	11: Undecided
*/
typedef uint32_t FusionLaneMarkType;

/*
	Fusion Lane change status
	
	0:No lane change,
	1:Lane change to the left,
	2:Lane change to the right
*/
typedef uint32_t FusionLaneChange;

/*
	Color of Fusion Lane marker
	
	0:unknown,
	1:white,
	2:yellow,
	3:blue
*/
typedef uint8_t FusionLaneMarkerColor;

/*
	Fusion Lane marker trace status
	
	0:invalid,
	1:init,
	2:measurement,
	3:predicted
*/
typedef uint8_t FusionTrackStatus;

/*
	Fusion Lane Quality
	
	0:invalid,
	1:Low,
	2:Mid,
	3:Mid High,
	4:High
*/
typedef uint8_t FusionLaneQuality;

/*
	Fusion Lane change status
	
	0:No lane change,
	1:Lane change to the left,
	2:Lane change to the right
*/
typedef uint32_t FusionLaneChange;

/*
	descripton of a curve as function f(x)= a + bx + cx^2 +dx^3 +ex^4 +fx^5
	this structure defines the coefficient of the curve function
*/
typedef struct sFusionCurveFunctionEstimate_t
{
	float32_t 				latDistanceZeroOrderCoeff;    /**< coefficient a */
	float32_t 				latDistanceFirstOrderCoeff;   /**< coefficient b */
	float32_t 				latDistanceSecondOrderCoeff;  /**< coefficient c */
	float32_t 				latDistanceThirdOrderCoeff;   /**< coefficient d */
	float32_t 				longDistanceToend;            /**< end of the curve */
	FusionLaneStartPoint 	startPoint;
}FusionCurveFunctionEstimate;

/*
	Information for the lane marker when using an individual model for the lane markings.
*/
typedef struct sFusionHostLaneData_t
{
	uint8_t							id;				/**< The lane id.The id number needs to be equal to the index in the lane stucture */
	FusionTrackStatus				traceStatus;	/**< lane marker trace status */
	FusionLaneQuality				quality;		/**< lane marker quality */
	FusionLaneMarkerColor			color;			/**< fusion lane marker color */
	FusionLaneMarkType				type;			/**< fusion lane marker type */
	float32_t     					width;			/**< total width of lane marker, from inner edge to outer edge */
	FusionCurveFunctionEstimate		curveFunc;		/**< lane marker curve function */
}FusionLaneData;

/*
	Information for the primary object trajectory .
*/
typedef struct sFusionPrimaryObjTrajectoryData_t
{
	uint8_t							id;				/**< The primary obj id. */
	FusionTrackStatus				traceStatus;	/**< The primary obj trajectory status */
	FusionLaneQuality				quality;		/**< trajectory quality */
	FusionCurveFunctionEstimate		curveFunc;		/**< trajectory curve function */
}FusionPrimaryObjTrajectoryData;

typedef struct sFusionLaneOutInfo_t
{
	float64_t						timeStamp;			/**< Common timestamp for all object and barrier signals */
	uint32_t						frameNum;			/**< Frame nmber */
	float32_t						hostLaneWidth;		/**< Host lane width */
	float32_t						leftLaneWidth;		/**< Left lane width */
	float32_t						rightLaneWidth;		/**< Right lane width */
	FusionLaneData					leftHostLane;		/**< Left side host lane Individual model */
	FusionLaneData					rightHostLane;		/**< Right side host lane Individual model */
	FusionLaneData					leftNeighborLane;	/**< Left side neighbor lane Individual model */
	FusionLaneData					rightNeighborLane;	/**< Right side neighbor lane Individual model */
	FusionPrimaryObjTrajectoryData	primaryObjTra;		/**< Primary obj trajectory */
	FusionLaneChange				laneChangeStatus;	/**< lane change status */
}FusionLaneOutInfo; /**< sizeof(FusionLaneOutInfo) is xx */

/*
	Fusion Road Edge type
	
	0: Unknown
	1: Lawn
	2: Sand
	3: Stone
	4: Wall
	5: Fence
	6: Curb
	7: Cone Bucket
	8: Parked Car
	9: Snow
*/
typedef uint16_t FusionRoadEdgeType;

/*
	Fusion Road edge quality
	
	0:invalid,
	1:Low,
	2:Mid,
	3:Mid High,
	4:High
*/
typedef uint8_t FusionRoadEdgeQuality;

/*
	Fusion Road edge trace status
	
	0:invalid,
	1:init,
	2:measurement,
	3:predicted
*/
typedef uint32_t FusionRoadEdgeTrackStatus;


/*
	Fusion Road edge host vehicle position
	
	0:unknown,
	1:left,
	2:mid,
	3:right
*/
typedef uint32_t FusionRoadEdgeHostVehPos;

/*
	Information for the road edge when using an individual model for the
	lane markings.
*/
typedef struct sFusionLeftRoadEdge_t
{
	FusionRoadEdgeQuality       quality;		/**< road edge quality */
	uint8_t						reserved;		/**< reserved */
	FusionRoadEdgeType			type;			/**< road edge type */
	uint32_t            		id;				/**< road edge id */
	FusionRoadEdgeTrackStatus   traceStatus;	/**< road edge trace status */
	FusionCurveFunctionEstimate roadEdgeCurve;  /**< road edge curve function */
} FusionRoadEdgeData;

/*
	FusionRoadEdgeOutInfo list
*/
typedef struct sFusionRoadEdgeOutInfo_t
{
	float64_t					timeStamp;				/**< Common timestamp for all object and barrier signals */
	uint32_t					frameNum;				/**< frame nmber */
	FusionRoadEdgeHostVehPos	hostVehPos;				/**< host vehicle position */
	FusionRoadEdgeData			leftRoadEdge;        	/**< left road edge*/
	FusionRoadEdgeData			rightRoadEdge;       	/**< right road edge*/
	uint8_t						errorFlag;              /**< error flag indication*/
	uint8_t						detectedEdgeCnt;		/** the count of road edge to be detected on image **/
	uint8_t						reserved[2];
}FusionRoadEdgeOutInfo;  /**< sizeof = xx bytes*/

/*
	TSR Main Type
	
	0:"Construction",
	1:"MinSpeedLim100",
	2:"MinSpeedLim110",
	3:"MinSpeedLim60",
	4:"MinSpeedLim70",
	5:"MinSpeedLim80",
	6:"MinSpeedLim90",
	255: Unknown
*/
typedef uint16_t FusionTSRSignType;

/*
	TSR Main Category
	0: None
	1: CAT_SPEED
	2: CAT_BAN
	3: CAT_WARNING
	4: CAT_INSTRUCTION
	5: Reserved
*/
typedef uint16_t FusionTSRMainSignCat;

/* sizeof = xx */
typedef struct sFusionTSROutInfo_t
{
	float64_t				timeStamp;		/**< Common timestamp for all object and barrier signals */
	uint32_t				lookIndex;		/**< The relativ vision frame nmber */
	FusionTSRSignType		signType;		/**< types of main traffic signs*/
	FusionTSRMainSignCat	signCat;		/**< cataloge of traffic sign */
	float32_t      			longPosition;   /**< longitudinal position of the traffic sign*/
	float32_t      			latPosition;	/**< lateral position of the traffic sign*/
	float32_t				signHeight;		/**< height position of the traffic sign*/
}FusionTSROutInfo; /**< sizeof(FusionTSROutInfo) is xx */

/*
	Road Mark Type
	
	0:"Construction",
	1:"MinSpeedLim100",
	2:"MinSpeedLim110",
	3:"MinSpeedLim60",
	4:"MinSpeedLim70",
	5:"MinSpeedLim80",
	6:"MinSpeedLim90",
	255: Unknown
*/
typedef uint16_t FusionRoadMarkType;

/* sizeof = xx */
typedef struct sFusionRoadMarkOutInfo_t
{
	float64_t				timeStamp;		/**< Common timestamp for all object and barrier signals */
	uint32_t				lookIndex;		/**< The relativ vision frame nmber */
	FusionRoadMarkType		signType;		/**< types of the road mark*/
	float32_t      			longPosition;   /**< longitudinal position of the road mark*/
	float32_t      			latPosition;	/**< lateral position of the road mark*/
	float32_t				signHeight;		/**< height position of the road mark*/
}FusionRoadMarkOutInfo; /**< sizeof(FusionRoadMarkOutInfo) is xx */

/*
	Fusion TLR Classification
	
	0: None
	1: L_Circle
	2: L_Forward
	3: L_Left
	4: L_Right
	5: L_Return
	6: L_Pedestrain
	7: L_Non_Motor
	8: L_Time
	9: Reserved
	10: L_left_and_return
	11: L_Forward_and_Left
	12: L_Forward_and_Right
	13: Other
*/
typedef uint16_t FusionTLRClass;

/*
	Fusion TLR Color
	0: Unknown
	1: Red
	2: Green
	3: Yellow
	4: Off
	5: Other
*/
typedef uint16_t FusionTLRColor;

/** List of TLR  datagrams */
typedef struct sVisionTLR_t
{
	uint32_t		id;						/**< the id number of traffic sign*/
	float32_t		longPosition;			/**< longitudinal position of the traffic light*/
	float32_t		latPosition;			/**< lateral position of the traffic light*/
	float32_t		heightPosition;			/**< height position of the traffic light*/
	FusionTLRClass	classTrafficLight;		/**< class of traffic light*/
	FusionTLRColor	colorTrafficLight;		/**< color of traffic light*/
	uint32_t		confTrafficLight;		/**< traffic light confidence*/
}FusionTLRData;

/* vision TLR list */
typedef struct sFusionTLROutInfo_t
{
	float64_t				timeStamp;		/**< Common timestamp for all object and barrier signals */
	uint32_t				lookIndex;		/**< The relativ vision frame nmber */
	FusionTLRData			tlrList[FUSION_TLR_OUT_MAX]; /**< fusion TLR array. */
}FusionTLROutInfo;   /**< sizeof(FusionTLROutInfo) is xx bytes*/

 /*
	Fusion Freespace Point Type

	0: Unknown
	1: Vehicle
	2: Road Delimiter
	3: Pedestrain
	4: Other
 */
typedef uint32_t FusionFreespacePointType;

/** List of Freespace */
typedef struct sFreespacePoints_t
{
	float32_t					longPosition;     /**< longitudinal position freespace point */
	float32_t					latPosition;      /**< lateral position of freespace point */
	FusionFreespacePointType    type;             /**< freesapce point type */
	uint32_t					reserved;
}FusionFreespacePoint;

/* vision FusionFreespaceOutInfo list */
typedef struct sFusionFreespaceOutInfo_t
{
	float64_t				timeStamp;		/**< Common timestamp for all object and barrier signals */
	uint32_t				lookIndex;		/**< The relativ vision frame nmber */
	FusionFreespacePoint	freespacePoint[FUSION_FREESPACE_OUT_MAX];/**< fusion freesapce points array. */
}FusionFreespaceOutInfo;  /**< sizeof(FusionFreespaceOutInfo) is xx bytes*/

/* fusion output list */
typedef struct sFusionOutputList_t
{
	float64_t			    timeStamp;			/**< Common timestamp for all object and barrier signals */
	uint32_t				frameNum;			/**< The relativ vision frame nmber */
	uint32_t				dayNightState;		/**< 0:night 1:twilight 2:day 255:unkown */
	FusionObjOutInfo		objOutInfo;			/**< the output of object detection */
	FusionLaneOutInfo		laneOutInfo;		/**< the output of lane detection */
	FusionRoadEdgeOutInfo	roadEdgeOutInfo;	/**< the output of road edge detection */
	//FusionTSROutInfo		tsrOutInfo;			/**< the output of TSR detection */
	//FusionTLROutInfo		tlrOutInfo;			/**< the output of TLR detection */
	//FusionRoadMarkOutInfo	roadMarkOutInfo;	/**< the output of road mark detection */
	//FusionFreespaceOutInfo	freespaceOutInfo;	/**< the output of freespace detection */
	//uint32_t				reserved[8];
}FusionOutputList;  /**< sizeof(FusionOutputList) is xx bytes*/


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /*__H_P_FUSION_OUTPUT__ */

