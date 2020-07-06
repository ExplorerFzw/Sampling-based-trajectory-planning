function exp_ang = purepursuit_bydeltax( deltax, Ld, L)
%purepursuit_bydeltax ����Ԥ�����
%   �˴���ʾ��ϸ˵��
if(deltax > Ld) 
    deltax = Ld;
else if (deltax < -Ld) 
        deltax = -Ld;
    end
end
double exp_ang;
exp_ang = atan2(2*L*deltax,(Ld*Ld)); % rad
% exp_ang = exp_ang * 180 / pi; % deg

end

