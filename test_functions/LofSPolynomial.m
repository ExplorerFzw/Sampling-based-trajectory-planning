clc
clear all
s0 = 0;
sf = 25;
L0 = 1;
% Lf = 0;
theta0 = 15/180*pi;


figure
for s = 0:0.5:sf
    for Lf = -1:0.2:1
        A = [1 s0 s0^2 s0^3; 1 sf sf^2 sf^3; 0 1 2*s0 3*s0^2; 0 1 2*sf 3*sf^2];
        B = [L0;Lf;tan(theta0);0];
        C = A\B;
        y = C(1) + C(2)*s + C(3)*s^2 + C(4)* s^3;
        plot(s,y,'-bo')
        hold on
    end
end

L0 = 0;
% Lf = 0;
theta0 = -3/180*pi;
for s = 0:0.5:sf
    for Lf = -1:0.2:1
        A = [1 s0 s0^2 s0^3; 1 sf sf^2 sf^3; 0 1 2*s0 3*s0^2; 0 1 2*sf 3*sf^2];
        B = [L0;Lf;tan(theta0);0];
        C = A\B;
        y = C(1) + C(2)*s + C(3)*s^2 + C(4)* s^3;
        plot(s,y,'-r*')
        hold on
    end
end