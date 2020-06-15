import numpy as np
import matplotlib.pyplot as plt
import copy
from math import *

def bezier_frenet(D0, Ti, Di, t): # D0 is initial lateral error, Di is end lateral error, Ti is longitudinal extension
    p0 = np.array([0, D0])
    p1 = np.array([Ti/2, D0])
    p2 = np.array([Ti/2, Di])
    p3 = np.array([Ti, Di])
    p = (1-(t)/Ti)**3*p0 + 3*(1-(t)/Ti)**2*(t)/Ti*p1 + 3*(1-(t)/Ti)*((t)/Ti)**2*p2 + ((t)/Ti)**3*p3
    return p

point = []
for i in np.arange(0,11):
    p = bezier_frenet(0,10,2,i)
    print(i)
    point.append(p)

point = np.array(point)
# plt.plot(point[:,0],point[:,1])
# plt.show()
print(point)
############################################################################
MAX_ROAD_WIDTH = 3
D_ROAD_W = 0.5
MINT = 4
DT = 1
MAXT = 10
KJ = 1
KD = 1
KT = 1
def cal_frenet_paths(MAX_ROAD_WIDTH,D_ROAD_W, MINT,DT,MAXT,KJ,KD,KT):
    j = 1
    frenet_paths = []
    for di in np.arange(-MAX_ROAD_WIDTH, MAX_ROAD_WIDTH + D_ROAD_W, D_ROAD_W):
        for Ti in np.arange(MINT, MAXT+DT, DT):
            tfp = KT / Ti + KD * abs(di) + KJ * 0
            T = Ti
            D = di
            frenet_paths.append([tfp,T,D])
            j = j + 1
    frenet_paths = np.array(frenet_paths)
    perm = np.argsort(frenet_paths[:,0])
    frenet_paths_index = frenet_paths[perm[0],:]
    return frenet_paths_index
#######################################################test the function
frenet_paths = cal_frenet_paths(MAX_ROAD_WIDTH,D_ROAD_W, MINT,DT,MAXT,KJ,KD,KT)
print(frenet_paths[0],frenet_paths[1],frenet_paths[2])
################################################################################
def ref_generation(p, Location, store):
    '''
    p is n-by-2 matrix.
    location is current index.
    store is waypoint
    output: reference line with lateral offset, which has the same size as p
    '''
    ref = np.zeros((len(p),2))
    for i in range(0,len(p)):
        if Location + i >= len(store):
            break

        heading_ref = store[Location + i, 2]
        if heading_ref >= 0 and heading_ref <= 180:
            ref[i, 0] = store[Location + i, 0] - abs(p[i, 1]) * cos(heading_ref / 180 * pi)
            ref[i, 1] = store[Location + i, 1] + abs(p[i, 1]) * sin(heading_ref / 180 * pi)
        else:
            ref[i, 0] = store[Location + i, 0] - abs(p[i, 1]) * cos((heading_ref - 360) / 180 * pi)
            ref[i, 1] = store[Location + i, 1] + abs(p[i, 1]) * sin((heading_ref - 360) / 180 * pi)
    return ref
#######################################################test the function
Location = 0
store = np.array([[0,0,0],[1,2,30],[2,3,60],[4,4,80]])
p = np.array([[1,0],[2,1],[3,1],[4,0]])
print('store is',store)
print('p is',p)

ref = ref_generation(p, Location, store)
print('ref is',ref)

plt.plot(store[:,0],store[:,1])
plt.plot(ref[:,0],ref[:,1])
plt.show()
#############################################################################################
COND = 1
counter = 0
Location = 0
frenet_paths_index = cal_frenet_paths(MAX_ROAD_WIDTH,D_ROAD_W, MINT,DT,MAXT,KJ,KD,KT)
Di = frenet_paths_index[2]
Ti = frenet_paths_index[1]

s = 0
i = 1
counter_index = Location
p = []
LF_distance = 14
print('storelenght',len(store))
while s < Ti:
    p.append(bezier_frenet(0,10,2, s))
    if counter_index + 1 >= len(store):
        break

    s += sqrt((store[counter_index+1,0] - store[counter_index,0])**2 +\
              (store[counter_index+1,1]-store[counter_index,1])**2)

    counter_index += 1
    print(counter_index)

p = np.array(p)
print('test p is: ',p)

ref  = ref_generation(p, Location, store)
matrix_ref = ref
print('test func ref is: ',ref)
s = 0
while COND ==1:
    s += sqrt((matrix_ref[counter+1, 0]-matrix_ref[counter, 0])**2 +\
        (matrix_ref[counter+1, 1]-matrix_ref[counter, 1])**2)

    if s > LF_distance:
        COND = 2
        break

    counter += 1
    if counter + 1 >= len(matrix_ref):
        COND = 3
        break

LFX = matrix_ref[counter,0]
LFY = matrix_ref[counter,1]

print('LFP is: ',LFX,LFY)

plt.plot(store[:,0],store[:,1])
plt.plot(ref[:,0],ref[:,1])
plt.plot(LFX,LFY,'ro')
plt.show()

traj = np.array([])
print('traj is:',traj)

a = np.array([2,5,1,3])

print(a[0:2])