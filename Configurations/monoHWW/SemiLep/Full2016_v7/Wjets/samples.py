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
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015'
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

files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')

samples['Wjets_LO'] = {
    'name'   : files,
    'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    #'weight' : mcCommonWeight + '*ewknloW', 
    #'weight' : mcCommonWeight, 
    'FilesPerJob' : 4,
}

files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_ext2')

samples['Wjets_NLO'] = {
    'name'   : files,
    'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    #'weight' : mcCommonWeight + '*ewknloW', 
    #'weight' : mcCommonWeight, 
    'FilesPerJob' : 4,
}

# HT binned 
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO_ext2')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT70_100')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT100_200')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT100_200_ext2')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT200_400')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT200_400_ext2')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT400_600')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT400_600_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT600_800')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT600_800_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT800_1200')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT800_1200_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT1200_2500')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT1200_2500_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT2500_inf')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT2500_inf_ext1')

samples['Wjets_HT'] = {
    'name'   : files,
    'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    #'weight' : mcCommonWeight + '*ewknloW', 
    #'weight' : mcCommonWeight, 
    'FilesPerJob' : 4,
}

addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO', '(LHE_HT < 70)') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO_ext2', '(LHE_HT < 70)') 

# HT stitching from Davide (derived by comparing HT to inclusive LO with only lep pt cuts)
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT70_100',          '1.21 * 1.0346')  #adding also k-factor
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT100_200',         '1.019') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT100_200_ext2',    '1.019') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT200_400',         '1.012') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT200_400_ext2',    '1.012') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT400_600',         '0.9945') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT400_600_ext1',    '0.9945')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT600_800',         '0.9537') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT600_800_ext1',    '0.9537') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT800_1200',        '0.8844') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT800_1200_ext1',   '0.8844')
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT1200_2500',       '0.7643') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT1200_2500_ext1',  '0.7643') 
addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT2500_inf',        '0.2422') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT2500_inf_ext1',   '0.2422') 

samples['Wjets_HTsf'] = {
    'name'   : files,
    'weight' : mcCommonWeight +'*EWKnloW[0]*VptSF[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    #'weight' : mcCommonWeight + '*ewknloW', 
    #'weight' : mcCommonWeight, 
    'FilesPerJob' : 4,
}

addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu-LO', '(LHE_HT < 70)') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu-LO_ext2', '(LHE_HT < 70)') 

# HT stitching from Davide (derived by comparing HT to inclusive LO with only lep pt cuts)
addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT70_100',          '1.21 * 1.0346')  #adding also k-factor
addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT100_200',         '1.019') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT100_200_ext2',    '1.019') 
addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT200_400',         '1.012') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT200_400_ext2',    '1.012') 
addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT400_600',         '0.9945') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT400_600_ext1',    '0.9945')
addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT600_800',         '0.9537') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT600_800_ext1',    '0.9537') 
addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT800_1200',        '0.8844') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT800_1200_ext1',   '0.8844')
addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT1200_2500',       '0.7643') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT1200_2500_ext1',  '0.7643') 
addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT2500_inf',        '0.2422') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT2500_inf_ext1',   '0.2422') 


files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt100To250')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt250To400')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt400To600')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt600ToInf')

samples['Wjets_NLOpt'] = {
    'name'   : files,
    'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    #'weight' : mcCommonWeight + '*ewknloW', 
    #'weight' : mcCommonWeight, 
    'FilesPerJob' : 4,
}


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

