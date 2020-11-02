 function [p] = Bezierfrenet(D0, Ti, Di,t)
 % D0 初始横向距离
 % Ti 规划时长
 % Di 采样的横向距离
 % t 数据离散间隔
 
%设置控制点，三阶拟合需要四个控制点
 p0 = [0, D0];
 p1 = [Ti/2, D0];
 p2 = [Ti/2, Di];
 p3 = [Ti, Di];

 p = (1-(t)/Ti)^3*p0 + 3*(1-(t)/Ti)^2*(t)/Ti*p1 + ...
     3*(1-(t)/Ti)*((t)/Ti)^2*p2 + ((t)/Ti)^3*p3;
 end
 