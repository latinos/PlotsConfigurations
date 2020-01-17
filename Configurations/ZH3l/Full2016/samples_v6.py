import os

global getSampleFiles
from LatinoAnalysis.Tools.commonTools import getSampleFiles, addSampleWeight, getBaseWnAOD

def getSampleFilesNano(inputDir,Sample,absPath=False):
    return getSampleFiles(inputDir,Sample,absPath,'nanoLatino_')

##############################################
###### Tree Directory according to site ######
##############################################

treeBaseDir = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/"

directoryMC     = os.path.join(treeBaseDir,"Summer16_102X_nAODv5_Full2016v6/MCl1loose2016v6__MCCorr2016v6__l2loose__l2tightOR2016v6/")
directoryDATA   = os.path.join(treeBaseDir,"Run2016_102X_nAODv5_Full2016v6/DATAl1loose2016v6__l2loose__l2tightOR2016v6/")
directoryFAKE   = os.path.join(treeBaseDir,"Run2016_102X_nAODv5_Full2016v6/DATAl1loose2016v6__l2loose__fakeW/")

################################################
############### WP #############################
################################################

#2016 
eleWP='mva_90p_Iso2016'
muWP='cut_Tight80x'

LepWPCut        = 'LepCut3l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF3l__ele_'+eleWP+'__mu_'+muWP

#... And the fakeW
fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l'

################################################
############ basic mc weights ##################
################################################

XSweight  = 'XSWeight'
SFweight  = 'SFweight3l*'+LepWPweight+'*'+LepWPCut+'*PrefireWeight*btagSF'

GenLepMatch3l = 'GenLepMatch3l'

#wz1jSF = '1.18'
#wz2jSF = '1.38'
#zg1jSF = '1.42'
#zg2jSF = '2.64'
wz1jSF = '1.20'
wz2jSF = '1.33'
zg1jSF = '1.27'
zg2jSF = '2.76'

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
    'MuonEG'         : ' Trigger_ElMu' ,
    'SingleMuon'     : '!Trigger_ElMu && Trigger_sngMu' ,
    'SingleElectron' : '!Trigger_ElMu && !Trigger_sngMu && Trigger_sngEl',
    'DoubleMuon'     : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && Trigger_dblMu',
    'DoubleEG'       : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && !Trigger_dblMu && Trigger_dblEl'
}

###########################################
#############  BACKGROUNDS  ###############
###########################################

samples['ZZ']  = {    'name': getSampleFilesNano(directoryMC,'ZZTo4L')
                             +getSampleFilesNano(directoryMC,'ZZTo4L_ext1'),
                      'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                      'suppressNegativeNuisances' :['all'],
                      'FilesPerJob' : 3,
                  }

ZZbaseW = getBaseWnAOD(directoryMC,'Summer16_102X_nAODv5_Full2016v6',['ZZTo4L','ZZTo4L_ext1'])
addSampleWeight(samples,'ZZ','ZZTo4L',     ZZbaseW+'/baseW')
addSampleWeight(samples,'ZZ','ZZTo4L_ext1',ZZbaseW+'/baseW')

samples['WZ']  = {    'name'   : getSampleFilesNano(directoryMC,'WZTo3LNu')
                                +getSampleFilesNano(directoryMC,'WZTo3LNu_ext1'),
                      'weight' : '(( Alt$(CleanJet_pt[1],0) < 30 )*'+wz1jSF+'+( Alt$(CleanJet_pt[1],0) >= 30 )*'+wz2jSF+')*'+XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC ,
                      'suppressNegativeNuisances' :['all'],
                      'FilesPerJob' : 1,
                  }

WZbaseW = getBaseWnAOD(directoryMC,'Summer16_102X_nAODv5_Full2016v6',['WZTo3LNu','WZTo3LNu_ext1'])
addSampleWeight(samples,'WZ','WZTo3LNu',     WZbaseW+'/baseW')
addSampleWeight(samples,'WZ','WZTo3LNu_ext1',WZbaseW+'/baseW')

samples['VVV'] = {    'name': getSampleFilesNano(directoryMC,'WZZ')
                             +getSampleFilesNano(directoryMC,'ZZZ')
                             +getSampleFilesNano(directoryMC,'WWZ')
                             +getSampleFilesNano(directoryMC,'WWW'),
                      'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                      'suppressNegativeNuisances' :['all'],
                      'FilesPerJob' : 5,
                  }

samples['Zg']  = {    'name':  getSampleFilesNano(directoryMC,'Zg'),
                      'weight' : '(( Alt$(CleanJet_pt[1],0) < 30 )*'+zg1jSF+'+( Alt$(CleanJet_pt[1],0) >= 30 )*'+zg2jSF+')*'+XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC ,
                      'suppressNegativeNuisances' :['all'],
                      'FilesPerJob' : 3,
                  }

samples['ttZ']  = {    'name': getSampleFilesNano(directoryMC,'TTZjets'),
                       'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                       'suppressNegativeNuisances' :['all'],
                       'FilesPerJob' : 3,
                   }

####################################
############# Signal ###############
####################################

samples['WH_htt']  = {  'name': getSampleFilesNano(directoryMC,'HWminusJ_HToTauTau_M125')
                               +getSampleFilesNano(directoryMC,'HWplusJ_HToTauTau_M125'),
                        'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                        'suppressNegativeNuisances' :['all'],
                        'FilesPerJob' : 5,
                    }

samples['WH_hww']  = { 'name': getSampleFilesNano(directoryMC,'HWminusJ_HToWW_M125')
                              +getSampleFilesNano(directoryMC,'HWplusJ_HToWW_M125'),
                       'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                       'suppressNegativeNuisances' :['all'],
                       'FilesPerJob' : 5,
}

samples['ZH_hww']  = {  'name': getSampleFilesNano(directoryMC,'HZJ_HToWW_M125'),
                        'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                        'suppressNegativeNuisances' :['all'],
                        'FilesPerJob' : 3,
                    }

samples['ggZH_hww'] = {  'name': getSampleFilesNano(directoryMC,'ggZH_HToWW_M125'),
                         'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                         'suppressNegativeNuisances' :['all'],
                         'FilesPerJob' : 3,
                     }

samples['ZH_htt'] = {  'name': getSampleFilesNano(directoryMC,'HZJ_HToTauTau_M125'),
                         'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                         'suppressNegativeNuisances' :['all'],
                         'FilesPerJob' : 5,
                     }

###########################################
################## FAKE ###################
###########################################

samples['Fake']  = {   'name': [] ,
                       'weight' : fakeW+'*EMTFbug_veto*'+METFilter_DATA,
                       'weights' : [],
                       'isData': ['all'],
                       'FilesPerJob' : 30 ,
                   }

###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [] ,
                       'weight' : 'EMTFbug_veto*'+METFilter_DATA+'*'+LepWPCut,
                       'weights' : [],
                       'isData': ['all'],
                       'FilesPerJob' : 30 ,
                   }

for Run in DataRun :
    directoryDATARun = directoryDATA.format(Run[0])
    directoryFAKERun = directoryFAKE.format(Run[0])
    for DataSet in DataSets :
        tmpname = Run[1].replace('v1','v2') if ('Run2016E' in Run[1] and DataSet is 'MuonEG') else Run[1]
        FileTargetDATA = getSampleFilesNano(directoryDATARun,DataSet+'_'+tmpname,True)
        FileTargetFAKE = getSampleFilesNano(directoryFAKERun,DataSet+'_'+tmpname,True)
        for iFile in FileTargetDATA:
            samples['DATA']['name']   .append(iFile)
            samples['DATA']['weights'].append(DataTrig[DataSet])
        for iFile in FileTargetFAKE:
            samples['Fake']['name']   .append(iFile)
            samples['Fake']['weights'].append(DataTrig[DataSet])
                
samples['Fake']['subsamples'] = {
    'em': 'abs(ZH3l_pdgid_l) == 11',
    'me': 'abs(ZH3l_pdgid_l) == 13'
}
