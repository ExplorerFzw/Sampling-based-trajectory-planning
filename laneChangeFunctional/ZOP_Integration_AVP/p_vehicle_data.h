#ifndef _VEHICLE_DATA_H_
#define _VEHICLE_DATA_H_

/************************** Include *******************************************/

#include "basic_type.h"

#ifdef __cplusplus
extern "C"{
#endif /* __cplusplus */


/************************** Macro *********************************************/


/************************** Struct And Enum ***********************************/

typedef struct sCommon_GpsInfo_t
{
    uint32          latitude;       /**< latitude value, unit: 0.000001 degree */
    uint32          longitude;      /**< longitude value, unit: 0.000001 degree */
    uint32          latHemisphere;  /**< latitude hemisphere, value: 1-N or 2-S */
    uint32          lonHemisphere;  /**< longitude hemisphere, value: 1-E or 2-W */
    float32         antennaHeight;  /**< antenna height above/below mean sea level, -9999.9 to 99999.9 meters */
} CommonGpsInfo;

/* vehicle data input for SDF and SF using */
typedef struct sVehicleData_t
{
    uint64  speedTimeStamp;                 /**< measured time of host vehicle speed, us */
    uint32  speedValidity;                  /**< quality factor of host speed: 0-undefined,1-temp,2-accuracy is without spec,3-specified accurancy is calculateds */
    float32 speed;                          /**< host vehicle speed, m/s */

    uint64  yawRateTimeStamp;               /**< measured time of host vehicle yawrate, us */
    uint32  yawRateValidity;                /**< quality factor of host yawrate: 0-undefined,1-temp,2-accuracy is without spec,3-specified accurancy is calculated */
    float32 yawRate;                        /**< host vehicle yawrate, rad/s */

    uint64  accelerTimeStamp;               /**< measured time of host vehicle acceleration, us */
    uint32  accelerValidity;                /**< quality factor of host acceleration: 0-undefined,1-temp,2-accuracy is without spec,3-specified accurancy is calculateds */
    float32 acceleration;                   /**< host vehicle acceleration, m/s2 */

    uint64  vehicleSpeedLongitudeTimeStamp; /**< measured time of host vehicle longitudinal speed, us */
    uint32  vehicleSpeedLongitudeValidity;  /**< quality factor of host longitudinal speed: 0-undefined,1-temp,2-accuracy is without spec,3-specified accurancy is calculated */
    float32 vehicleSpeedLongitude;          /**< host vehicle longitudinal speed from VDDM, m/s */

    uint64  vehicleMotionStatusTimeStamp;   /**< measured time of host vehicle motion status, us */
    uint32  vehicleMotionStatusValidity;    /**< quality factor of motion status  */
    uint32  vehicleMotionStatus;            /**< vehicle motion state signal from VDDM */

    CommonGpsInfo gpsInfo;                  /**< reserved for GPS information */

    uint32  reserved[17];
}VehicleData;  /**< sizeof = 168bytes*/

/* vehicle data input for alg using */
typedef struct sVehicleDataList_t
{
    uint64  speedTimeStamp;                 /**< measured time of host vehicle speed, us */
    uint32  speedValidity;                  /**< quality factor of host speed: 0-undefined,1-temp,2-accuracy is without spec,3-specified accurancy is calculateds */
    float32 speed;                          /**< host vehicle speed, m/s */

    uint64  yawRateTimeStamp;               /**< measured time of host vehicle yawrate, us */
    uint32  yawRateValidity;                /**< quality factor of host yawrate: 0-undefined,1-temp,2-accuracy is without spec,3-specified accurancy is calculated */
    float32 yawRate;                        /**< host vehicle yawrate, rad/s */

    uint64  accelerTimeStamp;               /**< measured time of host vehicle longitudial acceleration, us */
    uint32  accelerValidity;                /**< quality factor of host vehicle longitudial acceleration: 0-undefined,1-temp,2-accuracy is without spec,3-specified accurancy is calculateds */
    float32 acceleration;                   /**< host vehicle longitudial acceleration, m/s2 */

    uint64  vehicleSpeedLongitudeTimeStamp; /**< measured time of host vehicle longitudinal speed, us */
    uint32  vehicleSpeedLongitudeValidity;  /**< quality factor of host longitudinal speed: 0-undefined,1-temp,2-accuracy is without spec,3-specified accurancy is calculated */
    float32 vehicleSpeedLongitude;          /**< host vehicle longitudinal speed from VDDM, m/s */

    uint64  vehicleMotionStatusTimeStamp;   /**< measured time of host vehicle motion status, us */
    uint32  vehicleMotionStatusValidity;    /**< quality factor of motion status  */
    uint32  vehicleMotionStatus;            /**< vehicle motion state signal from VDDM */

    uint64  steeringWheelAngleTimeStamp;    /**< measured time of host steering wheel angle, us */
    uint32  steeringWheelAngleValidity;     /**< quality factor of steering wheel angle: 0-undefined,1-valid */
    float32 steeringWheelAngle;             /**< host steering wheel angle, rad */

    uint64  gearSwitchPositionTimeStamp;    /**< measured time of host gear switch position, us */
    uint32  gearSwitchPositionValidity;     /**< quality factor of gear switch position: 0-undefined,1-valid */
    sint32  gearSwitchPosition;             /**< host gear switch position, value <0: back, >0: forward, 0: free, 251: park */

    uint64  wheelSpeedFrontLeftTimeStamp;   /**< measured time of host wheel speed front left, us */
    uint32  wheelSpeedFrontLeftValidity;    /**< quality factor: 0-undefined,1-valid */
    float32 wheelSpeedFrontLeft;            /**< value: m/s */

    uint64  wheelSpeedFrontRightTimeStamp;  /**< measured time of host wheel speed front right, us */
    uint32  wheelSpeedFrontRightValidity;   /**< quality factor: 0-undefined,1-valid */
    float32 wheelSpeedFrontRight;           /**< value: m/s */

    uint64  wheelSpeedRearLeftTimeStamp;    /**< measured time of host wheel speed rear left, us */
    uint32  wheelSpeedRearLeftValidity;     /**< quality factor: 0-undefined,1-valid */
    float32 wheelSpeedRearLeft;             /**< value: m/s */

    uint64  wheelSpeedRearRightTimeStamp;   /**< measured time of host wheel speed rear right, us */
    uint32  wheelSpeedRearRightValidity;    /**< quality factor: 0-undefined,1-valid */
    float32 wheelSpeedRearRight;            /**< value: m/s */

    uint64  lateralAccelerationTimeStamp;   /**< measured time of host lateral acceleration, us */
    uint32  lateralAccelerationValidity;    /**< quality factor: 0-undefined,1-valid */
    float32 lateralAcceleration;            /**< value: m/s^2 */

    uint64  acceleratorPedalPosnTimeStamp;  /**< measured time of host accelerator pedal position, us */
    uint32  acceleratorPedalPosnValidity;   /**< quality factor: 0-undefined,1-valid */
    float32 acceleratorPedalPosn;           /**< value: % */

    uint64  brakePedalPositionTimeStamp;    /**< measured time of host brake pedal position, us */
    uint32  brakePedalPositionValidity;     /**< quality factor: 0-undefined,1-valid */
    float32 brakePedalPosition;             /**< value: % */

    CommonGpsInfo gpsInfo;                  /**< reserved for GPS information */
    uint32  frameNum;                       /**< picture frame num since the first picture */

    uint32  reserved[68];                   /**< reserve 17 numbers vehicle signal */
}VehicleDataList;  /**< sizeof = 520bytes*/


/************************** Inline Function Definition ************************/


/************************** External Variable Decleration  ********************/


/************************** External Function Decleration *********************/



#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _VEHICLE_DATA_H_ */
