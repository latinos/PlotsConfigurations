import os
import inspect

# /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/Full2018_v9/WHSS/DY_OS_CR

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # DY_OS_CR
configurations = os.path.dirname(configurations) # WHSS
configurations = os.path.dirname(configurations) # Full2018_v9
configurations = os.path.dirname(configurations) # UL
configurations = os.path.dirname(configurations) # WH_chargeAsymmetry
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

# MC:   /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9/
# DATA: /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Run2018_UL2018_nAODv9_Full2018v9/DATAl1loose2018v9__l2loose__l2tightOR2018v9/
# FAKE: /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Run2018_UL2018_nAODv9_Full2018v9/DATAl1loose2018v9__l2loose__fakeW/

mcProduction = 'Summer20UL18_106x_nAODv9_Full2018v9'

dataReco     = 'Run2018_UL2018_nAODv9_Full2018v9'

mcSteps      = 'MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9{var}'

fakeSteps    = 'DATAl1loose2018v9__l2loose__fakeW'

dataSteps    = 'DATAl1loose2018v9__l2loose__l2tightOR2018v9'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
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
    ['A','Run2018A-UL2018-v1'],
    ['B','Run2018B-UL2018-v1'],
    ['C','Run2018C-UL2018-v1'],
    ['D','Run2018D-UL2018-v1'],
]

DataSets = ['MuonEG','SingleMuon','EGamma','DoubleMuon']

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
mcCommonWeightNoMatch = 'XSWeight*METFilter_MC*SFweight'
mcCommonWeight = 'XSWeight*METFilter_MC*PromptGenLepMatch2l*SFweight'

###########################################
#############  BACKGROUNDS  ###############
###########################################

############ DY OS ############
# Select opposite-sign events 
# and reweight them according
# to the leptons charge-flip
# probabilities

useEmbeddedDY = False
embed_tautauveto = ''

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50_NLO') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50')

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0))*ttHMVA_eff_flip_2l[0]',
    'FilesPerJob': 2,
}

############ Non-charge-flip backgrounds ############
# In case we want to estimate the charge-flip
# backgrounds in the signal region, we can use
# data. But we have to subtract all the processes
# not affected by charge-flip:
# all but DY, WW, and top

######## Wg ########
files = nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J')

samples['Wg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch + '*(Gen_ZGstar_mass <= 0)*ttHMVA_eff_flip_2l[0]',
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4,
}


######## Zg ########
files = nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

samples['Zg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch + '*(Gen_ZGstar_mass <= 0)*ttHMVA_eff_flip_2l[0]',
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4
}


######## WgS ######## 
files = nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J') + \
        nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin0p1')

samples['WgS'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarLow * 0.94)*ttHMVA_eff_flip_2l[0]',
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4,
}
addSampleWeight(samples, 'WgS', 'Wg_AMCNLOFXFX_01J',  '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass <= 0.1)')
addSampleWeight(samples, 'WgS', 'WZTo3LNu_mllmin0p1', '(Gen_ZGstar_mass > 0.1)*(0.601644*58.59/4.666)')


######## ZgS ########
files = nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

samples['ZgS'] = {
    'name': files,
    'weight': mcCommonWeight + '*(Gen_ZGstar_mass > 0)*ttHMVA_eff_flip_2l[0]',
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4,
}


############ WZ ############
files = nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin0p1') + \
        nanoGetSampleFiles(mcDirectory, 'WZTo2Q2L_mllmin4p0')

samples['WZ'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarHigh)*ttHMVA_eff_flip_2l[0]',
    'FilesPerJob': 4
}
addSampleWeight(samples, 'WZ', 'WZTo3LNu_mllmin0p1', '(0.601644*58.59/4.666)')


############ ZZ ############
files = nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu') + \
        nanoGetSampleFiles(mcDirectory, 'ZZTo2Q2L_mllmin4p0') + \
        nanoGetSampleFiles(mcDirectory, 'ZZTo4L')

samples['ZZ'] = {
    'name': files,
    'weight': mcCommonWeight + '*ttHMVA_eff_flip_2l[0]',
    'FilesPerJob': 4
}


########## VVV #########
files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
        nanoGetSampleFiles(mcDirectory, 'WZZ') + \
        nanoGetSampleFiles(mcDirectory, 'WWZ') + \
        nanoGetSampleFiles(mcDirectory, 'WWW')

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight + '*ttHMVA_eff_flip_2l[0]',
    'FilesPerJob': 4
}


###########################################
#############   SIGNALS  ##################
###########################################

signals = []

############ ggH H->WW ############
samples['ggH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight + '*ttHMVA_eff_flip_2l[0]',
    'FilesPerJob': 1
}

signals.append('ggH_hww')

############ VBF H->WW ############
samples['qqH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight + '*ttHMVA_eff_flip_2l[0]',
    'FilesPerJob': 4
}

signals.append('qqH_hww')

############ ZH H->WW ############
samples['ZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125'),
    'weight': mcCommonWeight + '*ttHMVA_eff_flip_2l[0]',
    'FilesPerJob': 4
}

signals.append('ZH_hww')

samples['ggZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight + '*ttHMVA_eff_flip_2l[0]',
    'FilesPerJob': 4
}

signals.append('ggZH_hww')

############ WH H->WW ############
samples['WH_hww_plus'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125'),
    'weight': mcCommonWeight + '*ttHMVA_eff_flip_2l[0]',
    'FilesPerJob': 4
}

signals.append('WH_hww_plus')


samples['WH_hww_minus'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    'weight': mcCommonWeight + '*ttHMVA_eff_flip_2l[0]',
    'FilesPerJob': 4
}

signals.append('WH_hww_minus')

############ ttH ############
samples['ttH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125'),
    'weight': mcCommonWeight + '*ttHMVA_eff_flip_2l[0]',
    'FilesPerJob': 1
}

signals.append('ttH_hww')

############ H->TauTau ############
samples['ggH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125_Powheg'),
    'weight': mcCommonWeight + '*ttHMVA_eff_flip_2l[0]',
    'FilesPerJob': 20
}

signals.append('ggH_htt')

samples['qqH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125'),
    'weight': mcCommonWeight + '*ttHMVA_eff_flip_2l[0]',
    'FilesPerJob': 10
}

signals.append('qqH_htt')

samples['ZH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'ZHToTauTau_M125'),
    'weight': mcCommonWeight + '*ttHMVA_eff_flip_2l[0]',
    'FilesPerJob': 4
}

signals.append('ZH_htt')

############ WH H->TauTau ############
samples['WH_htt_plus'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'WplusHToTauTau_M125'),
    'weight': mcCommonWeight + '*ttHMVA_eff_flip_2l[0]',
    'FilesPerJob': 4
}

signals.append('WH_htt_plus')

samples['WH_htt_minus'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'WminusHToTauTau_M125'),
    'weight': mcCommonWeight + '*ttHMVA_eff_flip_2l[0]',
    'FilesPerJob': 4
}

signals.append('WH_htt_minus')
 

###########################################
################## FAKE ###################
###########################################

samples['Fake'] = {
  'name': [],
  'weight': 'METFilter_DATA*fakeW*ttHMVA_eff_flip_2l[0]',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 50
}

for _, sd in DataRun:
  for pd in DataSets:
    tag = pd + '_' + sd

    if (   ('DoubleMuon' in pd and 'Run2018B' in sd)
        or ('DoubleMuon' in pd and 'Run2018D' in sd)
        or ('DoubleMuon' in pd and 'Run2018D' in sd) 
        or ('SingleMuon' in pd and 'Run2018A' in sd)
        or ('SingleMuon' in pd and 'Run2018B' in sd)
        or ('SingleMuon' in pd and 'Run2018C' in sd)):
        print("sd      = {}".format(sd))
        print("pd      = {}".format(pd))
        print("Old tag = {}".format(tag))
        tag = tag.replace('v1','v2')
        print("New tag = {}".format(tag))

    files = nanoGetSampleFiles(fakeDirectory, tag)

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
  'weight': 'LepWPCut*METFilter_DATA*ttHMVA_eff_flip_2l[0]',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 50
}

for _, sd in DataRun:
  for pd in DataSets:
    tag = pd + '_' + sd

    if (   ('DoubleMuon' in pd and 'Run2018B' in sd)
        or ('DoubleMuon' in pd and 'Run2018D' in sd)
        or ('DoubleMuon' in pd and 'Run2018D' in sd)
        or ('SingleMuon' in pd and 'Run2018A' in sd)
        or ('SingleMuon' in pd and 'Run2018B' in sd)
        or ('SingleMuon' in pd and 'Run2018C' in sd)):
        print("sd      = {}".format(sd))
        print("pd      = {}".format(pd))
        print("Old tag = {}".format(tag))
        tag = tag.replace('v1','v2')
        print("New tag = {}".format(tag))

    files = nanoGetSampleFiles(dataDirectory, tag)

    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))
