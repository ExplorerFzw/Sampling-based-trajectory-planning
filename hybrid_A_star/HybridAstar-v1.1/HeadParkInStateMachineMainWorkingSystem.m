%% ���������켣��¼����
%����������ʹ�켣��¼����
global VehRearAxleCenterPoint_X VehRearAxleCenterPoint_Y VehRearAxleCenterPoint_Yaw;
%��������������ת�Ǽ�¼����
global VehSteeringWheelAngle;
%��������λ�˼�¼����
global VehPositionRecordIndex;
%��ʼ��������ʹ�켣&����������ת��&λ������ֵ
VehRearAxleCenterPoint_X = [];
VehRearAxleCenterPoint_Y = [];
VehRearAxleCenterPoint_Yaw = [];
VehSteeringWheelAngle = [];
VehPositionRecordIndex = 1;

%% plot����
%����&���峵���ͺ�
global VehType;
VehType = "Geely_GE";
% ���峵�����β���(mm)
VehParSet(VehType)

%% �������泵�ٱ����ͷ������ڱ���
%�������泵��ʵʱ������ת���ת��뾶
global SteeringDirectionRT VehRadiusRT;
SteeringDirectionRT = [];
VehRadiusRT = [];

