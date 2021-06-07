#ifndef _H_P_CALIBRATION_DATA_
#define _H_P_CALIBRATION_DATA_

#include "basic_type.h"

/*--------------------- CALIBRATION_DATA START -------------------------*/

/*--------------------- CALIBRATION_DATA DEFINES -----------------------*/

typedef struct Intrinsic_Calib_Param{
	float32 fx;
	float32 fy;
	float32 ga;        /** skew factor **/
	float32 xc;
	float32 yc;
	float32 k0;
	float32 k1;
	float32 k2;
}Intrinsic_Calib_Param_st;

typedef struct Extrinsic_Calib_Param{
	float32 alpCameraOrientationX;
	float32 alpCameraOrientationY;
	float32 alpCameraOrientationZ;
	float32 HeightOfWheelArcAboveGround;
}Extrinsic_Calib_Param_st;

typedef struct Online_Calib_Param {
	float32 alpOnlinePitchAngle;
	float32 alpOnlineYawAngle;
	float32 alpOnlineRollAngle;
	float32 HeightOfCamAboveGround;
}Online_Calib_Param_st;

typedef struct Dynamic_Calib_Param{
    float32 alpDynamicPitchAngle;
    float32 alpDynamicYawAngle;
    float32 alpDynamicRollAngle;
}Dynamic_Calib_Param_st;

typedef struct Camera_Installation_Info_st_ {
    float32 CameraPositionX_f;
    float32 CameraPositionY_f;
    float32 CameraPositionZ_f;
    float32 HeightOfWheelArc_f;
    float32 VehicleWheelBase_f;
}Camera_Installation_Info_st;

typedef struct Calib_Data_Packet{
	Intrinsic_Calib_Param_st IntrinsicParameter_st;
	Extrinsic_Calib_Param_st ExtrinsicParameter_st;
	Online_Calib_Param_st    OnlineCalibration_st;
}Calib_Data_Packet_st;

typedef struct Dynamic_Attitude_Change {
    float32 dynamic_pitch_change;
    float32 dynamic_yaw_change;
    float32 dynamic_roll_change;
    float32 height_of_cam_above_ground;
    float32 translationX;
    float32 translationY;
    float32 translationZ;
    float32 translationU;
    float32 translationV;
    float32 scale_free_translationX;
    float32 scale_free_translationY;
    float32 scale_free_translationZ;
    float32 conf;
}Dynamic_Attitude_Change_st;

/*--------------------- CALIBRATION_DATA INSTANCE ----------------------*/

#endif
