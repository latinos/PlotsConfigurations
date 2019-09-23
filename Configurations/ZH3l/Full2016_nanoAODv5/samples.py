import os

global getSampleFiles
from LatinoAnalysis.Tools.commonTools import getSampleFiles

def getSampleFilesNano(inputDir,Sample,absPath=False):
    return getSampleFiles(inputDir,Sample,absPath,'nanoLatino_')

# Can use in place of addSampleWeight when reweighting samples
def addSampleWeightNano(sampleDic,key,Sample,Weight):
    """ Modified from LatinoAnalysis/Tools/python/commonTools.py """
    if not 'weights' in sampleDic[key] :
      sampleDic[key]['weights'] = []
    if len(sampleDic[key]['weights']) == 0 :
      for iEntry in range(len(sampleDic[key]['name'])) : sampleDic[key]['weights'].append('(1.)')

    ### Now add the actual weight
    for iEntry in range(len(sampleDic[key]['name'])):
      name = sampleDic[key]['name'][iEntry].replace('nanoLatino_','').replace('.root','').split('__part')[0]
      if '/' in name : name = os.path.basename(name)
      if name == Sample:
        sampleDic[key]['weights'][iEntry] += '*(' + Weight + ')'

##############################################
###### Tree Directory according to site ######
##############################################

treeBaseDir = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/"

directoryMC     = os.path.join(treeBaseDir,"Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/")
directoryDATA   = os.path.join(treeBaseDir,"Run2016_102X_nAODv4_Full2016v5/DATAl1loose2016v5__l2loose__l2tightOR2016v5/")
directoryFAKE   = os.path.join(treeBaseDir,"Run2016_102X_nAODv4_Full2016v5/DATAl1loose2016v5__l2loose__fakeW/")

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

GenLepMatch2l = 'GenLepMatch2l'
GenLepMatch3l = 'GenLepMatch3l'

wz1jSF = '1.16'
wz2jSF = '1.09'
zgSF = '1.34'

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
    'MuonEG'         : ' Trigger_ElMu' ,
    'SingleMuon'     : '!Trigger_ElMu && Trigger_sngMu' ,
    'SingleElectron' : '!Trigger_ElMu && !Trigger_sngMu && Trigger_sngEl',
    'DoubleMuon'     : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && Trigger_dblMu',
    'DoubleEG'       : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && !Trigger_dblMu && Trigger_dblEl'
}

###########################################
#############  BACKGROUNDS  ###############
###########################################


samples['WW']  = {    'name'   : getSampleFilesNano(directoryMC,'WWTo2L2Nu'),
                      'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch2l+'*'+METFilter_MC+'*nllW',
                      'suppressNegativeNuisances' :['all'],
                      'FilesPerJob' : 5,
                  }


samples['ZZ']  = {    'name': getSampleFilesNano(directoryMC,'ZZTo4L'),
                      'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                      'suppressNegativeNuisances' :['all'],
                      'FilesPerJob' : 5,
                  }

samples['WZ']  = {    'name'   : getSampleFilesNano(directoryMC,'WZTo3LNu_mllmin01'),
                      #'name'   : getSampleFilesNano(directoryMC,'WZTo3LNu') #These all exist -- check which is better stats?
                      #          +getSampleFilesNano(directoryMC,'WZTo3LNu_ext1'),
                      'weight' : '(( Alt$(CleanJet_pt[1],0) < 30 )*'+wz1jSF+'+( Alt$(CleanJet_pt[1],0) >= 30 )*'+wz2jSF+')*'+XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC ,
                      'suppressNegativeNuisances' :['all'],
                      'FilesPerJob' : 5,
                  }

samples['VVV'] = {    'name': getSampleFilesNano(directoryMC,'WZZ')
                             +getSampleFilesNano(directoryMC,'ZZZ')
                             +getSampleFilesNano(directoryMC,'WWZ')
                             +getSampleFilesNano(directoryMC,'WWW'),
                      'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                      'suppressNegativeNuisances' :['all'],
                      'FilesPerJob' : 5,
                  }

samples['Vg']  = {    'name':  getSampleFilesNano(directoryMC,'Zg')
                             #+getSampleFilesNano(directoryMC,'WgStarLNuEE') #These exist, but maybe MG sample is better?
                             #+getSampleFilesNano(directoryMC,'WgStarLNuMuMu'),
                              +getSampleFilesNano(directoryMC,'Wg_MADGRAPHMLM'),
                      'weight' : zgSF+'*'+XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC , #Might need to drop GenLepMatch3l? WH3l uses, ggH does not
                      'suppressNegativeNuisances' :['all'],
                      'FilesPerJob' : 5,
                  }

samples['ttZ']  = {    'name': getSampleFilesNano(directoryMC,'TTZjets'),
                       'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch2l+'*'+METFilter_MC,
                       'suppressNegativeNuisances' :['all'],
                       'FilesPerJob' : 5,
                   }

####################################
############# Signal ###############
####################################

#These samples all exist, but might not be complete?
samples['WH_htt']  = {  'name': getSampleFilesNano(directoryMC,'HWminusJ_HToTauTau_M125')
                               +getSampleFilesNano(directoryMC,'HWplusJ_HToTauTau_M125')
                               +getSampleFilesNano(directoryMC,'HZJ_HToTauTau_M125'),
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
                        'FilesPerJob' : 5,
                    }

samples['ggZH_hww'] = {  'name': getSampleFilesNano(directoryMC,'ggZH_HToWW_M125'),
                         'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                         'suppressNegativeNuisances' :['all'],
                         'FilesPerJob' : 5,
                     }

###########################################
################## FAKE ###################
###########################################

samples['Fake']  = {   'name': [] ,
                       'weight' : fakeW+'*EMTFbug_veto*'+METFilter_DATA, #TODO maybe drop EMTFbug_veto? WH3l uses, ggH does not
                       'weights' : [],
                       'isData': ['all'],
                       'FilesPerJob' : 10 ,
                   }

###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [] ,
                       'weight' : 'EMTFbug_veto*'+METFilter_DATA+'*'+LepWPCut,  #TODO maybe drop EMTFbug_veto? WH3l uses, ggH does not
                       'weights' : [],
                       'isData': ['all'],
                       'FilesPerJob' : 10 ,
                   }

for Run in DataRun :
    directoryDATARun = directoryDATA.format(Run[0])
    directoryFAKERun = directoryFAKE.format(Run[0])
    for DataSet in DataSets :
        FileTargetDATA = getSampleFilesNano(directoryDATARun,DataSet+'_'+Run[1],True)
        FileTargetFAKE = getSampleFilesNano(directoryFAKERun,DataSet+'_'+Run[1],True)
        for iFile in FileTargetDATA:
            samples['DATA']['name']   .append(iFile)
            samples['DATA']['weights'].append(DataTrig[DataSet])
        for iFile in FileTargetFAKE:
            samples['Fake']['name']   .append(iFile)
            samples['Fake']['weights'].append(DataTrig[DataSet])
                
