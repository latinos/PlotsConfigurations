# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py

# imported from samples.py:
# samples, treeBaseDir, mcProduction, mcSteps
# imported from cuts.py
# cuts
import copy

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


cutdict = {
    'Ele'   : {x for x in cuts if 'ElCh' in x},
    'Muon'  : {x for x in cuts if 'MuCh' in x},
    'Wjets' : {x for x in cuts if 'SB' in x},
    'top'   : {x for x in cuts if 'TopCR' in x},
    'VBF'   : {x for x in cuts if 'VBF' in x},
    'ggF'   : {x for x in cuts if 'ggF' in x},
    'Untag' : {x for x in cuts if 'Untagged' in x},
    'Boost' : {x for x in cuts if 'Boosted' in x},
    'Resolv': {x for x in cuts if 'Resolved' in x}
}


################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

# nuisances['lumi'] = {
#    'name': 'lumi_13TeV_2017',
#    'type': 'lnN',
#    'samples': dict((skey, '1.023') for skey in mc if skey not in ['Wjets', 'top'])
# }

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2017',
    'type': 'lnN',
    'samples': dict((skey, '1.02') for skey in mc if skey not in ['Wjets', 'top'])
}

nuisances['lumi_XY'] = {
    'name': 'lumi_13TeV_XY',
    'type': 'lnN',
    'samples': dict((skey, '1.008') for skey in mc if skey not in ['Wjets', 'top'])
}

nuisances['lumi_LS'] = {
    'name': 'lumi_13TeV_LS',
    'type': 'lnN',
    'samples': dict((skey, '1.003') for skey in mc if skey not in ['Wjets', 'top'])
}

nuisances['lumi_BBD'] = {
    'name': 'lumi_13TeV_BBD',
    'type': 'lnN',
    'samples': dict((skey, '1.004') for skey in mc if skey not in ['Wjets', 'top'])
}

nuisances['lumi_DB'] = {
    'name': 'lumi_13TeV_DB',
    'type': 'lnN',
    'samples': dict((skey, '1.005') for skey in mc if skey not in ['Wjets', 'top'])
}

nuisances['lumi_BCC'] = {
    'name': 'lumi_13TeV_BCC',
    'type': 'lnN',
    'samples': dict((skey, '1.003') for skey in mc if skey not in ['Wjets', 'top'])
}

nuisances['lumi_GS'] = {
    'name': 'lumi_13TeV_GS',
    'type': 'lnN',
    'samples': dict((skey, '1.001') for skey in mc if skey not in ['Wjets', 'top'])
}




##### B-tagger

for shift in ['jes', 'lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
    btag_syst = ['(btagSF%sup)/(btagSF)' % shift, '(btagSF%sdown)/(btagSF)' % shift]

    name = 'CMS_btag_shape_%s' % shift
    if 'stats' in shift:
        name += '_2017'

    nuisances['btag_%s' % shift] = {
        'name': name,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc),
    }



##### WtagSF

# nuisance['wtag'] = {
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': dict((skey, ['SFWtagUp', 'SFWtagDown']) for skey in mc),
#     'cuts': [cutdict['Resolv'], cutdict['Boost']]
# }





##### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_1l_u)/(TriggerEffWeight_1l))*(TriggerEffWeight_1l>0.02) + (TriggerEffWeight_1l<=0.02)', '(TriggerEffWeight_1l_d)/(TriggerEffWeight_1l)*(TriggerEffWeight_1l>0.02) + (TriggerEffWeight_1l<=0.02)']

nuisances['trigg'] = {
    'name': 'CMS_eff_hwwtrigger_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc)
}

prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']

nuisances['prefire'] = {
    'name': 'CMS_eff_prefiring_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, prefire_syst) for skey in mc if 'DY' not in skey), #FIXME Add DY
}

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
    'name': 'CMS_eff_e_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc)
}

# nuisances['electronpt'] = {
#     'name': 'CMS_scale_e_2017',
#     'kind': 'tree',
#     'type': 'shape',
#     'samples': dict((skey, ['1', '1']) for skey in mc),
#     'folderUp': makeMCDirectory('ElepTup'),
#     'folderDown': makeMCDirectory('ElepTdo'),
#     'AsLnN': '1'
# }

##### Muon Efficiency and energy scale

nuisances['eff_m'] = {
    'name': 'CMS_eff_m_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc)
}

# nuisances['muonpt'] = {
#     'name': 'CMS_scale_m_2017',
#     'kind': 'tree',
#     'type': 'shape',
#     'samples': dict((skey, ['1', '1']) for skey in mc),
#     'folderUp': makeMCDirectory('MupTup'),
#     'folderDown': makeMCDirectory('MupTdo'),
#     'AsLnN': '1'
# }

##### Jet energy scale

# nuisances['jes'] = {
#     'name': 'CMS_scale_j_2017',
#     'kind': 'tree',
#     'type': 'shape',
#     'samples': dict((skey, ['1', '1']) for skey in mc),
#     'folderUp': makeMCDirectory('JESup'),
#     'folderDown': makeMCDirectory('JESdo'),
#     'AsLnN': '1'
# }

##### MET energy scale

# nuisances['met'] = {
#     'name': 'CMS_scale_met_2017',
#     'kind': 'tree',
#     'type': 'shape',
#     'samples': dict((skey, ['1', '1']) for skey in mc),
#     'folderUp': makeMCDirectory('METup'),
#     'folderDown': makeMCDirectory('METdo'),
#     'AsLnN': '1'
# }

##### Pileup

nuisances['PU'] = {
    'name': 'CMS_PU_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'DY': ['0.993259983266*(puWeightUp/puWeight)', '0.997656381501*(puWeightDown/puWeight)'],
        'top': ['1.00331969187*(puWeightUp/puWeight)', '0.999199609528*(puWeightDown/puWeight)'],
        'WW': ['1.0033022059*(puWeightUp/puWeight)', '0.997085330608*(puWeightDown/puWeight)'],
        'ggH_hww': ['1.0036768006*(puWeightUp/puWeight)', '0.995996570285*(puWeightDown/puWeight)'],
        'qqH_hww': ['1.00374694528*(puWeightUp/puWeight)', '0.995878596852*(puWeightDown/puWeight)'],
    },
    'AsLnN': '1',
}
#
# ##### PS and UE
psweights = ['PSWeight[0]', 'PSWeight[1]', 'PSWeight[2]', 'PSWeight[3]']

nuisances['PS']  = {
    'name': 'PS',
    'type': 'shape',
    'kind': 'weight_envelope',
    'samples': {
        'WW': ['PSWeight[0]', 'PSWeight[1]', 'PSWeight[2]', 'PSWeight[3]'],
    },
    'AsLnN': '1',
    'samplespost': lambda self, samples: dict([('WW', ['1.', '1.'])] + [(sname, ['1.', '1.']) for sname in samples if 'ggH_hww' in sname or 'qqH_hww' in sname])
}


# nuisances['UE']  = {
#                 'name'  : 'UE',
#                 'skipCMS' : 1,
#                 'kind'  : 'tree',
#                 'type'  : 'shape',
#                 'samples'  : {
# #                  'WW'      : ['1.12720771849', '1.13963144574'],
#                   'ggH_hww' : ['1.00211385568', '0.994966378288'],
#                   'qqH_hww' : ['1.00367895901', '0.994831373195']
#                 },
#                 'folderUp': makeMCDirectory('UEup'),
#                 'folderDown': makeMCDirectory('UEdo'),
#                 'AsLnN'      : '1',
#                 'synchronized': False
# }



# ####### Generic "cross section uncertainties"

apply_on = {
    'top': [
        '(topGenPtOTF * antitopGenPtOTF <= 0.) * 1.0816 + (topGenPtOTF * antitopGenPtOTF > 0.)',
        '(topGenPtOTF * antitopGenPtOTF <= 0.) * 0.9184 + (topGenPtOTF * antitopGenPtOTF > 0.)'
    ]
}

nuisances['singleTopToTTbar'] = {
    'name': 'singleTopToTTbar',
    'skipCMS': 1,
    'kind': 'weight',
    'type': 'shape',
    'samples': apply_on
}

## Top pT reweighting uncertainty
# currently replaced by QCD scale
# nuisances['TopPtRew'] = {
#     'name': 'CMS_topPtRew',   # Theory uncertainty
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': {'top': ["Top_pTrw*Top_pTrw", "1."]},
#     'symmetrize': True
# }

nuisances['VgStar'] = {
    'name': 'hww_VgStarScale',
    'type': 'lnN',
    'samples': {
        'VgS_L': '1.25'
    }
}

nuisances['VZ'] = {
    'name': 'hww_VZScale',
    'type': 'lnN',
    'samples': {
        'VgS_H': '1.16'
    }
}

###### pdf uncertainties

valuesggh  = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH', '125.09','pdf','sm')
valuesggzh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm')
valuesbbh  = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH', '125.09','pdf','sm')

nuisances['pdf_Higgs_gg'] = {
    'name': 'pdf_Higgs_gg',
    'samples': {
        'ggH_hww' : valuesggh,
        'ggH_htt' : valuesggh,
        'ggZH_hww': valuesggzh,
        'bbH_hww' : valuesbbh
    },
    'type': 'lnN',
}
for m in massggh:
    # FIXME: sample names (everywhere actually)
    values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH',int(m),'pdf','bsm')
    nuisances['pdf_Higgs_gg']['samples'].update({'GGH_'+m: values})
    nuisances['pdf_Higgs_gg']['samples'].update({'GGHSBI_'+m: values})
    nuisances['pdf_Higgs_gg']['samples'].update({'MSSMGGH_'+m: values})
    nuisances['pdf_Higgs_gg']['samples'].update({'MSSMGGHSBI_'+m: values})



valuesqqh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm')
valueswh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','pdf','sm')
valueszh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','pdf','sm')

nuisances['pdf_Higgs_qqbar'] = {
    'name': 'pdf_Higgs_qqbar',
    'type': 'lnN',
    'samples': {
        'qqH_hww': valuesqqh,
        'qqH_htt': valuesqqh,
        'WH_hww': valueswh,
        'WH_htt': valueswh,
        'ZH_hww': valueszh,
        'ZH_htt': valueszh
    },
}
for m in massvbf:
    values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'bsm')
    nuisances['pdf_Higgs_qqbar']['samples'].update({'QQH_'+m: values})
    nuisances['pdf_Higgs_qqbar']['samples'].update({'QQHSBI_'+m: values})
    nuisances['pdf_Higgs_qqbar']['samples'].update({'MSSMQQH_'+m: values})
    nuisances['pdf_Higgs_qqbar']['samples'].update({'MSSMQQHSBI_'+m: values})



values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','pdf','sm')

nuisances['pdf_Higgs_ttH'] = {
    'name': 'pdf_Higgs_ttH',
    'samples': {
        'ttH_hww': values
    },
    'type': 'lnN',
}


#FIXME: check this 4%
nuisances['pdf_qqbar'] = {
    'name': 'pdf_qqbar',
    'type': 'lnN',
    'samples': {
        'Vg': '1.04',
        'VZ': '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
        'VgS': '1.04', # PDF: 0.0064 / 0.1427 = 0.0448493
    },
}


nuisances['pdf_Higgs_gg_ACCEPT'] = {
    'name': 'pdf_Higgs_gg_ACCEPT',
    'samples': {
        'ggH_hww': '1.006',
        'ggH_htt': '1.006',
        'ggZH_hww': '1.006',
        'bbH_hww': '1.006'
    },
    'type': 'lnN',
}
for m in massggh:
    if int(m)<1500:
        nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'GGH_'+m+model_name:'1.007'})
        nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'GGHSBI_'+m+model_name:'1.010'})
        nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'MSSMGGH_'+m:'1.007'})
        nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'MSSMGGHSBI_'+m:'1.010'})
    elif int(m)>1499:
        nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'GGH_'+m+model_name:'1.012'})
        nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'GGHSBI_'+m+model_name:'1.035'})
        nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'MSSMGGH_'+m:'1.012'})
        nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'MSSMGGHSBI_'+m:'1.035'})


nuisances['pdf_gg_ACCEPT'] = {
    'name': 'pdf_gg_ACCEPT',
    'samples': {
        'ggWW': '1.006',
    },
    'type': 'lnN',
}


nuisances['pdf_Higgs_qqbar_ACCEPT'] = {
    'name': 'pdf_Higgs_qqbar_ACCEPT',
    'type': 'lnN',
    'samples': {
        'qqH_hww': '1.002',
        'qqH_htt': '1.002',
        'WH_hww': '1.003',
        'WH_htt': '1.003',
        'ZH_hww': '1.002',
        'ZH_htt': '1.002',
    },
}
for m in massvbf:
    if int(m)<1000:
      nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'QQH_'+m+model_name:'1.005'})
      nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'QQHSBI_'+m+model_name:'1.005'})
      nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'MSSMQQH_'+m:'1.005'})
      nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'MSSMQQHSBI_'+m:'1.005'})
    elif int(m)>999:
      nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'QQH_'+m+model_name:'1.015'})
      nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'QQHSBI_'+m+model_name:'1.015'})
      nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'MSSMQQH_'+m:'1.015'})
      nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'MSSMQQHSBI_'+m:'1.015'})



nuisances['pdf_qqbar_ACCEPT'] = {
    'name': 'pdf_qqbar_ACCEPT',
    'type': 'lnN',
    'samples': {
        'VZ': '1.001',
    },
}

##### Renormalization & factorization scales

## Shape nuisance due to QCD scale variations for DY
# LHE scale variation weights (w_var / w_nominal)
# [0] is muR=0.50000E+00 muF=0.50000E+00
# [1] is muR=0.50000E+00 muF=0.10000E+01
# [2] is muR=0.50000E+00 muF=0.20000E+01
# [3] is muR=0.10000E+01 muF=0.50000E+00
# [4] is muR=0.10000E+01 muF=0.10000E+01
# [5] is muR=0.10000E+01 muF=0.20000E+01
# [6] is muR=0.20000E+01 muF=0.50000E+00
# [7] is muR=0.20000E+01 muF=0.10000E+01
# [8] is muR=0.20000E+01 muF=0.20000E+01

variations = ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 5, 7, 8]]

nuisances['QCDscale_V'] = {
    'name': 'QCDscale_V',
    'skipCMS': 1,
    'kind': 'weight',
    'type': 'shape',
    'samples': {'DY': ['LHEScaleWeight[7]', 'LHEScaleWeight[0]']},
    'AsLnN': '1'
}


# Variations for all other samples are consistent.
variations = ['Alt$(LHEScaleWeight[%d], 1)' % i for i in [0, 1, 3, 5, 7, 8]]

nuisances['QCDscale_WWJJ']  = {
    'name'  : 'QCDscale_WWJJ',
    'skipCMS' : 1,
    'kind'  : 'weight_envelope',
    'type'  : 'shape',
    'samples'  : {
       'qqWWqq' : variations, # TODO Does this belong in here? If yes, should add for SBI too
       'WW2J' : variations,
    }
}
for MX in massvbf:
    nuisances['QCDscale_WWJJ']['samples'].update({'QQHSBI_'+MX+model_name : variations})


# FIXME: LHEScaleWeight missing apparently
nuisances['QCDscale_VV'] = {
    'name': 'QCDscale_VV',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {
        'Vg': variations,
        # 'VZ': variations, #FIXME not all VZ have LHEScaleWeight
        'VgS': variations
    }
}

# ggww and interference
nuisances['QCDscale_ggVV'] = {
    'name': 'QCDscale_ggVV',
    'type': 'lnN',
    'samples': {
        'ggWW': '1.15',
    },
}


nuisances['QCDscale_ttbar']  = {
    'name' : 'QCDscale_ttbar',
    'kind' : 'weight_envelope',
    'type' : 'shape',
    'samples'  : {
        'top' : variations,
    }
}



# Uncertainty on SR/CR ratio
# apparently will be done differently for Wjets
# nuisances['CRSR_accept_SB'] = {
#     'name': 'hww_CRSR_accept_SB',
#     'type': 'lnN',
#     'samples': {'Wjets': '1.02'}, # TODO what value does this have to be?
#     #'samples': {'DY': '1.1'},
#     'cuts': [cut for cut in cuts if 'SB' in cut],
#     #'cutspost': (lambda self, cuts: [cut for cut in cuts if '_DY_' in cut and cut in self['cuts']]),
#     'cutspost': (lambda self, cuts: [cut for cut in cuts if 'SB' in cut]),
#     #'perRecoBin': True
# }

# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_top'] = {
    'name': 'hww_CRSR_accept_top',
    'type': 'lnN',
    'samples': {'top': '1.01'},
    #'samples': {'top': '1.05'},
    'cuts': [cut for cut in cuts if 'TopCR' in cut],
    'cutspost': (lambda self, cuts: [cut for cut in cuts if 'TopCR' in cut]),
}

# Theory uncertainty for ggH
#
#
#   THU_ggH_Mu, THU_ggH_Res, THU_ggH_Mig01, THU_ggH_Mig12, THU_ggH_VBF2j, THU_ggH_VBF3j, THU_ggH_PT60, THU_ggH_PT120, THU_ggH_qmtop
#
#   see https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SignalModelingTools

# thus = [
#     ('THU_ggH_Mu', 'ggH_mu'),
#     ('THU_ggH_Res', 'ggH_res'),
#     ('THU_ggH_Mig01', 'ggH_mig01'),
#     ('THU_ggH_Mig12', 'ggH_mig12'),
#     ('THU_ggH_VBF2j', 'ggH_VBF2j'),
#     ('THU_ggH_VBF3j', 'ggH_VBF3j'),
#     ('THU_ggH_PT60', 'ggH_pT60'),
#     ('THU_ggH_PT120', 'ggH_pT120'),
#     ('THU_ggH_qmtop', 'ggH_qmtop')
# ]
#
# for name, vname in thus:
#     updown = [vname, '2.-%s' % vname]
#
#     nuisances[name] = {
#         'name': name,
#         'skipCMS': 1,
#         'kind': 'weight',
#         'type': 'shape',
#         'samples': {
#           'ggH_hww': updown,
#           #'ggH_htt': updown
#         }
#     }





#### QCD scale uncertainties for Higgs signals
values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','scale','sm')
nuisances['QCDscale_ggH'] = {
    'name': 'QCDscale_ggH',
    'samples': {
        'ggH_hww': values,
        'ggH_htt': values
    },
    'type': 'lnN'
}
nuisances['QCDscale']  = {
               'name'  : 'QCDscale_ggH',
               'kind'  : 'weight_envelope',
               'samples'  : {},
               'type'  : 'shape',
              }
# Currently doing ggH QCD scale uncertainties on event-by-event basis (like background) instead of using StuartTackmann
for m in massggh:
  nuisances['QCDscale']['samples'].update({'GGH_'+m+model_name: ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 5, 7, 8]]})
  nuisances['QCDscale']['samples'].update({'GGHSBI_'+m+model_name: ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 5, 7, 8]]})
  nuisances['QCDscale']['samples'].update({'MSSMGGH_'+m+model_name: ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 5, 7, 8]]})
  nuisances['QCDscale']['samples'].update({'MSSMGGHSBI_'+m+model_name: ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 5, 7, 8]]})


values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm')
nuisances['QCDscale_qqH'] = {
    'name': 'QCDscale_qqH',
    'samples': {
        'qqH_hww': values,
        'qqH_htt': values
    },
    'type': 'lnN'
}
for m in massvbf:
    values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'scale','bsm')
    nuisances['QCDscale_qqH']['samples'].update({
        'QQH_'+m+model_name: values
    })
    nuisances['QCDscale_qqH']['samples'].update({
        'QQHSBI_'+m+model_name: values
    })
    nuisances['QCDscale_qqH']['samples'].update({
        'MSSMQQH_'+m+model_name: values
    })
    nuisances['QCDscale_qqH']['samples'].update({
        'MSSMQQHSBI_'+m+model_name: values
    })



valueswh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm')
valueszh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm')

nuisances['QCDscale_VH'] = {
    'name': 'QCDscale_VH',
    'samples': {
        'WH_hww': valueswh,
        'WH_htt': valueswh,
        'ZH_hww': valueszh,
        'ZH_htt': valueszh
    },
    'type': 'lnN',
}

values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','scale','sm')

nuisances['QCDscale_ggZH'] = {
    'name': 'QCDscale_ggZH',
    'samples': {
        'ggZH_hww': values
    },
    'type': 'lnN',
}

values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','scale','sm')

nuisances['QCDscale_ttH'] = {
    'name': 'QCDscale_ttH',
    'samples': {
        'ttH_hww': values
    },
    'type': 'lnN',
}

nuisances['QCDscale_WWewk'] = {
    'name': 'QCDscale_WWewk',
    'samples': {
        'WWewk': '1.11',
    },
    'type': 'lnN'
}

nuisances['QCDscale_qqbar_ACCEPT'] = {
    'name': 'QCDscale_qqbar_ACCEPT',
    'type': 'lnN',
    'samples': {
        'qqH_hww': '1.003',
        'qqH_htt': '1.003',
        'WH_hww': '1.010',
        'WH_htt': '1.010',
        'ZH_hww': '1.015',
        'ZH_htt': '1.015',
        # 'VZ': '1.004', # this shouldn't be here because we have full shape-based uncertainty for VZ
    }
}

nuisances['QCDscale_gg_ACCEPT'] = {
    'name': 'QCDscale_gg_ACCEPT',
    'samples': {
        'ggH_hww': '1.012',
        'ggH_htt': '1.012',
        'ggZH_hww': '1.012',
        'ggWW': '1.012',
    },
    'type': 'lnN',
}






# Replace lnN nuisances (from QCD and PDF only -> Other lnN nuisance are consistent across SBI) for samples contributing to SBI with shape:
oldnuisances = copy.deepcopy(nuisances)
for nuis in oldnuisances:
    if nuisances[nuis]['type'] == "lnN" and (("QCD" in nuis) or ("pdf" in nuis)):
        for samp in oldnuisances[nuis]['samples']:
            if not(
                ("GGH" in samp) or
                ("QQH" in samp) or
                (samp in ["ggWW", "ggH_hww", "qqWWqq", "qqH_hww"])
            ): continue
            # 'else' from inverted logic above:
            lnNval = nuisances[nuis]['samples'][samp]
            if "/" in lnNval:
                lnNvalUp = lnNval.split('/')[0]
                lnNvalDn = lnNval.split('/')[1]
            else:
                lnNvalUp = lnNval
                lnNvalDn = str(1.0/float(lnNval))
            if nuis+'_shape' in nuisances:
                nuisances[nuis+'_shape']['samples'].update({samp: [lnNvalUp, lnNvalDn]})
            else:
                nuisances[nuis+'_shape'] = {
                    'name'  : nuisances[nuis]['name'],
                    'kind'  : 'weight',
                    'type'  : 'shape',
                    'samples' : { samp : [lnNvalUp, lnNvalDn] },
                    }
            del nuisances[nuis]['samples'][samp]
            if nuisances[nuis]['samples'] == {}: del nuisances[nuis]





## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat'] = {
    'type': 'auto',
    'maxPoiss': '10',
    'includeSignal': '0',
    #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
    #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
    'samples': {}
}

# # ##rate parameters
# leptons = ['Ele', 'Muon']
# categories = ['Boost', 'Resolv']
# subcategories = ['Untag', 'VBF']
# controlRegions = ['Wjets', 'top']
#
# for lepton in leptons:
#     for cat in categories:
#         for subcat in subcategories:
#             for region in controlRegions:
#                 nuisances[region+'Norm'+lepton+cat+subcat] = {
#                     'name': 'CMS_hww_'+region+'Norm'+lepton+cat+subcat,
#                     'samples': {region: '1.00',},
#                     'type': 'rateParam',
#                     'cuts' : set.intersection(cutdict[lepton], cutdict[cat], cutdict[subcat])
#                 }










StatSwitch = False
if StatSwitch:
    nuisances['stat']  = {
        # apply to the following samples: name of samples here must match keys in samples.py
        'samples'  : {

         'ggWW': {
               'typeStat' : 'bbb',
               'zeroMCError' : '0',
               'correlate': []
         },
         'ggH_hww':{
               'typeStat' : 'bbb',
               'zeroMCError' : '0',
               'correlate': []
         },
         'qqWWqq': {
              'typeStat' : 'bbb',
               'zeroMCError' : '0',
               'correlate': []
         },
         'qqH_hww':{
               'typeStat' : 'bbb',
               'zeroMCError' : '0',
               'correlate': []
         },


        },
        'type'  : 'shape'
        }

    for m in massggh:
        nuisances['stat']['samples']['GGH_'+m+model_name] = { 'typeStat' : 'bbb', 'zeroMCError' : '0', 'correlate': [] }
        nuisances['stat']['samples']['ggWW']["correlate"].append('GGHSBI_'+m+model_name)
        nuisances['stat']['samples']['ggH_hww']["correlate"].append('GGHSBI_'+m+model_name)
        nuisances['stat']['samples']['GGH_'+m+model_name]['correlate'].append('GGHSBI_'+m+model_name)

        nuisances['stat']['samples']['MSSMGGH_'+m] = { 'typeStat' : 'bbb', 'zeroMCError' : '0', 'correlate': [] }
        nuisances['stat']['samples']['ggWW']["correlate"].append('MSSMGGHSBI_'+m)
        nuisances['stat']['samples']['ggH_hww']["correlate"].append('MSSMGGHSBI_'+m)
        nuisances['stat']['samples']['MSSMGGH_'+m+model_name]['correlate'].append('MSSMGGHSBI_'+m)

    for m in massvbf:
        nuisances['stat']['samples']['QQH_'+m+model_name] = { 'typeStat' : 'bbb', 'zeroMCError' : '0', 'correlate': [] }
        nuisances['stat']['samples']['qqWWqq']["correlate"].append('QQHSBI_'+m+model_name)
        nuisances['stat']['samples']['qqH_hww']["correlate"].append('QQHSBI_'+m+model_name)
        nuisances['stat']['samples']['QQH_'+m+model_name]['correlate'].append('QQHSBI_'+m+model_name)

        nuisances['stat']['samples']['MSSMQQH_'+m] = { 'typeStat' : 'bbb', 'zeroMCError' : '0', 'correlate': [] }
        nuisances['stat']['samples']['qqWWqq']["correlate"].append('MSSMQQHSBI_'+m)
        nuisances['stat']['samples']['qqH_hww']["correlate"].append('MSSMQQHSBI_'+m)
        nuisances['stat']['samples']['MSSMQQH_'+m]['correlate'].append('MSSMQQHSBI_'+m)










for n in nuisances.values():
    n['skipCMS'] = 1

print(' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat')))
