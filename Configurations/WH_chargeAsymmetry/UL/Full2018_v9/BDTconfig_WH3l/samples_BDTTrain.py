import os
import inspect

# /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/Full2018_v9/BDTconfig_WH3l

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # BDTconfig_WH3l
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

# MC:   /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9/
# DATA: /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Run2018_UL2018_nAODv9_Full2018v9/DATAl1loose2018v9__l2loose__l2tightOR2018v9/
# FAKE: /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Run2018_UL2018_nAODv9_Full2018v9/DATAl1loose2018v9__l2loose__fakeW/

mcProduction = 'Summer20UL18_106x_nAODv9_Full2018v9'

dataReco     = 'Run2018_UL2018_nAODv9_Full2018v9'

mcSteps      = 'MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9'

fakeSteps    = 'DATAl1loose2018v9__l2loose__fakeW'

dataSteps    = 'DATAl1loose2018v9__l2loose__l2tightOR2018v9'

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

mcDirectory = makeMCDirectory()

#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeight        = 'XSWeight*SFweight*METFilter_MC*(1-PromptGenLepMatch3l)'
mcCommonWeightMatched = 'XSWeight*SFweight*PromptGenLepMatch3l*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################

# For Fakes, we don't want the three leptons to be genmatched

###### DY (Fakes) #######

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50-LO')

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0))',
    'FilesPerJob': 2,
}

##### Top (Fakes) #######
files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
        nanoGetSampleFiles(mcDirectory, 'ST_s-channel') + \
        nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
        nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
        nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop') + \
        nanoGetSampleFiles(mcDirectory, 'ST_tW_top')

samples['top'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
}
addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')


######## Vg ########

samples['Wg'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WGToLNuG'),
    'weight': "*".join([mcCommonWeight, '(Gen_ZGstar_mass <= 0)']),
    'FilesPerJob': 4
}

samples['Zg'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'ZGToLLG'),
    'weight': "*".join([mcCommonWeight, '(Gen_ZGstar_mass <= 0)']),
    'FilesPerJob': 4
}


######## VgS ########

samples['WgS'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WGToLNuG'),
    'weight': "*".join([mcCommonWeightMatched, "(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)"]),
    'FilesPerJob': 4,
}

samples['ZgS'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'ZGToLLG'),
    'weight': "*".join([mcCommonWeightMatched, "(Gen_ZGstar_mass > 0)"]),
    'FilesPerJob': 4,
}


############ ZZ ############

samples['ZZ'] = {
    # 'name': nanoGetSampleFiles(mcDirectory,'ZZTo4L_ext1'),
    'name': nanoGetSampleFiles(mcDirectory,'ZZ'),
    'weight': mcCommonWeightMatched,
    'FilesPerJob' : 1,
}


############ WZ ############

samples['WZ'] = {
    'name': nanoGetSampleFiles(mcDirectory,'WZTo3LNu'),
    'weight': mcCommonWeightMatched,
    'FilesPerJob' : 2,
}
addSampleWeight(samples,'WZ','WZTo3LNu', '(Gen_ZGstar_mass>=0.1)')


########## VVV #########

# files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
#         nanoGetSampleFiles(mcDirectory, 'WZZ') + \
#         nanoGetSampleFiles(mcDirectory, 'WWZ') + \
#         nanoGetSampleFiles(mcDirectory, 'WWW')

# samples['VVV'] = {
#     'name': files,
#     'weight': mcCommonWeightMatched,
#     'FilesPerJob': 4
# }

# ############ WJets (Fakes) ############
# files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_0J') + \
#         nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_1J') + \
#         nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_2J')

# samples['WJets'] = {
#     'name': files,
#     'weight': mcCommonWeight,
#     'FilesPerJob': 4
# }

###########################################
#############   SIGNALS  ##################
###########################################

signals = []

samples['WH_hww_plus'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWWTo2L2Nu_WToLNu_M125'),
    'weight': mcCommonWeightMatched,
    'FilesPerJob': 4
}
signals.append('WH_hww_plus')

samples['WH_hww_minus'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWWTo2L2Nu_WToLNu_M125'),
    'weight': mcCommonWeightMatched,
    'FilesPerJob': 4
}
signals.append('WH_hww_minus')

############ H->TauTau ############

samples['WH_htt_plus'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'WplusHToTauTau_M125'),
    'weight': mcCommonWeightMatched + '*2*(event % 2 == 0)',
    'FilesPerJob': 4
}
signals.append('WH_htt_plus')

samples['WH_htt_minus'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'WminusHToTauTau_M125'),
    'weight': mcCommonWeightMatched + '*2*(event % 2 == 0)',
    'FilesPerJob': 4
}
signals.append('WH_htt_minus')

