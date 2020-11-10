clc
clear all 
close all
D0 = 0;
Ti = 20;
Di = 3.5;
p = [];
for i = 0:0.1:Ti
    p = [p;Bezierfrenet_5(D0, Ti, Di,i)];
end

p(:,2) = p(:,2)+ rand(length(p),1)/10;

plot(p(:,1),p(:,2),'--b')
hold on;
path2 = curve_smoother(p);
plot(path2(:,1),path2(:,2),'-r');


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

function path = curve_smoother(path)
    iterations = 0;
    maxIterations = 500;
    correction = [0.01,0.01];
    totalWeight = 1;
    alpha = 0.5;
    while(iterations < maxIterations)
        
        for i = 3: length(path)-2
            correction = [0,0];
            xim2 = path(i-2,:);
            xim1 = path(i-1,:);
            xi = path(i,:);
            xip1 = path(i+1,:);
            xip2 = path(i+2,:);
            correction = correction - ...
                smoothnessTerm(xim2, xim1, xi, xip1, xip2);
            xi(1) = xi(1) + alpha * correction(1)/totalWeight;
            xi(2) = xi(2) + alpha * correction(2)/totalWeight;
            path(i,:) = xi;

        end
        iterations = iterations + 1;

    end
end

function gradient = smoothnessTerm(xim2, xim1, xi, xip1, xip2)
    wSmoothness = 0.5;
    gradient(1) = wSmoothness * (xim2(1) - 4 * xim1(1) ...
        + 6 * xi(1)  - 4 * xip1(1)  + xip2(1) );
    gradient(2) = wSmoothness * (xim2(2)  - 4 * xim1(2)...
        + 6 * xi(2) - 4 * xip1(2) + xip2(2));
    
end