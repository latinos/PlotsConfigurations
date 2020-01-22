#!/bin/python

import os

sampleNames = ['WH_hww_PTV_LT150','WH_hww_PTV_GT150']

os.chdir('Combination')

#No merging
command="combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Full2017_WH_3l_HTXS_Stage1.root -t -1 --setParameters "
poi =''
for sample in sampleNames:
  if 'WH_hww' not in sample: continue
  if 'FWDH' in sample: continue
  command+="r_{}=1,".format(sample)

command = command[:-1]
command+=' > fitresults.txt'

print(command)
os.system(command)

os.system('cat fitresults.txt |grep 68% | sed \'s/(68%)/ /g\' |tr -d \'-\'| tr -d \'/\' | tr -d ":" | sed \'s/+/ /g\' > fit.txt')
os.system('awk \'{ print $0 $1 }\' < fit.txt | sed \'s/r_ggH_hww/ggH/g\' | sort -b > fit_ready.txt')
os.system('cat fit_ready.txt')
