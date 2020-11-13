clc
clear all
close all

D0 = 0;
Ti = 18;
Di = 3;
P = [];
for t= 0:0.1:Ti
    [p] = Bezierfrenet(D0, Ti, Di,t);
    P = [P;p];
end

% plot(P(:,1),P(:,2))
p0 = [ 0, 0];
p1 = [20,0];
 p2= [40,0];
 p3 =[40,8];
 p4 =[60,8];
 p5 = [80,8];
  %try a specific polynomial to test
  i =1;
 for u =0: 0.01:1
 p(i,:)= (1-u)^5*p0 + 5*(1-u)^4*u*p1 + 10*(1-u)^3*u^2*p2 +...
     10*(1-u)^2*u^3*p3 +5*(1-u)*u^4*p4 + u^5*p5;
 i =i+1;
 end
 % calculate the first derivatives
 for i = 1:length(p)-1
 pd(i) = (p(i+1,2)-p(i,2))/(p(i+1,1)-p(i,1));
 pd(length(p)) = 0;
 end
% calculate the second derivatives
 for i =2: length(p)-1
     pdd(1) = 0;
     pdd(length(p)) = 0;
     pdd(i) = (p(i+1,2)-2*p(i,2) + p(i-1,2))/(0.5*(-p(i-1,1)+p(i+1,1)))^2;
%    pdd(i) = (p(i+1,2)-2*p(i,2) + p(i-1,2))/(-p(i,1)+p(i+1,1))^2;
 end

 figure
plot(1:length(p),pd(1:length(p)));
xlabel('sampling numbers')
ylabel('first derivatives')
title('First Derivative Continuity')
set(gca,'LineWidth',2,'FontSize',11,'FontWeight','normal','FontName','Times');
grid on;
legend('First Derivatives');


figure
plot(1:length(p), pdd(1:length(p)));
xlabel('sampling numbers')
ylabel('second derivatives')
title('Second Derivative Continuity')
set(gca,'LineWidth',2,'FontSize',11,'FontWeight','normal','FontName','Times');
grid on;
legend('Second Derivatives');

 for i  = 1:length(p)
     k(i) = (pdd(i))/((1+pd(i)^2)^(1.5));
 end
figure
plot(1:length(p),k(1:length(p)))
xlabel('sampling numbers')
ylabel('kappa(1/m)')
title('Curvature Continuity')
set(gca,'LineWidth',2,'FontSize',11,'FontWeight','normal','FontName','Times');
grid on;
legend('Curvature');

function [reference] = reference_line_generator(a0,a1,a2,a3, b0,b1,b2,b3, LEN)
%% in this function, we use the left and right lane polynomials to generate
% a reference center line
% input: left lane polynomials, right lane polynomials, LEN(length of reference)
% output: reference center line polynomials
reference = [[],[]];

for i = 0:0.2:LEN
    y = 0.5 * ( (a0 + a1 * i + a2 * i^2 + a3 * i^3) + (b0 + b1 * i + b2 * i^2 + b3 * i^3));
    reference =  [reference; [i,y]];
end
end


function y = f_a(a0, a1, a2, a3, x)
    y = a0 + a1 * x + a2 * x^2 + a3 * x^3;
end

function y = f_b(b0, b1, b2, b3, x)
    y = b0 + b1 * x + b2 * x^2 + b3 * x^3;
end

function [reference] = reference_line_generator_frenet(a0,a1,a2,a3, b0,b1,b2,b3, LEN)
S = 0;
s_a = 0;
s_b = 0;
x_a = 0;
x_b = 0;
reference = [x_a, x_b];
delta_x = 0.1;
RESOLUTION = 1;
y_a_pre = f_a(a0,a1,a2,a3, x_a);
y_b_pre = f_b(b0,b1,b2,b3, x_b);
reference = [x_a, 0.5*(y_a_pre + y_b_pre)];
while S < LEN

    s_a = 0;
    s_b = 0;
    while s_a < RESOLUTION
        x_a = x_a + delta_x;
        y_a = f_a(a0,a1,a2,a3, x_a);
        s_a = s_a + sqrt( delta_x^2 + (y_a - y_a_pre)^2);
        y_a_pre = y_a;
      
       
    end
    
    while s_b < RESOLUTION 
        x_b = x_b + delta_x;
        y_b = f_b(b0,b1,b2,b3, x_b);
        s_b = s_b + sqrt( delta_x^2 + (y_b - y_b_pre)^2);
        y_b_pre = y_b;
        
    end
    S = S + RESOLUTION;
    reference = [reference; [0.5*(x_a + x_b), 0.5*(y_a + y_b) ]];
end
end


 function [p] = Bezierfrenet_3(D0, Ti, Di,t)
 % D0 initial lateral offset, which is current vehicle lateral offset with
 % respect to center line of current lane 
 % Ti:  the longitudinal position of the desired target
 % Di the lateral position of the desired target
 % t sampling step in discretization
 
%set the four control point
 p0 = [0, D0];
 p1 = [Ti/2, D0];
 p2 = [Ti/2, Di];
 p3 = [Ti, Di];

 p = (1-(t)/Ti)^3*p0 + 3*(1-(t)/Ti)^2*(t)/Ti*p1 + ...
     3*(1-(t)/Ti)*((t)/Ti)^2*p2 + ((t)/Ti)^3*p3;
 end
 
function [p] = Bezierfrenet_5(D0, Ti, Di,t)
 
    p0 = [ 0, D0];
    p1 = [0.25 * Ti, D0];
    p2= [0.5 *Ti, D0];
    p3 =[ 0.5 * Ti, Di];
    p4 =[ 0.75 * Ti, Di];
    p5 = [Ti, Di];
  %generate a fifth order bezier curve

    p= (1-(t)/Ti)^5*p0 + 5*(1-(t)/Ti)^4*((t)/Ti)*p1 + 10*(1-(t)/Ti)^3*((t)/Ti)^2*p2 +...
     10*(1-(t)/Ti)^2*((t)/Ti)^3*p3 +5*(1-(t)/Ti)*((t)/Ti)^4*p4 + ((t)/Ti)^5*p5;

end
 





