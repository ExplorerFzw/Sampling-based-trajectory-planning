clc
clear all 
close all
% 
a0 = -3; a1 = -0.1; a2 = -0.001; a3 = -0.00007;
b0 = 3; b1 = -0.1; b2 = -0.001; b3 = -0.00006;

figure
for i = 1:10000

    
    a0 = -3; a1 = -0.1; a2 = -0.001; a3 = -0.00007;
    b0 = 3; b1 = -0.1; b2 = -0.001; b3 = -0.00006;
    a1 = rand(1)/10-0.05;
    a2 = rand(1)/1000 -0.0005;
    a3 = rand(1)/100000 -0.000005;
    b1 = a1;
    b2 = a2;
    b3 = a3;
    
for  i=0:1:100
    x(i+1) = i;
    y1(i+1) = a0 + a1 * i + a2 * i^2+ a3 * i^3 + rand(1);
    y2(i+1) = b0 + b1 * i + b2 * i^2+ b3 * i^3 + rand(1);
end


plot(x,y1,'-r',x,y2,'-b');
hold on 

for i=1:size(y1,2)
phi(i,:) = [1, x(i), x(i)^2, x(i)^3];
end

y = zeros(size(y1,2),1);
for i = 1:size(y1,2)
y(i) = 0.5 *(y1(i)+y2(i));
end

c  = inv(phi' * phi) * phi' * y;
for  i=0:1:100
    x(i+1) = i;
    y3(i+1) = c(1) + c(2) * i + c(3) * i^2+ c(4) * i^3;
    
end

plot(x,y3)
hold off
drawnow limitrate
pause(0.4)
end
