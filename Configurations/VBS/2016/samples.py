# samples
import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *


#samples = {}
directory = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Apr2017_summer16/lep2SelVBS__MCWeights__hadd__bSFL2pTEffCut__genMatchVariables' 
chargeFlipDir = directory + '__l2tightVBS__chMisId__tightVbsSel/'
fakeDir = directory + '__tightVbsSel__bkgWeights/'
normalDir = directory + '__l2tightVBS__tightVbsSel/'

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

#################
## Charge flip ##
#################
MyWeights={
           'DYJetsToLL_M-10to50'   : '(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))' ,
           'DYJetsToLL_M-50'       : '(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))' ,
           'TTTo2L2Nu'             : '1' ,
           'ST_tW_top_noHad'       : '1' ,
           'ST_tW_antitop_noHad'   : '1' ,
           'GluGluWWTo2L2Nu_MCFM'  : '1' ,
           'WWTo2L2Nu'             : '1' ,
           }

# only for ee and em with charge flip
samples['chargeMisId']  = {    'name': [ ], 
                      'weight' : 'puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) != -11*11 || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) != -11*13 )*chargeFlipW',
                       'weights' : [ ],                                    
                  }

for DataSet in MyWeights.keys():
    FileTarget = getSampleFiles(chargeFlipDir,DataSet)
    for iFile in FileTarget:
      samples['chargeMisId']['name'].append(iFile)
      samples['chargeMisId']['weights'].append(MyWeights[DataSet]) 



#samples['DY']  = {    'name'   :   getSampleFiles(chargeFlipDir,'DYJetsToLL_M-10to50')
                                 #+ getSampleFiles(chargeFlipDir,'DYJetsToLL_M-50')     ,
                      #'weight' : 'puW*baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) != -11*11 || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) != -11*13 )*chargeFlipW',  
                 #}


#samples['lep_TT']  = {    'name': getSampleFiles(chargeFlipDir,'TTTo2L2Nu'),
                      #'weight' : 'puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) != -11*11 || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) != -11*13 )*chargeFlipW',  
                    #}

#samples['singleTop']  = {    'name': getSampleFiles(chargeFlipDir,'ST_tW_top_noHad'),
                      #'weight' : 'puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) != -11*11 || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) != -11*13 )*chargeFlipW',  
                    #}

#samples['singleAntiTop']  = {    'name': getSampleFiles(chargeFlipDir,'ST_tW_antitop_noHad'),
                      #'weight' : 'puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) != -11*11 || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) != -11*13 )*chargeFlipW',  
                    #}

#samples['ggWWTo2L2Nu']  = {    'name': getSampleFiles(chargeFlipDir,'GluGluWWTo2L2Nu_MCFM'),
                      #'weight' : 'puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) != -11*11 || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) != -11*13 )*chargeFlipW',  
                    #}

#samples['WWTo2L2Nu']  = {    'name': getSampleFiles(chargeFlipDir,'WWTo2L2Nu'),
                      #'weight' : 'puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) != -11*11 || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) != -11*13 )*chargeFlipW',  
                    #}

########################
## Prompt subtraction ##
########################

samples['DY_promptSubtr']  = {    'name'   :   getSampleFiles(fakeDir,'DYJetsToLL_M-10to50')
                                 + getSampleFiles(fakeDir,'DYJetsToLL_M-50')     ,
                      'weight' : '-1. * puW*baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)*fakeW2l', 
#                      'weights' : ['-1.'],
                 }

samples['lep_TT_promptSubtr']  = {    'name': getSampleFiles(fakeDir,'TTTo2L2Nu'),
                      'weight' : '-1. * puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)*fakeW2l',  
#                      'weights' : ['-1.'], 
                    }

samples['singleTop_promptSubtr']  = {    'name': getSampleFiles(fakeDir,'ST_tW_top_noHad'),
                      'weight' : '-1. * puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)*fakeW2l',  
#                      'weights' : ['-1.'],  
                    }

samples['singleAntiTop_promptSubtr']  = {    'name': getSampleFiles(fakeDir,'ST_tW_antitop_noHad'),
                      'weight' : '-1. * puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)*fakeW2l',  
#                      'weights' : ['-1.'],  
                    }

samples['ggWWTo2L2Nu_promptSubtr']  = {    'name': getSampleFiles(fakeDir,'GluGluWWTo2L2Nu_MCFM'),
                      'weight' : '-1. * puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)*fakeW2l',  
#                      'weights' : ['-1.'],  
                    }

samples['WWTo2L2Nu_promptSubtr']  = {    'name': getSampleFiles(fakeDir,'WWTo2L2Nu'),
                      'weight' : '-1. * puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)*fakeW2l',  
#                      'weights' : ['-1.'],  
                    }
samples['Vg_promptSubtr']  = {    'name': getSampleFiles(fakeDir,'WGJJ') + getSampleFiles(fakeDir,'Zg'),    
                      'weight' : '-1. * puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)*fakeW2l',  
#                      'weights' : ['-1.'],                          
                  }


samples['ZZ_promptSubtr']  = {    'name': getSampleFiles(fakeDir,'ZZTo4L'),
                      'weight' : '-1. * puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)*fakeW2l',    
#                      'weights' : ['-1.'],                                
                  }

samples['WpWpJJ_promptSubtr']  = {  'name': getSampleFiles(fakeDir,'WpWpJJ_EWK'),
                        'weight' : '-1. * puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)*fakeW2l',  
                        'weights' : ['1.067466']
                  }

samples['WpWpJJ_QCD_promptSubtr']  = {  'name': getSampleFiles(fakeDir,'WpWpJJ_QCD'),
                        'weight' : '-1. * puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)*fakeW2l',   
                        'weights' : ['1.057']
                  }

samples['VVV_promptSubtr'] = {    'name': getSampleFiles(fakeDir,'WZZ') +\
                          getSampleFiles(fakeDir,'ZZZ') +\
                          getSampleFiles(fakeDir,'WWW') +\
                          getSampleFiles(fakeDir,'WWZ') +\
                          getSampleFiles(fakeDir,'TTZToQQ') +\
                          getSampleFiles(fakeDir,'TTWJetsToQQ') +\
                          getSampleFiles(fakeDir,'TTWJetsToLNu') +\
                          getSampleFiles(fakeDir,'TTZToLLNuNu_M-10'),
                      'weight' : '-1. * puW*baseW*effTrigW*'+METFilter_MC+'*bPogSF_CSVM*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)*fakeW2l',   
#                      'weights' : ['-1.'],         
                      #'isData': ['0'],                            
                  }

samples['DPS_promptSubtr'] = {    'name': getSampleFiles(fakeDir,'WWTo2L2Nu_DoubleScattering'), 
                      'weight' : '-1. * puW*baseW*effTrigW*'+METFilter_MC+'*bPogSF_CSVM*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)*fakeW2l',    
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
                      'weight' : '-1. * puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)*fakeW2l',
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

samples['Vg']  = {    'name': getSampleFiles(normalDir,'WGJJ') + getSampleFiles(normalDir,'Zg'),    
                      'weight' : 'puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)',                          
                  }


samples['ZZ']  = {    'name': getSampleFiles(normalDir,'ZZTo4L'),
                      'weight' : 'puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)',                                  
                  }

samples['WpWpJJ']  = {  'name': getSampleFiles(normalDir,'WpWpJJ_EWK'),
                        'weight' : 'puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)',  
                        'weights' : ['1.067466']
                  }

samples['WpWpJJ_QCD']  = {  'name': getSampleFiles(normalDir,'WpWpJJ_QCD'),
                        'weight' : 'puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)',   
                        'weights' : ['1.057']
                  }

samples['VVV'] = {    'name': getSampleFiles(normalDir,'WZZ') +\
                          getSampleFiles(normalDir,'ZZZ') +\
                          getSampleFiles(normalDir,'WWW') +\
                          getSampleFiles(normalDir,'WWZ') +\
                          #getSampleFiles(normalDir,'TTZToQQ') +\
                          #getSampleFiles(normalDir,'TTWJetsToQQ') +\
                          getSampleFiles(normalDir,'TTWJetsToLNu') +\
                          getSampleFiles(normalDir,'TTZToLLNuNu_M-10'),
                      'weight' : 'puW*baseW*effTrigW*'+METFilter_MC+'*bPogSF_CSVM*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)',          
                      #'isData': ['0'],                            
                  }

samples['DPS'] = {    'name': getSampleFiles(normalDir,'WWTo2L2Nu_DoubleScattering'), 
                      'weight' : 'puW*baseW*effTrigW*'+METFilter_MC+'*bPogSF_CSVM*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)',          
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
                      'weight' : 'puW*baseW*bPogSF_CSVM*effTrigW*'+METFilter_MC+'*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_promptgenmatched[0]*std_vector_lepton_promptgenmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)',
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
                      'weight' : 'fakeW2l*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)*'+METFilter_DATA,              #   weight/cut 
                      'isData': ['all'],
                       'weights' : [ ],                      
                  }

for Run in ['B','C','D','E','F','G','H'] : 
  directory = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Apr2017_Run2016'+Run+'_RemAOD/lep2SelVBS__hadd__EpTCorr__TrigMakerData__tightVbsSel__bkgWeights/'
  for DataSet in ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']:
    FileTarget = getSampleFiles(directory,'*'+DataSet+'*',True)
    for iFile in FileTarget:
      samples['Fake']['name'].append(iFile)
      samples['Fake']['weights'].append(MyWeights[DataSet]) 

samples['DATA']  = {   'name': [ ] ,     
                       'weight' : '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)*'+METFilter_DATA,
                       'weights' : [ ],
                       'isData': ['all'],                            
                  }

for Run in ['B','C','D','E','F','G','H'] :
  directory = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Apr2017_Run2016'+Run+'_RemAOD/lep2SelVBS__hadd__EpTCorr__TrigMakerData__l2tightVBS__tightVbsSel/'
  for DataSet in ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']:
    FileTarget = getSampleFiles(directory,'*'+DataSet+'*',True)
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(MyWeights[DataSet]) 


