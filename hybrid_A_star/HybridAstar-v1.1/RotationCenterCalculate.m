function [X_Center,Y_Center]=RotationCenterCalculate(X,Y,Theta,Steering_Direction,R)
%计算最小转弯半径下的圆心点坐标
%输入（X,Y,Theta）为车辆当前位置坐标
%

X_Center = X-sign(Steering_Direction) * R * sin(Theta);
Y_Center = Y+sign(Steering_Direction) * R * cos(Theta);
