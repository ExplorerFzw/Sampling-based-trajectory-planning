function [tRotationNewPoint_x,tRotationNewPoint_y] = RotateCoordinateOfPoint(tRotationCenter_x,tRotationCenter_y,tRotationPoint_x,tRotationPoint_y,fRotationYaw)
%RotateCoordinateOfPoint ����һ����һ����תһ���ǶȺ��������
%�������:
% tRotationCenter:��ת���ĵ�
% tRotationPoint:��ת��
% fRotationYaw:��ת�Ƕ� ��ʱ��Ϊ��
%�������:
% tRotationNewPoint:������

tRotationNewPoint_x = tRotationCenter_x + (tRotationPoint_x - tRotationCenter_x)*cos(fRotationYaw) - (tRotationPoint_y - tRotationCenter_y)*sin(fRotationYaw);
tRotationNewPoint_y = tRotationCenter_y + (tRotationPoint_x - tRotationCenter_x)*sin(fRotationYaw) + (tRotationPoint_y - tRotationCenter_y)*cos(fRotationYaw);

end

