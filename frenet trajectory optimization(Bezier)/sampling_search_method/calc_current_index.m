function [lat,index]= calc_current_index(x,y, cx,cy)
% x,y 当前车辆位置
% cx,cy 参考轨迹

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