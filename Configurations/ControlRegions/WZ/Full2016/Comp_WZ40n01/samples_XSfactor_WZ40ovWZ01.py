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

elif 'knu' in SITE :
  #treeBaseDir = '/pnfs/knu.ac.kr/data/cms/store/user/spak/'
  #treeBaseDir = '/pnfs/knu.ac.kr/data/cms/store/user/salee/'
  #treeBaseDir = '/pnfs/knu.ac.kr/data/cms/store/user/salee/'
  treeBaseDir = '/pnfs/knu.ac.kr/data/cms/store/user/spak/LatinoTree/Full2016/'

#directory = treeBaseDir+'LatinoProduction/Apr2017_HowToBeALatinLover/LatinoTrees/'
#directory = treeBaseDir+'Apr2017_summer16_KNU/MCl2vloose_KNU/'
directory = treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight/'
#directory = treeBaseDir+'Feb2017_summer16_KNU/MCl2vloose__hadd/'
#directory = treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight/'


################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'baseW*GEN_weight_SM/abs(GEN_weight_SM)'
SFweight      = 'puW*bPogSF_CMVAL*effTrigW*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*veto_EMTFBug'
GenLepMatch   = 'std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]'

################################################
############   MET  FILTERS  ###################
################################################

METFilter_Common = '(std_vector_trigger_special[0]*std_vector_trigger_special[1]*std_vector_trigger_special[2]*std_vector_trigger_special[3]*std_vector_trigger_special[5])'

METFilter_DATA   =  METFilter_Common + '*' + '(std_vector_trigger_special[4]*!std_vector_trigger_special[6]*!std_vector_trigger_special[7]*std_vector_trigger_special[8]*std_vector_trigger_special[9])'

METFilter_MCver  =  '(std_vector_trigger_special[8]==-2.)'
METFilter_MCOld  =  '(std_vector_trigger_special[6]*std_vector_trigger_special[7])'
METFilter_MCNew  =  '(std_vector_trigger_special[8]*std_vector_trigger_special[9])'
METFilter_MC     =  METFilter_Common + '*' + '(('+METFilter_MCver+'*'+METFilter_MCOld+')||(!'+METFilter_MCver+'*'+METFilter_MCNew+'))' 

######## Vg ########
#
#samples['Vg']  =  {     'name'   :   getSampleFiles(directory,'Wg_MADGRAPHMLM')
#                                   + getSampleFiles(directory,'Zg')
#                                   ,
#                        'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC + '* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
#                  }
#
######## VgS ########
#
#samples['VgS']  = {    'name':  getSampleFiles(directory,'WgStarLNuEE') + getSampleFiles(directory,'WgStarLNuMuMu') ,
#                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*1.4' ,  
#                  }
#
## 
## Wg* scale factor is
##
## X.X  +/- X.X     in mumumu
## 1.4  +/- 0.4     in emumu
##
##


######### VZ #########

samples['WZTo3LNu4GeV']  = {    'name':   getSampleFiles(directory,'WZTo3LNu',True)
                              # Should we include this as well here:
                              # + getSampleFiles(directory,'tZq_ll')
                              ,   
                      #'weight' : '0.002222'  ,  
                      #'weight' : XSWeight + '*'+GenLepMatch ,  
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                      'FilesPerJob' : 1 ,
                  }

samples['WZTo3LNu0p1GeV']  = {    'name':   getSampleFiles(directory,'WZTo3LNu_mllmin01_ext1',True)
                              # Should we include this as well here:
                              # + getSampleFiles(directory,'tZq_ll')
                              ,   
                      #'weight' : '0.00039873' + '*58.59/35.2665* 0.601644' ,  
                      #'weight' : XSWeight + '*'+GenLepMatch + '*58.59/35.2665' ,  
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*58.59/35.2665*0.601644' ,  
                      'FilesPerJob' : 5 ,
                  }
 
