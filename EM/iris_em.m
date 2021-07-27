clc
clear all 
close all

load fisheriris;
X = meas(:,1:2);
[n,p] = size(X);

figure
plot(X(:,1),X(:,2),'.','MarkerSize',15);
title('Fisher''s Iris Data Set');
xlabel('Sepal length (cm)');
ylabel('Sepal width (cm)');
%%
[omega, alpha, mu, cov] = gmm_em(X,3,1)

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
        mu1 = Y(b);
        mu  = [mu;mu1];
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
        for j = 1:K
            sumP(j) = sum(p(:,j));
        end
        omega = p./sumP; % N * K
        
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
            Omega = ones(N,N);
            for j = 1:N
                Omega(j,j) = omega(j,k);
            end
            cov{k} = X_mu_k' * Omega * X_mu_k; % 2 * 2
        end
    end
end

function prob = gaussian2(y,mu,sigma)
% Y = 1*2; mu = 1*2, sigma = 2*2
    prob = 1/(2*pi*sqrt(det(sigma)))*exp(-1/2*(y-mu)*inv(sigma)*(y-mu)');
  end