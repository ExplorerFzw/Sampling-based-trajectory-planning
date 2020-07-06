function [xc,yc,xd,yd] = TwoCycleInterPointCal(x1,y1,r1,x2,y2,r2)
L = sqrt((x1 - x2)^2 + (y1 - y2)^2);
k1 = (y1 - y2) / ((x1 - x2) + 0.001);
k2 = -1 / k1;
AE = (r2^2 - r1^2 + L^2) / (2* L);
x0 = x2 + (x1 - x2) * AE / L;
y0 = y2 + k1 * (x0 - x2);
R2 = r2^2 - (x0 - x2)^2 - (y0 - y2)^2;
EF = sqrt(R2 / (1 + k2^2));

xc = x0 - EF; yc = y0 + k2 * (xc - x0);
xd = x0 + EF; yd = y0 + k2 * (xd - x0);

end
