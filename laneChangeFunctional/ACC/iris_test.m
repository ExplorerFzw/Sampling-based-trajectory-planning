clc
clear all
load('iris.txt')
for i = 1:4
    iris(:,i) = iris(:,i);
end

rate = [];
for iter = 1:1000
    
    for i = 1:3
        randIndex = randperm(50) + (i-1)*50;
        iris(50*(i-1)+1 : 50*i,:) = iris(randIndex,:);
    end


    train_set = [];
    test_set = [];

    for i = 1:3
        train_set = [train_set;iris(50*(i-1)+1:50*i-10,:)];
        test_set = [test_set;iris(50*i-10+1 :50*i ,:)];
    end

    for i = 1: 3
        for j = 1:4
        mean_value(i,j) = mean(train_set(40*(i-1)+1 : 40*i,j));
        std_value(i,j) = sum((train_set(40*(i-1)+1 : 40*i,j)-mean_value(i,j)).^2) /120;
        end
    end

    prob = [];
    counter = 0;

    for i = 1:30
        probk = [];
        for k = 1:3
            prob = 1;
            for j = 1:4
                iprob(j) = 1/sqrt(2*pi*std_value(k,j))*...
                    exp(-(test_set(i,j)-mean_value(k,j))^2/(2*std_value(k,j)^2));
                prob = prob * iprob(j);
            end
            probk = [probk,prob];
        end
        [value,loc] = max(probk);
        if (loc == test_set(i,end))
            counter = counter + 1;
        end
    end
    
    rate = [rate, counter/30.0];
end
    suc = mean(rate)


