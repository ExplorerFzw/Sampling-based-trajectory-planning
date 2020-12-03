clc
clear all 
close all

X = 0:10;
Y = 2 * X.^3 + rand(1);
plot(X,Y,'-r^');
hold on

y = [];
for i = 0:0.5:10
    y  = [y;[i,LinearInterpolation(X,Y,i)]];
end

plot(y(:,1),y(:,2),'-ob')


function [y] = LinearInterpolation(X,Y,x)

    start = 1;
    ending = length(X);
    if X(start) == x
        y = Y(start);
        return;
    end
    
    if X(ending) == x
        y = Y(ending);
        return;
    end

    Flag = 0;
    
    while Flag == 0
        mid = round(0.5 * (start + ending));
        if x == mid
            y = Y(mid);
            Flag = 1;
            break;
        elseif x < mid
            ending =  mid;
        else
            start = mid;
        end
        
        if (ending - start) == 1;
            Flag = 1;
        end
    end
    y = Y(start)  + (x - X(start))/(X(ending) - X(start)) * (Y(ending) - Y(start));
    
end
