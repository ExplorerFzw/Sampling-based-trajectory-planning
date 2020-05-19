xs = 3;
vxs = 0.3;
axs = 0;
xe = 0;
vxe = 0;
axe = 0;
T = 8;
[a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, vxs, axs, xe, vxe, axe,T);

figure
for t = 0:0.1:T
    d = a0 + a1*t + a2*t^2 + a3*t^3 + a4*t^4 + a5*t^5;
    plot(t,d,'-o');
    hold on
end


function [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, vxs, axs, xe, vxe, axe,T)
A = [0,0,0,0,0,1; T^5,T^4,T^3,T^2,T,1;...
    0,0,0,0,1,0 ; 5*T^4  4*T^3 3*T^2 2*T 1 0 ; ...
    0 0 0 2 0 0; 20*T^3 12*T^2 6*T 2 0 0];
b = [xs, xe, vxs, vxe, axs, 0]';
x = A\b;
a5 = x(1);
a4 = x(2);
a3 = x(3);
a2 = x(4);
a1 = x(5);
a0 = x(6);
% A = [T^3 T^4 T^5; 3*T^2 4*T^3 5*T^4; 6*T 12*T^2 20*T^3];
% b = [(xe - xs  - vxs*T - 0.5*axs*T^2); (vxe- vxs - axs*T ); (axe - axs)];
% x = A\b;
% a0 = xs;
% a1 = vxs;
% a2 = axs/2;
% 
% a3 = x(1);
% a4 = x(2);
% a5 = x(3);
end