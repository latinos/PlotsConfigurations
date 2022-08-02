import os
import inspect
import subprocess
import string

# /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/WH3l/Full2018_v7

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2018_v7
configurations = os.path.dirname(configurations) # WH3l
configurations = os.path.dirname(configurations) # WH_chargeAsymmetry
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

# ################################################
# ################# SKIMS ########################
# ################################################
# mcProduction = 'Autumn18_102X_nAODv7_Full2018v7'

# dataReco = 'Run2018_102X_nAODv7_Full2018v7'

# embedReco = 'Embedding2018_102X_nAODv7_Full2018v7'

# mcSteps = 'MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7{var}'

# fakeSteps = 'DATAl1loose2018v7__l2loose__fakeW'

# dataSteps = 'DATAl1loose2018v7__l2loose__l2tightOR2018v7'
# ##############################################
# ###### Tree base directory for the site ######
# ##############################################

# SITE=os.uname()[1]
# if    'iihe' in SITE:
#   treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015'
# elif  'cern' in SITE:
#   treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'

# def makeMCDirectory(var=''):
#     if var:
#         return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
#     else:
#         return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

# mcDirectory = makeMCDirectory()
# fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
# dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

# ################################################
# ############ DATA DECLARATION ##################
# ################################################


# DataRun = [
#     ['A','Run2018A-02Apr2020-v1'] ,
#     ['B','Run2018B-02Apr2020-v1'] ,
#     ['C','Run2018C-02Apr2020-v1'] ,
#     ['D','Run2018D-02Apr2020-v1'] ,
# ]

# DataSets = [
#     'MuonEG',
#     'DoubleMuon',
#     'SingleMuon',
#     'EGamma',
# ]

# DataTrig = {
#     'MuonEG'         : 'Trigger_ElMu' ,
#     'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
#     'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
#     'EGamma'         : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && (Trigger_sngEl || Trigger_dblEl)' ,
# }

# #########################################
# ############ MC COMMON ##################
# #########################################

# # SFweight does not include btag weights
# mcCommonWeight = 'XSWeight*SFweight*METFilter_MC'
# mcCommonWeightMatched = 'XSWeight*SFweight*PromptGenLepMatch3l*METFilter_MC'


### Legacy Samples ###

### BACKGROUNDS

# WJets

# wjets_legacy_files = nanoGetSampleFiles('/ceph/ntrevisa/Samples_ttHMVA_selection/Legacy/WJets/0J/', 'WJets_0J') + \
#                      nanoGetSampleFiles('/ceph/ntrevisa/Samples_ttHMVA_selection/Legacy/WJets/1J/', 'WJets_1J') + \
#                      nanoGetSampleFiles('/ceph/ntrevisa/Samples_ttHMVA_selection/Legacy/WJets/2J/', 'WJets_2J')

# samples['WJets_legacy'] = {
#     'name': wjets_legacy_files,
#     'weight': '1',
#     'FilesPerJob': 1,
# }

# addSampleWeight(samples, 'WJets_legacy', 'Wjets_0J', '53300.0/200000000')
# addSampleWeight(samples, 'WJets_legacy', 'Wjets_1J',  '8875.0/200000000')
# addSampleWeight(samples, 'WJets_legacy', 'Wjets_2J',  '3338.0/100000000')


# ### SIGNALS

# # WH H->WW

# wh_legacy_files = nanoGetSampleFiles('/ceph/ntrevisa/Samples_ttHMVA_selection/Legacy/HWplusJ_HToWW_M125/',  'HWplusJ_HToWW_M125' ) + \
#                   nanoGetSampleFiles('/ceph/ntrevisa/Samples_ttHMVA_selection/Legacy/HWminusJ_HToWW_M125/', 'HWminusJ_HToWW_M125')

# samples['WH_hww_legacy'] = {
#     'name': wh_legacy_files,
#     'weight': '1',
#     'FilesPerJob': 1,
# }

# addSampleWeight(samples, 'WH_hww_legacy', 'HWplusJ_HToWW_M125',  '0.8380/1000000')
# addSampleWeight(samples, 'WH_hww_legacy', 'HWminusJ_HToWW_M125', '0.5313/1000000')



### UL Samples ###

### BACKGROUNDS

# WJets

wjets_UL_files = nanoGetSampleFiles('/ceph/ntrevisa/Samples_ttHMVA_selection/UL/WJets/0J/', 'WJets_0J') + \
                 nanoGetSampleFiles('/ceph/ntrevisa/Samples_ttHMVA_selection/UL/WJets/1J/', 'WJets_1J') + \
                 nanoGetSampleFiles('/ceph/ntrevisa/Samples_ttHMVA_selection/UL/WJets/2J/', 'WJets_2J')

samples['WJets_UL'] = {
    'name': wjets_UL_files,
    'weight': '1',
    'FilesPerJob': 1,
}

addSampleWeight(samples, 'WJets_UL', 'Wjets_0J', '53300.0/200000000')
addSampleWeight(samples, 'WJets_UL', 'Wjets_1J',  '8875.0/200000000')
addSampleWeight(samples, 'WJets_UL', 'Wjets_2J',  '3338.0/100000000')


# ### SIGNALS

# # WH H->WW

# wh_UL_files = nanoGetSampleFiles('/ceph/ntrevisa/Samples_ttHMVA_selection/UL/HWplusJ_HToWW_M125/',  'HWplusJ_HToWW_M125' ) + \
#               nanoGetSampleFiles('/ceph/ntrevisa/Samples_ttHMVA_selection/UL/HWminusJ_HToWW_M125/', 'HWminusJ_HToWW_M125')

# samples['WH_hww_UL'] = {
#     'name': wh_UL_files,
#     'weight': '1',
#     'FilesPerJob': 1,
# }

# addSampleWeight(samples, 'WH_hww_UL', 'HWplusJ_HToWW_M125',  '0.8380/1000000')
# addSampleWeight(samples, 'WH_hww_UL', 'HWminusJ_HToWW_M125', '0.5313/1000000')


# WH H->WW Fully leptonic

wh_2l_UL_files = nanoGetSampleFiles('/ceph/ntrevisa/Samples_ttHMVA_selection/UL/HWminusJ_HToWWTo2L2Nu_M125/', 'HWminusJ_HToWWTo2L2Nu_M125' ) + \
                 nanoGetSampleFiles('/ceph/ntrevisa/Samples_ttHMVA_selection/UL/HWplusJ_HToWWTo2L2Nu_M125/',  'HWplusJ_HToWWTo2L2Nu_M125' )


samples['WH_hww_2l_UL'] = {
    'name': wh_2l_UL_files,
    'weight': '1',
    'FilesPerJob': 1,
}

addSampleWeight(samples, 'WH_hww_2l_UL', 'HWminusJ_HToWWTo2L2Nu_M125', '0.5313/10000000')
addSampleWeight(samples, 'WH_hww_2l_UL', 'HWplusJ_HToWWTo2L2Nu_M125',  '0.8380/10000000')





