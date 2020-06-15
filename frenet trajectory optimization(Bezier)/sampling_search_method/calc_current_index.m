function [lat,index]= calc_current_index(x,y, cx,cy)
% x,y ��ǰ����λ��
% cx,cy �ο��켣

N = length(cx);
Distance = zeros(N,1);
for i = 1:N
    Distance(i) = sqrt((cx(i) - x)^2 + (cy(i) - y)^2);
end

[lat, index] = min(Distance);
if cy(index) > y
    lat = -lat;
end

end