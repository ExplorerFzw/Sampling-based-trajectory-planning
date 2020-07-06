function result = CheckCollision(rear_center,map)
%CheckCollision 碰撞检查

result = false;

%% CalculateFootPrint 计算车辆简化模型三个圆心的位置
VehLength = 4.986;
VehWidth = max(2.0, 1.861);
RearAxle2VehTail_Dis = 1.1;

R = RearAxle2VehTail_Dis + 0.1;
% footprint = [];

rotation1.x = rear_center(1);
rotation1.y = rear_center(2);
% footprint = [footprint;rotation1.x rotation1.y];
if R > PosObsCost(rotation1,map)
    result = true;
    return;
end

dis = 2 * R + (VehLength - 4 * R) / 2;
rotation2.x = rear_center(1) + dis * cos(rear_center(3)*pi/180);
rotation2.y = rear_center(2) + dis * sin(rear_center(3)*pi/180);
% footprint = [footprint;rotation2.x rotation2.y];
if R > PosObsCost(rotation2,map)
    result = true;
    return;
end

dis = VehLength - 2 * R;
rotation3.x = rear_center(1) + dis * cos(rear_center(3)*pi/180);
rotation3.y = rear_center(2) + dis * sin(rear_center(3)*pi/180);
% footprint = [footprint;rotation3.x rotation3.y];
if R > PosObsCost(rotation3,map)
    result = true;
    return;
end

end

