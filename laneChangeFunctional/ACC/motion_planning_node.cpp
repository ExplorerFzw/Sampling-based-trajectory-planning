/*=============================================================================
**
** \file motion_planning_node.cpp
**
** \brief 
**
** <Details>
** 
**
** Component Name: MotionPlanning
** Archive: motion_planning_ros/src/motion_planning_node.cpp
** Date: 04-DEC-2020
** Author: Han Jin
**
** Copyright 2020 SAIC Zone Corporation.
**
**===========================================================================*/

#include "motion_planning_node.h"
#include <ACC_module.h>
// namespace zone
// {
// namespace motion_planning
// {

// using ::zone::base_node::BaseNode;

// MotionPlanningNode::MotionPlanningNode(
//     ros::NodeHandle &n) : BaseNode(n)
// {
//   InitNode();
// }

// //-----------------------------------------------------------------------------
// void MotionPlanningNode::InitParams()
// {
//   // Start of node param setting
//   float node_rate_setting;
//   GetRosNodeHandler().param<float>("node_rate_F32", node_rate_setting, 20.0);
//   SetCycleRate(node_rate_setting);
//   ROS_INFO("node_rate_F32 %f", GetCycleRate());
//   // End of node param setting
// }
// //-----------------------------------------------------------------------------
// void MotionPlanningNode::InitSubs()
// {
//   sub_dynamic_borders_ = GetRosNodeHandler().subscribe("/sit/dynamicborders", 1,
//                                                        &MotionPlanningNode::MsgDynamicBordersCb, this);
// }
// //-----------------------------------------------------------------------------
// void MotionPlanningNode::InitPubs()
// {
//   pub_motion_planning_ = GetRosNodeHandler().advertise<motion_planning_msgs::MotionPlanning>("/mp/trajectorypoints", 1);
// }
// //-----------------------------------------------------------------------------
// void MotionPlanningNode::MsgDynamicBordersCb(
//     const situation_analysis_msgs::Corridor &msg)
// {
//   dynamic_borders_msg_ = msg;
//   ROS_INFO("Receive Dynamic Borders Msg");
// }
// //-----------------------------------------------------------------------------
// void MotionPlanningNode::FillInComponentsInput()
// {
//   // Collect all the Runtime to Agnostic convert functions here
//   ConvertDynamicBordersRuntime2Agnostic(dynamic_borders_msg_,
//                                         algo_.algo_input_.dynamic_borders);
// }
// //-----------------------------------------------------------------------------
// void MotionPlanningNode::OutputGenerator()
// {
//   // Collect all the Agnostic to Runtime convert functions here
//   ConvertMotionPlanningAgnostic2Runtime(algo_.algo_output_.planning_traj,
//                                         motion_planning_msg_);
//   motion_planning_msg_.header.stamp = ros::Time::now();
//   motion_planning_msg_.header.frame_id = "base_link";
// }
// //-----------------------------------------------------------------------------
// void MotionPlanningNode::PublishResults(void)
// {
//   // Collect all the publish action functions here
//   pub_motion_planning_.publish(motion_planning_msg_);
// }
// //-----------------------------------------------------------------------------
// void MotionPlanningNode::ComponentsRun(void)
// {
//   algo_.Run();
// }
// //-----------------------------------------------------------------------------
// } // namespace motion_planning
// } // namespace zone
int main(int argc, char **argv)
{
  ros::init(argc, argv, "MotionPlanning");

  ros::NodeHandle nh("~");

  string frame_id = "/motion_planning_node";

  // zone::motion_planning::MotionPlanningNode l_motionPlanningCom(nh);

  // ros::Rate loop_rate(l_motionPlanningCom.GetCycleRate());
  ros::Rate loop_rate(1);

  while (ros::ok())
  {
    ros::spinOnce();
    // l_motionPlanningCom.MainLoop();

    ACC_module acc_module(nh, frame_id);
    ROS_INFO("ACC_module Started");
    acc_module.acc_planning();

    loop_rate.sleep();
  }

  return 0;
}
