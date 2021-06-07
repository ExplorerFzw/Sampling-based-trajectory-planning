#include"Parameters.h"
//for different velocity , the threshold of transfering to driving straight from Unknown
float P_Veh2Yawrate_Arr[6] = {0,5.55,8.33,13.89,22.22,27.78};
float P_MaxYawrate2DiffVxWithinDrStrgt_Arr[6] = {0.6,0.4,0.14,0.08,0,05};
//for different velocity , the threshold of transfering to turn left/right from driving straight
float P_Veh2Yawrate4TurnLOrR_Arr[6] = { 0,5.55,8.33,13.89,22.22,27.78 };
float P_MinYawrate2DiffVx4Trans2TurnLOrR_Arr[6] = { 0.4,0.2,0.1,0.08,0,05 };

float P_Veh2Curv4TurnLOrR_Arr[6] = { 0,3.55,8.33,13.89,22.22,27.78 };
float P_MinCurv2DiffVx4Trans2TurnLOrR_Arr[6] = { 0.1,0.02,0.01,0.005,0,002 };

float P_Veh2Accl4TurnLOrR_Arr[6] = { 0,5.55,8.33,13.89,22.22,27.78 };
float P_MaxAccl2DiffVx4Trans2TurnLOrR_Arr[6] = { 4,2,1.0,0.8,0.5,0.2 };

float P_Veh2Decl4TurnLOrR_Arr[6] = { 0,5.55,8.33,13.89,22.22,27.78 };
float P_MaxDecl2DiffVx4Trans2TurnLOrR_Arr[6] = { -4,-3.2,-2.14,-2.08,-2.0,-1.0 };

float P_Veh2Yaw1s4TurnLOrR_Arr[6] = { 0,5.55,8.33,13.89,22.22,27.78 };
float P_MinYaw1sDiffVx4Trans2TurnLOrR_Arr[6] = { 0.3,0.2,0.1,0.04,0,02 };

float P_Veh2Yaw2s4TurnLOrR_Arr[6] = { 0,5.55,8.33,13.89,22.22,27.78 };
float P_MinYaw2sDiffVx4Trans2TurnLOrR_Arr[6] = { 0.5,0.3,0.2,0.08,0,04 };

float P_MaxVelocity4TurnLeftOrRight_F = 25;//90kph
float P_MinVelocity4TurnLeftOrRight_F = 1.1;//4kph
