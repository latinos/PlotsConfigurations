#!/bin/python

import os, sys

if "nano_STXS_1p1" not in os.getcwd().split('/')[-1]:
    print "please launch the script under the directory Full201Xnano_STXS_1p1"
    sys.exit()

comfile = os.getcwd().split('/')[-4].replace("_","")+"_"+os.getcwd().split('/')[-1]

SIGNAL = [ 'WH_hww' , 'ZH_hww' , 'ggZH_hww' ]
STXSBINS = [ 'PTV_LT150' , 'PTV_GT150' ]
POI=[]
for signal in SIGNAL:
    for stxs in STXSBINS:
        if 'ZH' in os.getcwd().split('/')[-4]:
            if 'WH' in signal: continue
            POI.append('%s_%s' %(signal,stxs))
        elif 'WH' in os.getcwd().split('/')[-4]:
            if 'ZH' in signal: continue
            POI.append('%s_%s' %(signal,stxs))

os.chdir('Combination')

#No merging
command="text2workspace.py "+comfile+".txt -o "+comfile+".root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose "
for poi in POI:
    command+="--PO 'map=.*/{}:r_{}[1,-10,10]' ".format(poi,poi)
print command
os.system(command)
