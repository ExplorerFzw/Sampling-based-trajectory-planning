"""

Hybrid A* path planning

author: Zheng Zh (@Zhengzh)

"""

import heapq
import scipy.spatial
import numpy as np
import math
import matplotlib as mpl
mpl.use('TKAgg')
import matplotlib.pyplot as plt
import sys

try:
    # from a_star import dp_planning  
    from A_Star import a_star_planning
    import reeds_shepp_path_planning as rs
    from car import move, check_car_collision, MAX_STEER, WB, plot_car
except:
    raise


XY_GRID_RESOLUTION = 2.0  # [m]
YAW_GRID_RESOLUTION = np.deg2rad(15.0)  # [rad]
MOTION_RESOLUTION = 0.1  # [m] path interporate resolution
N_STEER = 20.0  # number of steer command
H_COST = 1.0
VR = 1.0  # robot radius

SB_COST = 100.0  # switch back penalty cost
BACK_COST = 5.0  # backward penalty cost
STEER_CHANGE_COST = 5.0  # steer angle change penalty cost
STEER_COST = 1.0  # steer angle change penalty cost
H_COST = 5.0  # Heuristic cost

show_animation = True

# Hybrid A_star 节点
class Node:
    def __init__(self, xind, yind, yawind, direction,
                 xlist, ylist, yawlist, directions,
                 steer=0.0, pind=None, cost=None):
        self.xind = xind
        self.yind = yind
        self.yawind = yawind
        self.direction = direction
        self.xlist = xlist
        self.ylist = ylist
        self.yawlist = yawlist
        self.directions = directions
        self.steer = steer
        self.pind = pind
        self.cost = cost

# 路径点 path_points
class Path:
    def __init__(self, xlist, ylist, yawlist, directionlist, cost):
        self.xlist = xlist
        self.ylist = ylist
        self.yawlist = yawlist
        self.directionlist = directionlist
        self.cost = cost


class KDTree:
    # Nearest neighbor search class with KDTree
    def __init__(self, data):
        # store kd-tree
        self.tree = scipy.spatial.cKDTree(data)

    def search(self, inp, k=1):
        """
        Search NN
        inp: input data, single frame or multi frame
        """
        if len(inp.shape) >= 2:  # multi input
            index = []
            dist = []
            for i in inp.T:
                idist, iindex = self.tree.query(i, k=k)
                index.append(iindex)
                dist.append(idist)
            return index, dist
        dist, index = self.tree.query(inp, k=k)
        return index, dist

    def search_in_distance(self, inp, r):
        """
        find points with in a distance r
        """
        index = self.tree.query_ball_point(inp, r)
        return index


class Config:

    def __init__(self, ox, oy, xyreso, yawreso):
        min_x_m = min(ox)
        min_y_m = min(oy)
        max_x_m = max(ox)
        max_y_m = max(oy)

        ox.append(min_x_m)
        oy.append(min_y_m)
        ox.append(max_x_m)
        oy.append(max_y_m)

        self.minx = round(min_x_m / xyreso)
        self.miny = round(min_y_m / xyreso)
        self.maxx = round(max_x_m / xyreso)
        self.maxy = round(max_y_m / xyreso)

        self.xw = round(self.maxx - self.minx)
        self.yw = round(self.maxy - self.miny)

        self.minyaw = round(- math.pi / yawreso) - 1
        self.maxyaw = round(math.pi / yawreso)
        self.yaww = round(self.maxyaw - self.minyaw)


def calc_motion_inputs():
    for steer in np.concatenate((np.linspace(-MAX_STEER, MAX_STEER, N_STEER),[0.0])):
        for d in [1, -1]:
            yield [steer, d]


def get_neighbors(current, config, ox, oy, kdtree):
    for steer, d in calc_motion_inputs():
        node = calc_next_node(current, steer, d, config, ox, oy, kdtree)
        if node and verify_index(node, config):
            yield node


def calc_next_node(current, steer, direction, config, ox, oy, kdtree):

    x, y, yaw = current.xlist[-1], current.ylist[-1], current.yawlist[-1]

    arc_l = XY_GRID_RESOLUTION * 1.5
    xlist, ylist, yawlist = [], [], []
    for _ in np.arange(0, arc_l, MOTION_RESOLUTION):
        x, y, yaw = move(x, y, yaw, MOTION_RESOLUTION * direction, steer)
        xlist.append(x)
        ylist.append(y)
        yawlist.append(yaw)

    if not check_car_collision(xlist, ylist, yawlist, ox, oy, kdtree):
        return None

    d = direction == 1
    xind = round(x / XY_GRID_RESOLUTION)
    yind = round(y / XY_GRID_RESOLUTION)
    yawind = round(yaw / YAW_GRID_RESOLUTION)

    addedcost = 0.0

    if d != current.direction:
        addedcost += SB_COST

    # steer penalty
    addedcost += STEER_COST * abs(steer)

    # steer change penalty
    addedcost += STEER_CHANGE_COST * abs(current.steer - steer)

    cost = current.cost + addedcost + arc_l

    node = Node(xind, yind, yawind, d, xlist,
                ylist, yawlist, [d],
                pind=calc_index(current, config),
                cost=cost, steer=steer)

    return node


def is_same_grid(n1, n2):
    if n1.xind == n2.xind and n1.yind == n2.yind and n1.yawind == n2.yawind:
        return True
    return False

# current_node, goal_node, config, obstacle_x,obstacle_y, kdtree
def analytic_expantion(current, goal, c, ox, oy, kdtree):
    # 取node x_list的最后一个
    sx = current.xlist[-1]
    sy = current.ylist[-1]
    syaw = current.yawlist[-1]
    gx = goal.xlist[-1]
    gy = goal.ylist[-1]
    gyaw = goal.yawlist[-1]
    max_curvature = math.tan(MAX_STEER) / WB
    # reeds-shepp 曲线计算可能的路径，区cost最小的路径
    paths = rs.calc_paths(sx, sy, syaw, gx, gy, gyaw,
                          max_curvature, step_size=MOTION_RESOLUTION)

    if not paths:
        return None
    best_path, best = None, None
    for path in paths:
        if check_car_collision(path.x, path.y, path.yaw, ox, oy, kdtree):
            cost = calc_rs_path_cost(path)
            if not best or best > cost:
                best = cost
                best_path = path
    return best_path


def update_node_with_analystic_expantion(current, goal,
                                         c, ox, oy, kdtree):

    apath = analytic_expantion(current, goal, c, ox, oy, kdtree)

    if apath:
        # plt.plot(apath.x, apath.y)
        fx = apath.x[1:]
        fy = apath.y[1:]
        fyaw = apath.yaw[1:]        
        # A_star的cost加上reeds-shepp曲线的cost
        # 父节点为current_node
        fcost = current.cost + calc_rs_path_cost(apath)
        fpind = calc_index(current, c)
        fd = []
        for d in apath.directions[1:]:
            fd.append(d >= 0)
        fsteer = 0.0
        fpath = Node(current.xind, current.yind, current.yawind,
                     current.direction, fx, fy, fyaw, fd,
                     cost=fcost, pind=fpind, steer=fsteer)
        return True, fpath
    return False, None


def calc_rs_path_cost(rspath):
    cost = 0.0
    for l in rspath.lengths:
        if l >= 0:  # 车辆前进
            cost += l
        else:       # 车辆后退
            cost += abs(l) * BACK_COST
    # swich back penalty
    for i in range(len(rspath.lengths) - 1):
        if rspath.lengths[i] * rspath.lengths[i + 1] < 0.0:  # 前进和后退的切换
            cost += SB_COST
    # steer penalyty
    for ctype in rspath.ctypes:
        if ctype != "S":  # curve
            cost += STEER_COST * abs(MAX_STEER)

    # steer change penalty
    # calc steer profile
    nctypes = len(rspath.ctypes)
    ulist = [0.0] * nctypes
    for i in range(nctypes):
        if rspath.ctypes[i] == "R":
            ulist[i] = - MAX_STEER
        elif rspath.ctypes[i] == "L":
            ulist[i] = MAX_STEER
    for i in range(len(rspath.ctypes) - 1):
        cost += STEER_CHANGE_COST * abs(ulist[i + 1] - ulist[i])
    return cost


def hybrid_a_star_planning(start, goal, ox, oy, xyreso, yawreso):
    """
    start
    goal
    ox: x position list of Obstacles [m]
    oy: y position list of Obstacles [m]
    xyreso: grid resolution [m]
    yawreso: yaw angle resolution [rad]
    """
    start[2], goal[2] = rs.pi_2_pi(start[2]), rs.pi_2_pi(goal[2])
    tox, toy = ox[:], oy[:]
    # 障碍物
    obkdtree = KDTree(np.vstack((tox, toy)).T)

    config = Config(tox, toy, xyreso, yawreso)
    #  把位姿栅格定义为一个结点，形成链表结构
    nstart = Node(round(start[0] / xyreso), round(start[1] / xyreso), round(start[2] / yawreso),
                  True, [start[0]], [start[1]], [start[2]], [True], cost=0)
    ngoal = Node(round(goal[0] / xyreso), round(goal[1] / xyreso), round(goal[2] / yawreso),
                 True, [goal[0]], [goal[1]], [goal[2]], [True])

    openList, closedList = {}, {}
    # h_dp is closedset from original A_star
    _, _, h_dp = a_star_planning(nstart.xlist[-1], nstart.ylist[-1],
                             ngoal.xlist[-1], ngoal.ylist[-1], ox, oy, xyreso, VR)

    pq = []
    # 把起点加入 open_set
    openList[calc_index(nstart, config)] = nstart
    #  把起点加入 pq 中,pq为heap, # 将 item 的值加入 heap 中，保持堆的不变性,堆顶为cost最小的node
    heapq.heappush( pq, ( calc_cost(nstart, h_dp, ngoal, config), calc_index(nstart, config) ) )
    
    
    while True:
        # 如果open_set为空
        if not openList:
            print("Error: Cannot find path, No open set")
            return [], [], []
        # 如果open_set不为空
        cost, c_id = heapq.heappop(pq)  # 弹出并返回 heap 的最小的元素
        if c_id in openList:
            current = openList.pop(c_id) # 从open_set中pop出该 A_start node
            closedList[c_id] = current   # 该 A_start node 加入close-set中
        else:
            continue
        
        # 以 current_node 为根节点生成搜索树，使用Reeds-Shepp方法基于车辆单轨模型进行运动学解析拓展子结点
        isupdated, fpath = update_node_with_analystic_expantion(current, ngoal, config, ox, oy, obkdtree)
        # 如果纯reeds-shepp曲线可以生成path_planning,搜索结束
        if isupdated:
            break
        # 使用车辆运动学，计算临近的node
        for neighbor in get_neighbors(current, config, ox, oy, obkdtree):
            neighbor_index = calc_index(neighbor, config)
            if neighbor_index in closedList:
                continue
            if neighbor not in openList  or  openList[neighbor_index].cost > neighbor.cost:
                heapq.heappush( pq, (calc_cost(neighbor, h_dp, ngoal, config), neighbor_index) )
                openList[neighbor_index] = neighbor
    print("Hybrid A_star Find Path")
    # close_set为最终的路径点, RS曲线中最后一个元素是目标点
    path = get_final_path(closedList, fpath, nstart, config)
    return path

# 基于A_star的cost，计算cost
def calc_cost(n, h_dp, goal, c):
    ind = (n.yind - c.miny) * c.xw + (n.xind - c.minx)
    if ind not in h_dp:
        return n.cost + 999999999  # collision cost
    return n.cost + H_COST * h_dp[ind].cost  # H_COST = 5

# 路径要么是纯RS路径，要么是由RS路径和混合A*组合一起来的路径，
# 先处理混合A*的结点，最后处理RS路径，肯定有RS路径
def get_final_path(closed, ngoal, nstart, config):
    rx = list(reversed(ngoal.xlist))
    ry = list(reversed(ngoal.ylist))
    ryaw = list(reversed(ngoal.yawlist))
    direction = list(reversed(ngoal.directions))

    nid = ngoal.pind
    finalcost = ngoal.cost

    while nid:
        n = closed[nid]
        rx.extend(list(reversed(n.xlist)))
        ry.extend(list(reversed(n.ylist)))
        ryaw.extend(list(reversed(n.yawlist)))
        direction.extend(list(reversed(n.directions)))

        nid = n.pind

    rx = list(reversed(rx))
    ry = list(reversed(ry))
    ryaw = list(reversed(ryaw))
    direction = list(reversed(direction))

    # adjust first direction
    direction[0] = direction[1]
    # 路径点 path_points
    path = Path(rx, ry, ryaw, direction, finalcost)
    return path


def verify_index(node, c):
    xind, yind = node.xind, node.yind
    if xind >= c.minx and xind <= c.maxx and yind >= c.miny \
            and yind <= c.maxy:
        return True

    return False

# 把起始的位姿(x,y,theta)转换为grid上的栅格索引
def calc_index(node, c):
    ind = (node.yawind - c.minyaw) * c.xw * c.yw + \
          (node.yind - c.miny) * c.xw + (node.xind - c.minx)
    if ind <= 0:
        print("Error(calc_index):", ind)
    return ind


def main():
    print("Start Hybrid A* planning")
    ox, oy = [], []
    # a
    for i in range(60):
        ox.append(i)
        oy.append(0.0)
    # b
    for i in range(60):
        ox.append(60.0)
        oy.append(i)
    # c 
    for i in range(61):
        ox.append(i)
        oy.append(60.0)
    # d
    for i in range(61):
        ox.append(0.0)
        oy.append(i)
    # 车位 1
    for i in range(7):
        ox.append(i)
        oy.append(1.5)
    for i in range(7):
        ox.append(i)
        oy.append(4.5)
    # 车位 2
    for i in range(7):
        ox.append(44.5)
        oy.append(i)
    for i in range(7):
        ox.append(48.5)
        oy.append(i) 
    # 车位 3
    for i in range(7):
        ox.append(44.5)
        oy.append(i+53)
    for i in range(7):
        ox.append(48.5)
        oy.append(i+53)

    # 停进车位 1
    # start = [2.5, 48.0, np.deg2rad(0)]
    # goal = [2.5, 3.0, np.deg2rad(0)]
    # 停进车位 2
    # start = [2.5, 48.0, np.deg2rad(0)]
    # goal = [46.5, 3, np.deg2rad(90)]

    # 停进车位 3
    start = [30.0, 48.0, np.deg2rad(-30)]
    goal = [46.5, 56, np.deg2rad(-90)]

    plt.plot(ox, oy, ".k")
    rs.plot_arrow(start[0], start[1], start[2], fc='g')
    rs.plot_arrow(goal[0], goal[1], goal[2])
    plt.grid(True)
    plt.axis("equal")
    # 主函数
    path = hybrid_a_star_planning( start, goal, ox, oy, XY_GRID_RESOLUTION, 
                                   YAW_GRID_RESOLUTION)
    x = path.xlist
    y = path.ylist
    yaw = path.yawlist
    for ix, iy, iyaw in zip(x, y, yaw):
        plt.cla()
        plt.plot(ox, oy, ".k")
        plt.plot(x, y, "-r", label="Hybrid A* path")
        plt.grid(True)
        plt.axis("equal")
        plot_car(ix, iy, iyaw)
        # plt.show()
        plt.pause(0.001)
    print(__file__ + " done!!")

if __name__ == '__main__':
    main()
