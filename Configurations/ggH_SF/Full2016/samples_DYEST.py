import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

#samples = {}


###### Tree Directory according to site ######

SITE=os.uname()[1]
if    'iihe' in SITE :
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/'
elif  'cern' in SITE :
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/'

directory = treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight/'

###### DY #######

samples['DY']  = {    'name'   :   getSampleFiles(directory,'DYJetsToLL_M-10to50')
                                 + getSampleFiles(directory,'DYJetsToLL_M-50')     ,
                      'weight' : 'puW*baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*effTrigW*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',  
                 }

####### Top #######
#
#samples['top'] = {   'name'     :  getSampleFiles(directory,'TTTo2L2Nu') 
#                           #'latino_ST_tW_antitop.root',
#                           #'latino_ST_tW_top.root'
#                             ,
#                       'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',    
#                      }
#
####### WW ########
#             
#samples['WW']  = {    'name'   : getSampleFiles(directory,'WWTo2L2Nu'),
#                      'weight' : 'nllW*baseW*puW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
#                  }
#
#
#
#samples['ggWW']  = {  'name'   : getSampleFiles(directory,'GluGluWWTo2L2Nu_MCFM'),      
#                      'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',    
#                      'isData': ['0'],                            
#                   }
#
### during tree production: 1.4 k-factor has been applied to both samples
### ggWW sample: k = 1.4 +/- 15%
### ggWW interference: k = 1.87 +/- 25%
#
#
#
### data driven
##samples['Fake']  = {    'name': [
##                      #
##                                '../../21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016B_PromptReco_MuonEG.root',
##                                '../../21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016B_PromptReco_DoubleMuon.root',
##                                '../../21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016B_PromptReco_SingleMuon.root',
##                                '../../21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016B_PromptReco_DoubleEG.root',
##                                '../../21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016B_PromptReco_SingleElectron.root',
##                                #../../../../../../../../../../           
##                                '../../05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016B_PromptReco_MuonEG.root',
##                                '../../05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016B_PromptReco_DoubleMuon.root',
##                                '../../05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016B_PromptReco_SingleMuon.root',
##                                '../../05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016B_PromptReco_DoubleEG.root',
##                                '../../05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016B_PromptReco_SingleElectron.root',
##                                #../../../../../../../../../../         
##                                '../../08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016B_PromptReco_MuonEG.root',
##                                '../../08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016B_PromptReco_DoubleMuon.root',
##                                '../../08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016B_PromptReco_SingleMuon.root',
##                                '../../08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016B_PromptReco_DoubleEG.root',
##                                '../../08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016B_PromptReco_SingleElectron.root',
##                                #../../../../../../../../../../         
##                                '../../08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016C_PromptReco_MuonEG.root',
##                                '../../08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016C_PromptReco_DoubleMuon.root',
##                                '../../08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016C_PromptReco_SingleMuon.root',
##                                '../../08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016C_PromptReco_DoubleEG.root',
##                                '../../08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016C_PromptReco_SingleElectron.root',
##                                #../../../../../../../../../../
##                                #../../../../../../../../../../            
##                                '../../11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016C_PromptReco_MuonEG.root',
##                                '../../11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016C_PromptReco_DoubleMuon.root',
##                                '../../11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016C_PromptReco_SingleMuon.root',
##                                '../../11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016C_PromptReco_DoubleEG.root',
##                                '../../11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016C_PromptReco_SingleElectron.root',
##                                #../../../../../../../../../../            
##                                '../../15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016C_PromptReco_MuonEG.root',
##                                '../../15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016C_PromptReco_DoubleMuon.root',
##                                '../../15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016C_PromptReco_SingleMuon.root',
##                                '../../15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016C_PromptReco_DoubleEG.root',
##                                '../../15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016C_PromptReco_SingleElectron.root',
##                                #../../../../../../../../../../            
##                                '../../15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016D_PromptReco_MuonEG.root',
##                                '../../15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016D_PromptReco_DoubleMuon.root',
##                                '../../15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016D_PromptReco_SingleMuon.root',
##                                '../../15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016D_PromptReco_DoubleEG.root',
##                                '../../15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016D_PromptReco_SingleElectron.root',
##                                #../../../../../../../../../../
##                                '../../26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016D_PromptReco_MuonEG.root',
##                                '../../26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016D_PromptReco_DoubleMuon.root',
##                                '../../26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016D_PromptReco_SingleMuon.root',
##                                '../../26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016D_PromptReco_DoubleEG.root',
##                                '../../26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__dymvaGGHv2/latino_Run2016D_PromptReco_SingleElectron.root',
##                                #
##                       #               
##                       ],
##                      #'weight' : 'trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
##                      #'weight' : '2.6/0.8*trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
##                      #'weight' : '4.0/0.8*trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
##                      'weight' : '(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
##                      'isData': ['all'],
##                       'weights' : [
##                                   #
##                                   #
##                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
##                                   #
##                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
##                                   #
##                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
##                                   #
##                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
##                                   #
##                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
##                                   #
##                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
##                                   #
##                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
##                                   #
##                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
##                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
##                                   #
##                                   #
##                                   ],
##
##}
#
#
#
#
#samples['Vg']  = {    'name': ['latino_Wg_MADGRAPHMLM.root'],
#                      'weight' : 'puW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)\
#                                  * !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
#                                 #*(!(Gen_ZGstar_MomStatus==44 && Gen_ZGstar_MomId==22))',
#                      #'weights': ['0.0684952181745'] ,
#                      #'isData': ['0'],                            
#                  }
#
#
#
#samples['VgS']  = {    'name': [
#                             'latino_WgStarLNuEE.root',
#                             'latino_WgStarLNuMuMu.root'
#                             ],
#                      'weight' : '1.4*puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
#                     #'weights': ['1','1'] ,
#                  }
#
## 
## Wg* scale factor is
##
## X.X  +/- X.X     in mumumu
## 1.4  +/- 0.4     in emumu
##
#
#
#
#samples['VZ']  = {    'name': [
#                          #'latino_WZ.root', 
#                          'latino_WZTo3LNu.root',
#                          #'latino_ZZ.root', # ---> replaced by exclusive samples
#                          'latino_ZZTo2L2Nu__part0.root', 
#                          'latino_ZZTo2L2Nu__part1.root', 
#                          #'latino_ZZTo2L2Q.root'
#                          'latino_WZTo2L2Q__part0.root',
#                          'latino_WZTo2L2Q__part1.root',
#                          'latino_WZTo2L2Q__part2.root',
#                          'latino_WZTo2L2Q__part3.root',
#                          #
#                          'latino_ZZTo2L2Q__part0.root',
#                          'latino_ZZTo2L2Q__part1.root',
#                          'latino_ZZTo2L2Q__part2.root',
#                          #
#                          #'latino_ZZTo4L.root'
#                         ],
#                      'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
#                      #'weights': [
#                          #'0.002214825',
#                          ##
#                          #'6.28902765388e-05',
#                          #'6.28902765388e-05',
#                          ##
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          ##
#                          #'0.000329080664109',
#                          #'0.000329080664109',
#                          #'0.000329080664109',
#                          ##
#                        #'',
#                        #] ,           
#                      #'isData': ['0'],                            
#                  }
#
#
#
#samples['VVV'] = {    'name': [
#                          'latino_WZZ.root',
#                          'latino_ZZZ.root',
#                          'latino_WWW.root',
#                          'latino_WWZ.root',
#                          ],
#                      'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
#                      #'isData': ['0'],                            
#}
#
#
#
## Htautau
#samples['H_htt']  = {      'name': ['latino_GluGluHToTauTau_M125.root',
#                                    'latino_VBFHToTauTau_M125.root'
#                                    #'latino_HWminusJ_HToTauTau_M125.root',
#                                    #'latino_HWplusJ_HToTauTau_M125.root',
#                                    #'latino_HZJ_HToTauTau_M125.root'
#                                    ],
#                           'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
#                           #'weights': ['1', '1']
#                                       #, 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)' ]            
#}
#
#
#
## HWW 
#samples['ggH_hww']  = {    'name': [
#                               'latino_GluGluHToWWTo2L2NuPowheg_M125.root'
#                               ],
#                           'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
#                  }
#
#samples['qqH_hww']  = {    'name': [
#                               #'latino_VBFHToWWTo2L2Nu_M125.root'
#                               'latino_VBFHToWWTo2L2Nu_alternative_M125.root'
#                               ],
#                           'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
#                  }
#
#samples['ggZH_hww']  = {    'name': [
#                               'latino_ggZH_HToWW_M125.root',
#                               ],
#                           'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
#                  }
#
#
#samples['WH_hww']  = {    'name': [
#                             'latino_HWminusJ_HToWW_M125.root',
#                             'latino_HWplusJ_HToWW_M125.root'
#                             ],
#                           'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
#                  }
#
#samples['ZH_hww']  = {    'name': ['latino_HZJ_HToWW_M125.root'],
#                           'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
#                  }
#
#
#
############################################
################### DATA ###################
############################################
#
#samples['DATA']  = {   'name': [ ] ,     
#                       'weight' : '1',
#                       'weights' : [ ],
#                       'isData': ['all'],                            
#                  }
#
#MyWeights={
#           'MuonEG'         : ' trig_EleMu' ,
#           'DoubleMuon'     : '!trig_EleMu &&  trig_DbleMu' ,
#           'SingleMuon'     : '!trig_EleMu && !trig_DbleMu &&  trig_SnglMu' ,
#           'DoubleEG'       : '!trig_EleMu && !trig_DbleMu && !trig_SnglMu &&  trig_DbleEle' ,
#           'SingleElectron' : '!trig_EleMu && !trig_DbleMu && !trig_SnglMu && !trig_DbleEle &&  trig_SnglEle' ,
#          }
#
#for Run in ['B','C','D','E','F','G','H'] :
#  directory = treeBaseDir+'Feb2017_Run2016'+Run+'_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight/'
#  for DataSet in ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']:
#    FileTarget = getSampleFiles(directory,'*'+DataSet+'*',True)
#    for iFile in FileTarget:
#      samples['DATA']['name'].append(iFile)
#      samples['DATA']['weights'].append(MyWeights[DataSet]) 
#
#print samples['WW'] 
