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
command=''

if not MERGE:
  #No merging, 
  command="text2workspace.py Full2018_WH_SS_HTXS_Stage1.txt -o Full2018_WH_SS_HTXS_Stage1.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose "
  poi=''
  for sample in sampleNames:
    if 'FWDH' in sample: continue
    #if 'GT250' in sample: continue
    #if 'PTV_150_250_GE1J' in sample: continue
    poi = 'r_'+sample
    command+="--PO 'map=.*/{}:{}[1,-10,10]' ".format(sample,poi)
else:
  #Merge bin
  command="text2workspace.py Full2018_ggH_HTXS_Stage1p2.txt -o Full2018_ggH_HTXS_Stage1p2_merged.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose "
  poi=''
  for sample in sampleNames:
    if 'FWDH' in sample: 
      continue
    else: poi ='r_WH_hww'
    command+="--PO 'map=.*/{}:{}[1,-10,10]' ".format(sample,poi)

print command
os.system(command)
