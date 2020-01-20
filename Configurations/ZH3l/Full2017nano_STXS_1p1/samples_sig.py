import os

global getSampleFiles
from LatinoAnalysis.Tools.commonTools import getSampleFiles, addSampleWeight, getBaseWnAOD

def getSampleFilesNano(inputDir,Sample,absPath=False):
    return getSampleFiles(inputDir,Sample,absPath,'nanoLatino_')

##############################################
###### Tree Directory according to site ######
##############################################

treeBaseDir = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/"

directoryMC     = os.path.join(treeBaseDir,"Fall2017_102X_nAODv5_SigOnly_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5")

################################################
############### WP #############################
################################################

#2017
eleWP = 'mvaFall17V1Iso_WP90'
muWP = 'cut_Tight_HWWW'

LepWPCut        = 'LepCut3l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF3l__ele_'+eleWP+'__mu_'+muWP

################################################
############ basic mc weights ##################
################################################

XSweight  = 'XSWeight'
SFweight  = 'SFweight3l*'+LepWPweight+'*'+LepWPCut+'*PrefireWeight*btagSF'

GenLepMatch3l = 'GenLepMatch3l'

METFilter_MC   = 'METFilter_MC'

####################################
############# Signal ###############
####################################

samples['ZH_hww']  = {  'name': getSampleFilesNano(directoryMC,'HZJ_HToWW_M125'),
                        'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                        'suppressNegativeNuisances' :['all'],
                        'FilesPerJob' : 3,
                        'subsamples' : { 'PTV_LT150' : 'HTXS_stage1_1_cat_pTjet30GeV==401 || HTXS_stage1_1_cat_pTjet30GeV==402',
                                         'PTV_GT150' : 'HTXS_stage1_1_cat_pTjet30GeV==403 || HTXS_stage1_1_cat_pTjet30GeV==404 || HTXS_stage1_1_cat_pTjet30GeV==405',
                                         'FWDH'      : 'HTXS_stage1_1_cat_pTjet30GeV==400'
                                       }
                    }

samples['ggZH_hww'] = {  'name': getSampleFilesNano(directoryMC,'GluGluZH_HToWW_M125'),
                         'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                         'suppressNegativeNuisances' :['all'],
                         'FilesPerJob' : 3,
                        'subsamples' : { 'PTV_LT150' : 'HTXS_stage1_1_cat_pTjet30GeV==501 || HTXS_stage1_1_cat_pTjet30GeV==502',
                                         'PTV_GT150' : 'HTXS_stage1_1_cat_pTjet30GeV==503 || HTXS_stage1_1_cat_pTjet30GeV==504 || HTXS_stage1_1_cat_pTjet30GeV==505',
                                         'FWDH'      : 'HTXS_stage1_1_cat_pTjet30GeV==500'
                                       }
                     }

#if os.path.exists('HTXS_stage1_categories.py') :
#    handle = open('HTXS_stage1_categories.py','r')
#    exec(handle)
#    handle.close()
 
#samples['ZH_hww']['subsamples'] = {}
#for cat,num in HTXSStage1_1Categories.iteritems():
#    if 'QQ2HLL' in cat:
#        samples['ZH_hww']['subsamples'][cat.replace('QQ2HLL_','')] = 'HTXS_stage1_1_cat_pTjet30GeV=='+str(num)
 
#samples['ggZH_hww']['subsamples'] = {}
#for cat,num in HTXSStage1_1Categories.iteritems():
#    if 'GG2HLL' in cat:
#        samples['ggZH_hww']['subsamples'][cat.replace('GG2HLL_','')] = 'HTXS_stage1_1_cat_pTjet30GeV=='+str(num)

