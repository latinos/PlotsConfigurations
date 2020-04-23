#!/bin/python

import os
comfile = os.getcwd().split('/')[-4]+"_"+os.getcwd().split('/')[-1]

#comfile="WHSS_Full2016nano_STXS_1p1"

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
command="combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic "+comfile+".root -t -1 --setParameters "
poi =''

for poi in POI:
    command+="r_{}=1,".format(poi)

command = command[:-1]
command+=' > fitresults.txt'

print(command)
os.system(command)

os.system('cat fitresults.txt |grep 68% | sed \'s/(68%)/ /g\' |tr -d \'-\'| tr -d \'/\' | tr -d ":" | sed \'s/+/ /g\' > fit.txt')
os.system('awk \'{ print $0 $1 }\' < fit.txt | sed \'s/r_ggH_hww/ggH/g\' | sort -b > fit_ready.txt')
os.system('cat fit_ready.txt')
