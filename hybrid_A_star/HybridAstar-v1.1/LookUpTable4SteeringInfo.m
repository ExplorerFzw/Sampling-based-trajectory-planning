function [SteeringInfoTable,TableLength] = LookUpTable4SteeringInfo(coe_V2Phi)
%����������ת����س������������Ϣ
%   �б���Ϣ��
%   1.������ת��(degree)��2.������ת�Ƕ�Ӧ����ת��뾶(mm)��3.�㶨�ٶ��³�������ȷ�����ת�ǵ���ָ��������ת�ǵĳ���ƫ���Ǳ仯(rad)��4.��Ч��ǰ·��(mm)��
%   5.Ĭ������ϵ��y�ı仯(mm)��6.Ĭ������ϵ��x�ı仯(mm)
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

