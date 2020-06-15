function [val,checkline] = collision_checking(frenet_paths,c_d, c_d_d, c_d_dd,...
    ob,cx,cy,YAW,current_ind)
global DT ROBOT_RADIUS
Flag =0;
val = 1;
xs = c_d;
axs = c_d_dd;
axe = 0;
vxs = c_d_d;
vxe = 0;
D0 = c_d;
while Flag == 0
    Ti = frenet_paths(val,2);
    Di = frenet_paths(val,3);
    
    i = 1;
    S = current_ind;
    d = [];
    steer = [];
    location_ind = [];
    s = 0;
    while s <= Ti
        p(i,:)= Bezierfrenet(D0, Ti, Di,s);
%         steer(i) = YAW(S);
        location_ind(i) = S;
        s = s + sqrt((cx(S+1)-cx(S))^2 +  (cy(S+1)-cy(S))^2);
        S = S+1;
        i = i+1;
    end

    checkline = frenet_to_global (cx, cy, YAW, location_ind, p);
    checkline =  checkline(1:2,:)';
    
    n = 1;
    for j = 1:size(ob,1)
        for k = 1: length(checkline)
           dist(n) = sqrt((ob(j,1)-checkline(k,1))^2 + ((ob(j,2)-checkline(k,2))^2));
           n = n+1;
        end
    end
    
    if min(dist) < ROBOT_RADIUS
        val = val + 1;
    else
        Flag = 1;
    end

  if val == length(frenet_paths)
      fprintf('Fuck! I am blocked !\n');
      Flag = 1;
%       val = 1;
  end
end

end