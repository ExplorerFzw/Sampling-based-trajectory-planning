function [] = SlotVehRelativeCoordination_Establish()
%SlotVehRelativeCoordination_Establish ������λ����ϵ
%   �ڳ�λ����ϵ��plot��λ����λ�ã��ϰ����С����״����λ�ã�������С��λ���Լ�ƫ����

%% ����ʹ�õ���״̬��global����
global SlotVehRelativeCoordination;
%������λ�������
global SlotWidth SlotDepth;
%������λ���Ҳ��ϰ������
global ObstacleCornerC_X ObstacleCornerC_Y ObstacleCornerD_X ObstacleCornerD_Y;
%������������
global AisleWidth;
%������λ����
global cSlotPosition

%% ���屾�ر���
%%������λ�Ľǵ������
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

%����ϵ��Χ����(mm)
Coord_X_Axis_Range = 10.0 * 1000;
Coord_Y_Axis_Range = 10.0 * 1000;

%% ��ֱ����ģʽ����ϵ����
%ʵ�ʳ�λ
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

%����ѹ��ʱ��ĳ�λ
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

%����ͣ��λ�͹���
figure(SlotVehRelativeCoordination);
set(0,'defaultfigurecolor','w')
%���X��,Y��
plot([-Coord_X_Axis_Range Coord_X_Axis_Range],[0 0],'k-','linewidth',0.5); %��ɫʵ�߻���X��
hold on;
plot([0 0],[-Coord_Y_Axis_Range Coord_Y_Axis_Range],'k-','linewidth',0.5); %��ɫʵ�߻���Y��
hold on;
%����ϰ�����ϱ߽�
plot([-Coord_X_Axis_Range Coord_X_Axis_Range],[ObstacleCornerC_Y * cSlotPosition ObstacleCornerC_Y * cSlotPosition],'b--','linewidth',0.5); %��ɫ���߻���X��
hold on;
axis equal
axis([-Coord_X_Axis_Range Coord_X_Axis_Range -Coord_Y_Axis_Range Coord_Y_Axis_Range]) %ͼ��������ֵ��Χ X��-1000~9000 Y��-2000~7000
plot(SlotCorners_X_ValueMatrix, SlotCorners_Y_ValueMatrix, 'm--','linewidth',1); %���Ϻ����߻���ͣ��λ
hold on;
plot(SlotCorners_X_ValueMatrix_Fake, SlotCorners_Y_ValueMatrix_Fake, 'b--','linewidth',1); %�������߻�������ѹ�ߵ�ͣ��λ
hold on;
plot([-Coord_X_Axis_Range Coord_X_Axis_Range],[AisleWidth * cSlotPosition AisleWidth * cSlotPosition],'y-','linewidth',0.5); %��ɫʵ�߻����ϱ߽�
hold on;
plot(ObstacleCornerC_X,ObstacleCornerC_Y * cSlotPosition,'bs');
hold on;
plot(ObstacleCornerD_X,ObstacleCornerD_Y * cSlotPosition,'bs');
end

