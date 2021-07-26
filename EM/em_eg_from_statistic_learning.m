% clc
% clear all
% close all
% n = 2;
% for n  = 0:1
% t = 0: 0.01:1
% y = cos(n * acos(t));
% plot(t,y,'-b*')
% title("% n poly")
% hold on
% 
% % y2 = 2.*t.*cos(2 * acos(t))-cos(1. * acos(t));
% % plot(t,y2,"-o")
% end

clc
clear all
close all

Y = [-0.39 0.12 0.94 1.67 1.76 2.44 3.72...
    4.28 4.92 5.53 0.06 0.48 1.01 1.68 1.80 3.25 4.12 4.60 5.28 6.22];
X = linspace(min(Y),max(Y),14);
yy=hist(Y,X);%
%hist(y,20); %
yy=yy/length(X);%£¬
figure
xlim([0 6])
bar(X,yy);%
hold on


N = length(Y);
ybar =mean(Y); 
b = randperm(20,1);
mu1 = Y(b);

b2 = randperm(20,1);
if b2 == b
    b2 = randperm(20,1);
end
mu2 = Y(b2);
var1=sum(((Y-ybar).^2)/N);
var2=sum(((Y-ybar).^2)/N);
PI = 0.5;
init_guess=[PI,mu1,mu2,var1,var2];
runEM = makeEM(Y,N,init_guess,50)



function parameter = makeEM(Y,N,parameter,iter)
  for j = 1:iter
    for i = 1: N
        model2=parameter(1) * gaussian(Y(i),parameter(3),parameter(5));
        model1=(1-parameter(1))*gaussian(Y(i),parameter(2),parameter(4));
        responsibility(i)=model2/(model1+model2);
    end
    R=responsibility;
    mu1=sum((1-R).* Y)/sum(1-R);
    mu2=sum(R.*Y)/sum(R);
    var1=sum((1-R).*(Y-mu1).^2)/sum(1-R);
    var2=sum(R.*(Y-mu2).^2)/sum(R);
    PI=sum(R)/N;
    parameter=[PI,mu1,mu2,var1,var2];
    runEM =parameter;

    drawnow 
    pause(0.1)
    plotGaussian(runEM(2),runEM(4));
    xlim([-4 10])
    hold on
    plotGaussian(runEM(3),runEM(5));
    xlim([-4 10])
    
  end
end


  function prob = gaussian(y,mu,sigma)
    prob = 1/sqrt(2*pi*sigma)*exp(-((y-mu)^2/(2*sigma)));
  end
  
  function plotGaussian(mu,sigma)
  prob = [];
  x = [];
      for i = (mu -3*sigma):0.1:(mu + 3*sigma)
            
          prob=[prob, 1/sqrt(2*pi*sigma)*exp(-((i-mu)^2/(2*sigma)))];
          x = [x,i];
      end
      plot(x,prob);
  end




