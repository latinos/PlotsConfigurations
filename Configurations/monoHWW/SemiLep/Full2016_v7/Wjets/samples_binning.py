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

#files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')
#
#samples['Wjets_LO'] = {
#    'name'   : files,
#    'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    #'weight' : mcCommonWeight + '*ewknloW', 
#    #'weight' : mcCommonWeight, 
#    'FilesPerJob' : 4,
#}
#

# Inclusive
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_ext2')

samples['Wjets_NLOin'] = {
    'name'   : files,
    'weight' : mcCommonWeight +'*(LHE_Vpt < 120)*EWKnloW[0]',
    'FilesPerJob' : 4,
}

samples['Wjets_NLOinR'] = {
    'name'   : files,
    'weight' : mcCommonWeightRaw +'*(LHE_Vpt < 120)',
    'FilesPerJob' : 4,
    'isData': ['all'],
}

# Pt binned
oldbW100pt = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt100To250'])
newbW100pt = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt100To250', 'WJetsToLNu_Wpt100To250_ext1'])
newbW100w = newbW100pt+'/baseW'

oldbW250pt = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt250To400'])
newbW250pt = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt250To400', 'WJetsToLNu_Wpt250To400_ext1'])
newbW250w = newbW250pt+'/baseW'

oldbW400pt = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt400To600'])
newbW400pt = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt400To600', 'WJetsToLNu_Wpt400To600_ext1'])
newbW400w = newbW400pt+'/baseW'

oldbW600pt = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt600ToInf'])
newbW600pt = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_Wpt600ToInf', 'WJetsToLNu_Wpt600ToInf_ext1'])
newbW600w = newbW600pt+'/baseW'

files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt100To250')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt250To400')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt400To600')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt600ToInf')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt100To250_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt250To400_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt400To600_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt600ToInf_ext1')

samples['Wjets_NLOpt'] = {
    'name'   : files,
    'weight' : mcCommonWeight +'*(LHE_Vpt > 120)*EWKnloW[0]',
    'FilesPerJob' : 4,
}

addSampleWeight(samples, 'Wjets_NLOpt', 'WJetsToLNu_Wpt100To250'     , newbW100w)
addSampleWeight(samples, 'Wjets_NLOpt', 'WJetsToLNu_Wpt100To250_ext1', newbW100w)
addSampleWeight(samples, 'Wjets_NLOpt', 'WJetsToLNu_Wpt250To400'     , newbW250w)
addSampleWeight(samples, 'Wjets_NLOpt', 'WJetsToLNu_Wpt250To400_ext1', newbW250w)
addSampleWeight(samples, 'Wjets_NLOpt', 'WJetsToLNu_Wpt400To600'     , newbW400w)
addSampleWeight(samples, 'Wjets_NLOpt', 'WJetsToLNu_Wpt400To600_ext1', newbW400w)
addSampleWeight(samples, 'Wjets_NLOpt', 'WJetsToLNu_Wpt600ToInf'     , newbW600w)
addSampleWeight(samples, 'Wjets_NLOpt', 'WJetsToLNu_Wpt600ToInf_ext1', newbW600w)

samples['Wjets_NLOptR'] = {
    'name'   : files,
    'weight' : mcCommonWeightRaw +'*(LHE_Vpt > 120)',
    'FilesPerJob' : 4,
    'isData': ['all'],
}

# Merge
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt100To250')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt250To400')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt400To600')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt600ToInf')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt100To250_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt250To400_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt400To600_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt600ToInf_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_ext2')

samples['Wjets_NLOmerg'] = {
    'name'   : files,
    'weight' : mcCommonWeight +'*EWKnloW[0]',
    'FilesPerJob' : 4,
}
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Wpt100To250'     , newbW100w)
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Wpt100To250_ext1', newbW100w)
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Wpt250To400'     , newbW250w)
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Wpt250To400_ext1', newbW250w)
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Wpt400To600'     , newbW400w)
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Wpt400To600_ext1', newbW400w)
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Wpt600ToInf'     , newbW600w)
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Wpt600ToInf_ext1', newbW600w)

addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_ext2', '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Wpt100To250'     , '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Wpt100To250_ext1', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Wpt250To400'     , '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Wpt250To400_ext1', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Wpt400To600'     , '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Wpt400To600_ext1', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Wpt600ToInf'     , '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmerg', 'WJetsToLNu_Wpt600ToInf_ext1', '(LHE_Vpt > 120)')

samples['Wjets_NLOmergR'] = {
    'name'   : files,
    'weight' : mcCommonWeightRaw,
    'FilesPerJob' : 4,
    'isData': ['all'],
}
addSampleWeight(samples, 'Wjets_NLOmergR', 'WJetsToLNu_ext2', '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets_NLOmergR', 'WJetsToLNu_Wpt100To250'     , '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmergR', 'WJetsToLNu_Wpt100To250_ext1', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmergR', 'WJetsToLNu_Wpt250To400'     , '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmergR', 'WJetsToLNu_Wpt250To400_ext1', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmergR', 'WJetsToLNu_Wpt400To600'     , '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmergR', 'WJetsToLNu_Wpt400To600_ext1', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmergR', 'WJetsToLNu_Wpt600ToInf'     , '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets_NLOmergR', 'WJetsToLNu_Wpt600ToInf_ext1', '(LHE_Vpt > 120)')

## HT binned 
#files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO_ext2')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT70_100')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT100_200')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT100_200_ext2')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT200_400')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT200_400_ext2')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT400_600')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT400_600_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT600_800')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT600_800_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT800_1200')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT800_1200_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT1200_2500')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT1200_2500_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT2500_inf')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT2500_inf_ext1')
#
#samples['Wjets_HT'] = {
#    'name'   : files,
#    'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    #'weight' : mcCommonWeight + '*ewknloW', 
#    #'weight' : mcCommonWeight, 
#    'FilesPerJob' : 4,
#}
#
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO', '(LHE_HT < 70)') 
##addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu-LO_ext2', '(LHE_HT < 70)') 
#
## HT stitching from Davide (derived by comparing HT to inclusive LO with only lep pt cuts)
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT70_100',          '1.21 * 1.0346')  #adding also k-factor
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT100_200',         '1.019') 
##addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT100_200_ext2',    '1.019') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT200_400',         '1.012') 
##addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT200_400_ext2',    '1.012') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT400_600',         '0.9945') 
##addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT400_600_ext1',    '0.9945')
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT600_800',         '0.9537') 
##addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT600_800_ext1',    '0.9537') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT800_1200',        '0.8844') 
##addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT800_1200_ext1',   '0.8844')
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT1200_2500',       '0.7643') 
##addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT1200_2500_ext1',  '0.7643') 
#addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT2500_inf',        '0.2422') 
##addSampleWeight(samples, 'Wjets_HT', 'WJetsToLNu_HT2500_inf_ext1',   '0.2422') 
#
#samples['Wjets_HTsf'] = {
#    'name'   : files,
#    'weight' : mcCommonWeight +'*EWKnloW[0]*VptSF[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    #'weight' : mcCommonWeight + '*ewknloW', 
#    #'weight' : mcCommonWeight, 
#    'FilesPerJob' : 4,
#}
#
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu-LO', '(LHE_HT < 70)') 
##addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu-LO_ext2', '(LHE_HT < 70)') 
#
## HT stitching from Davide (derived by comparing HT to inclusive LO with only lep pt cuts)
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT70_100',          '1.21 * 1.0346')  #adding also k-factor
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT100_200',         '1.019') 
##addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT100_200_ext2',    '1.019') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT200_400',         '1.012') 
##addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT200_400_ext2',    '1.012') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT400_600',         '0.9945') 
##addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT400_600_ext1',    '0.9945')
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT600_800',         '0.9537') 
##addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT600_800_ext1',    '0.9537') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT800_1200',        '0.8844') 
##addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT800_1200_ext1',   '0.8844')
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT1200_2500',       '0.7643') 
##addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT1200_2500_ext1',  '0.7643') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT2500_inf',        '0.2422') 
##addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT2500_inf_ext1',   '0.2422') 



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

