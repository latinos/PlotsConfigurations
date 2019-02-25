import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

#samples = {}

##############################################
###### Tree Directory according to site ######
##############################################


directory = '/gwteraz/users/amassiro/latino/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC'

samples['HH'] = {	'name' : ['latino_HHWWbblvjj_nevents5k.root'],
			'weight' : '1.',
		}

samples['Wjets'] = { 'name' :     getSampleFiles(directory, 'WJetsToLNu_HT100_200')\
				+ getSampleFiles(directory, 'WJetsToLNu_HT200_400')\
				+ getSampleFiles(directory, 'WJetsToLNu_HT400_600')\
				+ getSampleFiles(directory, 'WJetsToLNu_HT600_800')\
#				+ getSampleFiles(directory, 'WJetsToLNu_HT800_1200')\
				+ getSampleFiles(directory, 'WJetsToLNu_HT1200_2500')\
				+ getSampleFiles(directory, 'WJetsToLNu_HT2500_inf'),
				'weight': '1.',
				'FilesPerJob' : 3,
			}




samples['TT']  = {    'name'   : getSampleFiles(directory, 'TTToSemiLepton') ,
                                'weight' :   '1.' ,
			'FilesPerJob' : 3,
			 }


#samples['TTW']  = {    'name'   : getSampleFiles(directory, 'TTWJetsToLNu') ,
#                                                'weight' :   '1.' ,
#	                 }


#samples['WZTo1L1Nu2Q']  = {    'name'   : getSampleFiles(directory, 'WZTo1L1Nu2Q') ,
#                                                'weight' :   '1.' ,
#                 }



#samples['WZTo1L3Nu']  = {    'name'   : ['latino_WZTo1L3Nu__part0.root',
#					'latino_WZTo1L3Nu__part1.root'] ,
#                                                'weight' :   '1.' ,
#                 }



#samples['WWW']  = {    'name'   : ['latino_WWW__part0.root'] ,
#                                                'weight' :   '1.' ,
#                 }

#samples['WWZ']  = {    'name'   : ['latino_WWZ__part0.root'] ,
#                                                'weight' :   '1.' ,
#                 }



samples['Others']  = {    'name'   : getSampleFiles(directory, 'TTWJetsToLNu') \
                                +       getSampleFiles(directory, 'WZTo1L1Nu2Q') \
                                +       getSampleFiles(directory, 'WZTo1L3Nu') \
                                +       getSampleFiles(directory, 'WWW') \
                                +       getSampleFiles(directory, 'WWZ') ,
                                'weight' :   '1.' ,
                        'FilesPerJob' : 3,
                         }


samples['DY']  = {    'name'   : getSampleFiles(directory, 'DYJetsToLL_M-10to50-LO'),
			'weight' :   '1.' ,
			'FilesPerJob' : 3,
                  }

samples['WWTo2L2Nu']  = {    'name'   : getSampleFiles(directory, 'WWTo2L2Nu') ,
                                'weight' :   '1.' ,
				'FilesPerJob' : 3,
                         }

samples['WZTo2L2Q']  = {    'name'   : getSampleFiles(directory, 'WZTo2L2Q') ,
                                'weight' :   '1.' ,
				'FilesPerJob' : 3,
                  }

samples['ZZTo2L2Q']  = {    'name'   : getSampleFiles(directory, 'ZZTo2L2Q') ,
                                'weight' :   '1.' ,
				'FilesPerJob' : 3,
                  }




###########################################
################## DATA ###################
###########################################

