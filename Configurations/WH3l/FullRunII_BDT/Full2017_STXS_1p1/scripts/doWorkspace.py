#!/bin/python

import os

#if os.path.exists('HTXS_stage1_categories.py') :
#  handle = open('HTXS_stage1_categories.py','r')
#  exec(handle)
#  handle.close()

sampleNames = ['WH_hww_PTV_LT150','WH_hww_PTV_GT150']
#for cat in HTXSStage1_1Categories:
#  if 'QQ2HLNU_' in cat:
#    sampleNames.append(cat.replace('QQ2HLNU','WH_hww'))
#    #sampleNames.append(cat.replace('QQ2HLNU','WH_lep_htt'))
      
os.chdir('Combination')

#No merging
command="text2workspace.py Full2017_WH_3l_HTXS_Stage1.txt -o Full2017_WH_3l_HTXS_Stage1.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose "
for sample in sampleNames:
  if 'WH_hww' not in sample: continue
  if 'FWDH' in sample: continue
  command+="--PO 'map=.*/{}:r_{}[1,-10,10]' ".format(sample,sample)

print command
os.system(command)


#Merge some bins
#command="text2workspace.py Full2016_WH_3l_HTXS_Stage1.txt -o Full2016_WH_3l_HTXS_Stage1_merged.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose "
#poi=''
#for sample in sampleNames:
#  if 'WH_hww' not in sample: continue
#  if 'FWDH' in sample: continue
#  if 'GE1J' in sample: continue
#  if ('PTV_0_75' in sample or 'PTV_75_150' in sample): 
#    poi = 'r_WH_hww_LE150'
#  elif ('PTV_150_250_0J' in sample or 'PTV_150_250_GE1J' in sample or 'PTV_GT250' in sample): 
#    poi = 'r_WH_hww_GE150'
#  else: poi = 'r_'+sample
  
#  command+="--PO 'map=.*/{}:{}[1,-10,10]' ".format(sample,poi)

#print command
#os.system(command)

#text2workspace.py Full2016_WH_3l_HTXS_Stage1.txt -o Full2016_WH_3l_HTXS_Stage1_merged.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/WH_hww_PTV_GT250:r_WH_hww_GE150[1,-10,10]' --PO 'map=.*/WH_hww_PTV_75_150:r_WH_hww_LE150[1,-10,10]' --PO 'map=.*/WH_hww_PTV_0_75:r_WH_hww_LE150[1,-10,10]' --PO 'map=.*/WH_hww_PTV_150_250_0J:r_WH_hww_GE150[1,-10,10]'
