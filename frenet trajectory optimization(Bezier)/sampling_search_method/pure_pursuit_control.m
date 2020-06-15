function [delta] = pure_pursuit_control(x,y,yaw,v,path_x,path_y,k,Lfc,L,predict)
if predict >length(path_x)
    predict = length(path_x);
end

tx = path_x(predict);
ty = path_y(predict);
denom = tx - x;
if denom <= 0.0001
    denom = 0.0001;
end
alpha = atan((ty - y) / denom) - yaw;
  
 Lf = k * v + Lfc;
 delta = atan(2*L * sin(alpha) / Lf);
end
