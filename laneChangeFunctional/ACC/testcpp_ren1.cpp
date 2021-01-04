//#include "stdafx.h"
#include <iostream>
#include <Eigen/Dense>
#include <vector>
#include <cmath>
using namespace Eigen;
using namespace std;
int main()
{
	MatrixXd tmp = MatrixXd::Ones(4, 4);
	VectorXd tmp2 = 4 * VectorXd::Ones(4);
	tmp.row(0) *= 4;
	cout << tmp;
	MatrixXf a(4, 1);		  //必须要进行初始化
	a = MatrixXf::Zero(4, 1); //初始化为0
	cout << "初始化为0" << endl
		 << a << endl;
	a = MatrixXf::Ones(4, 1); //初始化为1，矩阵大小与初始化相关，因为是动态矩阵
	cout << "初始化为1" << endl
		 << a << endl;
	a.setZero();	 //矩阵置零
	a << 1, 2, 3, 4; //手动赋值
	MatrixXf b(1, 4);
	b.setRandom(); //随机生成一个矩阵
	MatrixXf c(3, 3);
	c.setIdentity();
	cout << "置单位矩阵：" << endl
		 << c << endl;
	c.setRandom();
	MatrixXf d = c;
	d = d.inverse();
	cout << "矩阵c：" << endl
		 << c << endl;
	cout << "矩阵a：" << endl
		 << a << endl;
	cout << "矩阵b：" << b << endl;
	cout << "访问a(0)：" << endl
		 << a(0) << endl;
	cout << "矩阵相乘：" << endl
		 << a * b << endl;
	cout << "矩阵数乘：" << endl
		 << 2 * a << endl;
	cout << "矩阵c求逆d：" << endl
		 << d << endl;
	cout << "逆矩阵回乘：" << endl
		 << d * c << endl;
	cout << "逆矩阵d转置：" << endl
		 << d.transpose() << endl;
	Vector3d v(1, 2, 3);
	Vector3d w(1, 0, 0);
	cout << "向量相加：" << endl
		 << v + w << endl;
	Vector3d tes1;
	tes1[0] = 1;
	tes1[1] = 1;
	tes1[2] = 3;
	cout << tes1[0] << "\t" << tes1[1] << "\t" << tes1[2] << endl;

	// double D0 = 0.0;
	// double Ti = 10.0;
	// double Di = 3.0;
	// double t = 5.0;
	// Vector2d p0;
	// p0 << 0, D0;
	// Vector2d p1;
	// p1 << Ti / 2, 0.6666 * D0 + 0.3333 * Di;
	// Vector2d p2;
	// p2 << Ti / 2, 0.3333 * D0 + 0.6666 * Di;
	// Vector2d p3;
	// p3 << Ti, Di;
	// Vector2d p = pow((1 - (t) / Ti), 3) * p0 + 3 * pow((1 - (t) / Ti), 2) * (t) / Ti * p1 +
	// 			 3 * (1 - (t) / Ti) * pow(((t) / Ti), 2) * p2 + pow(((t) / Ti), 3) * p3;
	// cout << "p is: " << p << endl;

	// vector<vector<double>> test1;
	// vector<double> test2;
	// test2.push_back(1);
	// test2.push_back(2);
	// test2.push_back(3);
	// test1.push_back(test2);
	// test2.clear();
	// test2.push_back(4);
	// test2.push_back(5);
	// test2.push_back(6);
	// test1.push_back(test2);

	// cout << "test1 size is: " << test1.size() << test1[0].size() << endl;
	// cout << "test1 [1][1] is: " << test1[1][1] << endl;
	// MatrixXd test3(3, 2);
	// test3(0, 0) = 1;
	// test3(0, 1) = 4;
	// test3(1, 0) = 2;
	// test3(1, 1) = 5;
	// test3(2, 0) = 2;
	// test3(2, 1) = 5;
	// cout << test3 << endl;
	// cout << "test3 size is: " << test3.rows() << " " << test3.cols() << endl;
	// double test4;
	// test4 = fabs(2.5 * cos(176 / 180.0 * M_PI));
	// cout << "test4 is : " << test4 << endl;

	///////////////
	///////////////
	///////////////
	// test on quintic polynomials calculation

	// int xs, vxs, axs, xe, vxe, axe;
	// double a0, a1, a2, a3, a4, a5;
	// double T = 5;
	// xs = 0;
	// vxs = 10;
	// axs = 0;
	// xe = 30;
	// vxe = 15;
	// axe = 0;
	// Eigen::MatrixXd A(3, 3);
	// A << pow(T, 3), pow(T, 4), pow(T, 5),
	// 	3 * pow(T, 2), 4 * pow(T, 3), 5 * pow(T, 4),
	// 	6 * T, 12 * pow(T, 2), 20 * pow(T, 3);
	// Eigen::Vector3d B;
	// B << (xe - xs - vxs * T - 0.5 * axs * T * T), (vxe - vxs - axs * T), (axe - axs);

	// JacobiSVD<Eigen::MatrixXd> svd(A);
	// int rankNum = svd.rank();
	// cout << "rankNum : " << rankNum << endl;
	// int full_rank = 3;
	// if (rankNum < full_rank)
	// {
	// 	a0 = 0;
	// 	a1 = 0;
	// 	a2 = 0;
	// 	a3 = 0;
	// 	a4 = 0;
	// 	a5 = 0;
	// }
	// else
	// {
	// 	Eigen::Vector3d x;
	// 	x = A.inverse() * B;
	// 	a0 = xs;
	// 	a1 = vxs;
	// 	a2 = 0.50 * axs;
	// 	a3 = x[0];
	// 	a4 = x[1];
	// 	a5 = x[2];
	// 	cout << "original x : " << x << endl;
	// }
	// cout << a0 << ' ' << a1 << ' ' << a2 << ' ' << a3 << ' ' << a4 << ' ' << a5 << endl;
	// vector<double> a_vector;
	// a_vector.push_back(a0);
	// a_vector.push_back(a1);
	// a_vector.push_back(a2);
	// a_vector.push_back(a3);
	// a_vector.push_back(a4);
	// a_vector.push_back(a5);
	// // cout << "averctor is: " << a_vector[0] << endl;
	// //////////////

	////////////////////////////////////////
	//test on quantic_poly
	// int xs, vxs, axs, xe, vxe, axe;
	// double a0, a1, a2, a3, a4, a5;
	// double T = 5;
	// xs = 0;
	// vxs = 10;
	// axs = 0;
	// xe = 30;
	// vxe = 15;
	// axe = 0;

	// Eigen::MatrixXd A(5, 5);
	// A << 1, 0, 0, 0, 0,
	// 	0, 1, 0, 0, 0,
	// 	0, 0, 2, 0, 0,
	// 	0, 1, 2 * T, 3 * pow(T, 2), 4 * pow(T, 3),
	// 	0, 0, 2, 6 * T, 12 * pow(T, 2);

	// cout << "A matrix is: " << A << endl;
	// Eigen::Matrix<double, 5, 1> B;
	// B << xs, vxs, axs, vxe, axe;
	// cout << "B matrix is: " << B << endl;

	// JacobiSVD<Eigen::MatrixXd> svd(A);
	// int rankNum = svd.rank();
	// cout << "rankNum : " << rankNum << endl;
	// int full_rank = 5;
	// if (rankNum < full_rank)
	// {
	// 	a0 = 0;
	// 	a1 = 0;
	// 	a2 = 0;
	// 	a3 = 0;
	// 	a4 = 0;
	// }
	// else
	// {
	// 	Eigen::VectorXd x;
	// 	x = A.inverse() * B;
	// 	a0 = x[0];
	// 	a1 = x[1];
	// 	a2 = x[2];
	// 	a3 = x[3];
	// 	a4 = x[4];

	// 	cout << "original x : " << x << endl;
	// }
	// // cout << a0 << ' ' << a1 << ' ' << a2 << ' ' << a3 << ' ' << a4  << endl;
	// vector<double> a_vector;
	// a_vector.push_back(a0);
	// a_vector.push_back(a1);
	// a_vector.push_back(a2);
	// a_vector.push_back(a3);
	// a_vector.push_back(a4);

	///
	//.
	//
	// for (int i = 0; i < 5; i++)
	// {
	// 	cout << a_vector[i] << endl;
	// }
	/////////////////////////////////////
	////////////////////////
	////////////////////////

	//////////////////////////////////////////////////////////
	// calcualte jerk test
	int t = 6;
	int seg = t / 0.10 + 1;
	int index = 1;
	vector<double> jerk;
	double a3 = -2;
	double a4 = -0.4;
	double a5 = 0.01;
	cout << "a5 " << a5 << endl;
	for (double i = 0; i < 6; i += 0.1)
	{
		double val = 6 * a3 + 24 * a4 * i + 60 * a5 * pow(i, 2);
		jerk.push_back(val);
	}

	for (int i = 0; i < jerk.size(); i++)
	{
		cout << jerk[i] << endl;
	}

	double sum;

	std::vector<double>::iterator begin = jerk.begin();
	for (int i = 0; i < jerk.size(); i++)
	{
		jerk[i] = std::sqrt(abs(jerk[i]));
	}

	for (; begin != jerk.end(); begin++)
	{
		if (begin == jerk.begin())
			sum = *begin;
		else
			sum += *begin;
	}

	double mean = sum / jerk.size();

	cout << "mean value is: " << mean << endl;

	cout << sqrt(47) << endl;
	return 0;
}
