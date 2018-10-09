import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

#samples = {}

##############################################
###### Tree Directory according to site ######
##############################################

treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'

#directoryData = treeBaseDir+'Run2017_nAOD_v1_Study2017/DATAl1loose2017'
#directoryData = treeBaseDir+'Run2017_nAOD_v1_Full2017/DATAl1loose2017__l2loose__hadd'
directoryData = treeBaseDir+'Run2017_nAOD_v1_Full2017/DATAl1loose2017'
directoryMC = treeBaseDir+'Fall2017_nAOD_v1_Study2017/MCl1loose2017__baseW__hadd'

################################################
############ BASIC MC WEIGHTS ##################
################################################

#XSWeight      = 'baseW* Generator_weight/abs(Generator_weight)'
XSWeight      = 'baseW* Generator_weight'
PUWeight      = 'puWeight'

###########################################
#############  BACKGROUNDS  ###############
###########################################


samples['ttbar'] = {    'name'   :   getSampleFiles(directoryMC,'TTTo2L2Nu') ,
                        'weight' : XSWeight+'*'+PUWeight,
                        'FilesPerJob' : 2 ,
                        }

samples['ttsemileptonic'] = {    'name'   :   getSampleFiles(directoryMC,'TTToSemileptonic') ,
                                 'weight' : XSWeight+'*'+PUWeight,
                                 'FilesPerJob' : 2 ,
                                 }

samples['singletop'] = {    'name'   :   getSampleFiles(directoryMC,'ST_tW_top') + getSampleFiles(directoryMC, 'ST_tW_antitop') ,
                            'weight' : XSWeight+'*'+PUWeight,
                            'FilesPerJob' : 2 ,
                            }


samples['DY'] = {    'name'   :   getSampleFiles(directoryMC,'DYJetsToLL_M-50') + getSampleFiles(directoryMC, 'DYJetsToLL_M-5to50-LO'),
                     'weight' : XSWeight+'*'+PUWeight,
                     'FilesPerJob' : 2 ,
                     }

samples['WJets'] = {    'name'   :   getSampleFiles(directoryMC,'WJetsToLNu-LO') ,
                        'weight' : XSWeight+'*'+PUWeight,
                        'FilesPerJob' : 2 ,
                        }

samples['WW'] = {    'name'   :   getSampleFiles(directoryMC,'WW-LO') ,
                     'weight' : XSWeight+'*'+PUWeight,
                     'FilesPerJob' : 2 ,
                     }

samples['WZ'] = {    'name'   : getSampleFiles(directoryMC,'WZ') ,
                     'weight' : XSWeight+'*'+PUWeight,
                     'FilesPerJob' : 2 ,
                     }

samples['ZZ'] = {    'name'   : getSampleFiles(directoryMC,'ZZ') ,
                     'weight' : XSWeight+'*'+PUWeight,
                     'FilesPerJob' : 2 ,
                     }

samples['VVV'] = {    'name'   : getSampleFiles(directoryMC,'WWW') + getSampleFiles(directoryMC,'WWZ') + getSampleFiles(directoryMC,'WZZ') + getSampleFiles(directoryMC,'ZZZ'),
                      'weight' : XSWeight+'*'+PUWeight,
                      'FilesPerJob' : 2 ,
                      }

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


###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,     
                       'weight' : '1' ,
                       'weights' : [ ],
                       'isData': ['all'],                            
                       'FilesPerJob' : 2,
                  }

for Run in DataRun :
  for DataSet in DataSets :
    #FileTarget = getSampleFiles(directoryData,DataSet+'_'+Run[1]+'__part0',True)
    FileTarget = getSampleFiles(directoryData,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append("1")

