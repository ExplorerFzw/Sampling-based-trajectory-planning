function path = HybridAStar(map,start,goal)
% 1��  �������� open list ��
% 2��  �ظ����¹��̣�
%     a.     ���� open list ������ F ֵ��С�Ľڵ㣬������Ϊ��ǰҪ����Ľڵ㡣
%     b.     ������ڵ��Ƶ� close list���Ѿ�������Ľڵ��б� ��
%     c.     �Ե�ǰ�ڵ�������ڽ��ڵ�
%         ��     ������ǲ��ɵִ�Ļ������� close list �У������������������²�����
%         ��     ��������� open list �У��������� open list �����Ұѵ�ǰ��������Ϊ���ĸ��ף�
%               ��¼�÷���� F �� G ֵ��
%         ��     ������Ѿ��� open list �У��������·�� ( �����ɵ�ǰ�ڵ㵽�������� ) �Ƿ���ã�
%               �� G ֵ���ο�����С�� G ֵ��ʾ���Ǹ��õ�·��������������������ĸ�������Ϊ
%               ��ǰ���񣬲����¼������� G �� F ֵ�������� open list �ǰ� F ֵ����Ļ���
%               �ı���������Ҫ��������
%     d.     ֹͣ������
%         ��     ���յ���뵽�� open list �У���ʱ·���Ѿ��ҵ��ˣ�����
%         ��     �����յ�ʧ�ܣ����� open list �ǿյģ���ʱû��·����
% 3��  ����·�������յ㿪ʼ��ÿ���������Ÿ��ڵ��ƶ�ֱ����㣬��������·����

global resolution

%�����˶���Ԫ
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
%open list [��չ���˶���ʽID ��ǰ�ڵ�x\y\yaw g���� h���� f���� ��������_�� ��������_�� ���ڵ�x\y\yaw]
open = [0, start.x, start.y, start.yaw, g, h, f, round(start.y/resolution) round(start.x/resolution), start.x, start.y, start.yaw];
close = [];
next = [];
findFlag = false;%�Ƿ񵽴��յ�Ŀ���־
howmanysteps = 0;
while ~findFlag
      if isempty(open(:,1)) %���Ƶ�������
          disp('Fuck!!�޷������յ�');
          fprintf('һ����Ѱ�� %d ��\n', howmanysteps);
          return;
      end
      [~,I] = sort(open(:,7));%�� f ������С��������
      open = open(I,:);%������open list�� ��һ������С���۵�
      
      if sqrt((goal.x - open(1,2))^2 + (goal.y - open(1,3))^2) < 8 %�����ӽ��յ㸽����������Dubins��������
          count = count + 1;
          dubins_path = dubins_curve([open(1,2) open(1,3) open(1,4)*pi/180], [goal.x goal.y goal.yaw*pi/180], 4.5, 0.3, 1); 
          fprintf('�� %d �γ�����Dubins��������\n',count);
          if length(dubins_path(:,1)) > 1
              %����ҵ���Dubins���ߣ����һ�������ײ
              Collision = false;
              for m = 1:1:length(dubins_path(:,1))
                  dubins_path(m,3) = dubins_path(m,3) * 180 /pi;
                  if true == CheckCollision(dubins_path(m,:),map)
                      Collision = true;
                      break;%ֻҪ��鵽��ײ�ĵ���˳�������û�м��ı�Ҫ
                  end
              end
              if Collision == false
                  disp('Yes!!˳���ҵ�·����');
                  findFlag = true;
                  dubins_path = [dubins_path;[goal.x goal.y goal.yaw]];
                  close = [open(1,:);close];  
                  open(1,:) = [];%������open list�޳�
                  plot(dubins_path(:,1)/resolution, dubins_path(:,2)/resolution,'-m','LineWidth',2); hold on
                  break;
              end
          end
      end
      
%       if sqrt((goal.x - open(1,2))^2 + (goal.y - open(1,3))^2) < 0.2 %�����ӽ��յ㸽��������Ϊ�����յ㸽��
%           disp('....���Σ���');
%           findFlag = true;
%           close = [open(1,:);close];  
%           open(1,:) = [];%������open list�޳�
%           break;
%       end
      
      close = [close; open(1,:)];%�ѵ�ǰ�ڵ��Ƶ� close list
      current = open(1,:);
      open(1,:) = [];%�ѵ�ǰ�ڵ�� open list�Ƴ�
      howmanysteps = howmanysteps + 1;
      
      NextMotionDMPs = CheckPos(current, DMPs_Cells);
      for i = 1:10
          next(1,1) = i;%��չ�ڵ���˶���ԪID
          next(1,2) = current(1,2) + NextMotionDMPs{1,i}{1,3}(10,1);%��չ�ڵ��X
          next(1,3) = current(1,3) + NextMotionDMPs{1,i}{1,3}(10,2);%��չ�ڵ��Y
          if (i >= 8) && (i <= 10) %�̻�Ԫ
              next(1,4) = current(1,4) + (i - 9) * 15;%��չ�ڵ�ķ���
          elseif (i >= 11)%���˻�Ԫ
              next(1,4) = current(1,4) - (i - 12) * 30;%��չ�ڵ�ķ���
          else%����Ԫ
              next(1,4) = current(1,4) + (i - 4) * 15; %��չ�ڵ�ķ���
          end
          next(1,4) = unifytheta(next(1,4));
          next(1,5) = current(1,5) + NextMotionDMPs{1,i}{1,1} * NextMotionDMPs{1,i}{1,2};% g
          next(1,6) = ManhattanCost(next(1,2:3),[goal.x goal.y]);% h
          next(1,7) = next(1,5) + next(1,6);%���� f = g + h
          next(1,8) = round(next(1,3) / resolution);%��������_�� Y
          next(1,9) = round(next(1,2) / resolution);%��������_�� X
          next(1,10) = current(1,2);%���ڵ�x
          next(1,11) = current(1,3);%���ڵ�y
          next(1,12) = current(1,4);%���ڵ�yaw
          
          if true == IsOutofMapRange(map,next(1,2:3))
              continue;
          end
          
          %�˶���Ԫ����ɢ������
          discret_path = zeros(10,3);
          Collision = false;
          for j = 10:-1:1
              discret_path(j,1) = current(1,2) + NextMotionDMPs{1,i}{1,3}(j,1);%��չ�ڵ��X
              discret_path(j,2) = current(1,3) + NextMotionDMPs{1,i}{1,3}(j,2);%��չ�ڵ��Y
              discret_path(j,3) = current(1,4) + (j-1) * (next(1,4) - next(1,12)) / 9;%��չ�ڵ��Yaw
              if true == CheckCollision(discret_path(j,:),map)
                  Collision = true;
                  break;%ֻҪ��鵽��ײ�ĵ���˳�������û�м��ı�Ҫ
              end
          end
          
          if Collision == true
              continue;
          else%����������
              if (i >= 8) && (i <= 10) %�̻�Ԫ
                  plot(discret_path(:,1)/resolution,discret_path(:,2)/resolution,'-g'); hold on;
%                   pause(0.1);
              elseif (i >= 11)%���˻�Ԫ
                  plot(discret_path(:,1)/resolution,discret_path(:,2)/resolution,'-c'); hold on;
%                   pause(0.1);
              else%����Ԫ
                  plot(discret_path(:,1)/resolution,discret_path(:,2)/resolution,'-b'); hold on;
%                   pause(0.1);
              end
          end

          %�鿴��չ�ڵ��Ƿ�����������Ѿ���open list
          [flag, targetInd] = FindList(next,open,close);
       
          if flag == 1 %�����һ���Ѿ��� open list
              if open(targetInd,5) > next(1,5) %������ɵ�ǰ�ڵ㵽��next���ã�ͨ�� g ֵ�жϣ�
                  %��targetInd�ڵ�ĸ��׸���Ϊ��ǰ���񣬲����¼������� G �� F ֵ
                  open(targetInd,:) = next;
              else%���򣬶���ͬһդ�񣬱��������ɵĽڵ�����
                  open(targetInd,2) = next(1,2);
                  open(targetInd,3) = next(1,3);
                  continue;
              end
          elseif flag == 2 %�����һ���Ѿ��� close list�������κβ��� 
              continue;
          else %û���߹�������뵽 open list
              open = [open; next];
          end
      end
end

fprintf('һ����Ѱ�� %d ��\n', howmanysteps);

path = GetPath(close,start,goal,DMPs_Cells);%��ȡ hybrid A*������·������
% path = [path;dubins_path];

end

            



