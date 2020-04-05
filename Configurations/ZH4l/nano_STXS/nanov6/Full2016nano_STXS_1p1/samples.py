import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

#samples={}

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

directoryMC = "/afs/cern.ch/user/d/dittmer/public/Summer16/nom"
################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='4'

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
GenLepMatch2l   = 'GenLepMatch'+'2l'
GenLepMatch3l   = 'GenLepMatch'+'3l'

################################################
############## FAKE WEIGHTS ####################
################################################

fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l'

################################################
############### B-Tag  WP ######################
################################################

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

############ DY ############

ptllDYW_NLO = '(0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140)'
ptllDYW_LO  = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'

samples['DY'] = {    'name'   :   getSampleFiles(directoryMC,'DYJetsToLL_M-10to50',True,'nanoLatino_')
                                + getSampleFiles(directoryMC,'DYJetsToLL_M-50_ext2',True,'nanoLatino_'),
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch2l+'*'+METFilter_MC ,
                     'FilesPerJob' : 5,
                 }

addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2',ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)

#######  ttV  ##################

samples['ttW'] =  {  'name'   :   getSampleFiles(directoryMC,'TTWJetsToLNu',True,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                 }

samples['ttZ']  = {    'name': getSampleFiles(directoryMC,'TTZjets',True,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,
}
############ Top ############

Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )'

samples['top'] = {    'name'   :   getSampleFiles(directoryMC,'TTTo2L2Nu',True,'nanoLatino_') 
                                 + getSampleFiles(directoryMC,'ST_s-channel',True,'nanoLatino_') 
                                 + getSampleFiles(directoryMC,'ST_t-channel_antitop',True,'nanoLatino_') 
                                 + getSampleFiles(directoryMC,'ST_t-channel_top',True,'nanoLatino_') 
                                 + getSampleFiles(directoryMC,'ST_tW_antitop',True,'nanoLatino_') 
                                 + getSampleFiles(directoryMC,'ST_tW_top',True,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch2l+'*'+METFilter_MC ,
                     'FilesPerJob' : 1,
                 }

addSampleWeight(samples,'top','TTTo2L2Nu',Top_pTrw)

############ WW ############

#FIXME Add nllW weight to WW
samples['WW'] = {    'name'   :   getSampleFiles(directoryMC,'WWTo2L2Nu',True,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch2l+'*'+METFilter_MC+'*nllW' ,
                 }


samples['WWewk'] = {   'name'  : getSampleFiles(directoryMC, 'WpWmJJ_EWK',True,'nanoLatino_'),
                       'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch2l+'*'+METFilter_MC+ '*(Sum$(abs(GenPart_pdgId)==6)==0 && Sum$(GenPart_pdgId==25)==0)' #filter tops
                   }

samples['ggWW']  = {  'name'   : getSampleFiles(directoryMC,'GluGluWWTo2L2Nu_MCFM',True,'nanoLatino_'),      
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch2l+'*'+METFilter_MC ,  
                      'isData': ['0'],                            
                   }

############ Vg ############

samples['Vg']  =  {     'name'   :   getSampleFiles(directoryMC,'Wg_MADGRAPHMLM',True,'nanoLatino_')
                                   + getSampleFiles(directoryMC,'Zg',True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC+'* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                        'FilesPerJob' : 5 ,
                  }

#################### ZZ ##############

samples['ZZ']  = {  'name'   :   getSampleFiles(directoryMC,'ZZTo4L',True,'nanoLatino_')
                              +getSampleFiles(directoryMC,'ggZZ2e2t',True,'nanoLatino_')
                              +getSampleFiles(directoryMC,'ggZZ2m2t',True,'nanoLatino_')
                              +getSampleFiles(directoryMC,'ggZZ2e2m',True,'nanoLatino_')
                              +getSampleFiles(directoryMC,'ggZZ4t',True,'nanoLatino_')
                              +getSampleFiles(directoryMC,'ggZZ4e',True,'nanoLatino_')
                              +getSampleFiles(directoryMC,'ggZZ4m',True,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                    'FilesPerJob' : 3,
                 }
addSampleWeight(samples,'ZZ','ZZTo4L',"1.1654") ## The NNLO/NLO k-factor, cited from https://arxiv.org/abs/1405.2219v1
addSampleWeight(samples,'ZZ','ggZZ2e2t',"2.27") ## The NLO/LO k-factor, cited from https://arxiv.org/abs/1509.06734v1
addSampleWeight(samples,'ZZ','ggZZ2m2t',"2.27") 
addSampleWeight(samples,'ZZ','ggZZ2e2m',"2.27")
addSampleWeight(samples,'ZZ','ggZZ4e',"2.27")
addSampleWeight(samples,'ZZ','ggZZ4m',"2.27")
addSampleWeight(samples,'ZZ','ggZZ4t',"2.27")

############ VZ ############

#FIXME Add normalization k-factor
samples['VZ']  = {  'name'   :   getSampleFiles(directoryMC,'ZZTo2L2Nu',True,'nanoLatino_')
                               + getSampleFiles(directoryMC,'ZZTo2L2Q',True,'nanoLatino_')
                               + getSampleFiles(directoryMC,'WZTo2L2Q',True,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch2l+'*'+METFilter_MC,
                    'FilesPerJob' : 2,
                 }

samples['WZ'] = {'name'   :getSampleFiles(directoryMC,'WZTo3LNu_mllmin01',True,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC ,
                    'FilesPerJob' : 5,
}

############ VVV ############

samples['VVV']  = {  'name'   :   getSampleFiles(directoryMC,'ZZZ',True,'nanoLatino_')
                                + getSampleFiles(directoryMC,'WZZ',True,'nanoLatino_')
                                + getSampleFiles(directoryMC,'WWZ',True,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                  }


samples['WWW'] = {'name'   :getSampleFiles(directoryMC,'WWW',True,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC ,
                   
}

##########################################
################ SIGNALS #################
##########################################

############ ggH H->WW ############
#FIXME Add reweighting to MiNLO NNLOPS or use NNLOPS sample when available
samples['ggH_hww']  = {  'name'   :   getSampleFiles(directoryMC,'GluGluHToWWTo2L2Nu_M125',True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

############ VBF H->WW ############
samples['qqH_hww']  = {  'name'   :   getSampleFiles(directoryMC,'VBFHToWWTo2L2Nu_M125',True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

############ ZH H->WW ############

samples['ZH_hww']  = {  'name'   :   getSampleFiles(directoryMC,'HZJ_HToWW_M125',True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        'subsamples' : { 'PTV_LT150' : 'HTXS_stage1_1_cat_pTjet30GeV==401 || HTXS_stage1_1_cat_pTjet30GeV==402',
                                         'PTV_GT150' : 'HTXS_stage1_1_cat_pTjet30GeV==403 || HTXS_stage1_1_cat_pTjet30GeV==404 || HTXS_stage1_1_cat_pTjet30GeV==405',
                                         'FWDH'      : 'HTXS_stage1_1_cat_pTjet30GeV==400'
                                       }
                     }

samples['ggZH_hww'] = { 'name'   :   getSampleFiles(directoryMC,'ggZH_HToWW_M125',True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        'subsamples' : { 'PTV_LT150' : 'HTXS_stage1_1_cat_pTjet30GeV==501 || HTXS_stage1_1_cat_pTjet30GeV==502',
                                         'PTV_GT150' : 'HTXS_stage1_1_cat_pTjet30GeV==503 || HTXS_stage1_1_cat_pTjet30GeV==504 || HTXS_stage1_1_cat_pTjet30GeV==505',
                                         'FWDH'      : 'HTXS_stage1_1_cat_pTjet30GeV==500'
                                       }
                     }

#if os.path.exists('HTXS_stage1_categories.py') :
#    handle = open('HTXS_stage1_categories.py','r')
#    exec(handle)
#    handle.close()
 
#samples['ZH_hww']['subsamples'] = {}
#for cat,num in HTXSStage1_1Categories.iteritems():
#    if 'QQ2HLL' in cat:
#        samples['ZH_hww']['subsamples'][cat.replace('QQ2HLL_','')] = 'HTXS_stage1_1_cat_pTjet30GeV=='+str(num)
 
#samples['ggZH_hww']['subsamples'] = {}
#for cat,num in HTXSStage1_1Categories.iteritems():
#    if 'GG2HLL' in cat:
#        samples['ggZH_hww']['subsamples'][cat.replace('GG2HLL_','')] = 'HTXS_stage1_1_cat_pTjet30GeV=='+str(num)

############ WH H->WW ############

samples['WH_hww']  = {  'name'   :   getSampleFiles(directoryMC,'HWplusJ_HToWW_M125',True,'nanoLatino_')
                                   + getSampleFiles(directoryMC,'HWminusJ_HToWW_M125',True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

############ H->TauTau ############

splitHtt=False
if not splitHtt:

  samples['H_htt'] = {  'name'   :   getSampleFiles(directoryMC,'GluGluHToTauTau_M125',True,'nanoLatino_')
                                   + getSampleFiles(directoryMC,'VBFHToTauTau_M125',True,'nanoLatino_')
                                   + getSampleFiles(directoryMC,'HZJ_HToTauTau_M125',True,'nanoLatino_')
                                   + getSampleFiles(directoryMC,'HWplusJ_HToTauTau_M125',True,'nanoLatino_')
                                   + getSampleFiles(directoryMC,'HWminusJ_HToTauTau_M125',True,'nanoLatino_'),
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                     }
else:
  
  samples['ggH_htt']  = {  'name'   : getSampleFiles(directoryMC,'GluGluHToTauTau_M125',True,'nanoLatino_'),
                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        } 

  samples['qqH_htt']  = {  'name'   : getSampleFiles(directoryMC,'VBFHToTauTau_M125',True,'nanoLatino_'),
                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }

  samples['ZH_htt']  = {  'name'   : getSampleFiles(directoryMC,'HZJ_HToTauTau_M125',True,'nanoLatino_'),
                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }

  samples['WH_htt']  = {  'name'   :  getSampleFiles(directoryMC,'HWplusJ_HToTauTau_M125',True,'nanoLatino_')
                                    + getSampleFiles(directoryMC,'HWminusJ_HToTauTau_M125',True,'nanoLatino_'),
                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }

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
  directory = treeBaseDir+'/Run2016_102X_nAODv4_Full2016v5/DATAl1loose2016v5__l2loose__l2tightOR2016v5/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet])
