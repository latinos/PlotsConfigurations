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

directory = treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/'

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
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut+'*PrefireWeight'
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
    ['B','Run2017B-Nano14Dec2018-v1'],
    ['C','Run2017C-Nano14Dec2018-v1'],
    ['D','Run2017D-Nano14Dec2018-v1'],
    ['E','Run2017E-Nano14Dec2018-v1'],
    ['F','Run2017F-Nano14Dec2018-v1']
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
######### Temp fix for ZGToLLG xsec #######
###########################################

zgXSscale = '0.448'

###########################################
#############  BACKGROUNDS  ###############
###########################################

############ DY ############

ptllDYW_NLO = '(((0.623108 + 0.0722934*gen_ptll - 0.00364918*gen_ptll*gen_ptll + 6.97227e-05*gen_ptll*gen_ptll*gen_ptll - 4.52903e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll<45)*(gen_ptll>0) + 1*(gen_ptll>=45))*(abs(gen_mll-90)<3) + (abs(gen_mll-90)>3))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'
Zgfilter    = '( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 && Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )' #Zg sample uses photon pt > 15, lepton pt > 15

samples['DY'] = {    'name'   :    getSampleFilesNano(directory,'DYJetsToLL_M-10to50-LO')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-10to50-LO_ext1')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50-LO')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50-LO_ext1')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-4to50_HT-100to200')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-4to50_HT-100to200_ext1')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-4to50_HT-200to400')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-4to50_HT-200to400_ext1')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-4to50_HT-400to600')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-4to50_HT-400to600_ext1')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-4to50_HT-600toInf')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-4to50_HT-600toInf_ext1')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-100to200')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-200to400')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-200to400_ext1')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-400to600_ext1')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-600to800')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-800to1200')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-1200to2500')
                                 + getSampleFilesNano(directory,'DYJetsToLL_M-50_HT-2500toInf'),
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+'*'+Zgfilter ,
                     'FilesPerJob' : 5,
                     'suppressNegative' :['all'],
                     'suppressNegativeNuisances' :['all'],
                 }

M10baseW      = getBaseWnAOD(directory,'Fall2017_102X_nAODv4_Full2017v5',['DYJetsToLL_M-10to50-LO',        'DYJetsToLL_M-10to50-LO_ext1'])
M50baseW      = getBaseWnAOD(directory,'Fall2017_102X_nAODv4_Full2017v5',['DYJetsToLL_M-50-LO',            'DYJetsToLL_M-50-LO_ext1'])
HT100M4baseW  = getBaseWnAOD(directory,'Fall2017_102X_nAODv4_Full2017v5',['DYJetsToLL_M-4to50_HT-100to200','DYJetsToLL_M-4to50_HT-100to200_ext1'])
HT200M4baseW  = getBaseWnAOD(directory,'Fall2017_102X_nAODv4_Full2017v5',['DYJetsToLL_M-4to50_HT-200to400','DYJetsToLL_M-4to50_HT-200to400_ext1'])
HT400M4baseW  = getBaseWnAOD(directory,'Fall2017_102X_nAODv4_Full2017v5',['DYJetsToLL_M-4to50_HT-400to600','DYJetsToLL_M-4to50_HT-400to600_ext1'])
HT600M4baseW  = getBaseWnAOD(directory,'Fall2017_102X_nAODv4_Full2017v5',['DYJetsToLL_M-4to50_HT-600toInf','DYJetsToLL_M-4to50_HT-600toInf_ext1'])
HT200M50baseW = getBaseWnAOD(directory,'Fall2017_102X_nAODv4_Full2017v5',['DYJetsToLL_M-50_HT-200to400',   'DYJetsToLL_M-50_HT-200to400_ext1'])

addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO'              ,ptllDYW_LO+'*(LHE_HT<100.0)*'+M10baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1'         ,ptllDYW_LO+'*(LHE_HT<100.0)*'+M10baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-50-LO'                  ,ptllDYW_LO+'*(LHE_HT<100.0)*'+M50baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-50-LO_ext1'             ,ptllDYW_LO+'*(LHE_HT<100.0)*'+M50baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-100to200'      ,ptllDYW_LO+'*'+HT100M4baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-100to200_ext1' ,ptllDYW_LO+'*'+HT100M4baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-200to400'      ,ptllDYW_LO+'*'+HT200M4baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-200to400_ext1' ,ptllDYW_LO+'*'+HT200M4baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-400to600'      ,ptllDYW_LO+'*'+HT400M4baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-400to600_ext1' ,ptllDYW_LO+'*'+HT400M4baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-600toInf'      ,ptllDYW_LO+'*'+HT600M4baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-600toInf_ext1' ,ptllDYW_LO+'*'+HT600M4baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200'         ,ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400'         ,ptllDYW_LO+'*'+HT200M50baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400_ext1'    ,ptllDYW_LO+'*'+HT200M50baseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext1'    ,ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800'         ,ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200'        ,ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500'       ,ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf'        ,ptllDYW_LO)


############ Top ############

Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )'

samples['top'] = {    'name'   :   getSampleFilesNano(directory,'TTTo2L2Nu') 
                                 + getSampleFilesNano(directory,'ST_s-channel') 
                                 + getSampleFilesNano(directory,'ST_t-channel_antitop') 
                                 + getSampleFilesNano(directory,'ST_t-channel_top') 
                                 + getSampleFilesNano(directory,'ST_tW_antitop') 
                                 + getSampleFilesNano(directory,'ST_tW_top'),
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 5,
                 }

addSampleWeight(samples,'top','TTTo2L2Nu',Top_pTrw)

samples['ttV'] = {    'name'   :   getSampleFilesNano(directory,'TTWJetsToLNu')
                                 + getSampleFilesNano(directory,'TTZjets')
                                 + getSampleFilesNano(directory,'TTZjets_ext1'),
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 5,
                 }

ttZbaseW = getBaseWnAOD(directory,'Fall2017_102X_nAODv4_Full2017v5',['TTZjets','TTZjets_ext1'])

addSampleWeight(samples,'ttV','TTZjets'     ,ttZbaseW+'/baseW')
addSampleWeight(samples,'ttV','TTZjets_ext1',ttZbaseW+'/baseW')


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

samples['ZZ']  = {  'name'   :   getSampleFilesNano(directory,'ZZTo2L2Nu')
                               + getSampleFilesNano(directory,'ZZTo2L2Q')
                               + getSampleFilesNano(directory,'ZZTo4L')
                               + getSampleFilesNano(directory,'ZZTo4L_ext1')
                               + getSampleFilesNano(directory,'ggZZ4m')
                               + getSampleFilesNano(directory,'ggZZ4m_ext1')
                               + getSampleFilesNano(directory,'ggZZ2e2t')
                               + getSampleFilesNano(directory,'ggZZ2e2t_ext1')
                               + getSampleFilesNano(directory,'ggZZ2m2t')
                               + getSampleFilesNano(directory,'ggZZ2m2t_ext1')
                               + getSampleFilesNano(directory,'ggZZ2e2m')
                               + getSampleFilesNano(directory,'ggZZ2e2m_ext1'),
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC,
                    'FilesPerJob' : 3,
                 }

ZZbaseW   = getBaseWnAOD(directory,'Fall2017_102X_nAODv4_Full2017v5',['ZZTo4L',  'ZZTo4L_ext1'])
gg4mbaseW   = getBaseWnAOD(directory,'Fall2017_102X_nAODv4_Full2017v5',['ggZZ4m',  'ggZZ4m_ext1'])
gg2e2tbaseW = getBaseWnAOD(directory,'Fall2017_102X_nAODv4_Full2017v5',['ggZZ2e2t','ggZZ2e2t_ext1'])
gg2e2mbaseW = getBaseWnAOD(directory,'Fall2017_102X_nAODv4_Full2017v5',['ggZZ2e2m','ggZZ2e2m_ext1'])
gg2m2tbaseW = getBaseWnAOD(directory,'Fall2017_102X_nAODv4_Full2017v5',['ggZZ2m2t','ggZZ2m2t_ext1'])

addSampleWeight(samples,'ZZ','ZZTo4L',        "1.17*"+ZZbaseW+"/baseW") ## The NNLO/NLO k-factor, cited from https://arxiv.org/abs/1405.2219v1
addSampleWeight(samples,'ZZ','ZZTo4L_ext1',   "1.17*"+ZZbaseW+"/baseW") 
addSampleWeight(samples,'ZZ','ZZTo2L2Nu',     "1.17") 
addSampleWeight(samples,'ZZ','ZZTo2L2Q',      "1.17") 
addSampleWeight(samples,'ZZ','ggZZ2e2t',      "1.68*"+gg2e2tbaseW+'/baseW') ## The NLO/LO k-factor, cited from https://arxiv.org/abs/1509.06734v1
addSampleWeight(samples,'ZZ','ggZZ2e2t_ext1', "1.68*"+gg2e2tbaseW+'/baseW')
addSampleWeight(samples,'ZZ','ggZZ2m2t',      "1.68*"+gg2m2tbaseW+'/baseW') 
addSampleWeight(samples,'ZZ','ggZZ2m2t_ext1', "1.68*"+gg2m2tbaseW+'/baseW') 
addSampleWeight(samples,'ZZ','ggZZ2e2m',      "1.68*"+gg2e2mbaseW+'/baseW')
addSampleWeight(samples,'ZZ','ggZZ2e2m_ext1', "1.68*"+gg2e2mbaseW+'/baseW')
addSampleWeight(samples,'ZZ','ggZZ4m',        "1.68*"+gg4mbaseW+'/baseW')
addSampleWeight(samples,'ZZ','ggZZ4m_ext1',   "1.68*"+gg4mbaseW+'/baseW')

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

directory = treeBaseDir+'Run2017_102X_nAODv4_Full2017v5/DATAl1loose2017v5__l2loose__fakeW/'
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

directory = treeBaseDir+'/Run2017_102X_nAODv4_Full2017v5/DATAl1loose2017v5__l2loose__l2tightOR2017v5/'
for Run in DataRun :
  for DataSet in DataSets :
    FileTarget = getSampleFilesNano(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet])
                
