# nuisances
# name of samples here must match keys in samples.py    

try:
    mc = [skey for skey in samples if skey != 'DATA' and not skey.startswith('Fake')]
except NameError:
    mc = []

try:
    fitcuts = [cut for cut in cuts if 'SR' in cut or 'CR' in cut]
except NameError:
    fitcuts = []

#### Luminosity

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2017',
    'type': 'lnN',
    'samples': dict((skey, '1.02') for skey in mc if skey not in ['WZ']),
    'cuts' : fitcuts
}

nuisances['lumi_XYFact'] = {
    'name': 'lumi_13TeV_XYFact',
    'type': 'lnN',
    'samples': dict((skey, '1.008') for skey in mc if skey not in ['WZ']),
    'cuts' : fitcuts
}

nuisances['lumi_LScale'] = {
    'name': 'lumi_13TeV_LSCale',
    'type': 'lnN',
    'samples': dict((skey, '1.003') for skey in mc if skey not in ['WZ']),
    'cuts' : fitcuts
}

nuisances['lumi_BBDefl'] = {
    'name': 'lumi_13TeV_BBDefl',
    'type': 'lnN',
    'samples': dict((skey, '1.004') for skey in mc if skey not in ['WZ']),
    'cuts' : fitcuts
}

nuisances['lumi_DynBeta'] = {
    'name': 'lumi_13TeV_DynBeta',
    'type': 'lnN',
    'samples': dict((skey, '1.005') for skey in mc if skey not in ['WZ']),
    'cuts' : fitcuts
}

nuisances['lumi_CurrCalib'] = {
    'name': 'lumi_13TeV_CurrCalib',
    'type': 'lnN',
    'samples': dict((skey, '1.003') for skey in mc if skey not in ['WZ']),
    'cuts' : fitcuts
}

nuisances['lumi_Ghosts'] = {
    'name': 'lumi_13TeV_Ghosts',
    'type': 'lnN',
    'samples': dict((skey, '1.001') for skey in mc if skey not in ['WZ']),
    'cuts' : fitcuts
}

#### Theoretical Systematics

# Scale
from LatinoAnalysis.Tools.HiggsXSection  import *
HiggsXS = HiggsXSection()

#nuisances['QCDscale_VH']  = {
#  'name'  : 'QCDscale_VH',
#  'samples'  : {
#    'WH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
#    'ZH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
#    'WH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
#    'ZH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm')
#  },
#  'type'  : 'lnN',
#  'cuts' : fitcuts
#}

#nuisances['QCDscale_ggZH']  = {
#  'name'  : 'QCDscale_ggZH', 
#  'samples'  : {
#    'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','scale','sm'),                  
#  },
#  'type'  : 'lnN',
#  'cuts' : fitcuts
#}

#nuisances['QCDscale_WWewk'] = {
 #   'name': 'QCDscale_WWewk',
 #   'samples': {
 #       'WWewk': '1.11',
 #   },
 #   'type': 'lnN',
 #   'cuts' : fitcuts
#}


# ggww and interference
#nuisances['QCDscale_ggVV'] = {
#    'name': 'QCDscale_ggVV',
#    'type': 'lnN',
#    'samples': {
#        'ggWW': '1.15',
#    },
#    'cuts' : fitcuts
#}

#nuisances['QCDscale_qqbar_ACCEPT']  = {
#  'name'  : 'QCDscale_qqbar_ACCEPT', 
#  'type'  : 'lnN',
#  'samples'  : {
#    'WH_hww'  : '1.010',
#    'ZH_hww'  : '1.015',
#    'WH_htt'  : '1.010',
#    'ZH_htt'  : '1.015',
#  },
#  'cuts' : fitcuts
#}

#nuisances['QCDscale_gg_ACCEPT']  = {
#  'name'  : 'QCDscale_gg_ACCEPT', 
#  'samples'  : {
#    'ggZH_hww': '1.012',                   
#    'ggWW'    : '1.012'
#  },
#  'type'  : 'lnN',
#  'cuts' : fitcuts
#}

# pdf
#nuisances['pdf_Higgs_gg']  = {
#               'name'  : 'pdf_Higgs_gg', 
#               'samples'  : {
#                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm'), 
#                   },
#               'type'  : 'lnN',
#               'cuts' : fitcuts
#              }

#nuisances['pdf_Higgs_qqbar']  = {
#               'name'  : 'pdf_Higgs_qqbar', 
#               'type'  : 'lnN',
#               'samples'  : {
#                   'WH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
#                   'ZH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
#                   'WH_htt'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
#                   'ZH_htt'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
#                   },
#                'cuts' : fitcuts
#              }

#               'name'  : 'pdf_Higgs_gg_ACCEPT', 
#               'samples'  : {
#                   'ggZH_hww': '1.006', 
#                   },
#               'type'  : 'lnN',
#               'cuts' : fitcuts
#              }

#nuisances['pdf_Higgs_qqbar_ACCEPT']  = {
#               'name'  : 'pdf_Higgs_qqbar_ACCEPT',
#               'type'  : 'lnN',
#               'samples'  : {
#                   'WH_hww'  : '1.003',
#                   'ZH_hww'  : '1.002',
#                   'WH_htt'  : '1.003',
#                   'ZH_htt'  : '1.002',
#                   },
#               'cuts' : fitcuts
#              }


#nuisances['pdf_gg_ACCEPT'] = {
#    'name': 'pdf_gg_ACCEPT',
#    'samples': {
#        'ggWW': '1.006',
#    },
#    'type': 'lnN',
#    'cuts' : fitcuts
#}

#To be updated for v7
#nuisances['WZ3l2jnorm']  = {
#               'name'  : 'CMS_hww_WZ3l2jnorm',
#               'samples'  : {
#                   'WZ'       : '1.00',
#                   },
#               'type'  : 'rateParam',
#               'cuts'  : [
#                   'zh3l_WZ_CR_2j',
#                   'zh3l_WZ_CR_2j_met',
#                   'zh3l_SR_2j',
#                   'zh3l_SR_2j_met',
#                ]
#              }

#nuisances['WZ3l1jnorm']  = {
#               'name'  : 'CMS_hww_WZ3l1jnorm',
#               'samples'  : {
#                   'WZ'       : '1.00',
#                   },
#               'type'  : 'rateParam',
#               'cuts'  : [
#                   'zh3l_WZ_CR_1j',
#                   'zh3l_WZ_CR_1j_met',
#                   'zh3l_SR_1j',
#                   'zh3l_SR_1j_met',
#                ]
#              }

#### Top


#nuisances['electronpt']  = {
#                'name'  : 'CMS_scale_e_2017',
#                'kind'  : 'suffix',
#                'type'  : 'shape',
#                'mapUp' : 'ElepTup',
#                'mapDown' : 'ElepTdo',
#                'samples'  : dict((skey, ['1', '1']) for skey in mc),
#                'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7__ElepTup_suffix', 
#                'folderDown' : treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7__ElepTdo_suffix', 
#                'AsLnN' : '1',
#                'cuts' : fitcuts
#}

###### Muon Efficiency and energy scale

#                'name'  : 'CMS_scale_m_2017',
#                'kind'  : 'suffix',
#                'type'  : 'shape',
#                'mapUp' : 'MupTup',
#                'mapDown' : 'MupTdo',
#                'samples'  : dict((skey, ['1', '1']) for skey in mc),
#                'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7__MupTup_suffix', 
#                'folderDown' : treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7__MupTdo_suffix', 
#                'AsLnN' : '1',
#                'cuts' : fitcuts
#}

####### Jet energy scale

#jes_systs = ['JESAbsolute','JESAbsolute_2017','JESBBEC1','JESBBEC1_2017','JESEC2','JESEC2_2017','JESFlavorQCD','JESHF','JESHF_2017','JESRelativeBal','JESRelativeSample_2017']
#folderup = ""
#folderdo = ""

#for js in jes_systs:
#  if 'Absolute' in js:
#    folderup =  treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7__JESAbsoluteup_suffix' 
#    folderdo = treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7__JESAbsolutedo_suffix' 
#  elif 'BBEC1' in js:
#    folderup = treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7__JESBBEC1up_suffix'
#    folderdo = treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7__JESBBEC1do_suffix'
#  elif 'EC2' in js:
#    folderup = treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7__JESEC2up_suffix'
#    folderdo =  treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7__JESEC2do_suffix'
#  elif 'HF' in js:
#    folderup = treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7__JESHFup_suffix'
#    folderdo = treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7__JESHFdo_suffix'
#  elif 'Relative' in js:
#    folderup = treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7__JESRelativeup_suffix'
#    folderdo = treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7__JESRelativedo_suffix'
#  elif 'FlavorQCD' in js:
#    folderup = treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7__JESFlavorQCDup_suffix'
#    folderdo = treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7__JESFlavorQCDdo_suffix'
#
#  nuisances[js] = {
#                'name': 'CMS_scale_'+js,
#                'kind': 'suffix',
#                'type': 'shape',
#                'mapUp': js+'up',
#                'mapDown': js+'do',
#                'samples': dict((skey, ['1', '1']) for skey in mc),
#                'samples': {'ttV': ['1','1'], 'VVV': ['1','1'], 'ZH_hww': ['1','1'], 'ggZH_hww': ['1','1'], 'WH_hww': ['1','1'], 'ttH_hww': ['1','1'], 'ZH_htt': ['1','1'], 'WH_htt': ['1','1']},
#		'folderUp': folderup,
#	        'folderDown': folderdo,	
#                'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7__JESup_suffix', 
#                'folderDown' : treeBaseDir+'Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7__JESdo_suffix', 
#                'AsLnN': '1',
#                'cuts' : fitcuts
#  }

##### Jet energy resolution
#nuisances['JER'] = {
#    'name' : 'CMS_res_j_2017',
#    'kind': 'suffix',
#    'type': 'shape',
#    'mapUp': 'JERup',
#    'mapDown': 'JERdo',
#    'samples': dict((skey, ['1', '1']) for skey in mc),
#    'folderUp': treeBaseDir+'Summer20UL17_106x_nAODv9_Full2017v9/MCl1loose2017v9__MCCorr2017v9NoJERInHorn__l2tightOR2017v9__JERup_suffix',
#    'folderDown': treeBaseDir+'Summer20UL17_106x_nAODv9_Full2017v9/MCl1loose2017v9__MCCorr2017v9NoJERInHorn__l2tightOR2017v9__JERdo_suffix',
#    'AsLnN': '1'
#}
##### MET energy scale

#nuisances['met']  = {
#                'name'  : 'CMS_scale_met_2017',
#                'kind'  : 'suffix',
#                'type'  : 'shape',
#                'mapUp' : 'METup',
#                'mapDown' : 'METdo',
#                'samples'  : dict((skey, ['1', '1']) for skey in mc),
#                'folderUp'   : treeBaseDir+'Summer20UL17_106x_nAODv9_Full2017v9/MCl1loose2017v9__MCCorr2017v9NoJERInHorn__l2tightOR2017v9__METup_suffix', 
#                'folderDown' : treeBaseDir+'Summer20UL17_106x_nAODv9_Full2017v9/MCl1loose2017v9__MCCorr2017v9NoJERInHorn__l2tightOR2017v9__METdo_suffix', 
#                'AsLnN' : '1',
#                'cuts' : fitcuts
#}

# Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat']  = {
              'type'  : 'auto',
              'maxPoiss'  : '10',
              'includeSignal'  : '1',
              #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
              #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
              'samples' : {},
              'cuts' : fitcuts
             }

for n in nuisances.values():
    n['skipCMS'] = 1
