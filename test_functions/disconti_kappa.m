clc
clear all

load('D:\ccs\DaischTest\uphill_110.mat')

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

x%%

for  i = 1: length(x)
     [X(i),Y(i)]=transformation1(x(i),y(i),B0,L0);
     i
end

X = X';
Y = Y';

%%
figure 
for i = 1: 1:length(X)
% plot(X(3:i),Y(3:i),'-o')
% i
plot(X(i), Y(i), 'o')
hold on

%  drawnow
end

%% ¼ÆËã¹«Ê½
% x1 = 0; y1 = 0; x2 = 1;y2 =0; x3 = 1; y3 = 1;
% a=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)
% b=(x1^2+y1^2-x2^2-y2^2)/2
% c=(x1^2+y1^2-x3^2-y3^2)/2
% d=b*(y1-y3)-c*(y1-y2)
% e=c*(x1-x2)-b*(x1-x3)
% r=sqrt((d/a-x1)^2+(e/a-y1)^2)
% figure

for j = 1:10
    for i = 1:length(X)-5
    X(i) = 0.2 * sum(X(i:i+4));
    Y(i) = 0.2 * sum(Y(i:i+4));
    end
end
% plot(X,Y,'b-')

figure
for i = 1: length(X)-5
    x1 = X(i); y1 = Y(i);
    x2 = X(i+1); y2 = Y(i+1);
    x3 = X(i+2); y3 = Y(i+2);
    a=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
b=(x1^2+y1^2-x2^2-y2^2)/2;
c=(x1^2+y1^2-x3^2-y3^2)/2;
d=b*(y1-y3)-c*(y1-y2);
e=c*(x1-x2)-b*(x1-x3);

dot = x1*x2 + y1*y2;% dot product
det = x1*y2 - y1*x2;% matrix determinant
angle = atan2(det, dot) *180/pi% anti-closewise is positive, and closewise is negative;

if angle > 0 
    symbo = -1;
else 
    symbo  = 1;
end

r(i) = symbo * sqrt((d/a-x1)^2+(e/a-y1)^2);
r =roundn(r,-3);
 if abs(1/r(i))>0.12
        r(i) = 10000;
 end

end
r(end:end+5) = 10000;

r = r';
kappa = roundn(1./r, -4);
plot(abs(kappa),'r.-')


