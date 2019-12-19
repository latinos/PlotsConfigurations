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

#No merging
command="combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Full2016_WH3l_HTXS_Stage1.root -t -1 --setParameters "
poi =''
for sample in sampleNames:
  if 'WH_hww' not in sample: continue
  if 'PTV_150_250_GE1J' in sample: continue
  if 'FWDH' in sample: continue
  command+="r_{}=1,".format(sample)

command = command[:-1]
print(command)
os.system(command)

'''
#Merge some bins
command="combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Full2017_ggH_HTXS_Stage1_merged.root -t -1 --setParameters "
poi = ''
for sample in sampleNames:
  if 'ggH_hww' not in sample: continue

  if 'GE2J' in sample: poi = 'r_ggH_hww_GE2J'
  elif 'VBFTOPO' in sample: poi = 'r_ggH_hww_VBFTOPO'
  elif ('1J_PTH_120_200' in sample or '1J_PTH_GT200' in sample): poi = 'r_ggH_hww_1J_PTH_GT120'
  else: poi = 'r_'+sample
  
  command+="{}=1,".format(poi)

command = command[:-1]
os.system(command)
'''
