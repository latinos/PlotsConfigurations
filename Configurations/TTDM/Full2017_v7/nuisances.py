# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py 

# imported from samples.py:
# samples, treeBaseDir, mcProduction, mcSteps
# imported from cuts.py
# cuts

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


# for k in cuts:
#   for cat in cuts[k]['categories']:
#     if '0j' in cat: cuts0j.append(k+'_'+cat)
#     elif '1j' in cat: cuts1j.append(k+'_'+cat)
#     elif '2j' in cat: cuts2j.append(k+'_'+cat)
#     else: print 'WARNING: name of category does not contain on either 0j,1j,2j'

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

#nuisances['lumi'] = {
#    'name': 'lumi_13TeV_2017',
#    'type': 'lnN',
#    'samples': dict((skey, '1.023') for skey in mc if skey not in ['WW', 'top', 'DY'])
#}

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2017',
    'type': 'lnN',
    'samples': dict((skey, '1.02') for skey in mc if skey not in ['WW', 'top','DY'])
}

nuisances['lumi_XYFact'] = {
    'name': 'lumi_13TeV_XYFact',
    'type': 'lnN',
    'samples': dict((skey, '1.008') for skey in mc if skey not in ['WW', 'top','DY'])
}

nuisances['lumi_LScale'] = {
    'name': 'lumi_13TeV_LSCale',
    'type': 'lnN',
    'samples': dict((skey, '1.003') for skey in mc if skey not in ['WW', 'top','DY'])
}

nuisances['lumi_BBDefl'] = {
    'name': 'lumi_13TeV_BBDefl',
    'type': 'lnN',
    'samples': dict((skey, '1.004') for skey in mc if skey not in ['WW', 'top','DY'])
}

nuisances['lumi_DynBeta'] = {
    'name': 'lumi_13TeV_DynBeta',
    'type': 'lnN',
    'samples': dict((skey, '1.005') for skey in mc if skey not in ['WW', 'top','DY'])
}

nuisances['lumi_CurrCalib'] = {
    'name': 'lumi_13TeV_CurrCalib',
    'type': 'lnN',
    'samples': dict((skey, '1.003') for skey in mc if skey not in ['WW', 'top','DY'])
}

nuisances['lumi_Ghosts'] = {
    'name': 'lumi_13TeV_Ghosts',
    'type': 'lnN',
    'samples': dict((skey, '1.001') for skey in mc if skey not in ['WW', 'top','DY'])
}

#### FAKES

nuisances['fake_syst'] = {
    'name': 'CMS_fake_syst_em',
    'type': 'lnN',
    'samples': {
        'Fake': '1.3'
    },
}

nuisances['fake_ele'] = {
    'name': 'CMS_fake_e_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWEleUp', 'fakeWEleDown'],
    }
}

nuisances['fake_ele_stat'] = {
    'name': 'CMS_fake_stat_e_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWStatEleUp', 'fakeWStatEleDown']
    }
}

nuisances['fake_mu'] = {
    'name': 'CMS_fake_m_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWMuUp', 'fakeWMuDown'],
    }
}

nuisances['fake_mu_stat'] = {
    'name': 'CMS_fake_stat_m_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWStatMuUp', 'fakeWStatMuDown'],
    }
}

##### B-tagger

for shift in ['jes', 'lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
    btag_syst = ['(btagSF%sup)/(btagSF)' % shift, '(btagSF%sdown)/(btagSF)' % shift]

    name = 'CMS_btag_%s' % shift
    if 'stats' in shift:
        name += '_2017'

    nuisances['btag_shape_%s' % shift] = {
        'name': name,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc),
    }

##### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_2l_u)/(TriggerEffWeight_2l))*(TriggerEffWeight_2l>0.02) + (TriggerEffWeight_2l<=0.02)', '(TriggerEffWeight_2l_d)/(TriggerEffWeight_2l)']

nuisances['trigg'] = {
    'name': 'CMS_eff_hwwtrigger_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc),
}

prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']

nuisances['prefire'] = {
    'name': 'CMS_eff_prefiring_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, prefire_syst) for skey in mc),
}

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
    'name': 'CMS_eff_e_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc),
}

nuisances['electronpt'] = {
    'name': 'CMS_scale_e_2017',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': 'ElepTup',
    'mapDown': 'ElepTdo',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('ElepTup_suffix'),
    'folderDown': makeMCDirectory('ElepTdo_suffix'),
    'AsLnN': '1'
}

##### Muon Efficiency and energy scale

nuisances['eff_m'] = {
    'name': 'CMS_eff_m_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc),
}

nuisances['muonpt'] = {
    'name': 'CMS_scale_m_2017',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': 'MupTup',
    'mapDown': 'MupTdo',
    'samples': dict((skey, ['1', '1']) for skey in mc if 'DH' not in skey),
    'folderUp': makeMCDirectory('MupTup_suffix'),
    'folderDown': makeMCDirectory('MupTdo_suffix'),
    'AsLnN': '1'
}
"""
##### Jet energy scale      
jes_systs = ['JESAbsolute','JESAbsolute_2017','JESBBEC1','JESBBEC1_2017','JESEC2','JESEC2_2017','JESFlavorQCD','JESHF','JESHF_2017','JESRelativeBal','JESRelativeSample_2017']
folderup = ""
folderdo = ""

for js in jes_systs:
    if 'Absolute' in js:
        folderup = makeMCDirectory('JESAbsoluteup_suffix')
        folderdo = makeMCDirectory('JESAbsolutedo_suffix')
    elif 'BBEC1' in js:
        folderup = makeMCDirectory('JESBBEC1up_suffix')
        folderdo = makeMCDirectory('JESBBEC1do_suffix')
    elif 'EC2' in js:
        folderup = makeMCDirectory('JESEC2up_suffix')
        folderdo = makeMCDirectory('JESEC2do_suffix')
    elif 'HF' in js:
        folderup = makeMCDirectory('JESHFup_suffix')
        folderdo = makeMCDirectory('JESHFdo_suffix')
    elif 'Relative' in js:
        folderup = makeMCDirectory('JESRelativeup_suffix')
        folderdo = makeMCDirectory('JESRelativedo_suffix')
    elif 'FlavorQCD' in js:
        folderup = makeMCDirectory('JESFlavorQCDup_suffix')
        folderdo = makeMCDirectory('JESFlavorQCDdo_suffix')

nuisances[js] = {
    'name': 'CMS_scale_'+js,
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': js+'up',
    'mapDown': js+'do',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': folderup,
    'folderDown': folderdo,
    'AsLnN': '1'
}
"""
"""
# Old version, not working any more with nanoAODv7
# #Jet energy scale
jes_systs = ['JESAbsolute','JESAbsolute_2017','JESBBEC1','JESBBEC1_2017','JESEC2','JESEC2_2017','JESFlavorQCD','JESHF','JESHF_2017','JESRelativeBal','JESRelativeSample_2017']

for js in jes_systs:
    nuisances[js] = {
        'name': 'CMS_scale_'+js,
        'kind': 'suffix',
        'type': 'shape',
        'mapUp': js+'up',
        'mapDown': js+'do',
        'samples': dict((skey, ['1', '1']) for skey in mc),
        'folderUp': makeMCDirectory('JESup_suffix'),
        'folderDown': makeMCDirectory('JESdo_suffix'),
        'AsLnN': '1'
    }
"""
##### MET energy scale

nuisances['met'] = {
    'name': 'CMS_scale_met_2017',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': 'METup',
    'mapDown': 'METdo',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('METup_suffix'),
    'folderDown': makeMCDirectory('METdo_suffix'),
    'AsLnN': '1'
}

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

##### PS

nuisances['PS_ISR']  = {
    'name': 'PS_ISR',
    'type': 'lnN',
    'samples': {
        'WW'     : '1.0004147/0.9990865',
        'top'    : '1.0038372/0.9949470',
        'DY'     : '1.0040364/0.9947131',
        'ggH_hww': '1.0024342/0.9966181',
        'qqH_hww': '1.0004923/0.9995787',
        'WH_hww' : '1.0012062/0.9985316',
        'ZH_hww' : '1.0007957/0.9989884',
    },
}

nuisances['PS_FSR']  = {
    'name': 'PS_FSR',
    'type': 'lnN',
    'samples': { 
        'WW'     : '0.9968231/1.0051404',
        'top'    : '0.9705783/1.0474730',
        'DY'     : '0.9974074/1.0048384',
        'ggH_hww': '0.9955678/1.0060251',
        'qqH_hww': '0.9866768/1.0239547',
        'WH_hww' : '0.9891188/1.0215866',
        'ZH_hww' : '0.9896471/1.0173018',
    },
}


# An overall 1.5% UE uncertainty will cover all the UEup/UEdo variations
# And we don't observe any dependency of UE variations on njet
nuisances['UE']  = {
                'name'  : 'UE_CP5',
                'skipCMS' : 1,
                'type': 'lnN',
                'samples': dict((skey, '1.015') for skey in mc), 
}

nuisances['UE']  = {
               'name'  : 'UE',
               'skipCMS' : 1,
               'kind'  : 'tree',
               'type'  : 'shape',
               'samples'  : {
                 #'WW'      : ['0.983486179', '0.99458805'], 
                 'ggH_hww' : ['0.994216746291', '1.020025863'],
                 'qqH_hww' : ['0.980501317842', '1.00876768329'],
               },
               'folderUp': makeMCDirectory('UEup'),
               'folderDown': makeMCDirectory('UEdo'),
               'AsLnN'      : '1',
               'synchronized': False
}

# ####### Generic "cross section uncertainties"

# apply_on = {
#     'top': [
#         '(topGenPt * antitopGenPt <= 0.) * 1.0816 + (topGenPt * antitopGenPt > 0.)',
#         '(topGenPt * antitopGenPt <= 0.) * 0.9184 + (topGenPt * antitopGenPt > 0.)'
#     ]
# }

# nuisances['singleTopToTTbar'] = {
#     'name': 'singleTopToTTbar',
#     'skipCMS': 1,
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': apply_on
# }

# ## Top pT reweighting uncertainty
 
nuisances['TopPtRew'] = {
    'name': 'CMS_topPtRew',   # Theory uncertainty
    'kind': 'weight',
    'type': 'shape',
    'samples': {'top': ["1.", "1./Top_pTrw"]},
    'symmetrize': True
}

nuisances['VgStar'] = {
    'name': 'CMS_hww_VgStarScale',
    'type': 'lnN',
    'samples': {
        'VgS_L': '1.25'
    }
}

nuisances['VZ'] = {
    'name': 'CMS_hww_VZScale',
    'type': 'lnN',
    'samples': {
        'VgS_H': '1.16'
    }
}

###### pdf uncertainties

# valuesggh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','pdf','sm')
# valuesggzh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm')
# valuesbbh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH','125.09','pdf','sm')

# nuisances['pdf_Higgs_gg'] = {
#     'name': 'pdf_Higgs_gg',
#     'samples': {
#         'ggH_hww': valuesggh,
#         'ggH_htt': valuesggh,
#         'ggZH_hww': valuesggzh,
#         'bbH_hww': valuesbbh
#     },
#     'type': 'lnN',
# }

# values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','pdf','sm')

# nuisances['pdf_Higgs_ttH'] = {
#     'name': 'pdf_Higgs_ttH',
#     'samples': {
#         'ttH_hww': values
#     },
#     'type': 'lnN',
# }

# valuesqqh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm')
# valueswh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','pdf','sm')
# valueszh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','pdf','sm')

# nuisances['pdf_Higgs_qqbar'] = {
#     'name': 'pdf_Higgs_qqbar',
#     'type': 'lnN',
#     'samples': {
#         'qqH_hww': valuesqqh,
#         'qqH_htt': valuesqqh,
#         'WH_hww': valueswh,
#         'WH_htt': valueswh,
#         'ZH_hww': valueszh,
#         'ZH_htt': valueszh
#     },
# }

# #FIXME: check this 4%
# nuisances['pdf_qqbar'] = {
#     'name': 'pdf_qqbar',
#     'type': 'lnN',
#     'samples': {
#         'Vg': '1.04',
#         'VZ': '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
#         'VgS': '1.04', # PDF: 0.0064 / 0.1427 = 0.0448493
#     },
# }

# nuisances['pdf_Higgs_gg_ACCEPT'] = {
#     'name': 'pdf_Higgs_gg_ACCEPT',
#     'samples': {
#         'ggH_hww': '1.006',
#         'ggH_htt': '1.006',
#         'ggZH_hww': '1.006',
#         'bbH_hww': '1.006'
#     },
#     'type': 'lnN',
# }

# nuisances['pdf_gg_ACCEPT'] = {
#     'name': 'pdf_gg_ACCEPT',
#     'samples': {
#         'ggWW': '1.006',
#     },
#     'type': 'lnN',
# }

# nuisances['pdf_Higgs_qqbar_ACCEPT'] = {
#     'name': 'pdf_Higgs_qqbar_ACCEPT',
#     'type': 'lnN',
#     'samples': {
#         'qqH_hww': '1.002',
#         'qqH_htt': '1.002',
#         'WH_hww': '1.003',
#         'WH_htt': '1.003',
#         'ZH_hww': '1.002',
#         'ZH_htt': '1.002',
#     },
# }

# nuisances['pdf_qqbar_ACCEPT'] = {
#     'name': 'pdf_qqbar_ACCEPT',
#     'type': 'lnN',
#     'samples': {
#         'VZ': '1.001',
#     },
# }

# #*Br    1 :LHEScaleWeight :                                                   *
# #*         | Float_t LHE scale variation weights (w_var / w_nominal); [0] is MUR="0.5" MUF="0.5"; [1] is MUR="0.5" MUF="1.0"; [2] is MUR="0.5" MUF="2.0"; [3] is MUR="1.0" MUF="0.5"; [4] is MUR="1.0" MUF="2.0"; [5] is MUR="2.0" MUF="0.5"; [6] is MUR="2.0" MUF="1.0"; [7] is MUR="2.0" MUF="2.0"*

# variations = ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 4, 6, 7]]

# nuisances['QCDscale_V'] = {
#     'name': 'QCDscale_V',
#     'skipCMS': 1,
#     'kind': 'weight_envelope',
#     'type': 'shape',
#     'samples': {'DY': variations},
#     'AsLnN': '1'
# }

# #*         | Float_t LHE scale variation weights (w_var / w_nominal); [0] is renscfact=0.5d0 facscfact=0.5d0 ; [1] is renscfact=0.5d0 facscfact=1d0 ; [2] is renscfact=0.5d0 facscfact=2d0 ; [3] is renscfact=1d0 facscfact=0.5d0 ; [4] is renscfact=1d0 facscfact=1d0 ; [5] is renscfact=1d0 facscfact=2d0 ; [6] is renscfact=2d0 facscfact=0.5d0 ; [7] is renscfact=2d0 facscfact=1d0 ; [8] is renscfact=2d0 facscfact=2d0 *

# variations = ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 5, 7, 8]]

# nuisances['QCDscale_VV'] = {
#     'name': 'QCDscale_VV',
#     'kind': 'weight_envelope',
#     'type': 'shape',
#     'samples': {
#         'Vg': variations,
#         'VZ': variations,
#         'VgS': variations,
#     }
# }


# # ggww and interference
# nuisances['QCDscale_ggVV'] = {
#     'name': 'QCDscale_ggVV',
#     'type': 'lnN',
#     'samples': {
#         'ggWW': '1.15',
#     },
# }

# NLL resummation variations
nuisances['WWresum']  = {
  'name'  : 'CMS_hww_WWresum_0j',
  'skipCMS' : 1,
  'kind'  : 'weight',
  'type'  : 'shape',
  'samples'  : {
     'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
   },
}

nuisances['WWqscale']  = {
   'name'  : 'CMS_hww_WWqscale_0j',
   'skipCMS' : 1,
   'kind'  : 'weight',
   'type'  : 'shape',
   'samples'  : {
      'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
    },
}



# # # Uncertainty on SR/CR ratio
# # nuisances['CRSR_accept_DY'] = {
# #     'name': 'CMS_hww_CRSR_accept_DY',
# #     'type': 'lnN',
# #     'samples': {'DY': '1.02'},
# #     'cuts': [cut for cut in cuts if '_CR_' in cut],
# #     'cutspost': (lambda self, cuts: [cut for cut in cuts if '_DY_' in cut]),
# # }

# # Uncertainty on SR/CR ratio
# nuisances['CRSR_accept_top'] = {
#     'name': 'CMS_hww_CRSR_accept_top',
#     'type': 'lnN',
#     'samples': {'top': '1.01'},
#     'cuts': [cut for cut in cuts if 'TopCR' in cut],
#     'cutspost': (lambda self, cuts: [cut for cut in cuts if 'TopCR' in cut]),
# }

# # Theory uncertainty for ggH
# #
# #
# #   THU_ggH_Mu, THU_ggH_Res, THU_ggH_Mig01, THU_ggH_Mig12, THU_ggH_VBF2j, THU_ggH_VBF3j, THU_ggH_PT60, THU_ggH_PT120, THU_ggH_qmtop
# #
# #   see https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SignalModelingTools

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

# for name, vname in thus:
#     updown = [vname, '2.-%s' % vname]
    
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

# #### QCD scale uncertainties for Higgs signals other than ggH

# values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm')

# nuisances['QCDscale_qqH'] = {
#     'name': 'QCDscale_qqH', 
#     'samples': {
#         'qqH_hww': values,
#         'qqH_htt': values
#     },
#     'type': 'lnN'
# }

# valueswh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm')
# valueszh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm')

# nuisances['QCDscale_VH'] = {
#     'name': 'QCDscale_VH', 
#     'samples': {
#         'WH_hww': valueswh,
#         'WH_htt': valueswh,
#         'ZH_hww': valueszh,
#         'ZH_htt': valueszh
#     },
#     'type': 'lnN',
# }

# values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','scale','sm')

# nuisances['QCDscale_ggZH'] = {
#     'name': 'QCDscale_ggZH', 
#     'samples': {
#         'ggZH_hww': values
#     },
#     'type': 'lnN',
# }

# values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','scale','sm')

# nuisances['QCDscale_ttH'] = {
#     'name': 'QCDscale_ttH',
#     'samples': {
#         'ttH_hww': values
#     },
#     'type': 'lnN',
# }

# nuisances['QCDscale_WWewk'] = {
#     'name': 'QCDscale_WWewk',
#     'samples': {
#         'WWewk': '1.11',
#     },
#     'type': 'lnN'
# }

# nuisances['QCDscale_qqbar_ACCEPT'] = {
#     'name': 'QCDscale_qqbar_ACCEPT',
#     'type': 'lnN',
#     'samples': {
#         'qqH_hww': '1.003',
#         'qqH_htt': '1.003',
#         'WH_hww': '1.010',
#         'WH_htt': '1.010',
#         'ZH_hww': '1.015',
#         'ZH_htt': '1.015',
#         #'VZ': '1.004',
#     }
# }

# nuisances['QCDscale_gg_ACCEPT'] = {
#     'name': 'QCDscale_gg_ACCEPT',
#     'samples': {
#         #'ggH_hww': '1.012',
#         'ggH_htt': '1.012',
#         'ggZH_hww': '1.012',
#         'ggWW': '1.012',
#     },
#     'type': 'lnN',
# }


# ## rate parameters

nuisances['Topnorm_2017']  = {
               'name'  : 'Topnorm',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                   'SR_Incl',
                   'TopCR_Incl',
                   ]
              }


nuisances['WWnorm_2017']  = {
               'name'  : 'WWnorm',
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                   'SR_Incl',
                   'WWCR_Incl',
                   ]
              }

nuisances['DYnorm_2017']  = {
               'name'  : 'DYnorm',
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                   'SR_Incl',
                   'DYttCR_Incl',
                   ]
              }



## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat'] = {
    'type': 'auto',
    'maxPoiss': '10',
    'includeSignal': '0',
    #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
    #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
    'samples': {}
}

# for n in nuisances.values():
#     n['skipCMS'] = 1

# print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat'))
