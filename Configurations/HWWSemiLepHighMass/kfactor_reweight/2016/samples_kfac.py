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



#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
#mcCommonWeightNoMatch = 'XSWeight*SFweight[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]'
#mcCommonWeightNoXS    =          'SFweight[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]*PromptGenLepMatch1l'
#mcCommonWeightRaw     =                                                          'LepWPCut[0]*1tlVeto[0]*PromptGenLepMatch1l'
#mcCommonWeight        = 'XSWeight*SFweight[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]*PromptGenLepMatch1l'

mcCommonWeightNoMatch = 'XSWeight'
mcCommonWeight = mcCommonWeightNoMatch


#mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC*LepWPCut[0]'
#mcCommonWeight = mcCommonWeightNoMatch+'*Lepton_promptgenmatched[0]'

def CombineBaseW(directory, samples, proc, samplelist):
  newbaseW = getBaseWnAOD(directory, mcProduction, samplelist)
  for s in samplelist:
    addSampleWeight(samples, proc, s, newbaseW+'/baseW')

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

#files= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_ext2')
#
#samples['Wjets_NLO'] = {
#    'name'   : files,
#    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    #'weight' : mcCommonWeight + '*ewknloW', 
#    'weight' : mcCommonWeight, 
#    'FilesPerJob' : 4,
#}
#CombineBaseW(mcDirectory, samples, 'Wjets_NLO',
#            ['WJetsToLNu', 'WJetsToLNu_ext2'])
#



# NLO merge



oldbWpt1 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt100To250'])
extbWpt1 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt100To250_ext1'])
newbWpt1 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt100To250', 'WJetsToLNu_Wpt100To250_ext1'])
#newbW2Jw = newbW2J+'/baseW'
print(' wpt100 old baseW: '+oldbWpt1+', new baseW: '+newbWpt1+', ext baseW: '+extbWpt1)#+'Senne: '+newbW1Jw_2+'')

oldbWpt2 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt250To400'])
extbWpt2 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt250To400_ext1'])
newbWpt2 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt250To400', 'WJetsToLNu_Wpt250To400_ext1'])
#newbW2Jw = newbW2J+'/baseW'
print(' wpt250 old baseW: '+oldbWpt2+', new baseW: '+newbWpt2+', ext baseW: '+extbWpt2)#+'Senne: '+newbW1Jw_2+'')

oldbWpt3 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt400To600'])
extbWpt3 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt400To600_ext1'])
newbWpt3 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt400To600', 'WJetsToLNu_Wpt400To600_ext1'])
#newbW2Jw = newbW2J+'/baseW'
print(' wpt400 old baseW: '+oldbWpt3+', new baseW: '+newbWpt3+', ext baseW: '+extbWpt3)#+'Senne: '+newbW1Jw_2+'')


oldbWpt4 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt600ToInf'])
extbWpt4 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt600ToInf_ext1'])
newbWpt4 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt600ToInf', 'WJetsToLNu_Wpt600ToInf_ext1'])
#newbW2Jw = newbW2J+'/baseW'
print(' wpt600 old baseW: '+oldbWpt4+', new baseW: '+newbWpt4+', ext baseW: '+extbWpt4)#+'Senne: '+newbW1Jw_2+'')

oldbWNLO = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu'])#_ext2'])
print('NLO: '+oldbWNLO+'')

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

CombineBaseW(mcDirectory, samples, 'Wjets_NLOmerge',
            ['WJetsToLNu_Wpt100To250', 'WJetsToLNu_Wpt100To250_ext1'])
CombineBaseW(mcDirectory, samples, 'Wjets_NLOmerge',
            ['WJetsToLNu_Wpt250To400', 'WJetsToLNu_Wpt250To400_ext1'])
CombineBaseW(mcDirectory, samples, 'Wjets_NLOmerge',
            ['WJetsToLNu_Wpt400To600', 'WJetsToLNu_Wpt400To600_ext1'])
CombineBaseW(mcDirectory, samples, 'Wjets_NLOmerge',
            ['WJetsToLNu_Wpt600ToInf', 'WJetsToLNu_Wpt600ToInf_ext1'])




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

oldbWHT1 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT100_200'])
extbWHT1 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT100_200_ext1'])
newbWHT1 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT100_200', 'WJetsToLNu_HT100_200_ext1'])
#newbW2Jw = newbW2J+'/baseW'
print(' wHT100 old baseW: '+oldbWHT1+', new baseW: '+newbWHT1+', ext baseW: '+extbWHT1)#+'Senne: '+newbW1Jw_2+'')

oldbWHT2 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT200_400'])
extbWHT2 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT200_400_ext1'])
newbWHT2 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT200_400', 'WJetsToLNu_HT200_400_ext1'])
#newbW2Jw = newbW2J+'/baseW'
print(' wHT250 old baseW: '+oldbWHT2+', new baseW: '+newbWHT2+', ext baseW: '+extbWHT2)#+'Senne: '+newbW1Jw_2+'')

oldbWHT3 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT400_600'])
extbWHT3 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT400_600_ext1'])
newbWHT3 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT400_600', 'WJetsToLNu_HT400_600_ext1'])
#newbW2Jw = newbW2J+'/baseW'
print(' wHT400 old baseW: '+oldbWHT3+', new baseW: '+newbWHT3+', ext baseW: '+extbWHT3)#+'Senne: '+newbW1Jw_2+'')


oldbWHT4 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT600_800'])
extbWHT4 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT600_800_ext1'])
newbWHT4 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT600_800', 'WJetsToLNu_HT600_800_ext1'])
#newbW2Jw = newbW2J+'/baseW'
print(' wHT600 old baseW: '+oldbWHT4+', new baseW: '+newbWHT4+', ext baseW: '+extbWHT4)#+'Senne: '+newbW1Jw_2+'')

oldbWHT5 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT800_1200'])
extbWHT5 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT800_1200_ext1'])
newbWHT5 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT800_1200', 'WJetsToLNu_HT800_1200_ext1'])
#newbW2Jw = newbW2J+'/baseW'
print(' wHT800 old baseW: '+oldbWHT5+', new baseW: '+newbWHT5+', ext baseW: '+extbWHT5)#+'Senne: '+newbW1Jw_2+'')

oldbWHT6 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT1200_2500'])
extbWHT6 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT1200_2500_ext1'])
newbWHT6 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT1200_2500', 'WJetsToLNu_HT1200_2500_ext1'])
#newbW2Jw = newbW2J+'/baseW'
print(' wHT1200 old baseW: '+oldbWHT6+', new baseW: '+newbWHT6+', ext baseW: '+extbWHT6)#+'Senne: '+newbW1Jw_2+'')

oldbWHT7 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT2500_inf'])
extbWHT7 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT2500_inf_ext1'])
newbWHT7 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT2500_inf', 'WJetsToLNu_HT2500_inf_ext1'])
#newbW2Jw = newbW2J+'/baseW'
print(' wHT2500 old baseW: '+oldbWHT7+', new baseW: '+newbWHT7+', ext baseW: '+extbWHT7)#+'Senne: '+newbW1Jw_2+'')


oldbWLO = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu-LO'])
extbWLO = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu-LO_ext2'])
newbWLO = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu-LO', 'WJetsToLNu-LO_ext2'])
#newbW2Jw = newbW2J+'/baseW'
print(' wLO old baseW: '+oldbWLO+', new baseW: '+newbWLO+', ext baseW: '+extbWLO)#+'Senne: '+newbW1Jw_2+'')


oldbWHT8 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT70_100'])
print('HT70: '+oldbWHT8)

files  = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO_ext2')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT100_200')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT100_200_ext1')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT1200_2500')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT1200_2500_ext1')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT200_400')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT200_400_ext1')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT2500_inf')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT2500_inf_ext1')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT400_600')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT400_600_ext1')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT600_800')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT600_800_ext1')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT70_100')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT800_1200')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT800_1200_ext1')

# HT binned 

samples['Wjets_HT'] = {
    'name'   : files,
    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    #'weight' : mcCommonWeight + '*ewknloW', 
    'weight' : mcCommonWeight,# + '*kfact1D[0]', 
    'FilesPerJob' : 4,
}



CombineBaseW(mcDirectory, samples, 'Wjets_HT',
            ['WJetsToLNu-LO', 'WJetsToLNu-LO_ext2'])
CombineBaseW(mcDirectory, samples, 'Wjets_HT',
            ['WJetsToLNu_HT100_200', 'WJetsToLNu_HT100_200_ext1'])
CombineBaseW(mcDirectory, samples, 'Wjets_HT',
            ['WJetsToLNu_HT1200_2500', 'WJetsToLNu_HT1200_2500_ext1'])
CombineBaseW(mcDirectory, samples, 'Wjets_HT',
            ['WJetsToLNu_HT200_400', 'WJetsToLNu_HT200_400_ext1'])
CombineBaseW(mcDirectory, samples, 'Wjets_HT',
            ['WJetsToLNu_HT2500_inf', 'WJetsToLNu_HT2500_inf_ext1'])
CombineBaseW(mcDirectory, samples, 'Wjets_HT',
            ['WJetsToLNu_HT400_600', 'WJetsToLNu_HT400_600_ext1'])
CombineBaseW(mcDirectory, samples, 'Wjets_HT',
            ['WJetsToLNu_HT600_800', 'WJetsToLNu_HT600_800_ext1'])
CombineBaseW(mcDirectory, samples, 'Wjets_HT',
            ['WJetsToLNu_HT800_1200', 'WJetsToLNu_HT800_1200_ext1'])

addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO', '(LHE_HT < 70)') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO_ext2', '(LHE_HT < 70)') 

# baseW fix

# HT stitching from Davide (derived by comparing HT to inclusive LO with only lep pt cuts)
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT70_100',          '1.21')  #adding also k-factor
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT100_200',         '1.019') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT100_200_ext2',    '1.019') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT200_400',         '1.012') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT200_400_ext2',    '1.012') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT400_600',         '0.9945') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT400_600_ext1',    '0.9945')
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT600_800',         '0.9537') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT600_800_ext1',    '0.9537') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT800_1200',        '0.8844') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT800_1200_ext1',   '0.8844')
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT1200_2500',       '0.7643') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT1200_2500_ext1',  '0.7643') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT2500_inf',        '0.2422') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT2500_inf_ext1',   '0.2422') 

# k-factor
#samples['Wjets_HTkf1D'] = copy.deepcopy(samples['Wjets_HT'])
#samples['Wjets_HTkf1D']['weight'] += '*kfact1D[0]'
#
#samples['Wjets_HTkf2D'] = copy.deepcopy(samples['Wjets_HT'])
#samples['Wjets_HTkf2D']['weight'] += '*kfact2D[0]'

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

