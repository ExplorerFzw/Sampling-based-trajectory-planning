
clc
clear all 
close all

a0 = -3; a1 = -0.1; a2 = -0.001; a3 = -0.0001;
b0 = 3; b1 = -0.1; b2 = -0.001; b3 = -0.00008;
velocity = 50;
indicator = 1;
Flag = 1;
P_alpha = 0.01;
P_beta = 0.7;
P_lateral_offset = 3.5;
P_MAX_ITER = 10000;
P_TOL = 0.7;
P_MAX_KAPPA = 0.002;




%% the main function, which is used to generate changing lane curve dynamically    
tic;    
if Flag ~= 1 
        output = [];
        return;
end
    
LEN = calculateLEN(velocity);
reference_1 = reference_line_generator_frenet(a0,a1,a2,a3, b0,b1,b2,b3,LEN);
S = 0;
D0 = 0.5 * (a0 + b0);
Ti = LEN;
Di = abs(P_lateral_offset) * indicator;% indicator signal should be positive when turning left, and vice versa.
[ref_bezier] = ref_bezier_generation(reference_1, D0,Ti,Di);
trajs_new_origin = reference_generation(reference_1, ref_bezier);
% trajs_new = trajs_new_origin;
trajs_new = PathSmoothing(trajs_new_origin, P_alpha, P_beta,P_MAX_ITER,P_TOL, P_MAX_KAPPA);
delta_heading_rad = calculat_delta_heading(reference_1, trajs_new);
delta_heading_deg = rad_to_deg(delta_heading_rad);
kappa = calculate_kappa(trajs_new);
output = [ref_bezier,delta_heading_rad,kappa];

toc;
fprintf('smooth line generation time is: %f ms \r',(1000*toc));
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%plot the figure to simulate the system performance
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    line_a = [[],[]];
    line_b = [[],[]];
for i = 0:LEN
    y = a0 +a1 * i + a2 *i^2 + a3 *i^3;
    line_a = [line_a; [i,y]];
end

for i = 0:LEN
    y = b0 + b1 * i + b2 * i^2 + b3 * i^3;
    line_b = [line_b; [i,y]];
end


plot(line_a(:,1), line_a(:,2));
hold on
plot(line_b(:,1), line_b(:,2));
hold on
plot(reference_1(:,1),reference_1(:,2),'--b')
hold on
plot(trajs_new(:,1),trajs_new(:,2),'--r');
legend('ref on left','ref on right','ref in Cartisian','smoothed changing lane');
%%
function LEN = calculateLEN(velocity)
    LEN = velocity;
    LEN = round(LEN);
    
    if LEN == 0
        fprintf('LEN calculation error. \r')
    end
end

function [ref_bezier] = ref_bezier_generation(reference_1, D0, Ti, Di)
%% this function generate bezier curve information 
% input: the centerline reference_1, bezier curve control points
% output: the matrix is in dimension of n by 2, with its first col
% longitudinal integration length, second col lateral offset with respect
% to center line.
% notice: shifting to left is positive, and vice versa. 
S = 0;
    ref_bezier = [[],[]];
    index =1;
    while S < Ti
        p = Bezierfrenet_5(D0, Ti, Di,S);
        ref_bezier =[ref_bezier; p];
        S = S + sqrt((reference_1(index+1,1)-reference_1(index,1))^2 + ...
            (reference_1(index+1,2)-reference_1(index,2))^2);
        index = index + 1;
    end
end

function [delta_heading] = calculat_delta_heading(center_line, traj_new)
    LEN = min(length(center_line), length(traj_new));
    delta_heading = [0];
    for i = 1: LEN-1
        x1 = center_line(i+1,1) - center_line(i,1);
        y1 = center_line(i+1,2) - center_line(i,2);
        x2 = traj_new(i+1,1) - traj_new(i,1);
        y2 = traj_new(i+1,2) - traj_new(i,2);
        delta_theta =  (x1 * x2 + y1 * y2) / (sqrt(x1^2 + y1^2) * sqrt(x2^2 + y2^2));
        delta_heading =  [delta_heading; acos(delta_theta)];
    end
end

function [reference] = reference_line_generator(a0,a1,a2,a3, b0,b1,b2,b3, LEN)
%% in this function, we use the left and right lane polynomials to generate
% a reference center line
% input: left lane polynomials, right lane polynomials, LEN(length of reference)
% output: reference center line polynomials
reference = [[],[]];
if LEN == 0
    fprintf('LEN = 0, reference cannot be generated. \r')
    return;
end

for i = 0:0.2:LEN
    y = 0.5 * ( (a0 + a1 * i + a2 * i^2 + a3 * i^3) + (b0 + b1 * i + b2 * i^2 + b3 * i^3));
    reference =  [reference; [i,y]];
end
end

function y = f_a(a0, a1, a2, a3, x)
%% calculate polynomial y values
    y = a0 + a1 * x + a2 * x^2 + a3 * x^3;
end

function y = f_b(b0, b1, b2, b3, x)
%% calculate polynomial y values
    y = b0 + b1 * x + b2 * x^2 + b3 * x^3;
end

function y = deg_to_rad(x)
%% deg to rad unit switch
    y = x * pi / 180;
end

function y = rad_to_deg(x)
%% rad to degree unit switch
    y = x * 180 / pi;
end

function [reference] = reference_line_generator_frenet(a0,a1,a2,a3, b0,b1,b2,b3, LEN)
%% this function generates center line in discrete form
% input: the left lane and right lane polynomials parameters, and
% longitudinal LEN(how long we want to generate such a curve)
% output: using frenet method to generate the ceterline position in x and
% y

if LEN == 0
    fprintf('LEN = 0, reference cannot be generated. \r');
    return;
end

S = 0;
iter = 0;
x_a = 0;
x_b = 0;

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
    
    iter = iter + 1;
    if iter >= 5000
        print("while loop too long, missing error! \r")
        break;
    end
    
end
end

function [p] = Bezierfrenet_5(D0, Ti, Di,t)
%% this function provides the bezier curve information. 
% when given control points information, it can generate y values based on
% given x values.
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
%% this function provides method of generating changing lane discrete positions.    
% inputs: here the trajs_local is a vector<vector<double>>,with its dimension
%n by 2, the p_store store the information Bezier curve generaion
%function creates, which are longitudinal 's' and 'lateral offset', which
%is also in dimension of n by 2. 
%output: with the two inputs info, we are able to generate under vehicle
%coordinate the changing lane positions by doing position shift, based on
%the original trajs_local, in frenet direction with offset info provided by
%p_store.
if (isempty(trajs_local)) || (length(trajs_local) == 0)
    fprintf('reference trajs is not well generated! \r');
    trajs_new= [];
    return;
end

if isempty(p_store) || (length(p_store) == 0)
    fprintf('offset Bezier curve is not well generated! \r');
    trajs_new= [];
    return;
end

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

function optPath = PathSmoothing(path, alpha, beta,P_MAX_ITER,P_TOL, P_MAX_KAPPA)
    optPath=path;%
    iter = 0;
    COND = 1;
    while COND == 1 
%         change=0;
        for ip=2:(length(path(:,1))-1) 
          optPath(ip,:)=optPath(ip,:)-alpha*(optPath(ip,:)-path(ip,:));
            term_dx_1 = 2*optPath(ip,:)-optPath(ip-1,:)-optPath(ip+1,:);
%             term_dx_2 = optPath(ip-2,:) - 4*optPath(ip-1,:) + 6 * optPath(ip,:)...
%                 -4 * optPath(ip+1,:) - optPath(ip+2,:);
            optPath(ip,:) = optPath(ip,:)-beta * term_dx_1;
%           change=change+norm(optPath(ip,:)-prePath);
        end
        kappa = calculate_kappa(optPath);
        
        iter = iter + 1
        
        change = zeros(1,length(optPath));
        for i = 1:length(optPath)
            change(i) = norm(optPath(i,:)-path(i,:));
            if max(abs(change)) >= P_TOL % 0.7
                COND = 2
                 [value, loc] = max(abs(change))
                break;
            end
        end
        
        if iter > P_MAX_ITER % 10000
            COND = 3;
        end
        
        sum = 0;
        for i = 1: length(kappa)    
            if abs(kappa(i)) > P_MAX_KAPPA %0.002
               sum = sum + 1; 
            end
        end
        
        if sum == 0
            COND = 4
        end
                   
    end
end


function [kappa] = calculate_kappa(trajs_new)

%% this function provide the method of generating a sequence of curvature(kappa) 
% input: a sequence of discrete points with position x and y.
% output: a sequence of kappa on each point.
% notice: vehicle turning right has negative curvature, and vice versa.

if (isempty(trajs_new)) || (length(trajs_new) == 0)
    fprintf('changing lane trajs is not well generated! \r');
    kappa = zeros(length(trajs_new),1);
    return;
end

    pd = zeros(length(trajs_new),1);
    pdd = zeros(length(trajs_new),1);
    kappa = zeros(length(trajs_new),1);
    
    % calculate the first derivatives
    
    for i = 1:length(trajs_new)-1
        
        if (trajs_new(i+1,1)-trajs_new(i,1)) == 0
            denominator_pd = 0.001;
        else
            denominator_pd = trajs_new(i+1,1)-trajs_new(i,1);
        end
        
        pd(i) = (trajs_new(i+1,2)-trajs_new(i,2))/denominator_pd;   
    end
    pd(length(trajs_new)) = pd(length(trajs_new)-1);
    % calculate the second derivatives
    pdd(1) = 0;
    for i =2: length(trajs_new)-1
        
        if (0.5*(-trajs_new(i-1,1)+trajs_new(i+1,1)))^2 == 0
            denominator_pdd = 0.001;
        else
            denominator_pdd = 0.5*(-trajs_new(i-1,1)+trajs_new(i+1,1))^2;
        end
        
        pdd(i) = (trajs_new(i+1,2)-2*trajs_new(i,2) +...
            trajs_new(i-1,2))/denominator_pdd;
    end
    pdd(length(trajs_new)) = pdd(length(trajs_new)-1);
    
    for i  = 1:length(trajs_new)
        kappa(i) = (pdd(i))/((1+pd(i)^2)^(1.5));
    end
end

function [location] = update_trajs(velocity,trajs_new,delta_t)
%% this function dynamically update trajs_new for LKA system
S = velocity * delta_t;
    s = 0;
    for i = 1: length(trajs_new)
        s = s + sqrt((trajs_new(i+1,1) - trajs_new(i,1))^2 + ...
            (trajs_new(i+1,2) - trajs_new(i,2))^2);
        if s>= S
            break;
        end
    end
end