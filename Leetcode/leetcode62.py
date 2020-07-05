from numpy import *
n = 5
m = 3
lastPoint = 0
for i in arange(1,n):
    lastPoint = (lastPoint + m) % n - 1
print(lastPoint)