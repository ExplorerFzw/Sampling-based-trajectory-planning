clc
clear all
close all

syms v0;
syms  a0 ;

syms  ve ;
syms  ae ;

syms  se;
% thetae = deg2rad(0);
a = cal_tripoly(v0,ve,a0,ae,se)

% x = 0:0.1:se;
% y = a(1) + a(2) * x + a(3) *x.^2 + a(4) *x.^3;
% 
% plot(x,y)



function theta_rad = deg2rad(theta_deg)
    theta_rad = theta_deg / 180 * pi;
end

function a = cal_tripoly(s0, se,theta0,thetae,s)
    A = [1,0,0,0;1,s,s^2,s^3;0,1,0,0;0,1,2*s,3*s^2];
    B = [s0;se;theta0;thetae];
    a = A\B;
end