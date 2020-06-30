function Dis = DistanceBetweenLineAndPoint(A, B, C, X, Y)
%DistanceBetweenLineAndPoint ������ֱ�߾���
%�������:
% ֱ�߲��� A * x + B * y + C = 0
% ������(X, Y)
%�������:
% Dis  �㵽ֱ�߾���
    Dis = abs(A * X + B * Y + C) / (sqrt(B * B + A* A));
end

