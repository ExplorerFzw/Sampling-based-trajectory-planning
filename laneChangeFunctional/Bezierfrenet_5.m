function [p] = Bezierfrenet_5(D0, Ti, Di,t)
%% this function provides the bezier curve information. 
% when given control points information, it can generate y values based on
% given x values.
    p0 = [ 0, D0];
    p1 = [0.25 * Ti, D0];
    p2= [0.5 *Ti, D0];
    p3 =[ 0.5 * Ti, Di];
    p4 =[ 0.75 * Ti, Di];
    p5 = [Ti, Di];
  %generate a fifth order bezier curve

    p= (1-(t)/Ti)^5*p0 + 5*(1-(t)/Ti)^4*((t)/Ti)*p1 + 10*(1-(t)/Ti)^3*((t)/Ti)^2*p2 +...
     10*(1-(t)/Ti)^2*((t)/Ti)^3*p3 +5*(1-(t)/Ti)*((t)/Ti)^4*p4 + ((t)/Ti)^5*p5;

end