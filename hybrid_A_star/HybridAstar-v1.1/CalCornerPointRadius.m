function [fRightRearPointRadius,fRightFrontPointRadius,fLeftFrontPointRadius,fLeftRearPointRadius] = ...
    CalCornerPointRadius(nSteeringDirection,fRearAxleCenterRadius)
%CalCornerPointRadius 根据车辆方向盘转角/后轴中心点转弯半径/行驶方向，计算车辆四个角点的转弯半径
% 输入参数:
% nSteeringDirection:方向盘转动方向    -1=右转; 1=左转
% fRearAxleCenterRadius:后轴中心点转弯半径   (正实数)
% 输出参数:
% fRightRearPointRadius:右后角点转弯半径(E)
% fRightFrontPointRadius:右前角点转弯半径(F)
% fLeftFrontPointRadius:左前角点转弯半径(G)
% fLeftRearPointRadius:左后角点转弯半径(H)

global cSlotPosition RearAxle2VehTail_Dis VehLength VehWidth
if (nSteeringDirection ~= 1) && (nSteeringDirection ~= -1) || (fRearAxleCenterRadius <= 0)
    fprintf("计算角点半径出错\n");
else
    if (nSteeringDirection == 1)
        fRightRearPointRadius = sqrt((fRearAxleCenterRadius + cSlotPosition*VehWidth/2)^2 + RearAxle2VehTail_Dis^2);
        fRightFrontPointRadius = sqrt((fRearAxleCenterRadius + cSlotPosition*VehWidth/2)^2 + (VehLength - RearAxle2VehTail_Dis)^2);
        fLeftFrontPointRadius = sqrt((fRearAxleCenterRadius - cSlotPosition*VehWidth/2)^2 + (VehLength - RearAxle2VehTail_Dis)^2);
        fLeftRearPointRadius = sqrt((fRearAxleCenterRadius - cSlotPosition*VehWidth/2)^2 + (RearAxle2VehTail_Dis)^2);
    else
        fRightRearPointRadius = sqrt((fRearAxleCenterRadius - cSlotPosition*VehWidth/2)^2 + RearAxle2VehTail_Dis^2);
        fRightFrontPointRadius = sqrt((fRearAxleCenterRadius - cSlotPosition*VehWidth/2)^2 + (VehLength - RearAxle2VehTail_Dis)^2);
        fLeftFrontPointRadius = sqrt((fRearAxleCenterRadius + cSlotPosition*VehWidth/2)^2 + (VehLength - RearAxle2VehTail_Dis)^2);
        fLeftRearPointRadius = sqrt((fRearAxleCenterRadius + cSlotPosition*VehWidth/2)^2 + RearAxle2VehTail_Dis^2);
    end
end

end

