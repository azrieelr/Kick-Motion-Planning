from Bezier import Bezier
import numpy as np
from numpy import savetxt
from numpy import array as a
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from matplotlib.animation import FuncAnimation

## Set Up Figure ##
fig = plt.figure(figsize=plt.figaspect(.5))

points_set_1 = a([[-20, -7.5, 13.5], [-10, -7.5, 8], [40, -7.5, 8], [60, -7.5, 10.5]])
t_points = np.arange(0, 1, 0.01)
curve_set_1 = Bezier.Curve(t_points, points_set_1)
points_set_2 = a([[37, -7.5, 9], [130, -7.5, 9]])
t_points = np.arange(0, 1, 0.05)
curve_set_2 = Bezier.Curve(t_points, points_set_2)
points_set_3 = a([[113, -8, 9], [113, -7, 9]])
t_points = np.arange(0, 1, 0.01)
curve_set_3 = Bezier.Curve(t_points, points_set_3)
#np.savetxt('GerakBola1.csv', curve_set_2, fmt = '%s', delimiter=",")

fig1 = plt.figure(1)
ax = plt.axes(projection='3d')
ax.plot(curve_set_1[:, 0], curve_set_1[:, 1], curve_set_1[:, 2])
ax.plot(curve_set_2[:, 0], curve_set_2[:, 1], curve_set_2[:, 2], '-o')
ax.plot(curve_set_3[:, 0], curve_set_3[:, 1], curve_set_3[:, 2])
ax.set_title('Ball Direction After Kicking Variations 25-10')
ax.set_xlabel('$x$')
ax.set_ylabel('$y$')
# change fontsize
for t in ax.zaxis.get_major_ticks(): t.label.set_fontsize(10)
# disable auto rotation
ax.zaxis.set_rotate_label(False) 
ax.set_zlabel('$z$', rotation = 0)
ax.set_ylim([-8, -7])
plt.legend(['Kicking Motion', 'Ball Direction', 'Goal Line'], loc='upper right')

fig = plt.figure(figsize=plt.figaspect(.5))

points_set_1 = a([[-20, -7.5, 13.5], [-10, -7.5, 8], [40, -7.5, 8], [60, -7.5, 10.5]])
t_points = np.arange(0, 1, 0.01)
curve_set_1 = Bezier.Curve(t_points, points_set_1)
points_set_2 = a([[37, -7.5, 9], [80, -7.3, 9], [125, -7.2, 9]])
t_points = np.arange(0, 1, 0.05)
curve_set_2 = Bezier.Curve(t_points, points_set_2)
points_set_3 = a([[113, -8, 9], [113, -7, 9]])
t_points = np.arange(0, 1, 0.01)
curve_set_3 = Bezier.Curve(t_points, points_set_3)
#np.savetxt('GerakBola2.csv', curve_set_2, fmt = '%s', delimiter=",")

fig2 = plt.figure(2)
ax = plt.axes(projection='3d')
ax.plot(curve_set_1[:, 0], curve_set_1[:, 1], curve_set_1[:, 2])
ax.plot(curve_set_2[:, 0], curve_set_2[:, 1], curve_set_2[:, 2], '-o')
ax.plot(curve_set_3[:, 0], curve_set_3[:, 1], curve_set_3[:, 2])
ax.set_title('Ball Direction After Kicking Variations 50-15')
ax.set_xlabel('$x$')
ax.set_ylabel('$y$')
#change fontsize
for t in ax.zaxis.get_major_ticks(): t.label.set_fontsize(10)
#disable auto rotation
ax.zaxis.set_rotate_label(False) 
ax.set_zlabel('$z$', rotation = 0)
ax.set_ylim([-8, -6.9])
plt.legend(['Kicking Motion', 'Ball Direction', 'Goal Line'], loc='upper right')

fig = plt.figure(figsize=plt.figaspect(.5))

points_set_1 = a([[0, -7.5, 9.5], [10, -7.5, 9], [40, -7.5, 9], [50, -7.5, 9.2]])
t_points = np.arange(0, 1, 0.01)
curve_set_1 = Bezier.Curve(t_points, points_set_1)
points_set_2 = a([[37, -7.5, 9], [80, -7.4, 9], [120, -7.3, 9]])
t_points = np.arange(0, 1, 0.05)
curve_set_2 = Bezier.Curve(t_points, points_set_2)
points_set_3 = a([[113, -8, 9], [113, -7, 9]])
t_points = np.arange(0, 1, 0.01)
curve_set_3 = Bezier.Curve(t_points, points_set_3)
#np.savetxt('GerakBola3.csv', curve_set_2, fmt = '%s', delimiter=",")

fig3 = plt.figure(3)
ax = plt.axes(projection='3d')
ax.plot(points_set_1[:, 0], points_set_1[:, 1], points_set_1[:, 2])
ax.plot(curve_set_2[:, 0], curve_set_2[:, 1], curve_set_2[:, 2], '-o')
ax.plot(curve_set_3[:, 0], curve_set_3[:, 1], curve_set_3[:, 2])
ax.set_title('Arah Bola Setelah Menendang Tanpa Bezier')
ax.set_xlabel('$x$')
ax.set_ylabel('$y$')
#change fontsize
for t in ax.zaxis.get_major_ticks(): t.label.set_fontsize(10)
#disable auto rotation
ax.zaxis.set_rotate_label(False) 
ax.set_zlabel('$z$', rotation = 0)
ax.set_ylim([-8, -7])
plt.legend(['Gerak Menendang', 'Arah bola', 'Garis Gawang'], loc='upper right')

plt.show()