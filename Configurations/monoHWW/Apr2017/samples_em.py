import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

#samples = {}

################################################
################# SKIMS ########################
################################################

#skim=''
#skim='__wwSel'
#skim='__topSel'
#skim='__topSel'
#skim='__vh3lSel' 
#skim='__sfSel' 
#skim='__vbsSel'
#skim='__ssSel'
skim="__wwSel__monohSel__muccaAll_em"

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
elif  'gridui' in SITE: #PISA
  treeBaseDir = '/gpfs/ddn/srm/cms/store/user/lviliani/Full2016_Apr17/'
elif 'sdfarm' in SITE : # KISTI T3
  xrootdPath  = 'root://cms-xrdr.sdfarm.kr:1094/'
  treeBaseDir = '/xrootd/store/group/hww/Full2016_Apr17/'
elif  'cern' in SITE :
  treeBaseDir = '/eos/user/c/calderon/monoH/Full2016_Apr17/'
#  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/'

directory = treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC'+skim+'/'

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='2'
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
#############  BACKGROUNDS  ###############
###########################################


###### DY #######

useDYHT = False       # be carefull DY HT is LO 
useDYtt = True     
mixDYttandHT = False  # be carefull DY HT is LO (HT better stat for HT>450 GEV)

### These weights were evaluated on ICHEP16 MC -> Update ?
ptllDYW_NLO = '(0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140)'
ptllDYW_LO  = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'

samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToLL_M-10to50')
                                  + getSampleFiles(directory,'DYJetsToLL_M-50')     ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 4 ,
                 }

# ... Add DY HT Samples
if useDYHT :
  samples['DY']['name'] +=   getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-70to100') \
                             + getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-100to200')\
                             + getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-200to400') \
                             + getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-400to600') \
                             + getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-600toInf') \
                             + getSampleFiles(directory,'DYJetsToLL_M-50_HT-70to100') \
                             + getSampleFiles(directory,'DYJetsToLL_M-50_HT-100to200') \
                             + getSampleFiles(directory,'DYJetsToLL_M-50_HT-100to200_ext1') \
                             + getSampleFiles(directory,'DYJetsToLL_M-50_HT-200to400') \
                             + getSampleFiles(directory,'DYJetsToLL_M-50_HT-200to400_ext1') \
                             + getSampleFiles(directory,'DYJetsToLL_M-50_HT-400to600') \
                             + getSampleFiles(directory,'DYJetsToLL_M-50_HT-600to800') \
                             + getSampleFiles(directory,'DYJetsToLL_M-50_HT-800to1200') \
                             + getSampleFiles(directory,'DYJetsToLL_M-50_HT-1200to2500') \
                             + getSampleFiles(directory,'DYJetsToLL_M-50_HT-2500toInf') 

if useDYtt :
  # if skim=='__wwSel' do not include DYJetsToLL_M-50 in the list of samples
  if skim=='__wwSel':
    samples['DY']['name'] =   getSampleFiles(directory,'DYJetsToTT_MuEle_M-50') \
                            + getSampleFiles(directory,'DYJetsToTT_MuEle_M-50_ext1') \
                            + getSampleFiles(directory,'DYJetsToLL_M-10to50')
  else:
    samples['DY']['name'] +=   getSampleFiles(directory,'DYJetsToTT_MuEle_M-50') \
                             + getSampleFiles(directory,'DYJetsToTT_MuEle_M-50_ext1')

# ... Fix Weights (always after all samples are included !)

# pt_ll weight
# in this case DYJetsToLL_M-50 is not included in the list of samples
if (useDYtt and skim=='__wwSel'):
  addSampleWeight(samples,'DY','DYJetsToLL_M-10to50',ptllDYW_NLO)
else:
  addSampleWeight(samples,'DY','DYJetsToLL_M-10to50',ptllDYW_NLO)
  addSampleWeight(samples,'DY','DYJetsToLL_M-50'     ,ptllDYW_NLO)

if useDYHT :
  # Remove high HT from inclusive sample
  genHT = 'std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0)'
  addSampleWeight(samples,'DY','DYJetsToLL_M-10to50', genHT+'<70.0')  
  addSampleWeight(samples,'DY','DYJetsToLL_M-50'    , genHT+'<70.0')  
  # pt_ll weight
  addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-70to100'    ,ptllDYW_LO)
  addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-100to200'   ,ptllDYW_LO)
  addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400'   ,ptllDYW_LO)
  addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600'   ,ptllDYW_LO)
  addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toInf'   ,ptllDYW_LO)
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100'       ,ptllDYW_LO)
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200'      ,ptllDYW_LO)
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200_ext1' ,ptllDYW_LO)
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400'      ,ptllDYW_LO)
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400_ext1' ,ptllDYW_LO)
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600'      ,ptllDYW_LO)
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800'      ,ptllDYW_LO)
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200'     ,ptllDYW_LO)
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500'    ,ptllDYW_LO)
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf'     ,ptllDYW_LO)
  # Fix some x-sections
  addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-70to100'    , getBaseW(directory,['DYJetsToLL_M-5to50_HT-70to100'])+'/baseW')   # x-section update
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100'       , getBaseW(directory,['DYJetsToLL_M-50_HT-70to100'])+'/baseW')      # x-section update
  # set baseW across both samples
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200'      , getBaseW(directory,['DYJetsToLL_M-50_HT-100to200','DYJetsToLL_M-50_HT-100to200_ext1'])+'/baseW')
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200_ext1' , getBaseW(directory,['DYJetsToLL_M-50_HT-100to200','DYJetsToLL_M-50_HT-100to200_ext1'])+'/baseW')
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400'      , getBaseW(directory,['DYJetsToLL_M-50_HT-200to400','DYJetsToLL_M-50_HT-200to400_ext1'])+'/baseW')
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400_ext1' , getBaseW(directory,['DYJetsToLL_M-50_HT-200to400','DYJetsToLL_M-50_HT-200to400_ext1'])+'/baseW')

if useDYtt :
  # Remove OF from Inclusive sample
  # No need to do it if skim=='__wwSel'
  if not skim=='__wwSel':
    cutSF = '(abs(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]) == 11*11)||(abs(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]) == 13*13)'
    addSampleWeight(samples,'DY','DYJetsToLL_M-50',cutSF)
  # pt_ll weight
  addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50'     ,ptllDYW_NLO)
  addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50_ext1',ptllDYW_NLO)
  # set baseW across both samples
  addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50'       , getBaseW(directory,['DYJetsToTT_MuEle_M-50','DYJetsToTT_MuEle_M-50_ext1'])+'/baseW')
  addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50_ext1'  , getBaseW(directory,['DYJetsToTT_MuEle_M-50','DYJetsToTT_MuEle_M-50_ext1'])+'/baseW')
  if useDYHT :
    # Remove OF from HT samples as well
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100'       , cutSF)
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200'      , cutSF)
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200_ext1' , cutSF)
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400'      , cutSF)
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400_ext1' , cutSF)
    # Well HT>400 samples have better stat than DY->MuEle , so might switch to them above 450 GeV (50 GeV margin for trnasition region)
    if mixDYttandHT :
      addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50'            , genHT+'<450')
      addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50_ext1'       , genHT+'<450')
      addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600'      , '('+cutSF+')||('+genHT+'>=450)')
      addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800'      , '('+cutSF+')||('+genHT+'>=450)')
      addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200'     , '('+cutSF+')||('+genHT+'>=450)')
      addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500'    , '('+cutSF+')||('+genHT+'>=450)')
      addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf'     , '('+cutSF+')||('+genHT+'>=450)')
    else:
      addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600'      , cutSF)
      addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800'      , cutSF)
      addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200'     , cutSF)
      addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500'    , cutSF)
      addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf'     , cutSF)

###### Top #######
#Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) )'

samples['top'] = {   'name'     :   getSampleFiles(directory,'TTTo2L2Nu') 
                                  + getSampleFiles(directory,'ST_tW_antitop')
                                  + getSampleFiles(directory,'ST_tW_top')  
                                  # We should use in principle: ST_tW_antitop_noHad + ST_tW_antitop_noHad_ext1 + ST_tW_top_noHad + ST_tW_top_noHad_ext1   
                                  # but first need to compute x-section and correct baseW
                                  + getSampleFiles(directory,'ST_t-channel_antitop')
                                  + getSampleFiles(directory,'ST_t-channel_top')
                                  + getSampleFiles(directory,'ST_s-channel')   
                             ,
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                      'FilesPerJob' : 2 ,
                  }
                  
#addSampleWeight(samples,'top','TTTo2L2Nu',Top_pTrw)

###### WW ########
             
samples['WW']  = {    'name'   : getSampleFiles(directory,'WWTo2L2Nu') ,
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*nllW' ,  
                 }



samples['ggWW']  = {  'name'   : getSampleFiles(directory,'GluGluWWTo2L2Nu_MCFM'),      
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                      'isData': ['0'],                            
                   }

## during tree production: 1.4 k-factor has been applied to both samples
## ggWW sample: k = 1.4 +/- 15%
## ggWW interference: k = 1.87 +/- 25%

######## Vg ########

samples['Vg']  =  {     'name'   :   getSampleFiles(directory,'Wg_MADGRAPHMLM')
                                   + getSampleFiles(directory,'Zg')
                                   ,
                        'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC + '* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                  }

######## VgS ########

#samples['VgS']  = {    'name':  getSampleFiles(directory,'WgStarLNuEE') + getSampleFiles(directory,'WgStarLNuMuMu') ,
#                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*1.4' ,  
#                  }


samples['WZgS_L']  = {    'name': getSampleFiles(directory,'WZTo3LNu_mllmin01_ext1') ,
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '* (Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4)*0.94' ,
                  }

samples['WZgS_H']  = {    'name': getSampleFiles(directory,'WZTo3LNu_mllmin01_ext1') ,
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '* (Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4)*1.14' ,
                  } 

######### VZ #########

samples['VZ']  = {    'name':   getSampleFiles(directory,'ZZTo2L2Nu')
                              + getSampleFiles(directory,'WZTo2L2Q')
                              + getSampleFiles(directory,'ZZTo2L2Q')  
                              # Should we include this as well here:
                              # + getSampleFiles(directory,'tZq_ll')
                              ,   
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*1.11' ,  
                      'FilesPerJob' : 6 ,
                  }

### 1.11 normalisation was measured in 3-lepton

########## VVV #########

samples['VVV'] = {    'name':   getSampleFiles(directory,'ZZZ')
                              + getSampleFiles(directory,'WZZ')
                              + getSampleFiles(directory,'WWZ')
                              + getSampleFiles(directory,'WWW')
                           #  WWG: Might be added to WW by PYTHIA in tuning step, super small x-section anyway -> skipped for now 
                           #  + getSampleFiles(directory,'WWG')
                              ,    
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                  }

###########################################
#############   SIGNALS  ##################
###########################################


#### ggH -> WW

samples['ggH_hww']  = {  'name'  : getSampleFiles(directory,'GluGluHToWWTo2L2NuPowheg_M125') ,  
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                         # 'suppressNegative' :['all'],
                         # 'suppressNegativeNuisances' :['all'],
                      }


#### VBF H->WW

samples['qqH_hww']  = {   'name' : getSampleFiles(directory,'VBFHToWWTo2L2Nu_alternative_M125') ,
                          'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                          # 'suppressNegative' :['all'],
                          # 'suppressNegativeNuisances' :['all'],
                      }

### ZH ; H->WW

samples['ZH_hww']   = {   'name' :  getSampleFiles(directory,'HZJ_HToWWTo2L2Nu_M125') ,
                          'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                          # 'suppressNegative' :['all'],
                          # 'suppressNegativeNuisances' :['all'],
                      }
# samples['ZH_hww']   = {   'name' :  getSampleFiles(directory,'HZJ_HToWW_M125') ,
#                          'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
#                       }

samples['ggZH_hww'] = {   'name' : getSampleFiles(directory,'GluGluZH_HToWWTo2L2Nu_M125') ,
                          'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                          # 'suppressNegative' :['all'],
                          # 'suppressNegativeNuisances' :['all'],
                          }
# samples['ggZH_hww'] = {   'name' : getSampleFiles(directory,'ggZH_HToWW_M125') ,
#                          'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
#                       }

#### WH ; H->WW

samples['WH_hww']   = {   'name' :   getSampleFiles(directory,'HWminusJ_HToWW_M125')
                          + getSampleFiles(directory,'HWplusJ_HToWW_M125')
                          , 
                          'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                          # 'suppressNegative' :['all'],
                          # 'suppressNegativeNuisances' :['all'],
                          }

#### bbHY ; H->WW 

samples['bbH_hww']  = {  'name' :   getSampleFiles(directory,'bbHToWWTo2L2Nu_M125_yb2') 
                                  + getSampleFiles(directory,'bbHToWWTo2L2Nu_M125_ybyt')
                                  ,
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                         # 'suppressNegative' :['all'],
                         # 'suppressNegativeNuisances' :['all'],
                         }


#### H -> TauTau

samples['H_htt']    = {   'name' :   getSampleFiles(directory,'GluGluHToTauTau_M125')
                                   + getSampleFiles(directory,'VBFHToTauTau_M125')
                                   + getSampleFiles(directory,'HZJ_HToTauTau_M125')
                                   + getSampleFiles(directory,'HWplusJ_HToTauTau_M125')
                                   + getSampleFiles(directory,'HWminusJ_HToTauTau_M125')
                                   ,  
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                          # 'suppressNegative' :['all'],
                          # 'suppressNegativeNuisances' :['all'],
                          }


#### mono-Higgs Signal 2HDM

ZpMasses={"600","800","1000","1200","1400","1700","2000","2500"}
A0Masses={"300","400","500","600","700","800"}

for mZp in ZpMasses:
  for mA0 in A0Masses :
    if ((mZp == "600" and (mA0 == "300" or mA0 == "400")) or ((mZp == "800" and (mA0 == "300" or mA0 == "400" or mA0 == "500" or mA0 == "600"))) or (mZp != "600" and mZp != "800")) :
      samples['monoH_' + mZp + '_' + mA0] = { 
        'name': ['latino_monoH_2HDM_MZp-' + mZp + '_MA0-' + mA0 + '.root'],
        'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
        }


# Samples for which reweighting is done by using 600_300 sample
list_600_300={("450","300"),("450","325"),("450","350"),("450","400"),("450","425"),("450","450"),("500","300"),("500","325"),("500","350"),("500","400"),("500","425"),("500","450"),("550","300"),("550","325"),("550","350"),("550","375"),("550","400"),("550","425"),("550","450"),("600","325"),("600","350"),("600","375"),("600","425"),("600","450"),("600","475"),("600","525"),("600","550"),("600","625"),("600","675"),("600","700"),("600","750"),("600","775"),("600","800"),("600","825"),("600","875"),("600","900"),("600","925"),("650","350"),("650","375"),("650","400"),("650","425"),("650","450"),("650","475"),("650","500"),("650","525"),("650","550"),("650","600"),("650","625"),("650","650"),("650","675"),("650","700"),("650","725"),("650","750"),("650","775"),("650","800"),("650","825"),("650","850"),("650","875"),("650","900"),("650","925"),("650","975"),("700","300"),("700","325"),("700","375"),("700","400"),("700","425"),("700","450"),("700","475"),("700","500"),("700","575"),("700","625"),("700","650"),("700","725"),("700","750"),("700","825"),("700","850"),("700","875"),("700","900"),("700","925"),("700","950"),("700","975")}

for mZ,mA in list_600_300:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-600_MA0-300.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_600_300")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }

## Samples for which reweighting is done by using 800_300 sample
list_800_300={("750","300"),("750","325"),("750","350"),("800","350"),("850","300"),("850","325"),("850","350"),("900","300"),("900","325"),("900","350")}

for mZ,mA in list_800_300:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-800_MA0-300.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_800_300")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 800_400 sample
list_800_400={("750","375"),("750","450"),("800","375"),("800","400"),("800","425"),("800","450"),("850","375"),("850","400"),("850","425"),("850","450"),("900","375"),("900","400"),("900","425"),("900","450")}

for mZ,mA in list_800_400:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-800_MA0-400.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_800_400")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 800_500 sample
list_800_500={("750","500"),("750","550"),("750","575"),("750","600"),("750","625"),("750","650"),("750","675"),("750","700"),("750","725"),("750","775"),("750","800"),("750","850"),("750","875"),("750","900"),("750","925"),("750","950"),("750","975"),("800","475"),("800","525"),("800","550"),("800","575"),("800","600"),("800","625"),("800","675"),("800","700"),("800","750"),("800","775"),("800","800"),("800","825"),("800","850"),("800","875"),("800","900"),("800","925"),("800","950"),("850","475"),("850","500"),("850","525"),("850","575"),("850","600"),("850","625"),("850","650"),("850","675"),("850","700"),("850","725"),("850","750"),("850","775"),("850","825"),("850","850"),("850","900"),("850","950"),("850","975"),("900","475"),("900","525"),("900","550"),("900","575"),("900","675"),("900","700"),("900","725"),("900","750"),("900","775"),("900","825"),("900","850"),("900","900"),("900","950"),("900","975")}

for mZ,mA in list_800_500:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-800_MA0-500.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_800_500")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1000_300 sample
list_1000_300={("950","300"),("950","325"),("950","350"),("1050","300"),("1050","325"),("1050","350"),("1100","300"),("1100","350")}

for mZ,mA in list_1000_300:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1000_MA0-300.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1000_300")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1000_400 sample
list_1000_400={("950","375"),("950","400"),("950","450"),("1000","375"),("1000","425"),("1000","450"),("1050","400"),("1050","425"),("1050","450"),("1100","375"),("1100","400"),("1100","450")}

for mZ,mA in list_1000_400:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1000_MA0-400.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1000_400")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1000_500 sample
list_1000_500={("950","475"),("950","500"),("950","525"),("1000","550"),("1050","475"),("1050","550"),("1100","525"),("1100","550")}

for mZ,mA in list_1000_500:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1000_MA0-500.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1000_500")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1000_600 sample
list_1000_600={("950","575"),("950","600"),("950","625"),("1000","575"),("1000","625"),("1000","650"),("1050","600"),("1050","625"),("1100","575"),("1100","600"),("1100","625"),("1100","650")}

for mZ,mA in list_1000_600:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1000_MA0-600.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1000_600")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1000_700 sample
list_1000_700={("950","675"),("950","700"),("950","750"),("950","775"),("950","800"),("950","850"),("950","875"),("950","900"),("950","950"),("950","975"),("1000","675"),("1000","725"),("1000","825"),("1000","875"),("1000","900"),("1000","950"),("1000","975"),("1050","675"),("1050","700"),("1050","725"),("1050","750"),("1050","775"),("1050","800"),("1050","850"),("1050","875"),("1050","900"),("1050","925"),("1050","950"),("1050","975"),("1100","675"),("1100","725"),("1100","750"),("1100","775"),("1100","800"),("1100","825"),("1100","850"),("1100","875"),("1100","900"),("1100","925"),("1100","950")}

for mZ,mA in list_1000_700:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1000_MA0-700.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'suppressNegativeNuisances' :['met'],
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1000_700")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+']
    }


## Samples for which reweighting is done by using 1200_300 sample - ("1300","325") not considered since higgs peak is at 1800 GeV
list_1200_300={("1150","300"),("1150","325"),("1150","350"),("1200","325"),("1250","300"),("1250","325"),("1300","350")}

for mZ,mA in list_1200_300:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1200_MA0-300.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1200_300")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1200_400 sample
list_1200_400={("1150","375"),("1150","400"),("1150","425"),("1150","450"),("1250","400"),("1250","425"),("1250","450"),("1300","375"),("1300","400"),("1300","450")}

for mZ,mA in list_1200_400:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1200_MA0-400.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1200_400")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1200_500 sample
list_1200_500={("1150","475"),("1150","500"),("1150","525"),("1150","550"),("1200","475"),("1200","525"),("1200","550"),("1250","475"),("1250","500"),("1250","525"),("1250","550"),("1300","475"),("1300","500"),("1300","550")}

for mZ,mA in list_1200_500:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1200_MA0-500.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1200_500")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1200_600 sample
list_1200_600={("1150","600"),("1150","625"),("1150","650"),("1200","575"),("1200","625"),("1200","650"),("1250","575"),("1250","625"),("1250","650"),("1300","575"),("1300","600"),("1300","650")}

for mZ,mA in list_1200_600:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1200_MA0-600.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1200_600")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1200_700 sample
list_1200_700={("1150","675"),("1150","700"),("1150","725"),("1200","675"),("1200","725"),("1200","750"),("1250","750"),("1300","675"),("1300","725"),("1300","750")}

for mZ,mA in list_1200_700:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1200_MA0-700.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1200_700")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1200_800 sample - ("1250","975"),
list_1200_800={("1150","775"),("1150","800"),("1150","825"),("1150","850"),("1150","875"),("1150","900"),("1150","925"),("1150","950"),("1150","975"),("1200","775"),("1200","825"),("1200","850"),("1200","925"),("1200","950"),("1200","975"),("1250","775"),("1250","800"),("1250","825"),("1250","850"),("1250","875"),("1250","925"),("1250","950"),("1250","975"),("1300","775"),("1300","800"),("1300","825"),("1300","850"),("1300","875"),("1300","900"),("1300","925"),("1300","975")}

for mZ,mA in list_1200_800:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1200_MA0-800.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1200_800")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1400_300 sample
list_1400_300={("1350","325"),("1350","350"),("1400","300"),("1400","350"),("1450","300"),("1450","350"),("1500","300"),("1500","325"),("1500","350"),("1550","325"),("1550","350")}

for mZ,mA in list_1400_300:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1400_MA0-300.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1400_300")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1400_400 sample
list_1400_400={("1350","375"),("1350","400"),("1350","425"),("1350","450"),("1400","450"),("1450","375"),("1450","400"),("1450","425"),("1450","450"),("1500","375"),("1500","425"),("1500","450"),("1550","375"),("1550","400"),("1550","425"),("1550","450")}

for mZ,mA in list_1400_400:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1400_MA0-400.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1400_400")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1400_500 sample
list_1400_500={("1350","475"),("1350","500"),("1350","525"),("1350","550"),("1400","475"),("1400","525"),("1400","550"),("1450","475"),("1450","500"),("1450","525"),("1450","550"),("1500","475"),("1500","500"),("1500","525"),("1500","550"),("1550","500"),("1550","550")}

for mZ,mA in list_1400_500:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1400_MA0-500.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1400_500")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1400_600 sample
list_1400_600={("1350","575"),("1350","600"),("1350","650"),("1400","650"),("1450","650"),("1500","575"),("1500","600"),("1550","600"),("1550","625"),("1550","650")}

for mZ,mA in list_1400_600:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1400_MA0-600.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1400_600")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1400_700 sample
list_1400_700={("1350","675"),("1350","725"),("1350","750"),("1400","675"),("1400","725"),("1400","750"),("1450","700"),("1450","725"),("1450","750"),("1500","675"),("1500","700"),("1500","725"),("1550","675"),("1550","700"),("1550","750")}

for mZ,mA in list_1400_700:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1400_MA0-700.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1400_700")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1400_800 sample
list_1400_800={("1350","775"),("1350","800"),("1350","825"),("1350","850"),("1350","875"),("1350","900"),("1350","925"),("1350","950"),("1350","975"),("1400","775"),("1400","825"),("1400","875"),("1400","900"),("1400","925"),("1450","775"),("1450","875"),("1450","900"),("1450","925"),("1450","975"),("1500","800"),("1500","850"),("1500","900"),("1500","950"),("1500","975"),("1550","775"),("1550","800"),("1550","875"),("1550","900"),("1550","950")}

for mZ,mA in list_1400_800:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1400_MA0-800.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1400_800")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1700_300 sample
list_1700_300={("1600","300"),("1600","325"),("1600","350"),("1650","300"),("1650","325"),("1650","350"),("1700","300"),("1700","350"),("1750","300"),("1750","325"),("1800","300"),("1800","350"),("1850","300"),("1850","325"),("1850","350")}

for mZ,mA in list_1700_300:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1700_MA0-300.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1700_300")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1700_400 sample
list_1700_400={("1600","425"),("1600","450"),("1650","375"),("1650","400"),("1650","425"),("1650","450"),("1700","375"),("1700","425"),("1700","450"),("1750","375"),("1750","400"),("1750","425"),("1800","375"),("1800","400"),("1800","450"),("1850","375"),("1850","425"),("1850","450")}

for mZ,mA in list_1700_400:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1700_MA0-400.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1700_400")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1700_500 sample
list_1700_500={("1600","500"),("1600","525"),("1600","550"),("1650","525"),("1650","550"),("1700","475"),("1700","525"),("1700","550"),("1750","475"),("1750","500"),("1750","525"),("1750","550"),("1800","475"),("1800","500"),("1800","525"),("1800","550"),("1850","475"),("1850","500"),("1850","525"),("1850","550")}

for mZ,mA in list_1700_500:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1700_MA0-500.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1700_500")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1700_600 sample - ("1600","575"),
list_1700_600={("1600","575"),("1600","600"),("1600","625"),("1650","575"),("1650","600"),("1650","625"),("1700","625"),("1750","575"),("1750","600"),("1800","575"),("1800","600"),("1800","650"),("1850","575"),("1850","600"),("1850","625")}

for mZ,mA in list_1700_600:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1700_MA0-600.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1700_600")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1700_700 sample
list_1700_700={("1600","675"),("1600","700"),("1600","725"),("1600","750"),("1650","675"),("1650","700"),("1650","725"),("1700","675"),("1700","750"),("1750","675"),("1750","700"),("1750","725"),("1800","675"),("1800","700"),("1800","750"),("1850","700"),("1850","725"),("1850","750")}

for mZ,mA in list_1700_700:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1700_MA0-700.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1700_700")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 1700_800 sample
list_1700_800={("1600","775"),("1600","800"),("1600","825"),("1600","900"),("1600","950"),("1600","975"),("1650","775"),("1650","800"),("1650","825"),("1650","850"),("1650","875"),("1650","950"),("1700","775"),("1700","800"),("1700","825"),("1700","850"),("1700","875"),("1700","925"),("1700","950"),("1700","975"),("1750","800"),("1750","825"),("1750","850"),("1750","875"),("1750","900"),("1750","925"),("1750","975"),("1800","775"),("1800","800"),("1800","850"),("1800","875"),("1800","925"),("1800","950"),("1800","975"),("1850","775"),("1850","850"),("1850","900"),("1850","925"),("1850","975")}

for mZ,mA in list_1700_800:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-1700_MA0-800.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_1700_800")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }

## Samples for which reweighting is done by using 2000_300 sample
list_2000_300={("1900","300"),("1950","300"),("1950","325"),("1950","350"),("2000","325"),("2000","350"),("2050","300"),("2050","325"),("2050","350"),("2100","300"),("2100","325"),("2100","350"),("2150","300"),("2150","325"),("2200","300"),("2200","325"),("2200","350"),("2250","300"),("2250","325"),("2250","350")}

for mZ,mA in list_2000_300:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-2000_MA0-300.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_2000_300")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }

## Samples for which reweighting is done by using 2000_400 sample
list_2000_400={("1900","400"),("1900","425"),("1900","450"),("1950","375"),("1950","400"),("1950","425"),("1950","450"),("2000","425"),("2000","450"),("2050","375"),("2050","400"),("2050","425"),("2050","450"),("2100","375"),("2100","400"),("2100","425"),("2100","450"),("2150","375"),("2150","400"),("2150","450"),("2200","375"),("2200","400"),("2200","425"),("2200","450"),("2250","375"),("2250","400"),("2250","425"),("2250","450")}

for mZ,mA in list_2000_400:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-2000_MA0-400.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_2000_400")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 2000_500 sample
list_2000_500={("1900","475"),("1900","500"),("1900","525"),("1950","475"),("1950","550"),("2000","475"),("2000","550"),("2050","475"),("2050","500"),("2050","525"),("2050","550"),("2100","475"),("2100","500"),("2100","525"),("2100","550"),("2150","475"),("2150","500"),("2150","525"),("2150","550"),("2200","475"),("2200","500"),("2200","525"),("2200","550"),("2250","475"),("2250","500"),("2250","525"),("2250","550")}

for mZ,mA in list_2000_500:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-2000_MA0-500.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_2000_500")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 2000_600 sample
list_2000_600={("1900","600"),("1900","625"),("1950","575"),("1950","600"),("1950","625"),("1950","650"),("2000","575"),("2000","625"),("2000","650"),("2050","575"),("2050","600"),("2050","625"),("2050","650"),("2100","575"),("2100","600"),("2100","625"),("2100","650"),("2150","575"),("2150","600"),("2150","625"),("2150","650"),("2200","575"),("2200","600"),("2200","625"),("2200","650"),("2250","575"),("2250","600"),("2250","625"),("2250","650")}

for mZ,mA in list_2000_600:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-2000_MA0-600.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_2000_600")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 2000_700 sample
list_2000_700={("1950","675"),("1950","700"),("1950","750"),("2000","700"),("2000","725"),("2050","675"),("2050","700"),("2050","725"),("2050","750"),("2100","675"),("2100","700"),("2100","725"),("2100","750"),("2150","675"),("2150","700"),("2150","750"),("2200","675"),("2200","700"),("2200","725"),("2200","750"),("2250","675"),("2250","700"),("2250","725"),("2250","750")}

for mZ,mA in list_2000_700:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-2000_MA0-700.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_2000_700")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 2000_800 sample
list_2000_800={("1900","800"),("1900","825"),("1900","900"),("1900","925"),("1900","975"),("1950","800"),("1950","850"),("1950","875"),("1950","925"),("1950","975"),("2000","775"),("2000","825"),("2000","850"),("2000","875"),("2000","900"),("2000","925"),("2000","950"),("2050","775"),("2050","800"),("2050","825"),("2050","850"),("2050","875"),("2050","900"),("2050","925"),("2050","950"),("2050","975"),("2100","775"),("2100","800"),("2100","825"),("2100","850"),("2100","875"),("2100","900"),("2100","925"),("2100","950"),("2100","975"),("2150","775"),("2150","800"),("2150","825"),("2150","850"),("2150","875"),("2150","900"),("2150","925"),("2150","950"),("2150","975"),("2200","775"),("2200","825"),("2200","850"),("2200","875"),("2200","900"),("2200","925"),("2200","950"),("2250","775"),("2250","800"),("2250","825"),("2250","850"),("2250","875"),("2250","900"),("2250","925"),("2250","975")}

for mZ,mA in list_2000_800:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-2000_MA0-800.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'suppressNegativeNuisances' :['met'],
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_2000_800")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 2500_300 sample
list_2500_300={("2300","300"),("2300","325"),("2350","300"),("2350","325"),("2350","350"),("2400","300"),("2400","325"),("2400","350"),("2450","300"),("2450","325"),("2450","350"),("2500","325"),("2500","350")}

for mZ,mA in list_2500_300:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-2500_MA0-300.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_2500_300")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 2500_400 sample
list_2500_400={("2300","375"),("2300","400"),("2300","425"),("2300","450"),("2350","375"),("2350","400"),("2350","425"),("2350","450"),("2400","375"),("2400","400"),("2400","425"),("2400","450"),("2450","375"),("2450","400"),("2450","425"),("2450","450"),("2500","375"),("2500","425"),("2500","450")}

for mZ,mA in list_2500_400:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-2500_MA0-400.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_2500_400")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 2500_500 sample - ("2350","475"),
list_2500_500={("2300","500"),("2300","525"),("2300","550"),("2350","475"),("2350","500"),("2350","525"),("2350","550"),("2400","475"),("2400","525"),("2400","550"),("2450","475"),("2450","500"),("2450","525"),("2450","550"),("2500","475"),("2500","525")}

for mZ,mA in list_2500_500:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-2500_MA0-500.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_2500_500")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 2500_600 sample
list_2500_600={("2300","575"),("2300","600"),("2300","625"),("2300","650"),("2350","575"),("2350","600"),("2350","625"),("2350","650"),("2400","575"),("2400","600"),("2400","625"),("2400","650"),("2450","600"),("2450","625"),("2450","650"),("2500","575"),("2500","625"),("2500","650")}

for mZ,mA in list_2500_600:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-2500_MA0-600.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_2500_600")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 2500_700 sample
list_2500_700={("2300","675"),("2300","700"),("2300","725"),("2300","750"),("2350","700"),("2350","725"),("2350","750"),("2400","675"),("2400","700"),("2400","725"),("2400","750"),("2450","675"),("2450","700"),("2450","725"),("2450","750"),("2500","675"),("2500","750")}

for mZ,mA in list_2500_700:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-2500_MA0-700.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_2500_700")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


## Samples for which reweighting is done by using 2500_800 sample
list_2500_800={("2300","800"),("2300","825"),("2300","850"),("2300","875"),("2300","900"),("2300","925"),("2300","950"),("2300","975"),("2350","800"),("2350","825"),("2350","850"),("2350","875"),("2350","900"),("2350","925"),("2350","950"),("2350","975"),("2400","775"),("2400","800"),("2400","825"),("2400","850"),("2400","875"),("2400","900"),("2400","925"),("2400","975"),("2450","775"),("2450","800"),("2450","825"),("2450","850"),("2450","875"),("2450","900"),("2450","925"),("2450","950"),("2450","975"),("2500","775"),("2500","825"),("2500","850"),("2500","875"),("2500","900"),("2500","925"),("2500","975")}

for mZ,mA in list_2500_800:
  samples['monoH_' + mZ + '_' + mA] = { 
    'name': ['latino_monoH_2HDM_MZp-2500_MA0-800.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(higgsGenpt)*get2HDMxs('+mZ+','+mA+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("Target_'+mZ+'_'+mA+'_Ref_2500_800")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/get2HDMxs.C+'] 
    }


#### mono-Higgs Signal Z'B
samples['monoH_ZB_10000_1000_'] = { 
  'name': ['latino_monoH_ZpBaryonic_MZp-10000_MChi-1000.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_10000_500_'] = { 
  'name': ['latino_monoH_ZpBaryonic_MZp-10000_MChi-500.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_10000_150_'] = { 
  'name': ['latino_monoH_ZpBaryonic_MZp-10000_MChi-150.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_10000_50_'] = { 
  'name': ['latino_monoH_ZpBaryonic_MZp-10000_MChi-50.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_10000_1_'] = {
  'name': ['latino_monoH_ZpBaryonic_MZp-10000_MChi-1.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

#
samples['monoH_ZB_2000_1_'] = { 
  'name': ['latino_monoH_ZpBaryonic_MZp-2000_MChi-1.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

#
samples['monoH_ZB_1995_1000_'] = { 
  'name': ['latino_monoH_ZpBaryonic_MZp-1995_MChi-1000.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

#
samples['monoH_ZB_1000_1000_'] = { 
  'name': ['latino_monoH_ZpBaryonic_MZp-1000_MChi-1000.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_1000_150_'] = { 
  'name': ['latino_monoH_ZpBaryonic_MZp-1000_MChi-150.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_1000_1_'] = {
  'name': ['latino_monoH_ZpBaryonic_MZp-1000_MChi-1.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

#
samples['monoH_ZB_995_500_'] = { 
  'name': ['latino_monoH_ZpBaryonic_MZp-995_MChi-500.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

#
samples['monoH_ZB_500_500_'] = {
  'name': ['latino_monoH_ZpBaryonic_MZp-500_MChi-500.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_500_150_'] = { 
  'name': ['latino_monoH_ZpBaryonic_MZp-500_MChi-150.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_500_1_'] = {
  'name': ['latino_monoH_ZpBaryonic_MZp-500_MChi-1.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

#
samples['monoH_ZB_300_50_'] = { 
  'name': ['latino_monoH_ZpBaryonic_MZp-300_MChi-50.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_300_1_'] = {
  'name': ['latino_monoH_ZpBaryonic_MZp-300_MChi-1.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

#
samples['monoH_ZB_295_150_'] = {
  'name': ['latino_monoH_ZpBaryonic_MZp-295_MChi-150.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

#
samples['monoH_ZB_200_150_'] = { 
  'name': ['latino_monoH_ZpBaryonic_MZp-200_MChi-150.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_200_50_'] = {
  'name': ['latino_monoH_ZpBaryonic_MZp-200_MChi-50.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_200_1_'] = {
  'name': ['latino_monoH_ZpBaryonic_MZp-200_MChi-1.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

#
samples['monoH_ZB_100_10_'] = { 
  'name': ['latino_monoH_ZpBaryonic_MZp-100_MChi-10.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_100_1_'] = { 
  'name': ['latino_monoH_ZpBaryonic_MZp-100_MChi-1.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

#
samples['monoH_ZB_95_50_'] = {
  'name': ['latino_monoH_ZpBaryonic_MZp-95_MChi-50.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

#
samples['monoH_ZB_50_50_'] = { 
  'name': ['latino_monoH_ZpBaryonic_MZp-50_MChi-50.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_50_10_'] = {
  'name': ['latino_monoH_ZpBaryonic_MZp-50_MChi-10.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_50_1_'] = {
  'name': ['latino_monoH_ZpBaryonic_MZp-50_MChi-1.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

#
samples['monoH_ZB_20_1_'] = {
  'name': ['latino_monoH_ZpBaryonic_MZp-20_MChi-1.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

#
samples['monoH_ZB_15_10_'] = {
  'name': ['latino_monoH_ZpBaryonic_MZp-15_MChi-10.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

#
samples['monoH_ZB_10_1000_'] = {
  'name': ['latino_monoH_ZpBaryonic_MZp-10_MChi-1000.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_10_500_'] = {
  'name': ['latino_monoH_ZpBaryonic_MZp-10_MChi-500.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_10_150_'] = {
  'name': ['latino_monoH_ZpBaryonic_MZp-10_MChi-150.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_10_50_'] = { 
  'name': ['latino_monoH_ZpBaryonic_MZp-10_MChi-50.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_10_10_'] = { 
  'name': ['latino_monoH_ZpBaryonic_MZp-10_MChi-10.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }

samples['monoH_ZB_10_1_'] = {
  'name': ['latino_monoH_ZpBaryonic_MZp-10_MChi-1.root'],
  'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  }


## Samples for which reweighting is done by using ZB_50_50 sample
list_ZB_50_50={("50","40"),("50","45"),("50","60"),("50","70"),("50","80"),("50","90"),("40","50"),("40","10"),("40","40"),("40","45"),("40","60"),("40","70"),("40","80"),("40","90")}

for mZ,mX in list_ZB_50_50:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-50_MChi-50.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_50_50")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_10_150 sample
list_ZB_10_150={("50","150"),("50","175"),("50","200"),("50","225"),("50","275"),("100","150"),("100","175"),("100","200"),("100","225"),("100","250"),("100","275"),("100","300"),("100","325"),("10","100"),("10","125"),("10","175"),("10","200"),("10","225"),("10","250"),("10","300"),("10","325"),("20","100"),("20","125"),("20","150"),("20","175"),("20","250"),("20","300"),("30","125"),("30","250"),("30","275"),("30","300"),("40","125"),("40","175"),("40","200"),("40","225"),("40","250"),("40","300"),("40","325"),("75","150"),("75","225"),("75","250"),("75","300"),("75","325")}

for mZ,mX in list_ZB_10_150:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-10_MChi-150.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_10_150")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_10_500 sample
list_ZB_10_500={("50","350"),("50","375"),("50","425"),("50","450"),("50","550"),("50","600"),("50","650"),("50","675"),("50","700"),("50","750"),("100","350"),("100","375"),("100","425"),("100","450"),("100","500"),("100","525"),("100","600"),("100","625"),("100","650"),("100","675"),("100","700"),("100","750"),("150","350"),("150","375"),("150","400"),("150","425"),("150","450"),("150","475"),("150","500"),("150","525"),("150","550"),("150","575"),("150","600"),("150","625"),("150","650"),("150","675"),("150","700"),("150","725"),("150","750"),("200","400"),("200","425"),("200","450"),("200","525"),("200","650"),("200","675"),("200","700"),("200","750"),("250","425"),("250","450"),("250","500"),("250","525"),("250","550"),("250","575"),("250","600"),("250","625"),("250","650"),("250","675"),("250","725"),("250","750"),("10","350"),("10","400"),("10","450"),("10","475"),("10","525"),("10","550"),("10","575"),("10","600"),("10","625"),("10","675"),("10","700"),("20","375"),("20","400"),("20","425"),("20","450"),("20","475"),("20","500"),("20","525"),("20","550"),("20","575"),("20","600"),("20","625"),("20","650"),("20","675"),("20","725"),("20","750"),("30","350"),("30","375"),("30","400"),("30","450"),("30","475"),("30","500"),("30","525"),("30","575"),("30","600"),("30","625"),("30","650"),("30","675"),("30","725"),("30","750"),("40","350"),("40","375"),("75","675"),("75","700"),("75","725")}

for mZ,mX in list_ZB_10_500:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-10_MChi-500.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_10_500")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_10_1000 sample
list_ZB_10_1000={("50","800"),("50","850"),("50","875"),("50","975"),("100","775"),("100","800"),("100","825"),("100","850"),("100","875"),("100","900"),("100","925"),("100","975"),("100","1000"),("150","825"),("150","850"),("150","875"),("150","900"),("150","925"),("150","950"),("150","1000"),("200","800"),("200","825"),("200","850"),("200","875"),("200","900"),("200","925"),("200","950"),("200","1000"),("250","775"),("250","800"),("250","825"),("250","850"),("250","900"),("250","925"),("250","975"),("250","1000"),("300","800"),("300","825"),("300","850"),("300","875"),("300","925"),("300","950"),("300","1000"),("350","850"),("350","875"),("350","900"),("350","925"),("350","950"),("350","1000"),("400","900"),("400","925"),("400","950"),("400","975"),("450","950"),("450","975"),("500","1000"),("10","775"),("10","800"),("10","825"),("10","850"),("10","900"),("10","950"),("10","975"),("20","775"),("20","800"),("20","825"),("20","875"),("20","950"),("20","975"),("20","1000"),("30","775"),("30","800"),("30","825"),("30","850"),("30","875"),("30","900"),("40","800"),("40","850"),("40","875"),("40","900"),("40","925"),("40","950"),("40","975"),("40","1000"),("75","775"),("75","800"),("75","925"),("75","950"),("75","975"),("75","1000")}

for mZ,mX in list_ZB_10_1000:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-10_MChi-1000.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_10_1000")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_50_1 sample
list_ZB_50_1={("50","5"),("40","5")}

for mZ,mX in list_ZB_50_1:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-50_MChi-1.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_50_1")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_50_10 sample
list_ZB_50_10={("50","15"),("50","30"),("40","25"),("40","10"),("40","30")}

for mZ,mX in list_ZB_50_10:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-50_MChi-10.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_50_10")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_100_10 sample
list_ZB_100_10={("100","25"),("100","15"),("100","20"),("100","30"),("150","25"),("150","10"),("150","15"),("150","30"),("75","25"),("75","10"),("75","15"),("75","20")}

for mZ,mX in list_ZB_100_10:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-100_MChi-10.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_100_10")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_95_50 sample
list_ZB_95_50={("100","125"),("100","35"),("100","60"),("100","70"),("100","80"),("100","90"),("75","50"),("75","30"),("75","35"),("75","40"),("75","45"),("75","60"),("75","70"),("75","80"),("75","90")}

for mZ,mX in list_ZB_95_50:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-95_MChi-50.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_95_50")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_100_1 sample
list_ZB_100_1={("100","5"),("150","1"),("150","5")}

for mZ,mX in list_ZB_100_1:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-100_MChi-1.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_100_1")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_200_50 sample
list_ZB_200_50={("150","50"),("150","35"),("150","40"),("150","45"),("150","60"),("150","70"),("150","90"),("200","40"),("200","45"),("200","80"),("200","90"),("250","50"),("250","40"),("250","45"),("250","60"),("250","70"),("250","80"),("250","90")}

for mZ,mX in list_ZB_200_50:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-200_MChi-50.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_200_50")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_200_150 sample
list_ZB_200_150={("150","100"),("150","125"),("150","150"),("150","200"),("150","225"),("150","250"),("150","300"),("150","325"),("200","125"),("200","175"),("200","200"),("200","250"),("200","275"),("200","300"),("200","325"),("200","375")}

for mZ,mX in list_ZB_200_150:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-200_MChi-150.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_200_150")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_200_150 sample
list_ZB_200_150={("150","100"),("150","125"),("150","150"),("150","200"),("150","225"),("150","250"),("150","300"),("150","325"),("200","125"),("200","175"),("200","200"),("200","250"),("200","275"),("200","300"),("200","325"),("200","375")}

for mZ,mX in list_ZB_200_150:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-200_MChi-150.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_200_150")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_200_1 sample
list_ZB_200_1={("200","25"),("200","5"),("200","15"),("200","20"),("250","25"),("250","1"),("250","5"),("250","10"),("250","15"),("250","20")}

for mZ,mX in list_ZB_200_1:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-200_MChi-1.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_200_1")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_295_150 sample
list_ZB_295_150={("250","100"),("250","150"),("250","175"),("250","200"),("250","225"),("250","250"),("250","275"),("250","300"),("250","325"),("250","350"),("250","375"),("250","400"),("300","125"),("300","175"),("300","200"),("300","225"),("300","250"),("300","275"),("300","300"),("300","325"),("300","350"),("300","375"),("350","350")} 

for mZ,mX in list_ZB_295_150:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-295_MChi-150.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_295_150")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_300_1 sample
list_ZB_300_1={("300","25"),("300","5"),("300","10"),("300","20"),("350","25"),("350","1"),("350","5"),("350","15"),("350","20"),("400","1"),("400","5"),("400","20")}

for mZ,mX in list_ZB_300_1:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-300_MChi-1.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_300_1")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_300_50 sample
list_ZB_300_50={("300","100"),("300","30"),("300","35"),("300","40"),("300","45"),("300","60"),("300","70"),("300","80"),("300","90"),("350","100"),("350","30"),("350","35"),("350","40"),("350","45"),("350","60"),("350","70"),("400","50"),("400","30"),("400","35"),("400","40"),("400","45"),("400","60"),("400","70")}
 

for mZ,mX in list_ZB_300_50:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-300_MChi-50.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_300_50")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_500_500 sample
list_ZB_500_500={("300","425"),("300","475"),("300","500"),("300","525"),("300","550"),("300","575"),("300","625"),("300","675"),("300","700"),("300","775"),("350","375"),("350","450"),("350","475"),("350","525"),("350","550"),("350","625"),("350","650"),("350","675"),("350","700"),("350","725"),("350","825"),("400","375"),("400","400"),("400","450"),("400","500"),("400","575"),("400","600"),("400","625"),("400","700"),("400","725"),("400","750"),("400","775"),("400","800"),("400","850"),("400","875"),("450","350"),("450","375"),("450","400"),("450","475"),("450","500"),("450","525"),("450","550"),("450","575"),("450","650"),("450","775"),("450","800"),("450","825"),("450","850"),("450","875"),("450","900"),("500","350"),("500","375"),("500","400"),("500","425"),("500","450"),("500","525"),("500","550"),("500","575"),("500","600"),("500","625"),("500","675"),("500","700"),("500","725"),("500","750"),("500","825"),("500","850"),("500","875"),("500","950"),("500","975"),("550","400"),("550","425"),("550","450"),("550","500"),("550","525"),("550","550"),("550","575"),("550","600"),("550","625"),("550","650"),("550","675"),("550","700"),("550","725"),("550","750"),("550","775"),("550","800"),("550","825"),("550","850"),("550","875"),("550","900"),("550","925"),("600","375"),("600","400"),("600","425"),("600","450"),("600","475"),("600","525"),("600","550"),("600","675"),("650","600"),("650","650"),("650","675"),("650","700"),("650","725"),("650","775"),("650","800"),("650","825"),("700","375"),("700","400"),("700","425"),("700","450"),("700","475"),("700","500"),("700","525"),("700","600"),("700","650"),("700","700"),("700","725"),("700","750")}

for mZ,mX in list_ZB_500_500:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-500_MChi-500.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_500_500")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_500_1 sample
list_ZB_500_1={("450","25"),("450","50"),("450","1"),("450","5"),("450","35"),("450","45"),("450","60"),("450","70"),("500","25"),("500","50"),("500","5"),("500","20"),("500","35"),("500","40"),("500","45"),("550","25"),("550","50"),("550","1"),("550","5"),("550","15"),("550","20"),("550","30"),("550","40"),("550","45"),("550","60"),("550","70"),("600","25"),("600","50"),("600","1"),("600","5"),("600","10"),("600","15"),("600","20"),("600","30"),("600","45"),("600","60"),("650","25"),("650","50"),("650","1"),("650","5"),("650","10"),("650","15"),("650","20"),("650","30"),("650","45"),("650","60"),("700","25"),("700","1"),("700","10"),("700","20"),("700","30"),("700","35"),("700","40"),("700","45"),("700","60"),("700","70")}

for mZ,mX in list_ZB_500_1:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-500_MChi-1.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_500_1")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_500_150 sample
list_ZB_500_150={("400","125"),("400","225"),("400","300"),("400","325"),("450","125"),("450","175"),("450","200"),("450","250"),("450","275"),("450","80"),("450","90"),("500","100"),("500","125"),("500","200"),("500","225"),("500","300"),("500","80"),("500","90"),("550","100"),("550","125"),("550","150"),("550","225"),("550","250"),("550","325"),("550","80"),("550","90"),("600","125"),("600","175"),("600","200"),("600","225"),("600","250"),("600","275"),("600","325"),("600","80"),("650","100"),("650","125"),("650","150"),("650","175"),("650","200"),("650","250"),("650","300"),("650","80"),("700","100"),("700","150"),("700","175"),("700","225"),("700","250"),("700","275"),("700","300"),("700","80"),("700","90")}

for mZ,mX in list_ZB_500_150:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-500_MChi-150.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_500_150")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_1000_1000 sample
list_ZB_1000_1000={("550","950"),("550","975"),("550","1000"),("600","900"),("600","925"),("600","975"),("600","1000"),("650","875"),("650","900"),("650","925"),("650","950"),("650","975"),("650","1000"),("700","825"),("700","875"),("700","900"),("700","925"),("700","950"),("750","825"),("750","850"),("750","900"),("750","925"),("750","950"),("750","1000"),("800","775"),("800","800"),("800","825"),("800","850"),("800","900"),("800","925"),("800","950"),("800","975"),("800","1000"),("850","775"),("850","800"),("850","850"),("850","875"),("850","925"),("850","950"),("850","975"),("850","1000"),("900","775"),("900","800"),("900","825"),("900","850"),("900","875"),("900","900"),("900","925"),("900","950"),("900","975"),("900","1000"),("950","775"),("950","900"),("950","925"),("950","950"),("950","1000"),("1000","750"),("1000","775"),("1000","825"),("1000","850"),("1000","875"),("1000","900"),("1000","975"),("1100","750"),("1100","775"),("1100","800"),("1100","825"),("1100","850"),("1100","875"),("1100","925"),("1100","950"),("1100","975"),("1200","750"),("1200","775"),("1200","825"),("1200","850"),("1200","875"),("1200","900"),("1200","925"),("1200","950"),("1200","975"),("1300","750"),("1300","775"),("1300","800"),("1300","850"),("1300","875"),("1300","975"),("1300","1000"),("1400","750"),("1400","775"),("1400","800"),("1400","875"),("1400","900"),("1400","925"),("1400","950"),("1400","975"),("1400","1000")}

for mZ,mX in list_ZB_1000_1000:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-1000_MChi-1000.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_1000_1000")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_1000_150 sample
list_ZB_1000_150={("750","100"),("750","150"),("750","225"),("750","250"),("750","275"),("750","300"),("750","80"),("750","90"),("800","150"),("800","175"),("800","200"),("800","225"),("800","250"),("800","275"),("800","300"),("800","80"),("850","100"),("850","125"),("850","200"),("850","250"),("850","275"),("850","300"),("850","80"),("850","90"),("900","100"),("900","150"),("900","175"),("900","200"),("900","225"),("900","250"),("900","275"),("900","90"),("950","100"),("950","150"),("950","175"),("950","200"),("950","225"),("950","275"),("950","300"),("950","80"),("950","90"),("1000","100"),("1000","125"),("1000","225"),("1000","275"),("1000","300"),("1000","325"),("1000","80"),("1000","90"),("1100","200"),("1100","225"),("1100","275"),("1100","300"),("1100","90"),("1200","125"),("1200","150"),("1200","175"),("1200","200"),("1200","225"),("1200","250"),("1200","275"),("1200","300"),("1200","325"),("1200","80"),("1200","90"),("1300","100"),("1300","125"),("1300","150"),("1300","175"),("1300","225"),("1300","275"),("1300","300"),("1300","80"),("1400","100"),("1400","125"),("1400","150"),("1400","200"),("1400","225"),("1400","250"),("1400","275"),("1400","300"),("1400","325"),("1400","80"),("1400","90"),("1500","100"),("1500","125"),("1500","175"),("1500","200"),("1500","225"),("1500","250"),("1500","275"),("1500","300"),("1500","80"),("1500","90")}

for mZ,mX in list_ZB_1000_150:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-1000_MChi-150.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_1000_150")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_995_500 sample
list_ZB_995_500={("750","325"),("750","350"),("750","400"),("750","425"),("750","450"),("750","475"),("750","500"),("750","525"),("750","550"),("750","575"),("750","600"),("750","625"),("750","650"),("750","675"),("750","725"),("800","325"),("800","350"),("800","375"),("800","450"),("800","475"),("800","525"),("800","550"),("800","575"),("800","600"),("800","625"),("800","650"),("800","675"),("800","700"),("800","725"),("800","750"),("850","325"),("850","375"),("850","400"),("850","450"),("850","475"),("850","500"),("850","525"),("850","550"),("850","600"),("850","625"),("850","650"),("850","675"),("850","700"),("900","325"),("900","400"),("900","500"),("900","525"),("900","550"),("900","600"),("900","625"),("900","650"),("900","700"),("900","725"),("950","325"),("950","350"),("950","375"),("950","400"),("950","450"),("950","525"),("950","550"),("950","575"),("950","600"),("950","625"),("950","675"),("950","700"),("1000","350"),("1000","450"),("1000","475"),("1000","525"),("1000","550"),("1000","575"),("1000","600"),("1000","625"),("1000","700"),("1000","725"),("1100","400"),("1100","475"),("1100","525"),("1100","575"),("1100","600"),("1100","625"),("1100","650"),("1100","675"),("1100","700"),("1100","725"),("1200","350"),("1200","375"),("1200","400"),("1200","425"),("1200","450"),("1200","475"),("1200","500"),("1200","550"),("1200","575"),("1300","700"),("1300","725"),("1400","375"),("1400","400"),("1400","425"),("1400","450"),("1400","500"),("1400","525"),("1400","550"),("1400","575"),("1400","625"),("1400","650"),("1400","675"),("1400","725")}

for mZ,mX in list_ZB_995_500:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-995_MChi-500.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_995_500")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_1000_1 sample
list_ZB_1000_1={("750","50"),("750","1"),("750","5"),("750","15"),("750","20"),("750","30"),("750","35"),("750","40"),("750","45"),("750","60"),("750","70"),("800","50"),("800","1"),("800","10"),("800","15"),("800","20"),("800","30"),("800","35"),("800","45"),("800","60"),("800","70"),("850","25"),("850","50"),("850","5"),("850","10"),("850","15"),("850","20"),("850","35"),("850","40"),("850","60"),("900","25"),("900","50"),("900","5"),("900","10"),("900","15"),("900","20"),("900","35"),("900","40"),("900","45"),("900","60"),("900","70"),("950","50"),("950","5"),("950","10"),("950","20"),("950","35"),("950","45"),("950","60"),("950","70"),("1000","25"),("1000","50"),("1000","5"),("1000","15"),("1000","30"),("1000","40"),("1000","45"),("1000","60"),("1000","70"),("1100","25"),("1100","50"),("1100","1"),("1100","5"),("1100","10"),("1100","15"),("1100","20"),("1100","45"),("1100","70"),("1200","25"),("1200","50"),("1200","1"),("1200","5"),("1200","10"),("1200","15"),("1200","20"),("1200","30"),("1200","35"),("1200","40"),("1200","45"),("1200","60"),("1200","70"),("1300","25"),("1300","50"),("1300","1"),("1300","5"),("1300","20"),("1300","30"),("1300","35"),("1300","40"),("1300","45"),("1300","60"),("1300","70"),("1400","25"),("1400","1"),("1400","5"),("1400","10"),("1400","15"),("1400","30"),("1400","35"),("1400","40"),("1400","45"),("1400","60"),("1400","70"),("1500","25"),("1500","50"),("1500","1"),("1500","5"),("1500","10"),("1500","20"),("1500","30"),("1500","35"),("1500","45"),("1500","60"),("1500","70")}

for mZ,mX in list_ZB_1000_1:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-1000_MChi-1.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_1000_1")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_2000_500 sample
list_ZB_2000_500={("1500","400"),("1500","425"),("1500","500"),("1500","600"),("1500","650"),("1500","675"),("1500","700"),("1500","725"),("1600","300"),("1600","325"),("1600","350"),("1600","375"),("1600","400"),("1600","425"),("1600","500"),("1600","575"),("1600","600"),("1600","650"),("1600","675"),("1700","275"),("1700","300"),("1700","325"),("1700","350"),("1700","375"),("1700","400"),("1700","425"),("1700","450"),("1700","475"),("1700","525"),("1700","550"),("1700","600"),("1700","625"),("1700","650"),("1700","675"),("1700","700"),("1700","725"),("1800","275"),("1800","325"),("1800","350"),("1800","375"),("1800","400"),("1800","425"),("1800","450"),("1800","475"),("1800","500"),("1800","525"),("1800","550"),("1800","575"),("1800","600"),("1800","625"),("1800","650"),("1800","675"),("1800","700"),("1800","725"),("1900","275"),("1900","300"),("1900","325"),("1900","350"),("1900","375"),("1900","400"),("1900","425"),("1900","450"),("1900","475"),("1900","500"),("1900","525"),("1900","550"),("1900","575"),("1900","600"),("1900","625"),("1900","650"),("1900","675"),("1900","700"),("1900","725"),("2000","300"),("2000","350"),("2000","375"),("2000","400"),("2000","425"),("2000","450"),("2000","475"),("2000","525"),("2000","550"),("2000","575"),("2000","700"),("2000","750"),("2500","275"),("2500","300"),("2500","325"),("2500","425"),("2500","450"),("2500","475"),("2500","500"),("2500","525"),("2500","550"),("2500","575"),("2500","600"),("2500","625"),("2500","650"),("2500","675"),("2500","700"),("2500","725")}

for mZ,mX in list_ZB_2000_500:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-2000_MChi-500.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_2000_500")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_1995_1000 sample
list_ZB_1995_1000={("1500","800"),("1500","825"),("1500","850"),("1500","875"),("1500","950"),("1500","975"),("1600","750"),("1600","775"),("1600","825"),("1600","850"),("1600","875"),("1600","900"),("1600","925"),("1600","950"),("1600","975"),("1600","1000"),("1700","775"),("1700","800"),("1700","875"),("1700","900"),("1700","925"),("1700","950"),("1700","975"),("1700","1000"),("1800","750"),("1800","775"),("1800","850"),("1800","875"),("1800","925"),("1800","950"),("1800","975"),("1800","1000"),("1900","750"),("1900","775"),("1900","800"),("1900","825"),("1900","875"),("1900","900"),("1900","925"),("1900","975"),("1900","1000"),("2000","775"),("2000","800"),("2000","900"),("2000","925"),("2000","950"),("2000","975"),("2500","775"),("2500","800"),("2500","950"),("2500","975"),("2500","1000")}

for mZ,mX in list_ZB_1995_1000:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-1995_MChi-1000.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_1995_1000")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_2000_1 sample
list_ZB_2000_1={("1600","25"),("1600","50"),("1600","125"),("1600","150"),("1600","175"),("1600","200"),("1600","225"),("1600","250"),("1600","5"),("1600","20"),("1600","30"),("1600","35"),("1600","70"),("1600","90"),("1700","25"),("1700","50"),("1700","100"),("1700","125"),("1700","150"),("1700","200"),("1700","225"),("1700","250"),("1700","1"),("1700","5"),("1700","10"),("1700","15"),("1700","20"),("1700","30"),("1700","35"),("1700","40"),("1700","60"),("1700","80"),("1700","90"),("1800","25"),("1800","50"),("1800","100"),("1800","125"),("1800","150"),("1800","175"),("1800","200"),("1800","225"),("1800","250"),("1800","1"),("1800","5"),("1800","10"),("1800","20"),("1800","30"),("1800","35"),("1800","40"),("1800","45"),("1800","60"),("1800","70"),("1800","90"),("1900","25"),("1900","50"),("1900","100"),("1900","125"),("1900","150"),("1900","175"),("1900","200"),("1900","225"),("1900","250"),("1900","1"),("1900","5"),("1900","20"),("1900","30"),("1900","35"),("1900","40"),("1900","45"),("1900","60"),("1900","70"),("1900","80"),("1900","90"),("2000","25"),("2000","50"),("2000","100"),("2000","125"),("2000","175"),("2000","200"),("2000","225"),("2000","250"),("2000","15"),("2000","20"),("2000","35"),("2000","40"),("2000","45"),("2000","80"),("2000","90"),("2500","25"),("2500","100"),("2500","125"),("2500","150"),("2500","175"),("2500","200"),("2500","225"),("2500","250"),("2500","1"),("2500","5"),("2500","10"),("2500","15"),("2500","30"),("2500","80"),("2500","90")}

for mZ,mX in list_ZB_2000_1:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-2000_MChi-1.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_2000_1")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_10_10 sample
list_ZB_10_10={("10","25"),("10","15"),("10","30")}

for mZ,mX in list_ZB_10_10:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-10_MChi-10.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_10_10")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_10_50 sample
list_ZB_10_50={("10","35"),("10","40"),("10","45"),("10","60"),("10","80"),("20","50"),("20","40"),("20","45"),("20","60"),("20","70"),("20","80"),("20","90"),("30","40"),("30","45"),("30","60"),("30","70"),("30","80"),("30","90")}

for mZ,mX in list_ZB_10_50:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-10_MChi-50.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_10_50")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_20_1 sample
list_ZB_20_1={("20","5")}

for mZ,mX in list_ZB_20_1:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-20_MChi-1.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_20_1")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }

## Samples for which reweighting is done by using ZB_15_10 sample
list_ZB_15_10={("20","30"),("30","25"),("30","20")}

for mZ,mX in list_ZB_15_10:
  samples['monoH_ZB_' + mZ + '_' + mX + '_'] = { 
    'name': ['latino_monoH_ZpBaryonic_MZp-15_MChi-10.root'],
    'weight': '(baseW*0.2137*0.104976/Xsec)*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeightZB(higgsGenpt)*getZbarxs('+mZ+','+mX+')',
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/interpolationWeightZB.C+', 'initInterpolationWeightZB("Target_'+mZ+'_'+mX+'_Ref_15_10")', '.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/getZbarxs.C+'] 
    }


# #### ttDM Signal
# samples['ttDMpseudo_00010_'] = {
#   'name': ['latino_ttDM0001pseudo00010.root'],
#   'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
# 
# 
#   }

# samples['ttDMpseudo_00020_'] = {
#   'name': ['latino_ttDM0001pseudo00020.root'],
#   'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
# 
# 
#   }

# samples['ttDMpseudo_00050_'] = {
#   'name': ['latino_ttDM0001pseudo00050.root'],
#   'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
# 
# 
#   }

# samples['ttDMpseudo_00100_'] = {
#   'name': ['latino_ttDM0001pseudo00100.root'],
#   'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
# 
# 
#   }

# samples['ttDMpseudo_00200_'] = { 
#   'name': ['latino_ttDM0001pseudo00200.root'],
#   'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
# 
# 
#   }

# samples['ttDMpseudo_00300_'] = { 
#   'name': ['latino_ttDM0001pseudo00300.root'],
#   'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
# 
# 
#   }

# samples['ttDMpseudo_00500_'] = { 
#   'name': ['latino_ttDM0001pseudo00500.root'],
#   'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
# 
# 
#   }

# samples['ttDMscalar_00010_'] = { 
#   'name': ['latino_ttDM0001scalar00010.root'],
#   'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
# 
# 
#   }

# samples['ttDMscalar_00020_'] = { 
#   'name': ['latino_ttDM0001scalar00020.root'],
#   'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
# 
# 
#   }

# samples['ttDMscalar_00050_'] = { 
#   'name': ['latino_ttDM0001scalar00050.root'],
#   'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
# 
# 
#   }

# samples['ttDMscalar_00100_'] = {
#   'name': ['latino_ttDM0001scalar00100.root'],
#   'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
# 
# 
#   }

# samples['ttDMscalar_00200_'] = { 
#   'name': ['latino_ttDM0001scalar00200.root'],
#   'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
# 
# 
#   }

# samples['ttDMscalar_00300_'] = { 
#   'name': ['latino_ttDM0001scalar00300.root'],
#   'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
# 
# 
#   }

# samples['ttDMscalar_00500_'] = { 
#   'name': ['latino_ttDM0001scalar00500.root'],
#   'weight': 'baseW*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
# 
# 
#   }


###########################################
################## FAKE ###################
###########################################

samples['Fake']  = {   'name': [ ] ,
                       'weight' : fakeW+'*veto_EMTFBug'+'*'+METFilter_DATA,              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 4 ,
                       # # 'suppressNegative' :['all'],
                       # # 'suppressNegativeNuisances' :['all'],
                   }

for Run in DataRun :
  directory = treeBaseDir+'Apr2017_Run2016'+Run[0]+'_RemAOD/lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__multiFakeW__formulasFAKE__hadd'+skimFake+'/'
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
                       'FilesPerJob' : 4 ,
                  }

for Run in DataRun :
  directory = treeBaseDir+'Apr2017_Run2016'+Run[0]+'_RemAOD/lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__formulasDATA'+skim+'/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet]) 

