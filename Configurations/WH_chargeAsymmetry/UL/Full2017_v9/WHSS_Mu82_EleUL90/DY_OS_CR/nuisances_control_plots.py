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
    'name': 'lumi_13TeV_2017',
    'type': 'lnN',
    'samples': dict((skey, '1.020') for skey in mc if skey not in ['Zg','ZgS','WZ'])
}

nuisances['lumi_Correlated_Run2'] = {
    'name': 'lumi_13TeV_Run2',
    'type': 'lnN',
    'samples': dict((skey, '1.009') for skey in mc if skey not in ['WgS','WZ'])
}

nuisances['lumi_Correlated_2017_2018'] = {
    'name': 'lumi_13TeV_2017_2018',
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
nuisances['fake_syst_ee'] = {
    'name': 'CMS_fake_syst_ee',
    'type': 'lnN',
    'samples': {
        'Fake_ee': '1.3'
    },
}

# nuisances['fake_ele'] = {
#     'name': 'CMS_fake_e_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': {
#         'Fake': ['fakeWEleUp', 'fakeWEleDown'],
#     }
# }
# nuisances['fake_ele_stat'] = {
#     'name': 'CMS_fake_stat_e_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': {
#         'Fake': ['fakeWStatEleUp', 'fakeWStatEleDown']
#     }
# }

# nuisances['fake_mu'] = {
#     'name': 'CMS_fake_m_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': {
#         'Fake': ['fakeWMuUp', 'fakeWMuDown'],
#     }   
# }       
# nuisances['fake_mu_stat'] = {
#     'name': 'CMS_fake_stat_m_2017',
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
#         name += '_2017'

#     nuisances['btag_shape_%s' % shift] = {
#         'name': name,
#         'kind': 'weight',
#         'type': 'shape',
#         'samples': dict((skey, btag_syst) for skey in mc),
#     }

# ##### Trigger Efficiency

# trig_syst = ['SFtriggUp', 'SFtriggDown']

# nuisances['trigg'] = {
#     'name': 'CMS_eff_hwwtrigger_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': dict((skey, trig_syst) for skey in mc)
# }

# ##### Electron Efficiency and energy scale

# nuisances['eff_e'] = {
#     'name': 'CMS_eff_e_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc)
# }

# nuisances['eff_ttHMVA_e'] = {
#     'name': 'CMS_eff_ttHMVA_e_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': dict((skey, ['LepWPttHMVASFEleUp', 'LepWPttHMVASFEleDown']) for skey in mc)
# }

# nuisances['electronpt'] = {
#     'name'       : 'CMS_scale_e_2017',
#     'kind'       : 'suffix',
#     'type'       : 'shape',
#     'mapUp'      : 'ElepTup',
#     'mapDown'    : 'ElepTdo',
#     'samples'    : dict((skey, ['1', '1']) for skey in mc if skey != "ggWW"), # exclude ggWW
#     'folderUp'   : makeMCDirectory('ElepTup_suffix'),
#     'folderDown' : makeMCDirectory('ElepTdo_suffix'),
#     'AsLnN'      : '1'
# }

# ##### Muon Efficiency and energy scale

# nuisances['eff_m'] = {
#     'name': 'CMS_eff_m_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc)
# }

# nuisances['eff_ttHMVA_m'] = {
#     'name': 'CMS_eff_ttHMVA_m_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': dict((skey, ['LepWPttHMVASFMuUp', 'LepWPttHMVASFMuDown']) for skey in mc)
# }

# nuisances['muonpt'] = {
#     'name'        : 'CMS_scale_m_2017',
#     'kind'        : 'suffix',
#     'type'        : 'shape',
#     'mapUp'       : 'MupTup',
#     'mapDown'     : 'MupTdo',
#     'samples'     : dict((skey, ['1', '1']) for skey in mc),
#     'folderUp'    : makeMCDirectory('MupTup_suffix'),
#     'folderDown'  : makeMCDirectory('MupTdo_suffix'),
#     'AsLnN'       : '1'
# }

# ##### Jet energy scale
# jes_systs    = ['JESAbsolute','JESAbsolute_2017','JESBBEC1','JESBBEC1_2017','JESEC2','JESEC2_2017','JESFlavorQCD','JESHF','JESHF_2017','JESRelativeBal','JESRelativeSample_2017']

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
#     'name'       : 'CMS_res_j_2017',
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
#     'name'        : 'CMS_scale_met_2017',
#     'kind'        : 'suffix',
#     'type'        : 'shape',
#     'mapUp'       : 'METup',
#     'mapDown'     : 'METdo',
#     'samples'     : dict((skey, ['1', '1']) for skey in mc),
#     'folderUp'    : makeMCDirectory('METup_suffix'),
#     'folderDown'  : makeMCDirectory('METdo_suffix'),
#     'AsLnN'       : '1'
# }

# ##### Pileup

# # puWeight_UL2017
# nuisances['PU'] = {
#     'name': 'CMS_PU_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': {
#         'DY'      : ['1.001301*(puWeightUp/puWeight)', '1.000343*(puWeightDown/puWeight)'],
#         'WW'      : ['1.004535*(puWeightUp/puWeight)', '0.995438*(puWeightDown/puWeight)'],
#         'ggWW'    : ['1.006331*(puWeightUp/puWeight)', '0.993645*(puWeightDown/puWeight)'],
#         'WWewk'   : ['1.004517*(puWeightUp/puWeight)', '0.996367*(puWeightDown/puWeight)'],
#         'Vg'      : ['1.001248*(puWeightUp/puWeight)', '1.006697*(puWeightDown/puWeight)'],
#         'WZ'      : ['1.000076*(puWeightUp/puWeight)', '1.001015*(puWeightDown/puWeight)'],
#         'ZZ'      : ['0.997355*(puWeightUp/puWeight)', '1.001563*(puWeightDown/puWeight)'],
#         'VVV'     : ['1.001852*(puWeightUp/puWeight)', '0.995069*(puWeightDown/puWeight)'],
#         'top'     : ['1.003554*(puWeightUp/puWeight)', '0.996727*(puWeightDown/puWeight)'],
#         'Higgs'   : ['1.006784*(puWeightUp/puWeight)', '0.993494*(puWeightDown/puWeight)'],
#     },
#     'AsLnN': '1',
# }

# ### PU ID SF uncertainty

# puid_syst = ['Jet_PUIDSF_loose_up/Jet_PUIDSF_loose', 'Jet_PUIDSF_loose_down/Jet_PUIDSF_loose']

# nuisances['jetPUID'] = {
#     'name': 'CMS_PUID_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': dict((skey, puid_syst) for skey in mc)
# }


# # PS and UE

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
# nuisances['chargeFlipSF'] = {
#     'name'    : 'CMS_whss_chargeFlipSF_2017',
#     'kind'    : 'weight',
#     'type'    : 'shape',
#     'samples' : dict((skey, ['1-ttHMVA_SF_err_flip_2l[0]', '1+ttHMVA_SF_err_flip_2l[0]']) for skey in ['top', 'WW']),
#     'cuts'    : [cut for cut in cuts if ('_ee_' in cut or '_em_' in cut)]
# }

# ## Charge flip efficiency
# nuisances['chargeFlipEff'] = {
#     'name'    : 'CMS_whss_chargeFlipEff_2017',
#     'kind'    : 'weight',
#     'type'    : 'shape',
#     'samples' : dict((skey, ['1-ttHMVA_eff_err_flip_2l[0]', '1+ttHMVA_eff_err_flip_2l[0]']) for skey in ['DY']),
#     'cuts'    : [cut for cut in cuts if ('_ee_' in cut)]
# }

## Charge flip efficiency
nuisances['chargeFlipEff'] = {
    'name'    : 'CMS_whss_chargeFlipEff_2017',
    'kind'    : 'weight',
    'type'    : 'shape',
    # 'samples' : dict((skey, ['1-ttHMVA_eff_err_flip_2l[0]', '1+ttHMVA_eff_err_flip_2l[0]']) for skey in ['DY','DATA']),
    'samples' : dict((skey, ['1-ttHMVA_eff_err_flip_2l[0]', '1+ttHMVA_eff_err_flip_2l[0]']) for skey in ['DATA']),
    'cuts'    : [cut for cut in cuts if ('_ee_' in cut or '_em_' in cut)]
}

## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat']  = {
    'type'          : 'auto',
    'maxPoiss'      : '10',
    'includeSignal' : '0',
    'samples'       : {}
}
#  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
#  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)

for n in nuisances.values():
    n['skipCMS'] = 1
