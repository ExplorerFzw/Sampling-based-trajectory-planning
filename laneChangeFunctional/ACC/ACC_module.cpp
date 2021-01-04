/*=============================================================================
**
** \file motion_planning_communication.h
**
** \brief 
**
** <Details>
** 
**
** Component Name: MotionPlanning
** Archive: motion_planning_ros/include/ACC_module.cpp
** Date: 24-DEC-2020
** Author: JIANG Yuncheng
**
** Copyright 2020 SAIC Zone Corporation.
**
**===========================================================================*/

#include <ACC_module.h>
#include <ros/ros.h>
#include <iostream>
#include <Eigen/Dense>
#include <vector>
#include <cmath>
#include <ego_motion_msgs/EgoMotionInfo.h>
#include <situation_analysis_msgs/LongitudinalBorder.h>

using namespace Eigen;
using namespace std;

ACC_module::ACC_module(ros::NodeHandle &node_handle, string &frame_id)
{
    KJ = 1;
    KT = 1;
    KDS = 10;
    KJV = 1;
    KTV = 1;
    KDSV = 10;
    speed_limit = 30;
    MAX_ACC = 2;
    MIN_ACC = 3;

    DT = 1;
    MAXT = 5;
    MINT = 2;
    MINT_V = 8;
    MAXT_V = 10;
    a_des = 0;
    DS = 0.5;
    DV = 1;

    D0 = 5;
    TTC = 2;

    //subscribe from other nodes/topics
    v_f = 10;
    a_f = 0;
    dist = 20;
    v_ego = 1;
    a_ego = 0;

    // this is from HMI interface which is not ready.
    SET_SPEED = 80.0;
    SET_SPEED_ms = 22.22;
    /*-------初-------始-------化-------节-------点-------相-------关-------*/
    nh = node_handle;
    name_of_node = ros::this_node::getName();
    pubTrajSignal = nh.advertise<motion_planning_msgs::MotionPlanning>("Trajectory", 1, true);
    subVehicleInfo = nh.subscribe("ego_motion_node", 1, &ACC_module::VehicleInfoCallback, this);
    subBoundaryInfo = nh.subscribe("situation_analysis_node", 1, &ACC_module::BoundaryInfoCallback, this);
}

ACC_module::~ACC_module()
{
    vector<double> trajs_rows;
    for (int i = 0; i < 4; i++)
    {

        trajs_rows.push_back(0);
        trajs_rows.push_back(0);
        trajs_rows.push_back(0);
        trajs_rows.push_back(0);
        trajs_output.push_back(trajs_rows);
        trajs_rows.clear(); // trajs_rows has info [s-t;v-t;a-t;t]
    }

    int max_size;
    int vec_size;
    vec_size = s_of_t.size();
    max_size = max(100, vec_size);
    for (int i = 0; i < max_size; i++)
    {
        acc_trajs_output.trajectory_points[i].ds = 0;
        acc_trajs_output.trajectory_points[i].dx = 0;
        acc_trajs_output.trajectory_points[i].vx = 0;
        acc_trajs_output.trajectory_points[i].ax = 0;
        acc_trajs_output.trajectory_points[i].t = t_data[i];
        acc_trajs_output.trajectory_points[i].valid = 0;
    }
    pubTrajSignal.publish(acc_trajs_output);
}

void ACC_module::acc_planning()
{
    if (dist >= 100)
    {
        // cout << "cal_velocity_control" << endl;
        cal_velocity_control();
        // cout << "check_quantic_status" << endl;
        check_quantic_status();
        // cout << "combination_quantic" << endl;
        combination_quantic();
        // cout << "PublishResults" << endl;
        PublishResults();
        // cout << "PublishResults finish" << endl;
        ROS_INFO("distance control mode");
    }
    else
    {
        //
        cal_distance_control();
        check_status();
        combination();
        PublishResults();
        ROS_INFO("distance control mode");
    }
}

void ACC_module ::PID_control_a()
{
    a_des = a_of_t[1];
}

void ACC_module ::PID_control_v()
{
    v_des = 1 * (v_of_t[1] - v_ego);
}

void ACC_module::cal_v_f_t(const double &Ti)
{
    v_f_t = v_f + a_f * Ti;
}

void ACC_module::cal_dist_t(const double &Ti)
{
    dist_t = dist + v_f * Ti + 0.50 * a_f * Ti * Ti;
}

void ACC_module::cal_s_des(const double &v_f_t)
{
    s_des = D0 + TTC * v_f_t;
}

void ACC_module::cal_s_target(const double &s_des, const double &dist_t)
{
    s_target = dist_t - s_des;
}

void ACC_module::cal_s_target_d(const double v_f_t)
{
    s_target_d = v_f_t - TTC * a_f;
}

void ACC_module::cal_s_target_dd()
{
    s_target_dd = a_f;
}

vector<double> ACC_module::quintic_polynomial(const double &xs, const double &vxs,  //
                                              const double &axs, const double &xe,  //
                                              const double &vxe, const double &axe, //
                                              const double &T)
{
    double a0, a1, a2, a3, a4, a5;
    Eigen::MatrixXd A(3, 3);
    A << pow(T, 3), pow(T, 4), pow(T, 5),
        3 * pow(T, 2), 4 * pow(T, 3), 5 * pow(T, 4),
        6 * T, 12 * pow(T, 2), 20 * pow(T, 3);
    Eigen::Vector3d B;
    B << (xe - xs - vxs * T - 0.5 * axs * T * T), (vxe - vxs - axs * T), (axe - axs);

    JacobiSVD<Eigen::MatrixXd> svd(A);
    int rankNum = svd.rank();
    // cout << "rankNum : " << rankNum << endl;
    int full_rank = 3;
    if (rankNum < full_rank)
    {
        a0 = 0;
        a1 = 0;
        a2 = 0;
        a3 = 0;
        a4 = 0;
        a5 = 0;
    }
    else
    {
        Eigen::Vector3d x;
        x = A.inverse() * B;
        a0 = xs;
        a1 = vxs;
        a2 = 0.50 * axs;
        a3 = x[0];
        a4 = x[1];
        a5 = x[2];
        // cout << "original x : " << x << endl;
    }
    // cout << a0 << ' ' << a1 << ' ' << a2 << ' ' << a3 << ' ' << a4 << ' ' << a5 << endl;
    vector<double> a_vector;
    a_vector.push_back(a0);
    a_vector.push_back(a1);
    a_vector.push_back(a2);
    a_vector.push_back(a3);
    a_vector.push_back(a4);
    a_vector.push_back(a5);

    return a_vector;
}

vector<double> ACC_module::quantic_polynomial(const double &xs, const double &vxs,  //
                                              const double &axs, const double &vxe, //
                                              const double &axe, const double &T)
{
    double a0, a1, a2, a3, a4;
    Eigen::MatrixXd A(5, 5);
    A << 1, 0, 0, 0, 0,
        0, 1, 0, 0, 0,
        0, 0, 2, 0, 0,
        0, 1, 2 * T, 3 * pow(T, 2), 4 * pow(T, 3),
        0, 0, 2, 6 * T, 12 * pow(T, 2);

    // cout << "A matrix is: " << A << endl;
    Eigen::Matrix<double, 5, 1> B;
    B << xs, vxs, axs, vxe, axe;
    // cout << "B matrix is: " << B << endl;

    JacobiSVD<Eigen::MatrixXd> svd(A);
    int rankNum = svd.rank();
    // cout << "rankNum : " << rankNum << endl;
    int full_rank = 5;
    if (rankNum < full_rank)
    {
        a0 = 0;
        a1 = 0;
        a2 = 0;
        a3 = 0;
        a4 = 0;
    }
    else
    {
        Eigen::VectorXd x;
        x = A.inverse() * B;
        a0 = x[0];
        a1 = x[1];
        a2 = x[2];
        a3 = x[3];
        a4 = x[4];

        // cout << "original x : " << x << endl;
    }
    // cout << a0 << ' ' << a1 << ' ' << a2 << ' ' << a3 << ' ' << a4  << endl;
    vector<double> a_vector;
    a_vector.push_back(a0);
    a_vector.push_back(a1);
    a_vector.push_back(a2);
    a_vector.push_back(a3);
    a_vector.push_back(a4);

    return a_vector;
}

double ACC_module::calc_point(const double &a0, const double &a1, const double &a2,
                              const double &a3, const double &a4, const double &a5, const double &t)
{
    double xt;
    xt = xt = a0 + a1 * t + a2 * pow(t, 2) + a3 * pow(t, 3) + a4 * pow(t, 4) + a5 * pow(t, 5);
    return xt;
}

double ACC_module::cal_quantic_point(const double &a0, const double &a1, const double &a2,
                                     const double &a3, const double &a4, const double &t)
{
    double xt;
    xt = a0 + a1 * t + a2 * pow(t, 2) + a3 * pow(t, 3) + a4 * pow(t, 4);
    return xt;
}

double ACC_module::calc_first_derivative(const double &a1, const double &a2, const double &a3,
                                         const double &a4, const double &a5, const double &t)
{
    double xt;
    xt = xt = a1 + 2 * a2 * t + 3 * a3 * pow(t, 2) + 4 * a4 * pow(t, 3) + 5 * a5 * pow(t, 4);
    return xt;
}

double ACC_module::calc_quantic_first_derivative(const double &a1, const double &a2, const double &a3,
                                                 const double &a4, const double &t)
{
    double xt;
    xt = a1 + 2 * a2 * t + 3 * a3 * pow(t, 2) + 4 * a4 * pow(t, 3);
    return xt;
}

double ACC_module::calc_second_derivative(const double &a2, const double &a3,
                                          const double &a4, const double &a5, const double &t)
{
    double xt;

    xt = 2 * a2 + 6 * a3 * t + 12 * a4 * pow(t, 2) + 20 * a5 * pow(t, 3);
    return xt;
}

double ACC_module::calc_quantic_second_derivative(const double &a2, const double &a3,
                                                  const double &a4, const double &t)
{
    double xt;
    xt = 2 * a2 + 6 * a3 * t + 12 * a4 * pow(t, 2);
    return xt;
}

double ACC_module::calc_third_derivative(const double &a3, const double &a4,
                                         const double &a5, const double &t)
{
    double xt;
    xt = 6 * a3 + 24 * a4 * t + a5 * t * t;
    return xt;
}

double ACC_module::calc_quantic_third_derivative(const double &a3, const double &a4,
                                                 const double &t)
{
    double xt;
    xt = 6 * a3 + 24 * a4 * t;
    return xt;
}

vector<double> ACC_module::cal_jerk(const double &a3, const double &a4,
                                    const double &a5, const double &t)
{

    vector<double> jerk;

    for (double i = 0; i <= t; i += 0.1)
    {
        double val = 6 * a3 + 24 * a4 * i + 60 * a5 * pow(i, 2);
        jerk.push_back(val);
    }

    return jerk;
}

vector<double> ACC_module::cal_quantic_jerk(const double &a3, const double &a4,
                                            const double &t)
{

    vector<double> jerk;
    double val;
    for (double i = 0; i <= t; i += 0.1)
    {

        val = 6 * a3 + 24 * a4 * i;
        jerk.push_back(val);
    }
    return jerk;
}

void ACC_module::cal_distance_control()
{
    cost_graph.clear();
    vector<double> cost_graph_cpn;

    for (int Ti = MINT; Ti <= MAXT; Ti += DT)
    {
        cal_v_f_t(Ti);
        // cout << " calculation cal_v_f_t " << endl;
        cal_dist_t(Ti);
        cal_s_des(v_f_t);
        cal_s_target(s_des, dist_t);
        cal_s_target_d(v_f_t);
        cal_s_target_dd();
        // cout << " calculation preprocessing " << endl;
        double delta_s = 0.10 * s_target;

        for (double Si = s_target - delta_s; Si <= s_target + delta_s; Si += DS)
        {
            double si = 0;
            double vi = v_ego;
            double ai = a_ego;
            double se = Si;
            double ve = s_target_d;
            double ae = s_target_dd;
            vector<double> a_vector = quintic_polynomial(si, vi, ai, se, ve, ae, Ti);

            double a0 = a_vector[0];
            double a1 = a_vector[1];
            double a2 = a_vector[2];
            double a3 = a_vector[3];
            double a4 = a_vector[4];
            double a5 = a_vector[5];

            vector<double> jerk = cal_jerk(a3, a4, a5, Ti);

            double cost_J;
            double cost_T;
            double cost_DS;
            double cost_total;

            double sum = abs_summation(jerk);
            cost_J = sum / jerk.size();
            cost_T = Ti;
            cost_DS = sqrt((s_target - Si) * (s_target - Si));
            cost_total = KJ * cost_J + KT * cost_T + KDS * cost_DS;

            cost_graph_cpn.push_back(cost_total);
            cost_graph_cpn.push_back(Ti);
            cost_graph_cpn.push_back(Si);
            cost_graph_cpn.push_back(cost_J);
            cost_graph_cpn.push_back(cost_T);
            cost_graph_cpn.push_back(cost_DS);
            cost_graph_cpn.push_back(a0);
            cost_graph_cpn.push_back(a1);
            cost_graph_cpn.push_back(a2);
            cost_graph_cpn.push_back(a3);
            cost_graph_cpn.push_back(a4);
            cost_graph_cpn.push_back(a5);

            cost_graph.push_back(cost_graph_cpn);
            cost_graph_cpn.clear();
        }
    }

    sort(cost_graph.begin(), cost_graph.end());
}

void ACC_module::cal_velocity_control()
{
    cost_graph.clear();
    vector<double> cost_graph_cpn;

    double delta_v = 0.10 * SET_SPEED_ms;
    // cout << "SET_SPEED_ms finish" << endl;
    for (double Ti = MINT_V; Ti <= MAXT_V; Ti += DT)
    {
        for (double Ve = SET_SPEED_ms - 2; Ve <= SET_SPEED_ms + 2; Ve += DV)
        {
            double si = 0.0;
            double vi = v_ego;
            double ai = a_ego;
            double ve = Ve;
            double ae = 0.0;
            // cout << "a vector preprocessing finish." << endl;
            vector<double> a_vector = quantic_polynomial(si, vi, ai, ve, ae, Ti);
            // cout << "a vector calculation finish." << endl;
            double a0 = a_vector[0];
            double a1 = a_vector[1];
            double a2 = a_vector[2];
            double a3 = a_vector[3];
            double a4 = a_vector[4];
            // cout << "a0- a4 calculation finish." << endl;

            vector<double> jerk = cal_quantic_jerk(a3, a4, Ti);
            // cout << "jerk calculation finish." << endl;
            double cost_J;
            double cost_T;
            double cost_DV;
            double cost_total;

            double sum = abs_summation(jerk);

            cost_J = sum / jerk.size();

            cost_T = Ti;

            cost_DV = sqrt((SET_SPEED_ms - Ve) * (SET_SPEED_ms - Ve));

            cost_total = KJ * cost_J + KT * cost_T + KDS * cost_DV;

            cost_graph_cpn.push_back(cost_total);
            cost_graph_cpn.push_back(Ti);
            cost_graph_cpn.push_back(Ve);
            cost_graph_cpn.push_back(cost_J);
            cost_graph_cpn.push_back(cost_T);
            cost_graph_cpn.push_back(cost_DV);
            cost_graph_cpn.push_back(a0);
            cost_graph_cpn.push_back(a1);
            cost_graph_cpn.push_back(a2);
            cost_graph_cpn.push_back(a3);
            cost_graph_cpn.push_back(a4);

            cost_graph.push_back(cost_graph_cpn);
            cost_graph_cpn.clear();
            // cout << "cost_graph calculation finish." << endl;
        }
    }
    sort(cost_graph.begin(), cost_graph.end());
}

void ACC_module::check_status()
{
    int COND = 1;
    int i = 0;
    cost_optimal.clear();

    while (COND == 1)
    {
        vector<double> vt;
        vector<double> at;
        vector<double> poly_para;

        for (int j = 6; j < 12; j++)
        {
            poly_para.push_back(cost_graph[i][j]);
        }

        double a0 = poly_para[0];
        double a1 = poly_para[1];
        double a2 = poly_para[2];
        double a3 = poly_para[3];
        double a4 = poly_para[4];
        double a5 = poly_para[5];

        double Te = cost_graph[i][1];

        for (double t = 0; t <= Te; t += 0.5)
        {
            vt.push_back(calc_first_derivative(a1, a2, a3, a4, a5, t));
            at.push_back(calc_second_derivative(a2, a3, a4, a5, t));
        }
        double max_v, max_a, min_a;

        std::vector<double>::iterator biggest_v = //
            std::max_element(vt.begin(), vt.end());
        max_v = *biggest_v;

        std::vector<double>::iterator biggest_a = //
            std::max_element(at.begin(), at.end());
        max_a = *biggest_a;

        std::vector<double>::iterator smallest_a = //
            std::min_element(at.begin(), at.end());
        min_a = *smallest_a;

        if (max_v <= speed_limit && max_a <= MAX_ACC && min_a >= MIN_ACC)
        {
            for (int j = 0; j < 12; j++)
            {
                cost_optimal.push_back(cost_graph[i][j]);
            }
            COND = 2;
        }
        i += 1;

        if (i >= int(cost_graph.size()))
        {
            COND = 2;
            for (int j = 0; j < 12; j++)
            {
                cost_optimal.push_back(cost_graph[0][j]);
            }
        }
    }
}

void ACC_module::check_quantic_status()
{
    int COND = 1;
    int i = 0;
    cost_optimal.clear();

    while (COND == 1)
    {
        vector<double> vt;
        vector<double> at;
        vector<double> poly_para;

        for (int j = 6; j < 11; j++)
        {
            poly_para.push_back(cost_graph[i][j]);
        }

        // cout << "poly_para finish. " << endl;
        // cout << "cost graph size :  " << cost_graph.size() << " " << cost_graph[0].size() << endl;
        double a0 = poly_para[0];
        double a1 = poly_para[1];
        double a2 = poly_para[2];
        double a3 = poly_para[3];
        double a4 = poly_para[4];

        double Te = cost_graph[i][1];

        // cout << "a finish. " << endl;

        for (double t = 0; t <= Te; t += 0.5)
        {

            vt.push_back(calc_quantic_first_derivative(a1, a2, a3, a4, t));
            at.push_back(calc_quantic_second_derivative(a2, a3, a4, t));
        }

        // cout << "at,vt finish. " << endl;
        double max_v, max_a, min_a;

        std::vector<double>::iterator biggest_v = //
            std::max_element(vt.begin(), vt.end());
        max_v = *biggest_v;

        std::vector<double>::iterator biggest_a = //
            std::max_element(at.begin(), at.end());
        max_a = *biggest_a;

        std::vector<double>::iterator smallest_a = //
            std::min_element(at.begin(), at.end());
        min_a = *smallest_a;

        // cout << "constrint finish. " << endl;

        if (max_v <= speed_limit && max_a <= MAX_ACC && min_a >= MIN_ACC)
        {
            for (int j = 0; j < 11; j++)
            {
                cost_optimal.push_back(cost_graph[i][j]);
            }
            COND = 2;
            // cout << "constrint satisfy. " << endl;
        }
        i += 1;
        // cout << "i =  " << i << endl;

        if (i >= int(cost_graph.size()))

        {
            COND = 2;
            // cout << "CONDI =  " << COND << endl;
            for (int j = 0; j < 11; j++)
            {
                cost_optimal.push_back(cost_graph[0][j]);
            }
            // cout << "reach end. " << endl;
        }
    }

    cout << cost_optimal[1] << " " << cost_optimal[2] << endl;
}

void ACC_module::combination()
{
    int index = 0;
    double Te = cost_optimal[1];

    vector<double> poly_para;
    for (int j = 6; j < 12; j++)
    {
        poly_para.push_back(cost_optimal[j]);
    }

    double a0 = poly_para[0];
    double a1 = poly_para[1];
    double a2 = poly_para[2];
    double a3 = poly_para[3];
    double a4 = poly_para[4];
    double a5 = poly_para[5];

    s_of_t.clear();
    v_of_t.clear();
    a_of_t.clear();
    t_data.clear();

    for (double t = 0; t < Te; t += 0.1)
    {
        s_of_t.push_back(calc_point(a0, a1, a2, a3, a4, a5, t));
        v_of_t.push_back(calc_first_derivative(a1, a2, a3, a4, a5, t));
        a_of_t.push_back(calc_second_derivative(a2, a3, a4, a5, t));
        t_data.push_back(t);
    }
}

void ACC_module::combination_quantic()
{

    int index = 0;
    double Te = cost_optimal[1];

    vector<double> poly_para;
    for (int j = 6; j < 11; j++)
    {
        poly_para.push_back(cost_optimal[j]);
    }

    double a0 = poly_para[0];
    double a1 = poly_para[1];
    double a2 = poly_para[2];
    double a3 = poly_para[3];
    double a4 = poly_para[4];

    cout << "a vector : " << a0 << " " << a1 << " " << a2 << " " << a3 << " " << a4 << endl;

    s_of_t.clear();
    v_of_t.clear();
    a_of_t.clear();
    t_data.clear();

    for (double t = 0; t < Te; t += 0.1)
    {
        s_of_t.push_back(cal_quantic_point(a0, a1, a2, a3, a4, t));
        v_of_t.push_back(calc_quantic_first_derivative(a1, a2, a3, a4, t));
        a_of_t.push_back(calc_quantic_second_derivative(a2, a3, a4, t));
        t_data.push_back(t);
    }
}

double ACC_module::abs_summation(vector<double> jerk)
{
    double sum;

    std::vector<double>::iterator begin = jerk.begin();
    for (int i = 0; i < jerk.size(); i++)
    {
        jerk[i] = std::fabs(jerk[i]);
    }

    for (; begin != jerk.end(); begin++)
    {
        if (begin == jerk.begin())
            sum = *begin;
        else
            sum += *begin;
    }
    return sum;
}

void ACC_module::PublishResults()
{

    int min_size;
    int vec_size;
    vec_size = s_of_t.size();
    min_size = min(100, vec_size);
    // cout << "min size is: " << min_size << endl;

    // for (int i = 0; i < vec_size();i++){

    // }
    for (int i = 0; i < min_size; i++)
    {
        acc_trajs_output.trajectory_points[i].ds = s_of_t[i];
        acc_trajs_output.trajectory_points[i].dx = s_of_t[i];
        acc_trajs_output.trajectory_points[i].vx = v_of_t[i];
        acc_trajs_output.trajectory_points[i].ax = a_of_t[i];
        acc_trajs_output.trajectory_points[i].t = t_data[i];
        acc_trajs_output.trajectory_points[i].valid = 1;
    }
    // for (int i = 0; i < min_size; i++)
    // {
    //     cout << s_of_t[i] << endl;
    // }

    pubTrajSignal.publish(acc_trajs_output);
}

void ACC_module::VehicleInfoCallback(const ego_motion_msgs::EgoMotionInfo &data)
{
    //V_EG
    // v_ego = data.Twist.linear.x;
    // a_ego = data.Vector3.x;

    v_ego = 10;
    a_ego = 0;
}

void ACC_module::BoundaryInfoCallback(const situation_analysis_msgs::LongitudinalBorder &data)
{
    //
    // v_f = data.x;
    // a_f = data.ax;
    // dist = = data.dx;
    v_f = 10;
    a_f = 0;
    dist = 50;
}
