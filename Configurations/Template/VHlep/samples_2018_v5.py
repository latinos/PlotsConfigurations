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

directory = treeBaseDir+'Autumn18_102X_nAODv5_Full2018v5/MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5/'

################################################
############ NUMBER OF LEPTONS #################
################################################

#Nlep='2'
Nlep='3'
#Nlep='4'

################################################
############### Lepton WP ######################
################################################

eleWP='mvaFall17V1Iso_WP90'
#eleWP='mvaFall17V1Iso_WP90_SS'
#eleWP='mvaFall17V2Iso_WP90'
#eleWP='mvaFall17V2Iso_WP90_SS'
muWP ='cut_Tight_HWWW'

LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP

################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut
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

###########################################
######### Temp fix for ZGToLLG xsec #######
###########################################

zgXSscale = '0.448'

###########################################
#############  BACKGROUNDS  ###############
###########################################

############ DY ############

ptllDYW_NLO = '(0.87*(gen_ptll<10)+(0.379119+0.099744*gen_ptll-0.00487351*gen_ptll**2+9.19509e-05*gen_ptll**3-6.0212e-07*gen_ptll**4)*(gen_ptll>=10 && gen_ptll<45)+(9.12137e-01+1.11957e-04*gen_ptll-3.15325e-06*gen_ptll**2-4.29708e-09*gen_ptll**3+3.35791e-11*gen_ptll**4)*(gen_ptll>=45 && gen_ptll<200) + 1*(gen_ptll>200))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'
Zgfilter    = '( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 && Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )' #Zg sample uses photon pt > 15, lepton pt > 15

samples['DY'] = {    'name'   :    getSampleFilesNano(directory,'DYJetsToLL_M-10to50-LO')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-10to50-LO_ext1')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50-LO')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-4to50_HT-200to400')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-4to50_HT-400to600')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-4to50_HT-600toInf')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-70to100')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-100to200')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-200to400')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-400to600')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-600to800')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-800to1200')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-1200to2500')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-2500toInf'),
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC +'*'+Zgfilter,
                     'FilesPerJob' : 5,
                     'suppressNegative' :['all'],
                     'suppressNegativeNuisances' :['all'],
                 }

M10baseW      = getBaseWnAOD(directory,'Autumn18_102X_nAODv5_Full2018v5',['DYJetsToLL_M-10to50-LO',        'DYJetsToLL_M-10to50-LO_ext1'])

addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO'        ,ptllDYW_LO+'*(LHE_HT<200.0)*'+M10baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1'   ,ptllDYW_LO+'*(LHE_HT<200.0)*'+M10baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-50-LO'            ,ptllDYW_LO+'*(LHE_HT<70.0)')
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


############ Top ############

Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )'

samples['top'] = {    'name'   :   getSampleFilesNano(directory,'TTTo2L2Nu') 
                                 + getSampleFilesNano(directory,'ST_s-channel_ext1') 
                                 + getSampleFilesNano(directory,'ST_t-channel_antitop') 
                                 + getSampleFilesNano(directory,'ST_t-channel_top') 
                                 + getSampleFilesNano(directory,'ST_tW_antitop_ext1') 
                                 + getSampleFilesNano(directory,'ST_tW_top_ext1'),
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 5,
                 }

addSampleWeight(samples,'top','TTTo2L2Nu',Top_pTrw)

samples['ttV'] = {    'name'   :   getSampleFilesNano(directory,'TTWJetsToLNu')
                                 + getSampleFilesNano(directory,'TTZjets'),
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 5,
                 }


############ WW ############

samples['WW'] = {    'name'   :   getSampleFilesNano(directory,'WWTo2L2Nu') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+'*nllW' ,
                 }


samples['WWewk'] = {   'name'  : getSampleFilesNano(directory, 'WpWmJJ_EWK_QCD_noTop_noHiggs')
                               + getSampleFilesNano(directory, 'WpWpJJ_EWK_QCD'),
                       'weight': XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+ '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)', #filter tops and Higgs
                   }

samples['ggWW']  = {  'name'   :   getSampleFilesNano(directory,'GluGluToWWToENEN')
                                 + getSampleFilesNano(directory,'GluGluToWWToENMN') 
                                 + getSampleFilesNano(directory,'GluGluToWWToENTN')
                                 + getSampleFilesNano(directory,'GluGluToWWToMNEN')
                                 + getSampleFilesNano(directory,'GluGluToWWToMNMN')
                                 + getSampleFilesNano(directory,'GluGluToWWToMNTN')
                                 + getSampleFilesNano(directory,'GluGluToWWToTNEN')
                                 + getSampleFilesNano(directory,'GluGluToWWToTNMN')
                                 + getSampleFilesNano(directory,'GluGluToWWToTNTN'),
                      'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                   }

##### Wg

samples['Wg']  =  {     'name'   :   getSampleFilesNano(directory,'Wg_MADGRAPHMLM'),
                        'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC + '*(Gen_ZGstar_mass <= 0)',
                        'FilesPerJob' : 5 ,
                  }

###### Zg

samples['Zg']  =  {     'name'   :    getSampleFilesNano(directory,'ZGToLLG'),
                        'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC + '*(Gen_ZGstar_mass <= 0)*'+zgXSscale,
                        'FilesPerJob' : 5 ,
                  }

###### Wg*

samples['WgS']  =  {    'name'   :   getSampleFilesNano(directory,'Wg_MADGRAPHMLM'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC + '*(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)',
                        'FilesPerJob' : 5 ,
                  }

###### Zg*

samples['ZgS']  = {    'name'   :   getSampleFilesNano(directory,'ZGToLLG'),
                       'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+'*(Gen_ZGstar_mass > 0)*'+zgXSscale ,
                       'FilesPerJob' : 2 ,
                  }

#####  WZ

samples['WZ']  = {    'name':   getSampleFilesNano(directory,'WZTo3LNu_mllmin01') ,
                       'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+'*(Gen_ZGstar_mass > 0.1)' ,
                       'FilesPerJob' : 2 ,
                  }

##### WZhad

samples['WZhad']  = {  'name'   :   getSampleFilesNano(directory,'WZTo2L2Q'),
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC,                              
                    'FilesPerJob' : 3,
                 } 

##### ZZ

samples['ZZ']  = {  'name'   :   getSampleFilesNano(directory,'ZZTo2L2Nu_ext1')
                               + getSampleFilesNano(directory,'ZZTo2L2Nu_ext2')
                               + getSampleFilesNano(directory,'ZZTo2L2Q')
                               + getSampleFilesNano(directory,'ZZTo4L_ext1')
                               + getSampleFilesNano(directory,'ZZTo4L_ext2')
                               + getSampleFilesNano(directory,'ggZZ4m')
                               + getSampleFilesNano(directory,'ggZZ4t')
                               + getSampleFilesNano(directory,'ggZZ2e2t')
                               + getSampleFilesNano(directory,'ggZZ2m2t')
                               + getSampleFilesNano(directory,'ggZZ2e2m'),
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC,
                    'FilesPerJob' : 3,
                 }

ZZ2LbaseW   = getBaseWnAOD(directory,'Autumn18_102X_nAODv5_Full2018v5',['ZZTo2L2Nu_ext1','ZZTo2L2Nu_ext2'])
ZZ4LbaseW   = getBaseWnAOD(directory,'Autumn18_102X_nAODv5_Full2018v5',['ZZTo4L_ext1',   'ZZTo4L_ext2'])

addSampleWeight(samples,'ZZ','ZZTo4L_ext1',   "1.17*"+ZZ4LbaseW+"/baseW") ## The NNLO/NLO k-factor, cited from https://arxiv.org/abs/1405.2219v1
addSampleWeight(samples,'ZZ','ZZTo4L_ext2',   "1.17*"+ZZ4LbaseW+"/baseW") 
addSampleWeight(samples,'ZZ','ZZTo2L2Nu_ext1',"1.17*"+ZZ2LbaseW+"/baseW") 
addSampleWeight(samples,'ZZ','ZZTo2L2Nu_ext2',"1.17*"+ZZ2LbaseW+"/baseW") 
addSampleWeight(samples,'ZZ','ZZTo2L2Q',      "1.17") 
addSampleWeight(samples,'ZZ','ggZZ2e2t',      "1.68") ## The NLO/LO k-factor, cited from https://arxiv.org/abs/1509.06734v1
addSampleWeight(samples,'ZZ','ggZZ2m2t',      "1.68")
addSampleWeight(samples,'ZZ','ggZZ2e2m',      "1.68")
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

############ ggH H->WW ############
#FIXME Add reweighting to MiNLO NNLOPS or use NNLOPS sample when available
samples['ggH_hww']  = { 'name'   :   getSampleFilesNano(directory,'GluGluHToWWTo2L2NuPowheg_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     }

############ VBF H->WW ############
samples['qqH_hww']  = { 'name'   :   getSampleFilesNano(directory,'VBFHToWWTo2L2Nu_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     }

############ ZH H->WW ############

samples['ZH_hww']  = {  'name'   :   getSampleFilesNano(directory,'HZJ_HToWW_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     }

samples['ggZH_hww']  = {  'name'   :   getSampleFilesNano(directory,'GluGluZH_HToWW_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
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
# Not available for Latinos 2016 v5

############ H->TauTau ############

splitHtt=False
if not splitHtt:

  samples['H_htt'] = {  'name'   :   getSampleFilesNano(directory,'GluGluHToTauTau_M125')
                                   + getSampleFilesNano(directory,'VBFHToTauTau_M125')
                                   + getSampleFilesNano(directory,'HZJ_HToTauTau_M125')
                                   + getSampleFilesNano(directory,'HWplusJ_HToTauTau_M125')
                                   + getSampleFilesNano(directory,'HWminusJ_HToTauTau_M125'),
                         'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                     }
else:
  
  samples['ggH_htt']  = {  'name'   : getSampleFilesNano(directory,'GluGluHToTauTau_M125'),
                           'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        } 

  samples['qqH_htt']  = {  'name'   : getSampleFilesNano(directory,'VBFHToTauTau_M125'),
                           'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }

  samples['ZH_htt']  = {  'name'   : getSampleFilesNano(directory,'HZJ_HToTauTau_M125'),
                           'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }

  samples['WH_htt']  = {  'name'   :  getSampleFilesNano(directory,'HWplusJ_HToTauTau_M125')
                                    + getSampleFilesNano(directory,'HWminusJ_HToTauTau_M125'),
                           'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }


###########################################
################## FAKE ###################
###########################################

samples['Fake']  = {   'name': [ ] ,
                       'weight' : fakeW+'*'+METFilter_DATA,
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 15 ,
                     }

directory = treeBaseDir+'Run2018_102X_nAODv5_Full2018v5/DATAl1loose2018v5__l2loose__fakeW/'
for Run in DataRun :
  for DataSet in DataSets :
    FileTarget = getSampleFilesNano(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['Fake']['name'].append(iFile)
      samples['Fake']['weights'].append(DataTrig[DataSet])

#TODO Each channel should specify
#samples['Fake']['subsamples'] = {
#    'e': 'abs(ZH3l_pdgid_l) == 11',
#    'm': 'abs(ZH3l_pdgid_l) == 13'
#}

###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,
                       'weight' : METFilter_DATA+'*'+LepWPCut,
                       'weights' : [ ],
                       'isData': ['all'],
                       'FilesPerJob' : 10 ,
                  }

directory = treeBaseDir+'/Run2018_102X_nAODv5_Full2018v5/DATAl1loose2018v5__l2loose__l2tightOR2018v5/'
for Run in DataRun :
  for DataSet in DataSets :
    FileTarget = getSampleFilesNano(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet])
                
