# Originally from DY but comared to ggH/Full2016/sample.py

import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

# samples

samples={}

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



directory = treeBaseDir+'Summer16_102X_nAODv4_Full2016v5/MCWgStar201Xv5__MCWgStarCorr2016v5'


################################################
############ NUMBER OF LEPTONS #################
################################################

#Nlep='2'
Nlep='3'
#Nlep='4'

################################################
############ BASIC MC WEIGHTS ##################
#bAlgo='csvv2ivf'
#bAlgo='DeepCSVB'

#SFweight += '*btagSF'

#bWP='L'
#bWP='M'
#bWP='T'

# ... bPog SF and b veto

#bSF='1.'
#bVeto='1'
#if   bAlgo == 'cmvav2' :
# bSF='bPogSF_CMVA'+bWP
# bVeto='bveto_CMVA'+bWP
#elif bAlgo == 'csvv2ivf' :
# bSF='bPogSF_CSV'+bWP
# bVeto='bveto_CSV'+bWP
#elif bAlgo == 'DeepCSVB' :
# bSF='bPogSF_deepCSV'+bWP
# bVeto='bveto_deepCSV'+bWP

#SFweight += '*'+bSF
# Fix for 2-leptons for which this was kept in global formula !
#if Nlep == '2' : SFweight += '/bPogSF_CMVAL'


################################################
############### Lepton WP ######################
################################################

#... Electron:
eleWP='mva_90p_Iso2016'

#... Muon:

muWP='cut_Tight80x'

#... Build formula
LepWPCut = '1'
#LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
#LepWPweight     = 'LepSF2l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
#LepWPweight     = '1'

#SFweight += '*'+LepWPweight+'*'+LepWPCut


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

DataRun = [
    ['B','Run2016B-Nano14Dec2018_ver2-v1'],
    ['C','Run2016C-Nano14Dec2018-v1'],
    ['D','Run2016D-Nano14Dec2018-v1'],
    ['E','Run2016E-Nano14Dec2018-v1'],
    ['F','Run2016F-Nano14Dec2018-v1'],
    ['G','Run2016G-Nano14Dec2018-v1'],
    ['H','Run2016H-Nano14Dec2018-v1']
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

ptllDYW_NLO = '(0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140)'
ptllDYW_LO  = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'


samples['DY'] = {    'name'   :  getSampleFiles(directory,'DYJetsToLL_M-50_ext2',False,'nanoLatino_')
                               + getSampleFiles(directory,'DYJetsToLL_M-10to50',False,'nanoLatino_'),
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)' ,
                     'FilesPerJob' : 5 ,
                       }

addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2',ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50',ptllDYW_LO)

samples['top'] = {    'name'   :   getSampleFiles(directory,'TTTo2L2Nu',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ST_tW_antitop',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ST_tW_top',False,'nanoLatino_')
                                 + getSampleFiles(directory,'ST_s-channel',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_t-channel_antitop',False,'nanoLatino_') 
                                 + getSampleFiles(directory,'ST_t-channel_top',False,'nanoLatino_'),
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 2 ,
}
Top_pTrw = '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(0.0615 - 0.0005 * topGenPt) * TMath::Exp(0.0615 - 0.0005 * antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)'

#addSampleWeight(samples,'top','TTTo2L2Nu',Top_pTrw)



############ Vg ############

samples['Vg']  = {  'name'   :   getSampleFiles(directory,'Wg_MADGRAPHMLM',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC,
                    'FilesPerJob': 5,
                  }
addSampleWeight(samples,'Vg','Wg_MADGRAPHMLM',  '(Gen_ZGstar_mass >0 && Gen_ZGstar_MomId == 22)')


############ VgS ############
samples['WZgS_L']  = { 'name':  getSampleFiles(directory,'WZTo3LNu_mllmin01', False,'nanoLatino_'),
##                              + getSampleFiles(directory,'Wg_AMCNLOFXFX', False),
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + '*1.42'  ,  
                       'FilesPerJob' : 1 ,
                  }
addSampleWeight(samples,'WZgS_L','WZTo3LNu_mllmin01',  '(Gen_ZGstar_mass >0.1 && Gen_ZGstar_mass < 4)')




samples['WZgS_L_zero']  = { 'name': getSampleFiles(directory,'Wg_MADGRAPHMLM', False,'nanoLatino_'),
##                              + getSampleFiles(directory,'Wg_AMCNLOFXFX', False),
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC   ,
                       'FilesPerJob' : 1 ,
                  }
addSampleWeight(samples,'WZgS_L_zero','Wg_MADGRAPHMLM',  '(Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 0.1)')




samples['WZgS_H']  = { 'name':  getSampleFiles(directory,'WZTo3LNu_mllmin01', False,'nanoLatino_') ,
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*1.42'  ,  
                      'FilesPerJob' : 1 ,
}

addSampleWeight(samples,'WZgS_H','WZTo3LNu_mllmin01',    '(Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4)')


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
'''
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
'''
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
    directory = treeBaseDir+'Run2016_102X_nAODv4_Full2016v5/DATAWgStar2016v5'
#  else:
#    directory = treeBaseDir+'Apr2017_Run2016'+Run[0]+'_RemAOD/WgStarsel__hadd__EpTCorr__TrigMakerData__cleanTauData__formulasDATA/'
    for DataSet in DataSets :
     FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
     for iFile in FileTarget:
       print(iFile)
       samples['DATA']['name'].append(iFile)
       samples['DATA']['weights'].append(DataTrig[DataSet]) 

