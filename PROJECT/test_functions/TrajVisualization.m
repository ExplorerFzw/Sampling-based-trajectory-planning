clc
clear all

 load('D:\ccs\DaischTest\CurveCurve.mat')
% load('D:\ccs\DaischTest\TraceC10.mat')
 spacelimit = 1;    
 start =10;
 finish =1;
x= PosLat(start : spacelimit:length(PosLat)-finish);
y = PosLon(start: spacelimit:length(PosLat)-finish);
ha = AngleHeading(start: spacelimit:length(PosLat)-finish);
time = Time(start: spacelimit:length(PosLat)-finish);

% sw = SAS_SteerWheelAngle(start: spacelimit:length(PosLat)-finish);

x = roundn(x, -8);
y =  roundn(y,-8);
B0 = x(1);
L0 = y(1);
HA= roundn(ha, -2);
% SW = vpa(sw,3);
% plot(x,y, 'LineWidth',10)

%%

for  i = 1: length(x)
     [X(i),Y(i)]=transformation1(x(i),y(i),B0,L0);
     i
end

X = X';
Y = Y';

%%
figure 

% plot(X(3:i),Y(3:i),'-o')
% i
plot(X, Y, '-b','LineWidth',2)

hold on 
%  drawnow
%%
xs = 0; ys = 0;
Ldis = sqrt((X(200)-X(350)).^2 + (Y(200)-Y(350)).^2);
xe =Ldis;
ye = 0;

p = BezierGeneration(xs,ys, xe,ye,2.5);
% p = vpa(p,3);
% p1 = vpa(p(:,1),3);
% p2 =vpa( p(:,2),3);
% 
% figure
% plot(p1,p2,'-*')
% hold on
p = FrenetToHuace(p);
% p1 = vpa(p(:,1),3);
% p2 =vpa( p(:,2),3);
% plot(p1,p2,'-*')

p = [p, ones(size(p,1),1)];
xc = X(200); yc = Y(200); heading_current= HA(200);
[ trans] =  BackTransfer(xc,yc,heading_current); %3*3

P = trans * p'; % £¨3*3£© * £¨3*92£©
P = P(1:2,:)';    % (92 * 2)
P(:,1) = roundn(P(:,1),-2);
P(:,2) = roundn(P(:,2),-2);

plot(P(:,1),P(:,2),'*r')
%%
p(1,3) = HA(200);
heading_current = HA(200);
% heading_des = HA(250);
% figure
for i = 2: length(p)
    delta_heading =(0.75)* 180 /pi *  atan((p(i,1)-p(i-1,1))/(p(i,2)-p(i-1,2)));
    p(i,3) = NewHeading(delta_heading, heading_current);
    heading_des = p(i,3);
%     plot(i, heading_current,'ob');
%     hold on
%      plot(i, delta_heading,'ob');
%     hold on
end
P = [P, p(:,3)];
 plot(1:length(P), P(:,3))

%%
 load('D:\ccs\DaischTest\CurveCurveRecord.mat')
 spacelimit = 1;    
 start =1;
 finish =1;
x= PosLat(start : spacelimit:length(PosLat)-finish);
y = PosLon(start: spacelimit:length(PosLat)-finish);

 for  i = 1: length(x)
     [XT(i),YT(i)]=transformation1(x(i),y(i),B0,L0);
     i
end
 plot(XT,YT,'-r','LineWidth',2)
 

 xlabel('x(m)')
ylabel('y(m)')
title('Zigzag Tracking')
set(gca,'LineWidth',2,'FontSize',11,'FontWeight','normal','FontName','Times');
grid on;
legend('Reference Line','Tracking Line');
xlim([0,80]);
ylim([-180 0]);