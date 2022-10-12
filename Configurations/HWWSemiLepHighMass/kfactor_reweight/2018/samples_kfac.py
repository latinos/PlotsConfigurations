import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2018
configurations = os.path.dirname(configurations) # HWWSemiLepHighMass
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

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

mcProduction = 'Autumn18_102X_nAODv7_Full2018v7'

dataReco     = 'Run2018_102X_nAODv7_Full2018v7'

mcSteps      = 'MCl1loose2018v7__MCCorr2018v7__MCCombJJLNu2018{var}'

dataSteps    = 'DATAl1loose2018v7__DATACombJJLNu2018'
fakeSteps    = 'DATAl1loose2018v7__DATACombJJLNu2018'


##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
  myEOSDir    = '/eos/user/g/gabrdell/HWWNano'


def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='_' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

mcDirectory = makeMCDirectory()
signalMCDirectory = makeMCDirectory("_BWReweight")

dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)

myeosMC = os.path.join(myEOSDir, mcProduction, mcSteps.format(var=''))

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
  ['A','Run2018A-02Apr2020-v1'],
  ['B','Run2018B-02Apr2020-v1'],
  ['C','Run2018C-02Apr2020-v1'],
  ['D','Run2018D-02Apr2020-v1']
]

DataSets = [
    'SingleMuon',
    'EGamma'
]

DataTrig = {
    'SingleMuon' : 'Trigger_sngMu' ,
    'EGamma'     : '!Trigger_sngMu && Trigger_sngEl' ,
}

############################################
############ MORE MC STAT ##################
############################################

def CombineBaseW(directory, samples, proc, samplelist):
  newbaseW = getBaseWnAOD(directory, mcProduction, samplelist)
  for s in samplelist:
    addSampleWeight(samples, proc, s, newbaseW+'/baseW')




#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
#mcCommonWeightNoMatch = 'XSWeight*SFweight[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]'
#mcCommonWeightNoXS    =          'SFweight[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]*PromptGenLepMatch1l'
#mcCommonWeightRaw     =                                                          'LepWPCut[0]*1tlVeto[0]*PromptGenLepMatch1l'
#mcCommonWeight        = 'XSWeight*SFweight[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]*PromptGenLepMatch1l'

mcCommonWeightNoMatch = 'XSWeight*METFilter_MC'
mcCommonWeight = mcCommonWeightNoMatch+'*Lepton_promptgenmatched[0]'
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

## NLO samples

# nJet binned
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-0J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J')

samples['Wjets_NLOnj'] = {
    'name'   : files,
    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    #'weight' : mcCommonWeight + '*ewknloW', 
    'weight' : mcCommonWeight, 
    'FilesPerJob' : 4,
}

## Stat merge
#files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt100to250')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt250to400')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt400to600')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt600toInf')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-0J')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J')
#
#samples['Wjets_NLOmerge'] = {
#    'name'   : files,
#    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    'weight' : mcCommonWeight, # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    'FilesPerJob' : 4,
#}
### Not good due to border effects
##addSampleWeight(samples, 'Wjets_NLOstatM', 'WJetsToLNu-0J',   '((LHE_Vpt < 100) + (LHE_Vpt > 100 && LHE_Vpt < 250)*0.15 + (LHE_Vpt > 250)*0.05)')
##addSampleWeight(samples, 'Wjets_NLOstatM', 'WJetsToLNu-1J',   '((LHE_Vpt < 100) + (LHE_Vpt > 100 && LHE_Vpt < 250)*0.15 + (LHE_Vpt > 250)*0.05)')
##addSampleWeight(samples, 'Wjets_NLOstatM', 'WJetsToLNu-2J',   '((LHE_Vpt < 100) + (LHE_Vpt > 100 && LHE_Vpt < 250)*0.15 + (LHE_Vpt > 250)*0.05)')
##addSampleWeight(samples, 'Wjets_NLOstatM', 'WJetsToLNu_Pt100to250',   '0.85')
##addSampleWeight(samples, 'Wjets_NLOstatM', 'WJetsToLNu_Pt250to400',   '0.95')
##addSampleWeight(samples, 'Wjets_NLOstatM', 'WJetsToLNu_Pt400to600',   '0.95')
##addSampleWeight(samples, 'Wjets_NLOstatM', 'WJetsToLNu_Pt600toInf',   '0.95')
#
#addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu-0J',   '(LHE_Vpt < 120)')
#addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu-1J',   '(LHE_Vpt < 120)')
#addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu-2J',   '(LHE_Vpt < 120)')
#addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Pt100to250',   '(LHE_Vpt > 120)')
#addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Pt250to400',   '(LHE_Vpt > 120)')
#addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Pt400to600',   '(LHE_Vpt > 120)')
#addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Pt600toInf',   '(LHE_Vpt > 120)')

## LO samples

# HT binned
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT70_100')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT100_200')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT200_400')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT400_600')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT600_800')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT800_1200')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT1200_2500')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT2500_inf')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')

samples['Wjets_HT'] = {
    'name'   : files,
    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    #'weight' : mcCommonWeight + '*ewknloW', 
    'weight' : mcCommonWeight, 
    'FilesPerJob' : 4,
}

#addSampleWeight(samples, 'Wjets', 'WJetsToLNu-LO', '(LHE_Vpt < 50)')

addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO', '(LHE_HT < 70)') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT70_100', '1.21')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT100_200', '0.993')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT200_400', '1.002')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT400_600', '1.009')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT600_800', '1.120')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT800_1200', '1.202')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT1200_2500', '1.332')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT2500_inf','4.2')





# HT stitching from Davide (derived by comparing HT to inclusive LO with only lep pt cuts)
#addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT70_100',    '1.21 * 0.95148')  
#addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT100_200',   '0.9471') 
#addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT200_400',   '0.9515') 
#addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT400_600',   '0.9581') 
#addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT600_800',   '1.0582') 
#addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT800_1200',  '1.1285') 
#addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT1200_2500', '1.3268') 
#addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT2500_inf',  '2.7948') 
#
## k-factor
#samples['Wjets_HTkf'] = copy.deepcopy(samples['Wjets_HT'])
#samples['Wjets_HTkf']['weight'] += '*kfact[0]'

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
    ['A','Run2018A-02Apr2020-v1'] ,
    ['B','Run2018B-02Apr2020-v1'] ,
    ['C','Run2018C-02Apr2020-v1'] ,
    ['D','Run2018D-02Apr2020-v1'] ,
]

DataSets = [
    'SingleMuon',
    'EGamma'
]

DataTrig = {
    #'SingleMuon'     : 'Trigger_sngMu' ,
    #'SingleElectron' : '!Trigger_sngMu && Trigger_sngEl' ,
    'SingleMuon'     : '!Trigger_sngEl && Trigger_sngMu' ,
    'EGamma'         : 'Trigger_sngEl' ,
}

###########################################
################## DATA ###################
###########################################

########### FAKE ###########

########### DATA ###########

