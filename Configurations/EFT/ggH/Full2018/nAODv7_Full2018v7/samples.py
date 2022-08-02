import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # nAODv7_Full2018v7
configurations = os.path.dirname(configurations) # Full2018
configurations = os.path.dirname(configurations) # ggH
configurations = os.path.dirname(configurations) # EFT
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
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__trigFix'))

mcDirectory = makeMCDirectory()
fakeDirectory = os.path.join(treeBaseDir, fakeReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
embedDirectory = os.path.join(treeBaseDir, embedReco, embedSteps)

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

#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC'
mcCommonWeight = 'XSWeight*SFweight*PromptGenLepMatch2l*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################
backgrounds = []

###### DY EMBEDDED #######
useEmbeddedDY = True
useDYtt = True
runDYveto = False

embed_tautauveto = '' #Setup
if useEmbeddedDY:
  embed_tautauveto = '*embed_tautauveto'

if useEmbeddedDY:
  # Actual embedded data
  samples['Dyemb'] = {
    'name': [],
    'weight': 'METFilter_DATA*LepWPCut*Muon_ttHMVA_SF*embedtotal*genWeight',
    'weights': [],
    'isData': ['all'],
    'FilesPerJob': 20
  }

  for run_, sd in DataRun:
      files = nanoGetSampleFiles(embedDirectory, 'DYToTT_MuEle_Embedded_Run2018' + run_)
      samples['Dyemb']['name'].extend(files)
      samples['Dyemb']['weights'].extend(['Trigger_ElMu'] * len(files))

  if runDYveto:
      # Vetoed MC: Needed for uncertainty
      files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
      nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop_ext1') + \
      nanoGetSampleFiles(mcDirectory, 'ST_tW_top_ext1') + \
      nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu') + \
      nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK') + \
      nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNTN') + \
      nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu_ext1') + \
      nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Q') + \
      nanoGetSampleFiles(mcDirectory, 'ZZTo4L_ext1') + \
      nanoGetSampleFiles(mcDirectory, 'WZTo2L2Q') + \
      nanoGetSampleFiles(mcDirectory, 'ZGToLLG') + \
      nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')

      samples['Dyveto'] = {
          'name': files,
          'weight': '(1-embed_tautauveto)',
          'FilesPerJob': 1, # There's some error about not finding sample-specific variables like "nllW" when mixing different samples into a single job; so split them all up instead
      }

      addSampleWeight(samples, 'Dyveto', 'TTTo2L2Nu', mcCommonWeight + '* (topGenPt * antitopGenPt > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) + (topGenPt * antitopGenPt <= 0.)')
      addSampleWeight(samples, 'Dyveto', 'ST_tW_antitop_ext1', mcCommonWeight)
      addSampleWeight(samples, 'Dyveto', 'ST_tW_top_ext1', mcCommonWeight)
      addSampleWeight(samples, 'Dyveto', 'WWTo2L2Nu', mcCommonWeight + '*nllW')
      addSampleWeight(samples, 'Dyveto', 'WpWmJJ_EWK', mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)')
      addSampleWeight(samples, 'Dyveto', 'GluGluToWWToTNTN', mcCommonWeight + '*1.53/1.4')
      addSampleWeight(samples, 'Dyveto', 'ZZTo2L2Nu_ext1', mcCommonWeight + '*1.11')
      addSampleWeight(samples, 'Dyveto', 'ZZTo2L2Q', mcCommonWeight + '*1.11')
      addSampleWeight(samples, 'Dyveto', 'ZZTo4L_ext1', mcCommonWeight + '*1.11')
      addSampleWeight(samples, 'Dyveto', 'WZTo2L2Q', mcCommonWeight + '*1.11')
      addSampleWeight(samples, 'Dyveto', 'ZGToLLG', ' ( ' + mcCommonWeightNoMatch + '*(!(Gen_ZGstar_mass > 0))' + ' ) + ( ' + mcCommonWeight + ' * ((Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4) * 0.94 + (Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4) * 1.14) * (Gen_ZGstar_mass > 0)' + ' ) ') # Vg contribution + VgS contribution
      addSampleWeight(samples, 'Dyveto', 'WZTo3LNu_mllmin01', mcCommonWeight + '*((Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4) * 0.94 + (Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4) * 1.14) * (Gen_ZGstar_mass > 0.1)')

 
###### DY ####################
files=[]
if useDYtt:
  files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
          nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')

else:
  files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext2') + \
          nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')


samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight+embed_tautauveto + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                     Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )',
    'FilesPerJob': 6,
    #'suppressNegative' :['all'],
    #'suppressNegativeNuisances' :['all'],
}
addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50','DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2','DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1','DY_LO_pTllrw')

###### Top #######

files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ST_s-channel_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_top_ext1')

samples['top'] = {
    'name': files,
    'weight': mcCommonWeight+embed_tautauveto,
    'FilesPerJob': 2,
}

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight+embed_tautauveto+ '*nllW*ewknloW', 
    'FilesPerJob': 1
}

samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK'),
    'weight': mcCommonWeight+embed_tautauveto + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)', #filter tops and Higgs
    'FilesPerJob': 4
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
    'weight': mcCommonWeight+embed_tautauveto + '*1.53/1.4', # updating k-factor
    'FilesPerJob': 10
}

######## Vg and VgS ########

useWgFXFX=True

if useWgFXFX:
  ### Vg ### 
  files = nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX') + \
      nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_PDFWeights') + \
      nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_PDFWeights_ext1') + \
      nanoGetSampleFiles(mcDirectory, 'ZGToLLG')
  
  samples['Vg'] = {
      'name': files,
      'weight': mcCommonWeightNoMatch+embed_tautauveto + '*(Gen_ZGstar_mass <= 0)',
      'FilesPerJob': 2
  }
  
  wgbasew = getBaseWnAOD(mcDirectory,'Autumn18_102X_nAODv7_Full2018v7',['Wg_AMCNLOFXFX','Wg_AMCNLOFXFX_PDFWeights','Wg_AMCNLOFXFX_PDFWeights_ext1'])
  addSampleWeight(samples,'Vg','Wg_AMCNLOFXFX','191.4/586.*'+wgbasew+'/baseW')
  addSampleWeight(samples,'Vg','Wg_AMCNLOFXFX_PDFWeights','191.4/586.*'+wgbasew+'/baseW')
  addSampleWeight(samples,'Vg','Wg_AMCNLOFXFX_PDFWeights_ext1','191.4/586.*'+wgbasew+'/baseW')

  ### VgS ###
  files = nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX') + \
      nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_PDFWeights') + \
      nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_PDFWeights_ext1') + \
      nanoGetSampleFiles(mcDirectory, 'ZGToLLG') + \
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
  
  addSampleWeight(samples, 'VgS', 'Wg_AMCNLOFXFX', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)*191.4/586.*'+wgbasew+'/baseW')
  addSampleWeight(samples, 'VgS', 'Wg_AMCNLOFXFX_PDFWeights', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)*191.4/586.*'+wgbasew+'/baseW')
  addSampleWeight(samples, 'VgS', 'Wg_AMCNLOFXFX_PDFWeights_ext1', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)*191.4/586.*'+wgbasew+'/baseW')
  addSampleWeight(samples, 'VgS', 'ZGToLLG', '(Gen_ZGstar_mass > 0)')
  addSampleWeight(samples, 'VgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')

else:
  ### Vg ###
  files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
      nanoGetSampleFiles(mcDirectory, 'ZGToLLG')
  
  samples['Vg'] = {
      'name': files,
      'weight': mcCommonWeightNoMatch+embed_tautauveto + '*(Gen_ZGstar_mass <= 0)',
      'FilesPerJob': 2
  }

  ### VgS ###
  files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
      nanoGetSampleFiles(mcDirectory, 'ZGToLLG') + \
      nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')
  
  samples['VgS'] = {
      'name': files,
      'weight': mcCommonWeight+embed_tautauveto + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
      'FilesPerJob': 2,
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
    'weight': mcCommonWeight+embed_tautauveto+ '*1.11',
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

###########################################
#############   SIGNALS  ##################
###########################################

#### EFT Signals 
signals_rw = []

########### ORIGINAL SAMPLES VBF ##############
samples['qqH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

samples['VBF_H0PM'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*VBF_H0PM_W', 
   'FilesPerJob': 1 
} 
samples['VBF_H0M'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*VBF_H0M_W', 
   'FilesPerJob': 1 
} 
samples['VBF_H0Mf05'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*VBF_H0Mf05_W', 
   'FilesPerJob': 1 
} 
samples['VBF_H0PH'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*VBF_H0PH_W', 
   'FilesPerJob': 1 
} 
samples['VBF_H0PHf05'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*VBF_H0PHf05_W', 
   'FilesPerJob': 1 
} 
samples['VBF_H0L1'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*VBF_H0L1_W', 
   'FilesPerJob': 1 
} 
samples['VBF_H0L1f05'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*VBF_H0L1f05_W', 
   'FilesPerJob': 1 
} 

########### ORIGINAL SAMPLES WH ################
samples['WH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

samples['WH_H0PM'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*WH_H0PM_W', 
   'FilesPerJob': 1 
} 
samples['WH_H0M'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*WH_H0M_W', 
   'FilesPerJob': 1 
} 
samples['WH_H0Mf05'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*WH_H0Mf05_W', 
   'FilesPerJob': 1 
} 
samples['WH_H0PH'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*WH_H0PH_W', 
   'FilesPerJob': 1 
} 
samples['WH_H0PHf05'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*WH_H0PHf05_W', 
   'FilesPerJob': 1 
} 
samples['WH_H0L1'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*WH_H0L1_W', 
   'FilesPerJob': 1 
} 
samples['WH_H0L1f05'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*WH_H0L1f05_W', 
   'FilesPerJob': 1 
}

########### ORIGINAL SAMPLES ZH ##################
samples['ZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}
samples['ggZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

samples['ZH_H0PM'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*ZH_H0PM_W', 
   'FilesPerJob': 1 
} 
samples['ZH_H0M'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*ZH_H0M_W', 
   'FilesPerJob': 1 
} 
samples['ZH_H0Mf05'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*ZH_H0Mf05_W', 
   'FilesPerJob': 1 
} 
samples['ZH_H0PH'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*ZH_H0PH_W', 
   'FilesPerJob': 1 
} 
samples['ZH_H0PHf05'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*ZH_H0PHf05_W', 
   'FilesPerJob': 1 
} 
samples['ZH_H0L1'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*ZH_H0L1_W', 
   'FilesPerJob': 1 
} 
samples['ZH_H0L1f05'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*ZH_H0L1f05_W', 
   'FilesPerJob': 1 
}

#########  ORIGINAL SAMPLES ggH ##################
samples['ggH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2Nu_M125') + nanoGetSampleFiles(mcDirectory, 'GGHjjToWWTo2L2Nu_minloHJJ_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
}
addSampleWeight(samples, 'ggH_hww', 'GluGluHToWWTo2L2Nu_M125', '(HTXS_stage1_1_cat_pTjet30GeV<107)*Weight2MINLO*1092.7640/1073.2567')                           
addSampleWeight(samples, 'ggH_hww', 'GGHjjToWWTo2L2Nu_minloHJJ_M125', '(HTXS_stage1_1_cat_pTjet30GeV>106)*1092.7640/1073.2567')

samples['H0PM'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*H0PM_W', 
   'FilesPerJob': 1 
} 
samples['H0M'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*H0M_W', 
   'FilesPerJob': 1 
} 
samples['H0Mf05'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*H0Mf05_W', 
   'FilesPerJob': 1 
} 
samples['H0PH'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*H0PH_W', 
   'FilesPerJob': 1 
} 
samples['H0PHf05'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*H0PHf05_W', 
   'FilesPerJob': 1 
} 
samples['H0L1'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*H0L1_W', 
   'FilesPerJob': 1 
} 
samples['H0L1f05'] = { 
   'name': nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight + '*H0L1f05_W', 
   'FilesPerJob': 1 
} 

################# OTHER ORIGINAL SAMPLES #############
samples['ttH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1
}

samples['ggH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 20
}
samples['qqH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 10
}
samples['ZH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}
samples['WH_htt'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}


######### REWEIGHTED SAMPLES VBF #####################
samples['VBF_H0PM_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0M_M0/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0M_M0')  
 
samples['VBF_H0PM_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0M_M1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0M_M1')  
 
samples['VBF_H0PM_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0M_M2/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0M_M2')  
 
samples['VBF_H0PM_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0M_M3/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0M_M3')  
 
samples['VBF_H0PM_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0PH_M0/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0PH_M0')  
 
samples['VBF_H0PM_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0PH_M1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0PH_M1')  
 
samples['VBF_H0PM_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0PH_M2/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0PH_M2')  
 
samples['VBF_H0PM_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0PH_M3/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0PH_M3')  
 
samples['VBF_H0PM_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0L1_M0/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0L1_M0')  
 
samples['VBF_H0PM_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0L1_M1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0L1_M1')  
 
samples['VBF_H0PM_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0L1_M2/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0L1_M2')  
 
samples['VBF_H0PM_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H0L1_M3/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PM_H0L1_M3')  
 
samples['VBF_H0M_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0PM/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0PM')  
 
samples['VBF_H0M_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0M_M0/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0M_M0')  
 
samples['VBF_H0M_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0M_M1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0M_M1')  
 
samples['VBF_H0M_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0M_M2/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0M_M2')  
 
samples['VBF_H0M_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0M_M3/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0M_M3')  
 
samples['VBF_H0M_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0PH_M0/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0PH_M0')  
 
samples['VBF_H0M_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0PH_M1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0PH_M1')  
 
samples['VBF_H0M_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0PH_M2/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0PH_M2')  
 
samples['VBF_H0M_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0PH_M3/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0PH_M3')  
 
samples['VBF_H0M_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0L1_M0/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0L1_M0')  
 
samples['VBF_H0M_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0L1_M1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0L1_M1')  
 
samples['VBF_H0M_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0L1_M2/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0L1_M2')  
 
samples['VBF_H0M_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H0L1_M3/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0M_H0L1_M3')  
 
samples['VBF_H0Mf05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0PM/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0PM')  
 
samples['VBF_H0Mf05_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0M_M0/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0M_M0')  
 
samples['VBF_H0Mf05_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0M_M1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0M_M1')  
 
samples['VBF_H0Mf05_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0M_M2/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0M_M2')  
 
samples['VBF_H0Mf05_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0M_M3/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0M_M3')  
 
samples['VBF_H0Mf05_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0PH_M0/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0PH_M0')  
 
samples['VBF_H0Mf05_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0PH_M1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0PH_M1')  
 
samples['VBF_H0Mf05_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0PH_M2/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0PH_M2')  
 
samples['VBF_H0Mf05_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0PH_M3/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0PH_M3')  
 
samples['VBF_H0Mf05_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0L1_M0/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0L1_M0')  
 
samples['VBF_H0Mf05_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0L1_M1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0L1_M1')  
 
samples['VBF_H0Mf05_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0L1_M2/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0L1_M2')  
 
samples['VBF_H0Mf05_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H0L1_M3/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0Mf05_H0L1_M3')  
 
samples['VBF_H0PH_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0PM/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0PM')  
 
samples['VBF_H0PH_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0M_M0/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0M_M0')  
 
samples['VBF_H0PH_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0M_M1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0M_M1')  
 
samples['VBF_H0PH_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0M_M2/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0M_M2')  
 
samples['VBF_H0PH_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0M_M3/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0M_M3')  
 
samples['VBF_H0PH_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0PH_M0/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0PH_M0')  
 
samples['VBF_H0PH_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0PH_M1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0PH_M1')  
 
samples['VBF_H0PH_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0PH_M2/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0PH_M2')  
 
samples['VBF_H0PH_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0PH_M3/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0PH_M3')  
 
samples['VBF_H0PH_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0L1_M0/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0L1_M0')  
 
samples['VBF_H0PH_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0L1_M1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0L1_M1')  
 
samples['VBF_H0PH_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0L1_M2/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0L1_M2')  
 
samples['VBF_H0PH_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H0L1_M3/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PH_H0L1_M3')  
 
samples['VBF_H0PHf05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0PM/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0PM')  
 
samples['VBF_H0PHf05_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0M_M0/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0M_M0')  
 
samples['VBF_H0PHf05_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0M_M1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0M_M1')  
 
samples['VBF_H0PHf05_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0M_M2/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0M_M2')  
 
samples['VBF_H0PHf05_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0M_M3/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0M_M3')  
 
samples['VBF_H0PHf05_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0PH_M0/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0PH_M0')  
 
samples['VBF_H0PHf05_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0PH_M1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0PH_M1')  
 
samples['VBF_H0PHf05_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0PH_M2/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0PH_M2')  
 
samples['VBF_H0PHf05_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0PH_M3/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0PH_M3')  
 
samples['VBF_H0PHf05_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0L1_M0/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0L1_M0')  
 
samples['VBF_H0PHf05_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0L1_M1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0L1_M1')  
 
samples['VBF_H0PHf05_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0L1_M2/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0L1_M2')  
 
samples['VBF_H0PHf05_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H0L1_M3/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0PHf05_H0L1_M3')  
 
samples['VBF_H0L1_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0PM/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0PM')  
 
samples['VBF_H0L1_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0M_M0/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0M_M0')  
 
samples['VBF_H0L1_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0M_M1/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0M_M1')  
 
samples['VBF_H0L1_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0M_M2/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0M_M2')  
 
samples['VBF_H0L1_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0M_M3/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0M_M3')  
 
samples['VBF_H0L1_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0PH_M0/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0PH_M0')  
 
samples['VBF_H0L1_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0PH_M1/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0PH_M1')  
 
samples['VBF_H0L1_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0PH_M2/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0PH_M2')  
 
samples['VBF_H0L1_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0PH_M3/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0PH_M3')  
 
samples['VBF_H0L1_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0L1_M0/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0L1_M0')  
 
samples['VBF_H0L1_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0L1_M1/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0L1_M1')  
 
samples['VBF_H0L1_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0L1_M2/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0L1_M2')  
 
samples['VBF_H0L1_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H0L1_M3/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1_H0L1_M3')  
 
samples['VBF_H0L1f05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0PM/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0PM')  
 
samples['VBF_H0L1f05_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0M_M0/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0M_M0')  
 
samples['VBF_H0L1f05_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0M_M1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0M_M1')  
 
samples['VBF_H0L1f05_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0M_M2/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0M_M2')  
 
samples['VBF_H0L1f05_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0M_M3/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0M_M3')  
 
samples['VBF_H0L1f05_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0PH_M0/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0PH_M0')  
 
samples['VBF_H0L1f05_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0PH_M1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0PH_M1')  
 
samples['VBF_H0L1f05_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0PH_M2/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0PH_M2')  
 
samples['VBF_H0L1f05_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0PH_M3/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0PH_M3')  
 
samples['VBF_H0L1f05_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0L1_M0/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0L1_M0')  
 
samples['VBF_H0L1f05_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0L1_M1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0L1_M1')  
 
samples['VBF_H0L1f05_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0L1_M2/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0L1_M2')  
 
samples['VBF_H0L1f05_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H0L1_M3/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('VBF_H0L1f05_H0L1_M3')

#########   REWEIGHTED SAMPLES WH  #####################
 
samples['WH_H0PM_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0M_M0/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0M_M0')  
 
samples['WH_H0PM_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0M_M1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0M_M1')  
 
samples['WH_H0PM_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0M_M2/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0M_M2')  
 
samples['WH_H0PM_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0M_M3/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0M_M3')  
 
samples['WH_H0PM_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0PH_M0/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0PH_M0')  
 
samples['WH_H0PM_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0PH_M1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0PH_M1')  
 
samples['WH_H0PM_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0PH_M2/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0PH_M2')  
 
samples['WH_H0PM_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0PH_M3/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0PH_M3')  
 
samples['WH_H0PM_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0L1_M0/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0L1_M0')  
 
samples['WH_H0PM_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0L1_M1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0L1_M1')  
 
samples['WH_H0PM_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0L1_M2/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0L1_M2')  
 
samples['WH_H0PM_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H0L1_M3/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PM_H0L1_M3')  
 
samples['WH_H0M_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0PM/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0PM')  
 
samples['WH_H0M_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0M_M0/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0M_M0')  
 
samples['WH_H0M_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0M_M1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0M_M1')  
 
samples['WH_H0M_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0M_M2/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0M_M2')  
 
samples['WH_H0M_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0M_M3/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0M_M3')  
 
samples['WH_H0M_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0PH_M0/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0PH_M0')  
 
samples['WH_H0M_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0PH_M1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0PH_M1')  
 
samples['WH_H0M_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0PH_M2/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0PH_M2')  
 
samples['WH_H0M_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0PH_M3/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0PH_M3')  
 
samples['WH_H0M_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0L1_M0/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0L1_M0')  
 
samples['WH_H0M_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0L1_M1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0L1_M1')  
 
samples['WH_H0M_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0L1_M2/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0L1_M2')  
 
samples['WH_H0M_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H0L1_M3/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0M_H0L1_M3')  
 
samples['WH_H0Mf05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0PM/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0PM')  
 
samples['WH_H0Mf05_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0M_M0/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0M_M0')  
 
samples['WH_H0Mf05_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0M_M1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0M_M1')  
 
samples['WH_H0Mf05_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0M_M2/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0M_M2')  
 
samples['WH_H0Mf05_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0M_M3/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0M_M3')  
 
samples['WH_H0Mf05_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0PH_M0/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0PH_M0')  
 
samples['WH_H0Mf05_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0PH_M1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0PH_M1')  
 
samples['WH_H0Mf05_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0PH_M2/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0PH_M2')  
 
samples['WH_H0Mf05_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0PH_M3/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0PH_M3')  
 
samples['WH_H0Mf05_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0L1_M0/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0L1_M0')  
 
samples['WH_H0Mf05_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0L1_M1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0L1_M1')  
 
samples['WH_H0Mf05_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0L1_M2/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0L1_M2')  
 
samples['WH_H0Mf05_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H0L1_M3/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0Mf05_H0L1_M3')  
 
samples['WH_H0PH_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0PM/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0PM')  
 
samples['WH_H0PH_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0M_M0/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0M_M0')  
 
samples['WH_H0PH_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0M_M1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0M_M1')  
 
samples['WH_H0PH_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0M_M2/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0M_M2')  
 
samples['WH_H0PH_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0M_M3/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0M_M3')  
 
samples['WH_H0PH_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0PH_M0/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0PH_M0')  
 
samples['WH_H0PH_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0PH_M1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0PH_M1')  
 
samples['WH_H0PH_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0PH_M2/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0PH_M2')  
 
samples['WH_H0PH_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0PH_M3/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0PH_M3')  
 
samples['WH_H0PH_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0L1_M0/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0L1_M0')  
 
samples['WH_H0PH_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0L1_M1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0L1_M1')  
 
samples['WH_H0PH_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0L1_M2/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0L1_M2')  
 
samples['WH_H0PH_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H0L1_M3/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PH_H0L1_M3')  
 
samples['WH_H0PHf05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0PM/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0PM')  
 
samples['WH_H0PHf05_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0M_M0/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0M_M0')  
 
samples['WH_H0PHf05_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0M_M1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0M_M1')  
 
samples['WH_H0PHf05_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0M_M2/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0M_M2')  
 
samples['WH_H0PHf05_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0M_M3/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0M_M3')  
 
samples['WH_H0PHf05_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0PH_M0/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0PH_M0')  
 
samples['WH_H0PHf05_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0PH_M1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0PH_M1')  
 
samples['WH_H0PHf05_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0PH_M2/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0PH_M2')  
 
samples['WH_H0PHf05_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0PH_M3/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0PH_M3')  
 
samples['WH_H0PHf05_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0L1_M0/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0L1_M0')  
 
samples['WH_H0PHf05_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0L1_M1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0L1_M1')  
 
samples['WH_H0PHf05_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0L1_M2/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0L1_M2')  
 
samples['WH_H0PHf05_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H0L1_M3/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0PHf05_H0L1_M3')  
 
samples['WH_H0L1_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0PM/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0PM')  
 
samples['WH_H0L1_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0M_M0/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0M_M0')  
 
samples['WH_H0L1_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0M_M1/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0M_M1')  
 
samples['WH_H0L1_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0M_M2/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0M_M2')  
 
samples['WH_H0L1_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0M_M3/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0M_M3')  
 
samples['WH_H0L1_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0PH_M0/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0PH_M0')  
 
samples['WH_H0L1_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0PH_M1/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0PH_M1')  
 
samples['WH_H0L1_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0PH_M2/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0PH_M2')  
 
samples['WH_H0L1_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0PH_M3/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0PH_M3')  
 
samples['WH_H0L1_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0L1_M0/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0L1_M0')  
 
samples['WH_H0L1_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0L1_M1/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0L1_M1')  
 
samples['WH_H0L1_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0L1_M2/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0L1_M2')  
 
samples['WH_H0L1_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H0L1_M3/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1_H0L1_M3')  
 
samples['WH_H0L1f05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0PM/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0PM')  
 
samples['WH_H0L1f05_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0M_M0/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0M_M0')  
 
samples['WH_H0L1f05_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0M_M1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0M_M1')  
 
samples['WH_H0L1f05_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0M_M2/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0M_M2')  
 
samples['WH_H0L1f05_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0M_M3/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0M_M3')  
 
samples['WH_H0L1f05_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0PH_M0/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0PH_M0')  
 
samples['WH_H0L1f05_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0PH_M1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0PH_M1')  
 
samples['WH_H0L1f05_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0PH_M2/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0PH_M2')  
 
samples['WH_H0L1f05_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0PH_M3/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0PH_M3')  
 
samples['WH_H0L1f05_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0L1_M0/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0L1_M0')  
 
samples['WH_H0L1f05_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0L1_M1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0L1_M1')  
 
samples['WH_H0L1f05_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0L1_M2/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0L1_M2')  
 
samples['WH_H0L1f05_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H0L1_M3/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('WH_H0L1f05_H0L1_M3')

################ REWEIGHTED SAMPLES ZH ######################
samples['ZH_H0PM_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0M_M0/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0M_M0')  
 
samples['ZH_H0PM_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0M_M1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0M_M1')  
 
samples['ZH_H0PM_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0M_M2/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0M_M2')  
 
samples['ZH_H0PM_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0M_M3/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0M_M3')  
 
samples['ZH_H0PM_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0PH_M0/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0PH_M0')  
 
samples['ZH_H0PM_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0PH_M1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0PH_M1')  
 
samples['ZH_H0PM_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0PH_M2/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0PH_M2')  
 
samples['ZH_H0PM_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0PH_M3/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0PH_M3')  
 
samples['ZH_H0PM_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0L1_M0/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0L1_M0')  
 
samples['ZH_H0PM_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0L1_M1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0L1_M1')  
 
samples['ZH_H0PM_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0L1_M2/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0L1_M2')  
 
samples['ZH_H0PM_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H0L1_M3/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PM_H0L1_M3')  
 
samples['ZH_H0M_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0PM/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0PM')  
 
samples['ZH_H0M_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0M_M0/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0M_M0')  
 
samples['ZH_H0M_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0M_M1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0M_M1')  
 
samples['ZH_H0M_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0M_M2/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0M_M2')  
 
samples['ZH_H0M_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0M_M3/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0M_M3')  
 
samples['ZH_H0M_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0PH_M0/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0PH_M0')  
 
samples['ZH_H0M_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0PH_M1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0PH_M1')  
 
samples['ZH_H0M_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0PH_M2/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0PH_M2')  
 
samples['ZH_H0M_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0PH_M3/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0PH_M3')  
 
samples['ZH_H0M_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0L1_M0/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0L1_M0')  
 
samples['ZH_H0M_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0L1_M1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0L1_M1')  
 
samples['ZH_H0M_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0L1_M2/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0L1_M2')  
 
samples['ZH_H0M_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H0L1_M3/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0M_H0L1_M3')  
 
samples['ZH_H0Mf05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0PM/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0PM')  
 
samples['ZH_H0Mf05_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0M_M0/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0M_M0')  
 
samples['ZH_H0Mf05_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0M_M1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0M_M1')  
 
samples['ZH_H0Mf05_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0M_M2/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0M_M2')  
 
samples['ZH_H0Mf05_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0M_M3/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0M_M3')  
 
samples['ZH_H0Mf05_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0PH_M0/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0PH_M0')  
 
samples['ZH_H0Mf05_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0PH_M1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0PH_M1')  
 
samples['ZH_H0Mf05_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0PH_M2/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0PH_M2')  
 
samples['ZH_H0Mf05_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0PH_M3/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0PH_M3')  
 
samples['ZH_H0Mf05_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0L1_M0/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0L1_M0')  
 
samples['ZH_H0Mf05_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0L1_M1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0L1_M1')  
 
samples['ZH_H0Mf05_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0L1_M2/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0L1_M2')  
 
samples['ZH_H0Mf05_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H0L1_M3/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0Mf05_H0L1_M3')  
 
samples['ZH_H0PH_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0PM/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0PM')  
 
samples['ZH_H0PH_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0M_M0/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0M_M0')  
 
samples['ZH_H0PH_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0M_M1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0M_M1')  
 
samples['ZH_H0PH_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0M_M2/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0M_M2')  
 
samples['ZH_H0PH_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0M_M3/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0M_M3')  
 
samples['ZH_H0PH_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0PH_M0/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0PH_M0')  
 
samples['ZH_H0PH_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0PH_M1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0PH_M1')  
 
samples['ZH_H0PH_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0PH_M2/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0PH_M2')  
 
samples['ZH_H0PH_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0PH_M3/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0PH_M3')  
 
samples['ZH_H0PH_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0L1_M0/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0L1_M0')  
 
samples['ZH_H0PH_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0L1_M1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0L1_M1')  
 
samples['ZH_H0PH_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0L1_M2/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0L1_M2')  
 
samples['ZH_H0PH_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H0L1_M3/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PH_H0L1_M3')  
 
samples['ZH_H0PHf05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0PM/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0PM')  
 
samples['ZH_H0PHf05_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0M_M0/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0M_M0')  
 
samples['ZH_H0PHf05_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0M_M1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0M_M1')  
 
samples['ZH_H0PHf05_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0M_M2/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0M_M2')  
 
samples['ZH_H0PHf05_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0M_M3/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0M_M3')  
 
samples['ZH_H0PHf05_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0PH_M0/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0PH_M0')  
 
samples['ZH_H0PHf05_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0PH_M1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0PH_M1')  
 
samples['ZH_H0PHf05_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0PH_M2/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0PH_M2')  
 
samples['ZH_H0PHf05_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0PH_M3/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0PH_M3')  
 
samples['ZH_H0PHf05_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0L1_M0/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0L1_M0')  
 
samples['ZH_H0PHf05_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0L1_M1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0L1_M1')  
 
samples['ZH_H0PHf05_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0L1_M2/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0L1_M2')  
 
samples['ZH_H0PHf05_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H0L1_M3/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0PHf05_H0L1_M3')  
 
samples['ZH_H0L1_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0PM/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0PM')  
 
samples['ZH_H0L1_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0M_M0/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0M_M0')  
 
samples['ZH_H0L1_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0M_M1/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0M_M1')  
 
samples['ZH_H0L1_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0M_M2/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0M_M2')  
 
samples['ZH_H0L1_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0M_M3/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0M_M3')  
 
samples['ZH_H0L1_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0PH_M0/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0PH_M0')  
 
samples['ZH_H0L1_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0PH_M1/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0PH_M1')  
 
samples['ZH_H0L1_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0PH_M2/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0PH_M2')  
 
samples['ZH_H0L1_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0PH_M3/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0PH_M3')  
 
samples['ZH_H0L1_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0L1_M0/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0L1_M0')  
 
samples['ZH_H0L1_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0L1_M1/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0L1_M1')  
 
samples['ZH_H0L1_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0L1_M2/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0L1_M2')  
 
samples['ZH_H0L1_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H0L1_M3/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1_H0L1_M3')  
 
samples['ZH_H0L1f05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0PM/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0PM')  
 
samples['ZH_H0L1f05_H0M_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0M_M0/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0M_M0')  
 
samples['ZH_H0L1f05_H0M_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0M_M1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0M_M1')  
 
samples['ZH_H0L1f05_H0M_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0M_M2/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0M_M2')  
 
samples['ZH_H0L1f05_H0M_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0M_M3/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0M_M3')  
 
samples['ZH_H0L1f05_H0PH_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0PH_M0/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0PH_M0')  
 
samples['ZH_H0L1f05_H0PH_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0PH_M1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0PH_M1')  
 
samples['ZH_H0L1f05_H0PH_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0PH_M2/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0PH_M2')  
 
samples['ZH_H0L1f05_H0PH_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0PH_M3/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0PH_M3')  
 
samples['ZH_H0L1f05_H0L1_M0'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0L1_M0/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0L1_M0')  
 
samples['ZH_H0L1f05_H0L1_M1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0L1_M1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0L1_M1')  
 
samples['ZH_H0L1f05_H0L1_M2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0L1_M2/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0L1_M2')  
 
samples['ZH_H0L1f05_H0L1_M3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H0L1_M3/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('ZH_H0L1f05_H0L1_M3')

################ REWEIGHTED SAMPLES ggH #####################
samples['H0PM_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H0M/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('H0PM_H0M')  
 
samples['H0PM_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H0Mf05/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('H0PM_H0Mf05')  
 
samples['H0PM_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H0PH/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('H0PM_H0PH')  
 
samples['H0PM_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H0PHf05/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('H0PM_H0PHf05')  
 
samples['H0PM_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H0L1/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('H0PM_H0L1')  
 
samples['H0PM_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H0L1f05/ME_H0PM)',   'FilesPerJob': 2, } 
signals_rw.append('H0PM_H0L1f05')  
 
samples['H0M_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H0PM/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('H0M_H0PM')  
 
samples['H0M_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H0Mf05/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('H0M_H0Mf05')  
 
samples['H0M_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H0PH/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('H0M_H0PH')  
 
samples['H0M_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H0PHf05/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('H0M_H0PHf05')  
 
samples['H0M_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H0L1/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('H0M_H0L1')  
 
samples['H0M_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H0L1f05/ME_H0M)',   'FilesPerJob': 2, } 
signals_rw.append('H0M_H0L1f05')  
 
samples['H0Mf05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H0PM/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0Mf05_H0PM')  
 
samples['H0Mf05_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H0M/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0Mf05_H0M')  
 
samples['H0Mf05_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H0PH/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0Mf05_H0PH')  
 
samples['H0Mf05_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H0PHf05/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0Mf05_H0PHf05')  
 
samples['H0Mf05_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H0L1/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0Mf05_H0L1')  
 
samples['H0Mf05_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H0L1f05/ME_H0Mf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0Mf05_H0L1f05')  
 
samples['H0PH_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H0PM/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('H0PH_H0PM')  
 
samples['H0PH_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H0M/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('H0PH_H0M')  
 
samples['H0PH_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H0Mf05/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('H0PH_H0Mf05')  
 
samples['H0PH_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H0PHf05/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('H0PH_H0PHf05')  
 
samples['H0PH_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H0L1/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('H0PH_H0L1')  
 
samples['H0PH_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H0L1f05/ME_H0PH)',   'FilesPerJob': 2, } 
signals_rw.append('H0PH_H0L1f05')  
 
samples['H0PHf05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H0PM/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0PHf05_H0PM')  
 
samples['H0PHf05_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H0M/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0PHf05_H0M')  
 
samples['H0PHf05_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H0Mf05/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0PHf05_H0Mf05')  
 
samples['H0PHf05_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H0PH/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0PHf05_H0PH')  
 
samples['H0PHf05_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H0L1/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0PHf05_H0L1')  
 
samples['H0PHf05_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H0L1f05/ME_H0PHf05)',   'FilesPerJob': 2, } 
signals_rw.append('H0PHf05_H0L1f05')  
 
samples['H0L1_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H0PM/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1_H0PM')  
 
samples['H0L1_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H0M/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1_H0M')  
 
samples['H0L1_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H0Mf05/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1_H0Mf05')  
 
samples['H0L1_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H0PH/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1_H0PH')  
 
samples['H0L1_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H0PHf05/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1_H0PHf05')  
 
samples['H0L1_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H0L1f05/ME_H0L1)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1_H0L1f05')  
 
samples['H0L1f05_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H0PM/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1f05_H0PM')  
 
samples['H0L1f05_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H0M/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1f05_H0M')  
 
samples['H0L1f05_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H0Mf05/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1f05_H0Mf05')  
 
samples['H0L1f05_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H0PH/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1f05_H0PH')  
 
samples['H0L1f05_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H0PHf05/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1f05_H0PHf05')  
 
samples['H0L1f05_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H0L1/ME_H0L1f05)',   'FilesPerJob': 2, } 
signals_rw.append('H0L1f05_H0L1') 

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
  'FilesPerJob': 50
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)

    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))

