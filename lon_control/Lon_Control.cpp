//
// Created by jxf on 5/18/20
//

#include "Lon_Control.h"

#include <chrono>

lontitued_Control::lontitued_Control(ros::NodeHandle nh, ros::NodeHandle pri_nh)
    : Veh_Spd(0), finish_over(0), Compartment_Control(0), Compartment_order(0) {
  sub_cdm_msg_ = nh.subscribe<VehicleMsg::cdm_cmd>(
      "/CdmCmdMsg", 1, &lontitued_Control::lontitued_callback1, this,
      ros::TransportHints().reliable().tcpNoDelay(true));
  sub_path_msg_ = nh.subscribe<VehicleMsg::adm_lat>(
      "/AdmLatMsg", 1, &lontitued_Control::lontitued_callback2, this,
      ros::TransportHints().reliable().tcpNoDelay(true));
  sub_statemachine_ = nh.subscribe<StatemachineMsg::statemachine>(
      "/Behavior", 1, &lontitued_Control::statemachine_callback, this,
      ros::TransportHints().reliable().tcpNoDelay(true));
  pub_lontitued_control_info_ =
      nh.advertise<VehicleMsg::adm_cmd>("/AdmCmdMsg", 1);
  lontitued_thread1_ = std::thread(&lontitued_Control::lontitued_thread, this);

  rosrunning = false;
  lon_control.ACC_P = 2.0;
  lon_control.ACC_I = 4.0;
  lon_control.ACC_D = 0.02;
  lon_control.Brake_P = 1.1;
  lon_control.Brake_I = 0.8;
  lon_control.Brake_D = 0.1;
  lon_control_D.Resettable_brake = true;
  lon_control_D.reset_acc_Delay = true;
  lon_control_D.Resettable_acc = true;
  lon_control_D.PID_limiter_Delay = 22.0;
  lon_control.IC = 22;
  lon_control.brake = 0;
}

lontitued_Control::~lontitued_Control() {}

void lontitued_Control::statemachine_callback(
    const StatemachineMsg::statemachine::ConstPtr &StateMachine) {
  Compartment = StateMachine->dischargeReq;
  std::cout << "discharge_stop" << Compartment << std::endl;
}

void lontitued_Control::lontitued_callback1(
    const VehicleMsg::cdm_cmd::ConstPtr &VehicleMsg) {
  Veh_Spd = VehicleMsg->Veh_Spd;
  Compartment_FD = VehicleMsg->Compartment_Fd;
  Gear_Fd = VehicleMsg->TCM_GearFd;
  // std::cout << "Cdm Active" << std::endl;
  // compartment control
  if (Compartment == 1 && Gear_Fd == 0) {
    Compartment_order = 1;
  } else {
    Compartment_order = 0;
  }
  if (Compartment != 1 && Gear_Fd != 0) {
    Compartment_return = 1;
  } else {
    Compartment_return = 0;
  }
}

void lontitued_Control::lontitued_thread() {
  while (true) {
    int msec = 9;
    clock_t start, finish;
    double totaltime = 0;
    if (Compartment_order == 1) {
      //   std::cout << "CO = " << Compartment_order << std::endl;
      Compartment_Control = 1;
      if (Compartment_FD == 2) {
        start = clock();  // pull down to (if (Compartment_FD == 2));
        Compartment_Control = 0;
        while (true) {
          finish = clock();
          totaltime = (double)(finish - start) / CLOCKS_PER_SEC;
          // std::cout << "totaltime = " << totaltime << std::endl;
          std::this_thread::sleep_for(std::chrono::milliseconds(50));
          mtx.lock();
          adm_msg.Compartment_Control = Compartment_Control;
          pub_lontitued_control_info_.publish(adm_msg);
          mtx.unlock();
          if (totaltime >= msec) {
            break;
          }
        }
        totaltime = 0;
        start = clock();
        while (true) {
          finish = clock();
          totaltime = (double)(finish - start) / CLOCKS_PER_SEC;
          Compartment_Control = 2;
          std::this_thread::sleep_for(std::chrono::milliseconds(50));
          mtx.lock();
          adm_msg.Compartment_Control = Compartment_Control;
          pub_lontitued_control_info_.publish(adm_msg);
          mtx.unlock();
          if (totaltime >= 1) {
            break;
          }
        }
        // Compartment_Control = 2;
      }
      if (Compartment_FD == 3) {
        Compartment_Control = 2;
      }
      if (Compartment_FD == 4) {
        Compartment_Control = 0;
        finish_over = 1;
      }
      if (Compartment_return == 1) {
        finish_over = 0;
      }
      mtx.lock();
      adm_msg.finish_over = finish_over;
      adm_msg.Compartment_Control = Compartment_Control;
      pub_lontitued_control_info_.publish(adm_msg);
      mtx.unlock();
    } else {
      std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
  }
}

void lontitued_Control::lontitued_callback2(
    const VehicleMsg::adm_lat::ConstPtr &PathLonCon) {
  double V_des = PathLonCon->V_des;
  bool trigger = PathLonCon->Enable_lat;
  uint8_t gear = PathLonCon->Gear_des;

  std::cout << "Adm Active" << std::endl;
  std::cout << "Veh_Spd=" << Veh_Spd << std::endl;
  std::cout << "V_des=" << V_des << std::endl;

  int8_t torque_inv;
  double tmp;
  double tmp_out;
  bool RO_brake;
  bool LO_brake;
  bool LO_acc;
  bool RO_acc;

  lon_control.VelocityError = V_des - Veh_Spd;

  if (lon_control.VelocityError > -3) {
    RO_brake = true;  // when VelocityError more than -5 maybe reset;
  } else {
    RO_brake = false;
  }

  if (lon_control.VelocityError >= -1) {
    RO_acc = true;
  } else {
    RO_acc = false;
  }

  LO_brake = !trigger;  // LogicalOperator,LO_brake not trigger
  LO_acc = !trigger;    // LogicalOperator2,LO_acc not trigger

  lon_control.I_acc = 0.01 * lon_control.VelocityError * lon_control.Brake_P *
                      lon_control.Brake_I;
  lon_control.I_brake =
      0.02 * lon_control.VelocityError * lon_control.ACC_P * lon_control.ACC_I;
  lon_control.reset_B = (RO_brake || LO_brake);

  if (V_des > 0.1) {
    lon_control.reset_brake = lon_control.reset_B;
  } else {
    lon_control.reset_brake = LO_brake;
  }

  if ((lon_control.reset_brake || lon_control_D.Resettable_brake) != 0) {
    lon_control.u_brake = 0.0;
  } else {
    lon_control.u_brake = lon_control.PID_out_brake;
  }

  // Brake Increment PID Control calculate
  lon_control.P_brake =
      (lon_control.VelocityError - lon_control_D.VelocityError_DelayPb) *
      lon_control.Brake_P;
  lon_control.D_brake =
      ((lon_control.VelocityError + lon_control_D.VelocityError_DelayDb2) -
       2.0 * lon_control_D.VelocityError_DelayDb1) *
      (lon_control.Brake_P * lon_control.Brake_D) * 5.0;
  lon_control.PID_out_brake =
      ((lon_control.P_brake + lon_control.I_brake) + lon_control.D_brake) +
      lon_control.u_brake;

  if (lon_control.VelocityError <= -2.0 || Gear_Fd == -1) {
    tmp = lon_control.PID_out_brake;
  } else {
    tmp = 0.0;
  }

  if (V_des > 1) {
    tmp_out = tmp;
  } else {
    tmp_out = lon_control.PID_out_brake;
  }

  lon_control.PID_brake_limiter = -0.9 * tmp_out;

  if (lon_control.PID_brake_limiter > 30.0) {
    lon_control.PID_brake_limiter = 30.0;
  } else {
    if (lon_control.PID_brake_limiter < 0.0) {
      lon_control.PID_brake_limiter = 0.0;
    }
  }

  if (V_des == 0) {
    lon_control.brake = lon_control.brake + 0.7;
    lon_control.PID_brake_limiter = lon_control.brake;
  }

  if (trigger) {
    lon_control.Brake_final = lon_control.PID_brake_limiter;
  } else {
    lon_control.Brake_final = 0;
  }

  if (lon_control.reset_brake) {
    lon_control.u_brake = 0.0;
  } else {
    lon_control.u_brake = lon_control.PID_out_brake;
  }

  // brake over;then torque
  // Torque Increment PID Control calculate
  lon_control.D_acc =
      ((lon_control_D.VelocityError_DelayDa2 + lon_control.VelocityError) -
       2.0 * lon_control_D.VelocityError_DelayDa1) *
      lon_control.ACC_P * lon_control.ACC_D * 10.0;
  lon_control.P_acc =
      (lon_control.VelocityError - lon_control_D.VelocityError_DelayPa) *
      lon_control.ACC_P;
  lon_control.PID_acc_out =
      (lon_control.D_acc + lon_control.P_acc) + lon_control.I_acc;

  lon_control.reset_acc = lon_control_D.reset_acc_Delay;

  if ((lon_control.reset_acc || lon_control_D.Resettable_acc) != 0) {
    lon_control.u_acc = lon_control.IC;
  } else {
    lon_control.u_acc = lon_control.PID_acc_limiter;
  }

  lon_control.PID_acc_limiter = lon_control.PID_acc_out + lon_control.u_acc;

  if (lon_control.PID_acc_limiter > 60.0) {
    lon_control.PID_acc_limiter = 60.0;
  } else {
    if (lon_control.PID_acc_limiter < 22.0) {
      lon_control.PID_acc_limiter = 22.0;
    }
  }

  if (RO_acc) {
    lon_control.torque = lon_control.PID_acc_limiter;
  } else {
    lon_control.torque = 0.95 * lon_control.PID_acc_limiter;
  }

  torque_inv = 0;
  if (V_des == 0) {
    lon_control.torque_out = 0;
  }

  if (V_des - Veh_Spd <= -2.0) {
    torque_inv = 1;
    lon_control.torque_out = 0.0;
  } else {
    lon_control.torque_out = lon_control.torque;
  }

  if (torque_inv > 0) {
    lon_control.reset = true;
  } else {
    lon_control.reset = false;
  }

  if (V_des == 0) {
    lon_control.torque_out = 0;
  }

  if (trigger) {
    lon_control.torque_out = lon_control.torque_out;
  } else {
    lon_control.torque_out = 0;
  }

  lon_control_D.reset_acc_Delay = (lon_control.reset || LO_acc);

  if (lon_control.reset_acc) {
    lon_control.u_acc = lon_control.IC;
  } else {
    lon_control.u_acc = lon_control.PID_acc_limiter;
  }

  lon_control.Acc_final = lon_control.torque_out;
  lon_control.PID_delay = lon_control_D.PID_limiter_Delay * 0.95;

  if (lon_control.PID_delay >= 22.0) {
    lon_control.IC = lon_control.PID_delay;
  } else {
    lon_control.IC = 22.0;
  }

  // unitdelay
  lon_control_D.Resettable_brake = false;
  lon_control_D.VelocityError_DelayPb = lon_control.VelocityError;
  lon_control_D.VelocityError_DelayDb2 = lon_control_D.VelocityError_DelayDb1;
  lon_control_D.VelocityError_DelayDb1 = lon_control.VelocityError;
  lon_control_D.VelocityError_DelayDa2 = lon_control_D.VelocityError_DelayDa1;
  lon_control_D.VelocityError_DelayDa1 = lon_control.VelocityError;
  lon_control_D.VelocityError_DelayPa = lon_control.VelocityError;
  lon_control_D.Resettable_acc = false;
  lon_control_D.PID_limiter_Delay = lon_control.PID_acc_limiter;

  // publish brake,torque and gear
  mtx.lock();
  adm_msg.Hydraulic_Brake = ceil(lon_control.Brake_final);
  adm_msg.AccPed = lon_control.Acc_final;
  adm_msg.Gear = gear;

  std::cout << "brake=" << lon_control.Brake_final << std::endl;
  std::cout << "ACCPed=" << adm_msg.AccPed << std::endl;
  std::cout << "gear=" << gear << std::endl;

  pub_lontitued_control_info_.publish(adm_msg);
  mtx.unlock();
}
