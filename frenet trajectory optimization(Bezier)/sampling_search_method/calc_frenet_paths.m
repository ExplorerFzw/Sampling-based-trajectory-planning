function [frenet_paths] = calc_frenet_paths(c_d, c_d_d, c_d_dd)
% ��һ��ָ���������ʹ�ø�����Ԥ����룬��Ϊ������Ԥ������Զ�����ϰ���������У�ͬʱ�ȶ���Ҳ����;
% �ڶ���ָ�������ڹ滮�����Ĺ켣�����ӽ��ڲο���;
% �������comment����һ����һ��ָ����Jerk,Ҳ���ǼӼ��ٶȣ����ڱ���������ȼ�;����Ժͼ�ʻ���ʶȣ�
% ��������߽Ƕȱ�ʾ���Ƕ����������׵����������׵����������ԡ�
% ���ó�������������׵������ʽ�󣬶Ա��ʽ��ɢ��ȡֵ��Ȼ����ֻ����һ���cost function.
global MAX_ROAD_WIDTH D_ROAD_W  MINT  DT MAXT KJ KD KT KLAT KLON

frenet_paths = [];
tfp = [];
T = [];
D = [];
j = 1;
for di = -MAX_ROAD_WIDTH: D_ROAD_W: MAX_ROAD_WIDTH % ����������ÿһ��Ŀ���������ɹ켣
    for Ti =  MINT: DT: MAXT % �������滮
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