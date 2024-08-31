import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # aC
configurations = os.path.dirname(configurations) # Full2017_v9
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseWnAOD, addSampleWeight

def nanoGetSampleFiles(inputDir, sample):
    try:
        if _samples_noload:
            return [sample]
    except NameError:
        pass

    return getSampleFiles(inputDir, sample, True, 'nanoLatino_')

def getBaseWFast(mcDir, mcProd, sampleList):
    try:
        if _samples_noload:
            return 'baseW'
    except NameError:
        pass
    return getBaseWnAOD(mcDir, mcProd, sampleList)

# samples

try:
    len(samples)
except NameError:
    import collections
    samples = collections.OrderedDict()

################################################
################# SKIMS ########################
################################################

dataReco = 'Run2017_UL2017_nAODv9_Full2017v9'

mcProduction = 'Summer20UL17_106x_nAODv9_Full2017v9'

mcSteps = 'MCl1loose2017v9__MCCorr2017v9NoJERInHorn__l2tightOR2017v9{var}'

fakeSteps = 'DATAl1loose2017v9__l2loose__fakeW'

dataSteps = 'DATAl1loose2017v9__l2loose__l2tightOR2017v9'

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
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

mcDirectory = makeMCDirectory()
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

signalDirectory = '/eos/cms/store/group/phys_higgs/cmshww/fernanpe/HWWNano/Summer20UL17_106x_nAODv9_Full2017v9/AddLHE_MEs__AddMC_baseW__AddHWW_Offshell_Wgts__MCl1loose2017v9__MCCorr2017v9NoJERInHorn__l2tightOR2017v9'


################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2017B-UL2017-v1'],
    ['C','Run2017C-UL2017-v1'],
    ['D','Run2017D-UL2017-v1'],
    ['E','Run2017E-UL2017-v1'],
    ['F','Run2017F-UL2017-v1']
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
mcCommonWeight_custom = 'XSWeight*SFweight*PromptGenLepMatch2l*METFilter_MC'


###########################################
#############  BACKGROUNDS  ###############
###########################################


####### DY #######

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
   nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + "*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                    Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )",
    'FilesPerJob': 10,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all']
}
addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50', 'DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO','DY_LO_pTllrw')

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
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all']
}

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

######################
#samples['WWewk'] = {
#    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop'),
#    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)', #filter tops and Higgs
#    'FilesPerJob': 4,
#    'suppressNegative' :['all'],
#    'suppressNegativeNuisances' :['all']
#}

######## Vg(S) ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J_PDF') + \
        nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

samples['Vg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch+'*((Gen_ZGstar_mass>0)*PromptGenLepMatch2l + Gen_ZGstar_mass<=0)',
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all']
}

addSampleWeight(samples,'Vg','Wg_AMCNLOFXFX_01J_PDF', 'gstarLow*0.94')

######## WZ ########

files = nanoGetSampleFiles(mcDirectory, 'WZTo3LNu') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo2Q2L_mllmin4p0')

samples['WZ'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarHigh)',
    'FilesPerJob': 4,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all']
}

############ ZZ ############

files = nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo2Q2L_mllmin4p0') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo4L')

samples['ZZ'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all']
}


########## VVV #########

files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWZ_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'WWW')# + \
#+ nanoGetSampleFiles(mcDirectory, 'WWG'), #should this be included? or is it already taken into account in the WW sample?

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all']
}

#WWZbaseW = getBaseWFast(mcDirectory, mcProduction, ['WWZ', 'WWZ_ext1'])

#addSampleWeight(samples,'VVV','WWZ',     WWZbaseW+'/baseW')
#addSampleWeight(samples,'VVV','WWZ_ext1',WWZbaseW+'/baseW')

########### Higgs ###########

files = nanoGetSampleFiles(mcDirectory, 'HZJ_HToWWTo2L2Nu_ZTo2L_M125') + \
        nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWWTo2L2Nu_M125') + \
        nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125') + \
        nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125') + \
        nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125') + \
        nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125')# + \
        #nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125') + \ #Missing in 2017
        #nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125') #Missing in 2017

samples['Higgs'] = {
    'name' : files,
    'weight': mcCommonWeight,
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all']
}

##########################################
################# WW ###################
##########################################

#samples['WW'] = {
#    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
#    'weight': mcCommonWeight+'*nllW',
#    'FilesPerJob': 2,
#    'suppressNegative' :['all'],
#    'suppressNegativeNuisances' :['all']
#}

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWJTo2L2Nu_minnlo'),
    'weight': mcCommonWeight,
    'FilesPerJob': 7,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

#samples['ggWW'] = {
#    'name': nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENEN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENMN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENTN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNEN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNMN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNTN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNEN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNMN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNTN'),
#    'weight': mcCommonWeight+'*1.53/1.4', # updating k-factor
#    'FilesPerJob': 4,
#    'suppressNegative' :['all'],
#    'suppressNegativeNuisances' :['all']
#}

##########################################
################# FAKE ###################
##########################################

samples['Fake'] = {
  'name': [],
  'weight': 'METFilter_DATA*fakeW',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 100,
   'suppressNegative' :['all'],
   'suppressNegativeNuisances' :['all']
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
  'FilesPerJob': 100
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))

########### VBF ############


files = nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M125') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M160') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M170') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M180') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M190') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M200') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M210') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M230') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M250') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M270') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M300') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M350') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M400') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M450') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M500') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M550') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M600') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M700') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M800') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M900') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M1000') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M1500') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M2000') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M2500') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M3000')

print(files)

samples['qqH_sonly_on'] = {
    'name': files,
    'weight': mcCommonWeight_custom + ' * p_Gen_JJEW_SIG_ghv1_1_MCFM * p_Gen_CPStoBWPropRewgt * HWWOffshell_combineWgt * (LHECandMass <= 160)',
    'FilesPerJob': 1,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

samples['qqH_bonly_on'] = {
    'name': files,
    'weight': mcCommonWeight_custom + ' * p_Gen_JJEW_BKG_MCFM * p_Gen_CPStoBWPropRewgt * HWWOffshell_combineWgt * (LHECandMass <= 160)',
    'FilesPerJob': 1,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

samples['qqH_sand_on'] = {
    'name': files,
    'weight': mcCommonWeight_custom + ' * p_Gen_JJEW_BSI_ghv1_1_MCFM * p_Gen_CPStoBWPropRewgt * HWWOffshell_combineWgt * (LHECandMass <= 160)',
    'FilesPerJob': 1,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

samples['qqH_sonly_off'] = {
    'name': files,
    'weight': mcCommonWeight_custom + ' * p_Gen_JJEW_SIG_ghv1_1_MCFM * p_Gen_CPStoBWPropRewgt * HWWOffshell_combineWgt * (LHECandMass > 160)',
    'FilesPerJob': 1,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

samples['qqH_bonly_off'] = {
    'name': files,
    'weight': mcCommonWeight_custom + ' * p_Gen_JJEW_BKG_MCFM * p_Gen_CPStoBWPropRewgt * HWWOffshell_combineWgt  * (LHECandMass > 160)',
    'FilesPerJob': 1,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

samples['qqH_sand_off'] = {
    'name': files,
    'weight': mcCommonWeight_custom + ' * p_Gen_JJEW_BSI_ghv1_1_MCFM * p_Gen_CPStoBWPropRewgt * HWWOffshell_combineWgt * (LHECandMass > 160)',
    'FilesPerJob': 1,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

########### ggH NEW ###########

files = nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToENEN_SIG') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToENMN_SIG') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToENTN_SIG') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToMNEN_SIG') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToMNMN_SIG') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToMNTN_SIG') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToTNEN_SIG') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToTNMN_SIG') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToTNTN_SIG')


samples['ggH_sonly_off'] = {
    'name': files,
    'weight': mcCommonWeight+'* 1.68 * 1.645 * norm_njet * (LHE_mWW > 160)',
    'FilesPerJob': 3,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}

samples['ggH_sonly_on'] = {
    'name': files,
    'weight': mcCommonWeight+'* 1.68 * 1.645 * norm_njet * (LHE_mWW <= 160)',
    'FilesPerJob': 3,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}

###### ggWW ########
files = nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENEN') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENMN') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENTN') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNEN') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNMN') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNTN') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNEN') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNMN') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNTN')

samples['ggH_bonly_off'] = {
    'name': files,
    'weight': mcCommonWeight+'*1.53/1.4 * 1.33 * norm_njet * (LHE_mWW > 160)',
    'FilesPerJob': 1,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}

samples['ggH_bonly_on'] = {
    'name': files,
    'weight': mcCommonWeight+'*1.53/1.4  * 1.33 * norm_njet * (LHE_mWW <= 160)',
    'FilesPerJob': 1,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}

########### ggH BSI ###########

files = nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToENEN_BSI') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToENMN_BSI') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToENTN_BSI') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToMNEN_BSI') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToMNMN_BSI') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToMNTN_BSI') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToTNEN_BSI') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToTNMN_BSI') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToTNTN_BSI')


samples['ggH_sand_off'] = {
    'name': files,
    'weight': mcCommonWeight+'*1.60 * 1.52 * norm_njet * (LHE_mWW > 160)',
    'FilesPerJob': 3,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}
samples['ggH_sand_on'] = {
    'name': files,
    'weight': mcCommonWeight+'*1.60 * 1.52 * norm_njet * (LHE_mWW <= 160)',
    'FilesPerJob': 3,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}


"""
########### ggH OLD ############
files = nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M125') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M160') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M170') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M180') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M190') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M200') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M210') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M230') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M250') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M270') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M300') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M350') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M400') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M450') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M500') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M550') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M600') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M700') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M800') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M900') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M1000') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M1500') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M2000') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M2500') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M3000')

samples['ggHToWWOffshell'] = {
    'name': files,
    'weight': mcCommonWeight_custom + ' * p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM * p_Gen_CPStoBWPropRewgt * HWWOffshell_combineWgt * (LHECandMass > 160)',
    'FilesPerJob': 1,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all']
}

samples['ggHToWWOnshell'] = {
    'name': files,
    'weight': mcCommonWeight_custom + ' * p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM * p_Gen_CPStoBWPropRewgt * HWWOffshell_combineWgt * (LHECandMass <= 160)',
    'FilesPerJob': 1,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all']
}
"""
