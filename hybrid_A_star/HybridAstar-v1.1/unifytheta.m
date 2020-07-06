function [ theta ] = unifytheta(theta)
%unifytheta 角度归一到[0,360)之间
%   逆时针为正
while(theta < 0)		
    theta = theta + 360;
end
while(theta >= 360)
    theta = theta - 360;
end
end

