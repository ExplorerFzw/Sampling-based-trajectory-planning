#ifndef COORDINATETRANSFORMATION_H_
#define COORDINATETRANSFORMATION_H_
#include"LMCommonDefines.h"
#include"Defines.h"
#include"Inputs.h"

class CoordinationTransformation
{
public:
	CoordinationTransformation();
	~CoordinationTransformation() {};
	void Init();
	void Calc_V(VEHSTATE_ST& t_vehState);
	void CoorTransmAsEgoMov(float& t_dx, float& t_dy);
	VEHICLE_MOVEMENT_ST& GetVehMovement_st() { return m_vehMovement_st; }
private:
	void VehMovCalc(VEHSTATE_ST& t_vehState);
	VEHICLE_MOVEMENT_ST m_vehMovement_st;


};

#endif

