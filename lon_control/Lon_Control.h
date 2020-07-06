//
// Created by jxf on 5/18/20
//

#include <ros/network.h>
#include <ros/ros.h>
#include <stdio.h>
#include <sys/time.h>
#include <time.h>

#include <boost/functional.hpp>
#include <boost/thread/mutex.hpp>
#include <boost/thread/thread.hpp>
#include <ctime>
#include <iostream>
#include <thread>

#include "StatemachineMsg/statemachine.h"
#include "VehicleMsg/adm_cmd.h"
#include "VehicleMsg/adm_lat.h"
#include "VehicleMsg/cdm_cmd.h"

#ifndef FALSE
#define FALSE 0
#endif
#ifndef TRUE
#define TRUE 1
#endif

// #define MSG_TOPIC_CDM "CdmCmdMsg"
// #define MSG_TOPIC_ADM "AdmCmdMsg"

typedef struct {
  double brake;
  double u_brake;
  double P_brake;
  double D_brake;
  double PID_out_brake;
  double PID_brake_limiter;
  double D_acc;
  double P_acc;
  double PID_acc_out;
  double PID_acc_limiter;
  double torque;
  double PID_delay;
  double IC;
  double Brake_final;
  double Acc_final;
  double VelocityError;
  double ACC_P;
  double ACC_I;
  double ACC_D;
  double Brake_P;
  double Brake_I;
  double Brake_D;
  double I_acc;
  double I_brake;
  double torque_out;
  double u_acc;
  bool reset;
  bool reset_acc;
  bool reset_B;
  bool reset_brake;
} Lon_Control;

typedef struct {
  double VelocityError_DelayPb;
  double VelocityError_DelayDb2;
  double VelocityError_DelayDb1;
  double VelocityError_DelayDa2;
  double VelocityError_DelayDa1;
  double VelocityError_DelayPa;
  double PID_limiter_Delay;
  bool Resettable_brake;
  bool Resettable_acc;
  bool reset_acc_Delay;
} Lon_Control_Delay;

class lontitued_Control {
 public:
  lontitued_Control(ros::NodeHandle nh, ros::NodeHandle pri_nh);
  ~lontitued_Control();

 private:
  void lontitued_callback1(const VehicleMsg::cdm_cmd::ConstPtr &VehicleMsg);
  void lontitued_callback2(const VehicleMsg::adm_lat::ConstPtr &PathLonCon);
  void statemachine_callback(
      const StatemachineMsg::statemachine::ConstPtr &StateMachine);
  void lontitued_thread();

 private:
  bool rosrunning;
  Lon_Control lon_control;
  Lon_Control_Delay lon_control_D;

  double Veh_Spd;
  bool finish_over;
  uint8_t Compartment;
  uint8_t Compartment_FD;
  uint8_t Compartment_Control;
  bool Compartment_order;
  bool Compartment_return;
  int8_t Gear_Fd;

  //  VehicleMsg::cdm_cmd Vehicle_msg;
  VehicleMsg::adm_cmd adm_msg;
  // VehicleMsg::adm_lat PathLonCon_msg;
  ros::Subscriber sub_path_msg_;
  ros::Subscriber sub_cdm_msg_;
  ros::Subscriber sub_statemachine_;
  ros::Publisher pub_lontitued_control_info_;
  std::thread lontitued_thread1_;

  std::mutex mtx;
};
