import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # 
configurations = os.path.dirname(configurations) # 
configurations = os.path.dirname(configurations) # 
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
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__trigFix'))

mcDirectory = makeMCDirectory()
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
embedDirectory = os.path.join(treeBaseDir, embedReco, embedSteps)

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2016B-02Apr2020_ver1-v1'],
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

useEmbeddedDY = True
useDYtt = True

# The Dyveto sample is used to estimate one piece of the Dyemb uncertainty
# To avoid running it all the times, it was run once and the uncertainty was converted into a lnN (see nuisances.py)
runDYveto = False

embed_tautauveto = '' #Setup
if useEmbeddedDY:
  embed_tautauveto = '*embed_tautauveto'

if useEmbeddedDY:
  # Actual embedded data
  samples['Dyemb'] = {
    'name': [],
    'weight': 'METFilter_DATA*LepWPCut*Muon_ttHMVA_SF*embedtotal*genWeight*(genWeight<=1)',
    'weights': [],
    'isData': ['all'],
    'FilesPerJob': 20
  }

  for run_, sd in DataRun:
      files = nanoGetSampleFiles(embedDirectory, 'DYToTT_MuEle_Embedded_Run2016' + run_)
      samples['Dyemb']['name'].extend(files)
      samples['Dyemb']['weights'].extend(['Trigger_ElMu'] * len(files))

'''
  # Vetoed MC: Needed for uncertainty
  files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
      nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop') + \
      nanoGetSampleFiles(mcDirectory, 'ST_tW_top') + \
      nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu') + \
      nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop') + \
      nanoGetSampleFiles(mcDirectory, 'GluGluWWTo2L2Nu_MCFM') + \
      nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu') + \
      nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Q') + \
      nanoGetSampleFiles(mcDirectory, 'ZZTo4L') + \
      nanoGetSampleFiles(mcDirectory, 'WZTo2L2Q') + \
      nanoGetSampleFiles(mcDirectory, 'Zg') + \
      nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')
  if runDYveto:
      samples['Dyveto'] = {
          'name': files,
          'weight': '(1-embed_tautauveto)',
          'FilesPerJob': 1, # There's some error about not finding sample-specific variables like "nllW" when mixing different samples into a single job; so split them all up instead
      }
    
      addSampleWeight(samples, 'Dyveto', 'TTTo2L2Nu', mcCommonWeight + '*((topGenPt * antitopGenPt > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) * (TMath::Sqrt(TMath::Exp(1.61468e-03 + 3.46659e-06*topGenPt - 8.90557e-08*topGenPt*topGenPt) * TMath::Exp(1.61468e-03 + 3.46659e-06*antitopGenPt - 8.90557e-08*antitopGenPt*antitopGenPt))) + (topGenPt * antitopGenPt <= 0.))'), # Same Reweighting as other years, but with additional fix for tune CUET -> CP5)')
      addSampleWeight(samples, 'Dyveto', 'ST_tW_antitop', mcCommonWeight)
      addSampleWeight(samples, 'Dyveto', 'ST_tW_top', mcCommonWeight)
      addSampleWeight(samples, 'Dyveto', 'WWTo2L2Nu', mcCommonWeight + '*nllW')
      addSampleWeight(samples, 'Dyveto', 'WpWmJJ_EWK_noTop', mcCommonWeight + '*((Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)*(lhe_mWm > 60. && lhe_mWm < 100. && lhe_mWp > 60. && lhe_mWp < 100.))')
      addSampleWeight(samples, 'Dyveto', 'GluGluWWTo2L2Nu_MCFM', mcCommonWeight + '*1.53/1.4')
      addSampleWeight(samples, 'Dyveto', 'ZZTo2L2Nu', mcCommonWeight + '*1.11')
      addSampleWeight(samples, 'Dyveto', 'ZZTo2L2Q', mcCommonWeight + '*1.11')
      addSampleWeight(samples, 'Dyveto', 'ZZTo4L', mcCommonWeight + '*1.11')
      addSampleWeight(samples, 'Dyveto', 'WZTo2L2Q', mcCommonWeight + '*1.11')
      addSampleWeight(samples, 'Dyveto', 'Zg', ' ( ' + mcCommonWeightNoMatch + '*(!(Gen_ZGstar_mass > 0))' + ' ) + ( ' + mcCommonWeight + ' * ((Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4) * 0.94 + (Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4) * 1.14) * (Gen_ZGstar_mass > 0)' + ' ) ') # Vg contribution + VgS contribution
      addSampleWeight(samples, 'Dyveto', 'WZTo3LNu_mllmin01', mcCommonWeight + '*((Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4) * 0.94 + (Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4) * 1.14) * (Gen_ZGstar_mass > 0.1)')
'''

###### DY MC ######
## We need to keep DY MC as well, because only embedded events passing the ElMu trigger are considered
## Events failing ElMu but passing one of the other triggers are included in the DY MC

if useDYtt:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')
    
    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight+embed_tautauveto + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0))',
        'FilesPerJob': 2,
    }
    addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50_ext1','DY_NLO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO','DY_LO_pTllrw')
else:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight+embed_tautauveto + "*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                         Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )",
        'FilesPerJob': 8,
    }
    addSampleWeight(samples,'DY','DYJetsToLL_M-50','DY_NLO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1','DY_LO_pTllrw')

###### Top #######

files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ST_s-channel') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_top')

samples['top'] = {
    'name': files,
    'weight': mcCommonWeight+embed_tautauveto,
    'FilesPerJob': 1,
}

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight+embed_tautauveto + '*nllW*ewknloW', # temporary - nllW module not run on PS and UE variation samples
    'FilesPerJob': 1
}



samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop'),
    'weight': mcCommonWeight+embed_tautauveto+ '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)*(lhe_mW1[0] > 60. && lhe_mW1[0] < 100. && lhe_mW2[0] > 60. && lhe_mW2[0] < 100.)', #filter tops and Higgs, limit w mass
    'FilesPerJob': 4
}
#    'weight': mcCommonWeight+embed_tautauveto + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)*(lhe_mWm > 60. && lhe_mWm < 100. && lhe_mWp > 60. && lhe_mWp < 100.)', #filter tops and Higgs, limit w mass

samples['ggWW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluWWTo2L2Nu_MCFM'),
    'weight': mcCommonWeight+embed_tautauveto + '*1.53/1.4', # updating k-factor
    'FilesPerJob': 4
}


######## Vg ########

useWgFXFX=True

if useWgFXFX:
  files = nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J') + \
      nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J_ext1') + \
      nanoGetSampleFiles(mcDirectory, 'Zg')
  
  samples['Vg'] = {
      'name': files,
      'weight': mcCommonWeightNoMatch+embed_tautauveto + '*(!(Gen_ZGstar_mass > 0))',
      'FilesPerJob': 2
  }
  wgbasew = getBaseWnAOD(mcDirectory,'Summer16_102X_nAODv7_Full2016v7',['Wg_AMCNLOFXFX_01J','Wg_AMCNLOFXFX_01J_ext1'])
  addSampleWeight(samples,'Vg','Wg_AMCNLOFXFX_01J','191.4/586.*'+wgbasew+'/baseW')
  addSampleWeight(samples,'Vg','Wg_AMCNLOFXFX_01J_ext1','191.4/586.*'+wgbasew+'/baseW')
  
  ######## VgS ########
  
  files = nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J') + \
      nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J_ext1') + \
      nanoGetSampleFiles(mcDirectory, 'Zg') + \
      nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')
  
  samples['VgS'] = {
      'name': files,
      'weight': mcCommonWeight+embed_tautauveto + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
      'FilesPerJob': 4,
      'subsamples': {
        'L': 'gstarLow',
        'H': 'gstarHigh'
      }
  }
  addSampleWeight(samples, 'VgS', 'Wg_AMCNLOFXFX_01J', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)*191.4/586.*'+wgbasew+'/baseW')
  addSampleWeight(samples, 'VgS', 'Wg_AMCNLOFXFX_01J_ext1', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)*191.4/586.*'+wgbasew+'/baseW')
  addSampleWeight(samples, 'VgS', 'Zg', '(Gen_ZGstar_mass > 0)')
  addSampleWeight(samples, 'VgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')

else:
  files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
      nanoGetSampleFiles(mcDirectory, 'Zg')

  samples['Vg'] = {
      'name': files,
      'weight': mcCommonWeightNoMatch+embed_tautauveto + '*(!(Gen_ZGstar_mass > 0))',
      'FilesPerJob': 4
  }

  ######## VgS ########

  files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
      nanoGetSampleFiles(mcDirectory, 'Zg') + \
      nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')

  samples['VgS'] = {
      'name': files,
      'weight': mcCommonWeight+embed_tautauveto + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
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
    'weight': mcCommonWeight+embed_tautauveto + '*1.11',
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
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2Nu_alternative_M125')+nanoGetSampleFiles(mcDirectory, 'GGHjjToWWTo2L2Nu_minloHJJ_M125'),
    'weight': mcCommonWeight+'*1.03364', ## XSECxBR correction for mH = 125.38
    'FilesPerJob': 1,
}
addSampleWeight(samples, 'ggH_hww', 'GluGluHToWWTo2L2Nu_alternative_M125', '(HTXS_stage1_1_cat_pTjet30GeV<107)*Weight2MINLO*1092.0713/1068.1909') #only non GE2J categories with the weight to NNLOPS and renormalize integral                          
addSampleWeight(samples, 'ggH_hww', 'GGHjjToWWTo2L2Nu_minloHJJ_M125', '(HTXS_stage1_1_cat_pTjet30GeV>106)*1092.0713/1068.1909')

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
    'weight': mcCommonWeight+'*1.01994', # XSECxBR correction for mH = 125.38
    'FilesPerJob': 4
}

signals.append('ZH_hww')

samples['ggZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'ggZH_HToWW_M125'),
    'weight': mcCommonWeight+'*1.02494', # XSECxBR correction for mH = 125.38
    'FilesPerJob': 4
}

signals.append('ggZH_hww')

############ WH H->WW ############

samples['WH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    'weight': mcCommonWeight+'*1.01724',# XSECxBR correction for mH = 125.38
    'FilesPerJob': 4
}

signals.append('WH_hww')

############ ttH ############

samples['ttH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 5
}

signals.append('ttH_hww')

############ H->TauTau ############

samples['ggH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

signals.append('ggH_htt')

samples['qqH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}
signals.append('qqH_htt')

samples['ZH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

signals.append('ZH_htt')

samples['WH_htt'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

signals.append('WH_htt')


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

'''
samples['Fake']['subsamples'] = {
  'em': 'abs(Lepton_pdgId[0]) == 11',
  'me': 'abs(Lepton_pdgId[0]) == 13'
}
'''
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

#### AC/EFT Signals 
 
signals_rw = [] 

# VBF MC samples 
 
# Original VBF samples 
''' 
samples['VBF_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W',   'FilesPerJob': 4, } 

samples['VBF_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W',   'FilesPerJob': 4, } 

samples['VBF_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W',   'FilesPerJob': 4, } 

samples['VBF_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W',   'FilesPerJob': 4, } 
 
samples['VBF_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W',   'FilesPerJob': 4, } 
 
samples['VBF_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W',   'FilesPerJob': 4, } 
 
samples['VBF_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W',   'FilesPerJob': 4, } 

# Reweighted VBF samples 

samples['VBF_H0PM_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H1/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H1')  
 
samples['VBF_H0PM_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H2/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H2')  
 
samples['VBF_H0PM_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H3/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H3')  
 
samples['VBF_H0PM_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H4/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H4')  
 
samples['VBF_H0PM_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H5/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H5')  

samples['VBF_H0PM_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H6/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H6')  
 
samples['VBF_H0PM_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H7/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H7')  
 
samples['VBF_H0PM_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H8/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H8')  
 
samples['VBF_H0PM_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H9/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H9')  
 
samples['VBF_H0PM_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H10/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H10')  
 
samples['VBF_H0PM_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H11/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H11')  
 
samples['VBF_H0PM_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H12/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H12')  
 
samples['VBF_H0PM_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H13/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H13')  
 
samples['VBF_H0PM_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H14/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H14')  

samples['VBF_H0PM_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H15/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H15')  
 
samples['VBF_H0PM_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H16/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H16')  
 
samples['VBF_H0PM_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H17/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H17')  
 
samples['VBF_H0PM_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H18/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H18')  
 
samples['VBF_H0PM_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H19/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H19')  
 
samples['VBF_H0PM_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H20/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H20')  
 
samples['VBF_H0PM_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H21/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H21')  
 
samples['VBF_H0PM_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H22/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H22')  
 
samples['VBF_H0PM_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H23/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H23')  
 
samples['VBF_H0PM_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H24/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H24')  
 
samples['VBF_H0PM_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H25/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H25')  
 
samples['VBF_H0PM_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H26/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H26')  
 
samples['VBF_H0PM_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H27/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H27')  
 
samples['VBF_H0PM_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H28/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H28')  
 
samples['VBF_H0PM_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H29/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H29')  
 
samples['VBF_H0PM_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H30/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H30')  
 
samples['VBF_H0PM_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H31/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H31')  
 
samples['VBF_H0PM_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H32/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H32')  
 
samples['VBF_H0PM_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H33/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H33')  
 
samples['VBF_H0PM_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H34/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H34')  
 
samples['VBF_H0PM_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H35/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H35')  

samples['VBF_H0PH_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H1/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H1')  
 
samples['VBF_H0PH_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H2/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H2')  
 
samples['VBF_H0PH_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H3/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H3')  
 
samples['VBF_H0PH_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H4/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H4')  
 
samples['VBF_H0PH_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H5/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H5')  
 
samples['VBF_H0PH_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H6/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H6')  
 
samples['VBF_H0PH_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H7/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H7')  
 
samples['VBF_H0PH_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H8/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H8')  
 
samples['VBF_H0PH_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H9/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H9')  
 
samples['VBF_H0PH_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H10/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H10')  
 
samples['VBF_H0PH_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H11/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H11')  
 
samples['VBF_H0PH_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H12/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H12')  
 
samples['VBF_H0PH_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H13/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H13')  
 
samples['VBF_H0PH_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H14/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H14')  
 
samples['VBF_H0PH_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H15/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H15')  
 
samples['VBF_H0PH_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H16/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H16')  
 
samples['VBF_H0PH_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H17/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H17')  
 
samples['VBF_H0PH_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H18/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H18')  
 
samples['VBF_H0PH_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H19/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H19')  
 
samples['VBF_H0PH_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H20/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H20')  
 
samples['VBF_H0PH_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H21/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H21')  
 
samples['VBF_H0PH_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H22/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H22')  
 
samples['VBF_H0PH_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H23/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H23')  
 
samples['VBF_H0PH_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H24/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H24')  
 
samples['VBF_H0PH_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H25/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H25')  
 
samples['VBF_H0PH_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H26/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H26')  
 
samples['VBF_H0PH_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H27/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H27')  
 
samples['VBF_H0PH_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H28/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H28')  
 
samples['VBF_H0PH_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H29/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H29')  
 
samples['VBF_H0PH_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H30/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H30')  
 
samples['VBF_H0PH_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H31/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H31')  
 
samples['VBF_H0PH_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H32/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H32')  
 
samples['VBF_H0PH_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H33/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H33')  
 
samples['VBF_H0PH_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H34/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H34')  
 
samples['VBF_H0PH_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H35/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H35')  

samples['VBF_H0PHf05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H1/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H1')  
 
samples['VBF_H0PHf05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H2/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H2')  
 
samples['VBF_H0PHf05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H3/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H3')  
 
samples['VBF_H0PHf05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H4/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H4')  
 
samples['VBF_H0PHf05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H5/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H5')  
 
samples['VBF_H0PHf05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H6/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H6')  
 
samples['VBF_H0PHf05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H7/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H7')  
 
samples['VBF_H0PHf05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H8/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H8')  
 
samples['VBF_H0PHf05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H9/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H9')  
 
samples['VBF_H0PHf05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H10/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H10')  
 
samples['VBF_H0PHf05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H11/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H11')  
 
samples['VBF_H0PHf05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H12/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H12')  
 
samples['VBF_H0PHf05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H13/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H13')  
 
samples['VBF_H0PHf05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H14/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H14')  
 
samples['VBF_H0PHf05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H15/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H15')  
 
samples['VBF_H0PHf05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H16/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H16')  
 
samples['VBF_H0PHf05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H17/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H17')  
 
samples['VBF_H0PHf05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H18/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H18')  
 
samples['VBF_H0PHf05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H19/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H19')  
 
samples['VBF_H0PHf05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H20/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H20')  
 
samples['VBF_H0PHf05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H21/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H21')  
 
samples['VBF_H0PHf05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H22/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H22')  
 
samples['VBF_H0PHf05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H23/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H23')  
 
samples['VBF_H0PHf05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H24/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H24')  
 
samples['VBF_H0PHf05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H25/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H25')  
 
samples['VBF_H0PHf05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H26/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H26')  
 
samples['VBF_H0PHf05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H27/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H27')  
 
samples['VBF_H0PHf05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H28/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H28')  
 
samples['VBF_H0PHf05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H29/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H29')  
 
samples['VBF_H0PHf05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H30/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H30')  
 
samples['VBF_H0PHf05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H31/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H31')  
 
samples['VBF_H0PHf05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H32/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H32')  
 
samples['VBF_H0PHf05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H33/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H33')  
 
samples['VBF_H0PHf05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H34/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H34')  
 
samples['VBF_H0PHf05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H35/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H35')  
 
samples['VBF_H0M_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H1/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H1')  
 
samples['VBF_H0M_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H2/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H2')  
 
samples['VBF_H0M_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H3/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H3')  
 
samples['VBF_H0M_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H4/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H4')  
 
samples['VBF_H0M_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H5/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H5')  
 
samples['VBF_H0M_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H6/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H6')  
 
samples['VBF_H0M_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H7/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H7')  
 
samples['VBF_H0M_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H8/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H8')  
 
samples['VBF_H0M_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H9/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H9')  
 
samples['VBF_H0M_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H10/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H10')  
 
samples['VBF_H0M_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H11/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H11')  
 
samples['VBF_H0M_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H12/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H12')  
 
samples['VBF_H0M_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H13/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H13')  
 
samples['VBF_H0M_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H14/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H14')  
 
samples['VBF_H0M_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H15/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H15')  
 
samples['VBF_H0M_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H16/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H16')  
 
samples['VBF_H0M_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H17/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H17')  
 
samples['VBF_H0M_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H18/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H18')  
 
samples['VBF_H0M_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H19/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H19')  
 
samples['VBF_H0M_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H20/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H20')  
 
samples['VBF_H0M_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H21/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H21')  
 
samples['VBF_H0M_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H22/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H22')  
 
samples['VBF_H0M_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H23/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H23')  
 
samples['VBF_H0M_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H24/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H24')  
 
samples['VBF_H0M_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H25/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H25')  
 
samples['VBF_H0M_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H26/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H26')  
 
samples['VBF_H0M_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H27/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H27')  
 
samples['VBF_H0M_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H28/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H28')  
 
samples['VBF_H0M_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H29/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H29')  
 
samples['VBF_H0M_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H30/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H30')  
 
samples['VBF_H0M_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H31/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H31')  
 
samples['VBF_H0M_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H32/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H32')  
 
samples['VBF_H0M_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H33/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H33')  
 
samples['VBF_H0M_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H34/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H34')  
 
samples['VBF_H0M_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H35/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H35')  
 
samples['VBF_H0Mf05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H1/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H1')  
 
samples['VBF_H0Mf05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H2/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H2')  
 
samples['VBF_H0Mf05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H3/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H3')  
 
samples['VBF_H0Mf05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H4/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H4')  
 
samples['VBF_H0Mf05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H5/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H5')  
 
samples['VBF_H0Mf05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H6/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H6')  
 
samples['VBF_H0Mf05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H7/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H7')  
 
samples['VBF_H0Mf05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H8/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H8')  
 
samples['VBF_H0Mf05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H9/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H9')  
 
samples['VBF_H0Mf05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H10/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H10')  
 
samples['VBF_H0Mf05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H11/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H11')  
 
samples['VBF_H0Mf05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H12/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H12')  
 
samples['VBF_H0Mf05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H13/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H13')  
 
samples['VBF_H0Mf05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H14/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H14')  
 
samples['VBF_H0Mf05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H15/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H15')  
 
samples['VBF_H0Mf05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H16/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H16')  
 
samples['VBF_H0Mf05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H17/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H17')  
 
samples['VBF_H0Mf05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H18/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H18')  
 
samples['VBF_H0Mf05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H19/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H19')  
 
samples['VBF_H0Mf05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H20/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H20')  
 
samples['VBF_H0Mf05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H21/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H21')  
 
samples['VBF_H0Mf05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H22/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H22')  
 
samples['VBF_H0Mf05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H23/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H23')  
 
samples['VBF_H0Mf05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H24/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H24')  
 
samples['VBF_H0Mf05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H25/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H25')  
 
samples['VBF_H0Mf05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H26/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H26')  
 
samples['VBF_H0Mf05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H27/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H27')  
 
samples['VBF_H0Mf05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H28/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H28')  
 
samples['VBF_H0Mf05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H29/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H29')  
 
samples['VBF_H0Mf05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H30/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H30')  
 
samples['VBF_H0Mf05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H31/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H31')  
 
samples['VBF_H0Mf05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H32/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H32')  
 
samples['VBF_H0Mf05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H33/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H33')  
 
samples['VBF_H0Mf05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H34/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H34')  
 
samples['VBF_H0Mf05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H35/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H35')  
 
samples['VBF_H0L1_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H1/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H1')  
 
samples['VBF_H0L1_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H2/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H2')  
 
samples['VBF_H0L1_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H3/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H3')  
 
samples['VBF_H0L1_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H4/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H4')  
 
samples['VBF_H0L1_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H5/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H5')  
 
samples['VBF_H0L1_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H6/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H6')  
 
samples['VBF_H0L1_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H7/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H7')  
 
samples['VBF_H0L1_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H8/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H8')  
 
samples['VBF_H0L1_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H9/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H9')  
 
samples['VBF_H0L1_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H10/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H10')  
 
samples['VBF_H0L1_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H11/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H11')  
 
samples['VBF_H0L1_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H12/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H12')  
 
samples['VBF_H0L1_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H13/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H13')  
 
samples['VBF_H0L1_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H14/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H14')  
 
samples['VBF_H0L1_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H15/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H15')  
 
samples['VBF_H0L1_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H16/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H16')  
 
samples['VBF_H0L1_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H17/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H17')  
 
samples['VBF_H0L1_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H18/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H18')  
 
samples['VBF_H0L1_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H19/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H19')  
 
samples['VBF_H0L1_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H20/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H20')  
 
samples['VBF_H0L1_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H21/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H21')  
 
samples['VBF_H0L1_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H22/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H22')  
 
samples['VBF_H0L1_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H23/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H23')  
 
samples['VBF_H0L1_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H24/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H24')  
 
samples['VBF_H0L1_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H25/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H25')  
 
samples['VBF_H0L1_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H26/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H26')  
 
samples['VBF_H0L1_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H27/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H27')  
 
samples['VBF_H0L1_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H28/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H28')  
 
samples['VBF_H0L1_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H29/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H29')  
 
samples['VBF_H0L1_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H30/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H30')  
 
samples['VBF_H0L1_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H31/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H31')  
 
samples['VBF_H0L1_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H32/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H32')  
 
samples['VBF_H0L1_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H33/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H33')  
 
samples['VBF_H0L1_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H34/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H34')  
 
samples['VBF_H0L1_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H35/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H35')  
 
samples['VBF_H0L1f05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H1/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H1')  
 
samples['VBF_H0L1f05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H2/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H2')  
 
samples['VBF_H0L1f05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H3/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H3')  
 
samples['VBF_H0L1f05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H4/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H4')  
 
samples['VBF_H0L1f05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H5/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H5')  
 
samples['VBF_H0L1f05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H6/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H6')  
 
samples['VBF_H0L1f05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H7/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H7')  
 
samples['VBF_H0L1f05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H8/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H8')  
 
samples['VBF_H0L1f05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H9/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H9')  
 
samples['VBF_H0L1f05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H10/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H10')  
 
samples['VBF_H0L1f05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H11/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H11')  
 
samples['VBF_H0L1f05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H12/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H12')  
 
samples['VBF_H0L1f05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H13/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H13')  
 
samples['VBF_H0L1f05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H14/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H14')  
 
samples['VBF_H0L1f05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H15/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H15')  
 
samples['VBF_H0L1f05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H16/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H16')  
 
samples['VBF_H0L1f05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H17/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H17')  
 
samples['VBF_H0L1f05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H18/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H18')  
 
samples['VBF_H0L1f05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H19/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H19')  
 
samples['VBF_H0L1f05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H20/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H20')  
 
samples['VBF_H0L1f05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H21/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H21')  
 
samples['VBF_H0L1f05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H22/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H22')  
 
samples['VBF_H0L1f05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H23/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H23')  
 
samples['VBF_H0L1f05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H24/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H24')  
 
samples['VBF_H0L1f05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H25/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H25')  
 
samples['VBF_H0L1f05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H26/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H26')  
 
samples['VBF_H0L1f05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H27/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H27')  
 
samples['VBF_H0L1f05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H28/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H28')  
 
samples['VBF_H0L1f05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H29/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H29')  
 
samples['VBF_H0L1f05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H30/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H30')  
 
samples['VBF_H0L1f05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H31/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H31')  
 
samples['VBF_H0L1f05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H32/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H32')  
 
samples['VBF_H0L1f05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H33/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H33')  
 
samples['VBF_H0L1f05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H34/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H34')  
 
samples['VBF_H0L1f05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H35/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H35')

# WH MC samples 
 
# Original WH samples 

samples['WH_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W',   'FilesPerJob': 4, } 
 
samples['WH_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W',   'FilesPerJob': 4, } 
 
samples['WH_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W',   'FilesPerJob': 4, } 
 
samples['WH_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W',   'FilesPerJob': 4, } 
 
samples['WH_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W',   'FilesPerJob': 4, } 
 
samples['WH_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W',   'FilesPerJob': 4, } 
 
samples['WH_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W',   'FilesPerJob': 4, } 
 
# Reweighted WH samples 
 
samples['WH_H0PM_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H1/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H1')  
 
samples['WH_H0PM_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H2/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H2')  
 
samples['WH_H0PM_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H3/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H3')  
 
samples['WH_H0PM_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H4/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H4')  
 
samples['WH_H0PM_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H5/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H5')  
 
samples['WH_H0PM_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H6/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H6')  
 
samples['WH_H0PM_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H7/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H7')  
 
samples['WH_H0PM_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H8/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H8')  
 
samples['WH_H0PM_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H9/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H9')  
 
samples['WH_H0PM_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H10/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H10')  
 
samples['WH_H0PM_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H11/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H11')  
 
samples['WH_H0PM_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H12/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H12')  
 
samples['WH_H0PM_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H13/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H13')  
 
samples['WH_H0PM_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H14/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H14')  
 
samples['WH_H0PM_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H15/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H15')  
 
samples['WH_H0PM_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H16/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H16')  
 
samples['WH_H0PM_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H17/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H17')  
 
samples['WH_H0PM_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H18/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H18')  
 
samples['WH_H0PM_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H19/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H19')  
 
samples['WH_H0PM_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H20/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H20')  
 
samples['WH_H0PM_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H21/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H21')  
 
samples['WH_H0PM_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H22/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H22')  
 
samples['WH_H0PM_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H23/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H23')  
 
samples['WH_H0PM_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H24/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H24')  
 
samples['WH_H0PM_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H25/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H25')  
 
samples['WH_H0PM_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H26/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H26')  
 
samples['WH_H0PM_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H27/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H27')  
 
samples['WH_H0PM_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H28/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H28')  
 
samples['WH_H0PM_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H29/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H29')  
 
samples['WH_H0PM_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H30/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H30')  
 
samples['WH_H0PM_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H31/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H31')  
 
samples['WH_H0PM_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H32/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H32')  
 
samples['WH_H0PM_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H33/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H33')  
 
samples['WH_H0PM_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H34/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H34')  
 
samples['WH_H0PM_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H35/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H35')  
 
samples['WH_H0PH_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H1/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H1')  
 
samples['WH_H0PH_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H2/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H2')  
 
samples['WH_H0PH_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H3/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H3')  
 
samples['WH_H0PH_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H4/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H4')  
 
samples['WH_H0PH_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H5/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H5')  
 
samples['WH_H0PH_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H6/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H6')  
 
samples['WH_H0PH_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H7/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H7')  
 
samples['WH_H0PH_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H8/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H8')  
 
samples['WH_H0PH_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H9/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H9')  
 
samples['WH_H0PH_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H10/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H10')  
 
samples['WH_H0PH_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H11/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H11')  
 
samples['WH_H0PH_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H12/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H12')  
 
samples['WH_H0PH_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H13/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H13')  
 
samples['WH_H0PH_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H14/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H14')  
 
samples['WH_H0PH_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H15/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H15')  
 
samples['WH_H0PH_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H16/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H16')  
 
samples['WH_H0PH_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H17/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H17')  
 
samples['WH_H0PH_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H18/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H18')  
 
samples['WH_H0PH_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H19/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H19')  
 
samples['WH_H0PH_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H20/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H20')  
 
samples['WH_H0PH_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H21/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H21')  
 
samples['WH_H0PH_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H22/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H22')  
 
samples['WH_H0PH_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H23/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H23')  
 
samples['WH_H0PH_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H24/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H24')  
 
samples['WH_H0PH_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H25/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H25')  
 
samples['WH_H0PH_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H26/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H26')  
 
samples['WH_H0PH_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H27/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H27')  
 
samples['WH_H0PH_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H28/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H28')  
 
samples['WH_H0PH_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H29/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H29')  
 
samples['WH_H0PH_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H30/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H30')  
 
samples['WH_H0PH_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H31/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H31')  
 
samples['WH_H0PH_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H32/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H32')  
 
samples['WH_H0PH_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H33/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H33')  
 
samples['WH_H0PH_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H34/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H34')  
 
samples['WH_H0PH_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H35/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H35')  
 
samples['WH_H0PHf05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H1/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H1')  
 
samples['WH_H0PHf05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H2/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H2')  
 
samples['WH_H0PHf05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H3/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H3')  
 
samples['WH_H0PHf05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H4/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H4')  
 
samples['WH_H0PHf05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H5/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H5')  
 
samples['WH_H0PHf05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H6/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H6')  
 
samples['WH_H0PHf05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H7/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H7')  
 
samples['WH_H0PHf05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H8/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H8')  
 
samples['WH_H0PHf05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H9/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H9')  
 
samples['WH_H0PHf05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H10/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H10')  
 
samples['WH_H0PHf05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H11/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H11')  
 
samples['WH_H0PHf05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H12/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H12')  
 
samples['WH_H0PHf05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H13/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H13')  
 
samples['WH_H0PHf05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H14/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H14')  
 
samples['WH_H0PHf05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H15/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H15')  
 
samples['WH_H0PHf05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H16/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H16')  
 
samples['WH_H0PHf05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H17/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H17')  
 
samples['WH_H0PHf05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H18/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H18')  
 
samples['WH_H0PHf05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H19/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H19')  
 
samples['WH_H0PHf05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H20/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H20')  
 
samples['WH_H0PHf05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H21/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H21')  
 
samples['WH_H0PHf05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H22/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H22')  
 
samples['WH_H0PHf05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H23/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H23')  
 
samples['WH_H0PHf05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H24/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H24')  
 
samples['WH_H0PHf05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H25/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H25')  
 
samples['WH_H0PHf05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H26/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H26')  
 
samples['WH_H0PHf05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H27/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H27')  
 
samples['WH_H0PHf05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H28/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H28')  
 
samples['WH_H0PHf05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H29/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H29')  
 
samples['WH_H0PHf05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H30/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H30')  
 
samples['WH_H0PHf05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H31/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H31')  
 
samples['WH_H0PHf05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H32/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H32')  
 
samples['WH_H0PHf05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H33/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H33')  
 
samples['WH_H0PHf05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H34/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H34')  
 
samples['WH_H0PHf05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H35/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H35')  
 
samples['WH_H0M_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H1/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H1')  
 
samples['WH_H0M_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H2/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H2')  
 
samples['WH_H0M_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H3/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H3')  
 
samples['WH_H0M_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H4/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H4')  
 
samples['WH_H0M_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H5/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H5')  
 
samples['WH_H0M_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H6/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H6')  
 
samples['WH_H0M_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H7/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H7')  
 
samples['WH_H0M_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H8/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H8')  
 
samples['WH_H0M_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H9/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H9')  
 
samples['WH_H0M_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H10/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H10')  
 
samples['WH_H0M_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H11/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H11')  
 
samples['WH_H0M_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H12/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H12')  
 
samples['WH_H0M_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H13/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H13')  
 
samples['WH_H0M_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H14/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H14')  
 
samples['WH_H0M_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H15/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H15')  
 
samples['WH_H0M_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H16/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H16')  
 
samples['WH_H0M_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H17/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H17')  
 
samples['WH_H0M_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H18/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H18')  
 
samples['WH_H0M_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H19/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H19')  
 
samples['WH_H0M_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H20/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H20')  
 
samples['WH_H0M_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H21/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H21')  
 
samples['WH_H0M_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H22/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H22')  
 
samples['WH_H0M_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H23/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H23')  
 
samples['WH_H0M_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H24/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H24')  
 
samples['WH_H0M_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H25/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H25')  
 
samples['WH_H0M_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H26/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H26')  
 
samples['WH_H0M_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H27/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H27')  
 
samples['WH_H0M_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H28/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H28')  
 
samples['WH_H0M_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H29/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H29')  
 
samples['WH_H0M_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H30/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H30')  
 
samples['WH_H0M_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H31/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H31')  
 
samples['WH_H0M_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H32/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H32')  
 
samples['WH_H0M_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H33/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H33')  
 
samples['WH_H0M_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H34/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H34')  
 
samples['WH_H0M_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H35/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H35')  
 
samples['WH_H0Mf05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H1/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H1')  
 
samples['WH_H0Mf05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H2/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H2')  
 
samples['WH_H0Mf05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H3/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H3')  
 
samples['WH_H0Mf05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H4/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H4')  
 
samples['WH_H0Mf05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H5/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H5')  
 
samples['WH_H0Mf05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H6/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H6')  
 
samples['WH_H0Mf05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H7/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H7')  
 
samples['WH_H0Mf05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H8/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H8')  
 
samples['WH_H0Mf05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H9/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H9')  
 
samples['WH_H0Mf05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H10/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H10')  
 
samples['WH_H0Mf05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H11/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H11')  
 
samples['WH_H0Mf05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H12/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H12')  
 
samples['WH_H0Mf05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H13/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H13')  
 
samples['WH_H0Mf05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H14/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H14')  
 
samples['WH_H0Mf05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H15/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H15')  
 
samples['WH_H0Mf05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H16/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H16')  
 
samples['WH_H0Mf05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H17/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H17')  
 
samples['WH_H0Mf05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H18/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H18')  
 
samples['WH_H0Mf05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H19/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H19')  
 
samples['WH_H0Mf05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H20/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H20')  
 
samples['WH_H0Mf05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H21/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H21')  
 
samples['WH_H0Mf05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H22/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H22')  
 
samples['WH_H0Mf05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H23/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H23')  
 
samples['WH_H0Mf05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H24/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H24')  
 
samples['WH_H0Mf05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H25/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H25')  
 
samples['WH_H0Mf05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H26/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H26')  
 
samples['WH_H0Mf05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H27/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H27')  
 
samples['WH_H0Mf05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H28/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H28')  
 
samples['WH_H0Mf05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H29/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H29')  
 
samples['WH_H0Mf05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H30/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H30')  
 
samples['WH_H0Mf05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H31/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H31')  
 
samples['WH_H0Mf05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H32/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H32')  
 
samples['WH_H0Mf05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H33/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H33')  
 
samples['WH_H0Mf05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H34/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H34')  
 
samples['WH_H0Mf05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H35/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H35')  
 
samples['WH_H0L1_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H1/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H1')  
 
samples['WH_H0L1_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H2/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H2')  
 
samples['WH_H0L1_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H3/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H3')  
 
samples['WH_H0L1_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H4/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H4')  
 
samples['WH_H0L1_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H5/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H5')  
 
samples['WH_H0L1_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H6/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H6')  
 
samples['WH_H0L1_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H7/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H7')  
 
samples['WH_H0L1_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H8/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H8')  
 
samples['WH_H0L1_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H9/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H9')  
 
samples['WH_H0L1_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H10/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H10')  
 
samples['WH_H0L1_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H11/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H11')  
 
samples['WH_H0L1_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H12/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H12')  
 
samples['WH_H0L1_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H13/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H13')  
 
samples['WH_H0L1_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H14/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H14')  
 
samples['WH_H0L1_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H15/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H15')  
 
samples['WH_H0L1_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H16/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H16')  
 
samples['WH_H0L1_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H17/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H17')  
 
samples['WH_H0L1_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H18/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H18')  
 
samples['WH_H0L1_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H19/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H19')  
 
samples['WH_H0L1_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H20/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H20')  
 
samples['WH_H0L1_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H21/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H21')  
 
samples['WH_H0L1_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H22/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H22')  
 
samples['WH_H0L1_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H23/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H23')  
 
samples['WH_H0L1_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H24/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H24')  
 
samples['WH_H0L1_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H25/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H25')  
 
samples['WH_H0L1_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H26/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H26')  
 
samples['WH_H0L1_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H27/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H27')  
 
samples['WH_H0L1_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H28/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H28')  
 
samples['WH_H0L1_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H29/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H29')  
 
samples['WH_H0L1_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H30/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H30')  
 
samples['WH_H0L1_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H31/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H31')  
 
samples['WH_H0L1_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H32/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H32')  
 
samples['WH_H0L1_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H33/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H33')  
 
samples['WH_H0L1_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H34/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H34')  
 
samples['WH_H0L1_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H35/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H35')  
 
samples['WH_H0L1f05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H1/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H1')  
 
samples['WH_H0L1f05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H2/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H2')  
 
samples['WH_H0L1f05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H3/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H3')  
 
samples['WH_H0L1f05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H4/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H4')  
 
samples['WH_H0L1f05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H5/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H5')  
 
samples['WH_H0L1f05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H6/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H6')  
 
samples['WH_H0L1f05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H7/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H7')  
 
samples['WH_H0L1f05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H8/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H8')  
 
samples['WH_H0L1f05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H9/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H9')  
 
samples['WH_H0L1f05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H10/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H10')  
 
samples['WH_H0L1f05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H11/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H11')  
 
samples['WH_H0L1f05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H12/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H12')  
 
samples['WH_H0L1f05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H13/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H13')  
 
samples['WH_H0L1f05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H14/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H14')  
 
samples['WH_H0L1f05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H15/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H15')  
 
samples['WH_H0L1f05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H16/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H16')  
 
samples['WH_H0L1f05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H17/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H17')  
 
samples['WH_H0L1f05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H18/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H18')  
 
samples['WH_H0L1f05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H19/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H19')  
 
samples['WH_H0L1f05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H20/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H20')  
 
samples['WH_H0L1f05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H21/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H21')  
 
samples['WH_H0L1f05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H22/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H22')  
 
samples['WH_H0L1f05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H23/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H23')  
 
samples['WH_H0L1f05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H24/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H24')  
 
samples['WH_H0L1f05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H25/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H25')  
 
samples['WH_H0L1f05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H26/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H26')  
 
samples['WH_H0L1f05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H27/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H27')  
 
samples['WH_H0L1f05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H28/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H28')  
 
samples['WH_H0L1f05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H29/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H29')  
 
samples['WH_H0L1f05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H30/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H30')  
 
samples['WH_H0L1f05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H31/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H31')  
 
samples['WH_H0L1f05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H32/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H32')  
 
samples['WH_H0L1f05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H33/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H33')  
 
samples['WH_H0L1f05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H34/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H34')  
 
samples['WH_H0L1f05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H35/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H35')

# ZH MC samples 
 
# Original ZH samples 
 
samples['ZH_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W',   'FilesPerJob': 4, } 
 
samples['ZH_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W',   'FilesPerJob': 4, } 
 
samples['ZH_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W',   'FilesPerJob': 4, } 
 
samples['ZH_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W',   'FilesPerJob': 4, } 
 
samples['ZH_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W',   'FilesPerJob': 4, } 
 
samples['ZH_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W',   'FilesPerJob': 4, } 
 
samples['ZH_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W',   'FilesPerJob': 4, } 
 
# Reweighted ZH samples 
 
samples['ZH_H0PM_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H1/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H1')  
 
samples['ZH_H0PM_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H2/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H2')  
 
samples['ZH_H0PM_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H3/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H3')  
 
samples['ZH_H0PM_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H4/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H4')  
 
samples['ZH_H0PM_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H5/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H5')  
 
samples['ZH_H0PM_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H6/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H6')  
 
samples['ZH_H0PM_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H7/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H7')  
 
samples['ZH_H0PM_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H8/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H8')  
 
samples['ZH_H0PM_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H9/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H9')  
 
samples['ZH_H0PM_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H10/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H10')  
 
samples['ZH_H0PM_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H11/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H11')  
 
samples['ZH_H0PM_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H12/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H12')  
 
samples['ZH_H0PM_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H13/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H13')  
 
samples['ZH_H0PM_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H14/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H14')  
 
samples['ZH_H0PM_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H15/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H15')  
 
samples['ZH_H0PM_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H16/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H16')  
 
samples['ZH_H0PM_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H17/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H17')  
 
samples['ZH_H0PM_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H18/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H18')  
 
samples['ZH_H0PM_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H19/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H19')  
 
samples['ZH_H0PM_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H20/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H20')  
 
samples['ZH_H0PM_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H21/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H21')  
 
samples['ZH_H0PM_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H22/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H22')  
 
samples['ZH_H0PM_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H23/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H23')  
 
samples['ZH_H0PM_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H24/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H24')  
 
samples['ZH_H0PM_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H25/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H25')  
 
samples['ZH_H0PM_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H26/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H26')  
 
samples['ZH_H0PM_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H27/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H27')  
 
samples['ZH_H0PM_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H28/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H28')  
 
samples['ZH_H0PM_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H29/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H29')  
 
samples['ZH_H0PM_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H30/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H30')  
 
samples['ZH_H0PM_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H31/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H31')  
 
samples['ZH_H0PM_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H32/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H32')  
 
samples['ZH_H0PM_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H33/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H33')  
 
samples['ZH_H0PM_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H34/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H34')  
 
samples['ZH_H0PM_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H35/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H35')  
 
samples['ZH_H0PH_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H1/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H1')  
 
samples['ZH_H0PH_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H2/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H2')  
 
samples['ZH_H0PH_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H3/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H3')  
 
samples['ZH_H0PH_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H4/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H4')  
 
samples['ZH_H0PH_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H5/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H5')  
 
samples['ZH_H0PH_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H6/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H6')  
 
samples['ZH_H0PH_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H7/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H7')  
 
samples['ZH_H0PH_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H8/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H8')  
 
samples['ZH_H0PH_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H9/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H9')  
 
samples['ZH_H0PH_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H10/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H10')  
 
samples['ZH_H0PH_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H11/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H11')  
 
samples['ZH_H0PH_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H12/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H12')  
 
samples['ZH_H0PH_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H13/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H13')  
 
samples['ZH_H0PH_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H14/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H14')  
 
samples['ZH_H0PH_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H15/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H15')  
 
samples['ZH_H0PH_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H16/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H16')  
 
samples['ZH_H0PH_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H17/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H17')  
 
samples['ZH_H0PH_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H18/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H18')  
 
samples['ZH_H0PH_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H19/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H19')  
 
samples['ZH_H0PH_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H20/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H20')  
 
samples['ZH_H0PH_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H21/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H21')  
 
samples['ZH_H0PH_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H22/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H22')  
 
samples['ZH_H0PH_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H23/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H23')  
 
samples['ZH_H0PH_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H24/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H24')  
 
samples['ZH_H0PH_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H25/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H25')  
 
samples['ZH_H0PH_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H26/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H26')  
 
samples['ZH_H0PH_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H27/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H27')  
 
samples['ZH_H0PH_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H28/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H28')  
 
samples['ZH_H0PH_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H29/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H29')  
 
samples['ZH_H0PH_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H30/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H30')  
 
samples['ZH_H0PH_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H31/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H31')  
 
samples['ZH_H0PH_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H32/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H32')  
 
samples['ZH_H0PH_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H33/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H33')  
 
samples['ZH_H0PH_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H34/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H34')  
 
samples['ZH_H0PH_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H35/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H35')  
 
samples['ZH_H0PHf05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H1/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H1')  
 
samples['ZH_H0PHf05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H2/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H2')  
 
samples['ZH_H0PHf05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H3/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H3')  
 
samples['ZH_H0PHf05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H4/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H4')  
 
samples['ZH_H0PHf05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H5/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H5')  
 
samples['ZH_H0PHf05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H6/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H6')  
 
samples['ZH_H0PHf05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H7/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H7')  
 
samples['ZH_H0PHf05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H8/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H8')  
 
samples['ZH_H0PHf05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H9/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H9')  
 
samples['ZH_H0PHf05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H10/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H10')  
 
samples['ZH_H0PHf05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H11/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H11')  
 
samples['ZH_H0PHf05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H12/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H12')  
 
samples['ZH_H0PHf05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H13/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H13')  
 
samples['ZH_H0PHf05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H14/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H14')  
 
samples['ZH_H0PHf05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H15/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H15')  
 
samples['ZH_H0PHf05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H16/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H16')  
 
samples['ZH_H0PHf05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H17/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H17')  
 
samples['ZH_H0PHf05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H18/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H18')  
 
samples['ZH_H0PHf05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H19/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H19')  
 
samples['ZH_H0PHf05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H20/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H20')  
 
samples['ZH_H0PHf05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H21/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H21')  
 
samples['ZH_H0PHf05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H22/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H22')  
 
samples['ZH_H0PHf05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H23/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H23')  
 
samples['ZH_H0PHf05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H24/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H24')  
 
samples['ZH_H0PHf05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H25/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H25')  
 
samples['ZH_H0PHf05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H26/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H26')  
 
samples['ZH_H0PHf05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H27/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H27')  
 
samples['ZH_H0PHf05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H28/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H28')  
 
samples['ZH_H0PHf05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H29/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H29')  
 
samples['ZH_H0PHf05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H30/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H30')  
 
samples['ZH_H0PHf05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H31/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H31')  
 
samples['ZH_H0PHf05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H32/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H32')  
 
samples['ZH_H0PHf05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H33/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H33')  
 
samples['ZH_H0PHf05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H34/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H34')  
 
samples['ZH_H0PHf05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H35/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H35')  
 
samples['ZH_H0M_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H1/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H1')  
 
samples['ZH_H0M_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H2/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H2')  
 
samples['ZH_H0M_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H3/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H3')  
 
samples['ZH_H0M_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H4/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H4')  
 
samples['ZH_H0M_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H5/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H5')  
 
samples['ZH_H0M_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H6/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H6')  
 
samples['ZH_H0M_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H7/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H7')  
 
samples['ZH_H0M_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H8/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H8')  
 
samples['ZH_H0M_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H9/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H9')  
 
samples['ZH_H0M_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H10/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H10')  
 
samples['ZH_H0M_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H11/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H11')  
 
samples['ZH_H0M_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H12/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H12')  
 
samples['ZH_H0M_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H13/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H13')  
 
samples['ZH_H0M_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H14/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H14')  
 
samples['ZH_H0M_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H15/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H15')  
 
samples['ZH_H0M_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H16/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H16')  
 
samples['ZH_H0M_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H17/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H17')  
 
samples['ZH_H0M_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H18/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H18')  
 
samples['ZH_H0M_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H19/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H19')  
 
samples['ZH_H0M_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H20/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H20')  
 
samples['ZH_H0M_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H21/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H21')  
 
samples['ZH_H0M_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H22/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H22')  
 
samples['ZH_H0M_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H23/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H23')  
 
samples['ZH_H0M_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H24/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H24')  
 
samples['ZH_H0M_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H25/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H25')  
 
samples['ZH_H0M_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H26/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H26')  
 
samples['ZH_H0M_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H27/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H27')  
 
samples['ZH_H0M_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H28/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H28')  
 
samples['ZH_H0M_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H29/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H29')  
 
samples['ZH_H0M_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H30/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H30')  
 
samples['ZH_H0M_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H31/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H31')  
 
samples['ZH_H0M_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H32/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H32')  
 
samples['ZH_H0M_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H33/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H33')  
 
samples['ZH_H0M_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H34/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H34')  
 
samples['ZH_H0M_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H35/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H35')  
 
samples['ZH_H0Mf05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H1/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H1')  
 
samples['ZH_H0Mf05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H2/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H2')  
 
samples['ZH_H0Mf05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H3/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H3')  
 
samples['ZH_H0Mf05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H4/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H4')  
 
samples['ZH_H0Mf05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H5/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H5')  
 
samples['ZH_H0Mf05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H6/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H6')  
 
samples['ZH_H0Mf05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H7/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H7')  
 
samples['ZH_H0Mf05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H8/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H8')  
 
samples['ZH_H0Mf05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H9/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H9')  
 
samples['ZH_H0Mf05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H10/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H10')  
 
samples['ZH_H0Mf05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H11/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H11')  
 
samples['ZH_H0Mf05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H12/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H12')  
 
samples['ZH_H0Mf05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H13/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H13')  
 
samples['ZH_H0Mf05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H14/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H14')  
 
samples['ZH_H0Mf05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H15/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H15')  
 
samples['ZH_H0Mf05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H16/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H16')  
 
samples['ZH_H0Mf05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H17/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H17')  
 
samples['ZH_H0Mf05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H18/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H18')  
 
samples['ZH_H0Mf05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H19/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H19')  
 
samples['ZH_H0Mf05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H20/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H20')  
 
samples['ZH_H0Mf05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H21/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H21')  
 
samples['ZH_H0Mf05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H22/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H22')  
 
samples['ZH_H0Mf05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H23/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H23')  
 
samples['ZH_H0Mf05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H24/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H24')  
 
samples['ZH_H0Mf05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H25/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H25')  
 
samples['ZH_H0Mf05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H26/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H26')  
 
samples['ZH_H0Mf05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H27/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H27')  
 
samples['ZH_H0Mf05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H28/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H28')  
 
samples['ZH_H0Mf05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H29/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H29')  
 
samples['ZH_H0Mf05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H30/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H30')  
 
samples['ZH_H0Mf05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H31/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H31')  
 
samples['ZH_H0Mf05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H32/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H32')  
 
samples['ZH_H0Mf05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H33/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H33')  
 
samples['ZH_H0Mf05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H34/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H34')  
 
samples['ZH_H0Mf05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H35/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H35')  
 
samples['ZH_H0L1_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H1/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H1')  
 
samples['ZH_H0L1_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H2/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H2')  
 
samples['ZH_H0L1_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H3/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H3')  
 
samples['ZH_H0L1_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H4/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H4')  
 
samples['ZH_H0L1_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H5/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H5')  
 
samples['ZH_H0L1_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H6/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H6')  
 
samples['ZH_H0L1_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H7/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H7')  
 
samples['ZH_H0L1_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H8/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H8')  
 
samples['ZH_H0L1_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H9/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H9')  
 
samples['ZH_H0L1_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H10/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H10')  
 
samples['ZH_H0L1_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H11/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H11')  
 
samples['ZH_H0L1_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H12/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H12')  
 
samples['ZH_H0L1_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H13/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H13')  
 
samples['ZH_H0L1_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H14/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H14')  
 
samples['ZH_H0L1_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H15/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H15')  
 
samples['ZH_H0L1_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H16/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H16')  
 
samples['ZH_H0L1_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H17/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H17')  
 
samples['ZH_H0L1_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H18/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H18')  
 
samples['ZH_H0L1_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H19/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H19')  
 
samples['ZH_H0L1_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H20/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H20')  
 
samples['ZH_H0L1_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H21/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H21')  
 
samples['ZH_H0L1_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H22/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H22')  
 
samples['ZH_H0L1_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H23/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H23')  
 
samples['ZH_H0L1_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H24/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H24')  
 
samples['ZH_H0L1_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H25/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H25')  
 
samples['ZH_H0L1_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H26/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H26')  
 
samples['ZH_H0L1_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H27/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H27')  
 
samples['ZH_H0L1_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H28/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H28')  
 
samples['ZH_H0L1_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H29/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H29')  
 
samples['ZH_H0L1_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H30/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H30')  
 
samples['ZH_H0L1_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H31/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H31')  
 
samples['ZH_H0L1_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H32/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H32')  
 
samples['ZH_H0L1_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H33/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H33')  
 
samples['ZH_H0L1_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H34/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H34')  
 
samples['ZH_H0L1_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H35/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H35')  
 
samples['ZH_H0L1f05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H1/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H1')  
 
samples['ZH_H0L1f05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H2/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H2')  
 
samples['ZH_H0L1f05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H3/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H3')  
 
samples['ZH_H0L1f05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H4/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H4')  
 
samples['ZH_H0L1f05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H5/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H5')  
 
samples['ZH_H0L1f05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H6/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H6')  
 
samples['ZH_H0L1f05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H7/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H7')  
 
samples['ZH_H0L1f05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H8/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H8')  
 
samples['ZH_H0L1f05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H9/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H9')  
 
samples['ZH_H0L1f05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H10/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H10')  
 
samples['ZH_H0L1f05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H11/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H11')  
 
samples['ZH_H0L1f05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H12/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H12')  
 
samples['ZH_H0L1f05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H13/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H13')  
 
samples['ZH_H0L1f05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H14/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H14')  
 
samples['ZH_H0L1f05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H15/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H15')  
 
samples['ZH_H0L1f05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H16/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H16')  
 
samples['ZH_H0L1f05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H17/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H17')  
 
samples['ZH_H0L1f05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H18/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H18')  
 
samples['ZH_H0L1f05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H19/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H19')  
 
samples['ZH_H0L1f05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H20/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H20')  
 
samples['ZH_H0L1f05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H21/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H21')  
 
samples['ZH_H0L1f05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H22/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H22')  
 
samples['ZH_H0L1f05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H23/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H23')  
 
samples['ZH_H0L1f05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H24/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H24')  
 
samples['ZH_H0L1f05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H25/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H25')  
 
samples['ZH_H0L1f05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H26/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H26')  
 
samples['ZH_H0L1f05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H27/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H27')  
 
samples['ZH_H0L1f05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H28/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H28')  
 
samples['ZH_H0L1f05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H29/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H29')  
 
samples['ZH_H0L1f05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H30/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H30')  
 
samples['ZH_H0L1f05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H31/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H31')  
 
samples['ZH_H0L1f05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H32/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H32')  
 
samples['ZH_H0L1f05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H33/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H33')  
 
samples['ZH_H0L1f05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H34/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H34')  
 
samples['ZH_H0L1f05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H35/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H35')  

# GGH MC samples 
 
# Original GGH samples 
 
samples['H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W',   'FilesPerJob': 4, } 
 
samples['H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W',   'FilesPerJob': 4, } 
 
samples['H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W',   'FilesPerJob': 4, } 
 
samples['H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W',   'FilesPerJob': 4, } 
 
samples['H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W',   'FilesPerJob': 4, } 
 
samples['H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W',   'FilesPerJob': 4, } 
 
samples['H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W',   'FilesPerJob': 4, } 
 
# Reweighted GGH samples 
 
samples['H0PM_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H1/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H1')  
 
samples['H0PM_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H2/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H2')  
 
samples['H0PM_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H3/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H3')  
 
samples['H0PM_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H4/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H4')  
 
samples['H0PM_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H5/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H5')  
 
samples['H0PM_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H6/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H6')  
 
samples['H0PM_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H7/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H7')  
 
samples['H0PM_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H8/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H8')  
 
samples['H0PM_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H9/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H9')  
 
samples['H0PM_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H10/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H10')  
 
samples['H0PH_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H1/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H1')  
 
samples['H0PH_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H2/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H2')  
 
samples['H0PH_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H3/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H3')  
 
samples['H0PH_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H4/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H4')  
 
samples['H0PH_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H5/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H5')  
 
samples['H0PH_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H6/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H6')  
 
samples['H0PH_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H7/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H7')  
 
samples['H0PH_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H8/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H8')  
 
samples['H0PH_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H9/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H9')  
 
samples['H0PH_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H10/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H10')  
 
samples['H0PHf05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H1/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H1')  
 
samples['H0PHf05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H2/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H2')  
 
samples['H0PHf05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H3/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H3')  
 
samples['H0PHf05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H4/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H4')  
 
samples['H0PHf05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H5/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H5')  
 
samples['H0PHf05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H6/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H6')  
 
samples['H0PHf05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H7/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H7')  
 
samples['H0PHf05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H8/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H8')  
 
samples['H0PHf05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H9/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H9')  
 
samples['H0PHf05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H10/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H10')  
 
samples['H0M_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H1/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H1')  
 
samples['H0M_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H2/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H2')  
 
samples['H0M_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H3/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H3')  
 
samples['H0M_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H4/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H4')  
 
samples['H0M_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H5/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H5')  
 
samples['H0M_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H6/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H6')  
 
samples['H0M_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H7/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H7')  
 
samples['H0M_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H8/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H8')  
 
samples['H0M_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H9/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H9')  
 
samples['H0M_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H10/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H10')  
 
samples['H0Mf05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H1/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H1')  
 
samples['H0Mf05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H2/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H2')  
 
samples['H0Mf05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H3/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H3')  
 
samples['H0Mf05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H4/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H4')  
 
samples['H0Mf05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H5/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H5')  
 
samples['H0Mf05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H6/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H6')  
 
samples['H0Mf05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H7/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H7')  
 
samples['H0Mf05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H8/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H8')  
 
samples['H0Mf05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H9/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H9')  
 
samples['H0Mf05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H10/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H10')  
 
samples['H0L1_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H1/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H1')  
 
samples['H0L1_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H2/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H2')  
 
samples['H0L1_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H3/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H3')  
 
samples['H0L1_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H4/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H4')  
 
samples['H0L1_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H5/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H5')  
 
samples['H0L1_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H6/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H6')  
 
samples['H0L1_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H7/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H7')  
 
samples['H0L1_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H8/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H8')  
 
samples['H0L1_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H9/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H9')  
 
samples['H0L1_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H10/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H10')  
 
samples['H0L1f05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H1/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H1')  
 
samples['H0L1f05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H2/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H2')  
 
samples['H0L1f05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H3/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H3')  
 
samples['H0L1f05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H4/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H4')  
 
samples['H0L1f05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H5/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H5')  
 
samples['H0L1f05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H6/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H6')  
 
samples['H0L1f05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H7/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H7')  
 
samples['H0L1f05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H8/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H8')  
 
samples['H0L1f05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H9/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H9')  
 
samples['H0L1f05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H10/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H10') 
'''
