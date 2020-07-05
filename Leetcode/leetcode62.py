from numpy import *
n = 10
m = 17
lastpoint = 0
for i in arange(2,n+1):
    lastpoint = (lastpoint + m) % i
print(lastpoint)