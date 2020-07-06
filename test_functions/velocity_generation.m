clc
clear all

load('D:\ccs\DaischTest\uphill_110.mat')

 spacelimit = 1;    
 start =1;
 finish =1;
x= PosLat(start : spacelimit:length(PosLat)-finish);
y = PosLon(start: spacelimit:length(PosLat)-finish);
ha = AngleHeading(start: spacelimit:length(PosLat)-finish);
time = Time(start: spacelimit:length(PosLat)-finish);
n = x(1);
m = y(1);

% sw = SAS_SteerWheelAngle(start: spacelimit:length(PosLat)-finish);
x = roundn(x, -8);
y =  roundn(y,-8);
B0 = x(1);
L0 = y(1);
HA= roundn(ha, -2);

for i = 1:length(x)
    v(1) = 0;
    if i< 79 && i>1
        v(i) = 5;
    elseif  i >=79 &&i <120
        v(i) = 15;
    elseif i>=120 && i< 428
        v(i) = 25;
    elseif i>=428 && i<838
        v(i) = 15;
    elseif i>=838 && i<1090
        v(i) = 30;
    elseif i>=1090 && i< 1680
        v(i) = 20;
    elseif i>=1680 && i< 2049
        v(i) = 30;
    elseif i>= 2049 && i< 2100
        v(i) = 20;
    elseif i>=2100 && i< 2164
        v(i) = 12;
    elseif i>= 2164 && i< 2224
        v(i) = 12;
    else
        v(i) = 0;
    end
end


for j = 1:15
    for i = 1:length(v)-10
    v(i) = 0.1 * sum(v(i:i+9));
    v(i) = 0.1 * sum(v(i:i+9));
    end
end
plot(v)

%%
clc
clear all

load('D:\ccs\DaischTest\uphill_110.mat')

 spacelimit = 1;    
 start =1;
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
angle = atan2(det, dot) *180/pi;% anti-closewise is positive, and closewise is negative;

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

v_des = min(30,sqrt(0.7./max(abs(kappa),0.001))*3.6);
plot(v_des)

%%
xs = 0; xe = 16; vxs = 0; vxe = v_des(50); axs = 0; axe = 0;T = 20;
v = 0; dt = 0.4;

for i =1: length(v_des)-51
[a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, vxs, axs, xe, vxe, axe,T);
v =a0 + a1* dt +a2 * dt^2 + a3 * dt^3 + a4 * dt^4 + a5 * dt^5
v = v +abs(randn(1)/10);
vxs = v;
vxe = v_des(50+i);
v_plot(i) = v;
end

figure
plot(v_des)
hold on
plot(v_plot)

function [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, vxs, axs, xe, vxe, axe,T)

A = [T^3 T^4 T^5; 3*T^2 4*T^3 5*T^4; 6*T 12*T^2 20*T^3];
b = [(xe - xs  - vxs*T - 0.5*axs*T^2); (vxe- vxs - axs*T ); (axe - axs)];
x = A\b;
a0 = xs;
a1 = vxs;
a2 = axs/2;

a3 = x(1);
a4 = x(2);
a5 = x(3);
end
function [xt]  = calc_second_derivative(a2,a3,a4,a5,t)
xt = 2* a2 + 6* a3 * t + 12 * a4 * t^2 + 20* a5 *t^3;
end

function [xt] =calc_first_derivative(a1,a2,a3,a4,a5,t)
xt = a1 + 2 * a2 * t + 3 * a3 * t^2 + 4 * a4 * t^3  +  5 * a5 * t^4;
end







