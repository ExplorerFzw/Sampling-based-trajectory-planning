#ifndef BIRDVIEW_H_
#define BIRDVIEW_H_
#include"LMCommonDefines.h"
#include<opencv.hpp>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include"Outputs.h"
#include"LMBase.h"
#include"LMPp.h"
#include"TOSPp.h"
#include"LMF.h"
#include"TOSHWA.h"
#include"BirdView.h"
#include"TOSTruckEvasion.h"
#include"TOSNRA.h"
#include"Inputs.h"

using namespace cv;
enum class COLOR
{
	BLACK = 0,
	BLUE = 1,
	GREEN = 2,
	CYAN = 3,
	RED = 4,
	MAGENTA = 5,// 品红色
	YELLOW = 6,// 黄色
	WHITE = 7,// 白色
	FAINT_BLUE = 8,// 暗蓝色
	DARK_GREEN = 9,// 暗绿色
	DARK_CYAN = 10,// 暗青色
	DARK_RED = 11,// 暗红色
	DARK_PURPLE = 12,//g 暗紫色
	OLIVE = 13,// 橄榄色
	DARK_GRAY = 14,// 暗灰色
	LIGHT_GRAY = 15,// 亮灰色
	LIGHT_GREEN = 16,// 淡绿色
	SKY_BLUE = 17,// 天蓝色
	MILK_WHITE = 18,// 乳白色
	MEDIUM_GRAY = 19,//中灰色
};

class BIRDVIEW
{
public:
	BIRDVIEW();
	void Calc_v(FUSION_OBJ_OUTPUT_ST& t_fus_obj_st, OBJECT_LIST_BY_BC_CHECK& t_obj_list_by_bc_check_st, FUSION_LANE_OUTPUT_ST& t_fus_lane_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st,HWA_TAR_OBJ_ST& t_hwa_tar_obj_st, TOS_OBJ_PROB_WITHIN_LANE& t_tos_obj_within_lane_st,PROB_EGO_VEHICLE_WITHIN_LANE_ST& t_probEgoVehicleWithinLane_st, FUSION_ROADEDGE_OUTPUT_ST& fus_re_output_st,float t_time,TRUCK_EVASION_TAR_OBJ& t_tar_obj_l_st, TRUCK_EVASION_TAR_OBJ& t_tar_obj_r_st,NRA_INFO_ST& t_nra_info_st, VEHSTATE_ST& vsi_vehState_st,uint8_t& t_drivngManeuver);
	void DrawObj_Calc_v(Mat img,FUSION_OBJ_OUTPUT_ST & t_fus_obj_st, OBJECT_LIST_BY_BC_CHECK& t_obj_list_by_bc_check_st, HWA_TAR_OBJ_ST& t_hwa_tar_obj_st, TOS_OBJ_PROB_WITHIN_LANE& t_tos_obj_within_lane_st, PROB_EGO_VEHICLE_WITHIN_LANE_ST& t_probEgoVehicleWithinLane_st,TRUCK_EVASION_TAR_OBJ& t_tar_obj_l_st, TRUCK_EVASION_TAR_OBJ& t_tar_obj_r_st);
	void DrawRawLane_Calc_v(Mat img_vision_lane,FUSION_LANE_OUTPUT_ST& t_fus_lane_st);
	void DrawLaneModel_Calc_v(Mat img, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st);
	void DrawRoadEdge_Calc_v(Mat img, FUSION_ROADEDGE_OUTPUT_ST& fus_re_output_st, NRA_INFO_ST& t_nra_info_st);
	void BackGround_v(Mat img, float t_time,VEHSTATE_ST& t_vehState, uint8_t& t_drivngManeuver);
	~BIRDVIEW() {};
private:
	int m_windowsSize_in;
	float m_fov_f;
	float m_scale_f;
	float m_latScale_f;
	String m_name_s;
	void CoordTrans(Point2f& pt);
	void GetColor(COLOR t_color_en, Scalar& scalar);

};

#endif

