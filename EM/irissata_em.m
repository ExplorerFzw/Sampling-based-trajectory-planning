  %%
  %https://ww2.mathworks.cn/help/stats/clustering-using-gaussian-mixture-models.html?searchHighlight=gaussian&s_tid=srchtitle
load fisheriris;
X = meas(:,1:2);
[n,p] = size(X);

plot(X(:,1),X(:,2),'.','MarkerSize',15);
title('Fisher''s Iris Data Set');
xlabel('Sepal length (cm)');
ylabel('Sepal width (cm)');