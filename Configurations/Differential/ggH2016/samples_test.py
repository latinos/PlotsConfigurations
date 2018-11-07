import os
from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

# samples

#samples = {}

################################################
################# SKIMS ########################
################################################

mcProduction = 'Apr2017_summer16'

dataReco = 'Apr2017_Run2016{era}_RemAOD'

mcSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__wwSel'

fakeSteps = 'lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__dorochester__multiFakeW__formulasFAKE__hadd__wwSel'

dataSteps = 'lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__dorochester__formulasDATA__wwSel'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE :
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015'
elif  'cern' in SITE :
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17'
elif  'gridui' in SITE: #PISA
  treeBaseDir = '/gpfs/ddn/srm/cms/store/user/lviliani/Full2016_Apr17'
elif 'sdfarm' in SITE : # KISTI T3
  treeBaseDir = '/xrootd/store/group/hww/Full2016_Apr17'

mcDirectory = os.path.join(treeBaseDir, mcProduction, mcSteps)
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [ 
  ['B','Run2016B-03Feb2017_ver2-v2'], 
  ['C','Run2016C-03Feb2017-v1'], 
  ['D','Run2016D-03Feb2017-v1'], 
  ['E','Run2016E-03Feb2017-v1'],
  ['F','Run2016F-03Feb2017-v1'], 
  ['G','Run2016G-03Feb2017-v1'], 
  ['H','Run2016H-03Feb2017_ver2-v1'], 
  ['H','Run2016H-03Feb2017_ver3-v1'],
] 

DataSets = ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']

DataTrig = {
  'MuonEG'         : ' trig_EleMu',
  'DoubleMuon'     : '!trig_EleMu &&  trig_DbleMu',
  'SingleMuon'     : '!trig_EleMu && !trig_DbleMu &&  trig_SnglMu',
  'DoubleEG'       : '!trig_EleMu && !trig_DbleMu && !trig_SnglMu &&  trig_DbleEle',
  'SingleElectron' : '!trig_EleMu && !trig_DbleMu && !trig_SnglMu && !trig_DbleEle &&  trig_SnglEle',
}

#########################################
############ MC COMMON ##################
#########################################

mcCommonWeight = 'XSWeight*sfWeight*GenLepMatch*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### WW ########
             
samples['WW'] = {
  'name': getSampleFiles(mcDirectory,'WWTo2L2Nu'),
  'weight': mcCommonWeight + '*nllW',
  
}

samples['ggWW'] = {
  'name': getSampleFiles(mcDirectory,'GluGluWWTo2L2Nu_MCFM'),      
  'weight': mcCommonWeight
}

## during tree production: 1.4 k-factor has been applied to both samples
## ggWW sample: k = 1.4 +/- 15%
## ggWW interference: k = 1.87 +/- 25%

### ZH ; H->WW

samples['ZH_hww']   = { 
  'name': getSampleFiles(mcDirectory,'HZJ_HToWW_M125'),
  'weight': mcCommonWeight
}

###########################################
#############   SIGNALS  ##################
###########################################

#### ggH -> WW

samples['ggH_hww']  = {
  'name': getSampleFiles(mcDirectory,'GluGluHToWWTo2L2NuPowheg_M125'),  
  'weight': mcCommonWeight+'*weight2MINLO',
  'bins': {}
}

pthBinning = [
  'genPtHcut0',
  'genPtHcut1',
  'genPtHcut2',
  'genPtHcut3',
  'genPtHcut4'
]

for bin in pthBinning:
  # using the aliases, bin name is the bin expression
  samples['ggH_hww']['bins'][bin] = 'fiducial && ' + bin

###########################################
################## DATA ###################
###########################################

samples['DATA']  = { 
  'name': [],     
  'weight': 'veto_EMTFBug*METFilter_DATA*LepWPCut',
  'weights': [],
  'isData': ['all']
}

for era, sd in DataRun:
  for pd in DataSets:
    files = getSampleFiles(dataDirectory.format(era = era), pd + '_' + sd, True)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))
