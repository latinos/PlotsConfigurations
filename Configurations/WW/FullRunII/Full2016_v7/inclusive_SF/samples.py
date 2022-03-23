import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # inclusive
configurations = os.path.dirname(configurations) # Full2016_v7
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseWnAOD, addSampleWeight

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

mcSteps = 'MCl1loose2016v7__MCCorr2016v7__l2loose__l2tightOR2016v7{var}'

fakeSteps = 'DATAl1loose2016v7__l2loose__fakeW'

dataSteps = 'DATAl1loose2016v7__l2loose__l2tightOR2016v7'


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


###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######

useDYtt = False
useDYHT = True

if useDYtt:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
            nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                     Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )',
        'FilesPerJob': 4,
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],
    }
    addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50','DY_NLO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50','DY_NLO_pTllrw')

else:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext2') + \
            nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                     Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )',
        'FilesPerJob': 4,
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],

    }
    # Add DY HT Samples
    if useDYHT :
        samples['DY']['name'] +=   nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-70to100') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-100to200') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-200to400') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-400to600_ext1') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-600toinf') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-70to100') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200_ext1') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400_ext1') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600_ext1') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-600to800') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-800to1200') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-2500toInf')

    addSampleWeight(samples, 'DY', 'DYJetsToLL_M-50_ext2', 'DY_NLO_pTllrw')
    addSampleWeight(samples, 'DY', 'DYJetsToLL_M-10to50',  'DY_NLO_pTllrw')

    if useDYHT :
        # Remove high HT from inclusive samples
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2', '(LHE_HT<70.0)*(RinoutSFs_0j + RinoutSFs_1j + RinoutSFs_2j)')
        addSampleWeight(samples,'DY','DYJetsToLL_M-10to50',  '(LHE_HT<70.0)*(RinoutSFs_0j + RinoutSFs_1j + RinoutSFs_2j)')
        # pt_ll weight
        addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-70to100'       ,'DY_LO_pTllrw*(RinoutSFs_0j + RinoutSFs_1j + RinoutSFs_2j)')
        addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-100to200'      ,'DY_LO_pTllrw*(RinoutSFs_0j + RinoutSFs_1j + RinoutSFs_2j)')
        addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400'      ,'DY_LO_pTllrw*(RinoutSFs_0j + RinoutSFs_1j + RinoutSFs_2j)')
        addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600_ext1' ,'DY_LO_pTllrw*(RinoutSFs_0j + RinoutSFs_1j + RinoutSFs_2j)')
        addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toinf'      ,'DY_LO_pTllrw*(RinoutSFs_0j + RinoutSFs_1j + RinoutSFs_2j)')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100'          ,'DY_LO_pTllrw*(RinoutSFs_0j + RinoutSFs_1j + RinoutSFs_2j)')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200_ext1'    ,'DY_LO_pTllrw*(RinoutSFs_0j + RinoutSFs_1j + RinoutSFs_2j)')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400_ext1'    ,'DY_LO_pTllrw*(RinoutSFs_0j + RinoutSFs_1j + RinoutSFs_2j)')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext1'    ,'DY_LO_pTllrw*(RinoutSFs_0j + RinoutSFs_1j + RinoutSFs_2j)')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800'         ,'DY_LO_pTllrw*(RinoutSFs_0j + RinoutSFs_1j + RinoutSFs_2j)')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200'        ,'DY_LO_pTllrw*(RinoutSFs_0j + RinoutSFs_1j + RinoutSFs_2j)')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500'       ,'DY_LO_pTllrw*(RinoutSFs_0j + RinoutSFs_1j + RinoutSFs_2j)')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf'        ,'DY_LO_pTllrw*(RinoutSFs_0j + RinoutSFs_1j + RinoutSFs_2j)')


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
    'FilesPerJob': 2,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')


######## Wg ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM')

samples['Wg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch + '*(!(Gen_ZGstar_mass > 0))',
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

######## Zg #######

files = nanoGetSampleFiles(mcDirectory, 'Zg') + nanoGetSampleFiles(mcDirectory, 'Zg_ext1')

samples['Zg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch + '*(!(Gen_ZGstar_mass > 0))',
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

ZGbaseW = getBaseWnAOD(mcDirectory, mcProduction, ['Zg', 'Zg_ext1'])

addSampleWeight(samples,'Zg','Zg',      ZGbaseW+'/baseW')
addSampleWeight(samples,'Zg','Zg_ext1', ZGbaseW+'/baseW')

######## ZgS ########

files = nanoGetSampleFiles(mcDirectory, 'Zg') + nanoGetSampleFiles(mcDirectory, 'Zg_ext1')

samples['ZgS'] = {
    'name': files,
    'weight': mcCommonWeight + '*(Gen_ZGstar_mass > 0)',
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    }

addSampleWeight(samples,'ZgS','Zg',      ZGbaseW+'/baseW')
addSampleWeight(samples,'ZgS','Zg_ext1', ZGbaseW+'/baseW')

######## WgS ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01_ext1')

samples['WgS'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarLow * 0.94)',
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

WZbaseW = getBaseWnAOD(mcDirectory, mcProduction, ['WZTo3LNu_mllmin01', 'WZTo3LNu_mllmin01_ext1'])

addSampleWeight(samples, 'WgS', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples, 'WgS', 'WZTo3LNu_mllmin01',      '(Gen_ZGstar_mass > 0.1)*'+WZbaseW+'/baseW')
addSampleWeight(samples, 'WgS', 'WZTo3LNu_mllmin01_ext1', '(Gen_ZGstar_mass > 0.1)*'+WZbaseW+'/baseW')

######## WZ ########

files = nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01') + \
        nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo2L2Q')

samples['WZ'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarHigh)',
    'FilesPerJob': 3,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

addSampleWeight(samples, 'WZ', 'WZTo3LNu_mllmin01',      WZbaseW+'/baseW')
addSampleWeight(samples, 'WZ', 'WZTo3LNu_mllmin01_ext1', WZbaseW+'/baseW')

############ ZZ ############

files = nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu') + \
        nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Q') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo4L') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo4L_ext1')

samples['ZZ'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

ZZ2LbaseW = getBaseWnAOD(mcDirectory, mcProduction, ['ZZTo2L2Nu', 'ZZTo2L2Nu_ext1'])
ZZ4LbaseW = getBaseWnAOD(mcDirectory, mcProduction, ['ZZTo4L', 'ZZTo4L_ext1'])

addSampleWeight(samples, 'ZZ', 'ZZTo2L2Nu',      ZZ2LbaseW+'/baseW')
addSampleWeight(samples, 'ZZ', 'ZZTo2L2Nu_ext1', ZZ2LbaseW+'/baseW')
addSampleWeight(samples, 'ZZ', 'ZZTo4L',         ZZ4LbaseW+'/baseW')
addSampleWeight(samples, 'ZZ', 'ZZTo4L_ext1',    ZZ4LbaseW+'/baseW')

########## VVV #########

files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWW')
#+ nanoGetSampleFiles(mcDirectory, 'WWG'), #should this be included? or is it already taken into account in the WW sample?

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop'),
    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)*(lhe_mW1[0] > 60. && lhe_mW1[0] < 100. && lhe_mW2[0] > 60. && lhe_mW2[0] < 100.)', #filter tops and Higgs, limit w mass
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

#### ggH -> WW

samples['ggH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2NuPowheg_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

############ VBF H->WW ############

samples['qqH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

############ ZH H->WW ############

samples['ZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

samples['ggZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'ggZH_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

############ WH H->WW ############

samples['WH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

############ ttH ############

samples['ttH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

############ H->TauTau ############

samples['ggH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

samples['qqH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

samples['ZH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

samples['WH_htt'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

###########################################
#############   SIGNALS  ##################
###########################################

signals = []

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight+'*nllW',
    'FilesPerJob': 2,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

signals.append('WW')

samples['ggWW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluWWTo2L2Nu_MCFM'),
    'weight': mcCommonWeight+'*1.53/1.4', # updating k-factor
    'FilesPerJob': 4,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}
signals.append('ggWW')

### Now bin in nonfiducial / fiducial x bins

nbins = 1

for sname in signals:
  sample = samples[sname]
  sample['subsamples'] = {}

  sample['subsamples']['nonfid'] = '!(fid)'

  for i in range(nbins):
      sample['subsamples']['B%d'%i] = 'fid && B%d'%i

###########################################
################## FAKE ###################
###########################################

samples['Fake'] = {
  'name': [],
  'weight': 'METFilter_DATA*fakeW',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 100,
  'suppressNegative' :['all'],
  'suppressNegativeNuisances' :['all'],
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(fakeDirectory, pd + '_' + sd)

    samples['Fake']['name'].extend(files)
    samples['Fake']['weights'].extend([DataTrig[pd]] * len(files))


###########################################
################## DATA ###################
###########################################

samples['DATA'] = {
  'name': [],
  'weight': 'METFilter_DATA*LepWPCut',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 100
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)

    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))

