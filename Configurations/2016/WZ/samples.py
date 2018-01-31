# samples
import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *


#samples = {}
directory = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Apr2017_summer16/lep2SelVBS__MCWeights__hadd__bSFL2pTEffCut__genMatchVariables' 
fakeDir = directory + '__vh3lFakeSel__bkgWeights/'
normalDir = directory + '__l2tightVBS__vh3lSelVBS/'

# MET filter
METFilter_Common = '(std_vector_trigger_special[0]*\
                     std_vector_trigger_special[1]*\
                     std_vector_trigger_special[2]*\
                     std_vector_trigger_special[3]*\
                     std_vector_trigger_special[5]\
                   )'

METFilter_DATA   =  METFilter_Common + '*' + '(std_vector_trigger_special[4]*\
                                              (! std_vector_trigger_special[6])*\
                                              (! std_vector_trigger_special[7])*\
                                              std_vector_trigger_special[8]*\
                                              std_vector_trigger_special[9])'

METFilter_MCver  =  '(std_vector_trigger_special[8]==-2.)'
METFilter_MCOld  =  '(std_vector_trigger_special[6]*std_vector_trigger_special[7])'
METFilter_MCNew  =  '(std_vector_trigger_special[8]*std_vector_trigger_special[9])'
METFilter_MC = METFilter_Common + '*' + '(('+METFilter_MCver+'*'+METFilter_MCOld+') || ((! '+METFilter_MCver+')*'+METFilter_MCNew+'))' 

#METFilter_DATA = '1'
#METFilter_MC = '1'

########################
## Prompt subtraction ##
########################

samples['Vg_promptSubtr']  = {    'name': getSampleFiles(fakeDir,'Zg'),    
                      'weight' : '-1. * puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_idisoWcut_WP_Tight80X[2]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_recoW[2]*GEN_weight_SM/abs(GEN_weight_SM)*fakeW3l',  
#                      'weights' : ['-1.'],                          
                  }


samples['ZZ_promptSubtr']  = {    'name': getSampleFiles(fakeDir,'ZZTo4L'),
                      'weight' : '-1. * puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_idisoWcut_WP_Tight80X[2]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_recoW[2]*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*std_vector_lepton_promptgenmatched[2]*GEN_weight_SM/abs(GEN_weight_SM)*fakeW3l',    
#                      'weights' : ['-1.'],                                
                  }

samples['VVV_promptSubtr'] = {    'name': getSampleFiles(fakeDir,'WZZ') +\
                          getSampleFiles(fakeDir,'ZZZ') +\
                          getSampleFiles(fakeDir,'WWW') +\
                          getSampleFiles(fakeDir,'WWZ') +\
                          #getSampleFiles(fakeDir,'TTZToQQ') +\
                          #getSampleFiles(fakeDir,'TTWJetsToQQ') +\
                          getSampleFiles(fakeDir,'TTWJetsToLNu') +\
                          getSampleFiles(fakeDir,'TTZToLLNuNu_M-10'),
                      'weight' : '-1. * puW*baseW*effTrigW*'+METFilter_MC+'*bPogSF_CSVM*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_idisoWcut_WP_Tight80X[2]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_recoW[2]*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*std_vector_lepton_promptgenmatched[2]*GEN_weight_SM/abs(GEN_weight_SM)*fakeW3l',   
#                      'weights' : ['-1.'],         
                      #'isData': ['0'],                            
                  }

MyWeights={
           'WLLJJToLNu_M-4To60_EWK_4F'         : '1.' ,
           'WLLJJToLNu_M-60_EWK_4F'            : '1.' ,
           'WLLJJToLNu_M-4To50_QCD_0Jet'       : '1.206' ,
           'WLLJJToLNu_M-4To50_QCD_1Jet'       : '1.206' ,
           'WLLJJToLNu_M-4To50_QCD_2Jet'       : '1.206' ,
           'WLLJJToLNu_M-4To50_QCD_3Jet'       : '1.206' ,
           'WLLJJToLNu_M-50_QCD_0Jet'          : '1.206' ,
           'WLLJJToLNu_M-50_QCD_1Jet'          : '1.206' ,
           'WLLJJToLNu_M-50_QCD_2Jet'          : '1.206' ,
           'WLLJJToLNu_M-50_QCD_3Jet'          : '1.206' ,
           'tZq_ll'                            : '1.',
           }

samples['WZ_promptSubtr']  = {    'name': [ ], 
                      'weight' : '-1. * puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_idisoWcut_WP_Tight80X[2]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_recoW[2]*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*std_vector_lepton_promptgenmatched[2]*GEN_weight_SM/abs(GEN_weight_SM)*fakeW3l',
                       'weights' : [ ],                                    
                  }

for DataSet in MyWeights.keys():
    FileTarget = getSampleFiles(fakeDir,DataSet)
    for iFile in FileTarget:
      samples['WZ_promptSubtr']['name'].append(iFile)
      samples['WZ_promptSubtr']['weights'].append(MyWeights[DataSet]) 

####################
## Normal Samples ##
####################

samples['Vg']  = {    'name': getSampleFiles(normalDir,'Zg'),    
                      'weight' : 'puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_idisoWcut_WP_Tight80X[2]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_recoW[2]*GEN_weight_SM/abs(GEN_weight_SM)',                          
                  }


samples['ZZ']  = {    'name': getSampleFiles(normalDir,'ZZTo4L'),
                      'weight' : 'puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_idisoWcut_WP_Tight80X[2]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_recoW[2]*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*std_vector_lepton_promptgenmatched[2]*GEN_weight_SM/abs(GEN_weight_SM)',                                  
                  }

samples['VVV'] = {    'name': getSampleFiles(normalDir,'WZZ') +\
                          getSampleFiles(normalDir,'ZZZ') +\
                          getSampleFiles(normalDir,'WWW') +\
                          getSampleFiles(normalDir,'WWZ') +\
                          #getSampleFiles(normalDir,'TTZToQQ') +\
                          #getSampleFiles(normalDir,'TTWJetsToQQ') +\
                          getSampleFiles(normalDir,'TTWJetsToLNu') +\
                          #getSampleFiles(normalDir,'TTZjets'),    
                          getSampleFiles(normalDir,'TTZToLLNuNu_M-10'),
                      'weight' : 'puW*baseW*effTrigW*'+METFilter_MC+'*bPogSF_CSVM*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_idisoWcut_WP_Tight80X[2]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_recoW[2]*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*std_vector_lepton_promptgenmatched[2]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'isData': ['0'],                            
                  }    
        

MyWeights={
           'WLLJJToLNu_M-4To60_EWK_4F'         : '1.' ,
           'WLLJJToLNu_M-60_EWK_4F'            : '1.' ,
           'WLLJJToLNu_M-4To50_QCD_0Jet'       : '1.206' ,
           'WLLJJToLNu_M-4To50_QCD_1Jet'       : '1.206' ,
           'WLLJJToLNu_M-4To50_QCD_2Jet'       : '1.206' ,
           'WLLJJToLNu_M-4To50_QCD_3Jet'       : '1.206' ,
           'WLLJJToLNu_M-50_QCD_0Jet'          : '1.206' ,
           'WLLJJToLNu_M-50_QCD_1Jet'          : '1.206' ,
           'WLLJJToLNu_M-50_QCD_2Jet'          : '1.206' ,
           'WLLJJToLNu_M-50_QCD_3Jet'          : '1.206' ,
           'tZq_ll'                            : '1.',
           }

samples['WZ']  = {    'name': [ ], 
                      'weight' : 'puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_idisoWcut_WP_Tight80X[2]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_recoW[2]*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*std_vector_lepton_promptgenmatched[2]*GEN_weight_SM/abs(GEN_weight_SM)',
                       'weights' : [ ],                                    
                  }

for DataSet in MyWeights.keys():
    FileTarget = getSampleFiles(normalDir,DataSet)
    for iFile in FileTarget:
      samples['WZ']['name'].append(iFile)
      samples['WZ']['weights'].append(MyWeights[DataSet]) 

###########################################
###########################################
###########################################

MyWeights={
           'MuonEG'         : ' trig_EleMu' ,
           'DoubleMuon'     : '!trig_EleMu &&  trig_DbleMu' ,
           'SingleMuon'     : '!trig_EleMu && !trig_DbleMu &&  trig_SnglMu' ,
           'DoubleEG'       : '!trig_EleMu && !trig_DbleMu && !trig_SnglMu &&  trig_DbleEle' ,
           'SingleElectron' : '!trig_EleMu && !trig_DbleMu && !trig_SnglMu && !trig_DbleEle &&  trig_SnglEle' ,
          }

# data driven
samples['Fake']  = {    'name': [ ],     
                      'weight' : 'fakeW3l*'+METFilter_DATA,              #   weight/cut 
                      'isData': ['all'],
                       'weights' : [ ],                      
                  }

for Run in ['B','C','D','E','F','G','H'] : 
  directory = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Apr2017_Run2016'+Run+'_RemAOD/lep2SelVBS__hadd__EpTCorr__TrigMakerData__vh3lFakeSel__bkgWeights/'
  for DataSet in ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']:
    FileTarget = getSampleFiles(directory,'*'+DataSet+'*',True)
    for iFile in FileTarget:
      samples['Fake']['name'].append(iFile)
      samples['Fake']['weights'].append(MyWeights[DataSet]) 

samples['DATA']  = {   'name': [ ] ,     
                       'weight' : METFilter_DATA,
                       'weights' : [ ],
                       'isData': ['all'],                            
                  }

for Run in ['B','C','D','E','F','G','H'] :
  directory = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Apr2017_Run2016'+Run+'_RemAOD/lep2SelVBS__hadd__EpTCorr__TrigMakerData__l2tightVBS__vh3lSelVBS/'
  for DataSet in ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']:
    FileTarget = getSampleFiles(directory,'*'+DataSet+'*',True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(MyWeights[DataSet]) 


