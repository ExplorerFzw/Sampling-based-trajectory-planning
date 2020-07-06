clc
clear all

load('D:\ccs\DaischTest\conch1.mat')

 spacelimit = 1;    
 start =2;
 finish =2;
x= PosLat(start : spacelimit:length(PosLat)-finish);
y = PosLon(start: spacelimit:length(PosLat)-finish);
ha = AngleHeading(start: spacelimit:length(PosLat)-finish);
time = Time(start: spacelimit:length(PosLat)-finish);
% velocity = 3.6 * VelForward(start: spacelimit:length(PosLat)-finish)
n = x(1);
m = y(1);

% sw = SAS_SteerWheelAngle(start: spacelimit:length(PosLat)-finish);
x = roundn(x, -8);
y =  roundn(y,-8);
B0 = x(1);
L0 = y(1);
HA= roundn(ha, -2);
% SW = vpa(sw,3);
% plot(x,y, 'LineWidth',10)


%%

for  i = 1: length(x)
     [X(i),Y(i)]=transformation1(x(i),y(i),B0,L0);
     i
end

% X = X';
% Y = Y';

%%
figure 
for i = 1: 1:length(X)
% plot(X(3:i),Y(3:i),'-o')
% i
plot(X(i), Y(i), '-b*','Markersize',1)
hold on

%  drawnow
end
% figure
% plot(velocity)

%%
  for i = 1:length(X)-1
 pd(i) = (Y(i+1)-Y(i))/(X(i+1)-X(i));
  end
  pd(length(X)) = pd(length(X)-1) ;
 
 for i =2: length(X)-1
     pdd(i) = (Y(i+1)-2*Y(i) + Y(i-1))/(0.5*(-X(i-1)+X(i+1)))^2;
 end
      pdd(1) = pdd(2);
     pdd(length(X)) = pdd(length(X)-1) ;
 %%
 figure
 plot(1:length(X),pd);
 
  figure
 plot(1:length(X),abs(pd));
 
figure
 plot(1:length(X), pdd);
 
 for i  = 1:length(X)
     k(i) = (pdd(i))/(1+pd(i)^2)^(1.5);
 end
 figure
 plot(1:length(X),k,'-o')

%% check whether the heading measured has delay with the heading calculated?
for  i = 1: length(x)
    
     [X(i),Y(i)]=transformation1(x(i),y(i),B0,L0);
end

X = X';
Y = Y';

for j = 1: length(x)-1
    if ha(j)<=180
    headingcal(j) = 90-atan((Y(j+1)-Y(j))/(X(j+1)-X(j)))*180/pi;
    else
      headingcal(j) = 270-atan((Y(j+1)-Y(j))/(X(j+1)-X(j)))*180/pi;   
    end
end

headingcal(length(x))= headingcal(length(x)-1);
headingcal = headingcal';

figure
plot(time, headingcal,'r*')
hold on 
plot(time, ha,'bo')
hold off
%%
for i = 1:length(X)
    if i<423
        v(i) = 18;
    elseif i>1101
        v(i) = 18;
    else
        v(i) = 30;
    end
end

for j = 1:50
    for i = 1:length(v)-5
    v(i) = 0.2 * sum(v(i:i+4));
    end
end
plot(v)

