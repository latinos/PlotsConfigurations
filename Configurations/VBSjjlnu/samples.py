import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

samples = {}

################################################
################# SKIMS ########################
################################################

skim=''
#skim='__wwSel'
#skim='__topSel'
#skim='__topSel'
#skim='__vh3lSel' 
#skim='__sfSel' 
#skim='__vbsSel'

##############################################
###### Tree Directory according to site ######
##############################################

treeBaseDir='/gwteray/users/govoni/OneLeptonSkims/'
postProcStep = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l1tightChain__bvetoTight__LepTrgFix__dorochester'
bkgDir = treeBaseDir + 'Apr2017_summer16_SingleLepton_hercules/' + postProcStep + skim +"/" 
sigDir = treeBaseDir + 'VBS_semileptonic_signal_summer16/' + postProcStep + skim +"/" 

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='1'
#Nlep='3'
#Nlep='4'

################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l'
#SFweight      = 'puW*\
#                 effTrigW*\
#                 std_vector_lepton_recoW[0]*\
#                 std_vector_lepton_recoW[1]*\
#                 electron_etaW_2l*electron_ptW_2l*\
#                 veto_EMTFBug'

#GenLepMatch   = 'GenLepMatch'+Nlep+'l'
GenLepMatch = '1'

################################################
############### B-Tag  WP ######################
################################################

bAlgo='cmvav2'
#bAlgo='csvv2ivf'
#bAlgo='DeepCSVB'

bWP='L'
#bWP='M'
#bWP='T'

# ... bPog SF and b veto

bSF='1.'
bVeto='1'
if   bAlgo == 'cmvav2' :
 bSF='bPogSF_CMVA'+bWP
 bVeto='bveto_CMVA'+bWP
elif bAlgo == 'csvv2ivf' :
 bSF='bPogSF_CSV'+bWP
 bVeto='bveto_CSV'+bWP
elif bAlgo == 'DeepCSVB' :
 bSF='bPogSF_deepCSV'+bWP
 bVeto='bveto_deepCSV'+bWP

SFweight += '*'+bSF


################################################
############### Lepton WP ######################
################################################

#... Electron:

eleWP='cut_WP_Tight80X'
#eleWP='cut_WP_Tight80X_SS'
#eleWP='mva_80p_Iso2015'
#eleWP='mva_80p_Iso2016'
#eleWP='mva_90p_Iso2015'
#eleWP='mva_90p_Iso2016'

#... Muon:

muWP='cut_Tight80x'

#... Build formula

# LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
# LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP

#SFweight += '*'+LepWPweight+'*'+LepWPCut
SFweight = '1'

# #... And the fakeW

# if Nlep == '2' :
#   fakeW = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP
# else:
#   fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l'

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'



###########################################
#############  BACKGROUNDS  ###############
###########################################


samples['TT'] = 	{ 	'name'  :getSampleFiles(bkgDir,'TTToSemiLepton',True)
				#	+getSampleFiles(directory,'ST_tW_top_noHad',True)
				#	+getSampleFiles(directory,'ST_tW_antitop_noHad',True) 
                                ,
						'weight' : '1',
						'FilesPerJob' : 10 ,
					}

samples['Wjets'] = { 'name' :   
          getSampleFiles(bkgDir, 'WJetsToLNu_HT100_200', True)\
				+ getSampleFiles(bkgDir, 'WJetsToLNu_HT200_400', True)\
				+ getSampleFiles(bkgDir, 'WJetsToLNu_HT400_600', True)\
				+ getSampleFiles(bkgDir, 'WJetsToLNu_HT600_800', True)\
				+ getSampleFiles(bkgDir, 'WJetsToLNu_HT800_1200_ext1', True)\
				+ getSampleFiles(bkgDir, 'WJetsToLNu_HT1200_2500', True)\
				+ getSampleFiles(bkgDir, 'WJetsToLNu_HT2500_inf', True),
				'weight': '1.',#'puW*std_vector_lepton_recoW[0]*effTrigW1l*baseW*GEN_weight_SM/abs(GEN_weight_SM)' ,
				'FilesPerJob' : 3,
		   }

#others minor backgrounds all inside Others
samples['Others']  = {    'name'   : getSampleFiles(bkgDir, 'TTWJetsToLNu', True) \
                                +       getSampleFiles(bkgDir, 'WZTo1L1Nu2Q', True) \
                                +       getSampleFiles(bkgDir, 'WZTo1L3Nu', True) \
                                +       getSampleFiles(bkgDir, 'WWW', True) \
                                +       getSampleFiles(bkgDir, 'WWZ', True) \
                                +       getSampleFiles(bkgDir, 'DYJetsToLL_M-10to50-LO', True) \
                                +       getSampleFiles(bkgDir, 'WWTo2L2Nu', True) \
                                +       getSampleFiles(bkgDir, 'WZTo2L2Q', True) \
                                +       getSampleFiles(bkgDir, 'ZZTo2L2Q', True) ,
                                'weight' : '1.', #'puW*std_vector_lepton_recoW[0]*effTrigW1l*baseW*GEN_weight_SM/abs(GEN_weight_SM)' ,
                        'FilesPerJob' : 10
}



###########################################
#############   SIGNALS  ##################
###########################################


samples['VBS']  = { 'name' :  
                getSampleFiles(sigDir,'WmTo2J_ZTo2L', True) +
								getSampleFiles(sigDir,'WmToLNu_WmTo2J', True) +
								getSampleFiles(sigDir,'WmToLNu_ZTo2J', True) +
								getSampleFiles(sigDir,'WpTo2J_WmToLNu', True) +
								getSampleFiles(sigDir,'WpTo2J_ZTo2L', True) +
								getSampleFiles(sigDir,'WpToLNu_WmTo2J', True) +
								getSampleFiles(sigDir,'WpToLNu_WpTo2J', True) +
								getSampleFiles(sigDir,'WpToLNu_ZTo2J', True) +
								getSampleFiles(sigDir,'ZTo2L_ZTo2J', True) ,
                           'weight':'1',
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }


# ###########################################
# ################## FAKE ###################
# ###########################################

# samples['Fake_em']  = {'name': [ ] ,
#                        'weight' : fakeW+'*veto_EMTFBug'+'*'+METFilter_DATA+'*(abs(std_vector_lepton_flavour[0])==11 && abs(std_vector_lepton_flavour[1])==13)',              #   weight/cut 
#                        'weights' : [ ] ,
#                        'isData': ['all'],
#                        'FilesPerJob' : 6 ,
#                      }

# samples['Fake_me']  = {'name': [ ] ,
#                        'weight' : fakeW+'*veto_EMTFBug'+'*'+METFilter_DATA+'*(abs(std_vector_lepton_flavour[0])==13 && abs(std_vector_lepton_flavour[1])==11)',              #   weight/cut 
#                        'weights' : [ ] ,
#                        'isData': ['all'],
#                        'FilesPerJob' : 6 ,
#                      }

# for Run in DataRun :
#   directory = treeBaseDir+'Apr2017_Run2016'+Run[0]+'_RemAOD/lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__dorochester__multiFakeW__formulasFAKE__hadd'+skimFake+'/'
#   for DataSet in DataSets :
#     FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True)
#     for iFile in FileTarget:
#       samples['Fake_em']['name'].append(iFile)
#       samples['Fake_em']['weights'].append(DataTrig[DataSet])
#       samples['Fake_me']['name'].append(iFile)
#       samples['Fake_me']['weights'].append(DataTrig[DataSet])

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

DataSets = ['SingleMuon','SingleElectron']

DataTrig = {
            'SingleMuon'     : 'trig_SnglMu' ,
            'SingleElectron' : '!trig_SnglMu &&  trig_SnglEle' 
           }

###########################################
################## DATA ###################
###########################################

# samples['DATA']  = {   'name': [ ] ,     
#                        'weight' : 'veto_EMTFBug'+'*'+METFilter_DATA+'*'+LepWPCut,
#                        'weights' : [ ],
#                        'isData': ['all'],                            
#                        'FilesPerJob' : 6 ,
#                   }

# for Run in DataRun :
#   directory = treeBaseDir+'Apr2017_Run2016'+Run[0]+'_RemAOD/lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__dorochester__formulasDATA'+skim+'/'
#   for DataSet in DataSets :
#     FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True)
#     for iFile in FileTarget:
#       samples['DATA']['name'].append(iFile)
#       samples['DATA']['weights'].append(DataTrig[DataSet]) 

