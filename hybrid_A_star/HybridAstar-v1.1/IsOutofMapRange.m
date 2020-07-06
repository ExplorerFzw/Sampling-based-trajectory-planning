function ret = IsOutofMapRange(map,point)
%IsInMapRange 加查扩展的节点是否在地图边界内
%   
global resolution row col

ret = false;
if (point(1,1)/resolution) < 1 || (point(1,2)/resolution) < 1 || ...
        (point(1,1)/resolution) > col || (point(1,2)/resolution) > row
    ret = true;
end

end

