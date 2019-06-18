#!/usr/bin/env python

import os

global getSampleFiles
from LatinoAnalysis.Tools.commonTools import getSampleFiles

def getSampleFilesNano(inputDir,Sample,absPath=False,rootFilePrefix='nanoLatino_',FromPostProc=True):
    """ Use "nanoLatino_" instead of "latino_" as the sample file prefix """
    return [ s.lstrip('#') for s in getSampleFiles(inputDir, Sample, absPath, rootFilePrefix, FromPostProc) ]

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

# samples={}

################################################
################# SKIMS ########################
################################################

skim='__vh3lSel'

if skim =='__vh3lSel' :
    skimFake='__vh3lFakeSel'
else:
    skimFake=skim

##############################################
###### Tree Directory according to site ######
##############################################

treeBaseDir = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/"

directoryMC     = os.path.join(treeBaseDir,"Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017")
directoryDATA   = os.path.join(treeBaseDir,"Run2017_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017")
directoryFAKE   = os.path.join(treeBaseDir,"Run2017_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__fakeW")
# directoryFAKE   = os.path.join(treeBaseDir,"Run2017_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__fakeSel")



################################################
############ basic mc weights ##################
################################################

replaceNLep = lambda s, nLep : s.format(nLep)

XSWeight    = 'XSWeight'
SFweight    = replaceNLep('SFweight{0}l',3)
SFweight    += '*'+'PrefireWeight'

GenLepMatch   = 'GenLepMatch{0}l'
GenLepMatch2l = replaceNLep(GenLepMatch,2)
GenLepMatch3l = replaceNLep(GenLepMatch,3)

################################################
################# POG  WP ######################
################################################

#... b jet

btagSF = 'btagWeight'

#... lepton:

eleWP='mvaFall17Iso_WP90'
muWP='cut_Tight_HWWW'
LepWPCut        = 'LepCut3l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF3l__ele_'+eleWP+'__mu_'+muWP

#... And the fakeW
fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l'

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
            ['C','Run2017C-31Mar2018-v1'] ,
            ['D','Run2017D-31Mar2018-v1'] ,
            ['E','Run2017E-31Mar2018-v1'] ,
            ['F','Run2017F-31Mar2018-v1'] ,
          ]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']


DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu &&  Trigger_dblMu' ,
            'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu &&  Trigger_sngMu' ,
            'DoubleEG'       : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu &&  Trigger_dblEl' ,
            'SingleElectron' : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && !Trigger_dblEl &&  Trigger_sngEl' ,
           }

samples['DATA']  = {   'name': [] ,
                       'weight' : 'EMTFbug_veto'+'*'+METFilter_DATA+'*'+LepWPCut,
                      # 'weight' : METFilter_DATA+'*'+LepWPCut,
                       'weights' : [],
                       'isData': ['all'],
                       'FilesPerJob' : 10 ,
                   }

samples['Fake']  = {   'name': [] ,
                       'weight' : fakeW+'*'+'EMTFbug_veto'+'*'+METFilter_DATA,
                       # 'weight' : fakeW+'*'+'EMTFbug_veto'+'*'+METFilter_DATA+'*((abs(Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2])==11*11*11) || (abs(Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2])==11*11*13) || (fabs(Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2])==11*13*13) || (fabs(Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2])==13*13*13))',
                       # 'weight' : fakeW+'*'+METFilter_DATA,
                       'weights' : [],
                       'isData': ['all'],
                       'FilesPerJob' : 10 ,
                   }

for Run in DataRun :
    directoryDATARun = directoryDATA.format(Run[0])
    directoryFAKERun = directoryFAKE.format(Run[0])
    for DataSet in DataSets :
        FileTargetDATA = getSampleFilesNano(directoryDATARun,DataSet+'_'+Run[1],absPath=True)
        FileTargetFAKE = getSampleFilesNano(directoryFAKERun,DataSet+'_'+Run[1],absPath=True)
        for iFile in FileTargetDATA:
            samples['DATA']['name']   .append(iFile)
            samples['DATA']['weights'].append(DataTrig[DataSet])
            # addSampleWeightNano(samples,'DATA',DataSet+'_'+Run[1],DataTrig[DataSet])
        for iFile in FileTargetFAKE:
            samples['Fake']['name']   .append(iFile)
            samples['Fake']['weights'].append(DataTrig[DataSet])
            # addSampleWeightNano(samples,'Fake',DataSet+'_'+Run[1],DataTrig[DataSet])

###########################################
#############  BACKGROUNDS  ###############
###########################################

# Missing nllW branch
samples['WW'] = {
    'name'   : getSampleFilesNano(directoryMC,'WWTo2L2Nu'),
    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch2l+'*'+METFilter_MC, #+ '*nllW' ,
    'suppressNegativeNuisances' :['all'],
   'FilesPerJob' : 5,
}

# wzSF = '1.108'
samples['WZ'] = {
    'name': getSampleFilesNano(directoryMC,'WZTo3LNu'),
    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob' : 5,

}

samples['ZZ'] = {
    'name': getSampleFilesNano(directoryMC,'ZZTo4L'),
    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC ,
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob' : 5,
}

# samples['ggZZ_em'] = {
#     'name': getSampleFilesNano(directoryMC,'ggZZ2e2m'),
#     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC ,
#     'suppressNegativeNuisances' :['all'],
# }

# samples['ggZZ_ee'] = {
#     'name': getSampleFilesNano(directoryMC,'ggZZ4e'),
#     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC ,
#     'suppressNegativeNuisances' :['all'],
# }

# samples['ggZZ_mm'] = {
#     'name': getSampleFilesNano(directoryMC,'ggZZ4m'),
#     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC ,
#     'suppressNegativeNuisances' :['all'],
# }

samples['VVV'] = {
    'name': getSampleFilesNano(directoryMC,'WWW')
           +getSampleFilesNano(directoryMC,'WWZ')
           +getSampleFilesNano(directoryMC,'WZZ')
           +getSampleFilesNano(directoryMC,'ZZZ'),
    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob' : 5,
}


samples['Vg'] = {
    'name': getSampleFilesNano(directoryMC,'Wg_MADGRAPHMLM')##
           +getSampleFilesNano(directoryMC,'Zg'),
    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
    # 'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC+'*(!(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 ))' ,
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob' : 5,
}

####################################
############# Signal ###############
####################################

# Not ready in nanoLatino
samples['WH_htt']  = {
    'name': getSampleFilesNano(directoryMC,'HWminusJ_HToTauTau_M125')
           +getSampleFilesNano(directoryMC,'HWplusJ_HToTauTau_M125')
           +getSampleFilesNano(directoryMC,'HZJ_HToTauTau_M125'),
    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob' : 5,
}

# samples['ZH_hww']  = {
    # 'name': getSampleFilesNano(directoryMC,'ggZH_HToWW_M125')
           # +getSampleFilesNano(directoryMC,'HZJ_HToWW_M125'),
    # 'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
    # 'suppressNegativeNuisances' :['all'],
# }

samples['WH_hww']  = {
    'name': getSampleFilesNano(directoryMC,'HWminusJ_HToWW_M125')
           +getSampleFilesNano(directoryMC,'HWplusJ_HToWW_M125'),
    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob' : 5,
}

