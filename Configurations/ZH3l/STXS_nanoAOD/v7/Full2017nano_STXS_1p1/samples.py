import os
import subprocess

global getSampleFiles
from LatinoAnalysis.Tools.commonTools import getSampleFiles, addSampleWeight, getBaseWnAOD

def getSampleFilesNano(inputDir,Sample,absPath=False):
    return getSampleFiles(inputDir,Sample,absPath,'nanoLatino_')

##############################################
###### Tree Directory according to site ######
##############################################

SITE=os.uname()[1]
xrootdPath=''
if    'iihe' in SITE :
  xrootdPath  = 'dcap://maite.iihe.ac.be/'
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/'
elif  'cern' in SITE :
  #xrootdPath='root://eoscms.cern.ch/'
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'

directory = treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7/'

################################################
############ NUMBER OF LEPTONS #################
################################################

#Nlep='2'
Nlep='3'
#Nlep='4'

################################################
############### Lepton WP ######################
################################################

eleWP = 'mvaFall17V1Iso_WP90_tthmva_70'
muWP  = 'cut_Tight_HWWW_tthmva_80'

LepWPCut         = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP  #Cut for new WPs, v7
LepWPweight      = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP

################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut+'*PrefireWeight*Jet_PUIDSF'
PromptGenLepMatch   = 'PromptGenLepMatch'+Nlep+'l'

################################################
############## FAKE WEIGHTS ####################
################################################

if Nlep == '2' :
  fakeW = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP
else:
  fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l'

################################################
############### B-Tag  WP ######################
################################################

SFweight += '*btagSF' #define in aliases.py

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2017B-02Apr2020-v1'],
    ['C','Run2017C-02Apr2020-v1'],
    ['D','Run2017D-02Apr2020-v1'],
    ['E','Run2017E-02Apr2020-v1'],
    ['F','Run2017F-02Apr2020-v1']
]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']

DataTrig = {
            'MuonEG'         : ' Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu &&  Trigger_dblMu' ,
            'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu &&  Trigger_sngMu' ,
            'DoubleEG'       : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu &&  Trigger_dblEl' ,
            'SingleElectron' : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && !Trigger_dblEl && Trigger_sngEl' ,
           }

###########################################
#############  BACKGROUNDS  ###############
###########################################

############ Top ############

samples['ttV'] = {    'name'   :   getSampleFilesNano(directory,'TTWJetsToLNu_PSweights') #missing TTWJetsToLNu for v7
                                 + getSampleFilesNano(directory,'TTZjets')
                                 + getSampleFilesNano(directory,'TTZjets_ext1'),
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 5,
                 }

ttZbaseW = getBaseWnAOD(directory,'Fall2017_102X_nAODv7_Full2017v7',['TTZjets','TTZjets_ext1'])

addSampleWeight(samples,'ttV','TTZjets'     ,ttZbaseW+'/baseW')
addSampleWeight(samples,'ttV','TTZjets_ext1',ttZbaseW+'/baseW')

###### Zg

samples['Zg']  =  {     'name'   :    getSampleFilesNano(directory,'ZGToLLG'),
                        'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC + '*(Gen_ZGstar_mass <= 0)',
                        'FilesPerJob' : 3 ,
                  }

###### Zg*

samples['ZgS']  = {    'name'   :   getSampleFilesNano(directory,'ZGToLLG'),
                       'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+'*(Gen_ZGstar_mass > 0)',
                       'FilesPerJob' : 3 ,
                  }

#####  WZ

samples['WZ']  = {    'name':   getSampleFilesNano(directory,'WZTo3LNu_mllmin01')
                              + getSampleFilesNano(directory,'WZTo2L2Q'),
                       'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+'*(gstarHigh)' ,
                       'FilesPerJob' : 2 ,
                  }

##### ZZ

samples['ZZ']  = {  'name'   :   getSampleFilesNano(directory,'ZZTo2L2Nu')
                               + getSampleFilesNano(directory,'ZZTo2L2Q')
                               + getSampleFilesNano(directory,'ZZTo4L')
                               + getSampleFilesNano(directory,'ggZZ4m_ext')  
                               + getSampleFilesNano(directory,'ggZZ4m_ext1') 
                               + getSampleFilesNano(directory,'ggZZ2e2t_ext1')
                               + getSampleFilesNano(directory,'ggZZ2m2t_ext1')
                               + getSampleFilesNano(directory,'ggZZ2e2m_ext1'),
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC,
                    'FilesPerJob' : 5,
                 }

ggZZbaseW = getBaseWnAOD(directory,'Fall2017_102X_nAODv7_Full2017v7',['ggZZ4m_ext','ggZZ4m_ext1'])

addSampleWeight(samples,'ZZ','ZZTo4L',        "1.07") ## The non-ggZZ NNLO/NLO k-factor, cited from https://arxiv.org/abs/1405.2219v1
addSampleWeight(samples,'ZZ','ZZTo2L2Nu',     "1.07") 
addSampleWeight(samples,'ZZ','ZZTo2L2Q',      "1.07") 
addSampleWeight(samples,'ZZ','ggZZ2e2t_ext1', "1.68") ## The NLO/LO k-factor, cited from https://arxiv.org/abs/1509.06734v1
addSampleWeight(samples,'ZZ','ggZZ2m2t_ext1', "1.68") 
addSampleWeight(samples,'ZZ','ggZZ2e2m_ext1', "1.68")
addSampleWeight(samples,'ZZ','ggZZ4m_ext',    "1.68*"+ggZZbaseW+'/baseW') 
addSampleWeight(samples,'ZZ','ggZZ4m_ext1',   "1.68*"+ggZZbaseW+'/baseW') 

############ VVV ############

samples['VVV']  = {  'name'   :   getSampleFilesNano(directory,'ZZZ')
                                + getSampleFilesNano(directory,'WZZ')
                                + getSampleFilesNano(directory,'WWZ')
                                + getSampleFilesNano(directory,'WWW'),
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                  }

##########################################
################ SIGNALS #################
##########################################

signals = []
if os.path.exists('%s/src/PlotsConfigurations/Configurations/ZH3l/STXS_nanoAOD/v7/HTXS_stage1p2_categories.py'%os.getenv('CMSSW_BASE')) :
  handle = open('%s/src/PlotsConfigurations/Configurations/ZH3l/STXS_nanoAOD/v7/HTXS_stage1p2_categories.py'%os.getenv('CMSSW_BASE'),'r')
  exec(handle)
  handle.close()

############ ZH H->WW ############

samples['ZH_hww']  = {  'name': getSampleFilesNano(directory,'HZJ_HToWW_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC,
                        'FilesPerJob' : 3,
                        'subsamples' : {}
                    }

samples['ggZH_hww'] = {  'name': getSampleFilesNano(directory,'GluGluZH_HToWW_M125'),
                         'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC,
                         'FilesPerJob' : 3,
                         'subsamples' : {}
                     }

############ WH H->WW ############

samples['WH_hww']  = {  'name'   :   getSampleFilesNano(directory,'HWplusJ_HToWW_M125')
                                   + getSampleFilesNano(directory,'HWminusJ_HToWW_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                        'subsamples' : {}
                     }

############ ttH ############

samples['ttH_hww']  = { 'name'   :   getSampleFilesNano(directory,'ttHToNonbb_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                        'subsamples' : {}
                     }

############ H->TauTau ############

samples['ZH_htt'] = { 'name'   :   getSampleFilesNano(directory,'HZJ_HToTauTau_M125'),
                      'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                      'subsamples' : {}
                  }

samples['WH_htt'] = { 'name'   :   getSampleFilesNano(directory,'HWplusJ_HToTauTau_M125')
                                 + getSampleFilesNano(directory,'HWminusJ_HToTauTau_M125'),
                      'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                      'subsamples' : {}
                  }

for cat,num in HTXSStage1_2Categories.iteritems():
    if 'QQ2HQQ' in cat: #qqVH had
        samples['WH_hww']['subsamples'][cat]   = 'HTXS_stage1_2_cat_pTjet30GeV == '+str(num)
        samples['WH_htt']['subsamples'][cat]   = 'HTXS_stage1_2_cat_pTjet30GeV == '+str(num)
        samples['ZH_hww']['subsamples'][cat]   = 'HTXS_stage1_2_cat_pTjet30GeV == '+str(num)
        samples['ZH_htt']['subsamples'][cat]   = 'HTXS_stage1_2_cat_pTjet30GeV == '+str(num)
    elif 'QQ2HLNU' in cat: #qqWH lep
        samples['WH_hww']['subsamples'][cat]   = 'HTXS_stage1_2_cat_pTjet30GeV == '+str(num)
        samples['WH_htt']['subsamples'][cat]   = 'HTXS_stage1_2_cat_pTjet30GeV == '+str(num)
    elif 'QQ2HLL' in cat: #qqZH lep
        samples['ZH_hww']['subsamples'][cat]   = 'HTXS_stage1_2_cat_pTjet30GeV == '+str(num)
        samples['ZH_htt']['subsamples'][cat]   = 'HTXS_stage1_2_cat_pTjet30GeV == '+str(num)
    elif 'GG2HLL' in cat: #ggZH lep
        samples['ggZH_hww']['subsamples'][cat] = 'HTXS_stage1_2_cat_pTjet30GeV == '+str(num)
    elif 'TTH' in cat:
        samples['ttH_hww']['subsamples'][cat]  = 'HTXS_stage1_2_cat_pTjet30GeV == '+str(num)

###########################################
################## FAKE ###################
###########################################

samples['Fake']  = {   'name': [ ] ,
                       'weight' : fakeW+'*'+METFilter_DATA,
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 500 ,
                       'suppressNegativeNuisances' :['all'],
                     }

directory = treeBaseDir+'Run2017_102X_nAODv7_Full2017v7/DATAl1loose2017v7__l2loose__fakeW/'
for Run in DataRun :
  for DataSet in DataSets :
    FileTarget = getSampleFilesNano(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['Fake']['name'].append(iFile)
      samples['Fake']['weights'].append(DataTrig[DataSet])

samples['Fake']['subsamples'] = {
    'e': 'abs(ZH3l_pdgid_l) == 11',
    'm': 'abs(ZH3l_pdgid_l) == 13'
}

###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,
                       'weight' : METFilter_DATA+'*'+LepWPCut,
                       'weights' : [ ],
                       'isData': ['all'],
                       'FilesPerJob' : 500 ,
                  }

directory = treeBaseDir+'/Run2017_102X_nAODv7_Full2017v7/DATAl1loose2017v7__l2loose__l2tightOR2017v7/'
for Run in DataRun :
  for DataSet in DataSets :
    FileTarget = getSampleFilesNano(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet])
                
