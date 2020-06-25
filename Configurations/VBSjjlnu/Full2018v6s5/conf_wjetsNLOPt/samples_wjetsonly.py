import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

def nanoGetSampleFiles(inputDir, sample):
    return getSampleFiles(inputDir, sample, True, 'nanoLatino_')

samples={}

##############################################
###### Tree Directory according to site ######
##############################################

# Steps
mcSteps   = 'MCl1loose2018v6__MCCorr2018v6__VBSjjlnuSkim2018v5' 
dataSteps = 'DATAl1loose2018v6__VBSjjlnuSkim2018v5_data'

SITE=os.uname()[1]
xrootdPath=''
if  'cern' in SITE :
  #xrootdPath='root://eoscms.cern.ch/'
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'

directory_bkg    = treeBaseDir + 'Autumn18_102X_nAODv6_Full2018v6/' + mcSteps
directory_signal = treeBaseDir + 'Autumn18_102X_nAODv6_Full2018v6/' + mcSteps
directory_data   = treeBaseDir + 'Run2018_102X_nAODv6_Full2018v6/'  + dataSteps

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='1'
#Nlep='3'
#Nlep='4'

################################################
############### Lepton WP ######################
################################################

eleWP='mvaFall17V1Iso_WP90'
muWP='cut_Tight_HWWW'


LepWPCut_1l =  '(Lepton_isTightElectron_'+eleWP+'[0]>0.5 || Lepton_isTightMuon_'+muWP+'[0]>0.5)'
LepWPWeight_1l = 'Lepton_tightElectron_'+eleWP+'_IdIsoSF'+'[0]*\
                Lepton_tightMuon_'+muWP+'_IdIsoSF'+'[0]'

LepWPCut = LepWPCut_1l
LepWPWeight = LepWPWeight_1l
################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight   = 'XSWeight'
SFweight1l = 'puWeight*\
              TriggerEffWeight_1l*\
              Lepton_RecoSF[0]'
SFweight  = SFweight1l+'*'+LepWPWeight_1l+'*'+LepWPCut_1l
SFweight += '* btagSF * PUJetIdSF * Wtagging_SF_nominal'

GenLepMatch   = 'Lepton_genmatched[0]'

####
# NVTX reweighting
# SFweight += '*nvtx_reweighting'


################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
            ['A','Run2018A-Nano25Oct2019-v1'] ,
            ['B','Run2018B-Nano25Oct2019-v1'] ,
            ['C','Run2018C-Nano25Oct2019-v1'] ,
            ['D','Run2018D-Nano25Oct2019_ver2-v1'] ,
          ]

DataSets = ['SingleMuon','EGamma']

DataTrig = {
            'SingleMuon' : 'Trigger_sngMu' ,
            'EGamma'     : '!Trigger_sngMu && Trigger_sngEl' 
}
###########################################
#############  BACKGROUNDS  ###############
##########################################

samples['Wjets'] = { 'name' :   
          nanoGetSampleFiles(directory_bkg, 'WJetsToLNu-LO')
          +nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_Pt50to100')
          +nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_Pt100to250')
          +nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_Pt250to400')
          +nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_Pt400to600')
          +nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_Pt600toInf'),
        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch, ######### ADD ewkNLO weight
        'FilesPerJob' : 2,
        'subsamples': {
          "boost1" : "(VBS_category==0) && (deltaeta_vbs < 5)",
          "boost2" : "(VBS_category==0) && (deltaeta_vbs >= 5)",
          "deta1_jpt1": "(VBS_category==1) && (deltaeta_vbs < 5 ) && vbs_1_pt < 75",
          "deta2_jpt1": "(VBS_category==1) && (deltaeta_vbs >= 5) && vbs_1_pt < 75",
          
          "deta1_jpt2": "(VBS_category==1) && (deltaeta_vbs < 4 ) &&  ( vbs_1_pt >= 75 && vbs_1_pt <150)",
          "deta2_jpt2": "(VBS_category==1) && (deltaeta_vbs >= 4) &&  ( vbs_1_pt >= 75 && vbs_1_pt <150)",

          "jpt3": "(VBS_category==1) && ( vbs_1_pt >= 150)",
                    
        }
       }

addSampleWeight(samples, "Wjets","WJetsToLNu-LO",  "LHE_Vpt < 50" )

#samples = {   key:v for key,v in samples.items() if key in ["VVV"]}



