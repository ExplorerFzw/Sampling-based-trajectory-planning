function k = GetCurverature(id)
%GetCurverature 获得运动基元曲线斜率
%   用于离散点斜率值，方便后面的控制
if (id == 1) || (id == 7)
    k = 1 / 6.3662;
elseif (id == 2) || (id == 6)
    k = 1 / 9.5493;
elseif (id == 3) || (id == 5)
    k = 1 / 19.0986;
elseif (id == 4) || (id == 9) || (id == 12)
    k = 0.0;
elseif (id == 8) || (id == 10) || (id == 11) || (id == 13)
    k = 1 / 6.0;
else
    fprint("获取曲率出差！");
end

end

