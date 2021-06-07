/******************************************************************************
# Copyright (c) 2020 AP, S/W Center, SAIC Motor Zone Co., Ltd.
# All rights reserved.
*******************************************************************************
* File name     : p_vision_roadedge_.h
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


#ifndef ___DATASTRUCT_ROADEDGE_H___
#define ___DATASTRUCT_ROADEDGE_H___



/************************** Include *******************************************/

#include "basic_type.h"


#ifdef __cplusplus
extern "C"{
#endif /* __cplusplus */


/************************** Macro *********************************************/
// road edge side  // changed based on vehicle coordination
#define ROADEEDGR_LEFT  1
#define ROADEEDGR_RIGHT  2

// road edge type
#define LRE_UNDECIDED  0
#define LRE_ROAD_EDGE     1
#define LRE_ELEVATED_STRUCTURE  2
#define LRE_CURB  3
#define LRE_CONES_LOLES  4
#define LRE_PARKING_CARS  5

//
/************************** Struct And Enum ***********************************/

/*
    descripton of a curve as function f(x)= a + bx + cx^2 +dx^3
    this structure defines the coefficient of the curve function
*/
typedef struct
{
	uint32 lreage0;

	float32 lreexistprob0;

	uint32  lretype0;

	uint32  lreid0;

	float32 lrelineC00;     /**< coefficient a */
	float32 lrelineC10;     /**< coefficient b */
	float32 lrelineC20;     /**< coefficient c */
	float32 lrelineC30;     /**< coefficient d */

	float32 lrevrStart0;
	float32 lrevrEnd0;

	uint32  lreside0;

	float32 lreheighth0;
	float32 lreheightstd0;

	uint32  lreindex0;

}LaneRoadedgeProtHeader;

typedef struct
{
	uint32 lreage1;

	float32 lreexistprob1;

	uint32  lretype1;

	uint32  lreid1;

	float32 lrelineC01;     /**< coefficient a */
	float32 lrelineC11;     /**< coefficient b */
	float32 lrelineC21;     /**< coefficient c */
	float32 lrelineC31;     /**< coefficient d */

	float32 lrevrStart1;
	float32 lrevrEnd1;

	uint32  lreside1;

	float32 lreheighth1;
	float32 lreheightstd1;

	uint32  lreindex1;
}LaneRoadedgeProtA;

typedef struct
{
	uint32 lreage2;

	float32 lreexistprob2;

	uint32  lretype2;

	uint32  lreid2;

	float32 lrelineC02;     /**< coefficient a */
	float32 lrelineC12;     /**< coefficient b */
	float32 lrelineC22;     /**< coefficient c */
	float32 lrelineC32;     /**< coefficient d */

	float32 lrevrStart2;
	float32 lrevrEnd2;

	uint32  lreside2;

	float32 lreheighth2;
	float32 lreheightstd2;

	uint32  lreindex2;

}LaneRoadedgeProtB;

typedef struct
{
	uint32 lreage3;

	float32 lreexistprob3;

	uint32  lretype3;

	uint32  lreid3;

	float32 lrelineC03;     /**< coefficient a */
	float32 lrelineC13;     /**< coefficient b */
	float32 lrelineC23;     /**< coefficient c */
	float32 lrelineC33;     /**< coefficient d */

	float32 lrevrStart30;
	float32 lrevrEnd3;

	uint32  lreside3;

	float32 lreheighth3;
	float32 lreheightstd3;

	uint32  lreindex3;

}LaneRoadedgeProtC;

typedef struct sVisionLaneRoadedge_t
{
	float64_t      timestamp; /**< time stamp for 64bit*/

	uint32         frameNum; /**< picture frame num since the first picture. */

	LaneRoadedgeProtHeader  laneroadedgeprotheader;

	LaneRoadedgeProtA  laneroadedgeprota;
	LaneRoadedgeProtB  laneroadedgeprotb;
	LaneRoadedgeProtC  laneroadedgeprotc;

	uint32         errorFlag;/**< error flag indication*/

	uint32 reserved;
}VisionLaneRoadedge;  /**< sizeof(VisionLaneMark) is 128 bytes*/


/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

/************************** External Function Decleration *********************/


#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* ___DATASTRUCT_ROADEDGE_H___ */

