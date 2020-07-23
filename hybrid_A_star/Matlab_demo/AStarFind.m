
function [pathPoints,Grids,Close] = AStarFind()
%   feasible solution available
%     obstlist = [0,0;1.5 2;2 1.5;2 3;2 2;3,2]; 
    %   feasible solution not available
    obstlist = [0,0;2 3;2 2;3,2];
    gres = 0.2;
    [minx,miny,obmap] = CalcObstMap(obstlist,gres);
    goal = [2.5,2.5];
    start_i = [3,3];
    col = goal(1);
    row = goal(2);
    col = ceil((col-minx)/gres);
    row = ceil((row-miny)/gres);
    goal_i = [row,col];
    start = (start_i - 0.5)*gres+[minx,miny];
    [Grids, cost,Close] = AStarSearch(start_i,goal_i,obmap);
    pathIndex = goal_i;
    pathPoints = [];
    while any(pathIndex~=start_i)
        pathIndex_n_1 = pathIndex;
        pathPoints(end+1,:) = (pathIndex-0.5)*gres+[minx,miny]; %#ok<AGROW>
        xi = Grids(pathIndex(1),pathIndex(2),1);
        yi = Grids(pathIndex(1),pathIndex(2),2);
        pathIndex = [xi, yi];        
        if (min(pathIndex_n_1 == pathIndex))
            disp('no feasible route available for this map!');
            break
        end
    end
    pathPoints(end+1,:) = (pathIndex-0.5)*gres+[minx,miny];    % #ok<AGROW>
    draw(minx,miny,gres,obmap,start,goal,obstlist,pathPoints);
    disp(['cost is ',num2str(cost)]);
end
function draw(minx,miny,gres,obmap,start,goal,obstlist,pathPoints)
close all
figure
xlim([0 3]);
ylim([0 3]);
    hold on;
    for i = 1:size(obmap,1)
        for j = 1:size(obmap,2)
            if obmap(i,j) == 1
                rectangle('Position',[[minx,miny]+([i,j]-1)*gres,gres,gres],'FaceColor',[0 .1 .1])
            else
                rectangle('Position',[[minx,miny]+([i,j]-1)*gres,gres,gres],'FaceColor',[1  1  1])
            end
        end
    end
    plot(goal(2),goal(1),'ro');
    plot(start(1),start(2),'*');
    for i = 1:size(obstlist,1)
        plot(obstlist(i,2),obstlist(i,1),'bo');
    end
    plot(pathPoints(:,1),pathPoints(:,2));
end
function [minx,miny,obmap] = CalcObstMap(obstlist,gres)
    minx = min(obstlist(:,1));
    maxx = max(obstlist(:,1));
    miny = min(obstlist(:,2));
    maxy = max(obstlist(:,2));
    xwidth = maxx - minx;
    xwidth = ceil(xwidth/gres);
    ywidth = maxy - miny;
    ywidth = ceil(ywidth/gres);
    obmap = zeros(ywidth,xwidth);
    for i = 1:ywidth
        for j = 1:xwidth
            ix = minx+(j-1/2)*gres;
            iy = miny+(i-1/2)*gres;
            [~,D] = knnsearch(obstlist,[ix,iy]);
            if D < 0.5
                obmap(i,j) = 1;
            end
        end
    end
end
function [Grids, cost,Close] = AStarSearch(start,goal,obmap)
    dim = size(obmap);
    % Grids(i,j,1) - x of parent pos; 2 - y of parent pos; 3 - hcost; 4 -
    % gcost
    Grids = zeros(dim(1),dim(2),4);
    for i = 1:dim(1)
        for j = 1:dim(2)
            Grids(i,j,1) = i;
            Grids(i,j,2) = j;
            Grids(i,j,3) = norm(([i,j]-goal));
            Grids(i,j,4) = inf;
        end
    end
    Open = start;
    Grids(start(1),start(2),4) = 0;
    Close = [];
    while ~isempty(Open)
        % get the optimal node wknode from 8 neibour open nodes
        [wknode,Open] = PopOpen(Open,Grids);
        % update: 
        % 1.coordinates for 8 neibour open nodes 
        % 2.gcost for 8 neibour open nodes 
        % 3.parent node for 8 neibour open nodes 
        % 4.close node
        [Grids,Open,Close] = Update(wknode,goal,obmap,Grids,Open,Close);
        Close(end+1,:) = wknode; %#ok<AGROW>
    end
    cost = Grids(goal(1),goal(2),3)+Grids(goal(1),goal(2),4);
    % Grids(goal(1),goal(2),3) always 0, can be deleted
end
function [Grids,Open,Close] = Update(wknode,goal,obmap,Grids,Open,Close)
    dim = size(obmap);
    for i = -1:1
        for j = -1:1
            adjnode = wknode+[i,j];
            row = adjnode(1);
            col = adjnode(2);
            % if the parent node, don't compute gcost
            if i == 0 && j == 0
                continue
            % if out of map scope, don't compute cost
            elseif row < 1 || row > dim(1)
                continue
            elseif col < 1 || col > dim(2)
                continue
            % if blocked by obstacles, don't compute cost    
            elseif obmap(row,col) == 1
                continue
            end
            tcost = Grids(wknode(1),wknode(2),4)+norm([i,j]);
            if Grids(row,col,4) > tcost
                % update parent node for 8 neibour open nodes 
                Grids(row,col,1) = wknode(1);
                Grids(row,col,2) = wknode(2);
                % update gcost for 8 neibour open nodes 
                Grids(row,col,4) = tcost;
                % add adjnode to Open except wknode is goal
                if ~ismember(adjnode,Open,'rows') && ~isequal(adjnode,goal)
                    Open(end+1,:) = adjnode; %#ok<AGROW>
                end
                % if adjnode is in Close remove it (remove detour)
                if isempty(Close)
                    % do nothing
                elseif ismember(adjnode,Close,'rows')
                    [~,rIdx] = ismember(adjnode,Close,'rows');
                    Close(rIdx,:) = [];
                end
            end
        end
    end
end
function [wknode,Open] = PopOpen(Open,Grids)
    mincost = inf;
    minidx = 1;
    for i = 1:size(Open,1)
        node = Open(i,:);
        tcost = Grids(node(1),node(2),3)+Grids(node(1),node(2),4);
        if tcost < mincost
            minidx = i;
            mincost = tcost;
        end
    end
    wknode = Open(minidx,:);
    Open(minidx,:) = [];
end