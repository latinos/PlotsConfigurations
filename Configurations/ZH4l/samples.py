import os
from LatinoAnalysis.Tools.commonTools import *

#samples = {}

isNtugrid5 = False
if isNtugrid5:
    treeBaseDir = "/wk_cms2/pchen/work/HWAnalysis/data/eos/cms/store/group/phys_higgs/cmshww/amassiro/"
else:
    treeBaseDir = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/"

directory = os.path.join(treeBaseDir+"Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__l2loose__hadd__l2tightOR__formulasMC/")

################################################
############ BASIC MC WEIGHTS ##################
################################################

#XSWeight      = 'baseW*GEN_weight_SM/abs(GEN_weight_SM)'
#SFweight      = 'puW*bPogSF_CMVAL*effTrigW*veto_EMTFBug*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]'
#GenLepMatch   = 'std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]'

# The following tags are defined in LatinoAnalysis/Gardener/python/data/formulasToAdd.py
# Remark: In self-defined variables, existense check for some key branches is omitted.
XSWeight      = '(XSWeight)'
SFweight2l    = 'SFweight2l'
SFweight3l    = 'SFweight3l'
SFweight4l    = '(1+(puW*bPogSF_CMVAL*effTrigW3l*veto_EMTFBug*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_recoW[2]*std_vector_lepton_recoW[3]-1))'
GenLepMatch2l = '(1+(std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]-1))'
GenLepMatch3l = '(1+(std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]-1))'
GenLepMatch4l = '(1+(std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]*std_vector_lepton_genmatched[3]-1))'

# Choose Lepton WP

#... Electron:

eleWP='cut_WP_Tight80X'
# eleWP='cut_WP_Tight80X_SS'
# eleWP='mva_80p_Iso2015'
# eleWP='mva_80p_Iso2016'
# eleWP='mva_90p_Iso2015'
# eleWP='mva_90p_Iso2016'

#... Muon:

muWP='cut_Tight80x'

#... Build formula

#LepWPweight     = 'std_vector_electron_idisoW_'+eleWP+'[0]*std_vector_electron_idisoW_'+eleWP+'[1]*std_vector_muon_idisoW_'+muWP+'[0]*std_vector_muon_idisoW_'+muWP+'[1]'
LepWPCut2l        = '(1+(std_vector_muon_idisoW_'+muWP+'[0]*std_vector_muon_idisoW_'+muWP+'[1]*std_vector_electron_idisoW_'+eleWP+'[0]*std_vector_electron_idisoW_'+eleWP+'[1]-1))'
LepWPCut3l        = '(1+(std_vector_muon_idisoW_'+muWP+'[0]*std_vector_muon_idisoW_'+muWP+'[1]*std_vector_muon_idisoW_'+muWP+'[2]*std_vector_electron_idisoW_'+eleWP+'[0]*std_vector_electron_idisoW_'+eleWP+'[1]*std_vector_electron_idisoW_'+eleWP+'[2]-1))'
LepWPCut4l        = '(1+(std_vector_muon_idisoW_'+muWP+'[0]*std_vector_muon_idisoW_'+muWP+'[1]*std_vector_muon_idisoW_'+muWP+'[2]*std_vector_muon_idisoW_'+muWP+'[3]*std_vector_electron_idisoW_'+eleWP+'[0]*std_vector_electron_idisoW_'+eleWP+'[1]*std_vector_electron_idisoW_'+eleWP+'[2]*std_vector_electron_idisoW_'+eleWP+'[3]-1))'

LepWPweight2l        = '(1+((std_vector_muon_isTightLepton_'+muWP+'[0]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[1]>0.5) && (std_vector_muon_isTightLepton_'+muWP+'[1]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[1]>0.5)-1))'
LepWPweight3l        = '(1+((std_vector_muon_isTightLepton_'+muWP+'[0]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[0]>0.5) && (std_vector_muon_isTightLepton_'+muWP+'[1]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[1]>0.5) && (std_vector_muon_isTightLepton_'+muWP+'[2]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[2]>0.5)   -1))'
LepWPweight4l        = '(1+((std_vector_muon_isTightLepton_'+muWP+'[0]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[0]>0.5) && (std_vector_muon_isTightLepton_'+muWP+'[1]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[1]>0.5) && (std_vector_muon_isTightLepton_'+muWP+'[2]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[2]>0.5) && (std_vector_muon_isTightLepton_'+muWP+'[3]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[3]>0.5)   -1))'

SFweight2l += '*'+LepWPweight2l+'*'+LepWPCut2l
SFweight3l += '*'+LepWPweight3l+'*'+LepWPCut3l
SFweight4l += '*'+LepWPweight4l+'*'+LepWPCut4l

################################################
############   MET  FILTERS  ###################
################################################

#METFilter_Common = '(std_vector_trigger_special[0]*std_vector_trigger_special[1]*std_vector_trigger_special[2]*std_vector_trigger_special[3]*std_vector_trigger_special[5])'

#METFilter_DATA   =  METFilter_Common + '*' + '(std_vector_trigger_special[4]*!std_vector_trigger_special[6]*!std_vector_trigger_special[7]*std_vector_trigger_special[8]*std_vector_trigger_special[9])'

#METFilter_MCver  =  '(std_vector_trigger_special[8]==-2.)'
#METFilter_MCOld  =  '(std_vector_trigger_special[6]*std_vector_trigger_special[7])'
#METFilter_MCNew  =  '(std_vector_trigger_special[8]*std_vector_trigger_special[9])'
#METFilter_MC     =  METFilter_Common + '*' + '(('+METFilter_MCver+'*'+METFilter_MCOld+')||(!'+METFilter_MCver+'*'+METFilter_MCNew+'))' 

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


samples['ZZ']  = {    'name': getSampleFiles(directory,'ZZTo4L'),
                      'weight' : 'baseW'+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC,
                      #1.256/1.212 see this page https://twiki.cern.ch/twiki/bin/viewauth/CMS/SummaryTable1G25ns#Diboson
                  }

# samples['ggZZ']  = {    'name': [
                          # '../../../HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__vh3lSel__l3kin__l4kin/latino_ggZZ2e2m.root',
                          # '../../../HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__vh3lSel__l3kin__l4kin/latino_ggZZ2e2t.root',
                          # '../../../HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__vh3lSel__l3kin__l4kin/latino_ggZZ2m2t.root',
                          # '../../../HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__vh3lSel__l3kin__l4kin/latino_ggZZ4e.root',
                          # '../../../HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__vh3lSel__l3kin__l4kin/latino_ggZZ4m.root',
                          # '../../../HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__vh3lSel__l3kin__l4kin/latino_ggZZ4t.root'
                         # ],
                      # 'weight' : 'puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_idisoWcut_WP_Tight80X[2]*std_vector_lepton_idisoWcut_WP_Tight80X[3]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_recoW[2]*std_vector_lepton_recoW[3]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]*std_vector_lepton_genmatched[3]',
                      # #1.256/1.212 see this page https://twiki.cern.ch/twiki/bin/viewauth/CMS/SummaryTable1G25ns#Diboson
                      # #'weights': ['1'] ,           
                      # #'isData': ['0'],                            
                  # }

# samples['ggH_hzz']  = {    'name': ['../../../HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__vh3lSel__l3kin__l4kin/latino_GluGluHToZZTo4L_M125.root'],
                           # 'weight' : 'puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoWcut_WP_Tight80X[0]*std_vector_lepton_idisoWcut_WP_Tight80X[1]*std_vector_lepton_idisoWcut_WP_Tight80X[2]*std_vector_lepton_idisoWcut_WP_Tight80X[3]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_recoW[2]*std_vector_lepton_recoW[3]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]*std_vector_lepton_genmatched[3]*GEN_weight_SM/abs(GEN_weight_SM)',
                  # }

samples['WW']  = {    'name': getSampleFiles(directory,'WWTo2L2Nu')
                             +getSampleFiles(directory,'GluGluWWTo2L2Nu_MCFM'),
                      'weight' : 'baseW'+'*'+SFweight4l+'*'+GenLepMatch2l+'*'+METFilter_MC,
                 }




samples['WZ']  = {    'name': getSampleFiles(directory,'WZTo3LNu'),
                      'weight' : '1.11'+'*'+XSWeight+'*'+SFweight4l+'*'+GenLepMatch3l+'*'+METFilter_MC,
                  }

samples['Vg']  = {    'name':  getSampleFiles(directory,'Zg'),
                      'weight' : 'baseW'+'*'+SFweight4l+'*'+GenLepMatch2l+'*'+METFilter_MC,
                 }

samples['top'] = {   'name': getSampleFiles(directory,'TTTo2L2Nu')
                            +getSampleFiles(directory,'ST_tW_antitop')
                            +getSampleFiles(directory,'ST_tW_top'),
                     'weight' : 'baseW'+'*'+SFweight4l+'*'+GenLepMatch2l+'*'+METFilter_MC,
                     'FilesPerJob' : 3,
                 }

samples['VVZ'] = {    'name': getSampleFiles(directory,'WZZ')
                              +getSampleFiles(directory,'ZZZ')
                              +getSampleFiles(directory,'WWZ'),      
                      'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC,
                  }

samples['WWW'] = {    'name': getSampleFiles(directory,'WWW'),
                      'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch3l+'*'+METFilter_MC,
                  }


####################################
############# Signal ###############
####################################
samples['ZH_hww']  = {  'name': getSampleFiles(directory,'HZJ_HToWW_M125'),  
                        'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC,
                     }

samples['ZH_htt']  = {  'name':#getSampleFiles(directory,'HWminusJ_HToTauTau_M125'),
                               # getSampleFiles(directory,'HWplusJ_HToTauTau_M125'),
                               getSampleFiles(directory,'HZJ_HToTauTau_M125'),      
                           'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC,
                     }

samples['ggZH_hww']  = { 'name': getSampleFiles(directory,'ggZH_HToWW_M125'),  
                         'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC,
                       }

##################################
############# Fake ###############
##################################

# data driven
#samples['Fake']  = {    'name': [
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_v2_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016B_PromptReco_DoubleEG.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_v2_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016B_PromptReco_DoubleMuon.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_v2_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016B_PromptReco_SingleMuon.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_v2_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016B_PromptReco_SingleElectron.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_v2_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016B_PromptReco_MuonEG.root',
#
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016B_PromptReco_DoubleEG.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016B_PromptReco_DoubleMuon.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016B_PromptReco_SingleMuon.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016B_PromptReco_SingleElectron.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016B_PromptReco_MuonEG.root',
#
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016B_PromptReco_DoubleEG.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016B_PromptReco_SingleElectron.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016B_PromptReco_MuonEG.root',
#
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016C_PromptReco_MuonEG.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016C_PromptReco_DoubleMuon.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016C_PromptReco_SingleMuon.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016C_PromptReco_DoubleEG.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016C_PromptReco_SingleElectron.root',  
#
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016C_PromptReco_DoubleEG.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016C_PromptReco_DoubleMuon.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016C_PromptReco_SingleMuon.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016C_PromptReco_SingleElectron.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016C_PromptReco_MuonEG.root',
#
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016C_PromptReco_DoubleEG.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016C_PromptReco_DoubleMuon.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016C_PromptReco_SingleMuon.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016C_PromptReco_SingleElectron.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016C_PromptReco_MuonEG.root',
#
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016D_PromptReco_DoubleEG.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016D_PromptReco_DoubleMuon.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016D_PromptReco_SingleMuon.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016D_PromptReco_SingleElectron.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016D_PromptReco_MuonEG.root',
#
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016D_PromptReco_DoubleEG.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016D_PromptReco_DoubleMuon.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016D_PromptReco_SingleMuon.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016D_PromptReco_SingleElectron.root',
#                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vh3lFakeSel__l3kin__l4kin/latino_Run2016D_PromptReco_MuonEG.root'
#
#                                ],
#                     'weight' : 'fakeW4l',              #   weight/cut 
#                     #'weight' : 'fakeW3l',              #   weight/cut 
#                     'isData': ['all'],   
#                     'weights' : [
#
#                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
#                                   #
#                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
#                                   #
#                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
#                                   #
#                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
#                                   #
#                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
#                                   #
#                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
#                                   #
#                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
#                                   #
#                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
#                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
#        
#                            ],                          
#                 }


###########################################
###########################################
###########################################
# samples['DATA'] = { 'name': [


# '../../Feb2017_Run2016B_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleEG_Run2016B-03Feb2017_ver2-v2__part0.root',
# '../../Feb2017_Run2016B_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleEG_Run2016B-03Feb2017_ver2-v2__part1.root',
# '../../Feb2017_Run2016B_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleMuon_Run2016B-03Feb2017_ver2-v2__part0.root',
# '../../Feb2017_Run2016B_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleMuon_Run2016B-03Feb2017_ver2-v2__part1.root',
# '../../Feb2017_Run2016B_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_MET_Run2016B-03Feb2017_ver2-v2.root',
# '../../Feb2017_Run2016B_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_MuonEG_Run2016B-03Feb2017_ver2-v2.root',
# '../../Feb2017_Run2016B_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleElectron_Run2016B-03Feb2017_ver2-v2__part0.root',
# '../../Feb2017_Run2016B_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleElectron_Run2016B-03Feb2017_ver2-v2__part1.root',
# '../../Feb2017_Run2016B_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleMuon_Run2016B-03Feb2017_ver2-v2__part0.root',
# '../../Feb2017_Run2016B_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleMuon_Run2016B-03Feb2017_ver2-v2__part1.root',

# '../../Feb2017_Run2016C_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleEG_Run2016C-03Feb2017-v1.root',
# '../../Feb2017_Run2016C_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleMuon_Run2016C-03Feb2017-v1.root',
# '../../Feb2017_Run2016C_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_MET_Run2016C-03Feb2017-v1.root',
# '../../Feb2017_Run2016C_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_MuonEG_Run2016C-03Feb2017-v1.root',
# '../../Feb2017_Run2016C_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleElectron_Run2016C-03Feb2017-v1.root',
# '../../Feb2017_Run2016C_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleMuon_Run2016C-03Feb2017-v1.root',

# '../../Feb2017_Run2016D_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleEG_Run2016D-03Feb2017-v1.root',
# '../..//Feb2017_Run2016D_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleMuon_Run2016D-03Feb2017-v1__part0.root',
# '../..//Feb2017_Run2016D_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleMuon_Run2016D-03Feb2017-v1__part1.root',
# '../..//Feb2017_Run2016D_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_MET_Run2016D-03Feb2017-v1.root',
# '../..//Feb2017_Run2016D_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_MuonEG_Run2016D-03Feb2017-v1.root',
# '../..//Feb2017_Run2016D_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleElectron_Run2016D-03Feb2017-v1.root',
# '../..//Feb2017_Run2016D_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleMuon_Run2016D-03Feb2017-v1__part0.root',
# '../..//Feb2017_Run2016D_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleMuon_Run2016D-03Feb2017-v1__part1.root',

# '../..//Feb2017_Run2016E_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleEG_Run2016E-03Feb2017-v1.root',
# '../..//Feb2017_Run2016E_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleMuon_Run2016E-03Feb2017-v1__part0.root',
# '../..//Feb2017_Run2016E_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleMuon_Run2016E-03Feb2017-v1__part1.root',
# '../..//Feb2017_Run2016E_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_MET_Run2016E-03Feb2017-v1.root',
# '../..//Feb2017_Run2016E_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_MuonEG_Run2016E-03Feb2017-v1.root',
# '../..//Feb2017_Run2016E_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleElectron_Run2016E-03Feb2017-v1.root',
# '../..//Feb2017_Run2016E_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleMuon_Run2016E-03Feb2017-v1__part0.root',
# '../..//Feb2017_Run2016E_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleMuon_Run2016E-03Feb2017-v1__part1.root',

# '../..//Feb2017_Run2016F_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleEG_Run2016F-03Feb2017-v1.root',
# '../..//Feb2017_Run2016F_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleMuon_Run2016F-03Feb2017-v1.root',
# '../..//Feb2017_Run2016F_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_MET_Run2016F-03Feb2017-v1.root',
# '../..//Feb2017_Run2016F_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_MuonEG_Run2016F-03Feb2017-v1.root',
# '../..//Feb2017_Run2016F_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleElectron_Run2016F-03Feb2017-v1.root',
# '../..//Feb2017_Run2016F_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleMuon_Run2016F-03Feb2017-v1.root',

# '../..//Feb2017_Run2016G_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleEG_Run2016G-03Feb2017-v1__part0.root',
# '../..//Feb2017_Run2016G_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleEG_Run2016G-03Feb2017-v1__part1.root',
# '../..//Feb2017_Run2016G_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleMuon_Run2016G-03Feb2017-v1__part0.root',
# '../..//Feb2017_Run2016G_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleMuon_Run2016G-03Feb2017-v1__part1.root',
# '../..//Feb2017_Run2016G_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleMuon_Run2016G-03Feb2017-v1__part2.root',
# '../..//Feb2017_Run2016G_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_MET_Run2016G-03Feb2017-v1.root',
# '../..//Feb2017_Run2016G_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_MuonEG_Run2016G-03Feb2017-v1.root',
# '../..//Feb2017_Run2016G_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleElectron_Run2016G-03Feb2017-v1__part0.root',
# '../..//Feb2017_Run2016G_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleElectron_Run2016G-03Feb2017-v1__part1.root',
# '../..//Feb2017_Run2016G_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleMuon_Run2016G-03Feb2017-v1__part1.root',
# '../..//Feb2017_Run2016G_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleMuon_Run2016G-03Feb2017-v1__part2.root',

# '../..//Feb2017_Run2016H_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleEG_Run2016H-03Feb2017_ver2-v1__part0.root',
# '../..//Feb2017_Run2016H_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleEG_Run2016H-03Feb2017_ver2-v1__part1.root',
# '../..//Feb2017_Run2016H_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleEG_Run2016H-03Feb2017_ver3-v1.root',
# '../..//Feb2017_Run2016H_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleMuon_Run2016H-03Feb2017_ver2-v1__part0.root',
# '../..//Feb2017_Run2016H_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleMuon_Run2016H-03Feb2017_ver2-v1__part1.root',
# '../..//Feb2017_Run2016H_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleMuon_Run2016H-03Feb2017_ver2-v1__part2.root',
# '../..//Feb2017_Run2016H_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleMuon_Run2016H-03Feb2017_ver2-v1__part3.root',
# '../..//Feb2017_Run2016H_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_DoubleMuon_Run2016H-03Feb2017_ver3-v1.root',
# '../..//Feb2017_Run2016H_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_MET_Run2016H-03Feb2017_ver2-v1.root',
# '../..//Feb2017_Run2016H_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_MET_Run2016H-03Feb2017_ver3-v1.root',
# '../..//Feb2017_Run2016H_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_MuonEG_Run2016H-03Feb2017_ver2-v1.root',
# '../..//Feb2017_Run2016H_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_MuonEG_Run2016H-03Feb2017_ver3-v1.root',
# '../..//Feb2017_Run2016H_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleElectron_Run2016H-03Feb2017_ver2-v1__part1.root',
# '../..//Feb2017_Run2016H_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleElectron_Run2016H-03Feb2017_ver3-v1.root',
# '../..//Feb2017_Run2016H_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleMuon_Run2016H-03Feb2017_ver2-v1__part1.root',
# '../..//Feb2017_Run2016H_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleMuon_Run2016H-03Feb2017_ver2-v1__part2.root',
# '../..//Feb2017_Run2016H_RemAOD/l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__vh3lSel/latino_SingleMuon_Run2016H-03Feb2017_ver3-v1.root',


                                # ] ,     
             # #          'weight' : '1*(std_vector_lepton_isTightLepton[3] > 0.5)',
                       # 'weight' : '1', #single mu PD
 # #                      'weight' : 'std_vector_trigger[0]', #single ele PD
                       # 'isData': ['all'],

                       # 'weights' : [
                                   # #
                                   # 'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   # #
                                   # 'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   # #
                                   # 'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   # #
                                   # 'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   # #
                                  # 'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   # #
                                   # 'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   # #
                                   # 'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   # #
                                   # 'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   # '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   # #                         
                                   # ],
                       # }

if directory.startswith('/eos/cms') :
    directory = 'root://eoscms.cern.ch/'+directory
for sampleName, sample in samples.iteritems():
    sample['name']=[ os.path.join(directory,it) for it in sample['name'] ]

