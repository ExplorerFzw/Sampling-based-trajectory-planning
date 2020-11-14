clc
clear all 
close all
D0 = 0;
Ti = 80;
Di = 3.5;
path = [];
for i = 0:0.1:Ti
    path = [path;Bezierfrenet_5(D0, Ti, Di,i)]; % generate an initial bezier curve
% p = [p;[i,sin(i)]];
end
path(:,2) = path(:,2);%+ rand(length(p),1)/10;
p = path;
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
 
 for i  = 1:length(p)
     k(i) = (pdd(i))/((1+pd(i)^2)^(1.5));
 end

kappa = zeros(1,length(p));
for i = 2 : length(p) - 1
    xi = p(i,:);
    xim1 = p(i-1,:);
    xip1 = p(i+1,:);
    Dxi = xi - xim1; % 1 by 2
    Dxip1 = xip1 - xi; % 1 by 2
    absDxi = norm(Dxi); % 1
    absDxip1 = norm(Dxip1); % 1 
    gradient = [0,0]; % 1 by 2

    Dphi = acos(clamp((Dxi * Dxip1' / (absDxi * absDxip1)),-1,1)); % 1 
    kappa(i) = Dphi / absDxi; % 1
end
figure
plot(1:length(p),k(1:length(p)),'-b')
hold on
plot(1:length(p),kappa(1:length(p)),'--r')
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% above parts provide a comparison between to difference curvature
% calculation, while we decide to trust the first one
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
figure
for i = 0.01%0.1:0.1:0.5
    for j = 0.5%0.05:0.05:0.2
    alpha = i;
    beta = j;
    optPath=PathSmoothing(path, alpha, beta);
    end
end
    plot(path(:,1),path(:,2),'-r');
    hold on;
    plot(path(619,1),path(619,2),'or');
    hold on;
    plot(optPath(:,1),optPath(:,2),'--b');
    hold on;
    plot(optPath(619,1),optPath(619,2),'ob');
    
    legend('Before','After');
    title('Path Smoothing');
    grid on;
    hold off;


function optPath=PathSmoothing(path, alpha, beta)
    optPath=path;%
    TOL = 0.7;
    iter = 0;
    COND = 1;
    while COND == 1 
%         change=0;
        for ip=2:(length(path(:,1))-1) 
%           optPath(ip,:)=optPath(ip,:)-alpha*(optPath(ip,:)-path(ip,:));
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
            if max(abs(change)) >= TOL
                COND = 2
                 [value, loc] = max(abs(change))
                break;
            end
        end
        
        if iter > 10000
            COND = 3;
        end
        
        sum = 0;
        for i = 1: length(kappa)    
            if abs(kappa(i)) > 0.002
               sum = sum + 1; 
            end
        end
        
        if sum == 0
            COND = 4
        end
                   
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

function y =clamp(n, lower, upper)
    y = max(lower, min(n,upper));
end


function k = calculate_kappa(p) 
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

     for i  = 1:length(p)
         k(i) = (pdd(i))/((1+pd(i)^2)^(1.5));
     end
end
