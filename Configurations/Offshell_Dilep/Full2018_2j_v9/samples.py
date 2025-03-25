import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # inclusive
configurations = os.path.dirname(configurations) # Full2018_v9
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

# samples

try:
    len(samples)
except NameError:
    import collections
    samples = collections.OrderedDict()

################################################
################# SKIMS ########################
################################################

mcProduction = 'Summer20UL18_106x_nAODv9_Full2018v9'

dataReco = 'Run2018_UL2018_nAODv9_Full2018v9'

mcSteps = 'MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9{var}'

fakeSteps = 'DATAl1loose2018v9__l2loose__fakeW'

dataSteps = 'DATAl1loose2018v9__l2loose__l2tightOR2018v9'

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

signalDirectory = '/eos/cms/store/group/phys_higgs/cmshww/fernanpe/HWWNano/Summer20UL18_106x_nAODv9_Full2018v9/AddLHE_MEs__AddMC_baseW__AddHWW_Offshell_Wgts__MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9'

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
mcCommonWeight_custom = 'XSWeight*METFilter_MC*PromptGenLepMatch2l*SFweight'


##########################################
#############  BACKGROUNDS  ###############
###########################################


###### DY #######

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

#2018 UL ZGToLLG sample has photon and lepton pt > 15, photon eta < 2.6
samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight+ '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                     Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )',
    'FilesPerJob': 5,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}
addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50',       'DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO','DY_LO_pTllrw')


###### Top #######
    
files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_top') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_s-channel')

samples['top'] = {
    'name': files, 
    'weight': mcCommonWeight,
    'FilesPerJob': 2,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}
    
addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')


###### WWewk ########

#samples['WWewk'] = {
#    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop'),
#    'weight': mcCommonWeight+ '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)', #filter tops and Higgs
#    'FilesPerJob': 8,
#    'suppressNegative':['all'],
#    'suppressNegativeNuisances' :['all']
#}

######## Vg ########

files =  nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J') + \
         nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin0p1') + \
         nanoGetSampleFiles(mcDirectory, 'ZGToLLG')
samples['Vg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch+'*((Gen_ZGstar_mass>0)*PromptGenLepMatch2l + Gen_ZGstar_mass<=0)',
    'FilesPerJob': 8,
    'suppressNegative':['all'],
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
    'suppressNegative':['all'],
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
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}

########## VVV #########

files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWW')

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 8,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}

########### Higgs ###########

files = nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125') + \
        nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWWTo2L2Nu_M125') + \
        nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125') + \
        nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125') + \
        nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125') + \
        nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125') + \
        nanoGetSampleFiles(mcDirectory, 'ZHToTauTau_M125') + \
        nanoGetSampleFiles(mcDirectory, 'WplusHToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'WminusHToTauTau_M125')

samples['Higgs'] = {
    'name' : files,
    'weight': mcCommonWeight,
    'FilesPerJob': 8,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}


###### WW ########

#samples['WW'] = {
#    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
#    'weight': mcCommonWeight+'*nllW',
#    'FilesPerJob': 1,
#    'suppressNegative':['all'],
#    'suppressNegativeNuisances' :['all']
#}

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWJTo2L2Nu_minnlo'),
    'weight': mcCommonWeight,
    'FilesPerJob': 7,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}


###### ggWW ########

#samples['ggWW'] = {
#    'name': nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENEN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENMN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENTN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNEN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNMN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNTN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNEN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNMN') + \
##            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNTN'),
#    'weight': mcCommonWeight+'*1.53/1.4',
#    'FilesPerJob': 1,
#    'suppressNegative':['all'],
#    'suppressNegativeNuisances' :['all']
#}


###########################################
################## FAKE ###################
###########################################

samples['Fake'] = {
  'name': [],
  'weight': 'METFilter_DATA*fakeW',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 100,
  'suppressNegative':['all'],
  'suppressNegativeNuisances' :['all']
}

for _, sd in DataRun:
  for pd in DataSets:
    tag = pd + '_' + sd

    if (   ('DoubleMuon' in pd and 'Run2018B' in sd)
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
  'em': 'abs(Lepton_pdgId[0]) == 11',
  'me': 'abs(Lepton_pdgId[0]) == 13'
}
###########################################
################## DATA ###################
###########################################

samples['DATA'] = {
  'name': [],
  'weight': 'LepWPCut*METFilter_DATA',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 50
}

for _, sd in DataRun:
  for pd in DataSets:
    tag = pd + '_' + sd

    if (   ('DoubleMuon' in pd and 'Run2018B' in sd)
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
#samples['VBFHToWWOffshell'] = {
#    'name': files,
#    'weight': mcCommonWeight_custom + ' * p_Gen_JJEW_SIG_ghv1_1_MCFM * p_Gen_CPStoBWPropRewgt * HWWOffshell_combineWgt * (LHECandMass > 160)',
#    'FilesPerJob': 10,
#    'suppressNegative' :['all'],
#    'suppressNegativeNuisances' :['all'],
#}

#samples['VBFHToWWOnshell'] = {
#    'name': files,
#    'weight': mcCommonWeight_custom + ' * p_Gen_JJEW_SIG_ghv1_1_MCFM * p_Gen_CPStoBWPropRewgt * HWWOffshell_combineWgt * (LHECandMass <= 160)',
#    'FilesPerJob': 10,
#    'suppressNegative' :['all'],
#    'suppressNegativeNuisances' :['all'],
#}
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

"""
samples['qqH_sand_on'] = {
    'name': files,
    'weight': mcCommonWeight_custom + ' * p_Gen_JJEW_BSI_ghv1_1_MCFM * p_Gen_CPStoBWPropRewgt * HWWOffshell_combineWgt * (LHECandMass <= 160)',
    'FilesPerJob': 1,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}
"""
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


"""
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
    'weight': mcCommonWeight+'*1.53/1.4 * 1.33  * norm_njet  * (LHE_mWW > 160)',
    'FilesPerJob': 3,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}
samples['ggH_bonly_on'] = {
    'name': files,
    'weight': mcCommonWeight+'*1.53/1.4 * 1.33  * norm_njet  * (LHE_mWW <= 160)',
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
    'weight': mcCommonWeight+'*1.60 * 1.52 * norm_njet * (LHE_mWW > 160)',
    'FilesPerJob': 3,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}
"""
"""
samples['ggH_sand_on'] = {
    'name': files,
    'weight': mcCommonWeight+'*1.60 * 1.52  * norm_njet * (LHE_mWW <= 160)',
    'FilesPerJob': 3,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}
"""
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
    'suppressNegativeNuisances' :['all'],
}

samples['ggHToWWOnshell'] = {
    'name': files,
    'weight': mcCommonWeight_custom + ' * p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM * p_Gen_CPStoBWPropRewgt * HWWOffshell_combineWgt * (LHECandMass <= 160)',
    'FilesPerJob': 1,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

"""
"""

samples['qqH_sonly_on'] = {
	'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2Nu_M125'),
	'weight': mcCommonWeight + '* (LHE_mWW <= 160)',
	'FilesPerJob': 4,
	'suppressNegative':['all'],
	'suppressNegativeNuisances' :['all']
}

samples['qqH_bonly_on'] = {
	'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop'),
	'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0) * (LHE_mWW <= 160)', #filter tops and Higgs
	'FilesPerJob': 4,
	'suppressNegative':['all'],
	'suppressNegativeNuisances' :['all']
}

samples['ggH_sonly_on'] = {
	'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2Nu_M125') + nanoGetSampleFiles(mcDirectory, 'GGHjjToWWTo2L2Nu_minloHJJ_M125'),
	'weight': mcCommonWeight+'* (LHE_mWW <= 160)',
	'FilesPerJob': 3,
	'suppressNegative':['all'],
	'suppressNegativeNuisances' :['all']

}
addSampleWeight(samples, 'ggH_sonly_on', 'GluGluHToWWTo2L2Nu_M125', '(HTXS_stage1_1_cat_pTjet30GeV<107)*Weight2MINLO*1092.7640/1073.2567') #only non GE2J categories with the weight to NNLOPS and renormalize integral
addSampleWeight(samples, 'ggH_sonly_on', 'GGHjjToWWTo2L2Nu_minloHJJ_M125', '(HTXS_stage1_1_cat_pTjet30GeV>106)*1092.7640/1073.2567')



files = nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENEN') + \
        	nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENMN') + \
        	nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENTN') + \
        	nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNEN') + \
        	nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNMN') + \
        	nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNTN') + \
        	nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNEN') + \
        	nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNMN') + \
        	nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNTN')


samples['ggH_bonly_on'] = {
	'name': files,
	'weight': mcCommonWeight+'*1.53/1.4 * 1.33 * norm_njet  * (LHE_mWW <= 160)',
	'FilesPerJob': 3,
	'suppressNegative':['all'],
	'suppressNegativeNuisances' :['all']
}
"""

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
    #'weight': mcCommonWeight+'* 1.68 * 1.645 * norm_njet * (LHE_mWW > 160) * btagnorm_ggH_sonly_off',
    'weight': mcCommonWeight+'* norm_njet * (LHE_mWW > 160) * ggH_NNLO_kFactor * 0.49721373',
    # * 1.68: LO->NLO k-factor (https://www.arxiv.org/pdf/1605.04610#page=18)
    # * ggH_NNLO_kFactor: NLO->NNLO mass dependent k-factor
    # * 1.11899: NNLO->N(3)LO k-factor calculated dividing 48.58 pb (https://twiki.cern.ch/twiki/bin/view/LHCPhysics/CERNYellowReportPageAt13TeV#N3LO)
    # by the NNLO xsec (xsec LO x k-factor_NLO x k_factor_NNLO), where k_factor_NNLO was calculated by dividing yields NNLO / NLO in an inclusive njet region
    'FilesPerJob': 3, 
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}

samples['ggH_sonly_on'] = {
    'name': files,
    #'weight': mcCommonWeight+'* 1.68 * 1.645 * norm_njet * (LHE_mWW <= 160) * btagnorm_ggH_sonly_on',
    'weight': mcCommonWeight+'* norm_njet * (LHE_mWW <= 160) * ggH_NNLO_kFactor * 0.49721373',
    #'weight': mcCommonWeight+'* 1.68 * norm_njet * (LHE_mWW <= 160) * btagnorm_ggH_sonly_on * ggH_NNLO_kFactor * 1.11899',
    # * 1.68: LO->NLO k-factor (https://www.arxiv.org/pdf/1605.04610#page=18)
    # * ggH_NNLO_kFactor: NLO->NNLO mass dependent k-factor
    # * 1.11899: NNLO->N(3)LO k-factor calculated dividing 48.58 pb (https://twiki.cern.ch/twiki/bin/view/LHCPhysics/CERNYellowReportPageAt13TeV#N3LO)
    # by the NNLO xsec (xsec LO x k-factor_NLO x k_factor_NNLO), where k_factor_NNLO was calculated by dividing yields NNLO / NLO in an inclusive njet region
    'FilesPerJob': 3, 
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}



# ###### ggWW ########

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
    #'weight': mcCommonWeight+'*1.53/1.4 * 1.33 * norm_njet  * (LHE_mWW > 160) * btagnorm_ggH_bonly_off',
    'weight': mcCommonWeight+'*1.0/1.4 * norm_njet  * (LHE_mWW > 160) * ggH_NNLO_kFactor * 0.49721373',
    # * 1.53: LO->NLO k-factor (https://www.arxiv.org/pdf/1605.04610#page=18).
    # /1.4: Removed k-factor 1.4 that is supposed to scale to NNLO (https://github.com/latinos/LatinoAnalysis/blob/UL_production/NanoGardener/python/framework/samples/samplesCrossSections_UL.py#L109)
    # * ggH_NNLO_kFactor: NLO->NNLO mass dependent k-factor
    # * 1.11899: NNLO->N(3)LO k-factor calculated dividing 48.58 pb (https://twiki.cern.ch/twiki/bin/view/LHCPhysics/CERNYellowReportPageAt13TeV#N3LO)
    # by the NNLO xsec (xsec LO x k-factor_NLO x k_factor_NNLO), where k_factor_NNLO was calculated by dividing yields NNLO / NLO in an inclusive njet region
    'FilesPerJob': 3,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}

samples['ggH_bonly_on'] = {
    'name': files,
    # 'weight': mcCommonWeight+'*1.53/1.4 * 1.33 * norm_njet  * (LHE_mWW <= 160) * btagnorm_ggH_bonly_on',
    'weight': mcCommonWeight+'*1.0/1.4 * norm_njet  * (LHE_mWW <= 160) * ggH_NNLO_kFactor * 0.49721373',
    # * 1.53: LO->NLO k-factor (https://www.arxiv.org/pdf/1605.04610#page=18).
    # /1.4: Removed k-factor 1.4 that is supposed to scale to NNLO (https://github.com/latinos/LatinoAnalysis/blob/UL_production/NanoGardener/python/framework/samples/samplesCrossSections_UL.py#L109)
    # * ggH_NNLO_kFactor: NLO->NNLO mass dependent k-factor
    # * 1.11899: NNLO->N(3)LO k-factor calculated dividing 48.58 pb (https://twiki.cern.ch/twiki/bin/view/LHCPhysics/CERNYellowReportPageAt13TeV#N3LO)
    # by the NNLO xsec (xsec LO x k-factor_NLO x k_factor_NNLO), where k_factor_NNLO was calculated by dividing yields NNLO / NLO in an inclusive njet region
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
    #'weight': mcCommonWeight+'*1.60 * 1.52 * norm_njet * (LHE_mWW > 160) * btagnorm_ggH_sand_off',
    'weight': mcCommonWeight+'* norm_njet * (LHE_mWW > 160) * ggH_NNLO_kFactor * 0.49721373',
    # * 1.60: LO->NLO k-factor (https://www.arxiv.org/pdf/1605.04610#page=18).
    # * ggH_NNLO_kFactor: NLO->NNLO mass dependent k-factor
    # * 1.11899: NNLO->N(3)LO k-factor calculated dividing 48.58 pb (https://twiki.cern.ch/twiki/bin/view/LHCPhysics/CERNYellowReportPageAt13TeV#N3LO)
    # by the NNLO xsec (xsec LO x k-factor_NLO x k_factor_NNLO), where k_factor_NNLO was calculated by dividing yields NNLO / NLO in an inclusive njet region
    'FilesPerJob': 3,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all']
}

