import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # LepEfficiency
configurations = os.path.dirname(configurations) # HWWSemiLepHighMass
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

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
year = '17'

if year == '16':
    mcProduction = 'Summer16_102X_nAODv4_Full2016v5'
    dataReco = 'Run2016_102X_nAODv4_Full2016v5'
    mcSteps = 'MCl1loose2016v5__MCCorr2016v5'
    dataSteps = 'DATAl1loose2016v5'

elif year == '17':
    mcProduction = 'Fall2017_102X_nAODv4_Full2017v5'
    dataReco = 'Run2017_102X_nAODv4_Full2017v5'
    mcSteps = 'MCl1loose2017v5__MCCorr2017v5'
    dataSteps = 'DATAl1loose2017v5'

elif year == '18':
    mcProduction = 'Autumn18_102X_nAODv5_Full2018v5'
    dataReco = 'Run2018_102X_nAODv5_Full2018v5'
    mcSteps = 'MCl1loose2018v5__MCCorr2018v5'
    dataSteps = 'DATAl1loose2018v5'

else: raise ValueError("year is none of '16', '17' or '18'")

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'

def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

mcDirectory = makeMCDirectory()
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

################################################
############ DATA DECLARATION ##################
################################################
# FIXME for different years?
DataRun = [
            ['A','Run2018A-Nano1June2019-v1'] ,
            ['B','Run2018B-Nano1June2019-v1'] ,
            ['C','Run2018C-Nano1June2019-v1'] ,
            ['D','Run2018D-Nano1June2019_ver2-v1'] ,
          ]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','EGamma']

DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
            'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
            'EGamma'         : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && (Trigger_sngEl || Trigger_dblEl)' ,
           }


#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC'
mcCommonWeight = 'XSWeight*SFweight*Lepton_genmatched[0]*METFilter_MC'


###########################################
#############   SIGNALS  ##################
###########################################

#List_MX=[125,200,210,230,250,300,350,400,500,550,600,650,700,750,800,900,1500,2000,2500,3000,4000,5000]
List_MX=[200, 800, 3000]

signals = []
for MX in List_MX:
    ####### ggH -> WW #################
    samples['ggHWW2l2nu_M'+str(MX)] = {
        'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2Nu_M'+str(MX)),
        'weight': '1',
        'FilesPerJob': 4
    }
    signals.append('ggHWWlnuqq_M'+str(MX))

    ############ VBF H->WW ############
    samples['qqHWW2l2nu_M'+str(MX)] = {
        'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2Nu_M'+str(MX)),
        'weight': '1',
        'FilesPerJob': 4
    }
    signals.append('qqHWW2l2nu_M'+str(MX))
