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

sampleNames.append('ggH_hww_PTH_200_300')
sampleNames.append('ggH_hww_PTH_300_450')
sampleNames.append('ggH_hww_PTH_450_650')
sampleNames.append('ggH_hww_PTH_GT650')

os.chdir('../allcards')

#almost no merging
command="text2workspace.py allyears_ggH_HTXS_Stage1p2.txt -o allyears_ggH_HTXS_Stage1p2_merged.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose "
poi=''
for sample in sampleNames:
  if 'ggH_hww' not in sample: continue
  if 'FWDH' in sample: continue
  if 'GT200' in sample: continue

  if (sample in ['ggH_hww_PTH_300_450','ggH_hww_PTH_450_650','ggH_hww_PTH_GT650']): poi = 'r_ggH_hww_PTH_GT300'
  elif ('MJJ_0_350_PTH_0_60' in sample or 'MJJ_0_350_PTH_60_120' in sample): poi = 'r_ggH_hww_GE2J_MJJ_0_350_PTH_LT120'  
  elif ('MJJ_350_700' in sample): poi = 'r_ggH_hww_GE2J_MJJ_350_700'
  elif ('MJJ_GT700' in sample): poi = 'r_ggH_hww_GE2J_MJJ_GT700'
  else: poi = 'r_'+sample

  command+="--PO 'map=.*/{}:{}[1,-10,10]' ".format(sample,poi)

print command
os.system(command)
'''
#Merge some bins
command="text2workspace.py allyears_ggH_HTXS_Stage1p2.txt -o allyears_ggH_HTXS_Stage1p2_merged.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose "
poi=''
for sample in sampleNames:
  if 'ggH_hww' not in sample: continue
  if 'FWDH' in sample: continue 
  if 'GT200' in sample: continue

  if '0J' in sample: poi = 'r_ggH_hww_0J'
  elif ('1J_PTH_60_120' in sample or '1J_PTH_120_200' in sample): poi = 'r_ggH_hww_1J_PTH_GT60'
  elif ('MJJ_350_700' in sample or 'MJJ_GT700' in sample): poi = 'r_ggH_hww_GE2J_MJJ_GT350'
  elif ('MJJ_0_350_PTH_0_60' in sample or 'MJJ_0_350_PTH_60_120' in sample): poi = 'r_ggH_hww_GE2J_MJJ_0_350_PTH_LT120'
  elif 'MJJ_0_350_PTH_120_200' in sample: poi = 'r_ggH_hww_GE2J_MJJ_0_350_PTH_GT120'
  elif 'ggH_hww_PTH' in sample: poi = 'r_ggH_hww_PTH_GT200'
  else: poi = 'r_'+sample

  command+="--PO 'map=.*/{}:{}[1,-10,10]' ".format(sample,poi)
#  command+="--PO 'map=.*/{}:{}[1,-5,5]' ".format(sample,poi)

print command
os.system(command)
'''

#Merge all bins
command="text2workspace.py allyears_ggH_HTXS_Stage1p2.txt -o allyears_ggH_HTXS_Stage1p2_onePOI.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose "
poi=''
for sample in sampleNames:
  if 'FWDH' in sample: continue
  else: poi = 'r_ggH_hww'

  command+="--PO 'map=.*/{}:{}[1,-10,10]' ".format(sample,poi)

print command
os.system(command)

