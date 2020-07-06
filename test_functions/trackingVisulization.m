 load('D:\ccs\DaischTest/BezierAvoid.mat')
 spacelimit = 1;    
 start =1;
 finish =1;
x= PosLat(start : spacelimit:length(PosLat)-finish);
y = PosLon(start: spacelimit:length(PosLat)-finish);

 for  i = 1: length(x)
     [XT(i),YT(i)]=transformation1(x(i),y(i),B0,L0);
     i
end
 plot(XT,YT,'k*')