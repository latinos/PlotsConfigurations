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

#v4
directoryMC     = os.path.join(treeBaseDir,"Summer16_102X_nAODv4_Full2016v4/MCl1loose2016__MCCorr2016__l2loose__l2tightOR2016")

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

wz2jSF = '1.09'

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################


samples['WZ']  = {    'name'   : getSampleFilesNano(directoryMC,'WZTo3LNu_mllmin01'),
                      #'name'   : getSampleFilesNano(directoryMC,'WZTo3LNu') #These all exist -- check which is better stats?
                      #          +getSampleFilesNano(directoryMC,'WZTo3LNu_ext1'),
                      'weight' : wz2jSF+'*'+XSweight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
                      'suppressNegativeNuisances' :['all'],
                      'FilesPerJob' : 5,
                  }

