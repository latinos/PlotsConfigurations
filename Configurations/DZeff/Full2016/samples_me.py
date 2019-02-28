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
  #treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'

#directory = treeBaseDir+'Fall2017_nAOD_v1_Full2017/MCl1loose2017__MCformulas__MCWeights2017'
directory = treeBaseDir+'Run2016_94X_nAODv3_Full2016v2/DATAl1loose2016__l2loose__l2tightOR2016'

DataRun = [ 
            ['F','Run2016F-22Aug2018-v1'] ,
            ['G','Run2016G-22Aug2018-v1'] ,
            ['H','Run2016H-22Aug2018-v1']
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
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,     
                       #'weight' : 'trigger',
                       'weight' : '1',
                       #'weight' : 'std_vector_trigger[1]',
                       'isData': ['all'],
                       'weights' : [ ],
                       'FilesPerJob' : 5 ,
                  }

for Run in DataRun :
	directory = treeBaseDir+'Run2016_94X_nAODv3_Full2016v2/DATAl1loose2016__l2loose__l2tightOR2016'
	for DataSet in DataSets :
		FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
		for iFile in FileTarget:
			print(iFile)
			samples['DATA']['name'].append(iFile)
			samples['DATA']['weights'].append(DataTrig[DataSet])
