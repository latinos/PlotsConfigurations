import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

samples = {}

skim=''

directory = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/'
chargeFlipDir = '/eos/cms/store/cmst3/group/hww/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__ChargeFlip/'
PromptSubtr = '/eos/cms/store/cmst3/group/hww/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__fakeWMC/'
MCDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/'


################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='2'
#Nlep='3'
#Nlep='4'

################################################
############### Lepton WP ######################
################################################

eleWP='mvaFall17Iso_WP90_SS'
muWP='cut_Tight_HWWW'

LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP


################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut
GenLepMatch   = 'GenLepMatch'+Nlep+'l'


################################################
############## FAKE WEIGHTS ####################
################################################

if Nlep == '2' :
    fakeW = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP
else:
    fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l'


################################################
############### B-Tag  WP ######################
################################################

# Definitions in aliases.py

# SFweight += '*btagSF'

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
            ['B','Run2017B-31Mar2018-v1'] ,
            ['C','Run2017C-31Mar2018-v1'] ,
            ['D','Run2017D-31Mar2018-v1'] ,
            ['E','Run2017E-31Mar2018-v1'] ,
            ['F','Run2017F-31Mar2018-v1'] ,
          ]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']

DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu &&  Trigger_dblMu' ,
            'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu &&  Trigger_sngMu' ,
            'DoubleEG'       : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu &&  Trigger_dblEl' ,
            'SingleElectron' : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && !Trigger_dblEl &&  Trigger_sngEl' ,
           }

###########################################
############  Reducible Bkg  ##############
###########################################
######## Vgamma ########

samples['Vg']  = {  'name'  :getSampleFiles(MCDir,'Zg',False,'nanoLatino_')
				+getSampleFiles(MCDir,'Wg_MADGRAPHMLM',False,'nanoLatino_')
                                ,
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,
                        'FilesPerJob': 1,
                  }

######### VV #########

samples['ZZ'] = {  	'name':getSampleFiles(MCDir,'ZZTo2L2Nu',False,'nanoLatino_')
                          +getSampleFiles(MCDir,'ZZTo2L2Q',False,'nanoLatino_')
                          +getSampleFiles(MCDir,'ZZTo4L',False,'nanoLatino_'),
					'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
					'FilesPerJob' : 6 ,
                }


samples['WZ']  = {  'name'   :getSampleFiles(MCDir,'WZTo2L2Q',False,'nanoLatino_')
                             +getSampleFiles(MCDir,'WZTo3LNu',False,'nanoLatino_')
    ,
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                    'FilesPerJob' : 1,
                    }


########## VVV #########

samples['VVV'] = {    'name':getSampleFiles(MCDir,'ZZZ',False,'nanoLatino_')
                            +getSampleFiles(MCDir,'WZZ',False,'nanoLatino_')
                            +getSampleFiles(MCDir,'WWZ',False,'nanoLatino_')
                            +getSampleFiles(MCDir,'WWW',False,'nanoLatino_')
							+getSampleFiles(MCDir,'TTWJetsToLNu',False,'nanoLatino_')
							+getSampleFiles(MCDir,'TTZToLLNuNu_M-10',False,'nanoLatino_')
                            +getSampleFiles(MCDir,'TTWjets',False,'nanoLatino_')
                            ,
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,
                      'FilesPerJob' : 15,
                  }

########## DPS #########

samples['DPS'] = {    'name':getSampleFiles(MCDir,'WWTo2L2Nu_DoubleScattering',False,'nanoLatino_')
                            ,
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,
                      'FilesPerJob' : 1,
                  }


###########################################
#######  IRREDUCIBLE BACKGROUNDS  #########
###########################################

samples['WW_strong'] = {   	'name'   :getSampleFiles(MCDir,'WpWpJJ_QCD',False,'nanoLatino_')
									#+getSampleFiles(directory,'WpWpJJ_EWK_QCD_aQGC')
									,
							'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*1.057' ,
							'FilesPerJob' : 1 ,
						}


###########################################
#############   SIGNALS  ##################
###########################################

samples['WpWp_EWK'] = {  	'name'  :getSampleFiles(MCDir,'WpWpJJ_EWK',False,'nanoLatino_')
								#+getSampleFiles(directory,'WpWpJJ_EWK_aQGC')
								,
						'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*1.067466' ,
						'FilesPerJob' : 1 ,
					}

###########################################
################## FAKE ###################
###########################################

samples['Fake_lep']={'name': [ ] ,
                       'weight' :METFilter_DATA+'*'+fakeW,
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 20 ,
					}


for Run in DataRun :
  FakeDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Run2017_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__fakeW/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(FakeDir,DataSet+'_'+Run[1],True,'nanoLatino_')
    for iFile in FileTarget:
      samples['Fake_lep']['name'].append(iFile)
      samples['Fake_lep']['weights'].append(DataTrig[DataSet])

###########################################
################## DATA ###################
###########################################

samples['DATA']  = 	{   'name': [ ] ,
                       'weight' :METFilter_DATA+'*'+LepWPCut,
                       'weights' : [ ],
                       'isData': ['all'],
                       'FilesPerJob' : 20 ,
					}

for Run in DataRun :
  DataDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Run2017_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(DataDir,DataSet+'_'+Run[1],True,'nanoLatino_')
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet])
