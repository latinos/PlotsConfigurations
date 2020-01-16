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

MERGE=True
command=''

if not MERGE:
  #No merging, 
  command="text2workspace.py Full2017_WH_SS_HTXS_Stage1.txt -o Full2017_WH_SS_HTXS_Stage1.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose "
  poi=''
  for sample in sampleNames:
    if 'FWDH' in sample: continue
    #if 'GT250' in sample: continue
    #if 'PTV_150_250_GE1J' in sample: continue
    poi = 'r_'+sample
    command+="--PO 'map=.*/{}:{}[1,-10,10]' ".format(sample,poi)
else:
  #Merge bin
  command="text2workspace.py Full2017_WH_SS_HTXS_Stage1.txt -o Full2017_WH_SS_HTXS_Stage1_merged.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose "
  poi=''
  for sample in sampleNames:
    if 'WH_hww' not in sample: continue
    if 'FWDH' in sample: continue
    if ('PTV_0_75' in sample or 'PTV_75_150' in sample):
      poi = 'r_WH_hww_LE150'
    elif ('PTV_150_250_0J' in sample or 'PTV_150_250_GE1J' in sample or 'PTV_GT250' in sample):
      poi = 'r_WH_hww_GE150'
    else: poi = 'r_'+sample

    command+="--PO 'map=.*/{}:{}[1,-10,10]' ".format(sample,poi)

# WARNING: underflow constraint pdf prop_binuu_2j_PTV_GT250_bin4_H_htt_Pdf, value = 0
command+="--PO 'map=uu_2j_PTV_GT250/H_htt:0'"
print command
os.system(command)
