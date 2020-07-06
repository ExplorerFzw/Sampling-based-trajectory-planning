function path = GetPath(close,start,goal,DMPs_Cells)
% node [��չ���˶���ʽID ��ǰ�ڵ�x\y\yaw g���� h���� f���� ��������_�� ��������_�� ���ڵ�x\y\yaw]
global resolution

ind = 1;
path = [];
while 1
    if isSamePosi(close(ind,2:3),[start.x start.y])   
        break;
    end
    
    for ic = 1:length(close(:,1))
        if isSamePosi(close(ic,2:3),close(ind,10:11)) && (close(ic,4) == close(ind,12))
            NextMotionDMPs = CheckPos(close(ic,:), DMPs_Cells);
            ID = close(ind,1);
            k = GetCurverature(ID);
            discret_path = zeros(9,4);
            for j = 9:-1:1
                discret_path(j,1) = close(ic,2) + NextMotionDMPs{1,ID}{1,3}(j+1,1);%��չ�ڵ��X
                discret_path(j,2) = close(ic,3) + NextMotionDMPs{1,ID}{1,3}(j+1,2);%��չ�ڵ��Y
                discret_path(j,3) = close(ic,4) + j * (close(ind,4) - close(ic,12)) / 9;%��չ�ڵ��Yaw
                discret_path(j,4) = k;
            end
            path = [discret_path; path];
            ind = ic;
            break;
        end
    end
end

end
