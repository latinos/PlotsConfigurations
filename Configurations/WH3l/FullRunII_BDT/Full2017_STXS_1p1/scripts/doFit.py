#!/bin/python

import os

if os.path.exists('HTXS_stage1_categories.py') :
  handle = open('HTXS_stage1_categories.py','r')
  exec(handle)
  handle.close()

sampleNames = []
for cat in HTXSStage1_1Categories:
  if 'QQ2HLNU_' in cat:
    sampleNames.append(cat.replace('QQ2HLNU','WH_hww'))
    #sampleNames.append(cat.replace('QQ2HLNU','WH_lep_htt'))

os.chdir('Combination')
'''
#No merging
command="combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Full2017_WH_3l_HTXS_Stage1_merged.root -t -1 --setParameters "
poi =''
for sample in sampleNames:
  if 'WH_hww' not in sample: continue
  if 'PTV_150_250_GE1J' in sample: continue
  if 'FWDH' in sample: continue
  command+="r_{}=1,".format(sample)

command = command[:-1]
print(command)
#os.system(command)
'''

#Merge some bins
command="combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Full2017_WH_3l_HTXS_Stage1_merged.root -t -1 --setParameters "
poi = ''
for sample in sampleNames:
  if 'WH_hww' not in sample: continue
  if 'FWDH' in sample: continue
  if 'GE1J' in sample: continue
  if ('PTV_0_75' in sample or 'PTV_75_150' in sample): poi = 'r_WH_hww_LE150'
  if ('PTV_150_250_0J' in sample or 'PTV_GT250' in sample): poi = 'r_WH_hww_GE150'
  #else: poi = 'r_'+sample

  command+="{}=1,".format(poi)

command = command[:-1]
command+=' > fitresults.txt'
print command
os.system(command)
os.system('cat fitresults.txt |grep 68% | sed \'s/(68%)/ /g\' |tr -d \'-\'| tr -d \'/\' | tr -d ":" | sed \'s/+/ /g\' > fit.txt')
os.system('awk \'{ print $0 $1 }\' < fit.txt | sed \'s/r_ggH_hww/ggH/g\' | sort -b > fit_ready.txt')
os.system('cat fit_ready.txt')
