function [ result ] = Convert_State_Global_to_Local(globalstate, vehicle_state)
%Convert_State_Global_to_Local ȫ������任Ϊ��������ϵ��
%   �˴���ʾ��ϸ˵��
	double deltax;
    double deltay;
	deltax = globalstate.x - vehicle_state.x;
	deltay = globalstate.y - vehicle_state.y;

	double theta;
    theta = vehicle_state.theta;

	double newx;
    double newy;
    newx = cos(theta) * deltax + sin(theta) * deltay;
    newy = -sin(theta) * deltax + cos(theta) * deltay;
	
% 	state_struct result;
	result.x = newx;
	result.y = newy;
	result.theta = pi/2 + globalstate.theta - vehicle_state.theta;
	result.theta = unifytheta(result.theta);
end

