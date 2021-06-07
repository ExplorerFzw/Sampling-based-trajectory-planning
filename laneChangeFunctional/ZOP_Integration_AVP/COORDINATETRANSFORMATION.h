#ifndef COORDINATETRANSFORMATION_H_
#define COORDINATETRANSFORMATION_H_
#include"lm_common_defines.h"
#include"defines.h"
#include"inputs.h"

#define STORE1TIME10CYCLETIME 10
#define YAWBUFFER ((uint8_t) 40)

class COORDINATETRANSFORMATION
{
public:
	COORDINATETRANSFORMATION();
	~COORDINATETRANSFORMATION() {};
	void Init();
	void Calc_V(VEHSTATE_ST& t_vehState);
	void CoorTransmAsEgoMov(float& t_dx, float& t_dy);
	VEHICLE_MOVEMENT_ST& GetVehMovement_st() { return m_vehMovement_st; }
private:
	void VehMovCalc(VEHSTATE_ST& t_vehState);
	VEHICLE_MOVEMENT_ST m_vehMovement_st;
	float m_yaw[YAWBUFFER];// store 1 time each 50ms
	uint8_t m_firstPPos;
	uint8_t m_lastPPos;
	uint16_t m_cycleCounter;

};

#endif

