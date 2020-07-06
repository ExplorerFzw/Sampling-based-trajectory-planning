# A* grid based planning
#2019-01-06

import matplotlib.pyplot as plt
import math

show_animation = True

# 节点 
class Node:
    def __init__(self, x, y, cost, pind):
        self.x = x
        self.y = y
        self.cost = cost
        self.pind = pind # 父节点
    def __str__(self):
        return str(self.x) + "," + str(self.y) + "," + str(self.cost) + "," + str(self.pind) # 打印节点信息

# 从close_set中计算路径点
def calc_final_path(ngoal, closedset, reso):
    rx, ry = [ngoal.x * reso], [ngoal.y * reso]
    pind = ngoal.pind
    while pind != -1:
        n = closedset[pind]
        rx.append(n.x * reso)
        ry.append(n.y * reso)
        pind = n.pind
    return rx, ry

# A_star
def a_star_planning(sx, sy, gx, gy, ox, oy, reso, rr):
    # gx: goal x position [m]
    # gy: goal y position [m]
    # ox: x position list of Obstacles [m]
    # oy: y position list of Obstacles [m]
    # reso: grid resolution [m]
    # rr: robot radius[m]
    nstart = Node(round(sx / reso), round(sy / reso), 0.0, -1)
    ngoal = Node(round(gx / reso), round(gy / reso), 0.0, -1)

    ox = [iox / reso for iox in ox]
    oy = [ioy / reso for ioy in oy]
    obmap, minx, miny, maxx, maxy, xw, yw = calc_obstacle_map(ox, oy, reso, rr)

    motion = get_motion_model()
    # 字典表示open_set和close_set, 键:索引  值:Node
    openset, closedset =  dict(), dict()
    # 把起点加入open_set 
    openset[calc_index(nstart, xw, minx, miny)] = nstart

    while True:
        # cost最小的node
        c_id = min(  openset, key=lambda o: openset[o].cost + calc_heuristic(ngoal, openset[o]))
        current = openset[c_id]  
        # 如果到达终点
        if abs(current.x - ngoal.x)<=rr and abs( current.y - ngoal.y )<=rr:
            print("A_star_Find goal")
            ngoal.pind = current.pind
            ngoal.cost = current.cost
            break
        # Remove the item from the open set,
        # the key aspect of the A_star algorithm the open_set and the closed_set
        del openset[c_id]
        # Add it to the closed set
        closedset[c_id] = current
        # expand search grid based on motion model
        for i in range( len(motion) ):
            node = Node(current.x + motion[i][0],current.y + 
                        motion[i][1],current.cost + motion[i][2], c_id)  # x,y,cost, index
            n_id = calc_index(node, xw, minx, miny)
            if n_id in closedset:
                continue
            if not verify_node(node, obmap, minx, miny, maxx, maxy):
                continue
            if n_id not in openset:
                openset[n_id] = node  # Discover a new node
            else:
                if openset[n_id].cost >= node.cost:
                    # This path is the best until now. record it!
                    openset[n_id] = node

    rx, ry = calc_final_path(ngoal, closedset, reso)
    return rx, ry, closedset


def calc_heuristic(n1, n2):
    w = 1.0  # weight of heuristic
    d = w * math.sqrt((n1.x - n2.x)**2 + (n1.y - n2.y)**2)
    return d


def verify_node(node, obmap, minx, miny, maxx, maxy):
    if node.x < minx:
        return False
    elif node.y < miny:
        return False
    elif node.x >= maxx:
        return False
    elif node.y >= maxy:
        return False
    if obmap[node.x][node.y]:
        return False
    return True

# 把障碍物转换为珊格地图，True表示被占用
def calc_obstacle_map(ox, oy, reso, vr): # determine the grids which have been occupied
    minx = round(min(ox))
    miny = round(min(oy))
    maxx = round(max(ox))
    maxy = round(max(oy))

    xwidth = round(maxx - minx)
    ywidth = round(maxy - miny)
    # obstacle map generation
    obmap = [[False for i in range(xwidth)] for i in range(ywidth)]  #initilaize the obmap with all False
    for ix in range(xwidth):
        x = ix + minx        
        for iy in range(ywidth):
            y = iy + miny
            for iox, ioy in zip(ox, oy):  # pack as tuple
                d = math.sqrt((iox - x)**2 + (ioy - y)**2)
                if d <= vr / reso:
                    obmap[ix][iy] = True
                    break
    return obmap, minx, miny, maxx, maxy, xwidth, ywidth

# 计算索引
def calc_index(node, xwidth, xmin, ymin):
    return (node.y - ymin) * xwidth + (node.x - xmin)

# 3×3-1=8
def get_motion_model(): # up,down,left,right,and digonal
    # dx, dy, cost
    motion = [ [1, 0, 1],[0, 1, 1],[-1, 0, 1],[0, -1, 1],[-1, -1, math.sqrt(2)],[-1, 1, math.sqrt(2)],[1, -1, math.sqrt(2)],[1, 1, math.sqrt(2)] ]
    return motion


def main():
    print(__file__ + " start!!")
    # start and goal position
    sx = 10.0  # [m]
    sy = 10.0  # [m]
    gx = 50.0  # [m]
    gy = 50.0  # [m]
    grid_size = 1.0  # [m]
    robot_size = 2.0  # [m]

    ox, oy = [], []   # obstacles
    # set the boundaries and the obstacles
    for i in range(60):
        ox.append(i)
        oy.append(0.0) # bottom
    for i in range(60):
        ox.append(60.0) # right
        oy.append(i)  
    for i in range(61):
        ox.append(i)    # top
        oy.append(60.0)
    for i in range(61):
        ox.append(0.0)  # left
        oy.append(i)
        #obstacles
    for i in range(5,10,1):
    	for j in range (5,10,1):
           ox.append(i)
           oy.append(j)
    for i in range(20,25,1):
    	for j in range (20,25,1):
           ox.append(i)
           oy.append(j)
    for i in range(30,35,1):
    	for j in range (30,35,1):
           ox.append(i)
           oy.append(j)
    for i in range(40,45,1):
    	for j in range (40,45,1):
           ox.append(i)
           oy.append(j)
    if show_animation:
        plt.plot(ox, oy, ".k")
        plt.plot(sx, sy, "xr")
        plt.plot(gx, gy, "xb")
        plt.grid(True)
        plt.axis("equal")

    rx, ry,_ = a_star_planning(sx, sy, gx, gy, ox, oy, grid_size, robot_size)

    if show_animation:
        plt.plot(rx, ry, "-r")
        plt.show()

if __name__ == '__main__':
 main()