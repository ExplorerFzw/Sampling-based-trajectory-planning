clc
clear all
close all
%% some single test with specified boundary conditions
xs = 0.5; % initial lateral offset w.r.t reference line
vxs = -0.6; % intial lateral velocity
axs = 0; % initial lateral acceleration

T = 1; % sampling time T
xe = 0; % sampling lateral offset at end point

vxe = 0; % we default that we should have zero lateral v at the end
axe = 0; % we default that we should have zero lateral a at the end

[a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, ...
    vxs, axs, xe, vxe, axe,T);

xt = [];
vt = [];
at = [];

for t = 0:0.05:T
   xt = [xt,calc_point(a0,a1,a2,a3,a4,a5,t)];
end

for t = 0:0.05:T
    [vt] =[vt,calc_first_derivative(a1,a2,a3,a4,a5,t)];
end
for t = 0:0.05:T
    [at]  = [at, calc_second_derivative(a2,a3,a4,a5,t)];
end

plot(0:0.05:T,xt,'--b')
title('d(t)');
figure
plot(0:0.05:T,vt,'--r')
title('v(t)');
figure
plot(0:0.05:T,at,'--g')
title('a(t)');

%% combine some different boundary conditions
% together to see its relations
%% In this section, we only give freedom to lateral velocity 
% to see its effect on lateral polynomials

xs = 3.5; % initial lateral offset w.r.t reference line
vxs = []; % intial lateral velocity
axs = 0; % initial lateral acceleration

T = 10; % sampling time T
xe = 0; % sampling lateral offset at end point

vxe = 0; % we default that we should have zero lateral v at the end
axe = 0; % we default that we should have zero lateral a at the end


xt = [];
xt_max = [];
for vxs = -0.5:0.1:0.5
    [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, ...
        vxs, axs, xe, vxe, axe,T);
    
    xt = [];
    vt = [];
    for t = 0:0.05:T
        xt = [xt,calc_point(a0,a1,a2,a3,a4,a5,t)];
        vt =[vt, calc_first_derivative(a1,a2,a3,a4,a5,t)];
    end
    xt_max = [xt_max, max(xt)];
    plot(0:0.05:T,xt,'--')
    plot(0:0.05:T,vt,'--')
    legend('vxs=-0.5','vxs=-0.4','vxs=-0.3','vxs=-0.2',...
        'vxs=-0.1','vxs=0','vxs=0.1','vxs=0.2','vxs=0.3',...
        'vxs=0.4','vxs=0.5')
    hold on
end
title('d(t)');


%% in this section, we give a small initial lateral velocity
% and only give freedom to time T

xs = 3.5; % initial lateral offset w.r.t reference line
vxs = 0.3; % intial lateral velocity
axs = 0; % initial lateral acceleration

T = []; % sampling time T
xe = 0; % sampling lateral offset at end point

vxe = 0; % we default that we should have zero lateral v at the end
axe = 0; % we default that we should have zero lateral a at the end


xt = [];
xt_max = [];
for T = 5:1:10
    [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, ...
        vxs, axs, xe, vxe, axe,T);
    xt = [];
    
    for t = 0:0.05:T
        xt = [xt,calc_point(a0,a1,a2,a3,a4,a5,t)];
        
    end
    xt_max = [xt_max, max(xt)];
    plot(0:0.05:T,xt,'--')
    legend('T = 5','T = 6','T = 7','T = 8','T = 9','T = 10')
    hold on
end
title('d(t)');


%% in this section, we give a small initial lateral velocity
% and only give freedom to terminal lateral offset xe

xs = 3.5; % initial lateral offset w.r.t reference line
vxs = 0.3; % intial lateral velocity
axs = 0; % initial lateral acceleration

T = 8; % sampling time T
xe = []; % sampling lateral offset at end point

vxe = 0; % we default that we should have zero lateral v at the end
axe = 0; % we default that we should have zero lateral a at the end


xt = [];
xt_max = [];
for xe = 0:0.4:2
    [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, ...
        vxs, axs, xe, vxe, axe,T);
    xt = [];
    
    for t = 0:0.05:T
        xt = [xt,calc_point(a0,a1,a2,a3,a4,a5,t)];
        
    end
    xt_max = [xt_max, max(xt)];
    plot(0:0.05:T,xt,'--')
    legend('xe = 0','xe = 0.4','xe = 0.8','xe = 1.2',...
        'xe = 1.6','xe = 2')
    hold on
end
title('d(t)');


%%


%%

function [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, ...
    vxs, axs, xe, vxe, axe,T)
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
% using 
A = [T^3 T^4 T^5; 3*T^2 4*T^3 5*T^4; 6*T 12*T^2 20*T^3];
b = [(xe - xs  - vxs*T - 0.5*axs*T^2); (vxe- vxs - axs*T ); (axe - axs)];
x = pinv(A) * b;
a0 = xs;
a1 = vxs;
a2 = axs/2;

a3 = x(1);
a4 = x(2);
a5 = x(3);
end

function [xt] = calc_point(a0,a1,a2,a3,a4,a5,t)
xt = a0 + a1 * t + a2 * t ^2 + a3 * t^3 + a4 * t^4 + a5 * t^5;
end

function [xt] =calc_first_derivative(a1,a2,a3,a4,a5,t)
xt = a1 + 2 * a2 * t + 3 * a3 * t^2 + 4 * a4 * t^3  +  5 * a5 * t^4;
end

function [xt]  = calc_second_derivative(a2,a3,a4,a5,t)
xt = 2* a2 + 6* a3 * t + 12 * a4 * t^2 + 20* a5 *t^3;
end

function [xt] = calc_third_derivative(a3,a4,a5,t)
xt =6 * a3 + 24 * a4 * t + a5 * t^2;
end