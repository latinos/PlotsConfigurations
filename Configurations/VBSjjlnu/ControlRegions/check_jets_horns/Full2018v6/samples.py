import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

samples={}

skim=''

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
xrootdPath=''
if    'iihe' in SITE:
  xrootdPath  = 'dcap://maite.iihe.ac.be/'
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/'
elif  'cern' in SITE:
  #xrootdPath='root://eoscms.cern.ch/'
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'

mcProduction = 'Autumn18_102X_nAODv5_Full2018v5'
mcSteps      = 'MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5'

dataReco  = 'Run2018_102X_nAODv5_Full2018v5'
fakeSteps = 'DATAl1loose2018v5__l2loose__fakeW'
dataSteps = 'DATAl1loose2018v5__l2loose__l2tightOR2018v5'

mcDirectory   = os.path.join(treeBaseDir, mcProduction, mcSteps)
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='2'

################################################
############### Lepton WP ######################
################################################

eleWP='mvaFall17V1Iso_WP90'
muWP='cut_Tight_HWWW'

LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP


################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut+'*PrefireWeight'
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
# No btag necessary for DY
#SFweight += '*btagSF'

################################################
############### Ad Hoc #########################
################################################

SFweight += '*nvtx_reweighting'

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
            ['A','Run2018A-Nano25Oct2019-v1'] ,
            ['B','Run2018B-Nano25Oct2019-v1'] ,
            ['C','Run2018C-Nano25Oct2019-v1'] ,
            ['D','Run2018D-Nano25Oct2019_ver2-v1'] ,
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
ptllDYW_NLO = '(0.87*(gen_ptll<10)+(0.379119+0.099744*gen_ptll-0.00487351*gen_ptll**2+9.19509e-05*gen_ptll**3-6.0212e-07*gen_ptll**4)*(gen_ptll>=10 && gen_ptll<45)+(9.12137e-01+1.11957e-04*gen_ptll-3.15325e-06*gen_ptll**2-4.29708e-09*gen_ptll**3+3.35791e-11*gen_ptll**4)*(gen_ptll>=45 && gen_ptll<200) + 1*(gen_ptll>200))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'

samples['DY'] = {
    'name'   :  getSampleFiles(mcDirectory,'DYJetsToLL_M-50',False,'nanoLatino_')
              + getSampleFiles(mcDirectory,'DYJetsToLL_M-10to50-LO',False,'nanoLatino_'),
    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
    'FilesPerJob' : 2,
}
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50',ptllDYW_NLO)

############ Top ############

samples['top'] = {    'name'   :   getSampleFiles(mcDirectory,'TTTo2L2Nu',False,'nanoLatino_') 
                                 + getSampleFiles(mcDirectory,'ST_s-channel',False,'nanoLatino_') 
                                 + getSampleFiles(mcDirectory,'ST_t-channel_antitop',False,'nanoLatino_') 
                                 + getSampleFiles(mcDirectory,'ST_t-channel_top',False,'nanoLatino_') 
                                 + getSampleFiles(mcDirectory,'ST_tW_antitop',False,'nanoLatino_') 
                                 + getSampleFiles(mcDirectory,'ST_tW_top',False,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 1,
                 }

Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )'
addSampleWeight(samples,'top','TTTo2L2Nu',Top_pTrw)

############ WW ############

samples['WW'] = {
    'name'   : getSampleFiles(mcDirectory,'WWTo2L2Nu',False,'nanoLatino_') ,
    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*nllW' ,
    'FilesPerJob': 3
}

samples['ggWW']  = {  
    'name'   :   getSampleFiles(mcDirectory,'GluGluToWWToENEN',False,'nanoLatino_')
               + getSampleFiles(mcDirectory,'GluGluToWWToENMN',False,'nanoLatino_') 
               + getSampleFiles(mcDirectory,'GluGluToWWToENTN',False,'nanoLatino_')
               + getSampleFiles(mcDirectory,'GluGluToWWToMNEN',False,'nanoLatino_')
               + getSampleFiles(mcDirectory,'GluGluToWWToMNMN',False,'nanoLatino_')
               + getSampleFiles(mcDirectory,'GluGluToWWToMNTN',False,'nanoLatino_')
               + getSampleFiles(mcDirectory,'GluGluToWWToTNEN',False,'nanoLatino_')
               + getSampleFiles(mcDirectory,'GluGluToWWToTNMN',False,'nanoLatino_')
               + getSampleFiles(mcDirectory,'GluGluToWWToTNTN',False,'nanoLatino_'),
    # k-factor 1.4 already taken into account in XSWeight
    # FIXME check if this is true
    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC  + '*1.53/1.4', # updating k-factor ,
    'FilesPerJob': 4
}


############ Vg ############

samples['Vg']  = {
    'name'   :  getSampleFiles(mcDirectory,'Wg_MADGRAPHMLM',False,'nanoLatino_')
              + getSampleFiles(mcDirectory,'ZGToLLG',False,'nanoLatino_'),
    'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC + '* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
    'FilesPerJob': 5,
}

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'Zg')

samples['Vg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch + '*(Gen_ZGstar_mass <= 0)',
    'FilesPerJob': 4
}
addSampleWeight(samples, 'Vg', 'Zg', '(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt < 20.) == 0)*0.448')

######## VgS ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'Zg') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')

samples['VgS'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
    'FilesPerJob': 4,
    'subsamples': {
      'L': 'gstarLow',
      'H': 'gstarHigh'
    }
}
addSampleWeight(samples, 'VgS', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples, 'VgS', 'Zg', '(Gen_ZGstar_mass > 0)*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt < 20.) == 0)*0.448')
addSampleWeight(samples, 'VgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')

############ VZ ############

files = nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Q') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo4L_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo2L2Q')

samples['VZ'] = {
    'name': files,
    'weight': mcCommonWeight + '*1.11',
    'FilesPerJob': 4
}

########## VVV #########

files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWW')
#+ nanoGetSampleFiles(mcDirectory, 'WWG'), #should this be included? or is it already taken into account in the WW sample?

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

###########################################
#############   SIGNALS  ##################
###########################################

signals = []

# #### ggH -> WW

# samples['ggH_hww'] = {
#     'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2NuPowheg_M125'),
#     'weight': [mcCommonWeight, {'class': 'Weight2MINLO', 'args': '%s/src/LatinoAnalysis/Gardener/python/data/powheg2minlo/NNLOPS_reweight.root' % os.getenv('CMSSW_BASE')}],
#     'FilesPerJob': 1,
#     'linesToAdd': ['.L %s/Differential/weight2MINLO.cc+' % configurations]
# }

# signals.append('ggH_hww')

# ############ VBF H->WW ############
# samples['qqH_hww'] = {
#     'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2NuPowheg_M125'),
#     'weight': mcCommonWeight,
#     'FilesPerJob': 4
# }

# signals.append('qqH_hww')

# ############ ZH H->WW ############

# samples['ZH_hww'] = {
#     'name':   nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125'),
#     'weight': mcCommonWeight,
#     'FilesPerJob': 4
# }

# signals.append('ZH_hww')

# samples['ggZH_hww'] = {
#     'name':   nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWWTo2L2Nu_M125'),
#     'weight': mcCommonWeight,
#     'FilesPerJob': 4
# }

# signals.append('ggZH_hww')

# ############ WH H->WW ############

# samples['WH_hww'] = {
#     'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
#     'weight': mcCommonWeight,
#     'FilesPerJob': 4
# }

# signals.append('WH_hww')

# ############ ttH ############

# samples['ttH_hww'] = {
#     'name':   nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125'),
#     'weight': mcCommonWeight,
#     'FilesPerJob': 1
# }

# signals.append('ttH_hww')

# ############ H->TauTau ############

# samples['ggH_htt'] = {
#     'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125'),
#     'weight': mcCommonWeight,
#     'FilesPerJob': 20
# }

# #signals.append('ggH_htt')

# samples['qqH_htt'] = {
#     'name': nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125'),
#     'weight': mcCommonWeight,
#     'FilesPerJob': 12
# }

#signals.append('qqH_htt')
#
#samples['ZH_htt'] = {
#    'name': nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125'),
#    'weight': mcCommonWeight,
#    'FilesPerJob': 4
#}
#
#signals.append('ZH_htt')
#
#samples['WH_htt'] = {
#    'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
#    'weight': mcCommonWeight,
#    'FilesPerJob': 4
#}
#
#signals.append('WH_htt')

###########################################
################## FAKE ###################
###########################################

# samples['Fake'] = {
#   'name': [],
#   'weight': 'METFilter_DATA*fakeW',
#   'weights': [],
#   'isData': ['all'],
#   'FilesPerJob': 80
# }

# for _, sd in DataRun:
#   for pd in DataSets:
#     files = nanoGetSampleFiles(fakeDirectory, pd + '_' + sd)
#     samples['Fake']['name'].extend(files)
#     samples['Fake']['weights'].extend([DataTrig[pd]] * len(files))

# samples['Fake']['subsamples'] = {
#   'em': 'abs(Lepton_pdgId[0]) == 11',
#   'me': 'abs(Lepton_pdgId[0]) == 13'
# }

###########################################
################## DATA ###################
###########################################

samples['DATA'] = {
  'name'    : [],
  'weight'  : 'METFilter_DATA*LepWPCut',
  'weights' : [],
  'isData'  : ['all'],
  'FilesPerJob': 120
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))
