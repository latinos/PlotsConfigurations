import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

for tag in ['em', 'ee', 'mm']:
  if tag in opt.tag: EMorEEorMM = tag

samples={}

skim=''
##############################################
###### Tree Directory according to site ######
##############################################

SITE=os.uname()[1]
xrootdPath=''
if    'iihe' in SITE :
  xrootdPath  = 'dcap://maite.iihe.ac.be/'
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/'
elif  'cern' in SITE :
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'
  treeBaseDirHM = '/eos/user/d/dmroy/HWWNano/'

directory = treeBaseDir+'Summer16_102X_nAODv5_Full2016v6/MCl1loose2016v6__MCCorr2016v6__l2loose__l2tightOR2016v6/'
directoryHM = treeBaseDir+'Summer16_102X_nAODv6_Full2016v6/MCl1loose2016v6__MCCorr2016v6__l2loose__l2tightOR2016v6__BWReweight/'

################################################
############### Lepton WP ######################
################################################

eleWP='mva_90p_Iso2016'
muWP='cut_Tight80x'
newmuWP='cut_Tight80x'

NewttHWPForMu = False
if NewttHWPForMu:
  newmuWP='cut_Tight80x_tthmva_80'

LepWPCut        = 'LepCut2l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF2l__ele_'+eleWP+'__mu_'+muWP


################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight2l*'+LepWPweight+'*'+LepWPCut+'*PrefireWeight'
GenLepMatch   = 'PromptGenLepMatch2l'


################################################
############## FAKE WEIGHTS ####################
################################################

#if Nlep == '2' :
fakeW = 'fakeW2l_ele_'+eleWP+'_mu_'+newmuWP
#else:
#  fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l'


################################################
############### B-Tag  WP ######################
################################################

# Definitions in aliases.py
SFweight += '*btagSF'

# Also updated jet PUid SF
SFweight += '*PUJetIdSF'

if NewttHWPForMu:
  SFweight += '*ttHMVA_SF_2l'

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

DataSets = ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']

DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
            'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
            'DoubleEG'       : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && Trigger_dblEl' ,
            'SingleElectron' : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && !Trigger_dblEl && Trigger_sngEl' ,
           }


############################################
############ MORE MC STAT ##################
############################################

def CombineBaseW(samples, proc, samplelist):
  newbaseW = getBaseWnAOD(directory, 'Summer16_102X_nAODv6_Full2016v6', samplelist)
  for s in samplelist:
    addSampleWeight(samples, proc, s, newbaseW+'/baseW')


###########################################
#############  BACKGROUNDS  ###############
###########################################

############ DY ############

ptllDYW_NLO = '(0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140)'
ptllDYW_LO = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'

useEmbeddedDY = True
useDYtt = True
useDYHT = False

if EMorEEorMM in ['ee', 'mm']:
  useEmbeddedDY = False
  useDYtt = False

embed_tautauveto = '' #Setup
if useEmbeddedDY:
  embed_tautauveto = '*embed_tautauveto'


if useEmbeddedDY:
  # Actual embedded data
  samples['DYemb']  = {   'name': [ ] ,
                         'weight' : METFilter_DATA+'*'+LepWPCut+'*embed_total_mva16*genWeight*(genWeight<=1)',
                         'weights' : [ ] ,
                         'isData': ['all'],
                         'FilesPerJob' : 80,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                      }

  for Run in DataRun :
          directoryEmb = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Embedding2016_102X_nAODv5_Full2016v6/DATAl1loose2016v6__l2loose__l2tightOR2016v6__Embedding/'
          FileTarget = getSampleFiles(directoryEmb,'DYToTT_MuEle_Embedded_Run2016'+Run[0],True,'nanoLatino_')
          for iFile in FileTarget:
                  samples['DYemb']['name'].append(iFile)
                  samples['DYemb']['weights'].append('Trigger_ElMu')

  # Vetoed MC: Needed for uncertainty
  # + getSampleFiles(directory,'WpWmJJ_QCD_noTop',False,'nanoLatino_')  ---> Too low statistics in 2016!
  samples['DYveto']  = {   'name': getSampleFiles(directory,'TTTo2L2Nu',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ST_tW_antitop',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ST_tW_top',False,'nanoLatino_')

                                 + getSampleFiles(directory,'WWTo2L2Nu',False,'nanoLatino_')
                                 + getSampleFiles(directory,'WpWmJJ_EWK_noTop',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluWWTo2L2Nu_MCFM',False,'nanoLatino_')
                                 + getSampleFiles(directory,'WWTo2L2Nu',False,'nanoLatino_')

                                 + getSampleFiles(directory,'Zg',False,'nanoLatino_')
                                 + getSampleFiles(directory,'WZTo3LNu_mllmin01',False,'nanoLatino_')
                                 + getSampleFiles(directory,'WZTo3LNu_mllmin01_ext1',False,'nanoLatino_')

                                 + getSampleFiles(directory,'ZZTo2L2Nu',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ZZTo2L2Nu_ext1',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ZZTo2L2Q',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ZZTo4L',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ZZTo4L_ext1',False,'nanoLatino_')
                                 + getSampleFiles(directory,'WZTo2L2Q',False,'nanoLatino_'),

                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+'(1-embed_tautauveto)',
                         'FilesPerJob' : 1, # There's some error about not finding sample-specific variables like "nllW" when mixing different samples into a single job; so split them all up instead
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                      }
  CombineBaseW(samples, 'DYveto', ['ZZTo2L2Nu', 'ZZTo2L2Nu_ext1'])
  CombineBaseW(samples, 'DYveto', ['ZZTo4L', 'ZZTo4L_ext1'])
  CombineBaseW(samples, 'DYveto', ['WZTo3LNu_mllmin01', 'WZTo3LNu_mllmin01_ext1'])

  veto_dict = {'TTTo2L2Nu'     : '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) * (TMath::Sqrt(TMath::Exp(1.61468e-03 + 3.46659e-06*topGenPt - 8.90557e-08*topGenPt*topGenPt) * TMath::Exp(1.61468e-03 + 3.46659e-06*antitopGenPt - 8.90557e-08*antitopGenPt*antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)' ,
               'ST_tW_antitop' : '1' ,
               'ST_tW_top'     : '1' ,

               'WWTo2L2Nu'        : 'nllW*(mjjGen_OTF<100)' ,
               'WpWmJJ_EWK_noTop' : '(Sum$(abs(GenPart_pdgId)==6)==0 && Sum$(GenPart_pdgId==25)==0)*(lhe_mW1[0] > 60. && lhe_mW1[0] < 100. && lhe_mW2[0] > 60. && lhe_mW2[0] < 100.)',
               'GluGluWWTo2L2Nu_MCFM' : '1.53/1.4' ,
               'WWTo2L2Nu' : 'nllW*(mjjGen_OTF>=100)' ,

               'Zg'                     : '(Gen_ZGstar_mass <= 0)+(Gen_ZGstar_mass > 0)*((Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4) * 0.94 + (Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4) * 1.14)' ,
               'WZTo3LNu_mllmin01'      : '(Gen_ZGstar_mass > 0.1)*((Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4) * 0.94 + (Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4) * 1.14)' ,
               'WZTo3LNu_mllmin01_ext1' : '(Gen_ZGstar_mass > 0.1)*((Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4) * 0.94 + (Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4) * 1.14)' ,

               'ZZTo2L2Nu'      : '1.11' ,
               'ZZTo2L2Nu_ext1' : '1.11' ,
               'ZZTo2L2Q'       : '1.11' ,
               'ZZTo4L'         : '1.11' ,
               'ZZTo4L_ext1'    : '1.11' ,
               'WZTo2L2Q'       : '1.11'
              }

  for v_samp,v_weight in veto_dict.items():
          if v_weight != '1': addSampleWeight(samples,'DYveto',v_samp,v_weight)

if useDYtt :
    samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToTT_MuEle_M-50',False,'nanoLatino_')
                                    + getSampleFiles(directory,'DYJetsToTT_MuEle_M-50_ext1',False,'nanoLatino_')
                                    + getSampleFiles(directory,'DYJetsToLL_M-10to50_ext1',False,'nanoLatino_'),
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0))' ,# To remove some overlap between DY/Vg
                         'FilesPerJob' : 3,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                    }
    CombineBaseW(samples, 'DY', ['DYJetsToTT_MuEle_M-50', 'DYJetsToTT_MuEle_M-50_ext1'])
    addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50','DY_NLO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50_ext1','DY_NLO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50_ext1','DY_NLO_pTllrw * DY_METrw')
    
else:
  samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToLL_M-50',False,'nanoLatino_') #Don't use LO_ext1! DYMVA Training!
                                  + getSampleFiles(directory,'DYJetsToLL_M-10to50_ext1',False,'nanoLatino_'), #Don't use NLO(_ext0)! DYMVA Training!
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0))' ,
                       'FilesPerJob' : 3,
                       'suppressNegative' :['all'],
                       'suppressNegativeNuisances' :['all'],
                   }
  addSampleWeight(samples,'DY','DYJetsToLL_M-50','DY_NLO_pTllrw * DY_METrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-10to50_ext1','DY_NLO_pTllrw * DY_METrw')

  if useDYHT:
    samples['DY']['name'] += getSampleFiles(directory,'DYJetsToLL_M-50_HT-70to100',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-50_HT-100to200',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-50_HT-100to200_ext1',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-50_HT-200to400',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-50_HT-200to400_ext1',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-50_HT-400to600',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-50_HT-400to600_ext1',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-50_HT-600to800',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-50_HT-800to1200',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-50_HT-1200to2500',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-50_HT-2500toinf',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-70to100',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-100to200',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-100to200_ext1',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-200to400',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-200to400_ext1',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-400to600',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-400to600_ext1',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-600toinf',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-5to50_HT-600toinf_ext1',False,'nanoLatino_')
    CombineBaseW(samples, 'DY', ['DYJetsToLL_M-50_HT-100to200', 'DYJetsToLL_M-50_HT-100to200_ext1'])
    CombineBaseW(samples, 'DY', ['DYJetsToLL_M-50_HT-200to400', 'DYJetsToLL_M-50_HT-200to400_ext1'])
    CombineBaseW(samples, 'DY', ['DYJetsToLL_M-50_HT-400to600', 'DYJetsToLL_M-50_HT-400to600_ext1'])
    CombineBaseW(samples, 'DY', ['DYJetsToLL_M-5to50_HT-100to200', 'DYJetsToLL_M-5to50_HT-100to200_ext1'])
    CombineBaseW(samples, 'DY', ['DYJetsToLL_M-5to50_HT-200to400', 'DYJetsToLL_M-5to50_HT-200to400_ext1'])
    CombineBaseW(samples, 'DY', ['DYJetsToLL_M-5to50_HT-400to600', 'DYJetsToLL_M-5to50_HT-400to600_ext1'])
    CombineBaseW(samples, 'DY', ['DYJetsToLL_M-5to50_HT-600toinf', 'DYJetsToLL_M-5to50_HT-600toinf_ext1'])
    addSampleWeight(samples,'DY','DYJetsToLL_M-50','(LHE_HT < 70)')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50_ext1','(LHE_HT < 70)')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100',         'DY_LO_pTllrw * DY_METrw') # HT-binned are LO!
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200',        'DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200_ext1',   'DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400',        'DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400_ext1',   'DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600',        'DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext1',   'DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800',        'DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200',       'DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500',      'DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toinf',       'DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-70to100',      'DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-100to200',     'DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-100to200_ext1','DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400',     'DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400_ext1','DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600',     'DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600_ext1','DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toinf',     'DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toinf_ext1','DY_LO_pTllrw * DY_METrw')



############ Top ############

samples['top'] = {    'name'   :   getSampleFiles(directory,'TTTo2L2Nu',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_s-channel',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_t-channel_antitop',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_t-channel_top',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_tW_antitop',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_tW_top',False,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto ,
                     'FilesPerJob' : 10,
                     'EventsPerJob' : 100000,
                     'suppressNegative' :['all'],
                     'suppressNegativeNuisances' :['all'],
                 }

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

############ WW ############

samples['WW'] = {    'name'   :   getSampleFiles(directory,'WWTo2L2Nu',False,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*nllW*(mjjGen_OTF<100)'+embed_tautauveto ,
                     'FilesPerJob' : 10,
                     'EventsPerJob' : 100000,
                     'suppressNegative' :['all'],
                     'suppressNegativeNuisances' :['all'],
                 }

samples['WWewk'] = {   'name'  : getSampleFiles(directory, 'WpWmJJ_EWK_noTop',False,'nanoLatino_'),
                       'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto+ '*(Sum$(abs(GenPart_pdgId)==6)==0 && Sum$(GenPart_pdgId==25)==0)'+'*(lhe_mW1[0] > 60. && lhe_mW1[0] < 100. && lhe_mW2[0] > 60. && lhe_mW2[0] < 100.)', #filter tops and higgs, limit w mass to remove some overlap between DY/WWewk/Vg (2016 only)
                       'suppressNegative' :['all'],
                       'suppressNegativeNuisances' :['all'],
                   }

# Fixing cross section (Did it need this in 2016?)
newbasew = getBaseWnAOD(directory, 'Summer16_102X_nAODv5_Full2016v6', ['WpWmJJ_EWK_noTop'])
addSampleWeight(samples, 'WWewk', 'WpWmJJ_EWK_noTop', newbasew+'/baseW')

samples['ggWW']  = {  'name'   :   getSampleFiles(directory,'GluGluWWTo2L2Nu_MCFM',False,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto + '*1.53/1.4' , #update k-factor
                      'FilesPerJob' : 2,
                      'suppressNegative' :['all'],
                      'suppressNegativeNuisances' :['all'],
                   }

#'name'   :   getSampleFiles(directory,'WpWmJJ_QCD_noTop',False,'nanoLatino_') ,  ---> Too low statistics in 2016!
# Using WWTo2L2Nu instead, and adding nllW weight! Also adding _noTop cut
samples['qqWWqq'] = {  'name'   :   getSampleFiles(directory,'WWTo2L2Nu',False,'nanoLatino_') ,
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*nllW*(Sum$(abs(GenPart_pdgId)==6)==0)*(mjjGen_OTF>=100)*(GenLHE)'+embed_tautauveto ,
                       'FilesPerJob' : 5,
                       'EventsPerJob' : 100000,
                       'suppressNegative' :['all'],
                       'suppressNegativeNuisances' :['all'],
                 }

#'name'   :   getSampleFiles(directory,'WpWmJJ_QCD_noTop',False,'nanoLatino_') ,  ---> Too low statistics in 2016!
# Using WWTo2L2Nu instead, and adding nllW weight! Also adding _noTop cut
samples['WW2J'] = {  'name'   :   getSampleFiles(directory,'WWTo2L2Nu',False,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*nllW*(Sum$(abs(GenPart_pdgId)==6)==0)*(mjjGen_OTF>=100)*(!GenLHE)'+embed_tautauveto ,
                     'FilesPerJob' : 5,
                     'EventsPerJob' : 100000,
                     'suppressNegative' :['all'],
                     'suppressNegativeNuisances' :['all'],
                 }



############ VZ ############

samples['VZ']  = {  'name'   :   getSampleFiles(directory,'ZZTo2L2Nu',False,'nanoLatino_')
                               + getSampleFiles(directory,'ZZTo2L2Nu_ext1',False,'nanoLatino_')
                               + getSampleFiles(directory,'ZZTo2L2Q',False,'nanoLatino_')
                               + getSampleFiles(directory,'ZZTo4L',False,'nanoLatino_') 
                               + getSampleFiles(directory,'ZZTo4L_ext1',False,'nanoLatino_') 
                               + getSampleFiles(directory,'WZTo2L2Q',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto + '*1.11' , #TODO: What's this k-factor?
                    'FilesPerJob' : 10,
                    'EventsPerJob' : 100000,
                    'suppressNegative' :['all'],
                    'suppressNegativeNuisances' :['all'],
                 }
CombineBaseW(samples, 'VZ', ['ZZTo2L2Nu', 'ZZTo2L2Nu_ext1'])
CombineBaseW(samples, 'VZ', ['ZZTo4L', 'ZZTo4L_ext1'])

############ Vg ############

# TODO: This needs no GenLepMatch. Why?
samples['Vg']  = {  'name'   :   getSampleFiles(directory,'Wg_MADGRAPHMLM',False,'nanoLatino_')
                               + getSampleFiles(directory,'Zg',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC+'*(!(Gen_ZGstar_mass > 0))'+embed_tautauveto, # 14.02.2020: Changed Vg treatment
                    'FilesPerJob': 3,
                    'suppressNegative' :['all'],
                    'suppressNegativeNuisances' :['all'],
                  }

#addSampleWeight(samples,'Vg','Zg','(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt < 20.) == 0)')


############ VgS ############

samples['VgS']  =  {  'name'   :   getSampleFiles(directory,'Wg_MADGRAPHMLM',False,'nanoLatino_')
                                 + getSampleFiles(directory,'Zg',False,'nanoLatino_')
                                 + getSampleFiles(directory,'WZTo3LNu_mllmin01',False,'nanoLatino_')
                                 + getSampleFiles(directory,'WZTo3LNu_mllmin01_ext1',False,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
                      'FilesPerJob' : 3 ,
                      'suppressNegative' :['all'],
                      'suppressNegativeNuisances' :['all'],
                      'subsamples': {
                        'L': 'gstarLow',
                        'H': 'gstarHigh'
                      }
                   }
CombineBaseW(samples, 'VgS', ['WZTo3LNu_mllmin01', 'WZTo3LNu_mllmin01_ext1'])

# 14.02.2020: Changed Vg treatment
addSampleWeight(samples,'VgS','Wg_MADGRAPHMLM',    '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples,'VgS','Zg',                '(Gen_ZGstar_mass > 0)')
addSampleWeight(samples,'VgS','WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')
addSampleWeight(samples,'VgS','WZTo3LNu_mllmin01_ext1', '(Gen_ZGstar_mass > 0.1)')


############ VVV ############

samples['VVV']  = {  'name'   :   getSampleFiles(directory,'ZZZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WZZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WWZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WWW',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                    'FilesPerJob' : 5,
                    'suppressNegative' :['all'],
                    'suppressNegativeNuisances' :['all'],
                  }



##########################################
################ SIGNALS #################
##########################################

massesAndModelsFile = "massesAndModels.py"
if os.path.exists(massesAndModelsFile) :
  handle = open(massesAndModelsFile,'r')
  exec(handle)
  handle.close()
else:
  print "!!! ERROR file ", massesAndModelsFile, " does not exist."

############ HIGH MASS ggH H->WW ############

HiggsXS = HiggsXSection()

model_I = model+'_I'
model_name = '_'+model.replace("cprime","c").replace(".","").replace("BRnew","brn")

INToverSBI = False

for mass in massggh:

  #if mass == '115': # for nAODv5
  #  SMxsec = 0.4842
  #else:
  SMxsec = HiggsXS.GetHiggsXS4Sample('YR4','13TeV','GluGluHToWWTo2L2Nu_M'+mass)['xs']
  noSMxsec = '(1.0/'+str(SMxsec)+')'

  # Special names in 2016 for mass >= 300
  jhugen = ''
  if int(mass) >= 300: jhugen = '_JHUGen698'
  if int(mass) >= 4000: jhugen = '_JHUGen714'

  # Xsec*BR is applied in later step, so remove "SM"-Xsec*BR 
  samples['GGH_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'GluGluHToWWTo2L2Nu'+jhugen+'_M'+mass,True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+noSMxsec+'*'+model ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 100000,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

  if INToverSBI:
    samples['GGHINT_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'GluGluHToWWTo2L2Nu'+jhugen+'_M'+mass,True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+noSMxsec+'*'+'('+model_I+'*(abs('+model_I+')<50))' , # abs<100 cut removes 0.035% of all events, abs<50 cut Removes 0.074% of all events
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 100000,
                     }

  else:
    samples['GGHSBI_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'GluGluHToWWTo2L2Nu'+jhugen+'_M'+mass,True,'nanoLatino_')
                                                      + getSampleFiles(directory,'GluGluWWTo2L2Nu_MCFM',False,'nanoLatino_')
                                                      + getSampleFiles(directory,'GluGluHToWWTo2L2Nu_alternative_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 100000,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

    addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluHToWWTo2L2Nu'+jhugen+'_M'+mass, noSMxsec+'*'+'('+model+' + '+model_I+'*(abs('+model_I+')<50))')
    addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluWWTo2L2Nu_MCFM', '1.53/1.4'+embed_tautauveto)
    addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluHToWWTo2L2Nu_alternative_M125', 'MINLO')

  if mass in ['4000', '5000']: # Just to be sure, recalculate baseW with new cross sections
    newbasew = getBaseWnAOD(directoryHM, 'Summer16_102X_nAODv6_Full2016v6', ['GluGluHToWWTo2L2Nu'+jhugen+'_M'+mass])
    addSampleWeight(samples, 'GGH_'+mass+model_name, 'GluGluHToWWTo2L2Nu'+jhugen+'_M'+mass, newbasew+'/baseW')
    if INToverSBI:
      addSampleWeight(samples, 'GGHINT_'+mass+model_name, 'GluGluHToWWTo2L2Nu'+jhugen+'_M'+mass, newbasew+'/baseW')
    else:
      addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluHToWWTo2L2Nu'+jhugen+'_M'+mass, newbasew+'/baseW')

############ HIGS MASS VBF H->WW ############

for mass in massvbf:

  #if mass == '115': # for nAODv5
  #  SMxsec = 0.0388
  #else:
  SMxsec = HiggsXS.GetHiggsXS4Sample('YR4','13TeV','VBFHToWWTo2L2Nu_M'+mass)['xs']
  noSMxsec = '(1.0/'+str(SMxsec)+')'

  # Special names in 2016 for mass >= 300
  jhugen = ''
  if int(mass) >= 300: jhugen = '_JHUGen698'
  if int(mass) >= 4000: jhugen = '_JHUGen714'

  # Xsec*BR is applied in later step, so remove "SM"-Xsec*BR 
  samples['QQH_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'VBFHToWWTo2L2Nu'+jhugen+'_M'+mass,True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+noSMxsec+'*'+model ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 100000,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

  if INToverSBI:
    samples['QQHINT_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'VBFHToWWTo2L2Nu'+jhugen+'_M'+mass,True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+noSMxsec+'*'+'('+model_I+'*(abs('+model_I+')<50))' ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 100000,
                     }

  else:
    samples['QQHSBI_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'VBFHToWWTo2L2Nu'+jhugen+'_M'+mass,True,'nanoLatino_')
                                                      + getSampleFiles(directory,'WWTo2L2Nu',False,'nanoLatino_')
                                                      + getSampleFiles(directory,'VBFHToWWTo2L2Nu_alternative_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 100000,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

#'name'   :   getSampleFiles(directory,'WpWmJJ_QCD_noTop',False,'nanoLatino_') ,  ---> Too low statistics in 2016!
# Using WWTo2L2Nu instead, and adding nllW weight! Also adding _noTop cut

    addSampleWeight(samples, 'QQHSBI_'+mass+model_name, 'VBFHToWWTo2L2Nu'+jhugen+'_M'+mass, noSMxsec+'*'+'('+model+' + '+model_I+'*(abs('+model_I+')<50))')
    addSampleWeight(samples, 'QQHSBI_'+mass+model_name, 'WWTo2L2Nu', 'nllWOTF*(Sum$(abs(GenPart_pdgId)==6)==0)*(mjjGen_OTF>100)*(GenLHE)'+embed_tautauveto)

  if mass in ['4000', '5000']: # Just to be sure, recalculate baseW with new cross sections
    newbasew = getBaseWnAOD(directoryHM, 'Summer16_102X_nAODv6_Full2016v6', ['VBFHToWWTo2L2Nu'+jhugen+'_M'+mass])
    addSampleWeight(samples, 'QQH_'+mass+model_name, 'VBFHToWWTo2L2Nu'+jhugen+'_M'+mass, newbasew+'/baseW')
    if INToverSBI:
      addSampleWeight(samples, 'QQHINT_'+mass+model_name, 'VBFHToWWTo2L2Nu'+jhugen+'_M'+mass, newbasew+'/baseW')
    else:
      addSampleWeight(samples, 'QQHSBI_'+mass+model_name, 'VBFHToWWTo2L2Nu'+jhugen+'_M'+mass, newbasew+'/baseW')


############ ggH H->WW ############

samples['ggH_hww']  = {  'name'   :   getSampleFiles(directory,'GluGluHToWWTo2L2Nu_alternative_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }
addSampleWeight(samples, 'ggH_hww', 'GluGluHToWWTo2L2NuPowheg_M125', 'MINLO')

############ VBF H->WW ############

samples['qqH_hww']  = {  'name'   :   getSampleFiles(directory,'VBFHToWWTo2L2Nu_alternative_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

############ ZH H->WW ############

samples['ZH_hww']  = {  'name'   :   getSampleFiles(directory,'HZJ_HToWW_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 100000,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

#samples['ggZH_hww']  = {  'name'   :   getSampleFiles(directory,'ggZH_HToWW_M125',False,'nanoLatino_'),
#                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
#                        'FilesPerJob' : 1,
#                     }

############ WH H->WW ############

samples['WH_hww']  = {  'name'   :   getSampleFiles(directory,'HWplusJ_HToWW_M125',False,'nanoLatino_')
                                   + getSampleFiles(directory,'HWminusJ_HToWW_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

############ ttH ############

#samples['ttH_hww']  = {  'name'   :   getSampleFiles(directory,'ttHToNonbb_M125',False,'nanoLatino_'),
#                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
#                         'FilesPerJob' : 2,
#                     }

############ bbH ############

#samples['bbH_hww']  = {  'name' :   getSampleFiles(directory,'bbHToWWTo2L2Nu_M125_yb2',False,'nanoLatino_') 
#                                  + getSampleFiles(directory,'bbHToWWTo2L2Nu_M125_ybyt',False,'nanoLatino_')
#                                  ,
#                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
#                      }

############ H->TauTau ############

samples['ggH_htt']  = {  'name'   : getSampleFiles(directory,'GluGluHToTauTau_M125',False,'nanoLatino_'),
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                      }

samples['qqH_htt']  = {  'name'   : getSampleFiles(directory,'VBFHToTauTau_M125',False,'nanoLatino_'),
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                      }

samples['ZH_htt']  = {  'name'   : getSampleFiles(directory,'HZJ_HToTauTau_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        'FilesPerJob' : 2,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                      }

samples['WH_htt']  = {  'name'   :  getSampleFiles(directory,'HWplusJ_HToTauTau_M125',False,'nanoLatino_')
                                  + getSampleFiles(directory,'HWminusJ_HToTauTau_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        'FilesPerJob' : 3,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                      }


###########################################
################## FAKE ###################
###########################################

if EMorEEorMM == 'em':
  fakesamples = ['em', 'me']
elif EMorEEorMM == 'ee':
  fakesamples = ['ee']
elif EMorEEorMM == 'mm':
  fakesamples = ['mm']

for fakesamp in fakesamples:
  lepone = '11' if fakesamp[0] == 'e' else '13'
  leptwo = '11' if fakesamp[1] == 'e' else '13'

  samples['Fake_'+fakesamp]  = {   'name': [ ] ,
                         'weight' : METFilter_DATA+'*'+fakeW+'*(abs(Lepton_pdgId[0])=='+lepone+' && abs(Lepton_pdgId[1])=='+leptwo+')',
                         'weights' : [ ] ,
                         'isData': ['all'],
                         'FilesPerJob' : 30 ,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                      }

for Run in DataRun :
        directory = treeBaseDir+'Run2016_102X_nAODv5_Full2016v6/DATAl1loose2016v6__l2loose__fakeW/'
        if NewttHWPForMu:
                directory = treeBaseDir+'Run2016_102X_nAODv5_Full2016v6_ForNewWPs/DATAl1loose2016v6__l2loose__fakeW__DYMVA/'
        for DataSet in DataSets :
                specialrun = Run[1] # Run 2016E MuonEG is v3 instead of v1
                if Run[0] == 'E' and DataSet == 'MuonEG': specialrun = 'Run2016E-Nano1June2019-v3'
                FileTarget = getSampleFiles(directory,DataSet+'_'+specialrun,True,'nanoLatino_')
                for iFile in FileTarget:
                    for fakesamp in fakesamples:
                        samples['Fake_'+fakesamp]['name'].append(iFile)
                        samples['Fake_'+fakesamp]['weights'].append(DataTrig[DataSet])

###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,
                       'weight' : METFilter_DATA+'*'+LepWPCut,
                       'weights' : [ ],
                       'isData': ['all'],
                       'FilesPerJob' : 40,
                  }

for Run in DataRun :
        directory = treeBaseDir+'Run2016_102X_nAODv5_Full2016v6/DATAl1loose2016v6__l2loose__l2tightOR2016v6/'
        for DataSet in DataSets :
                specialrun = Run[1] # Run 2016E MuonEG is v3 instead of v1
                if Run[0] == 'E' and DataSet == 'MuonEG': specialrun = 'Run2016E-Nano1June2019-v3'
                FileTarget = getSampleFiles(directory,DataSet+'_'+specialrun,True,'nanoLatino_')
                for iFile in FileTarget:
                        #print(iFile)
                        samples['DATA']['name'].append(iFile)
                        samples['DATA']['weights'].append(DataTrig[DataSet])

