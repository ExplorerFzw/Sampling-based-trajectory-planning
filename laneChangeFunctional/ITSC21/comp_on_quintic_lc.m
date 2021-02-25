clc
close all
clear all


c0 = 0;
c1 = 0;
c2 = 0;
c3 = 0;


TIME = 6;
velocity = 36;
graph = [];

figure
for TIME = 3:1:10
    for velocity = 36: 7.2 :108
        P_lateral_offset = 3.5;

        velocity_ms = velocity / 3.6;
        D0 = c0;
        Te = TIME;
        LEN = Te * velocity_ms;
        Di = D0 + abs(P_lateral_offset); % indicator signal should be positive when turning left, and vice versa.
        heading = atan(c1);

        xs = D0;
        vxs = velocity_ms * sin(heading);
        vxs = min(max(vxs, -0.4),0.4);
        axs = 0;
        %Ti is sampling on T
        xe = Di; % sampling on lateral offset
        vxe = 0;
        axe = 0;

        [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, ...
                vxs, axs, xe, vxe, axe,Te);
        [ref_poly] = combination(a0, a1, a2, a3, a4, a5, Te, velocity_ms);

        [kappa,pd,pdd] = calculate_kappa(ref_poly);

        [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, ...
                vxs, axs, xe, vxe, axe,LEN);
        [kappa_std,vt,at]= cal_kappa_std(a0,a1,a2,a3,a4,a5,LEN,Te,velocity_ms);
        [a_profile] = calculate_a(kappa_std, velocity_ms);
        
        kappa_max = max(abs(kappa_std));
        a_max =  max(abs(a_profile));
        
        comp = [TIME, velocity,kappa_max,a_max];
        graph = [graph;comp];
        
%         plot(ref_poly(:,1),kappa_std)
%         plot(ref_poly(:,1),a_profile)
%         hold on;
%         plot(ref_poly(:,1),ref_poly(:,2));
    end
end
% title("ref poly");

% figure
% plot(ref_poly(:,1),kappa)
% title("kappa");

% plot3(graph(:,1),graph(:,2),graph(:,3))


x=graph(:,1);y=graph(:,2);z=graph(:,3); z2 = graph(:,4);
xtemp=linspace(min(x),max(x),10);
ytemp=linspace(min(y),max(y),10);
[X,Y]=meshgrid(xtemp,ytemp);
Z=griddata(x,y,z,X,Y,'v4');
surf(Y,X,Z,'FaceAlpha',1)
xlabel("velocity(km/h)");ylabel("time(sec)");zlabel("kappa(1/m)");
colorbar

figure
x=graph(:,1);y=graph(:,2);z=graph(:,3); z2 = graph(:,4);
xtemp=linspace(min(x),max(x),10);
ytemp=linspace(min(y),max(y),10);
[X,Y]=meshgrid(xtemp,ytemp);
Z=griddata(x,y,z2,X,Y,'v4');
surf(Y,X,Z,'FaceAlpha',1)
xlabel("velocity(km/h)");ylabel("time(sec)");zlabel("acc(1/m^2)");
colorbar



function [ref_poly] = combination(a0, a1, a2, a3, a4, a5, Te, velocity)
    
   
    ref_poly = [];
    
    
    for t = 0:0.1:Te
        
        yt = calc_point(a0,a1,a2,a3,a4,a5,t);
        xt = velocity * t;
        ref_poly = [ref_poly;[xt,yt]];
        
    end
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

function [kappa,vt,at] = cal_kappa_std(a0,a1,a2,a3,a4,a5,LEN,Te,velocity_ms)
    kappa = [];
    vt = [];
    at = [];
    
    
    for t = 0: 0.1 * velocity_ms: LEN
        
       
        
        vt_temp = calc_first_derivative(a1,a2,a3,a4,a5,t);
        if abs(vt_temp)< 0.01
            vt_temp = 0.001;
        end
        [vt] = [vt,vt_temp];

          
        [at]  = [at ,calc_second_derivative(a2,a3,a4,a5,t)];
    end
        kappa = (at)./((1+vt.^2).^(1.5));
        
    
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


function [kappa,pd,pdd] = calculate_kappa(trajs_new)

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
    
    for i = 1:(length(trajs_new) - 1)
        
        if abs(trajs_new(i+1,1)-trajs_new(i,1)) <= 0.00001
            denominator_pd = 0.00001;
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
    for i =1: (length(trajs_new)-2)
        if (0.5*(trajs_new(i+1,1) - trajs_new(i,1)))^2 <= 0.001
            denominator_pdd = 0.001;
        else
            denominator_pdd = ((trajs_new(i+1,1) - trajs_new(i,1)))^2;
        end
        
        pdd(i) = (trajs_new(i+2,2)-2*trajs_new(i+1,2) +...
            trajs_new(i,2))/denominator_pdd;
    end
    
    pdd(length(trajs_new)-1) = pdd(length(trajs_new)-2);
    pdd(length(trajs_new)) = pdd(length(trajs_new)-2);
    
    for i  = 1:length(trajs_new)
        kappa(i) = (pdd(i))/((1+pd(i)^2)^(1.5));
    end
%     kappa(1) = kappa(2);
    
end

function [a_profile] = calculate_a(kappa_std, velocity)
    
    for i = 1:length(kappa_std)
        a_profile(i) = velocity * velocity * kappa_std(i) ;
    end
end


