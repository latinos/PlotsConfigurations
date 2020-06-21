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

directory = treeBaseDir+'Summer16_102X_nAODv5_Full2016v6/MCl1loose2016v6__MCCorr2016v6__l2loose__l2tightOR2016v6'

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

LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP+'*LepWPCutNew' #Cut for new WPs, defined in aliases
#LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'ttHMVA_SF_3l[0]' #SF for new WPs, defined in aliases
#LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP

################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut+'*PrefireWeight*PUJetIdSF'
PromptGenLepMatch   = 'PromptGenLepMatch'+Nlep+'l'

################################################
############## FAKE WEIGHTS ####################
################################################

eleWP_new = eleWP+'_tthmva_70'
muWP_new  = muWP+'_tthmva_80'
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
            ['B','Run2016B-Nano1June2019_ver2-v1'] ,
            ['C','Run2016C-Nano1June2019-v1'] ,
            ['D','Run2016D-Nano1June2019-v1'] ,
            ['E','Run2016E-Nano1June2019-v1'] ,
            ['F','Run2016F-Nano1June2019-v1'] ,
            ['G','Run2016G-Nano1June2019-v1'] ,
            ['H','Run2016H-Nano1June2019-v1'] ,
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

############ DY ############

ptllDYW_NLO = '(gen_ptll>=0.0)*((0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140))'
ptllDYW_LO  = '(gen_ptll>=0.0)*((8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140))'
Zgfilter    = '( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>10 && abs(PhotonGen_eta)<2.6) > 0) )'

samples['DY'] = {    'name'   :    getSampleFilesNano(directory,'DYJetsToLL_M-10to50-LO')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50-LO_ext1')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50-LO_ext2')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-5to50_HT-70to100')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-5to50_HT-100to200')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-5to50_HT-100to200_ext1')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-5to50_HT-200to400')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-5to50_HT-200to400_ext1')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-5to50_HT-400to600')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-5to50_HT-400to600_ext1')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-5to50_HT-600toinf')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-5to50_HT-600toinf_ext1')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-70to100')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-100to200')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-100to200_ext1')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-200to400')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-200to400_ext1')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-400to600')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-400to600_ext1')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-600to800')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-800to1200')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-1200to2500')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-2500toinf'),
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+'*'+Zgfilter ,
                     'FilesPerJob' : 10,
                     'suppressNegative' :['all'],
                     'suppressNegativeNuisances' :['all'],
                 }

M50baseW      = getBaseWnAOD(directory,'Summer16_102X_nAODv5_Full2016v6',['DYJetsToLL_M-50-LO_ext1',       'DYJetsToLL_M-50-LO_ext2'])
HT100M5baseW  = getBaseWnAOD(directory,'Summer16_102X_nAODv5_Full2016v6',['DYJetsToLL_M-5to50_HT-100to200','DYJetsToLL_M-5to50_HT-100to200_ext1'])
HT200M5baseW  = getBaseWnAOD(directory,'Summer16_102X_nAODv5_Full2016v6',['DYJetsToLL_M-5to50_HT-200to400','DYJetsToLL_M-5to50_HT-200to400_ext1'])
HT400M5baseW  = getBaseWnAOD(directory,'Summer16_102X_nAODv5_Full2016v6',['DYJetsToLL_M-5to50_HT-400to600','DYJetsToLL_M-5to50_HT-400to600_ext1'])
HT600M5baseW  = getBaseWnAOD(directory,'Summer16_102X_nAODv5_Full2016v6',['DYJetsToLL_M-5to50_HT-600toinf','DYJetsToLL_M-5to50_HT-600toinf_ext1'])
HT100M50baseW = getBaseWnAOD(directory,'Summer16_102X_nAODv5_Full2016v6',['DYJetsToLL_M-50_HT-100to200',   'DYJetsToLL_M-50_HT-100to200_ext1'])
HT200M50baseW = getBaseWnAOD(directory,'Summer16_102X_nAODv5_Full2016v6',['DYJetsToLL_M-50_HT-200to400',   'DYJetsToLL_M-50_HT-200to400_ext1'])
HT400M50baseW = getBaseWnAOD(directory,'Summer16_102X_nAODv5_Full2016v6',['DYJetsToLL_M-50_HT-400to600',   'DYJetsToLL_M-50_HT-400to600_ext1'])

addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO'              ,ptllDYW_LO+'*(LHE_HT<70.0)')
addSampleWeight(samples,'DY','DYJetsToLL_M-50-LO_ext1'             ,ptllDYW_LO+'*(LHE_HT<70.0)*'+M50baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-50-LO_ext2'             ,ptllDYW_LO+'*(LHE_HT<70.0)*'+M50baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-70to100'       ,ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-100to200'      ,ptllDYW_LO+'*'+HT100M5baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-100to200_ext1' ,ptllDYW_LO+'*'+HT100M5baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400'      ,ptllDYW_LO+'*'+HT200M5baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400_ext1' ,ptllDYW_LO+'*'+HT200M5baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600'      ,ptllDYW_LO+'*'+HT400M5baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600_ext1' ,ptllDYW_LO+'*'+HT400M5baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toinf'      ,ptllDYW_LO+'*'+HT600M5baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toinf_ext1' ,ptllDYW_LO+'*'+HT600M5baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100'          ,ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200'         ,ptllDYW_LO+'*'+HT100M50baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200_ext1'    ,ptllDYW_LO+'*'+HT100M50baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400'         ,ptllDYW_LO+'*'+HT200M50baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400_ext1'    ,ptllDYW_LO+'*'+HT200M50baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600'         ,ptllDYW_LO+'*'+HT400M50baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext1'    ,ptllDYW_LO+'*'+HT400M50baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800'         ,ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200'        ,ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500'       ,ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toinf'        ,ptllDYW_LO)


############ Top ############

samples['top'] = {    'name'   :   getSampleFilesNano(directory,'TTTo2L2Nu') 
                                 + getSampleFilesNano(directory,'ST_s-channel') 
                                 + getSampleFilesNano(directory,'ST_t-channel_antitop') 
                                 + getSampleFilesNano(directory,'ST_t-channel_top') 
                                 + getSampleFilesNano(directory,'ST_tW_antitop') 
                                 + getSampleFilesNano(directory,'ST_tW_top'),
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 5,
                 }

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

samples['ttV'] = {    'name'   :   getSampleFilesNano(directory,'TTWJetsToLNu_ext1')
                                 + getSampleFilesNano(directory,'TTWJetsToLNu_ext2')
                                 + getSampleFilesNano(directory,'TTZjets'),
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 10,
                 }

ttWbaseW = getBaseWnAOD(directory,'Summer16_102X_nAODv5_Full2016v6',['TTWJetsToLNu_ext1','TTWJetsToLNu_ext2'])

addSampleWeight(samples,'ttV','TTWJetsToLNu_ext1',ttWbaseW+'/baseW')
addSampleWeight(samples,'ttV','TTWJetsToLNu_ext2',ttWbaseW+'/baseW')


############ WW ############

samples['WW'] = {    'name'   :   getSampleFilesNano(directory,'WWTo2L2Nu'),
                      'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+'*nllW',
                   }

samples['WWewk'] = { 'name'   :   getSampleFilesNano(directory,'WpWmJJ_EWK_QCD_noTop_noHiggs')
                                + getSampleFilesNano(directory,'WpWpJJ_EWK_QCD'),
                      'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+'*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)*(lhe_mW1[0] > 60. && lhe_mW1[0] < 100. && lhe_mW2[0] > 60. && lhe_mW2[0] < 100.)',
                   }

samples['ggWW'] = {  'name'   :   getSampleFilesNano(directory,'GluGluWWTo2L2Nu_MCFM'),      
                      'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+'*1.53/1.4',
                   }

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

WZbaseW = getBaseWnAOD(directory,'Summer16_102X_nAODv5_Full2016v6',['WZTo3LNu_mllmin01','WZTo3LNu_mllmin01_ext1'])

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
                    'FilesPerJob' : 2,
                 }

ZZ2LbaseW = getBaseWnAOD(directory,'Summer16_102X_nAODv5_Full2016v6',['ZZTo2L2Nu','ZZTo2L2Nu_ext1'])
ZZ4LbaseW = getBaseWnAOD(directory,'Summer16_102X_nAODv5_Full2016v6',['ZZTo4L','ZZTo4L_ext1'])

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

############ ZH H->WW ############

#samples['ZH_hww']  = {  'name'   :   getSampleFilesNano(directory,'HZJ_HToWW_M125'),
#                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
#                     }

#samples['ggZH_hww']  = {  'name'   :   getSampleFilesNano(directory,'ggZH_HToWW_M125'),
#                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
#                     }

samples['ZH_hww']  = {  'name': getSampleFilesNano(directory,'HZJ_HToWW_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC,
                        'FilesPerJob' : 3,
                        'subsamples' : { 'PTV_LT150' : 'HTXS_stage1_1_cat_pTjet30GeV==401 || HTXS_stage1_1_cat_pTjet30GeV==402',
                                         'PTV_GT150' : 'HTXS_stage1_1_cat_pTjet30GeV==403 || HTXS_stage1_1_cat_pTjet30GeV==404 || HTXS_stage1_1_cat_pTjet30GeV==405',
                                         'FWDH'      : 'HTXS_stage1_1_cat_pTjet30GeV==400'
                                       }
                    }

samples['ggZH_hww'] = {  'name': getSampleFilesNano(directory,'ggZH_HToWW_M125'),
                         'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+'*ggZHreweight',
                         'FilesPerJob' : 3,
                        'subsamples' : { 'PTV_LT150' : 'HTXS_stage1_1_cat_pTjet30GeV==501 || HTXS_stage1_1_cat_pTjet30GeV==502',
                                         'PTV_GT150' : 'HTXS_stage1_1_cat_pTjet30GeV==503 || HTXS_stage1_1_cat_pTjet30GeV==504 || HTXS_stage1_1_cat_pTjet30GeV==505',
                                         'FWDH'      : 'HTXS_stage1_1_cat_pTjet30GeV==500'
                                       }
                     }

############ WH H->WW ############

samples['WH_hww']  = {  'name'   :   getSampleFilesNano(directory,'HWplusJ_HToWW_M125')
                                   + getSampleFilesNano(directory,'HWminusJ_HToWW_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     }

############ ttH ############

samples['ttH_hww']  = { 'name'   :   getSampleFilesNano(directory,'ttHToNonbb_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     }

############ bbH ############
# Not available for Latinos 2016 v6

############ H->TauTau ############

samples['ZH_htt'] = { 'name'   :   getSampleFilesNano(directory,'HZJ_HToTauTau_M125'),
                      'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                  }

samples['WH_htt'] = { 'name'   :   getSampleFilesNano(directory,'HWplusJ_HToTauTau_M125')
                                 + getSampleFilesNano(directory,'HWminusJ_HToTauTau_M125'),
                      'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                  }

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

#directory = treeBaseDir+'Run2016_102X_nAODv5_Full2016v6/DATAl1loose2016v6__l2loose__fakeW/'
directory = treeBaseDir+'Run2016_102X_nAODv5_Full2016v6_ForNewWPs/DATAl1loose2016v6__l2loose__fakeW'
for Run in DataRun :
  for DataSet in DataSets :
    tmpname = Run[1].replace('v1','v3') if ('Run2016E' in Run[1] and DataSet is 'MuonEG') else Run[1]
    FileTarget = getSampleFilesNano(directory,DataSet+'_'+tmpname,True)
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

directory = treeBaseDir+'Run2016_102X_nAODv5_Full2016v6/DATAl1loose2016v6__l2loose__l2tightOR2016v6'
for Run in DataRun :
  for DataSet in DataSets :
    tmpname = Run[1].replace('v1','v3') if ('Run2016E' in Run[1] and DataSet is 'MuonEG') else Run[1]
    FileTarget = getSampleFilesNano(directory,DataSet+'_'+tmpname,True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet])
                
