import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

#samples = {}

##############################################
###### Tree Directory according to site ######
##############################################

samples['HH'] = { 'name' : ['latino_stepB_mc_numEvent5000.root'],
                                'weight' : '1.',
                        }

samples['HH_cleaned']  = {    'name'   : ['latino_stepB_mc_lepSel_EpTCorr_nevents5k.root'] ,
                           			'weight' :   '1.' ,
                 }

###########################################
################## DATA ###################
###########################################

