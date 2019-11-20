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

directoryMC     = os.path.join(treeBaseDir,"Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/")
directoryDATA   = os.path.join(treeBaseDir,"Run2017_102X_nAODv4_Full2017v5/DATAl1loose2017v5__l2loose__l2tightOR2017v5/")
directoryFAKE   = os.path.join(treeBaseDir,"Run2017_102X_nAODv4_Full2017v5/DATAl1loose2017v5__l2loose__fakeW/")

################################################
############### WP #############################
################################################

#2017
eleWP = 'mvaFall17V1Iso_WP90'
muWP = 'cut_Tight_HWWW'

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

wz1jSF = '0.95'
wz2jSF = '1.55'
zg1jSF = '0.44'
zg2jSF = '0.94'
#TightEl
#wz1jSF = '1.07'
#wz2jSF = '1.62'
#zg1jSF = '0.57'
#zg2jSF = '1.18'

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2017B-Nano14Dec2018-v1'],
    ['C','Run2017C-Nano14Dec2018-v1'],
    ['D','Run2017D-Nano14Dec2018-v1'],
    ['E','Run2017E-Nano14Dec2018-v1'],
    ['F','Run2017F-Nano14Dec2018-v1']
]

DataSets = ['MuonEG','SingleMuon','SingleElectron','DoubleMuon', 'DoubleEG']

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
                      'FilesPerJob' : 2,
                  }

ZZbaseW = getBaseWnAOD(directoryMC,'Fall2017_102X_nAODv4_Full2017v5',['ZZTo4L','ZZTo4L_ext1'])
addSampleWeight(samples,'ZZ','ZZTo4L',     ZZbaseW+'/baseW')
addSampleWeight(samples,'ZZ','ZZTo4L_ext1',ZZbaseW+'/baseW')

samples['WZ']  = {    'name'   : getSampleFilesNano(directoryMC,'WZTo3LNu_mllmin01'),
                      'weight' : '(( Alt$(CleanJet_pt[1],0) < 30 )*'+wz1jSF+'+( Alt$(CleanJet_pt[1],0) >= 30 )*'+wz2jSF+')*'+XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC ,
                      'suppressNegativeNuisances' :['all'],
                      'FilesPerJob' : 2,
                  }

samples['VVV'] = {    'name': getSampleFilesNano(directoryMC,'WZZ')
                             +getSampleFilesNano(directoryMC,'ZZZ')
                             +getSampleFilesNano(directoryMC,'WWZ')
                             +getSampleFilesNano(directoryMC,'WWW'),
                      'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                      'suppressNegativeNuisances' :['all'],
                      'FilesPerJob' : 5,
                  }

samples['Zg']  = {    'name':  getSampleFilesNano(directoryMC,'ZGToLLG'),
                      'weight' : '(( Alt$(CleanJet_pt[1],0) < 30 )*'+zg1jSF+'+( Alt$(CleanJet_pt[1],0) >= 30 )*'+zg2jSF+')*'+XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC ,
                      'suppressNegativeNuisances' :['all'],
                      'FilesPerJob' : 5,
                  }

samples['ttZ']  = {    'name': getSampleFilesNano(directoryMC,'TTZjets')
                              +getSampleFilesNano(directoryMC,'TTZjets_ext1'),
                       'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch2l+'*'+METFilter_MC,
                       'suppressNegativeNuisances' :['all'],
                       'FilesPerJob' : 5,
                   }

ttZbaseW = getBaseWnAOD(directoryMC,'Fall2017_102X_nAODv4_Full2017v5',['TTZjets','TTZjets_ext1'])
addSampleWeight(samples,'ttZ','TTZjets',     ttZbaseW+'/baseW')
addSampleWeight(samples,'ttZ','TTZjets_ext1',ttZbaseW+'/baseW')

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

if os.path.exists('HTXS_categories.py') :
  handle = open('HTXS_categories.py','r')
  exec(handle)
  handle.close()

samples['WH_hww']  = { 'name': getSampleFilesNano(directoryMC,'HWminusJ_HToWW_M125_PrivateNano')
                              +getSampleFilesNano(directoryMC,'HWplusJ_HToWW_M125_PrivateNano'),
                       'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                       'suppressNegativeNuisances' :['all'],
                       'FilesPerJob' : 5,
}

samples['WH_hww']['subsamples'] = {}
for cat,cut in categorization_wh.iteritems():
    samples['WH_hww']['subsamples'][cat] = cut

samples['ZH_hww']  = {  'name': getSampleFilesNano(directoryMC,'HZJ_HToWW_M125'),
                        'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                        'suppressNegativeNuisances' :['all'],
                        'FilesPerJob' : 5,
                    }

samples['ggZH_hww'] = {  'name': getSampleFilesNano(directoryMC,'ggZH_HToWW_M125_PrivateNano'),
                         'weight' : XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                         'suppressNegativeNuisances' :['all'],
                         'FilesPerJob' : 5,
                     }

#samples['ZH_hww']['subsamples'] = {}
samples['ggZH_hww']['subsamples'] = {}
for cat,cut in categorization_zh.iteritems():
    #samples['ZH_hww']['subsamples'][cat] = cut
    samples['ggZH_hww']['subsamples'][cat] = cut

###########################################
################## FAKE ###################
###########################################

samples['Fake']  = {   'name': [] ,
                       'weight' : fakeW+'*'+METFilter_DATA,
                       'weights' : [],
                       'isData': ['all'],
                       'FilesPerJob' : 20 ,
                   }

###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [] ,
                       'weight' : METFilter_DATA+'*'+LepWPCut,
                       'weights' : [],
                       'isData': ['all'],
                       'FilesPerJob' : 20 ,
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
                
samples['Fake']['subsamples'] = {
    'em': 'abs(ZH3l_pdgid_l) == 11',
    'me': 'abs(ZH3l_pdgid_l) == 13'
}