import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # ggH2016
configurations = os.path.dirname(configurations) # Differential
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

mcProduction = 'Autumn18_102X_nAODv5_Full2018v5'

mcSteps = 'MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5'

dataReco = 'Run2018_102X_nAODv5_Full2018v5'

fakeSteps = 'DATAl1loose2018v5__l2loose__fakeW'

dataSteps = 'DATAl1loose2018v5__l2loose__l2tightOR2018v5'

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
        # return '/afs/cern.ch/user/y/yiiyama/public/hwwvirtual/Summer16/l2tightOR__{var}'.format(var=var)
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))
        # return '/afs/cern.ch/user/y/yiiyama/public/hwwvirtual/Summer16/l2tightOR'

mcDirectory = makeMCDirectory()
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
            ['A','Run2018A-Nano1June2019-v1'] ,
            ['B','Run2018B-Nano1June2019-v1'] ,
            ['C','Run2018C-Nano1June2019-v1'] ,
            ['D','Run2018D-Nano1June2019_ver2-v1'] ,
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
mcCommonWeight = 'XSWeight*SFweight*PromptGenLepMatch3l*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight,
    'FilesPerJob': 5
}

######## Vg ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

samples['Vg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch + '*!(Gen_ZGstar_mass > 0)',
    'FilesPerJob': 4
}

######## VgS ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

samples['VgS'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4,
}
addSampleWeight(samples, 'VgS', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples, 'VgS', 'ZGToLLG', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22)*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt < 20.) == 0)')

############ ZZ ############

samples['ZZ'] = {
    'name': nanoGetSampleFiles(mcDirectory,'ZZTo4L_ext1'),
    'weight': mcCommonWeight,
    'FilesPerJob' : 5,
}

############ WZ ############

samples['WZ'] = {
    'name': nanoGetSampleFiles(mcDirectory,'WZTo3LNu_mllmin01'),
    'weight': mcCommonWeight,
    'FilesPerJob' : 5,
}
addSampleWeight(samples,'WZ','WZTo3LNu_mllmin01', '(Gen_ZGstar_mass>=0.1)')

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

###########################################
#############   SIGNALS  ##################
###########################################

signals = []

############ WH H->WW ############

samples['WH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

signals.append('WH_hww')

############ H->TauTau ############

# samples['WH_htt'] = {
    # 'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
    # 'weight': mcCommonWeight,
    # 'FilesPerJob': 4
# }
# signals.append('WH_htt')


###########################################
################## FAKE ###################
###########################################

samples['Fake'] = {
  'name': [],
  'weight': 'METFilter_DATA*fakeW',
  'weights': [],
  'isData': ['all'],
  # 'FilesPerJob': 100
  'FilesPerJob': 25
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
  # 'FilesPerJob': 100
  'FilesPerJob': 25
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))

