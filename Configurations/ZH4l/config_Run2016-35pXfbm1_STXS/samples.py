import os
from LatinoAnalysis.Tools.commonTools import *

#samples = {}

isNtugrid5 = False
if isNtugrid5:
    treeBaseDir = "/wk_cms2/pchen/work/HWAnalysis/data/eos/cms/store/group/phys_higgs/cmshww/amassiro/"
else:
    treeBaseDir = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/"

directory           = os.path.join(treeBaseDir,"Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__vh3lSel")
directoryDATA       = os.path.join(treeBaseDir,"Full2016_Apr17/{0}/lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__dorochester__formulasDATA__vh3lSel")
# directoryFake       = os.path.join(treeBaseDir,"Full2016_Apr17/{0}/lepSel__EpTCorr__TrigMakerData__fakeSel__hadd")


################################################
############ basic mc weights ##################
################################################

#XSWeight      = 'baseW*GEN_weight_SM/abs(GEN_weight_SM)'
#SFweight      = 'puW*bPogSF_CMVAL*effTrigW*veto_EMTFBug*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]'
#GenLepMatch   = 'std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]'

# The following tags are defined in LatinoAnalysis/Gardener/python/data/formulasToAdd.py
# Remark: In self-defined variables, existense check for some key branches is omitted.
# If there is no bjet veto, remove the bPogSF_CMVAL.

XSWeight      = 'XSWeight'
SFweight2l    = 'SFweight2l'
SFweight3l    = 'SFweight3l'
# SFweight4l    = 'SFweight4l'
GenLepMatch2l = 'GenLepMatch2l'
GenLepMatch3l = 'GenLepMatch3l'
GenLepMatch4l = 'GenLepMatch4l'
# SFweight4l    = '(1+(puW*bPogSF_CMVAL*effTrigW3l*veto_EMTFBug*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_recoW[2]*std_vector_lepton_recoW[3]-1))'
# SFweight      = '(1+(puW*effTrigW2l*veto_EMTFBug*std_vector_lepton_recoW[0]-1))'
# SFweight2l    = '(1+(puW*effTrigW2l*veto_EMTFBug*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]-1))'
# SFweight3l    = '(1+(puW*effTrigW3l*veto_EMTFBug*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_recoW[2]-1))'
#Trigger efficiencies with 4 lepton case is still unavilable.
SFweight4l    = '(1+(puW*effTrigW4l*electron_etaW_4l*electron_ptW_4l*veto_EMTFBug*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_recoW[2]*std_vector_lepton_recoW[3]-1))'
# GenLepMatch2l = '(1+(std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]-1))'
# GenLepMatch3l = '(1+(std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]-1))'
# GenLepMatch4l = '(1+(std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]*std_vector_lepton_genmatched[3]-1))'

# Choose Lepton WP

#... Electron:

eleWP='mva_90p_Iso2016'
#'cut_WP_Tight80X_SS'
#'cut_WP_Tight80X_SS'
#'mva_80p_Iso2015'
#'mva_80p_Iso2016'
#'mva_90p_Iso2015'
#'mva_90p_Iso2016'

#... Muon:

muWP='cut_Tight80x'

#... Build formula

# LepWPweight2l        = '(1+(std_vector_muon_idisoW_'+muWP+'[0]*std_vector_muon_idisoW_'+muWP+'[1]*std_vector_electron_idisoW_'+eleWP+'[0]*std_vector_electron_idisoW_'+eleWP+'[1]-1))'
# LepWPweight3l        = '(1+(std_vector_muon_idisoW_'+muWP+'[0]*std_vector_muon_idisoW_'+muWP+'[1]*std_vector_muon_idisoW_'+muWP+'[2]*std_vector_electron_idisoW_'+eleWP+'[0]*std_vector_electron_idisoW_'+eleWP+'[1]*std_vector_electron_idisoW_'+eleWP+'[2]-1))'
# LepWPweight4l        = '(1+(std_vector_muon_idisoW_'+muWP+'[0]*std_vector_muon_idisoW_'+muWP+'[1]*std_vector_muon_idisoW_'+muWP+'[2]*std_vector_muon_idisoW_'+muWP+'[3]*std_vector_electron_idisoW_'+eleWP+'[0]*std_vector_electron_idisoW_'+eleWP+'[1]*std_vector_electron_idisoW_'+eleWP+'[2]*std_vector_electron_idisoW_'+eleWP+'[3]-1))'
# LepWPCut2l        = '(1+((std_vector_muon_isTightLepton_'+muWP+'[0]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[1]>0.5) && (std_vector_muon_isTightLepton_'+muWP+'[1]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[1]>0.5)-1))'
# LepWPCut3l        = '(1+((std_vector_muon_isTightLepton_'+muWP+'[0]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[0]>0.5) && (std_vector_muon_isTightLepton_'+muWP+'[1]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[1]>0.5) && (std_vector_muon_isTightLepton_'+muWP+'[2]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[2]>0.5)-1))'
# LepWPCut4l        = '(1+((std_vector_muon_isTightLepton_'+muWP+'[0]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[0]>0.5) && (std_vector_muon_isTightLepton_'+muWP+'[1]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[1]>0.5) && (std_vector_muon_isTightLepton_'+muWP+'[2]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[2]>0.5) && (std_vector_muon_isTightLepton_'+muWP+'[3]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[3]>0.5)-1))'
LepWPCut2l      = 'LepCut2l__ele_'+eleWP+'__mu_'+muWP
LepWPCut3l      = 'LepCut3l__ele_'+eleWP+'__mu_'+muWP
LepWPCut4l      = 'LepCut4l__ele_'+eleWP+'__mu_'+muWP
LepWPweight2l   = 'LepSF2l__ele_'+eleWP+'__mu_'+muWP
LepWPweight3l   = 'LepSF3l__ele_'+eleWP+'__mu_'+muWP
LepWPweight4l   = 'LepSF4l__ele_'+eleWP+'__mu_'+muWP

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

METFilter_MC   = 'METFilter _MC'
METFilter_DATA = 'METFilter _DATA'

########################### #####################
###########%%%%%%   STXS      ###################
########################### #####################

useSTXS = True
def STXSweight(val):
    dict_name2id = {
        # https://github.com/cms-sw/cmssw/blob/master/SimDataFormats/HTXS/interface/HiggsTemplateCrossSections.h
        'ggH_hww'         : 11, #ggF
        'ggH_fwd_hww'     : 10,
        'ggH_htt'         : 11,
        'ggH_fwd_htt'     : 10,
        'qqH_hww'         : 21, #VBF
        'qqH_fwd_hww'     : 20,
        'qqH_htt'         : 21,
        'qqH_fwd_htt'     : 20,
        'WH_had_hww'      : 23, #VH
        'WH_had_fwd_hww'  : 22,
        'WH_had_htt'      : 23,
        'WH_had_fwd_htt'  : 22,
        'ZH_had_hww'      : 23,
        'ZH_had_fwd_hww'  : 22,
        'ZH_had_htt'      : 23,
        'ZH_had_fwd_htt'  : 22,
        'WH_lep_hww'      : 31,
        'WH_lep_fwd_hww'  : 30,
        'WH_lep_htt'      : 31,
        'WH_lep_fwd_htt'  : 30,
        'ZH_lep_hww'      : 41,
        'ZH_lep_fwd_hww'  : 40,
        'ZH_lep_htt'      : 41,
        'ZH_lep_fwd_htt'  : 40,
        'ggZH_lep_hww'    : 51, #ggZH
        'ggZH_lep_fwd_hww': 50,
        'ggZH_lep_htt'    : 51,
        'ggZH_lep_fwd_htt': 50,
        'ttH_hww'         : 61, #ttH
        'ttH_fwd_hww'     : 60,
        'ttH_htt'         : 61,
        'ttH_fwd_htt'     : 60,
        'bbH_hww'         : 71, #bbH
        'bbH_fwd_hww'     : 70,
        'bbH_htt'         : 71,
        'bbH_fwd_htt'     : 70,
    }
    if useSTXS:
        if isinstance(val,int):
            return "(HTXS_stage0=={0})".format(val)
        elif val in dict_name2id.keys():
            return STXSweight(dict_name2id[val])
    return "(1)"



################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
            ['Apr2017_Run2016B_RemAOD','Run2016B-03Feb2017_ver2-v2'] ,
            ['Apr2017_Run2016C_RemAOD','Run2016C-03Feb2017-v1'] ,
            ['Apr2017_Run2016D_RemAOD','Run2016D-03Feb2017-v1'] ,
            ['Apr2017_Run2016E_RemAOD','Run2016E-03Feb2017-v1'] ,
            ['Apr2017_Run2016F_RemAOD','Run2016F-03Feb2017-v1'] ,
            ['Apr2017_Run2016G_RemAOD','Run2016G-03Feb2017-v1'] ,
            ['Apr2017_Run2016H_RemAOD','Run2016H-03Feb2017_ver2-v1'] ,
            ['Apr2017_Run2016H_RemAOD','Run2016H-03Feb2017_ver3-v1'] ,
          ]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']

DataTrig = {
            'MuonEG'         : ' trig_EleMu' ,
            'DoubleMuon'     : '!trig_EleMu &&  trig_DbleMu' ,
            'SingleMuon'     : '!trig_EleMu && !trig_DbleMu &&  trig_SnglMu' ,
            'DoubleEG'       : '!trig_EleMu && !trig_DbleMu && !trig_SnglMu &&  trig_DbleEle' ,
            'SingleElectron' : '!trig_EleMu && !trig_DbleMu && !trig_SnglMu && !trig_DbleEle &&  trig_SnglEle' ,
           }
samples['DATA']  = {   'name': [] ,
                       # 'weight' : "1",
                       'weight' : 'veto_EMTFBug'+'*'+METFilter_DATA+'*'+LepWPCut4l,
                       'weights' : [],
                       'isData': ['all'],
                       'FilesPerJob' : 5 ,
                   }

# samples['Fake']  = {   'name': [] ,
#                        'weight' : 'fakeW4l'+'*'+'veto_EMTFBug'+'*'+METFilter_DATA,
#                        'weights' : [],
#                        'isData': ['all'],
#                        'FilesPerJob' : 5 ,
#                    }

for Run in DataRun :
    directoryDATARun = directoryDATA.format(Run[0])
    # directoryFakeRun = directoryFake.format(Run[0])
    for DataSet in DataSets :
        FileTargetDATA = getSampleFiles(directoryDATARun,DataSet+'_'+Run[1],True)
        # FileTargetFake = getSampleFiles(directoryFakeRun,DataSet+'_'+Run[1],True)
        for iFile in FileTargetDATA:
            samples['DATA']['name'].append(iFile.lstrip('#'))
            samples['DATA']['weights'].append(DataTrig[DataSet])
        # for iFile in FileTargetFake:
        #     samples['Fake']['name'].append(iFile.lstrip('#'))
        #     samples['Fake']['weights'].append(DataTrig[DataSet])

###########################################
#############  BACKGROUNDS  ###############
###########################################

samples['ZZ']  = {    'name': getSampleFiles(directory,'ZZTo4L')
                              +getSampleFiles(directory,'ggZZ2e2t')
                              +getSampleFiles(directory,'ggZZ2m2t')
                              +getSampleFiles(directory,'ggZZ2e2m')
                              +getSampleFiles(directory,'ggZZ4t')
                              +getSampleFiles(directory,'ggZZ4e')
                              +getSampleFiles(directory,'ggZZ4m'),
                      'weight' : 'baseW'+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC,
                      # 'FilesPerJob' : 1,
                      #1.256/1.212 see this page https://twiki.cern.ch/twiki/bin/viewauth/CMS/SummaryTable1G25ns#Diboson
                  }
addSampleWeight(samples,'ZZ','ZZTo4L',"1.1654") ## The NNLO/NLO k-factor, cited from https://arxiv.org/abs/1405.2219v1
addSampleWeight(samples,'ZZ','ggZZ2e2t',"2.27") ## The NLO/LO k-factor, cited from https://arxiv.org/abs/1509.06734v1
addSampleWeight(samples,'ZZ','ggZZ2m2t',"2.27")
addSampleWeight(samples,'ZZ','ggZZ2e2m',"2.27")
addSampleWeight(samples,'ZZ','ggZZ4e',"2.27")
addSampleWeight(samples,'ZZ','ggZZ4m',"2.27")
addSampleWeight(samples,'ZZ','ggZZ4t',"2.27")


samples['ggH_hzz']  = {    'name': getSampleFiles(directory,'GluGluHToZZTo4L_M125'),
                      'weight' : 'baseW'+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC+'*'+STXSweight(11),
                      #1.256/1.212 see this page https://twiki.cern.ch/twiki/bin/viewauth/CMS/SummaryTable1G25ns#Diboson
                  }

samples['WW']  = {    'name': getSampleFiles(directory,'WWTo2L2Nu')
                             +getSampleFiles(directory,'GluGluWWTo2L2Nu_MCFM'),
                      'weight' : 'baseW'+'*'+SFweight4l+'*'+GenLepMatch2l+'*'+METFilter_MC,
                      # 'weight' : 'baseW'+'*'+SFweight4l+'*'+GenLepMatch2l+'*'+METFilter_MC+'*'+'nllW',
                 }

samples['DY']  = {    'name': getSampleFiles(directory,'DYJetsToLL_M-10to50')
                             +getSampleFiles(directory,'DYJetsToLL_M-50'),
                      'weight' : 'baseW'+'*'+SFweight4l+'*'+GenLepMatch2l+'*'+METFilter_MC,
                     # 'FilesPerJob' : 1,
                 }

samples['ttW']  = {    'name': getSampleFiles(directory,'TTWJetsToLNu_ext2'),
                      'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch3l+'*'+METFilter_MC,
                 }

samples['ttZ']  = {    'name': getSampleFiles(directory,'TTZjets'),
                      'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC,
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
                     # 'FilesPerJob' : 1,
                 }

samples['VVZ'] = {    'name': getSampleFiles(directory,'WZZ')
                              +getSampleFiles(directory,'ZZZ')
                              +getSampleFiles(directory,'WWZ'),
                      'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC,
                  }

samples['WWW'] = {    'name': getSampleFiles(directory,'WWW'),
                      'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch3l+'*'+METFilter_MC,
                  }
addSampleWeight(samples,'WWW','WWW',"0.2086/0.1833") # Fixing incorrect xsec from 0.1833 to 0.2087


####################################
############# Signal ###############
####################################
samples['ZH_lep_hww']  = {  'name': getSampleFiles(directory,'HZJ_HToWW_M125'),
                        'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC+'*'+STXSweight('ZH_lep_hww'),
                     }
samples['ZH_lep_fwd_hww']  = {  'name': getSampleFiles(directory,'HZJ_HToWW_M125'),
                        'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC+'*'+STXSweight('ZH_lep_fwd_hww'),
                     }
samples['ZH_had_hww']  = {  'name': getSampleFiles(directory,'HZJ_HToWW_M125'),
                        'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC+'*'+STXSweight('ZH_had_hww'),
                     }
samples['ZH_had_fwd_hww']  = {  'name': getSampleFiles(directory,'HZJ_HToWW_M125'),
                        'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC+'*'+STXSweight('ZH_had_fwd_hww'),
                     }

samples['ZH_lep_htt']  = {  'name': getSampleFiles(directory,'HZJ_HToTauTau_M125'),
                           'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC+'*'+STXSweight('ZH_lep_htt'),
                     }
samples['ZH_lep_fwd_htt']  = {  'name': getSampleFiles(directory,'HZJ_HToTauTau_M125'),
                           'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC+'*'+STXSweight('ZH_lep_fwd_htt'),
                     }
samples['ZH_had_htt']  = {  'name': getSampleFiles(directory,'HZJ_HToTauTau_M125'),
                           'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC+'*'+STXSweight('ZH_had_htt'),
                     }
samples['ZH_had_fwd_htt']  = {  'name': getSampleFiles(directory,'HZJ_HToTauTau_M125'),
                           'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC+'*'+STXSweight('ZH_had_fwd_htt'),
                     }

samples['ggZH_lep_hww']  = { 'name': getSampleFiles(directory,'GluGluZH_HToWWTo2L2Nu_M125'),
                         'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC+'*'+STXSweight('ggZH_lep_hww'),
                       }
samples['ggZH_lep_fwd_hww']  = { 'name': getSampleFiles(directory,'GluGluZH_HToWWTo2L2Nu_M125'),
                         'weight' : XSWeight+'*'+SFweight4l+'*'+GenLepMatch4l+'*'+METFilter_MC+'*'+STXSweight('ggZH_lep_fwd_hww'),
                       }

for sampleName, sample in samples.iteritems():
    sample['name']=[ os.path.join(directory,it) if sampleName not in ['DATA', 'Fake'] else it for it in sample['name'] ]
    if treeBaseDir.startswith('/eos/cms'):
        sample['name']=[ "root://eoscms.cern.ch/"+it for it in sample['name'] ]

##################################
############ Tools ###############
##################################

# Keep specific samples
# samplesToKeep = ['DATA','Fake']
# samples = {sampleName: sample for sampleName, sample in samples.iteritems() if sampleName not in samplesToKeep }

