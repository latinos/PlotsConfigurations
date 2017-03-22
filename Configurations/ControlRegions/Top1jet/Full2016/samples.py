import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

#samples = {}


###### Tree Directory according to site ######

SITE=os.uname()[1]
if    'iihe' in SITE :
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/'
elif  'cern' in SITE :
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/'

directory = treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight/'


###########################################
#############  BACKGROUNDS  ###############
###########################################


###### DY #######

samples['DY']  = {    'name'   :   getSampleFiles(directory,'DYJetsToLL_M-10to50')
                                 + getSampleFiles(directory,'DYJetsToLL_M-50')     ,
                      'weight' : 'puW*baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*effTrigW*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',  
                 }

###### Top #######

samples['top'] = {   'name'     :   getSampleFiles(directory,'TTTo2L2Nu') 
                                  + getSampleFiles(directory,'ST_tW_antitop')
                                  + getSampleFiles(directory,'ST_tW_top')  
                                  # We should use in principle: ST_tW_antitop_noHad + ST_tW_antitop_noHad_ext1 + ST_tW_top_noHad + ST_tW_top_noHad_ext1   
                                  # but first need to compute x-section and correct baseW
                                  + getSampleFiles(directory,'ST_t-channel_antitop')
                                  + getSampleFiles(directory,'ST_t-channel_top')
                                  # s-channel still missing but samll x-section
                                # + getSampleFiles(directory,'ST_s-channel')   
                             ,
                       'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',    
                      }

###### WW ########
             
samples['WW']  = {    'name'   : getSampleFiles(directory,'WWTo2L2Nu'),
                      'weight' : 'nllW*baseW*puW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                  }



samples['ggWW']  = {  'name'   : getSampleFiles(directory,'GluGluWWTo2L2Nu_MCFM'),      
                      'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',    
                      'isData': ['0'],                            
                   }

## during tree production: 1.4 k-factor has been applied to both samples
## ggWW sample: k = 1.4 +/- 15%
## ggWW interference: k = 1.87 +/- 25%

######## Vg ########

samples['Vg']  =  {     'name'   : getSampleFiles(directory,'Wg_MADGRAPHMLM'),
                        'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM) \
                                   * !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                  }

######## VgS ########

samples['VgS']  = {    'name':  getSampleFiles(directory,'WgStarLNuEE') + getSampleFiles(directory,'WgStarLNuMuMu') ,
                       'weight' : '1.4*puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
                  }

## 
## Wg* scale factor is
##
## X.X  +/- X.X     in mumumu
## 1.4  +/- 0.4     in emumu
##
##


######### VZ #########

samples['VZ']  = {    'name':   getSampleFiles(directory,'WZTo3LNu')
                              + getSampleFiles(directory,'ZZTo2L2Nu')
                              + getSampleFiles(directory,'WZTo2L2Q')
                              + getSampleFiles(directory,'ZZTo2L2Q')  
                              ,   
                      'weight' : '1.11*puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
                  }

### 1.11 normalisation was measured in 3-lepton

########## VVV #########

samples['VVV'] = {    'name':   getSampleFiles(directory,'ZZZ')
                              + getSampleFiles(directory,'WZZ')
                              + getSampleFiles(directory,'WWZ')
                              + getSampleFiles(directory,'WWW')
                              ,    
                      'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
                  }

###########################################
#############   SIGNALS  ##################
###########################################


#### ggH -> WW

samples['ggH_hww']  = {  'name'   : getSampleFiles(directory,'GluGluHToWWTo2L2NuPowheg_M125') ,  
                         'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
                      }


#### VBF H->WW

samples['qqH_hww']  = {    'name': getSampleFiles(directory,'VBFHToWWTo2L2Nu_alternative_M125') ,
                         'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
                      }

### ZH ; H->WW

samples['ZH_hww']  = {    'name':  getSampleFiles(directory,'HZJ_HToWW_M125') ,
                          'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
                      }

samples['ggZH_hww']  = {  'name': getSampleFiles(directory,'ggZH_HToWW_M125') ,
                          'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
                      }

#### WH ; H->WW

samples['WH_hww']  = {    'name':   getSampleFiles(directory,'HWminusJ_HToWW_M125')
                                  + getSampleFiles(directory,'HWplusJ_HToWW_M125')
                                  , 
                          'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
                      }

#### H -> TauTau

samples['H_htt']  = {     'name':   getSampleFiles(directory,'GluGluHToTauTau_M125')
                                  + getSampleFiles(directory,'VBFHToTauTau_M125')
                                  + getSampleFiles(directory,'HZJ_HToTauTau_M125')
                                  + getSampleFiles(directory,'HWplusJ_HToTauTau_M125')
                                  + getSampleFiles(directory,'HWminusJ_HToTauTau_M125')
                                  ,  
                          'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
                      }


###########################################
################## FAKE ###################
###########################################

samples['Fake']  = {   'name': [ ] ,
                       'weight' : '(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                   }

MyWeights={
           'MuonEG'         : ' trig_EleMu' ,
           'DoubleMuon'     : '!trig_EleMu &&  trig_DbleMu' ,
           'SingleMuon'     : '!trig_EleMu && !trig_DbleMu &&  trig_SnglMu' ,
           'DoubleEG'       : '!trig_EleMu && !trig_DbleMu && !trig_SnglMu &&  trig_DbleEle' ,
           'SingleElectron' : '!trig_EleMu && !trig_DbleMu && !trig_SnglMu && !trig_DbleEle &&  trig_SnglEle' ,
          }

for Run in ['B','C','D','E','F','G','H'] :
  directory = treeBaseDir+'Feb2017_Run2016'+Run+'_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__fakeWCut' 
  for DataSet in ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']:
    FileTarget = getSampleFiles(directory,'*'+DataSet+'*',True)
    for iFile in FileTarget:
      samples['Fake']['name'].append(iFile)
      samples['Fake']['weights'].append(MyWeights[DataSet])

###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,     
                       'weight' : '1',
                       'weights' : [ ],
                       'isData': ['all'],                            
                  }

MyWeights={
           'MuonEG'         : ' trig_EleMu' ,
           'DoubleMuon'     : '!trig_EleMu &&  trig_DbleMu' ,
           'SingleMuon'     : '!trig_EleMu && !trig_DbleMu &&  trig_SnglMu' ,
           'DoubleEG'       : '!trig_EleMu && !trig_DbleMu && !trig_SnglMu &&  trig_DbleEle' ,
           'SingleElectron' : '!trig_EleMu && !trig_DbleMu && !trig_SnglMu && !trig_DbleEle &&  trig_SnglEle' ,
          }

for Run in ['B','C','D','E','F','G','H'] :
  directory = treeBaseDir+'Feb2017_Run2016'+Run+'_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight/'
  for DataSet in ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']:
    FileTarget = getSampleFiles(directory,'*'+DataSet+'*',True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(MyWeights[DataSet]) 

