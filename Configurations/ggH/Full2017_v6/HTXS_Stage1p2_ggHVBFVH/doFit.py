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

os.chdir('Combination_22May/')

sampleNames.append('ggH_hww_PTH_200_300')
sampleNames.append('ggH_hww_PTH_300_450')
sampleNames.append('ggH_hww_PTH_450_650')
sampleNames.append('ggH_hww_PTH_GT650')
'''
#No merging
command="combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Full2017_ggH_HTXS_Stage1p2.root -t -1  --setParameters "
for sample in sampleNames:
  if 'ggH_hww' not in sample: continue
  if 'FWDH' in sample: continue
  if 'GT200' in sample: continue

  command+="r_{}=1,".format(sample)

command = command[:-1]
#cwd=os.getcwd()
#os.system('cd Combination')

print command
os.system(command)
'''

#Merge some bins
#command="combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic --cminDefaultMinimizerStrategy=0 Full2017_ggH_HTXS_Stage1p2_2j_merged.root -t -1 --setParameters "
command="combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Full2017_ggH_HTXS_Stage1p2_2j_merged.root -t -1 --freezeParameters 'rgx{.*}' --setParameters "
#--freezeParameters CMS_hww_WWresum_0j 

poi = ''
for sample in sampleNames:
#  if 'ggH_hww' not in sample: continue
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
 
    #else: poi = 'r_'+sample

  elif 'qqH_hww' in sample:
    #if (sample in ['qqH_hww_0J','qqH_hww_1J','qqH_hww_MJJ_0_60','qqH_hww_MJJ_60_120','qqH_hww_MJJ_120_350']): poi = 'r_qqH_hww_MJJ_LT350'
    #if (sample in ['qqH_hww_MJJ_120_350']): poi = 'r_qqH_hww_MJJ_LT350'
    if 'MJJ_350_700' in sample: poi = 'r_qqH_hww_MJJ_350_700_PTH_LT200'
    elif 'MJJ_GT700' in sample: poi = 'r_qqH_hww_MJJ_GT700_PTH_LT200'
    elif 'MJJ_GT350_PTH_GT200' in sample: poi = 'r_qqH_hww_MJJ_GT350_PTH_GT200' 
    else: continue
#    else: poi = 'r_'+sample

  elif 'WH_had_hww_MJJ_60_120' in sample or 'ZH_had_hww_MJJ_60_120' in sample: poi = 'r_VH_had_hww_MJJ_60_120'

  else: continue

  command+="{}=1,".format(poi)

command = command[:-1]
print command
os.system(command)
'''

##Merge all bins
#command="combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Full2017_ggH_HTXS_Stage1p2_2j_onePOI.root -t -1 --setParameters r_ggh=1,r_qqh=1 "
command="combine -M Significance Full2017_ggH_HTXS_Stage1p2_2j_onePOI.root -t -1 --setParameters r_ggh=1,r_qqh=1 --redefineSignalPOIs=r_qqh >> significance_onePOI_qqh.txt "

#poi = ''
#for sample in sampleNames:
#  if 'FWDH' in sample: continue
#  else: poi = 'r_ggH_hww'
#  
#  command+="{}=1,".format(poi)

command = command[:-1]
print command
os.system(command)
'''

##Merge all bins
#command="combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Full2017_ggH_HTXS_Stage1p2_onePOI.root -t -1 --setParameters "
#poi = ''
#for sample in sampleNames:
#  if 'FWDH' in sample: continue
#  else: poi = 'r_ggH_hww'
#  
#  command+="{}=1,".format(poi)
#
#command = command[:-1]
#print command
#os.system(command)
#
#

