import os
import copy
from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def nanoGetSampleFiles(inputDir, Sample):
    return getSampleFiles(inputDir, Sample, False, 'nanoLatino_')

# samples

try:
    len(samples)
except NameError:
    import collections
    samples = collections.OrderedDict()

################################################
############### Fiducial bins ##################
################################################

pthBinning = ['0', '10', '15', '20', '30', '45', '60', '80', '100', '120', '155', '200', '260', '350', 'inf']
pthBins = []
for ibin in range(len(pthBinning) - 1):
    low, high = pthBinning[ibin:ibin + 2]
    if high == 'inf':
      pthBins.append('GT%s' % low)
    else:
      pthBins.append('%s_%s' % (low, high))

#yhBinning = [0., 0.15, 0.3, 0.6, 0.9, 1.2, 2.5, 10.]
njetBinning = ['0', '1', '2', '3', 'GE4']

################################################
################# SKIMS ########################
################################################

mcProduction = 'Fall2017_nAOD_v1_Full2017v2'

dataReco = 'Run2017_nAOD_v1_Full2017v2'

mcSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017{var}__wwSel'
#mcSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017{var}'

def makeMCDirectory(var = ''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var = '__' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var = ''))

fakeSteps = 'DATAl1loose2017v2__DATACorr2017__l2loose__fakeW__hadd__wwSel'
#fakeSteps = 'DATAl1loose2017v2__DATACorr2017__l2loose__fakeW'

dataSteps = 'DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017__hadd__wwSel'
#dataSteps = 'DATAl1loose2017v2__DATACorr2017__l2loose'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'

mcDirectory = makeMCDirectory()
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2017B-31Mar2018-v1'],
    ['C','Run2017C-31Mar2018-v1'],
    ['D','Run2017D-31Mar2018-v1'],
    ['E','Run2017E-31Mar2018-v1'],
    ['F','Run2017F-31Mar2018-v1']
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

mcCommonWeight = 'XSWeight*SFweight*GenLepMatch2l*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######

useDYtt = False

if useDYtt:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight,
        'FilesPerJob': 4,
    }
    addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50','ptllDYW_NLO')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO','ptllDYW_LO')

    ## Remove OF from inclusive sample (is it needed?)
    #cutSF = '(abs(Lepton_pdgId[0]*Lepton_pdgId[1]) == 11*11)||(Lepton_pdgId[0]*Lepton_pdgId[1]) == 13*13)'
    #addSampleWeight(samples,'DY','DYJetsToLL_M-50',cutSF)

else:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight,
        'FilesPerJob': 4,
    }
    addSampleWeight(samples,'DY','DYJetsToLL_M-50','ptllDYW_NLO')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO','ptllDYW_LO')

#samples['DY']['subsamples'] = {
#  '0j': 'zeroJet',
#  '1j': 'oneJet',
#  '2j': 'twoJet',
#  '3j': 'threeJet',
#  'ge4j': 'manyJets'
#}

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
    'EventsPerJob': 100000
}

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

#samples['top']['subsamples'] = {
#  '0j': 'zeroJet',
#  '1j': 'oneJet',
#  '2j': 'twoJet',
#  '3j': 'threeJet',
#  'ge4j': 'manyJets'
#}

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu_PrivateNano'),
    'weight': mcCommonWeight + '*nllW',
    'FilesPerJob': 1
}

#samples['WW']['subsamples'] = {
#  '0j': 'zeroJet',
#  '1j': 'oneJet',
#  '2j': 'twoJet',
#  '3j': 'threeJet',
#  'ge4j': 'manyJets'
#}

#FIXME Check if k-factor is already taken into account in XSWeight
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
    'weight': mcCommonWeight,
    'FilesPerJob': 2
}

######## Vg ########

#FIXME Add Zg when available
samples['Vg'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM'),
    #+ nanoGetSampleFiles(mcDirectory, 'Zg'),
    #'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC + '* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
    'weight': 'XSWeight*SFweight*METFilter_MC*(Gen_ZGstar_mass<4)'
}

######## VgS ########

#FIXME Use WZTo3LNu_mllmin01 sample (gstar mass > 100 MeV) when available. This one has gstar mass > 4 GeV
#FIXME Add normalization k-factor
samples['WZgS_H'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WZTo3LNu'),
    'weight': mcCommonWeight+'*(Gen_ZGstar_mass>4)',
    'FilesPerJob': 1
}

############ VZ ############

files = nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Q') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo4L') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo2L2Q')

samples['VZ'] = {
    'name': files,
    'weight': mcCommonWeight + '*0.98',
    'FilesPerJob': 10
}

########## VVV #########

files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWW')
#+ nanoGetSampleFiles(mcDirectory, 'WWG'), #should this be included? or is it already taken into account in the WW sample?

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight
}

###########################################
#############   SIGNALS  ##################
###########################################

signals = []

#### ggH -> WW

samples['ggH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2NuPowheg_M125_PrivateNano'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1
}

signals.append('ggH_hww')

############ VBF H->WW ############
samples['qqH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2NuPowheg_M125_PrivateNano'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1
}

signals.append('qqH_hww')

############ ZH H->WW ############

samples['ZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HZJ_HToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

signals.append('ZH_hww')

samples['ggZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWW_M125'),
    'weight': mcCommonWeight
}

signals.append('ggZH_hww')

############ WH H->WW ############

samples['WH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125')
    + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 30
}

signals.append('WH_hww')

############ ttH ############

samples['ttH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1
}

signals.append('ttH_hww')

############ bbH ############
#FIXME Missing samples

############ H->TauTau ############

samples['ggH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 3
}

signals.append('ggH_htt')

samples['qqH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 3
}

signals.append('qqH_htt')

samples['ZH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1
}

signals.append('ZH_htt')

samples['WH_htt'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125')
    + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1
}

signals.append('WH_htt')

for sname in signals:
  sample = samples[sname]
  sample['subsamples'] = {}

  for flabel, fidcut in [('fid', 'fiducial'), ('nonfid', '!fiducial')]:
    for pth in pthBins:
      binName = '%s_PTH_%s' % (flabel, pth)
      if pth.startswith('GT'):
        cut = '%s && genPth > %s' % (fidcut, pth[2:])
      else:
        cut = '%s && genPth > %s && genPth < %s' % ((fidcut,) + tuple(pth.split('_')))
  
      sample['subsamples'][binName] = cut
  
    for nj in njetBinning:
      binName = '%s_NJ_%s' % (flabel, nj)
      if nj.startswith('GE'):
        cut = '%s && nCleanGenJet >= %s' % (fidcut, nj[2:])
      else:
        cut = '%s && nCleanGenJet == %s' % (fidcut, nj)
  
      sample['subsamples'][binName] = cut

###########################################
################## FAKE ###################
###########################################

samples['Fake'] = {
  'name': [],
  'weight': 'METFilter_DATA*fakeW',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 3,
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(fakeDirectory, pd + '_' + sd)
    samples['Fake']['name'].extend(files)
    samples['Fake']['weights'].extend([DataTrig[pd]] * len(files))

samples['Fake']['subsamples'] = {
  'em': 'abs(Lepton_pdgId[0]) == 11',
  'me': 'abs(Lepton_pdgId[0]) == 13'
}

###########################################
################## DATA ###################
###########################################

samples['DATA'] = {
  'name': [],
  'weight': 'METFilter_DATA*LepWPCut',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 3,
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))
