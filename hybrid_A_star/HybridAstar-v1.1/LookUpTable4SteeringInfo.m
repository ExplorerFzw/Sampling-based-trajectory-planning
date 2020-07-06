function [SteeringInfoTable,TableLength] = LookUpTable4SteeringInfo(coe_V2Phi)
%车辆方向盘转角相关车辆参数查表信息
%   列表信息：
%   1.方向盘转角(degree)；2.方向盘转角对应车辆转弯半径(mm)；3.恒定速度下车辆从零度方向盘转角到达指定方向盘转角的车辆偏航角变化(rad)；4.等效提前路程(mm)；
%   5.默认坐标系下y的变化(mm)；6.默认坐标系下x的变化(mm)
%   

SteerAngleList(1) = DefConstNr.MAX_STEERING_ANGLE;
SteerAngleList(2) = SteerAngleList(1) - 50;
SteerAngleList(3) = SteerAngleList(2) - 50;
SteerAngleList(4) = SteerAngleList(3) - 50;
SteerAngleList(5) = SteerAngleList(4) - 50;
SteerAngleList(6) = SteerAngleList(5) - 50;
SteerAngleList(7) = max(50,SteerAngleList(6) - 50);
SteerAngleList(8) = max(50,SteerAngleList(7) - 50);
SteerAngleList(9) = max(50,SteerAngleList(8) - 50);
SteerAngleList(10) = max(50,SteerAngleList(9) - 50);
TableLength = length(SteerAngleList);
SteeringInfoTable = zeros(TableLength*2,10);
for i = 1:1:TableLength
    [R,R_CornerE, R_CornerF, R_CornerG, R_CornerH,delta_Theta,delta_L,delta_Y,delta_X] = ...
        Phi4TableLookUp(SteerAngleList(i), DefConstNr.FORWARD, DefConstNr.STEERING_LEFT, coe_V2Phi);
    SteeringInfoTable(i,1) = DefConstNr.STEERING_LEFT * SteerAngleList(i);
    SteeringInfoTable(i,2) = R;
    SteeringInfoTable(i,3) = delta_Theta;
    SteeringInfoTable(i,4) = delta_L;
    SteeringInfoTable(i,5) = delta_Y;
    SteeringInfoTable(i,6) = delta_X;
    SteeringInfoTable(i,7) = R_CornerE;
    SteeringInfoTable(i,8) = R_CornerF;
    SteeringInfoTable(i,9) = R_CornerG;
    SteeringInfoTable(i,10) = R_CornerH;
end
m = i;
for i=(m+1):1:(m + TableLength)
    [R,R_CornerE, R_CornerF, R_CornerG, R_CornerH,delta_Theta,delta_L,delta_Y,delta_X] = ...
        Phi4TableLookUp(SteerAngleList(i-m), DefConstNr.FORWARD, DefConstNr.STEERING_RIGHT, coe_V2Phi);
    SteeringInfoTable(i,1) = DefConstNr.STEERING_RIGHT * SteerAngleList(i-m);
    SteeringInfoTable(i,2) = R;
    SteeringInfoTable(i,3) = delta_Theta;
    SteeringInfoTable(i,4) = delta_L;
    SteeringInfoTable(i,5) = delta_Y;
    SteeringInfoTable(i,6) = delta_X;
    SteeringInfoTable(i,7) = R_CornerE;
    SteeringInfoTable(i,8) = R_CornerF;
    SteeringInfoTable(i,9) = R_CornerG;
    SteeringInfoTable(i,10) = R_CornerH;
end

end

