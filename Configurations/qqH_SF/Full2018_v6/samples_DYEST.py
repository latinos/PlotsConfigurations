import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # ggH2016
configurations = os.path.dirname(configurations) # Differential
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

mcProduction = 'Autumn18_102X_nAODv6_Full2018v6'
dataReco = 'Run2018_102X_nAODv6_Full2018v6'

mcSteps = 'MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6{var}'

fakeSteps = 'DATAl1loose2018v6__l2loose__fakeW'

dataSteps = 'DATAl1loose2018v6__l2loose__l2tightOR2018v6'

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
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
            ['A','Run2018A-Nano25Oct2019-v1'] ,
            ['B','Run2018B-Nano25Oct2019-v1'] ,
            ['C','Run2018C-Nano25Oct2019-v1'] ,
            ['D','Run2018D-Nano25Oct2019_ver2-v1'] ,
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
mcCommonWeight = 'XSWeight*SFweight*PromptGenLepMatch2l*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######

ptllDYW_NLO = '(0.87*(gen_ptll<10)+(0.379119+0.099744*gen_ptll-0.00487351*gen_ptll**2+9.19509e-05*gen_ptll**3-6.0212e-07*gen_ptll**4)*(gen_ptll>=10 && gen_ptll<45)+(9.12137e-01+1.11957e-04*gen_ptll-3.15325e-06*gen_ptll**2-4.29708e-09*gen_ptll**3+3.35791e-11*gen_ptll**4)*(gen_ptll>=45 && gen_ptll<200) + 1*(gen_ptll>200))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'

useDYtt = False
useDYHT = True

if useDYtt :

    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
            nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')
    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                     Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )',
        'FilesPerJob': 6,
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],
    }
    addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50' ,ptllDYW_NLO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)

else:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext2') + \
            nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                     Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )',
        'FilesPerJob': 6,
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],
    }

    # ... Add DY HT Samples
    if useDYHT :
        samples['DY']['name'] +=     nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-200to400' ) \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-400to600' ) \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-600toInf') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-600to800') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-800to1200')  \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-2500toInf')

    addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2'        ,ptllDYW_NLO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1' ,ptllDYW_LO)

    if useDYHT :
        # Remove high HT from inclusive samples
        addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1', '(LHE_HT<200)')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext'        , '(LHE_HT<100)')
        # pt_ll weight
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-200to400',ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-400to600',ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-600toInf',ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100'    ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200'   ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400'   ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600'   ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800'   ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200'  ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500' ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf'  ,ptllDYW_LO)

signals = []
