function [X_A,Y_A,X_B,Y_B] = PointTanCycleCal(X,Y,X_O,Y_O,R)

OP = Point2Point_DisCal(X,Y,X_O,Y_O);
theta = acos(R/OP);
Yaw_OP = asin((Y - Y_O)/OP);
Yaw_OA = Yaw_OP + theta;
Yaw_OB = Yaw_OP - theta;
X_A = X_O + R * cos(Yaw_OA); 
Y_A = Y_O + R * sin(Yaw_OA); 
X_B = X_O + R * cos(Yaw_OB); 
Y_B = Y_O + R * sin(Yaw_OB); 

end
