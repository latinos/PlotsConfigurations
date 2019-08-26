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

useDYInclusive = True
useDYforHmumu  = False

###### DY (105 < mll < 160) #######

if useDYforHmumu :
  samples['DY']  = {
    'name'   : getSampleFiles(directory,'DYJetsToLL_M-105To160',False,'nanoLatino_') ,
    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(gen_ptll)',
    'FilesPerJob' : 1 ,
    #'suppressNegative' :['all'],
    #'suppressNegativeNuisances' :['all'],
    'linesToAdd' : ['.L /afs/cern.ch/user/d/dkondrat/work/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/HMuMu/Zpt2016/onTheFly/interpolationWeight.C+', 'initInterp\
olationWeight("DATA2")']
  }

###### DY (Standard) #######

elif useDYInclusive:
  samples['DY'] = {
    'name'   : getSampleFiles(directory,'DYJetsToLL_M-50_ext2',False,'nanoLatino_'),
    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*interpolationWeight(gen_ptll)',
    'FilesPerJob' : 1,
    #'suppressNegative' :['all'],
    #'suppressNegativeNuisances' :['all'],
    'linesToAdd' : ['.L /afs/cern.ch/user/d/dkondrat/work/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/HMuMu/Zpt2016/onTheFly/interpolationWeight.C+', 'initInterp\
olationWeight("DATA2")']
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
                             + getSampleFiles(directory,'ggZZ2m2t',False,'nanoLatino_')
                             + getSampleFiles(directory,'ggZZ2m2n',False,'nanoLatino_')
                             + getSampleFiles(directory,'ggZZ2e2t',False,'nanoLatino_')
                             + getSampleFiles(directory,'ggZZ2e2m',False,'nanoLatino_')
                             # #
                             + getSampleFiles(directory,'ggZZ4t',False,'nanoLatino_')
                             + getSampleFiles(directory,'ggZZ4m',False,'nanoLatino_')
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

