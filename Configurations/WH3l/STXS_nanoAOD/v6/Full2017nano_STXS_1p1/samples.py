import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # ggH2016
configurations = os.path.dirname(configurations) # Differential
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight,getBaseWnAOD

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

dataReco = 'Run2017_102X_nAODv5_Full2017v6'

fakeReco = 'Run2017_102X_nAODv5_Full2017v6_ForNewWPs'

mcProduction = 'Fall2017_102X_nAODv5_Full2017v6'

mcSteps = 'MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6{var}'

fakeSteps = 'DATAl1loose2017v6__l2loose__fakeW'

dataSteps = 'DATAl1loose2017v6__l2loose__l2tightOR2017v6'

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
fakeDirectory = os.path.join(treeBaseDir, fakeReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2017B-Nano1June2019-v1'],
    ['C','Run2017C-Nano1June2019-v1'],
    ['D','Run2017D-Nano1June2019-v1'],
    ['E','Run2017E-Nano1June2019-v1'],
    ['F','Run2017F-Nano1June2019-v1']
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
mcCommonWeight        = 'XSWeight*SFweight*METFilter_MC'
mcCommonWeightMatched = 'XSWeight*SFweight*PromptGenLepMatch3l*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeightMatched + '*nllW', # temporary
    'FilesPerJob': 5
}

######## Vg ########
samples['Wg'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM'),
    'weight': mcCommonWeight + '*(Gen_ZGstar_mass <= 0)',
    'FilesPerJob': 4
}
samples['Zg'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'ZGToLLG'),
    'weight': "*".join([mcCommonWeight, '(Gen_ZGstar_mass <= 0)']),
    'FilesPerJob': 3
    # 'FilesPerJob': 4
}

######## VgS ########

samples['WgS'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM'),
    'weight': "*".join([mcCommonWeightMatched, '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)']),
    'FilesPerJob': 4,
}
samples['ZgS'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'ZGToLLG'),
    'weight': "*".join([mcCommonWeightMatched, "(Gen_ZGstar_mass > 0)"]),
    # 'FilesPerJob': 4,
    'FilesPerJob': 3,
}

############ ZZ ############

samples['ZZ']  = {  
    'name'   :   nanoGetSampleFiles(mcDirectory,'ZZTo4L'),
    'weight': mcCommonWeightMatched,
    'FilesPerJob': 3,
                 }
addSampleWeight(samples,'ZZ','ZZTo4L',"1.17") 
# samples['ZZ'] = {
    # 'name': nanoGetSampleFiles(mcDirectory,'ZZTo4L')+nanoGetSampleFiles(mcDirectory,'ZZTo4L_ext1'),
    # 'weight': mcCommonWeightMatched,
    # 'FilesPerJob' : 1,
    # # 'FilesPerJob' : 5,
# }
# ZZbaseW   = getBaseWnAOD(mcDirectory,'Fall2017_102X_nAODv4_Full2017v5',['ZZTo4L',  'ZZTo4L_ext1'])
# addSampleWeight(samples,'ZZ','ZZTo4L',        "1.17*"+ZZbaseW+"/baseW") ## The NNLO/NLO k-factor, cited from https://arxiv.org/abs/1405.2219v1
# addSampleWeight(samples,'ZZ','ZZTo4L_ext1',   "1.17*"+ZZbaseW+"/baseW")


############ WZ ############

samples['WZ'] = {
    'name': nanoGetSampleFiles(mcDirectory,'WZTo3LNu_mllmin01'),
    'weight': mcCommonWeightMatched,
    'FilesPerJob' : 2,
    # 'FilesPerJob' : 5,
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

############ WH H->WW ############
'''
samples['WH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    'weight': mcCommonWeightMatched,
    'FilesPerJob': 4
}

signals.append('WH_hww')
'''

samples['WH_hww'] = { 'name'   :
                      getSampleFiles(makeMCDirectory(),'HWplusJ_HToWW_M125',True,'nanoLatino_')
                      + getSampleFiles(makeMCDirectory(),'HWminusJ_HToWW_M125',True,'nanoLatino_'),
                      'weight' : mcCommonWeightMatched,
                      'suppressNegativeNuisances' :['all'],
                      'FilesPerJob': 4,
                      'subsamples' : {
                        'PTV_LT150' : 'HTXS_stage1_1_cat_pTjet30GeV==301 || HTXS_stage1_1_cat_pTjet30GeV==302',
                        'PTV_GT150' : 'HTXS_stage1_1_cat_pTjet30GeV==303 || HTXS_stage1_1_cat_pTjet30GeV==304 || HTXS_stage1_1_cat_pTjet30GeV==305',
                        'FWDH'      : 'HTXS_stage1_1_cat_pTjet30GeV==300'
                      }
                    }

signals.append('WH_hww')

############ H->TauTau ############

# samples['WH_htt'] = {
    # 'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
    # 'weight': mcCommonWeightMatched,
    # 'FilesPerJob': 4
# }
# signals.append('WH_htt')

samples['H_htt'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125')
           + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125')
           + nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125')
           + nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125')
           + nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125'),
    'weight': mcCommonWeightMatched,
    'FilesPerJob': 5
}
signals.append('H_htt')


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

###########################################
################## DATA ###################
###########################################

samples['DATA'] = {
  'name': [],
  'weight': 'METFilter_DATA*LepWPCut',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 200
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))

