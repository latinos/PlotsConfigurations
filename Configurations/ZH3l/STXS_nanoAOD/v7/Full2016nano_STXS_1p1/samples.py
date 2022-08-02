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

directory = treeBaseDir+'Summer16_102X_nAODv7_Full2016v7/MCl1loose2016v7__MCCorr2016v7__l2loose__l2tightOR2016v7/'

################################################
############ NUMBER OF LEPTONS #################
################################################

#Nlep='2'
Nlep='3'
#Nlep='4'

################################################
############### Lepton WP ######################
################################################

eleWP='mva_90p_Iso2016'
#eleWP='mva_90p_Iso2016_SS'
#eleWP='cut_WP_Tight80X'
#eleWP='cut_WP_Tight80X_SS'
muWP='cut_Tight80x'
eleWP_new = eleWP+'_tthmva_70'
muWP_new  = muWP+'_tthmva_80'

LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP_new+'__mu_'+muWP_new 
#LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
#LepWPweight     = 'ttHMVA_SF_3l[0]' #SF for new WPs, defined in aliases
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP_new+'__mu_'+muWP_new

################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut+'*PrefireWeight*Jet_PUIDSF'
PromptGenLepMatch   = 'PromptGenLepMatch'+Nlep+'l'

################################################
############## FAKE WEIGHTS ####################
################################################

#eleWP_new = eleWP+'_tthmva_70'
#muWP_new  = muWP+'_tthmva_80'
#eleWP_new = eleWP
#muWP_new  = muWP

if Nlep == '2' :
  fakeW = 'fakeW2l_ele_'+eleWP_new+'_mu_'+muWP_new
else:
  fakeW = 'fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_'+Nlep+'l'

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
    ['B','Run2016B-02Apr2020_ver1-v1'],
    ['B','Run2016B-02Apr2020_ver2-v1'],
    ['C','Run2016C-02Apr2020-v1'],
    ['D','Run2016D-02Apr2020-v1'],
    ['E','Run2016E-02Apr2020-v1'],
    ['F','Run2016F-02Apr2020-v1'],
    ['G','Run2016G-02Apr2020-v1'],
    ['H','Run2016H-02Apr2020-v1']
]


DataSets = ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']

DataTrig = {
            'MuonEG'         : ' Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu &&  Trigger_dblMu' ,
            'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu &&  Trigger_sngMu' ,
            'DoubleEG'       : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu &&  Trigger_dblEl' ,
            'SingleElectron' : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && !Trigger_dblEl &&  Trigger_sngEl' ,
           }

###########################################
#############  BACKGROUNDS  ###############
###########################################

############ Top ############

samples['ttV'] = {    'name'   :   getSampleFilesNano(directory,'TTWJetsToLNu_ext1')
                                 + getSampleFilesNano(directory,'TTWJetsToLNu_ext2')
                                 + getSampleFilesNano(directory,'TTZjets'),
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 10,
                 }

ttWbaseW = getBaseWnAOD(directory,'Summer16_102X_nAODv7_Full2016v7',['TTWJetsToLNu_ext1','TTWJetsToLNu_ext2'])

addSampleWeight(samples,'ttV','TTWJetsToLNu_ext1',ttWbaseW+'/baseW')
addSampleWeight(samples,'ttV','TTWJetsToLNu_ext2',ttWbaseW+'/baseW')


###### Zg

samples['Zg']  =  {     'name'   :    getSampleFilesNano(directory,'Zg'),
                        'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC + '*(Gen_ZGstar_mass <= 0)',
                        'FilesPerJob' : 10 ,
                  }

###### Zg*

samples['ZgS']  = {    'name'   :   getSampleFilesNano(directory,'Zg'),
                       'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+'*(Gen_ZGstar_mass > 0)' ,
                       'FilesPerJob' : 5 ,
                  }

#####  WZ

samples['WZ']  = {    'name':   getSampleFilesNano(directory,'WZTo3LNu_mllmin01')
                              + getSampleFilesNano(directory,'WZTo3LNu_mllmin01_ext1')
                              + getSampleFilesNano(directory,'WZTo2L2Q'),
                       'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+'*(gstarHigh)' ,
                       'FilesPerJob' : 5 ,
                  }

WZbaseW = getBaseWnAOD(directory,'Summer16_102X_nAODv7_Full2016v7',['WZTo3LNu_mllmin01','WZTo3LNu_mllmin01_ext1'])

addSampleWeight(samples,'WZ','WZTo3LNu_mllmin01',     WZbaseW+'/baseW')
addSampleWeight(samples,'WZ','WZTo3LNu_mllmin01_ext1',WZbaseW+'/baseW')

##### ZZ

samples['ZZ']  = {  'name'   :   getSampleFilesNano(directory,'ZZTo2L2Nu')
                               + getSampleFilesNano(directory,'ZZTo2L2Nu_ext1')
                               + getSampleFilesNano(directory,'ZZTo2L2Q')
                               + getSampleFilesNano(directory,'ZZTo4L')
                               + getSampleFilesNano(directory,'ZZTo4L_ext1')
                               + getSampleFilesNano(directory,'ggZZ4t')
                               + getSampleFilesNano(directory,'ggZZ4m')
                               + getSampleFilesNano(directory,'ggZZ4e')
                               + getSampleFilesNano(directory,'ggZZ2e2t')
                               + getSampleFilesNano(directory,'ggZZ2m2t')
                               + getSampleFilesNano(directory,'ggZZ2e2m'),
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC,
                    'FilesPerJob' : 4,
                 }

ZZ2LbaseW = getBaseWnAOD(directory,'Summer16_102X_nAODv7_Full2016v7',['ZZTo2L2Nu','ZZTo2L2Nu_ext1'])
ZZ4LbaseW = getBaseWnAOD(directory,'Summer16_102X_nAODv7_Full2016v7',['ZZTo4L','ZZTo4L_ext1'])

addSampleWeight(samples,'ZZ','ZZTo4L',        "1.07*"+ZZ4LbaseW+'/baseW') ## The non-ggZZ NNLO/NLO k-factor, cited from https://arxiv.org/abs/1405.2219v1
addSampleWeight(samples,'ZZ','ZZTo4L_ext1',   "1.07*"+ZZ4LbaseW+'/baseW') 
addSampleWeight(samples,'ZZ','ZZTo2L2Nu',     "1.07*"+ZZ2LbaseW+'/baseW') 
addSampleWeight(samples,'ZZ','ZZTo2L2Nu_ext1',"1.07*"+ZZ2LbaseW+'/baseW') 
addSampleWeight(samples,'ZZ','ZZTo2L2Q',      "1.07") 
addSampleWeight(samples,'ZZ','ggZZ2e2t',      "1.68") ## The NLO/LO k-factor, cited from https://arxiv.org/abs/1509.06734v1
addSampleWeight(samples,'ZZ','ggZZ2m2t',      "1.68") 
addSampleWeight(samples,'ZZ','ggZZ2e2m',      "1.68")
addSampleWeight(samples,'ZZ','ggZZ4e',        "1.68")
addSampleWeight(samples,'ZZ','ggZZ4m',        "1.68")
addSampleWeight(samples,'ZZ','ggZZ4t',        "1.68")

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

samples['ggZH_hww'] = {  'name': getSampleFilesNano(directory,'ggZH_HToWW_M125'),
                         'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+'*ggZHreweight',
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
                       'weight' : fakeW+'*'+METFilter_DATA+'*EMTFbug_veto',
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 500 ,
                       'suppressNegativeNuisances' :['all'],
                     }

#directory = treeBaseDir+'Run2016_102X_nAODv7_Full2016v7/DATAl1loose2016v7__l2loose__fakeW/'
directory = treeBaseDir+'Run2016_102X_nAODv7_Full2016v7/DATAl1loose2016v7__l2loose__fakeW/'
for Run in DataRun :
  for DataSet in DataSets :
#    tmpname = Run[1].replace('v1','v3') if ('Run2016E' in Run[1] and DataSet is 'MuonEG') else Run[1]
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
                       'weight' : METFilter_DATA+'*'+LepWPCut+'*EMTFbug_veto',
                       'weights' : [ ],
                       'isData': ['all'],
                       'FilesPerJob' : 500 ,
                  }

directory = treeBaseDir+'/Run2016_102X_nAODv7_Full2016v7/DATAl1loose2016v7__l2loose__l2tightOR2016v7/'
for Run in DataRun :
  for DataSet in DataSets :
#    tmpname = Run[1].replace('v1','v3') if ('Run2016E' in Run[1] and DataSet is 'MuonEG') else Run[1]
    FileTarget = getSampleFilesNano(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet])
                
