function [X_Center,Y_Center]=RotationCenterCalculate(X,Y,Theta,Steering_Direction,R)
%������Сת��뾶�µ�Բ�ĵ�����
%���루X,Y,Theta��Ϊ������ǰλ������
%

X_Center = X-sign(Steering_Direction) * R * sin(Theta);
Y_Center = Y+sign(Steering_Direction) * R * cos(Theta);
