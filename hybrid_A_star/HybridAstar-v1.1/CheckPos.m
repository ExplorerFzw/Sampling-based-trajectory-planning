function NextMotionDMPs = CheckPos(Current, DMPS_Cells)
%CheckPos ���ݵ�ǰ�ڵ㷽��ȷ���˶���Ԫ�����겢����
% ������� Current��
%   [��չ���˶���ʽID ��ǰ�ڵ�x\y\yaw g���� h���� f���� ��������_�� ��������_�� ���ڵ�x\y\yaw]
% ������� DMPS_Cells��
% �������ɵĸ������˶���Ԫ

NextMotionDMPs = DMPS_Cells{1,(round(Current(1,4) / 15) + 1)}{1,2};

end

