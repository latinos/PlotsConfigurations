# Originally from DY but comared to ggH/Full2016/sample.py

import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

#samples = {}

################################################
################# SKIMS ########################
################################################

#DATaMetCor='__metXYshift_2016'
DATaMetCor=''
skim=''
#skim='__wwSel'
#skim='__topSel'
#skim='__topSel'
#skim='__vh3lSel' 
#skim='__sfSel' 
#skim='__vbsSel'
#skim='__ssSel'

if skim =='__vh3lSel' :  skimFake='__vh3lFakeSel'
else:                    skimFake=skim

##############################################
###### Tree Directory according to site ######
##############################################

SITE=os.uname()[1]
xrootdPath=''
if    'iihe' in SITE :
  xrootdPath  = 'dcap://maite.iihe.ac.be/' 
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/'
elif  'cern' in SITE :
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/'
elif 'knu' in SITE :
  treeBaseDir = '/pnfs/knu.ac.kr/data/cms/store/user/salee/Full2016_Apr17/'
  copiedTreeBaseDir = '/xrootd/store/user/spak/LatinoTree/Full2016_Apr17/'
elif 'sdfarm' in SITE :
  treeBaseDir = '/pnfs/knu.ac.kr/data/cms/store/user/salee/Full2016_Apr17/'
  copiedTreeBaseDir = '/xrootd/store/user/spak/LatinoTree/Full2016_Apr17/'

directory = copiedTreeBaseDir+'Apr2017_summer16_KNU/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC'+skim+'/'
#directoryMcWgSt = treeBaseDir+'Apr2017_summer16_KNU/MCWgStarsel__hadd__MCWeights__bSFLpTEffMulti__cleanTauMC__formulasMC/'

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='2'
#Nlep='3'
#Nlep='4'

################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l'
#GenLepMatch   = 'GenLepMatch3l'
GenLepMatch   = 'GenLepMatch'+Nlep+'l'

################################################
############### B-Tag  WP ######################
################################################

bAlgo='cmvav2'
#bAlgo='csvv2ivf'
#bAlgo='DeepCSVB'

bWP='L'
#bWP='M'
#bWP='T'

# ... bPog SF and b veto

bSF='1.'
bVeto='1'
if   bAlgo == 'cmvav2' :
 bSF='bPogSF_CMVA'+bWP
 bVeto='bveto_CMVA'+bWP
elif bAlgo == 'csvv2ivf' :
 bSF='bPogSF_CSV'+bWP
 bVeto='bveto_CSV'+bWP
elif bAlgo == 'DeepCSVB' :
 bSF='bPogSF_deepCSV'+bWP
 bVeto='bveto_deepCSV'+bWP

SFweight += '*'+bSF
# Fix for 2-leptons for which this was kept in global formula !
if Nlep == '2' : SFweight += '/bPogSF_CMVAL'


################################################
############### Lepton WP ######################
################################################

#... Electron:

eleWP='cut_WP_Tight80X'
#eleWP='cut_WP_Tight80X_SS'
#eleWP='mva_80p_Iso2015'
#eleWP='mva_80p_Iso2016'
#eleWP='mva_90p_Iso2015'
#eleWP='mva_90p_Iso2016'

#... Muon:

muWP='cut_Tight80x'

#... Build formula

#LepWPCut        = 'LepCut2l__ele_'+eleWP+'__mu_'+muWP
#LepWPCut        = 'LepCut3l__ele_'+eleWP+'__mu_'+muWP
LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
#LepWPCut        = '1'

#LepWPweight     = 'LepSF2l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
#LepWPweight     = '1'

SFweight += '*'+LepWPweight+'*'+LepWPCut

#... And the fakeW

if Nlep == '2' or Nlep == '3' :
  fakeW = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP
else:
  fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l'

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

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







#samples['VgS']  = {    'name':  getSampleFiles(directory,'WgStarLNuEE', True) + getSampleFiles(directory,'WgStarLNuMuMu', True) ,
#                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*1.4' ,  
#                  }

samples['WZgS_L']  = {    'name':  getSampleFiles(directory,'WZTo3LNu_mllmin01_ext1', True) ,
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '* (Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4)' ,  
                     'FilesPerJob' : 1 ,
                  }

samples['WZgS_H']  = {    'name':  getSampleFiles(directory,'WZTo3LNu_mllmin01_ext1', True) ,
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '* (Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4)' ,  
                     'FilesPerJob' : 1 ,
                  }

## 
## Wg* scale factor is
##
## X.X  +/- X.X     in mumumu
## 0.79  +/- 0.22     in emumu
##
##


######### VZ #########

samples['WZ']  = {    'name':   getSampleFiles(directory,'WZTo3LNu', True)
                              # Should we include this as well here:
                              # + getSampleFiles(directory,'tZq_ll')
                              ,   
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*1.11' ,  
                     'FilesPerJob' : 1 ,
                  }

### 1.11 normalisation was measured in 3-lepton
