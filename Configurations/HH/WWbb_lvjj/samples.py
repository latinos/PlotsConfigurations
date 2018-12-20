import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

#samples = {}

##############################################
###### Tree Directory according to site ######
##############################################

#samples['HH_notcleaned'] = { 'name' : ['latino_stepB_mc_numEvent5000.root'],
#                                'weight' : '1.',
#                        }

samples['HH']  = {    'name'   : ['latino_stepB_mc_lepSel_EpTCorr_nevents5k.root'] ,
                          			'weight' :   '1.' ,
                 }

samples['W+Jets'] = { 'name' : ['W+jets/latino_WJetsToLNu_HT100_200_ext1__part0.root'],
			 'weight' : '1.',
		'name' : ['W+jets/latino_WJetsToLNu_HT1200_2500_ext1__part0.root'],
                        'weight' : '1.',
		'name' : ['W+jets/latino_WJetsToLNu_HT200_400_ext1__part0.root'],
                        'weight' : '1.',
		'name' : ['W+jets/latino_WJetsToLNu_HT400_600_ext1__part0.root'],
                        'weight' : '1.',
		'name' : ['W+jets/latino_WJetsToLNu_HT600_800_ext1__part0.root'],
                        'weight' : '1.',
                'name' : ['W+jets/latino_WJetsToLNu_HT800_1200_ext1__part0.root'],
                        'weight' : '1.',
		}

###########################################
################## DATA ###################
###########################################

