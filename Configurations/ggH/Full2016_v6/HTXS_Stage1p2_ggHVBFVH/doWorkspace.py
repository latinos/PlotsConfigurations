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

os.chdir('Combination_14Feb/')

sampleNames.append('ggH_hww_PTH_200_300')
sampleNames.append('ggH_hww_PTH_300_450')
sampleNames.append('ggH_hww_PTH_450_650')
sampleNames.append('ggH_hww_PTH_GT650')
'''
#No merging
command="text2workspace.py Full2017_ggH_HTXS_Stage1p2.txt -o Full2017_ggH_HTXS_Stage1p2.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose "
for sample in sampleNames:
  if 'ggH_hww' not in sample: continue
  if 'FWDH' in sample: continue
  if 'GT200' in sample: continue
  command+="--PO 'map=.*/{}:r_{}[1,-10,10]' ".format(sample,sample)

print command
os.system(command)
'''
#Merge some bins

precommand="cp Full2016_ggH_HTXS_Stage1p2_2j.txt Full2016_ggH_HTXS_Stage1p2_2j_EDIT.txt; "




precommand+='echo "nuisance edit drop Fake_em of2j_vbflike_mjj350_700_pthLT200 CMS_fake_e_2016" >> Full2016_ggH_HTXS_Stage1p2_2j_EDIT.txt;' 
precommand+='echo "nuisance edit drop Fake_em of2j_vbflike_mjj350_700_pthLT200 CMS_fake_m_2016" >> Full2016_ggH_HTXS_Stage1p2_2j_EDIT.txt;' 
precommand+='echo "nuisance edit drop Fake_em of2j_vbflike_mjj350_700_pthLT200 CMS_fake_stat_e_2016" >> Full2016_ggH_HTXS_Stage1p2_2j_EDIT.txt;' 
precommand+='echo "nuisance edit drop Fake_em of2j_vbflike_mjj350_700_pthLT200 CMS_fake_stat_m_2016" >> Full2016_ggH_HTXS_Stage1p2_2j_EDIT.txt;' 
precommand+='echo "nuisance edit drop Fake_me of2j_vbflike_mjj350_700_pthLT200 CMS_fake_e_2016" >> Full2016_ggH_HTXS_Stage1p2_2j_EDIT.txt;' 
precommand+='echo "nuisance edit drop Fake_me of2j_vbflike_mjj350_700_pthLT200 CMS_fake_m_2016" >> Full2016_ggH_HTXS_Stage1p2_2j_EDIT.txt;' 
precommand+='echo "nuisance edit drop Fake_me of2j_vbflike_mjj350_700_pthLT200 CMS_fake_stat_e_2016" >> Full2016_ggH_HTXS_Stage1p2_2j_EDIT.txt;' 
precommand+='echo "nuisance edit drop Fake_me of2j_vbflike_mjj350_700_pthLT200 CMS_fake_stat_m_2016" >> Full2016_ggH_HTXS_Stage1p2_2j_EDIT.txt;' 
precommand+='echo "nuisance edit drop VZ of_pth450_650 QCDscale_VV" >> Full2016_ggH_HTXS_Stage1p2_2j_EDIT.txt;' 

#precommand+='echo "nuisance edit drop VVV of2j_wwlike_mjjGT700_pthLT200 CMS_btag_cferr1" >> Full2017_ggH_HTXS_Stage1p2_EDIT.txt;' 
#precommand+='echo "nuisance edit drop Fake_me of_pth450_650_gghlike CMS_fake_e_2017" >> Full2017_ggH_HTXS_Stage1p2_EDIT.txt;' 
#precommand+='echo "nuisance edit drop Fake_me of_pth450_650_gghlike CMS_fake_m_2017" >> Full2017_ggH_HTXS_Stage1p2_EDIT.txt;' 
#precommand+='echo "nuisance edit drop Fake_em of_pth450_650_gghlike CMS_fake_e_2017" >> Full2017_ggH_HTXS_Stage1p2_EDIT.txt;' 
#precommand+='echo "nuisance edit drop Fake_em of_pth450_650_gghlike CMS_fake_m_2017" >> Full2017_ggH_HTXS_Stage1p2_EDIT.txt;' 
#precommand+='echo "nuisance edit drop Fake_me of_pth450_650_gghlike CMS_fake_stat_e_2017" >> Full2017_ggH_HTXS_Stage1p2_EDIT.txt;' 
#precommand+='echo "nuisance edit drop Fake_me of_pth450_650_gghlike CMS_fake_stat_m_2017" >> Full2017_ggH_HTXS_Stage1p2_EDIT.txt;' 
#precommand+='echo "nuisance edit drop Fake_em of_pth450_650_gghlike CMS_fake_stat_e_2017" >> Full2017_ggH_HTXS_Stage1p2_EDIT.txt;' 
#precommand+='echo "nuisance edit drop Fake_em of_pth450_650_gghlike CMS_fake_stat_m_2017" >> Full2017_ggH_HTXS_Stage1p2_EDIT.txt;' 
#precommand+='echo "nuisance edit drop Fake_me of_pthGT650_gghlike CMS_fake_e_2017" >> Full2017_ggH_HTXS_Stage1p2_EDIT.txt;' 
#precommand+='echo "nuisance edit drop Fake_me of_pthGT650_gghlike CMS_fake_m_2017" >> Full2017_ggH_HTXS_Stage1p2_EDIT.txt;' 
#precommand+='echo "nuisance edit drop Fake_em of_pthGT650_gghlike CMS_fake_e_2017" >> Full2017_ggH_HTXS_Stage1p2_EDIT.txt;' 
#precommand+='echo "nuisance edit drop Fake_em of_pthGT650_gghlike CMS_fake_m_2017" >> Full2017_ggH_HTXS_Stage1p2_EDIT.txt;' 
#precommand+='echo "nuisance edit drop Fake_me of_pthGT650_gghlike CMS_fake_stat_e_2017" >> Full2017_ggH_HTXS_Stage1p2_EDIT.txt;' 
#precommand+='echo "nuisance edit drop Fake_me of_pthGT650_gghlike CMS_fake_stat_m_2017" >> Full2017_ggH_HTXS_Stage1p2_EDIT.txt;' 
#precommand+='echo "nuisance edit drop Fake_em of_pthGT650_gghlike CMS_fake_stat_e_2017" >> Full2017_ggH_HTXS_Stage1p2_EDIT.txt;' 
#precommand+='echo "nuisance edit drop Fake_em of_pthGT650_gghlike CMS_fake_stat_m_2017" >> Full2017_ggH_HTXS_Stage1p2_EDIT.txt;' 


command="text2workspace.py Full2016_ggH_HTXS_Stage1p2_2j_EDIT.txt -o Full2016_ggH_HTXS_Stage1p2_2j_merged.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*mjjGT700.*/Vg:0' --PO 'map=.*pth450.*/Fake.*:0' --PO 'map=.*pthGT650.*/Fake.*:0' --PO 'map=.*pthGT200.*/Fake.*:0' --PO 'map=.*pthLT200.*/VVV.*:0' "
poi=''
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
    #else: poi = 'r_'+sample

  elif 'WH_had_hww_MJJ_60_120' in sample or 'ZH_had_hww_MJJ_60_120' in sample: poi = 'r_VH_had_hww_MJJ_60_120'

  else: continue

  #if '0J' in sample: poi = 'r_ggH_hww_0J'
  #elif ('1J_PTH_60_120' in sample or '1J_PTH_120_200' in sample): poi = 'r_ggH_hww_1J_PTH_GT60'
  #elif ('MJJ_350_700' in sample or 'MJJ_GT700' in sample): poi = 'r_ggH_hww_GE2J_MJJ_GT350'
  #elif ('MJJ_0_350_PTH_0_60' in sample or 'MJJ_0_350_PTH_60_120' in sample): poi = 'r_ggH_hww_GE2J_MJJ_0_350_PTH_LT120'
  #elif 'MJJ_0_350_PTH_120_200' in sample: poi = 'r_ggH_hww_GE2J_MJJ_0_350_PTH_GT120'
  #elif 'ggH_hww_PTH' in sample: poi = 'r_ggH_hww_PTH_GT200'
  #else: poi = 'r_'+sample

  print sample,"->",poi

  command+="--PO 'map=.*/{}:{}[1,-10,10]' ".format(sample,poi)
#  command+="--PO 'map=.*/{}:{}[1,-5,5]' ".format(sample,poi)

print precommand
os.system(precommand)

print command
os.system(command)
'''


#Merge all bins
command="text2workspace.py Full2016_ggH_HTXS_Stage1p2_2j_EDIT.txt -o Full2016_ggH_HTXS_Stage1p2_2j_onePOI.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/.*ggH_hww.*:r_ggh[1,-10,10]' --PO 'map=.*/.*qqH_hww.*:r_qqh[1,-10,10]' --PO verbose --PO 'map=.*mjjGT700.*/Vg:0' --PO 'map=.*pth450.*/Fake.*:0' --PO 'map=.*pthGT650.*/Fake.*:0' --PO 'map=.*pthGT200.*/Fake.*:0' --PO 'map=.*pthLT200.*/VVV.*:0' "

#poi=''
#for sample in sampleNames:
#  if 'FWDH' in sample: continue
#  else: poi = 'r_ggH_hww'
#
#  command+="--PO 'map=.*/{}:{}[1,-10,10]' ".format(sample,poi)

print command
os.system(command)



##Merge all bins
#command="text2workspace.py Full2017_ggH_HTXS_Stage1p2.txt -o Full2017_ggH_HTXS_Stage1p2_onePOI.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose "
#poi=''
#for sample in sampleNames:
#  if 'FWDH' in sample: continue
#  else: poi = 'r_ggH_hww'
#
#  command+="--PO 'map=.*/{}:{}[1,-10,10]' ".format(sample,poi)
#
#print command
#os.system(command)
#
'''
