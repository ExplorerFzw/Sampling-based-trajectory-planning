function p= BezierGeneration (xs,ys,xe,ye,Latoff)   % x_start, and x_end means s and e
% this function as you can see here, we generate a Bezier Curve in Frenet
% Coordinate.
% format short
% this function is a update for BezierAvoid, do not used the previous one;
% as you may guess, the x and y indicate the coordinates, and the e and s
% indicate end and start. the Latoff means lateral offset which you can set
% it means the vehicle lateral offset you allow when changing its lane to
% another lane; try p = BezierGeneration(.....) to test the func.
startp = [xs,ys];
endp = [xe,ye];
 P0 =startp;
 P1 = [startp(1)+ (endp(1) -startp(1))/8, startp(2)];
 P2= [startp(1)+ (endp(1) -startp(1))/8*2, startp(2)];
 P3 = [startp(1)+ (endp(1) -startp(1))/8*2, startp(2)+Latoff];
 P4 = [startp(1)+ (endp(1) -startp(1))/8*3,startp(2)+Latoff];
 P5 = [startp(1)+ (endp(1) -startp(1))/8*4,startp(2)+Latoff];
 P6 = [startp(1)+ (endp(1) -startp(1))/8*5,startp(2)+Latoff];
 P7 = [startp(1)+ (endp(1) -startp(1))/8*6,startp(2)+Latoff];
 P8 = [startp(1)+ (endp(1) -startp(1))/8*6,startp(2)];
 P9 = [startp(1)+ (endp(1) -startp(1))/8*7,startp(2)]; 
 P10 = endp;
  
 i = 1;
half_length = 0.5*(xe + xs);
  for u =startp(1):0.2:startp(1)+(endp(1)-startp(1))/2
 p(i,:)= (1- (u-startp(1))/half_length)^5*P0 + 5*(1- (u-startp(1))/half_length)^4* (u-startp(1))/half_length*P1 +...
     10*(1- (u-startp(1))/half_length)^3*((u-startp(1))/half_length)^2*P2 ...
     +10*(1- (u-startp(1))/half_length)^2*( (u-startp(1))/half_length)^3*P3...
     +5*(1- (u-startp(1))/half_length)*( (u-startp(1))/half_length)^4*P4 + ( (u-startp(1))/half_length)^5*P5;
i = i+ 1;
  end

    for u =(startp(1)+half_length) :0.2:endp(1)
 p(i,:)= (1-(u-startp(1)-half_length) /half_length)^5*P5 + 5*(1- (u-startp(1)-half_length)  /...
     half_length)^4* (u-startp(1)-half_length)  /half_length*P6 +...
     10*(1- (u-startp(1)-half_length)  /half_length)^3* ((u-startp(1)-half_length)  /half_length)^2*P7+...
 10*(1- (u-startp(1)-half_length)  /half_length)^2* ((u-startp(1)-half_length)  /half_length)^3*P8 ...
 +5*(1- (u-startp(1)-half_length)  /half_length)* ((u-startp(1)-half_length)  /...
 half_length)^4*P9 +((u-startp(1)-half_length)  /half_length)^5*P10;
i = i+ 1;
    end
    p = roundn(p,-2);
end