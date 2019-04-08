import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

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
  #xrootdPath='root://eoscms.cern.ch/'
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'

directory = treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017'

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='2'
#Nlep='3'
#Nlep='4'

################################################
############### Lepton WP ######################
################################################

eleWP='mvaFall17Iso_WP90'
muWP='cut_Tight_HWWW'

LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP


################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut+'*PrefireWeight'
GenLepMatch   = 'GenLepMatch'+Nlep+'l'


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

bAlgo = 'DeepB'
btagSF = 'btagWeight'
bWP = '0.1522'

bVeto = '( Alt$(CleanJet_pt[0],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[0]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[1],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[1]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[2],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[2]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[3],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[3]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[4],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[4]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[5],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[5]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[6],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[6]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[7],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[7]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[8],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[8]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[9],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[9]],0)<'+bWP+' )\
      && ( Alt$(CleanJet_pt[10],0)<20 || Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[10]],0)<'+bWP+' )\
      '

bOne = '(( Alt$(CleanJet_pt[0],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[0]],0)>'+bWP+' )\
      || ( Alt$(CleanJet_pt[1],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[1]],0)>'+bWP+' )\
      || ( Alt$(CleanJet_pt[2],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[2]],0)>'+bWP+' )\
      || ( Alt$(CleanJet_pt[3],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[3]],0)>'+bWP+' )\
      || ( Alt$(CleanJet_pt[4],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[4]],0)>'+bWP+' )\
      || ( Alt$(CleanJet_pt[5],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[5]],0)>'+bWP+' )\
      || ( Alt$(CleanJet_pt[6],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[6]],0)>'+bWP+' )\
      || ( Alt$(CleanJet_pt[7],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[7]],0)>'+bWP+' )\
      || ( Alt$(CleanJet_pt[8],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[8]],0)>'+bWP+' )\
      || ( Alt$(CleanJet_pt[9],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[9]],0)>'+bWP+' )\
      || ( Alt$(CleanJet_pt[10],0)>20 && Alt$(Jet_btag'+bAlgo+'[CleanJet_jetIdx[10]],0)>'+bWP+' ))\
      '

SFweight += '*'+btagSF

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
  ['B','Run2017B-31Mar2018-v1'] ,
 # ['C','Run2017C-31Mar2018-v1'] ,
  #['D','Run2017D-31Mar2018-v1'] ,
  #['E','Run2017E-31Mar2018-v1'] ,
  #['F','Run2017F-31Mar2018-v1']
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
ptllDYW_NLO = '((0.623108 + 0.0722934*gen_ptll - 0.00364918*gen_ptll*gen_ptll + 6.97227e-05*gen_ptll*gen_ptll*gen_ptll - 4.52903e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll<45)*(gen_ptll>0) + 1*(gen_ptll>=45))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'

useDYtt = False

if useDYtt :
    samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToTT_MuEle_M-50',False,'nanoLatino_')
                                    + getSampleFiles(directory,'DYJetsToLL_M-10to50-LO',False,'nanoLatino_'),
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                         'FilesPerJob' : 5,
                    }
    addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50',ptllDYW_NLO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)
    
    ## Remove OF from inclusive sample (is it needed?)
    #cutSF = '(abs(Lepton_pdgId[0]*Lepton_pdgId[1]) == 11*11)||(Lepton_pdgId[0]*Lepton_pdgId[1]) == 13*13)'
    #addSampleWeight(samples,'DY','DYJetsToLL_M-50',cutSF)

else:
    samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToLL_M-50',False,'nanoLatino_')
                                    + getSampleFiles(directory,'DYJetsToLL_M-10to50-LO',False,'nanoLatino_'),
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                         'FilesPerJob' : 5,
                     }
    addSampleWeight(samples,'DY','DYJetsToLL_M-50',ptllDYW_NLO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)



############ Top ############

Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )'

samples['top'] = {    'name'   :   getSampleFiles(directory,'TTTo2L2Nu',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_s-channel',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_t-channel_antitop',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_t-channel_top',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_tW_antitop',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_tW_top',False,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 1,
                 }

addSampleWeight(samples,'top','TTTo2L2Nu',Top_pTrw)

############ WW ############

#FIXME Add nllW weight to WW
samples['WW'] = {    'name'   :   getSampleFiles(directory,'WWTo2L2Nu',False,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*nllW' ,
                 }

#FIXME Check if k-factor is already taken into account in XSWeight
samples['ggWW']  = {  'name'   :   getSampleFiles(directory,'GluGluToWWToENEN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToENMN',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'GluGluToWWToENTN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToMNEN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToMNMN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToMNTN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToTNEN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToTNMN',False,'nanoLatino_')
                                 + getSampleFiles(directory,'GluGluToWWToTNTN',False,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                   }


############ Vg ############

#FIXME Add Zg when available
samples['Vg']  = {  'name'   :   getSampleFiles(directory,'Wg_MADGRAPHMLM',False,'nanoLatino_'),
                               #+ getSampleFiles(directory,'Zg',False,'nanoLatino_'),
                    #'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC + '* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                     'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC+'*(Gen_ZGstar_mass<4)',
                  }


############ VgS ############

#FIXME Use WZTo3LNu_mllmin01 sample (gstar mass > 100 MeV) when available. This one has gstar mass > 4 GeV
#FIXME Add normalization k-factor
samples['WZgS']  = {  'name'   :   getSampleFiles(directory,'WZTo3LNu',False,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*(Gen_ZGstar_mass>4)' ,
                   }


############ VZ ############

#FIXME Add normalization k-factor
samples['VZ']  = {  'name'   :   getSampleFiles(directory,'ZZTo2L2Nu',False,'nanoLatino_')
                               + getSampleFiles(directory,'ZZTo2L2Q',False,'nanoLatino_')
                               + getSampleFiles(directory,'ZZTo4L',False,'nanoLatino_')
                               + getSampleFiles(directory,'WZTo2L2Q',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                    'FilesPerJob' : 5,
                 }


############ VVV ############

samples['VVV']  = {  'name'   :   getSampleFiles(directory,'ZZZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WZZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WWZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WWW',False,'nanoLatino_'),
                                #+ getSampleFiles(directory,'WWG',False,'nanoLatino_'), #should this be included? or is it already taken into account in the WW sample?
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                  }



##########################################
################ SIGNALS #################
##########################################

############ ggH H->WW ############
#FIXME Add reweighting to MiNLO NNLOPS or use NNLOPS sample when available
samples['ggH_hww']  = {  'name'   :   getSampleFiles(directory,'GluGluHToWWTo2L2NuPowheg_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

############ VBF H->WW ############
samples['qqH_hww']  = {  'name'   :   getSampleFiles(directory,'VBFHToWWTo2L2NuPowheg_M125',False,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

############ ZH H->WW ############

samples['ZH_hww']  = {  'name'   :   getSampleFiles(directory,'HZJ_HToWW_M120',False,'nanoLatino_'), #FIXME replace with 125 GeV sample when available
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

samples['ggZH_hww']  = {  'name'   :   getSampleFiles(directory,'GluGluZH_HToWW_M125',False,'nanoLatino_'),
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


############ H->TauTau ############

splitHtt=False
if not splitHtt:

  samples['H_htt'] = {  'name'   :   getSampleFiles(directory,'GluGluHToTauTau_M125',False,'nanoLatino_')
                                   + getSampleFiles(directory,'VBFHToTauTau_M125',False,'nanoLatino_')
                                   + getSampleFiles(directory,'HZJ_HToTauTau_M125',False,'nanoLatino_')
                                   + getSampleFiles(directory,'HWplusJ_HToTauTau_M125',False,'nanoLatino_')
                                   + getSampleFiles(directory,'HWminusJ_HToTauTau_M125',False,'nanoLatino_'),
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }
else:
  
  samples['ggH_htt']  = {  'name'   : getSampleFiles(directory,'GluGluHToTauTau_M125',False,'nanoLatino_'),
                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        } 

  samples['qqH_htt']  = {  'name'   : getSampleFiles(directory,'VBFHToTauTau_M125',False,'nanoLatino_'),
                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        }

  samples['ZH_htt']  = {  'name'   : getSampleFiles(directory,'HZJ_HToTauTau_M125',False,'nanoLatino_'),
                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        }

  samples['WH_htt']  = {  'name'   :  getSampleFiles(directory,'HWplusJ_HToTauTau_M125',False,'nanoLatino_')
                                    + getSampleFiles(directory,'HWminusJ_HToTauTau_M125',False,'nanoLatino_'),
                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                        }


###########################################
################## FAKE ###################
###########################################

samples['Fake']  = {   'name': [ ] ,
                       'weight' : METFilter_DATA+'*'+fakeW,              #   weight/cut 
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 20 ,
                       }

for Run in DataRun :
  directory = treeBaseDir+'Run2017_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__fakeW/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
    for iFile in FileTarget:
      samples['Fake']['name'].append(iFile)
      samples['Fake']['weights'].append(DataTrig[DataSet])



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
        directory = treeBaseDir+'Run2017_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017/'
        for DataSet in DataSets :
                FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
                for iFile in FileTarget:
#                        print(iFile)
                        samples['DATA']['name'].append(iFile)
                        samples['DATA']['weights'].append(DataTrig[DataSet])

