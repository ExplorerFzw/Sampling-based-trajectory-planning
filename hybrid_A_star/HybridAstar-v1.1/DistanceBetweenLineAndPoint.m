function Dis = DistanceBetweenLineAndPoint(A, B, C, X, Y)
%DistanceBetweenLineAndPoint 计算点和直线距离
%输入参数:
% 直线参数 A * x + B * y + C = 0
% 点坐标(X, Y)
%输出参数:
% Dis  点到直线距离
    Dis = abs(A * X + B * Y + C) / (sqrt(B * B + A* A));
end

