import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # 
configurations = os.path.dirname(configurations) # 
configurations = os.path.dirname(configurations) # 
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight, getBaseWnAOD

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

dataReco = 'Run2017_102X_nAODv7_Full2017v7'

mcProduction = 'Fall2017_102X_nAODv7_Full2017v7'

embedReco = 'Embedding2017_102X_nAODv7_Full2017v7'

mcSteps = 'MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7{var}'

fakeSteps = 'DATAl1loose2017v7__l2loose__fakeW'

dataSteps = 'DATAl1loose2017v7__l2loose__l2tightOR2017v7'

embedSteps = 'DATAl1loose2017v7__l2loose__l2tightOR2017v7__Embedding'

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
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__trigFix'))

mcDirectory = makeMCDirectory()
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
embedDirectory = os.path.join(treeBaseDir, embedReco, embedSteps)

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2017B-02Apr2020-v1'],
    ['C','Run2017C-02Apr2020-v1'],
    ['D','Run2017D-02Apr2020-v1'],
    ['E','Run2017E-02Apr2020-v1'],
    ['F','Run2017F-02Apr2020-v1']
]

DataSets = ['MuonEG','SingleMuon','SingleElectron','DoubleMuon', 'DoubleEG']

DataTrig = {
    'MuonEG'         : ' Trigger_ElMu' ,
    'SingleMuon'     : '!Trigger_ElMu && Trigger_sngMu' ,
    'SingleElectron' : '!Trigger_ElMu && !Trigger_sngMu && Trigger_sngEl',
    'DoubleMuon'     : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && Trigger_dblMu',
    'DoubleEG'       : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && !Trigger_dblMu && Trigger_dblEl'
}

#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC'
mcCommonWeight = 'XSWeight*SFweight*PromptGenLepMatch2l*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######

useEmbeddedDY = True
useDYtt = True

# The Dyveto sample is used to estimate one piece of the Dyemb uncertainty
# To avoid running it all the times, it was run once and the uncertainty was converted into a lnN (see nuisances.py)
runDYveto = False

embed_tautauveto = '' #Setup
if useEmbeddedDY:
  embed_tautauveto = '*embed_tautauveto'


useWgFXFX=True
  
signals = []

signals_rw = [] 

# WH MC samples 
 
# Original WH samples 
 
samples['WH_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W',   'FilesPerJob': 1, } 

samples['WH_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W',   'FilesPerJob': 1, } 

samples['WH_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W',   'FilesPerJob': 1, } 

samples['WH_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W',   'FilesPerJob': 1, } 
 
samples['WH_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W',   'FilesPerJob': 1, } 
 
samples['WH_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W',   'FilesPerJob': 1, } 
 
samples['WH_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W',   'FilesPerJob': 1, } 

# Reweighted WH samples 

samples['WH_H0PM_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H1/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H1')  
 
samples['WH_H0PM_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H2/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H2')  
 
samples['WH_H0PM_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H3/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H3')  
 
samples['WH_H0PM_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H4/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H4')  
 
samples['WH_H0PM_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H5/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H5')  

samples['WH_H0PM_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H6/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H6')  
 
samples['WH_H0PM_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H7/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H7')  
 
samples['WH_H0PM_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H8/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H8')  
 
samples['WH_H0PM_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H9/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H9')  
 
samples['WH_H0PM_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H10/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H10')  
 
samples['WH_H0PM_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H11/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H11')  
 
samples['WH_H0PM_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H12/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H12')  
 
samples['WH_H0PM_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H13/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H13')  
 
samples['WH_H0PM_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H14/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H14')  

samples['WH_H0PM_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H15/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H15')  
 
samples['WH_H0PM_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H16/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H16')  
 
samples['WH_H0PM_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H17/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H17')  
 
samples['WH_H0PM_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H18/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H18')  
 
samples['WH_H0PM_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H19/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H19')  
 
samples['WH_H0PM_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H20/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H20')  
 
samples['WH_H0PM_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H21/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H21')  
 
samples['WH_H0PM_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H22/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H22')  
 
samples['WH_H0PM_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H23/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H23')  
 
samples['WH_H0PM_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H24/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H24')  
 
samples['WH_H0PM_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H25/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H25')  
 
samples['WH_H0PM_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H26/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H26')  
 
samples['WH_H0PM_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H27/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H27')  
 
samples['WH_H0PM_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H28/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H28')  
 
samples['WH_H0PM_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H29/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H29')  
 
samples['WH_H0PM_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H30/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H30')  
 
samples['WH_H0PM_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H31/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H31')  
 
samples['WH_H0PM_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H32/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H32')  
 
samples['WH_H0PM_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H33/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H33')  
 
samples['WH_H0PM_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H34/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H34')  
 
samples['WH_H0PM_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H35/ME_H0PM)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PM_H35')  

samples['WH_H0PH_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H1/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H1')  
 
samples['WH_H0PH_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H2/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H2')  
 
samples['WH_H0PH_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H3/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H3')  
 
samples['WH_H0PH_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H4/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H4')  
 
samples['WH_H0PH_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H5/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H5')  
 
samples['WH_H0PH_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H6/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H6')  
 
samples['WH_H0PH_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H7/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H7')  
 
samples['WH_H0PH_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H8/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H8')  
 
samples['WH_H0PH_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H9/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H9')  
 
samples['WH_H0PH_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H10/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H10')  
 
samples['WH_H0PH_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H11/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H11')  
 
samples['WH_H0PH_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H12/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H12')  
 
samples['WH_H0PH_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H13/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H13')  
 
samples['WH_H0PH_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H14/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H14')  
 
samples['WH_H0PH_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H15/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H15')  
 
samples['WH_H0PH_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H16/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H16')  
 
samples['WH_H0PH_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H17/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H17')  
 
samples['WH_H0PH_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H18/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H18')  
 
samples['WH_H0PH_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H19/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H19')  
 
samples['WH_H0PH_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H20/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H20')  
 
samples['WH_H0PH_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H21/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H21')  
 
samples['WH_H0PH_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H22/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H22')  
 
samples['WH_H0PH_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H23/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H23')  
 
samples['WH_H0PH_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H24/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H24')  
 
samples['WH_H0PH_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H25/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H25')  
 
samples['WH_H0PH_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H26/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H26')  
 
samples['WH_H0PH_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H27/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H27')  
 
samples['WH_H0PH_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H28/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H28')  
 
samples['WH_H0PH_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H29/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H29')  
 
samples['WH_H0PH_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H30/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H30')  
 
samples['WH_H0PH_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H31/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H31')  
 
samples['WH_H0PH_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H32/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H32')  
 
samples['WH_H0PH_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H33/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H33')  
 
samples['WH_H0PH_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H34/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H34')  
 
samples['WH_H0PH_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H35/ME_H0PH)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PH_H35')  

samples['WH_H0PHf05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H1/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H1')  
 
samples['WH_H0PHf05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H2/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H2')  
 
samples['WH_H0PHf05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H3/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H3')  
 
samples['WH_H0PHf05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H4/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H4')  
 
samples['WH_H0PHf05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H5/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H5')  
 
samples['WH_H0PHf05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H6/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H6')  
 
samples['WH_H0PHf05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H7/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H7')  
 
samples['WH_H0PHf05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H8/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H8')  
 
samples['WH_H0PHf05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H9/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H9')  
 
samples['WH_H0PHf05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H10/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H10')  
 
samples['WH_H0PHf05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H11/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H11')  
 
samples['WH_H0PHf05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H12/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H12')  
 
samples['WH_H0PHf05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H13/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H13')  
 
samples['WH_H0PHf05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H14/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H14')  
 
samples['WH_H0PHf05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H15/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H15')  
 
samples['WH_H0PHf05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H16/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H16')  
 
samples['WH_H0PHf05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H17/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H17')  
 
samples['WH_H0PHf05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H18/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H18')  
 
samples['WH_H0PHf05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H19/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H19')  
 
samples['WH_H0PHf05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H20/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H20')  
 
samples['WH_H0PHf05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H21/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H21')  
 
samples['WH_H0PHf05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H22/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H22')  
 
samples['WH_H0PHf05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H23/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H23')  
 
samples['WH_H0PHf05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H24/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H24')  
 
samples['WH_H0PHf05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H25/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H25')  
 
samples['WH_H0PHf05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H26/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H26')  
 
samples['WH_H0PHf05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H27/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H27')  
 
samples['WH_H0PHf05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H28/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H28')  
 
samples['WH_H0PHf05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H29/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H29')  
 
samples['WH_H0PHf05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H30/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H30')  
 
samples['WH_H0PHf05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H31/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H31')  
 
samples['WH_H0PHf05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H32/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H32')  
 
samples['WH_H0PHf05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H33/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H33')  
 
samples['WH_H0PHf05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H34/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H34')  
 
samples['WH_H0PHf05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H35/ME_H0PHf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0PHf05_H35')  
 
samples['WH_H0M_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H1/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H1')  
 
samples['WH_H0M_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H2/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H2')  
 
samples['WH_H0M_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H3/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H3')  
 
samples['WH_H0M_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H4/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H4')  
 
samples['WH_H0M_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H5/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H5')  
 
samples['WH_H0M_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H6/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H6')  
 
samples['WH_H0M_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H7/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H7')  
 
samples['WH_H0M_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H8/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H8')  
 
samples['WH_H0M_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H9/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H9')  
 
samples['WH_H0M_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H10/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H10')  
 
samples['WH_H0M_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H11/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H11')  
 
samples['WH_H0M_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H12/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H12')  
 
samples['WH_H0M_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H13/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H13')  
 
samples['WH_H0M_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H14/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H14')  
 
samples['WH_H0M_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H15/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H15')  
 
samples['WH_H0M_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H16/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H16')  
 
samples['WH_H0M_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H17/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H17')  
 
samples['WH_H0M_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H18/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H18')  
 
samples['WH_H0M_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H19/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H19')  
 
samples['WH_H0M_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H20/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H20')  
 
samples['WH_H0M_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H21/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H21')  
 
samples['WH_H0M_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H22/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H22')  
 
samples['WH_H0M_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H23/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H23')  
 
samples['WH_H0M_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H24/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H24')  
 
samples['WH_H0M_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H25/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H25')  
 
samples['WH_H0M_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H26/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H26')  
 
samples['WH_H0M_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H27/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H27')  
 
samples['WH_H0M_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H28/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H28')  
 
samples['WH_H0M_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H29/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H29')  
 
samples['WH_H0M_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H30/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H30')  
 
samples['WH_H0M_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H31/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H31')  
 
samples['WH_H0M_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H32/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H32')  
 
samples['WH_H0M_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H33/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H33')  
 
samples['WH_H0M_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H34/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H34')  
 
samples['WH_H0M_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H35/ME_H0M)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0M_H35')  
 
samples['WH_H0Mf05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H1/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H1')  
 
samples['WH_H0Mf05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H2/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H2')  
 
samples['WH_H0Mf05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H3/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H3')  
 
samples['WH_H0Mf05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H4/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H4')  
 
samples['WH_H0Mf05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H5/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H5')  
 
samples['WH_H0Mf05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H6/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H6')  
 
samples['WH_H0Mf05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H7/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H7')  
 
samples['WH_H0Mf05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H8/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H8')  
 
samples['WH_H0Mf05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H9/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H9')  
 
samples['WH_H0Mf05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H10/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H10')  
 
samples['WH_H0Mf05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H11/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H11')  
 
samples['WH_H0Mf05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H12/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H12')  
 
samples['WH_H0Mf05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H13/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H13')  
 
samples['WH_H0Mf05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H14/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H14')  
 
samples['WH_H0Mf05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H15/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H15')  
 
samples['WH_H0Mf05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H16/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H16')  
 
samples['WH_H0Mf05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H17/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H17')  
 
samples['WH_H0Mf05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H18/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H18')  
 
samples['WH_H0Mf05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H19/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H19')  
 
samples['WH_H0Mf05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H20/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H20')  
 
samples['WH_H0Mf05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H21/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H21')  
 
samples['WH_H0Mf05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H22/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H22')  
 
samples['WH_H0Mf05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H23/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H23')  
 
samples['WH_H0Mf05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H24/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H24')  
 
samples['WH_H0Mf05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H25/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H25')  
 
samples['WH_H0Mf05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H26/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H26')  
 
samples['WH_H0Mf05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H27/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H27')  
 
samples['WH_H0Mf05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H28/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H28')  
 
samples['WH_H0Mf05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H29/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H29')  
 
samples['WH_H0Mf05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H30/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H30')  
 
samples['WH_H0Mf05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H31/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H31')  
 
samples['WH_H0Mf05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H32/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H32')  
 
samples['WH_H0Mf05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H33/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H33')  
 
samples['WH_H0Mf05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H34/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H34')  
 
samples['WH_H0Mf05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H35/ME_H0Mf05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0Mf05_H35')  
 
samples['WH_H0L1_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H1/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H1')  
 
samples['WH_H0L1_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H2/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H2')  
 
samples['WH_H0L1_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H3/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H3')  
 
samples['WH_H0L1_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H4/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H4')  
 
samples['WH_H0L1_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H5/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H5')  
 
samples['WH_H0L1_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H6/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H6')  
 
samples['WH_H0L1_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H7/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H7')  
 
samples['WH_H0L1_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H8/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H8')  
 
samples['WH_H0L1_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H9/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H9')  
 
samples['WH_H0L1_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H10/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H10')  
 
samples['WH_H0L1_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H11/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H11')  
 
samples['WH_H0L1_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H12/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H12')  
 
samples['WH_H0L1_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H13/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H13')  
 
samples['WH_H0L1_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H14/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H14')  
 
samples['WH_H0L1_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H15/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H15')  
 
samples['WH_H0L1_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H16/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H16')  
 
samples['WH_H0L1_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H17/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H17')  
 
samples['WH_H0L1_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H18/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H18')  
 
samples['WH_H0L1_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H19/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H19')  
 
samples['WH_H0L1_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H20/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H20')  
 
samples['WH_H0L1_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H21/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H21')  
 
samples['WH_H0L1_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H22/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H22')  
 
samples['WH_H0L1_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H23/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H23')  
 
samples['WH_H0L1_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H24/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H24')  
 
samples['WH_H0L1_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H25/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H25')  
 
samples['WH_H0L1_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H26/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H26')  
 
samples['WH_H0L1_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H27/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H27')  
 
samples['WH_H0L1_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H28/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H28')  
 
samples['WH_H0L1_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H29/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H29')  
 
samples['WH_H0L1_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H30/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H30')  
 
samples['WH_H0L1_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H31/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H31')  
 
samples['WH_H0L1_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H32/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H32')  
 
samples['WH_H0L1_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H33/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H33')  
 
samples['WH_H0L1_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H34/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H34')  
 
samples['WH_H0L1_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H35/ME_H0L1)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1_H35')  
 
samples['WH_H0L1f05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H1/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H1')  
 
samples['WH_H0L1f05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H2/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H2')  
 
samples['WH_H0L1f05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H3/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H3')  
 
samples['WH_H0L1f05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H4/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H4')  
 
samples['WH_H0L1f05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H5/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H5')  
 
samples['WH_H0L1f05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H6/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H6')  
 
samples['WH_H0L1f05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H7/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H7')  
 
samples['WH_H0L1f05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H8/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H8')  
 
samples['WH_H0L1f05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H9/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H9')  
 
samples['WH_H0L1f05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H10/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H10')  
 
samples['WH_H0L1f05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H11/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H11')  
 
samples['WH_H0L1f05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H12/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H12')  
 
samples['WH_H0L1f05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H13/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H13')  
 
samples['WH_H0L1f05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H14/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H14')  
 
samples['WH_H0L1f05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H15/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H15')  
 
samples['WH_H0L1f05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H16/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H16')  
 
samples['WH_H0L1f05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H17/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H17')  
 
samples['WH_H0L1f05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H18/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H18')  
 
samples['WH_H0L1f05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H19/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H19')  
 
samples['WH_H0L1f05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H20/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H20')  
 
samples['WH_H0L1f05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H21/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H21')  
 
samples['WH_H0L1f05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H22/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H22')  
 
samples['WH_H0L1f05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H23/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H23')  
 
samples['WH_H0L1f05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H24/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H24')  
 
samples['WH_H0L1f05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H25/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H25')  
 
samples['WH_H0L1f05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H26/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H26')  
 
samples['WH_H0L1f05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H27/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H27')  
 
samples['WH_H0L1f05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H28/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H28')  
 
samples['WH_H0L1f05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H29/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H29')  
 
samples['WH_H0L1f05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H30/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H30')  
 
samples['WH_H0L1f05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H31/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H31')  
 
samples['WH_H0L1f05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H32/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H32')  
 
samples['WH_H0L1f05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H33/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H33')  
 
samples['WH_H0L1f05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H34/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H34')  
 
samples['WH_H0L1f05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H35/ME_H0L1f05)',   'FilesPerJob': 1, } 
signals_rw.append('WH_H0L1f05_H35')
