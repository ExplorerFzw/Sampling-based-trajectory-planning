function [] = SlotVehRelativeCoordination_Establish()
%SlotVehRelativeCoordination_Establish 建立车位坐标系
%   在车位坐标系中plot车位长宽及位置，障碍物大小（形状）及位置，车辆大小，位置以及偏航角

%% 声明使用的主状态机global变量
global SlotVehRelativeCoordination;
%声明车位长宽变量
global SlotWidth SlotDepth;
%声明车位左右侧障碍物变量
global ObstacleCornerC_X ObstacleCornerC_Y ObstacleCornerD_X ObstacleCornerD_Y;
%声明国道变量
global AisleWidth;
%声明车位类型
global cSlotPosition

%% 定义本地变量
%%声明车位四角点变量：
%SlotCornerA_X; SlotCornerA_Y; SlotCornerB_X; SlotCornerB_Y; SlotCornerC_X; SlotCornerC_Y; SlotCornerD_X; SlotCornerD_Y;
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

%坐标系范围变量(mm)
Coord_X_Axis_Range = 10.0 * 1000;
Coord_Y_Axis_Range = 10.0 * 1000;

%% 垂直泊车模式坐标系设置
%实际车位
SlotCornerA_X = -SlotWidth/2;
SlotCornerA_Y = 0;
SlotCornerB_X = SlotCornerA_X;
SlotCornerB_Y = -SlotDepth * cSlotPosition;
SlotCornerC_X = SlotWidth/2;
SlotCornerC_Y = SlotCornerB_Y;
SlotCornerD_X = SlotCornerC_X;
SlotCornerD_Y = SlotCornerA_Y;
SlotCorners_X_ValueMatrix = [SlotCornerA_X,SlotCornerB_X,SlotCornerC_X,SlotCornerD_X];
SlotCorners_Y_ValueMatrix = [SlotCornerA_Y,SlotCornerB_Y,SlotCornerC_Y,SlotCornerD_Y];

%可以压线时候的车位
SlotCornerA_X_Fake = ObstacleCornerD_X;
SlotCornerA_Y_Fake = ObstacleCornerC_Y * cSlotPosition;
SlotCornerB_X_Fake = SlotCornerA_X_Fake;
SlotCornerB_Y_Fake = -SlotDepth * cSlotPosition;
SlotCornerC_X_Fake = ObstacleCornerC_X;
SlotCornerC_Y_Fake = SlotCornerB_Y_Fake;
SlotCornerD_X_Fake = SlotCornerC_X_Fake;
SlotCornerD_Y_Fake = SlotCornerA_Y_Fake;
SlotCorners_X_ValueMatrix_Fake = [SlotCornerA_X_Fake,SlotCornerB_X_Fake,SlotCornerC_X_Fake,SlotCornerD_X_Fake];
SlotCorners_Y_ValueMatrix_Fake = [SlotCornerA_Y_Fake,SlotCornerB_Y_Fake,SlotCornerC_Y_Fake,SlotCornerD_Y_Fake];

%绘制停车位和过道
figure(SlotVehRelativeCoordination);
set(0,'defaultfigurecolor','w')
%标出X轴,Y轴
plot([-Coord_X_Axis_Range Coord_X_Axis_Range],[0 0],'k-','linewidth',0.5); %黑色实线画出X轴
hold on;
plot([0 0],[-Coord_Y_Axis_Range Coord_Y_Axis_Range],'k-','linewidth',0.5); %黑色实线画出Y轴
hold on;
%标出障碍物的上边界
plot([-Coord_X_Axis_Range Coord_X_Axis_Range],[ObstacleCornerC_Y * cSlotPosition ObstacleCornerC_Y * cSlotPosition],'b--','linewidth',0.5); %蓝色虚线画出X轴
hold on;
axis equal
axis([-Coord_X_Axis_Range Coord_X_Axis_Range -Coord_Y_Axis_Range Coord_Y_Axis_Range]) %图像坐标轴值范围 X：-1000~9000 Y：-2000~7000
plot(SlotCorners_X_ValueMatrix, SlotCorners_Y_ValueMatrix, 'm--','linewidth',1); %用紫红虚线画出停车位
hold on;
plot(SlotCorners_X_ValueMatrix_Fake, SlotCorners_Y_ValueMatrix_Fake, 'b--','linewidth',1); %用蓝虚线画出可以压线的停车位
hold on;
plot([-Coord_X_Axis_Range Coord_X_Axis_Range],[AisleWidth * cSlotPosition AisleWidth * cSlotPosition],'y-','linewidth',0.5); %黄色实线画出上边界
hold on;
plot(ObstacleCornerC_X,ObstacleCornerC_Y * cSlotPosition,'bs');
hold on;
plot(ObstacleCornerD_X,ObstacleCornerD_Y * cSlotPosition,'bs');
end

