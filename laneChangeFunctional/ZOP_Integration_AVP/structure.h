#ifndef _H_STRUCTURE_
#define _H_STRUCTURE_

#include "basic_type.h"
#include "define.h"

/*--------------------------------- STRUCTURES -----------------------------------*/

typedef struct SM_Rect2i_
{
	sint32 x;  //< the top-left corner, as well as width and height of the rectangle
	sint32 y;
	sint32 width;
	sint32 height;
}SM_Rect2i;

typedef struct SM_Rect2f_
{
	float32 x;  //< the top-left corner, as well as width and height of the rectangle
	float32 y;
	float32 width;
	float32 height;
}SM_Rect2f;

struct SM_PointCam3f
{
	float32 x;
	float32 y;
	float32 z;
};

struct SM_Point2i
{
	sint32 x;
	sint32 y;
};

typedef struct SM_Point2f_
{
	float32 x;
	float32 y;
}SM_Point2f;

typedef struct SM_Point3f_
{
	float32 x;
	float32 y;
	float32 z;
}SM_Point3f;

typedef struct SM_Point5f_
{
	float32 x, y, z;
	float32 u, v;
}SM_Point5f;

typedef struct SM_Match2f_
{
	uint8   match_flag;
	float32 u_p, v_p; // u,v-coordinates in previous image
	sint32 i_p;       // index in previous image
	float32 u_c, v_c; // u,v-coordinates in current image
	sint32 i_c;       // index in current image
}SM_Match2f;

typedef struct SM_Feature2f_
{
	float32 u_f, v_f;
	sint32  id;
}SM_Feature2f;

typedef struct PointFrame2D_st_ {
	uint16 U_uw;
	uint16 V_uw;
}PointFrame2D_st;

typedef struct _Vector {
	sint32 size;
	sint32 index[MAX_NUMBER_OF_CORNER/3];
}Vector_st;

typedef struct _Feature_Matching {
	sint32 matched_num;
	SM_Match2f matched[MAX_NUMBER_OF_CORNER];
}Feature_Matching_st;

typedef struct VanishingPoint_st_ {
	float32 u, v;
	float32 conf;
}VanishingPoint_st;

typedef struct PointFrame2Df_st_{
	float32 U_f;
	float32 V_f;
}PointFrame2Df_st;

typedef struct UndistortPointFrame2Df_st_ {
	float32 U_f;
	float32 V_f;
	uint16 U_Status;
	uint16 V_Status;
}UndistortFrame2Df_st;

struct PointFramePixel2D_st {
    uint16 pixelU_uw; // norm: N_pixelUW_ub
    uint16 pixelV_uw; // norm: N_pixelUW_ub
};

typedef struct pointframepixel2Df_ {
    float32 pixelU_f; // norm: N_pixelUW_ub
    float32 pixelV_f; // norm: N_pixelUW_ub
}PointFramePixel2Df_st;

struct PointImage2D_st {
	sint16 dCamX_sw;
	sint16 dCamY_sw;
};

typedef struct PointImage2Df_st{
	float32 dCamX_f;
	float32 dCamY_f;
}PointImage2Df_st;

struct PointCamera2D_st {
    sint16 dCamX_sw;
    sint16 dCamY_sw;
};

typedef struct PointCamera2Df_st_{
	float32 dCamX_f;
	float32 dCamY_f;
}PointCamera2Df_st;

struct PointCamera2DSL_st {
    sint32 dCamX_sl;
    sint32 dCamY_sl;
};

struct PointCamera3D_st {
    sint16 dCamX_sw;
    sint16 dCamY_sw;
    sint16 dCamZ_sw;
};

typedef struct PointCamera3Df_st_ {
    float32 dCamX_f;
    float32 dCamY_f;
    float32 dCamZ_f;
}PointCamera3Df_st;

struct PointCamera3DSL_st {
    sint32 dCamX_sl;
    sint32 dCamY_sl;
    sint32 dCamZ_sl;
};
    // New Value range: Product of the old value ranges: 32*640 = 20480
    // New resolution: Product of the resolution: 2^0*2^-11 = 4.882e-4


struct PointWorld3D_st {
    sint16 dX_sw;   // norm: N_dSW_ub
    sint16 dY_sw;
    sint16 dZ_sw;
};

typedef struct PointWorld3Df_st_ {
    float32 dX_f;   
    float32 dY_f;
    float32 dZ_f;
}PointWorld3Df_st;

struct PointVehicle3D_st {
    sint16 dX_sw;
    sint16 dY_sw;
    sint16 dZ_sw;
};

struct d1024PointWorld3D_st {
    sint16 d1024X_sw;
    sint16 d1024Y_sw;
    sint16 d1024Z_sw;
};

struct PointVarianceWorld3D_st {
    sint16 dX_sw;
    sint16 dY_sw;
    sint16 dZ_sw;
    uint16 dVarX_uw;
    uint16 dVarY_uw;
    uint16 dVarZ_uw;
};

struct VarianceWorld3d_st {
    uint16 dVarX_uw;
    uint16 dVarY_uw;
    uint16 dVarZ_uw;
};

typedef struct pointvehicle3Df_ {
    float32 dX_f;
    float32 dY_f;
    float32 dZ_f;
}PointVehicle3Df_st;

typedef struct od_key_point_frame_
{
    PointFramePixel2Df_st top_left_point;
    PointFramePixel2Df_st top_right_point;
    PointFramePixel2Df_st bottom_left_point;
    PointFramePixel2Df_st bottom_right_point;
    PointFramePixel2Df_st veh_only_point;
}OD_Key_Point_Frame_st;

typedef struct od_key_point_world_
{
    PointVehicle3Df_st top_left_point_w;
    PointVehicle3Df_st top_right_point_w;
    PointVehicle3Df_st bottom_left_point_w;
    PointVehicle3Df_st bottom_right_point_w;
    PointVehicle3Df_st veh_only_point_w;
}OD_Key_Point_World_st;

//cel add
struct PointFramePixel2D {
	float32 pixelU; // norm: N_pixelUW_ub
	float32 pixelV; // norm: N_pixelUW_ub
};

struct PointCamera2D {
	float32 dCamX;
	float32 dCamY;
};

#endif // _H_STRUCTURE_
