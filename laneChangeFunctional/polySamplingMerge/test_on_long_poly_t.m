clc
clear all
close all
%% this section gives a simple test with fixed boundary conditions
xs = 0;
vxs = 8.3333;
axs = 0;

sa0 = 0;
sb0 = 21;
va0 = 8.3333;
vb0 = 8.3333;

T = 10;
sa = sa0 + va0 * T;
sb = sb0 + vb0 * T;
% xe = 1/2 * (sb + sa); 
% in real cases, we find that ego vehicle that is closer
% to front car can be more reasonable. Therefore, we choose
% to use the following xe calculation form.
xe = sa + 2/3 * (sb - sa);
LEN = xe;
vxe = 1/2 * (va0 +vb0);
axe = 0;

[a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, ...
    vxs, axs, xe, vxe, axe,T);
xt = [];
for t = 0:0.05:T
   xt = [xt,calc_point(a0,a1,a2,a3,a4,a5,t)];
end

plot(0:0.05:T,xt,'--b')
title('s(t)');

vt = [];
for t = 0:0.05:T
   [vt] =[vt,calc_first_derivative(a1,a2,a3,a4,a5,t)];
end
figure
plot(0:0.05:T,vt,'--b')
title('v(t)');

v_profile = [];
for s = 0:0.2:LEN
    v = intepolation_v(xt,vt,s,a1,a2,a3,a4,a5,LEN);
    v_profile = [v_profile,v];
end

figure
plot(1:length(v_profile),v_profile,'--b');
title('v profile');


%% in this section, we sample on T
clc
clear all
close all

xs = 0;
vxs = 8.3333;
axs = 0;

sa0 = 0;
sb0 = 21;
va0 = 8.3333;
vb0 = 8.3333;

for T = 6:12
    sa = sa0 + va0 * T;
    sb = sb0 + vb0 * T;
    xe = sa + 2/3 * (sb - sa);
    vxe = 1/2 * (va0 + vb0);
    axe = 0;

    [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, ...
        vxs, axs, xe, vxe, axe,T);
    xt = [];
    vt = [];
    at = [];
    for t = 0:0.05:T
       [xt] = [xt,calc_point(a0,a1,a2,a3,a4,a5,t)];
    end
    
    for t = 0:0.05:T
       [vt] =[vt,calc_first_derivative(a1,a2,a3,a4,a5,t)];
    end
    
    for t = 0:0.05:T
        [at]  = [at,calc_second_derivative(a2,a3,a4,a5,t)];
    end
    
% %     plot(0:0.05:T,xt,'-b');
% %     hold on;
%    
%     plot(0:0.05:T,vt,'--r');
%     hold on;

    plot(0:0.05:T,at,'--g');
    hold on;
end
title('s(t), v(t), a(t)');

















function v = intepolation_v(xt,vt,s,a1,a2,a3,a4,a5,LEN)
if s > LEN
    v = vt(end);
else
    for i = 2:length(xt)
        if xt(i) >= s
            range = [xt(i-1),xt(i)];
            iter = i;
            break;
        end
    end
   t = 0.05 * (i-1) + 0.05 * (s - range(1))/(range(2)-range(1));
   v = calc_first_derivative(a1,a2,a3,a4,a5,t);
end

end

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
% using this method to give a one-shot matrix inverse
% calculation is correct but not reasonable. As it is 
%computationally unefficient. Instead, we calculate a0,
% a1,a2 directly, and use matrix of dimension three to 
% reduce computation efforts.
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