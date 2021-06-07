#ifndef _FUSION_DATASTRUCT_OD_H_
#define _FUSION_DATASTRUCT_OD_H_


/************************** Include *******************************************/

#include "basic_type.h"


#ifdef __cplusplus
extern "C"{
#endif /* __cplusplus */


/************************** Macro *********************************************/

#define VISION_MAX_OBJ_NUM      (40U)  // should be confirmed by supplier

#define PREDICT_STATUS  (2)
#define INITED  (0)
#define MEASURED  (1)

/************************** Struct And Enum ***********************************/

/*
    vision object status

    0:Initialized,
    1:Measured,
    2:Predicted,
*/
typedef uint32 VisionObjStatus;


/*Object total age and stage age, lifetime in frames*/
typedef struct sVisionObjStageAge_t
{
    uint16 totalAge;
    uint16 initAge;
    uint16 measureAge;
    uint16 predictAge;
}VisionObjStageAge;


/*Object Bounding box pixel location on the image plane*/
typedef struct sVisionObjBoundary_t
{
    sint16 X1;
    sint16 Y1;
    sint16 X2;
    sint16 Y2;
}VisionObjBoundary;

/*
    Object classification

    0: Unknown
    1: Pedestrian
    2: Vehicle
	3: Truck
	4:Motor bike
	5:Bicycle
	6: General_object
	7: Animal
    Between car and truck, at the moment, it is not supported
*/
typedef uint32 VisionObjType;

/*Object position vector*/
typedef struct sVisionObjcoord_t
{
    float32 lateral;
    float32 lateralVariance;
    float32 longitudinal;
    float32 longitudinalVariance;
}VisionObjcoord;

/*Object velocity vector, absolute velocity and their variances*/
typedef struct sVisionObjVelocity_t
{
    float32    Vx;
    float32    VxVariance;
    float32    Vy;
    float32    VyVariance;
}VisionObjVelocity;


/*Angle of object rear/front center and their variances*/
typedef struct sVisionObjAngle_t
{
    float32    centerAngle;
    float32    centerAngleVariance;
}VisionObjAngle;

/*object acceleration vector, absolute acceleration and their variances*/
typedef struct sVisionObjAcce_t
{
    float32    Ax;
    float32    AxVariance;
    float32    Ay;
    float32    AyVariance;
}VisionObjAcce;

typedef struct sBoxSize_t
{
    float32 length;
    float32 width;
    float32 height;
}BoxSize;


/* this version use for CV project */

/*
    vision object
    Cartesian vehicle coordinates(parallel to car, centered below front axis center on groundlevel) will be used.
*/
typedef struct sVisionObj_t
{
    uint32                  obj_ID;         /**< Object ID */

    VisionObjStatus         obj_status;     /**< Object status */

    VisionObjStageAge       obj_stageAge;   /**< Object total age and stage age, lifetime in frames */

    VisionObjBoundary       obj_boundary;   /**< Object Bounding box pixel location on the image plane */

    VisionObjType           obj_type;       /**< Object classification */

    uint32                  obj_typeConfi;  /**< type confidence value.
                                                The range is not normalized, therefore [-FLT_MAX, FLT_MAX] is the possible range.
                                                In practice with the current releases [0.0, 8192.0] is the theoretic possible range,
                                                where most detections fall in [0, 100]. However, this might change in future releases.
                                                The higher the value is the more confident we are. */

    VisionObjcoord          obj_coordinate;     /**< Object position vector, Cartesian vehicle coordinates(parallel to car, centered below front axis center on groundlevel) */

    VisionObjVelocity       obj_velocity;       /**< Object velocity vector, absolute velocity and their variances */

    VisionObjAngle          obj_angleOfCenter;  /**< Angle of object rear/front center and their avriances */

    float32                  obj_TTC;            /**< Object time-to-collision estimation (TTC) */

    float32                 obj_TTCVariance;    /**< variance measurement */

    VisionObjAcce           obj_acceleration;   /*< Object acceleration*/

    float32                 obj_existProb;      /*< Object existence probability*/

   // float32                 obj_headingAngle;   /*< It is defined as the angle between the heading of the detected vehicle and the heading of the host vehicle. For moving object*/

    BoxSize                 obj_boxSize;        /*< Length/Width/Height of Object*/

    uint8                   obj_angleOfObject;  /*< For vehicle, angles are quantized in 8 directions. For pedestrians,
                                                    and two wheelers, angles are quantized in 4 directions. (anti-clockwise direction)
													0- Front 1-Left Front 2-Left 3-Rear Left 4-Rear 5-Rear Right 6-Right 7-Front Right*/
    uint8                  reserved1[3];   

	float32                 obj_Heading;

	float32                 obj_Heading_STD;

	float32                 obj_Heading_V;

	float32                 obj_Heading_STD_V;

    
    uint32                  reserved2[2];       /**< reserved2[0]: the reference point X pixel location on the image plane,
                                                     reserved2[1]: the reference point Y pixel location on the image plane,
                                                     reserved2[2]: nouse,
                                                     reserved2[3]: nouse */

}VisionObj; /**< sizeof(VisionObj) is 136 bytes*/

/* vision object list */
typedef struct sVisionObjList_t
{
    float64     objTimestamp;       /**< time stamp for 64bit*/
    uint32      objFrameNum;        /**< picture frame num since the first picture. */
    uint8       objCount;           /**< object num */
    uint8       reserved[3];        /**< reserved field */
    VisionObj   objList[VISION_MAX_OBJ_NUM];    /**< object list */
    uint32      reserved1[2];       /**< reserved1[0]: 0:night 1:twilight 2:day 255:unkown, reserved1[1]: nouse */
	uint32      dayNightState;     /**< 0:night 1:twilight 2:day 255:unkown */
}VisionObjList;  /**< sizeof(VisionObjList) is 10904(CV) bytes*/


/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

/************************** External Function Decleration *********************/



#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _FUSION_DATASTRUCT_OD_H_ */

