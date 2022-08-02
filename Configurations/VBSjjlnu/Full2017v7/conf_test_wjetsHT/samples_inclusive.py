import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

def nanoGetSampleFiles(inputDir, sample):
    return getSampleFiles(inputDir, sample, True, 'nanoLatino_')

def CombineBaseW(samples, proc, samplelist):
  newbaseW = getBaseWnAOD(directory_bkg, 'Fall2017_102X_nAODv7_Full2017v7', samplelist)
  for s in samplelist:
    addSampleWeight(samples, proc, s, newbaseW+'/baseW')

samples={}

# Steps
mcSteps   = 'MCl1loose2017v7__MCCorr2017v7' 
dataSteps = 'DATAl1loose2017v7__DATACombJJLNu2017'
fakeSteps = 'DATAl1loose2017v7__DATACombJJLNu2017'

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
  treeBaseDir_SMP = '/eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/'

directory_bkg    = treeBaseDir + 'Fall2017_102X_nAODv7_Full2017v7/' + mcSteps
directory_signal = treeBaseDir_SMP + 'Fall2017_102X_nAODv7_Full2017v7/' + mcSteps
directory_fakes  = treeBaseDir + 'Run2017_102X_nAODv7_Full2017v7/'  + fakeSteps
directory_data   = treeBaseDir + 'Run2017_102X_nAODv7_Full2017v7/'  + dataSteps

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='1'
#Nlep='3'
#Nlep='4'

###########################################
#############  BACKGROUNDS  ###############
###########################################



samples['Wjets_LO'] = { 'name' :   
            nanoGetSampleFiles(directory_bkg, 'WJetsToLNu-LO')
         +  nanoGetSampleFiles(directory_bkg, 'WJetsToLNu-LO_ext1'),
        'weight': 'XSWeight',
        'FilesPerJob' : 15,
       }

CombineBaseW(samples, 'Wjets_LO', ['WJetsToLNu-LO','WJetsToLNu-LO_ext1'])

samples['Wjets_HT_70_100'] = { 'name' :   
            nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT70_100'),
        'weight': 'XSWeight * 1.21',### Added k-factor
        'FilesPerJob' : 15,
       }


samples['Wjets_HT_100_200'] = { 'name' :  
          nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT100_200'),
        'weight': 'XSWeight',
        'FilesPerJob' : 15,
       }

samples['Wjets_HT_200_400'] = { 'name' :   
            nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT200_400'),
        'weight': 'XSWeight',
        'FilesPerJob' : 15,
       }

samples['Wjets_HT_400_600'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT400_600'),
        'weight': 'XSWeight',
        'FilesPerJob' : 15,
       }



samples['Wjets_HT_600_800'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT600_800'),
        'weight': 'XSWeight',
        'FilesPerJob' : 15,
       }


samples['Wjets_HT_800_1200'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT800_1200'),
        'weight': 'XSWeight',
        'FilesPerJob' : 15,
       }


samples['Wjets_HT_1200_2500'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT1200_2500'),
        'weight': 'XSWeight',
        'FilesPerJob' : 15,
       }


samples['Wjets_HT_2500_inf'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT2500_inf'),
        'weight': 'XSWeight',
        'FilesPerJob' : 15,
       }


samples['Wjets_NLO'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu-0J')
         + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu-1J')
         + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu-2J'),
        'weight': 'XSWeight',
        'FilesPerJob' : 15,
       }


addSampleWeight(samples,'Wjets_HT_100_200', 'WJetsToLNu-HT100_200', '0.993') 
addSampleWeight(samples,'Wjets_HT_200_400', 'WJetsToLNu-HT200_400', '1.002') 
addSampleWeight(samples,'Wjets_HT_400_600', 'WJetsToLNu-HT400_600', '1.009') 
addSampleWeight(samples,'Wjets_HT_600_800', 'WJetsToLNu-HT600_800', '1.120') 
addSampleWeight(samples,'Wjets_HT_800_1200', 'WJetsToLNu-HT800_1200', '1.202') 
addSampleWeight(samples,'Wjets_HT_1200_2500', 'WJetsToLNu-HT1200_2500', '1.332') 
addSampleWeight(samples,'Wjets_HT_2500_inf', 'WJetsToLNu-HT2500_inf', '4.200') 


#samples = {   key:v for key,v in samples.items() if key  in ["Wjets_HT_70_100"]}