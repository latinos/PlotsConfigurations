import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

#samples = {}

##############################################
###### Tree Directory according to site ######
##############################################

directory = '/gwteras/cms/store/group/OneLepton/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/'
#directory = '/gwterap/cms/store/group/OneLepton/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/'

#samples['Wjets'] = { 'name' :     getSampleFiles(directory, 'WJetsToLNu_HT100_200')\
				#+ getSampleFiles(directory, 'WJetsToLNu_HT200_400')\
				#+ getSampleFiles(directory, 'WJetsToLNu_HT400_600')\
				#+ getSampleFiles(directory, 'WJetsToLNu_HT600_800')\
##				+ getSampleFiles(directory, 'WJetsToLNu_HT800_1200')\
				#+ getSampleFiles(directory, 'WJetsToLNu_HT1200_2500')\
				#+ getSampleFiles(directory, 'WJetsToLNu_HT2500_inf'),
				#'weight': '1.',
			#}

#samples['TT']  = {    'name'   : getSampleFiles(directory, 'TTToSemiLepton') ,
                                                #'weight' :   '1.' ,
                 #}


#samples['TTW']  = {    'name'   : getSampleFiles(directory, 'TTWJetsToLNu') ,
                                                #'weight' :   '1.' ,
	                 #}

samples['WZTo1L1Nu2Q']  = {    'name'   : getSampleFiles(directory, 'WZTo1L1Nu2Q') ,
                                                'weight' :   '1.' ,
                 }

#samples['WZTo1L3Nu']  = {    'name'   : ['latino_WZTo1L3Nu__part0.root',
					#'latino_WZTo1L3Nu__part1.root'] ,
                                                #'weight' :   '1.' ,
                 #}

#samples['WWW']  = {    'name'   : ['latino_WWW__part0.root'] ,
                                                #'weight' :   '1.' ,
                 #}

samples['WWZ']  = {    'name'   : ['latino_WWZ__part0.root'] ,
                                                'weight' :   '1.' ,
                 }


###########################################
################## DATA ###################
###########################################

