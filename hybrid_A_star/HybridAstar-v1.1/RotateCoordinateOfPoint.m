function [tRotationNewPoint_x,tRotationNewPoint_y] = RotateCoordinateOfPoint(tRotationCenter_x,tRotationCenter_y,tRotationPoint_x,tRotationPoint_y,fRotationYaw)
%RotateCoordinateOfPoint 计算一点绕一点旋转一定角度后的新坐标
%输入参数:
% tRotationCenter:旋转中心点
% tRotationPoint:旋转点
% fRotationYaw:旋转角度 逆时针为正
%输出参数:
% tRotationNewPoint:新坐标

tRotationNewPoint_x = tRotationCenter_x + (tRotationPoint_x - tRotationCenter_x)*cos(fRotationYaw) - (tRotationPoint_y - tRotationCenter_y)*sin(fRotationYaw);
tRotationNewPoint_y = tRotationCenter_y + (tRotationPoint_x - tRotationCenter_x)*sin(fRotationYaw) + (tRotationPoint_y - tRotationCenter_y)*cos(fRotationYaw);

end

