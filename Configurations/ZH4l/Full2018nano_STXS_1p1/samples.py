import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

samples={}

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

directory = treeBaseDir+'Autumn18_102X_nAODv5_Full2018v5/MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5'

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='4'

################################################
############### Lepton WP ######################
################################################

eleWP='mvaFall17V1Iso_WP90'
muWP='cut_Tight_HWWW'

LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP


################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut
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
#############  BACKGROUNDS  ###############
###########################################

############ DY ############
ptllDYW_NLO = '(0.87*(gen_ptll<10)+(0.379119+0.099744*gen_ptll-0.00487351*gen_ptll**2+9.19509e-05*gen_ptll**3-6.0212e-07*gen_ptll**4)*(gen_ptll>=10 && gen_ptll<45)+(9.12137e-01+1.11957e-04*gen_ptll-3.15325e-06*gen_ptll**2-4.29708e-09*gen_ptll**3+3.35791e-11*gen_ptll**4)*(gen_ptll>=45 && gen_ptll<200) + 1*(gen_ptll>200))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'

samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToLL_M-50_ext',False,'nanoLatino_')
                                    + getSampleFiles(directory,'DYJetsToLL_M-10to50-LO',False,'nanoLatino_'),
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch2l+'*'+METFilter_MC ,
                         'FilesPerJob' : 2,
                     }
addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext',ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)



############ Top ############

Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )'

samples['top'] = {    'name'   :   getSampleFiles(directory,'TTTo2L2Nu',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_s-channel_ext1',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_t-channel_antitop',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_t-channel_top',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_tW_antitop_ext1',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_tW_top_ext1',False,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch2l+'*'+METFilter_MC ,
                     'FilesPerJob' : 1,
                 }

addSampleWeight(samples,'top','TTTo2L2Nu',Top_pTrw)
#######  ttV  ##################

samples['ttW'] =  {  'name'   :   getSampleFiles(directory,'TTWJetsToLNu',False,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                     'FilesPerJob' : 3
                 }

samples['ttZ']  = {    'name': getSampleFiles(directory,'TTZjets',False,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,
                       'FilesPerJob' : 3
}

############ WW ############

samples['WW'] = {    'name'   :   getSampleFiles(directory,'WWTo2L2Nu',False,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch2l+'*'+METFilter_MC+'*nllW' ,
                     'FilesPerJob' : 3,
                 }

samples['WWewk'] = {   'name'  : getSampleFiles(directory, 'WpWmJJ_EWK',False,'nanoLatino_'),
                       'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch2l+'*'+METFilter_MC+ '*(Sum$(abs(GenPart_pdgId)==6)==0 && Sum$(GenPart_pdgId==25)==0)' #filter tops
                   }

#FIXME Check if k-factor is already taken into account in XSWeight
samples['ggWW']  = {  'name'   :   getSampleFiles(directory,'GluGluToWWToENEN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToENMN',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'GluGluToWWToENTN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToMNEN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToMNMN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToMNTN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToTNEN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToTNMN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToTNTN',False,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch2l+'*'+METFilter_MC ,
                   }


############ Vg ############

samples['Vg']  = {  'name'   :   getSampleFiles(directory,'Wg_MADGRAPHMLM',False,'nanoLatino_')
                               + getSampleFiles(directory,'Zg',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC+'*(!(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 ))',
                    'FilesPerJob': 3,
                  }
addSampleWeight(samples, 'Vg', 'Zg', '(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt < 20.) == 0)')

############ ZZ ############

#FIXME Add normalization k-factor
samples['ZZ']  = {  'name'   :   getSampleFiles(directory,'ZZTo4L_ext1',False,'nanoLatino_')
                              +getSampleFiles(directory,'ggZZ2e2t',False,'nanoLatino_')
                              +getSampleFiles(directory,'ggZZ2m2t',False,'nanoLatino_')
                              +getSampleFiles(directory,'ggZZ2e2m',False,'nanoLatino_')
                              +getSampleFiles(directory,'ggZZ4t',False,'nanoLatino_')
                         #     +getSampleFiles(directory,'ggZZ4e',False,'nanoLatino_')
                              +getSampleFiles(directory,'ggZZ4m',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                    'FilesPerJob' : 3,
                 }

addSampleWeight(samples,'ZZ','ZZTo4L_ext1',"1.1654") ## The NNLO/NLO k-factor, cited from https://arxiv.org/abs/1405.2219v1
addSampleWeight(samples,'ZZ','ggZZ2e2t',"2.27") ## The NLO/LO k-factor, cited from https://arxiv.org/abs/1509.06734v1
addSampleWeight(samples,'ZZ','ggZZ2m2t',"2.27")
addSampleWeight(samples,'ZZ','ggZZ2e2m',"2.27")
#addSampleWeight(samples,'ZZ','ggZZ4e',"2.27")
addSampleWeight(samples,'ZZ','ggZZ4m',"2.27")
addSampleWeight(samples,'ZZ','ggZZ4t',"2.27")

#FIXME Add normalization k-factor
samples['VZ']  = {  'name'   :   getSampleFiles(directory,'ZZTo2L2Nu_ext1',False,'nanoLatino_')
                               + getSampleFiles(directory,'ZZTo2L2Q',False,'nanoLatino_')
                               + getSampleFiles(directory,'WZTo2L2Q',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch2l+'*'+METFilter_MC ,
                    'FilesPerJob' : 3,
                 }

samples['WZ'] = {'name'   :getSampleFiles(directory,'WZTo3LNu_mllmin01',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC ,
                    'FilesPerJob' : 5,
}

############ VVV ############

samples['VVV']  = {  'name'   :   getSampleFiles(directory,'ZZZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WZZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WWZ',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                  }


samples['WWW'] = {'name'   :getSampleFiles(directory,'WWW',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC ,

}
##########################################
################ SIGNALS #################
##########################################

############ ggH H->WW ############
#FIXME Add reweighting to MiNLO NNLOPS or use NNLOPS sample when available
samples['ggH_hww']  = {  'name'   :   getSampleFiles(directory,'GluGluHToWWTo2L2NuPowheg_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

############ VBF H->WW ############
samples['qqH_hww']  = {  'name'   :   getSampleFiles(directory,'VBFHToWWTo2L2NuPowheg_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

############ ZH H->WW ############

samples['ZH_hww']  = {  'name'   :   getSampleFiles(directory,'HZJ_HToWWTo2L2Nu_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        'FilesPerJob' : 1,
                        'subsamples' : { 'PTV_LT150' : 'HTXS_stage1_1_cat_pTjet30GeV==401 || HTXS_stage1_1_cat_pTjet30GeV==402',
                                         'PTV_GT150' : 'HTXS_stage1_1_cat_pTjet30GeV==403 || HTXS_stage1_1_cat_pTjet30GeV==404 || HTXS_stage1_1_cat_pTjet30GeV==405',
                                         'FWDH'      : 'HTXS_stage1_1_cat_pTjet30GeV==400'
                                       }
                     }

samples['ggZH_hww'] = { 'name'   :   getSampleFiles(directory,'GluGluZH_HToWW_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        'FilesPerJob' : 1,
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

samples['WH_hww']  = {  'name'   :   getSampleFiles(directory,'HWplusJ_HToWW_M125',False,'nanoLatino_')
                                   + getSampleFiles(directory,'HWminusJ_HToWW_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

############ H->TauTau ############

splitHtt=False
if not splitHtt:

  samples['H_htt'] = {  'name'   :   getSampleFiles(directory,'GluGluHToTauTau_M125',False,'nanoLatino_')
                                   + getSampleFiles(directory,'VBFHToTauTau_M125',False,'nanoLatino_')
                                   + getSampleFiles(directory,'HZJ_HToTauTau_M125',False,'nanoLatino_')
                                   + getSampleFiles(directory,'HWplusJ_HToTauTau_M125',False,'nanoLatino_')
                                   + getSampleFiles(directory,'HWminusJ_HToTauTau_M125',False,'nanoLatino_'),
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                        'FilesPerJob' : 3,
                          }
else:
  
  samples['ggH_htt']  = {  'name'   : getSampleFiles(directory,'GluGluHToTauTau_M125',False,'nanoLatino_'),
                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],                        
                         } 

  samples['qqH_htt']  = {  'name'   : getSampleFiles(directory,'VBFHToTauTau_M125',False,'nanoLatino_'),
                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                         }

  samples['ZH_htt']  = {  'name'   : getSampleFiles(directory,'HZJ_HToTauTau_M125',False,'nanoLatino_'),
                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                          'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                        }

  samples['WH_htt']  = {  'name'   :  getSampleFiles(directory,'HWplusJ_HToTauTau_M125',False,'nanoLatino_')
                                   + getSampleFiles(directory,'HWminusJ_HToTauTau_M125',False,'nanoLatino_'),
                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                          'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],  
                        }

############################################
################### DATA ###################
############################################

samples['DATA']  = {   'name': [ ] ,
                       'weight' : METFilter_DATA+'*'+LepWPCut,
                       'weights' : [ ],
                       'isData': ['all'],
                       'FilesPerJob' : 30,
                  }

for Run in DataRun :
        directoryDATA = treeBaseDir+'Run2018_102X_nAODv5_Full2018v5/DATAl1loose2018v5__l2loose__l2tightOR2018v5/'
        for DataSet in DataSets :
                FileTarget = getSampleFiles(directoryDATA,DataSet+'_'+Run[1],True,'nanoLatino_')
                for iFile in FileTarget:
                        print(iFile)
                        samples['DATA']['name'].append(iFile)
                        samples['DATA']['weights'].append(DataTrig[DataSet])

