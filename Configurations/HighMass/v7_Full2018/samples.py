import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

for tag in ['em', 'ee', 'mm']:
  if tag in opt.pycfg: EMorEEorMM = tag

samples={}

##############################################
############### Tree Directory ###############
##############################################

treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'

directory = treeBaseDir+'Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7'
directoryDY = treeBaseDir+'Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7__recoilDY'
directoryHM = treeBaseDir+'Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7__BWReweight'

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

#SFweight      = 'SFweight2l*'+LepWPweight+'*'+LepWPCut
#SFweight += '*btagSF'
#SFweight += '*PUJetIdSF'
GenLepMatch   = 'PromptGenLepMatch2l'
TotalMC       = 'XSWeight*SFweight*'+GenLepMatch+'*METFilter_MC'


################################################
############## FAKE WEIGHTS ####################
################################################

fakeW = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP


################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
            ['A','Run2018A-02Apr2020-v1'] ,
            ['B','Run2018B-02Apr2020-v1'] ,
            ['C','Run2018C-02Apr2020-v1'] ,
            ['D','Run2018D-02Apr2020-v1']
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
  newbaseW = getBaseWnAOD(directory, 'Autumn18_102X_nAODv7_Full2018v7', samplelist)
  for s in samplelist:
    addSampleWeight(samples, proc, s, newbaseW+'/baseW')


###########################################
#############  BACKGROUNDS  ###############
###########################################

############ DY ############

useEmbeddedDY = True
useDYtt = True
useDYHT = False
useDYstitching = True

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
                         'weight' : 'METFilter_DATA*'+LepWPCut+'*embed_total_WP90V1*genWeight',
                         'weights' : [ ] ,
                         'isData': ['all'],
                         'FilesPerJob' : 400,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                      }

  for Run in DataRun :
          directoryEmb = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Embedding2018_102X_nAODv7_Full2018v7/DATAl1loose2018v7__l2loose__l2tightOR2018v7__Embedding'
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
                                 + getSampleFiles(directory,'WZTo2L2Q',False,'nanoLatino_')
                                 + getSampleFiles(directory,'EWKZ2Jets_ZToLL_M-50',False,'nanoLatino_'),

                         'weight' : TotalMC+'*'+'(1-embed_tautauveto)',
                         'FilesPerJob' : 1, # There's some error about not finding sample-specific variables like "nllW" when mixing different samples into a single job; so split them all up instead
                      }
  CombineBaseW(samples, 'DYveto', ['WpWmJJ_QCD_noTop', 'WpWmJJ_QCD_noTop_ext1'])
  CombineBaseW(samples, 'DYveto', ['ZZTo2L2Nu_ext1', 'ZZTo2L2Nu_ext2'])
  CombineBaseW(samples, 'DYveto', ['ZZTo4L_ext1', 'ZZTo4L_ext2'])

  veto_dict = {'TTTo2L2Nu'          : '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) + (topGenPt * antitopGenPt <= 0.)',
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
               'WZTo2L2Q'       : '1.11' ,
               'EWKZ2Jets_ZToLL_M-50' : '(lhe_mjj[0] > 120)'
              }

  for v_samp,v_weight in veto_dict.items():
          if v_weight != '1': addSampleWeight(samples,'DYveto',v_samp,v_weight)

if useDYtt :
    samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToTT_MuEle_M-50',False,'nanoLatino_')
                                    + getSampleFiles(directory,'DYJetsToLL_M-10to50-LO',False,'nanoLatino_')
                                    + getSampleFiles(directory,'DYJetsToLL_M-10to50-LO_ext1',False,'nanoLatino_'),
                         'weight' : TotalMC+embed_tautauveto + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 && Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )' ,# To remove some overlap between DY/Vg
                         'FilesPerJob' : 10,
                         'EventsPerJob' : 500000,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                    }
    CombineBaseW(samples, 'DY', ['DYJetsToLL_M-10to50-LO', 'DYJetsToLL_M-10to50-LO_ext1'])
    addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50','DY_NLO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO','DY_LO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1','DY_LO_pTllrw')
    
elif not useDYstitching:
  samples['DY'] = {    'name'   :   getSampleFiles(directoryDY,'DYJetsToLL_M-50',True,'nanoLatino_') # LO(_ext0) is DYMVA Training!
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-50_ext2',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-10to50-LO',True,'nanoLatino_') # LO(_ext0) is DYMVA Training!
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-10to50-LO_ext1',True,'nanoLatino_'),
                       'weight' : TotalMC+embed_tautauveto + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 && Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) ) * (DY_LowMll)' ,
                       'FilesPerJob' : 10,
                       'EventsPerJob' : 500000,
                       'suppressNegative' :['all'],
                       'suppressNegativeNuisances' :['all'],
                   }
  CombineBaseW(samples, 'DY', ['DYJetsToLL_M-50', 'DYJetsToLL_M-50_ext2'])
  CombineBaseW(samples, 'DY', ['DYJetsToLL_M-10to50-LO', 'DYJetsToLL_M-10to50-LO_ext1'])
  addSampleWeight(samples,'DY','DYJetsToLL_M-50','DY_NLO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2','DY_NLO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO','DY_LO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1','DY_LO_pTllrw')

  if useDYHT:
    samples['DY']['name'] += getSampleFiles(directoryDY,'DYJetsToLL_M-50_HT-70to100',True,'nanoLatino_') \
                           + getSampleFiles(directoryDY,'DYJetsToLL_M-50_HT-100to200',True,'nanoLatino_') \
                           + getSampleFiles(directoryDY,'DYJetsToLL_M-50_HT-200to400',True,'nanoLatino_') \
                           + getSampleFiles(directoryDY,'DYJetsToLL_M-50_HT-400to600',True,'nanoLatino_') \
                           + getSampleFiles(directoryDY,'DYJetsToLL_M-50_HT-400to600_ext2',True,'nanoLatino_') \
                           + getSampleFiles(directoryDY,'DYJetsToLL_M-50_HT-600to800',True,'nanoLatino_') \
                           + getSampleFiles(directoryDY,'DYJetsToLL_M-50_HT-800to1200',True,'nanoLatino_') \
                           + getSampleFiles(directoryDY,'DYJetsToLL_M-50_HT-1200to2500',True,'nanoLatino_') \
                           + getSampleFiles(directoryDY,'DYJetsToLL_M-50_HT-2500toInf',True,'nanoLatino_') \
                           + getSampleFiles(directoryDY,'DYJetsToLL_M-4to50_HT-100to200',True,'nanoLatino_') \
                           + getSampleFiles(directoryDY,'DYJetsToLL_M-4to50_HT-200to400',True,'nanoLatino_') \
                           + getSampleFiles(directoryDY,'DYJetsToLL_M-4to50_HT-400to600',True,'nanoLatino_') \
                           + getSampleFiles(directoryDY,'DYJetsToLL_M-4to50_HT-600toInf',True,'nanoLatino_')
    CombineBaseW(samples, 'DY', ['DYJetsToLL_M-50_HT-400to600', 'DYJetsToLL_M-50_HT-400to600_ext2'])
    addSampleWeight(samples,'DY','DYJetsToLL_M-50',               '(LHE_HT < 70)')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2',          '(LHE_HT < 70)')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',        '(LHE_HT < 100)')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1',   '(LHE_HT < 100)')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100',    'DY_LO_pTllrw') #Are LO!
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200',   'DY_LO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400',   'DY_LO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600',   'DY_LO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext2','DY_LO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800',   'DY_LO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200',  'DY_LO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500', 'DY_LO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf',  'DY_LO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-100to200','DY_LO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-200to400','DY_LO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-400to600','DY_LO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-600toInf','DY_LO_pTllrw')

    # HT stichting for 2017/18 (see https://twiki.cern.ch/twiki/bin/viewauth/CMS/MCKnownIssues#WJetsToLNu_HT_and_DYJets_HT_LO_M)
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400',   '0.999')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600',   '0.990')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext2','0.990')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800',   '0.975')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200',  '0.907')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500', '0.833')
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf',  '1.015')

else:

  samples['DY'] = {    'name'   :   getSampleFiles(directoryDY,'DYJetsToLL_M-50',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-50_ext2',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-10to50-LO',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-10to50-LO_ext1',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-4to50_HT-100to200',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-4to50_HT-200to400',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-4to50_HT-400to600',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-4to50_HT-600toInf',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-100to200',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-200to400',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-400to500',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-500to700',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-700to800',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-800to1000',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-1000to1500',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-1500to2000',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-2000to3000',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_M-3000toInf',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_Pt-50to100',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_Pt-100to250',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_Pt-250to400',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_Pt-400to650',True,'nanoLatino_')
                                  + getSampleFiles(directoryDY,'DYJetsToLL_Pt-650toInf',True,'nanoLatino_') ,
                       'weight' : TotalMC+embed_tautauveto + "*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 && Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) ) * (DY_LowMll) * DY_StitchWeight" ,
                       'FilesPerJob' : 10,
                       'EventsPerJob' : 250000,
                       'suppressNegative' :['all'],
                       'suppressNegativeNuisances' :['all'],
                   }

  CombineBaseW(samples, 'DY', ['DYJetsToLL_M-10to50-LO', 'DYJetsToLL_M-10to50-LO_ext1'])
  addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',        '(LHE_HT < 100)')
  addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1',   '(LHE_HT < 100)')

  addSampleWeight(samples,'DY','DYJetsToLL_M-50','DY_NLO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2','DY_NLO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO','DY_LO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1','DY_LO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-100to200',       'DY_LO_pTllrw') # HT-binned are LO!
  addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-200to400',       'DY_LO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-400to600',       'DY_LO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-600toInf',       'DY_LO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-100to200',                'DY_NLO_pTllrw') # MLL-binned are NLO!
  addSampleWeight(samples,'DY','DYJetsToLL_M-200to400',                'DY_NLO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-400to500',                'DY_NLO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-500to700',                'DY_NLO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-700to800',                'DY_NLO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-800to1000',               'DY_NLO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-1000to1500',              'DY_NLO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-1500to2000',              'DY_NLO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-2000to3000',              'DY_NLO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_M-3000toInf',               'DY_NLO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_Pt-50to100',                'DY_NLO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_Pt-100to250',               'DY_NLO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_Pt-250to400',               'DY_NLO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_Pt-400to650',               'DY_NLO_pTllrw')
  addSampleWeight(samples,'DY','DYJetsToLL_Pt-650toInf',               'DY_NLO_pTllrw')


############ Top ############

samples['top'] = {    'name'   :   getSampleFiles(directory,'TTTo2L2Nu',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_s-channel_ext1',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_t-channel_antitop',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_t-channel_top',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_tW_antitop_ext1',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_tW_top_ext1',False,'nanoLatino_') ,
                     'weight' : TotalMC+embed_tautauveto ,
                     'FilesPerJob' : 10,
                     'EventsPerJob' : 300000,
                     'suppressNegative' :['all'],
                     'suppressNegativeNuisances' :['all'],
                 }

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')
# Wrong XSec in t-channel: Samples are for inclusive W decay; our XSec is for leptonic only
lepD_to_incD = '(100./(10.75 + 10.57 + 11.25))' # 100% / (W->e+nu & W->mu+nu & W->tau+nu)
addSampleWeight(samples,'top','ST_t-channel_antitop', lepD_to_incD)
addSampleWeight(samples,'top','ST_t-channel_top',     lepD_to_incD)

############ WW ############

samples['WW'] = {    'name'   :   getSampleFiles(directory,'WWTo2L2Nu',False,'nanoLatino_') ,
                     'weight' : TotalMC+'*nllW*(mjjGen_OTF<100)'+embed_tautauveto ,
                     'FilesPerJob' : 10,
                     'EventsPerJob' : 500000,
                     'suppressNegative' :['all'],
                     'suppressNegativeNuisances' :['all'],
                 }

samples['WWewk'] = {   'name'  : getSampleFiles(directory, 'WpWmJJ_EWK_noTop',False,'nanoLatino_'),
                       'weight': TotalMC+embed_tautauveto+ '*(Sum$(abs(GenPart_pdgId)==6)==0 && Sum$(GenPart_pdgId==25)==0)', #filter tops and higgs
                       'suppressNegative' :['all'],
                       'suppressNegativeNuisances' :['all'],
                   }

samples['ggWW']  = {  'name'   :   getSampleFiles(directory,'GluGluToWWToENEN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToENMN',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'GluGluToWWToENTN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToMNEN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToMNMN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToMNTN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToTNEN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToTNMN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToTNTN',False,'nanoLatino_'),
                      'weight' : TotalMC+embed_tautauveto + '*1.53/1.4' , #update k-factor
                      'FilesPerJob' : 10,
                      'EventsPerJob' : 500000,
                      'suppressNegative' :['all'],
                      'suppressNegativeNuisances' :['all'],
                   }

samples['qqWWqq'] = {  'name'   :   getSampleFiles(directory,'WpWmJJ_QCD_noTop',False,'nanoLatino_')
                                  + getSampleFiles(directory,'WpWmJJ_QCD_noTop_ext1',False,'nanoLatino_'),
                       'weight' : TotalMC+'*(mjjGen_OTF>=100)*(GenLHE)'+embed_tautauveto ,
                       'FilesPerJob' : 10,
                       'EventsPerJob' : 500000,
                       'suppressNegative' :['all'],
                       'suppressNegativeNuisances' :['all'],
                 }
CombineBaseW(samples, 'qqWWqq', ['WpWmJJ_QCD_noTop', 'WpWmJJ_QCD_noTop_ext1'])

samples['WW2J'] = {  'name'   :   getSampleFiles(directory,'WpWmJJ_QCD_noTop',False,'nanoLatino_')
                                + getSampleFiles(directory,'WpWmJJ_QCD_noTop_ext1',False,'nanoLatino_'),
                     'weight' : TotalMC+'*(mjjGen_OTF>=100)*(!GenLHE)'+embed_tautauveto ,
                     'FilesPerJob' : 10,
                     'EventsPerJob' : 500000,
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
                    'weight' : TotalMC+embed_tautauveto + '*1.11' ,
                    'FilesPerJob' : 10,
                    'EventsPerJob' : 500000,
                    'suppressNegative' :['all'],
                    'suppressNegativeNuisances' :['all'],
                 }
CombineBaseW(samples, 'VZ', ['ZZTo2L2Nu_ext1', 'ZZTo2L2Nu_ext2'])
CombineBaseW(samples, 'VZ', ['ZZTo4L_ext1', 'ZZTo4L_ext2'])

samples['Zjj']  = {  'name'   :   getSampleFiles(directory,'EWKZ2Jets_ZToLL_M-50',False,'nanoLatino_'),
                    'weight' : TotalMC+embed_tautauveto + '*(lhe_mjj[0] > 120)',
                    'FilesPerJob' : 1,
                    'EventsPerJob' : 500000,
                    'suppressNegative' :['all'],
                    'suppressNegativeNuisances' :['all'],
                  }

############ Vg ############

samples['Vg']  = {  'name'   :   getSampleFiles(directory,'Wg_MADGRAPHMLM',False,'nanoLatino_')
                               + getSampleFiles(directory,'ZGToLLG',False,'nanoLatino_'),
                    'weight' : 'XSWeight*SFweight*METFilter_MC'+'*(Gen_ZGstar_mass <= 0)'+embed_tautauveto,
                    'FilesPerJob' : 10,
                    'EventsPerJob' : 500000,
                    'suppressNegative' :['all'],
                    'suppressNegativeNuisances' :['all'],
                  }


############ VgS ############

samples['VgS']  =  {  'name'   :   getSampleFiles(directory,'Wg_MADGRAPHMLM',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ZGToLLG',False,'nanoLatino_')
                                 + getSampleFiles(directory,'WZTo3LNu_mllmin01',False,'nanoLatino_'),
                      'weight' : TotalMC+embed_tautauveto + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
                      'FilesPerJob' : 10,
                      'EventsPerJob' : 500000,
                      'suppressNegative' :['all'],
                      'suppressNegativeNuisances' :['all'],
                      'subsamples': {
                        'L': 'gstarLow',
                        'H': 'gstarHigh'
                      }
                   }

addSampleWeight(samples,'VgS','Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples,'VgS','ZGToLLG', '(Gen_ZGstar_mass > 0)')
addSampleWeight(samples,'VgS','WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')


############ VVV ############

samples['VVV']  = {  'name'   :   getSampleFiles(directory,'ZZZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WZZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WWZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WWW',False,'nanoLatino_'),
                    'weight' : TotalMC ,
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

INToverSBI = False
noSMxsec = '(1.0/Xsec)'

for model in models:
  model_name = '_'+model.replace(".","")
  if model == 'SMWidth':
    model = '1.0'
    model_I = '0.0'
  else:
    model_I = model+'_I'

  ############ HIGH MASS ggH H->WW ############

  for mass in massggh:

    # Xsec*BR is applied in later step, so remove "SM"-Xsec*BR 
    samples['GGH_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'GluGluHToWWTo2L2Nu_M'+mass,True,'nanoLatino_'),
                        'weight' : TotalMC+'*'+noSMxsec+'*'+model ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 250000,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

    if INToverSBI:
      samples['GGHINT_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'GluGluHToWWTo2L2Nu_M'+mass,True,'nanoLatino_'),
                        'weight' : TotalMC+'*'+noSMxsec+'*'+'('+model_I+'*(abs('+model_I+')<20))' , # abs<100 cut removes 0.035% of all events, abs<50 cut removes 0.074% of all events, abs<20 cut removes 0.180% of all events
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 250000,
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
                        'weight' : TotalMC ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 250000,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

      addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluHToWWTo2L2Nu_M'+mass, noSMxsec+'*'+'('+model+' + '+model_I+'*(abs('+model_I+')<20))')
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

  ############ HIGS MASS VBF H->WW ############

  for mass in massvbf:

    # Xsec*BR is applied in later step, so remove "SM"-Xsec*BR 
    samples['QQH_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'VBFHToWWTo2L2Nu_M'+mass,True,'nanoLatino_'),
                        'weight' : TotalMC+'*'+noSMxsec+'*'+model ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 250000,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

    if INToverSBI:
      samples['QQHINT_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'VBFHToWWTo2L2Nu_M'+mass,True,'nanoLatino_'),
                        'weight' : TotalMC+'*'+noSMxsec+'*'+'('+model_I+'*(abs('+model_I+')<20))' ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 250000,
                     }

    else:
      samples['QQHSBI_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'VBFHToWWTo2L2Nu_M'+mass,True,'nanoLatino_')
                                                      + getSampleFiles(directory,'WpWmJJ_QCD_noTop',False,'nanoLatino_')
                                                      + getSampleFiles(directory,'WpWmJJ_QCD_noTop_ext1',False,'nanoLatino_')
                                                      + getSampleFiles(directory,'VBFHToWWTo2L2Nu_M125',False,'nanoLatino_'),
                        'weight' : TotalMC ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 250000,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

      CombineBaseW(samples, 'QQHSBI_'+mass+model_name, ['WpWmJJ_QCD_noTop', 'WpWmJJ_QCD_noTop_ext1'])

      addSampleWeight(samples, 'QQHSBI_'+mass+model_name, 'VBFHToWWTo2L2Nu_M'+mass, noSMxsec+'*'+'('+model+' + '+model_I+'*(abs('+model_I+')<20))', directoryHM)
      addSampleWeight(samples, 'QQHSBI_'+mass+model_name, 'WpWmJJ_QCD_noTop', '(mjjGen_OTF>100)*(GenLHE)'+embed_tautauveto)
      addSampleWeight(samples, 'QQHSBI_'+mass+model_name, 'WpWmJJ_QCD_noTop_ext1', '(mjjGen_OTF>100)*(GenLHE)'+embed_tautauveto)


############ ggH H->WW ############

samples['ggH_hww']  = {  'name'   :   getSampleFiles(directory,'GluGluHToWWTo2L2NuPowheg_M125',False,'nanoLatino_'),
                        'weight' : TotalMC,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 500000,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }
addSampleWeight(samples, 'ggH_hww', 'GluGluHToWWTo2L2NuPowheg_M125', 'MINLO')

############ VBF H->WW ############

samples['qqH_hww']  = {  'name'   :   getSampleFiles(directory,'VBFHToWWTo2L2Nu_M125',False,'nanoLatino_'),
                        'weight' : TotalMC ,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

############ ZH H->WW ############

samples['ZH_hww']  = {  'name'   :   getSampleFiles(directory,'HZJ_HToWWTo2L2Nu_M125',False,'nanoLatino_'),
                        'weight' : TotalMC ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 500000,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

############ WH H->WW ############

samples['WH_hww']  = {  'name'   :   getSampleFiles(directory,'HWplusJ_HToWW_M125',False,'nanoLatino_')
                                   + getSampleFiles(directory,'HWminusJ_HToWW_M125',False,'nanoLatino_'),
                        'weight' : TotalMC ,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                     }

############ H->TauTau ############

samples['ggH_htt']  = {  'name'   : getSampleFiles(directory,'GluGluHToTauTau_M125',False,'nanoLatino_'),
                         'weight' : TotalMC ,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                      }

samples['qqH_htt']  = {  'name'   : getSampleFiles(directory,'VBFHToTauTau_M125',False,'nanoLatino_'),
                         'weight' : TotalMC ,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                      }

samples['ZH_htt']  = {  'name'   : getSampleFiles(directory,'HZJ_HToTauTau_M125',False,'nanoLatino_'),
                        'weight' : TotalMC ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 500000,
                        'suppressNegative' :['all'],
                        'suppressNegativeNuisances' :['all'],
                      }

samples['WH_htt']  = {  'name'   :  getSampleFiles(directory,'HWplusJ_HToTauTau_M125',False,'nanoLatino_')
                                  + getSampleFiles(directory,'HWminusJ_HToTauTau_M125',False,'nanoLatino_'),
                        'weight' : TotalMC ,
                        'FilesPerJob' : 10,
                        'EventsPerJob' : 500000,
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
                         'weight' : 'METFilter_DATA*'+fakeW+'*(abs(Lepton_pdgId[0])=='+lepone+' && abs(Lepton_pdgId[1])=='+leptwo+')',
                         'weights' : [ ] ,
                         'isData': ['all'],
                         'FilesPerJob' : 400 ,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                      }

if EMorEEorMM == 'em':
  fakesamples.append("of")
  samples['Fake_of']  = {   'name': [ ] ,
                         'weight' : 'METFilter_DATA*'+fakeW+'*((abs(Lepton_pdgId[0])==11 && abs(Lepton_pdgId[1])==13) || (abs(Lepton_pdgId[0])==13 && abs(Lepton_pdgId[1])==11))',
                         'weights' : [ ] ,
                         'isData': ['all'],
                         'FilesPerJob' : 400 ,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                      }

for Run in DataRun :
        directory = treeBaseDir+'Run2018_102X_nAODv7_Full2018v7/DATAl1loose2018v7__l2loose__fakeW'
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
                       'weight' : 'METFilter_DATA*'+LepWPCut,
                       'weights' : [ ],
                       'isData': ['all'],
                       'FilesPerJob' : 800,
                  }

for Run in DataRun :
        directory = treeBaseDir+'Run2018_102X_nAODv7_Full2018v7/DATAl1loose2018v7__l2loose__l2tightOR2018v7'
        for DataSet in DataSets :
                FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
                for iFile in FileTarget:
                        #print(iFile)
                        samples['DATA']['name'].append(iFile)
                        samples['DATA']['weights'].append(DataTrig[DataSet])

