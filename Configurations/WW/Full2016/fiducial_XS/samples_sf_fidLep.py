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
skim='__sfSel' 
#skim='__vbsSel'
#skim='__ssSel'
#skim="__wwSel__monohSel"
#skim="__sfSel__monohSel"
#skim="__wwSel__monohSel__muccaMonoHem"

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
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/'
#  treeBaseDir = '/eos/user/f/fernanpe/trees_SF/'
#  treeBaseDir = '/eos/user/c/calderon/monoH/Full2016_Apr17/'

directory = treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC'+skim+'/'

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


SFweight      = 'puW*\
                 effTrigW*\
                 std_vector_lepton_recoW[0]*\
                 std_vector_lepton_recoW[1]*\
                 electron_etaW_2l*electron_ptW_2l*\
                 veto_EMTFBug'

#SFweight      = 'SFweight'+Nlep+'l'
GenLepMatch   = 'GenLepMatch'+Nlep+'l'




################################################
############### B-Tag  WP ######################
################################################

#bAlgo='cmvav2'
bAlgo='csvv2ivf'
#bAlgo='DeepCSVB'

bWP='L'
#bWP='M'
#bWP='T'

# ... bPog SF

bSF='1.'
if   bAlgo == 'cmvav2' :
 bSF='bPogSF_CMVA'+bWP
elif bAlgo == 'csvv2ivf' :
 bSF='bPogSF_CSV'+bWP
elif bAlgo == 'DeepCSVB' :
 bSF='bPogSF_deepCSV'+bWP

SFweight += '*'+bSF
# Fix for 2-leptons for which this was kept in global formula !
#if Nlep == '2' : SFweight += '/bPogSF_CMVAL'

# ... b Veto

bVeto='bveto_'+bAlgo+bWP

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

#norm_data = '((5690.0/5556.1)*(njet==0) + (3914.0/4187.7)*(njet==1))'
#norm_data = '(1.0)'

### These weights were evaluated on ICHEP16 MC -> Update ?
ptllDYW_NLO = '(0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140)'
ptllDYW_LO  = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'

RinoutSF = '(1.495 * (dymvaggh > 0.98 && abs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) == 11*11 && njet==0) + 1.620 * (dymvaggh > 0.98 && std_vector_lepton_flavour[0] * abs(std_vector_lepton_flavour[1]) == 13*13 && njet==0) + 1.342 * (dymvaggh > 0.95 && dymvaggh < 0.98 && abs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) == 11*11 && njet==0) + 1.306 * (dymvaggh > 0.95 && dymvaggh<0.98 && abs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) == 13*13 && njet==0) + 1.244 * (dymvaggh > 0.9 && dymvaggh < 0.95 && abs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) == 11*11 && njet==0) + 1.202 * (dymvaggh > 0.9 && dymvaggh < 0.95 && abs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) == 13*13 && njet==0) + 1.413 * (dymvaggh > 0.9 && abs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) == 11*11 && njet==1) + 1.218 * (dymvaggh > 0.9 && abs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) == 13*13 && njet==1))'

#0, 0.5, 0.7, 0.9, 0.95, 0.98, -1
# {0, 0.5, 0.7, 0.9, 1}

#Rinout from Analysis CMS

samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToLL_M-10to50')
                                  + getSampleFiles(directory,'DYJetsToLL_M-50')     ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+RinoutSF,
                     'suppressNegative':['all'],
                     'suppressNegativeNuisances' :['all'],
                     'FilesPerJob' : 1 ,
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
  if "__wwSel" in skim:
    samples['DY']['name'] =   getSampleFiles(directory,'DYJetsToTT_MuEle_M-50') \
                            + getSampleFiles(directory,'DYJetsToTT_MuEle_M-50_ext1') \
                            + getSampleFiles(directory,'DYJetsToLL_M-10to50')
  else:
    samples['DY']['name'] +=   getSampleFiles(directory,'DYJetsToTT_MuEle_M-50') \
                             + getSampleFiles(directory,'DYJetsToTT_MuEle_M-50_ext1')

# ... Fix Weights (always after all samples are included !)

# pt_ll weight
# in this case DYJetsToLL_M50 is not included in the list of samples
if (useDYtt and ("__wwSel" in skim)) :
  addSampleWeight(samples,'DY','DYJetsToLL_M-10to50',ptllDYW_NLO)
else:
  addSampleWeight(samples,'DY','DYJetsToLL_M-10to50',ptllDYW_NLO)
  addSampleWeight(samples,'DY','DYJetsToLL_M50'     ,ptllDYW_NLO)

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
  if "__wwSel" not in skim :
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

samples['top'] = {   'name'     :   getSampleFiles(directory,'TTTo2L2Nu') 
                                  + getSampleFiles(directory,'ST_tW_antitop')
                                  + getSampleFiles(directory,'ST_tW_top')  
                                  # We should use in principle: ST_tW_antitop_noHad + ST_tW_antitop_noHad_ext1 + ST_tW_top_noHad + ST_tW_top_noHad_ext1   
#                                  # but first need to compute x-section and correct baseW
                                 # + getSampleFiles(directory,'ST_t-channel_antitop')
                                 # + getSampleFiles(directory,'ST_t-channel_top')
                                 # + getSampleFiles(directory,'ST_s-channel')   
                             ,
                      'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC,  
                     'suppressNegative':['all'],
                     'suppressNegativeNuisances' :['all'],
                      'FilesPerJob' : 1 ,
                  }
                  

###### WW ########

EWK_corr = '(addEWKcorr(TMath::Min(std_vector_leptonGen_pt[0],499.9)) * (std_vector_leptonGen_pid[0] > 0) + addEWKcorr(TMath::Min(std_vector_leptonGen_pt[1],499.9)) * (std_vector_leptonGen_pid[1] > 0))'
gen_mllDressed = 'sqrt(2*std_vector_dressedLeptonGen_pt[0] * std_vector_dressedLeptonGen_pt[1] * (cosh(std_vector_dressedLeptonGen_eta[0]-std_vector_dressedLeptonGen_eta[1])-cos(std_vector_dressedLeptonGen_phi[0]-std_vector_dressedLeptonGen_phi[1])))'

fid = 'std_vector_dressedLeptonGen_pt[0] > 20 && std_vector_dressedLeptonGen_pt[1] > 20 && fabs(std_vector_dressedLeptonGen_eta[0]) < 2.5 && fabs(std_vector_dressedLeptonGen_eta[1]) < 2.5 && abs(std_vector_leptonGen_MotherPID[0]) != 15 && abs(std_vector_leptonGen_MotherPID[1]) != 15 && (std_vector_leptonGen_pid[0] * std_vector_leptonGen_pid[1]== -11*11 || std_vector_leptonGen_pid[0] * std_vector_leptonGen_pid[1]== -13*13) && ' + gen_mllDressed + ' > 20.'

#1.0352 -> ptww renormalization
             
samples['WW']  = {    'name'   : getSampleFiles(directory,'WWTo2L2Nu') ,
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*nllW'+'*'+EWK_corr+'*1.0352',
                      'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/WW/Full2016/onTheFly/addEWKcorr.C+', 'initaddEWKcorr("ratio_Ptlm")'],  
                      'suppressNegative':['all'],
                      'suppressNegativeNuisances' :['all'],
                 }



samples['ggWW']  = {  'name'   : getSampleFiles(directory,'GluGluWWTo2L2Nu_MCFM'),      
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+EWK_corr,
                      'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/WW/Full2016/onTheFly/addEWKcorr.C+', 'initaddEWKcorr("ratio_Ptlm")'],
                      'suppressNegative':['all'],
                      'suppressNegativeNuisances' :['all'],
                      'isData': ['0'],                            
                   }


samples['WWnonfid']  = {    'name'   : getSampleFiles(directory,'WWTo2L2Nu') ,
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*nllW'+'*'+EWK_corr+'*1.0352',
                      'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/WW/Full2016/onTheFly/addEWKcorr.C+', 'initaddEWKcorr("ratio_Ptlm")'],  
                      'suppressNegative':['all'],
                      'suppressNegativeNuisances' :['all'],
                 }



samples['ggWWnonfid']  = {  'name'   : getSampleFiles(directory,'GluGluWWTo2L2Nu_MCFM'),      
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+EWK_corr,
                      'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/WW/Full2016/onTheFly/addEWKcorr.C+', 'initaddEWKcorr("ratio_Ptlm")'],
                      'suppressNegative':['all'],
                      'suppressNegativeNuisances' :['all'],
                      'isData': ['0'],                            
                   }



addSampleWeight(samples,'WW','WWTo2L2Nu'     , '('+fid+')')
addSampleWeight(samples,'WWnonfid','WWTo2L2Nu', '!('+fid+')')
addSampleWeight(samples,'ggWW','GluGluWWTo2L2Nu_MCFM'     , '('+fid+')')
addSampleWeight(samples,'ggWWnonfid','GluGluWWTo2L2Nu_MCFM', '!('+fid+')')

## during tree production: 1.4 k-factor has been applied to both samples
## ggWW sample: k = 1.4 +/- 15%
## ggWW interference: k = 1.87 +/- 25%

######## Vg ########

samples['Vg']  =  {     'name'   :   getSampleFiles(directory,'Wg_MADGRAPHMLM')
                                   + getSampleFiles(directory,'Zg')
                                   ,
                        'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC + '* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                        'suppressNegative':['all'],
                        'suppressNegativeNuisances' :['all'],
                  }

######## VgS ########

samples['VgS']  = {    'name':  getSampleFiles(directory,'WgStarLNuEE') + getSampleFiles(directory,'WgStarLNuMuMu') ,
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*1.4',  
                       'suppressNegative':['all'],
                       'suppressNegativeNuisances' :['all'],
                  }

## 
## Wg* scale factor is
##
## X.X  +/- X.X     in mumumu
## 1.4  +/- 0.4     in emumu
##
##


######### VZ #########

samples['VZ']  = {    'name':   getSampleFiles(directory,'WZTo3LNu')
                              + getSampleFiles(directory,'ZZTo2L2Nu')
                              + getSampleFiles(directory,'WZTo2L2Q')
                              + getSampleFiles(directory,'ZZTo2L2Q')  
                              # Should we include this as well here:
                              # + getSampleFiles(directory,'tZq_ll')
                              ,   
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*1.11',  
                      'suppressNegative':['all'],
                      'suppressNegativeNuisances' :['all'],
                      'FilesPerJob' : 1 ,
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
                      'suppressNegative':['all'],    
                      'suppressNegativeNuisances' :['all'],
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,  
                  }

###########################################
#############   SIGNALS  ##################
###########################################


#### ggH -> WW

samples['ggH_hww']  = {  'name'  : getSampleFiles(directory,'GluGluHToWWTo2L2NuPowheg_M125') ,  
                         'weight': XSWeight+'*'+'48.58/44.14'+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                         'suppressNegative':['all'],
                         'suppressNegativeNuisances' :['all'],
                      }


#### VBF H->WW

samples['qqH_hww']  = {   'name' : getSampleFiles(directory,'VBFHToWWTo2L2Nu_alternative_M125') ,
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                          'suppressNegative':['all'],
                          'suppressNegativeNuisances' :['all'],
                      }

### ZH ; H->WW

samples['ZH_hww']   = {   'name' :  getSampleFiles(directory,'HZJ_HToWWTo2L2Nu_M125') ,
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                          'suppressNegative':['all'],
                          'suppressNegativeNuisances' :['all'],
                      }
# samples['ZH_hww']   = {   'name' :  getSampleFiles(directory,'HZJ_HToWW_M125') ,
#                          'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
#                       }

samples['ggZH_hww'] = {   'name' : getSampleFiles(directory,'GluGluZH_HToWWTo2L2Nu_M125') ,
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                          'suppressNegative':['all'],
                          'suppressNegativeNuisances' :['all'],
                      }
# samples['ggZH_hww'] = {   'name' : getSampleFiles(directory,'ggZH_HToWW_M125') ,
#                          'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
#                       }

#### WH ; H->WW

samples['WH_hww']   = {   'name' :   getSampleFiles(directory,'HWminusJ_HToWW_M125')
                                   + getSampleFiles(directory,'HWplusJ_HToWW_M125')
                                   , 
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                          'suppressNegative':['all'],
                          'suppressNegativeNuisances' :['all'],
                      }

#### bbHY ; H->WW 

samples['bbH_hww']  = {  'name' :   getSampleFiles(directory,'bbHToWWTo2L2Nu_M125_yb2') 
                                  + getSampleFiles(directory,'bbHToWWTo2L2Nu_M125_ybyt')
                                  ,
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                         'suppressNegative':['all'],
                         'suppressNegativeNuisances' :['all'],
                      }


#### H -> TauTau

samples['H_htt']    = {   'name' :   getSampleFiles(directory,'VBFHToTauTau_M125')
                                   + getSampleFiles(directory,'HZJ_HToTauTau_M125')
                                   + getSampleFiles(directory,'HWplusJ_HToTauTau_M125')
                                   + getSampleFiles(directory,'HWminusJ_HToTauTau_M125')
                                   ,  
                          'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                          'suppressNegative':['all'],
                          'suppressNegativeNuisances' :['all'],
                      }


samples['ggH_htt']    = {   'name' :   getSampleFiles(directory,'GluGluHToTauTau_M125')
                                   ,  
                            'weight': XSWeight+'*'+'48.58/44.14'+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                            'suppressNegative':['all'],
                            'suppressNegativeNuisances' :['all'],
                      }


###########################################
################## FAKE ###################
###########################################

samples['Fake']  = {   'name': [ ] ,
                       'weight' : fakeW+'*veto_EMTFBug'+'*'+METFilter_DATA,              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 2 ,
                       'suppressNegative':['all'],
                       'suppressNegativeNuisances' :['all'],
                   }

for Run in DataRun :
  directory = treeBaseDir+'Apr2017_Run2016'+Run[0]+'_RemAOD/lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__dorochester__multiFakeW__formulasFAKE__hadd'+skimFake+'/'
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
                       'FilesPerJob' : 2 ,
                  }

for Run in DataRun :
  directory = treeBaseDir+'Apr2017_Run2016'+Run[0]+'_RemAOD/lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__dorochester__formulasDATA'+skim+'/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet]) 

