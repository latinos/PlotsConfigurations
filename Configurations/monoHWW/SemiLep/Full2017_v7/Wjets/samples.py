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

## NLO samples

# baseW
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
    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    'weight' : mcCommonWeight,
    'FilesPerJob' : 4,
}

addSampleWeight(samples, 'Wjets_NLOnj', 'WJetsToLNu-1J'     , newbW1Jw)
addSampleWeight(samples, 'Wjets_NLOnj', 'WJetsToLNu-1J_ext1', newbW1Jw)
addSampleWeight(samples, 'Wjets_NLOnj', 'WJetsToLNu-2J'     , newbW2Jw)
addSampleWeight(samples, 'Wjets_NLOnj', 'WJetsToLNu-2J_ext1', newbW2Jw)

# Inclusive (to x-check NLO samples)
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu')
samples['Wjets_NLOin'] = {
    'name'   : files,
    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    'weight' : mcCommonWeight,
    'FilesPerJob' : 4,
}

## Inclusive (to x-check NLO samples)
#files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu')
#samples['Wjets_NLOinNoEWK'] = {
#    'name'   : files,
#    'weight' : mcCommonWeight, # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    'FilesPerJob' : 4,
#}


#samples['Wjets_NLOnjRaw'] = {
#    'name'   : files,
#    'weight' : mcCommonWeightRaw, # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    'isData': ['all'],
#    'FilesPerJob' : 4,
#}


##Split in Vpt
#for pt in ['50to100', '100to250', '250to400', '400to600', '600toInf']:
#    files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt'+pt)
#    samples['Wjets_NLOpt'+pt] = {
#        'name'   : files,
#        'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#        'FilesPerJob' : 4,
#    }

# NLO merge
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt100to250')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt250to400')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt400to600')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt600toInf')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-0J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J_ext1')

samples['Wjets_NLOmerge'] = {
    'name'   : files,
    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    'weight' : mcCommonWeight,
    'FilesPerJob' : 4,
}
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu-0J',      '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu-1J',      '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu-1J_ext1', '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu-2J',      '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu-2J_ext1', '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Pt100to250', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Pt250to400', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Pt400to600', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Pt600toInf', '(LHE_Vpt > 120)')

addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu-1J'     , newbW1Jw)
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu-1J_ext1', newbW1Jw)
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu-2J'     , newbW2Jw)
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu-2J_ext1', newbW2Jw)

# NLO merge split

for nj in ['0J', '1J', '2J']:
    files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-'+nj)
    if not nj == '0J': files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-'+nj+'_ext1')

    samples['Wjets_NLOm_'+nj] = {
        'name'   : files,
        'weight' : mcCommonWeight,
        'FilesPerJob' : 4,
    }
    curr_baseW = '1.'
    if '1J' in nj: curr_baseW = newbW1Jw
    if '2J' in nj: curr_baseW = newbW2Jw
    addSampleWeight(samples, 'Wjets_NLOm_'+nj, 'WJetsToLNu-'+nj        , curr_baseW)
    if not nj == '0J': addSampleWeight(samples, 'Wjets_NLOm_'+nj, 'WJetsToLNu-'+nj+'_ext1', curr_baseW)
    addSampleWeight(samples, 'Wjets_NLOm_'+nj, 'WJetsToLNu-'+nj        , '(LHE_Vpt < 120)')
    if not nj == '0J': addSampleWeight(samples, 'Wjets_NLOm_'+nj, 'WJetsToLNu-'+nj+'_ext1', '(LHE_Vpt < 120)')

for pt in ['100to250', '250to400', '400to600', '600toInf']:
    files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt'+pt)
    samples['Wjets_NLOm_pt'+pt] = {
        'name'   : files,
        'weight' : mcCommonWeight,
        'FilesPerJob' : 4,
    }
    addSampleWeight(samples, 'Wjets_NLOm_pt'+pt, 'WJetsToLNu_Pt'+pt, '(LHE_Vpt > 120)')


#samples['Wjets_NLOptMRaw'] = {
#    'name'   : files,
#    'weight' : mcCommonWeightRaw, # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    'isData': ['all'],
#    'FilesPerJob' : 4,
#}

## LO samples

# baseW
oldbWlo = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-LO'])
extbWlo = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-LO_ext1'])
newbWlo = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-LO', 'WJetsToLNu-LO_ext1'])
newbWlow = newbWlo+'/baseW'
print(' LO old baseW: '+oldbWlo+', new baseW: '+newbWlo+', ext baseW: '+extbWlo)

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

addSampleWeight(samples, 'Wjets_LO', 'WJetsToLNu-LO',      newbWlow) 
addSampleWeight(samples, 'Wjets_LO', 'WJetsToLNu-LO_ext1', newbWlow)

## LO sample without EWK corr for check
#files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO_ext1')
#
#samples['Wjets_LOnoEWK'] = {
#    'name'   : files,
#    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    'weight' : mcCommonWeight, 
#    'FilesPerJob' : 4,
#}
#
#addSampleWeight(samples, 'Wjets_LOnoEWK', 'WJetsToLNu-LO',      newbWlow) 
#addSampleWeight(samples, 'Wjets_LOnoEWK', 'WJetsToLNu-LO_ext1', newbWlow)

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

addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO',      newbWlow) 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO_ext1', newbWlow)

addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO',      '(LHE_HT < 70)') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO_ext1', '(LHE_HT < 70)')

# Stitching from Davide
addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT70_100', '1.21 * 0.9582') 
addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT100_200',    '0.9525') 
addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT200_400',    '0.9577') 
addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT400_600',    '0.9613') 
addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT600_800',    '1.0742') 
addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT800_1200',   '1.1698') 
addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT1200_2500',  '1.3046') 
addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT2500_inf',   '2.1910')  

#samples['Wjets_HTkf'] = {
#    'name'   : files,
#    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    #'weight' : mcCommonWeight + '*ewknloW', 
#    'weight' : mcCommonWeight+'*kfact',
#    #'weight' : mcCommonWeight, 
#    'FilesPerJob' : 4,
#}
#
#addSampleWeight(samples, 'Wjets_HTkf', 'WJetsToLNu-LO',      newbWlow) 
#addSampleWeight(samples, 'Wjets_HTkf', 'WJetsToLNu-LO_ext1', newbWlow)
#
#addSampleWeight(samples, 'Wjets_HTkf', 'WJetsToLNu-LO',      '(LHE_HT < 70)') 
#addSampleWeight(samples, 'Wjets_HTkf', 'WJetsToLNu-LO_ext1', '(LHE_HT < 70)')
#
## Stitching from Davide
#addSampleWeight(samples, 'Wjets_HTkf', 'WJetsToLNu_HT70_100', '1.21 * 0.9582') 
#addSampleWeight(samples, 'Wjets_HTkf', 'WJetsToLNu_HT100_200',    '0.9525') 
#addSampleWeight(samples, 'Wjets_HTkf', 'WJetsToLNu_HT200_400',    '0.9577') 
#addSampleWeight(samples, 'Wjets_HTkf', 'WJetsToLNu_HT400_600',    '0.9613') 
#addSampleWeight(samples, 'Wjets_HTkf', 'WJetsToLNu_HT600_800',    '1.0742') 
#addSampleWeight(samples, 'Wjets_HTkf', 'WJetsToLNu_HT800_1200',   '1.1698') 
#addSampleWeight(samples, 'Wjets_HTkf', 'WJetsToLNu_HT1200_2500',  '1.3046') 
#addSampleWeight(samples, 'Wjets_HTkf', 'WJetsToLNu_HT2500_inf',   '2.1910')  

# k-factor
samples['Wjets_HTkf'] = copy.deepcopy(samples['Wjets_HT'])
samples['Wjets_HTkf']['weight'] += '*kfact[0]'

# HT split samples
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO_ext1')

samples['Wjets_HT0_70'] = {
    'name'   : files,
    'weight' : mcCommonWeight+'*kfact[0]',
    'FilesPerJob' : 4,
}
addSampleWeight(samples, 'Wjets_HT0_70', 'WJetsToLNu-LO',      '(LHE_HT < 70)') 
addSampleWeight(samples, 'Wjets_HT0_70', 'WJetsToLNu-LO_ext1', '(LHE_HT < 70)') 
addSampleWeight(samples, 'Wjets_HT0_70', 'WJetsToLNu-LO',      newbWlow) 
addSampleWeight(samples, 'Wjets_HT0_70', 'WJetsToLNu-LO_ext1', newbWlow) 


for HT in ['70_100', '100_200', '200_400', '400_600', '600_800', '800_1200', '1200_2500', '2500_inf']:
    
    files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT'+HT)

    samples['Wjets_HT'+HT] = {
        'name'   : files,
        'weight' : mcCommonWeight+'*kfact[0]',
        'FilesPerJob' : 4,
    }

addSampleWeight(samples,'Wjets_HT70_100'   , 'WJetsToLNu_HT70_100', '1.21 * 0.9582') 
addSampleWeight(samples,'Wjets_HT100_200'  , 'WJetsToLNu_HT100_200',    '0.9525') 
addSampleWeight(samples,'Wjets_HT200_400'  , 'WJetsToLNu_HT200_400',    '0.9577') 
addSampleWeight(samples,'Wjets_HT400_600'  , 'WJetsToLNu_HT400_600',    '0.9613') 
addSampleWeight(samples,'Wjets_HT600_800'  , 'WJetsToLNu_HT600_800',    '1.0742') 
addSampleWeight(samples,'Wjets_HT800_1200' , 'WJetsToLNu_HT800_1200',   '1.1698') 
addSampleWeight(samples,'Wjets_HT1200_2500', 'WJetsToLNu_HT1200_2500',  '1.3046') 
addSampleWeight(samples,'Wjets_HT2500_inf' , 'WJetsToLNu_HT2500_inf',   '2.1910')  

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

