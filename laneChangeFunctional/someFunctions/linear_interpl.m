clc
clear all 
close all

X = 0:20;
Y = 2 * X.^3 ;
plot(X,Y,'-r^');
hold on

y = [];
for i = 0:0.1:20
    y  = [y;[i,LinearInterpolation(X,Y,i)]];
end

plot(y(:,1),y(:,2),'-ob')


function [y] = LinearInterpolation(X,Y,x)
    
    low = 1;
    high = length(X);
    
    if x == X(low) 
        y = Y(low);
        return;
    end
    
    if x == X(high)
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
