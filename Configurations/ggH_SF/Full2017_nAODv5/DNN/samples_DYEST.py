import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # DNN
configurations = os.path.dirname(configurations) # Full 2017
configurations = os.path.dirname(configurations) # ggH_SF
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def nanoGetSampleFiles(inputDir, sample):
    try:
        if _samples_noload:
            return [sample]
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

#mcProduction = 'Fall2017_102X_nAODv4_Full2017v5'
#mcProduction = 'Fall2017_102X_nAODv5_SigOnly_Full2017v5'

dataReco = 'Run2017_102X_nAODv4_Full2017v5'

#mcSteps = 'MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5{var}__wwSel'

fakeSteps = 'DATAl1loose2017v5__l2loose__fakeW'

dataSteps = 'DATAl1loose2017v5__l2loose__l2tightOR2017v5'

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
        return '/afs/cern.ch/user/d/ddicroce/public/Fall17/l2tightOR__{var}'.format(var=var)
    else:
        #return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))
        return '/afs/cern.ch/user/d/ddicroce/public/Fall17/l2tightOR'

mcDirectory   = makeMCDirectory()

fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2017B-Nano14Dec2018-v1'],
    ['C','Run2017C-Nano14Dec2018-v1'],
    ['D','Run2017D-Nano14Dec2018-v1'],
    ['E','Run2017E-Nano14Dec2018-v1'],
    ['F','Run2017F-Nano14Dec2018-v1']
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

ptllDYW_NLO = '(((0.623108 + 0.0722934*gen_ptll - 0.00364918*gen_ptll*gen_ptll + 6.97227e-05*gen_ptll*gen_ptll*gen_ptll - 4.52903e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll<45)*(gen_ptll>0) + 1*(gen_ptll>=45))*(abs(gen_mll-90)<3) + (abs(gen_mll-90)>3))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'

if useDYtt:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
            nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight,
        'FilesPerJob': 2,
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],
    }
    addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50',ptllDYW_NLO,False,'nanoLatino_')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO,False,'nanoLatino_')

else:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50') + \
            nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight,
        'FilesPerJob': 2,
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],

    }

    # Add DY HT Samples
    if useDYHT :
        samples['DY']['name'] +=     nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-100to200') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-200to400') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-400to600') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-600toInf') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600_ext1') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-600to800') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-800to1200') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-2500toInf')
    
    addSampleWeight(samples,'DY','DYJetsToLL_M-50',ptllDYW_NLO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)

    if useDYHT :
        # Remove high HT from inclusive samples
        addSampleWeight(samples,'DY','DYJetsToLL_M-50'       , 'LHE_HT<100.0')
        addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO', 'LHE_HT<100.0')
        # pt_ll weight
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-100to200'  ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-200to400'  ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-400to600'  ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-600toInf'  ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200'     ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400'     ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext1',ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800'     ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200'    ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500'   ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf'    ,ptllDYW_LO)

