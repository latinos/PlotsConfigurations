import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

#samples = {}

##############################################
###### Tree Directory according to site ######
##############################################

SITE=os.uname()[1]
xrootdPath=''
if    'iihe' in SITE :
  xrootdPath  = 'dcap://maite.iihe.ac.be/' 
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/'
elif  'cern' in SITE :
  xrootdPath  = 'root://eoscms.cern.ch/'
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/'
elif  'gridui' in SITE: #PISA
  treeBaseDir = '/gpfs/ddn/srm/cms/store/user/lviliani/Full2016_Apr17/'
elif 'sdfarm' in SITE : # KISTI T3
  xrootdPath  = 'root://cms-xrdr.sdfarm.kr:1094/'
  treeBaseDir = '/xrootd/store/group/hww/Full2016_Apr17/'

directory = treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC/'

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='2'

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

GenLepMatch   = 'GenLepMatch'+Nlep+'l'

################################################
############### B-Tag  WP ######################
################################################

bAlgo='cmvav2'
#bAlgo='csvv2ivf'
#bAlgo='DeepCSVB'

#bWP='L'
bWP='M'
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

#eleWP='cut_WP_Tight80X'
#eleWP='cut_WP_Tight80X_SS'
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
########  REDUCIBLE BACKGROUNDS  ##########
###########################################


###### DY = Z+Jets #######

useDYHT = False       # be carefull DY HT is LO 
useDYtt = False     
mixDYttandHT = False  # be carefull DY HT is LO (HT better stat for HT>450 GEV)

### These weights were evaluated on ICHEP16 MC -> Update ?
ptllDYW_NLO = '(0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140)'
ptllDYW_LO  = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'

samples['ChMisId'] = {    'name'   :getSampleFiles(directory,'DYJetsToLL_M-10to50')
                                    +getSampleFiles(directory,'DYJetsToLL_M-50')    
				                            ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 2 ,
                 }
addSampleWeight(samples,'ChMisId','DYJetsToLL_M-10to50',ptllDYW_NLO)
addSampleWeight(samples,'ChMisId','DYJetsToLL_M-50'     ,ptllDYW_NLO)


###### TopAntiTop#######
Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) )'

samples['ttbar'] = {   'name'  :getSampleFiles(directory,'TTTo2L2Nu') 
                                    ,
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                      'FilesPerJob' : 1 ,
                  }
                  
addSampleWeight(samples,'ttbar','TTTo2L2Nu',Top_pTrw)


samples['Wjets'] = {   'name'  :getSampleFiles(directory,'WJetsToLNu')
                                    ,
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                      'FilesPerJob' : 1 ,
                  }
######## Vgamma ########

samples['Vg']  =  {     'name'  :getSampleFiles(directory,'Wg_MADGRAPHMLM')
                                +getSampleFiles(directory,'Zg')
		                            +getSampleFiles(directory,'WGJJ')
                                +getSampleFiles(directory,'WgStarLNuMuMu')
                                +getSampleFiles(directory,'WgStarLNuEE')
                                ,
                        'suppressNegativeNuisances' :['all'],
                        'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC + '* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                  }

######### VV #########

samples['ZZ']  = {    'name': getSampleFiles(directory,'ZZTo2L2Nu')
                              #+ getSampleFiles(directory,'WZTo2L2Q')
                              + getSampleFiles(directory,'ZZTo2L2Q') , 
                              # Should we include this as well here:
                              # + getSampleFiles(directory,'tZq_ll'),  
                      'suppressNegativeNuisances' :['all'], 
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*1.11' ,  
                      'FilesPerJob' : 6 ,
                  }
    

samples['WZ']  = {    'name':getSampleFiles(directory,'WZTo3LNu')
                            ,
                      'suppressNegativeNuisances' :['all'], 
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*1.11' ,  
                      'FilesPerJob' : 6 ,
                  }

### 1.11 normalisation was measured in 3-lepton

########## VVV #########

samples['VVV'] = {    'name':getSampleFiles(directory,'ZZZ')
                            +getSampleFiles(directory,'WZZ')
                            +getSampleFiles(directory,'WWZ')
                            +getSampleFiles(directory,'WWW')
                           #  WWG: Might be added to WW by PYTHIA in tuning step, super small x-section anyway -> skipped for now 
                           #  + getSampleFiles(directory,'WWG')
                            ,   
                      'suppressNegative' :['all'], 
                      'suppressNegativeNuisances' :['all'],
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                  }

########## DPS #########

samples['DPS'] = {    'name': getSampleFiles(directory,'WWTo2L2Nu_DoubleScattering')
                            ,   
                      'suppressNegative' :['all'], 
                      'suppressNegativeNuisances' :['all'],
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                  }


###########################################
#######  IRREDUCIBLE BACKGROUNDS  #########
###########################################

samples['WW_strong'] = {   'name'     :getSampleFiles(directory,'WpWpJJ_QCD')
										                  #+getSampleFiles(directory,'WpWpJJ_EWK_QCD_aQGC')
										                  ,
						'suppressNegative' :['all'], 
						'suppressNegativeNuisances' :['all'],
						'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,    
						'FilesPerJob' : 1 ,
						}


###########################################
#############   SIGNALS  ##################
###########################################

samples['WW_EWK'] = {   'name'    :getSampleFiles(directory,'WmWmJJ_EWK_powheg')
				                          +getSampleFiles(directory,'WpWpJJ_EWK')
										              #+getSampleFiles(directory,'WpWpJJ_EWK_aQGC')
										              ,
						'suppressNegative' :['all'], 
						'suppressNegativeNuisances' :['all'],
						'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,    
						'FilesPerJob' : 1 ,
						}

###########################################
################## FAKE ###################
###########################################

samples['Fake_em']  = {'name': [ ] ,
                       'weight' : fakeW+'*veto_EMTFBug'+'*'+METFilter_DATA+'*(abs(std_vector_lepton_flavour[0])==11 && abs(std_vector_lepton_flavour[1])==13)',              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 6 ,
                     }

samples['Fake_me']  = {'name': [ ] ,
                       'weight' : fakeW+'*veto_EMTFBug'+'*'+METFilter_DATA+'*(abs(std_vector_lepton_flavour[0])==13 && abs(std_vector_lepton_flavour[1])==11)',              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 6 ,
                     }

samples['Fake_ee']  = {'name': [ ] ,
                       'weight' : fakeW+'*veto_EMTFBug'+'*'+METFilter_DATA+'*(abs(std_vector_lepton_flavour[0])==11 && abs(std_vector_lepton_flavour[1])==11)',              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 6 ,
                     }

samples['Fake_mm']  = {'name': [ ] ,
                       'weight' : fakeW+'*veto_EMTFBug'+'*'+METFilter_DATA+'*(abs(std_vector_lepton_flavour[0])==13 && abs(std_vector_lepton_flavour[1])==13)',              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 6 ,
                     }


for Run in DataRun :
  directory = treeBaseDir+'Apr2017_Run2016'+Run[0]+'_RemAOD/lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__dorochester__multiFakeW__formulasFAKE__hadd/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['Fake_em']['name'].append(iFile)
      samples['Fake_em']['weights'].append(DataTrig[DataSet])
      samples['Fake_me']['name'].append(iFile)
      samples['Fake_me']['weights'].append(DataTrig[DataSet])
      samples['Fake_mm']['name'].append(iFile)
      samples['Fake_mm']['weights'].append(DataTrig[DataSet])
      samples['Fake_ee']['name'].append(iFile)
      samples['Fake_ee']['weights'].append(DataTrig[DataSet])

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
  directory = treeBaseDir+'Apr2017_Run2016'+Run[0]+'_RemAOD/lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__dorochester__formulasDATA/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet]) 
