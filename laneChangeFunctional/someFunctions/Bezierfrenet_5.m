clc
clear all
close all

D0 = 0;
Ti = 60;
Di = 3.5;
p = [];

for t = 0:Ti
    p = [p; Bezierfrenet_5(D0, Ti, Di,t)];
end

plot(p(:,1),p(:,2))


hold on 

p = [];
for t = 0:Ti
    p = [p; Bezierfrenet_5_1(D0, Ti, Di,t)];
end
plot(p(:,1),p(:,2))

hold on 

p = [];
for t = 0:Ti
    p = [p; Bezierfrenet_5_2(D0, Ti, Di,t)];
end

plot(p(:,1),p(:,2))


hold on 


legend('1st','2nd','3rd')


function [p] = Bezierfrenet_5(D0, Ti, Di,t)
%% this function provides the bezier curve information. 
% when given control points information, it can generate y values based on
% given x values.
    p0 = [ 0, D0];
    p1 = [0.25 * Ti, D0];
    p2= [0.5 *Ti, 2/5 * Di + 3/5 * D0];
    p3 =[ 0.5 * Ti, 2/5 * D0 + 3/5 * Di];
    p4 =[ 0.75 * Ti, Di];
    p5 = [Ti, Di];
  %generate a fifth order bezier curve

    p= (1-(t)/Ti)^5*p0 + 5*(1-(t)/Ti)^4*((t)/Ti)*p1 + 10*(1-(t)/Ti)^3*((t)/Ti)^2*p2 +...
     10*(1-(t)/Ti)^2*((t)/Ti)^3*p3 +5*(1-(t)/Ti)*((t)/Ti)^4*p4 + ((t)/Ti)^5*p5;

end

function [p] = Bezierfrenet_5_1(D0, Ti, Di,t)
%% this function provides the bezier curve information. 
% when given control points information, it can generate y values based on
% given x values.
    p0 = [ 0, D0];
    p1 = [0.15 * Ti, D0];
    p2= [0.5 *Ti, 2/5 * Di + 3/5 * D0];
    p3 =[ 0.5 * Ti, 2/5 * D0 + 3/5 * Di];
    p4 =[ 0.85 * Ti, Di];
    p5 = [Ti, Di];
  %generate a fifth order bezier curve

    p= (1-(t)/Ti)^5*p0 + 5*(1-(t)/Ti)^4*((t)/Ti)*p1 + 10*(1-(t)/Ti)^3*((t)/Ti)^2*p2 +...
     10*(1-(t)/Ti)^2*((t)/Ti)^3*p3 +5*(1-(t)/Ti)*((t)/Ti)^4*p4 + ((t)/Ti)^5*p5;

end

function [p] = Bezierfrenet_5_2(D0, Ti, Di,t)
%% this function provides the bezier curve information. 
% when given control points information, it can generate y values based on
% given x values.
    p0 = [ 0, D0];
    p1 = [0.25 * Ti, 1/5 * Di + 4/5 * D0];
    p2= [0.5 *Ti, 1/3 * Di + 2/3 * D0];
    p3 =[ 0.5 * Ti, 1/3 * D0 + 2/3 * Di];
    p4 =[ 0.75 * Ti, 1/5 * D0 + 4/5 * Di];
    p5 = [Ti, Di];
  %generate a fifth order bezier curve

    p= (1-(t)/Ti)^5*p0 + 5*(1-(t)/Ti)^4*((t)/Ti)*p1 + 10*(1-(t)/Ti)^3*((t)/Ti)^2*p2 +...
     10*(1-(t)/Ti)^2*((t)/Ti)^3*p3 +5*(1-(t)/Ti)*((t)/Ti)^4*p4 + ((t)/Ti)^5*p5;

end