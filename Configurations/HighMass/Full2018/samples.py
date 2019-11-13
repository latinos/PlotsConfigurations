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

directory = treeBaseDir+'Autumn18_102X_nAODv5_Full2018v5/MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5/'
#TODO: Signal from nAODv5
directoryHM = treeBaseDirHM+'Autumn18_102X_nAODv4_GTv16_Full2018v4/MCl1loose2018__MCCorr2018__l2loose__l2tightOR2018v4__HighMass__hadd/'

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='2'
#Nlep='3'
#Nlep='4'

################################################
############### Lepton WP ######################
################################################

eleWP='mvaFall17V2Iso_WP90'
muWP='cut_Tight_HWWW'

LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP


################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut
GenLepMatch   = 'PromptGenLepMatch'+Nlep+'l' #FIXME correct when we use real fakes


################################################
############## FAKE WEIGHTS ####################
################################################

if Nlep == '2' :
  fakeW = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP
else:
  fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l'


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
            ['A','Run2018A-Nano1June2019-v1'] ,
            ['B','Run2018B-Nano1June2019-v1'] ,
            ['C','Run2018C-Nano1June2019-v1'] ,
            ['D','Run2018D-Nano1June2019_ver2-v1'] ,
          ]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','EGamma']

DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
            'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
            'EGamma'         : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && (Trigger_sngEl || Trigger_dblEl)' ,
           }


###########################################
#############  BACKGROUNDS  ###############
###########################################

############ DY ############

ptllDYW_NLO = '(0.87*(gen_ptll<10)+(0.379119+0.099744*gen_ptll-0.00487351*gen_ptll**2+9.19509e-05*gen_ptll**3-6.0212e-07*gen_ptll**4)*(gen_ptll>=10 && gen_ptll<45)+(9.12137e-01+1.11957e-04*gen_ptll-3.15325e-06*gen_ptll**2-4.29708e-09*gen_ptll**3+3.35791e-11*gen_ptll**4)*(gen_ptll>=45 && gen_ptll<200) + 1*(gen_ptll>200))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'

useEmbeddedDY = True
useDYtt = False

embed_tautauveto = '' #Setup
if useEmbeddedDY:
  embed_tautauveto = '*embed_tautauveto'


if useEmbeddedDY:
  # Actual embedded data
  samples['DYemb']  = {   'name': [ ] ,
                         'weight' : METFilter_DATA+'*'+LepWPCut+'*embed_total*genWeight',
                         'weights' : [ ] ,
                         'isData': ['all'],
                         'FilesPerJob' : 5,
                      }

  for Run in DataRun :
          directoryEmb = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Embedding2018_102X_nAODv5_Full2018v5/DATAl1loose2018v5__l2loose__l2tightOR2018v5__Embedding2018__hadd/'
          FileTarget = getSampleFiles(directoryEmb,'DYToTT_MuEle_Embedded_Run2018'+Run[0],True,'nanoLatino_')
          for iFile in FileTarget:
                  samples['DYemb']['name'].append(iFile)
                  samples['DYemb']['weights'].append('Trigger_ElMu')

  # Vetoed MC: Needed for uncertainty
  samples['DYveto']  = {   'name': getSampleFiles(directory,'TTTo2L2Nu',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_tW_antitop_ext1',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_tW_top_ext1',False,'nanoLatino_') 

                                 + getSampleFiles(directory,'WWTo2L2Nu',False,'nanoLatino_') 

                                 + getSampleFiles(directory,'WpWmJJ_EWK',False,'nanoLatino_') 

                                 + getSampleFiles(directory,'GluGluToWWToTNTN',False,'nanoLatino_') 

                                 + getSampleFiles(directory,'Zg',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'WZTo3LNu_mllmin01',False,'nanoLatino_') 

                                 + getSampleFiles(directory,'ZZTo2L2Nu_ext1',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ZZTo2L2Q',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ZZTo4L_ext1',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'WZTo2L2Q',False,'nanoLatino_') ,

                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+'(1-embed_tautauveto)',
                         'FilesPerJob' : 1, # There's some error about not finding sample-specific variables like "nllW" when mixing different samples into a single job; so split them all up instead
                      }

  veto_dict = {'TTTo2L2Nu'          : '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )' ,
               'ST_tW_antitop_ext1' : '1' ,
               'ST_tW_top_ext1'     : '1' ,

               'WWTo2L2Nu' : 'nllW' ,

               'WpWmJJ_EWK' : '(Sum$(abs(GenPart_pdgId)==6)==0 && Sum$(GenPart_pdgId==25)==0)',

               'GluGluToWWToTNTN' : '1' ,

               'Zg'                : '((!(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )) || (Gen_ZGstar_mass >0))' ,
               'WZTo3LNu_mllmin01' : '(Gen_ZGstar_mass>=0.1 || Gen_ZGstar_mass<0)' ,

               'ZZTo2L2Nu_ext1' : '1' ,
               'ZZTo2L2Q'       : '1' ,
               'ZZTo4L_ext1'    : '1' ,
               'WZTo2L2Q'       : '1'
              }

  for v_samp,v_weight in veto_dict.items():
          if v_weight != '1': addSampleWeight(samples,'DYveto',v_samp,v_weight)

if useDYtt :
    samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToTT_MuEle_M-50',False,'nanoLatino_')
                                    + getSampleFiles(directory,'DYJetsToLL_M-10to50-LO',False,'nanoLatino_'),
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto ,
                         'FilesPerJob' : 5,
                    }
    addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50',ptllDYW_NLO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)
    
else:
    samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToLL_M-50_ext',False,'nanoLatino_')
                                    + getSampleFiles(directory,'DYJetsToLL_M-10to50-LO',False,'nanoLatino_'),
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto ,
                         'FilesPerJob' : 5,
                     }
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext',ptllDYW_NLO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)



############ Top ############

samples['top'] = {    'name'   :   getSampleFiles(directory,'TTTo2L2Nu',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_s-channel_ext1',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_t-channel_antitop',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_t-channel_top',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_tW_antitop_ext1',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_tW_top_ext1',False,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto ,
                     'FilesPerJob' : 1,
                 }

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

############ WW ############

samples['WW'] = {    'name'   :   getSampleFiles(directory,'WWTo2L2Nu',False,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*nllW*(oldmjjGen<100)'+embed_tautauveto ,
                 }

samples['WWewk'] = {   'name'  : getSampleFiles(directory, 'WpWmJJ_EWK',False,'nanoLatino_'),
                       'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto+ '*(Sum$(abs(GenPart_pdgId)==6)==0 && Sum$(GenPart_pdgId==25)==0)' #filter tops and higgs
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
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto ,
                   }

samples['qqWWqq'] = {    'name'   :   getSampleFiles(treeBaseDirHM+'Autumn18_102X_nAODv5_Full2018v5/MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5/','WpWmJJ_QCD_noTop_ext1',True,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*(oldmjjGen>=100)*(GenLHE)'+embed_tautauveto ,
                 }

samples['WW2J'] = {    'name'   :   getSampleFiles(treeBaseDirHM+'Autumn18_102X_nAODv5_Full2018v5/MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5/','WpWmJJ_QCD_noTop_ext1',True,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*(oldmjjGen>=100)*(!GenLHE)'+embed_tautauveto ,
                 }



############ VZ ############

samples['VZ']  = {  'name'   :   getSampleFiles(directory,'ZZTo2L2Nu_ext1',False,'nanoLatino_')
                               + getSampleFiles(directory,'ZZTo2L2Q',False,'nanoLatino_')
                               + getSampleFiles(directory,'ZZTo4L_ext1',False,'nanoLatino_') 
                               + getSampleFiles(directory,'WZTo2L2Q',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto ,
                    'FilesPerJob' : 5,
                 }

############ Vg ############

# TODO: This needs no GenLepMatch. Why?
samples['Vg']  = {  'name'   :   getSampleFiles(directory,'Wg_MADGRAPHMLM',False,'nanoLatino_')
                               + getSampleFiles(directory,'Zg',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC+'*(!(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 ))'+embed_tautauveto,
                    'FilesPerJob': 5,
                  }

addSampleWeight(samples,'Vg','Zg','(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt < 20.) == 0)')


############ VgS ############

samples['VgS']  =  {  'name'   :   getSampleFiles(directory,'Wg_MADGRAPHMLM',False,'nanoLatino_')
                                 + getSampleFiles(directory,'Zg',False,'nanoLatino_')
                                 + getSampleFiles(directory,'WZTo3LNu_mllmin01',False,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto,
                      'FilesPerJob' : 20 ,
                   }
addSampleWeight(samples,'VgS','Wg_MADGRAPHMLM',    '(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples,'VgS','Zg',                '(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22) && (Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt < 20.) == 0)')
addSampleWeight(samples,'VgS','WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1 || Gen_ZGstar_mass < 0)')


############ VVV ############

samples['VVV']  = {  'name'   :   getSampleFiles(directory,'ZZZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WZZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WWZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WWW',False,'nanoLatino_'),
                                #+ getSampleFiles(directory,'WWG',False,'nanoLatino_'), #FIXME: should this be included? or is it already taken into account in the WW sample?
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
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

model_I_MSSM = '(cprime1.0BRnew0.0_I/cprime1.0BRnew0.0)' # For MSSM -> No Ewk singlet interpretation # TODO: Do this differently # 'MSSModel_I'
model_I = model+'_I'
model_name = '_'+model.replace("cprime","c").replace(".","").replace("BRnew","brn")

for mass in massggh:

  if mass == '115': # for nAODv5
    SMxsec = 0.4842
  else:
    SMxsec = HiggsXS.GetHiggsXS4Sample('YR4','13TeV','GluGluHToWWTo2L2Nu_M'+mass)['xs']
  noSMxsec = '(1.0/'+str(SMxsec)+')'

  # Model independent
  samples['GGH_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'GluGluHToWWTo2L2Nu_M'+mass,True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+model ,
                     }

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
                     }

  addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluHToWWTo2L2Nu_M'+mass, '('+model+' + '+model_I+')')

  # Model dependent -> Xsec*BR is applied in later step, so remove "SM"-Xsec*BR 
  samples['MSSMGGH_'+mass]  = {  'name'   :   getSampleFiles(directoryHM,'GluGluHToWWTo2L2Nu_M'+mass,True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+noSMxsec ,
                     }

  samples['MSSMGGHSBI_'+mass]  = {  'name'   :   getSampleFiles(directoryHM,'GluGluHToWWTo2L2Nu_M'+mass,True,'nanoLatino_')
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
                     }

  addSampleWeight(samples, 'MSSMGGHSBI_'+mass, 'GluGluHToWWTo2L2Nu_M'+mass, '(1.0+'+model_I_MSSM+')*'+noSMxsec)

############ HIGS MASS VBF H->WW ############

for mass in massvbf:

  if mass == '115': # for nAODv5
    SMxsec = 0.0388
  else:
    SMxsec = HiggsXS.GetHiggsXS4Sample('YR4','13TeV','VBFHToWWTo2L2Nu_M'+mass)['xs']
  noSMxsec = '(1.0/'+str(SMxsec)+')'

  # Model independent
  samples['QQH_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'VBFHToWWTo2L2Nu_M'+mass,True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+model ,
                     }

  samples['QQHSBI_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'VBFHToWWTo2L2Nu_M'+mass,True,'nanoLatino_')
                                                      + getSampleFiles(treeBaseDirHM+'Autumn18_102X_nAODv5_Full2018v5/MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5/','WpWmJJ_QCD_noTop_ext1',True,'nanoLatino_')
                                                      + getSampleFiles(directory,'VBFHToWWTo2L2NuPowheg_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

  addSampleWeight(samples, 'QQHSBI_'+mass+model_name, 'VBFHToWWTo2L2Nu_M'+mass, '('+model+' + '+model_I+')')
  addSampleWeight(samples, 'QQHSBI_'+mass+model_name, 'WpWmJJ_QCD_noTop_ext1', '(oldmjjGen>100)*(GenLHE)')

  # Model dependent -> Xsec*BR is applied in later step, so remove "SM"-Xsec*BR 
  samples['MSSMQQH_'+mass]  = {  'name'   :   getSampleFiles(directoryHM,'VBFHToWWTo2L2Nu_M'+mass,True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+noSMxsec ,
                     }

  samples['MSSMQQHSBI_'+mass]  = {  'name'   :   getSampleFiles(directoryHM,'VBFHToWWTo2L2Nu_M'+mass,True,'nanoLatino_')
                                                      + getSampleFiles(treeBaseDirHM+'Autumn18_102X_nAODv5_Full2018v5/MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5/','WpWmJJ_QCD_noTop_ext1',True,'nanoLatino_')
                                                      + getSampleFiles(directory,'VBFHToWWTo2L2NuPowheg_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

  addSampleWeight(samples, 'MSSMQQHSBI_'+mass, 'VBFHToWWTo2L2Nu_M'+mass, '(1.0+'+model_I+')*'+noSMxsec)
  addSampleWeight(samples, 'MSSMQQHSBI_'+mass, 'WpWmJJ_QCD_noTop_ext1', '(oldmjjGen>100)*(GenLHE)')


############ ggH H->WW ############
samples['ggH_hww']  = {  'name'   :   getSampleFiles(directory,'GluGluHToWWTo2L2NuPowheg_M125',False,'nanoLatino_'),
                        'weight' : [XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC, {'class': 'Weight2MINLO', 'args': '%s/src/LatinoAnalysis/Gardener/python/data/powheg2minlo/NNLOPS_reweight.root' % os.getenv('CMSSW_BASE')}],
                        'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/weight2MINLO.cc+' % os.getenv('CMSSW_BASE')]
                     }

############ VBF H->WW ############
samples['qqH_hww']  = {  'name'   :   getSampleFiles(directory,'VBFHToWWTo2L2NuPowheg_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

############ ZH H->WW ############
samples['ZH_hww']  = {  'name'   :   getSampleFiles(directory,'HZJ_HToWWTo2L2Nu_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

samples['ggZH_hww']  = {  'name'   :   getSampleFiles(directory,'GluGluZH_HToWWTo2L2Nu_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

############ WH H->WW ############

samples['WH_hww']  = {  'name'   :   getSampleFiles(directory,'HWplusJ_HToWW_M125',False,'nanoLatino_')
                                   + getSampleFiles(directory,'HWminusJ_HToWW_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

############ ttH ############

samples['ttH_hww']  = {  'name'   :   getSampleFiles(directory,'ttHToNonbb_M125',False,'nanoLatino_'),
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

############ bbH ############
#FIXME Missing samples
#samples['bbH_hww']  = {  'name' :   getSampleFiles(directory,'bbHToWWTo2L2Nu_M125_yb2',False,'nanoLatino_') 
#                                  + getSampleFiles(directory,'bbHToWWTo2L2Nu_M125_ybyt',False,'nanoLatino_')
#                                  ,
#                         'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
#                      }

############ H->TauTau ############
splitHtt=True # Better to split up because of better handling of unceratainties
if not splitHtt:

  samples['H_htt'] = {  'name'   :   getSampleFiles(directory,'GluGluHToTauTau_M125',False,'nanoLatino_')
                                   + getSampleFiles(directory,'VBFHToTauTau_M125',False,'nanoLatino_'),
                                   #+ getSampleFiles(directory,'HZJ_HToTauTau_M125',False,'nanoLatino_')
                                   #+ getSampleFiles(directory,'HWplusJ_HToTauTau_M125',False,'nanoLatino_')
                                   #+ getSampleFiles(directory,'HWminusJ_HToTauTau_M125',False,'nanoLatino_'),
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }
else:

  samples['ggH_htt']  = {  'name'   : getSampleFiles(directory,'GluGluHToTauTau_M125',False,'nanoLatino_'),
                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        }

  samples['qqH_htt']  = {  'name'   : getSampleFiles(directory,'VBFHToTauTau_M125',False,'nanoLatino_'),
                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        }

#  samples['ZH_htt']  = {  'name'   : getSampleFiles(directory,'HZJ_HToTauTau_M125',False,'nanoLatino_'),
#                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
#                        }#FIXME Missing samples
#
#  samples['WH_htt']  = {  'name'   :  getSampleFiles(directory,'HWplusJ_HToTauTau_M125',False,'nanoLatino_')
#                                    + getSampleFiles(directory,'HWminusJ_HToTauTau_M125',False,'nanoLatino_'),
#                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
#                        }#FIXME Missing samples
#

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
                         'FilesPerJob' : 15 ,
                      }

for Run in DataRun :
        directory = treeBaseDir+'Run2018_102X_nAODv5_Full2018v5/DATAl1loose2018v5__l2loose__fakeW/'
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
                       'FilesPerJob' : 20,
                  }

for Run in DataRun :
        directory = treeBaseDir+'Run2018_102X_nAODv5_Full2018v5/DATAl1loose2018v5__l2loose__l2tightOR2018v5/'
        for DataSet in DataSets :
                FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
                for iFile in FileTarget:
                        print(iFile)
                        samples['DATA']['name'].append(iFile)
                        samples['DATA']['weights'].append(DataTrig[DataSet])

