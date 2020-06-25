# Originally from DY but comared to ggH/Full2016/sample.py

import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

samples={}

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
elif 'knu' in SITE :
  treeBaseDir = '/pnfs/knu.ac.kr/data/cms/store/user/salee/Full2016_Apr17/'
  copiedTreeBaseDir = '/pnfs/knu.ac.kr/data/cms/store/user/spak/LatinoTree/Full2016_Apr17/'
elif 'sdfarm' in SITE : # KISTI T3
  xrootdPath  = 'root://cms-xrdr.sdfarm.kr:1094/'
  treeBaseDir = '/xrootd/store/group/hww/Full2016_Apr17/'



#directory = treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__redoWGammaStarV2/'
#directory = treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCWgStar201Xv5'
directory = treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCWgStar201Xv5__MCWgStarCorr2017v5'
#directory = treeBaseDir+'Fall2017_nAOD_v1_Full2017v2LP19/MCWgStar2017__MCWgStarCorr2017LP19'


################################################
############ NUMBER OF LEPTONS #################
################################################

#Nlep='2'
Nlep='3'
#Nlep='4'




################################################
############### Lepton WP ######################
################################################

#... Electron:
eleWP='mvaFall17V2Iso_WP90'

#... Muon:

muWP='cut_Tight_HWWW'
#... Build formula
LepWPCut = '1'
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP



################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'puWeight*TriggerEffWeight_3l*EMTFbug_veto*Lepton_RecoSF[0]*Lepton_RecoSF[1]*Lepton_RecoSF[2]'
#SFweight      = 'SFweight'+Nlep+'l
GenLepMatch   = 'GenLepMatch'+Nlep+'l'


if Nlep == '2' or Nlep == '3' :
  fakeW = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP
else:
  fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l'

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################

#DataRun = [
#            ['B','Run2017B-31Mar2018-v1'] ,
#                                                ['C','Run2017C-31Mar2018-v1'] ,
#                                                ['D','Run2017D-31Mar2018-v1'] ,
#                                                ['E','Run2017E-31Mar2018-v1'] ,
#                                                ['F','Run2017F-31Mar2018-v1']
#
#          ]

DataRun = [
            ['B','Run2017B-Nano14Dec2018-v1'] ,
            ['C','Run2017C-Nano14Dec2018-v1'] ,
            ['D','Run2017D-Nano14Dec2018-v1'] ,
            ['E','Run2017E-Nano14Dec2018-v1'] ,
            ['F','Run2017F-Nano14Dec2018-v1']

          ]


DataSets = ['SingleElectron']

DataTrig = {
  'SingleElectron' : 'Trigger_sngEl',
#  'DoubleMuon'     : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && Trigger_dblMu',
#  'DoubleEG'       : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && !Trigger_dblMu && Trigger_dblEl'
}

###########################################
#############  BACKGROUNDS  ###############
###########################################


###### DY #######

#useDYHT = False       # be carefull DY HT is LO 
useDYtt = False    
#mixDYttandHT = False  # be carefull DY HT is LO (HT better stat for HT>450 GEV)

### These weights were evaluated on ICHEP16 MC -> Update ?

ptllDYW_NLO = '((0.623108 + 0.0722934*gen_ptll - 0.00364918*gen_ptll*gen_ptll + 6.97227e-05*gen_ptll*gen_ptll*gen_ptll - 4.52903e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll<45)*(gen_ptll>0) + 1*(gen_ptll>=45))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'

#samples['DY'] = {    'name'   : getSampleFiles(directory,'DYJetsToLL_M-5to50-LO',False,'nanoLatino_'),
#                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
#                     'FilesPerJob' : 5 ,
#                       }

#addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50',ptllDYW_NLO)
#addSampleWeight(samples,'DY','DYJetsToLL_M-5to50-LO',ptllDYW_LO)


#samples['DY'] = {    'name'   :  getSampleFiles(directory,'DYJetsToLL_M-50-LO_ext1', False,'nanoLatino_')
#                               + getSampleFiles(directory,'DYJetsToLL_M-50', False,'nanoLatino_')
#                               +  getSampleFiles(directory,'DYJetsToLL_M-50-LO', False,'nanoLatino_'),
#                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
#                     'FilesPerJob' : 1 ,
#                 }

#cutSF = '(abs(Lepton_pdgId[0]*Lepton_pdgId[1]) == 11*11)||(abs(Lepton_pdgId[0]*Lepton_pdgId[1]) == 13*13)'

#addSampleWeight(samples,'DY','DYJetsToLL_M-50',ptllDYW_NLO)
#addSampleWeight(samples,'DY','DYJetsToLL_M-50-LO_ext1',ptllDYW_LO)
#addSampleWeight(samples,'DY','DYJetsToLL_M-50',ptllDYW_NLO)
#addSampleWeight(samples,'DY','DYJetsToLL_M-50-LO',ptllDYW_LO)
#if useDYtt :

#  samples['DY'] = {    'name'   : getSampleFiles(directory,'DYJetsToLL_M-10to50-LO',False,'nanoLatino_'),
#                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
#                       'FilesPerJob' : 5 ,
#                       }

#  addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50',ptllDYW_NLO)
#  addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)

#else:

samples['DY'] = {    'name'   :  getSampleFiles(directory,'DYJetsToLL_M-50-LO_ext1',False,'nanoLatino_')
                               + getSampleFiles(directory,'DYJetsToLL_M-5to50-LO',False,'nanoLatino_'),
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)' ,
                     'FilesPerJob' : 5 ,
                       }

#cutSF = '(abs(Lepton_pdgId[0]*Lepton_pdgId[1]) == 11*11)||(abs(Lepton_pdgId[0]*Lepton_pdgId[1]) == 13*13)'
addSampleWeight(samples,'DY','DYJetsToLL_M-50-LO_ext1',ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50-LO',ptllDYW_LO)

samples['top'] = {    'name'   :   getSampleFiles(directory,'TTTo2L2Nu',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ST_tW_antitop',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ST_tW_top',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ST_s-channel',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_t-channel_antitop',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_t-channel_top',False,'nanoLatino_'),
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 2 ,
}
Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )'
#addSampleWeight(samples,'top','TTTo2L2Nu',Top_pTrw)




############ Vg ############

samples['Vg']  = {  'name'   :   getSampleFiles(directory,'Wg_MADGRAPHMLM',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC,
                    'FilesPerJob': 5,
                  }
addSampleWeight(samples,'Vg','Wg_MADGRAPHMLM',  'Gen_ZGstar_mass >0 && Gen_ZGstar_MomId == 22')
#addSampleWeight(samples,'Vg','Wg_AMCNLOFXFX',  'Gen_ZGstar_mass >0 && Gen_ZGstar_MomId == 22')


############ VgS ############
samples['WZgS_L']  = { 'name':  getSampleFiles(directory,'WZTo3LNu_mllmin01', False,'nanoLatino_')
                              + getSampleFiles(directory,'Wg_MADGRAPHMLM', False,'nanoLatino_'),
##                              + getSampleFiles(directory,'Wg_AMCNLOFXFX', False),
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*1.43'  ,  
                       'FilesPerJob' : 1 ,
                  }
addSampleWeight(samples,'WZgS_L','WZTo3LNu_mllmin01',  '(Gen_ZGstar_mass >0.1 && Gen_ZGstar_mass < 4)')
addSampleWeight(samples,'WZgS_L','Wg_MADGRAPHMLM',  '(Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 0.1)')
##addSampleWeight(samples,'WZgS_L','Wg_AMCNLOFXFX',  'Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 0.1')

## 1.30 Gen_level scaling
samples['WZgS_H']  = { 'name':  getSampleFiles(directory,'WZTo3LNu_mllmin01', False,'nanoLatino_') ,
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*1.43'  ,  
                      'FilesPerJob' : 1 ,
}

addSampleWeight(samples,'WZgS_H','WZTo3LNu_mllmin01','(Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4)')
#samples['VgS']  =  {  'name'   :   getSampleFiles(directory,'WZTo3LNu_mllmin01',False,'nanoLatino_')
#                                 + getSampleFiles(directory,'Wg_MADGRAPHMLM',False,'nanoLatino_'),
#                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC  ,
#                      'FilesPerJob' : 20 ,
#                   }
#addSampleWeight(samples,'VgS','Wg_MADGRAPHMLM',    '(Gen_ZGstar_mass > 0  && Gen_ZGstar_mass < 0.1)')
#addSampleWeight(samples,'VgS','WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1) ')
##addSampleWeight(samples,'VgS','WZTo3LNu_mllmin01',    '(Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4)')


samples['VZ'] = {    'name'   : getSampleFiles(directory,'ZZTo2L2Nu',False,'nanoLatino_')
                     + getSampleFiles(directory,'WZTo2L2Q',False,'nanoLatino_')
                     + getSampleFiles(directory,'ZZTo4L',False,'nanoLatino_')
                     + getSampleFiles(directory,'ZZTo2L2Q',False,'nanoLatino_'),
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*1.11'  ,
                     'FilesPerJob' : 4 ,
}



samples['VVV'] = {    'name'   : getSampleFiles(directory,'WWW',False,'nanoLatino_') 
                      + getSampleFiles(directory,'WWZ',False,'nanoLatino_') 
                      + getSampleFiles(directory,'WZZ',False,'nanoLatino_') 
                      + getSampleFiles(directory,'ZZZ',False,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                      'FilesPerJob' : 5 ,
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
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC , 
}


###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,     
                       'weight' : 'EMTFbug_veto'+'*'+METFilter_DATA+'*'+LepWPCut,
                       'weights' : [ ],
                       'isData': ['all'],                            
                       'FilesPerJob' : 4 ,
                  }

for Run in DataRun :
#  if DATaMetCor is not '':
    directory = treeBaseDir+'Run2017_102X_nAODv4_Full2017v5/DATAWgStar2017v5/'
#  else:
#    directory = treeBaseDir+'Apr2017_Run2016'+Run[0]+'_RemAOD/WgStarsel__hadd__EpTCorr__TrigMakerData__cleanTauData__formulasDATA/'
    for DataSet in DataSets :
     FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
     for iFile in FileTarget:
       print(iFile)
       samples['DATA']['name'].append(iFile)
       samples['DATA']['weights'].append(DataTrig[DataSet]) 

