function [outputArg1,outputArg2] = GetInsertPointBetweenCircleAndLine(O_X,O_Y,R,k,b)
%UNTITLED3 此处显示有关此函数的摘要
%   求直线 y = k*x + b 与圆 (x - O_X)^2 + (y - O_Y)^2 = R^2 的交点
temp1 = b - O_Y;
a = 1 + k^2;
b = 2*k*temp1 - 2*O_X;
c = O_X^2 + temp1^2 - R^2;
outputArg1 = (-b - sqrt(b^2 - 4*a*c))/2/a;
outputArg2 = (-b + sqrt(b^2 - 4*a*c))/2/a;
end

