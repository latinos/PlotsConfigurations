import os
import inspect

# /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/2016HIPM_v9/charge_flip_Mu82_EleUL90

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # charge_flip_Mu82_EleUL90
configurations = os.path.dirname(configurations) # 2016HIPM_v9
configurations = os.path.dirname(configurations) # UL
configurations = os.path.dirname(configurations) # WH_chargeAsymmetry
configurations = os.path.dirname(configurations) # ControlRegions
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

# MC:   /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer20UL16_106x_nAODv9_HIPM_Full2016v9/MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9/
# DATA: /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Run2016_UL2016_nAODv9_HIPM_Full2016v9/DATAl1loose2016v9__l2loose__l2tightOR2016v9/
# FAKE: /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Run2016_UL2016_nAODv9_HIPM_Full2016v9/DATAl1loose2016v9__l2loose__fakeW/

mcProduction = 'Summer20UL16_106x_nAODv9_HIPM_Full2016v9'

dataReco     = 'Run2016_UL2016_nAODv9_HIPM_Full2016v9'

mcSteps      = 'MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9'

fakeSteps    = 'DATAl1loose2016v9__l2loose__fakeW'

dataSteps    = 'DATAl1loose2016v9__l2loose__l2tightOR2016v9'

# embedSteps = 'DATAl1loose2016v7__l2loose__l2tightOR2016v7__Embedding'
# embedReco = 'Embedding2016_102X_nAODv7_Full2016v7'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'

def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

mcDirectory = makeMCDirectory()
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

# embedDirectory = os.path.join(treeBaseDir, embedReco, embedSteps)

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2016B-ver1_HIPM_UL2016-v2'],
    ['B','Run2016B-ver2_HIPM_UL2016-v2'],
    ['C','Run2016C-HIPM_UL2016-v2'],
    ['D','Run2016D-HIPM_UL2016-v2'],
    ['E','Run2016E-HIPM_UL2016-v2'],
    ['F','Run2016F-HIPM_UL2016-v2'],
]

DataSets = ['SingleElectron','DoubleEG']

DataTrig = {
    'SingleElectron' : '!Trigger_ElMu && !Trigger_sngMu && Trigger_sngEl',
    'DoubleEG'       : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && !Trigger_dblMu && Trigger_dblEl'
}


#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*METFilter_MC*SFweight'
mcCommonWeight        = 'XSWeight*METFilter_MC*PromptGenLepMatch2l*SFweight'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY NLO #######
files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50_NLO') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50') # + \
        # nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-70to100') + \
        # nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200') + \
        # nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400') + \
        # nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600') + \
        # nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-600to800') + \
        # nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-800to1200')  + \
        # nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500') + \
        # nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-2500toInf')

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0))',
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 2,
}
# addSampleWeight(samples,'DY','DYJetsToLL_M-50', '(LHE_HT<70)')


###### DY LO #######
files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50-LO')

###### DY #######
samples['DY_LO'] = {
    'name': files,
    'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0))',
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 2,
}


###########################################
################## DATA ###################
###########################################

samples['DATA'] = {
  'name': [],
  'weight': 'LepWPCut*METFilter_DATA_fix',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 50
}

for _, sd in DataRun:
  for pd in DataSets:
    tag = pd + '_' + sd

    if 'DoubleEG' in pd and 'Run2016B-ver2' in sd:  # Run2016B-ver2_HIPM_UL2016-v2
        print("sd      = {}".format(sd))
        print("pd      = {}".format(pd))
        print("Old tag = {}".format(tag))
        tag = tag.replace('v2','v3')
        print("New tag = {}".format(tag))

    files = nanoGetSampleFiles(dataDirectory, tag)

    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))
