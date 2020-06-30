function [X_E_new,Y_E_new,X_F_new,Y_F_new,X_G_new,Y_G_new,X_H_new,Y_H_new] = CalVehRearAxleCenterRealTime(Speed,SteeringWheelAngle,RunningDircetion)
%CalVehRearAxleCenterRealTime �˴���ʾ�йش˺�����ժҪ
%   ������ת��+��̼Ƶķ�ʽ,20ms���³�����������λ��
global VehRearAxleCenterPoint_X VehRearAxleCenterPoint_Y VehRearAxleCenterPoint_Yaw
global SimSamplePeriod;
global VehPositionRecordIndex SteeringDirectionRT VehRadiusRT VehSteeringWheelAngle;
%������λ����
global cSlotPosition
cSlotPosition = 1;
%% ��ͼ
[X_E_new,Y_E_new,X_F_new,Y_F_new,X_G_new,Y_G_new,X_H_new,Y_H_new] = coordinate_calculate_dynamic_rotate_rear_axle_center(VehRearAxleCenterPoint_X(VehPositionRecordIndex),VehRearAxleCenterPoint_Y(VehPositionRecordIndex) * cSlotPosition,VehRearAxleCenterPoint_Yaw(VehPositionRecordIndex) * cSlotPosition);
X_V_new = [X_E_new X_F_new X_G_new X_H_new X_E_new];
Y_V_new = [Y_E_new Y_F_new Y_G_new Y_H_new Y_E_new];
 %��������ģ��
% handle = plot(X_V_new,Y_V_new,'k-','linewidth',1);
 %�����ǰ������������ϵ����
plot(VehRearAxleCenterPoint_X(VehPositionRecordIndex)/0.2,VehRearAxleCenterPoint_Y(VehPositionRecordIndex)/0.2 * cSlotPosition,'r.','linewidth',1);
pause(0.005)
% delete(handle) %ȥ������ģ�Ϳ򣨶���

%% ���³�����������λ��            
m_fLastYaw = VehRearAxleCenterPoint_Yaw(VehPositionRecordIndex);
fPhi = abs(SteeringWheelAngle);
VehPositionRecordIndex = VehPositionRecordIndex + 1;
if fPhi ~= 0 
    m_fRearAxleCenterRadiusRealTime = CalSteeringWheelAngle2Radius(sign(cSlotPosition * SteeringWheelAngle),RunningDircetion, fPhi);%���ﺬ��S����Ķο��ܻ��е�Ӱ�죬��ΪS�����ʱ��Ƕ���ʵ��û�о���ģ�
    VehRearAxleCenterPoint_Yaw(VehPositionRecordIndex) = m_fLastYaw + sign(SteeringWheelAngle * cSlotPosition)*RunningDircetion*Speed*SimSamplePeriod / m_fRearAxleCenterRadiusRealTime;
    VehRearAxleCenterPoint_X(VehPositionRecordIndex) = VehRearAxleCenterPoint_X(VehPositionRecordIndex-1) - sign(SteeringWheelAngle * cSlotPosition)*m_fRearAxleCenterRadiusRealTime*(sin(m_fLastYaw)-sin(VehRearAxleCenterPoint_Yaw(VehPositionRecordIndex)));
    VehRearAxleCenterPoint_Y(VehPositionRecordIndex) = VehRearAxleCenterPoint_Y(VehPositionRecordIndex-1) - sign(SteeringWheelAngle * cSlotPosition)*m_fRearAxleCenterRadiusRealTime*(cos(VehRearAxleCenterPoint_Yaw(VehPositionRecordIndex))-cos(m_fLastYaw));
else
    VehRearAxleCenterPoint_X(VehPositionRecordIndex) = VehRearAxleCenterPoint_X(VehPositionRecordIndex-1) + RunningDircetion*Speed*SimSamplePeriod* cos(m_fLastYaw) ;
    VehRearAxleCenterPoint_Y(VehPositionRecordIndex) = VehRearAxleCenterPoint_Y(VehPositionRecordIndex-1) + RunningDircetion*Speed*SimSamplePeriod* sin(m_fLastYaw) ;
    VehRearAxleCenterPoint_Yaw(VehPositionRecordIndex) = m_fLastYaw;
end

SteeringDirectionRT(VehPositionRecordIndex) = SteeringDirectionRT(VehPositionRecordIndex-1);
VehSteeringWheelAngle(VehPositionRecordIndex) = VehSteeringWheelAngle(VehPositionRecordIndex-1);
VehRadiusRT(VehPositionRecordIndex) = VehRadiusRT(VehPositionRecordIndex-1);

end

