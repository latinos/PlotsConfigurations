#!/bin/python

import os

if os.path.exists('HTXS_stage1_categories.py') :
  handle = open('HTXS_stage1_categories.py','r')
  exec(handle)
  handle.close()

sampleNames = []
for cat in HTXSStage1_1Categories:
  if 'GG2H_' in cat:
    sampleNames.append(cat.replace('GG2H','ggH_hww'))
    sampleNames.append(cat.replace('GG2H','ggH_htt'))
  elif 'QQ2HQQ_' in cat:
    sampleNames.append(cat.replace('QQ2HQQ','qqH_hww'))
    sampleNames.append(cat.replace('QQ2HQQ','qqH_htt'))
    sampleNames.append(cat.replace('QQ2HQQ','WH_had_hww'))
    sampleNames.append(cat.replace('QQ2HQQ','WH_had_htt'))
    sampleNames.append(cat.replace('QQ2HQQ','ZH_had_hww'))
    sampleNames.append(cat.replace('QQ2HQQ','ZH_had_htt'))
  elif 'QQ2HLNU_' in cat:
    sampleNames.append(cat.replace('QQ2HLNU','WH_lep_hww'))
    sampleNames.append(cat.replace('QQ2HLNU','WH_lep_htt'))
  elif 'QQ2HLL_' in cat:
    sampleNames.append(cat.replace('QQ2HLL','ZH_lep_hww'))
    sampleNames.append(cat.replace('QQ2HLL','ZH_lep_htt'))
  elif 'GG2HLL_' in cat:
    sampleNames.append(cat.replace('GG2HLL','ggZH_lep_hww'))
  elif 'TTH' in cat:
    sampleNames.append(cat.replace('TTH','ttH_hww'))
  elif 'BBH' in cat:
    sampleNames.append(cat.replace('BBH','bbH_hww'))

#os.chdir('Combination')
os.system("mkdir -p Combination")

sampleNames.append('ggH_hww_PTH_200_300')
sampleNames.append('ggH_hww_PTH_300_450')
sampleNames.append('ggH_hww_PTH_450_650')
sampleNames.append('ggH_hww_PTH_GT650')

# Print all samples                                                                                                                                                                                        
print("All samples:")
for s in sampleNames:
  print(s)
print("============")

#No merging
command="text2workspace.py Combination/Full2016_SF_qqH_HTXS_Stage1p2_v7.txt -o Combination/Full2016_SF_qqH_HTXS_Stage1p2_v7.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose "

poi=''
for sample in sampleNames:
  if 'FWDH' in sample: continue
  if 'htt' in sample: continue
 
  if 'ggH_hww' in sample:
    if 'GT200' in sample: continue

    if (sample in ['ggH_hww_PTH_300_450','ggH_hww_PTH_450_650','ggH_hww_PTH_GT650']): poi = 'r_ggH_hww_PTH_GT300'
    elif ('MJJ_0_350_PTH_0_60' in sample or 'MJJ_0_350_PTH_60_120' in sample): poi = 'r_ggH_hww_GE2J_MJJ_0_350_PTH_LT120'
    elif ('MJJ_350_700' in sample): poi = 'r_ggH_hww_GE2J_MJJ_350_700'
    elif ('MJJ_GT700' in sample): poi = 'r_ggH_hww_GE2J_MJJ_GT700'
    elif ('PTH_200_300' in sample): poi = 'r_ggH_hww_PTH_200_300'
    elif ('MJJ_0_350_PTH_120_200' in sample): poi = 'r_ggH_hww_GE2J_MJJ_0_350_PTH_120_200' 
    else: continue

  elif 'qqH_hww' in sample:
    if 'MJJ_350_700' in sample: poi = 'r_qqH_hww_MJJ_350_700_PTH_LT200'
    elif 'MJJ_GT700' in sample: poi = 'r_qqH_hww_MJJ_GT700_PTH_LT200'
    elif 'MJJ_GT350_PTH_GT200' in sample: poi = 'r_qqH_hww_MJJ_GT350_PTH_GT200'
    else: continue

  elif 'WH_had_hww_MJJ_60_120' in sample or 'ZH_had_hww_MJJ_60_120' in sample: poi = 'r_VH_had_hww_MJJ_60_120'

  else: continue

  print sample,"->",poi

  command+="--PO 'map=.*/{}:{}[1,-10,10]' ".format(sample,poi)

print command
os.system(command)
