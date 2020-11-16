%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% above parts provide a comparison between to difference curvature
% calculation, while we decide to trust the first one
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
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
legend("first method","second method");

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

function y =clamp(n, lower, upper)
    y = max(lower, min(n,upper));
end