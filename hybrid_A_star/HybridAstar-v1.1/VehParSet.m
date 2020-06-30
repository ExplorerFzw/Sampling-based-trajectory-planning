function [] = VehParSet(VehType)
%UNTITLED3 此处显示有关此函数的摘要
%   此处显示详细说明

%% 声明使用的主状态机global变量
%声明车辆几何参数变量
global WheelBase FrontAxle_Width RearAxle_Width RearAxle2VehTail_Dis FrontAxle2VehHead_Dis VehLength VehWidth WheelRadius;
global EPS_SteeringAngleRatio;


switch VehType
    case "ChangAn_CS55"
        WheelBase = 2.64 *1000; %2550
        FrontAxle_Width = 1.594 * 1000;
        RearAxle_Width = 1.594 * 1000;
        RearAxle2VehTail_Dis = 0.905*1000;
        FrontAxle2VehHead_Dis = 0.9*1000;  % = LENGTH_VEHICLE - WHEEL_BASE - LENGTH_REAR_AXLE_TO_TAIL
        VehLength= 4.445 * 1000;%(0.9+0.905+2.64)*1000;
        VehWidth = 1.855 * 1000;%(0.797+0.13)*2*1000;
        WheelRadius = 0.326 * 1000;
    case "Geely_GE"
        WheelBase = 2.87 *1000; %2550
        FrontAxle_Width = 1.594 * 1000;
        RearAxle_Width = 1.594 * 1000;
        RearAxle2VehTail_Dis = 1.1*1000;
        FrontAxle2VehHead_Dis = 1.016*1000;  % = LENGTH_VEHICLE - WHEEL_BASE - LENGTH_REAR_AXLE_TO_TAIL
        VehLength= 4.986 * 1000;
        VehWidth = 1.861 * 1000;%(0.797+0.13)*2*1000;
        WheelRadius = 0.326 * 1000;
        
        %     SteeringAngle LeftForward  LeftBack RightForward RightRear
        %     {170*PI/180, 0.1928, 0.1928, 0.1954, 0.1928}, //0
        %     {200*PI/180, 0.2217, 0.2196, 0.2271, 0.2278}, //1
        %     {230*PI/180, 0.2558, 0.2575, 0.2614, 0.2607}, //2
        %     {260*PI/180, 0.2886, 0.2894, 0.2987, 0.2981}, //3
        %     {290*PI/180, 0.3296, 0.3263, 0.3325, 0.3311}, //4
        %     {320*PI/180, 0.3624, 0.3630, 0.3682, 0.3655}, //5
        %     {350*PI/180, 0.4018, 0.4006, 0.4087, 0.4102}, //6
        %     {380*PI/180, 0.4376, 0.4365, 0.4385, 0.4360}, //7
        %     {410*PI/180, 0.4764, 0.4687, 0.4722, 0.4722}, //8
        %     {440*PI/180, 0.5170, 0.5113, 0.5237, 0.5168}, //9
        %     {470*PI/180, 0.5549, 0.5539, 0.5568, 0.5568}, //10
        %     {500*PI/180, 0.6020, 0.5957, 0.605,  0.5983}  //11
        EPS_SteeringAngleRatio(1,1) = 170 *pi/180; EPS_SteeringAngleRatio(1,2) = 0.1928; EPS_SteeringAngleRatio(1,3) = 0.1928; EPS_SteeringAngleRatio(1,4) = 0.1954; EPS_SteeringAngleRatio(1,5) = 0.1928;
        EPS_SteeringAngleRatio(2,1) = 200 *pi/180; EPS_SteeringAngleRatio(2,2) = 0.2217; EPS_SteeringAngleRatio(2,3) = 0.2196; EPS_SteeringAngleRatio(2,4) = 0.2271; EPS_SteeringAngleRatio(2,5) = 0.2278;
        EPS_SteeringAngleRatio(3,1) = 230 *pi/180; EPS_SteeringAngleRatio(3,2) = 0.2558; EPS_SteeringAngleRatio(3,3) = 0.2575; EPS_SteeringAngleRatio(3,4) = 0.2614; EPS_SteeringAngleRatio(3,5) = 0.2607;
        EPS_SteeringAngleRatio(4,1) = 260 *pi/180; EPS_SteeringAngleRatio(4,2) = 0.2886; EPS_SteeringAngleRatio(4,3) = 0.2894; EPS_SteeringAngleRatio(4,4) = 0.2987; EPS_SteeringAngleRatio(4,5) = 0.2981;
        EPS_SteeringAngleRatio(5,1) = 290 *pi/180; EPS_SteeringAngleRatio(5,2) = 0.3296; EPS_SteeringAngleRatio(5,3) = 0.3263; EPS_SteeringAngleRatio(5,4) = 0.3325; EPS_SteeringAngleRatio(5,5) = 0.3311;
        EPS_SteeringAngleRatio(6,1) = 320 *pi/180; EPS_SteeringAngleRatio(6,2) = 0.3624; EPS_SteeringAngleRatio(6,3) = 0.3630; EPS_SteeringAngleRatio(6,4) = 0.3682; EPS_SteeringAngleRatio(6,5) = 0.3655;
        EPS_SteeringAngleRatio(7,1) = 350 *pi/180; EPS_SteeringAngleRatio(7,2) = 0.4018; EPS_SteeringAngleRatio(7,3) = 0.4006; EPS_SteeringAngleRatio(7,4) = 0.4087; EPS_SteeringAngleRatio(7,5) = 0.4102;
        EPS_SteeringAngleRatio(8,1) = 380 *pi/180; EPS_SteeringAngleRatio(8,2) = 0.4376; EPS_SteeringAngleRatio(8,3) = 0.4365; EPS_SteeringAngleRatio(8,4) = 0.4385; EPS_SteeringAngleRatio(8,5) = 0.4360;
        EPS_SteeringAngleRatio(9,1) = 410 *pi/180; EPS_SteeringAngleRatio(9,2) = 0.4764; EPS_SteeringAngleRatio(9,3) = 0.4687; EPS_SteeringAngleRatio(9,4) = 0.4722; EPS_SteeringAngleRatio(9,5) = 0.4722;
        EPS_SteeringAngleRatio(10,1) = 440 *pi/180; EPS_SteeringAngleRatio(10,2) = 0.5170; EPS_SteeringAngleRatio(10,3) = 0.5113; EPS_SteeringAngleRatio(10,4) = 0.5237; EPS_SteeringAngleRatio(10,5) = 0.5168;
        EPS_SteeringAngleRatio(11,1) = 470 *pi/180; EPS_SteeringAngleRatio(11,2) = 0.5549; EPS_SteeringAngleRatio(11,3) = 0.5539; EPS_SteeringAngleRatio(11,4) = 0.5568; EPS_SteeringAngleRatio(11,5) = 0.5568;
        EPS_SteeringAngleRatio(12,1) = 500 *pi/180; EPS_SteeringAngleRatio(12,2) = 0.6020; EPS_SteeringAngleRatio(12,3) = 0.5957; EPS_SteeringAngleRatio(12,4) = 0.6050; EPS_SteeringAngleRatio(12,5) = 0.5983;
        
end
end

