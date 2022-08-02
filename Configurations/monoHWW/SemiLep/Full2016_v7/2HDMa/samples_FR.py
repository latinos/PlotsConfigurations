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

dataReco = 'Run2016_102X_nAODv7_Full2016v7'
dataSteps = 'DATAl1loose2016v7'
fakeSteps = 'DATAl1loose2016v7'

mcProduction = 'Summer16_102X_nAODv7_Full2016v7'
mcSteps = 'MCl1loose2016v7__MCCorr2016v7'

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
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)


#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*SFweight[0]*METFilter_MC*PUJetIdSF[0]'
mcCommonWeight        = 'XSWeight*SFweight[0]*METFilter_MC*PUJetIdSF[0]*PromptGenLepMatch1l'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######

# from ggh 2016
ptllDYW_NLO = '(0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140)'
ptllDYW_LO  = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext2')

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
    'FilesPerJob': 3,
}

#addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2', ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2', 'DY_NLO_pTllrw')

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-70to100')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-100to200')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-200to400')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-400to600')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-600toinf')

samples['DYlow'] = {
    'name': files,
    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
    'FilesPerJob': 3,
}


#addSampleWeight(samples,'DYlow','DYJetsToLL_M-5to50_HT-70to100',  ptllDYW_LO)
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-5to50_HT-100to200', ptllDYW_LO)
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-5to50_HT-200to400', ptllDYW_LO)
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-5to50_HT-400to600', ptllDYW_LO)
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-5to50_HT-600toinf', ptllDYW_LO)
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-10to50_ext1',       ptllDYW_NLO+'*(LHE_HT<100)')

addSampleWeight(samples,'DYlow','DYJetsToLL_M-5to50_HT-70to100',  'DY_LO_pTllrw')
addSampleWeight(samples,'DYlow','DYJetsToLL_M-5to50_HT-100to200', 'DY_LO_pTllrw')
addSampleWeight(samples,'DYlow','DYJetsToLL_M-5to50_HT-200to400', 'DY_LO_pTllrw')
addSampleWeight(samples,'DYlow','DYJetsToLL_M-5to50_HT-400to600', 'DY_LO_pTllrw')
addSampleWeight(samples,'DYlow','DYJetsToLL_M-5to50_HT-600toinf', 'DY_LO_pTllrw')
addSampleWeight(samples,'DYlow','DYJetsToLL_M-10to50_ext1',       'DY_LO_pTllrw*(LHE_HT<100)')

########## W+jets #########

files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_ext2')

samples['Wjets'] = {
    'name'   : files,
    'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    #'weight' : mcCommonWeight + '*ewknloW', 
    'FilesPerJob' : 4,
}

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
#samples['Wjets'] = {
#    'name'   : files,
#    'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    #'weight' : mcCommonWeight + '*ewknloW', 
#    #'weight' : mcCommonWeight, 
#    'FilesPerJob' : 4,
#}
#
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu-LO', '(LHE_HT < 70)') 
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu-LO_ext2', '(LHE_HT < 70)') 
#
## HT stitching from Davide (derived by comparing HT to inclusive LO with only lep pt cuts)
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT70_100',          '1.21 * 1.0346')  #adding also k-factor
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT100_200',         '1.019') 
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT100_200_ext2',    '1.019') 
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT200_400',         '1.012') 
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT200_400_ext2',    '1.012') 
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT400_600',         '0.9945') 
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT400_600_ext1',    '0.9945')
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT600_800',         '0.9537') 
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT600_800_ext1',    '0.9537') 
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT800_1200',        '0.8844') 
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT800_1200_ext1',   '0.8844')
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT1200_2500',       '0.7643') 
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT1200_2500_ext1',  '0.7643') 
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT2500_inf',        '0.2422') 
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT2500_inf_ext1',   '0.2422') 

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2016B-02Apr2020_ver2-v1'] ,
    ['C','Run2016C-02Apr2020-v1'] ,
    ['D','Run2016D-02Apr2020-v1'] ,
    ['E','Run2016E-02Apr2020-v1'] ,
    ['F','Run2016F-02Apr2020-v1'] ,
    ['G','Run2016G-02Apr2020-v1'] ,
    ['H','Run2016H-02Apr2020-v1'] ,
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

########### DATA ###########

samples['DATA'] = {
  'name': [],
  'weight': 'METFilter_DATA',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 25
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))

#samples = {k:v for k,v in samples.items() if k != "Wjets"}