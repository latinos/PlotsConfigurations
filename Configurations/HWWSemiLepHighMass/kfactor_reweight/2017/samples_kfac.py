
from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, getBaseWnAOD, addSampleWeight

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
################# SKIMS ########################
################################################
mcProduction = 'Fall2017_102X_nAODv7_Full2017v7'

dataReco     = 'Run2017_102X_nAODv7_Full2017v7'

mcSteps      = 'MCl1loose2017v7__MCCorr2017v7__MCCombJJLNu2017{var}'

dataSteps    = 'DATAl1loose2017v7__DATACombJJLNu2017'
fakeSteps    = 'DATAl1loose2017v7__DATACombJJLNu2017'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
  myEOSDir    = '/eos/user/s/ssiebert/HWWNano'


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
    'SingleMuon'     : 'Trigger_sngMu' ,
    # 'SingleElectron' : '!Trigger_sngMu && Trigger_sngEl' ,
    'SingleElectron' : '!Trigger_sngMu && passSingleElectronHLT' ,
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

#mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC*LepWPCut[0]'
#mcCommonWeight = mcCommonWeightNoMatch+'*Lepton_promptgenmatched[0]'


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

# baseW
#oldbW1J = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-1J'])
#extbW1J = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-1J_ext1'])
#newbW1J = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-1J', 'WJetsToLNu-1J_ext1'])
#newbW1Jw = newbW1J+'/baseW'
#newbW1Jw = getCachedBaseW(['WJetsToLNu-1J', 'WJetsToLNu-1J_ext1'])
#print(' 1J old baseW: '+oldbW1J+', new baseW: '+newbW1J+', ext baseW: '+extbW1J)

#oldbW2J = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-2J'])
#extbW2J = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-2J_ext1'])
#newbW2J = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-2J', 'WJetsToLNu-2J_ext1'])
#newbW2Jw = newbW2J+'/baseW'
#newbW2Jw = getCachedBaseW(['WJetsToLNu-2J', 'WJetsToLNu-2J_ext1'])
#print(' 2J old baseW: '+oldbW2J+', new baseW: '+newbW2J+', ext baseW: '+extbW2J)

# nJet binned
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-0J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J_ext1')

samples['Wjets_NLOnj'] = {
    'name'   : files,
    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    'weight' : mcCommonWeight,
    'FilesPerJob' : 4,
}

CombineBaseW(mcDirectory, samples, 'Wjets_NLOnj',
            ['WJetsToLNu-1J', 'WJetsToLNu-1J_ext1'])
CombineBaseW(mcDirectory, samples, 'Wjets_NLOnj',
            ['WJetsToLNu-2J', 'WJetsToLNu-2J_ext1'])
#addSampleWeight(samples, 'Wjets_NLOnj', 'WJetsToLNu-1J'     , newbW1Jw)
#addSampleWeight(samples, 'Wjets_NLOnj', 'WJetsToLNu-1J_ext1', newbW1Jw)
#addSampleWeight(samples, 'Wjets_NLOnj', 'WJetsToLNu-2J'     , newbW2Jw)
#addSampleWeight(samples, 'Wjets_NLOnj', 'WJetsToLNu-2J_ext1', newbW2Jw)


## LO samples

# baseW
#oldbWlo = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-LO'])
#extbWlo = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-LO_ext1'])
#newbWlo = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-LO', 'WJetsToLNu-LO_ext1'])
#newbWlow = newbWlo+'/baseW'
#newbWlow = getCachedBaseW(['WJetsToLNu-LO', 'WJetsToLNu-LO_ext1'])
#print(' LO old baseW: '+oldbWlo+', new baseW: '+newbWlo+', ext baseW: '+extbWlo)

# LO sample
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO_ext1')

samples['Wjets_LO'] = {
    'name'   : files,
    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    #'weight' : mcCommonWeight + '*ewknloW', 
    'weight' : mcCommonWeight,
    'FilesPerJob' : 4,
}

CombineBaseW(mcDirectory, samples, 'Wjets_LO',
            ['WJetsToLNu-LO', 'WJetsToLNu-LO_ext1'])

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
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO_ext1')

samples['Wjets_HT'] = {
    'name'   : files,
    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    #'weight' : mcCommonWeight + '*ewknloW', 
    'weight' : mcCommonWeight,
    #'weight' : mcCommonWeight, 
    'FilesPerJob' : 4,
}

CombineBaseW(mcDirectory, samples, 'Wjets_HT',
            ['WJetsToLNu-LO', 'WJetsToLNu-LO_ext1'])
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO',      newbWlow) 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO_ext1', newbWlow)

addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO',      '(LHE_HT < 70)') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO_ext1', '(LHE_HT < 70)')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT70_100', '1.21')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT100_200', '0.993')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT200_400', '1.002')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT400_600', '1.009')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT600_800', '1.120')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT800_1200', '1.202')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT1200_2500', '1.332')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT2500_inf','4.2')
## Stitching from Davide
#addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT70_100', '1.21 * 0.9582') 
#addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT100_200',    '0.9525') 
#addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT200_400',    '0.9577') 
#addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT400_600',    '0.9613') 
#addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT600_800',    '1.0742') 
#addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT800_1200',   '1.1698') 
#addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT1200_2500',  '1.3046') 
#addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT2500_inf',   '2.1910')  

# k-factor
#samples['Wjets_HTkf'] = copy.deepcopy(samples['Wjets_HT'])
#samples['Wjets_HTkf']['weight'] += '*kfact[0]'

## HT split samples
#files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO_ext1')
#
#samples['Wjets_HT0_70'] = {
#    'name'   : files,
#    'weight' : mcCommonWeight+'*kfact[0]',
#    'FilesPerJob' : 4,
#}
#addSampleWeight(samples, 'Wjets_HT0_70', 'WJetsToLNu-LO',      '(LHE_HT < 70)') 
#addSampleWeight(samples, 'Wjets_HT0_70', 'WJetsToLNu-LO_ext1', '(LHE_HT < 70)') 
#addSampleWeight(samples, 'Wjets_HT0_70', 'WJetsToLNu-LO',      newbWlow) 
#addSampleWeight(samples, 'Wjets_HT0_70', 'WJetsToLNu-LO_ext1', newbWlow) 
#
#
#for HT in ['70_100', '100_200', '200_400', '400_600', '600_800', '800_1200', '1200_2500', '2500_inf']:
#    
#    files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT'+HT)
#
#    samples['Wjets_HT'+HT] = {
#        'name'   : files,
#        'weight' : mcCommonWeight+'*kfact[0]',
#        'FilesPerJob' : 4,
#    }
#
#addSampleWeight(samples,'Wjets_HT70_100'   , 'WJetsToLNu_HT70_100', '1.21 * 0.9582') 
#addSampleWeight(samples,'Wjets_HT100_200'  , 'WJetsToLNu_HT100_200',    '0.9525') 
#addSampleWeight(samples,'Wjets_HT200_400'  , 'WJetsToLNu_HT200_400',    '0.9577') 
#addSampleWeight(samples,'Wjets_HT400_600'  , 'WJetsToLNu_HT400_600',    '0.9613') 
#addSampleWeight(samples,'Wjets_HT600_800'  , 'WJetsToLNu_HT600_800',    '1.0742') 
#addSampleWeight(samples,'Wjets_HT800_1200' , 'WJetsToLNu_HT800_1200',   '1.1698') 
#addSampleWeight(samples,'Wjets_HT1200_2500', 'WJetsToLNu_HT1200_2500',  '1.3046') 
#addSampleWeight(samples,'Wjets_HT2500_inf' , 'WJetsToLNu_HT2500_inf',   '2.1910')  

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

