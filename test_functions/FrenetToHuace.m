function p = FrenetToHuace (p)
% this function transfer the points from Frenet to Huace Coordinate, which
% means it rotation with respect to z by 90 degree.
theta = pi/2;
R = [cos(theta),-sin(theta); sin(theta), cos(theta)];
p = R * p';
p = p';
end