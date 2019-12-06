import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # DNN
configurations = os.path.dirname(configurations) # Full2016
configurations = os.path.dirname(configurations) # ggH SF
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

#mcProduction = 'Summer16_102X_nAODv4_Full2016v5'
#mcProduction = 'Summer16_102X_nAODv5_SigOnly_Full2016v5'

dataReco = 'Run2016_102X_nAODv4_Full2016v5'

#mcSteps = 'MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5{var}'

fakeSteps = 'DATAl1loose2016v5__l2loose__fakeW'

dataSteps = 'DATAl1loose2016v5__l2loose__l2tightOR2016v5'

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
        #return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
        return '/afs/cern.ch/user/d/ddicroce/public/Summer16/l2tightOR__{var}'.format(var=var)
    else:
        #return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))
        return '/afs/cern.ch/user/d/ddicroce/public/Summer16/l2tightOR'

mcDirectory   = makeMCDirectory()

fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2016B-Nano14Dec2018_ver2-v1'],
    ['C','Run2016C-Nano14Dec2018-v1'],
    ['D','Run2016D-Nano14Dec2018-v1'],
    ['E','Run2016E-Nano14Dec2018-v1'],
    ['F','Run2016F-Nano14Dec2018-v1'],
    ['G','Run2016G-Nano14Dec2018-v1'],
    ['H','Run2016H-Nano14Dec2018-v1']
]

DataSets = ['MuonEG','SingleMuon','SingleElectron','DoubleMuon', 'DoubleEG']

DataTrig = {
    'MuonEG'         : ' Trigger_ElMu' ,
    'SingleMuon'     : '!Trigger_ElMu && Trigger_sngMu' ,
    'SingleElectron' : '!Trigger_ElMu && !Trigger_sngMu && Trigger_sngEl',
    'DoubleMuon'     : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && Trigger_dblMu',
    'DoubleEG'       : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && !Trigger_dblMu && Trigger_dblEl'
}

#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC'
mcCommonWeight = 'XSWeight*SFweight*PromptGenLepMatch2l*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######
useDYtt = False
useDYHT = True

ptllDYW_NLO = '(0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140)'
ptllDYW_LO  = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'

if useDYtt:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
            nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
        'FilesPerJob': 4,
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],
    }
    addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50',ptllDYW_NLO,False,'nanoLatino_')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO,False,'nanoLatino_')

else:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext2') + \
            nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight,
        'FilesPerJob': 4,
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],

    }
    # Add DY HT Samples
    if useDYHT :
        samples['DY']['name'] +=   nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-70to100') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-100to200_ext1') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-200to400_ext1') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-400to600_ext1') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-600toinf') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-70to100') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200_ext1') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400_ext1') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600_ext1') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-600to800') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-800to1200') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500') \
                                 + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-2500toinf')

    addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2',ptllDYW_NLO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)

    if useDYHT :
        # Remove high HT from inclusive samples
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2'  , 'LHE_HT<70.0')
        addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO', 'LHE_HT<70.0')
        # pt_ll weight
        addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-70to100'       ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-100to200_ext1' ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400_ext1' ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600_ext1' ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toinf'      ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100'          ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200_ext1'    ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400_ext1'    ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext1'    ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800'         ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200'        ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500'       ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toinf'        ,ptllDYW_LO)

signals = []
