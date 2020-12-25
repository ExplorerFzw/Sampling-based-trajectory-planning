
























clc
clear all 
close all

% a0 = -3; a1 = -0.1; a2 = -0.001; a3 = -0.0001;
% b0 = 3; b1 = -0.1; b2 = -0.001; b3 = -0.00008;

c0 = 1; c1 = 0; c2 = 0; c3 = 0;
b0 = 3; b1 = 0; b2 = 0; b3 = 0;


velocity = 40;
indicator = 1;
Flag = 1;
P_lateral_offset = 3.5;
long_S = 13;
output = [];
TIME = 6;
kappa_lot = [];
for long_S = 0:80
   [search_latoff,search_theta,search_kappa,trajs_new] = LineGeneration(c0,c1,c2,c3,velocity,...
    indicator,Flag,P_lateral_offset,long_S,TIME);
   kappa_lot = [kappa_lot,search_kappa];
end


reference_1 = output;


figure
plot(trajs_new(:,1), trajs_new(:,2),'-ob')

figure
plot(1:length(kappa_lot), kappa_lot,'-ob')
% 
% figure
% plot(1:length(reference_1),reference_1(:,1),'-b')
% title("lataral offset")
% 
% figure
% plot(1:length(reference_1),reference_1(:,2),'-b')
% title("theta")
% 
% figure
% plot(1:length(reference_1),reference_1(:,3),'-b')
% title("kappa")
%%
trajs_new = OUTPUT(:,1:2);

[kappa,pd,pdd] = calculate_kappa(trajs_new);

figure
plot(OUTPUT(:,3),pd,'-ob')
title("pd")

figure
plot(OUTPUT(:,3),pdd,'-ob')
title("pdd")

figure
plot(OUTPUT(:,1),OUTPUT(:,2))
title("position")
% figure
% V= []; Y = [];
% for v = 0:0.5:100
%     y = 0.0080 * v^2 + 0.0562 * v + 20.943
%     V =[V,v]; Y = [Y,y];    
% end
% plot(V,Y)

function [search_latoff,search_theta,search_kappa,trajs_new] = LineGeneration(c0,c1,c2,c3,velocity,...
    indicator,Flag,P_lateral_offset,long_S,TIME)
   %% the main function, which is used to generate changing lane curve dynamically    
    
    search_latoff = 0;
    search_theta = 0;
    search_kappa = 0;
    velocity_ms = velocity /3.6 ;
    
   
    % main function: where we do loop calculation 
        LEN = calculateLEN(velocity,TIME);
%         reference_1 = reference_line_generator(,a1,a2,a3, b0,b1,b2,b3,LEN);
        
%         S = 0;
        D0 = c0;
        Te = TIME;
        Di = D0 + abs(P_lateral_offset) * indicator;% indicator signal should be positive when turning left, and vice versa.
        heading = atan(c1);
        
        xs = D0;
        vxs = velocity_ms * sin(heading);
        vxs = min(max(vxs, -0.8),0.8);
        axs = 0;
        %Ti is sampling on T
        xe = Di; % sampling on lateral offset
        vxe = 0;
        axe = 0;
        
%         [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, ...
%                 vxs, axs, xe, vxe, axe,Te);
%         [ref_poly] = combination(a0, a1, a2, a3, a4, a5, Te, velocity_ms);

        [reference] = reference_generator_oneshot(c0,c1,c2,c3,LEN);
        ref_len_valid = find_valid_ref_max_len(reference);
        [ref_bezier] = ref_bezier_generation(reference, D0,LEN,Di);
        trajs_new_origin = reference_generation(reference, ref_bezier,ref_len_valid);
        
%         
%         trajs_new_origin = reference_generation(reference_1, ref_bezier);
%     %         trajs_new = PathSmoothing(trajs_new_origin, P_alpha, P_beta,P_MAX_ITER,P_TOL, P_MAX_KAPPA);
        trajs_new = trajs_new_origin;
        
        delta_heading_rad = calculat_delta_heading(reference, trajs_new,ref_len_valid);
        delta_heading_deg = rad_to_deg(delta_heading_rad);
        [kappa] = calculate_kappa(trajs_new,ref_len_valid);
        adding = zeros(400,2)-1;
        output = [trajs_new,ref_bezier,delta_heading_rad,kappa,adding];
        [max_ref, valid_len] = calculate_max_ref(output);
        output = Reshape(output,max_ref,c2);
        
        [search_latoff,search_theta,search_kappa] = post_processing(output,long_S);
        
        
  
    end
   
    
        
       
       
%             the output contains infomation as follow: 
%             1,2 cols: under vehicle coordinate, the x,y positions of planned
%             trajectories;
%             3,4 cols: w.r.t longitudinal intergration s, the lateral offset on
%             each sampled s, offset to left of reference line is positive, and
%             the other side is negative;
%             5 cols: delta_heading of matched point vectors between reference
%             line and planned trajs, anti-clock wise from reference to planned
%             trajs is positive;
%             6 cols: planned trajs kappa, vehicle turing left is positive and
%             turning right is negative;
%             7 cols: velocity profile along the planned trajectory.
%             8 cols: acceleration profile along the planned trajectory.    

        
%         Output = output;
%         Output = transition_to_BUS(output);


function [reference] = reference_generator_oneshot(c0,c1,c2,c3,LEN)
    reference = zeros(400,2);
    index = 1;
    
    for t = 0:0.5:LEN
        yt = c0 + c1 * t + c2 * t^2 + c3 * t^3;
        
        reference(index,1:2) = [t, yt];
        index = index + 1;
    end
    
end

function [ref_poly] = combination(a0, a1, a2, a3, a4, a5, Te, velocity)
    
    ref_poly = zeros(400,2);
    index = 1;
    
    for t = 0:0.025:Te
        yt = calc_point(a0,a1,a2,a3,a4,a5,t);
        xt = velocity * t;
        ref_poly(index,1:2) = [xt, yt];
        index = index + 1;
    end
end

function [xt] = calc_point(a0,a1,a2,a3,a4,a5,t)
xt = a0 + a1 * t + a2 * t ^2 + a3 * t^3 + a4 * t^4+a5 * t^5;
end


function [xt] =calc_first_derivative(a1,a2,a3,a4,a5,t)
    xt = a1 + 2 * a2 * t + 3 * a3 * t^2 + 4 * a4 * t^3  +  5 * a5 * t^4;
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

function [search_latoff,search_theta,search_kappa] = post_processing(output,long_S)
    ref_S = output(:,3);
    ref_latoff = output(:,4);
    ref_theta = output(:,5);
    ref_kappa = output(:,6);

    search_latoff = LinearInterpolation(ref_S,ref_latoff,long_S);
    search_theta = LinearInterpolation(ref_S,ref_theta,long_S);
    search_kappa = LinearInterpolation(ref_S,ref_kappa,long_S);
end

function [y] = LinearInterpolation(X,Y,x)
y = 0;    
    if isempty(X)
            y = 0;
    end
    
    low = 1;
    high = length(X);
    
    if x <= X(low) 
        y = Y(low);
        return;
    end
    
    if x >= X(high)
        y = Y(high);
        return;
    end

    Flag = 0;
    
    while Flag == 0
        mid = round(0.5 * (low + high));
        if x == X(mid)
            y = Y(mid);
            Flag = 1;
            break;
            
        elseif x < X(mid)
            high =  mid;
        else
            low = mid;
        end
        
        if (high - low) == 1
            Flag = 1;
        end
       y = Y(low)  + (x - X(low))/(X(high) - X(low)) * (Y(high) - Y(low));
 
    end
    
end

function output = Reshape(output,max_ref,c2)
if max_ref < length(output)        
    for i = 1: 8
        output(max_ref+1:end, i) = output(max_ref, i); 
    end
    output(max_ref+1:end, 6) = c2 * 2;
end

end

function [len_valid] = find_valid_ref_max_len(reference)
    pos = find(reference(:,1)==0 & reference(:,2) == 0);
    len_valid = pos(2) - 3;
    
end

function [max_ref, valid_len] = calculate_max_ref(output)
    reference_1 = output;
    pos = find(reference_1(:,3)==0 & reference_1(:,4) == 0);
    if length(pos) == 1
        max_ref = length(output);
        valid_len = reference_1(end,3);
    else
        max_ref = pos(2)-2;
        valid_len = reference_1(max_ref,3);
    end
    
end


function LEN = calculateLEN(velocity,TIME)
    v = velocity;
    LEN = v / 3.6 * TIME;
%     LEN =  0.0080 * v^2 + 0.0562 * v + 20.943; % at the unit of kph
    
    LEN = round(LEN);
%     LEN = max(66,min(LEN,160));
    
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
S = 0.0;
    ref_bezier = zeros(400,2);
    index =1;
    while (S < Ti) && (index<length(reference_1))
        p = Bezierfrenet_5(D0, Ti, Di,S);
        ref_bezier(index,:) = p;
        S = S + sqrt((reference_1(index+1,1)-reference_1(index,1))^2 + ...
            (reference_1(index+1,2)-reference_1(index,2))^2);
        index = index + 1;
    end
end

function [delta_heading] = calculat_delta_heading(center_line, traj_new,ref_len_valid)
    LEN = ref_len_valid;
    delta_heading = zeros(400,1);
    for i = 1: LEN-1
        x1 = center_line(i+1,1) - center_line(i,1);
        y1 = center_line(i+1,2) - center_line(i,2);
        x2 = traj_new(i+1,1) - traj_new(i,1);
        y2 = traj_new(i+1,2) - traj_new(i,2);
        
        square_term_1 = sqrt(x1^2 + y1^2);
        square_term_2 = sqrt(x2^2 + y2^2);
        
        if square_term_1 == 0 && square_term_2 == 0
            delta_theta = 0;
        else
            
            delta_theta = (x1 * x2 + y1 * y2) / abs(square_term_1 * square_term_2 + 0.00001);
            
        end
        symbo = sign(traj_new(i+1,2) - center_line(i+1,2));
        delta_heading(i) =   symbo * acos(delta_theta);
    end
        delta_heading(LEN) = delta_heading(LEN - 1);    
end

function [reference] = reference_line_generator(a0,a1,a2,a3, b0,b1,b2,b3, LEN)
%% in this function, we use the left and right lane polynomials to generate
% a reference center line
% input: left lane polynomials, right lane polynomials, LEN(length of reference)
% output: reference center line polynomials
reference = zeros(400,2);
if LEN == 0
    fprintf('LEN = 0, reference cannot be generated. \r')
    return;
end
i = 0.0;
NUM = LEN / 0.5;
NUM  = round(NUM);

for i = 0:1:NUM
    iter = i/2;
    y = 0.5 * ( (a0 + a1 * iter + a2 * iter^2 + a3 * iter^3) + (b0 + b1 * iter + b2 * iter^2 + b3 * iter^3));
    reference(i+1,:) = [iter,y];
%     reference =  [reference; [iter,y]];
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
    reference = [reference; [0.5*(x_a + x_b), 0.5*(y_a + y_b)]];
    
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
% 2/3 method %%%%%%%%%%%%%%%%%%%%
    
%     p0 = [ 0, D0];
%     p1 = [0.25 * Ti, D0];
%     p2= [0.5 *Ti, 1/3 * Di + 2/3 * D0];
%     p3 =[ 0.5 * Ti, 1/3 * D0 + 2/3 * Di];
%     p4 =[ 0.75 * Ti, Di];
%     p5 = [Ti, Di];

% 2/5 method %%%%%%%%%%%%%%%%%%%%

    p0 = [ 0, D0];
    p1 = [0.15 * Ti, D0];
    p2= [0.5 *Ti, 2/5 * Di + 3/5 * D0];
    p3 =[ 0.5 * Ti, 2/5 * D0 + 3/5 * Di];
    p4 =[ 0.85 * Ti, Di];
    p5 = [Ti, Di];
    
%2/3 + 1/5 method%%%%%%%%%%%%%%%%%

%     p0 = [ 0, D0];
%     p1 = [0.25 * Ti, 1/5 * Di + 4/5 * D0];
%     p2= [0.5 *Ti, 1/3 * Di + 2/3 * D0];
%     p3 =[ 0.5 * Ti, 1/3 * D0 + 2/3 * Di];
%     p4 =[ 0.75 * Ti, 1/5 * D0 + 4/5 * Di];
%     p5 = [Ti, Di];
%     
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  %generate a fifth order bezier curve

    p= (1-(t)/Ti)^5*p0 + 5*(1-(t)/Ti)^4*((t)/Ti)*p1 + 10*(1-(t)/Ti)^3*((t)/Ti)^2*p2 +...
     10*(1-(t)/Ti)^2*((t)/Ti)^3*p3 +5*(1-(t)/Ti)*((t)/Ti)^4*p4 + ((t)/Ti)^5*p5;

end
 
function [trajs_new] = reference_generation(trajs_local, p_store,ref_len_valid)
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

    trajs_new = zeros(400,2);
    for i = 1: ref_len_valid 
%         if (i + current_index) > length(waypoint)
%             break;
%         end
        d = p_store(i,2);
        if trajs_local(i,1) <= 0.0001
            theta = 0;
        elseif (i == 1)
            theta = atan(trajs_local(i,2) / trajs_local(i,1));
        elseif (trajs_local(i,1) - trajs_local(i-1,1)) <= 0.0001
            theta = 0;
        else
            theta = atan((trajs_local(i,2) - trajs_local(i-1,2)) / (trajs_local(i,1) - trajs_local(i-1,1)));
        end
        
        if (theta>-pi/2 && theta <=0)
            x = trajs_local(i,1) + d * sin(theta);
            y = trajs_local(i,2) + d * cos(theta);
            trajs_new(i,:) = [x,y];
        elseif (theta>0 && theta < pi/2)
            x = trajs_local(i,1) - d * sin(theta);
            y = trajs_local(i,2) + d * cos(theta);
            trajs_new(i,:) = [x,y];    
        else
           fprintf("it seems that the reference line is unacceptable!");
        end
    end
end

function optPath = PathSmoothing(path, alpha, beta,P_MAX_ITER,P_TOL, P_MAX_KAPPA)
%     non_zero = 0;
%     non_zero = find((path(:,1) == 0 ) & (path(:,2) == 0),1);
%     if  (non_zero == 0)
%         non_zero = 400;
%     end
    optPath=path(1:400,:);%
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
                 [value, loc] = max(abs(change));
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


function [kappa] = calculate_kappa(trajs_new,ref_len_valid)

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
    
    for i = 1:(ref_len_valid - 1)
        
        if (trajs_new(i+1,1)-trajs_new(i,1)) <= 0.0001
            denominator_pd = 0.0001;
        else
            denominator_pd = trajs_new(i+1,1)-trajs_new(i,1);
        end
        
        pd(i) = (trajs_new(i+1,2)-trajs_new(i,2))/denominator_pd;   
    end
    pd(length(trajs_new)) = pd(length(trajs_new)-1);
    % calculate the second derivatives, central difference
%     pdd(1) = 0;
%     for i =2: length(trajs_new)-1
%         
%         if (0.5*(-trajs_new(i-1,1)+trajs_new(i+1,1)))^2 <= 0.0001
%             denominator_pdd = 0.0001;
%         else
%             denominator_pdd = (0.5*(-trajs_new(i-1,1)+trajs_new(i+1,1)))^2;
%         end
%         
%         pdd(i) = (trajs_new(i+1,2)-2*trajs_new(i,2) +...
%             trajs_new(i-1,2))/denominator_pdd;
%     end
% calculate the second derivatives, forward difference
    for i =1: ref_len_valid-2
        if (0.5*(trajs_new(i+1,1) - trajs_new(i,1)))^2 <= 0.001
            denominator_pdd = 0.001;
        else
            denominator_pdd = (0.5*(trajs_new(i+1,1) - trajs_new(i,1)))^2;
        end
        
        pdd(i) = (trajs_new(i+2,2)-2*trajs_new(i+1,2) +...
            trajs_new(i,2))/denominator_pdd;
    end
    
    pdd(length(trajs_new)-1) = pdd(length(trajs_new)-2);
    pdd(length(trajs_new)) = pdd(length(trajs_new)-2);
    
    for i  = 1:ref_len_valid
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

function Output = transition_to_BUS(output)
%     
    size_of_out = size(output,1);
    
    
    if isempty(output)
        for i  = 1: 400      
            output(i,:) = i  ;
        end
    elseif size(output,2) ~= 8
        for i  = 1: 400      
            output(i,:) = i  ;
        end
    else
        if size_of_out < 400
            output = [output; zeros((400 - size_of_out),8)];
        else
            output = output(1:400,1:8);
        end
    end

%     output = ones(400,8);  
 
    Output.x = output(1:400,1);
    Output.y = output(1:400,2);
    Output.s = output(1:400,3);
    Output.lat_offset = output(1:400,4);
    Output.delta_theta = output(1:400,5);
    Output.kappa = output(1:400,6);
    Output.v_profile = output(1:400,7);
    Output.a_profile = output(1:400,8);
    
end