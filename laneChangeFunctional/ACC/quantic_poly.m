clc
clear all
close all
xs = 0;
vxs = 10;
axs = 0;
vxe = 15;
axe = 0;
T = 20;
[a0, a1, a2, a3, a4] = quintic_polynomial(xs, ...
    vxs, axs, vxe, axe,T)

ind = 1;
P = [];
TIME = [];

for i = 1:0.1:T
    
    P(ind) = cal_quantic_point(a0,a1,a2,a3,a4,i) 
    
    TIME(ind) = i;
    ind = ind + 1;
end

plot(TIME, P)

function [a0, a1, a2, a3, a4] = quantic_polynomial(xs, ...
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



