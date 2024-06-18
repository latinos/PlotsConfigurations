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

directory = treeBaseDir+'Summer20UL16_106x_nAODv9_HIPM_Full2016v9/MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9'

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='3'
#Nlep='4'
ZZWeight='1.07'
WZWeight = '1.138' #NLO to NNLO k-factor
TTZWeight = '1.064356' #Cross-section correction factor for the value in samplescrosssections_UL.py, 
################################################
############### Lepton WP ######################
################################################

eleWP_new = 'mvaFall17V2Iso_WP90'
muWP_new  = 'cut_Tight80x'

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
    ['B','Run2016B-ver1_HIPM_UL2016-v2'],
    ['B','Run2016B-ver2_HIPM_UL2016-v2'],
    ['C','Run2016C-HIPM_UL2016-v2'],
    ['D','Run2016D-HIPM_UL2016-v2'],
    ['E','Run2016E-HIPM_UL2016-v2'],
    ['F','Run2016F-HIPM_UL2016-v2']
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
                     'FilesPerJob' : 3,
                 }
################## ttH ###############

samples['ttH_hww']  = { 'name'   :   getSampleFilesNano(directory,'ttHToNonbb_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                        'FilesPerJob' : 3,                     
}


samples['tZq_ll']  = { 'name'   :   getSampleFilesNano(directory,'tZq_ll_4f'),
                       'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                       'FilesPerJob' : 2,                 
}

############ VVV ############

samples['ZZ']  = {  'name'   :   getSampleFilesNano(directory,'ZZTo2L2Nu')
                               + getSampleFilesNano(directory,'ZZTo2Q2L_mllmin4p0')
                               + getSampleFilesNano(directory,'ZZTo4L'),    #check if ggZZ samples are there and add them
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC+'*'+ZZWeight,
                    'FilesPerJob' : 2,
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
                      'FilesPerJob' : 4,
}

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')
addSampleWeight(samples, 'top', 'ST_t-channel_antitop', '3.086')
addSampleWeight(samples, 'top', 'ST_t-channel_top', '3.086')

samples['TTWJets'] = { 'name': getSampleFilesNano(directory,'TTWJetsToLNu'),
                       'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
		       'FilesPerJob' : 4,
}

##########################################
################ SIGNALS #################
samples['AZH_1000_330'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1000_MH-330'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1000_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1000_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1000_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1000_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1000_450'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1000_MH-450'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1000_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1000_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1000_550'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1000_MH-550'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1000_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1000_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1000_650'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1000_MH-650'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1000_700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1000_MH-700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1000_750'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1000_MH-750'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1000_800'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1000_MH-800'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1000_850'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1000_MH-850'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1000_900'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1000_MH-900'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1050_330'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1050_MH-330'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1050_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1050_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1050_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1050_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1050_450'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1050_MH-450'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1050_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1050_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1050_550'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1050_MH-550'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1050_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1050_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1050_650'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1050_MH-650'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1050_700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1050_MH-700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1050_750'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1050_MH-750'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1050_800'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1050_MH-800'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1050_850'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1050_MH-850'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1050_900'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1050_MH-900'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1050_950'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1050_MH-950'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1100_1000'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1100_MH-1000'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1100_330'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1100_MH-330'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1100_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1100_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1100_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1100_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1100_450'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1100_MH-450'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1100_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1100_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1100_550'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1100_MH-550'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1100_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1100_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1100_650'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1100_MH-650'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1100_700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1100_MH-700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1100_750'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1100_MH-750'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1100_800'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1100_MH-800'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1100_850'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1100_MH-850'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1100_900'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1100_MH-900'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1100_950'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1100_MH-950'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1150_1050'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1150_MH-1050'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1150_330'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1150_MH-330'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1150_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1150_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1150_450'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1150_MH-450'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1150_550'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1150_MH-550'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1150_650'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1150_MH-650'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1150_750'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1150_MH-750'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1150_850'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1150_MH-850'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1150_950'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1150_MH-950'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1200_1000'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1200_MH-1000'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1200_1100'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1200_MH-1100'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1200_330'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1200_MH-330'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1200_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1200_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1200_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1200_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1200_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1200_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1200_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1200_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1200_700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1200_MH-700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1200_800'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1200_MH-800'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1200_850'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1200_MH-850'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1200_900'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1200_MH-900'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1300_1000'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1300_MH-1000'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1300_1100'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1300_MH-1100'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1300_1200'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1300_MH-1200'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1300_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1300_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1300_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1300_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1300_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1300_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1300_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1300_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1300_700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1300_MH-700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1300_800'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1300_MH-800'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1300_900'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1300_MH-900'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1400_1000'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1400_MH-1000'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1400_1100'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1400_MH-1100'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1400_1200'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1400_MH-1200'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1400_1300'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1400_MH-1300'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1400_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1400_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1400_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1400_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1400_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1400_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1400_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1400_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1400_700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1400_MH-700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1400_800'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1400_MH-800'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1400_900'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1400_MH-900'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1500_1000'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1500_MH-1000'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1500_1100'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1500_MH-1100'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1500_1200'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1500_MH-1200'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1500_1300'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1500_MH-1300'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1500_1400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1500_MH-1400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1500_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1500_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1500_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1500_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1500_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1500_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1500_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1500_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1500_700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1500_MH-700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1500_800'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1500_MH-800'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1500_900'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1500_MH-900'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1600_1000'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1600_MH-1000'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1600_1100'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1600_MH-1100'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1600_1200'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1600_MH-1200'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1600_1300'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1600_MH-1300'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1600_1400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1600_MH-1400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1600_1500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1600_MH-1500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1600_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1600_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1600_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1600_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1600_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1600_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1600_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1600_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1600_700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1600_MH-700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1600_800'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1600_MH-800'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1600_900'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1600_MH-900'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1700_1000'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1700_MH-1000'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1700_1100'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1700_MH-1100'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1700_1200'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1700_MH-1200'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1700_1300'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1700_MH-1300'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1700_1400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1700_MH-1400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1700_1500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1700_MH-1500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1700_1600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1700_MH-1600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1700_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1700_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1700_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1700_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1700_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1700_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1700_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1700_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1700_700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1700_MH-700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1700_800'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1700_MH-800'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1700_900'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1700_MH-900'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1800_1000'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1800_MH-1000'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1800_1100'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1800_MH-1100'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1800_1200'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1800_MH-1200'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1800_1300'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1800_MH-1300'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1800_1400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1800_MH-1400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1800_1500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1800_MH-1500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1800_1600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1800_MH-1600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1800_1700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1800_MH-1700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1800_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1800_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1800_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1800_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1800_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1800_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1800_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1800_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1800_700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1800_MH-700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1800_800'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1800_MH-800'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1800_900'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1800_MH-900'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1900_1000'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1900_MH-1000'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1900_1100'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1900_MH-1100'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1900_1200'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1900_MH-1200'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1900_1300'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1900_MH-1300'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1900_1400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1900_MH-1400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1900_1500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1900_MH-1500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1900_1600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1900_MH-1600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1900_1700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1900_MH-1700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1900_1800'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1900_MH-1800'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1900_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1900_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1900_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1900_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1900_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1900_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1900_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1900_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1900_700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1900_MH-700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1900_800'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1900_MH-800'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_1900_900'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-1900_MH-900'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2000_1000'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2000_MH-1000'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2000_1100'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2000_MH-1100'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2000_1200'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2000_MH-1200'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2000_1300'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2000_MH-1300'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2000_1400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2000_MH-1400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2000_1500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2000_MH-1500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2000_1600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2000_MH-1600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2000_1700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2000_MH-1700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2000_1800'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2000_MH-1800'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2000_1900'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2000_MH-1900'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2000_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2000_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2000_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2000_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2000_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2000_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2000_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2000_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2000_700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2000_MH-700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2000_800'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2000_MH-800'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2000_900'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2000_MH-900'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2100_1000'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2100_MH-1000'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2100_1100'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2100_MH-1100'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2100_1200'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2100_MH-1200'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2100_1300'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2100_MH-1300'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2100_1400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2100_MH-1400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2100_1500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2100_MH-1500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2100_1600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2100_MH-1600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2100_1700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2100_MH-1700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2100_1800'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2100_MH-1800'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2100_1900'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2100_MH-1900'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2100_2000'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2100_MH-2000'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2100_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2100_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2100_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2100_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2100_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2100_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2100_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2100_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2100_700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2100_MH-700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2100_800'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2100_MH-800'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_2100_900'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-2100_MH-900'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_430_330'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-430_MH-330'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_450_330'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-450_MH-330'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_450_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-450_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_500_330'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-500_MH-330'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_500_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-500_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_500_370'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-500_MH-370'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_500_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-500_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_550_330'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-550_MH-330'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_550_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-550_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_550_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-550_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_550_450'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-550_MH-450'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_600_330'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-600_MH-330'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_600_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-600_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_600_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-600_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_600_450'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-600_MH-450'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_600_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-600_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_650_330'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-650_MH-330'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_650_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-650_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_650_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-650_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_650_450'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-650_MH-450'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_650_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-650_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_650_550'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-650_MH-550'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_700_330'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-700_MH-330'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_700_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-700_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_700_370'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-700_MH-370'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_700_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-700_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_700_450'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-700_MH-450'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_700_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-700_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_700_550'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-700_MH-550'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_700_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-700_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_750_330'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-750_MH-330'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_750_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-750_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_750_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-750_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_750_450'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-750_MH-450'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_750_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-750_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_750_550'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-750_MH-550'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_750_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-750_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_750_650'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-750_MH-650'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_800_330'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-800_MH-330'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_800_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-800_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_800_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-800_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_800_450'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-800_MH-450'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_800_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-800_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_800_550'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-800_MH-550'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_800_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-800_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_800_650'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-800_MH-650'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_800_700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-800_MH-700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_850_330'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-850_MH-330'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_850_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-850_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_850_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-850_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_850_450'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-850_MH-450'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_850_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-850_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_850_550'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-850_MH-550'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_850_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-850_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_850_650'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-850_MH-650'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_850_700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-850_MH-700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_850_750'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-850_MH-750'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_900_330'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-900_MH-330'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_900_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-900_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_900_370'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-900_MH-370'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_900_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-900_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_900_450'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-900_MH-450'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_900_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-900_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_900_550'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-900_MH-550'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_900_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-900_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_900_650'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-900_MH-650'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_900_700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-900_MH-700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_900_750'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-900_MH-750'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_900_800'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-900_MH-800'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_950_330'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-950_MH-330'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_950_350'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-950_MH-350'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_950_400'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-950_MH-400'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_950_450'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-950_MH-450'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_950_500'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-950_MH-500'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_950_550'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-950_MH-550'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_950_600'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-950_MH-600'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_950_650'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-950_MH-650'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_950_700'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-950_MH-700'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_950_750'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-950_MH-750'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_950_800'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-950_MH-800'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

samples['AZH_950_850'] = { 'name': getSampleFilesNano(directory, 'AToZHToLLTTbar_MA-950_MH-850'),
                             'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*hasGenA'
                            }

################## FAKE ###################
###########################################
Fakedirectory = treeBaseDir+'Run2016_UL2016_nAODv9_HIPM_Full2016v9/DATAl1loose2016v9__l2loose__fakeW'

samples['Fake']  = {   'name': [ ] ,
                       'weight' : 'fakeW*'+ METFilter_DATA+'*transition_veto',
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 300 ,
                       'suppressNegativeNuisances' :['all'],
                     }


for _, sd in DataRun:
  for pd in DataSets:
      tag = pd + '_' + sd

      if 'DoubleEG' in pd and 'Run2016B-ver2' in sd: # Run2016B-ver2_HIPM_UL2016-v2
           print("sd      = {}".format(sd))
	   print("pd      = {}".format(pd))
	   print("Old tag = {}".format(tag))
	   tag = tag.replace('v2','v3')
	   print("New tag = {}".format(tag))



      FileTarget = getSampleFilesNano(Fakedirectory,tag)
      samples['Fake']['name'].extend(FileTarget)
      samples['Fake']['weights'].extend([DataTrig[pd]] * len(FileTarget))

###########################################
################## DATA ###################
###########################################
Datadirectory = treeBaseDir+'Run2016_UL2016_nAODv9_HIPM_Full2016v9/DATAl1loose2016v9__l2loose__l2tightOR2016v9'
samples['DATA']  = {   'name': [ ] ,
                       'weight' : METFilter_DATA+'*LepWPCut',
                       'weights' : [ ],
                       'isData': ['all'],
                       'FilesPerJob' : 300 ,
                    }


for _, sd in DataRun:
  for pd in DataSets:
      tag = pd + '_' + sd

      if 'DoubleEG' in pd and 'Run2016B-ver2' in sd:  # Run2016B-ver2_HIPM_UL2016-v2
          print("sd      = {}".format(sd))
	  print("pd      = {}".format(pd))
	  print("Old tag = {}".format(tag))
	  tag = tag.replace('v2','v3')
	  print("New tag = {}".format(tag))







      FileTarget = getSampleFilesNano(Datadirectory,tag)
      samples['DATA']['name'].extend(FileTarget)
      samples['DATA']['weights'].extend([DataTrig[pd]] * len(FileTarget))

