%% 创建车辆轨迹记录数据
%声明车辆行使轨迹记录数组
global VehRearAxleCenterPoint_X VehRearAxleCenterPoint_Y VehRearAxleCenterPoint_Yaw;
%声明车辆方向盘转角记录数组
global VehSteeringWheelAngle;
%声明车辆位姿记录索引
global VehPositionRecordIndex;
%初始化车辆行使轨迹&车辆方向盘转角&位姿索引值
VehRearAxleCenterPoint_X = [];
VehRearAxleCenterPoint_Y = [];
VehRearAxleCenterPoint_Yaw = [];
VehSteeringWheelAngle = [];
VehPositionRecordIndex = 1;

%% plot车辆
%声明&定义车辆型号
global VehType;
VehType = "Geely_GE";
% 定义车辆几何参数(mm)
VehParSet(VehType)

%% 声明仿真车速变量和仿真周期变量
%声明仿真车辆实时方向盘转向和转弯半径
global SteeringDirectionRT VehRadiusRT;
SteeringDirectionRT = [];
VehRadiusRT = [];

