import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

samples = {}

################################################
################# SKIMS ########################
################################################

skim='/'
#skim='__wwSel'

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

directory = treeBaseDir+'Summer16_102X_nAODv5_Full2016v5_hmm/MCl2loose2016hmm__MCCorr2016hmm__l2tightOR2016hmm'+skim


################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='2'

################################################
############### Lepton WP ######################
################################################

LepWPCut        = 'LepCut2l__mu_cut_Tight80x__mu_cut_Medium80x'
LepWPweight     = 'LepSF2l__mu_cut_Tight80x__mu_cut_Medium80x'


################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut+'*PrefireWeight'
GenLepMatch   = 'GenLepMatch'+Nlep+'l'


################################################
############### B-Tag  WP ######################
################################################

#FIXME b-tagging to be optimized
# Definitions in aliases.py

SFweight += '*btagSF'

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
            ['B','Run2016B-Nano1June2019_ver2-v1'] ,
            ['C','Run2016C-Nano1June2019-v1'] ,
            ['D','Run2016D-Nano1June2019-v1'] ,
            ['E','Run2016E-Nano1June2019-v1'] ,
            ['F','Run2016F-Nano1June2019-v1'] ,
            ['G','Run2016G-Nano1June2019-v1'] ,
            ['H','Run2016H-Nano1June2019-v1'] ,
          ]

DataSets = ['SingleMuon']

###########################################
#############  BACKGROUNDS  ###############
###########################################


# ###### DY (105 < mll < 160) #######

# ### ptllDYW_NLO = '((0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140))'
# ### ptllDYW_LO  = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'

# samples['DY']  = {   
#   'name'   : getSampleFiles(directory,'DYJetsToLL_M-105To160',False,'nanoLatino_') ,
#   'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*((8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140))' ,
#   'FilesPerJob' : 1 ,
# }
# ####addSampleWeight(samples,'DY','DYJetsToLL_M-105to160',ptllDYW_NLO)


###### DY (Standard) #######

### These weights were evaluated on ICHEP16 MC -> Update ?

samples['DY'] = {    
'name'   :   getSampleFiles(directory,'DYJetsToLL_M-50_ext2',False,'nanoLatino_'),
  'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
  'suppressNegative' :['all'],
  'suppressNegativeNuisances' :['all'],
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/HMuMu/Full2016/onTheFly/interpolationWeight.C+', 'initInterpolationWeight("DATA2")'] 
  'FilesPerJob' : 1,
}

###### Top #######
Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )'

samples['top'] = {   'name'     :   getSampleFiles(directory,'TTTo2L2Nu',False,'nanoLatino_') 
                                  + getSampleFiles(directory,'ST_tW_antitop',False,'nanoLatino_')
                                  + getSampleFiles(directory,'ST_tW_top',False,'nanoLatino_')  
                                  + getSampleFiles(directory,'ST_t-channel_antitop',False,'nanoLatino_')
                                  + getSampleFiles(directory,'ST_t-channel_top',False,'nanoLatino_')
                                  + getSampleFiles(directory,'ST_s-channel',False,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                      'FilesPerJob' : 1 ,
                  }
                  
addSampleWeight(samples,'top','TTTo2L2Nu',Top_pTrw)

######### VV #########

samples['VV']  = {    'name':  getSampleFiles(directory,'WWTo2L2Nu',False,'nanoLatino_')
                             + getSampleFiles(directory,'WZTo3LNu_ext1',False,'nanoLatino_')
                             + getSampleFiles(directory,'WZTo2L2Q',False,'nanoLatino_')
                             + getSampleFiles(directory,'ZZTo2L2Nu_ext1',False,'nanoLatino_')
                             + getSampleFiles(directory,'ZZTo2L2Q',False,'nanoLatino_')
                             + getSampleFiles(directory,'ZZTo4L',False,'nanoLatino_')
                             #
                             # + getSampleFiles(directory,'ggZZ2m2t',False,'nanoLatino_'),
                             # + getSampleFiles(directory,'ggZZ2m2n',False,'nanoLatino_'),
                             # + getSampleFiles(directory,'ggZZ2e2t',False,'nanoLatino_'),
                             # + getSampleFiles(directory,'ggZZ2e2m',False,'nanoLatino_'),
                             # #
                             # + getSampleFiles(directory,'ggZZ4t',False,'nanoLatino_'),
                             # + getSampleFiles(directory,'ggZZ4m',False,'nanoLatino_'),
                      ,
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                      'FilesPerJob' : 2 ,
                  }

########## VVV #########

samples['VVV'] = {    'name':   getSampleFiles(directory,'ZZZ',False,'nanoLatino_')
                              + getSampleFiles(directory,'WZZ',False,'nanoLatino_')
                              + getSampleFiles(directory,'WWZ',False,'nanoLatino_')
                              + getSampleFiles(directory,'WWW',False,'nanoLatino_')
                              ,    
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                  }

###########################################
#############   SIGNALS  ##################
###########################################

#### ggH -> MuMu
samples['ggH_hmm']  = {  'name'  : getSampleFiles(directory,'GluGluHToMuMu_M125_CP5',False,'nanoLatino_') ,  
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*weight2MINLO' ,  
                      }

#### VBF H -> MuMu
samples['VBF_hmm']  = {  'name'  : getSampleFiles(directory,'VBFHToMuMu_M125_CP5',False,'nanoLatino_') ,  
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,
                      }

#### ZH -> MuMu
samples['ZH_hmm']  = {  'name'  : getSampleFiles(directory,'ZH_HToMuMu_M125_CP5',False,'nanoLatino_') ,  
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,
                      }

#### WH -> MuMu
samples['WH_hmm']   = {   'name' :   getSampleFiles(directory,'WPlusH_HToMuMu_M125_CP5',False,'nanoLatino_')
                          + getSampleFiles(directory,'WMinusH_HToMuMu_M125_CP5',False,'nanoLatino_')
                          , 
                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                      }

#### ttH -> MuMu
samples['ttH_hmm']   = {   'name' :   getSampleFiles(directory,'ttHToMuMu_M125_CP5',False,'nanoLatino_')
                           + getSampleFiles(directory,'WMinusH_HToMuMu_M125_CP5',False,'nanoLatino_')
                                   , 
                           'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
                         }


###########################################
################## FAKE ###################
###########################################
samples['Fakes']  = {  'name'   :   
                      getSampleFiles(directory,'TTToSemiLeptonic',False,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC,
                      'FilesPerJob': 3,
                    }



###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,     
                       'weight' : METFilter_DATA+'*'+LepWPCut,
                       'weights' : [ ],
                       'isData': ['all'],                            
                       'FilesPerJob' : 20 ,
                  }

for Run in DataRun :
  directory = treeBaseDir+'Run2016_102X_nAODv5_Full2016v5_hmm/DATAl2loose2016hmm__l2tightOR2016hmm/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
##      samples['DATA']['weights'].append(DataTrig[DataSet]) 

