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

directory = treeBaseDir+'Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/'+skim
directory1= treeBaseDir+'Summer16_102X_nAODv5_SigOnly_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/'+skim
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

LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP


################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut+'*PrefireWeight'
PromptGenLepMatch   = 'PromptGenLepMatch'+Nlep+'l'
PromptGenLepMatch2l   = 'PromptGenLepMatch'+'2l'
PromptGenLepMatch3l   = 'PromptGenLepMatch'+'3l'


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

samples['ZZ']  = {  'name'   :   getSampleFiles(directory,'ZZTo4L_ext1',False,'nanoLatino_')
                              +getSampleFiles(directory,'ZZ',False,'nanoLatino_')    
                              +getSampleFiles(directory,'ggZZ2e2t',False,'nanoLatino_')
                              +getSampleFiles(directory,'ggZZ2m2t',False,'nanoLatino_')
                              +getSampleFiles(directory,'ggZZ2e2m',False,'nanoLatino_')
                              +getSampleFiles(directory,'ggZZ4t',False,'nanoLatino_')
                              +getSampleFiles(directory,'ggZZ4e',False,'nanoLatino_')
                              +getSampleFiles(directory,'ggZZ4m',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                    'FilesPerJob' : 5,
                 }

addSampleWeight(samples,'ZZ','ZZTo4L',"1.17") ## The NNLO/NLO k-factor, cited from https://arxiv.org/abs/1405.2219v1
addSampleWeight(samples,'ZZ','ggZZ2e2t',"1.68") ## The NLO/LO k-factor, cited from https://arxiv.org/abs/1509.06734v1
addSampleWeight(samples,'ZZ','ggZZ2m2t',"1.68") 
addSampleWeight(samples,'ZZ','ggZZ2e2m',"1.68")
addSampleWeight(samples,'ZZ','ggZZ4e',"1.68")
addSampleWeight(samples,'ZZ','ggZZ4m',"1.68")
addSampleWeight(samples,'ZZ','ggZZ4t',"1.68")

#######################################
################ SIGNALS #################
##########################################

########### ZH H->WW ############

samples['ZH_hww']  = {  'name'   :   getSampleFiles(directory1,'HZJ_HToWWTo2L2Nu_ZTo2L_M125',False,'nanoLatino_'), 
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     }
'''
#########################################
################## FAKE ###################
###########################################



#samples['Fakes']  = {  'name'   :   getSampleFiles(directory,'WJetsToLNu-LO',False,'nanoLatino_')
#                                  + getSampleFiles(directory,'TTToSemiLeptonic',False,'nanoLatino_'),
#                       'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC,
#                       'FilesPerJob': 3,
#                    }
#
#
#samples['Fakes']  = {   'name': [ ] ,
#                       'weight' : fakeW+'*'+METFilter_DATA+'*((Lepton_pdgId[0]*Lepton_pdgId[1]==11*13) || (Lepton_pdgId[0]*Lepton_pdgId[1]==11*11) || (Lepton_pdgId[0]*Lepton_pdgId[1]==13*13))',              #   weight/cut 
#                       'weights' : [ ] ,
#                       'isData': ['all'],
#                       'FilesPerJob' : 6 ,
#                     }
#
#
#for Run in DataRun :
#  directory = treeBaseDir+'Run2016_102X_nAODv4_Full2016v5/DATAl1loose2016v5__l2loose__fakeW/'
#  for DataSet in DataSets :
#    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
#    for iFile in FileTarget:
#      samples['Fakes']['name'].append(iFile)
#      samples['Fakes']['weights'].append(DataTrig[DataSet])
'''
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
