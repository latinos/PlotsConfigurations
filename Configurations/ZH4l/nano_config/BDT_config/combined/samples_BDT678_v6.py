import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

samples={}

skim=''
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

##directory = treeBaseDir+'Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/'+skim
directory1= treeBaseDir+'Summer16_102X_nAODv5_Full2016v6/MCl1loose2016v6__MCCorr2016v6__l2loose__l2tightOR2016v6/'+skim
directory2= treeBaseDir+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6/'+skim
directory3= treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6/'+skim
################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='4'
#Nlep='3'
#Nlep='4'

################################################
############### Lepton WP ######################
################################################

#eleWP='mva_90p_Iso2016'
eleWP='mva_90p_Iso2016'
#eleWP='mva_90p_Iso2016'
#eleWP='mvaFall17V2Iso_WP90_SS'
muWP='cut_Tight80x'

eleWP17='mvaFall17V1Iso_WP90'
muWP17='cut_Tight_HWWW'


LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP

LepWPCut17        = 'LepCut'+Nlep+'l__ele_'+eleWP17+'__mu_'+muWP17
LepWPweight17     = 'LepSF'+Nlep+'l__ele_'+eleWP17+'__mu_'+muWP17

################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut+'*PrefireWeight'
PromptGenLepMatch   = 'PromptGenLepMatch'+Nlep+'l'
PromptGenLepMatch2l   = 'PromptGenLepMatch'+'2l'
PromptGenLepMatch3l   = 'PromptGenLepMatch'+'3l'

XSWeight17      = 'XSWeight'
SFweight17      = 'SFweight'+Nlep+'l*'+LepWPweight17+'*'+LepWPCut17+'*PrefireWeight'
PromptGenLepMatch17   = 'PromptGenLepMatch'+Nlep+'l'
PromptGenLepMatch2l17   = 'PromptGenLepMatch'+'2l'
PromptGenLepMatch3l17   = 'PromptGenLepMatch'+'3l'

XSWeight18      = 'XSWeight'
SFweight18      = 'SFweight'+Nlep+'l*'+LepWPweight17+'*'+LepWPCut17
PromptGenLepMatch18   = 'PromptGenLepMatch'+Nlep+'l'
PromptGenLepMatch2l18   = 'PromptGenLepMatch'+'2l'
PromptGenLepMatch3l18   = 'PromptGenLepMatch'+'3l'

################################################
############## FAKE WEIGHTS ####################
################################################

if Nlep == '2' :
  fakeW = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP
else:
  fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l'


################################################
############### B-Tag  WP ######################
################################################

#FIXME b-tagging to be optimized
# Definitions in aliases.py


SFweight += '*btagSF'

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
            ['B','Run2016B-Nano14Dec2018_ver2-v1'] ,
            ['C','Run2016C-Nano14Dec2018-v1'] ,
            ['D','Run2016D-Nano14Dec2018-v1'] ,
            ['E','Run2016E-Nano14Dec2018-v1'] ,
            ['F','Run2016F-Nano14Dec2018-v1'] ,
            ['G','Run2016G-Nano14Dec2018-v1'] ,
            ['H','Run2016H-Nano14Dec2018-v1'] ,
          ]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']

DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
            'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
            'DoubleEG'       : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && Trigger_dblEl' ,
            'SingleElectron' : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && !Trigger_dblEl && Trigger_sngEl' ,
           }

###########################################
#############  BACKGROUNDS  ###############
###########################################



#################### ZZ ##############

samples['ZZ']  = {  'name'   :   getSampleFiles(directory1,'ZZTo4L_AMCNLOFXFX',False,'nanoLatino_')    
                              +getSampleFiles(directory1,'ggZZ2e2t',False,'nanoLatino_')
                              +getSampleFiles(directory1,'ggZZ2m2t',False,'nanoLatino_')
                              +getSampleFiles(directory1,'ggZZ2e2m',False,'nanoLatino_')
                              +getSampleFiles(directory1,'ggZZ4t',False,'nanoLatino_')
                              +getSampleFiles(directory1,'ggZZ4e',False,'nanoLatino_')
                              +getSampleFiles(directory1,'ggZZ4m',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                    'FilesPerJob' : 5,
                 }

samples['ZZ17']  = {  'name'   :   getSampleFiles(directory2,'ZZTo4L_ext1',False,'nanoLatino_')
                            #   +getSampleFiles(directory2,'ggZZ2e2t',False,'nanoLatino_')
                              +getSampleFiles(directory2,'ggZZ2m2t',False,'nanoLatino_')
                              +getSampleFiles(directory2,'ggZZ2e2m',False,'nanoLatino_')
                         #     +getSampleFiles(directory,'ggZZ4t',False,'nanoLatino_')
                         #     +getSampleFiles(directory,'ggZZ4e',False,'nanoLatino_')
                              +getSampleFiles(directory2,'ggZZ4m',False,'nanoLatino_'),
                    'weight' : XSWeight17+'*'+SFweight17+'*'+PromptGenLepMatch17+'*'+METFilter_MC ,
                    'FilesPerJob' : 5,
                 }

samples['ZZ18']  = {  'name'   :   getSampleFiles(directory3,'ZZTo4L_ext2',False,'nanoLatino_')
                              +getSampleFiles(directory3,'ggZZ2e2t',False,'nanoLatino_')
                              +getSampleFiles(directory3,'ggZZ2m2t',False,'nanoLatino_')
                              +getSampleFiles(directory3,'ggZZ2e2m',False,'nanoLatino_')
                              +getSampleFiles(directory3,'ggZZ4t',False,'nanoLatino_')
                         #     +getSampleFiles(directory,'ggZZ4e',False,'nanoLatino_')
                              +getSampleFiles(directory3,'ggZZ4m',False,'nanoLatino_'),
                    'weight' : XSWeight18+'*'+SFweight18+'*'+PromptGenLepMatch18+'*'+METFilter_MC ,
                    'FilesPerJob' : 5,
                 }



addSampleWeight(samples,'ZZ','ZZTo4L_AMCNLOFXFX',"1.17") ## The NNLO/NLO k-factor, cited from https://arxiv.org/abs/1405.2219v1
addSampleWeight(samples,'ZZ','ggZZ2e2t',"1.68") ## The NLO/LO k-factor, cited from https://arxiv.org/abs/1509.06734v1
addSampleWeight(samples,'ZZ','ggZZ2m2t',"1.68") 
addSampleWeight(samples,'ZZ','ggZZ2e2m',"1.68")
addSampleWeight(samples,'ZZ','ggZZ4e',"1.68")
addSampleWeight(samples,'ZZ','ggZZ4m',"1.68")
addSampleWeight(samples,'ZZ','ggZZ4t',"1.68")


addSampleWeight(samples,'ZZ17','ZZTo4L_ext1',"1.17") 
#addSampleWeight(samples,'ZZ17','ggZZ2e2t',"1.68") 
addSampleWeight(samples,'ZZ17','ggZZ2m2t',"1.68") 
addSampleWeight(samples,'ZZ17','ggZZ2e2m',"1.68")
addSampleWeight(samples,'ZZ17','ggZZ4m',"1.68")

addSampleWeight(samples,'ZZ18','ZZTo4L_ext2',"1.17") 
addSampleWeight(samples,'ZZ18','ggZZ2e2t',"1.68") 
addSampleWeight(samples,'ZZ18','ggZZ2m2t',"1.68") 
addSampleWeight(samples,'ZZ18','ggZZ2e2m',"1.68")
addSampleWeight(samples,'ZZ18','ggZZ4m',"1.68")
addSampleWeight(samples,'ZZ18','ggZZ4t',"1.68")



##########################################
################ SIGNALS #################
##########################################

############ ZH H->WW ############

samples['ZH_hww']  = {  'name'   :   getSampleFiles(directory1,'HZJ_HToWWTo2L2Nu_ZTo2L_M125',False,'nanoLatino_'), #FIXME replace with 125 GeV sample when available
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     }

samples['ZH_hww17']  = {  'name'   :   getSampleFiles(directory2,'HZJ_HToWWTo2L2Nu_ZTo2L_M125',False,'nanoLatino_'),
                        'weight' : XSWeight17+'*'+SFweight17+'*'+PromptGenLepMatch17+'*'+METFilter_MC ,
                     }

samples['ZH_hww18']  = {  'name'   :   getSampleFiles(directory3,'HZJ_HToWWTo2L2Nu_ZTo2L_M125',False,'nanoLatino_'),
                        'weight' : XSWeight18+'*'+SFweight18+'*'+PromptGenLepMatch18+'*'+METFilter_MC ,
                     }



###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,
                       'weight' : METFilter_DATA+'*'+LepWPCut,
                       'weights' : [ ],
                       'isData': ['all'],
                       'FilesPerJob' : 10 ,
                  }

for Run in DataRun :
  directory = treeBaseDir+'/Run2016_102X_nAODv4_Full2016v5/DATAl1loose2016v5__l2loose__l2tightOR2016v5/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet])
