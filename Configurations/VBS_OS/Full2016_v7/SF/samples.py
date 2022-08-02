import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # ggH2016
configurations = os.path.dirname(configurations) # Differential
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, getBaseWnAOD, addSampleWeight

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

mcProduction = 'Summer16_102X_nAODv7_Full2016v7'

dataReco = 'Run2016_102X_nAODv7_Full2016v7'

embedReco = 'Embedding2016_102X_nAODv7_Full2016v7'

mcSteps = 'MCl1loose2016v7__MCCorr2016v7__l2loose__l2tightOR2016v7{var}'

fakeSteps = 'DATAl1loose2016v7__l2loose__fakeW'

dataSteps = 'DATAl1loose2016v7__l2loose__l2tightOR2016v7'

embedSteps = 'DATAl1loose2016v7__l2loose__l2tightOR2016v7__Embedding'

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
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
embedDirectory = os.path.join(treeBaseDir, embedReco, embedSteps)

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2016B-02Apr2020_ver2-v1'],
    ['C','Run2016C-02Apr2020-v1'],
    ['D','Run2016D-02Apr2020-v1'],
    ['E','Run2016E-02Apr2020-v1'],
    ['F','Run2016F-02Apr2020-v1'],
    ['G','Run2016G-02Apr2020-v1'],
    ['H','Run2016H-02Apr2020-v1']
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


############################################
############ MORE MC STAT ##################
############################################

def CombineBaseW(samples, proc, samplelist):
    newbaseW = getBaseWnAOD(mcDirectory, mcProduction, samplelist)
    for s in samplelist:
        addSampleWeight(samples, proc, s, newbaseW+'/baseW')


###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext2') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-70to100') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-600to800') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-800to1200') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-2500toInf') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-70to100') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-100to200') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-200to400') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-200to400_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-400to600') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-400to600_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-600toinf') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-600toinf_ext1')

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0))',
    'FilesPerJob': 4,
    'subsamples': {
      'hardJets'  : 'hardJets',
      'PUJets'    : 'PUJets'
    }
}

CombineBaseW(samples, 'DY', ['DYJetsToLL_M-10to50'            , 'DYJetsToLL_M-10to50_ext1'])
CombineBaseW(samples, 'DY', ['DYJetsToLL_M-50_HT-100to200'    , 'DYJetsToLL_M-50_HT-100to200_ext1'])
CombineBaseW(samples, 'DY', ['DYJetsToLL_M-50_HT-200to400'    , 'DYJetsToLL_M-50_HT-200to400_ext1'])
CombineBaseW(samples, 'DY', ['DYJetsToLL_M-50_HT-400to600'    , 'DYJetsToLL_M-50_HT-400to600_ext1'])
CombineBaseW(samples, 'DY', ['DYJetsToLL_M-5to50_HT-200to400' , 'DYJetsToLL_M-5to50_HT-200to400_ext1'])
CombineBaseW(samples, 'DY', ['DYJetsToLL_M-5to50_HT-400to600' , 'DYJetsToLL_M-5to50_HT-400to600_ext1'])
CombineBaseW(samples, 'DY', ['DYJetsToLL_M-5to50_HT-600toinf' , 'DYJetsToLL_M-5to50_HT-600toinf_ext1'])

addSampleWeight(samples, 'DY', 'DYJetsToLL_M-50_ext2',                  'DY_NLO_pTllrw*(LHE_HT < 70)')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-10to50',                   'DY_NLO_pTllrw*(LHE_HT < 70)')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-10to50_ext1',              'DY_NLO_pTllrw*(LHE_HT < 70)')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-50_HT-70to100',            'DY_LO_pTllrw')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-50_HT-100to200',           'DY_LO_pTllrw')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-50_HT-100to200_ext1',      'DY_LO_pTllrw')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-50_HT-200to400',           'DY_LO_pTllrw')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-50_HT-200to400_ext1',      'DY_LO_pTllrw')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-50_HT-400to600',           'DY_LO_pTllrw')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-50_HT-400to600_ext1',      'DY_LO_pTllrw')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-50_HT-600to800',           'DY_LO_pTllrw')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-50_HT-800to1200',          'DY_LO_pTllrw')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-50_HT-1200to2500',         'DY_LO_pTllrw')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-50_HT-2500toInf',          'DY_LO_pTllrw')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-5to50_HT-70to100',         'DY_LO_pTllrw')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-5to50_HT-100to200',        'DY_LO_pTllrw')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-5to50_HT-200to400',        'DY_LO_pTllrw')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-5to50_HT-200to400_ext1',   'DY_LO_pTllrw')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-5to50_HT-400to600',        'DY_LO_pTllrw')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-5to50_HT-400to600_ext1',   'DY_LO_pTllrw')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-5to50_HT-600toinf',        'DY_LO_pTllrw')
addSampleWeight(samples, 'DY', 'DYJetsToLL_M-5to50_HT-600toinf_ext1',   'DY_LO_pTllrw')


###### Zjj EWK #######

files = nanoGetSampleFiles(mcDirectory, 'EWK_LLJJ_MLL-50_MJJ-120')

samples['Zjj'] = {
        'name': files,
        'weight': mcCommonWeight,
        'FilesPerJob': 1,
        }


###### Top #######

files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ST_s-channel') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_top')

samples['top'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
}

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWJTo2L2Nu_NNLOPS'),
    'weight': mcCommonWeight + '*9',
    'FilesPerJob': 1
}

samples['ggWW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluWWTo2L2Nu_MCFM'),
    'weight': mcCommonWeight + '*1.53/1.4', # updating k-factor
    'FilesPerJob': 4
}

######## Vg ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'Zg')

samples['Vg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch + '*(!(Gen_ZGstar_mass > 0))',
    'FilesPerJob': 4
}

######## VgS ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'Zg') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')

samples['VgS'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
    'FilesPerJob': 4,
    'subsamples': {
      'L': 'gstarLow',
      'H': 'gstarHigh'
    }
}
addSampleWeight(samples, 'VgS', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples, 'VgS', 'Zg', '(Gen_ZGstar_mass > 0)')
addSampleWeight(samples, 'VgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')

############ VZ ############

files = nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Q') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo4L') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo2L2Q')

samples['VZ'] = {
    'name': files,
    'weight': mcCommonWeight + '*1.11',
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

##########################################
############### VBS SIGNAL ###############
##########################################
signals = []

samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop_dipoleRecoil_private'),
    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)', # filter tops and Higgs, limit w mass
    'FilesPerJob': 4
}

signals.append('WWewk')


###########################################
################## FAKE ###################
###########################################

samples['Fake'] = {
  'name': [],
  'weight': 'METFilter_DATA*fakeW',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 50
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(fakeDirectory, pd + '_' + sd)

    samples['Fake']['name'].extend(files)
    samples['Fake']['weights'].extend([DataTrig[pd]] * len(files))

samples['Fake']['subsamples'] = {
  'e': 'abs(Lepton_pdgId[1]) == 11',
  'm': 'abs(Lepton_pdgId[1]) == 13'
}

###########################################
################## DATA ###################
###########################################

samples['DATA'] = {
  'name': [],
  'weight': 'METFilter_DATA*LepWPCut',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 50
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))
