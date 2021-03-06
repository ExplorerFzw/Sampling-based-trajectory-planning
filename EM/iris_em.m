clc
clear all 
close all

load fisheriris;
X = meas(:,1:2);
X(1:75,:) = X(1:75,:);
X(76:150,:) = X(76:150,:) ;
[n,p] = size(X);

figure
plot(X(:,1),X(:,2),'.','MarkerSize',15);
title('Fisher''s Iris Data Set');
xlabel('Sepal length (cm)');
ylabel('Sepal width (cm)');
%%
[omega, alpha, mu, cov] = gmm_em(X,3,100)
cov{1}
for i = 1:3
    plotGaussian2(mu(i,:),cov{i})
hold on
end
% plotGaussian2([0,0],[1.5,0;0,1.5])
function [omega, alpha, mu, cov] = gmm_em(Y,K,iters)
    % this function iteratively solve gmm using em
    % Y is input data with dimension N * D;
    X = Y;
    [N,D] = size(X);
    %N is the number of data, D is the dimension of the data
    alpha = ones(K,1)/K;% initial guess for responsibility
    
    % initial guess for mu
    mu = [];
    for i = 1:K
        b = randperm(N,1);
        mu1 = Y(b,:);
        mu  = [mu;mu1];
%         mu = [4,2; 8,4];
        
    end
    sigma = eye(D);%inital guess for sigma
    cov = cell(1,K);% initial guess for covariance matrix
    for i = 1:K
        cov{i} = sigma;
    end
    omega = zeros(N,K); % initial guess for omega
    
    for i = 1:iters
        %iteratively solve gmm para using em
        p = zeros(N,K);
        for k = 1:K
            for j = 1:N
                p(j,k) = alpha(k) * gaussian2(X(j,:),mu(k,:),cov{k});
            end
        end
        for j = 1:N
            sumP(j) = sum(p(j,:)); % N * 1
        end
        
        for j = 1:N
            omega(j,:) = p(j,:)./sumP(j); % N * K
        end
        
        for j = 1:K
            sumOmega(j) = sum(omega(:,j)); % 1 * K
        end
        alpha = sumOmega'/N; %remember that alpha is K * 1
        
        for k = 1:K
            % udpate corresponding params
            omegaX = X .* omega(:,k); % N * D
            for j = 1:D
                mu(k,j) = sum(omegaX(:,j))/sumOmega(k);
            end
            X_mu_k = X - mu(k,:);
            Omega = zeros(N,N);
            for j = 1:N
                Omega(j,j) = omega(j,k);
            end
            cov{k} = X_mu_k' * Omega * X_mu_k / sumOmega(k); % 2 * 2
        end
    end
end


function prob = gaussian2(y,mu,sigma)
% Y = 1*2; mu = 1*2, sigma = 2*2
    prob = 1/(2*pi*sqrt(det(sigma)))*exp(-1/2*(y-mu)*inv(sigma)*(y-mu)');
end


function plotGaussian2(mu,sigma)
%plot 2d gaussian
    X = [];
    Y = [];
    i = 1;
    
    for row = mu(1)-4*sigma(1,1): 8*sigma(1,1)/50 : mu(1)+4*sigma(1,1)
         j = 1;
        for col = mu(2)-4*sigma(2,2): 8*sigma(2,2)/50  : mu(2)+4*sigma(2,2)
            y = [row,col];
           
            Z(i,j) = 1/(2*pi*sqrt(det(sigma)))*exp(-1/2*(y-mu)*inv(sigma)*(y-mu)');
            j = j+1;
        end
        i = i+1;
    end
    X = mu(1)-4*sigma(1,1): 8*sigma(1,1)/50  : mu(1)+4*sigma(1,1);
    Y = mu(2)-4*sigma(2,2): 8*sigma(2,2)/50  : mu(2)+4*sigma(2,2);
    surf(X,Y,Z,'FaceAlpha',0.5,'EdgeColor','none')
   
    
end