clc
clear all
close all

s0 = 0;
theta0 = 0;

se = 50;
ye = 1;
thetae = deg2rad(0);
a = cal_tripoly(se,ye,thetae);

x = 0:0.1:se;
y = a(1) + a(2) * x + a(3) *x.^2 + a(4) *x.^3;

plot(x,y)



function theta_rad = deg2rad(theta_deg)
    theta_rad = theta_deg / 180 * pi;
end

function a = cal_tripoly(se,ye,thetae)
    A = [1,0,0,0;1,se,se^2,se^3;0,1,0,0;0,1,2*se,3*se^2];
    B = [0;ye;0;thetae];
    a = A\B;
end