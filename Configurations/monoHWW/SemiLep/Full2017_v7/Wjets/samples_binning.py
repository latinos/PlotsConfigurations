import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2018
configurations = os.path.dirname(configurations) # HWWSemiLepHighMass
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight, getBaseWnAOD 

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()

def nanoGetSampleFiles(inputDir, sample):
    try:
        if _samples_noload:
            return []
    except NameError:
        pass

    return getSampleFiles(inputDir, sample, True, 'nanoLatino_')

# samples

def CombineBaseW(samples, proc, samplelist):
  newbaseW = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', samplelist)
  for s in samplelist:
    addSampleWeight(samples, proc, s, newbaseW+'/baseW')

try:
    len(samples)
except NameError:
    import collections
    samples = collections.OrderedDict()

################################################
######### Higgs mass samples and models ########
################################################

#models_file = 'models.py'
#if os.path.exists(models_file) :
#    handle = open(models_file,'r')
#    exec(handle)
#    handle.close()
#else:
#    print "!!! ERROR file ", models_file, " does not exist."


################################################
################# SKIMS ########################
################################################

dataReco = 'Run2017_102X_nAODv7_Full2017v7'
dataSteps = 'DATAl1loose2017v7__DATACombJJLNu2017'
fakeSteps = 'DATAl1loose2017v7__DATACombJJLNu2017'


mcProduction = 'Fall2017_102X_nAODv7_Full2017v7'
mcSteps = 'MCl1loose2017v7__MCCorr2017v7__MCCombJJLNu2017'
mcStepsBR = 'MCl1loose2017v7__MCCorr2017v7__MCCombJJLNu2017__BWReweight'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
  # treeBaseDir = '/eos/user/s/ssiebert/HWWNano'

#def makeMCDirectory(var=None):
#    if var is not None:
#        return os.path.join(treeBaseDir, mcProduction, mcSteps+'_'+var)
#    else:
#        return os.path.join(treeBaseDir, mcProduction, mcSteps)

def makeMCDirectory(var=None, base=treeBaseDir, step=mcSteps):
    if var is not None:
        return os.path.join(base, mcProduction, step+'_'+var)
    else:
        return os.path.join(base, mcProduction, step)

mcDirectory = makeMCDirectory()
mcDirectoryBR = os.path.join(treeBaseDir, mcProduction, mcStepsBR)
#VBSDirectory = os.path.join('/eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses', mcProduction, mcSteps)
VBSDirectory = makeMCDirectory(base='/eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses')
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)


#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights

mcCommonWeightNoMatch = 'XSWeight*SFweight[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]'
mcCommonWeightNoXS    =          'SFweight[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]*PromptGenLepMatch1l'
mcCommonWeightRaw     =                                                          'LepWPCut[0]*1tlVeto[0]*PromptGenLepMatch1l'
mcCommonWeight        = 'XSWeight*SFweight[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]*PromptGenLepMatch1l'

###########################################
#############  BACKGROUNDS  ###############
###########################################


###### DY #######


###### Top #######


###### VBF V ######


###### WW ########


###### WZ ########


###### ZZ ########


########## W+jets #########

oldbW1J = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-1J'])
extbW1J = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-1J_ext1'])
newbW1J = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-1J', 'WJetsToLNu-1J_ext1'])
newbW1Jw = newbW1J+'/baseW'
print(' 1J old baseW: '+oldbW1J+', new baseW: '+newbW1J+', ext baseW: '+extbW1J)

oldbW2J = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-2J'])
extbW2J = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-2J_ext1'])
newbW2J = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-2J', 'WJetsToLNu-2J_ext1'])
newbW2Jw = newbW2J+'/baseW'
print(' 2J old baseW: '+oldbW2J+', new baseW: '+newbW2J+', ext baseW: '+extbW2J)

# nJet binned
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-0J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J_ext1')

samples['Wjets_NLOnj'] = {
    'name'   : files,
    'weight' : mcCommonWeight +'*(LHE_Vpt < 120)*EWKnloW[0]',
    'FilesPerJob' : 4,
}

addSampleWeight(samples, 'Wjets_NLOnj', 'WJetsToLNu-1J'     , newbW1Jw)
addSampleWeight(samples, 'Wjets_NLOnj', 'WJetsToLNu-1J_ext1', newbW1Jw)
addSampleWeight(samples, 'Wjets_NLOnj', 'WJetsToLNu-2J'     , newbW2Jw)
addSampleWeight(samples, 'Wjets_NLOnj', 'WJetsToLNu-2J_ext1', newbW2Jw)

samples['Wjets_NLOnjR'] = {
    'name'   : files,
    'weight' : mcCommonWeightRaw+'*(LHE_Vpt < 120)',
    #'isData': ['all'],
    'FilesPerJob' : 4,
    'isData': ['all'],
}

# Pt binned
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt100to250')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt250to400')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt400to600')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt600toInf')

samples['Wjets_NLOpt'] = {
    'name'   : files,
    'weight' : mcCommonWeight +'*(LHE_Vpt > 120)*EWKnloW[0]',
    'FilesPerJob' : 4,
}

samples['Wjets_NLOptR'] = {
    'name'   : files,
    'weight' : mcCommonWeightRaw +'*(LHE_Vpt > 120)',
    'FilesPerJob' : 4,
    'isData': ['all'],
}

# Merge
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt100to250')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt250to400')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt400to600')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt600toInf')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-0J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J_ext1')

samples['Wjets_NLOmerg'] = {
    'name'   : files,
    'weight' : mcCommonWeight +'*EWKnloW[0]',
    'FilesPerJob' : 4,
}

# fix baseW for ext
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu-1J'     , newbW1Jw)
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu-1J_ext1', newbW1Jw)
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu-2J'     , newbW2Jw)
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu-2J_ext1', newbW2Jw)

addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu-0J'     , '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu-1J'     , '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu-1J_ext1', '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu-2J'     , '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu-2J_ext1', '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Pt100to250', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Pt250to400', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Pt400to600', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Pt600toInf', '(LHE_Vpt > 120)')

samples['Wjets_NLOmergR'] = {
    'name'   : files,
    'weight' : mcCommonWeightRaw,
    'FilesPerJob' : 4,
    'isData': ['all'],
}
addSampleWeight(samples, 'Wjets_NLOmergR', 'WJetsToLNu-0J'     , '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets_NLOmergR', 'WJetsToLNu-1J'     , '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets_NLOmergR', 'WJetsToLNu-1J_ext1', '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets_NLOmergR', 'WJetsToLNu-2J'     , '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets_NLOmergR', 'WJetsToLNu-2J_ext1', '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets_NLOmergR', 'WJetsToLNu_Pt100to250', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmergR', 'WJetsToLNu_Pt250to400', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmergR', 'WJetsToLNu_Pt400to600', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmergR', 'WJetsToLNu_Pt600toInf', '(LHE_Vpt > 120)')

####### Vg ########

####### VgS ########

########## VVV #########

############## SM Higgs ############

############################################
##############   SIGNALS  ##################
############################################

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
  ['B','Run2017B-02Apr2020-v1'] ,
  ['C','Run2017C-02Apr2020-v1'],
  ['D','Run2017D-02Apr2020-v1'],
  ['E','Run2017E-02Apr2020-v1'],
  ['F','Run2017F-02Apr2020-v1']
]

DataSets = [
    'SingleMuon',
    'SingleElectron'
]

DataTrig = {
    #'SingleMuon'     : 'Trigger_sngMu' ,
    #'SingleElectron' : '!Trigger_sngMu && Trigger_sngEl' ,
    'SingleMuon'     : '!Trigger_sngEl && Trigger_sngMu' ,
    'SingleElectron' : 'Trigger_sngEl' ,
}

###########################################
################## DATA ###################
###########################################

########### FAKE ###########

########### DATA ###########

