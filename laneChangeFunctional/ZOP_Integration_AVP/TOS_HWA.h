/******************************************************************************/
/*! \file:
 *
 *  \brief:
 *
 *  \author: CAI Yuxi
 *
 *  \data:2020-12
 */
 /******************************************************************************/

#ifndef TOS_HWA_H_
#define TOS_HWA_H_

#include"lm_common_defines.h"
// calc 
class TOS_HWA 
{
public:
	TOS_HWA();
	void Init();
	~TOS_HWA() {};
	void Calc_v(TOS_OBJ_PROB_WITHIN_LANE& t_tos_obj_within_lane_st, PROB_EGO_VEHICLE_WITHIN_LANE_ST& t_probEgoVehicleWithinLane_st);
	HWA_TAR_OBJ_ST& Get_tar_obj_ref();
private:
	struct HWA_TAR_OBJ_ST m_hwa_tar_obj_st;

};

#endif
