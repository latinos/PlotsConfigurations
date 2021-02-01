 
import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # VBFH2016
configurations = os.path.dirname(configurations) # EFT
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def nanoGetSampleFiles(inputDir, sample):
    try:
        if _samples_noload:
            return []
    except NameError:
        pass

    return getSampleFiles(inputDir, sample, True, 'nanoLatino_')

# samples

try:
    len(samples)
except NameError:
    import collections
    samples = collections.OrderedDict()

################################################
################# SKIMS ########################
################################################

mcProduction  = 'Summer16_102X_nAODv7_Full2016v7'
mcSteps = 'MCl1loose2016v7__MCCorr2016v7__l2loose__l2tightOR2016v7{var}'

dataReco = 'Run2016_102X_nAODv7_Full2016v7'
dataSteps = 'DATAl1loose2016v7__l2loose__l2tightOR2016v7'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'

def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

mcDirectory  = makeMCDirectory()

dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

################################################                                                   
############ DATA DECLARATION ##################                                                   
################################################                                
                   
DataRun = [
    ['F','Run2016F-02Apr2020-v1'],
    ['G','Run2016G-02Apr2020-v1'],
    ['H','Run2016H-02Apr2020-v1']
]

DataSets = ['MuonEG']

DataTrig = {
    'MuonEG'         : ' Trigger_ElMu' ,
}

#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include bstag weights
mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC'
mcCommonWeight = 'XSWeight*SFweight*PromptGenLepMatch2l*METFilter_MC'

###########################################                                                        
################## DATA ###################                                                        
###########################################   
                                                   
samples['DATA'] = {
  'name': [],
  'weight': 'METFilter_DATA*LepWPCut', 
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 40
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))

###########################################
#############  BACKGROUNDS  ###############
###########################################

samples['DY'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50'),
    'weight': mcCommonWeight,
    'FilesPerJob': 6,
}
addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50', 'ptllDYW_NLO')

samples['TTbar'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1
}
addSampleWeight(samples, 'TTbar', 'TTTo2L2Nu', 'Top_pTrw')

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight + '*nllW',
    'FilesPerJob': 3
}

############ Normal Higgs Samples ############

samples['ggH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 20
}

samples['qqH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 12
}

'''
samples['ggH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 12,
}

samples['qqH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 12,
}
'''

#############################################################
#### AC/EFT Signals 
 
signals_rw = [] 
 
# VBF MC samples 
 
# Original VBF samples 
 
samples['VBF_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W',   'FilesPerJob': 2, } 
 
samples['VBF_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W',   'FilesPerJob': 2, } 
 
samples['VBF_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W',   'FilesPerJob': 2, } 
 
samples['VBF_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W',   'FilesPerJob': 2, } 
 
samples['VBF_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W',   'FilesPerJob': 2, } 
 
samples['VBF_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W',   'FilesPerJob': 2, } 
 
samples['VBF_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W',   'FilesPerJob': 2, } 
 
# Reweighted VBF samples 
 
samples['VBF_H0PM_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0M_M0/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0M_M0')  
 
samples['VBF_H0PM_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0M_M1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0M_M1')  
 
samples['VBF_H0PM_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0M_M2/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0M_M2')  
 
samples['VBF_H0PM_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0M_M3/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0M_M3')  
 
samples['VBF_H0PM_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0PH_M0/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0PH_M0')  
 
samples['VBF_H0PM_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0PH_M1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0PH_M1')  
 
samples['VBF_H0PM_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0PH_M2/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0PH_M2')  
 
samples['VBF_H0PM_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0PH_M3/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0PH_M3')  
 
samples['VBF_H0PM_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0L1_M0/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0L1_M0')  
 
samples['VBF_H0PM_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0L1_M1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0L1_M1')  
 
samples['VBF_H0PM_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0L1_M2/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0L1_M2')  
 
samples['VBF_H0PM_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0L1_M3/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0L1_M3')  
 
samples['VBF_H0M_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0PM/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0PM')  
 
samples['VBF_H0M_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0M_M0/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0M_M0')  
 
samples['VBF_H0M_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0M_M1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0M_M1')  
 
samples['VBF_H0M_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0M_M2/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0M_M2')  
 
samples['VBF_H0M_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0M_M3/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0M_M3')  
 
samples['VBF_H0M_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0PH_M0/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0PH_M0')  
 
samples['VBF_H0M_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0PH_M1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0PH_M1')  
 
samples['VBF_H0M_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0PH_M2/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0PH_M2')  
 
samples['VBF_H0M_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0PH_M3/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0PH_M3')  
 
samples['VBF_H0M_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0L1_M0/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0L1_M0')  
 
samples['VBF_H0M_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0L1_M1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0L1_M1')  
 
samples['VBF_H0M_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0L1_M2/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0L1_M2')  
 
samples['VBF_H0M_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0L1_M3/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0L1_M3')  
 
samples['VBF_H0Mf05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0PM/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0PM')  
 
samples['VBF_H0Mf05_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0M_M0/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0M_M0')  
 
samples['VBF_H0Mf05_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0M_M1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0M_M1')  
 
samples['VBF_H0Mf05_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0M_M2/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0M_M2')  
 
samples['VBF_H0Mf05_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0M_M3/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0M_M3')  
 
samples['VBF_H0Mf05_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0PH_M0/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0PH_M0')  
 
samples['VBF_H0Mf05_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0PH_M1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0PH_M1')  
 
samples['VBF_H0Mf05_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0PH_M2/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0PH_M2')  
 
samples['VBF_H0Mf05_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0PH_M3/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0PH_M3')  
 
samples['VBF_H0Mf05_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0L1_M0/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0L1_M0')  
 
samples['VBF_H0Mf05_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0L1_M1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0L1_M1')  
 
samples['VBF_H0Mf05_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0L1_M2/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0L1_M2')  
 
samples['VBF_H0Mf05_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0L1_M3/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0L1_M3')  
 
samples['VBF_H0PH_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0PM/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0PM')  
 
samples['VBF_H0PH_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0M_M0/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0M_M0')  
 
samples['VBF_H0PH_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0M_M1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0M_M1')  
 
samples['VBF_H0PH_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0M_M2/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0M_M2')  
 
samples['VBF_H0PH_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0M_M3/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0M_M3')  
 
samples['VBF_H0PH_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0PH_M0/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0PH_M0')  
 
samples['VBF_H0PH_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0PH_M1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0PH_M1')  
 
samples['VBF_H0PH_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0PH_M2/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0PH_M2')  
 
samples['VBF_H0PH_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0PH_M3/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0PH_M3')  
 
samples['VBF_H0PH_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0L1_M0/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0L1_M0')  
 
samples['VBF_H0PH_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0L1_M1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0L1_M1')  
 
samples['VBF_H0PH_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0L1_M2/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0L1_M2')  
 
samples['VBF_H0PH_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0L1_M3/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0L1_M3')  
 
samples['VBF_H0PHf05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0PM/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0PM')  
 
samples['VBF_H0PHf05_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0M_M0/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0M_M0')  
 
samples['VBF_H0PHf05_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0M_M1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0M_M1')  
 
samples['VBF_H0PHf05_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0M_M2/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0M_M2')  
 
samples['VBF_H0PHf05_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0M_M3/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0M_M3')  
 
samples['VBF_H0PHf05_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0PH_M0/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0PH_M0')  
 
samples['VBF_H0PHf05_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0PH_M1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0PH_M1')  
 
samples['VBF_H0PHf05_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0PH_M2/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0PH_M2')  
 
samples['VBF_H0PHf05_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0PH_M3/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0PH_M3')  
 
samples['VBF_H0PHf05_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0L1_M0/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0L1_M0')  
 
samples['VBF_H0PHf05_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0L1_M1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0L1_M1')  
 
samples['VBF_H0PHf05_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0L1_M2/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0L1_M2')  
 
samples['VBF_H0PHf05_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0L1_M3/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0L1_M3')  
 
samples['VBF_H0L1_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0PM/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0PM')  
 
samples['VBF_H0L1_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0M_M0/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0M_M0')  
 
samples['VBF_H0L1_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0M_M1/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0M_M1')  
 
samples['VBF_H0L1_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0M_M2/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0M_M2')  
 
samples['VBF_H0L1_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0M_M3/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0M_M3')  
 
samples['VBF_H0L1_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0PH_M0/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0PH_M0')  
 
samples['VBF_H0L1_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0PH_M1/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0PH_M1')  
 
samples['VBF_H0L1_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0PH_M2/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0PH_M2')  
 
samples['VBF_H0L1_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0PH_M3/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0PH_M3')  
 
samples['VBF_H0L1_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0L1_M0/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0L1_M0')  
 
samples['VBF_H0L1_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0L1_M1/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0L1_M1')  
 
samples['VBF_H0L1_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0L1_M2/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0L1_M2')  
 
samples['VBF_H0L1_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0L1_M3/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0L1_M3')  
 
samples['VBF_H0L1f05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0PM/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0PM')  
 
samples['VBF_H0L1f05_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0M_M0/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0M_M0')  
 
samples['VBF_H0L1f05_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0M_M1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0M_M1')  
 
samples['VBF_H0L1f05_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0M_M2/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0M_M2')  
 
samples['VBF_H0L1f05_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0M_M3/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0M_M3')  
 
samples['VBF_H0L1f05_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0PH_M0/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0PH_M0')  
 
samples['VBF_H0L1f05_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0PH_M1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0PH_M1')  
 
samples['VBF_H0L1f05_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0PH_M2/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0PH_M2')  
 
samples['VBF_H0L1f05_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0PH_M3/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0PH_M3')  
 
samples['VBF_H0L1f05_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0L1_M0/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0L1_M0')  
 
samples['VBF_H0L1f05_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0L1_M1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0L1_M1')  
 
samples['VBF_H0L1f05_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0L1_M2/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0L1_M2')  
 
samples['VBF_H0L1f05_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0L1_M3/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0L1_M3')  
 
# WH MC samples 
 
# Original WH samples 
 
samples['WH_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W',   'FilesPerJob': 2, } 
 
samples['WH_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W',   'FilesPerJob': 2, } 
 
samples['WH_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W',   'FilesPerJob': 2, } 
 
samples['WH_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W',   'FilesPerJob': 2, } 
 
samples['WH_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W',   'FilesPerJob': 2, } 
 
samples['WH_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W',   'FilesPerJob': 2, } 
 
samples['WH_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W',   'FilesPerJob': 2, } 
 
# Reweighted WH samples 
 
samples['WH_H0PM_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0M_M0/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0M_M0')  
 
samples['WH_H0PM_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0M_M1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0M_M1')  
 
samples['WH_H0PM_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0M_M2/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0M_M2')  
 
samples['WH_H0PM_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0M_M3/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0M_M3')  
 
samples['WH_H0PM_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0PH_M0/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0PH_M0')  
 
samples['WH_H0PM_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0PH_M1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0PH_M1')  
 
samples['WH_H0PM_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0PH_M2/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0PH_M2')  
 
samples['WH_H0PM_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0PH_M3/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0PH_M3')  
 
samples['WH_H0PM_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0L1_M0/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0L1_M0')  
 
samples['WH_H0PM_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0L1_M1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0L1_M1')  
 
samples['WH_H0PM_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0L1_M2/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0L1_M2')  
 
samples['WH_H0PM_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0L1_M3/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0L1_M3')  
 
samples['WH_H0M_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0PM/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0PM')  
 
samples['WH_H0M_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0M_M0/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0M_M0')  
 
samples['WH_H0M_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0M_M1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0M_M1')  
 
samples['WH_H0M_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0M_M2/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0M_M2')  
 
samples['WH_H0M_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0M_M3/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0M_M3')  
 
samples['WH_H0M_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0PH_M0/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0PH_M0')  
 
samples['WH_H0M_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0PH_M1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0PH_M1')  
 
samples['WH_H0M_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0PH_M2/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0PH_M2')  
 
samples['WH_H0M_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0PH_M3/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0PH_M3')  
 
samples['WH_H0M_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0L1_M0/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0L1_M0')  
 
samples['WH_H0M_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0L1_M1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0L1_M1')  
 
samples['WH_H0M_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0L1_M2/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0L1_M2')  
 
samples['WH_H0M_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0L1_M3/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0L1_M3')  
 
samples['WH_H0Mf05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0PM/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0PM')  
 
samples['WH_H0Mf05_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0M_M0/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0M_M0')  
 
samples['WH_H0Mf05_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0M_M1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0M_M1')  
 
samples['WH_H0Mf05_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0M_M2/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0M_M2')  
 
samples['WH_H0Mf05_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0M_M3/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0M_M3')  
 
samples['WH_H0Mf05_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0PH_M0/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0PH_M0')  
 
samples['WH_H0Mf05_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0PH_M1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0PH_M1')  
 
samples['WH_H0Mf05_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0PH_M2/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0PH_M2')  
 
samples['WH_H0Mf05_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0PH_M3/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0PH_M3')  
 
samples['WH_H0Mf05_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0L1_M0/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0L1_M0')  
 
samples['WH_H0Mf05_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0L1_M1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0L1_M1')  
 
samples['WH_H0Mf05_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0L1_M2/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0L1_M2')  
 
samples['WH_H0Mf05_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0L1_M3/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0L1_M3')  
 
samples['WH_H0PH_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0PM/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0PM')  
 
samples['WH_H0PH_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0M_M0/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0M_M0')  
 
samples['WH_H0PH_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0M_M1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0M_M1')  
 
samples['WH_H0PH_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0M_M2/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0M_M2')  
 
samples['WH_H0PH_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0M_M3/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0M_M3')  
 
samples['WH_H0PH_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0PH_M0/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0PH_M0')  
 
samples['WH_H0PH_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0PH_M1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0PH_M1')  
 
samples['WH_H0PH_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0PH_M2/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0PH_M2')  
 
samples['WH_H0PH_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0PH_M3/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0PH_M3')  
 
samples['WH_H0PH_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0L1_M0/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0L1_M0')  
 
samples['WH_H0PH_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0L1_M1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0L1_M1')  
 
samples['WH_H0PH_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0L1_M2/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0L1_M2')  
 
samples['WH_H0PH_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0L1_M3/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0L1_M3')  
 
samples['WH_H0PHf05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0PM/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0PM')  
 
samples['WH_H0PHf05_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0M_M0/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0M_M0')  
 
samples['WH_H0PHf05_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0M_M1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0M_M1')  
 
samples['WH_H0PHf05_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0M_M2/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0M_M2')  
 
samples['WH_H0PHf05_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0M_M3/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0M_M3')  
 
samples['WH_H0PHf05_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0PH_M0/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0PH_M0')  
 
samples['WH_H0PHf05_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0PH_M1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0PH_M1')  
 
samples['WH_H0PHf05_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0PH_M2/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0PH_M2')  
 
samples['WH_H0PHf05_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0PH_M3/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0PH_M3')  
 
samples['WH_H0PHf05_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0L1_M0/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0L1_M0')  
 
samples['WH_H0PHf05_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0L1_M1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0L1_M1')  
 
samples['WH_H0PHf05_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0L1_M2/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0L1_M2')  
 
samples['WH_H0PHf05_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0L1_M3/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0L1_M3')  
 
samples['WH_H0L1_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0PM/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0PM')  
 
samples['WH_H0L1_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0M_M0/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0M_M0')  
 
samples['WH_H0L1_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0M_M1/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0M_M1')  
 
samples['WH_H0L1_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0M_M2/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0M_M2')  
 
samples['WH_H0L1_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0M_M3/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0M_M3')  
 
samples['WH_H0L1_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0PH_M0/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0PH_M0')  
 
samples['WH_H0L1_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0PH_M1/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0PH_M1')  
 
samples['WH_H0L1_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0PH_M2/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0PH_M2')  
 
samples['WH_H0L1_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0PH_M3/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0PH_M3')  
 
samples['WH_H0L1_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0L1_M0/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0L1_M0')  
 
samples['WH_H0L1_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0L1_M1/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0L1_M1')  
 
samples['WH_H0L1_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0L1_M2/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0L1_M2')  
 
samples['WH_H0L1_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0L1_M3/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0L1_M3')  
 
samples['WH_H0L1f05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0PM/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0PM')  
 
samples['WH_H0L1f05_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0M_M0/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0M_M0')  
 
samples['WH_H0L1f05_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0M_M1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0M_M1')  
 
samples['WH_H0L1f05_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0M_M2/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0M_M2')  
 
samples['WH_H0L1f05_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0M_M3/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0M_M3')  
 
samples['WH_H0L1f05_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0PH_M0/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0PH_M0')  
 
samples['WH_H0L1f05_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0PH_M1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0PH_M1')  
 
samples['WH_H0L1f05_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0PH_M2/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0PH_M2')  
 
samples['WH_H0L1f05_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0PH_M3/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0PH_M3')  
 
samples['WH_H0L1f05_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0L1_M0/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0L1_M0')  
 
samples['WH_H0L1f05_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0L1_M1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0L1_M1')  
 
samples['WH_H0L1f05_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0L1_M2/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0L1_M2')  
 
samples['WH_H0L1f05_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0L1_M3/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0L1_M3')  
 
# ZH MC samples 
 
# Original ZH samples 
 
samples['ZH_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W',   'FilesPerJob': 2, } 
 
samples['ZH_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W',   'FilesPerJob': 2, } 
 
samples['ZH_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W',   'FilesPerJob': 2, } 
 
samples['ZH_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W',   'FilesPerJob': 2, } 
 
samples['ZH_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W',   'FilesPerJob': 2, } 
 
samples['ZH_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W',   'FilesPerJob': 2, } 
 
samples['ZH_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W',   'FilesPerJob': 2, } 
 
# Reweighted ZH samples 
 
samples['ZH_H0PM_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0M_M0/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0M_M0')  
 
samples['ZH_H0PM_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0M_M1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0M_M1')  
 
samples['ZH_H0PM_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0M_M2/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0M_M2')  
 
samples['ZH_H0PM_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0M_M3/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0M_M3')  
 
samples['ZH_H0PM_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0PH_M0/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0PH_M0')  
 
samples['ZH_H0PM_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0PH_M1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0PH_M1')  
 
samples['ZH_H0PM_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0PH_M2/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0PH_M2')  
 
samples['ZH_H0PM_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0PH_M3/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0PH_M3')  
 
samples['ZH_H0PM_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0L1_M0/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0L1_M0')  
 
samples['ZH_H0PM_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0L1_M1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0L1_M1')  
 
samples['ZH_H0PM_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0L1_M2/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0L1_M2')  
 
samples['ZH_H0PM_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0L1_M3/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0L1_M3')  
 
samples['ZH_H0M_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0PM/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0PM')  
 
samples['ZH_H0M_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0M_M0/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0M_M0')  
 
samples['ZH_H0M_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0M_M1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0M_M1')  
 
samples['ZH_H0M_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0M_M2/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0M_M2')  
 
samples['ZH_H0M_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0M_M3/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0M_M3')  
 
samples['ZH_H0M_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0PH_M0/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0PH_M0')  
 
samples['ZH_H0M_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0PH_M1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0PH_M1')  
 
samples['ZH_H0M_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0PH_M2/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0PH_M2')  
 
samples['ZH_H0M_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0PH_M3/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0PH_M3')  
 
samples['ZH_H0M_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0L1_M0/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0L1_M0')  
 
samples['ZH_H0M_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0L1_M1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0L1_M1')  
 
samples['ZH_H0M_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0L1_M2/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0L1_M2')  
 
samples['ZH_H0M_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0L1_M3/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0L1_M3')  
 
samples['ZH_H0Mf05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0PM/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0PM')  
 
samples['ZH_H0Mf05_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0M_M0/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0M_M0')  
 
samples['ZH_H0Mf05_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0M_M1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0M_M1')  
 
samples['ZH_H0Mf05_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0M_M2/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0M_M2')  
 
samples['ZH_H0Mf05_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0M_M3/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0M_M3')  
 
samples['ZH_H0Mf05_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0PH_M0/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0PH_M0')  
 
samples['ZH_H0Mf05_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0PH_M1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0PH_M1')  
 
samples['ZH_H0Mf05_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0PH_M2/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0PH_M2')  
 
samples['ZH_H0Mf05_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0PH_M3/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0PH_M3')  
 
samples['ZH_H0Mf05_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0L1_M0/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0L1_M0')  
 
samples['ZH_H0Mf05_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0L1_M1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0L1_M1')  
 
samples['ZH_H0Mf05_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0L1_M2/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0L1_M2')  
 
samples['ZH_H0Mf05_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0L1_M3/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0L1_M3')  
 
samples['ZH_H0PH_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0PM/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0PM')  
 
samples['ZH_H0PH_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0M_M0/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0M_M0')  
 
samples['ZH_H0PH_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0M_M1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0M_M1')  
 
samples['ZH_H0PH_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0M_M2/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0M_M2')  
 
samples['ZH_H0PH_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0M_M3/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0M_M3')  
 
samples['ZH_H0PH_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0PH_M0/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0PH_M0')  
 
samples['ZH_H0PH_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0PH_M1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0PH_M1')  
 
samples['ZH_H0PH_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0PH_M2/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0PH_M2')  
 
samples['ZH_H0PH_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0PH_M3/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0PH_M3')  
 
samples['ZH_H0PH_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0L1_M0/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0L1_M0')  
 
samples['ZH_H0PH_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0L1_M1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0L1_M1')  
 
samples['ZH_H0PH_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0L1_M2/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0L1_M2')  
 
samples['ZH_H0PH_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0L1_M3/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0L1_M3')  
 
samples['ZH_H0PHf05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0PM/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0PM')  
 
samples['ZH_H0PHf05_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0M_M0/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0M_M0')  
 
samples['ZH_H0PHf05_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0M_M1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0M_M1')  
 
samples['ZH_H0PHf05_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0M_M2/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0M_M2')  
 
samples['ZH_H0PHf05_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0M_M3/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0M_M3')  
 
samples['ZH_H0PHf05_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0PH_M0/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0PH_M0')  
 
samples['ZH_H0PHf05_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0PH_M1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0PH_M1')  
 
samples['ZH_H0PHf05_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0PH_M2/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0PH_M2')  
 
samples['ZH_H0PHf05_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0PH_M3/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0PH_M3')  
 
samples['ZH_H0PHf05_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0L1_M0/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0L1_M0')  
 
samples['ZH_H0PHf05_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0L1_M1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0L1_M1')  
 
samples['ZH_H0PHf05_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0L1_M2/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0L1_M2')  
 
samples['ZH_H0PHf05_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0L1_M3/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0L1_M3')  
 
samples['ZH_H0L1_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0PM/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0PM')  
 
samples['ZH_H0L1_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0M_M0/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0M_M0')  
 
samples['ZH_H0L1_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0M_M1/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0M_M1')  
 
samples['ZH_H0L1_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0M_M2/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0M_M2')  
 
samples['ZH_H0L1_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0M_M3/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0M_M3')  
 
samples['ZH_H0L1_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0PH_M0/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0PH_M0')  
 
samples['ZH_H0L1_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0PH_M1/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0PH_M1')  
 
samples['ZH_H0L1_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0PH_M2/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0PH_M2')  
 
samples['ZH_H0L1_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0PH_M3/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0PH_M3')  
 
samples['ZH_H0L1_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0L1_M0/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0L1_M0')  
 
samples['ZH_H0L1_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0L1_M1/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0L1_M1')  
 
samples['ZH_H0L1_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0L1_M2/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0L1_M2')  
 
samples['ZH_H0L1_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0L1_M3/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0L1_M3')  
 
samples['ZH_H0L1f05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0PM/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0PM')  
 
samples['ZH_H0L1f05_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0M_M0/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0M_M0')  
 
samples['ZH_H0L1f05_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0M_M1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0M_M1')  
 
samples['ZH_H0L1f05_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0M_M2/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0M_M2')  
 
samples['ZH_H0L1f05_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0M_M3/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0M_M3')  
 
samples['ZH_H0L1f05_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0PH_M0/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0PH_M0')  
 
samples['ZH_H0L1f05_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0PH_M1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0PH_M1')  
 
samples['ZH_H0L1f05_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0PH_M2/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0PH_M2')  
 
samples['ZH_H0L1f05_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0PH_M3/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0PH_M3')  
 
samples['ZH_H0L1f05_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0L1_M0/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0L1_M0')  
 
samples['ZH_H0L1f05_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0L1_M1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0L1_M1')  
 
samples['ZH_H0L1f05_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0L1_M2/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0L1_M2')  
 
samples['ZH_H0L1f05_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0L1_M3/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0L1_M3')  
 
# ggH MC samples 
 
# Original ggH samples 
 
samples['H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W',   'FilesPerJob': 2, } 
 
samples['H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W',   'FilesPerJob': 2, } 
 
samples['H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W',   'FilesPerJob': 2, } 
 
samples['H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W',   'FilesPerJob': 2, } 
 
samples['H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W',   'FilesPerJob': 2, } 
 
samples['H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W',   'FilesPerJob': 2, } 
 
samples['H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W',   'FilesPerJob': 2, } 
 
# Reweighted ggH samples 
 
samples['H0PM_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H0M/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('H0PM_H0M')  
 
samples['H0PM_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H0Mf05/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('H0PM_H0Mf05')  
 
samples['H0PM_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H0PH/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('H0PM_H0PH')  
 
samples['H0PM_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H0PHf05/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('H0PM_H0PHf05')  
 
samples['H0PM_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H0L1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('H0PM_H0L1')  
 
samples['H0PM_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H0L1f05/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('H0PM_H0L1f05')  
 
samples['H0M_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H0PM/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('H0M_H0PM')  
 
samples['H0M_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H0Mf05/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('H0M_H0Mf05')  
 
samples['H0M_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H0PH/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('H0M_H0PH')  
 
samples['H0M_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H0PHf05/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('H0M_H0PHf05')  
 
samples['H0M_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H0L1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('H0M_H0L1')  
 
samples['H0M_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H0L1f05/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('H0M_H0L1f05')  
 
samples['H0Mf05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H0PM/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0Mf05_H0PM')  
 
samples['H0Mf05_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H0M/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0Mf05_H0M')  
 
samples['H0Mf05_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H0PH/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0Mf05_H0PH')  
 
samples['H0Mf05_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H0PHf05/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0Mf05_H0PHf05')  
 
samples['H0Mf05_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H0L1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0Mf05_H0L1')  
 
samples['H0Mf05_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H0L1f05/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0Mf05_H0L1f05')  
 
samples['H0PH_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H0PM/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('H0PH_H0PM')  
 
samples['H0PH_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H0M/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('H0PH_H0M')  
 
samples['H0PH_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H0Mf05/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('H0PH_H0Mf05')  
 
samples['H0PH_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H0PHf05/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('H0PH_H0PHf05')  
 
samples['H0PH_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H0L1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('H0PH_H0L1')  
 
samples['H0PH_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H0L1f05/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('H0PH_H0L1f05')  
 
samples['H0PHf05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H0PM/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0PHf05_H0PM')  
 
samples['H0PHf05_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H0M/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0PHf05_H0M')  
 
samples['H0PHf05_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H0Mf05/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0PHf05_H0Mf05')  
 
samples['H0PHf05_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H0PH/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0PHf05_H0PH')  
 
samples['H0PHf05_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H0L1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0PHf05_H0L1')  
 
samples['H0PHf05_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H0L1f05/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0PHf05_H0L1f05')  
 
samples['H0L1_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H0PM/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1_H0PM')  
 
samples['H0L1_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H0M/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1_H0M')  
 
samples['H0L1_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H0Mf05/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1_H0Mf05')  
 
samples['H0L1_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H0PH/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1_H0PH')  
 
samples['H0L1_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H0PHf05/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1_H0PHf05')  
 
samples['H0L1_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H0L1f05/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1_H0L1f05')  
 
samples['H0L1f05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H0PM/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1f05_H0PM')  
 
samples['H0L1f05_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H0M/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1f05_H0M')  
 
samples['H0L1f05_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H0Mf05/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1f05_H0Mf05')  
 
samples['H0L1f05_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H0PH/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1f05_H0PH')  
 
samples['H0L1f05_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H0PHf05/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1f05_H0PHf05')  
 
samples['H0L1f05_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H0L1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1f05_H0L1')  
 
