import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # ControlPlotsDY
configurations = os.path.dirname(configurations) # Full2016_v7
configurations = os.path.dirname(configurations) # ggH_SF
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
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__trigFix'))
        # return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

mcDirectory = makeMCDirectory()
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
#embedDirectory = os.path.join(treeBaseDir, embedReco, embedSteps)

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
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500')
                                 #+ nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-2500toinf') Missing! Is it a problem?

    addSampleWeight(samples,'DY','DYJetsToLL_M-50'    ,'DY_NLO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50','DY_NLO_pTllrw')

    if useDYHT :
        # Remove high HT from inclusive samples
        addSampleWeight(samples,'DY','DYJetsToLL_M-50'    , 'LHE_HT<70.0')
        addSampleWeight(samples,'DY','DYJetsToLL_M-10to50', 'LHE_HT<70.0')
        # pt_ll weight
        addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-70to100'       ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-100to200_ext1' ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400_ext1' ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600_ext1' ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toinf'      ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100'          ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200_ext1'    ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400_ext1'    ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext1'    ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800'         ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200'        ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500'       ,'DY_LO_pTllrw')
        #addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toinf'        ,'DY_LO_pTllrw') Missing! Is it a problem? 

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
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 1,
}

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight + '*nllW*ewknloW', # temporary - nllW module not run on PS and UE variation samples
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 1
}

samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop'),
    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)*(lhe_mW1[0] > 60. && lhe_mW1[0] < 100. && lhe_mW2[0] > 60. && lhe_mW2[0] < 100.)', #filter tops and Higgs, limit w mass
#    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)*(lhe_mWm > 60. && lhe_mWm < 100. && lhe_mWp > 60. && lhe_mWp < 100.)', #filter tops and Higgs, limit w mass
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4
}

samples['ggWW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluWWTo2L2Nu_MCFM'),
    'weight': mcCommonWeight + '*1.53/1.4', # updating k-factor
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
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
        'weight': mcCommonWeightNoMatch + '*(!(Gen_ZGstar_mass > 0))',
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],
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
        'weight': mcCommonWeight + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
        'FilesPerJob': 4,
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],
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
        'weight': mcCommonWeightNoMatch + '*(!(Gen_ZGstar_mass > 0))',
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],
        'FilesPerJob': 4
    }
    
    ######## VgS ########
    
    files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
            nanoGetSampleFiles(mcDirectory, 'Zg') + \
            nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')
    
    samples['VgS'] = {
        'name': files,
        'weight': mcCommonWeight + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],
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
    'weight': mcCommonWeight + '*1.11',
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 1
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
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4
}

###########################################
#############   SIGNALS  ##################
###########################################

signals = []

#### ggH -> WW
samples['ggH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2Nu_alternative_M125')+nanoGetSampleFiles(mcDirectory, 'GGHjjToWWTo2L2Nu_minloHJJ_M125'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 1,
}
addSampleWeight(samples, 'ggH_hww', 'GluGluHToWWTo2L2Nu_alternative_M125', '(HTXS_stage1_1_cat_pTjet30GeV<107)*Weight2MINLO*1092.0713/1068.1909') #only non GE2J categories with the weight to NNLOPS and renormalize integral                          
addSampleWeight(samples, 'ggH_hww', 'GGHjjToWWTo2L2Nu_minloHJJ_M125', '(HTXS_stage1_1_cat_pTjet30GeV>106)*1092.0713/1068.1909')

signals.append('ggH_hww')

############ VBF H->WW ############
samples['qqH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4
}

signals.append('qqH_hww')

############ ZH H->WW ############

samples['ZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4
}

signals.append('ZH_hww')

samples['ggZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'ggZH_HToWW_M125'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4
}

signals.append('ggZH_hww')

############ WH H->WW ############

samples['WH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4
}

signals.append('WH_hww')

############ ttH ############

samples['ttH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 5
}

signals.append('ttH_hww')

############ H->TauTau ############

samples['ggH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4
}

signals.append('ggH_htt')

#samples['qqH_htt'] = {
#    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125'),
#    'weight': mcCommonWeight,
#    'suppressNegative' :['all'],
#    'suppressNegativeNuisances' :['all'],
#    'FilesPerJob': 4
#}
#
#signals.append('qqH_htt')

samples['ZH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4
}

signals.append('ZH_htt')

samples['WH_htt'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
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
  'suppressNegative' :['all'],
  'suppressNegativeNuisances' :['all'],
  'FilesPerJob': 50
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(fakeDirectory, pd + '_' + sd)

    samples['Fake']['name'].extend(files)
    samples['Fake']['weights'].extend([DataTrig[pd]] * len(files))

samples['Fake']['subsamples'] = {
  'ee': 'abs(Lepton_pdgId[0]) == 11 && abs(Lepton_pdgId[1]) == 11',
  'mm': 'abs(Lepton_pdgId[0]) == 13 && abs(Lepton_pdgId[1]) == 13',
  'df': '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13)'
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

