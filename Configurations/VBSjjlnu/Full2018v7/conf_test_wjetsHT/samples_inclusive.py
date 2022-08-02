import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

def nanoGetSampleFiles(inputDir, sample):
    return getSampleFiles(inputDir, sample, True, 'nanoLatino_')

############################################
############ MORE MC STAT ##################
############################################

def CombineBaseW(samples, proc, samplelist):
  newbaseW = getBaseWnAOD(directory_bkg, 'Autumn18_102X_nAODv7_Full2018v7', samplelist)
  for s in samplelist:
    addSampleWeight(samples, proc, s, newbaseW+'/baseW')

##############################################
###### Tree Directory according to site ######
##############################################

samples={}


# Steps
mcSteps   = 'MCl1loose2018v7__MCCorr2018v7' 
dataSteps = 'DATAl1loose2018v7__DATACombJJLNu2018'

SITE=os.uname()[1]
xrootdPath=''
if  'cern' in SITE :
  #xrootdPath='root://eoscms.cern.ch/'
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'
  treeBaseDir_SMP = '/eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/'

directory_bkg    = treeBaseDir + 'Autumn18_102X_nAODv7_Full2018v7/' + mcSteps
directory_signal = treeBaseDir_SMP + 'Autumn18_102X_nAODv7_Full2018v7/' + mcSteps
directory_data   = treeBaseDir + 'Run2018_102X_nAODv7_Full2018v7/'  + dataSteps

###########################################
#############  BACKGROUNDS  ###############
##########################################


samples['Wjets_LO'] = { 'name' :   
            nanoGetSampleFiles(directory_bkg, 'WJetsToLNu-LO'),
        'weight': 'XSWeight',
        'FilesPerJob' : 10,
       }


samples['Wjets_HT_70_100'] = { 'name' :   
            nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT70_100'),
        'weight': 'XSWeight * 1.21',### Added k-factor
        'FilesPerJob' : 10,
       }


samples['Wjets_HT_100_200'] = { 'name' :  
          nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT100_200'),
        'weight': 'XSWeight',
        'FilesPerJob' : 10,
       }

samples['Wjets_HT_200_400'] = { 'name' :   
            nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT200_400'),
        'weight': 'XSWeight',
        'FilesPerJob' : 10,
       }

samples['Wjets_HT_400_600'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT400_600'),
        'weight': 'XSWeight',
        'FilesPerJob' : 10,
       }



samples['Wjets_HT_600_800'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT600_800'),
        'weight': 'XSWeight',
        'FilesPerJob' : 10,
       }


samples['Wjets_HT_800_1200'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT800_1200'),
        'weight': 'XSWeight',
        'FilesPerJob' : 10,
       }


samples['Wjets_HT_1200_2500'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT1200_2500'),
        'weight': 'XSWeight',
        'FilesPerJob' : 10,
       }


samples['Wjets_HT_2500_inf'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT2500_inf'),
        'weight': 'XSWeight',
        'FilesPerJob' : 10,
       }

