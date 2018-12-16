import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

samples={}

skim=''
##############################################
###### Tree Directory according to site ######
##############################################

SITE=os.uname()[1]
xrootdPath=''
if    'iihe' in SITE :
  xrootdPath  = 'dcap://maite.iihe.ac.be/' 
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/'
elif  'cern' in SITE :
  #xrootdPath='root://eoscms.cern.ch/'
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'

directory = treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017'


################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight2l*LepSF2l__ele_mvaFall17Iso_WP90__mu_cut_Tight_HWWW*PrefireWeight'
GenLepMatch   = 'GenLepMatch2l'

################################################
############### B-Tag  WP ######################
################################################



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
						['F','Run2017F-31Mar2018-v1']
            
          ]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']

DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
            'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
            'DoubleEG'       : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && Trigger_dblEl' ,
            'SingleElectron' : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && !Trigger_dblEl && Trigger_sngEl' ,
           }

###########################################
#############  BACKGROUNDS  ###############
###########################################




samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToLL_M-50',False,'nanoLatino_') ,
                                 # + getSampleFiles(directory,'DYJetsToLL_M-50')     ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 20,
                 }


samples['top'] = {    'name'   :   getSampleFiles(directory,'TTTo2L2Nu',False,'nanoLatino_') ,
                                 #+ getSampleFiles(directory,'ST_s-channel',False,'nanoLatino_') 
				 #+ getSampleFiles(directory,'ST_t-channel_antitop',False,'nanoLatino_') 
				 #+ getSampleFiles(directory,'ST_t-channel_top',False,'nanoLatino_') 
				 #+ getSampleFiles(directory,'ST_tW_antitop',False,'nanoLatino_') 
				 #+ getSampleFiles(directory,'ST_tW_top',False,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 1 ,
                 }


###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,     
                       'weight' : METFilter_DATA,
                       'weights' : [ ],
                       'isData': ['all'],                            
                       'FilesPerJob' : 20,
                  }

for Run in DataRun :
	directory = treeBaseDir+'Run2017_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017/'
	for DataSet in DataSets :
		FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
		for iFile in FileTarget:
			print(iFile)
			samples['DATA']['name'].append(iFile)
			samples['DATA']['weights'].append(DataTrig[DataSet])

