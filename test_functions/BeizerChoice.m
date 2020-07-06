clc
 clear all
 p0 = [ 0, 0];
 
for i = 1:10
    j =10;
    p3(i*j-9, 1 ) = 19+i;
    p3(i*j-8, 1 ) = 19+i;
    p3(i*j-7, 1 ) = 19+i;
    p3(i*j-6, 1 ) = 19+i;
    p3(i*j-5, 1 ) = 19+i;
    p3(i*j-4, 1 ) = 19+i;
    p3(j*i-3, 1 ) = 19+i;
    p3(j*i-2, 1 ) =19+i;
    p3(j*i-1, 1) = 19+i;
    p3(j*i, 1 ) = 19+i;
    
    p3(i*j-9, 2 ) = 2;
    p3(j*i-8, 2 ) = 2.2;
    p3(j*i-7, 2) =2.4;
    p3(j*i-6, 2) = 2.6;
    p3(j*i-5, 2 ) = 2.8;
    p3(i*j-4, 2 ) = 3;
    p3(j*i-3, 2 ) = 3.2;
    p3(j*i-2, 2) =3.4;
    p3(j*i-1, 2) = 3.6;
    p3(j*i, 2 ) = 3.8;
end
 
p1(:,1) = p3(:,1)/2;
p1(:,2) = 0;
p2(:,1) = p1(:,1);
p2(:,2) = p3(:,2);

for i = 1:length(p3)
    P0 = p0;
    P1 = p1(i,:);
    P2 = p2(i,:);
   P3=  p3(i,:);
 for u =0: 0.01:1
 p(i,:)= (1-u)^3*P0 + 3*(1-u)^2*u*P1 + 3*(1-u)*u^2*P2 + u^3*P3;
 i =i+1;
 end
  
 for i = 1: length(p)
 plot (p(i,1),p(i,2),'bo')

 hold on
%  drawnow
 end    
end
%%
clc
clear all
 p0 = [ 0, 0];
    P0 = p0;
    p3 = [27,2.6];
    p1(:,1) = p3(:,1)/2;
p1(1,2) = 0;
p2(1,1) = p1(:,1);
p2(:,2) = p3(:,2);
    P1 = p1;
    P2 = p2;
   P3=  p3;
   i = 1;
 for u =0: 0.01:1
 p(i,:)= (1-u).^3*P0 + 3*(1-u).^2*u*P1 + 3*(1-u)*u^2*P2 + u.^3*P3;
 i =i+1;
 end
 
 for i = 1: length(p)
 plot (p(i,1),p(i,2),'r+','LineWidth',2)

 hold on
%  drawnow
 end    
 xlabel('x/m')
ylabel('y/m')
set(gca,'LineWidth',2,'FontSize',11,'FontWeight','normal','FontName','Times');
grid on;

%  for i = 1:100 
%  pd(i) = (p(i+1,2)-p(i,2))/(p(i+1,1)-p(i,1));
%  pd(101) = 0;
%  end
%  
%  for i =2: 100
%      pdd(1) = 0;
%      pdd(101) = 0;
%      pdd(i) = (p(i+1,2)-2*p(i,2) + p(i-1,2))/(0.5*(-p(i-1,1)+p(i+1,1)))^2;
%  end
 
%  figure
%  plot(1:101,pd);
% figure
%  plot(1:101, pdd);
 
%  for i  = 1:101
%      k(i) = (pdd(i))/(1+pd(i)^2)^(1.5);
%  end
%  figure
%  plot(1:101,k,'-o')
 
%  figure
%  for i = 1: length(p)
%  plot (p(i,1),p(i,2),'-o')
%  hold on
%  drawnow
%  end           
 %%
 clc
 clear all
 
%  p0 = [ 0, 0];
%  p1 = [7.5,7.5*4/30];
%  p2= [15,0];
%  p3 = [15,4];
%  p4 = [22.5,22.5*4/30];
%  p5 = [30,4];
  p0 = [ 0, 0];

for i = 1:10
    j =10;
    p5(i*j-9, 1 ) = 19+i;
    p5(i*j-8, 1 ) = 19+i;
    p5(i*j-7, 1 ) = 19+i;
    p5(i*j-6, 1 ) = 19+i;
    p5(i*j-5, 1 ) = 19+i;
    p5(i*j-4, 1 ) = 19+i;
    p5(j*i-3, 1 ) = 19+i;
    p5(j*i-2, 1 ) =19+i;
    p5(j*i-1, 1) = 19+i;
    p5(j*i, 1 ) = 19+i;
    
    p5(i*j-9, 2 ) = 2;
    p5(j*i-8, 2 ) = 2.2;
    p5(j*i-7, 2) =2.4;
    p5(j*i-6, 2) = 2.6;
    p5(j*i-5, 2 ) = 2.8;
    p5(i*j-4, 2 ) = 3;
    p5(j*i-3, 2 ) = 3.2;
    p5(j*i-2, 2) =3.4;
    p5(j*i-1, 2) = 3.6;
    p5(j*i, 2 ) = 3.8;
end
 
p1(:,1) = p5(:,1)/4;
p1(:,2) = 0;
p2(:,1) = p5(:,1)/2;
p2(:,2) = 0;
p3(:,1) = p2(:,1);
p3(:,2) = p5(:,2);
p4(:,1) = p5(:,1)*3/4;
p4(:,2) = p5(:,2);

for i = 1:length(p5)
    P0 = p0;
    P1 = p1(i,:);
    P2 = p2(i,:);
   P3=  p3(i,:);
   P4=  p4(i,:);
   P5=  p5(i,:);
 for u =0: 0.01:1
 p(i,:)= (1-u)^5*P0 + 5*(1-u)^4*u*P1 + 10*(1-u)^3*u^2*P2 +...
     10*(1-u)^2*u^3*P3 +5*(1-u)*u^4*P4 + u^5*P5;
 i =i+1;
 end

  
 for i = 1: length(p)
 plot (p(i,1),p(i,2),'+b')
 hold on
 end
 
end
 
 
%  for i = 1:100 
%  pd(i) = (p(i+1,2)-p(i,2))/(p(i+1,1)-p(i,1));
%  pd(101) = 0;
%  end
%  
%  for i =2: 100
%      pdd(1) = 0;
%      pdd(101) = 0;
%      pdd(i) = (p(i+1,2)-2*p(i,2) + p(i-1,2))/(0.5*(-p(i-1,1)+p(i+1,1)))^2;
%  end
 
%  figure
%  plot(1:101,pd);
% figure
%  plot(1:101, pdd);
 
%  for i  = 1:101
%      k(i) = (pdd(i))/(1+pd(i)^2)^(1.5);
%  end
%  figure
%  plot(1:101,k,'-o')

%%
clc
clear all

 P0 = [ 0, 0];
 P1 = [7.5,7.5*4/30];
 P2= [15,0];
 P3 = [15,4];
 P4 = [22.5,22.5*4/30];
 P5 = [30,4];
 
  for u =0: 0.01:1
 p(i,:)= (1-u)^5*P0 + 5*(1-u)^4*u*P1 + 10*(1-u)^3*u^2*P2 +...
 10*(1-u)^2*u^3*P3 +5*(1-u)*u^4*P4 + u^5*P5;
  end
  
  figure
  for i = 1: length(p)
 plot (p(i,1),p(i,2),'ro')
 hold on
 end
 