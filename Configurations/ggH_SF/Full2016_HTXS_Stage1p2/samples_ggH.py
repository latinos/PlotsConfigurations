import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2016_HTXS_Stage1p2
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

###########################################
#############   SIGNALS  ##################
###########################################

signals = []

#### ggH -> WW
if os.path.exists('HTXS_stage1_categories.py') :
  handle = open('HTXS_stage1_categories.py','r')
  exec(handle)
  handle.close()

## ggH STXS                                                                                                                                    
for cat,num in HTXSStage1_1Categories.iteritems():
    if 'GG2H_' in cat:
        if 'PTH_GT200' not in cat:
            samples['ggH_hww_'+cat.replace('GG2H_','')]  = {  'name': nanoGetSampleFiles(mcDirectory,'GluGluHToWWTo2L2NuPowheg_M125'),
                                                              'weight': [mcCommonWeight, {'class': 'Weight2MINLO', 'args': '%s/src/LatinoAnalysis/Gardener/python/data/powheg2minlo/NNLOPS_reweight.root' % os.getenv('CMSSW_BASE')},'(HTXS_stage1_1_cat_pTjet30GeV=='+str(num)+')'],  
                                                              #'weight': mcCommonWeight+'*(HTXS_stage1_1_cat_pTjet30GeV=='+str(num)+')',
                                                              'suppressNegative' :['all'],
                                                              'suppressNegativeNuisances' :['all'],
                                                              'linesToAdd': ['.L %s/Differential/weight2MINLO.cc+' % configurations]
                                                          }
            signals.append('ggH_hww'+cat.replace('GG2H_',''))

# Stage 1.2 binning for high pTH bin      

samples['ggH_hww_PTH_200_300']  = {  'name': nanoGetSampleFiles(mcDirectory,'GluGluHToWWTo2L2NuPowheg_M125'),
                                    'weight': [mcCommonWeight, {'class': 'Weight2MINLO', 'args': '%s/src/LatinoAnalysis/Gardener/python/data/powheg2minlo/NNLOPS_reweight.root' % os.getenv('CMSSW_BASE')},'(HTXS_stage1_1_cat_pTjet30GeV==101)*(HTXS_Higgs_pt>200)*(HTXS_Higgs_pt<=300)'],                                    #'weight': mcCommonWeight+'*(HTXS_stage1_1_cat_pTjet30GeV==101)*(HTXS_Higgs_pt>200)*(HTXS_Higgs_pt<=300)',
                                     'suppressNegative' :['all'],
                                     'suppressNegativeNuisances' :['all'],
                                     'linesToAdd': ['.L %s/Differential/weight2MINLO.cc+' % configurations]
                                  }
signals.append('ggH_hww_PTH_200_300')

samples['ggH_hww_PTH_300_450']  = {  'name': nanoGetSampleFiles(mcDirectory,'GluGluHToWWTo2L2NuPowheg_M125'),
                                    'weight': [mcCommonWeight, {'class': 'Weight2MINLO', 'args': '%s/src/LatinoAnalysis/Gardener/python/data/powheg2minlo/NNLOPS_reweight.root' % os.getenv('CMSSW_BASE')},'(HTXS_stage1_1_cat_pTjet30GeV==101)*(HTXS_Higgs_pt>300)*(HTXS_Higgs_pt<=450)'], 
                                    #'weight': mcCommonWeight+'*(HTXS_stage1_1_cat_pTjet30GeV==101)*(HTXS_Higgs_pt>300)*(HTXS_Higgs_pt<=450)',
                                     'suppressNegative' :['all'],
                                     'suppressNegativeNuisances' :['all'],
                                     'linesToAdd': ['.L %s/Differential/weight2MINLO.cc+' % configurations]
                                  }
signals.append('ggH_hww_PTH_300_450')

samples['ggH_hww_PTH_450_650']  = {  'name': nanoGetSampleFiles(mcDirectory,'GluGluHToWWTo2L2NuPowheg_M125'),
                                     'weight': [mcCommonWeight, {'class': 'Weight2MINLO', 'args': '%s/src/LatinoAnalysis/Gardener/python/data/powheg2minlo/NNLOPS_reweight.root' % os.getenv('CMSSW_BASE')},'(HTXS_stage1_1_cat_pTjet30GeV==101)*(HTXS_Higgs_pt>450)*(HTXS_Higgs_pt<=650)'],
                                #'weight': mcCommonWeight+'*(HTXS_stage1_1_cat_pTjet30GeV==101)*(HTXS_Higgs_pt>450)*(HTXS_Higgs_pt<=650)',
                                     'suppressNegative' :['all'],
                                     'suppressNegativeNuisances' :['all'],
                                     'linesToAdd': ['.L %s/Differential/weight2MINLO.cc+' % configurations]
                                   }
signals.append('ggH_hww_PTH_450_650')
samples['ggH_hww_PTH_GT650']  = {  'name': nanoGetSampleFiles(mcDirectory,'GluGluHToWWTo2L2NuPowheg_M125'),
                                   'weight': [mcCommonWeight, {'class': 'Weight2MINLO', 'args': '%s/src/LatinoAnalysis/Gardener/python/data/powheg2minlo/NNLOPS_reweight.root' % os.getenv('CMSSW_BASE')},'(HTXS_stage1_1_cat_pTjet30GeV==101)*(HTXS_Higgs_pt>650)'],                      
                                   #      'weight': mcCommonWeight+'*(HTXS_stage1_1_cat_pTjet30GeV==101)*(HTXS_Higgs_pt>650)',
                                     'suppressNegative' :['all'],
                                     'suppressNegativeNuisances' :['all'],
                                     'linesToAdd': ['.L %s/Differential/weight2MINLO.cc+' % configurations]
                                  }
signals.append('ggH_hww_PTH_GT650')
