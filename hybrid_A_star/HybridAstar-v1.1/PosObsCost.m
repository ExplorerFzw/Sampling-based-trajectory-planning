function val = PosObsCost(pos,map)
%PosObsCost ����դ����ֵ

global resolution row col

x = round(pos.x / resolution);
y = round(pos.y / resolution);

if (x > col || x <= 0 || y > row || y <= 0)
    val = 255;
else
    val = map(y,x);
end

end

