clc
clear all 
close all
D0 = 0;
Ti = 60;
Di = 3.5;
p = [];
for i = 0:0.1:Ti
    p = [p;Bezierfrenet_5(D0, Ti, Di,i)]; % generate an initial bezier curve
% p = [p;[i,sin(i)]];
end

p(:,2) = p(:,2) ;%+ rand(length(p),1)/10;

figure
plot(p(:,1),p(:,2),'-b')
hold on;
[path2,aver_kappa] = curve_smoother(p); % smoother the original bezier curve
plot(path2(:,1),path2(:,2),'-r');
figure
plot(1:length(aver_kappa),aver_kappa,'-o')

% plot(path2(50,1),path2(50,2),'-bo',path2(100,1),path2(100,2),'-bo')

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

function [path, aver_kappa] = curve_smoother(path)
    iterations = 0;
    maxIterations = 1000;
    totalWeight = 1;
    alpha = 0.2;
    aver_kappa =[];
    while(iterations < maxIterations)
        mean_kappa = 0;
        for i = 3: length(path)-2
%             if i == 50 || i == 100
%                 continue;
%             end

            correction = [0,0];
            xim2 = path(i-2,:);
            xim1 = path(i-1,:);
            xi   = path(i,:);
            xip1 = path(i+1,:);
            xip2 = path(i+2,:);
            
            correction = correction - smoothnessTerm(xim2, xim1, xi, xip1, xip2);
            [gradient_kappa, kappa] = curvatureTerm(xim1, xi, xip1);
            correction = correction - gradient_kappa;
            if i == 68
            a = curvatureTerm(xim1, xi, xip1)
            b =  smoothnessTerm(xim2, xim1, xi, xip1, xip2)
            end
            xi = xi + alpha .* correction ./ totalWeight;
            path(i,:) = xi;
            mean_kappa = mean_kappa + abs(kappa);

        end
        iterations = iterations + 1;
        aver_kappa =[aver_kappa, mean_kappa/(length(path) - 4)];
    end

end

function gradient = smoothnessTerm(xim2, xim1, xi, xip1, xip2)
    wSmoothness = 0.8;
    gradient =  wSmoothness .* (xim2 - 4 .* xim1 ...
        + 6 .* xi  - 4 .* xip1 + xip2);
end

function [gradient, kappa] = curvatureTerm(xim1, xi, xip1)
    wCurvature = 0.2;
    kappaMax = 1.0/ 5;
    Dxi = xi - xim1; % 1 by 2
    Dxip1 = xip1 - xi; % 1 by 2
    absDxi = norm(Dxi); % 1
    absDxip1 = norm(Dxip1); % 1 
    gradient = [0,0]; % 1 by 2
    if (absDxi > 0) && (absDxip1 > 0)
        Dphi = acos(clamp((Dxi * Dxip1' / (absDxi * absDxip1)),-1,1)); % 1 
        kappa = Dphi / absDxi; % 1
        if abs(kappa) <= 0.002%kappaMax
            gradient = [0,0]; % 1 by 2
        else
            absDxi1Inv = 1 / absDxi; % 1 
            PDphi_PcosDphi = -1 / sqrt(1 - (cos(Dphi))^2); % 1
            u = -absDxi1Inv * PDphi_PcosDphi; % 1 
            p1 = ort(xi,-xip1) ./ (absDxi * absDxip1); % 1 by 2
            p2 = ort(-xip1, xi) ./ (absDxi * absDxip1); % 1 by 2
            s = Dphi / (absDxi^2); % 1 
            
%             ki = u .* (-p1 - p2) - s * ones(1,2);
%             kim1 = u .* p2 - (s * ones(1,2));
%             kip1 = u .* p1;
            ki = -u .* (-p1 - p2) - s * ones(1,2);
            ki = ki ./ (2*norm(ki)) ;
            
            kim1 = -u .* p2 + (s * ones(1,2));
            kim1 = kim1 ./ (2*norm(kim1));
            
            kip1 = -u .* p1;
            kip1 = kip1 ./ (2*norm(kip1));
            
            gradient = wCurvature * (0.25 .* kim1 + 0.5 .* ki + 0.25 .* kip1);
        end
    end
end

function y =clamp(n, lower, upper)
    y = max(lower, min(n,upper));
end

function y = ort(a,b) 
% calculate the orthogonization of vector a and b
% input a and b is vector in size of 1 * 2, and output a vector of size 1
% *2
    y = a - a * b' .* b ./ (norm(b)^2);
    
end



    