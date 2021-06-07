clc
clear all
% close all
xs = 0;
vxs = 80/3.6;
axs = -5;
vxe = 25/3.6;
axe = 0;
T = 20;
[a0, a1, a2, a3, a4] = quintic_polynomial(xs, ...
    vxs, axs, vxe, axe,T)

ind = 1;
P = [];
TIME = [];

for i = 0:0.1:T
    
    P(ind) = cal_quantic_point(a0,a1,a2,a3,a4,i) 
    PD(ind) = cal_quantic_d(a1,a2,a3,a4,i);
    PDD(ind) = cal_quantic_dd(a2,a3,a4,i);
    PDDD(ind) = cal_quantic_ddd(a3,a4,i);
    TIME(ind) = i;
    ind = ind + 1;
end

figure
subplot(4,1,1)
plot(TIME, P)
subplot(4,1,2)
plot(TIME, PD)
subplot(4,1,3)
plot(TIME, PDD)
subplot(4,1,4)
plot(TIME, PDDD)

function [a0, a1, a2, a3, a4] = quintic_polynomial(xs, ...
    vxs, axs, vxe, axe,T)
    
    A  =[1,0,0,0,0;0,1,0,0,0;0,0,2,0,0;...
        0,1,2*T,3*T^2,4*T^3;0,0,2,6*T,12*T^2];
    
    b = [xs,vxs,axs,vxe,axe]';
    x = pinv(A) * b;
    
    a0 = x(1);
    a1 = x(2);
    a2 = x(3);
    a3 = x(4);
    a4 = x(5);
end

function [xt] = cal_quantic_point(a0,a1,a2,a3,a4,T)
    xt = a0 + a1 * T + a2 * T^2 + a3 * T^3 + a4 * T^4;
end

function [xt] = cal_quantic_d(a1,a2,a3,a4,T)
    xt = a1 + 2 * a2*T + 3*a3*T^2 + 4*a4* T^3;
end

function[xt] = cal_quantic_dd(a2,a3,a4,T)
    xt = 2*a2 + 6*a3*T + 12 * a4 * T^2;
end

function[xt] = cal_quantic_ddd(a3,a4,T)
    xt =  6*a3 +24 * a4 * T;
end


