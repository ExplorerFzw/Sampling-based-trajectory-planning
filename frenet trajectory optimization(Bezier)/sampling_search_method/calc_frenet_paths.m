function [frenet_paths] = calc_frenet_paths(c_d, c_d_d, c_d_dd)
% 第一个指标更倾向于使用更长的预测距离，因为更长的预测距离对远方的障碍物更加敏感，同时稳定性也更高;
% 第二个指标倾向于规划出来的轨迹尽量接近于参考线;
% 代码块中comment掉的一个另一个指标是Jerk,也就是加加速度，用于表征车辆的燃油经济性和驾驶舒适度，
% 这个从曲线角度表示就是对曲线求三阶导数，看三阶导数的连续性。
% 看得出来，计算出三阶导数表达式后，对表达式离散化取值，然后积分获得这一项的cost function.
global MAX_ROAD_WIDTH D_ROAD_W  MINT  DT MAXT KJ KD KT KLAT KLON

frenet_paths = [];
tfp = [];
T = [];
D = [];
j = 1;
for di = -MAX_ROAD_WIDTH: D_ROAD_W: MAX_ROAD_WIDTH % 采样，并对每一个目标配置生成轨迹
    for Ti =  MINT: DT: MAXT % 横向动作规划
           t = 0: DT: Ti;
           t = t';
%         for i = 1: length(t)
%             p(i,:)= Bezierfrenet(Ti, Di,t(i));
%         end
        
        tfp(j) = KT / Ti + KD * abs(di);
        T(j) = Ti;
        D(j) = di;
        j = j+1; 
    end
end

frenet_paths = [tfp',T',D'];
frenet_paths = sortrows(frenet_paths);

end