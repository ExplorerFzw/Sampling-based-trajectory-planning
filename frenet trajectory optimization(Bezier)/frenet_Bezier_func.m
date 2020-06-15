clc
 clear all
 
 
  Ti = 10;
 Di = 0.03;
 figure
 i = 1;
 for t = 0:0.1: Ti
p(i,:) = Bezierfrenet(Ti, Di,t);

i = i+1;
 end
 
 figure
 
plot(p(:,1),p(:,2))
testa = Bezierfrenet(Ti, Di,10)
 function [p] = Bezierfrenet(Ti, Di,t)
 p0 = [ 0, 0];
 p1 = [Ti/2, 0];
 p2= [Ti/2, Di];
 p3 = [Ti, Di];
 %…Ë÷√øÿ÷∆µ„
 
 p= (1-(t)/Ti)^3*p0 + 3*(1-(t)/Ti)^2*(t)/Ti*p1 + 3*(1-(t)/Ti)*((t)/Ti)^2*p2 + ((t)/Ti)^3*p3;

 end

