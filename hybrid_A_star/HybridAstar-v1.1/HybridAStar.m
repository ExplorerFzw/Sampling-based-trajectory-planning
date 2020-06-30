function path = HybridAStar(map,start,goal)
% 1）  把起点加入 open list 。
% 2）  重复如下过程：
%     a.     遍历 open list ，查找 F 值最小的节点，把它作为当前要处理的节点。
%     b.     把这个节点移到 close list（已经考察过的节点列表） 。
%     c.     对当前节点的所有邻近节点
%         ◆     如果它是不可抵达的或者它在 close list 中，忽略它。否则，做如下操作。
%         ◆     如果它不在 open list 中，把它加入 open list ，并且把当前方格设置为它的父亲，
%               记录该方格的 F ， G 值。
%         ◆     如果它已经在 open list 中，检查这条路径 ( 即经由当前节点到达它那里 ) 是否更好，
%               用 G 值作参考。更小的 G 值表示这是更好的路径。如果是这样，把它的父亲设置为
%               当前方格，并重新计算它的 G 和 F 值。如果你的 open list 是按 F 值排序的话，
%               改变后你可能需要重新排序。
%     d.     停止，当你
%         ◆     把终点加入到了 open list 中，此时路径已经找到了，或者
%         ◆     查找终点失败，并且 open list 是空的，此时没有路径。
% 3）  保存路径。从终点开始，每个方格沿着父节点移动直至起点，这就是你的路径。

global resolution

%载入运动基元
% load DMPs_Fix_Back;
load DMPs_Fix_Back_DifCost.mat;

% long_cost = 1;
% short_cost = 10;
% back_cost = 100;
count = 0;

path = [];
g = 0;
h = ManhattanCost([start.x start.y],[goal.x goal.y]);
f = g + h;
%open list [扩展的运动方式ID 当前节点x\y\yaw g代价 h代价 f代价 归属网格_行 归属网格_列 父节点x\y\yaw]
open = [0, start.x, start.y, start.yaw, g, h, f, round(start.y/resolution) round(start.x/resolution), start.x, start.y, start.yaw];
close = [];
next = [];
findFlag = false;%是否到达终点目标标志
howmanysteps = 0;
while ~findFlag
      if isempty(open(:,1)) %限制迭代次数
          disp('Fuck!!无法到达终点');
          fprintf('一共搜寻了 %d 步\n', howmanysteps);
          return;
      end
      [~,I] = sort(open(:,7));%按 f 代价由小到大排序
      open = open(I,:);%排序后的open list， 第一个是最小代价的
      
      if sqrt((goal.x - open(1,2))^2 + (goal.y - open(1,3))^2) < 8 %如果快接近终点附近，则尝试用Dubins曲线连接
          count = count + 1;
          dubins_path = dubins_curve([open(1,2) open(1,3) open(1,4)*pi/180], [goal.x goal.y goal.yaw*pi/180], 4.5, 0.3, 1); 
          fprintf('第 %d 次尝试用Dubins曲线连接\n',count);
          if length(dubins_path(:,1)) > 1
              %如果找到了Dubins曲线，则进一步检查碰撞
              Collision = false;
              for m = 1:1:length(dubins_path(:,1))
                  dubins_path(m,3) = dubins_path(m,3) * 180 /pi;
                  if true == CheckCollision(dubins_path(m,:),map)
                      Collision = true;
                      break;%只要检查到碰撞的点就退出，后面没有检查的必要
                  end
              end
              if Collision == false
                  disp('Yes!!顺利找到路径了');
                  findFlag = true;
                  dubins_path = [dubins_path;[goal.x goal.y goal.yaw]];
                  close = [open(1,:);close];  
                  open(1,:) = [];%把它从open list剔除
                  plot(dubins_path(:,1)/resolution, dubins_path(:,2)/resolution,'-m','LineWidth',2); hold on
                  break;
              end
          end
      end
      
%       if sqrt((goal.x - open(1,2))^2 + (goal.y - open(1,3))^2) < 0.2 %如果快接近终点附近，则认为到达终点附近
%           disp('....无奈！！');
%           findFlag = true;
%           close = [open(1,:);close];  
%           open(1,:) = [];%把它从open list剔除
%           break;
%       end
      
      close = [close; open(1,:)];%把当前节点移到 close list
      current = open(1,:);
      open(1,:) = [];%把当前节点从 open list移除
      howmanysteps = howmanysteps + 1;
      
      NextMotionDMPs = CheckPos(current, DMPs_Cells);
      for i = 1:10
          next(1,1) = i;%扩展节点的运动基元ID
          next(1,2) = current(1,2) + NextMotionDMPs{1,i}{1,3}(10,1);%扩展节点的X
          next(1,3) = current(1,3) + NextMotionDMPs{1,i}{1,3}(10,2);%扩展节点的Y
          if (i >= 8) && (i <= 10) %短基元
              next(1,4) = current(1,4) + (i - 9) * 15;%扩展节点的方向
          elseif (i >= 11)%后退基元
              next(1,4) = current(1,4) - (i - 12) * 30;%扩展节点的方向
          else%长基元
              next(1,4) = current(1,4) + (i - 4) * 15; %扩展节点的方向
          end
          next(1,4) = unifytheta(next(1,4));
          next(1,5) = current(1,5) + NextMotionDMPs{1,i}{1,1} * NextMotionDMPs{1,i}{1,2};% g
          next(1,6) = ManhattanCost(next(1,2:3),[goal.x goal.y]);% h
          next(1,7) = next(1,5) + next(1,6);%计算 f = g + h
          next(1,8) = round(next(1,3) / resolution);%归属网格_行 Y
          next(1,9) = round(next(1,2) / resolution);%归属网格_列 X
          next(1,10) = current(1,2);%父节点x
          next(1,11) = current(1,3);%父节点y
          next(1,12) = current(1,4);%父节点yaw
          
          if true == IsOutofMapRange(map,next(1,2:3))
              continue;
          end
          
          %运动基元的离散点坐标
          discret_path = zeros(10,3);
          Collision = false;
          for j = 10:-1:1
              discret_path(j,1) = current(1,2) + NextMotionDMPs{1,i}{1,3}(j,1);%扩展节点的X
              discret_path(j,2) = current(1,3) + NextMotionDMPs{1,i}{1,3}(j,2);%扩展节点的Y
              discret_path(j,3) = current(1,4) + (j-1) * (next(1,4) - next(1,12)) / 9;%扩展节点的Yaw
              if true == CheckCollision(discret_path(j,:),map)
                  Collision = true;
                  break;%只要检查到碰撞的点就退出，后面没有检查的必要
              end
          end
          
          if Collision == true
              continue;
          else%画搜索过程
              if (i >= 8) && (i <= 10) %短基元
                  plot(discret_path(:,1)/resolution,discret_path(:,2)/resolution,'-g'); hold on;
%                   pause(0.1);
              elseif (i >= 11)%后退基元
                  plot(discret_path(:,1)/resolution,discret_path(:,2)/resolution,'-c'); hold on;
%                   pause(0.1);
              else%长基元
                  plot(discret_path(:,1)/resolution,discret_path(:,2)/resolution,'-b'); hold on;
%                   pause(0.1);
              end
          end

          %查看扩展节点是否遍历过或者已经在open list
          [flag, targetInd] = FindList(next,open,close);
       
          if flag == 1 %如果下一步已经在 open list
              if open(targetInd,5) > next(1,5) %如果经由当前节点到达next更好（通过 g 值判断）
                  %把targetInd节点的父亲更新为当前方格，并重新计算它的 G 和 F 值
                  open(targetInd,:) = next;
              else%否则，对于同一栅格，保留后生成的节点坐标
                  open(targetInd,2) = next(1,2);
                  open(targetInd,3) = next(1,3);
                  continue;
              end
          elseif flag == 2 %如果下一步已经在 close list，不作任何操作 
              continue;
          else %没有走过，则加入到 open list
              open = [open; next];
          end
      end
end

fprintf('一共搜寻了 %d 步\n', howmanysteps);

path = GetPath(close,start,goal,DMPs_Cells);%获取 hybrid A*搜索的路径部分
% path = [path;dubins_path];

end

            



