/******************************************************************************/
/*! \file:
 *
 *  \brief:
 *
 *  \author: CAI Yuxi
 *
 *  \data:2020-12
 */
 /******************************************************************************/

#ifndef LM_MATH_LIB_H_
#define LM_MATH_LIB_H_
#include"LMCommonDefines.h"


template <class T>
T MIN_TP(T& val1, T& val2)
{
	if (val1 >= val2)
	{
		return val2;
	}
	else
	{
		return val1;
	}
}
template <class T>
T MAX_TP(T& val1, T& val2)
{
	if (val1 >= val2)
	{
		return val1;
	}
	else
	{
		return val2;
	}
}

void polfit3(POINT_X points[], int t_pointNum, COEFF& t_coeff);

float Interp1(float *t_xArr,float *t_yArr,uint8_t t_num, float t_x);//linear
float Interp2(float* t_xArr, float* t_yArr,float* t_zArr, uint8_t t_num, float t_x,float t_y);//linear

#endif

