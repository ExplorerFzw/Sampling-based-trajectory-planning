function [] = VehicleInitPositionPlot(Init_VehRearAxleCenterPoint_X,Init_VehRearAxleCenterPoint_Y,Init_VehRearAxleCenterPoint_Yaw,VehType)
%VehicleInitPositionPlot 绘制车辆初始位姿

%% 声明使用的主状态机global变量
global SlotVehRelativeCoordination;
%声明车位类型
global cSlotPosition

% 定义车辆几何参数(mm)
VehParSet(VehType)

%% 定义本地变量
%%声明车辆四角点变量：
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
plot(Init_VehRearAxleCenterPoint_X,Init_VehRearAxleCenterPoint_Y * cSlotPosition,'bo','linewidth',1) %画出初始位置
hold on;
[VehCornerE_X,VehCornerE_Y,...
    VehCornerF_X,VehCornerF_Y,...
    VehCornerG_X,VehCornerG_Y,...
    VehCornerH_X,VehCornerH_Y] = coordinate_calculate_dynamic_rotate_rear_axle_center(Init_VehRearAxleCenterPoint_X,Init_VehRearAxleCenterPoint_Y * cSlotPosition,Init_VehRearAxleCenterPoint_Yaw * cSlotPosition);
VehCorners_X_Matrix = [VehCornerE_X VehCornerF_X VehCornerG_X VehCornerH_X VehCornerE_X];
VehCorners_Y_Matrix = [VehCornerE_Y VehCornerF_Y VehCornerG_Y VehCornerH_Y VehCornerE_Y];
VehInitPosition = plot(VehCorners_X_Matrix,VehCorners_Y_Matrix,'k-','linewidth',1); %画出车辆模型
hold on;

end

