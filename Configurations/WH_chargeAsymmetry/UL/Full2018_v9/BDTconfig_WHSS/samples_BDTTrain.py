import os
import inspect

# /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/Full2018_v9/BDTconfig_WHSS

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # BDTconfig_WHSS
configurations = os.path.dirname(configurations) # Full2018_v9
configurations = os.path.dirname(configurations) # UL
configurations = os.path.dirname(configurations) # WH_chargeAsymmetry
configurations = os.path.dirname(configurations) # ControlRegions
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

# MC:   /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9/
# DATA: /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Run2018_UL2018_nAODv9_Full2018v9/DATAl1loose2018v9__l2loose__l2tightOR2018v9/
# FAKE: /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Run2018_UL2018_nAODv9_Full2018v9/DATAl1loose2018v9__l2loose__fakeW/

mcProduction = 'Summer20UL18_106x_nAODv9_Full2018v9'

dataReco     = 'Run2018_UL2018_nAODv9_Full2018v9'

mcSteps      = 'MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9'

fakeSteps    = 'DATAl1loose2018v9__l2loose__fakeW'

dataSteps    = 'DATAl1loose2018v9__l2loose__l2tightOR2018v9'

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

DataSets = ['MuonEG','SingleMuon','EGamma','DoubleMuon']

DataTrig = {
    'MuonEG'         : 'Trigger_ElMu' ,
    'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
    'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
    'EGamma'         : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && (Trigger_sngEl || Trigger_dblEl)' ,
}

#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*METFilter_MC*SFweight'
mcCommonWeight = 'XSWeight*METFilter_MC*PromptGenLepMatch2l*SFweight'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50-LO')

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0))',
    'FilesPerJob': 2,
}


############ WZ ############
files = nanoGetSampleFiles(mcDirectory, 'WZTo3LNu')
#        nanoGetSampleFiles(mcDirectory, 'WZTo2Q2L_mllmin4p0')

samples['WZ'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarHigh)',
    'FilesPerJob': 4
}
# addSampleWeight(samples, 'WZ', 'WZTo3LNu_mllmin0p1', '(0.601644*58.59/4.666)')

############ WJets (Fakes) ############
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_0J') + \
        nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_1J') + \
        nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_2J')

samples['WJets'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}


# ################## FAKE ###################
# samples['Fake'] = {
#   'name': [],
#   'weight': 'METFilter_DATA*fakeW',
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

#     files = nanoGetSampleFiles(fakeDirectory, tag)

#     samples['Fake']['name'].extend(files)
#     samples['Fake']['weights'].extend([DataTrig[pd]] * len(files))



###########################################
#############   SIGNALS  ##################
###########################################

signals = []

############ WH H->WW ############
samples['WH_hww_plus'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125'),
    'weight': mcCommonWeight + '*2*(event % 2 == 0)',
    'FilesPerJob': 4
}
signals.append('WH_hww_plus')


samples['WH_hww_minus'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    'weight': mcCommonWeight + '*2*(event % 2 == 0)',
    'FilesPerJob': 4
}
signals.append('WH_hww_minus')

############ WH H->TauTau ############
samples['WH_htt_plus'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'WplusHToTauTau_M125'),
    'weight': mcCommonWeight + '*2*(event % 2 == 0)',
    'FilesPerJob': 4
}
signals.append('WH_htt_plus')

samples['WH_htt_minus'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'WminusHToTauTau_M125'),
    'weight': mcCommonWeight + '*2*(event % 2 == 0)',
    'FilesPerJob': 4
}
signals.append('WH_htt_minus')
