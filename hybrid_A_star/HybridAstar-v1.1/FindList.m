function [flag, targetInd] = FindList(next,open,close)
%open 为排序后的列表
% [扩展的运动方式ID 当前节点x\y\yaw g代价 h代价 f代价 归属网格_行 归属网格_列 父节点x\y\yaw]

targetInd = 0;
if ~isempty(open)
    for io = 1:length(open(:,1))
        if isSamePosi(open(io,8:9),next(1,8:9)) && (open(io,4) == next(1,4)) %处于同一栅格且方向相同
            flag = 1;%下一步扩展节点已经在open list
            targetInd = io;
            return;
        end
    end
end

if ~isempty(close)
    for ic = 1:length(close(:,1))
        if isSamePosi(close(ic,8:9),next(1,8:9)) && (close(ic,4) == next(1,4))
            flag = 2;%下一步扩展节点已经在 close list
            targetInd = ic;
            return;
        end
    end
end

flag = 3;%新的没有遍历过的节点

end