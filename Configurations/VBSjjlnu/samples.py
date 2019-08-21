import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

samples = {}

################################################
################# SKIMS ########################
################################################

# skim=''
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

postProcStepSig = 'signal'
sigDir = treeBaseDir + 'VBS_semileptonic_signal_summer16/'        + postProcStepSig + "/" 
postProcStepBkg1  = 'bkgvbs'
bkgDir1 = treeBaseDir + 'Apr2017_summer16_SingleLepton_hercules/' + postProcStepBkg1 +"/" 
postProcStepBkg2  = 'bkgvbs'
bkgDir2 = treeBaseDir + 'QCD_semileptonic_summer16/'              + postProcStepBkg2 + "/" 


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
#SFweight      = 'SFweight'+Nlep+'l'
SFweight      = 'puW \
                *effTrigW1l \
                *std_vector_lepton_recoW[0] \
                *std_vector_lepton_etaW[0]*std_vector_lepton_ptW[0] \
                *veto_EMTFBug'

GenLepMatch   = 'GenLepMatch'+Nlep+'l'

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

#LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
#LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP

LepWPCut     = '((std_vector_electron_isTightLepton_'+eleWP+'[0]>0.5) || (std_vector_muon_isTightLepton_'+muWP+'[0]>0.5))'
LepWPweight = '(std_vector_electron_idisoW_'+eleWP+'[0]*std_vector_muon_idisoW_'+muWP+'[0])'


SFweight += '*'+LepWPweight+'*'+LepWPCut

# #... And the fakeW

# if Nlep == '2' :
#   fakeW = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP
# else:
#   fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l'

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'

# no formulasDATA postprocessing on DATA
METFilter_DATA = 'METFilter_DATA' 
# METFilter_Common = '(event.std_vector_trigger_special[0]*\
#                      event.std_vector_trigger_special[1]*\
#                      event.std_vector_trigger_special[2]*\
#                      event.std_vector_trigger_special[3]*\
#                      event.std_vector_trigger_special[5]\
#                    )'

# METFilter_DATA   =  METFilter_Common + '*' + '(event.std_vector_trigger_special[4]*\
#                                               event.std_vector_trigger_special[8]*\
#                                               event.std_vector_trigger_special[9])'


###########################################
#############  BACKGROUNDS  ###############
###########################################

#others minor backgrounds all inside Others
samples['TTWJets']  = {  
        'name': getSampleFiles(bkgDir1, 'TTWJetsToLNu', True) + \
                getSampleFiles(bkgDir1, 'TTWJetsToQQ',  True),
        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
        'FilesPerJob' : 10
}

samples['DYJets']  = {
        'name' : getSampleFiles(bkgDir1, 'DYJetsToLL_M-10to50', True) ,
        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
        'FilesPerJob' : 10
}

samples['VV_VVV']  = {
        'name': getSampleFiles(bkgDir1, 'WWTo2L2Nu',   True) + \
                getSampleFiles(bkgDir1, 'WZTo1L1Nu2Q', True) + \
                getSampleFiles(bkgDir1, 'WZTo1L3Nu',   True) + \
                getSampleFiles(bkgDir1, 'WZTo2L2Q',    True) + \
                getSampleFiles(bkgDir1, 'ZZTo2L2Q',    True) + \
                getSampleFiles(bkgDir1, 'WWW',         True) + \
                getSampleFiles(bkgDir1, 'WWZ',         True) ,
        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
        'FilesPerJob' : 10
}

samples['QCD_WW'] = {
        'name': getSampleFiles(bkgDir2, 'WmTo2J_ZTo2L_QCD',   True)+\
                getSampleFiles(bkgDir2, 'WmToLNu_ZTo2J_QCD',  True)+\
                getSampleFiles(bkgDir2, 'WpTo2J_WmToLNu_QCD', True)+\
                getSampleFiles(bkgDir2, 'WpTo2J_ZTo2L_QCD',   True)+\
                getSampleFiles(bkgDir2, 'WpToLNu_WmTo2J_QCD', True)+\
                getSampleFiles(bkgDir2, 'WpToLNu_ZTo2J_QCD',  True)+\
                getSampleFiles(bkgDir2, 'WmToLNu_WmTo2J_QCD', True)+\
                getSampleFiles(bkgDir2, 'WpToLNu_WpTo2J_QCD', True)+\
                getSampleFiles(bkgDir2, 'ZTo2L_ZTo2J_QCD', True),
        'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
        'FilesPerJob' : 3
}

samples['Wjets'] = { 
        'name': getSampleFiles(bkgDir1, 'WJetsToLNu_HT100_200',       True) + \
                getSampleFiles(bkgDir1, 'WJetsToLNu_HT200_400',       True) + \
                getSampleFiles(bkgDir1, 'WJetsToLNu_HT400_600',       True) + \
                getSampleFiles(bkgDir1, 'WJetsToLNu_HT600_800',       True) + \
                getSampleFiles(bkgDir1, 'WJetsToLNu_HT800_1200_ext1', True) + \
                getSampleFiles(bkgDir1, 'WJetsToLNu_HT1200_2500',     True) + \
                getSampleFiles(bkgDir1, 'WJetsToLNu_HT2500_inf',      True),
        'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
        'FilesPerJob' : 3,
}

samples['ST'] = {
        'name': getSampleFiles(bkgDir1,'ST_s-channel',         True) + \
                getSampleFiles(bkgDir1,'ST_t-channel_antitop', True) + \
                getSampleFiles(bkgDir1,'ST_t-channel_top',     True) + \
                getSampleFiles(bkgDir1,'ST_tW_antitop',        True) + \
                getSampleFiles(bkgDir1,'ST_tW_top',            True),
        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,
        'FilesPerJob' : 10 ,
}

samples['TT'] = { 
        'name'  :getSampleFiles(bkgDir1,'TTToSemiLepton',True) + \
                 getSampleFiles(bkgDir1,'TTTo2L2Nu',True),
        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,
        'FilesPerJob' : 10 ,
}



# samples['QCD_Pt'] = {
#         'name': getSampleFiles(bkgDir1,'QCD_Pt-15to20_MuEnrichedPt5',     True) + \
#                 getSampleFiles(bkgDir1,'QCD_Pt-20to30_EMEnriched',        True) + \
#                 getSampleFiles(bkgDir1,'QCD_Pt-20toInf_MuEnrichedPt15',   True) + \
#                 getSampleFiles(bkgDir1,'QCD_Pt-30to50_EMEnriched',        True) + \
#                 getSampleFiles(bkgDir1,'QCD_Pt-30toInf_DoubleEMEnriched', True) + \
#                 getSampleFiles(bkgDir1,'QCD_Pt-50to80_EMEnriched',        True) + \
#                 getSampleFiles(bkgDir1,'QCD_Pt_170to250_bcToE',           True) + \
#                 getSampleFiles(bkgDir1,'QCD_Pt_20to30_bcToE',             True) + \
#                 getSampleFiles(bkgDir1,'QCD_Pt_250toInf_bcToE',           True) + \
#                 getSampleFiles(bkgDir1,'QCD_Pt_30to80_bcToE',             True) + \
#                 getSampleFiles(bkgDir1,'QCD_Pt_80to170_bcToE',            True),
#         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,
#         'FilesPerJob' : 10 ,
# }

###########################################
#############   SIGNALS  ##################
###########################################


samples['VBS']  = { 'name' :  
               getSampleFiles(sigDir,'WmTo2J_ZTo2L',   True) + \
               getSampleFiles(sigDir,'WmToLNu_WmTo2J', True) + \
               getSampleFiles(sigDir,'WmToLNu_ZTo2J',  True) + \
               getSampleFiles(sigDir,'WpTo2J_WmToLNu', True) + \
               getSampleFiles(sigDir,'WpTo2J_ZTo2L',   True) + \
               getSampleFiles(sigDir,'WpToLNu_WmTo2J', True) + \
               getSampleFiles(sigDir,'WpToLNu_WpTo2J', True) + \
               getSampleFiles(sigDir,'WpToLNu_ZTo2J',  True) + \
               getSampleFiles(sigDir,'ZTo2L_ZTo2J',    True) ,
       'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,
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

samples['DATA']  = {   'name': [ ] ,     
                       'weight' : 'veto_EMTFBug'+'*'+METFilter_DATA+'*'+LepWPCut,
                       'weights' : [ ],
                       'isData': ['all'],                            
                       'FilesPerJob' : 6 ,
                  }

for Run in DataRun :
  directory = treeBaseDir+'Apr2017_Run2016'+Run[0]+'_RemAOD/lepSel__EpTCorr__TrigMakerData__cleanTauData__hadd__l1tight_l2veto_btag_4jets__VBSjetpairAndVars__formulasDATA/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet]) 

