%% SIL validation
% dt = 0.005;
% A = [0 -1;
%      0 0];
% B = [-0.5*dt;1];
% C = [1 0;
%      0 1];
%  D = [0;0];
%  ss = ss(A,B,C,D);
x = 0:1:100;
xt = 100;
yt = 0.002*xt^2 + 3.5;
A = [xt^3 xt^4 xt^5;6*xt 12*xt^2 20*xt^3;3*xt^2 4*xt^3 5*xt^4];
B = [yt - 0.002*xt^2;1/246.5 - 1/250;0.004*xt-xt/250];
a = A\B;
a3 = a(1);
a4 = a(2);
a5 = a(3);
y = 0.002*x.^2 + a3*x.^3 + a4*x.^4 + a5*x.^5;
yd = 2*0.002*x + 3*a3*x.^2 + 4*a4*x.^3 + 5*a5*x.^4;
yd2 = 2*0.002 + 6*a3*x + 12*a4*x.^2 + 20*a5*x.^3;
yd3 = 6*a3 + 24*a4*x + 60*a5*x.^2;
yd4 = 24*a4 + 120*a5*x;
y1 = 0.002*x.^2;
y2 = 0.002*x.^2 + 3.5;
y2d = 2*0.002*x;
y2d2 = 2*0.002;
y2d3 = 0;
figure

plot(x,y)
hold on
plot(x,y1,'--')
plot(x,y2,'--')
figure
plot(x,(yd-y2d)*180/pi)
%% algorithm validation


startTime = 55/0.005;
endTime = 120/0.005;
t = rec1_089.X.Data(startTime+1:endTime);
aApproachRaw = rec1_089.Y(22).Data(startTime+1:endTime);
aTar = rec1_089.Y(3).Data(startTime+1:endTime);



dAimR = rec1_089.Y(42).Data(startTime+1:endTime);

vxAbs = rec1_089.Y(18).Data(startTime+1:endTime);
axAbs = rec1_089.Y(14).Data(startTime+1:endTime);
%dSlowDown = rec1_087.Y(23).Data(startTime+1:endTime);


vRef = rec1_089.Y(666).Data(startTime+1:endTime);
dx = rec1_089.Y(15).Data(startTime+1:endTime);

%%MPC
tMPC = [0:0.005:(endTime*0.005 - startTime*0.005)-0.005];
dxMPC = timeseries(dx,tMPC);
vRefMPC = timeseries(vRef,tMPC);
dAimMPC = timeseries(dAimR,tMPC);
vxAbsMPC = timeseries(vxAbs,tMPC);
axAbsMPC = timeseries(axAbs,tMPC);
dxtemp1 = dx*0.8;
dxtemp2 = dAim;
dImmerse = zeros(1,length(vxAbs));
dxtemp3 = zeros(1,length(vxAbs));
for i=1:length(vxAbs)
    if vxAbs(i) > 20
        dImmerse(i) = 20;
    else if vxAbs(i) < 0
            dImmerse(i) = 0.7*dAim(i);
        else
            dImmerse(i) = interp1([0,20],[0.7*dAim(i),min(0.1*dAim(i),20)],vxAbs(i),'linear');
        end
    end
    dxtemp3(i) = min(min(dxtemp1(i),dxtemp2(i)),dImmerse(i));
end


dSlowDown = dx - dxtemp3;
aApproach = -(vRef.^2)./(2*(dSlowDown+abs((vxAbs.^2)./(2*min(axAbs,-0.1)))));


figure
hold on
plot(t,aApproach,'r')
axis([-inf inf -4.5 1])

aFilt = zeros(length(amix),1);
aFilt(1) = amix(1);
for i=2:length(amix)
    kf = 0.005/0.2;
    if ((tStopObj(i)>=1.3)||(amix(i) > 0))
        aRaw = amix(i);
    else
        aRaw = aApproach(i);
    end
    aFilt(i) = (1-kf)*aFilt(i-1) + kf*aRaw;
end
plot(t,amix,'r')
plot(t,aApproach,'g')
plot(t,aFilt,'b')

axAbs = rec1_084.Y(553).Data(startTime+1:endTime);
t = rec1_084.X.Data(startTime+1:endTime);
aRef = rec1_084.Y(674).Data(startTime+1:endTime);
motionSts = rec1_084.Y(10).Data(startTime+1:endTime);
plot(t,axAbs,'r')
plot(t,motionSts,'m')
%plot(t,aRef,'b')

axAbsFilt1 = zeros(length(axAbs),1);
axAbsFilt1(1) = axAbs(1);
axAbsFilt2 = zeros(length(axAbs),1);
axAbsFilt2(1) = axAbs(1);
%axAbsFilt3 = zeros(length(axAbs),1);
%axAbsFilt3(1) = axAbs(1);
dt = 0.005;
tFilt2 = 0.2;
NegTime = 0;
PosTime = 0;
for i=2:length(axAbs)
    k1 = i-1;
    kf1 = dt/0.2;
    
    %kf3 = dt/0.2;
    axAbsFilt1(i) = (1-kf1)*axAbsFilt1(k1) + kf1*axAbs(i);
    axAbsDelta = axAbsFilt1(i) - axAbsFilt2(k1);
    if axAbsDelta<-0.1
        NegTime = NegTime + dt;
        PosTime = 0;
    else if axAbsDelta>0.1
        PosTime = PosTime + dt;
        NegTime = 0;
        else
            
        end
    end
    if NegTime > 0        
        if NegTime>0.5
            tFilt2 = 0.3;
        else
            tFilt2 = 0.6;
        end
    else if PosTime > 0
            if PosTime > 2
                tFilt2 = 1.2;
            else if PosTime > 1.0
                    tFilt2 = 1.8;
                else
                    tFilt2 = 2.0;
                end
            end
        end
    end
    kf2 = dt/tFilt2;
    if motionSts(i) == 2
        axAbsFilt2(i) = (1-kf2)*axAbsFilt2(k1) + kf2*axAbsFilt1(i);
        %axAbsFilt3(i) = (1-kf3)*axAbsFilt3(k1) + kf3*axAbsFilt2(i);
    else
        kf2 = dt/1.5;
        axAbsFilt2(i) = (1-kf2)*axAbsFilt2(k1) + kf2*max(0,axAbsFilt1(i));
    end




end
plot(t,axAbsFilt1,'b')
plot(t,axAbsFilt2,'g')



vxAbs = ATS_Po_out.vxAbs.Data(5421:length(ATS_Po_out.vxAbs.Data));
axAbsOld = ATS_Po_out.axAbs.Data(5421:length(ATS_Po_out.axAbs.Data));
t = ATS_Po_out.vxAbs.Time(5421:length(ATS_Po_out.vxAbs.Data));
axAbsFilt = zeros(length(vxAbs),1);
axAbsFilt(1) = 0;
vxAbsFilt(1) = vxAbs(1);
dt = 0.005;
tFiltV = 0.25;
tFiltA = 0.5;
for i=2:length(vxAbs)
    kv = dt/tFiltV;
    vxAbsFilt(i) = (1-kv)*vxAbsFilt(i-1) + kv*vxAbs(i);
    axAbsFiltRaw = (vxAbsFilt(i) - vxAbsFilt(i-1))/0.005;
    ka = dt/tFiltA;
    axAbsFilt(i) = (1-ka)*axAbsFilt(i-1) + ka*axAbsFiltRaw;
    axAbsDelta = axAbsFilt(i) - axAbsFiltRaw;
    if (abs(axAbsDelta)> 0.35)
        tFiltV = tFiltV+0.025;
        tFiltA = 1.5;
        tFiltV = min(tFiltV,0.5);
        tFiltA = min(tFiltA,1.5);
    else if(abs(axAbsDelta)< 0.25)
        tFiltV = tFiltV-0.015;
        tFiltA = 0.5;
        tFiltV = max(tFiltV,0.15);
        tFiltA = max(tFiltA,0.5);
        else
            tFiltA = 1;
            tFiltV = 0.3;
        end
    end
plot(i,tFiltA,'.')
end

plot(axAbsFilt,'r')
plot(axAbsOld,'b')
plot(vxAbs)
plot(vxAbsFilt)
%plot(ATS_InternalObj_1.dx)
%plot(VehDyn.signal2)
%plot(VehDyn.signal4)
%plot(ATS_InternalObj_1.dy)
%plot(ATS_InternalObj_1.dyToTraj)
%plot(VehMot.Curvature)
%plot(ATS_InternalObj_1.vy)
%plot(dAim)
plot(ATS_InternalObj_1.probEgoLane)
plot(ATS_InternalObj_1.probCutInRaw)
plot(ATS_InternalObj_1.plausEgoLane)
plot(ATS_InternalObj_1.ValidEgoLane)
%plot(simout3.vAbsObj)


%plot(ACC_aCmd.ACCAxtar)

%plot(VLC_out.CDDAxtar)
%plot(axSensor)
plot(ACC_aCmd.ACCAxtar)
plot(ACC_Info_st.vSet)
plot(ACC_Info_st.MainState)
plot(VehMot.vRef)
%plot(vSpd)
%plot(ACC_aCmd.ACCStandstillReq)
%plot(simout1.aStat)
%plot(simout1.aApproach)
%plot(simout1.aBDC)
plot(simout.BDC_State)
%plot(simout2.dRes)
%plot(vRef)
%plot(VehMot.aRef)






