import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2017_v7
configurations = os.path.dirname(configurations) # qqH_SF 
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight, getBaseWnAOD

def nanoGetSampleFiles(inputDir, sample):
    try:
        if _samples_noload:
            return [sample]
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

dataReco = 'Run2017_102X_nAODv7_Full2017v7'
fakeReco = dataReco

mcProduction = 'Fall2017_102X_nAODv7_Full2017v7'

mcSteps = 'MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7{var}'

fakeSteps = 'DATAl1loose2017v7__l2loose__fakeW'

dataSteps = 'DATAl1loose2017v7__l2loose__l2tightOR2017v7'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  #treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015'
  treeBaseDir = '/pnfs/iihe/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
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

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2017B-02Apr2020-v1'],
    ['C','Run2017C-02Apr2020-v1'],
    ['D','Run2017D-02Apr2020-v1'],
    ['E','Run2017E-02Apr2020-v1'],
    ['F','Run2017F-02Apr2020-v1']
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

# ptllDYW_NLO = '(((0.623108 + 0.0722934*gen_ptll - 0.00364918*gen_ptll*gen_ptll + 6.97227e-05*gen_ptll*gen_ptll*gen_ptll - 4.52903e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll<45)*(gen_ptll>0) + 1*(gen_ptll>=45))*(abs(gen_mll-90)<3) + (abs(gen_mll-90)>3))'
# ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'


if useDYtt:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
            nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight + "*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                         Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )",
        'FilesPerJob': 5,
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],
    }
    addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50','DY_NLO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1','DY_LO_pTllrw')

else:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext1') + \
            nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight + "*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                         Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )",
        'FilesPerJob': 8,
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],

    }

    # Add DY HT Samples
    if useDYHT :
        samples['DY']['name'] +=     nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-100to200_ext1') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-200to400_newpmx') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-400to600') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-600toInf') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600_ext1') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-600to800') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-800to1200') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-2500toInf')

    addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext1',       'DY_NLO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1','DY_LO_pTllrw')

    if useDYHT :
        # Remove high HT from inclusive samples
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext1'       , 'LHE_HT<100.0')
        addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1', 'LHE_HT<100.0')
        # pt_ll weight
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-100to200_ext1'   ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-200to400_newpmx' ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-400to600'        ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-600toInf'        ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200'           ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400'           ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext1'      ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800'           ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200'          ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500'         ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf'          ,'DY_LO_pTllrw')


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
    'weight': mcCommonWeight + '*nllW*ewknloW',
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 1
}

samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop'),
    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)', #filter tops and Higgs
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 2
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
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 10
}

######## Vg ########

useWgFXFX=True

if useWgFXFX:
    files = nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX') + \
            nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_PDFWeights') + \
            nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_PDFWeights_ext1') + \
            nanoGetSampleFiles(mcDirectory, 'ZGToLLG')
    
    samples['Vg'] = {
        'name': files,
        'weight': mcCommonWeightNoMatch + '*(Gen_ZGstar_mass <= 0)',
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 2
    }
    
    wgbasew = getBaseWnAOD(mcDirectory,'Fall2017_102X_nAODv7_Full2017v7',['Wg_AMCNLOFXFX','Wg_AMCNLOFXFX_PDFWeights','Wg_AMCNLOFXFX_PDFWeights_ext1'])
    addSampleWeight(samples,'Vg','Wg_AMCNLOFXFX','191.4/586.*'+wgbasew+'/baseW')
    addSampleWeight(samples,'Vg','Wg_AMCNLOFXFX_PDFWeights','191.4/586.*'+wgbasew+'/baseW')
    addSampleWeight(samples,'Vg','Wg_AMCNLOFXFX_PDFWeights_ext1','191.4/586.*'+wgbasew+'/baseW')
    
    
    ######## VgS ########
  
    files = nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX') + \
            nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_PDFWeights') + \
            nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_PDFWeights_ext1') + \
            nanoGetSampleFiles(mcDirectory, 'ZGToLLG') + \
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
    
    addSampleWeight(samples, 'VgS', 'Wg_AMCNLOFXFX', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)*191.4/586.*'+wgbasew+'/baseW')
    addSampleWeight(samples, 'VgS', 'Wg_AMCNLOFXFX_PDFWeights', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)*191.4/586.*'+wgbasew+'/baseW')
    addSampleWeight(samples, 'VgS', 'Wg_AMCNLOFXFX_PDFWeights_ext1', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)*191.4/586.*'+wgbasew+'/baseW')
    addSampleWeight(samples, 'VgS', 'ZGToLLG', '(Gen_ZGstar_mass > 0)')
    addSampleWeight(samples, 'VgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')
    
else:
    files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
            nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

    samples['Vg'] = {
        'name': files,
        'weight': mcCommonWeightNoMatch + '*!(Gen_ZGstar_mass > 0)',
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],
        'FilesPerJob': 10
    }

    ######## VgS ########
    
    files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
            nanoGetSampleFiles(mcDirectory, 'ZGToLLG') + \
            nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')

    samples['VgS'] = {
        'name': files,
        'weight': mcCommonWeight + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],
        'FilesPerJob': 15,
        'subsamples': {
            'L': 'gstarLow',
            'H': 'gstarHigh'
        }
    }
    addSampleWeight(samples, 'VgS', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
    addSampleWeight(samples, 'VgS', 'ZGToLLG', '(Gen_ZGstar_mass > 0)')
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
    'FilesPerJob': 2
}

########## VVV #########

files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWW')
#+ nanoGetSampleFiles(mcDirectory, 'WWG'), #should this be included? or is it already taken into account in the WW sample?

samples['VVV'] = {
    'name': files,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'weight': mcCommonWeight
}

###########################################
#############   SIGNALS  ##################
###########################################

signals = []

#### ggH -> WW

samples['ggH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2Nu_Powheg_M125')+nanoGetSampleFiles(mcDirectory, 'GGHjjToWWTo2L2Nu_minloHJJ_M125'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4,
}
addSampleWeight(samples, 'ggH_hww', 'GluGluHToWWTo2L2Nu_Powheg_M125', '(HTXS_stage1_1_cat_pTjet30GeV<107)*Weight2MINLO*1093.8199/1073.9094') #only non GE2J categories with the weight to NNLOPS and renormalize integral                          
addSampleWeight(samples, 'ggH_hww', 'GGHjjToWWTo2L2Nu_minloHJJ_M125', '(HTXS_stage1_1_cat_pTjet30GeV>106)*1093.8199/1073.9094')

signals.append('ggH_hww')

############ VBF H->WW ############
samples['qqH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 3
}

signals.append('qqH_hww')

############# ZH H->WW ############

samples['ZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HZJ_HToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 1
}

signals.append('ZH_hww')

samples['ggZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 2
}

signals.append('ggZH_hww')

############ WH H->WW ############

samples['WH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 2
}

signals.append('WH_hww')

############ ttH ############

samples['ttH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 1
}

signals.append('ttH_hww')

############ H->TauTau ############

samples['ggH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125_ext1'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 1
}

#signals.append('ggH_htt')

samples['qqH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 2
}

#signals.append('qqH_htt')

samples['ZH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 2
}

#signals.append('ZH_htt')

samples['WH_htt'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 2
}

#signals.append('WH_htt')

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
  'FilesPerJob': 30
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
  'FilesPerJob': 40
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))

