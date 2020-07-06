function path = A_star_search(map,MAX_X,MAX_Y)
%%
%This part is about map/obstacle/and other settings
    %pre-process the grid map, add offset
    size_map = size(map,1);
    Y_offset = 0;
    X_offset = 0;
    
    %Define the 2D grid map array.
    %Obstacle=-1, Target = 0, Start=1
    MAP=2*(ones(MAX_X,MAX_Y));
    
    %Initialize MAP with location of the target
    xval=floor(map(size_map, 1)) + X_offset;
    yval=floor(map(size_map, 2)) + Y_offset;
    xTarget=xval;
    yTarget=yval;
    MAP(xval,yval)=0;
    
    %Initialize MAP with location of the obstacle
    for i = 2: size_map-1
        xval=floor(map(i, 1)) + X_offset;
        yval=floor(map(i, 2)) + Y_offset;
        MAP(xval,yval)=-1;
    end 
    
    %Initialize MAP with location of the start point
    xval=floor(map(1, 1)) + X_offset;
    yval=floor(map(1, 2)) + Y_offset;
    xStart=xval;
    yStart=yval;
    MAP(xval,yval)=1;

    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    %LISTS USED FOR ALGORITHM
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    %OPEN LIST STRUCTURE
    %--------------------------------------------------------------------------
    %IS ON closed LIST 1/0 |X val |Y val |Parent X val |Parent Y val |h(n) |g(n)|f(n)|
    %--------------------------------------------------------------------------
    OPEN=[];
    %CLOSED LIST STRUCTURE
    %--------------
    %X val | Y val |
    %--------------
    % CLOSED=zeros(MAX_VAL,2);
    CLOSED=[];

    %Put all obstacles on the Closed list
    k=1;%Dummy counter
    for i=1:MAX_X
        for j=1:MAX_Y
            if(MAP(i,j) == -1)
                CLOSED(k,1)=i;
                CLOSED(k,2)=j;
                k=k+1;
            end
        end
    end
    CLOSED_COUNT=size(CLOSED,1);
    %set the starting node as the first node
    xNode=xval;
    yNode=yval;
    OPEN_COUNT=1;
    goal_distance=distance(xNode,yNode,xTarget,yTarget);
    path_cost=0;
    OPEN(OPEN_COUNT,:)=insert_open(xNode,yNode,xNode,yNode,goal_distance,path_cost,goal_distance);
    OPEN(OPEN_COUNT,1)=1;
    CLOSED_COUNT=CLOSED_COUNT+1;
    CLOSED(CLOSED_COUNT,1)=xNode;
    CLOSED(CLOSED_COUNT,2)=yNode;
    NoPath=1;
    
    

%%
%This part is your homework
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% START ALGORITHM
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    while(size(OPEN,1)>0) %you have to dicide the Conditions for while loop exit 
        
     %
     %finish the while loop
     %
     i_min = min_fn(OPEN,OPEN_COUNT,xTarget,yTarget);
     %OPEN(i_min,:)
     OPEN(i_min,1)=0;
     curr_x=OPEN(i_min,2);
     curr_y=OPEN(i_min,3);   
     CLOSED_COUNT=CLOSED_COUNT+1;
     CLOSED(CLOSED_COUNT,1)=xNode;
     CLOSED(CLOSED_COUNT,2)=yNode;

     if(curr_x==xTarget&&curr_y==yTarget)
         %
         break;
     end
     gn=OPEN(i_min,7);
     exp_array=expand_array(curr_x,curr_y,gn,xTarget,yTarget,CLOSED,MAX_X,MAX_Y);
     for ce=1:size(exp_array,1)
         %if ce in open, continue. or add it to open
         in_open=0;
        for c1=1:OPEN_COUNT
            
            if(exp_array(ce,1) == OPEN(c1,2) && exp_array(ce,2) == OPEN(c1,3))
                in_open=1;
                 if exp_array(ce,5) < OPEN(c1,5)
                    OPEN(c1,:) = exp_array(ce,:);
                end
                break;
            end
            
        end%End of for loop to check if a successor is on closed list.
         if (in_open==0)
             OPEN_COUNT=OPEN_COUNT+1;
              OPEN(OPEN_COUNT,:)=insert_open(exp_array(ce,1),exp_array(ce,2),curr_x,curr_y,exp_array(ce,3),exp_array(ce,4),exp_array(ce,5));
                
         end
     end
    end %End of While Loop
    
    %Once algorithm has run The optimal path is generated by starting of at the
    %last node(if it is the target node) and then identifying its parent node
    %until it reaches the start node.This is the optimal path
    
    %
    %How to get the optimal path after A_star search?
    %please finish it
    %
     path = [];
 path_cnt=0;
    retrace_id=i_min;
    while(OPEN(retrace_id,2)~=OPEN(retrace_id,4)||OPEN(retrace_id,3)~=OPEN(retrace_id,5))

        path_cnt=path_cnt+1;
        path(path_cnt,1)=OPEN(retrace_id,2);
        path(path_cnt,2)=OPEN(retrace_id,3);
          %find father id
        for fi=1:size(OPEN,1)
            if(OPEN(fi,2)==OPEN(retrace_id,4)&&OPEN(fi,3)==OPEN(retrace_id,5))
                retrace_id=fi
            end
        end
    end

  
end
