// #include <ros/ros.h>
// #include <ACC_module.h>

// int main(int argc, char *argv[])
// {
//     ros::init(argc, argv, "motion_planning_node");
//     ros::NodeHandle nh;
//     /*
//     * @note   every time you change the computer, please modify the path of record data before running the node.
//     * @note   please make sure the record data you need is in "data_record/".
//     */

//     string frame_id = "/motion_planning_node";
//     ROS_INFO("Start ACC_module ...");
//     ACC_module acc_module(nh, frame_id);
//     ROS_INFO("ACC_module Started");

//     ros::Rate loop_rate(20);

//     while (ros::ok())
//     {
//         ros::spinOnce();
//         acc_module.acc_planning();
//         loop_rate.sleep();
//     }
//     return 0;
// }