#ifndef VEHICLEMOVEMENT_H_
#define VEHICLEMOVEMENT_H_
#include"Inputs.h"
#include"Outputs.h"
#include"LMCommonDefines.h"


class VehicleMovement
{
public:
	VehicleMovement();
	~VehicleMovement() {};
	void Init();
	void Calc_V(VEHSTATE_ST& t_vehState);
	VEHICLE_MOVEMENT_ST& GetVehMovement_st() { return m_vehMovement_st; }
	VEHMOVBUFFINFO_ST& GetEgoYawBuff_st() { return m_yaw_st; }
	VEHMOVBUFFINFO_ST& GetEgoYawRateBuff_st() { return m_yawRate_st; }
	VEHMOVBUFFINFO_ST& GetEgoVxRefBuff_st() { return m_vRef_st; }
	VEHMOVBUFFINFO_ST& GetEgoAxREFBuff_st() { return m_aRef_st; }
private:
	void VehMovCalc(VEHSTATE_ST& t_vehState);
	void VehTraCalc(VEHSTATE_ST& t_vehState);
	VEHICLE_MOVEMENT_ST m_vehMovement_st;
	VEHMOVBUFFINFO_ST m_yaw_st;
	VEHMOVBUFFINFO_ST m_yawRate_st;
	VEHMOVBUFFINFO_ST m_vRef_st;
	VEHMOVBUFFINFO_ST m_aRef_st;
	VEHMOVBUFFINFO_ST m_curvature_st;
	uint16_t m_cycleCounter;
	uint8_t m_CycleCountEach50ms;// 50 ms each time
};

#endif

