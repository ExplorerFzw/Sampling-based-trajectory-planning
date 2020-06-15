function [waypoint] = frenet_to_global (cx, cy,YAW, location_ind,P) % waypoint generate a 2 by n matrix
waypoint = [];
for i  = 1 : length(location_ind)
    theta = YAW(location_ind(i)) + pi/2; 
    waypoint(1, i) = cx(location_ind(i)) + cos(theta) * P(i,2);
    waypoint(2, i) = cy(location_ind(i)) + sin(theta) * P(i,2);
end
% for i = 1: length(location_ind)-1
%     T = [cx(location_ind(i+1))-cx(location_ind(i)) ; cy(location_ind(i+1))-cy(location_ind(i))];
%     theta = atan(cy(location_ind(i+1))-cy(location_ind(i))/cx(location_ind(i+1))-cx(location_ind(i)));
%     R = [cos(theta),-sin(theta); sin(theta), cos(theta)];
%     trans = [R T; 0 0 1];
%     waypoint(:,i) = trans * [P(i,1); P(i,2);1];
%     
% end
end