function [flag, targetInd] = FindList(next,open,close)
%open Ϊ�������б�
% [��չ���˶���ʽID ��ǰ�ڵ�x\y\yaw g���� h���� f���� ��������_�� ��������_�� ���ڵ�x\y\yaw]

targetInd = 0;
if ~isempty(open)
    for io = 1:length(open(:,1))
        if isSamePosi(open(io,8:9),next(1,8:9)) && (open(io,4) == next(1,4)) %����ͬһդ���ҷ�����ͬ
            flag = 1;%��һ����չ�ڵ��Ѿ���open list
            targetInd = io;
            return;
        end
    end
end

if ~isempty(close)
    for ic = 1:length(close(:,1))
        if isSamePosi(close(ic,8:9),next(1,8:9)) && (close(ic,4) == next(1,4))
            flag = 2;%��һ����չ�ڵ��Ѿ��� close list
            targetInd = ic;
            return;
        end
    end
end

flag = 3;%�µ�û�б������Ľڵ�

end