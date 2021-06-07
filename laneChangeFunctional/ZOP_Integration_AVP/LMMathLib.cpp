#include"LMMathLib.h"

//***************** Interp1********************************
// linear interpolation
// t_xArr:input array - ascending order 
// t_yArr: input array
// t_num: the member number of input array
// t_x: independent variable
float Interp1(float* t_xArr, float* t_yArr, uint8_t t_num, float t_x)//linear
{
	
	float t_value = 0.0;
	for (uint8_t t_i = 0; t_i < t_num; t_i++)
	{
		if (t_x <= t_xArr[0])
		{
			t_value = t_yArr[0];
			break;
		}
		else if (t_x >= t_xArr[t_num - 1])
		{
			t_value = t_yArr[t_num - 1];
			break;
		}
		else
		{
			if (t_x <= t_xArr[t_i])
			{
				t_value = t_yArr[t_i - 1] + (t_x - t_xArr[t_i -1])/(t_xArr[t_i] - t_xArr[t_i - 1])*(t_yArr[t_i] - t_yArr[t_i - 1]);
				break;
			}
		}
	}
	return t_value;
}
//***************** Interp2********************************
// linear interpolation
// t_xArr:input array - ascending order 
// t_yArr: input array - ascending order 
// t_zArr: input array
// t_num: the member number of input array
// t_x: independent variable
// t_y: independent variable
float Interp2(float* t_xArr, float* t_yArr, float* t_zArr, uint8_t t_num, float t_x, float t_y)//linear
{
	float t_value = 0.0, t_xRatio = 0,t_yRatio = 0;
	uint8_t t_xIndex = 0, t_yIndex = 0;
	if ((t_x <= t_xArr[0]) && (t_y <= t_yArr[0]))
	{
		t_value = t_zArr[0];
	}
	else if ((t_x >= t_xArr[t_num - 1]) && (t_y >= t_yArr[t_num - 1]))
	{
		t_value = t_zArr[t_num* t_num - 1];
	}
	else
	{
		float t_tem = 0, t_temX1 = 0, t_temX2 = 0, t_temZ0 = 0, t_temZ1 = 0, t_temZ2 = 0, t_temZ3 = 0;
		if (t_x <= t_xArr[0])
		{
			t_xIndex = 0;
			t_xRatio = 0.0;
		}
		else if (t_x >= t_xArr[t_num - 1])
		{
			t_xIndex = t_num - 2;
			t_xRatio = 1;
		}
		else
		{
			for (uint8_t t_i = 1; t_i < t_num; t_i++)
			{
				if (t_x <= t_xArr[t_i])
				{
					t_xIndex = t_i - 1;
					t_xRatio = (t_x - t_xArr[t_i - 1]) / (t_xArr[t_i] - t_xArr[t_i - 1]);
					break;
				}
			}
		}


		if (t_y <= t_yArr[0])
		{
			t_yIndex = 0;
			t_yRatio = 0.0;
		}
		else if (t_y >= t_yArr[t_num - 1])
		{
			t_yIndex = t_num - 2;
			t_yRatio = 1.0;
		}
		else
		{
			for (uint8_t t_i = 1; t_i < t_num; t_i++)
			{
				if (t_y <= t_yArr[t_i])
				{
					t_yIndex = t_i - 1;
					t_yRatio = (t_y - t_yArr[t_i - 1]) / (t_yArr[t_i] - t_yArr[t_i - 1]);
					break;
				}
			}
		}

		
		t_temZ0 = t_zArr[t_xIndex * t_num + t_yIndex];
		t_temZ1 = t_zArr[(t_xIndex+1) * t_num + t_yIndex];
		t_temZ2 = t_zArr[t_xIndex  * t_num + t_yIndex + 1];
		t_temZ3 = t_zArr[(t_xIndex + 1) * t_num + t_yIndex + 1];
		t_temX1 = t_temZ0 + t_xRatio * (t_temZ1 - t_temZ0);
		t_temX2 = t_temZ2 + t_xRatio * (t_temZ3 - t_temZ2);
		t_tem = t_temX1 + t_yRatio*(t_temX2 - t_temX1);
		t_value = t_tem;
	}
	
	return t_value;
}

//***************** polinomial fit********************************
// polinomial : y=c0 + c1*x + c2*x*x + c3*x*x*x
// t_pointNum: the number of points
// points[]: include the x and y 
// COEFF: a struct is used to save the coefficient: c0, c1, c2,c3

void polfit3(POINT_X points[], int t_pointNum, COEFF& t_coeff)//最小二乘 三次多项式拟合 y=c0 + c1*x + c2*x*x + c3*x*x*x  
{


	//-----------------basic method---------------------------
	//n c0     + sumX c1   + sumXX c2   +  sumXXX c3   = sumY
	//sumX c0  + sumXX c1  + sumXXX c2  +  sumXXXX c3  = sumXY
	//sumXX c0 + sumXXX c1 + sumXXXX c2 +  sumXXXXX c3 = sumXXY
	//sumXXX c0+sumXXXX c1 + sumXXXXX c2+  sumXXXXXX c3 =sumXXXY

	long double sumX = 0, sumY = 0, sumXX = 0, sumXXX = 0, sumXXXX = 0, sumXXXXX = 0, sumXXXXXX = 0, sumXXXXXXX = 0, sumXY = 0, sumXXY = 0, sumXXXY = 0;//建立方程组
	for (int t_i = 0; t_i < t_pointNum; t_i++)
	{
		sumX = sumX + points[t_i].x;
		sumY = sumY + points[t_i].y;
		sumXX = sumXX + points[t_i].x * points[t_i].x;
		sumXXX = sumXXX + points[t_i].x * points[t_i].x * points[t_i].x;
		sumXXXX = sumXXXX + points[t_i].x * points[t_i].x * points[t_i].x * points[t_i].x;
		sumXXXXX = sumXXXXX + points[t_i].x * points[t_i].x * points[t_i].x * points[t_i].x * points[t_i].x;//
		sumXXXXXX = sumXXXXXX + points[t_i].x * points[t_i].x * points[t_i].x * points[t_i].x * points[t_i].x * points[t_i].x;
		//	sumXXXXXXX = sumXXXXXXX + points[t_i].x*points[t_i].x*points[t_i].x*points[t_i].x*points[t_i].x*points[t_i].x*points[t_i].x;
		sumXY = sumXY + points[t_i].x * points[t_i].y;
		sumXXY = sumXXY + points[t_i].x * points[t_i].x * points[t_i].y;
		sumXXXY = sumXXXY + points[t_i].x * points[t_i].x * points[t_i].x * points[t_i].y;

	}

	double  a11 = t_pointNum; double  a12 = sumX;    double  a13 = sumXX;    double  a14 = sumXXX;    double  b1 = sumY;      //构造矩阵   求解方程系数   a11 第一行第一列
	double  a21 = sumX;		  double  a22 = sumXX;   double  a23 = sumXXX;   double  a24 = sumXXXX;   double  b2 = sumXY;
	double  a31 = sumXX;      double  a32 = sumXXX;  double  a33 = sumXXXX;  double  a34 = sumXXXXX;  double  b3 = sumXXY;
	double  a41 = sumXXX;     double  a42 = sumXXXX; double  a43 = sumXXXXX; double  a44 = sumXXXXXX; double  b4 = sumXXXY;
	//double a11 = 2;      double  a12 = 4;   double  a13 = -2;   double  b1 = 2;      //构造矩阵   求解方程系数   a11 第一行第一列
	//double  a21 = 1;  double  a22 = -3;  double  a23 = -3;  double  b2 = -1;
	//double  a31 = 4; double  a32 = 2; double  a33 = 2; double  b3 = 3;

	//R2=R2-(a21/a11)*R1     ------------------------------------------------------------ - 进行消元    高斯消元法  第一例消元
	double a21x, a22x, a23x, a24x, b2x;
	a21x = a21 - a21 / a11 * a11; a22x = a22 - a21 / a11 * a12; a23x = a23 - a21 / a11 * a13; a24x = a24 - a21 / a11 * a14; b2x = b2 - a21 / a11 * b1;
	//R3=R3-(a31/a11)*R1
	double a31x, a32x, a33x, a34x, b3x;
	a31x = a31 - a31 / a11 * a11; a32x = a32 - a31 / a11 * a12; a33x = a33 - a31 / a11 * a13; a34x = a34 - a31 / a11 * a14; b3x = b3 - a31 / a11 * b1;
	//R4=R4-(a41/a11)*R1
	double a41x, a42x, a43x, a44x, b4x;
	a41x = a41 - a41 / a11 * a11; a42x = a42 - a41 / a11 * a12; a43x = a43 - a41 / a11 * a13; a44x = a44 - a41 / a11 * a14; b4x = b4 - a41 / a11 * b1;

	//------------------------------------------------------------ - 进行消元    高斯消元法  第二例消元
	//R3=R3-(a32/a22)*R2
	double a32xx, a33xx, a34xx, b3xx;
	a32xx = a32x - a32x / a22x * a22x; a33xx = a33x - a32x / a22x * a23x; a34xx = a34x - a32x / a22x * a24x; b3xx = b3x - a32x / a22x * b2x;
	//R4=R4-(a42/a22)*R2
	double a42xx, a43xx, a44xx, b4xx;
	a42xx = a42x - a42x / a22x * a22x; a43xx = a43x - a42x / a22x * a23x; a44xx = a44x - a42x / a22x * a24x; b4xx = b4x - a42x / a22x * b2x;

	//------------------------------------------------------------ - 进行消元    高斯消元法  第三例消元
	//R4=R4-(a43/a33)R3
	double a43xxx, a44xxx, b4xxx;
	a43xxx = a43xx - a43xx / a33xx * a33xx; a44xxx = a44xx - a43xx / a33xx * a34xx; b4xxx = b4xx - a43xx / a33xx * b3xx;

	t_coeff.c3 = b4xxx / a44xxx;
	t_coeff.c2 = (b3xx - a34xx * t_coeff.c3) / a33xx;
	t_coeff.c1 = (b2x - a23x * t_coeff.c2 - a24x * t_coeff.c3) / a22x;
	t_coeff.c0 = (b1 - a12 * t_coeff.c1 - a13 * t_coeff.c2 - a14 * t_coeff.c3) / a11;
}
