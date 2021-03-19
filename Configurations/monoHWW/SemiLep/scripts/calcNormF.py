import matplotlib
from matplotlib import cm
import matplotlib.pyplot as plt
#from matplotlib.colors import BoundaryNorm
#from matplotlib.ticker import MaxNLocator
import numpy as np
from mpl_toolkits.mplot3d import Axes3D

# 1 = W+jets CR
# 2 = top CR

data_1 = 74326.0 
data_2 = 34482.0

allMC_1 = 67165.3
allMC_2 = 30419.3

Wjets_1 = 29650.9
Wjets_2 = 2577.6

top_1 = 28581.1
top_2 = 24186.2

#data_2 = 74326.0 
#data_1 = 34482.0
#
#allMC_2 = 67165.3
#allMC_1 = 30419.3
#
#Wjets_2 = 29650.9
#Wjets_1 = 2577.6
#
#top_2 = 28581.1
#top_1 = 24186.2

rest_1 = -1.*(data_1 - allMC_1)
rest_2 = -1.*(data_2 - allMC_2)


b = ((rest_2 + Wjets_2 + top_2) - ((rest_1 + Wjets_1 + top_1)/Wjets_1))/(top_2*Wjets_2 - top_1*Wjets_2/Wjets_1)
a = (rest_1 + Wjets_1 + top_1 - b*top_1)/(Wjets_1)

print('Wjets SF = '+str(a) + ', top SF = '+str(b))


beta  = (data_2 - allMC_2 - ((data_1 - allMC_1)/Wjets_1))/(1. - top_1/Wjets_1)
alpha = (data_1 - allMC_1 - beta*top_1)/Wjets_1

a = 1. - alpha
b = 1. - beta

print('Wjets SF = '+str(a) + ', top SF = '+str(b))

#fig = plt.figure()
#fig, ax = plt.subplots(111, projection='3d')
fig, ax = plt.subplots(subplot_kw={"projection": "3d"})

Wscale = np.arange(0.9, 1.2, 0.005)
Tscale = np.arange(1., 1.3, 0.005)

Wn, Tn = np.meshgrid(Wscale, Tscale)


Z = np.log((data_1 - (allMC_1 - Wjets_1 + Wn*Wjets_1 - top_1 + Tn*top_1))**2 + (data_2 - (allMC_2 - Wjets_2 + Wn*Wjets_2 - top_2 + Tn*top_2))**2)

min_Z = Z.min()
min_idx = np.where(Z == min_Z)


print(Wn[min_idx[0], min_idx[1]], Tn[min_idx[0], min_idx[1]])

surf = ax.plot_surface(Wn, Tn, Z, cmap=cm.coolwarm)
ax.view_init(elev=90, azim=0)
plt.show()

