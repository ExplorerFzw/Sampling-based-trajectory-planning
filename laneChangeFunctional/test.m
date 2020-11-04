clc
clear all
close all

D0 = 0;
Ti = 18;
Di = 3;
P = [];
for t= 0:0.1:Ti
    [p] = Bezierfrenet(D0, Ti, Di,t);
    P = [P;p];
end

% plot(P(:,1),P(:,2))
p0 = [ 0, 0];
p1 = [20,0];
 p2= [40,0];
 p3 =[40,8];
 p4 =[60,8];
 p5 = [80,8];
  %生成五阶贝塞尔曲线的笛卡尔坐标系点位
  i =1;
 for u =0: 0.01:1
 p(i,:)= (1-u)^5*p0 + 5*(1-u)^4*u*p1 + 10*(1-u)^3*u^2*p2 +...
     10*(1-u)^2*u^3*p3 +5*(1-u)*u^4*p4 + u^5*p5;
 i =i+1;
 end
 %计算一阶导数
 for i = 1:length(p)-1
 pd(i) = (p(i+1,2)-p(i,2))/(p(i+1,1)-p(i,1));
 pd(length(p)) = 0;
 end
%计算二阶导数
 for i =2: length(p)-1
     pdd(1) = 0;
     pdd(length(p)) = 0;
     pdd(i) = (p(i+1,2)-2*p(i,2) + p(i-1,2))/(0.5*(-p(i-1,1)+p(i+1,1)))^2;
%      pdd(i) = (p(i+1,2)-2*p(i,2) + p(i-1,2))/(-p(i,1)+p(i+1,1))^2;

 end

 figure
 plot(1:length(p),pd(1:length(p)));
 xlabel('sampling numbers')
ylabel('first derivatives')
title('First Derivative Continuity')
set(gca,'LineWidth',2,'FontSize',11,'FontWeight','normal','FontName','Times');
grid on;
legend('First Derivatives');


figure
 plot(1:length(p), pdd(1:length(p)));
 xlabel('sampling numbers')
ylabel('second derivatives')
title('Second Derivative Continuity')
set(gca,'LineWidth',2,'FontSize',11,'FontWeight','normal','FontName','Times');
grid on;
legend('Second Derivatives');

 for i  = 1:length(p)
     k(i) = (pdd(i))/((1+pd(i)^2)^(1.5));
 end
 figure
 plot(1:length(p),k(1:length(p)))
 xlabel('sampling numbers')
ylabel('kappa(1/m)')
title('Curvature Continuity')
set(gca,'LineWidth',2,'FontSize',11,'FontWeight','normal','FontName','Times');
grid on;
legend('Curvature');



