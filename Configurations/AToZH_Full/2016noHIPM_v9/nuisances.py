# nuisances
# name of samples here must match keys in samples.py    

try:
    mc = [skey for skey in samples if skey != 'DATA' and not skey.startswith('Fake')]
except NameError:
    mc = []
try:
    signal = [skey for skey in samples if skey.startswith('AZH')]
except NameError:
    signal = []

try:
    fitcuts = [cut for cut in cuts if 'SR' in cut or 'preselection' in cut]
except NameError:
    fitcuts = []

#### Luminosity

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2016',
    'type': 'lnN',
    'samples': dict((skey, '1.010') for skey in mc),
#    'cuts' : fitcuts
}

nuisances['lumi_Correlated'] = {
    'name': 'lumi_13TeV_correlated',
    'type': 'lnN',
    'samples': dict((skey, '1.006') for skey in mc),
#    'cuts' : fitcuts
}


#### Theoretical Systematics

# Scale
from LatinoAnalysis.Tools.HiggsXSection  import *
HiggsXS = HiggsXSection()

nuisances['QCDscale_ttH']  = {
  'name'  : 'QCDscale_ttH', 
  'samples'  : {
    'ttH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','scale','sm'),                  
  },
  'type'  : 'lnN',
#  'cuts' : fitcuts
}

variations = ['Alt$(LHEScaleWeight[0],1)', 'Alt$(LHEScaleWeight[1],1)', 'Alt$(LHEScaleWeight[3],1)', 'Alt$(LHEScaleWeight[5],1)', 'Alt$(LHEScaleWeight[7],1)', 'Alt$(LHEScaleWeight[8],1)']

nuisances['QCDscale_ttZ'] = {
    'name': 'QCDscale_ttZ',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {'ttZ': variations},
    'AsLnN': '0',
#    'cuts' : fitcuts
}

nuisances['QCDscale_VVV'] = {
    'name': 'QCDscale_VVV',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {'VVV': variations},
    'AsLnN': '0',
#    'cuts' : fitcuts
}

nuisances['QCDscale_AZH'] = {
    'name': 'QCDscale_AZH',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': dict((skey, variations) for skey in signal),
    'AsLnN': '0',
#    'cuts' : fitcuts
}

nuisances['QCDscale_VV'] = {
    'name': 'QCDscale_VV',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {
        'Zg'      : variations,
        'ZgS'     : variations,
        'WZ'      : variations,
        'ZZ'      : variations,
    },
#    'cuts' : fitcuts
}


nuisances['pdf_Higgs_ttH'] = {
               'name': 'pdf_Higgs_ttH',
               'type': 'lnN',
               'samples': {
                   'ttH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','pdf','sm')
                   },
#               'cuts' : fitcuts
              }

nuisances['pdf_qqbar'] = {
              'name': 'pdf_qqbar',
              'type': 'lnN',
              'samples': {
                  'Zg':  '1.04',
                  'ZgS': '1.04',
                  'WZ':  '1.04',
                  'ZZ':  '1.04',
		  'ttZ': '1.04',
                  },
 #             'cuts' : fitcuts
              }


pdf_variations = ["LHEPdfWeight[%d]" %i for i in range(1,101)] # Float_t LHE pdf variation weights (w_var / w_nominal) for LHA IDs 320901 - 321000
nuisances['pdf_AZH']  = {
      'name'  : 'CMS_AZH_pdf_2016',
      'kind'  : 'weight_rms',
      'type'  : 'shape',
      'samples'  : dict((skey, pdf_variations) for skey in signal),
 #     'cuts' : fitcuts
#      'scale' : nfdict["pdf_WW"] --> I should calculate my own norm factor here
}

nuisances['PS_ISR'] = {
     'name': 'PS_ISR',
     'kind': 'weight',
     'type': 'shape',
     'samples': dict((skey, ['PSWeight[2]', 'PSWeight[0]']) for skey in mc), 
 #    'cuts' : fitcuts
}

nuisances['PS_FSR'] = {
     'name': 'PS_FSR',
     'kind': 'weight',
     'type': 'shape',
     'samples': dict((skey, ['PSWeight[3]', 'PSWeight[1]']) for skey in mc), 
 #    'cuts' : fitcuts
}

nuisances['PU'] = {
    'name': 'CMS_PU_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
          'WZ'      : ['0.997436*(puWeightUp/puWeight)', '1.002432*(puWeightDown/puWeight)'],
          'ZZ'      : ['1.000053*(puWeightUp/puWeight)', '0.999729*(puWeightDown/puWeight)'],
          'VVV'     : ['1.004609*(puWeightUp/puWeight)', '0.997860*(puWeightDown/puWeight)'],
          'ttZ'     : ['(puWeightUp/puWeight)', '(puWeightDown/puWeight)'],
          'Zg'      : ['0.996218*(puWeightUp/puWeight)', '1.009114*(puWeightDown/puWeight)'],
          'top'     : ['1.004394*(puWeightUp/puWeight)', '0.996097*(puWeightDown/puWeight)'],
    },
    'AsLnN': '1',
 #   'cuts' : fitcuts
}


nuisances['PU_AZH'] = {
     'name': 'CMS_PU_2016',
     'kind': 'weight',
     'type': 'shape',
     'samples': dict((skey, ['(puWeightUp/puWeight)', '(puWeightDown/puWeight)']) for skey in signal),
     'AsLnN': '1', 
 #    'cuts' : fitcuts
}

### PU ID SF uncertainty
puid_syst = ['Jet_PUIDSF_up/Jet_PUIDSF', 'Jet_PUIDSF_down/Jet_PUIDSF']

nuisances['jetPUID'] = {
    'name': 'CMS_PUID_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, puid_syst) for skey in mc),
 #   'cuts' : fitcuts
}

nuisances['UE']  = {
                'name'  : 'UE',
                'skipCMS' : 1,
                'type'  : 'lnN',
                'samples'  : dict((skey, '1.015') for skey in mc), 
 #               'cuts' : fitcuts
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
 #   'cuts' : fitcuts
}

nuisances['TopPtRew'] = {
    'name': 'CMS_topPtRew',   # Theory uncertainty
    'kind': 'weight',
    'type': 'shape',
    'samples': {'top': ["1.", "1./Top_pTrw"]},
    'symmetrize': True,
 #   'cuts' : fitcuts
}

#### FAKES

#fakeW_EleUp       = '( fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3lElUp       / fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3l )'
#fakeW_EleDown     = '( fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3lElDown     / fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3l )'
#fakeW_MuUp        = '( fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3lMuUp       / fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3l )'
#fakeW_MuDown      = '( fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3lMuDown     / fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3l )'
#fakeW_statEleUp   = '( fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3lstatElUp   / fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3l )'
#fakeW_statEleDown = '( fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3lstatElDown / fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3l )'
#fakeW_statMuUp    = '( fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3lstatMuUp   / fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3l )'
#fakeW_statMuDown  = '( fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3lstatMuDown / fakeW_ele_'+eleWP_new+'_mu_'+muWP_new+'_3l )'

nuisances['fake_syst']  = {
               'name'  : 'CMS_fake_syst',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake' : '1.30',
                             },
 #              'cuts' : fitcuts
}

nuisances['fake_ele']  = {
                'name'  : 'CMS_fake_e_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ 'fakeW_EleUp' , 'fakeW_EleDown' ],
                             },
 #               'cuts' : fitcuts
}

nuisances['fake_ele_stat']  = {
                'name'  : 'CMS_fake_stat_e_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'      : [ 'fakeW_statEleUp' , 'fakeW_statEleDown' ],
                             },
 #               'cuts' : fitcuts
}

nuisances['fake_mu']  = {
                'name'  : 'CMS_fake_m_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ 'fakeW_MuUp' , 'fakeW_MuDown' ],
                             },
 #               'cuts' : fitcuts
}

nuisances['fake_mu_stat']  = {
                'name'  : 'CMS_fake_stat_m_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ 'fakeW_statMuUp' , 'fakeW_statMuDown' ],
                             }
 #               'cuts' : fitcuts
}

##### B-tagger
## WP based approach
for shift in [ 'isr', 'fsr','hdamp', 'jes','jer', 'pileup','qcdscale', 'statistic','topmass', 'type3']:
    btag_syst = ['(btagSF%sup)/(btagSF)' % shift, '(btagSF%sdown)/(btagSF)' % shift]

    name = 'CMS_btag_bc_%s' % shift
    if 'statistic' in shift:
        name += '_2016preVFP'

    nuisances['btag_M_bc_%s' % shift] = {
        'name': name,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc),
       # 'cuts' : fitcuts
    }

nuisances['btag_M_light_2016preVFP'] = {
        'name': 'CMS_btag_light_2016preVFP',
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, ['(btagSFuncorrelatedup)/(btagSF)', '(btagSFuncorrelateddown)/(btagSF)']) for skey in mc),
    }

nuisances['btag_M_light_correlated'] = {
        'name': 'CMS_btag_light_correlated',
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, ['(btagSFcorrelatedup)/(btagSF)', '(btagSFcorrelateddown)/(btagSF)']) for skey in mc),
    }

#### Trigger Efficiency

trig_syst = ['((TriggerSFWeight_3l_u)/(TriggerSFWeight_3l))*(TriggerSFWeight_3l>0.02) + (TriggerSFWeight_3l<=0.02)', '(TriggerSFWeight_3l_d)/(TriggerSFWeight_3l)']

nuisances['trigg']  = {
                'name'  : 'CMS_eff_hwwtrigger_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, trig_syst) for skey in mc),
#		'AsLnN' : '1',
 #               'cuts' : fitcuts
}

#### Prefiring

prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']

nuisances['prefire'] = {
    'name': 'CMS_eff_prefiring_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples'  : dict((skey, prefire_syst) for skey in mc),
 #   'cuts' : fitcuts
}

##### Electron Efficiency and energy scale

id_syst_ele = ['SFweightEleUp', 'SFweightEleDown'] #defined in aliases

nuisances['eff_e']  = {
                'name'  : 'CMS_eff_e',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, id_syst_ele) for skey in mc),
 #               'cuts' : fitcuts
}
nuisances['electronpt']  = {
                'name'  : 'CMS_scale_e_2016',
                'kind'  : 'suffix',
                'type'  : 'shape',
                'mapUp' : 'ElepTup',
                'mapDown' : 'ElepTdo',
                'samples'  : dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : treeBaseDir+'Summer20UL16_106x_nAODv9_noHIPM_Full2016v9/MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9__ElepTup_suffix', 
                'folderDown' : treeBaseDir+'Summer20UL16_106x_nAODv9_noHIPM_Full2016v9/MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9__ElepTdo_suffix', 
#                'AsLnN' : '1',
 #               'cuts' : fitcuts
}

###### Muon Efficiency and energy scale

id_syst_mu = ['SFweightMuUp', 'SFweightMuDown']  #defined in aliases

nuisances['eff_m']  = {
                'name'  : 'CMS_eff_m',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, id_syst_mu) for skey in mc),
#		'AsLnN' : '1',
 #               'cuts' : fitcuts
}

nuisances['muonpt']  = {
                'name'  : 'CMS_scale_m_2016',
                'kind'  : 'suffix',
                'type'  : 'shape',
                'mapUp' : 'MupTup',
                'mapDown' : 'MupTdo',
                'samples'  : dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : treeBaseDir+'Summer20UL16_106x_nAODv9_noHIPM_Full2016v9/MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9__MupTup_suffix', 
                'folderDown' : treeBaseDir+'Summer20UL16_106x_nAODv9_noHIPM_Full2016v9/MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9__MupTdo_suffix', 
 #               'AsLnN' : '1',
 #               'cuts' : fitcuts
}


nuisances['ttZ_norm'] = {
    'name' : 'CMS_ttZ_norm',
    'samples' : {
	'ttZ' : '1.00',
    },
    'type' : 'rateParam',
    'cuts' : [
	'breq_SR', 'bveto_1j_SR', 'bveto_4j'#, 'jet_cut_3j', 'bveto_3j'
   ]
 }

nuisances['WZ_norm_4j'] = {
    'name' : 'CMS_WZ_norm_4j',
    'samples' : {
	'WZ' : '1.00',
    },
    'type' : 'rateParam',
    'cuts': [
	'breq_SR', 'bveto_1j_SR', 'bveto_4j'
    ]
  }


#nuisances['WZ_norm_3j'] = {
#    'name' : 'CMS_WZ_norm_3j',
#    'samples' : {
#	'WZ' : '1.00',
#    },
#    'type' : 'rateParam',
#    'cuts': [
#	 'jet_cut_3j', 'bveto_3j'
#    ]
#  }

####### Jet energy scale

jes_systs = ['JESAbsolute','JESAbsolute_2016','JESBBEC1','JESBBEC1_2016','JESEC2','JESEC2_2016','JESFlavorQCD','JESHF','JESHF_2016','JESRelativeBal','JESRelativeSample_2016']

for js in jes_systs:
     # Split source, applied to jets and MET
      nuisances[js] = {
                'name': 'CMS_scale_'+js+'_all',
                'kind': 'suffix',
                'type': 'shape',
                'mapUp': js+'up',
                'mapDown': js+'do',
                'samples': dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : treeBaseDir+'Summer20UL16_106x_nAODv9_noHIPM_Full2016v9/MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9__RDF__JESup_suffix', 
                'folderDown' : treeBaseDir+'Summer20UL16_106x_nAODv9_noHIPM_Full2016v9/MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9__RDF__JESdo_suffix', 
 #               'AsLnN': '0',
#                'cuts' : fitcuts
}

##### Jet energy resolution
nuisances['JER'] = {
    'name' : 'CMS_res_j_2016',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': 'JERup',
    'mapDown': 'JERdo',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': treeBaseDir+'Summer20UL16_106x_nAODv9_noHIPM_Full2016v9/MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9__JERup_suffix',
    'folderDown': treeBaseDir+'Summer20UL16_106x_nAODv9_noHIPM_Full2016v9/MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9__JERdo_suffix',
 #   'AsLnN': '1',
}
##### MET energy scale

nuisances['met']  = {
                'name'  : 'CMS_scale_met_2016',
                'kind'  : 'suffix',
                'type'  : 'shape',
                'mapUp' : 'METup',
                'mapDown' : 'METdo',
                'samples'  : dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : treeBaseDir+'Summer20UL16_106x_nAODv9_noHIPM_Full2016v9/MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9__METup_suffix', 
                'folderDown' : treeBaseDir+'Summer20UL16_106x_nAODv9_noHIPM_Full2016v9/MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9__METdo_suffix', 
 #               'AsLnN' : '1',
 #               'cuts' : fitcuts
}

# Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat']  = {
              'type'  : 'auto',
              'maxPoiss'  : '10',
              'includeSignal'  : '0',
              #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
              #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
              'samples' : {},
 #             'cuts' : fitcuts
             }

for n in nuisances.values():
    n['skipCMS'] = 1
