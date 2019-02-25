# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py 

# imported from samples.py:
# samples, treeBaseDir, makeMCDirectory
# imported from cuts.py
# cuts

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

from LatinoAnalysis.Tools.HiggsXSection import *
HiggsXS = HiggsXSection()

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

# Will be dropped from DY, top, and WW but that's taken care of in datacard generation
nuisances['lumi'] = {
    'name': 'lumi_13TeV',
    'type': 'lnN',
    'samples': dict((skey, '1.025') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

#### FAKES

nuisances['fake_syst'] = {
    'name': 'CMS_fake_syst_2016',
    'type': 'lnN',
    'samples': {
        'Fake': '1.30',
    }
}

nuisances['fake_ele'] = {
    'name': 'CMS_fake_e_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWeightEleUp', 'fakeWeightEleDown'],
    },
    'AsLnN': '1'
}

nuisances['fake_ele_stat'] = {
    'name': 'CMS_fake_stat_e_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWeightStatEleUp', 'fakeWeightStatEleDown'],
    }
}

nuisances['fake_mu'] = {
    'name': 'CMS_fake_m_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWeightMuUp', 'fakeWeightMuDown'],
    },
    'AsLnN': '1'
}

nuisances['fake_mu_stat'] = {
    'name': 'CMS_fake_stat_m_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWeightStatMuUp', 'fakeWeightStatMuDown'],
    }
}

##### B-tagger

nuisances['btagbc'] = {
    'name': 'CMS_btag_heavy_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['sfWeightBtagBCUp', 'sfWeightBtagBCDown']) for skey in mc),
    'samplespost': (lambda self, samples: dict((skey, ['1', '1']) for skey in samples if skey not in ('Fake', 'DATA', 'top'))),
    'cutspost': (lambda self, cuts: [cut for cut in cuts if '_top_' not in cut])
}

nuisances['btagudsg'] = {
    'name': 'CMS_btag_light_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['sfWeightBtagUDSGUp', 'sfWeightBtagUDSGDown']) for skey in mc),
    'samplespost': (lambda self, samples: dict((skey, ['1', '1']) for skey in samples if skey not in ('Fake', 'DATA', 'top'))),
    'cutspost': (lambda self, cuts: [cut for cut in cuts if '_top_' not in cut])
}

nuisances['btagbc_top'] = {
    'name': 'CMS_btag_heavy_top_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': {'top': ['sfWeightBtagBCUp', 'sfWeightBtagBCDown']},
    'cuts': [cut for cut in cuts if '_CR_' in cut],
    'cutspost': (lambda self, cuts: [cut for cut in cuts if '_top_' in cut]),
}

nuisances['btagudsg_top'] = {
    'name': 'CMS_btag_light_top_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': {'top': ['sfWeightBtagUDSGUp', 'sfWeightBtagUDSGDown']},
    'cuts': [cut for cut in cuts if '_CR_' in cut],
    'cutspost': (lambda self, cuts: [cut for cut in cuts if '_top_' in cut]),
}

##### Trigger Efficiency

trig_syst = ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)']

nuisances['trigg'] = {
    'name': 'CMS_eff_hwwtrigger_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc)
}

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
    'name': 'CMS_eff_e_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['sfWeightEleUp', 'sfWeightEleDown']) for skey in mc)
}

nuisances['electronpt'] = {
    'name': 'CMS_scale_e_2016',
    'kind': 'tree',
    'type': 'shape',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('LepElepTup'),
    'folderDown': makeMCDirectory('LepElepTdo'),
    'AsLnN': '1'
}

elePtCor_Syst = ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l']

nuisances['elePtCor'] = {
    'name': 'CMS_eff_e_residual_pt_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, elePtCor_Syst) for skey in mc)
}

eleEtaCor_Syst = ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l']

nuisances['eleEtaCor'] = {
    'name': 'CMS_eff_e_residual_eta_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, eleEtaCor_Syst) for skey in mc)
}


##### Muon Efficiency and energy scale

nuisances['eff_m'] = {
    'name': 'CMS_eff_m_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['sfWeightMuUp', 'sfWeightMuDown']) for skey in mc)
}

nuisances['muonpt'] = {
    'name': 'CMS_scale_m_2016',
    'kind': 'tree',
    'type': 'shape',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('LepMupTup'),
    'folderDown': makeMCDirectory('LepMupTdo'),
    'AsLnN': '1'
}

##### Jet energy scale

nuisances['jes'] = {
    'name': 'CMS_scale_j_2016',
    'kind': 'tree',
    'type': 'shape',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('JESup'),
    'folderDown': makeMCDirectory('JESdo'),
    'AsLnN': '1'
}

##### MET energy scale

nuisances['met'] = {
    'name': 'CMS_scale_met_2016',
    'kind': 'tree',
    'type': 'shape',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('METup'),
    'folderDown': makeMCDirectory('METdo'),
    'samplespost': (lambda self, samples: dict((skey, ['1', '1']) for skey in samples if skey not in ('Fake', 'DATA', 'DY'))),
    'cutspost': (lambda self, cuts: [cut for cut in cuts if '_DY_' not in cut]),
    'AsLnN': '1'
}

nuisances['met_DY'] = {
    'name': 'CMS_scale_met_DYCR_2016',
    'kind': 'tree',
    'type': 'shape',
    'samples': {'DY': ['1', '1']},
    'folderUp': makeMCDirectory('METup'),
    'folderDown': makeMCDirectory('METdo'),
    'cuts': [cut for cut in cuts if '_CR_' in cut],
    'cutspost': (lambda self, cuts: [cut for cut in cuts if '_DY_' in cut]),
    'AsLnN': '1'
}

##### PS and UE

## These numbers are used to normalize the PS variation to the same integral as the nominal after the wwSel skim
#apply_on = {
#  'WW': ['0.92657', '1.'],
#  'ggH_hww': ['0.98554', '1.'],
#  'qqH_hww': ['0.92511', '1.']
#}
# -> will do this programmatically

apply_on = {
    'WW': ['1.', '1.'],
    'ggH_hww': ['1.', '1.'],
    'qqH_hww': ['1.', '1.']
}

nuisances['PS'] = {
    'name': 'PS',
    'skipCMS': 1,
    'kind': 'tree',
    'type': 'shape',
    'samples': apply_on,
    'folderUp': makeMCDirectory('PS'),
    'folderDown': makeMCDirectory(),
    'AsLnN': '1'
}

## Normalize the UE up/down variations to the same integral as the nominal after the wwSel skim
#apply_on = {
#    'WW': ['1.0226', '0.9897'],
#    'ggH_hww': ['1.0739', '1.0211'],
#    'qqh_hww': ['1.0560', '0.9992']
#}

apply_on = {
    'WW': ['1.', '1.'],
    'ggH_hww': ['1.', '1.'],
    'qqH_hww': ['1.', '1.']
}

nuisances['UE'] = {
    'name': 'UE', 
    'skipCMS': 1,
    'kind': 'tree',
    'type': 'shape',
    'samples': apply_on,
    'folderUp': makeMCDirectory('UEup'),
    'folderDown': makeMCDirectory('UEdo'),
    'AsLnN': '1',
}

####### Generic "cross section uncertainties"

# ttbar / single top ratio uncertainty
apply_on = {
    'top': [
        '((dataset==15 || dataset==16) * 1.0816 + (dataset==17 || dataset==18 || dataset==19))',
        '((dataset==15 || dataset==16) * 0.9184 + (dataset==17 || dataset==18 || dataset==19))'
    ]
}

nuisances['singleTopToTTbar'] = {
    'name': 'singleTopToTTbar',
    'skipCMS': 1,
    'kind': 'weight',
    'type': 'shape',
    'samples': apply_on
    # tt = 17/18/19 depending on the sample/generator
    # tW = 15/16
}

## Top pT reweighting uncertainty

nuisances['TopPtRew'] = {
    'name': 'CMS_topPtRew',   # Theory uncertainty
    'kind': 'weight',
    'type': 'shape',
    'samples': {'top': ["1.","((1./toprwgt - 1)*(dataset==19) + 1)"]}
}

nuisances['WgStarScale'] = {
    'name': 'CMS_hww_WgStarScale',
    'type': 'lnN',
    'samples': {
        'WZgS_L': '1.25' # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
    },
}
 
nuisances['WZScale'] = {
    'name': 'CMS_hww_WZScale',
    'type': 'lnN',
    'samples': {
        'WZgS_H': '1.16',
    },
}

###### pdf uncertainties

## All shifts on signal have to be renormalized at the datacard generation step

valuesggh = HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.09','pdf','sm')
valuesggzh = HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.09','pdf','sm')
valuesbbh = HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','bbH','125.09','pdf','sm')

nuisances['pdf_Higgs_gg'] = {
    'name': 'pdf_Higgs_gg',
    'samples': {
        'ggH_hww': valuesggh,
        'ggH_htt': valuesggh,
        'ggZH_hww': valuesggzh,
        'bbH_hww': valuesbbh
    },
    'type': 'lnN',
}

values = HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ttH','125.09','pdf','sm')

nuisances['pdf_Higgs_ttH'] = {
    'name': 'pdf_Higgs_ttH',
    'samples': {
        'ttH_hww': values
    },
    'type': 'lnN',
}

valuesqqh = HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.09','pdf','sm')
valueswh = HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH','125.09','pdf','sm')
valueszh = HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH','125.09','pdf','sm')

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

# PDF: 0.0064 / 0.1427 = 0.0448493

nuisances['pdf_qqbar'] = {
    'name': 'pdf_qqbar',
    'type': 'lnN',
    'samples': {
        'Vg': '1.04',
        'VZ': '1.04', 
        'WZgS_L': '1.04', # PDF: 0.0064 / 0.1427 = 0.0448493
        'WZgS_H': '1.04' # PDF: 0.0064 / 0.1427 = 0.0448493
    },
}

## acceptance effects

nuisances['pdf_Higgs_gg_ACCEPT'] = {
    'name': 'pdf_Higgs_gg_ACCEPT',
    'samples': {
        'ggH_hww': '1.005',
        'ggH_htt': '1.005',
        'ggZH_hww': '1.005',
        'bbH_hww': '1.005'
    },
    'type': 'lnN',
}

nuisances['pdf_gg_ACCEPT'] = {
    'name': 'pdf_gg_ACCEPT',
    'samples': {
        'ggWW': '1.005',
    },
    'type': 'lnN',
}

nuisances['pdf_Higgs_qqbar_ACCEPT'] = {
    'name': 'pdf_Higgs_qqbar_ACCEPT',
    'type': 'lnN',
    'samples': {
        'qqH_hww': '1.011',
        'qqH_htt': '1.011',
        'WH_hww': '1.007',
        'WH_htt': '1.007',
        'ZH_hww': '1.012',
        'ZH_htt': '1.012',
    },
}

nuisances['pdf_qqbar_ACCEPT'] = {
    'name': 'pdf_qqbar_ACCEPT',
    'type': 'lnN',
    'samples': {
        'VZ': '1.005',
    },
}

##### Renormalization & factorization scales

# Shape nuisance due to QCD scale variations for DY
nuisances['QCDscale_V'] = {
    'name': 'QCDscale_V',
    'skipCMS': 1,
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'DY': ['std_vector_LHE_weight[8]/std_vector_LHE_weight[0]', 'std_vector_LHE_weight[4]/std_vector_LHE_weight[0]']
    },
    'AsLnN': '1'
}

nuisances['QCDscale_VV'] = {
    'name': 'QCDscale_VV',
    'type': 'lnN',
    'samples': {
        'VZ': '1.03',
        'WZgS_L': '1.03',
        'WZgS_H': '1.03'
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

# NLL resummation variations
nuisances['Resumscale_WW'] = {
    'name': 'CMS_hww_WWresum',
    'skipCMS': 1,
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'WW': ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
    },
    'perRecoBin': True
}

nuisances['QCDscale_WW'] = {
    'name': 'CMS_hww_WWqscale',
    'skipCMS': 1,
    'kind': 'weight',
    'type': 'shape',
    'samples': {
      'WW': ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
    },
    'perRecoBin': True
}

# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_DY'] = {
    'name': 'CMS_hww_CRSR_accept_DY',
    'type': 'lnN',
    'samples': {'DY': '1.02'},
    'cuts': [cut for cut in cuts if '_CR_' in cut],
    'cutspost': (lambda self, cuts: [cut for cut in cuts if '_DY_' in cut and cut in self['cuts']]),
    'perRecoBin': True
}

# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_top'] = {
    'name': 'CMS_hww_CRSR_accept_top',
    'type': 'lnN',
    'samples': {'top': '1.01'},
    'cuts': [cut for cut in cuts if '_CR_' in cut],
    'cutspost': (lambda self, cuts: [cut for cut in cuts if '_top_' in cut and cut in self['cuts']]),
    'perRecoBin': True
}

# Theory uncertainty for ggH
#
#
#   THU_ggH_Mu, THU_ggH_Res, THU_ggH_Mig01, THU_ggH_Mig12, THU_ggH_VBF2j, THU_ggH_VBF3j, THU_ggH_PT60, THU_ggH_PT120, THU_ggH_qmtop
#
#   see https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SignalModelingTools

thus = [
    ('THU_ggH_Mu', 'ggH_mu'),
    ('THU_ggH_Res', 'ggH_res'),
    ('THU_ggH_Mig01', 'ggH_mig01'),
    ('THU_ggH_Mig12', 'ggH_mig12'),
    ('THU_ggH_VBF2j', 'ggH_VBF2j'),
    ('THU_ggH_VBF3j', 'ggH_VBF3j'),
    ('THU_ggH_PT60', 'ggH_pT60'),
    ('THU_ggH_PT120', 'ggH_pT120'),
    ('THU_ggH_qmtop', 'ggH_qmtop')
]

for name, vname in thus:
    updown = [vname, '2.-%s' % vname]
    
    nuisances[name] = {
        'name': name,
        'skipCMS': 1,
        'kind': 'weight',
        'type': 'shape',
        'samples': {
          'ggH_hww': updown,
          'ggH_htt': updown
        }
    }

#### QCD scale uncertainties for Higgs signals other than ggH
# These shifts change the shape of smH but do not have acceptance effects
# -> renormalize smH at datacard generation step

values = HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.09','scale','sm')

nuisances['QCDscale_qqH'] = {
    'name': 'QCDscale_qqH', 
    'samples': {
        'qqH_hww': values,
        'qqH_htt': values
    },
    'type': 'lnN'
}

valueswh = HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH','125.09','scale','sm')
valueszh = HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH','125.09','scale','sm')

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

values = HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.09','scale','sm')

nuisances['QCDscale_ggZH'] = {
    'name': 'QCDscale_ggZH', 
    'samples': {
        'ggZH_hww': values
    },
    'type': 'lnN',
}

values = HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','bbH','125.09','scale','sm')

nuisances['QCDscale_bbH'] = {
    'name': 'QCDscale_bbH',
    'samples': {
        'bbH_hww': values
    },
    'type': 'lnN',
}

values = HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ttH','125.09','scale','sm')

nuisances['QCDscale_ttH'] = {
    'name': 'QCDscale_ttH',
    'samples': {
        'ttH_hww': values
    },
    'type': 'lnN',
}

nuisances['QCDscale_qqbar_ACCEPT'] = {
    'name': 'QCDscale_qqbar_ACCEPT',
    'type': 'lnN',
    'samples': {
        'qqH_hww': '1.007',
        'qqH_htt': '1.007',
        'WH_hww': '1.05',
        'WH_htt': '1.05',
        'ZH_hww': '1.04',
        'ZH_htt': '1.04',
        'VZ': '1.029',
    }
}

nuisances['QCDscale_gg_ACCEPT'] = {
    'name': 'QCDscale_gg_ACCEPT',
    'samples': {
        'ggH_hww': '1.027',
        'ggH_htt': '1.027',
        'ggZH_hww': '1.027',
        'ggWW': '1.027',
    },
    'type': 'lnN',
}


## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat'] = {
    'type': 'auto',
    'maxPoiss': '10',
    'includeSignal': '1',
    #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
    #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
    'samples': {}
}

#### Use the following if you want to apply the MC stat nuisances accoriding to the standard approach
#nuisances['stat'] = {
#  'type': 'shape',
#  'samples': dict((skey, {'typeStat': 'bbb'}) for skey in mc + ['Fake'])
#}
#nuisances['stat']['samples']['DY']['keepNormalization'] = '1'

#mynuisances = {}
#mynuisances['electronpt'] = nuisances['electronpt']
#mynuisances['lumi'] = nuisances['lumi']
#nuisances = mynuisances

for n in nuisances.values():
    n['skipCMS'] = 1

#nuisances = {}
