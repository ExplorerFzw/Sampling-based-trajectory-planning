"""
version1.1
Mobile robot motion planning sample with Dynamic Window Approach
"""

import math
import numpy as np
import matplotlib.pyplot as plt

show_animation = True  # real time drawing
start = 0  # go through point

class Config(object):
    """
    Parameters used for simulation
    """

    def __init__(self):
        # robot parameter
        self.max_speed = 3.0  # [m/s]  # max v
        # self.min_speed = -0.5  # [m/s]  # min v Set to reverse
        self.min_speed = -2.0  # [m/s]  # min v Set to can not reverse
        self.max_yawrate = 40.0 * math.pi / 180.0  # [rad/s]  # max angle speed
        self.max_accel = 0.2  # [m/ss]  # max a
        self.max_dyawrate = 40.0 * math.pi / 180.0  # [rad/ss]  # max yaw a
        self.v_reso = 0.01  # [m/s] Speed resolution
        self.yawrate_reso = 0.1 * math.pi / 180.0  # [rad/s] yaw Speed resolution
        self.dt = 0.1  # [s]  # sampling time T
        self.predict_time = 3.0  # [s]  # Three seconds predict
        self.to_goal_cost_gain = 2.0  # Target cost gain
        self.speed_cost_gain = 0.5  # Target cost reduction
        self.robot_radius = 1.0  # [m]  # robor radius


def motion(x, u, dt):
    """
    :param x: positon
    :param u: (v, w)
    :param dt: time
    :return:
    """
    # The velocity updating formula is simple, and the vehicle displacement changes greatly in a very short time
    #
    x[0] += u[0] * math.cos(x[2]) * dt  # x
    x[1] += u[0] * math.sin(x[2]) * dt  # y
    x[2] += u[1] * dt  # heading
    x[3] = u[0]  # v
    x[4] = u[1]  # w
    # print(x)

    return x


def calc_dynamic_window(x, config, start):
    """
    x: ~
    config : ~
    start: trigger that indicate starting running
    return: a List of four elements: max and min velocity, and angular velocity
            which consists of the dynamic window
    """
    # if start == 1:
    #     config.max_speed == -1.4

    # max_v, min_v
    vs = [config.min_speed, config.max_speed,
          -config.max_yawrate, config.max_yawrate]

    # max_v, min_v
    vd = [x[3] - config.max_accel * config.dt,
          x[3] + config.max_accel * config.dt,
          x[4] - config.max_dyawrate * config.dt,
          x[4] + config.max_dyawrate * config.dt]
    #  print(Vs, Vd)

    #
    vr = [max(vs[0], vd[0]), min(vs[1], vd[1]),
          max(vs[2], vd[2]), min(vs[3], vd[3])]
    # if start == 1:
    #     print(vr)
    return vr


def calc_trajectory(x_init, v, w, config):
    """
    Predict trajectory in 3 seconds
    :param x_init:postion space
    :param v:v
    :param w:w
    :param config:
    :return: trajectory point with size of n-by-5, which contains x states along time
    """
    x = np.array(x_init)
    trajectory = np.array(x)
    time = 0
    while time <= config.predict_time:
        x = motion(x, [v, w], config.dt)
        trajectory = np.vstack((trajectory, x))  # vertical
        time += config.dt
    traj_len = len(trajectory)
        # print(trajectory)
    return trajectory


def calc_to_goal_cost(trajectory, goal, config):
    """
    Calculate the cost from trajectory to target point
    :param trajectory:
    :param goal:
    :param config:
    :return: Euclidean distance from track to target point
    """
    # calc to goal cost. It is 2D norm.

    dx = goal[0] - trajectory[-1, 0]
    dy = goal[1] - trajectory[-1, 1]
    goal_dis = math.sqrt(dx ** 2 + dy ** 2)
    cost = config.to_goal_cost_gain * goal_dis

    return cost

def calc_obstacle_cost(traj, ob, config):
    """
    min Euclidean distance from track to target point dist(v,w)
    :param traj:
    :param ob:
    :param config:
    :return:
    """
    # calc obstacle cost inf: collision 0:free

    min_r = float("inf")  #

    for ii in range(0, len(traj[:, 1])):
        for i in range(len(ob[:, 0])):
            ox = ob[i, 0]
            oy = ob[i, 1]
            dx = traj[ii, 0] - ox
            dy = traj[ii, 1] - oy

            r = math.sqrt(dx ** 2 + dy ** 2)
            if r <= config.robot_radius:
                return float("Inf")  # collision

            if min_r >= r:
                min_r = r

    return 1.0 / min_r  #

def calc_speed_cost(trajectory,config):
    speed_cost = config.speed_cost_gain * (config.max_speed - trajectory[-1, 3])
    return speed_cost

def calc_breaking_dist_cost(v,config):
    stopDist = 1/(v**2/(2*abs(config.max_accel)))
    # while abs(v) > 0:
    #     stopDist = stopDist + v * config.dt
    #     v = v - np.sign(v) * config.max_accel * config.dt

    return stopDist

def cal_heading_cost(x,goal):
    heading_cost = abs(x[4] - goal[2])
    return heading_cost


def evaluation(x, u, vr, config, goal, ob):
    """

    :param x:
    :param u:
    :param vr:
    :param config:
    :param goal:
    :param ob:
    :return:
    """
    x_init = x[:]
    min_cost = 10000.0
    min_u = u
    eval = []
    traj = np.ones([31, 5])
    traj = np.array(traj)
    # evaluate all trajectory with sampled input in dynamic window
    # v,w
    for v in np.arange(vr[0], vr[1], config.v_reso):
        for w in np.arange(vr[2], vr[3], config.yawrate_reso):

            trajectory = calc_trajectory(x_init, v, w, config)

            # calc cost
            to_goal_cost = calc_to_goal_cost(trajectory, goal, config)
            speed_cost = calc_speed_cost(trajectory,config)
            ob_cost = calc_obstacle_cost(trajectory, ob, config)
            stopDist_cost = calc_breaking_dist_cost(v,config)
            heading_cost = cal_heading_cost(x,goal)
            #  print(ob_cost)
            eval_cost = [v, w, to_goal_cost, speed_cost, ob_cost, heading_cost]
            eval.append(eval_cost)

            trajectory = np.array(trajectory)
            traj = np.hstack((traj,trajectory))
    eval = np.array(eval)# search minimum trajectory


    # print(min_u)
    #  input()

    return eval, traj

def NormalizeEval(eval):
    for i in range(2,6):
        eval[:,i] = eval[:,i]/sum(eval[:,i])
    return eval

def dwa_control(x, u, config, goal, ob):
    """

    :param x:
    :param u:
    :param config:
    :param goal:
    :param ob:
    :return:
    """
    # Dynamic Window control

    vr = calc_dynamic_window(x, config, start)
    # print(vr)
    eval, trajectory = evaluation(x, u, vr, config, goal, ob)

    eval = NormalizeEval(eval)
    feval = []
    for i in range(len(eval)):
        value = sum(eval[i,:])

        feval.append(value)
    feval = np.array(feval)
    index_list = np.argsort(feval)
    index = index_list[0]

    u = eval[index,0:2]
    trajectory = trajectory[:,(index+1)*5:((index+1)*5 + 2)]
    # print('traj is ',trajectory)
    print('u is',u)
    return u, trajectory


def plot_arrow(x, y, yaw, length=0.5, width=0.1):
    """

    :param x:
    :param y:
    :param yaw:
    :param length:
    :param width:.001
    :return:
    length_includes_head
    """
    plt.arrow(x, y, length * math.cos(yaw), length * math.sin(yaw),
              head_length=1.5 * width, head_width=width)
    plt.plot(x, y)


def main():
    """

    :return:
    """
    global start
    # print(__file__ + " start!!")
    #
    x = np.array([0.0, 0.0, math.pi / 2.0, 0.2, 0.0])

    goal = np.array([10, 3, 0])
    goal2 = np.array([7.5, 10, -math.pi / 2.0 ])

    #
    # ob = np.matrix([[-1, -1],
    #                 [0, 2],
    #                 [4.0, 2.0],
    #                 [5.0, 4.0],
    #                 [5.0, 5.0],
    #                 [5.0, 6.0],
    #                 [5.0, 9.0],
    #                 [8.0, 9.0],
    #                 [7.0, 9.0],
    #                 [12.0, 12.0]
    #                 ])
    ob = np.matrix([[0, 5], [2, 8]])
    u = np.array([2, 0.0])
    config = Config()
    trajectory = np.array(x)

    for i in range(1000):
        # if start == 0:
        u, best_trajectory = dwa_control(x, u, config, goal, ob)
        # if start == 1:
        #     u, best_trajectory = dwa_control(x, u, config, goal2, ob)
        print(u[0])
        x = motion(x, u, config.dt)
        # print(x)

        trajectory = np.vstack((trajectory, x))  # store state history

        # if show_animation and start == 0:
        draw_dynamic_search(best_trajectory, x, goal, ob)
        # if start == 1 and show_animation:
        #     draw_dynamic_search(best_trajectory, x, goal2, ob)

        # check goal
        if math.sqrt((x[0] - goal[0]) ** 2 + (x[1] - goal[1]) ** 2) <= config.robot_radius:
            print("Goal1!")
            start = 1
        #     #
        # if math.sqrt((x[0] - goal2[0]) ** 2 + (x[1] - goal2[1]) ** 2) <= config.robot_radius:
        #     print("Goal2!")
            break

    x = np.array([x[0], x[1], x[2], -0.2, x[4]])
    for i in range(1000):
        # if start == 0:
        u, best_trajectory = dwa_control(x, u, config, goal2, ob)
        # if start == 1:
        #     u, best_trajectory = dwa_control(x, u, config, goal2, ob)
        print(u[0])
        x = motion(x, u, config.dt)
        # print(x)

        trajectory = np.vstack((trajectory, x))  # store state history

        # if show_animation and start == 0:
        draw_dynamic_search(best_trajectory, x, goal2, ob)
        # if start == 1 and show_animation:
        #     draw_dynamic_search(best_trajectory, x, goal2, ob)

        # check goal
        if math.sqrt((x[0] - goal2[0]) ** 2 + (x[1] - goal2[1]) ** 2) <= config.robot_radius:
            print("Goal1!")
            start = 1
        #     #
        # if math.sqrt((x[0] - goal2[0]) ** 2 + (x[1] - goal2[1]) ** 2) <= config.robot_radius:
        #     print("Goal2!")
            break

    print("Done")

    # draw_path(trajectory, goal, ob, x)
    draw_path(trajectory, goal2, ob, x)


def draw_dynamic_search(best_trajectory, x, goal, ob):
    """

    :return:
    """
    plt.cla()  #
    plt.plot(best_trajectory[:, 0], best_trajectory[:, 1], "-g")
    plt.plot(x[0], x[1], "xr")
    plt.plot(0, 0, "og")
    plt.plot(goal[0], goal[1], "ro")
    plt.plot(ob[:, 0], ob[:, 1], "bs")
    plot_arrow(x[0], x[1], x[2])
    plt.axis("equal")
    plt.grid(True)
    plt.pause(0.0001)


def draw_path(trajectory, goal, ob, x):
    """

    :return:
    """
    plt.cla()  #

    plt.plot(x[0], x[1], "xr")
    plt.plot(0, 0, "og")
    plt.plot(goal[0], goal[1], "ro")
    plt.plot(ob[:, 0], ob[:, 1], "bs")
    plot_arrow(x[0], x[1], x[2])
    plt.axis("equal")
    plt.grid(True)
    plt.plot(trajectory[:, 0], trajectory[:, 1], 'r')
    plt.show()


if __name__ == '__main__':
    main()