function [a] = PIDcontrol(target_v, current_v, Kp)

global MAX_ACCEL
a = Kp * (target_v - current_v);
a = min(max(a, -10), MAX_ACCEL);

end