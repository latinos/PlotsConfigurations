import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

################################################
################# SKIMS ########################
################################################

skim='__vh3lSel'
#skim='__wwSel'
#skim='__topSel'
#skim='__topSel'
#skim='__vh3lSel' 
#skim='__sfSel' 
#skim='__vbsSel'
#skim='__ssSel'

if skim =='__vh3lSel' :  skimFake='__vh3lFakeSel'
else:                    skimFake=skim

##############################################
###### Tree Directory according to site ######
##############################################

SITE=os.uname()[1]
xrootdPath=''
if    'iihe' in SITE :
  xrootdPath  = 'dcap://maite.iihe.ac.be/' 
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/'
elif  'cern' in SITE :
  #treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/'
  treeBaseDir = '/afs/cern.ch/work/c/cmills/public/Zh3l_ntuples_1j/'

#directory = treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC'+skim+'/'
#directory = treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC'+skim+'/'
#directory = treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC'+skim+'/'

directory = treeBaseDir+'/nominals/'

################################################
############ NUMBER OF LEPTONS #################
################################################
    
#Nlep='2'
Nlep='3'
#Nlep='4' 


################################################
############ basic mc weights ##################
################################################

XSWeight      = 'XSWeight'
zgSF = '1.34'
wz1jSF = '1.16'
wz2jSF = '1.09'
#SFweight      = 'SFweight3l'
#if Nlep == '2' :
#  SFweight = 'puW * effTrigW * electron_etaW_'+Nlep+'l * electron_ptW_'+Nlep+'l * veto_EMTFBug '
#else:
#  SFweight = 'puW * effTrigW'+Nlep+'l * electron_etaW_'+Nlep+'l * electron_ptW_'+Nlep+'l * veto_EMTFBug '
#for iLep in range(int(Nlep)): SFweight += ' * std_vector_lepton_recoW['+str(iLep)+'] '
if Nlep == '2' :
  SFweight = 'puW * effTrigW * electron_etaW_'+Nlep+'l * electron_ptW_'+Nlep+'l * veto_EMTFBug '
else:
  SFweight = 'puW * effTrigW'+Nlep+'l * electron_etaW_'+Nlep+'l * electron_ptW_'+Nlep+'l * veto_EMTFBug '
for iLep in range(int(Nlep)): SFweight += ' * std_vector_lepton_recoW['+str(iLep)+'] '
##SFweight      = 'puW*\
#                 effTrigW3l*\
#                 std_vector_lepton_recoW[0]*\
#                 std_vector_lepton_recoW[1]*\
#                 std_vector_lepton_recoW[2]*\
#                 electron_etaW_3l*electron_ptW_3l*\
#                 veto_EMTFBug'
GenLepMatch3L   = 'GenLepMatch3l'
GenLepMatch2L   = 'GenLepMatch2l'

################################################
############### B-Tag  WP ######################
################################################

bAlgo='cmvav2'
#bAlgo='csvv2ivf'
#bAlgo='DeepCSVB'

bWP='L'
#bWP='M'
#bWP='T'

# ... bPog SF

bSF='1.'
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
# Fix for 2-leptons for which this was kept in global formula !
#if Nlep == '3' : SFweight += '/bPogSF_CMVAL'

# ... b Veto

#bVeto='bveto_'+bAlgo+bWP

# Choose Lepton WP

#... Electron:

#eleWP='cut_WP_Tight80X'
# eleWP='cut_WP_Tight80X_SS'
#eleWP='mva_80p_Iso2015'
#eleWP='mva_80p_Iso2016'
#eleWP='mva_90p_Iso2015'
eleWP='mva_90p_Iso2016'

#... Muon:

muWP='cut_Tight80x'

#... Build formula

LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP

SFweight += '*'+LepWPweight+'*'+LepWPCut

#... And the fakeW

if Nlep == '2' :
  fakeW = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP
else:
  fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l'

#fakeW  = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

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

DataSets = ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']


DataTrig = {
            'MuonEG'         : ' trig_EleMu' ,
            'DoubleMuon'     : '!trig_EleMu &&  trig_DbleMu' ,
            'SingleMuon'     : '!trig_EleMu && !trig_DbleMu &&  trig_SnglMu' ,
            'DoubleEG'       : '!trig_EleMu && !trig_DbleMu && !trig_SnglMu &&  trig_DbleEle' ,
            'SingleElectron' : '!trig_EleMu && !trig_DbleMu && !trig_SnglMu && !trig_DbleEle &&  trig_SnglEle' ,
           }

###########################################
#############  BACKGROUNDS  ###############
###########################################


samples['WW']  = {    'name'   : getSampleFiles(directory,'WWTo2L2Nu'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch2L+'*'+METFilter_MC + '*nllW' ,
                      'suppressNegativeNuisances' :['all'],
                 }


samples['ZZ']  = {    'name': getSampleFiles(directory,'ZZTo4L'),
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3L+'*'+METFilter_MC ,
                       'suppressNegativeNuisances' :['all'],
                  }

#samples['ggZZ_em']  = {    'name': getSampleFiles(directory,'ggZZ2e2m'),
#                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3L+'*'+METFilter_MC ,
#                       'suppressNegativeNuisances' :['all'],
#                  }
#
#samples['ggZZ_ee']  = {    'name': getSampleFiles(directory,'ggZZ4e'),
#                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3L+'*'+METFilter_MC ,
#                       'suppressNegativeNuisances' :['all'],
#                  }
#
#samples['ggZZ_mm']  = {    'name': getSampleFiles(directory,'ggZZ4m'),
#                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3L+'*'+METFilter_MC ,
#                       'suppressNegativeNuisances' :['all'],
#                  }

samples['WZ']  = {    'name': getSampleFiles(directory,'WZTo3LNu_mllmin01_ext1'),
                      'weight' : '(( std_vector_jet_pt[1] < 30 )*'+wz1jSF+'+( std_vector_jet_pt[1] >= 30 )*'+wz2jSF+')*'+XSWeight+'*'+SFweight+'*'+GenLepMatch3L+'*'+METFilter_MC ,
                      'suppressNegativeNuisances' :['all'],
                  }

samples['VVV'] = {    'name': getSampleFiles(directory,'WZZ')
                              +getSampleFiles(directory,'ZZZ')
                              +getSampleFiles(directory,'WWZ')
                              +getSampleFiles(directory,'WWW'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3L+'*'+METFilter_MC,
                       'suppressNegativeNuisances' :['all'],
                  }

samples['Vg']  = {    'name':  getSampleFiles(directory,'Zg')
                              +getSampleFiles(directory,'WgStarLNuEE')
                              +getSampleFiles(directory,'WgStarLNuMuMu'),      
                       'weight' : zgSF+'*'+XSWeight+'*'+SFweight+'*'+GenLepMatch3L+'*'+METFilter_MC ,
                       'suppressNegativeNuisances' :['all'],
                 }

samples['ttZ']  = {    'name': getSampleFiles(directory,'TTZToLLNuNu_M-10'),
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3L+'*'+METFilter_MC,
                       'suppressNegativeNuisances' :['all'],
                  }

####################################
############# Signal ###############
####################################

samples['WH_htt']  = {  'name': getSampleFiles(directory,'HWminusJ_HToTauTau_M125')
                                +getSampleFiles(directory,'HWplusJ_HToTauTau_M125')
                                +getSampleFiles(directory,'HZJ_HToTauTau_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3L+'*'+METFilter_MC,
                       'suppressNegativeNuisances' :['all'],
                     }

samples['ggZH_hww']  = {  'name': getSampleFiles(directory,'HZJ_HToWW_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3L+'*'+METFilter_MC,
                        'suppressNegativeNuisances' :['all'],
                     }

samples['ZH_hww']  = {  'name': getSampleFiles(directory,'ggZH_HToWW_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3L+'*'+METFilter_MC,
                        'suppressNegativeNuisances' :['all'],
                     }

samples['WH_hww']  = { 'name': getSampleFiles(directory,'HWminusJ_HToWW_M125')
                                +getSampleFiles(directory,'HWplusJ_HToWW_M125'),
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3L+'*'+METFilter_MC,
                       'suppressNegativeNuisances' :['all'],
                       }


###########################################
################## FAKE ###################
###########################################

samples['Fake']  = {   'name': [ ] ,
                       'weight' : fakeW+'*veto_EMTFBug'+'*'+METFilter_DATA+'*'+((fakeW_muStatUp - 1) > 0.001),              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 5 ,
                   }

for Run in DataRun :
  #directory = treeBaseDir+'Apr2017_Run2016'+Run[0]+'_RemAOD/lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__dorochester__multiFakeW__formulasFAKE__hadd'+skimFake+'/'
  directory = treeBaseDir+'/FAKE'+Run[0]+'/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['Fake']['name'].append(iFile)
      samples['Fake']['weights'].append(DataTrig[DataSet])

###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,
                       'weight' : 'veto_EMTFBug'+'*'+METFilter_DATA+'*'+LepWPCut,
                       'weights' : [ ],
                       'isData': ['all'],
                       'FilesPerJob' : 5 ,
                  }

for Run in DataRun :
  #directory = treeBaseDir+'Apr2017_Run2016'+Run[0]+'_RemAOD/lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__dorochester__formulasDATA'+skim+'/'
  directory = treeBaseDir+'/DATA'+Run[0]+'/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet])
