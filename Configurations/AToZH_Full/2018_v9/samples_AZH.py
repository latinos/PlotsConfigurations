import os
import subprocess

global getSampleFiles
from LatinoAnalysis.Tools.commonTools import getSampleFiles, addSampleWeight, getBaseWnAOD
def getSampleFilesNano(inputDir,Sample,absPath=False):
    return getSampleFiles(inputDir,Sample,absPath,'nanoLatino_')
##############################################
###### Tree Directory according to site ######
##############################################

SITE=os.uname()[1]
xrootdPath=''
if    'iihe' in SITE :
  xrootdPath  = 'dcap://maite.iihe.ac.be/'
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/'
elif  'cern' in SITE :
  #xrootdPath='root://eoscms.cern.ch/'
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'

directory = treeBaseDir+'Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9__btagULFix'

################################################
############ NUMBER OF LEPTONS #################
################################################

#Nlep='2'
Nlep='3'
#Nlep='4'
ZZWeight='1.07'

################################################
############### Lepton WP ######################
################################################

eleWP_new = 'mvaFall17V2Iso_WP90_tthmva_70'
muWP_new  = 'cut_Tight_HWWW_tthmva_80'

LepWPCut         = 'LepCut'+Nlep+'l__ele_'+eleWP_new+'__mu_'+muWP_new  
LepWPweight      = 'LepSF'+Nlep+'l__ele_'+eleWP_new+'__mu_'+muWP_new

################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut+'*Jet_PUIDSF'
PromptGenLepMatch   = 'PromptGenLepMatch'+Nlep+'l'
PromptGenLepMatch2l   = 'PromptGenLepMatch'+'2l'
PromptGenLepMatch3l   = 'PromptGenLepMatch'+'3l'

################################################
############## FAKE WEIGHTS ####################
################################################


if Nlep == '2' :
  fakeW = 'fakeW2l_ele_'+eleWP_new+'_mu_'+muWP_new
else:
  fakeW = 'fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_'+Nlep+'l'

################################################
############### B-Tag  WP ######################
################################################

SFweight += '*btagSF' #define in aliases.py

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['A','Run2018A-UL2018-v1'],
    ['B','Run2018B-UL2018-v1'],
    ['C','Run2018C-UL2018-v1'],
    ['D','Run2018D-UL2018-v1'],
]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','EGamma']

DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
	    'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
            'EGamma'         : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && (Trigger_sngEl || Trigger_dblEl)' ,
            }




##########################################
################ SIGNALS #################
##########################################
samples['AZH_1000_700'] = { 'name': ['###/eos/user/s/srudrabh/AZH/postprocessing/AZH_UL_Private/Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn/nanoLatino_AToZHToLLTTbar_MA-1000_MH-700__part0.root',],
                         'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
}


samples['AZH_1200_1000'] = { 'name': ['###/eos/user/s/srudrabh/AZH/postprocessing/AZH_UL_Private/Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn/nanoLatino_AToZHToLLTTbar_MA-1200_MH-1000__part0.root',],
                         'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
}


samples['AZH_500_350'] = { 'name': ['###/eos/user/s/srudrabh/AZH/postprocessing/AZH_UL_Private/Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn/nanoLatino_AToZHToLLTTbar_MA-500_MH-350__part0.root',],
                         'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
}

samples['AZH_700_350'] = { 'name': ['###/eos/user/s/srudrabh/AZH/postprocessing/AZH_UL_Private/Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn/nanoLatino_AToZHToLLTTbar_MA-700_MH-350__part0.root',],
                         'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
}

samples['AZH_700_400'] = { 'name': ['###/eos/user/s/srudrabh/AZH/postprocessing/AZH_UL_Private/Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn/nanoLatino_AToZHToLLTTbar_MA-700_MH-400__part0.root',],
                         'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
}

samples['AZH_900_350'] = { 'name': ['###/eos/user/s/srudrabh/AZH/postprocessing/AZH_UL_Private/Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn/nanoLatino_AToZHToLLTTbar_MA-900_MH-350__part0.root',],
                         'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
}

samples['AZH_900_400'] = { 'name': ['###/eos/user/s/srudrabh/AZH/postprocessing/AZH_UL_Private/Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn/nanoLatino_AToZHToLLTTbar_MA-900_MH-400__part0.root',],
                         'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
}


