function [O_X,O_Y,nRet] = CalRotationCenterCoordinate(cSlotPosition,nSteeringDirection,X,Y,Yaw,fRearAxleCenterRadius)
%RotationCenterCoordinateCalculation �˴���ʾ�йش˺�����ժҪ
%��������: ���ݵ�ǰ����λ����̬/������ת������/�������ĵ�ת��뾶�����㳵��˲ʱת����������
%�������:
% nSteeringDirection:������ת������    -1=��ת; 1=��ת
% X,Y,Yaw:����λ����̬����
% fRearAxleCenterRadius:�������ĵ�ת��뾶   (>0)
% �������:
% O_X,O_Y:˲ʱת����������
%����ֵ:
%      -1:��Ч
%      0:��Ч

nRet = -1;
if(nSteeringDirection ~= 1) && (nSteeringDirection ~= -1)
    return;
else
    O_X = X - cSlotPosition * sign(nSteeringDirection) * fRearAxleCenterRadius * sin(Yaw);
    O_Y = Y + cSlotPosition * sign(nSteeringDirection) * fRearAxleCenterRadius * cos(Yaw);
    nRet = 0;
end

end

