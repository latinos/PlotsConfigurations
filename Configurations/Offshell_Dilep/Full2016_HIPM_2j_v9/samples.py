import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # inclusive
configurations = os.path.dirname(configurations) # Full2016_HIPM_v9
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseWnAOD, addSampleWeight

def nanoGetSampleFiles(inputDir, sample):
    try:
        if _samples_noload:
            return []
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

mcProduction = 'Summer20UL16_106x_nAODv9_HIPM_Full2016v9'

dataReco = 'Run2016_UL2016_nAODv9_HIPM_Full2016v9'

mcSteps = 'MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9{var}'

fakeSteps = 'DATAl1loose2016v9__l2loose__fakeW'

dataSteps = 'DATAl1loose2016v9__l2loose__l2tightOR2016v9'

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


signalDirectory = '/eos/cms/store/group/phys_higgs/cmshww/fernanpe/HWWNano/Summer20UL16_106x_nAODv9_HIPM_Full2016v9/AddLHE_MEs__AddMC_baseW__AddHWW_Offshell_Wgts__MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9'


################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2016B-ver1_HIPM_UL2016-v2'],
    ['B','Run2016B-ver2_HIPM_UL2016-v2'],
    ['C','Run2016C-HIPM_UL2016-v2'],
    ['D','Run2016D-HIPM_UL2016-v2'],
    ['E','Run2016E-HIPM_UL2016-v2'],
    ['F','Run2016F-HIPM_UL2016-v2'],
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


###### DY #######

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50')

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + "*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                    Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )",
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all']
}

addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50', 'DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50',   'DY_LO_pTllrw')

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
    'FilesPerJob': 4,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all']
}

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

######################

#samples['WWewk'] = {
#    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop'),
#    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)*(lhe_mW1[0] > 60. && lhe_mW1[0] < 100. && lhe_mW2[0] > 60. && lhe_mW2[0] < 100.)', #filter tops and Higgs, limit w mass
#    'FilesPerJob': 8
#}

######## Vg(S) ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J') + \
        nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin0p1') + \
        nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

samples['Vg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch+'*((Gen_ZGstar_mass>0)*PromptGenLepMatch2l + Gen_ZGstar_mass<=0)',
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all']
}

addSampleWeight(samples,'Vg','Wg_AMCNLOFXFX_01J', 'gstarLow*0.94*(Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples,'Vg','WZTo3LNu_mllmin0p1','gstarLow*0.94*(Gen_ZGstar_mass > 0.1)*1.138*0.601644*58.59/4.666') #Correction for wrong xsec

######## WZ ########

files = nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin0p1') + \
        nanoGetSampleFiles(mcDirectory, 'WZTo2Q2L_mllmin4p0')

samples['WZ'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarHigh)',
    'FilesPerJob': 4,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all']
}

addSampleWeight(samples,'WZ','WZTo3LNu_mllmin0p1','1.138*0.601644*58.59/4.666') #Correction for wrong xsec

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
    nanoGetSampleFiles(mcDirectory, 'WWW')
#+ nanoGetSampleFiles(mcDirectory, 'WWG'), #should this be included? or is it already taken into account in the WW sample?

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all']
}

########### Higgs ###########

files = nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125') + \
        nanoGetSampleFiles(mcDirectory, 'ggZH_HToWW_M125') + \
        nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125') + \
        nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125') + \
        nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125_Powheg') + \
        nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125') + \
        nanoGetSampleFiles(mcDirectory, 'ZHToTauTau_M125') + \
        nanoGetSampleFiles(mcDirectory, 'WplusHToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'WminusHToTauTau_M125')

samples['Higgs'] = {
    'name' : files,
    'weight': mcCommonWeight,
    'FilesPerJob': 8,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all']
}

###########################################
#############   WW  ##################
###########################################

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

#### Now bin in nonfiducial / fiducial x bins
#
#nbins = 1
#
#for sname in signals:
#  sample = samples[sname]
#  sample['subsamples'] = {}
#
#  sample['subsamples']['nonfid'] = '!(fid)'
#
#  for i in range(nbins):
#      sample['subsamples']['B%d'%i] = 'fid && B%d'%i

###########################################
################## FAKE ###################
###########################################

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

    tag = pd + '_' + sd

    if 'DoubleEG' in pd and 'Run2016B-ver2' in sd:  # Run2016B-ver2_HIPM_UL2016-v2
        print("sd      = {}".format(sd))
        print("pd      = {}".format(pd))
        print("Old tag = {}".format(tag))
        tag = tag.replace('v2','v3')
        print("New tag = {}".format(tag))

    files = nanoGetSampleFiles(fakeDirectory, tag)

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
    tag = pd + '_' + sd

    if 'DoubleEG' in pd and 'Run2016B-ver2' in sd:  # Run2016B-ver2_HIPM_UL2016-v2
        print("sd      = {}".format(sd))
        print("pd      = {}".format(pd))
        print("Old tag = {}".format(tag))
        tag = tag.replace('v2','v3')
        print("New tag = {}".format(tag))

    files = nanoGetSampleFiles(dataDirectory, tag)

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
    'weight': mcCommonWeight_custom + ' * p_Gen_JJEW_BKG_MCFM * p_Gen_CPStoBWPropRewgt * HWWOffshell_combineWgt * (LHECandMass > 160)',
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
    'weight': mcCommonWeight+'* 1.68 *1.645 * norm_njet * (LHE_mWW > 160)',
    'FilesPerJob': 3,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}

samples['ggH_sonly_on'] = {
    'name': files,
    'weight': mcCommonWeight+'* 1.68 *1.645 * norm_njet * (LHE_mWW <= 160)',
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
    'weight': mcCommonWeight+'*1.53/1.4 * 1.33 * norm_njet  * (LHE_mWW > 160)',
    'FilesPerJob': 3,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}

samples['ggH_bonly_on'] = {
    'name': files,
    'weight': mcCommonWeight+'*1.53/1.4 * 1.33 * norm_njet * (LHE_mWW <= 160)',
    'FilesPerJob': 3,
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
    'weight': mcCommonWeight+'*1.60* 1.52 * norm_njet * (LHE_mWW > 160)',
    'FilesPerJob': 3,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}
samples['ggH_sand_on'] = {
    'name': files,
    'weight': mcCommonWeight+'*1.60* 1.52 * norm_njet * (LHE_mWW <= 160)',
    'FilesPerJob': 3,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}

"""
########### ggH ############
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
    'suppressNegativeNuisances' :['all'],
}

samples['ggHToWWOnshell'] = {
    'name': files,
    'weight': mcCommonWeight_custom + ' * p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM * p_Gen_CPStoBWPropRewgt * HWWOffshell_combineWgt * (LHECandMass <= 160)',
    'FilesPerJob': 1,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all']
}
"""

