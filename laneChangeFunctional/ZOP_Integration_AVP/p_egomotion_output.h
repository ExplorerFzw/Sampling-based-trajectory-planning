#ifndef _H_P_EGOMOTION_OUTPUT_
#define _H_P_EGOMOTION_OUTPUT_

#include "basic_type.h"

#ifdef __cplusplus
extern "C"{
#endif /* __cplusplus */

/*--------------------- EGOMOTION_OUTPUT START -------------------------*/

/*--------------------- EGOMOTION_OUTPUT DEFINES -----------------------*/


/*--------------------- EGOMOTION_OUTPUT TYPEDEF -----------------------*/


typedef struct EgoMotion
{
    uint64 timeStamp;                     /* time stamp for 64bit */
	float32 AbsRollAngle_f;                /* abs roll-rotation  (rad) */
	float32 AbsPitchAngle_f;			     /* abs pitch-rotation (rad) */
	float32 AbsYawAngle_f;                 /* abs yaw-rotation   (rad) */
	float32 AbsHeightOfCamAboveGround_f;   /* the height of camera to the ground */
	float32 DeltaRollAngle_f;              /* the angle of the camera roll-rotation between two frames (rad) */
	float32 DeltaPitchAngle_f;             /* the angle of the camera pitch-rotation between two frames (rad) */
	float32 DeltaYawAngle_f;               /* the angle of the camera yaw-rotation between two frames  (rad) */
	float32 TxOfCamera_f;                  /* the transformation of the camera on the X-axis between two frames (m) */
	float32 TyOfCamera_f;                  /* the transformation of the camera on the X-axis between two frames (m) */
	float32 TzOfCamera_f;                  /* the transformation of the camera on the X-axis between two frames (m) */
	float32 TuOfCamera_f;                  /* the transformation of the camera on the U-axis between two frames (pixel) */
	float32 TvOfCamera_f;                  /* the transformation of the camera on the V-axis between two frames (pixel) */
	float32 HeightOfCameraAboveGround_f;   /* the no-scale height of the camera above ground */
	float32 TxOfVehicle_f;                 /* the transformation of the vehicle on the X-axis between two frames (m) */
	float32 TyOfVehicle_f;	             /* the transformation of the vehicle on the Y-axis between two frames (m) */
	float32 TzOfVehicle_f;                 /* the transformation of the vehicle on the Z-axis between two frames (m) */
	float32 TranslationOfVehicleConf_f;    /* the confidence of vehicle translation between two frames (0~1) */
	float32 RotationOfVehicleConf_f;       /* the confidence of vehicle rotation between two frames (0~1) */
}EgoMotion_st;

/*--------------------- EGOMOTION_OUTPUT INSTANCE ----------------------*/

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif //_H_P_EGOMOTION_OUTPUT_