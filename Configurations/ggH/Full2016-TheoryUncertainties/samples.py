import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *


# samples

#samples = {}

##############################################
###### Tree Directory according to site ######
##############################################

#SITE=os.uname()[1]
SITE='cern'
if    'iihe' in SITE :
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/'
elif  'cern' in SITE :
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/'

#directory = treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__MCFix/'
directory = treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC/'




################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'baseW*GEN_weight_SM/abs(GEN_weight_SM)'
SFweight      = 'puW*bPogSF_CMVAL*effTrigW*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*veto_EMTFBug'
GenLepMatch   = 'std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]'


###########################################
#############   SIGNALS  ##################
###########################################
samples['ggH_hww']  = {  'name'  : getSampleFiles(directory,'GluGluHToWWTo2L2Nu_M125') ,
                         'weight': 'XSWeight' ,
                         #'weight': 'XSWeight*SFweight*GenLepMatch' ,
                         'suppressNegative' : ['hww2l2v_13TeV_of_incl_bveto_4']
                      }




