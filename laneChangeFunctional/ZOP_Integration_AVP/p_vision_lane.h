/******************************************************************************
# Copyright (c) 2020 AP, S/W Center, SAIC Motor Passenger Vehicle Co., Ltd.
# All rights reserved.
*******************************************************************************
* File name     : p_vision_lane.h
* Description   :
* Version       : v1.0
* Create Time   : 2020/11/26
* Author   		: Lucien
* Modify history:
*******************************************************************************
* Modify Time   Modify person  Modification
* ------------------------------------------------------------------------------
*
*******************************************************************************/


#ifndef ___DATASTRUCT_LANE_H___
#define ___DATASTRUCT_LANE_H___


/************************** Include *******************************************/

#include "basic_type.h"


#ifdef __cplusplus
extern "C"{
#endif /* __cplusplus */


/************************** Macro *********************************************/

//HOST LANE SIDE // change marco difination as make coordination transfer between video and vehicle
#define LANE_LEFT_SIDE   1
#define LANE_RIGHT_SIDE  2

// ADJA LANE SIDE
#define NONE_LANEMARK   0
#define LEFT_LEFT_LANEMARK   1
#define LEFT_RIGHT_LANEMARK  2
#define RIGHT_LEFT_LANEMARK  3
#define RIGHT_RIGHT_LANEMARK 4

// LANE QUALITY
#define INVALID_LANEMARK   0
#define LOW_LANEMARK   1
#define MID_LANEMARK  2
#define MIDHIGH_LANEMARK  3
#define HIGH_LANEMARK 4

//HOST/ADJA LANE CORLOR

#define LANE_UNDECIDED   0
#define LANE_WHITE       1
#define LANE_YELLOW_ORANGE_RED  2
#define LANE_BLUE_GREEN  3


// HOST LANE MARK TYPE
#define HLANE_MARK_UNDECIDED   0
#define HLANE_MARK_SOLID   1
#define HLANE_MARK_DASHED  2
#define HLANE_MARK_DLM     3
#define HLANE_MARK_BOTTS   4
#define HLANE_MARK_DECELERATION 5
#define HLANE_MARK_HOV 6


// ADJA LANE MARK TYPE
#define ALANE_MARK_UNDECIDED   0
#define ALANE_MARK_SOLID   1
#define ALANE_MARK_DASHED  2
#define ALANE_MARK_DLM     3
#define ALANE_MARK_BOTTS   4
#define ALANE_MARK_HOV 5

// TRACK STATUS
#define LANE_INVALID   0
#define LANE_INIT      1
#define LANE_MEASURED  2
#define LANE_PREDICTED 3

// DLM type
#define LANE_DLM_NOT   0
#define LANE_DLM_SOLID_DASHED   1
#define LANE_DLM_DASHED_SOLID   2
#define LANE_DLM_SOLID_SOLID    3
#define LANE_DLM_DASHED_DASHED  4
#define LANE_DLM_UNDECIDE  5

/************************** Struct And Enum ***********************************/

/*
    descripton of a curve as function f(x)= a + bx + cx^2 +dx^3
    this structure defines the coefficient of the curve function
*/
typedef struct sCurveFunction_t
{
    float32 latDistanceZeroOrderCoeff; /**< coefficient a */
    float32 latDistanceFirstOrderCoeff; /**< coefficient b */
    float32 latDistanceSecondOrderCoeff; /**< coefficient c */
    float32 latDistanceThirdOrderCoeff; /**< coefficient d */
    float32 longDistanceToend; /**< end of the curve */
}CurveFunction;

/*
    Lane marker type

    0:None,
    1:solid,
    2:Dashed,
    4:Botts Dots,
    6:invalid,
    7:undecided,
    8:Double lane Mark
*/
typedef uint16 LaneMarkType;

/*
    Lane marker trace status

    0:invalid,
    2:new,
    5:updated,
    6:coasted
*/
typedef uint16 TrackStatus;

/*
    Lane change status

    0:No lane change,
    1:Lane change to the left,
    2:Lane change to the right
*/
typedef uint32 LaneChange;


/*
    Information for the closest lane marker when using an individual model for the lane markings.
*/
typedef struct sHostIndividual_t
{
    CurveFunction lane_curve; /**< lane marker curve function */
    LaneMarkType  lane_type; /**< lane marker type */
    TrackStatus   lane_traceStatus; /**< lane marker trace status */
}HostIndividual;


/*
    Information for the neighbor lane marker when using an individual model for the lane markings.
*/
typedef struct sNeighborLane_t
{
    CurveFunction lane_curve; /**< lane marker curve function */
    LaneMarkType  lane_type; /**< lane marker type */
    TrackStatus   lane_traceStatus; /**< lane marker trace status */
}NeighborLane;

typedef struct sVisionLaneMark_t
{
	float64_t      timestamp; /**< time stamp for 64bit*/

    uint32         frameNum; /**< picture frame num since the first picture. */

    uint32         isAmbiguosLinePatternLeft; /**< 1:an ambiguous lane marker pattern has been detected by camera to the left of the ego vehicle */

    uint32         isAmbiguosLinePatternRight; /**< reference to isAmbiguosLinePatternLeft */

    LaneChange     laneChangeStatus; /**< lane change status */

    HostIndividual leftHostIndividual; /**< Left side host lane Individual model */

    HostIndividual rightHostIndividual; /**< Right side host lane Individual model */

    NeighborLane   leftNeighborLane; /**< Left side neighbor lane Individual model */

    NeighborLane   rightNeighborLane; /**< Right side neighbor lane Individual model */

    uint32         errorFlag;/**< error flag indication*/

    uint32 reserved[1];
}VisionLaneMark;  /**< sizeof(VisionLaneMark) is 128 bytes*/

typedef struct
{
	float32 lhlinefirstC00;     /**< coefficient a */
	float32 lhlinefirstC10;     /**< coefficient b */
	float32 lhlinefirstC20;     /**< coefficient c */
	float32 lhlinefirstC30;     /**< coefficient d */
	uint32  lhside0;

	float32 lhfirstvrStart0;
	float32 lhfirstvrEnd0;

	uint32 lhtrackid0;

	uint32 lhcolor0;

	float32 lhmarkerwidth0;
	float32 lhmarkerwidthSTD0;

	float32 lhexistenceprobability0;

	uint32 lhlanemarktype0;
	uint32 lhlanemarktypeconf0;

	uint32 lhdlmtype0;// double lane mark type


}LanehostProtA;

typedef struct
{
	float32 lhlinefirstC01;     /**< coefficient a */
	float32 lhlinefirstC11;     /**< coefficient b */
	float32 lhlinefirstC21;     /**< coefficient c */
	float32 lhlinefirstC31;     /**< coefficient d */
	uint32  lhside1;

	float32 lhfirstvrStart1;
	float32 lhfirstvrEnd1;

	uint32 lhtrackid1;

	uint32 lhcolor1;

	float32 lhmarkerwidth1;
	float32 lhmarkerwidthSTD1;

	float32 lhexistenceprobability1;

	uint32 lhlanemarktype1;
	uint32 lhlanemarktypeconf1;

	uint32 lhdlmtype1; // double lane mark type

}LanehostProtB;


typedef struct
{
	uint32  lhsyncid;
	uint32  lhlanecount;
	float32 lhestimatedwidth;
	float32 lhsnowonroadprob;
}Lanehostprotheader;



typedef struct
{
	float32 lalineC00;     /**< coefficient a */
	float32 lalineC10;     /**< coefficient b */
	float32 lalineC20;     /**< coefficient c */
	float32 lalineC30;     /**< coefficient d */
	uint32  lalinerole0;

	uint32 lalanetrackid0;
	uint32 laage0;

	uint32 lacolor0;
	uint32 lacolorconf0;

	float32 lanemarkerwidth0;
	float32 lanemarkerwidthstd0;

	float32 lavrstart0;
	float32 lavrend0;

	float32 laexistprobability0;

	uint32 lalanemarktype0;
	uint32 lalanemarktypeconf0;

	uint32 ladlmtype0;  // double lane mark
	
}LaneadjaProtA;


typedef struct
{
	float32 lalineC01;     /**< coefficient a */
	float32 lalineC11;     /**< coefficient b */
	float32 lalineC21;     /**< coefficient c */
	float32 lalineC31;     /**< coefficient d */
	uint32  lalinerole1;

	uint32 lalanetrackid1;
	uint32 laage1;

	uint32 lacolor1;
	uint32 lacolorconf1;

	float32 lanemarkerwidth1;
	float32 lanemarkerwidthstd1;

	float32 lavrstart1;
	float32 lavrend1;
	float32 laexistprobability1;

	uint32 lalanemarktype1;
	uint32 lalanemarktypeconf1;

	uint32 ladlmtype1;
}LaneadjaProtB;


typedef struct
{
	float32 lalineC02;     /**< coefficient a */
	float32 lalineC12;     /**< coefficient b */
	float32 lalineC22;     /**< coefficient c */
	float32 lalineC32;     /**< coefficient d */
	uint32  lalinerole2;

	uint32 lalanetrackid2;
	uint32 laage2;

	uint32 lacolor2;
	uint32 lacolorconf2;

	float32 lanemarkerwidth2;
	float32 lanemarkerwidthstd2;

	float32 lavrstart2;
	float32 lavrend2;

	float32 laexistprobability2;

	uint32 lalanemarktype2;
	uint32 lalanemarktypeconf2;

	uint32 ladlmtype2;
}LaneadjaProtC;

typedef struct
{
	float32 lalineC03;     /**< coefficient a */
	float32 lalineC13;     /**< coefficient b */
	float32 lalineC23;     /**< coefficient c */
	float32 lalineC33;     /**< coefficient d */
	uint32  lalinerole3;

	uint32 lalanetrackid3;
	uint32 laage3;

	uint32 lacolor3;
	uint32 lacolorconf3;

	float32 lanemarkerwidth3;
	float32 lanemarkerwidthstd3;

	float32 lavrstart3;
	float32 lavrend3;

	float32 laexistprobability3;

	uint32 lalanemarktype3;
	uint32 lalanemarktypeconf3;

	uint32 ladlmtype3;
}LaneadjaProtD;

typedef struct sEyeVisionLaneMark_t
{
	float64      timestamp; /**< time stamp for 64bit*/

	uint32         frameNum; /**< picture frame num since the first picture. */

	LaneChange     laneChangeStatus; /**< lane change status */

	Lanehostprotheader lanaHostProtHeader;

	LanehostProtA  lanehostprota; 

	LanehostProtB  lanehostprotb;

	LaneadjaProtA laneadjaprota;
	LaneadjaProtB laneadjaprotb;
	LaneadjaProtC laneadjaprotc;
	LaneadjaProtD laneadjaprotd;

	uint32         errorFlag;/**< error flag indication*/
	uint32			reserved;
}EyeVisionLaneMark;




/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

/************************** External Function Decleration *********************/


#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* ___DATASTRUCT_LANE_H___ */

