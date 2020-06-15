clc
clear all
xs = 2;
vxs = 0.5;
axs = 0.5;
 xe = 0.5;
vxe = 2.7;
axe = 0;
% T= 15;
% [a0,a1,a2,a3,a4,a5] = quintic_polynomial(xs, vxs, axs, xe, vxe, axe,T);
% [a0,a1,a2,a3] =quadratic_poly(xs,xe,axs,axe,T);

% figure
% for t = 0:0.1: T
% L = a0 + a1*t + a2*t^2 + a3 * t^3 + a4 * t^4 + a5 * t^5;
% plot(t,L,'-o')
% drawnow
% hold on
% end
figure
for T  = 5: 10
    for xe = 0:0.01:0.1
       [a0,a1,a2,a3] = quadratic_poly_a(xs,xe,vxs,vxe,T)
for t = 0:0.1: T
L = a0 + a1*t + a2*t^2 + a3 * t^3;
plot(t,L,'-bo')
%  drawnow
hold on
end
    end
end

% figure
% for T  = 5:0.5:10 % 五阶多项式的采样末端时间不能太长，否则起点超调过度
%     for xe = 0:0.01:0.1
%        [a0,a1,a2,a3,a4,a5] = quintic_polynomial(xs, vxs, axs, xe, vxe, axe,T)
% for t = 0:0.1: T
%     t = t * 2.77;
% L = a0 + a1*t + a2*t^2 + a3 * t^3 + a4 * t^4 + a5 * t^5;
% plot(t*2.77*2,L,'sb')
%  drawnow
% hold on
% end
%     end
% end


function [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, vxs, axs, xe, vxe, axe,T)
% A = [0,0,0,0,0,1; T^5,T^4,T^3,T^2,T,1;...
%     0,0,0,0,1,0 ; 5*T^4  4*T^3 3*T^2 2*T 1 0 ; ...
%     0 0 0 2 0 0; 20*T^3 12*T^2 6*T 2 0 0];
% b = [xs, xe, vxs, vxe, axs, 0]';
% x = A\b;
% a5 = x(1);
% a4 = x(2);
% a3 = x(3);
% a2 = x(4);
% a1 = x(5);
% a0 = x(6);
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

function [a0,a1,a2,a3] = quadratic_poly_a(xs,xe,axs,axe,T)
A = [1 0 0 0; 1 T T^2 T^3; 0 0 2 0; 0 0 2 6*T];
b = [xs,xe,axs, axe]';
x = A\b;
a0 = x(1);
a1 = x(2);
a2 = x(3);
a3 = x(4);
end

function [a0,a1,a2,a3] = quadratic_poly_v(xs,xe,vxs,vxe,T)
A = [1 0 0 0; 1 T T^2 T^3; 0 1 0 0; 0 1 2*T 3*T^2];
b = [xs,xe,vxs, vxe]';
x = A\b;
a0 = x(1);
a1 = x(2);
a2 = x(3);
a3 = x(4);
end
