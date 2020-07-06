function [X_E_new,Y_E_new,X_F_new,Y_F_new,X_G_new,Y_G_new,X_H_new,Y_H_new]=coordinate_calculate_dynamic_rotate_rear_axle_center(x,y,theta)
%计算当前位置下车辆的四角绝对坐标系坐标

global VehLength VehWidth RearAxle2VehTail_Dis

%相对坐标系（车辆坐标系）下车辆四角坐标；以后轴中心点为原点，车头朝向为x轴方向，车左方向为y轴方向
X_E_opposite = -RearAxle2VehTail_Dis;
Y_E_opposite = -VehWidth/2;
X_F_opposite = VehLength - RearAxle2VehTail_Dis;
Y_F_opposite = Y_E_opposite;
X_G_opposite = X_F_opposite;
Y_G_opposite = VehWidth/2;
X_H_opposite = X_E_opposite;
Y_H_opposite = Y_G_opposite;

[X_E_new_opposite,Y_E_new_opposite]=coordinate_transform(X_E_opposite,Y_E_opposite,theta);
X_E_new=X_E_new_opposite+x;
Y_E_new=Y_E_new_opposite+y;
[X_F_new_opposite,Y_F_new_opposite]=coordinate_transform(X_F_opposite,Y_F_opposite,theta);
X_F_new=X_F_new_opposite+x;
Y_F_new=Y_F_new_opposite+y;
[X_G_new_opposite,Y_G_new_opposite]=coordinate_transform(X_G_opposite,Y_G_opposite,theta);
X_G_new=X_G_new_opposite+x;
Y_G_new=Y_G_new_opposite+y;
[X_H_new_opposite,Y_H_new_opposite]=coordinate_transform(X_H_opposite,Y_H_opposite,theta);
X_H_new=X_H_new_opposite+x;
Y_H_new=Y_H_new_opposite+y;
