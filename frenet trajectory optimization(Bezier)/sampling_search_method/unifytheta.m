function [ theta ] = unifytheta(theta)
%unifytheta �Ƕȹ�һ��[0,2*pi)֮��
%   ��ʱ��Ϊ��
while(theta < 0)		
    theta = theta + 2*pi;
end

while(theta >= 2*pi)
    theta = theta - 2*pi;
end

end

