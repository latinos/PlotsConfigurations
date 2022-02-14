import os
import copy
import json
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

try:
    len(samples)
except NameError:
    import collections
    samples = collections.OrderedDict()

################################################
################# SKIMS ########################
################################################

dataReco = 'Run2016_102X_nAODv7_Full2016v7'
dataSteps = 'DATAl1loose2016v7__DATACombJJLNu2016'
fakeSteps = 'DATAl1loose2016v7__DATACombJJLNu2016'


mcProduction = 'Summer16_102X_nAODv7_Full2016v7'
mcSteps = 'MCl1loose2016v7__MCCorr2016v7__MCCombJJLNu2016'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
  # treeBaseDir = '/eos/user/s/ssiebert/HWWNano'

def makeMCDirectory(var=None):
    if var is not None:
        return os.path.join(treeBaseDir, mcProduction, mcSteps+'_'+var)
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps)

mcDirectory = makeMCDirectory()
#mcDirectory = os.path.join(treeBaseDir, mcProduction, mcSteps)
VBSDirectory = os.path.join('/eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses', mcProduction, mcSteps)
#VBSDirectory = mcDirectory 
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

baseW_cache_file = 'cache_baseW.py'
if not os.path.exists(baseW_cache_file):
    baseW_cache_file_o = open(baseW_cache_file, 'w')
    baseW_cache_file_o.write('{}\n')
    baseW_cache_file_o.close()
    baseW_cache = {}
else: 
    baseW_cache_file_o = open(baseW_cache_file, 'r')
    baseW_cache = json.load(baseW_cache_file_o)
    baseW_cache_file_o.close()

def getCachedBaseW(sample_list):
    sample_list.sort()
    sample_key = '__'.join(sample_list)
    if not sample_key in baseW_cache:
        baseW_cache[sample_key] = getBaseWnAOD(mcDirectory, mcProduction, sample_list)
        baseW_cache_file_o = open(baseW_cache_file, 'w')
        baseW_cache_file_o.write(json.dumps(baseW_cache, indent=2))
    print('getCachedBaseW return: '+baseW_cache[sample_key] +'/baseW')
    return str(baseW_cache[sample_key] +'/baseW')

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
#print('Extracting basW NLO samples')
#oldbW100pt = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt100To250'])
#newbW100pt = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt100To250', 'WJetsToLNu_Wpt100To250_ext1'])
#newbW100w = newbW100pt+'/baseW'
newbW100w = getCachedBaseW(['WJetsToLNu_Wpt100To250', 'WJetsToLNu_Wpt100To250_ext1'])

#oldbW250pt = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt250To400'])
#newbW250pt = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt250To400', 'WJetsToLNu_Wpt250To400_ext1'])
#newbW250w = newbW250pt+'/baseW'
newbW250w = getCachedBaseW(['WJetsToLNu_Wpt250To400', 'WJetsToLNu_Wpt250To400_ext1'])

#oldbW400pt = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt400To600'])
#newbW400pt = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt400To600', 'WJetsToLNu_Wpt400To600_ext1'])
#newbW400w = newbW400pt+'/baseW'
newbW400w = getCachedBaseW(['WJetsToLNu_Wpt400To600', 'WJetsToLNu_Wpt400To600_ext1'])

#oldbW600pt = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt600ToInf'])
#newbW600pt = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt600ToInf', 'WJetsToLNu_Wpt600ToInf_ext1'])
#newbW600w = newbW600pt+'/baseW'
newbW600w = getCachedBaseW(['WJetsToLNu_Wpt600ToInf', 'WJetsToLNu_Wpt600ToInf_ext1'])

## Inclusive
#files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_ext2')
#samples['Wjets_NLOin'] = {
#    'name'   : files,
#    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    #'weight' : mcCommonWeight + '*ewknloW', 
#    'weight' : mcCommonWeight, 
#    'FilesPerJob' : 4,
#}

# NLO merge
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt100To250')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt250To400')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt400To600')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt600ToInf')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt100To250_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt250To400_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt400To600_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt600ToInf_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_ext2')

samples['Wjets_NLOmerge'] = {
    'name'   : files,
    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    #'weight' : mcCommonWeight + '*ewknloW', 
    'weight' : mcCommonWeight, 
    'FilesPerJob' : 4,
}
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Wpt100To250'     , newbW100w)
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Wpt100To250_ext1', newbW100w)
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Wpt250To400'     , newbW250w)
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Wpt250To400_ext1', newbW250w)
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Wpt400To600'     , newbW400w)
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Wpt400To600_ext1', newbW400w)
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Wpt600ToInf'     , newbW600w)
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Wpt600ToInf_ext1', newbW600w)

addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_ext2', '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Wpt100To250'     , '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Wpt100To250_ext1', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Wpt250To400'     , '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Wpt250To400_ext1', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Wpt400To600'     , '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Wpt400To600_ext1', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Wpt600ToInf'     , '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerge', 'WJetsToLNu_Wpt600ToInf_ext1', '(LHE_Vpt > 120)')

## LO samples 

# baseW
#print('Extracting basW LO samples')
#newbWLO = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu-LO', 'WJetsToLNu-LO_ext2'])
#newbWLOw = newbWLO+'/baseW'
newbWLOw = getCachedBaseW(['WJetsToLNu-LO', 'WJetsToLNu-LO_ext2'])

#newbWHT100 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT100_200', 'WJetsToLNu_HT100_200_ext2'])
#newbWHT100w = newbWHT100+'/baseW'
newbWHT100w = getCachedBaseW(['WJetsToLNu_HT100_200', 'WJetsToLNu_HT100_200_ext2'])

#newbWHT200 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT200_400', 'WJetsToLNu_HT200_400_ext2'])
#newbWHT200w = newbWHT200+'/baseW'
newbWHT200w = getCachedBaseW(['WJetsToLNu_HT200_400', 'WJetsToLNu_HT200_400_ext2'])

#newbWHT400 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT400_600', 'WJetsToLNu_HT400_600_ext1'])
#newbWHT400w = newbWHT400+'/baseW'
newbWHT400w = getCachedBaseW(['WJetsToLNu_HT400_600', 'WJetsToLNu_HT400_600_ext1'])

#newbWHT600 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT600_800', 'WJetsToLNu_HT600_800_ext1'])
#newbWHT600w = newbWHT600+'/baseW'
newbWHT600w = getCachedBaseW(['WJetsToLNu_HT600_800', 'WJetsToLNu_HT600_800_ext1'])

#newbWHT800 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT800_1200', 'WJetsToLNu_HT800_1200_ext1'])
#newbWHT800w = newbWHT800+'/baseW'
newbWHT800w = getCachedBaseW(['WJetsToLNu_HT800_1200', 'WJetsToLNu_HT800_1200_ext1'])

#newbWHT1200 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT1200_2500', 'WJetsToLNu_HT1200_2500_ext1'])
#newbWHT1200w = newbWHT1200+'/baseW'
newbWHT1200w = getCachedBaseW(['WJetsToLNu_HT1200_2500', 'WJetsToLNu_HT1200_2500_ext1'])

#newbWHT2500 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT2500_inf', 'WJetsToLNu_HT2500_inf_ext1'])
#newbWHT2500w = newbWHT2500+'/baseW'
newbWHT2500w = getCachedBaseW(['WJetsToLNu_HT2500_inf', 'WJetsToLNu_HT2500_inf_ext1'])

## LO sample
#files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO_ext2')
#samples['Wjets_LO'] = {
#    'name'   : files,
#    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    #'weight' : mcCommonWeight + '*ewknloW', 
#    'weight' : mcCommonWeight, 
#    'FilesPerJob' : 4,
#}
#addSampleWeight(samples, 'Wjets_LO', 'WJetsToLNu-LO',      newbWLOw) 
#addSampleWeight(samples, 'Wjets_LO', 'WJetsToLNu-LO_ext2', newbWLOw) 

# HT binned 
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO_ext2')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT70_100')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT100_200')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT100_200_ext2')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT200_400')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT200_400_ext2')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT400_600')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT400_600_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT600_800')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT600_800_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT800_1200')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT800_1200_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT1200_2500')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT1200_2500_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT2500_inf')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT2500_inf_ext1')

samples['Wjets_HT'] = {
    'name'   : files,
    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    #'weight' : mcCommonWeight + '*ewknloW', 
    'weight' : mcCommonWeight, 
    'FilesPerJob' : 4,
}

addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO', '(LHE_HT < 70)') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO_ext2', '(LHE_HT < 70)') 

# baseW fix
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO',      newbWLOw) 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO_ext2', newbWLOw) 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT100_200',         newbWHT100w) 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT100_200_ext2',    newbWHT100w) 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT200_400',         newbWHT200w) 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT200_400_ext2',    newbWHT200w) 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT400_600',         newbWHT400w) 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT400_600_ext1',    newbWHT400w)
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT600_800',         newbWHT600w) 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT600_800_ext1',    newbWHT600w) 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT800_1200',        newbWHT800w) 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT800_1200_ext1',   newbWHT800w)
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT1200_2500',       newbWHT1200w) 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT1200_2500_ext1',  newbWHT1200w) 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT2500_inf',        newbWHT2500w) 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT2500_inf_ext1',   newbWHT2500w) 

# HT stitching from Davide (derived by comparing HT to inclusive LO with only lep pt cuts)
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT70_100',          '1.21 * 1.0346')  #adding also k-factor
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT100_200',         '1.019') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT100_200_ext2',    '1.019') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT200_400',         '1.012') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT200_400_ext2',    '1.012') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT400_600',         '0.9945') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT400_600_ext1',    '0.9945')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT600_800',         '0.9537') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT600_800_ext1',    '0.9537') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT800_1200',        '0.8844') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT800_1200_ext1',   '0.8844')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT1200_2500',       '0.7643') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT1200_2500_ext1',  '0.7643') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT2500_inf',        '0.2422') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT2500_inf_ext1',   '0.2422') 

# k-factor
samples['Wjets_HTkf1D'] = copy.deepcopy(samples['Wjets_HT'])
samples['Wjets_HTkf1D']['weight'] += '*kfact1D[0]'

samples['Wjets_HTkf2D'] = copy.deepcopy(samples['Wjets_HT'])
samples['Wjets_HTkf2D']['weight'] += '*kfact2D[0]'

#samples['Wjets_HTkf1Dmjj'] = copy.deepcopy(samples['Wjets_HT'])
#samples['Wjets_HTkf1Dmjj']['weight'] += '*kfact1D[0]*kfactMjj[0]'

#samples['Wjets_HTkf1Detajj'] = copy.deepcopy(samples['Wjets_HT'])
#samples['Wjets_HTkf1Detajj']['weight'] += '*kfact1D[0]*kfactDetajj[0]'

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

###########################################
################## DATA ###################
###########################################

########### FAKE ###########

########### DATA ###########

