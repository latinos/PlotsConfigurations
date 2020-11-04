import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

def nanoGetSampleFiles(inputDir, sample):
    return getSampleFiles(inputDir, sample, True, 'nanoLatino_')

def CombineBaseW(samples, proc, samplelist):
  newbaseW = getBaseWnAOD(directory_bkg, 'Summer16_102X_nAODv7_Full2016v7', samplelist)
  for s in samplelist:
    addSampleWeight(samples, proc, s, newbaseW+'/baseW')

samples={}

# Steps
mcSteps   = 'MCl1loose2016v7__MCCorr2016v7__MCCombJJLNu2016' 
dataSteps = 'DATAl1loose2016v7__DATACombJJLNu2016'
fakeSteps = 'DATAl1loose2016v7__DATACombJJLNu2016'

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

directory_bkg    = treeBaseDir + 'Summer16_102X_nAODv7_Full2016v7/' + mcSteps
directory_signal = treeBaseDir_SMP + 'Summer16_102X_nAODv7_Full2016v7/' + mcSteps
directory_fakes  = treeBaseDir + 'Run2016_102X_nAODv7_Full2016v7/'  + fakeSteps
directory_data   = treeBaseDir + 'Run2016_102X_nAODv7_Full2016v7/'  + dataSteps

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='1'
#Nlep='3'
#Nlep='4'

################################################
############### Lepton WP ######################
################################################
  
eleWP='mva_90p_Iso2016'
muWP='cut_Tight80x'

LepWPCut_1l =  '(Lepton_isTightElectron_'+eleWP+'[0]>0.5 || Lepton_isTightMuon_'+muWP+'[0]>0.5)'
LepWPWeight_1l = 'Lepton_tightElectron_'+eleWP+'_IdIsoSF'+'[0]*\
                Lepton_tightMuon_'+muWP+'_IdIsoSF'+'[0]'

LepWPCut = LepWPCut_1l
LepWPWeight = LepWPWeight_1l
################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight1l =       'puWeight*\
                   SingleLepton_trigEff_corrected[0]*\
                   Lepton_RecoSF[0]*\
                   EMTFbug_veto'
SFweight      = SFweight1l+'*'+LepWPWeight_1l+'*'+LepWPCut_1l
SFweight += '* PrefireWeight * PUJetIdSF * btagSF * BoostedWtagSF_nominal'
     
GenLepMatch   = 'Lepton_genmatched[0]'


####
# NVTX reweighting
#SFweight += '*nvtx_reweighting'

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2016B-02Apr2020_ver2-v1'],
    ['C','Run2016C-02Apr2020-v1'],
    ['D','Run2016D-02Apr2020-v1'],
    ['E','Run2016E-02Apr2020-v1'],
    ['F','Run2016F-02Apr2020-v1'],
    ['G','Run2016G-02Apr2020-v1'],
    ['H','Run2016H-02Apr2020-v1']
]

DataSets = ['SingleMuon','SingleElectron']


DataTrig = {
    'SingleMuon'     : 'Trigger_sngMu' ,
    'SingleElectron' : '!Trigger_sngMu && Trigger_sngEl',
}


#######################################################

samples['Wjets_NLO'] = { 'name': 
          nanoGetSampleFiles(directory_bkg, 'WJetsToLNu'),  #NLO inclusive samples
        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch + '* EWKnloW',
        'FilesPerJob' : 15,
}


samples['Wjets_LO'] = { 'name' :   
            nanoGetSampleFiles(directory_bkg, 'WJetsToLNu-LO')
         +  nanoGetSampleFiles(directory_bkg, 'WJetsToLNu-LO_ext2'),
        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch + '* EWKnloW',
        'FilesPerJob' : 15,
       }

CombineBaseW(samples, 'Wjets_LO', ['WJetsToLNu-LO','WJetsToLNu-LO_ext2'])


samples['Wjets_HT_70_100'] = { 'name' :   
            nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT70_100'),
        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch + '* EWKnloW * 1.21',### Added k-factor
        'FilesPerJob' : 15,
       }


samples['Wjets_HT_100_200'] = { 'name' :  
          nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT100_200')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT100_200_ext2'),
        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch + '* EWKnloW',
        'FilesPerJob' : 15,
       }
CombineBaseW(samples, 'Wjets_HT_100_200', ['WJetsToLNu_HT100_200','WJetsToLNu_HT100_200_ext2'])

samples['Wjets_HT_200_400'] = { 'name' :   
            nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT200_400')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT200_400_ext2'),
        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch + '* EWKnloW',
        'FilesPerJob' : 15,
       }
CombineBaseW(samples, 'Wjets_HT_200_400', ['WJetsToLNu_HT200_400','WJetsToLNu_HT200_400_ext2'])

samples['Wjets_HT_400_600'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT400_600')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT400_600_ext1'),
        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch + '* EWKnloW',
        'FilesPerJob' : 15,
       }

CombineBaseW(samples, 'Wjets_HT_400_600', ['WJetsToLNu_HT400_600','WJetsToLNu_HT400_600_ext1'])


samples['Wjets_HT_600_800'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT600_800')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT600_800_ext1'),
        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch + '* EWKnloW',
        'FilesPerJob' : 15,
       }

CombineBaseW(samples, 'Wjets_HT_600_800', ['WJetsToLNu_HT600_800','WJetsToLNu_HT600_800_ext1'])

samples['Wjets_HT_800_1200'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT800_1200')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT800_1200_ext1'),
        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch + '* EWKnloW',
        'FilesPerJob' : 15,
       }

CombineBaseW(samples, 'Wjets_HT_800_1200', ['WJetsToLNu_HT800_1200','WJetsToLNu_HT800_1200_ext1'])


samples['Wjets_HT_1200_2500'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT1200_2500')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT1200_2500_ext1'),
        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch + '* EWKnloW',
        'FilesPerJob' : 15,
       }

CombineBaseW(samples, 'Wjets_HT_1200_2500', ['WJetsToLNu_HT1200_2500','WJetsToLNu_HT1200_2500_ext1'])

samples['Wjets_HT_2500_inf'] = { 'name' :   
           nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT2500_inf')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT2500_inf_ext1'),
        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch + '* EWKnloW',
        'FilesPerJob' : 15,
       }

CombineBaseW(samples, 'Wjets_HT_2500_inf', ['WJetsToLNu_HT2500_inf','WJetsToLNu_HT2500_inf_ext1'])



#samples = {   key:v for key,v in samples.items() if key  in ["Wjets_LO"]}