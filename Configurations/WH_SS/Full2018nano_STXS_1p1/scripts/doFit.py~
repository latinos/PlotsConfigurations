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

MERGE=False

if not MERGE:
  #No merging
  command="combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Full2016_WH_SS_HTXS_Stage1.root -t -1 --setParameters "
  poi =''
  for sample in sampleNames:
    if 'FWDH' in sample: continue
    command+="r_{}=1,".format(sample)

else:
  #MERGE ALL BIN STXS
  command="combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Full2016_ggH_HTXS_Stage1p2_merged.root -t -1 --setParameters "
  poi = ''
  for sample in sampleNames:
    if 'FWDH' in sample: 
      continue
    else: 
      poi = 'r_wH_hww'
  
  command+="{}=1,".format(poi)

command = command[:-1]
print(command)
os.system(command)
