import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

#samples = {}

##############################################
###### Tree Directory according to site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE :
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/'
elif  'cern' in SITE :
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/'

directory = treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight/'


################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'baseW*GEN_weight_SM/abs(GEN_weight_SM)'
SFweight      = 'puW*bPogSF_CMVAL*effTrigW*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*veto_EMTFBug'
GenLepMatch   = 'std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]'



################################################
############ DATA DECLARATION ##################
################################################

DataRun = [ 
            ['B','Run2016B-03Feb2017_ver2-v2'] , 
            ['C','Run2016C-03Feb2017-v1'] , 
            ['D','Run2016D-03Feb2017-v1'] , 
            ['E','Run2016E-03Feb2017-v1'] ,
            ['F','Run2016F-03Feb2017-v1'] , 
            ['G','Run2016G-03Feb2017-v1'] , 
            ['H','Run2016H-03Feb2017_ver2-v1'] , 
            ['H','Run2016H-03Feb2017_ver3-v1'] ,
          ] 

DataSets = ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']

DataTrig = {
            'MuonEG'         : ' trig_EleMu' ,
            'DoubleMuon'     : '!trig_EleMu &&  trig_DbleMu' ,
            'SingleMuon'     : '!trig_EleMu && !trig_DbleMu &&  trig_SnglMu' ,
            'DoubleEG'       : '!trig_EleMu && !trig_DbleMu && !trig_SnglMu &&  trig_DbleEle' ,
            'SingleElectron' : '!trig_EleMu && !trig_DbleMu && !trig_SnglMu && !trig_DbleEle &&  trig_SnglEle' ,
           }

###########################################
#############  BACKGROUNDS  ###############
###########################################


###### DY #######

samples['DY']  = {    'name'   :   getSampleFiles(directory,'DYJetsToLL_M-10to50')
                                 + getSampleFiles(directory,'DYJetsToLL_M-50')     ,
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch + '*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))' ,
                 }

###### Top #######

samples['top'] = {   'name'     :   getSampleFiles(directory,'TTTo2L2Nu') 
                                  + getSampleFiles(directory,'ST_tW_antitop')
                                  + getSampleFiles(directory,'ST_tW_top')  
                                  # We should use in principle: ST_tW_antitop_noHad + ST_tW_antitop_noHad_ext1 + ST_tW_top_noHad + ST_tW_top_noHad_ext1   
                                  # but first need to compute x-section and correct baseW
                                  + getSampleFiles(directory,'ST_t-channel_antitop')
                                  + getSampleFiles(directory,'ST_t-channel_top')
                                  + getSampleFiles(directory,'ST_s-channel')   
                             ,
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch ,  
                  }
                  

###### WW ########
             
samples['WW']  = {    'name'   : getSampleFiles(directory,'WWTo2L2Nu') ,
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch + '*nllW' ,  
                 }



samples['ggWW']  = {  'name'   : getSampleFiles(directory,'GluGluWWTo2L2Nu_MCFM'),      
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch ,  
                      'isData': ['0'],                            
                   }

## during tree production: 1.4 k-factor has been applied to both samples
## ggWW sample: k = 1.4 +/- 15%
## ggWW interference: k = 1.87 +/- 25%

######## Vg ########

samples['Vg']  =  {     'name'   :   getSampleFiles(directory,'Wg_MADGRAPHMLM')
                                   + getSampleFiles(directory,'Zg')
                                   ,
                        'weight' : XSWeight+'*'+SFweight + '* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                  }

######## VgS ########

samples['VgS']  = {    'name':  getSampleFiles(directory,'WgStarLNuEE') + getSampleFiles(directory,'WgStarLNuMuMu') ,
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch + '*1.4' ,  
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
                              # Should we include this as well here:
                              # + getSampleFiles(directory,'tZq_ll')
                              ,   
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch + '*1.11' ,  
                  }

### 1.11 normalisation was measured in 3-lepton

########## VVV #########

samples['VVV'] = {    'name':   getSampleFiles(directory,'ZZZ')
                              + getSampleFiles(directory,'WZZ')
                              + getSampleFiles(directory,'WWZ')
                              + getSampleFiles(directory,'WWW')
                           #  WWG: Might be added to WW by PYTHIA in tuning step, super small x-section anyway -> skipped for now 
                           #  + getSampleFiles(directory,'WWG')
                              ,    
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch ,  
                  }

###########################################
#############   SIGNALS  ##################
###########################################


#### ggH -> WW

samples['ggH_hww']  = {  'name'  : getSampleFiles(directory,'GluGluHToWWTo2L2NuPowheg_M125') ,  
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch ,  
                      }


#### VBF H->WW

samples['qqH_hww']  = {   'name' : getSampleFiles(directory,'VBFHToWWTo2L2Nu_alternative_M125') ,
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch ,  
                      }

### ZH ; H->WW

samples['ZH_hww']   = {   'name' :  getSampleFiles(directory,'HZJ_HToWW_M125') ,
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch ,  
                      }

samples['ggZH_hww'] = {   'name' : getSampleFiles(directory,'ggZH_HToWW_M125') ,
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch ,  
                      }

#### WH ; H->WW

samples['WH_hww']   = {   'name' :   getSampleFiles(directory,'HWminusJ_HToWW_M125')
                                   + getSampleFiles(directory,'HWplusJ_HToWW_M125')
                                   , 
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch ,  
                      }

#### H -> TauTau

samples['H_htt']    = {   'name' :   getSampleFiles(directory,'GluGluHToTauTau_M125')
                                   + getSampleFiles(directory,'VBFHToTauTau_M125')
                                   + getSampleFiles(directory,'HZJ_HToTauTau_M125')
                                   + getSampleFiles(directory,'HWplusJ_HToTauTau_M125')
                                   + getSampleFiles(directory,'HWminusJ_HToTauTau_M125')
                                   ,  
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch ,  
                      }


###########################################
################## FAKE ###################
###########################################

samples['Fake']  = {   'name': [ ] ,
                       'weight' : '(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))*veto_EMTFBug',              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                   }

for Run in DataRun :
  directory = treeBaseDir+'Feb2017_Run2016'+Run[0]+'_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['Fake']['name'].append(iFile)
      samples['Fake']['weights'].append(DataTrig[DataSet])

###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,     
                       'weight' : 'veto_EMTFBug',
                       'weights' : [ ],
                       'isData': ['all'],                            
                  }


for Run in DataRun :
  directory = treeBaseDir+'Feb2017_Run2016'+Run[0]+'_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet]) 

