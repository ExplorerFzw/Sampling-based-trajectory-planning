function [ theta ] = unifytheta(theta)
%unifytheta �Ƕȹ�һ��[0,360)֮��
%   ��ʱ��Ϊ��
while(theta < 0)		
    theta = theta + 360;
end
while(theta >= 360)
    theta = theta - 360;
end
end

