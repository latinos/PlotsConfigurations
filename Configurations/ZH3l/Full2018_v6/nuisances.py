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
    'name': 'lumi_13TeV_2018',
    'type': 'lnN',
    'samples': dict((skey, '1.015') for skey in mc if skey not in ['WZ']),
    'cuts' : fitcuts
}

nuisances['lumi_XYFact'] = {
    'name': 'lumi_13TeV_XYFact',
    'type': 'lnN',
    'samples': dict((skey, '1.02') for skey in mc if skey not in ['WZ']),
    'cuts' : fitcuts
}

nuisances['lumi_LScale'] = {
    'name': 'lumi_13TeV_LSCale',
    'type': 'lnN',
    'samples': dict((skey, '1.002') for skey in mc if skey not in ['WZ']),
    'cuts' : fitcuts
}

nuisances['lumi_CurrCalib'] = {
    'name': 'lumi_13TeV_CurrCalib',
    'type': 'lnN',
    'samples': dict((skey, '1.002') for skey in mc if skey not in ['WZ']),
    'cuts' : fitcuts
}

#### Theoretical Systematics

# Scale
from LatinoAnalysis.Tools.HiggsXSection  import *
HiggsXS = HiggsXSection()

nuisances['QCDscale_VH']  = {
  'name'  : 'QCDscale_VH',
  'samples'  : {
    'WH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
    'ZH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
    'WH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
    'ZH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm')
  },
  'type'  : 'lnN',
  'cuts' : fitcuts
}

nuisances['QCDscale_ggZH']  = {
  'name'  : 'QCDscale_ggZH', 
  'samples'  : {
    'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','scale','sm'),                  
  },
  'type'  : 'lnN',
  'cuts' : fitcuts
}

nuisances['QCDscale_ttH']  = {
  'name'  : 'QCDscale_ttH', 
  'samples'  : {
    'ttH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','scale','sm'),                  
  },
  'type'  : 'lnN',
  'cuts' : fitcuts
}

variations = ['Alt$(LHEScaleWeight[0],1)', 'Alt$(LHEScaleWeight[1],1)', 'Alt$(LHEScaleWeight[3],1)', 'Alt$(LHEScaleWeight[5],1)', 'Alt$(LHEScaleWeight[7],1)', 'Alt$(LHEScaleWeight[8],1)']

nuisances['QCDscale_V'] = {
    'name': 'QCDscale_V',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {'DY': variations},
    'AsLnN': '1',
    'cuts' : fitcuts
}

nuisances['QCDscale_VV'] = {
    'name': 'QCDscale_VV',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {
        'WW'      : variations,
        'Zg'      : variations,
        'ZgS'     : variations,
        'WZ'      : variations,
        'ZZ'      : variations
    },
    'cuts' : fitcuts
}

nuisances['QCDscale_WWewk'] = {
    'name': 'QCDscale_WWewk',
    'samples': {
        'WWewk': '1.11',
    },
    'type': 'lnN',
    'cuts' : fitcuts
}


# ggww and interference
nuisances['QCDscale_ggVV'] = {
    'name': 'QCDscale_ggVV',
    'type': 'lnN',
    'samples': {
        'ggWW': '1.15',
    },
    'cuts' : fitcuts
}

nuisances['QCDscale_qqbar_ACCEPT']  = {
  'name'  : 'QCDscale_qqbar_ACCEPT', 
  'type'  : 'lnN',
  'samples'  : {
    'WH_hww'  : '1.010',
    'ZH_hww'  : '1.015',
    'WH_htt'  : '1.010',
    'ZH_htt'  : '1.015',
  },
  'cuts' : fitcuts
}

nuisances['QCDscale_gg_ACCEPT']  = {
  'name'  : 'QCDscale_gg_ACCEPT', 
  'samples'  : {
    'ggZH_hww': '1.012',                   
    'ggWW'    : '1.012'
  },
  'type'  : 'lnN',
  'cuts' : fitcuts
}

# pdf
nuisances['pdf_Higgs_gg']  = {
               'name'  : 'pdf_Higgs_gg', 
               'samples'  : {
                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm'), 
                   },
               'type'  : 'lnN',
               'cuts' : fitcuts
              }

nuisances['pdf_Higgs_qqbar']  = {
               'name'  : 'pdf_Higgs_qqbar', 
               'type'  : 'lnN',
               'samples'  : {
                   'WH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   'ZH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
                   'WH_htt'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   'ZH_htt'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
                   },
               'cuts' : fitcuts
              }

nuisances['pdf_Higgs_ttH'] = {
               'name': 'pdf_Higgs_ttH',
               'type': 'lnN',
               'samples': {
                   'ttH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','pdf','sm')
                   },
               'cuts' : fitcuts
              }

nuisances['pdf_qqbar'] = {
              'name': 'pdf_qqbar',
              'type': 'lnN',
              'samples': {
                  'Zg':  '1.04',
                  'ZgS': '1.04',
                  'WZ':  '1.04',
                  'ZZ':  '1.04',
                  },
              'cuts' : fitcuts
              }

nuisances['pdf_Higgs_gg_ACCEPT']  = {
               'name'  : 'pdf_Higgs_gg_ACCEPT', 
               'samples'  : {
                   'ggZH_hww': '1.006', 
                   },
               'type'  : 'lnN',
               'cuts' : fitcuts
              }

nuisances['pdf_Higgs_qqbar_ACCEPT']  = {
               'name'  : 'pdf_Higgs_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   'WH_hww'  : '1.003',
                   'ZH_hww'  : '1.002',
                   'WH_htt'  : '1.003',
                   'ZH_htt'  : '1.002',
                   },
    'cuts' : fitcuts
              }

nuisances['pdf_qqbar_ACCEPT']  = {
               'name'  : 'pdf_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   'WZ'      : '1.001',
                   'ZZ'      : '1.001',
                   },
    'cuts' : fitcuts
              }

nuisances['pdf_gg_ACCEPT'] = {
    'name': 'pdf_gg_ACCEPT',
    'samples': {
        'ggWW': '1.006',
    },
    'type': 'lnN',
    'cuts' : fitcuts
}

nuisances['PS_ISR'] = {
              'name': 'PS_ISR',
              'kind': 'weight',
              'type': 'shape',
              'samples': {
                   'ggZH_hww': ['1.066107*(nCleanGenJet==0) + 1.047857*(nCleanGenJet==1) + 1.030005*(nCleanGenJet==2) + 1.005028*(nCleanGenJet>=3)', '0.921874*(nCleanGenJet==0) + 0.941939*(nCleanGenJet==1) + 0.962282*(nCleanGenJet==2) + 0.991580*(nCleanGenJet>=3)'],
                   'ZH_hww': ['1.000684*(nCleanGenJet==0) + 1.000924*(nCleanGenJet==1) + 1.001683*(nCleanGenJet==2) + 1.002104*(nCleanGenJet>=3)', '0.999150*(nCleanGenJet==0) + 0.998821*(nCleanGenJet==1) + 0.997859*(nCleanGenJet==2) + 0.997316*(nCleanGenJet>=3)'],
                   'WZ': ['1.002552*(nCleanGenJet==0) + 1.010286*(nCleanGenJet==1) + 1.014420*(nCleanGenJet==2) + 1.006226*(nCleanGenJet>=3)', '0.996802*(nCleanGenJet==0) + 0.987227*(nCleanGenJet==1) + 0.982005*(nCleanGenJet==2) + 0.992030*(nCleanGenJet>=3)'],
                   'ZZ': ['1.003210*(nCleanGenJet==0) + 1.005480*(nCleanGenJet==1) + 1.004674*(nCleanGenJet==2) + 0.987845*(nCleanGenJet>=3)', '0.995997*(nCleanGenJet==0) + 0.993056*(nCleanGenJet==1) + 0.993659*(nCleanGenJet==2) + 1.014695*(nCleanGenJet>=3)'],
                   },
              'cuts' : fitcuts
}

nuisances['PS_FSR'] = {
             'name': 'PS_FSR',
             'kind': 'weight',
             'type': 'shape',
             'samples': {
                 'ggZH_hww': ['0.987316*(nCleanGenJet==0) + 0.986764*(nCleanGenJet==1) + 0.996498*(nCleanGenJet==2) + 1.004161*(nCleanGenJet>=3)', '1.019871*(nCleanGenJet==0) + 1.013853*(nCleanGenJet==1) + 1.005229*(nCleanGenJet==2) + 0.998573*(nCleanGenJet>=3)'],
                 'ZH_hww': ['0.992867*(nCleanGenJet==0) + 0.992845*(nCleanGenJet==1) + 0.999470*(nCleanGenJet==2) + 1.007245*(nCleanGenJet>=3)', '1.012465*(nCleanGenJet==0) + 1.012743*(nCleanGenJet==1) + 1.003215*(nCleanGenJet==2) + 0.991286*(nCleanGenJet>=3)'],
                 'WZ': ['0.992987*(nCleanGenJet==0) + 0.993725*(nCleanGenJet==1) + 1.000617*(nCleanGenJet==2) + 1.010869*(nCleanGenJet>=3)', '1.011267*(nCleanGenJet==0) + 1.010097*(nCleanGenJet==1) + 0.999445*(nCleanGenJet==2) + 0.983609*(nCleanGenJet>=3)'],
                 'ZZ': ['0.997245*(nCleanGenJet==0) + 0.998689*(nCleanGenJet==1) + 1.004475*(nCleanGenJet==2) + 1.011440*(nCleanGenJet>=3)', '1.004482*(nCleanGenJet==0) + 1.002081*(nCleanGenJet==1) + 0.992617*(nCleanGenJet==2) + 0.981314*(nCleanGenJet>=3)'],
             },
             'cuts' : fitcuts
}

nuisances['PU'] = {
    'name': 'CMS_PU_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
       'WZ': ['1.00103945*(puWeightUp/puWeight)', '0.99898154*(puWeightDown/puWeight)'],
       'ZZ': ['1.00125684*(puWeightUp/puWeight)', '0.99878368*(puWeightDown/puWeight)'],
       'ZH_hww': ['1.00129463*(puWeightUp/puWeight)', '0.99847264*(puWeightDown/puWeight)'],
       'ggZH_hww': ['0.99973837*(puWeightUp/puWeight)', '1.0001526*(puWeightDown/puWeight)'],
      },
      'AsLnN': '1',
      'cuts' : fitcuts
}

nuisances['UE_whss']  = {
                'name'  : 'UE_whss',
                'skipCMS' : 1,
                'type'  : 'lnN',
                'samples'  : {
                   'WH_hww'   : '1.015',
                   'ZH_hww'   : '1.015',
                   'ggZH_hww' : '1.015',
                   'WH_htt'   : '1.015',
                   'ZH_htt'   : '1.015',
               },
                'cuts' : fitcuts
}

nuisances['WZ3l2jnorm']  = {
               'name'  : 'CMS_hww_WZ3l2jnorm',
               'samples'  : {
                   'WZ'       : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                   'zh3l_WZ_CR_2j',
                   'zh3l_WZ_CR_2j_met',
                   'zh3l_SR_2j',
                   'zh3l_SR_2j_met',
                ]
              }

nuisances['WZ3l1jnorm']  = {
               'name'  : 'CMS_hww_WZ3l1jnorm',
               'samples'  : {
                   'WZ'       : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                   'zh3l_WZ_CR_1j',
                   'zh3l_WZ_CR_1j_met',
                   'zh3l_SR_1j',
                   'zh3l_SR_1j_met',
                ]
              }

#### Top

apply_on = {
    'top': [
        '(topGenPt * antitopGenPt <= 0.) * 1.0816 + (topGenPt * antitopGenPt > 0.)',
        '(topGenPt * antitopGenPt <= 0.) * 0.9184 + (topGenPt * antitopGenPt > 0.)'
    ]
}

nuisances['singleTopToTTbar'] = {
    'name': 'singleTopToTTbar',
    'skipCMS': 1,
    'kind': 'weight',
    'type': 'shape',
    'samples': apply_on,
    'cuts' : fitcuts
}

nuisances['TopPtRew'] = {
    'name': 'CMS_topPtRew',   # Theory uncertainty
    'kind': 'weight',
    'type': 'shape',
    'samples': {'top': ["1.", "1./Top_pTrw"]},
    'symmetrize': True,
    'cuts' : fitcuts
}

#### FAKES

fakeW_EleUp       = '( fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3lElUp       / fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3l )'
fakeW_EleDown     = '( fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3lElDown     / fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3l )'
fakeW_MuUp        = '( fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3lMuUp       / fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3l )'
fakeW_MuDown      = '( fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3lMuDown     / fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3l )'
fakeW_statEleUp   = '( fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3lstatElUp   / fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3l )'
fakeW_statEleDown = '( fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3lstatElDown / fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3l )'
fakeW_statMuUp    = '( fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3lstatMuUp   / fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3l )'
fakeW_statMuDown  = '( fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3lstatMuDown / fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3l )'

nuisances['fake_syst_e']  = {
               'name'  : 'CMS_fake_syst_e',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_e' : '1.30',
                             },
               'cuts' : fitcuts
}

nuisances['fake_syst_m']  = {
               'name'  : 'CMS_fake_syst_m',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_m' : '1.30',
                             },
               'cuts' : fitcuts
}

nuisances['fake_ele']  = {
                'name'  : 'CMS_fake_e_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_EleUp , fakeW_EleDown ],
                             },
                'cuts' : fitcuts
}

nuisances['fake_ele_stat']  = {
                'name'  : 'CMS_fake_stat_e_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                             },
                'cuts' : fitcuts
}

nuisances['fake_mu']  = {
                'name'  : 'CMS_fake_m_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_MuUp , fakeW_MuDown ],
                             },
                'cuts' : fitcuts
}

nuisances['fake_mu_stat']  = {
                'name'  : 'CMS_fake_stat_m_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_statMuUp , fakeW_statMuDown ],
                             },
                'cuts' : fitcuts
}

###### B-tagger

for shift in ['jes', 'lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
    btag_syst = ['(btagSF%sup)/(btagSF)' % shift, '(btagSF%sdown)/(btagSF)' % shift]

    name = 'CMS_btag_%s' % shift
    if 'stats' in shift:
        name += '_2018'

    nuisances['btag_shape_%s' % shift] = {
        'name': name,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc),
        'cuts' : fitcuts
    }

#### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_3l_u)/(TriggerEffWeight_3l))*(TriggerEffWeight_3l>0.02) + (TriggerEffWeight_3l<=0.02)', '(TriggerEffWeight_3l_d)/(TriggerEffWeight_3l)']

nuisances['trigg']  = {
                'name'  : 'CMS_eff_hwwtrigger_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, trig_syst) for skey in mc),
                'cuts' : fitcuts
}

##### Electron Efficiency and energy scale

id_syst_ele = [ 'ttHMVA_3l_ele_SF_Up', 'ttHMVA_3l_ele_SF_Down']

nuisances['eff_e']  = {
                'name'  : 'CMS_eff_e_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, id_syst_ele) for skey in mc),
                'cuts' : fitcuts
}

nuisances['electronpt']  = {
                'name'  : 'CMS_scale_e_2018',
                'kind'  : 'suffix',
                'type'  : 'shape',
                'mapUp' : 'ElepTup',
                'mapDown' : 'ElepTdo',
                'samples'  : dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__ElepTup_suffix', 
                'folderDown' : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__ElepTdo_suffix', 
                'AsLnN' : '1',
                'cuts' : fitcuts
}

###### Muon Efficiency and energy scale

id_syst_mu = [ 'ttHMVA_3l_mu_SF_Up', 'ttHMVA_3l_mu_SF_Down']

nuisances['eff_m']  = {
                'name'  : 'CMS_eff_m_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, id_syst_mu) for skey in mc),
                'cuts' : fitcuts
}

nuisances['muonpt']  = {
                'name'  : 'CMS_scale_m_2018',
                'kind'  : 'suffix',
                'type'  : 'shape',
                'mapUp' : 'MupTup',
                'mapDown' : 'MupTdo',
                'samples'  : dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__MupTup_suffix', 
                'folderDown' : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__MupTdo_suffix', 
                'AsLnN' : '1',
                'cuts' : fitcuts
}

####### Jet energy scale

jes_systs = ['JESAbsolute','JESAbsolute_2018','JESBBEC1','JESBBEC1_2018','JESEC2','JESEC2_2018','JESFlavorQCD','JESHF','JESHF_2018','JESRelativeBal','JESRelativeSample_2018']

for js in jes_systs:
  nuisances[js] = {
                'name': 'CMS_scale_'+js,
                'kind': 'suffix',
                'type': 'shape',
                'mapUp': js+'up',
                'mapDown': js+'do',
                'samples': dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__JESup_suffix', 
                'folderDown' : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__JESdo_suffix', 
                'AsLnN': '1',
                'cuts' : fitcuts
  }

##### MET energy scale

nuisances['met']  = {
                'name'  : 'CMS_scale_met_2018',
                'kind'  : 'suffix',
                'type'  : 'shape',
                'mapUp' : 'METup',
                'mapDown' : 'METdo',
                'samples'  : dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__METup_suffix', 
                'folderDown' : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__METdo_suffix', 
                'AsLnN' : '1',
                'cuts' : fitcuts
}

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
