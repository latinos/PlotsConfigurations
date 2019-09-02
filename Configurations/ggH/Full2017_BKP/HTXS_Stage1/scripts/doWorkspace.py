#!/bin/python

import os

if os.path.exists('HTXS_stage1_categories.py') :
  handle = open('HTXS_stage1_categories.py','r')
  exec(handle)
  handle.close()

sampleNames = []
for cat in HTXSStage1Categories:
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

os.chdir('Combination')

#No merging
command="text2workspace.py Full2017_ggH_HTXS_Stage1.txt -o Full2017_ggH_HTXS_Stage1.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose "
for sample in sampleNames:
  if 'ggH_hww' not in sample: continue
  
  command+="--PO 'map=.*/{}:r_{}[1,-10,10]' ".format(sample,sample)

print command
os.system(command)

#Merge some bins
command="text2workspace.py Full2017_ggH_HTXS_Stage1.txt -o Full2017_ggH_HTXS_Stage1_merged.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose "
poi=''
for sample in sampleNames:
  if 'ggH_hww' not in sample: continue

  if 'GE2J' in sample: poi = 'r_ggH_hww_GE2J'
  elif 'VBFTOPO' in sample: poi = 'r_ggH_hww_VBFTOPO'
  elif ('1J_PTH_120_200' in sample or '1J_PTH_GT200' in sample): poi = 'r_ggH_hww_1J_PTH_GT120'
  else: poi = 'r_'+sample

  command+="--PO 'map=.*/{}:{}[1,-10,10]' ".format(sample,poi)

print command
os.system(command)

