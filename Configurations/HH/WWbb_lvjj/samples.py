import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

##############################################
###### Tree Directory according to site ######
##############################################

directory = '/gwteraz/users/amassiro/latino/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC'
data_directory = '/gwteras/cms/store/group/OneLepton/Apr2017_Run2016B_RemAOD/lepSel__EpTCorr__TrigMakerData__cleanTauData__hadd/'

#############################################
########### Definition of weights ###########
#############################################

XSWeight = 'event.baseW*\
                        event.GEN_weight_SM/abs(event.GEN_weight_SM) \
                        if hasattr(event, \'GEN_weight_SM\') else event.baseW'

SFweight1l = 'event.puW*\
                          event.effTrigW*\
                          event.std_vector_lepton_recoW[0]*\
                          event.veto_EMTFBug \
                          if hasattr(event, \'std_vector_lepton_recoW\') else 1.'

METFilter_Common = '(event.std_vector_trigger_special[0]*\
                     event.std_vector_trigger_special[1]*\
                     event.std_vector_trigger_special[2]*\
                     event.std_vector_trigger_special[3]*\
                     event.std_vector_trigger_special[5] )'

METFilter_MCver  =  '(event.std_vector_trigger_special[8]==-2.)'
METFilter_MCOld  =  '(event.std_vector_trigger_special[6]*event.std_vector_trigger_special[7])'
METFilter_MCNew  =  '(event.std_vector_trigger_special[8]*event.std_vector_trigger_special[9])'
METFilter_MC     =  METFilter_Common + '*' + '(('+METFilter_MCver+'*'+METFilter_MCOld+') or ((not '+METFilter_MCver+')*'+METFilter_MCNew+'))' 




# samples

#samples = {}

samples['HH'] = {	'name' : getSampleFiles(directory, 'HHWWbblvjj_nevents5k', True),
			'weight' : XSWeight + '*' + SFweight1l + '*' + METFilter_MC,
		}

samples['Wjets'] = { 	'name' :   getSampleFiles(directory, 'WJetsToLNu_HT100_200', True)\
				+ getSampleFiles(directory, 'WJetsToLNu_HT200_400', True)\
				+ getSampleFiles(directory, 'WJetsToLNu_HT400_600', True)\
				+ getSampleFiles(directory, 'WJetsToLNu_HT600_800', True)\
				+ getSampleFiles(directory, 'WJetsToLNu_HT800_1200_ext1', True)\
				+ getSampleFiles(directory, 'WJetsToLNu_HT1200_2500', True)\
				+ getSampleFiles(directory, 'WJetsToLNu_HT2500_inf', True),
				'weight': XSWeight + '*' + SFweight1l + '*' + METFilter_MC ,
				'FilesPerJob' : 2,
		   }



samples['TT']  = {    'name'   : getSampleFiles(directory, 'TTToSemiLepton', True) ,
                      'weight' :   XSWeight + '*' + SFweight1l + '*' + METFilter_MC ,
		      'FilesPerJob' : 2,
		 }

#others minor backgrounds all inside Others
#samples['Others']  = {    'name'   : getSampleFiles(directory, 'TTWJetsToLNu') \
#                                +       getSampleFiles(directory, 'WZTo1L1Nu2Q') \
#                                +       getSampleFiles(directory, 'WZTo1L3Nu') \
#                                +       getSampleFiles(directory, 'WWW') \
#                                +       getSampleFiles(directory, 'WWZ') \
#                                +       getSampleFiles(directory, 'DYJetsToLL_M-10to50-LO') \
#                                +       getSampleFiles(directory, 'WWTo2L2Nu') \
#                                +       getSampleFiles(directory, 'WZTo2L2Q') \
#                                +       getSampleFiles(directory, 'ZZTo2L2Q') ,
#                                'weight' :   '1.' ,
#                        'FilesPerJob' : 3,
#                         }

#other minor backgrounds in separated samples
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

#samples['DY']  = {    'name'   : getSampleFiles(directory, 'DYJetsToLL_M-10to50-LO'),
#			'weight' :   '1.' ,
#			'FilesPerJob' : 3,
#                  }

#samples['WWTo2L2Nu']  = {    'name'   : getSampleFiles(directory, 'WWTo2L2Nu') ,
#                                'weight' :   '1.' ,
#				'FilesPerJob' : 3,
#                         }

#samples['WZTo2L2Q']  = {    'name'   : getSampleFiles(directory, 'WZTo2L2Q') ,
#                                'weight' :   '1.' ,
#				'FilesPerJob' : 3,
#                  }

#samples['ZZTo2L2Q']  = {    'name'   : getSampleFiles(directory, 'ZZTo2L2Q') ,
#                                'weight' :   '1.' ,
#				'FilesPerJob' : 3,
#                  }




###########################################
################## DATA ###################
###########################################


samples['DATA']  = {    'name'   : getSampleFiles(data_directory, 'SingleElectron_Run2016B-03Feb2017_ver2-v2', True) \
				  +getSampleFiles(data_directory, 'SingleMuon_Run2016B-03Feb2017_ver2-v2', True),
				   'weight' : XSWeight + '*' + SFweight1l + '*' + METFilter_MC,
				   'weights' : 'trig_EleMu && (!trig_EleMu && !trig_DbleMu &&  trig_SnglMu) && (!trig_EleMu && !trig_DbleMu && !trig_SnglMu && !trig_DbleEle &&  trig_SnglEle)',
				   'isData': ['all'],
                      		   'FilesPerJob' : 2,
		   }		


#samples['DATA']['weights'].append('trig_EleMu && (!trig_EleMu && !trig_DbleMu &&  trig_SnglMu) && (!trig_EleMu && !trig_DbleMu && !trig_SnglMu && !trig_DbleEle &&  trig_SnglEle)')
