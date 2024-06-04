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

directory = treeBaseDir+'Summer20UL17_106x_nAODv9_Full2017v9/MCl1loose2017v9__MCCorr2017v9NoJERInHorn__l2tightOR2017v9'

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='3'
#Nlep='4'
ZZWeight='1.07'
WZWeight = '1.138' #NLO to NNLO k-factor
TTZWeight = '1.064356' #Cross-section correction factor for the value in samplescrosssections_UL.py, the correct value 0.86 inclusive ttZ xsec is taken from NNLL theory computation. 
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
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*LepWPCut*PrefireWeight*Jet_PUIDSF*ttHMVAULSF'
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
    ['B','Run2017B-UL2017-v1'],
    ['C','Run2017C-UL2017-v1'],
    ['D','Run2017D-UL2017-v1'],
    ['E','Run2017E-UL2017-v1'],
    ['F','Run2017F-UL2017-v1']
]

DataSets = ['MuonEG','SingleMuon','SingleElectron','DoubleMuon', 'DoubleEG']

DataTrig = {
    'MuonEG'         : ' Trigger_ElMu' ,
    'SingleMuon'     : '!Trigger_ElMu && Trigger_sngMu' ,
    'SingleElectron' : '!Trigger_ElMu && !Trigger_sngMu && Trigger_sngEl',
    'DoubleMuon'     : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && Trigger_dblMu',
    'DoubleEG'       : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && !Trigger_dblMu && Trigger_dblEl'
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


samples['ttZ'] = {    'name'   :   getSampleFilesNano(directory,'TTZToLLNuNu_M-10'), 
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+'*'+TTZWeight,
                     'FilesPerJob' : 2,
                 }
################## ttH ###############

samples['ttH_hww']  = { 'name'   :   getSampleFilesNano(directory,'ttHToNonbb_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                        'FilesPerJob' : 3,                     
}


samples['tZq_ll']  = { 'name'   :   getSampleFilesNano(directory,'tZq_ll'),
                       'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                       'FilesPerJob' : 1,                 
}

############ VVV ############

samples['ZZ']  = {  'name'   :   getSampleFilesNano(directory,'ZZTo2L2Nu')
                               + getSampleFilesNano(directory,'ZZTo2Q2L_mllmin4p0')
                               + getSampleFilesNano(directory,'ZZTo4L'),    #check if ggZZ samples are there and add them
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+'*'+ZZWeight,
                    'FilesPerJob' : 1,
             }


samples['VVV']  = {  'name'   :   getSampleFilesNano(directory,'ZZZ')
                                + getSampleFilesNano(directory,'WZZ')
                                + getSampleFilesNano(directory,'WWZ')
                                + getSampleFilesNano(directory,'WWW'),
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                  }

############ Vh h->WW ############

samples['Vh_hww']  = {  'name'   :   getSampleFilesNano(directory,'HZJ_HToWW_M125')
#                                   + getSampleFilesNano(directory,'GluGluZH_HToWW_M125')
                                   + getSampleFilesNano(directory,'HWplusJ_HToWW_M125')
                                   + getSampleFilesNano(directory,'HWminusJ_HToWW_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
			'FilesPerJob' : 3,
}



samples['top'] = {    'name'   :   getSampleFilesNano(directory,'TTTo2L2Nu') 
                                  + getSampleFilesNano(directory,'ST_s-channel')
                                  + getSampleFilesNano(directory,'ST_t-channel_antitop') 
                                  + getSampleFilesNano(directory,'ST_t-channel_top') 
                                  + getSampleFilesNano(directory,'ST_tW_antitop') 
                                  + getSampleFilesNano(directory,'ST_tW_top'),
                      'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                      'FilesPerJob' : 3,
}

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')
addSampleWeight(samples, 'top', 'ST_t-channel_antitop', 3.086)
addSampleWeight(samples, 'top', 'ST_t-channel_top', 3.086)

samples['TTWJets'] = { 'name': getSampleFilesNano(directory,'TTWJets'),
                       'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
		       'FilesPerJob' : 3,
}

############ AZH SIGNAL SAMPLES ############
samples['AZH_1000_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1000_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }


samples['AZH_1100_850'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1100_MH-850'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_500_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-500_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }


samples['AZH_600_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-600_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }


samples['AZH_900_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-900_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }
################## FAKE ###################
###########################################

samples['Fake']  = {   'name': [ ] ,
                       'weight' : 'fakeW*'+ METFilter_DATA,
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 500 ,
                       'suppressNegativeNuisances' :['all'],
                     }

directory = treeBaseDir+'Run2017_UL2017_nAODv9_Full2017v9/DATAl1loose2017v9__l2loose__fakeW'
for Run in DataRun :
  for DataSet in DataSets :
    FileTarget = getSampleFilesNano(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['Fake']['name'].append(iFile)
      samples['Fake']['weights'].append(DataTrig[DataSet])

###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,
                       'weight' : METFilter_DATA+'*LepWPCut',
                       'weights' : [ ],
                       'isData': ['all'],
                       'FilesPerJob' : 500 ,
                    }

directory = treeBaseDir+'Run2017_UL2017_nAODv9_Full2017v9/DATAl1loose2017v9__l2loose__l2tightOR2017v9'
for Run in DataRun :
  for DataSet in DataSets :
    FileTarget = getSampleFilesNano(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
        samples['DATA']['name'].append(iFile)
        samples['DATA']['weights'].append(DataTrig[DataSet])


