import os
import inspect
import subprocess
import string

# /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/WH_SS/Full2018nanov7

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2018nanov7
configurations = os.path.dirname(configurations) # WH_SS
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

dataReco = 'Run2018_102X_nAODv7_Full2018v7'

fakeReco = dataReco

embedReco = 'Embedding2018_102X_nAODv7_Full2018v7'

mcSteps = 'MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7{var}'

fakeSteps = 'DATAl1loose2018v7__l2loose__fakeW'

dataSteps = 'DATAl1loose2018v7__l2loose__l2tightOR2018v7'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'

def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__trigFix'))

mcDirectory = makeMCDirectory()
fakeDirectory = os.path.join(treeBaseDir, fakeReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
            ['A','Run2018A-02Apr2020-v1'] ,
            ['B','Run2018B-02Apr2020-v1'] ,
            ['C','Run2018C-02Apr2020-v1'] ,
            ['D','Run2018D-02Apr2020-v1'] ,
          ]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','EGamma']

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
mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC'
mcCommonWeight = 'XSWeight*SFweight*PromptGenLepMatch2l*METFilter_MC'


###########################################
#############  BACKGROUNDS  ###############
###########################################

############ DY ############

useDYtt = False
useDYHT = True

if useDYtt:
  files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
          nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')

  samples['DY'] = {
      'name': files,
      'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 \
                                  && Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )',
      'FilesPerJob': 6,
      'suppressNegative' :['all'],
      'suppressNegativeNuisances' :['all'],
  }
  addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50','DY_NLO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1','DY_LO_pTllrw')
  
else:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext2') + \
            nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO') + \
            nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
        Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )*ttHMVA_SF_flip_2l[0]',
        'FilesPerJob': 3,
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],
    }

    # Add DY HT Samples
    if useDYHT :
        samples['DY']['name'] +=     nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-100to200' ) \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-200to400' ) \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-400to600' ) \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-600toInf') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-70to100') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-600to800') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-800to1200')  \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-2500toInf')

    M10baseW = getBaseWnAOD(mcDirectory,'Autumn18_102X_nAODv7_Full2018v7',['DYJetsToLL_M-10to50-LO','DYJetsToLL_M-10to50-LO_ext1'])

    addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2'        ,'DY_NLO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO'      ,'DY_LO_pTllrw' +'*'+M10baseW+'/baseW')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1' ,'DY_LO_pTllrw' +'*'+M10baseW+'/baseW')

    if useDYHT :
        # Remove high HT from inclusive samples
        addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1', '(LHE_HT<100)')
        addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO'     , '(LHE_HT<100)')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2'       , '(LHE_HT<70)')
        # pt_ll weight
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-100to200','DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-200to400','DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-400to600','DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-600toInf','DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100'    ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200'   ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400'   ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600'   ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800'   ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200'  ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500' ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf'  ,'DY_LO_pTllrw')


# ############ DY OS ############
# # Select opposite-sign events 
# # and reweight them according
# # to the leptons charge-flip
# # probabilities

# useDYtt = False
# useDYHT = True

# if useDYtt:
#   files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
#           nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')

#   samples['DY_OS'] = {
#       'name': files,
#       'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 \
#                                   && Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )',
#       'FilesPerJob': 6,
#       'suppressNegative' :['all'],
#       'suppressNegativeNuisances' :['all'],
#   }
#   addSampleWeight(samples,'DY_OS','DYJetsToTT_MuEle_M-50','DY_NLO_pTllrw')
#   addSampleWeight(samples,'DY_OS','DYJetsToLL_M-10to50-LO_ext1','DY_LO_pTllrw')
  
# else:
#     files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext2') + \
#             nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO') + \
#             nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')

#     samples['DY_OS'] = {
#         'name': files,
#         'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
#         Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )*ttHMVA_eff_flip_2l[0]',  # FIX THIS!! change SFs for efficiencies!
#         'FilesPerJob': 3,
#         'suppressNegative' :['all'],
#         'suppressNegativeNuisances' :['all'],
#     }

#     # Add DY HT Samples
#     if useDYHT :
#         samples['DY_OS']['name'] +=  nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-100to200' ) \
#                                    + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-200to400' ) \
#                                    + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-400to600' ) \
#                                    + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-600toInf') \
#                                    + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-70to100') \
#                                    + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200') \
#                                    + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400') \
#                                    + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600') \
#                                    + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-600to800') \
#                                    + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-800to1200')  \
#                                    + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500') \
#                                    + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-2500toInf')

#     M10baseW = getBaseWnAOD(mcDirectory,'Autumn18_102X_nAODv7_Full2018v7',['DYJetsToLL_M-10to50-LO','DYJetsToLL_M-10to50-LO_ext1'])

#     addSampleWeight(samples,'DY_OS','DYJetsToLL_M-50_ext2'        ,'DY_NLO_pTllrw')
#     addSampleWeight(samples,'DY_OS','DYJetsToLL_M-10to50-LO'      ,'DY_LO_pTllrw' +'*'+M10baseW+'/baseW')
#     addSampleWeight(samples,'DY_OS','DYJetsToLL_M-10to50-LO_ext1' ,'DY_LO_pTllrw' +'*'+M10baseW+'/baseW')

#     if useDYHT :
#         # Remove high HT from inclusive samples
#         addSampleWeight(samples,'DY_OS','DYJetsToLL_M-10to50-LO_ext1', '(LHE_HT<100)')
#         addSampleWeight(samples,'DY_OS','DYJetsToLL_M-10to50-LO'     , '(LHE_HT<100)')
#         addSampleWeight(samples,'DY_OS','DYJetsToLL_M-50_ext2'       , '(LHE_HT<70)')
#         # pt_ll weight
#         addSampleWeight(samples,'DY_OS','DYJetsToLL_M-4to50_HT-100to200','DY_LO_pTllrw')
#         addSampleWeight(samples,'DY_OS','DYJetsToLL_M-4to50_HT-200to400','DY_LO_pTllrw')
#         addSampleWeight(samples,'DY_OS','DYJetsToLL_M-4to50_HT-400to600','DY_LO_pTllrw')
#         addSampleWeight(samples,'DY_OS','DYJetsToLL_M-4to50_HT-600toInf','DY_LO_pTllrw')
#         addSampleWeight(samples,'DY_OS','DYJetsToLL_M-50_HT-70to100'    ,'DY_LO_pTllrw')
#         addSampleWeight(samples,'DY_OS','DYJetsToLL_M-50_HT-100to200'   ,'DY_LO_pTllrw')
#         addSampleWeight(samples,'DY_OS','DYJetsToLL_M-50_HT-200to400'   ,'DY_LO_pTllrw')
#         addSampleWeight(samples,'DY_OS','DYJetsToLL_M-50_HT-400to600'   ,'DY_LO_pTllrw')
#         addSampleWeight(samples,'DY_OS','DYJetsToLL_M-50_HT-600to800'   ,'DY_LO_pTllrw')
#         addSampleWeight(samples,'DY_OS','DYJetsToLL_M-50_HT-800to1200'  ,'DY_LO_pTllrw')
#         addSampleWeight(samples,'DY_OS','DYJetsToLL_M-50_HT-1200to2500' ,'DY_LO_pTllrw')
#         addSampleWeight(samples,'DY_OS','DYJetsToLL_M-50_HT-2500toInf'  ,'DY_LO_pTllrw')


############ Top ############

files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ST_s-channel_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_top_ext1')

samples['top'] = {
    'name': files,
    'weight': mcCommonWeight+'*ttHMVA_SF_flip_2l[0]',
    'FilesPerJob': 2,
}

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight + '*nllW*ttHMVA_SF_flip_2l[0]',
    'FilesPerJob': 3
}

samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK'),
    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)', #filter tops and Higgs
    'FilesPerJob': 4
}

# k-factor 1.4 already taken into account in XSWeight
files = nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENEN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENMN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENTN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNEN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNMN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNTN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNEN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNMN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNTN')

samples['ggWW'] = {
    'name': files,
    'weight': mcCommonWeight + '*1.53/1.4', # updating k-factor
    'FilesPerJob': 4
}

######## Zg ########

files = nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

samples['Zg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch + '*(Gen_ZGstar_mass <= 0)',
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4
}
# the following is needed in both v5 and v6
addSampleWeight(samples, 'Zg', 'ZGToLLG', '0.448')

######## Wg ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM')

samples['Wg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch + '*(Gen_ZGstar_mass <= 0)',
    'FilesPerJob': 4
}

######## ZgS ########

files = nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

samples['ZgS'] = {
    'name': files,
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4,
}
addSampleWeight(samples, 'ZgS', 'ZGToLLG', '(Gen_ZGstar_mass > 0)*0.448')

######## WgS ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')

samples['WgS'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarLow * 0.94)',
    'FilesPerJob': 4,
}
addSampleWeight(samples, 'WgS', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples, 'WgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')

######## WZ ########

files = nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo2L2Q')

samples['WZ'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarHigh)',
    'FilesPerJob': 4,
}

############ ZZ ############

files = nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Q') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo4L_ext1')

samples['ZZ'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

########## VVV #########

files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWW')
#+ nanoGetSampleFiles(mcDirectory, 'WWG'), #should this be included? or is it already taken into account in the WW sample?

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}


###########################################
#############   SIGNALS  ##################
###########################################

signals = []

#### ggH -> WW

samples['ggH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2NuPowheg_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1
}

signals.append('ggH_hww')

############ VBF H->WW ############
samples['qqH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

signals.append('qqH_hww')

############ ZH H->WW ############

samples['ZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

signals.append('ZH_hww')

samples['ggZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

signals.append('ggZH_hww')

############ WH H->WW ############

samples['WH_hww_plus'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

signals.append('WH_hww_plus')


samples['WH_hww_minus'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

signals.append('WH_hww_minus')

############ ttH ############

samples['ttH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1
}

signals.append('ttH_hww')

############ H->TauTau ############

samples['ggH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 20
}

signals.append('ggH_htt')

samples['qqH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 10
}

signals.append('qqH_htt')

samples['ZH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

signals.append('ZH_htt')

############ WH H->TauTau ############

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

###########################################
################## FAKE ###################
###########################################

samples['Fake'] = {
  'name': [],
  'weight': 'METFilter_DATA*fakeW',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 10
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(fakeDirectory, pd + '_' + sd)
    samples['Fake']['name'].extend(files)
    samples['Fake']['weights'].extend([DataTrig[pd]] * len(files))

samples['Fake']['subsamples'] = {
    'em': 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13',
    'mm': 'Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13',
    'ee': 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11'
}

###########################################
################## DATA ###################
###########################################

samples['DATA'] = {
  'name': [],
  'weight': 'METFilter_DATA*LepWPCut',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 120
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))

