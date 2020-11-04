function [] = reference_generation(trajs_local, p_store)
    % here the trajs_local is a vector<vector<double>>,with its dimension
    %n by 2, the p_store store the information of Bezier curve generaion
    %function creates, which are longitudinal s and lateral offset.
    trajs_new = [[ ],[ ]];
    for i = 1: length(p_store)
        if (i + current_index) > length(waypoint)
            break;
        end
        theta = atan(trajs_local[i,2] / trajs_local[i,1]);
        if (theta>-pi/2 && theta <0)
            x = trajs_local(i,1) - d * sin(theta);
            y = trajs_local(i,2) + d * cos(theta);
            trajs_new = [trajs_new ; [x,y]];
        elseif (theta>0 && theta < pi/2)
            x = trajs_local(i,1) + d * sin(theta);
            y = trajs_local(i,2) + d * cos(theta);
            trajs_new = [trajs_new ; [x,y]];nj     
        else
           fprintf("it seems that the reference line is unacceptable!");
        end
    end
end
    