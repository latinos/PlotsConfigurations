import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

#samples = {}

directory = '/gwteras/cms/store/group/OneLepton/Apr2017_summer16/lep2SelVBS__MCWeights__hadd__bSFL2pTEffCut__genMatchVariables' 
chargeFlipDir = directory + '__l2tightVBS__chMisId__tightVbsSel/'
PromptSubtr = directory + '__tightVbsSel__bkgWeights/'
MCDir = directory + '__l2tightVBS__tightVbsSel/'

################################################
############ BASIC MC WEIGHTS ##################
################################################

#Weight added manually
XSWeight      = 'baseW*GEN_weight_SM/abs(GEN_weight_SM)'
SFweight    = 'puW*effTrigW*bPogSF_CSVM*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]'
PromptGenLepMatch2l='std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]'

ChargMisSign='((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) != -11*11 || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) != -11*13 )'
SameSign = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1])>0)'


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
#####  Charge Misidentification Bkg  ######
###########################################


###### DY = Z+Jets #######

DY_W = '(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))'

samples['ChMisId']=	{  	'name'	:getSampleFiles(chargeFlipDir,'DYJetsToLL_M-10to50',True)
								+getSampleFiles(chargeFlipDir,'DYJetsToLL_M-50',True) 
								+getSampleFiles(chargeFlipDir,'GluGluWWTo2L2Nu_MCFM',True) 
								+getSampleFiles(chargeFlipDir,'WWTo2L2Nu',True)             							
				                ,
						'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*chargeFlipW',
						'FilesPerJob' : 2 ,
					}
addSampleWeight(samples,'ChMisId','DYJetsToLL_M-10to50'	,DY_W)
addSampleWeight(samples,'ChMisId','DYJetsToLL_M-50'   	,DY_W)


###### TopAntiTop#######

samples['ttbar'] = 	{ 	'name'  :getSampleFiles(chargeFlipDir,'TTTo2L2Nu',True)
					+getSampleFiles(chargeFlipDir,'ST_tW_top_noHad',True)
					+getSampleFiles(chargeFlipDir,'ST_tW_antitop_noHad',True) 
                                ,
						'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*chargeFlipW',
						'FilesPerJob' : 6 ,
					}



###########################################
#########  Prompt Substraction  ###########
###########################################
#The FakeW=FakeR/1-FakeR is calculated from DATA in a region enhanced in non-Prompt and fake leptons. Using Simulations is possible to substract the fake contributions (done using two regions: Tight-Loose and Loose-Loose) leaving only the non-prompt background (TL-LL)DATA-(TL-LL)Sim*FakeW=N_non-prompt
samples['DY_promptSubtr']  = { 	'name' 	:getSampleFiles(PromptSubtr,'DYJetsToLL_M-10to50',True)
										+getSampleFiles(PromptSubtr,'DYJetsToLL_M-50',True)    
										,
								'weight' : '-1.*fakeW2l*'+XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*'+SameSign, 
                 }
				 
addSampleWeight(samples,'DY_promptSubtr','DYJetsToLL_M-10to50'	,DY_W)
addSampleWeight(samples,'DY_promptSubtr','DYJetsToLL_M-50'   	,DY_W)

samples['lep_TT_promptSubtr'] =	{  'name': getSampleFiles(PromptSubtr,'TTTo2L2Nu',True) 
									,
									'weight' : '-1.*fakeW2l*'+XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*'+SameSign,
									'FilesPerJob' : 6 ,									
								}

samples['singleTop_promptSubtr']  = {   'name': getSampleFiles(PromptSubtr,'ST_tW_top_noHad',True) ,
					'weight' : '-1.*fakeW2l*'+XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*'+SameSign, 
					}

samples['singleAntiTop_promptSubtr']  = {    'name': getSampleFiles(PromptSubtr,'ST_tW_antitop_noHad',True),
                                             'weight' : '-1.*fakeW2l*'+XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*'+SameSign, 
					}

samples['ggWWTo2L2Nu_promptSubtr']= {	'name': getSampleFiles(PromptSubtr,'GluGluWWTo2L2Nu_MCFM',True)
										,
										'weight' : '-1.*fakeW2l*'+XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*'+SameSign, 
									}

samples['WWTo2L2Nu_promptSubtr']  = { 	'name': getSampleFiles(PromptSubtr,'WWTo2L2Nu',True)
										,
                                        'weight' : '-1.*fakeW2l*'+XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*'+SameSign, 
									}
					
samples['Vg_promptSubtr'] =	{ 	'name':getSampleFiles(PromptSubtr,'WGJJ',True)  
									   +getSampleFiles(PromptSubtr,'Zg',True) 
					 	#+getSampleFiles(PromptSubtr,'Wg_MADGRAPHMLM',True)
										,    
                                'weight' : '-1.*fakeW2l*'+XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+SameSign,    
							}


samples['ZZ_promptSubtr'] =	{ 	'name': getSampleFiles(PromptSubtr,'ZZTo4L',True) 
										,
								'weight' : '-1.*fakeW2l*'+XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*'+SameSign,  
							}

samples['WpWpJJ_promptSubtr'] = {  	'name':getSampleFiles(PromptSubtr,'WpWpJJ_EWK',True)
										  ,
									'weight' : '-1.*fakeW2l*'+XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*'+SameSign+'*1.067466',
			}
			
samples['WmWmJJ_promptSubtr'] = {  	'name':getSampleFiles(PromptSubtr,'WmWmJJ_EWK_powheg',True) 
										  ,
									'weight' : '-1.*fakeW2l*baseW*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*'+SameSign+'*1.067466',
								}								

samples['WpWpJJ_QCD_promptSubtr'] = {  	'name':getSampleFiles(PromptSubtr,'WpWpJJ_QCD',True)
											  ,
										'weight' : '-1.*fakeW2l*'+XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*'+SameSign+'*1.057', 
									}

samples['VVV_promptSubtr']= {	'name':getSampleFiles(PromptSubtr,'WZZ',True) 
									  +getSampleFiles(PromptSubtr,'ZZZ',True)
									  +getSampleFiles(PromptSubtr,'WWW',True) 
									  +getSampleFiles(PromptSubtr,'WWZ',True) 
									  +getSampleFiles(PromptSubtr,'TTZToQQ',True) 
									  +getSampleFiles(PromptSubtr,'TTWJetsToQQ',True) 
									  +getSampleFiles(PromptSubtr,'TTWJetsToLNu',True) 
									  +getSampleFiles(PromptSubtr,'TTZToLLNuNu_M-10',True)
									  ,								  
								'weight' : '-1.*fakeW2l*'+XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*'+SameSign, 
							}

samples['DPS_promptSubtr']= {  	'name': getSampleFiles(PromptSubtr,'WWTo2L2Nu_DoubleScattering',True)
										, 
								'weight' : '-1.*fakeW2l*baseW*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*'+SameSign, 
							}       
        
samples['WZ_promptSubtr'] =	{	'name': [ ], 
								'weight' : '-1.*fakeW2l*'+XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*'+SameSign,
								'weights' : [ ],
								'FilesPerJob' : 6 ,                                    
							}
MyWeights={
	   #'WZTo3LNu'						   : '1' , 
           'WLLJJToLNu_M-4To60_EWK_4F'         : '1.' ,
           'WLLJJToLNu_M-60_EWK_4F'            : '1.' ,
           'WLLJJToLNu_M-4To50_QCD_0Jet'       : '1.206' ,
           'WLLJJToLNu_M-4To50_QCD_1Jet'       : '1.206' ,
           'WLLJJToLNu_M-4To50_QCD_2Jet'       : '1.206' ,
           'WLLJJToLNu_M-4To50_QCD_3Jet'       : '1.206' ,
           'WLLJJToLNu_M-50_QCD_0Jet'          : '1.206' ,
           'WLLJJToLNu_M-50_QCD_1Jet'          : '1.206' ,
           'WLLJJToLNu_M-50_QCD_2Jet'          : '1.206' ,
           'WLLJJToLNu_M-50_QCD_3Jet'          : '1.206' ,
           'tZq_ll'                            : '1.',
           }
		   
for DataSet in MyWeights.keys():
    FileTarget = getSampleFiles(PromptSubtr,DataSet,True)
    for iFile in FileTarget:
      samples['WZ_promptSubtr']['name'].append(iFile)
      samples['WZ_promptSubtr']['weights'].append(MyWeights[DataSet]) 



###########################################
############  Reducible Bkg  ##############
###########################################
######## Vgamma ########

samples['Vg']  =  {     'name'  :getSampleFiles(MCDir,'Zg',True)
				+getSampleFiles(MCDir,'WGJJ',True)
				#+getSampleFiles(MCDir,'Wg_MADGRAPHMLM',True)
                                ,
                        'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC +'*'+SameSign,
                  }

######### VV #########

samples['ZZ'] = {  	'name':getSampleFiles(MCDir,'ZZTo4L',True)
						  ,   
					'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*'+SameSign ,  
					'FilesPerJob' : 6 ,
                }
    

samples['WZ'] =	{ 	'name':[]
                            ,
					'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*'+SameSign , 
					'weights' : [ ],
					'FilesPerJob' : 6 ,
                }
MyWeights={
	   #'WZTo3LNu'						   : '1' , 
           'WLLJJToLNu_M-4To60_EWK_4F'         : '1.' ,
           'WLLJJToLNu_M-60_EWK_4F'            : '1.' ,
           'WLLJJToLNu_M-4To50_QCD_0Jet'       : '1.206' ,
           'WLLJJToLNu_M-4To50_QCD_1Jet'       : '1.206' ,
           'WLLJJToLNu_M-4To50_QCD_2Jet'       : '1.206' ,
           'WLLJJToLNu_M-4To50_QCD_3Jet'       : '1.206' ,
           'WLLJJToLNu_M-50_QCD_0Jet'          : '1.206' ,
           'WLLJJToLNu_M-50_QCD_1Jet'          : '1.206' ,
           'WLLJJToLNu_M-50_QCD_2Jet'          : '1.206' ,
           'WLLJJToLNu_M-50_QCD_3Jet'          : '1.206' ,
           'tZq_ll'                            : '1.',
           }
		   
for DataSet in MyWeights.keys():
    FileTarget = getSampleFiles(MCDir,DataSet,True)
    for iFile in FileTarget:
      samples['WZ']['name'].append(iFile)
      samples['WZ']['weights'].append(MyWeights[DataSet])

########## VVV #########

samples['VVV'] = {    'name':getSampleFiles(MCDir,'ZZZ',True)
                            +getSampleFiles(MCDir,'WZZ',True)
                            +getSampleFiles(MCDir,'WWZ',True)
                            +getSampleFiles(MCDir,'WWW',True)
							+getSampleFiles(MCDir,'TTWJetsToLNu',True)
							+getSampleFiles(MCDir,'TTZToLLNuNu_M-10',True)
                            ,   
                      'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC +'*'+SameSign,  
                  }

########## DPS #########

samples['DPS'] = {    'name':getSampleFiles(MCDir,'WWTo2L2Nu_DoubleScattering',True)
                            ,   
                      'weight' :'baseW*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC +'*'+SameSign,  
                  }


###########################################
#######  IRREDUCIBLE BACKGROUNDS  #########
###########################################

samples['WW_strong'] = {   	'name'   :getSampleFiles(MCDir,'WpWpJJ_QCD',True)
									#+getSampleFiles(directory,'WpWpJJ_EWK_QCD_aQGC')
									,
							'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*'+SameSign+'*1.057' ,    
							'FilesPerJob' : 1 ,
						}


###########################################
#############   SIGNALS  ##################
###########################################

samples['WpWp_EWK'] = {  	'name'  :getSampleFiles(MCDir,'WpWpJJ_EWK',True)
								#+getSampleFiles(directory,'WpWpJJ_EWK_aQGC')
								,
						'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*'+SameSign+'*1.067466' ,    
						'FilesPerJob' : 1 ,
					}
					
samples['WmWm_EWK'] = {  	'name'  :getSampleFiles(MCDir,'WmWmJJ_EWK_powheg',True)
								#+getSampleFiles(directory,'WpWpJJ_EWK_aQGC')
								,
						'weight' : 'baseW*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*'+SameSign+'*1.067466' ,    
						'FilesPerJob' : 1 ,
					}					

###########################################
################## FAKE ###################
###########################################

samples['Fake_lep']={'name': [ ] ,
                       'weight' : 'fakeW2l'+'*'+METFilter_DATA+'*'+SameSign,              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 6 ,
					}


for Run in DataRun :
  FakeDir = '/gwteras/cms/store/group/OneLepton/Apr2017_Run2016'+Run[0]+'_RemAOD/lep2SelVBS__hadd__EpTCorr__TrigMakerData__tightVbsSel__bkgWeights/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(FakeDir,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['Fake_lep']['name'].append(iFile)
      samples['Fake_lep']['weights'].append(DataTrig[DataSet])

###########################################
################## DATA ###################
###########################################

samples['DATA']  = 	{   'name': [ ] ,     
                       'weight' :METFilter_DATA+'*'+SameSign,
                       'weights' : [ ],
                       'isData': ['all'],                            
                       'FilesPerJob' : 6 ,
					}

for Run in DataRun :
  DataDir = '/gwteras/cms/store/group/OneLepton/Apr2017_Run2016'+Run[0]+'_RemAOD/lep2SelVBS__hadd__EpTCorr__TrigMakerData__l2tightVBS__tightVbsSel/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(DataDir,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet]) 

