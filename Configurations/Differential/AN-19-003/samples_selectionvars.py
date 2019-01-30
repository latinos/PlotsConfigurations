import os
import copy
from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

# samples

#samples = {}
try:
  len(samples)
except NameError:
  samples = {}

################################################
################# SKIMS ########################
################################################

mcProduction = 'Apr2017_summer16'

dataReco = 'Apr2017_Run2016{era}_RemAOD'

mcSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC'

fakeSteps = 'lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__dorochester__multiFakeW__formulasFAKE__hadd'

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

#DataSets = ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']
DataSets = ['MuonEG','SingleMuon','SingleElectron']

DataTrig = {
  'MuonEG'         : ' trig_EleMu',
  'SingleMuon'     : '!trig_EleMu && trig_SnglMu',
  'SingleElectron' : '!trig_EleMu && !trig_SnglMu && trig_SnglEle',
}

#########################################
############ MC COMMON ##################
#########################################

mcCommonWeight = 'XSWeight*sfWeight*GenLepMatch*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######

useDYHT = False       # be carefull DY HT is LO 
useDYtt = True     
mixDYttandHT = False  # be carefull DY HT is LO (HT better stat for HT>450 GEV)

### These weights were evaluated on ICHEP16 MC -> Update ?
ptllDYW_NLO = '(0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211*(0.958512-0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140)'
ptllDYW_LO = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683*(0.95-0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'

samples['DY'] = {
  'weight': mcCommonWeight
}

if useDYtt :
  # Use e-mu exclusive trees
  samples['DY']['name'] = getSampleFiles(mcDirectory,'DYJetsToLL_M-10to50') \
                          + getSampleFiles(mcDirectory,'DYJetsToTT_MuEle_M-50') \
                          + getSampleFiles(mcDirectory,'DYJetsToTT_MuEle_M-50_ext1')

  # pt_ll weight
  addSampleWeight(samples,'DY','DYJetsToLL_M-10to50',ptllDYW_NLO)
  addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50',ptllDYW_NLO)
  addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50_ext1',ptllDYW_NLO)
  # set baseW across both samples
  addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50', getBaseW(mcDirectory,['DYJetsToTT_MuEle_M-50','DYJetsToTT_MuEle_M-50_ext1'])+'/baseW')
  addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50_ext1', getBaseW(mcDirectory,['DYJetsToTT_MuEle_M-50','DYJetsToTT_MuEle_M-50_ext1'])+'/baseW')

  samples['DY']['FilesPerJob'] = 1
  #samples['DY']['EventsPerJob'] = 20000

else:
  samples['DY']['name'] = getSampleFiles(mcDirectory,'DYJetsToLL_M-10to50') \
                          + getSampleFiles(mcDirectory,'DYJetsToLL_M-50')
  if useDYHT:
    # ... Add DY HT Samples
    samples['DY']['name'] += getSampleFiles(mcDirectory,'DYJetsToLL_M-5to50_HT-70to100') \
                             + getSampleFiles(mcDirectory,'DYJetsToLL_M-5to50_HT-100to200')\
                             + getSampleFiles(mcDirectory,'DYJetsToLL_M-5to50_HT-200to400') \
                             + getSampleFiles(mcDirectory,'DYJetsToLL_M-5to50_HT-400to600') \
                             + getSampleFiles(mcDirectory,'DYJetsToLL_M-5to50_HT-600toInf') \
                             + getSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-70to100') \
                             + getSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-100to200') \
                             + getSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-100to200_ext1') \
                             + getSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-200to400') \
                             + getSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-200to400_ext1') \
                             + getSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-400to600') \
                             + getSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-600to800') \
                             + getSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-800to1200') \
                             + getSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-1200to2500') \
                             + getSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-2500toInf')
  
    samples['DY']['FilesPerJob'] = 8

  addSampleWeight(samples,'DY','DYJetsToLL_M-10to50',ptllDYW_NLO)
  addSampleWeight(samples,'DY','DYJetsToLL_M-50',ptllDYW_NLO)

  if useDYHT :
    # Remove high HT from inclusive sample
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50', 'genHT<70.0')  
    addSampleWeight(samples,'DY','DYJetsToLL_M-50', 'genHT<70.0')  
    # pt_ll weight
    addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-70to100',ptllDYW_LO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-100to200',ptllDYW_LO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400',ptllDYW_LO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600',ptllDYW_LO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toInf',ptllDYW_LO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100',ptllDYW_LO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200',ptllDYW_LO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200_ext1',ptllDYW_LO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400',ptllDYW_LO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400_ext1',ptllDYW_LO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600',ptllDYW_LO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800',ptllDYW_LO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200',ptllDYW_LO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500',ptllDYW_LO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf',ptllDYW_LO)
    # Fix some x-sections
    addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-70to100', getBaseW(mcDirectory,['DYJetsToLL_M-5to50_HT-70to100'])+'/baseW')   # x-section update
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100', getBaseW(mcDirectory,['DYJetsToLL_M-50_HT-70to100'])+'/baseW')      # x-section update
    # set baseW across both samples
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200', getBaseW(mcDirectory,['DYJetsToLL_M-50_HT-100to200','DYJetsToLL_M-50_HT-100to200_ext1'])+'/baseW')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200_ext1', getBaseW(mcDirectory,['DYJetsToLL_M-50_HT-100to200','DYJetsToLL_M-50_HT-100to200_ext1'])+'/baseW')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400', getBaseW(mcDirectory,['DYJetsToLL_M-50_HT-200to400','DYJetsToLL_M-50_HT-200to400_ext1'])+'/baseW')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400_ext1', getBaseW(mcDirectory,['DYJetsToLL_M-50_HT-200to400','DYJetsToLL_M-50_HT-200to400_ext1'])+'/baseW')

###### Top #######
# We should use in principle: ST_tW_antitop_noHad + ST_tW_antitop_noHad_ext1 + ST_tW_top_noHad + ST_tW_top_noHad_ext1   
# but first need to compute x-section and correct baseW
files = getSampleFiles(mcDirectory,'TTTo2L2Nu') \
        + getSampleFiles(mcDirectory,'ST_tW_antitop') \
        + getSampleFiles(mcDirectory,'ST_tW_top') \
        + getSampleFiles(mcDirectory,'ST_t-channel_antitop') \
        + getSampleFiles(mcDirectory,'ST_t-channel_top') \
        + getSampleFiles(mcDirectory,'ST_s-channel')

samples['top'] = {
  'name': files,
  'weight': mcCommonWeight,
  'FilesPerJob': 1,
#  'EventsPerJob': 10000
}
                  
addSampleWeight(samples,'top','TTTo2L2Nu','toprwgt')

###### WW ########
             
samples['WW'] = {
  'name': getSampleFiles(mcDirectory,'WWTo2L2Nu'),
  'weight': mcCommonWeight + '*nllW',
  'FilesPerJob': 1,
#  'EventsPerJob': 10000
}

###########################################
#############   SIGNALS  ##################
###########################################

#### Cuts for signal splitting
# ==2 OSOF leptons
# pt1 > 25
# pt2 > 10(13) el(mu)
# mll = sqrt(2*pt1*pt2*(cosh(eta1-eta2)-cos(phi1-phi2))) > 12
# MET > 20
# ptll = sqrt(pt1^2+pt2^2+2*pt1*pt2*cos(phi1-phi2)) > 30 
# mth = sqrt(2*met*(sqrt(pt1^2+pt2^2+2*pt1*pt2*cos(phi1-phi2))-cos(metphi)*(pt1*cos(phi1)+pt2*cos(phi2))-sin(metphi)*(pt1*sin(phi1)+pt2*sin(phi2)))) >= 60 
# mtw2 = sqrt(2*pt2*met*(1-cos(phi2-metphi))) > 30

#### ggH -> WW

samples['ggH_hww'] = {
  'name': getSampleFiles(mcDirectory,'GluGluHToWWTo2L2NuPowheg_M125'),
  'weight': mcCommonWeight+'*weight2MINLO',
  'FilesPerJob': 1,
#  'EventsPerJob': 2500
}

###########################################
################## FAKE ###################
###########################################

samples['Fake'] = {
  'name': [],
  'weight': 'fakeWeight*veto_EMTFBug*METFilter_DATA',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 6
}

for era, sd in DataRun:
  for pd in DataSets:
    files = getSampleFiles(fakeDirectory.format(era = era), pd + '_' + sd, True)
    samples['Fake']['name'].extend(files)
    samples['Fake']['weights'].extend([DataTrig[pd]] * len(files))
