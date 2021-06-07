/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : association_pri.h
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

#ifndef __H_ASSOCIATION_PRI__
#define __H_ASSOCIATION_PRI__

/************************** Include *******************************************/

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/************************** Macro *********************************************/

#define LONG_BOUND1			(40.0F)
#define LONG_BOUND2			(12.0F)
#define LONG_THRESHOLD1		(20.0F)
#define LONG_THRESHOLD2		(3.0F)
#define LONG_THRESHOLD3		(5.0F)
#define LAT_THRESHOLD_1		(5.0F)
#define LAT_THRESHOLD_2		(0.0875F)//0.017455 = tan(1)
#define VELO_THRESHOLD		(30.0F)   
#define ANGLE_THRESHOLD1	(0.3F)
#define ANGLE_THRESHOLD2	(0.4F)
#define ASSO_DELTA_LONG_MIN	(3)
#define ASSO_DELTA_LONG_MAX	(10)
#define VISO_LONG_MIN		(30)

/************************** Struct And Enum ***********************************/

/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

/************************** External Function Decleration *********************/
	void CalReferencePointState();
	void VisionClusterAssociation();

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_ASSOCIATION_PRI__ */
