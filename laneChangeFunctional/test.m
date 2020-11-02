D0 = 0;
Ti = 18;
Di = 3;
P = [];
for t= 0:0.1:Ti
    [p] = Bezierfrenet(D0, Ti, Di,t);
    P = [P;p];
end

size(P)

fprintf("error") 

% plot(P(:,1),P(:,2))