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
dirnlo = "/eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__VBSjjlnuSkim2018v5"

samples['Wjets_NLO_0J'] = { 'name' :   
           nanoGetSampleFiles(dirnlo, 'WJetsToLNu_0J'),
				'weight': '1.',
				'FilesPerJob' : 6, 
		}

samples['Wjets_NLO_1J'] = { 'name' :   
           nanoGetSampleFiles(dirnlo, 'WJetsToLNu_1J'),
				'weight': '1.',
				'FilesPerJob' : 6, 
		}

samples['Wjets_NLO_2J'] = { 'name' :   
           nanoGetSampleFiles(dirnlo, 'WJetsToLNu_2J'),
				'weight': '1.',
				'FilesPerJob' : 6, 
		}

################################################################

samples['Wjets_LO'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu-LO'),
				'weight': '1.',
				'FilesPerJob' : 6, 
		}

samples['Wjets_HT70_100'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT70_100'),
				'weight': '1.',
				'FilesPerJob' : 6, 
		}

samples['Wjets_HT100_200'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT100_200'),
				'weight': '1.',
				'FilesPerJob' : 6, 
		}

samples['Wjets_HT200_400'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT200_400'),
				'weight': '1.',
				'FilesPerJob' : 6, 
		}

samples['Wjets_HT400_600'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT400_600'),
				'weight': '1.',
				'FilesPerJob' : 6, 
		}

samples['Wjets_HT600_800'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT600_800'),
				'weight': '1.',
				'FilesPerJob' : 6, 
		}

samples['Wjets_HT800_1200'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT800_1200'),
				'weight': '1.',
				'FilesPerJob' : 6, 
		}

samples['Wjets_HT1200_2500'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT1200_2500'),
				'weight': '1.',
				'FilesPerJob' : 6, 
		}

samples['Wjets_HT2500_inf'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT2500_inf'),
				'weight': '1.',
				'FilesPerJob' : 6, 
		}
      
samples['Wjets_Pt50to100'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_Pt50to100'),
				'weight': '1.',
				'FilesPerJob' : 6, 
		}

      
samples['Wjets_Pt100to250'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_Pt100to250'),
				'weight': '1.',
				'FilesPerJob' : 6, 
		}
      
samples['Wjets_Pt250to400'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_Pt250to400'),
				'weight': '1.',
				'FilesPerJob' : 6, 
		}

		      
samples['Wjets_Pt400to600'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_Pt400to600'),
				'weight': '1.',
				'FilesPerJob' : 6, 
		}

samples['Wjets_Pt600toInf'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_Pt600toInf'),
				'weight': '1.',
				'FilesPerJob' : 6, 
		}



samples = {   key:v for key,v in samples.items() if "Wjets" in key}