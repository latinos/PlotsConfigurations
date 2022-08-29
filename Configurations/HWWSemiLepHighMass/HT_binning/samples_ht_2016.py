import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2016v7
configurations = os.path.dirname(configurations) # HWWSemiLepHighMass
configurations = os.path.dirname(configurations) # Configurations

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
######### Higgs mass samples and models ########
################################################

massesAndModelsFile = "{}/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/Full2016_v7/massesAndModels.py".format(os.getenv("CMSSW_BASE"))
if os.path.exists(massesAndModelsFile) :
    handle = open(massesAndModelsFile,'r')
    exec(handle)
    handle.close()
else:
    print "!!! ERROR file ", massesAndModelsFile, " does not exist."


################################################
################# SKIMS ########################
################################################

mcProduction = 'Summer16_102X_nAODv7_Full2016v7'

dataReco = 'Run2016_102X_nAODv7_Full2016v7'

mcSteps = 'MCl1loose2016v7__MCCorr2016v7__MCCombJJLNu2016{var}'

dataSteps = 'DATAl1loose2016v7__DATACombJJLNu2016'
fakeSteps = 'DATAl1loose2016v7__DATACombJJLNu2016'

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

mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC*LepWPCut[0]*(nTightLep==1)'
mcCommonWeight = mcCommonWeightNoMatch+'*Lepton_promptgenmatched[0]'

###########################################
#############  BACKGROUNDS  ###############
###########################################


########## W+jets #########
print("W+jets")
whad_reweight = '(1.17301e+00 - 8.66070e-04*HM_Whad_mass)'

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

samples['Wjets'] = {
    'name'   : files,
    'weight' : mcCommonWeight,
    'FilesPerJob' : 3,
}
CombineBaseW(mcDirectory, samples, 'Wjets',
            ['WJetsToLNu-LO', 'WJetsToLNu-LO_ext2'])
CombineBaseW(mcDirectory, samples, 'Wjets',
            ['WJetsToLNu_HT100_200', 'WJetsToLNu_HT100_200_ext1'])
CombineBaseW(mcDirectory, samples, 'Wjets',
            ['WJetsToLNu_HT1200_2500', 'WJetsToLNu_HT1200_2500_ext1'])
CombineBaseW(mcDirectory, samples, 'Wjets',
            ['WJetsToLNu_HT200_400', 'WJetsToLNu_HT200_400_ext1'])
CombineBaseW(mcDirectory, samples, 'Wjets',
            ['WJetsToLNu_HT2500_inf', 'WJetsToLNu_HT2500_inf_ext1'])
CombineBaseW(mcDirectory, samples, 'Wjets',
            ['WJetsToLNu_HT400_600', 'WJetsToLNu_HT400_600_ext1'])
CombineBaseW(mcDirectory, samples, 'Wjets',
            ['WJetsToLNu_HT600_800', 'WJetsToLNu_HT600_800_ext1'])
CombineBaseW(mcDirectory, samples, 'Wjets',
            ['WJetsToLNu_HT800_1200', 'WJetsToLNu_HT800_1200_ext1'])

addSampleWeight(samples,'Wjets','WJetsToLNu-LO','(LHE_HT < 70)')
addSampleWeight(samples,'Wjets','WJetsToLNu-LO_ext2','(LHE_HT < 70)')
addSampleWeight(samples,'Wjets','WJetsToLNu_HT70_100', '1.21')





print("inclusive W+jets LO")
whad_reweight = '(1.17301e+00 - 8.66070e-04*HM_Whad_mass)'

files  = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO_ext2')
samples['Wjets_incl_LO'] = {
    'name'   : files,
    'weight' : mcCommonWeight,
    'FilesPerJob' : 3,
}
CombineBaseW(mcDirectory, samples, 'Wjets_incl_LO',
            ['WJetsToLNu-LO', 'WJetsToLNu-LO_ext2'])

eleWP    = 'mva_90p_Iso2016'
muWP     = 'cut_Tight80x'

Mu_jetEt = 35
El_jetEt = 35
fakeW = 'FW_mu'+str(Mu_jetEt)+ '_el'+str(El_jetEt)+'[0]'
