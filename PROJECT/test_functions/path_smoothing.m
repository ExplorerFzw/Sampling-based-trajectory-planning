clear all;
close all;

path=[0 0;
      1 0;
      2 0;
      3 0
      3 1
      3 2
      3 3
      3 4
      4 4
      5 4
      6 4];



figure
for i = 0.1:0.1:0.5
    for j = 0.05:0.05:0.2
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
