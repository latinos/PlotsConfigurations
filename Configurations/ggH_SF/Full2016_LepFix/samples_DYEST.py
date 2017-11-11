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
skim='__sfmvaSel'
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
  xrootdPath  = 'root://eoscms.cern.ch/'
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/'
elif  'gridui' in SITE: #PISA
  treeBaseDir = '/gpfs/ddn/srm/cms/store/user/lviliani/Full2016_Apr17/'
elif 'sdfarm' in SITE : # KISTI T3
  xrootdPath  = 'root://cms-xrdr.sdfarm.kr:1094/'
  treeBaseDir = '/xrootd/store/user/salee/cmshww/Full2016_Apr17/'


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
#SFweight      = 'SFweight'+Nlep+'l'
if Nlep == '2' :
  SFweight = 'puW * effTrigW * electron_etaW_'+Nlep+'l * electron_ptW_'+Nlep+'l * veto_EMTFBug '
else:
  SFweight = 'puW * effTrigW'+Nlep+'l * electron_etaW_'+Nlep+'l * electron_ptW_'+Nlep+'l * veto_EMTFBug '
for iLep in range(int(Nlep)): SFweight += ' * std_vector_lepton_recoW['+str(iLep)+'] '
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
#############  BACKGROUNDS  ###############
###########################################


###### DY #######

useDYHT = True        # be carefull DY HT is LO 
useDYtt = False    
mixDYttandHT = False  # be carefull DY HT is LO (HT better stat for HT>450 GEV)

### These weights were evaluated on ICHEP16 MC -> Update ?
ptllDYW_NLO = '(0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140)'
ptllDYW_LO  = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'

samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToLL_M-10to50')
                                  + getSampleFiles(directory,'DYJetsToLL_M-50')     ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 2 ,
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

