#!/usr/bin env python

scaleUnc = {1000: 
            {"up": [1.0, 0.932801544666, 0.686887860298, 0.683348536491],
             "do": [1.0, 1.07134735584, 1.65871071815, 1.68442952633]
            },
            2000 :
            {"up": [1.0, 0.864271104336, 0.625839948654, 0.624607920647],
             "do": [1.0, 0.917300820351, 1.47475910187, 1.48835909367]
            }, 
            200 :
            {"up": [1.0, 0.922315955162, 0.691816151142, 0.661118149757],
             "do": [1.0, 1.03203868866, 1.53590130806, 1.61896574497]
            }, 
            3000 :
            {"up": [1.0, 0.882398068905, 0.628052890301, 0.626575350761],
             "do": [1.0, 0.985951781273, 1.65007591248, 1.6384768486]
            }, 
            300  :
            {"up": [1.0, 0.905074596405, 0.669205188751, 0.649496674538],
             "do": [1.0, 1.07495331764, 1.56859827042, 1.62269902229]
            },
            500 :
            {"up": [1.0, 0.915703773499, 0.66854339838, 0.661232233047],
             "do": [1.0, 1.10617852211, 1.63316297531, 1.6953394413],
            }, 
            700:
            {"up": [1.0, 0.925199747086, 0.681025445461, 0.677552878857],
             "do": [1.0, 1.07631421089, 1.62018072605, 1.66252076626]
            }
}

from scipy.interpolate import interp1d
import numpy as np
import ROOT
functionsUp=[]
functionsDo=[]

for i in range(4):
  x=[]
  yUp=[]
  yDo=[]
  for mass in  scaleUnc.keys():
    x.append(float(mass))
    yUp.append(scaleUnc[mass]["up"][i])
    yDo.append(scaleUnc[mass]["do"][i])

  functionsUp.append(interp1d(x, yUp, kind='linear'))
  functionsDo.append(interp1d(x, yDo, kind='linear'))

xnew=np.linspace(200, 3000, 101)
ynewUp=(functionsUp[3])(xnew)
ynewDo=(functionsDo[3])(xnew)

gUp = ROOT.TGraph(len(xnew), xnew,ynewUp)
gDo = ROOT.TGraph(len(xnew), xnew,ynewDo)
gUp.Draw("AL")
gUp.GetYaxis().SetRangeUser(0., 2)
gDo.Draw("L")


a=raw_input("ciao")
