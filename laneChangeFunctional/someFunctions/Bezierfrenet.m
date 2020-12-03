 function [p] = Bezierfrenet(D0, Ti, Di,t)
 % D0 ��ʼ�������
 % Ti �滮ʱ��
 % Di �����ĺ������
 % t ������ɢ���
 
%���ÿ��Ƶ㣬���������Ҫ�ĸ����Ƶ�
 p0 = [0, D0];
 p1 = [Ti/2, D0];
 p2 = [Ti/2, Di];
 p3 = [Ti, Di];

 p = (1-(t)/Ti)^3*p0 + 3*(1-(t)/Ti)^2*(t)/Ti*p1 + ...
     3*(1-(t)/Ti)*((t)/Ti)^2*p2 + ((t)/Ti)^3*p3;
 end
 