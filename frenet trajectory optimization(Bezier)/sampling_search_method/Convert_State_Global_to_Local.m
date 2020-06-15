function [ result ] = Convert_State_Global_to_Local(globalstate, vehicle_state)
%Convert_State_Global_to_Local ȫ������任Ϊ��������ϵ��
%   �˴���ʾ��ϸ˵��
deltax = globalstate.x - vehicle_state.x;
deltay = globalstate.y - vehicle_state.y;
theta = vehicle_state.yaw;
%�Գ�����������Ϊԭ�㣬�Ҳ�Ϊx+,��ǰΪy+
newx = sin(theta) * deltax + cos(theta) * deltay;
newy = cos(theta) * deltax + sin(theta) * deltay;

result.x = newx;
result.y = newy;
result.yaw = pi/2 + globalstate.yaw - vehicle_state.yaw;
result.yaw = unifytheta(result.yaw);
end

