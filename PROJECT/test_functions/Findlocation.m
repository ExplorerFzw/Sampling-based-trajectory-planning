function [location] = Findlocation(trace, point)
N = length(trace);
Distance = zeros(N,1);

for  i = 1:N
Distance(i) =  sqrt((trace(i,1)-point(1))^2 + (trace(i,2)-point(2))^2);
end

[~, index]= min(Distance);
location=index;

end