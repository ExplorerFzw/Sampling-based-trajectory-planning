function ret = IsOutofMapRange(map,point)
%IsInMapRange �Ӳ���չ�Ľڵ��Ƿ��ڵ�ͼ�߽���
%   
global resolution row col

ret = false;
if (point(1,1)/resolution) < 1 || (point(1,2)/resolution) < 1 || ...
        (point(1,1)/resolution) > col || (point(1,2)/resolution) > row
    ret = true;
end

end

