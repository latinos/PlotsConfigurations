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
directory = treeBaseDir+'Autumn18_102X_nAODv4_Full2018/MCl1loose2018'


################################################
############ BASIC MC WEIGHTS ##################
################################################

#XSWeight      = 'XSWeight'
#SFweight      = 'SFweight2l*LepSF2l__ele_mvaFall17Iso_WP90__mu_cut_Tight_HWWW'
#GenLepMatch   = 'GenLepMatch2l'

################################################
############### B-Tag  WP ######################
################################################



################################################
############   MET  FILTERS  ###################
################################################

#METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [ 
            ['A1','Run2018A-14Sep2018_ver1-v1'] ,
            ['A2','Run2018A-14Sep2018_ver2-v1'] ,
            ['A3','Run2018A-14Sep2018_ver3-v1'] ,
            ['B1','Run2018B-14Sep2018_ver1-v1'] ,
            ['B2','Run2018B-14Sep2018_ver2-v1'] ,
            ['C1','Run2018C-14Sep2018_ver1-v1'] ,
            ['C2','Run2018C-14Sep2018_ver2-v1'] ,
            ['C3','Run2018C-14Sep2018_ver3-v1'] ,
            ['D2','Run2018D-14Sep2018_ver2-v1'] ,
          ]

DataSets = ['MuonEG','DoubleMuon','EGamma','SingleMuon',]

DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
            'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
            'EGamma'         : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && (Trigger_dblEl || Trigger_sngEl)' ,
           }

###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,     
                       'weight' : METFilter_DATA,
                       'weights' : [ ],
                       'isData': ['all'],                            
                       'FilesPerJob' : 5 ,
                  }

for Run in DataRun :
	directory = treeBaseDir+'Run2018_102X_nAODv4_14Sep_Full2018/DATAl1loose2018__l2loose__l2tightOR2018'
	for DataSet in DataSets :
                if DataSet == 'SingleMuon' and ( Run[0] == 'A1' or Run[0] == 'A2') : continue
		FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
		for iFile in FileTarget:
			print(iFile)
			samples['DATA']['name'].append(iFile)
			samples['DATA']['weights'].append(DataTrig[DataSet])

