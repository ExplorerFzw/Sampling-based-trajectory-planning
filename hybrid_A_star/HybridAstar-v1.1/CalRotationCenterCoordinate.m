function [O_X,O_Y,nRet] = CalRotationCenterCoordinate(cSlotPosition,nSteeringDirection,X,Y,Yaw,fRearAxleCenterRadius)
%RotationCenterCoordinateCalculation 此处显示有关此函数的摘要
%函数功能: 根据当前车辆位置姿态/方向盘转动方向/后轴中心点转弯半径，计算车辆瞬时转动中心坐标
%输入参数:
% nSteeringDirection:方向盘转动方向    -1=右转; 1=左转
% X,Y,Yaw:车辆位置姿态坐标
% fRearAxleCenterRadius:后轴中心点转弯半径   (>0)
% 输出参数:
% O_X,O_Y:瞬时转动中心坐标
%返回值:
%      -1:无效
%      0:有效

nRet = -1;
if(nSteeringDirection ~= 1) && (nSteeringDirection ~= -1)
    return;
else
    O_X = X - cSlotPosition * sign(nSteeringDirection) * fRearAxleCenterRadius * sin(Yaw);
    O_Y = Y + cSlotPosition * sign(nSteeringDirection) * fRearAxleCenterRadius * cos(Yaw);
    nRet = 0;
end

end

