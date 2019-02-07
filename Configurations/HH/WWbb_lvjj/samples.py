import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

#samples = {}

##############################################
###### Tree Directory according to site ######
##############################################


samples['TTToSemilepton']  = {    'name'   : ['latino_TTToSemiLepton__part0.root'] ,
                          			'weight' :   '1.' ,
                 }

#samples['Wjets'] = { 'name' : ['latino_WJetsToLNu_HT100_200_ext1__part0.root',
#				'latino_WJetsToLNu_HT100_200_ext2__part0.root',
#				' latino_WJetsToLNu_HT100_200__part0.root',
#				'latino_WJetsToLNu_HT1200_2500_ext1__part0.root ',
#				'latino_WJetsToLNu_HT1200_2500__part0.root',
#				'latino_WJetsToLNu_HT200_400_ext1__part0.root',
#				'latino_WJetsToLNu_HT200_400_ext2__part0.root',
#				'latino_WJetsToLNu_HT200_400__part0.root',
#				'latino_WJetsToLNu_HT2500_inf_ext1__part0.root',
#				'latino_WJetsToLNu_HT2500_inf__part0.root',
#				' latino_WJetsToLNu_HT400_600_ext1__part0.root',
#				'latino_WJetsToLNu_HT400_600__part0.root',
#				'latino_WJetsToLNu_HT600_800_ext1__part0.root',
#				' latino_WJetsToLNu_HT600_800__part0.root',
#				'latino_WJetsToLNu_HT800_1200_ext1__part0.root',
#				'latino_WJetsToLNu__part0.root',],
#				'weight': '1.',
#			}

samples['TTWJetsToLNu']  = {    'name'   : ['latino_TTWJetsToLNu_ext2__part0.root',
						'latino_TTWJetsToLNu__part0.root'] ,
                                                'weight' :   '1.' ,
	                 }

samples['WZTo1L1Nu2Q']  = {    'name'   : ['latino_WZTo1L1Nu2Q__part0.root'] ,
                                                'weight' :   '1.' ,
                 }

###########################################
################## DATA ###################
###########################################

