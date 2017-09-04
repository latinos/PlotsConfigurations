import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *


# samples

#samples = {}

##############################################
###### Tree Directory according to site ######
##############################################

#SITE=os.uname()[1]
SITE='cern'
if    'iihe' in SITE :
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/'
elif  'cern' in SITE :
  #treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/'
  treeBaseDir = 'root://eosuser.cern.ch//eos/user/l/lenzip/'

directory = treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__sfSel__genericFormulas/'


################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'baseW*GEN_weight_SM/abs(GEN_weight_SM)'
SFweight      = 'puW*bPogSF_CMVAL*effTrigW*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*veto_EMTFBug'
GenLepMatch   = 'std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]'

Top_pTrw      = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) )'

#weightMetDY ='((1.03783-0.00576232*metPfType1)*(njet==0)'
#weightMetDY+='+(1.08826-0.00412335*metPfType1)*(njet==1)'
#weightMetDY+='+(0.994585-0.0018199*metPfType1)*(njet>=2 && (mjj < 500 || detajj<3.5))'
#weightMetDY+='+(1.69647-0.00903982*metPfType1)*(njet>=2 && (mjj > 500 && detajj>3.5)))'
weightMetDY ="1."


################################################
############   MET  FILTERS  ###################
################################################

METFilter_Common = '(std_vector_trigger_special[0]*std_vector_trigger_special[1]*std_vector_trigger_special[2]*std_vector_trigger_special[3]*std_vector_trigger_special[5])'

METFilter_DATA   =  METFilter_Common + '*' + '(std_vector_trigger_special[4]*!std_vector_trigger_special[6]*!std_vector_trigger_special[7]*std_vector_trigger_special[8]*std_vector_trigger_special[9])'

METFilter_MCver  =  '(std_vector_trigger_special[8]==-2.)'
METFilter_MCOld  =  '(std_vector_trigger_special[6]*std_vector_trigger_special[7])'
METFilter_MCNew  =  '(std_vector_trigger_special[8]*std_vector_trigger_special[9])'
METFilter_MC     =  METFilter_Common + '*' + '(('+METFilter_MCver+'*'+METFilter_MCOld+')||(!'+METFilter_MCver+'*'+METFilter_MCNew+'))' 

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

useDYHT = True       # be carefull DY HT is LO 
useDYtt = False     
mixDYttandHT = False  # be carefull DY HT is LO (HT better stat for HT>450 GEV)

### These weights were evaluated on ICHEP16 MC -> Update ?
ptllDYW_NLO = '1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582))'
ptllDYW_LO  = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'

samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToLL_M-10to50')
                                  + getSampleFiles(directory,'DYJetsToLL_M-50')     ,
                     'weight' : 'XSWeight*SFweight*GenLepMatch*METFilter_MC', #XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC, 
                     'FilesPerJob' : 2,
                 }

# ... Add DY HT Samples
if useDYHT :
  #use the inclusive LO sample
  # systematics are not available for that sample. Temporarily use the NLO one
  #samples['DY'] = {  'name'   :   #getSampleFiles(directory,'DYJetsToLL_M-10to50-LO')
  #                                getSampleFiles(directory,'DYJetsToLL_M-50-LO-ext1')     ,
  #                   'weight' : 'XSWeight*SFweight*GenLepMatch*METFilter_MC*'+weightMetDY, #XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,
  #                   'FilesPerJob' : 3, 
  #               }  
  samples['DY'] = {  'name'   :   #getSampleFiles(directory,'DYJetsToLL_M-10to50-LO')
                                  getSampleFiles(directory,'DYJetsToLL_M-50')     ,
                     'weight' : 'XSWeight*SFweight*GenLepMatch*METFilter_MC*'+weightMetDY, #XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,
                     'FilesPerJob' : 2, 
                 }  

 

  #samples['DY']['name'] +=  #getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-70to100') 
                             #+ getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-100to200')
                             #+ getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-200to400') 
                             #+ getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-400to600') 
                             #+ getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-600toInf')
  samples['DY']['name'] +=    getSampleFiles(directory,'DYJetsToLL_M-50_HT-70to100') \
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
  samples['DY']['name'] +=   getSampleFiles(directory,'DYJetsToTT_MuEle_M-50') \
                             + getSampleFiles(directory,'DYJetsToTT_MuEle_M-50_ext1')

# ... Fix Weights (always after all samples are included !)

# pt_ll weight
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50',ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M50'     ,ptllDYW_NLO)

if useDYHT :
  # Remove high HT from inclusive sample
  genHT = 'std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0)+std_vector_LHEparton_pt[3]*(std_vector_LHEparton_pt[3]>0)'
  #addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO', genHT+'<70.0')  
  #systematics are not available for that sample. Temporarily use the NLO one 
  #addSampleWeight(samples,'DY','DYJetsToLL_M-50-LO-ext1'    , genHT+'<70.0') 
  addSampleWeight(samples,'DY','DYJetsToLL_M-50'    , genHT+'<70.0') 
  # pt_ll weight
  #addSampleWeight(samples,'DY','DYJetsToLL_M-5to50-LO'            ,ptllDYW_LO)
  #addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-70to100'    ,ptllDYW_LO)
  #addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-100to200'   ,ptllDYW_LO)
  #addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400'   ,ptllDYW_LO)
  #addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600'   ,ptllDYW_LO)
  #addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toInf'   ,ptllDYW_LO)
  addSampleWeight(samples,'DY','DYJetsToLL_M-50-LO-ext1'          ,ptllDYW_LO)
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
  #addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-70to100'    , getBaseW(directory,['DYJetsToLL_M-5to50_HT-70to100'])+'/baseW')   # x-section update
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100'       , getBaseW(directory,['DYJetsToLL_M-50_HT-70to100'])+'/baseW')      # x-section update
  # set baseW across both samples
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200'      , getBaseW(directory,['DYJetsToLL_M-50_HT-100to200','DYJetsToLL_M-50_HT-100to200_ext1'])+'/baseW')
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200_ext1' , getBaseW(directory,['DYJetsToLL_M-50_HT-100to200','DYJetsToLL_M-50_HT-100to200_ext1'])+'/baseW')
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400'      , getBaseW(directory,['DYJetsToLL_M-50_HT-200to400','DYJetsToLL_M-50_HT-200to400_ext1'])+'/baseW')
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400_ext1' , getBaseW(directory,['DYJetsToLL_M-50_HT-200to400','DYJetsToLL_M-50_HT-200to400_ext1'])+'/baseW')

if useDYtt :
  # Remove OF from Inclusive sample
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
                                  # but first need to compute x-section and correct baseW
                                  + getSampleFiles(directory,'ST_t-channel_antitop')
                                  + getSampleFiles(directory,'ST_t-channel_top')
                                  + getSampleFiles(directory,'ST_s-channel')   
                             ,
                      'weight' : 'XSWeight*SFweight*GenLepMatch*METFilter_MC',#XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC, 
                      'FilesPerJob' : 1 
                  }
# add the top pt reweighting for ttbar                  
addSampleWeight(samples,'top','TTTo2L2Nu',Top_pTrw)

###### WW ########
             
samples['WW']  = {    'name'   : getSampleFiles(directory,'WWTo2L2Nu') ,
                      'weight' : 'XSWeight*SFweight*GenLepMatch*METFilter_MC',#XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*nllW' ,  
                 }

samples['ggWW']  = {  'name'   : getSampleFiles(directory,'GluGluWWTo2L2Nu_MCFM'),      
                      'weight' : 'XSWeight*SFweight*GenLepMatch*METFilter_MC', #XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                      'isData': ['0'],                            
                   }
## during tree production: 1.4 k-factor has been applied to both samples
## ggWW sample: k = 1.4 +/- 15%
## ggWW interference: k = 1.87 +/- 25%
######## Vg ########

samples['Vg']  =  {     'name'   :   getSampleFiles(directory,'Wg_MADGRAPHMLM')
                                   + getSampleFiles(directory,'Zg')
                                   ,
                        'weight' : 'XSWeight*SFweight*METFilter_MC*!(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',#XSWeight+'*'+SFweight+'*'+METFilter_MC + '* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                  }

######## VgS ########

samples['VgS']  = {    'name':  getSampleFiles(directory,'WgStarLNuEE') + getSampleFiles(directory,'WgStarLNuMuMu') ,
                       'weight' : 'XSWeight*SFweight*GenLepMatch*METFilter_MC*1.4' #XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*1.4' ,  
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
                      'weight' : 'XSWeight*SFweight*GenLepMatch*METFilter_MC*1.11', #XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*1.11' ,  
                      'FilesPerJob' : 5 
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
                      'weight' : 'XSWeight*SFweight*GenLepMatch*METFilter_MC',#XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                  }

###########################################
#############  HIGH MASS SIGNALS   ##################
###########################################
massesAndModelsFile = "massesAndModels.py"
if os.path.exists(massesAndModelsFile) :
  handle = open(massesAndModelsFile,'r')
  exec(handle)
  handle.close()
else:
  print "!!! ERROR file ", massesAndModelsFile, " does not exist."
for m in masses:
  for model in models:

#    kp = float(model[6:9])*float(model[6:9]) rimosso
    brn = float(model[-3:])
    #sf = kp*(1-brn)
    sf = 1.0                                    
    #sf125 = 1-kp
    #sf125int = sqrt(1-kp)
    model_int = model+"_I"
    #print "k' = ", kp," BRnew = ",brn," SF = ",sf
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    print model_name
    
    #GluGlu
    samples['ggH_hww_'+m+'_'+model_name] = {    'name': getSampleFiles(directory,'GluGluHToWWTo2L2Nu_JHUGen698_M'+m) ,
                                                'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+ '*'+model,
                                        }

    samples['ggH_hww_INT'+m+'_'+model_name] = { 'name': getSampleFiles(directory,'GluGluHToWWTo2L2Nu_JHUGen698_M'+m) ,
                                                'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+ '*'+model_int,
                                        } 

    #VBF
    samples['qqH_hww_'+m+'_'+model_name] = {    'name': getSampleFiles(directory,'VBFHToWWTo2L2Nu_JHUGen698_M'+m) ,
                                                'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch,#+ '*'+model,
                                        }                   



###########################################
################## FAKE ###################
###########################################

samples['Fake']  = {   'name': [ ] ,
                       'weight' : '(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))*veto_EMTFBug*METFilter_DATA', #'(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))*veto_EMTFBug'+'*'+METFilter_DATA,              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 8 ,
                   }

for Run in DataRun :
  #directory = treeBaseDir+'Feb2017_Run2016'+Run[0]+'_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__fakeWCut/'
  directory = treeBaseDir+'Feb2017_Run2016'+Run[0]+'_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__fakeWCut__sfSel__genericFormulas/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['Fake']['name'].append(iFile)
      samples['Fake']['weights'].append(DataTrig[DataSet])

###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,     
                       'weight' : 'veto_EMTFBug*METFilter_DATA',#'veto_EMTFBug'+'*'+METFilter_DATA,
                       'weights' : [ ],
                       'isData': ['all'], 
                       'FilesPerJob' : 8 ,
                  }

for Run in DataRun :
  #directory = treeBaseDir+'Feb2017_Run2016'+Run[0]+'_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight/'
  directory = treeBaseDir+'Feb2017_Run2016'+Run[0]+'_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__sfSel__genericFormulas/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet]) 
