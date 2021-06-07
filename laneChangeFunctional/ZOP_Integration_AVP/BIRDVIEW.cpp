#include "BirdView.h"
//#include<opencv2/core/core.hpp>
//#include<opencv2/highgui/highgui.hpp>
#include<opencv2/core/core.hpp>
//#include<opencv2/highgui/highgui.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<cmath>
#include"Inputs.h"
#include"Outputs.h"
#include<sstream>
#include"TOSPp.h"
#include"LMCommonDefines.h"
#include"LMPp.h"
#include"DrivingManeuver.h"


using namespace cv;
using namespace std;




BIRDVIEW::BIRDVIEW():
    m_windowsSize_in(1000),
    m_fov_f(120 * 3.1415926 / 180),
    m_scale_f(4.0),
    m_latScale_f(15),
    m_name_s("BirdView_LM_TOS")
{

}
void BIRDVIEW::Calc_v(FUSION_OBJ_OUTPUT_ST& t_fus_obj_st,OBJECT_LIST_BY_BC_CHECK& t_obj_list_by_bc_check_st, FUSION_LANE_OUTPUT_ST& t_fus_lane_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, HWA_TAR_OBJ_ST& t_hwa_tar_obj_st, TOS_OBJ_PROB_WITHIN_LANE &t_tos_obj_within_lane_st, PROB_EGO_VEHICLE_WITHIN_LANE_ST& t_probEgoVehicleWithinLane_st, FUSION_ROADEDGE_OUTPUT_ST& fus_re_output_st,float t_time,TRUCK_EVASION_TAR_OBJ& t_tar_obj_l_st, TRUCK_EVASION_TAR_OBJ& t_tar_obj_r_st, NRA_INFO_ST& t_nra_info_st, VEHSTATE_ST& t_vehState, uint8_t& t_drivngManeuver)
{
    Mat img = Mat::zeros(Size(m_windowsSize_in, m_windowsSize_in), CV_8UC3); //建一个长宽500的黑色画布
    Mat img_vision_lane = Mat::zeros(Size(m_windowsSize_in, m_windowsSize_in), CV_8UC3); //建一个长宽500的黑色画布
    BackGround_v(img,t_time,t_vehState, t_drivngManeuver);
    DrawObj_Calc_v(img,t_fus_obj_st, t_obj_list_by_bc_check_st,t_hwa_tar_obj_st, t_tos_obj_within_lane_st,t_probEgoVehicleWithinLane_st, t_tar_obj_l_st, t_tar_obj_r_st);
    DrawRawLane_Calc_v(img_vision_lane, t_fus_lane_st);
    DrawLaneModel_Calc_v(img, t_lanemodel_output_st);
    DrawRoadEdge_Calc_v(img, fus_re_output_st, t_nra_info_st);

    imshow("Raw Vision Line", img_vision_lane);
    moveWindow("Raw Vision Line", 0, 0);
    waitKey(1);
    imshow(m_name_s, img);
    moveWindow("m_name_s", 1200, 0);
    waitKey(1);

}

void BIRDVIEW::CoordTrans(Point2f& pt)
{
    float t_x = -pt.y + float(m_windowsSize_in / 2.0);
    float t_y = -pt.x + float(m_windowsSize_in*0.67);

    pt.x = t_x;
    pt.y = t_y;
}

void BIRDVIEW::BackGround_v(Mat img, float t_time,VEHSTATE_ST& t_vehState, uint8_t& t_drivngManeuver)
{
    const int t_polygon = 4;
    Point2f points[1][t_polygon];
    float t_vehicle_width = GetEgoVehicleWidth_f();// 2.0;
    float t_vehicle_length = GetEgoVehicleFrontBumper_f()+ GetEgoVehicleRearBumper_f(); //4.5;
    Point2f pt_orin(float(0.0), float(0.0));
    Point2f pt_end_l(float(m_windowsSize_in / 2.0) / tanf(m_fov_f / 2), float(m_windowsSize_in / 2.0));
    Point2f pt_end_r(float(m_windowsSize_in / 2.0) / tanf(m_fov_f / 2),-float(m_windowsSize_in / 2.0));
    CoordTrans(pt_orin);
    CoordTrans(pt_end_l);
    CoordTrans(pt_end_r);
    Scalar scalar(0, 0, 0), scalar1(0,0,0);
    GetColor(COLOR::BLUE, scalar);
    GetColor(COLOR::BLUE, scalar1);
    line(img, pt_orin, pt_end_l, scalar, 1,LINE_AA);
    line(img, pt_orin, pt_end_r, scalar,1, LINE_AA);
    Point2f t_veh_shp_p1(0.0, -t_vehicle_width / 2 * m_latScale_f);//m_scale_f);
    Point2f t_veh_shp_p2(t_vehicle_length * m_scale_f, t_vehicle_width / 2 * m_latScale_f);// m_scale_f);
    CoordTrans(t_veh_shp_p1);
    CoordTrans(t_veh_shp_p2);
    GetColor(COLOR::YELLOW, scalar);
    rectangle(img, t_veh_shp_p1, t_veh_shp_p2, scalar, FILLED, LINE_8); //画方形

    Point2f t_Point0(0,0);
    t_Point0.x = t_vehicle_length * m_scale_f-52;
    t_Point0.y = 0;
    String t_vx_s("vx="), t_ax_s("ax="),str11;
    std::ostringstream oss;
    oss << t_vehState.aRef;
    str11 = oss.str();
    oss.str("");
    t_ax_s += str11;
    CoordTrans(t_Point0);
    putText(img, t_ax_s, t_Point0, FONT_HERSHEY_PLAIN, 1, scalar, 1, FILLED);

    t_Point0.x = t_vehicle_length * m_scale_f -40;
    t_Point0.y = 0;
    oss << t_vehState.vRef;
    str11 = oss.str();
    oss.str("");
    t_vx_s += str11;
    CoordTrans(t_Point0);
    putText(img, t_vx_s, t_Point0, FONT_HERSHEY_PLAIN, 1, scalar, 1, FILLED);



    Point2f t_obj_pt1(0.0, 0.0);
    Scalar t_scalar(0, 0, 0);
    GetColor(COLOR::WHITE, t_scalar);
    t_obj_pt1.x = -80* m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    String x_str("-80"), t_timeDisp("");
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = -60 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = ("-60");
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = -40 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = ("-40");
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = -20 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = ("-20");
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = -0 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = ("0");
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = 20 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = "20";
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = 40 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = "40";
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = 60 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = "60";
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = 80 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = "80";
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = 100 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = "100";
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = 120 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = "120";
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    GetColor(COLOR::LIGHT_GREEN, t_scalar);
    t_obj_pt1.x = 140 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.3;
    CoordTrans(t_obj_pt1);
    //std::ostringstream oss;
    oss.str("");
    oss << t_time;
    x_str = oss.str();
    t_timeDisp += x_str;
    putText(img, t_timeDisp, t_obj_pt1, FONT_HERSHEY_PLAIN, 2, t_scalar, 1, FILLED);

    // display driving maneuver
    String t_DM("DM = ");
    GetColor(COLOR::LIGHT_GREEN, t_scalar);
    t_obj_pt1.x = 140 * m_scale_f + 66;
    t_obj_pt1.y = m_windowsSize_in / 2.3;
    CoordTrans(t_obj_pt1);
    if (DM_STRAIGHT == t_drivngManeuver)
    {
        x_str = "Driving Straight";
    }
    else if (DM_LEFTLANECHANGE == t_drivngManeuver)
    {
        x_str = "Left Lane Change";
    }
    else if (DM_RIGHTLANECHANGE == t_drivngManeuver)
    {
        x_str = "Right Lane Change";
    }
    else if (DM_TURN_LEFT == t_drivngManeuver)
    {
        x_str = "Turn Left";
    }
    else if (DM_TURN_RIGHT == t_drivngManeuver)
    {
        x_str = "Turn Right";
    }
    else
    {
        x_str = "unknown";//nothing
    }
    //std::ostringstream oss;
    //oss.str("");
    //oss << t_time;
    //x_str = oss.str();
    t_DM += x_str;
    putText(img, t_DM, t_obj_pt1, FONT_HERSHEY_PLAIN, 2, t_scalar, 1, FILLED);

    //imshow(m_name_s, img);
    //waitKey(2);
}
void BIRDVIEW::DrawObj_Calc_v(Mat img,FUSION_OBJ_OUTPUT_ST& t_fus_obj_st, OBJECT_LIST_BY_BC_CHECK& t_obj_list_by_bc_check_st, HWA_TAR_OBJ_ST& t_hwa_tar_obj_st, TOS_OBJ_PROB_WITHIN_LANE& t_tos_obj_within_lane_st, PROB_EGO_VEHICLE_WITHIN_LANE_ST& t_probEgoVehicleWithinLane_st, TRUCK_EVASION_TAR_OBJ& t_tar_obj_l_st, TRUCK_EVASION_TAR_OBJ& t_tar_obj_r_st)
{
    for (uint8_t t_i = 0; t_i < FUS_MAX_OBJ_NUM; t_i++)
    {
        Point2f t_obj_pt1(0.0, 0.0), t_obj_pt2(0.0, 0.0);
        Scalar t_scalar(0, 0, 0), t_scalar_1(0, 0, 0);
        if (true == t_fus_obj_st.objects[t_i].obj_information.valid)
        {
            t_obj_pt1.x = m_scale_f * (t_fus_obj_st.objects[t_i].obj_estimate.longPosition + t_fus_obj_st.objects[t_i].obj_information.length);
            t_obj_pt1.y = m_latScale_f * (t_fus_obj_st.objects[t_i].obj_estimate.latPosition + 0.5 * t_fus_obj_st.objects[t_i].obj_information.width);
            t_obj_pt2.x = m_scale_f * (t_fus_obj_st.objects[t_i].obj_estimate.longPosition);
            t_obj_pt2.y = m_latScale_f * (t_fus_obj_st.objects[t_i].obj_estimate.latPosition - 0.5 * t_fus_obj_st.objects[t_i].obj_information.width);
            CoordTrans(t_obj_pt1);
            CoordTrans(t_obj_pt2);
            if (true == t_obj_list_by_bc_check_st.valid_b[t_i])
            {
                if (
                    (t_i == t_hwa_tar_obj_st.m_EgoLane_TarObj_st[0].Index_un8)
                    || (t_i == t_hwa_tar_obj_st.m_EgoLane_TarObj_st[1].Index_un8)
                    || (t_i == t_hwa_tar_obj_st.m_EgoLane_TarObj_st[2].Index_un8)
                    || (t_i == t_hwa_tar_obj_st.m_EgoLane_TarObj_st[3].Index_un8)
                    || (t_i == t_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[0].Index_un8)
                    || (t_i == t_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[1].Index_un8)
                    || (t_i == t_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[2].Index_un8)
                    || (t_i == t_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[3].Index_un8)
                    || (t_i == t_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[0].Index_un8)
                    || (t_i == t_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[1].Index_un8)
                    || (t_i == t_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[2].Index_un8)
                    || (t_i == t_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[3].Index_un8)
                    )
                {
                    GetColor(COLOR::DARK_PURPLE, t_scalar);
                }
                else if ((uint8_t(CLASS_UNKNOWN) != t_fus_obj_st.objects[t_i].obj_information.type) &&
                    ((RADARVISIONFUSION == t_fus_obj_st.objects[t_i].obj_property.fusionSource) ||
                        (VISIONONLY == t_fus_obj_st.objects[t_i].obj_property.fusionSource))
                    )
                {
                    GetColor(COLOR::GREEN, t_scalar);
                    if (((true == t_tar_obj_l_st.available_b) && (t_i == t_tar_obj_l_st.index)) ||
                        ((true == t_tar_obj_r_st.available_b) && (t_i == t_tar_obj_r_st.index))
                        )
                    {
                        GetColor(COLOR::SKY_BLUE, t_scalar);
                    }
                }
                //else if (((uint8_t(OBJ_TYPE::UNKNOWN) != t_fus_obj_st.objects[t_i].obj_information.type)
                //    //||(uint8_t(OBJ_TYPE::UNCERTAIN_VEHICLE) == t_fus_obj_st.objects[t_i].obj_information.type)
                //    )&&
                //    ((RADARVISIONFUSION == t_fus_obj_st.objects[t_i].obj_property.fusionSource))
                //    )
                //{
                //    GetColor(COLOR::GREEN, t_scalar);
                //}
                else
                {
                    GetColor(COLOR::WHITE, t_scalar);
                }
            }
            else
            {
                GetColor(COLOR::RED, t_scalar);
            }
            rectangle(img, t_obj_pt1, t_obj_pt2, t_scalar, FILLED, LINE_8); //画方形

            float t_cutIn = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probCutIn_f;
            float t_cutOut = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probCutOut_f;
            float t_Plane0 = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[0];
            float t_Plane1 = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[1];
            float t_Plane2 = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[2];
            float t_Plane3 = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[3];
            float t_Plane4 = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[4];
            float t_laneId = t_tos_obj_within_lane_st.m_withinLaneId[t_i];
            uint8_t t_type_un8 = t_fus_obj_st.objects[t_i].obj_information.type;
            Point2f t_Point0 = t_obj_pt1;
            t_Point0.x += 5;
            std::string str11;
            GetColor(COLOR::RED, t_scalar_1);
            if (t_cutIn > 1.1)
            {
                t_cutIn = 0;
            }
            else
            {
                t_cutIn = float(int(t_cutIn * 1000)/1000.0);
            }
            if (t_cutOut > 1.1)
            {
                t_cutOut = 0;
            }
            else
            {
                t_cutOut = float(int(t_cutOut * 1000) / 1000.0);
            }
            if (t_Plane0 > 1.1)
            {
                t_Plane0 = 0;
            }
            else
            {
                t_Plane0 = float(int(t_Plane0 * 1000) / 1000.0);
            }

            if (t_Plane1 > 1.1)
            {
                t_Plane1 = 0;
            }
            else
            {
                t_Plane1 = float(int(t_Plane1 * 1000) / 1000.0);
            }
            if (t_Plane2 > 1.1)
            {
                t_Plane2 = 0;
            }
            else
            {
                t_Plane2 = float(int(t_Plane2 * 1000) / 1000.0);
            }
            if (t_Plane3 > 1.1)
            {
                t_Plane3 = 0;
            }
            else
            {
                t_Plane3 = float(int(t_Plane3 * 1000) / 1000.0);
            }
            if (t_Plane4 > 1.1)
            {
                t_Plane4 = 0;
            }
            else
            {
                t_Plane4 = float(int(t_Plane4 * 1000) / 1000.0);
            }




            String t_cutIn_s("CI="),t_cutOut_s("CO="), t_Plane0_s("L0="), t_Plane1_s("L1="), t_Plane2_s("L2="), t_Plane3_s("L3="), t_Plane4_s("L4="), t_laneId_s("LId="),t_type_s("tp=");
            std::ostringstream oss;
            if (t_cutIn > FLOAT_EPSILON)
            {
                oss << t_cutIn;
                str11 = oss.str();
                oss.str("");
                t_cutIn_s += str11;
                putText(img, t_cutIn_s, t_Point0, FONT_HERSHEY_PLAIN, 1, t_scalar_1, 1, FILLED);
            }
            
            if (t_cutOut >= FLOAT_EPSILON)
            {
                oss.str("");
                oss << t_cutOut;
                //std::string str11(oss.str());
                str11 = oss.str();
                t_cutOut_s += str11;
                t_Point0.y += 12;
                putText(img, t_cutOut_s, t_Point0, FONT_HERSHEY_PLAIN, 1, t_scalar_1, 1, FILLED);
            }
            
            if (t_Plane1 >= FLOAT_EPSILON)
            {
                oss.str("");
                oss << t_Plane1;
                //std::string str11(oss.str());
                str11 = oss.str();
                t_Plane1_s += str11;
                t_Point0.y += 12;
                putText(img, t_Plane1_s, t_Point0, FONT_HERSHEY_PLAIN, 1, t_scalar_1, 1, FILLED);
            }

            if (t_Plane2 >= FLOAT_EPSILON)
            {
                oss.str("");
                oss << t_Plane2;
                //std::string str11(oss.str());
                str11 = oss.str();
                t_Plane2_s += str11;
                t_Point0.y += 12;
                putText(img, t_Plane2_s, t_Point0, FONT_HERSHEY_PLAIN, 1, t_scalar_1, 1, FILLED);
            }

            if (t_Plane3 >= FLOAT_EPSILON)
            {
                oss.str("");
                oss << t_Plane3;
                //std::string str11(oss.str());
                str11 = oss.str();
                t_Plane3_s += str11;
                t_Point0.y += 12;
                putText(img, t_Plane3_s, t_Point0, FONT_HERSHEY_PLAIN, 1, t_scalar_1, 1, FILLED);
            }
            
            if (t_laneId <= RIGHT_RIGHT_LANE)
            {
                oss.str("");
                oss << t_laneId;
                //std::string str11(oss.str());
                str11 = oss.str();
                t_laneId_s += str11;
                t_Point0.y += 12;
                putText(img, t_laneId_s, t_Point0, FONT_HERSHEY_PLAIN, 1, t_scalar_1, 1, FILLED);
            }
            

            oss.str("");
            oss << float(t_type_un8);
            //std::string str11(oss.str());
            str11 = oss.str();
            t_type_s += str11;

            oss.str("");
            oss << float(t_i);
            //std::string str11(oss.str());
            str11 = oss.str();
            t_type_s = t_type_s + "+" + str11;

            
            t_Point0.y += 12;
            putText(img, t_type_s, t_Point0, FONT_HERSHEY_PLAIN, 1, t_scalar_1, 1, FILLED);


            ///*int fontFace = FONT_HERSHEY_SIMPLEX;
            //double fontScale = 2;
            //int thickness = 3;*/
            //Point2f pt(0.0, 0.0);
            //putText(img, text, pt, FONT_HERSHEY_SCRIPT_SIMPLEX, 2.0, t_scalar, FILLED, LINE_8);
            //Scalar(0, 0, 255)(img, "Hello ", t_obj_pt1, FONT_HERSHEY_SIMPLEX, 2, t_scalar, 4, 8)

        }
    }


}
void BIRDVIEW::DrawRawLane_Calc_v(Mat img_vision_lane, FUSION_LANE_OUTPUT_ST& t_fus_lane_st)
{
    Scalar t_scalar(255, 128, 0);
    GetColor(COLOR::GREEN, t_scalar);
    uint8_t t_gap = 2;
    uint8_t t_count = 0;
    Point2f pt_start(0.0, 0.0), pt_end(0.0, 0.0), t_tem(0.0, 0.0), t_pt_start(0.0, 0.0), t_pt_end(0.0, 0.0);
    //************************************************************************LL_LINE**************************************************************
    if ((MEASUREMENT == t_fus_lane_st.leftNeighborLane.traceStatus) ||
        (PREDICTED == t_fus_lane_st.leftNeighborLane.traceStatus)||
        (VISION_LINE_MIDDLE_HIGH <= t_fus_lane_st.leftNeighborLane.quality)
        )
    {
        t_count = uint8_t((t_fus_lane_st.leftNeighborLane.curFunction.longDistanceToend - 0) / t_gap);
        t_tem.x = 0;
        t_tem.y = t_fus_lane_st.leftNeighborLane.curFunction.latDistanceZeroOrderCoeff;
        for (uint8_t t_i = 1; t_i <= t_count; t_i++)
        {
            pt_start.x = t_tem.x;
            pt_start.y = t_tem.y;
            pt_end.x = pt_start.x + t_gap;
            pt_end.y = (t_fus_lane_st.leftNeighborLane.curFunction.latDistanceZeroOrderCoeff +
                t_fus_lane_st.leftNeighborLane.curFunction.latDistanceFirstOrderCoeff * pt_end.x +
                t_fus_lane_st.leftNeighborLane.curFunction.latDistanceSecondOrderCoeff * pt_end.x * pt_end.x +
                t_fus_lane_st.leftNeighborLane.curFunction.latDistanceThirdOrderCoeff * pt_end.x * pt_end.x * pt_end.x);

            t_tem.x = pt_end.x;
            t_tem.y = pt_end.y;

            t_pt_start.x = pt_start.x;
            t_pt_start.y = pt_start.y;
            t_pt_end.x = pt_end.x;
            t_pt_end.y = pt_end.y;
            t_pt_start.x = m_scale_f * t_pt_start.x;
            t_pt_start.y = m_latScale_f * t_pt_start.y;
            t_pt_end.x = m_scale_f * t_pt_end.x;
            t_pt_end.y = m_latScale_f * t_pt_end.y;
            CoordTrans(t_pt_start);
            CoordTrans(t_pt_end);
            line(img_vision_lane, t_pt_start, t_pt_end, t_scalar); //画线
        }
    }
    //************************************************************************L_LINE**************************************************************
    if ((MEASUREMENT == t_fus_lane_st.leftHostLane.traceStatus) ||
        (PREDICTED == t_fus_lane_st.leftHostLane.traceStatus)||
        (VISION_LINE_MIDDLE_HIGH <= t_fus_lane_st.leftHostLane.quality))
    {
        GetColor(COLOR::RED, t_scalar);
        t_count = uint8_t((t_fus_lane_st.leftHostLane.curFunction.longDistanceToend - 0) / t_gap);
        t_tem.x = 0;
        t_tem.y = t_fus_lane_st.leftHostLane.curFunction.latDistanceZeroOrderCoeff;
        for (uint8_t t_i = 0; t_i < t_count; t_i++)
        {
            pt_start.x = t_tem.x;
            pt_start.y = t_tem.y;
            pt_end.x = pt_start.x + t_gap;
            pt_end.y = (t_fus_lane_st.leftHostLane.curFunction.latDistanceZeroOrderCoeff +
                t_fus_lane_st.leftHostLane.curFunction.latDistanceFirstOrderCoeff * pt_end.x +
                t_fus_lane_st.leftHostLane.curFunction.latDistanceSecondOrderCoeff * pt_end.x * pt_end.x +
                t_fus_lane_st.leftHostLane.curFunction.latDistanceThirdOrderCoeff * pt_end.x * pt_end.x * pt_end.x);

            t_tem.x = pt_end.x;
            t_tem.y = pt_end.y;


            t_pt_start.x = pt_start.x;
            t_pt_start.y = pt_start.y;
            t_pt_end.x = pt_end.x;
            t_pt_end.y = pt_end.y;
            t_pt_start.x = m_scale_f * t_pt_start.x;
            t_pt_start.y = m_latScale_f * t_pt_start.y;
            t_pt_end.x = m_scale_f * t_pt_end.x;
            t_pt_end.y = m_latScale_f * t_pt_end.y;
            CoordTrans(t_pt_start);
            CoordTrans(t_pt_end);
            line(img_vision_lane, t_pt_start, t_pt_end, t_scalar); //画线
        }
        //************************************************************************R_LINE**************************************************************
        if ((MEASUREMENT == t_fus_lane_st.rightHostLane.traceStatus) ||
            (PREDICTED == t_fus_lane_st.rightHostLane.traceStatus) ||
            (VISION_LINE_MIDDLE_HIGH <= t_fus_lane_st.rightHostLane.quality))
        {
            GetColor(COLOR::YELLOW, t_scalar);
            t_count = uint8_t((t_fus_lane_st.rightHostLane.curFunction.longDistanceToend - 0) / t_gap);
            t_tem.x = 0;
            t_tem.y = t_fus_lane_st.rightHostLane.curFunction.latDistanceZeroOrderCoeff;
            for (uint8_t t_i = 0; t_i < t_count; t_i++)
            {
                pt_start.x = t_tem.x;
                pt_start.y = t_tem.y;
                pt_end.x = pt_start.x + t_gap;
                pt_end.y = (t_fus_lane_st.rightHostLane.curFunction.latDistanceZeroOrderCoeff +
                    t_fus_lane_st.rightHostLane.curFunction.latDistanceFirstOrderCoeff * pt_end.x +
                    t_fus_lane_st.rightHostLane.curFunction.latDistanceSecondOrderCoeff * pt_end.x * pt_end.x +
                    t_fus_lane_st.rightHostLane.curFunction.latDistanceThirdOrderCoeff * pt_end.x * pt_end.x * pt_end.x);

                t_tem.x = pt_end.x;
                t_tem.y = pt_end.y;


                t_pt_start.x = pt_start.x;
                t_pt_start.y = pt_start.y;
                t_pt_end.x = pt_end.x;
                t_pt_end.y = pt_end.y;
                t_pt_start.x = m_scale_f * t_pt_start.x;
                t_pt_start.y = m_latScale_f * t_pt_start.y;
                t_pt_end.x = m_scale_f * t_pt_end.x;
                t_pt_end.y = m_latScale_f * t_pt_end.y;
                CoordTrans(t_pt_start);
                CoordTrans(t_pt_end);
                line(img_vision_lane, t_pt_start, t_pt_end, t_scalar); //画线
            }
        }
        //************************************************************************RR_LINE**************************************************************
        if ((MEASUREMENT == t_fus_lane_st.rightNeighborLane.traceStatus) ||
            (PREDICTED == t_fus_lane_st.rightNeighborLane.traceStatus) ||
            (VISION_LINE_MIDDLE_HIGH <= t_fus_lane_st.rightNeighborLane.quality))
        {
            t_count = uint8_t((t_fus_lane_st.rightNeighborLane.curFunction.longDistanceToend - 0) / t_gap);
            t_tem.x = 0;
            t_tem.y = t_fus_lane_st.rightNeighborLane.curFunction.latDistanceZeroOrderCoeff;
            for (uint8_t t_i = 0; t_i < t_count; t_i++)
            {
                pt_start.x = t_tem.x;
                pt_start.y = t_tem.y;
                pt_end.x = pt_start.x + t_gap;
                pt_end.y = (t_fus_lane_st.rightNeighborLane.curFunction.latDistanceZeroOrderCoeff +
                    t_fus_lane_st.rightNeighborLane.curFunction.latDistanceFirstOrderCoeff * pt_end.x +
                    t_fus_lane_st.rightNeighborLane.curFunction.latDistanceSecondOrderCoeff * pt_end.x * pt_end.x +
                    t_fus_lane_st.rightNeighborLane.curFunction.latDistanceThirdOrderCoeff * pt_end.x * pt_end.x * pt_end.x);

                t_tem.x = pt_end.x;
                t_tem.y = pt_end.y;

                t_pt_start.x = pt_start.x;
                t_pt_start.y = pt_start.y;
                t_pt_end.x = pt_end.x;
                t_pt_end.y = pt_end.y;
                t_pt_start.x = m_scale_f * t_pt_start.x;
                t_pt_start.y = m_latScale_f * t_pt_start.y;
                t_pt_end.x = m_scale_f * t_pt_end.x;
                t_pt_end.y = m_latScale_f * t_pt_end.y;
                CoordTrans(t_pt_start);
                CoordTrans(t_pt_end);
                line(img_vision_lane, t_pt_start, t_pt_end, t_scalar); //画线
            }
        }


    }
    float t_vehicle_width = GetEgoVehicleWidth_f();// 2.0;
    float t_vehicle_length = GetEgoVehicleFrontBumper_f() + GetEgoVehicleRearBumper_f(); //4.5;
    Point2f t_veh_shp_p1(0.0, -t_vehicle_width / 2 * m_latScale_f);//m_scale_f);
    Point2f t_veh_shp_p2(t_vehicle_length* m_scale_f, t_vehicle_width / 2 * m_latScale_f);// m_scale_f);
    CoordTrans(t_veh_shp_p1);
    CoordTrans(t_veh_shp_p2);
    GetColor(COLOR::YELLOW, t_scalar);
    rectangle(img_vision_lane, t_veh_shp_p1, t_veh_shp_p2, t_scalar, FILLED, LINE_8); //画方形

    
    Point2f t_Point0(0, 0);
    String str11,LL_Line("LL_Line="), L_Line("L_Line="), R_Line("R_Line="), RR_Line("RR_Line=");
    std::ostringstream oss;
    oss.str("");
    oss << float(t_fus_lane_st.leftNeighborLane.quality);
    str11 = oss.str();
    LL_Line += str11;
    oss.str("");
    oss << float(t_fus_lane_st.leftNeighborLane.traceStatus);
    str11 = oss.str();
    LL_Line = LL_Line + "+" + str11;
    oss.str("");
    oss << t_fus_lane_st.leftNeighborLane.curFunction.latDistanceZeroOrderCoeff;
    str11 = oss.str();
    LL_Line = LL_Line + "+" + str11;
    oss.str("");
    oss << t_fus_lane_st.leftNeighborLane.curFunction.latDistanceFirstOrderCoeff;
    str11 = oss.str();
    LL_Line = LL_Line + "+" + str11;
    oss.str("");
    oss << t_fus_lane_st.leftNeighborLane.curFunction.latDistanceSecondOrderCoeff;
    str11 = oss.str();
    LL_Line = LL_Line + "+" + str11;
    oss.str("");
    oss << t_fus_lane_st.leftNeighborLane.curFunction.latDistanceThirdOrderCoeff;
    str11 = oss.str();
    LL_Line = LL_Line + "+" + str11;
    t_Point0.x = m_windowsSize_in / 2 + 30;;// m_scale_f* m_windowsSize_in / 2 + 30;
    t_Point0.y = m_windowsSize_in / 2.2;
    CoordTrans(t_Point0);
    GetColor(COLOR::GREEN, t_scalar);
    putText(img_vision_lane, LL_Line, t_Point0, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    oss.str("");
    oss << float(t_fus_lane_st.leftHostLane.quality);
    str11 = oss.str();
    L_Line += str11;
    oss.str("");
    oss << float(t_fus_lane_st.leftHostLane.traceStatus);
    str11 = oss.str();
    L_Line = L_Line + "+" + str11;
    oss.str("");
    oss << t_fus_lane_st.leftHostLane.curFunction.latDistanceZeroOrderCoeff;
    str11 = oss.str();
    L_Line = L_Line + "+" + str11;
    oss.str("");
    oss << t_fus_lane_st.leftHostLane.curFunction.latDistanceFirstOrderCoeff;
    str11 = oss.str();
    L_Line = L_Line + "+" + str11;
    oss.str("");
    oss << t_fus_lane_st.leftHostLane.curFunction.latDistanceSecondOrderCoeff;
    str11 = oss.str();
    L_Line = L_Line + "+" + str11;
    oss.str("");
    oss << t_fus_lane_st.leftHostLane.curFunction.latDistanceThirdOrderCoeff;
    str11 = oss.str();
    L_Line = L_Line + "+" + str11;
    t_Point0.x = m_windowsSize_in / 2 + 15;;// m_scale_f* m_windowsSize_in / 2 + 30;
    t_Point0.y = m_windowsSize_in / 2.2;
    CoordTrans(t_Point0);
    GetColor(COLOR::GREEN, t_scalar);
    putText(img_vision_lane, L_Line, t_Point0, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    oss.str("");
    oss << float(t_fus_lane_st.rightHostLane.quality);
    str11 = oss.str();
    R_Line += str11;
    oss.str("");
    oss << float(t_fus_lane_st.rightHostLane.traceStatus);
    str11 = oss.str();
    R_Line = R_Line + "+" + str11;
    oss.str("");
    oss << t_fus_lane_st.rightHostLane.curFunction.latDistanceZeroOrderCoeff;
    str11 = oss.str();
    R_Line = R_Line + "+" + str11;
    oss.str("");
    oss << t_fus_lane_st.rightHostLane.curFunction.latDistanceFirstOrderCoeff;
    str11 = oss.str();
    R_Line = R_Line + "+" + str11;
    oss.str("");
    oss << t_fus_lane_st.rightHostLane.curFunction.latDistanceSecondOrderCoeff;
    str11 = oss.str();
    R_Line = R_Line + "+" + str11;
    oss.str("");
    oss << t_fus_lane_st.rightHostLane.curFunction.latDistanceThirdOrderCoeff;
    str11 = oss.str();
    R_Line = R_Line + "+" + str11;
    t_Point0.x = m_windowsSize_in / 2 ;;// m_scale_f* m_windowsSize_in / 2 + 30;
    t_Point0.y = m_windowsSize_in / 2.2;// m_latScale_f* m_windowsSize_in / 2;
    CoordTrans(t_Point0);
    GetColor(COLOR::GREEN, t_scalar);
    putText(img_vision_lane, R_Line, t_Point0, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    oss.str("");
    oss << float(t_fus_lane_st.rightNeighborLane.quality);
    str11 = oss.str();
    RR_Line += str11;
    oss.str("");
    oss << float(t_fus_lane_st.rightNeighborLane.traceStatus);
    str11 = oss.str();
    RR_Line = RR_Line + "+" + str11;
    oss.str("");
    oss << t_fus_lane_st.rightNeighborLane.curFunction.latDistanceZeroOrderCoeff;
    str11 = oss.str();
    RR_Line = RR_Line + "+" + str11;
    oss.str("");
    oss << t_fus_lane_st.rightNeighborLane.curFunction.latDistanceFirstOrderCoeff;
    str11 = oss.str();
    RR_Line = RR_Line + "+" + str11;
    oss.str("");
    oss << t_fus_lane_st.rightNeighborLane.curFunction.latDistanceSecondOrderCoeff;
    str11 = oss.str();
    RR_Line = RR_Line + "+" + str11;
    oss.str("");
    oss << t_fus_lane_st.rightNeighborLane.curFunction.latDistanceThirdOrderCoeff;
    str11 = oss.str();
    RR_Line = RR_Line + "+" + str11;
    t_Point0.x = m_windowsSize_in / 2 - 15;;// m_scale_f* m_windowsSize_in / 2 + 30;
    t_Point0.y = m_windowsSize_in / 2.2;
    CoordTrans(t_Point0);
    GetColor(COLOR::GREEN, t_scalar);
    putText(img_vision_lane, RR_Line, t_Point0, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

}
void BIRDVIEW::DrawLaneModel_Calc_v(Mat img, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st)
{
    Scalar t_scalar(255, 128, 0);
    GetColor(COLOR::GREEN, t_scalar);
    uint8_t t_lane_i,t_lastValidLane = MAX_UN8;
    for (t_lane_i = 0; t_lane_i < LM_MAX_NUMBER_OF_LANES; t_lane_i++)
    {
        if ((true == t_lanemodel_output_st.lanes_st[t_lane_i].available_b))
        {
            uint8_t t_gap = 2;
            uint8_t t_count = 0;
            Point2f pt_start(0.0, 0.0), pt_end(0.0, 0.0), t_tem(0.0, 0.0), t_pt_start(0.0, 0.0), t_pt_end(0.0, 0.0);
            t_lastValidLane = t_lane_i;
            for (uint8_t t_segment = 0; t_segment < TOTAL_SEGMENT_NUM; t_segment++)
            {
                if (true == t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].available_b)
                {
                    t_count = uint8_t((t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].dupperLimit_f - t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].dlowerLimit_f) / t_gap);
                    t_tem.x = t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].dlowerLimit_f;
                    t_tem.y = (t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].coef_arr_f[0] + 
                        t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].coef_arr_f[1]* t_tem.x + 
                        t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].coef_arr_f[2] * t_tem.x* t_tem.x +
                        t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].coef_arr_f[3] * t_tem.x* t_tem.x* t_tem.x);
                    for (uint8_t t_i = 0; t_i < t_count; t_i++)
                    {
                        pt_start.x = t_tem.x;
                        pt_start.y = t_tem.y;
                        pt_end.x = pt_start.x + t_gap;
                        pt_end.y = (t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].coef_arr_f[0] +
                            t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].coef_arr_f[1] * pt_end.x +
                            t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].coef_arr_f[2] * pt_end.x * pt_end.x +
                            t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].coef_arr_f[3] * pt_end.x * pt_end.x * pt_end.x);

                        t_tem.x = pt_end.x;
                        t_tem.y = pt_end.y;

                        t_pt_start.x = pt_start.x;
                        t_pt_start.y = pt_start.y;
                        t_pt_end.x = pt_end.x;
                        t_pt_end.y = pt_end.y;
                        t_pt_start.x = m_scale_f * t_pt_start.x;
                        t_pt_start.y = m_latScale_f * t_pt_start.y;
                        t_pt_end.x = m_scale_f * t_pt_end.x;
                        t_pt_end.y = m_latScale_f * t_pt_end.y;
                         CoordTrans(t_pt_start);
                        CoordTrans(t_pt_end);
                        line(img, t_pt_start, t_pt_end, t_scalar); //画线
                    }
                }
            }
            
        }
        
    }
    
    if (t_lastValidLane < MAX_UN8)
    {
        uint8_t t_gap = 2;
        uint8_t t_count = 0;
        Point2f pt_start(0.0, 0.0), pt_end(0.0, 0.0), t_tem(0.0, 0.0), t_pt_start(0.0, 0.0), t_pt_end(0.0, 0.0);
        t_lane_i = t_lastValidLane;
        for (uint8_t t_segment = 0; t_segment < TOTAL_SEGMENT_NUM; t_segment++)
        {
            if (true == t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].available_b)
            {
                t_count = uint8_t((t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].dupperLimit_f - t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].dlowerLimit_f) / t_gap);
                t_tem.x = t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].dlowerLimit_f;
                t_tem.y = (t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].coef_arr_f[0] - t_lanemodel_output_st.lanes_st[t_lane_i].lane_dwidth_f +
                    t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].coef_arr_f[1] * t_tem.x +
                    t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].coef_arr_f[2] * t_tem.x * t_tem.x +
                    t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].coef_arr_f[3] * t_tem.x * t_tem.x * t_tem.x);
                for (uint8_t t_i = 0; t_i < t_count; t_i++)
                {
                    pt_start.x = t_tem.x;
                    pt_start.y = t_tem.y;
                    pt_end.x = pt_start.x + t_gap;
                    pt_end.y = (t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].coef_arr_f[0] - t_lanemodel_output_st.lanes_st[t_lane_i].lane_dwidth_f +
                        t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].coef_arr_f[1] * pt_end.x +
                        t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].coef_arr_f[2] * pt_end.x * pt_end.x +
                        t_lanemodel_output_st.lanes_st[t_lane_i].segments_st[t_segment].coef_arr_f[3] * pt_end.x * pt_end.x * pt_end.x);

                    t_tem.x = pt_end.x;
                    t_tem.y = pt_end.y;

                    t_pt_start.x = pt_start.x;
                    t_pt_start.y = pt_start.y;
                    t_pt_end.x = pt_end.x;
                    t_pt_end.y = pt_end.y;
                    t_pt_start.x = m_scale_f * t_pt_start.x;
                    t_pt_start.y = m_latScale_f * t_pt_start.y;
                    t_pt_end.x = m_scale_f * t_pt_end.x;
                    t_pt_end.y = m_latScale_f * t_pt_end.y;
                    CoordTrans(t_pt_start);
                    CoordTrans(t_pt_end);
                    line(img, t_pt_start, t_pt_end, t_scalar); //画线
                }
            }
        }
    }

    Point2f t_obj_pt1(0.0, 0.0);
    GetColor(COLOR::WHITE, t_scalar);
    t_obj_pt1.x = -80 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    String x_str("-80"), t_timeDisp("");
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = -60 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = ("-60");
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = -40 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = ("-40");
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = -20 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = ("-20");
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = -0 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = ("0");
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = 20 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = "20";
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = 40 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = "40";
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = 60 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = "60";
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = 80 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = "80";
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = 100 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = "100";
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

    t_obj_pt1.x = 120 * m_scale_f;
    t_obj_pt1.y = m_windowsSize_in / 2.02;
    CoordTrans(t_obj_pt1);
    x_str = "120";
    putText(img, x_str, t_obj_pt1, FONT_HERSHEY_PLAIN, 1, t_scalar, 1, FILLED);

}

void BIRDVIEW::DrawRoadEdge_Calc_v(Mat img,FUSION_ROADEDGE_OUTPUT_ST& t_fus_re_output_st, NRA_INFO_ST& t_nra_info_st)
{
    //road edge
    Scalar t_scalar(255, 128, 0);
    GetColor(COLOR::RED, t_scalar);
    uint8_t t_lane_i, t_lastValidLane = MAX_UN8;
    uint8_t t_gap = 5;
    Point2f pt_start(0.0, 0.0), pt_end(0.0, 0.0), t_tem(0.0, 0.0), t_pt_start(0.0, 0.0), t_pt_end(0.0, 0.0);
    int t_count = 0;
    if ((MEASUREMENT == t_fus_re_output_st.leftRoadEdge.traceStatus) ||
        (PREDICTED == t_fus_re_output_st.leftRoadEdge.traceStatus) ||
        (VISION_LINE_MIDDLE_HIGH <= t_fus_re_output_st.leftRoadEdge.quality)
        )
    {
        t_count = t_fus_re_output_st.leftRoadEdge.curFunction.longDistanceToend / t_gap;
        // left
        if (true == t_nra_info_st.leftNRAActive_b)
        {
            GetColor(COLOR::YELLOW, t_scalar);
        }
        t_tem.x = 0;
        t_tem.y = t_fus_re_output_st.leftRoadEdge.curFunction.latDistanceZeroOrderCoeff;
        for (uint8_t t_i = 0; t_i < t_count; t_i++)
        {
            pt_start.x = t_tem.x;
            pt_start.y = t_tem.y;
            pt_end.x = pt_start.x + t_gap;
            pt_end.y = (t_fus_re_output_st.leftRoadEdge.curFunction.latDistanceZeroOrderCoeff +
                t_fus_re_output_st.leftRoadEdge.curFunction.latDistanceFirstOrderCoeff * pt_end.x +
                t_fus_re_output_st.leftRoadEdge.curFunction.latDistanceSecondOrderCoeff * pt_end.x * pt_end.x +
                t_fus_re_output_st.leftRoadEdge.curFunction.latDistanceThirdOrderCoeff * pt_end.x * pt_end.x * pt_end.x);

            t_tem.x = pt_end.x;
            t_tem.y = pt_end.y;

            t_pt_start.x = pt_start.x;
            t_pt_start.y = pt_start.y;
            t_pt_end.x = pt_end.x;
            t_pt_end.y = pt_end.y;
            t_pt_start.x = m_scale_f * t_pt_start.x;
            t_pt_start.y = m_latScale_f * t_pt_start.y;
            t_pt_end.x = m_scale_f * t_pt_end.x;
            t_pt_end.y = m_latScale_f * t_pt_end.y;
            CoordTrans(t_pt_start);
            CoordTrans(t_pt_end);
            line(img, t_pt_start, t_pt_end, t_scalar, 3); //画线
        }
    }
    
    if ((MEASUREMENT == t_fus_re_output_st.rightRoadEdge.traceStatus) ||
        (PREDICTED == t_fus_re_output_st.rightRoadEdge.traceStatus) ||
        (VISION_LINE_MIDDLE_HIGH <= t_fus_re_output_st.rightRoadEdge.quality)
        )
    {
        GetColor(COLOR::RED, t_scalar);
        // right
        if (true == t_nra_info_st.rightNRAActive_b)
        {
            GetColor(COLOR::YELLOW, t_scalar);
        }
        t_tem.x = 0;
        t_tem.y = t_fus_re_output_st.rightRoadEdge.curFunction.latDistanceZeroOrderCoeff;
        for (uint8_t t_i = 0; t_i < t_count; t_i++)
        {
            pt_start.x = t_tem.x;
            pt_start.y = t_tem.y;
            pt_end.x = pt_start.x + t_gap;
            pt_end.y = (t_fus_re_output_st.rightRoadEdge.curFunction.latDistanceZeroOrderCoeff +
                t_fus_re_output_st.rightRoadEdge.curFunction.latDistanceFirstOrderCoeff * pt_end.x +
                t_fus_re_output_st.rightRoadEdge.curFunction.latDistanceSecondOrderCoeff * pt_end.x * pt_end.x +
                t_fus_re_output_st.rightRoadEdge.curFunction.latDistanceThirdOrderCoeff * pt_end.x * pt_end.x * pt_end.x);

            t_tem.x = pt_end.x;
            t_tem.y = pt_end.y;

            t_pt_start.x = pt_start.x;
            t_pt_start.y = pt_start.y;
            t_pt_end.x = pt_end.x;
            t_pt_end.y = pt_end.y;
            t_pt_start.x = m_scale_f * t_pt_start.x;
            t_pt_start.y = m_latScale_f * t_pt_start.y;
            t_pt_end.x = m_scale_f * t_pt_end.x;
            t_pt_end.y = m_latScale_f * t_pt_end.y;
            CoordTrans(t_pt_start);
            CoordTrans(t_pt_end);
            line(img, t_pt_start, t_pt_end, t_scalar, 3); //画线
        }
    }
    
}

void BIRDVIEW::GetColor(COLOR t_color_en, Scalar& scalar)
{
    switch (t_color_en)
    {
    case COLOR::BLACK:
        scalar = Scalar(0, 0, 0);
        break;
    case COLOR::BLUE:
        scalar = Scalar(255, 0, 0);
        break;
    case COLOR::GREEN:
        scalar = Scalar(0, 255, 0);
        break;
    case COLOR::CYAN:
        scalar = Scalar(255, 255, 0);
        break;
    case COLOR::RED:
        scalar = Scalar(0, 0, 255);
        break;
    case COLOR::MAGENTA:
        scalar = Scalar(255, 0, 255);
        break;
    case COLOR::YELLOW:
        scalar = Scalar(0, 255, 255);
        break;
    case COLOR::WHITE:
        scalar = Scalar(255, 255, 255);
        break;
    case COLOR::FAINT_BLUE:
        scalar = Scalar(128, 0, 0);
        break;
    case COLOR::DARK_GREEN:
        scalar = Scalar(0, 128, 0);
        break;
    case COLOR::DARK_CYAN:
        scalar = Scalar(128, 128, 0);
        break;
    case COLOR::DARK_RED:
        scalar = Scalar(0, 0, 128);
        break;
    case COLOR::DARK_PURPLE:
        scalar = Scalar(128, 0, 128);
        break;
    case COLOR::OLIVE:
        scalar = Scalar(0, 128, 128);
        break;
    case COLOR::DARK_GRAY:
        scalar = Scalar(128, 128, 128);
        break;
    case COLOR::LIGHT_GRAY:
        scalar = Scalar(192, 192, 192);
        break;
    case COLOR::LIGHT_GREEN:
        scalar = Scalar(192, 220, 192);
        break;
    case COLOR::SKY_BLUE:
        scalar = Scalar(240, 202, 166);
        break;
    case COLOR::MILK_WHITE:
        scalar = Scalar(240, 251, 255);
        break;
    case COLOR::MEDIUM_GRAY:
        scalar = Scalar(164, 160, 160);
        break;
    default:
        Scalar scalar2(0, 0, 255);
        scalar = scalar2;
        break;
    }
}
