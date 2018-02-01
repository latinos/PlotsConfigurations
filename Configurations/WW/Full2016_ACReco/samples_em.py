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
skim='__wwSel'
#skim='__topSel'
#skim='__topSel'
#skim='__vh3lSel' 
#skim='__sfSel' 
#skim='__vbsSel'
#skim='__ssSel'
#skim="__wwSel__monohSel"
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
  xrootdPath  = 'root://eoscms.cern.ch/'
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/'

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
SFweight      = 'SFweight'+Nlep+'l'
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

# ... bPog SF

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


###### WW ########
             
samples['WW']  = {    'name'   : getSampleFiles(directory,'WWTo2L2Nu') ,
                      #'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*nllW' ,  
                      'weight' : XSWeight ,
                      'FilesPerJob' : 1 , 
                 }



#samples['ggWW']  = {  'name'   : getSampleFiles(directory,'GluGluWWTo2L2Nu_MCFM'),      
#                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,  
#                      'FilesPerJob' : 1 , 
#                   }


###########################################
#############   SIGNALS  ##################
###########################################

samples['WW_SM'] = {   'name'  :     getSampleFiles(directory,'WWTo2L2Nu_aTGC_0-400')    
                                    +  getSampleFiles(directory,'WWTo2L2Nu_aTGC_400-600')  
                                    +  getSampleFiles(directory,'WWTo2L2Nu_aTGC_600-800')  
                                    +  getSampleFiles(directory,'WWTo2L2Nu_aTGC_800-Inf') ,
                        #'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*(22357.2/24701.9)*(std_vector_LHE_weight[173]/GEN_weight_SM)*(std_vector_LHE_weight[173]!=-999)',
                        'weight' : XSWeight+'*(22357.2/24701.9)*(std_vector_LHE_weight[173]/GEN_weight_SM)*(std_vector_LHE_weight[173]!=-999)',
                        'FilesPerJob' : 1 , 
                     }

h=open('acoupling.py','r')
exec(h)
for iWeight in acoupling['weights']:
  iLheWeight=acoupling['weights'][iWeight]['LheWeight']
  samples['WW_'+str(iWeight)+'_aTGC'] = {
                         'name'  :     getSampleFiles(directory,'WWTo2L2Nu_aTGC_0-400')
                                    +  getSampleFiles(directory,'WWTo2L2Nu_aTGC_400-600')
                                    +  getSampleFiles(directory,'WWTo2L2Nu_aTGC_600-800')
                                    +  getSampleFiles(directory,'WWTo2L2Nu_aTGC_800-Inf') ,
                        #'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*(22357.2/24701.9)*(std_vector_LHE_weight[173]/GEN_weight_SM)*(std_vector_LHE_weight[173]!=-999)',
                        #'weight' : XSWeight+'*(22357.2/24701.9)*(std_vector_LHE_weight['+str(iLheWeight)+']/GEN_weight_SM)*(std_vector_LHE_weight[173]!=-999)',
                        'FilesPerJob' : 1 ,
                     }
  if iLheWeight == -1 :
    samples['WW_'+str(iWeight)+'_aTGC']['weight'] = XSWeight+'*(22357.2/24701.9)*(std_vector_LHE_weight[173]!=-999)'
  else:
    samples['WW_'+str(iWeight)+'_aTGC']['weight'] = XSWeight+'*(22357.2/24701.9)*(std_vector_LHE_weight['+str(iLheWeight)+']/GEN_weight_SM)*(std_vector_LHE_weight[173]!=-999)'

