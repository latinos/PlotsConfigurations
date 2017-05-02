import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

#samples = {}

##############################################
###### Tree Directory according to site ######
##############################################

SITE = os.uname()[1]
if    'iihe' in SITE :
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/'
elif  'cern' in SITE :
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/'

directory = treeBaseDir+'Feb2017_summer16/MCl1looseCut__bSFL1pTEffCut__hadd/'








################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'baseW*GEN_weight_SM/abs(GEN_weight_SM)'
#SFweight      = 'puW*bPogSF_CMVAL*effTrigW*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*veto_EMTFBug'
SFweight      = 'puW'
GenLepMatch   = '1'
#GenLepMatch   = 'std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]'

################################################
############   MET  FILTERS  ###################
################################################

METFilter_Common = '(std_vector_trigger_special[0]*std_vector_trigger_special[1]*std_vector_trigger_special[2]*std_vector_trigger_special[3]*std_vector_trigger_special[5])'

METFilter_DATA   =  METFilter_Common + '*' + '(std_vector_trigger_special[4]*!std_vector_trigger_special[6]*!std_vector_trigger_special[7]*std_vector_trigger_special[8]*std_vector_trigger_special[9])'

METFilter_MCver  =  '(std_vector_trigger_special[8]==-2.)'
METFilter_MCOld  =  '(std_vector_trigger_special[6]*std_vector_trigger_special[7])'
METFilter_MCNew  =  '(std_vector_trigger_special[8]*std_vector_trigger_special[9])'
METFilter_MC     =  METFilter_Common + '*' + '(('+METFilter_MCver+'*'+METFilter_MCOld+')||(!'+METFilter_MCver+'*'+METFilter_MCNew+'))' 

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

DataSets = ['SingleMuon', 'SingleElectron']

DataTrig = {
            'SingleMuon'     : ' trig_SnglMu' ,
            'SingleElectron' : '!trig_SnglMu  &&  trig_SnglEle' ,
           }

###########################################
#############  BACKGROUNDS  ###############
###########################################


###### Wjets #######


samples['Wjets'] = {    'name'   :   getSampleFiles(directory,'WJetsToLNu') ,
                        #'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        'weight' :   XSWeight+'*'+SFweight+'*'+GenLepMatch ,
                        #'FilesPerJob' : 1 ,
                 }



###########################################
#############   SIGNALS  ##################
###########################################

             
samples['monoHWW']  = {    'name'   : getSampleFiles(directory,'monoHWW_lep1') ,
                           'weight' :   XSWeight+'*'+SFweight+'*'+GenLepMatch ,
                 }



###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,     
                       #'weight' : 'veto_EMTFBug'+'*'+METFilter_DATA,
                       'weight' : '1',
                       #'weights' : [ ],
                       'isData': ['all'],                            
                       'FilesPerJob' : 1 ,
                  }

for Run in DataRun :
  directory = treeBaseDir+'Feb2017_Run2016'+Run[0]+'_RemAOD/l1looseCut__EpTCorr__hadd/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      #samples['DATA']['weights'].append(DataTrig[DataSet]) 




