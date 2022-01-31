import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # ggH2018
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

mcProduction = 'Autumn18_102X_nAODv7_Full2018v7'

dataReco = 'Run2018_102X_nAODv7_Full2018v7'

fakeReco = dataReco

embedReco = 'Embedding2018_102X_nAODv7_Full2018v7'

mcSteps = 'MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7{var}'

fakeSteps = 'DATAl1loose2018v7__l2loose__fakeW'

dataSteps = 'DATAl1loose2018v7__l2loose__l2tightOR2018v7'

embedSteps = 'DATAl1loose2018v7__l2loose__l2tightOR2018v7__Embedding'

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


############################################
############ MORE MC STAT ##################
############################################

def CombineBaseW(samples, proc, samplelist):
    newbaseW = getBaseWnAOD(mcDirectory, mcProduction, samplelist)
    for s in samplelist:
        addSampleWeight(samples, proc, s, newbaseW+'/baseW')


#########################################
############ MC COMMON ##################
#########################################

mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC'
mcCommonWeight = 'XSWeight*SFweight*PromptGenLepMatch2l*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY MC ######

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext2') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-70to100') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-600to800') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-800to1200') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-2500toInf') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-100to200') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-200to400') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-400to600') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-600toInf')

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                     Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )',
    'FilesPerJob': 6,
    'subsamples': {
      'hardJets'  : 'hardJets',
      'PUJets'    : 'PUJets'
    }
}

CombineBaseW(samples, 'DY', ['DYJetsToLL_M-10to50-LO',                  'DYJetsToLL_M-10to50-LO_ext1'])

addSampleWeight(samples,    'DY',   'DYJetsToLL_M-50_ext2',             'DY_NLO_pTllrw*(LHE_HT < 70)')
addSampleWeight(samples,    'DY',   'DYJetsToLL_M-10to50-LO',           'DY_LO_pTllrw*(LHE_HT < 100)')
addSampleWeight(samples,    'DY',   'DYJetsToLL_M-10to50-LO_ext1',      'DY_LO_pTllrw*(LHE_HT < 100)')
addSampleWeight(samples,    'DY',   'DYJetsToLL_M-50_HT-70to100',       'DY_LO_pTllrw')
addSampleWeight(samples,    'DY',   'DYJetsToLL_M-50_HT-100to200',      'DY_LO_pTllrw')
addSampleWeight(samples,    'DY',   'DYJetsToLL_M-50_HT-200to400',      'DY_LO_pTllrw')
addSampleWeight(samples,    'DY',   'DYJetsToLL_M-50_HT-400to600',      'DY_LO_pTllrw')
#addSampleWeight(samples,    'DY',   'DYJetsToLL_M-50_HT-400to600_ext2', 'DY_LO_pTllrw')
addSampleWeight(samples,    'DY',   'DYJetsToLL_M-50_HT-600to800',      'DY_LO_pTllrw')
addSampleWeight(samples,    'DY',   'DYJetsToLL_M-50_HT-800to1200',     'DY_LO_pTllrw')
addSampleWeight(samples,    'DY',   'DYJetsToLL_M-50_HT-1200to2500',    'DY_LO_pTllrw')
addSampleWeight(samples,    'DY',   'DYJetsToLL_M-50_HT-2500toInf',     'DY_LO_pTllrw')
addSampleWeight(samples,    'DY',   'DYJetsToLL_M-4to50_HT-100to200',   'DY_LO_pTllrw')
addSampleWeight(samples,    'DY',   'DYJetsToLL_M-4to50_HT-200to400',   'DY_LO_pTllrw')
addSampleWeight(samples,    'DY',   'DYJetsToLL_M-4to50_HT-400to600',   'DY_LO_pTllrw')
addSampleWeight(samples,    'DY',   'DYJetsToLL_M-4to50_HT-600toInf',   'DY_LO_pTllrw')


###### Zjj EWK #######

files = nanoGetSampleFiles(mcDirectory, 'EWKZ2Jets_ZToLL_M-50')

samples['Zjj'] = {
        'name': files,
        'weight': mcCommonWeight + '*(lhe_mjj[0] > 120)',
        'FilesPerJob': 1,
        }


###### Top #######

files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ST_s-channel_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_top_ext1')

samples['top'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 2,
}

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWJTo2L2Nu_NNLOPS'),
    'weight': mcCommonWeight + '*9',
    'FilesPerJob': 3
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

######## Vg ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

samples['Vg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch + '*(Gen_ZGstar_mass <= 0)',
     'FilesPerJob': 4
}


######## VgS ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'ZGToLLG') + \
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
addSampleWeight(samples, 'VgS', 'ZGToLLG', '(Gen_ZGstar_mass > 0)')
addSampleWeight(samples, 'VgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')

############ VZ ############

files = nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu_ext2') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Q') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo4L_ext2') + \
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

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight,
     'FilesPerJob': 4
}

##########################################
############### VBS SIGNAL ###############
##########################################

samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop_dipoleRecoil_private'),
    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)', #filter tops and Higgs
     'FilesPerJob': 4
}

###########################################
################## FAKE ###################
###########################################

samples['Fake'] = {
  'name': [],
  'weight': 'METFilter_DATA*fakeW',
  'weights': [],
  'isData': ['all'],
  #'suppressNegative' :['all'],
  #'suppressNegativeNuisances' :['all'],
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
