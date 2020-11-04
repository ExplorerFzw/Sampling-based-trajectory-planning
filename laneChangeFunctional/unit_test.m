%% this section is a unit test for reference line generator, where we compare two
% functions between generator working in frenet coordinate and in Cartisian
% coordinate.
clc
clear all
close all
reference = [[],[]];
LEN = 80;
for i = 1:10
    reference = [reference;[i+1,i*1.2]]
end
    
    line_a = [[],[]];
    line_b = [[],[]];
    
% a0 = 3; a1 = 0.1; a2 = 0.001; a3 = 0.0001;
% b0 = -3; b1 = 0.1; b2 = 0.001; b3 = 0.00008;

a0 = -3; a1 = -0.1; a2 = -0.001; a3 = -0.0001;
b0 = 3; b1 = -0.1; b2 = -0.001; b3 = -0.00008;

for i = 0:LEN
    y = a0 +a1 * i + a2 *i^2 + a3 *i^3;
    line_a = [line_a; [i,y]];
end

for i = 0:LEN
    y = b0 + b1 * i + b2 * i^2 + b3 * i^3;
    line_b = [line_b; [i,y]];
end

plot(line_a(:,1), line_a(:,2))

hold on
plot(line_b(:,1), line_b(:,2))

hold on

LEN = 80;
tic;
reference_1 = reference_line_generator(a0,a1,a2,a3, b0,b1,b2,b3, LEN);
toc;
fprintf('reference_1 generation time is: %f ms \r',(1000*toc))
tic;
reference_2 = reference_line_generator_frenet(a0,a1,a2,a3, b0,b1,b2,b3, LEN);
toc;
fprintf('reference_2 generation time is: %f ms \r',(1000*toc))
plot(reference_1(:,1),reference_1(:,2),'--b')

plot(reference_2(:,1),reference_2(:,2),'^r')

hold on

S = 0;
D0 = 0;
Ti = LEN;
Di = -6;
ref_bezier = [[],[]];
index =1;
while S < Ti
    p = Bezierfrenet_5(D0, Ti, Di,S);
    ref_bezier =[ref_bezier; p];
    S = S + sqrt((reference_1(index+1,1)-reference_1(index,1))^2 + ...
        (reference_1(index+1,2)-reference_1(index,2))^2);
    index = index + 1;
end

trajs_new = reference_generation(reference_1, ref_bezier);
plot(trajs_new(:,1),trajs_new(:,2),'--r');
legend('ref on left','ref on right','ref in Cartisian','ref in Frenet','changing lane');
figure
plot(ref_bezier(:,1),ref_bezier(:,2))

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

function y = deg_to_rad(x)
    y = x * pi / 180;
end

function y = rad_to_deg(x)
    y = x * 180 / pi;
end

function [reference] = reference_line_generator_frenet(a0,a1,a2,a3, b0,b1,b2,b3, LEN)
S = 0;
s_a = 0;
s_b = 0;
x_a = 0;
x_b = 0;
reference = [x_a, x_b];
delta_x = 0.02;
RESOLUTION = 0.2;
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
 
function [trajs_new] = reference_generation(trajs_local, p_store)
    % here the trajs_local is a vector<vector<double>>,with its dimension
    %n by 2, the p_store store the information Bezier curve generaion
    %function creates, which are longitudinal 's' and 'lateral offset'.
    trajs_new = [[ ],[ ]];
    for i = 1: min(length(p_store), length(trajs_local))
%         if (i + current_index) > length(waypoint)
%             break;
%         end
        d = p_store(i,2);
        if trajs_local(i,1) == 0
            theta = 0;
        else
            theta = atan(trajs_local(i,2) / trajs_local(i,1));
        end
        
        if (theta>-pi/2 && theta <=0)
            x = trajs_local(i,1) - d * sin(theta);
            y = trajs_local(i,2) + d * cos(theta);
            trajs_new = [trajs_new ; [x,y]];
        elseif (theta>0 && theta < pi/2)
            x = trajs_local(i,1) - d * sin(theta);
            y = trajs_local(i,2) + d * cos(theta);
            trajs_new = [trajs_new ; [x,y]];    
        else
           fprintf("it seems that the reference line is unacceptable!");
        end
    end
end
