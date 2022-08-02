import ROOT as R 
import sys 
# import numpy as np

f = R.TFile(sys.argv[1])
name = sys.argv[2]

t = f.Get("limit")

t.Draw("r:2*deltaNLL","","goff")

N = t.GetSelectedRows()
mup = t.GetV1()
Lp = t.GetV2()
mu =[ mup[i] for i in range(N)]
L = [ Lp[i] for i in range(N)]

x1, x2, xb =1.,1.,-1


for x,y in zip(mu, L):
    if y ==0 :
        xb = x 


minleft , minright = 100,100 
for x,y in zip(mu, L):
    if x<xb:
        if (abs(y-1)< minleft): 
            x1 = x
            minleft = abs(y-1)
    if x>xb:
        if (abs(y-1)< minright): 
            x2 = x
            minright = abs(y-1)

print ("{} {:.3f} {:.3f} {:.3f} {}".format(name, xb, abs(x1-xb), abs(x2-xb), name))