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
  #treeBaseDirHM = '/eos/user/d/dmroy/HWWNano/'

directory = treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6/'
directoryHM = treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__BWReweight2/'

################################################
############### Lepton WP ######################
################################################

eleWP='mvaFall17V1Iso_WP90'
muWP='cut_Tight_HWWW'

LepWPCut        = 'LepCut2l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF2l__ele_'+eleWP+'__mu_'+muWP


################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight2l*'+LepWPweight+'*'+LepWPCut
GenLepMatch   = 'PromptGenLepMatch2l'


################################################
############## FAKE WEIGHTS ####################
################################################

#if Nlep == '2' :
fakeW = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP
#else:
#  fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l'


################################################
############### B-Tag  WP ######################
################################################

# Definitions in aliases.py
SFweight += '*btagSF'

# Also updated jet PUid SF
SFweight += '*PUJetIdSF'

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
            ['A','Run2018A-Nano25Oct2019-v1'] ,
            ['B','Run2018B-Nano25Oct2019-v1'] ,
            ['C','Run2018C-Nano25Oct2019-v1'] ,
            ['D','Run2018D-Nano25Oct2019_ver2-v1'] ,
          ]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','EGamma']

DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
            'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
            'EGamma'         : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && (Trigger_sngEl || Trigger_dblEl)' ,
           }


############################################
############ MORE MC STAT ##################
############################################

def CombineBaseW(samples, proc, samplelist):
  newbaseW = getBaseWnAOD(directory, 'Autumn18_102X_nAODv6_Full2018v6', samplelist)
  for s in samplelist:
    addSampleWeight(samples, proc, s, newbaseW+'/baseW')


###########################################
#############  BACKGROUNDS  ###############
###########################################

############ DY ############

ptllDYW_NLO = '(0.87*(gen_ptll<10)+(0.379119+0.099744*gen_ptll-0.00487351*gen_ptll**2+9.19509e-05*gen_ptll**3-6.0212e-07*gen_ptll**4)*(gen_ptll>=10 && gen_ptll<45)+(9.12137e-01+1.11957e-04*gen_ptll-3.15325e-06*gen_ptll**2-4.29708e-09*gen_ptll**3+3.35791e-11*gen_ptll**4)*(gen_ptll>=45 && gen_ptll<200) + 1*(gen_ptll>200))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'

useEmbeddedDY = True
useDYtt = True
useDYHT = False

if EMorEEorMM in ['ee', 'mm']:
  useEmbeddedDY = False
  useDYtt = False
  useDYHT = True

embed_tautauveto = '' #Setup
if useEmbeddedDY:
  embed_tautauveto = '*embed_tautauveto'


if useEmbeddedDY:
  # Actual embedded data
  samples['DYemb']  = {   'name': [ ] ,
                         'weight' : METFilter_DATA+'*'+LepWPCut+'*embed_total_WP90V1*genWeight',
                         'weights' : [ ] ,
                         'isData': ['all'],
                         'FilesPerJob' : 800,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                      }

  for Run in DataRun :
          directoryEmb = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Embedding2018_102X_nAODv6_Full2018v6/DATAl1loose2018v6__l2loose__l2tightOR2018v6__Embedding/'
          FileTarget = getSampleFiles(directoryEmb,'DYToTT_MuEle_Embedded_Run2018'+Run[0],True,'nanoLatino_')
          for iFile in FileTarget:
                  samples['DYemb']['name'].append(iFile)
                  samples['DYemb']['weights'].append('Trigger_ElMu')

  # Vetoed MC: Needed for uncertainty
  samples['DYveto']  = {   'name': getSampleFiles(directory,'TTTo2L2Nu',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ST_tW_antitop_ext1',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ST_tW_top_ext1',False,'nanoLatino_')

                                 + getSampleFiles(directory,'WWTo2L2Nu',False,'nanoLatino_')
                                 + getSampleFiles(directory,'WpWmJJ_EWK_noTop',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToTNTN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'WpWmJJ_QCD_noTop',False,'nanoLatino_')
                                 + getSampleFiles(directory,'WpWmJJ_QCD_noTop_ext1',False,'nanoLatino_')

                                 + getSampleFiles(directory,'ZGToLLG',False,'nanoLatino_')
                                 + getSampleFiles(directory,'WZTo3LNu_mllmin01',False,'nanoLatino_')

                                 + getSampleFiles(directory,'ZZTo2L2Nu_ext1',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ZZTo2L2Nu_ext2',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ZZTo2L2Q',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ZZTo4L_ext1',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ZZTo4L_ext2',False,'nanoLatino_')
                                 + getSampleFiles(directory,'WZTo2L2Q',False,'nanoLatino_'),

                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+'(1-embed_tautauveto)',
                         'FilesPerJob' : 1, # There's some error about not finding sample-specific variables like "nllW" when mixing different samples into a single job; so split them all up instead
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                      }
  CombineBaseW(samples, 'DYveto', ['WpWmJJ_QCD_noTop', 'WpWmJJ_QCD_noTop_ext1'])
  CombineBaseW(samples, 'DYveto', ['ZZTo2L2Nu_ext1', 'ZZTo2L2Nu_ext2'])
  CombineBaseW(samples, 'DYveto', ['ZZTo4L_ext1', 'ZZTo4L_ext2'])

  veto_dict = {'TTTo2L2Nu'          : 'isTTbar * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) * (TMath::Sqrt(TMath::Exp(1.61468e-03 + 3.46659e-06*topGenPt - 8.90557e-08*topGenPt*topGenPt) * TMath::Exp(1.61468e-03 + 3.46659e-06*antitopGenPt - 8.90557e-08*antitopGenPt*antitopGenPt))) + isSingleTop',
               'ST_tW_antitop_ext1' : '1' ,
               'ST_tW_top_ext1'     : '1' ,

               'WWTo2L2Nu'             : 'nllW*(mjjGen_OTF<100)' ,
               'WpWmJJ_EWK_noTop'      : '(Sum$(abs(GenPart_pdgId)==6)==0 && Sum$(GenPart_pdgId==25)==0)',
               'GluGluToWWToTNTN'      : '1.53/1.4' ,
               'WpWmJJ_QCD_noTop'      : '(mjjGen_OTF>=100)' ,
               'WpWmJJ_QCD_noTop_ext1' : '(mjjGen_OTF>=100)' ,

               'ZGToLLG'                : '(Gen_ZGstar_mass <= 0)+(Gen_ZGstar_mass > 0)*((Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4) * 0.94 + (Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4) * 1.14)' ,
               'WZTo3LNu_mllmin01' : '(Gen_ZGstar_mass > 0.1)*((Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4) * 0.94 + (Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4) * 1.14)' ,

               'ZZTo2L2Nu_ext1' : '1.11' ,
               'ZZTo2L2Nu_ext2' : '1.11' ,
               'ZZTo2L2Q'       : '1.11' ,
               'ZZTo4L_ext1'    : '1.11' ,
               'ZZTo4L_ext2'    : '1.11' ,
               'WZTo2L2Q'       : '1.11'
              }

  for v_samp,v_weight in veto_dict.items():
          if v_weight != '1': addSampleWeight(samples,'DYveto',v_samp,v_weight)

if useDYtt :
    samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToTT_MuEle_M-50',False,'nanoLatino_')
                                    + getSampleFiles(directory,'DYJetsToLL_M-10to50-LO_ext1',False,'nanoLatino_'),
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 && Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )' ,# To remove some overlap between DY/Vg
                         'FilesPerJob' : 3,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                    }
    addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50','DY_NLO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1','DY_LO_pTllrw * DY_METrw')
    
else:
  samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToLL_M-50',False,'nanoLatino_') #Don't use LO(_ext0)! DYMVA Training!
                                  + getSampleFiles(directory,'DYJetsToLL_M-50_ext2',False,'nanoLatino_')
                                  + getSampleFiles(directory,'DYJetsToLL_M-10to50-LO_ext1',False,'nanoLatino_'), #Don't use LO(_ext0)! DYMVA Training!
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 && Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )' ,
                       'FilesPerJob' : 3,
                       'suppressNegative' :['all'],
                       'suppressNegativeNuisances' :['all'],
                   }
  CombineBaseW(samples, 'DY', ['DYJetsToLL_M-50', 'DYJetsToLL_M-50_ext2'])
  addSampleWeight(samples,'DY','DYJetsToLL_M-50','DY_NLO_pTllrw * DY_METrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2','DY_NLO_pTllrw * DY_METrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1','DY_LO_pTllrw * DY_METrw')

  if useDYHT:
    samples['DY']['name'] += getSampleFiles(directory,'DYJetsToLL_M-50_HT-70to100',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-50_HT-100to200',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-50_HT-200to400',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-50_HT-400to600',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-50_HT-400to600_ext2',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-50_HT-600to800',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-50_HT-800to1200',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-50_HT-1200to2500',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-50_HT-2500toInf',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-4to50_HT-100to200',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-4to50_HT-200to400',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-4to50_HT-400to600',False,'nanoLatino_') \
                           + getSampleFiles(directory,'DYJetsToLL_M-4to50_HT-600toInf',False,'nanoLatino_')
    CombineBaseW(samples, 'DY', ['DYJetsToLL_M-50_HT-400to600', 'DYJetsToLL_M-50_HT-400to600_ext2'])
    addSampleWeight(samples,'DY','DYJetsToLL_M-50','(LHE_HT < 70)')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2','(LHE_HT < 70)')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1','(LHE_HT < 100)')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100','DY_LO_pTllrw * DY_METrw') #Are LO!
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200','DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400','DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600','DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800','DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200','DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500','DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf','DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-100to200','DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-200to400','DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-400to600','DY_LO_pTllrw * DY_METrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-600toInf','DY_LO_pTllrw * DY_METrw')



############ Top ############

samples['top'] = {    'name'   :   getSampleFiles(directory,'TTTo2L2Nu',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_s-channel_ext1',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_t-channel_antitop',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_t-channel_top',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_tW_antitop_ext1',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_tW_top_ext1',False,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto ,
                     'FilesPerJob' : 10,
                     'EventsPerJob' : 80000,
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
                       'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto+ '*(Sum$(abs(GenPart_pdgId)==6)==0 && Sum$(GenPart_pdgId==25)==0)', #filter tops and higgs
                       'suppressNegative' :['all'],
                       'suppressNegativeNuisances' :['all'],
                   }
# Fixing cross section
newbasew = getBaseWnAOD(directory, 'Autumn18_102X_nAODv6_Full2018v6', ['WpWmJJ_EWK_noTop'])
addSampleWeight(samples, 'WWewk', 'WpWmJJ_EWK_noTop', newbasew+'/baseW')

samples['ggWW']  = {  'name'   :   getSampleFiles(directory,'GluGluToWWToENEN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToENMN',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'GluGluToWWToENTN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToMNEN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToMNMN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToMNTN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToTNEN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToTNMN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToTNTN',False,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto + '*1.53/1.4' ,#update k-factor
                      'FilesPerJob' : 2,
                      'suppressNegative' :['all'],
                      'suppressNegativeNuisances' :['all'],
                   }

samples['qqWWqq'] = {  'name'   :   getSampleFiles(directory,'WpWmJJ_QCD_noTop',False,'nanoLatino_')
                                  + getSampleFiles(directory,'WpWmJJ_QCD_noTop_ext1',False,'nanoLatino_'),
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*(mjjGen_OTF>=100)*(GenLHE)'+embed_tautauveto ,
                       'FilesPerJob' : 5,
                       'suppressNegative' :['all'],
                       'suppressNegativeNuisances' :['all'],
                 }
CombineBaseW(samples, 'qqWWqq', ['WpWmJJ_QCD_noTop', 'WpWmJJ_QCD_noTop_ext1'])

samples['WW2J'] = {  'name'   :   getSampleFiles(directory,'WpWmJJ_QCD_noTop',False,'nanoLatino_')
                                + getSampleFiles(directory,'WpWmJJ_QCD_noTop_ext1',False,'nanoLatino_'),
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*(mjjGen_OTF>=100)*(!GenLHE)'+embed_tautauveto ,
                     'FilesPerJob' : 5,
                     'suppressNegative' :['all'],
                     'suppressNegativeNuisances' :['all'],
                 }
CombineBaseW(samples, 'WW2J', ['WpWmJJ_QCD_noTop', 'WpWmJJ_QCD_noTop_ext1'])



############ VZ ############

samples['VZ']  = {  'name'   :   getSampleFiles(directory,'ZZTo2L2Nu_ext1',False,'nanoLatino_')
                               + getSampleFiles(directory,'ZZTo2L2Nu_ext2',False,'nanoLatino_')
                               + getSampleFiles(directory,'ZZTo2L2Q',False,'nanoLatino_')
                               + getSampleFiles(directory,'ZZTo4L_ext1',False,'nanoLatino_')
                               + getSampleFiles(directory,'ZZTo4L_ext2',False,'nanoLatino_')
                               + getSampleFiles(directory,'WZTo2L2Q',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto + '*1.11' ,
                    'FilesPerJob' : 10,
                    'EventsPerJob' : 100000,
                    'suppressNegative' :['all'],
                    'suppressNegativeNuisances' :['all'],
                 }
CombineBaseW(samples, 'VZ', ['ZZTo2L2Nu_ext1', 'ZZTo2L2Nu_ext2'])
CombineBaseW(samples, 'VZ', ['ZZTo4L_ext1', 'ZZTo4L_ext2'])

############ Vg ############

# TODO: This needs no GenLepMatch. Why?
samples['Vg']  = {  'name'   :   getSampleFiles(directory,'Wg_MADGRAPHMLM',False,'nanoLatino_')
                               + getSampleFiles(directory,'ZGToLLG',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC+'*(Gen_ZGstar_mass <= 0)'+embed_tautauveto,
                    'FilesPerJob': 5,
                    'suppressNegative' :['all'],
                    'suppressNegativeNuisances' :['all'],
                  }

# the following baseW correction is needed in both v5 and v6 (for Zg, Not for ZGToLLG)
#addSampleWeight(samples, 'Vg', 'Zg', '0.448')


############ VgS ############

samples['VgS']  =  {  'name'   :   getSampleFiles(directory,'Wg_MADGRAPHMLM',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ZGToLLG',False,'nanoLatino_')
                                 + getSampleFiles(directory,'WZTo3LNu_mllmin01',False,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
                      'FilesPerJob' : 3 ,
                      'suppressNegative' :['all'],
                      'suppressNegativeNuisances' :['all'],
                      'subsamples': {
                        'L': 'gstarLow',
                        'H': 'gstarHigh'
                      }
                   }

addSampleWeight(samples,'VgS','Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples,'VgS','Zg', '(Gen_ZGstar_mass > 0)') #*0.448
addSampleWeight(samples,'VgS','WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')


############ VVV ############

samples['VVV']  = {  'name'   :   getSampleFiles(directory,'ZZZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WZZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WWZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WWW',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
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

  # Xsec*BR is applied in later step, so remove "SM"-Xsec*BR 
  samples['GGH_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'GluGluHToWWTo2L2Nu_M'+mass,True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+noSMxsec+'*'+model ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 80000,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

  if INToverSBI:
    samples['GGHINT_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'GluGluHToWWTo2L2Nu_M'+mass,True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+noSMxsec+'*'+'('+model_I+'*(abs('+model_I+')<50))' , # abs<100 cut removes 0.035% of all events, abs<50 cut Removes 0.074% of all events
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 80000,
                     }

  else:
    samples['GGHSBI_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'GluGluHToWWTo2L2Nu_M'+mass,True,'nanoLatino_')
                                                      + getSampleFiles(directory,'GluGluToWWToENEN',False,'nanoLatino_')
                                                      + getSampleFiles(directory,'GluGluToWWToENMN',False,'nanoLatino_') 
                                                      + getSampleFiles(directory,'GluGluToWWToENTN',False,'nanoLatino_')
                                                      + getSampleFiles(directory,'GluGluToWWToMNEN',False,'nanoLatino_')
                                                      + getSampleFiles(directory,'GluGluToWWToMNMN',False,'nanoLatino_')
                                                      + getSampleFiles(directory,'GluGluToWWToMNTN',False,'nanoLatino_')
                                                      + getSampleFiles(directory,'GluGluToWWToTNEN',False,'nanoLatino_')
                                                      + getSampleFiles(directory,'GluGluToWWToTNMN',False,'nanoLatino_')
                                                      + getSampleFiles(directory,'GluGluToWWToTNTN',False,'nanoLatino_')
                                                      + getSampleFiles(directory,'GluGluHToWWTo2L2NuPowheg_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 80000,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

    addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluHToWWTo2L2Nu_M'+mass, noSMxsec+'*'+'('+model+' + '+model_I+'*(abs('+model_I+')<50))')
    addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluToWWToENEN', '1.53/1.4'+embed_tautauveto)
    addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluToWWToENMN', '1.53/1.4'+embed_tautauveto)
    addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluToWWToENTN', '1.53/1.4'+embed_tautauveto)
    addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluToWWToMNEN', '1.53/1.4'+embed_tautauveto)
    addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluToWWToMNMN', '1.53/1.4'+embed_tautauveto)
    addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluToWWToMNTN', '1.53/1.4'+embed_tautauveto)
    addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluToWWToTNEN', '1.53/1.4'+embed_tautauveto)
    addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluToWWToTNMN', '1.53/1.4'+embed_tautauveto)
    addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluToWWToTNTN', '1.53/1.4'+embed_tautauveto)
    addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluHToWWTo2L2NuPowheg_M125', 'MINLO')

  if mass in ['4000', '5000']: # Just to be sure, recalculate baseW with new cross sections
    newbasew = getBaseWnAOD(directory, 'Autumn18_102X_nAODv6_Full2018v6', ['GluGluHToWWTo2L2Nu_M'+mass])
    addSampleWeight(samples, 'GGH_'+mass+model_name, 'GluGluHToWWTo2L2Nu_M'+mass, newbasew+'/baseW')
    if INToverSBI:
      addSampleWeight(samples, 'GGHINT_'+mass+model_name, 'GluGluHToWWTo2L2Nu_M'+mass, newbasew+'/baseW')
    else:
      addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluHToWWTo2L2Nu_M'+mass, newbasew+'/baseW')

############ HIGS MASS VBF H->WW ############

for mass in massvbf:

  #if mass == '115': # for nAODv5
  #  SMxsec = 0.0388
  #else:
  SMxsec = HiggsXS.GetHiggsXS4Sample('YR4','13TeV','VBFHToWWTo2L2Nu_M'+mass)['xs']
  noSMxsec = '(1.0/'+str(SMxsec)+')'

  # Xsec*BR is applied in later step, so remove "SM"-Xsec*BR 
  samples['QQH_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'VBFHToWWTo2L2Nu_M'+mass,True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+noSMxsec+'*'+model ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 80000,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

  if INToverSBI:
    samples['QQHINT_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'VBFHToWWTo2L2Nu_M'+mass,True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+noSMxsec+'*'+'('+model_I+'*(abs('+model_I+')<50))' ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 80000,
                     }

  else:
    samples['QQHSBI_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'VBFHToWWTo2L2Nu_M'+mass,True,'nanoLatino_')
                                                      + getSampleFiles(directory,'WpWmJJ_QCD_noTop_ext1',False,'nanoLatino_')
                                                      + getSampleFiles(directory,'VBFHToWWTo2L2Nu_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 80000,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

    addSampleWeight(samples, 'QQHSBI_'+mass+model_name, 'VBFHToWWTo2L2Nu_M'+mass, noSMxsec+'*'+'('+model+' + '+model_I+'*(abs('+model_I+')<50))')
    addSampleWeight(samples, 'QQHSBI_'+mass+model_name, 'WpWmJJ_QCD_noTop_ext1', '(mjjGen_OTF>100)*(GenLHE)'+embed_tautauveto)

  if mass in ['4000', '5000']: # Just to be sure, recalculate baseW with new cross sections
    newbasew = getBaseWnAOD(directory, 'Autumn18_102X_nAODv6_Full2018v6', ['VBFHToWWTo2L2Nu_M'+mass])
    addSampleWeight(samples, 'QQH_'+mass+model_name, 'VBFHToWWTo2L2Nu_M'+mass, newbasew+'/baseW')
    if INToverSBI:
      addSampleWeight(samples, 'QQHINT_'+mass+model_name, 'VBFHToWWTo2L2Nu_M'+mass, newbasew+'/baseW')
    else:
      addSampleWeight(samples, 'QQHSBI_'+mass+model_name, 'VBFHToWWTo2L2Nu_M'+mass, newbasew+'/baseW')


############ ggH H->WW ############

samples['ggH_hww']  = {  'name'   :   getSampleFiles(directory,'GluGluHToWWTo2L2NuPowheg_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }
addSampleWeight(samples, 'ggH_hww', 'GluGluHToWWTo2L2NuPowheg_M125', 'MINLO')

############ VBF H->WW ############

samples['qqH_hww']  = {  'name'   :   getSampleFiles(directory,'VBFHToWWTo2L2Nu_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

############ ZH H->WW ############

samples['ZH_hww']  = {  'name'   :   getSampleFiles(directory,'HZJ_HToWWTo2L2Nu_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 100000,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

#samples['ggZH_hww']  = {  'name'   :   getSampleFiles(directory,'GluGluZH_HToWWTo2L2Nu_M125',False,'nanoLatino_'),
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
                         'FilesPerJob' : 90 ,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                      }

for Run in DataRun :
        directory = treeBaseDir+'Run2018_102X_nAODv6_Full2018v6/DATAl1loose2018v6__l2loose__fakeW/'
        for DataSet in DataSets :
                FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
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
                       'FilesPerJob' : 120,
                  }

for Run in DataRun :
        directory = treeBaseDir+'Run2018_102X_nAODv6_Full2018v6/DATAl1loose2018v6__l2loose__l2tightOR2018v6/'
        for DataSet in DataSets :
                FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
                for iFile in FileTarget:
                        #print(iFile)
                        samples['DATA']['name'].append(iFile)
                        samples['DATA']['weights'].append(DataTrig[DataSet])

