function [ result ] = Convert_State_Global_to_Local(globalstate, vehicle_state)
%Convert_State_Global_to_Local 全局坐标变换为车体坐标系下
%   此处显示详细说明
deltax = globalstate.x - vehicle_state.x;
deltay = globalstate.y - vehicle_state.y;
theta = vehicle_state.yaw;
%以车辆后轴中心为原点，右侧为x+,向前为y+
newx = sin(theta) * deltax + cos(theta) * deltay;
newy = cos(theta) * deltax + sin(theta) * deltay;

result.x = newx;
result.y = newy;
result.yaw = pi/2 + globalstate.yaw - vehicle_state.yaw;
result.yaw = unifytheta(result.yaw);
end

