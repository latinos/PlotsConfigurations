import os
import inspect

# /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/WH3l/BDTconfig/Full2018_nAODv4

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2018_nAODv4
configurations = os.path.dirname(configurations) # BDTconfig
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

################################################
################# SKIMS ########################
################################################

mcProduction = 'Autumn18_102X_nAODv7_Full2018v7'

mcSteps = 'MCl1loose2018v7__MCCorr2018v7__l2loose'

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
mcCommonWeight        = 'XSWeight*SFweight*METFilter_MC'
mcCommonWeightMatched = 'XSWeight*SFweight*PromptGenLepMatch3l*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################

######## Vg ########

samples['Wg'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM'),
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
    'name': nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM'),
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
    'name': nanoGetSampleFiles(mcDirectory,'ZZTo4L_ext1'),
    'weight': mcCommonWeightMatched,
    'FilesPerJob' : 1,
}


############ WZ ############

samples['WZ'] = {
    'name': nanoGetSampleFiles(mcDirectory,'WZTo3LNu_mllmin01'),
    'weight': mcCommonWeightMatched,
    'FilesPerJob' : 2,
}
addSampleWeight(samples,'WZ','WZTo3LNu_mllmin01', '(Gen_ZGstar_mass>=0.1)')


########## VVV #########

files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
        nanoGetSampleFiles(mcDirectory, 'WZZ') + \
        nanoGetSampleFiles(mcDirectory, 'WWZ') + \
        nanoGetSampleFiles(mcDirectory, 'WWW')

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeightMatched,
    'FilesPerJob': 4
}


###########################################
#############   SIGNALS  ##################
###########################################

signals = []

samples['WH_hww_plus'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_LNu_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}
signals.append('WH_hww_plus')

samples['WH_hww_minus'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_LNu_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}
signals.append('WH_hww_minus')

############ H->TauTau ############

samples['WH_htt_plus'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}
signals.append('WH_htt_plus')

samples['WH_htt_minus'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}
signals.append('WH_htt_minus')

