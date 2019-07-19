import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

samples = {}

################################################
################# SKIMS ########################
################################################

skim=''
#skim='__wwSel'

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

directory = treeBaseDir+'Summer16_102X_nAODv4_Full2016v4/MCl1loose2016__MCCorr2016__l2loose__l2tightOR2016'+skim

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='2'
#Nlep='3'
#Nlep='4'

################################################
############### Lepton WP ######################
################################################

eleWP='mva_90p_Iso2016'
muWP='cut_Tight80x'

LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP


################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut+'*PrefireWeight'
GenLepMatch   = 'GenLepMatch'+Nlep+'l'


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

#FIXME b-tagging to be optimized
# Definitions in aliases.py

SFweight += '*btagSF'

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
            ['B','Run2016B-Nano14Dec2018_ver2-v1'] ,
            ['C','Run2016C-Nano14Dec2018-v1'] ,
            ['D','Run2016D-Nano14Dec2018-v1'] ,
            ['E','Run2016E-Nano14Dec2018-v1'] ,
            ['F','Run2016F-Nano14Dec2018-v1'] ,
            ['G','Run2016G-Nano14Dec2018-v1'] ,
            ['H','Run2016H-Nano14Dec2018-v1'] ,
          ]


DataSets = ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']

DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
            'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
            'DoubleEG'       : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && Trigger_dblEl' ,
            'SingleElectron' : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && !Trigger_dblEl && Trigger_sngEl' ,
           }


###########################################
#############  BACKGROUNDS  ###############
###########################################


###### DY #######


### These weights were evaluated on ICHEP16 MC -> Update ?
ptllDYW_NLO = '(0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140)'
ptllDYW_LO  = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'


samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToTT_MuEle_M-50',False,'nanoLatino_')
#                                + getSampleFiles(directory,'DYJetsToTT_MuEle_M-50_ext1',False,'nanoLatino_')
                                + getSampleFiles(directory,'DYJetsToLL_M-10to50',False,'nanoLatino_'),  
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                         'FilesPerJob' : 1,
                    }
addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50',ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)


###### Top #######
Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )'

samples['top'] = {   'name'     :   getSampleFiles(directory,'TTTo2L2Nu',False,'nanoLatino_') 
                                  + getSampleFiles(directory,'ST_tW_antitop',False,'nanoLatino_')
                                  + getSampleFiles(directory,'ST_tW_top',False,'nanoLatino_')  
                                  + getSampleFiles(directory,'ST_t-channel_antitop',False,'nanoLatino_')
                                  + getSampleFiles(directory,'ST_t-channel_top',False,'nanoLatino_')
                                  + getSampleFiles(directory,'ST_s-channel',False,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                      'FilesPerJob' : 1 ,
                  }
                  
addSampleWeight(samples,'top','TTTo2L2Nu',Top_pTrw)

###### WW ########
#FIXME Add nllW weight
             
samples['WW']  = {    'name'   : getSampleFiles(directory,'WWTo2L2Nu',False,'nanoLatino_') ,
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,# + '*nllW' ,  
                 }


#samples['WWewk'] = {   'name'  : getSampleFiles(directory, 'WpWmJJ_EWK',False,'nanoLatino_'),
#                       'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*(Sum$(abs(GenPart_pdgId)==6)==0)' #filter tops
#                   }


samples['ggWW']  = {  'name'   : getSampleFiles(directory,'GluGluWWTo2L2Nu_MCFM',False,'nanoLatino_'),      
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                      'isData': ['0'],                            
                   }

## during tree production: 1.4 k-factor has been applied to both samples
## ggWW sample: k = 1.4 +/- 15%
## ggWW interference: k = 1.87 +/- 25%

######## Vg ########
#FIXME: k-factor?
samples['Vg']  =  {     'name'   :   getSampleFiles(directory,'Wg_MADGRAPHMLM',False,'nanoLatino_')
                                   + getSampleFiles(directory,'Zg',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC + '* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                        'FilesPerJob' : 5 ,
                  }

######## VgS ########
#FIXME: k-factor?
samples['VgS']  = {    'name':   getSampleFiles(directory,'Wg_MADGRAPHMLM',False,'nanoLatino_')
                               + getSampleFiles(directory,'Zg',False,'nanoLatino_')
                               + getSampleFiles(directory,'WZTo3LNu_mllmin01',False,'nanoLatino_') ,
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                       'FilesPerJob' : 2 ,  
                  }
addSampleWeight(samples,'VgS','Wg_MADGRAPHMLM',    '(Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples,'VgS','Zg',                '(Gen_ZGstar_mass >0)')
addSampleWeight(samples,'VgS','WZTo3LNu_mllmin01', '(Gen_ZGstar_mass>=0.1 || Gen_ZGstar_mass<0)')


######### VZ #########

samples['VZ']  = {    'name':  getSampleFiles(directory,'ZZTo2L2Nu',False,'nanoLatino_')
                             + getSampleFiles(directory,'ZZTo2L2Q',False,'nanoLatino_')
                             + getSampleFiles(directory,'WZTo2L2Q',False,'nanoLatino_')
                             + getSampleFiles(directory,'ZZTo4L',False,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*1.11' ,  
                      'FilesPerJob' : 2 ,
                  }

### 1.11 normalisation was measured in 3-lepton

########## VVV #########

samples['VVV'] = {    'name':   getSampleFiles(directory,'ZZZ',False,'nanoLatino_')
                              + getSampleFiles(directory,'WZZ',False,'nanoLatino_')
                              + getSampleFiles(directory,'WWZ',False,'nanoLatino_')
                              + getSampleFiles(directory,'WWW',False,'nanoLatino_')
                           #  WWG: Might be added to WW by PYTHIA in tuning step, super small x-section anyway -> skipped for now 
                           #  + getSampleFiles(directory,'WWG')
                              ,    
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                  }

###########################################
#############   SIGNALS  ##################
###########################################


#### ggH -> WW
#FIXME: weight2MINLO missing
samples['ggH_hww']  = {  'name'  : getSampleFiles(directory,'GluGluHToWWTo2L2NuPowheg_M125',False,'nanoLatino_') ,  
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,#+'*weight2MINLO' ,  
                      }

##### ggH -> WW NNLOPS
#
#samples['ggH_hww']  = {  'name'  : getSampleFiles(directory,'GluGluHToWWTo2L2Nu_M125_minloHJ_NNLOPS') ,  
#                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
#                      }

#### VBF H->WW

samples['qqH_hww']  = {   'name' : getSampleFiles(directory,'VBFHToWWTo2L2Nu_M125',False,'nanoLatino_') ,
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                      }

### ZH ; H->WW

samples['ZH_hww']   = {   'name' :  getSampleFiles(directory,'HZJ_HToWW_M125',False,'nanoLatino_') ,
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                      }

samples['ggZH_hww'] = {   'name' : getSampleFiles(directory,'ggZH_HToWW_M125',False,'nanoLatino_') ,
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                      }

#### WH ; H->WW

samples['WH_hww']   = {   'name' :   getSampleFiles(directory,'HWminusJ_HToWW_M125',False,'nanoLatino_')
                                   + getSampleFiles(directory,'HWplusJ_HToWW_M125',False,'nanoLatino_')
                                   , 
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                      }

#### bbH ; H->WW 

#samples['bbH_hww']  = {  'name' :   getSampleFiles(directory,'bbHToWWTo2L2Nu_M125_yb2',False,'nanoLatino_') 
#                                  + getSampleFiles(directory,'bbHToWWTo2L2Nu_M125_ybyt',False,'nanoLatino_')
#                                  ,
#                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
#                      }

#### ttH ; H->WW 

#samples['ttH_hww']  = {  'name' :   getSampleFiles(directory,'ttHToNonbb_M125',False,'nanoLatino_'), 
#                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
#                         'suppressNegativeNuisances' :['all'], 
#                      }

#### H -> TauTau

splitHtt=False
if not splitHtt:

  samples['H_htt']    = {   'name' :   getSampleFiles(directory,'GluGluHToTauTau_M125',False,'nanoLatino_')
                                     + getSampleFiles(directory,'VBFHToTauTau_M125',False,'nanoLatino_')
                                     + getSampleFiles(directory,'HZJ_HToTauTau_M125',False,'nanoLatino_')
                                     + getSampleFiles(directory,'HWplusJ_HToTauTau_M125',False,'nanoLatino_')
                                     + getSampleFiles(directory,'HWminusJ_HToTauTau_M125',False,'nanoLatino_') ,  
                           'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }

else:

  samples['ggH_htt']  = { 'name' :   getSampleFiles(directory,'GluGluHToTauTau_M125',False,'nanoLatino_') ,
                           'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }

  samples['qqH_htt']  = { 'name' :   getSampleFiles(directory,'VBFHToTauTau_M125',False,'nanoLatino_') ,
                           'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }


  samples['ZH_htt']  = { 'name' :   getSampleFiles(directory,'HZJ_HToTauTau_M125',False,'nanoLatino_') ,
                           'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }

  samples['WH_htt']  = { 'name' :   getSampleFiles(directory,'HWplusJ_HToTauTau_M125',False,'nanoLatino_')
                                  + getSampleFiles(directory,'HWminusJ_HToTauTau_M125',False,'nanoLatino_'),
                           'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }



###########################################
################## FAKE ###################
###########################################
##samples['Fakes']  = {  'name'   :   getSampleFiles(directory,'WJetsToLNu-LO',False,'nanoLatino_')
##                                  + getSampleFiles(directory,'TTToSemiLeptonic',False,'nanoLatino_'),
##                       'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC,
##                       'FilesPerJob': 3,
##                    }

samples['Fake_em']  = {'name': [ ] ,
                       'weight' : fakeW+'*'+METFilter_DATA+'*(abs(Lepton_pdgId[0])==11 && abs(Lepton_pdgId[1])==13)',              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 10 ,
                     }

samples['Fake_me']  = {'name': [ ] ,
                       'weight' : fakeW+'*'+METFilter_DATA+'*(abs(Lepton_pdgId[0])==13 && abs(Lepton_pdgId[1])==11)',              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 10 ,
                     }

for Run in DataRun :
  directory = treeBaseDir+'Run2016_102X_nAODv4_Full2016v4/DATAl1loose2016__l2loose__fakeW/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
    for iFile in FileTarget:
      samples['Fake_em']['name'].append(iFile)
      samples['Fake_em']['weights'].append(DataTrig[DataSet])
      samples['Fake_me']['name'].append(iFile)
      samples['Fake_me']['weights'].append(DataTrig[DataSet])

###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,     
                       'weight' : METFilter_DATA+'*'+LepWPCut,
                       'weights' : [ ],
                       'isData': ['all'],                            
                       'FilesPerJob' : 10 ,
                  }

for Run in DataRun :
  directory = treeBaseDir+'/Run2016_102X_nAODv4_Full2016v4/DATAl1loose2016__l2loose__l2tightOR2016/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet]) 

