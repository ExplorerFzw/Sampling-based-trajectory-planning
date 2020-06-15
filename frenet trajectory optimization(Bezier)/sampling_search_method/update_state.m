function [x,y,yaw,v] = update_state(x,y,yaw, v, a, delta, dt, L)
%update 车辆运动学模型更新
%   
x = x + v * cos(yaw) * dt;
y = y + v * sin(yaw) * dt;
yaw = yaw + v / L * tan(delta) * dt;
v = v + a * dt;
% fprintf("x = %f, y = %f, yaw =%f, v = %f \n",x, y, yaw*180/pi,v);
end

