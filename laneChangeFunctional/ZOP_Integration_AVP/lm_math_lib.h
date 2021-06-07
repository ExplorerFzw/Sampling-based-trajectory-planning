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

struct POINT_X
{
	float y;
	float x;
};
struct COEFF
{
	float c0;
	float c1;
	float c2;
	float c3;
};

void polfit3(POINT_X points[], int t_pointNum, COEFF& t_coeff);

#endif

