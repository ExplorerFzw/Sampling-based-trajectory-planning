function [ theta ] = unifytheta(theta)
%unifytheta 角度归一到[0,2*pi)之间
%   逆时针为正
while(theta < 0)		
    theta = theta + 2*pi;
end

while(theta >= 2*pi)
    theta = theta - 2*pi;
end

end

