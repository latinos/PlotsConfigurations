import os
import inspect

# /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/ControlRegions/DY/JES_UL_vs_preUL

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # JES_UL_vs_preUL
configurations = os.path.dirname(configurations) # DY
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

# UL:    /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9/
# preUL: /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7 

# ##############################################
# ###### Tree base directory for the site ######
# ##############################################

# SITE=os.uname()[1]
# if    'iihe' in SITE:
#   treeBaseDir = '/pnfs/iihe/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
# elif  'cern' in SITE:
#   treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'

# def makeMCDirectory(var=''):
#     if var:
#         return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
#     else:
#         return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

# mcDirectory = makeMCDirectory()
# # fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
# dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
# # embedDirectory = os.path.join(treeBaseDir, embedReco, embedSteps)

# ################################################
# ############ DATA DECLARATION ##################
# ################################################

# DataRun = [
#     ['A','Run2018A-UL2018-v1'],
#     ['B','Run2018B-UL2018-v1'],
#     ['C','Run2018C-UL2018-v1'],
#     ['D','Run2018D-UL2018-v1'],
# ]

# DataSets = ['MuonEG','SingleMuon','EGamma','DoubleMuon']

# DataTrig = {
#     'MuonEG'         : 'Trigger_ElMu' ,
#     'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
#     'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
#     'EGamma'         : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && (Trigger_sngEl || Trigger_dblEl)' ,
# }

#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*METFilter_MC' # *SFweight'
mcCommonWeight = 'XSWeight*METFilter_MC*PromptGenLepMatch2l' # *SFweight'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY UL #######

mcDirectory = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9"

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50')

samples['DY_UL'] = {
    'name'       : files,
    'weight'     : mcCommonWeight + '*(( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0)) && Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2)*LepCut2l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight_HWWW',
    'FilesPerJob': 2,
}


###### DY preUL #######

mcDirectory = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7"

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50')

samples['DY_preUL'] = {
    'name'       : files,
    'weight'     : mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 && Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )*LepCut2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW',
    'FilesPerJob': 2,
}

