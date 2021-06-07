/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : track_manager_pri.h
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

#ifndef __H_TRACK_MANAGER_PRI__
#define __H_TRACK_MANAGER_PRI__

/************************** Include *******************************************/

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

/************************** External Function Decleration *********************/
	void CheckFusionList(void);
	void TrackManage_Radar(void);
	void TrackManage_Vision(void);
	void RemoveStationaryFusionObject(void);
#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_TRACK_MANAGER_PRI__ */
