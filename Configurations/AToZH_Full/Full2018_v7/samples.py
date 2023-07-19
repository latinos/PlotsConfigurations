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

directory = treeBaseDir+'Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7'

################################################
############ NUMBER OF LEPTONS #################
################################################

#Nlep='2'
Nlep='3'
#Nlep='4'

################################################
############### Lepton WP ######################
################################################

eleWP='mvaFall17V1Iso_WP90'
#eleWP='mvaFall17V1Iso_WP90_SS'
#eleWP='mvaFall17V2Iso_WP90'
#eleWP='mvaFall17V2Iso_WP90_SS'
muWP ='cut_Tight_HWWW'
eleWP_new = 'mvaFall17V1Iso_WP90_tthmva_70'
muWP_new  = 'cut_Tight_HWWW_tthmva_80'

LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP_new+'__mu_'+muWP_new
#LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
#LepWPweight     = 'ttHMVA_SF_3l[0]' #SF for new WPs, defined in aliases
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP_new+'__mu_'+muWP_new

################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut+'*Jet_PUIDSF'
PromptGenLepMatch   = 'PromptGenLepMatch'+Nlep+'l'

################################################
############## FAKE WEIGHTS ####################
################################################

#eleWP_new = 'mvaFall17V1Iso_WP90_tthmva_70'
#muWP_new  = 'cut_Tight_HWWW_tthmva_80'

if Nlep == '2' :
  fakeW = 'fakeW2l_ele_'+eleWP_new+'_mu_'+muWP_new
  #fakeW = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP
else:
  fakeW = 'fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_'+Nlep+'l'
  #fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l'

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
            ['A','Run2018A-02Apr2020-v1'] ,
            ['B','Run2018B-02Apr2020-v1'] ,
            ['C','Run2018C-02Apr2020-v1'] ,
            ['D','Run2018D-02Apr2020-v1'] ,
          ]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','EGamma']

DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
	    'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
            'EGamma'         : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && (Trigger_sngEl || Trigger_dblEl)' ,
            }



###########################################
#############  BACKGROUNDS  ###############
###########################################


samples['ttV'] = {    'name'   :   getSampleFilesNano(directory,'TTWJetsToLNu')
                                 + getSampleFilesNano(directory,'TTZjets'),
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 5,
                 }



############ VVV ############

samples['VVV']  = {  'name'   :   getSampleFilesNano(directory,'ZZZ')
                                + getSampleFilesNano(directory,'WZZ')
                                + getSampleFilesNano(directory,'WWZ')
                                + getSampleFilesNano(directory,'WWW'),
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                  }

##########################################
################ SIGNALS #################
##########################################

###########################################
################## FAKE ###################
###########################################

samples['Fake']  = {   'name': [ ] ,
                       'weight' : fakeW+'*'+METFilter_DATA,
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 500 ,
                       'suppressNegativeNuisances' :['all'],
                     }

directory = treeBaseDir+'Run2018_102X_nAODv7_Full2018v7/DATAl1loose2018v7__l2loose__fakeW'
#directory = treeBaseDir+'Run2018_102X_nAODv6_Full2018v6/DATAl1loose2018v6__l2loose__fakeW/'
for Run in DataRun :
  for DataSet in DataSets :
    FileTarget = getSampleFilesNano(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['Fake']['name'].append(iFile)
      samples['Fake']['weights'].append(DataTrig[DataSet])

samples['Fake']['subsamples'] = {
    'e': 'abs(ZH3l_pdgid_l) == 11',
    'm': 'abs(ZH3l_pdgid_l) == 13'
}

###########################################
################## DATA ###################
###########################################

                
