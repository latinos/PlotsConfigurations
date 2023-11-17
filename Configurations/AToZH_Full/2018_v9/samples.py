import os
import subprocess

global getSampleFiles
from LatinoAnalysis.Tools.commonTools import getSampleFiles, addSampleWeight, getBaseWnAOD
def getSampleFilesNano(inputDir,Sample,absPath=False):
    return getSampleFiles(inputDir,Sample,absPath,'nanoLatino_')
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

directory = treeBaseDir+'Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9'

################################################
############ NUMBER OF LEPTONS #################
################################################

#Nlep='2'
Nlep='3'
#Nlep='4'
ZZWeight='1.07'
WZWeight = '1.138'   #NLO to NNLO k-factor
################################################
############### Lepton WP ######################
################################################

eleWP_new = 'mvaFall17V2Iso_WP90'
muWP_new  = 'cut_Tight_HWWW'

#LepWPCut         = 'LepCut'+Nlep+'l__ele_'+eleWP_new+'__mu_'+muWP_new  
LepWPweight      = 'LepSF'+Nlep+'l__ele_'+eleWP_new+'__mu_'+muWP_new

################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*LepWPCut*Jet_PUIDSF*ttHMVAULSF'
PromptGenLepMatch   = 'PromptGenLepMatch'+Nlep+'l'
PromptGenLepMatch2l   = 'PromptGenLepMatch'+'2l'
PromptGenLepMatch3l   = 'PromptGenLepMatch'+'3l'

################################################
############## FAKE WEIGHTS ####################
################################################


#if Nlep == '2' :
#  fakeW = 'fakeW2l_ele_'+eleWP_new+'_mu_'+muWP_new
#else:
#  fakeW = 'fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_'+Nlep+'l'

################################################
############### B-Tag  WP ######################
################################################

SFweight += '*btagSF' #define in aliases.py

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['A','Run2018A-UL2018-v1'],
    ['B','Run2018B-UL2018-v1'],
    ['C','Run2018C-UL2018-v1'],
    ['D','Run2018D-UL2018-v1'],
]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','EGamma']

DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
	    'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
            'EGamma'         : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && (Trigger_sngEl || Trigger_dblEl)' ,
            }



###########################################
#############  BACKGROUNDS  ###############
###########################################
samples['Zg']  =  {     'name'   :    getSampleFilesNano(directory,'ZGToLLG'),
                        'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC + '*(Gen_ZGstar_mass <= 0)',
                        'FilesPerJob' : 3 ,
                 }

samples['ZgS']  = {    'name'   :   getSampleFilesNano(directory,'ZGToLLG'),
                       'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*(Gen_ZGstar_mass > 0)',
                       'FilesPerJob' : 3 ,
                 }




samples['WZ']  = {    'name':   getSampleFilesNano(directory,'WZTo3LNu_mllmin4p0')
                               + getSampleFilesNano(directory,'WZTo2Q2L_mllmin4p0'),
                       'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*'+WZWeight,
                       'FilesPerJob' : 2 ,
             }



samples['ttZ'] = {    'name'   :  getSampleFilesNano(directory,'TTZToLLNuNu_M-10'),
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 5,
                 }
################## ttH ###############

samples['ttH_hww']  = { 'name'   :   getSampleFilesNano(directory,'ttHToNonbb_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                      }


samples['tZq_ll']  = { 'name'   :   getSampleFilesNano(directory,'tZq_ll'),
                       'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                       'FilesPerJob' : 5,                 
}


samples['ZZ']  = {  'name'   :   getSampleFilesNano(directory,'ZZTo2L2Nu')
                               + getSampleFilesNano(directory,'ZZTo2Q2L_mllmin4p0')
                              + getSampleFilesNano(directory,'ZZTo4L'),    #check if ggZZ samples are there and add them
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+'*'+ZZWeight,
                    'FilesPerJob' : 5,
             }

############ VVV ############

samples['VVV']  = {  'name'   :   getSampleFilesNano(directory,'ZZZ')
                                + getSampleFilesNano(directory,'WZZ')
                                + getSampleFilesNano(directory,'WWZ')
                                + getSampleFilesNano(directory,'WWW'),
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                  }

###################### TOP #######################################

samples['top'] = {    'name'   :   getSampleFilesNano(directory,'TTTo2L2Nu') 
                                  + getSampleFilesNano(directory,'ST_s-channel')
                                  + getSampleFilesNano(directory,'ST_t-channel_antitop') 
                                  + getSampleFilesNano(directory,'ST_t-channel_top') 
                                  + getSampleFilesNano(directory,'ST_tW_antitop') 
                                  + getSampleFilesNano(directory,'ST_tW_top'),
                      'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                      'FilesPerJob' : 5,
}

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

samples['TTWJets'] = { 'name': getSampleFilesNano(directory,'TTWJetsToLNu'),
                       'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
		       'FilesPerJob' : 5,
}

##########################################
################ SIGNALS #################
##########################################
samples['AZH_800_600'] = {  'name':  getSampleFilesNano(directory,'AToZHToLLTTbar_MA-800_MH-600'),
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
                  }

samples['AZH_1000_600'] = { 'name': getSampleFilesNano(directory,'AToZHToLLTTbar_MA-1000_MH-600'),
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
                   }

#samples['AZH_1200_1000'] = { 'name': getSampleFilesNano(directory,'AToZHToLLTTbar_MA-1200_MH-1000'),
#                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
#}


#samples['AZH_1200_850'] = { 'name': getSampleFilesNano(directory,'AToZHToLLTTbar_MA-1200_MH-850'),
#                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
#}


samples['AZH_500_350'] = { 'name': getSampleFilesNano(directory,'AToZHToLLTTbar_MA-500_MH-350'),
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
}


#samples['AZH_500_400'] = { 'name': getSampleFilesNano(directory,'AToZHToLLTTbar_MA-500_MH-400'),
#                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
#}


#samples['AZH_700_350'] = { 'name': getSampleFilesNano(directory,'AToZHToLLTTbar_MA-700_MH-350'),
#                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
#}

#samples['AZH_700_370'] = { 'name': getSampleFilesNano(directory,'AToZHToLLTTbar_MA-700_MH-370'),
#                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
#}

#samples['AZH_700_400'] = { 'name': getSampleFilesNano(directory,'AToZHToLLTTbar_MA-700_MH-400'),
#                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
#}

#samples['AZH_900_370'] = { 'name': getSampleFilesNano(directory,'AToZHToLLTTbar_MA-900_MH-370'),
#                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
#}

samples['AZH_900_400'] = { 'name': getSampleFilesNano(directory,'AToZHToLLTTbar_MA-900_MH-400'),
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
}
################## FAKE ###################
###########################################
Fakedirectory = treeBaseDir+'Run2018_UL2018_nAODv9_Full2018v9/DATAl1loose2018v9__l2loose__fakeW'

samples['Fake']  = {   'name': [ ] ,
                       'weight' : 'fakeW*'+ METFilter_DATA,
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 500 ,
                       'suppressNegativeNuisances' :['all'],
                     }


for _, sd in DataRun:
  for pd in DataSets:
      tag = pd + '_' + sd

      if (   ('DoubleMuon' in pd and 'Run2018B' in sd)
	      or ('DoubleMuon' in pd and 'Run2018D' in sd)
	      or ('DoubleMuon' in pd and 'Run2018D' in sd)
	      or ('SingleMuon' in pd and 'Run2018A' in sd)
	      or ('SingleMuon' in pd and 'Run2018B' in sd)
	      or ('SingleMuon' in pd and 'Run2018C' in sd)):
              print("sd      = {}".format(sd))
              print("pd      = {}".format(pd))
              print("Old tag = {}".format(tag))
	      tag = tag.replace('v1','v2')
    	      print("New tag = {}".format(tag))



      FileTarget = getSampleFilesNano(Fakedirectory,tag)
      samples['Fake']['name'].extend(FileTarget)
      samples['Fake']['weights'].extend([DataTrig[pd]] * len(FileTarget))

###########################################
################## DATA ###################
###########################################
Datadirectory = treeBaseDir+'Run2018_UL2018_nAODv9_Full2018v9/DATAl1loose2018v9__l2loose__l2tightOR2018v9'
samples['DATA']  = {   'name': [ ] ,
                       'weight' : METFilter_DATA+'*LepWPCut',
                       'weights' : [ ],
                       'isData': ['all'],
                       'FilesPerJob' : 500 ,
                    }


for _, sd in DataRun:
  for pd in DataSets:
      tag = pd + '_' + sd

      if (   ('DoubleMuon' in pd and 'Run2018B' in sd)
	    or ('DoubleMuon' in pd and 'Run2018D' in sd)
	    or ('DoubleMuon' in pd and 'Run2018D' in sd)
	    or ('SingleMuon' in pd and 'Run2018A' in sd)
	    or ('SingleMuon' in pd and 'Run2018B' in sd)
	    or ('SingleMuon' in pd and 'Run2018C' in sd)):
            print("sd      = {}".format(sd))
	    print("pd      = {}".format(pd))
	    print("Old tag = {}".format(tag))
	    tag = tag.replace('v1','v2')
	    print("New tag = {}".format(tag))


      FileTarget = getSampleFilesNano(Datadirectory,tag)
      samples['DATA']['name'].extend(FileTarget)
      samples['DATA']['weights'].extend([DataTrig[pd]] * len(FileTarget))

