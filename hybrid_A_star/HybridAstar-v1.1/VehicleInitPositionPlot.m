function [] = VehicleInitPositionPlot(Init_VehRearAxleCenterPoint_X,Init_VehRearAxleCenterPoint_Y,Init_VehRearAxleCenterPoint_Yaw,VehType)
%VehicleInitPositionPlot ���Ƴ�����ʼλ��

%% ����ʹ�õ���״̬��global����
global SlotVehRelativeCoordination;
%������λ����
global cSlotPosition

% ���峵�����β���(mm)
VehParSet(VehType)

%% ���屾�ر���
%%���������Ľǵ������
%VehCornerE_X; VehCornerE_Y; VehCornerF_X; VehCornerF_Y; VehCornerG_X; VehCornerG_Y; VehCornerH_X; VehCornerH_Y;
%------------------------------
%             Aisle
%
%               |TargetLine
%  ------- D    |    C -------
%          |    |    |
%          |    |    |
%          |    |    |
%          A ------- B
%

figure(SlotVehRelativeCoordination);
plot(Init_VehRearAxleCenterPoint_X,Init_VehRearAxleCenterPoint_Y * cSlotPosition,'bo','linewidth',1) %������ʼλ��
hold on;
[VehCornerE_X,VehCornerE_Y,...
    VehCornerF_X,VehCornerF_Y,...
    VehCornerG_X,VehCornerG_Y,...
    VehCornerH_X,VehCornerH_Y] = coordinate_calculate_dynamic_rotate_rear_axle_center(Init_VehRearAxleCenterPoint_X,Init_VehRearAxleCenterPoint_Y * cSlotPosition,Init_VehRearAxleCenterPoint_Yaw * cSlotPosition);
VehCorners_X_Matrix = [VehCornerE_X VehCornerF_X VehCornerG_X VehCornerH_X VehCornerE_X];
VehCorners_Y_Matrix = [VehCornerE_Y VehCornerF_Y VehCornerG_Y VehCornerH_Y VehCornerE_Y];
VehInitPosition = plot(VehCorners_X_Matrix,VehCorners_Y_Matrix,'k-','linewidth',1); %��������ģ��
hold on;

end

