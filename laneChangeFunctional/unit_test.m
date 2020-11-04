%% this section is a unit test for reference line generator, where we compare two
% functions between generator working in frenet coordinate and in Cartisian
% coordinate.
clc
clear all
close all
reference = [[],[]];
for i = 1:10
    reference = [reference;[i+1,i*1.2]]
end
    
    line_a = [[],[]];
    line_b = [[],[]];
for i = 0:50
    y = 1 + 0.1* i + 0.001 *i^2 + 0.0002 *i^3;
    line_a = [line_a; [i,y]];
end

for i = 0:50
    y = -3 + 0.1* i + 0.001 *i^2 + 0.0001 *i^3;
    line_b = [line_b; [i,y]];
end

plot(line_a(:,1), line_a(:,2))
legend('ref on left');
hold on
plot(line_b(:,1), line_b(:,2))
legend('ref on right');
hold on
a0 = 1; a1 = 0.1; a2 = 0.001; a3 = 0.0002;
b0 = -3; b1 = 0.1; b2 = 0.001; b3 = 0.0001;
LEN = 50;
reference_1 = reference_line_generator(a0,a1,a2,a3, b0,b1,b2,b3, LEN);
reference_2 = reference_line_generator_frenet(a0,a1,a2,a3, b0,b1,b2,b3, LEN);
plot(reference_1(:,1),reference_1(:,2),'--b')
legend('ref in Cartisian');
plot(reference_2(:,1),reference_2(:,2),'^r')
legend('ref in Frenet');

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
