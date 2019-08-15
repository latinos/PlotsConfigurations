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


#directory = treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017'
directory = treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5'

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='2'
#Nlep='3'
#Nlep='4'

################################################
############### Lepton WP ######################
################################################

#... Electron:

eleWP='mvaFall17V1Iso_WP90'

#... Muon:

muWP='cut_Tight_HWWW'

#... Build formula

LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP


################################################
############ BASIC MC WEIGHTS ##################
################################################
XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l' + '*PrefireWeight' + '*'+LepWPweight + '*'+LepWPCut 
GenLepMatch   = 'GenLepMatch'+Nlep+'l'

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
#we don't look at the b-tagging so SF is 1
#SFweight += '*'+btagSF


################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################


DataRun = [
            ['B','Run2017B-Nano14Dec2018-v1'] ,
                                                ['C','Run2017C-Nano14Dec2018-v1'] ,
                                                ['D','Run2017D-Nano14Dec2018-v1'] ,
                                                ['E','Run2017E-Nano14Dec2018-v1'] ,
                                                ['F','Run2017F-Nano14Dec2018-v1']
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
################## FAKES ##################
###########################################



samples['Fake']  = {   'name': [ ] ,
                       'weight' : METFilter_DATA+'*'+fakeW,              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 20 ,
                       }

for Run in DataRun :
  #directory = treeBaseDir+'Run2017_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__fakeW/'
  directory = treeBaseDir+'Run2017_102X_nAODv4_Full2017v5/DATAl1loose2017v5__l2loose__fakeW/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
    for iFile in FileTarget:
      samples['Fake']['name'].append(iFile)
      samples['Fake']['weights'].append(DataTrig[DataSet])



###########################################
################## DATA ###################
###########################################
       
samples['DATA']  = {   'name': [ ] ,     
                       'weight' : METFilter_DATA+'*'+LepWPCut,
                       'weights' : [ ],
                       'isData': ['all'],                            
                       'FilesPerJob' : 20 ,
                       }

for Run in DataRun :
        #directory = treeBaseDir+'Run2017_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017/'
        directory = treeBaseDir+'Run2017_102X_nAODv4_Full2017v5/DATAl1loose2017v5__l2loose__l2tightOR2017v5/'
        for DataSet in DataSets :
                FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
                for iFile in FileTarget:
#                        print(iFile)
                        samples['DATA']['name'].append(iFile)
                        samples['DATA']['weights'].append(DataTrig[DataSet])

