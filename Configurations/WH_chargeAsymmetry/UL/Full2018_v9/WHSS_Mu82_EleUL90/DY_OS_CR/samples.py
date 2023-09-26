import os
import inspect

# /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/Full2018_v9/WHSS/DY_OS_CR

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # DY_OS_CR
configurations = os.path.dirname(configurations) # WHSS
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

mcSteps      = 'MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9{var}'

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

############ DY OS ############
# Select opposite-sign events 
# and reweight them according
# to the leptons charge-flip
# probabilities

useEmbeddedDY = False
embed_tautauveto = ''

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-70to100') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-600to800') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-800to1200')  + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-2500toInf')

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0))*ttHMVA_eff_flip_2l[0]',
    'FilesPerJob': 2,
}

# Remove high HT from inclusive samples
addSampleWeight(samples,'DY','DYJetsToLL_M-50', '(LHE_HT<70)')
