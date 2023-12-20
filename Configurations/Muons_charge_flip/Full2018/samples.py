import os
import inspect

# /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/Full2018_v9/charge_flip

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # charge_flip
configurations = os.path.dirname(configurations) # Full2018_v9
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

# MC:   /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn/
# DATA: /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Run2018_UL2018_nAODv9_Full2018v9/DATAl1loose2018v9/
# FAKE: /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Run2018_UL2018_nAODv9_Full2018v9/DATAl1loose2018v9__l2loose__fakeW/

mcProduction = 'Summer20UL18_106x_nAODv9_Full2018v9'

dataReco     = 'Run2018_UL2018_nAODv9_Full2018v9'

mcSteps      = 'MCl1loose2018v9__MCCorr2018v9NoJERInHorn'

fakeSteps    = 'DATAl1loose2018v9__l2loose__fakeW'

dataSteps    = 'DATAl1loose2018v9'

# embedReco  = 'Embedding2016_102X_nAODv7_Full2016v7'
# embedSteps = 'DATAl1loose2016v7__l2loose__l2tightOR2016v7__Embedding'

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
    ['A','Run2018A-UL2018-v1'],
    ['B','Run2018B-UL2018-v1'],
    ['C','Run2018C-UL2018-v1'],
    ['D','Run2018D-UL2018-v1'],
]

# DataSets = ['MuonEG','SingleMuon','EGamma','DoubleMuon']

# DataTrig = {
#     'MuonEG'         : 'Trigger_ElMu' ,
#     'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
#     'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
#     'EGamma'         : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && (Trigger_sngEl || Trigger_dblEl)' ,
# }

DataSets = ['SingleMuon']

DataTrig = {
    'MuonEG'         : 'Trigger_ElMu' ,
    'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
    'SingleMuon'     : '1' ,
    'EGamma'         : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && (Trigger_sngEl || Trigger_dblEl)' ,
}

#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
# mcCommonWeightNoMatch = 'XSWeight*METFilter_MC*SFweight'
mcCommonWeight = 'XSWeight' # *METFilter_MC*PromptGenLepMatch2l*SFweight'

commonWeight = 'trigger'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY High-Mass #######

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToMuMu_M-200to400') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToMuMu_M-400to500') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToMuMu_M-500to700') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToMuMu_M-700to800') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToMuMu_M-800to1000') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToMuMu_M-1000to1500') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToMuMu_M-1500to2000') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToMuMu_M-2000toInf')

samples['DY'] = {
    'name': files,
    'weight': commonWeight + "*" + mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 1,
}
# addSampleWeight(samples,'DY','DYJetsToLL_M-50', '(LHE_HT<70)')


# ###### DY LO #######
# files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO') + \
#         nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50-LO') + \
#         nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50-LO_ext1')

# ###### DY #######
# samples['DY_LO'] = {
#     'name': files,
#     'weight': commonWeight + "*" + mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0))',
#     'suppressNegative' :['all'],
#     'suppressNegativeNuisances' :['all'],
#     'FilesPerJob': 2,
# }
# DY_LO_baseW = getBaseWnAOD(mcDirectory, 'Summer20UL18_106x_nAODv9_Full2018v9', ['DYJetsToLL_M-50-LO','DYJetsToLL_M-50-LO_ext1'])
# addSampleWeight(samples,'DY_LO','DYJetsToLL_M-50-LO',      DY_LO_baseW + '/baseW')
# addSampleWeight(samples,'DY_LO','DYJetsToLL_M-50-LO_ext1', DY_LO_baseW + '/baseW')


# ###########################################
# ################## DATA ###################
# ###########################################

# samples['DATA'] = {
#   'name': [],
#   'weight': commonWeight, # + "*" + 'LepWPCut*METFilter_DATA',
#   'weights': [],
#   'isData': ['all'],
#   'FilesPerJob': 50
# }

# for _, sd in DataRun:
#   for pd in DataSets:
#     tag = pd + '_' + sd

#     if (   ('DoubleMuon' in pd and 'Run2018B' in sd)
#         or ('DoubleMuon' in pd and 'Run2018D' in sd)
#         or ('DoubleMuon' in pd and 'Run2018D' in sd)
#         or ('SingleMuon' in pd and 'Run2018A' in sd)
#         or ('SingleMuon' in pd and 'Run2018B' in sd)
#         or ('SingleMuon' in pd and 'Run2018C' in sd)):
#         print("sd      = {}".format(sd))
#         print("pd      = {}".format(pd))
#         print("Old tag = {}".format(tag))
#         tag = tag.replace('v1','v2')
#         print("New tag = {}".format(tag))

#     files = nanoGetSampleFiles(dataDirectory, tag)

#     samples['DATA']['name'].extend(files)
#     samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))
