function [x_new,y_new]=coordinate_transform(x,y,theta) %theta为坐标系旋转角度
%本函数用于坐标系绕着原点旋转后得到的新坐标 逆时针为正 顺时针为负数
alpha=angle_calculate_xy(x,y);
L=sqrt(x^2+y^2);
x_new=L*cos(theta+alpha);
y_new=L*sin(theta+alpha);



