function p= BezierAvoid (startp, endp) 
 % this function give you a test to Beizier Curve Generation, but the
 % updated function should be BezierGeneration;
 P0 =startp;
 P1 = [startp(1)+ (endp(1) -startp(1))/8, startp(2)];
 P2= [startp(1)+ (endp(1) -startp(1))/8*2, startp(2)];
 P3 = [startp(1)+ (endp(1) -startp(1))/8*2, startp(2)+4];
 P4 = [startp(1)+ (endp(1) -startp(1))/8*3,startp(2)+4];
 P5 = [startp(1)+ (endp(1) -startp(1))/8*4,startp(2)+4];
 P6 = [startp(1)+ (endp(1) -startp(1))/8*5,startp(2)+4];
 P7 = [startp(1)+ (endp(1) -startp(1))/8*6,startp(2)+4];
 P8 = [startp(1)+ (endp(1) -startp(1))/8*6,startp(2)];
 P9 = [startp(1)+ (endp(1) -startp(1))/8*7,startp(2)]; 
 P10 = endp;
  
 i = 1;

  for u =startp(1):0.1:startp(1)+(endp(1)-startp(1))/2
 p(i,:)= (1- (u-startp(1))/10)^5*P0 + 5*(1- (u-startp(1))/10)^4* (u-startp(1))/10*P1 +...
     10*(1- (u-startp(1))/10)^3*((u-startp(1))/10)^2*P2 ...
     +10*(1- (u-startp(1))/10)^2*( (u-startp(1))/10)^3*P3...
     +5*(1- (u-startp(1))/10)*( (u-startp(1))/10)^4*P4 + ( (u-startp(1))/10)^5*P5;
i = i+ 1;
  end

    for u =(startp(1)+10) :0.1:endp(1)
 p(i,:)= (1-(u-startp(1)-10) /10)^5*P5 + 5*(1- (u-startp(1)-10)  /10)^4* (u-startp(1)-10)  /10*P6 +...
     10*(1- (u-startp(1)-10)  /10)^3* ((u-startp(1)-10)  /10)^2*P7+...
 10*(1- (u-startp(1)-10)  /10)^2* ((u-startp(1)-10)  /10)^3*P8 ...
 +5*(1- (u-startp(1)-10)  /10)* ((u-startp(1)-10)  /10)^4*P9 +((u-startp(1)-10)  /10)^5*P10;
i = i+ 1;
    end
end
