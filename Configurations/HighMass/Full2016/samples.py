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

directory = treeBaseDir+'Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/'
#TODO: Signal from nAODv5
directoryHM = treeBaseDirHM+'Summer16_102X_nAODv4_Full2016v4/MCl1loose2016__MCCorr2016__l2loose__l2tightOR2016__HighMass__hadd/'

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='2'
#Nlep='3'
#Nlep='4'

################################################
############### Lepton WP ######################
################################################

eleWP='mva_90p_Iso2016'
muWP='cut_Tight80x'

LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP


################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut
GenLepMatch   = 'PromptGenLepMatch'+Nlep+'l'


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
            ['B','Run2016B-Nano14Dec2018_ver2-v1'] ,
            ['C','Run2016C-Nano14Dec2018-v1'] ,
            ['D','Run2016D-Nano14Dec2018-v1'] ,
            ['E','Run2016E-Nano14Dec2018-v1'] ,
            ['F','Run2016F-Nano14Dec2018-v1'] ,
            ['G','Run2016G-Nano14Dec2018-v1'] ,
            ['H','Run2016H-Nano14Dec2018-v1'] ,
          ]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']

DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
            'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
            'DoubleEG'       : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && Trigger_dblEl' ,
            'SingleElectron' : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && !Trigger_dblEl && Trigger_sngEl' ,
           }


###########################################
#############  BACKGROUNDS  ###############
###########################################

############ DY ############

ptllDYW_NLO = '(0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140)'
ptllDYW_LO = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'

useEmbeddedDY = False
useDYtt = True

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
          directoryEmb = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Embedding2016_102X_nAODv5_Full2016v5/DATAl1loose2016v5__l2loose__l2tightOR2016v5__Embedding2016__hadd/'
          FileTarget = getSampleFiles(directoryEmb,'DYToTT_MuEle_Embedded_Run2016'+Run[0],True,'nanoLatino_')
          for iFile in FileTarget:
                  samples['DYemb']['name'].append(iFile)
                  samples['DYemb']['weights'].append('Trigger_ElMu')

  # Vetoed MC: Needed for uncertainty
  samples['DYveto']  = {   'name': getSampleFiles(directory,'TTTo2L2Nu',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_tW_antitop',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_tW_top',False,'nanoLatino_') 

                                 + getSampleFiles(directory,'WWTo2L2Nu',False,'nanoLatino_') 

                                 + getSampleFiles(directory,'WpWmJJ_EWK',False,'nanoLatino_') 

                                 + getSampleFiles(directory,'GluGluWWTo2L2Nu_MCFM',False,'nanoLatino_') 

                                 + getSampleFiles(directory,'Zg',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'WZTo3LNu_mllmin01',False,'nanoLatino_') 

                                 + getSampleFiles(directory,'ZZTo2L2Nu',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ZZTo2L2Q',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ZZTo4L',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'WZTo2L2Q',False,'nanoLatino_') ,

                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+'(1-embed_tautauveto)',
                         'FilesPerJob' : 1, # There's some error about not finding sample-specific variables like "nllW" when mixing different samples into a single job; so split them all up instead
                      }

  veto_dict = {'TTTo2L2Nu'     : '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )' ,
               'ST_tW_antitop' : '1' ,
               'ST_tW_top'     : '1' ,

               'WWTo2L2Nu' : 'nllW' ,

               'WpWmJJ_EWK' : '(Sum$(abs(GenPart_pdgId)==6)==0 && Sum$(GenPart_pdgId==25)==0)',

               'GluGluWWTo2L2Nu_MCFM' : '1' ,

               'Zg'                : '((!(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )) || (Gen_ZGstar_mass >0))' ,
               'WZTo3LNu_mllmin01' : '(Gen_ZGstar_mass>=0.1 || Gen_ZGstar_mass<0)' ,

               'ZZTo2L2Nu' : '1' ,
               'ZZTo2L2Q'  : '1' ,
               'ZZTo4L'    : '1' ,
               'WZTo2L2Q'  : '1'
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
    samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToLL_M-50_ext2',False,'nanoLatino_')
                                    + getSampleFiles(directory,'DYJetsToLL_M-10to50-LO',False,'nanoLatino_'),
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto ,
                         'FilesPerJob' : 5,
                     }
    addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext',ptllDYW_NLO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)



############ Top ############

samples['top'] = {    'name'   :   getSampleFiles(directory,'TTTo2L2Nu',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_s-channel',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_t-channel_antitop',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_t-channel_top',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_tW_antitop',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_tW_top',False,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto ,
                     'FilesPerJob' : 1,
                 }

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

############ WW ############

samples['WW'] = {    'name'   :   getSampleFiles(directory,'WWTo2L2Nu',False,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*nllWOTF*(oldmjjGen<100)'+embed_tautauveto ,
                 }# TODO: nllWOTF = temp

samples['WWewk'] = {   'name'  : getSampleFiles(directory, 'WpWmJJ_EWK',False,'nanoLatino_'),
                       'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto+ '*(Sum$(abs(GenPart_pdgId)==6)==0 && Sum$(GenPart_pdgId==25)==0)' #filter tops and higgs
                   }

samples['ggWW']  = {  'name'   :   getSampleFiles(directory,'GluGluWWTo2L2Nu_MCFM',False,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+embed_tautauveto ,
                      'isData': ['0'], 
                   }

samples['qqWWqq'] = {    'name'   :   getSampleFiles(directory,'WpWmJJ_QCD_noTop',False,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*(oldmjjGen>=100)*(GenLHE)'+embed_tautauveto ,
                 }

samples['WW2J'] = {    'name'   :   getSampleFiles(directory,'WpWmJJ_QCD_noTop',False,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*(oldmjjGen>=100)*(!GenLHE)'+embed_tautauveto ,
                 }



############ VZ ############

samples['VZ']  = {  'name'   :   getSampleFiles(directory,'ZZTo2L2Nu',False,'nanoLatino_')
                               + getSampleFiles(directory,'ZZTo2L2Q',False,'nanoLatino_')
                               + getSampleFiles(directory,'ZZTo4L',False,'nanoLatino_') 
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

  # Special names in 2016 for mass >= 300
  jhugen = ''
  if int(mass) >= 300: jhugen = '_JHUGen698'

  # Model independent
  samples['GGH_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'GluGluHToWWTo2L2Nu'+jhugen+'_M'+mass,True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+model ,
                     }

  samples['GGHSBI_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'GluGluHToWWTo2L2Nu'+jhugen+'_M'+mass,True,'nanoLatino_')
                                                      + getSampleFiles(directory,'GluGluWWTo2L2Nu_MCFM',False,'nanoLatino_')
                                                      + getSampleFiles(directory,'GluGluHToWWTo2L2NuPowheg_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

  addSampleWeight(samples, 'GGHSBI_'+mass+model_name, 'GluGluHToWWTo2L2Nu'+jhugen+'_M'+mass, '('+model+' + '+model_I+')')

  # Model dependent -> Xsec*BR is applied in later step, so remove "SM"-Xsec*BR 
  samples['MSSMGGH_'+mass]  = {  'name'   :   getSampleFiles(directoryHM,'GluGluHToWWTo2L2Nu'+jhugen+'_M'+mass,True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+noSMxsec ,
                     }

  samples['MSSMGGHSBI_'+mass]  = {  'name'   :   getSampleFiles(directoryHM,'GluGluHToWWTo2L2Nu'+jhugen+'_M'+mass,True,'nanoLatino_')
                                                      + getSampleFiles(directory,'GluGluWWTo2L2Nu_MCFM',False,'nanoLatino_')
                                                      + getSampleFiles(directory,'GluGluHToWWTo2L2NuPowheg_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

  addSampleWeight(samples, 'MSSMGGHSBI_'+mass, 'GluGluHToWWTo2L2Nu'+jhugen+'_M'+mass, '(1.0+'+model_I_MSSM+')*'+noSMxsec)

############ HIGS MASS VBF H->WW ############

for mass in massvbf:

  if mass == '115': # for nAODv5
    SMxsec = 0.0388
  else:
    SMxsec = HiggsXS.GetHiggsXS4Sample('YR4','13TeV','VBFHToWWTo2L2Nu_M'+mass)['xs']
  noSMxsec = '(1.0/'+str(SMxsec)+')'

  # Special names in 2016 for mass >= 300
  jhugen = ''
  if int(mass) >= 300: jhugen = '_JHUGen698'
  if int(mass) >= 4000: jhugen = '_JHUGen714'

  # Model independent
  samples['QQH_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'VBFHToWWTo2L2Nu'+jhugen+'_M'+mass,True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+model ,
                     }

  samples['QQHSBI_'+mass+model_name]  = {  'name'   :   getSampleFiles(directoryHM,'VBFHToWWTo2L2Nu'+jhugen+'_M'+mass,True,'nanoLatino_')
                                                      + getSampleFiles(directory,'WpWmJJ_QCD_noTop',False,'nanoLatino_')
                                                      + getSampleFiles(directory,'VBFHToWWTo2L2NuPowheg_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

  addSampleWeight(samples, 'QQHSBI_'+mass+model_name, 'VBFHToWWTo2L2Nu'+jhugen+'_M'+mass, '('+model+' + '+model_I+')')
  addSampleWeight(samples, 'QQHSBI_'+mass+model_name, 'WpWmJJ_QCD_noTop', '(oldmjjGen>100)*(GenLHE)')

  # Model dependent -> Xsec*BR is applied in later step, so remove "SM"-Xsec*BR 
  samples['MSSMQQH_'+mass]  = {  'name'   :   getSampleFiles(directoryHM,'VBFHToWWTo2L2Nu'+jhugen+'_M'+mass,True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*'+noSMxsec ,
                     }

  samples['MSSMQQHSBI_'+mass]  = {  'name'   :   getSampleFiles(directoryHM,'VBFHToWWTo2L2Nu'+jhugen+'_M'+mass,True,'nanoLatino_')
                                                      + getSampleFiles(directory,'WpWmJJ_QCD_noTop',False,'nanoLatino_')
                                                      + getSampleFiles(directory,'VBFHToWWTo2L2NuPowheg_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

  addSampleWeight(samples, 'MSSMQQHSBI_'+mass, 'VBFHToWWTo2L2Nu'+jhugen+'_M'+mass, '(1.0+'+model_I+')*'+noSMxsec)
  addSampleWeight(samples, 'MSSMQQHSBI_'+mass, 'WpWmJJ_QCD_noTop', '(oldmjjGen>100)*(GenLHE)')


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
samples['ZH_hww']  = {  'name'   :   getSampleFiles(directory,'HZJ_HToWW_M125_PrivateNano',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

samples['ggZH_hww']  = {  'name'   :   getSampleFiles(directory,'ggZH_HToWW_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

############ WH H->WW ############

samples['WH_hww']  = {  'name'   :   getSampleFiles(directory,'HWplusJ_HToWW_M125',False,'nanoLatino_')
                                   + getSampleFiles(directory,'HWminusJ_HToWW_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

############ ttH ############

# TODO
#samples['ttH_hww']  = {  'name'   :   getSampleFiles(directory,'ttHToNonbb_M125',False,'nanoLatino_'),
#                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
#                     }

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
        directory = treeBaseDir+'Run2016_102X_nAODv4_Full2016v5/DATAl1loose2016v5__l2loose__fakeW/'
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
        directory = treeBaseDir+'Run2016_102X_nAODv4_Full2016v5/DATAl1loose2016v5__l2loose__l2tightOR2016v5/'
        for DataSet in DataSets :
                FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
                for iFile in FileTarget:
                        print(iFile)
                        samples['DATA']['name'].append(iFile)
                        samples['DATA']['weights'].append(DataTrig[DataSet])

