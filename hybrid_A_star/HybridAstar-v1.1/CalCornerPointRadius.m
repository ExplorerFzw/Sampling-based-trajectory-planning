function [fRightRearPointRadius,fRightFrontPointRadius,fLeftFrontPointRadius,fLeftRearPointRadius] = ...
    CalCornerPointRadius(nSteeringDirection,fRearAxleCenterRadius)
%CalCornerPointRadius ���ݳ���������ת��/�������ĵ�ת��뾶/��ʻ���򣬼��㳵���ĸ��ǵ��ת��뾶
% �������:
% nSteeringDirection:������ת������    -1=��ת; 1=��ת
% fRearAxleCenterRadius:�������ĵ�ת��뾶   (��ʵ��)
% �������:
% fRightRearPointRadius:�Һ�ǵ�ת��뾶(E)
% fRightFrontPointRadius:��ǰ�ǵ�ת��뾶(F)
% fLeftFrontPointRadius:��ǰ�ǵ�ת��뾶(G)
% fLeftRearPointRadius:���ǵ�ת��뾶(H)

global cSlotPosition RearAxle2VehTail_Dis VehLength VehWidth
if (nSteeringDirection ~= 1) && (nSteeringDirection ~= -1) || (fRearAxleCenterRadius <= 0)
    fprintf("����ǵ�뾶����\n");
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

