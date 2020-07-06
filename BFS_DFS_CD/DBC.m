%copy right @ jiangyuncheng
clc
clear all
obs = [4.5, 0.5; 5.5,0.5];
point_ini = [0,0];
i = 1;
alpha = 1;
beta = 10;
point.layer(i).x(1) = point_ini(1);
point.layer(i).y(1) = point_ini(2);
end_length =10;
while i <end_length
    
    x = point.layer(i).x(1) + 1
    y_min = max(0, min(point.layer(i).y -1));
    y_max = min(5, max(point.layer(i).y + 1));
    temp = [];
    for j = 1:length(point.layer(i).x)
        for y = max(y_min, point.layer(i).y(1) - 1) : min(y_max, point.layer(i).y(1) + 1)
            cost = alpha * norm([1, (y - point.layer(i).y(1))]) + beta * abs(y-3);
            temp = [temp; [cost,x,y]];
        end
    end
    temp = sortrows(temp);
    i = i+1;
    for k = 1:size(temp,1)
        point.layer(i).x(k) = temp(k, 2);
        point.layer(i).y(k) = temp(k, 3);
    end
end

for i = 1: end_length
    plot_x(i) = point.layer(i).x(1);
    plot_y(i) = point.layer(i).y(1);
end

figure
plot(plot_x, plot_y,'-o')
grid on
path = [plot_x; plot_y]';
figure
for i = 0.25
    for j = 0.1
    alpha = i;
    beta = j;
    optPath=PathSmoothing(path,alpha, beta);
   
    plot(path(:,1),path(:,2),'*b');hold on;
    plot(optPath(:,1),optPath(:,2),'-or');hold on;
    axis([-1 7 -2 6])
    legend('Before','After');
    title('Path Smoothing');
    grid on;
    hold on;
    end
end
hold off


function optPath=PathSmoothing(path,alpha, beta)
optPath=path;%
torelance=0.00001;
change=torelance;
while abs(change)>=torelance 
    change=0;
    for ip=2:(length(path(:,1))-1) 
        prePath=optPath(ip,:);
        optPath(ip,:)=optPath(ip,:)-alpha*(optPath(ip,:)-path(ip,:));
        optPath(ip,:)=optPath(ip,:)-beta*(2*optPath(ip,:)-optPath(ip-1,:)-optPath(ip+1,:));
        change=change+norm(optPath(ip,:)-prePath);
    end
end
end
