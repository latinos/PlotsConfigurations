import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

#samples = {}

directory = '/gwteras/cms/store/group/OneLepton/Apr2017_summer16/lep2SelVBS__MCWeights__hadd__bSFL2pTEffCut__genMatchVariables' 
#chargeFlipDir = directory + '__l2tightVBS__chMisId__tightVbsSel/'
#PromptSubtr = directory + '__tightVbsSel__bkgWeights/'
MCDir = directory + '__l2tightVBS__tightVbsSel/'

################################################
############ BASIC MC WEIGHTS ##################
################################################
#Weight added manually
XSWeight      = 'baseW*GEN_weight_SM/abs(GEN_weight_SM)'
SFweight    = 'puW*effTrigW*bPogSF_CSVM*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]'
PromptGenLepMatch2l='std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]'

################################################
############   MET  FILTERS  ###################
################################################
#Adding manually missing trasverse energy filter (same defined in formulasToAdd.py)
METFilter_Common = '(std_vector_trigger_special[0]*\
                     std_vector_trigger_special[1]*\
                     std_vector_trigger_special[2]*\
                     std_vector_trigger_special[3]*\
                     std_vector_trigger_special[5]\
                   )'

METFilter_DATA   =  METFilter_Common + '*' + '(std_vector_trigger_special[4]*\
                                              (! std_vector_trigger_special[6])*\
                                              (! std_vector_trigger_special[7])*\
                                              std_vector_trigger_special[8]*\
                                              std_vector_trigger_special[9])'

METFilter_MCver  =  '(std_vector_trigger_special[8]==-2.)'
METFilter_MCOld  =  '(std_vector_trigger_special[6]*std_vector_trigger_special[7])'
METFilter_MCNew  =  '(std_vector_trigger_special[8]*std_vector_trigger_special[9])'
METFilter_MC = METFilter_Common + '*' + '(('+METFilter_MCver+'*'+METFilter_MCOld+') || ((! '+METFilter_MCver+')*'+METFilter_MCNew+'))' 

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
########  REDUCIBLE BACKGROUNDS  ##########
###########################################


###### DY = Z+Jets #######

DY_W = '(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))'

samples['ChMisId']=	{  	'name'	:getSampleFiles(MCDir,'DYJetsToLL_M-10to50',True)
								+getSampleFiles(MCDir,'DYJetsToLL_M-50',True)    
				                ,
						'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC,#+'*chargeFlipW',
						'FilesPerJob' : 2 ,
					}
addSampleWeight(samples,'ChMisId','DYJetsToLL_M-10to50'	,DY_W)
addSampleWeight(samples,'ChMisId','DYJetsToLL_M-50'   	,DY_W)


###### TopAntiTop#######
Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) )'

samples['ttbar'] = 	{ 	'name'  :getSampleFiles(MCDir,'TTTo2L2Nu',True) 
                                ,
						'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC ,  
						'FilesPerJob' : 6 ,
					}

addSampleWeight(samples,'ttbar','TTTo2L2Nu',Top_pTrw)

samples['Wjets']  = { 	'name'  :getSampleFiles(MCDir,'WJetsToLNu',True)
                                ,
						'weight' :'1',# XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC ,  
					}
######## Vgamma ########

samples['Vg']  =  {     'name'  :getSampleFiles(MCDir,'Wg_MADGRAPHMLM',True)
                                +getSampleFiles(MCDir,'Zg',True)
								+getSampleFiles(MCDir,'WGJJ',True)
                                ,
                        #'suppressNegativeNuisances' :['all'],
                        'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC + '* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                  }

######### VV #########

samples['ZZ'] = {  	'name':getSampleFiles(MCDir,'ZZTo4L',True)
						# + getSampleFiles(directory,'ZZTo4L')
						# + getSampleFiles(MCDir,'ZZTo2L2Q')
						,   
					#'suppressNegativeNuisances' :['all'], 
					'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC ,  
					'FilesPerJob' : 6 ,
                }
    

samples['WZ'] =	{ 	'name':getSampleFiles(MCDir,'WZTo3LNu',True)
                            ,
					#'suppressNegativeNuisances' :['all'], 
					'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC ,  
					'FilesPerJob' : 6 ,
                }

### 1.11 normalisation was measured in 3-lepton

########## VVV #########

samples['VVV'] = {    'name':getSampleFiles(MCDir,'ZZZ',True)
                            +getSampleFiles(MCDir,'WZZ',True)
                            +getSampleFiles(MCDir,'WWZ',True)
                            +getSampleFiles(MCDir,'WWW',True)
                            ,   
                      #'suppressNegative' :['all'], 
                      #'suppressNegativeNuisances' :['all'],
                      'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC ,  
                  }

########## DPS #########

samples['DPS'] = {    'name':getSampleFiles(MCDir,'WWTo2L2Nu_DoubleScattering',True)
                            ,   
                      #'suppressNegative' :['all'], 
                      #'suppressNegativeNuisances' :['all'],
                      'weight' :'baseW*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC ,  
                  }


###########################################
#######  IRREDUCIBLE BACKGROUNDS  #########
###########################################

samples['WW_strong'] = {   	'name'   :getSampleFiles(MCDir,'WpWpJJ_QCD',True)
									#+getSampleFiles(directory,'WpWpJJ_EWK_QCD_aQGC')
									,
							#'suppressNegative' :['all'], 
							#'suppressNegativeNuisances' :['all'],
							'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*1.057' ,    
		#					'weights' : ['1.057'],
							'FilesPerJob' : 1 ,
						}


###########################################
#############   SIGNALS  ##################
###########################################

samples['WW_EWK'] = {  	'name'  :getSampleFiles(MCDir,'WmWmJJ_EWK_powheg',True)
								+getSampleFiles(MCDir,'WpWpJJ_EWK',True)
								#+getSampleFiles(directory,'WpWpJJ_EWK_aQGC')
								,
						#'suppressNegative' :['all'], 
						#'suppressNegativeNuisances' :['all'],
						'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*1.067466' ,    
	#					'weights' : ['1.067466'],
						'FilesPerJob' : 1 ,
					}

###########################################
################## FAKE ###################
###########################################

samples['Fake_em']={'name': [ ] ,
                       'weight' : 'fakeW2l'+'*'+METFilter_DATA+'*(abs(std_vector_lepton_flavour[0])==11 && abs(std_vector_lepton_flavour[1])==13)',              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 6 ,
					}
samples['Fake_me']={'name': [ ] ,
                       'weight' : 'fakeW2l'+'*'+METFilter_DATA+'*(abs(std_vector_lepton_flavour[0])==13 && abs(std_vector_lepton_flavour[1])==11)',              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 6 ,
                    }

samples['Fake_ee']=	{'name': [ ] ,
                       'weight' : 'fakeW2l'+'*'+METFilter_DATA+'*(abs(std_vector_lepton_flavour[0])==11 && abs(std_vector_lepton_flavour[1])==11)',              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 6 ,
                    }

samples['Fake_mm']=	{'name': [ ] ,
                       'weight' : 'fakeW2l'+'*'+METFilter_DATA+'*(abs(std_vector_lepton_flavour[0])==13 && abs(std_vector_lepton_flavour[1])==13)',              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 6 ,
                    }


for Run in DataRun :
  directory = '/gwteras/cms/store/group/OneLepton/Apr2017_Run2016'+Run[0]+'_RemAOD/lep2SelVBS__hadd__EpTCorr__TrigMakerData__tightVbsSel__bkgWeights/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['Fake_em']['name'].append(iFile)
      samples['Fake_em']['weights'].append(DataTrig[DataSet])
      samples['Fake_me']['name'].append(iFile)
      samples['Fake_me']['weights'].append(DataTrig[DataSet])
      samples['Fake_mm']['name'].append(iFile)
      samples['Fake_mm']['weights'].append(DataTrig[DataSet])
      samples['Fake_ee']['name'].append(iFile)
      samples['Fake_ee']['weights'].append(DataTrig[DataSet])

###########################################
################## DATA ###################
###########################################

samples['DATA']  = 	{   'name': [ ] ,     
                       'weight' :METFilter_DATA,
                       'weights' : [ ],
                       'isData': ['all'],                            
                       'FilesPerJob' : 6 ,
					}

for Run in DataRun :
  directory = '/gwteras/cms/store/group/OneLepton/Apr2017_Run2016'+Run[0]+'_RemAOD/lep2SelVBS__hadd__EpTCorr__TrigMakerData__l2tightVBS__tightVbsSel/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet]) 

