# nuisances
# name of samples here must match keys in samples.py 

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def nanoGetSampleFiles(inputDir, Sample):
    return getSampleFiles(inputDir, Sample, False, 'nanoLatino_')

try:
    mc = [skey for skey in samples if skey != 'DATA' and not skey.startswith('Fake')]
except NameError:
    mc = []
    cuts = {}
    nuisances = {}
    def makeMCDirectory(x=''):
        return ''

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()


################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

# https://twiki.cern.ch/twiki/bin/view/CMS/LumiRecommendationsRun2#LumiComb
# Uncorrelated 2016               1.0
# Uncorrelated       2017              2.0
# Uncorrelated             2018             1.5
# Correlated   2016, 2017, 2018   0.6, 0.9, 2.0
# Correlated         2017, 2018        0.6, 0.2

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2016',
    'type': 'lnN',
    'samples': dict((skey, '1.010') for skey in mc if skey not in ['WgS','WZ'])
}

nuisances['lumi_Correlated_Run2'] = {
    'name': 'lumi_13TeV_Run2',
    'type': 'lnN',
    'samples': dict((skey, '1.006') for skey in mc if skey not in ['WgS','WZ'])
}


#### FAKES
nuisances['fake_syst_mm'] = {
    'name': 'CMS_fake_syst_mm',
    'type': 'lnN',
    'samples': {
        'Fake_mm': '1.3'
    },
}
nuisances['fake_syst_em'] = {
    'name': 'CMS_fake_syst_em',
    'type': 'lnN',
    'samples': {
        'Fake_em': '1.3'
    },
}
nuisances['fake_syst_mm'] = {
    'name': 'CMS_fake_syst_mm',
    'type': 'lnN',
    'samples': {
        'Fake_ee': '1.3'
    },
}

# nuisances['fake_ele'] = {
#     'name': 'CMS_fake_e_2016',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': {
#         'Fake': ['fakeWEleUp', 'fakeWEleDown'],
#     }
# }
# nuisances['fake_ele_stat'] = {
#     'name': 'CMS_fake_stat_e_2016',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': {
#         'Fake': ['fakeWStatEleUp', 'fakeWStatEleDown']
#     }
# }
# nuisances['fake_mu'] = {
#     'name': 'CMS_fake_m_2016',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': {
#         'Fake': ['fakeWMuUp', 'fakeWMuDown'],
#     }   
# }
# nuisances['fake_mu_stat'] = {
#     'name': 'CMS_fake_stat_m_2016',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': {
#         'Fake': ['fakeWStatMuUp', 'fakeWStatMuDown'],
#     }
# }

# ###### B-tagger

# for shift in ['jes', 'lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
#     btag_syst = ['(btagSF%sup)/(btagSF)' % shift, '(btagSF%sdown)/(btagSF)' % shift]

#     name = 'CMS_btag_%s' % shift
#     if 'stats' in shift:
#         name += '_2016'

#     nuisances['btag_shape_%s' % shift] = {
#         'name'   : name,
#         'kind'   : 'weight',
#         'type'   : 'shape',
#         'samples': dict((skey, btag_syst) for skey in mc),
#     }


# ##### Trigger Efficiency

# trig_syst = ['SFtriggUp', 'SFtriggDown']

# nuisances['trigg'] = {
#     'name'   : 'CMS_eff_hwwtrigger_2016',
#     'kind'   : 'weight',
#     'type'   : 'shape',
#     'samples': dict((skey, trig_syst) for skey in mc)
# }

# ##### Electron Efficiency and energy scale

# nuisances['eff_e'] = {
#     'name'   : 'CMS_eff_e_2016',
#     'kind'   : 'weight',
#     'type'   : 'shape',
#     'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc)
# }

# nuisances['eff_ttHMVA_e'] = {
#     'name'   : 'CMS_eff_ttHMVA_e_2016',
#     'kind'   : 'weight',
#     'type'   : 'shape',
#     'samples': dict((skey, ['LepWPttHMVASFEleUp', 'LepWPttHMVASFEleDown']) for skey in mc)
# }

# nuisances['electronpt'] = {
#     'name'       : 'CMS_scale_e_2016',
#     'kind'       : 'suffix',
#     'type'       : 'shape',
#     'mapUp'      : 'ElepTup',
#     'mapDown'    : 'ElepTdo',
#     'samples'    : dict((skey, ['1', '1']) for skey in mc),
#     'folderUp'   : makeMCDirectory('ElepTup_suffix'),
#     'folderDown' : makeMCDirectory('ElepTdo_suffix'),
#     'AsLnN'      : '1'
# }

# ##### Muon Efficiency and energy scale

# nuisances['eff_m'] = {
#     'name': 'CMS_eff_m_2016',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc)
# }

# nuisances['eff_ttHMVA_m'] = {
#     'name'    : 'CMS_eff_ttHMVA_m_2016',
#     'kind'    : 'weight',
#     'type'    : 'shape',
#     'samples' : dict((skey, ['LepWPttHMVASFMuUp', 'LepWPttHMVASFMuDown']) for skey in mc)
# }

# nuisances['muonpt'] = {
#     'name'       : 'CMS_scale_m_2016',
#     'kind'       : 'suffix',
#     'type'       : 'shape',
#     'mapUp'      : 'MupTup',
#     'mapDown'    : 'MupTdo',
#     'samples'    : dict((skey, ['1', '1']) for skey in mc),
#     'folderUp'   : makeMCDirectory('MupTup_suffix'),
#     'folderDown' : makeMCDirectory('MupTdo_suffix'),
#     'AsLnN'      : '1'
# }

# ##### Jet energy scale
# jes_systs = ['JESAbsolute','JESAbsolute_2016','JESBBEC1','JESBBEC1_2016','JESEC2','JESEC2_2016','JESFlavorQCD','JESHF','JESHF_2016','JESRelativeBal','JESRelativeSample_2016']

# for js in jes_systs:

#   nuisances[js] = {
#       'name'      : 'CMS_scale_' + js,
#       'kind'      : 'suffix',
#       'type'      : 'shape',
#       'mapUp'     : js + 'up',
#       'mapDown'   : js + 'do',
#       'samples'   : dict((skey, ['1', '1']) for skey in mc),
#       'folderUp'  : makeMCDirectory('RDF__JESup_suffix'),
#       'folderDown': makeMCDirectory('RDF__JESdo_suffix'),
#       'AsLnN'     : '1'
#   }

# ##### Jet energy resolution
# nuisances['JER'] = {
#     'name'       : 'CMS_res_j_2016',
#     'kind'       : 'suffix',
#     'type'       : 'shape',
#     'mapUp'      : 'JERup',
#     'mapDown'    : 'JERdo',
#     'samples'    : dict((skey, ['1', '1']) for skey in mc),
#     'folderUp'   : makeMCDirectory('JERup_suffix'),
#     'folderDown' : makeMCDirectory('JERdo_suffix'),
#     'AsLnN'      : '1'
# }

# ##### MET unclustered energy

# # metUp.PuppiMET_pt_METup
# nuisances['met'] = {
#     'name'       : 'CMS_scale_met_2016',
#     'kind'       : 'suffix',
#     'type'       : 'shape',
#     'mapUp'      : 'METup',
#     'mapDown'    : 'METdo',
#     'samples'    : dict((skey, ['1', '1']) for skey in mc),
#     'folderUp'   : makeMCDirectory('METup_suffix'),
#     'folderDown' : makeMCDirectory('METdo_suffix'),
#     'AsLnN'      : '1'
# }


# ##### Pileup

# # puWeight_UL2016
# nuisances['PU'] = {
#     'name': 'CMS_PU_2016',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': {
#         'DY'      : ['1.000489*(puWeightUp/puWeight)', '0.998828*(puWeightDown/puWeight)'],
#         'WW'      : ['1.007152*(puWeightUp/puWeight)', '0.993194*(puWeightDown/puWeight)'],
#         'ggWW'    : ['1.006460*(puWeightUp/puWeight)', '0.993661*(puWeightDown/puWeight)'],
#         'Vg'      : ['1.004694*(puWeightUp/puWeight)', '0.998294*(puWeightDown/puWeight)'],
#         'WZ'      : ['1.003158*(puWeightUp/puWeight)', '0.997747*(puWeightDown/puWeight)'],
#         'ZZ'      : ['1.000801*(puWeightUp/puWeight)', '0.999199*(puWeightDown/puWeight)'],
#         'VVV'     : ['0.996144*(puWeightUp/puWeight)', '1.005616*(puWeightDown/puWeight)'],
#         'top'     : ['1.004374*(puWeightUp/puWeight)', '0.995684*(puWeightDown/puWeight)'],
#         'Higgs'   : ['1.006460*(puWeightUp/puWeight)', '0.993559*(puWeightDown/puWeight)'],
#     },
#     'AsLnN': '1',
# }

# ### PU ID SF uncertainty

# puid_syst = ['Jet_PUIDSF_loose_up/Jet_PUIDSF_loose', 'Jet_PUIDSF_loose_down/Jet_PUIDSF_loose']

# nuisances['jetPUID'] = {
#     'name': 'CMS_PUID_2016',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': dict((skey, puid_syst) for skey in mc)
# }


# ### PS and UE

# nuisances['PS_ISR']  = {
#     'name'    : 'PS_ISR',
#     'kind'    : 'weight',
#     'type'    : 'shape',
#     'samples' : dict((skey, ['PSWeight[2]', 'PSWeight[0]']) for skey in mc),
#     'AsLnN'   : '1',
# }

# nuisances['PS_FSR']  = {
#     'name'    : 'PS_FSR',
#     'kind'    : 'weight',
#     'type'    : 'shape',
#     'samples' : dict((skey, ['PSWeight[3]', 'PSWeight[1]']) for skey in mc),
#     'AsLnN'   : '1',
# }

nuisances['UE_CP5']  = {
    'name'    : 'UE_CP5',
    'skipCMS' : 1,
    'type'    : 'lnN',
    'samples' : dict((skey, '1.015') for skey in mc),
}

# ## Charge flip SF
# nuisances['chargeFlip'] = {
#     'name'    : 'CMS_whss_chargeFlip_2016',
#     'kind'    : 'weight',
#     'type'    : 'shape',
#     'samples' : dict((skey, ['1-ttHMVA_SF_err_flip_2l[0]', '1+ttHMVA_SF_err_flip_2l[0]']) for skey in ['top','WW']),
#     'cuts'    : [cut for cut in cuts if ('_ee_' in cut or '_em_' in cut)]
# }

# Charge flip efficiency
nuisances['chargeFlipEff'] = {
    'name'    : 'CMS_whss_chargeFlipEff_2016',
    'kind'    : 'weight',
    'type'    : 'shape',
    'samples' : dict((skey, ['1-ttHMVA_eff_err_flip_2l[0]', '1+ttHMVA_eff_err_flip_2l[0]']) for skey in ['DATA']),
    'cuts'    : [cut for cut in cuts if ('_ee_' in cut or '_em_' in cut)]
}

##### Renormalization & factorization scales

## Shape nuisance due to QCD scale variations for DY
# LHE scale variation weights (w_var / w_nominal)

## This should work for samples with either 8 or 9 LHE scale weights (Length$(LHEScaleWeight) == 8 or 9)
variations = ['LHEScaleWeight[0]', 'LHEScaleWeight[1]', 'LHEScaleWeight[3]', 'LHEScaleWeight[Length$(LHEScaleWeight)-4]', 'LHEScaleWeight[Length$(LHEScaleWeight)-2]', 'LHEScaleWeight[Length$(LHEScaleWeight)-1]']

# nuisances['QCDscale_V'] = {
#     'name': 'QCDscale_V',
#     'skipCMS': 1,
#     'kind': 'weight_envelope',
#     'type': 'shape',
#     'samples': {'DY': variations},
#     'AsLnN': '1'
# }

# nuisances['QCDscale_VV'] = {
#     'name' : 'QCDscale_VV',
#     'kind' : 'weight_envelope',
#     'type' : 'shape',
#     'samples' : {
#         'WW'  : variations,
#         'Zg'  : variations,
#         'Wg'  : variations,
#         'ZZ'  : variations,
#         'WZ'  : variations,
#         'WgS' : variations,
#         'ZgS' : variations
#     }
# }

nuisances['QCDscale_ggVV'] = {
    'name': 'QCDscale_ggVV',
    'type': 'lnN',
    'samples': {
        'ggWW': '1.15',
    },
}

# WZ normalization from control region

nuisances['WZ2jnorm']  = {
    'name'    : 'CMS_hww_WZ3l2jnorm',
    'samples' : {
        'WZ' : '1.00',
    },
    'type' : 'rateParam',
    'cuts' : [cut for cut in cuts if '2j' in cut],
}

nuisances['WZ1jnorm']  = {
    'name'    : 'CMS_hww_WZ3l1jnorm',
    'samples' : {
        'WZ' : '1.00',
    },
    'type' : 'rateParam',
    'cuts' : [cut for cut in cuts if '1j' in cut],
}

## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat']  = {
    'type'          : 'auto',
    'maxPoiss'      : '10',
    'includeSignal' : '1',
    'samples'       : {}
}
#  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
#  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)

for n in nuisances.values():
    n['skipCMS'] = 1
