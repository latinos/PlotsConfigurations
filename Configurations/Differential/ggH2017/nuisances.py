# nuisances
#FIXME: TO BE UPDATED FOR 2017!

# name of samples here must match keys in samples.py

# imported from samples.py:
# samples, treeBaseDir, mcProduction, mcSteps
# imported from cuts.py
# cuts

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]
dy = [skey for skey in samples if skey.startswith('DY')]
top = [skey for skey in samples if skey.startswith('top')]
signal = [skey for skey in samples if '_hww' in skey]
ggh = [skey for skey in samples if skey.startswith('ggH_hww')]
xh = [skey for skey in samples if skey.startswith('XH_hww')]

topcr = [ckey for ckey in cuts if ckey.startswith('topcr')]
dycr = [ckey for ckey in cuts if ckey.startswith('dycr')]
sr = [ckey for ckey in cuts if ckey.startswith('sr')]

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity



nuisances['lumi'] = {
    'name': 'lumi_13TeV',
    'type': 'lnN',
    'samples': dict((skey, '1.025') for skey in list(set(mc) - set(dy) - set(top) - set(signal)))
}

#### FAKES

## FIXME: check the 30% lnN
nuisances['fake_syst'] = {
    'name': 'CMS_hww_fake_syst',
    'type': 'lnN',
    'samples': {
        'Fake': '1.30',
    }
}

nuisances['fake_ele'] = {
    'name': 'hww_fake_ele',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWEleUp', 'fakeWEleDown'],
    },
}

nuisances['fake_ele_stat'] = {
    'name': 'hww_fake_ele_stat',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWStatEleUp', 'fakeWStatEleDown']
    },
}

nuisances['fake_mu'] = {
    'name': 'hww_fake_mu',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWMuUp', 'fakeWMuDown'],
    },
}

nuisances['fake_mu_stat'] = {
    'name': 'hww_fake_mu_stat',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWStatMuUp', 'fakeWStatMuDown'],
    },
}

##### B-tagger

for shift in ['jes', 'lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
    btag_syst = ['(btagWeight_up_%s)/(btagWeight)' % shift, '(btagWeight_down_%s)/(btagWeight)' % shift]

    nuisances['btag_shape_%s' % shift] = {
        'name': 'btag_shape_%s' % shift,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc)
    }

##### Trigger Efficiency

trig_syst = ['(TriggerEffWeight_2l_u)/(TriggerEffWeight_2l)', '(TriggerEffWeight_2l_d)/(TriggerEffWeight_2l)']

nuisances['trigg'] = {
    'name': 'hww_trigger',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc)
}

###### Electron Efficiency and energy scale
#
#nuisances['eff_e'] = {
#    'name': 'eff_e',
#    'kind': 'weight',
#    'type': 'shape',
#    'samples': dict((skey, ['SFweightEleUp', 'WFweightEleDown']) for skey in mc)
#}
#
#eleUpSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__ElepTup'
#eleDownSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__ElepTdo'
#
#nuisances['electronpt'] = {
#    'name': 'scale_e',
#    'kind': 'tree',
#    'type': 'shape',
#    'samples': dict((skey, ['1', '1']) for skey in mc),
#    'folderUp': os.path.join(treeBaseDir, mcProduction, eleUpSteps),
#    'folderDown': os.path.join(treeBaseDir, mcProduction, eleDownSteps)
#}
#
###### Muon Efficiency and energy scale
#
#nuisances['eff_m'] = {
#    'name': 'eff_m',
#    'kind': 'weight',
#    'type': 'shape',
#    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc)
#}
#
#muUpSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__MupTup'
#muDownSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__MupTdo'
#
#nuisances['muonpt'] = {
#    'name': 'scale_m',
#    'kind': 'tree',
#    'type': 'shape',
#    'samples': dict((skey, ['1', '1']) for skey in mc),
#    'folderUp': os.path.join(treeBaseDir, mcProduction, muUpSteps),
#    'folderDown': os.path.join(treeBaseDir, mcProduction, muDownSteps)
#}
#
###### Jet energy scale
#
#jesUpSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__JESup'
#jesDownSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__JESdo'
#
#nuisances['jes'] = {
#    'name': 'scale_j',
#    'kind': 'tree',
#    'type': 'shape',
#    'samples': dict((skey, ['1', '1']) for skey in mc),
#    'folderUp': os.path.join(treeBaseDir, mcProduction, jesUpSteps),
#    'folderDown': os.path.join(treeBaseDir, mcProduction, jesDownSteps)
#}

##### MET energy scale

metUpSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__METup'
metDownSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__METdo'

nuisances['met'] = {
    'name': 'scale_met',
    'kind': 'tree',
    'type': 'shape',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': os.path.join(treeBaseDir, mcProduction, metUpSteps),
    'folderDown': os.path.join(treeBaseDir, mcProduction, metDownSteps)
}

## Shape nuisance due to QCD scale variations for DY
# LHE scale variation weights (w_var / w_nominal)
# [0] is muR=0.50000E+00 muF=0.50000E+00
# [8] is muR=0.20000E+01 muF=0.20000E+01
nuisances['DYQCDscale'] = {
    'name': 'QCDscale_V',
    'skipCMS': 1,
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['LHEScaleWeight[8]', 'LHEScaleWeight[0]']) for skey in dy)
}

#
#
# Theory uncertainty for ggH
#
#
#   THU_ggH_Mu, THU_ggH_Res, THU_ggH_Mig01, THU_ggH_Mig12, THU_ggH_VBF2j, THU_ggH_VBF3j, THU_ggH_PT60, THU_ggH_PT120, THU_ggH_qmtop
#
#   see https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SignalModelingTools
#
# FIXME: Add these uncertainties


#nuisances['ggH_mu'] = {
#                'name': 'THU_ggH_Mu',
#                'skipCMS': 1,
#                'kind': 'weight',
#                'type': 'shape',
#    'samples': {
#                   'ggH_hww': ['ggH_mu', '1+(1.-ggH_mu)'],
#                   'ggH_htt': ['ggH_mu', '1+(1.-ggH_mu)'],
#                   },
#                }
#
#
#nuisances['ggH_res'] = {
#                'name': 'THU_ggH_Res',
#                'skipCMS': 1,
#                'kind': 'weight',
#                'type': 'shape',
#    'samples': {
#                   'ggH_hww': ['ggH_res', '1+(1.-ggH_res)'],
#                   'ggH_htt': ['ggH_res', '1+(1.-ggH_res)'],
#                   },
#                }
#
#nuisances['ggH_mig01'] = {
#                'name': 'THU_ggH_Mig01',
#                'skipCMS': 1,
#                'kind': 'weight',
#                'type': 'shape',
#    'samples': {
#                   'ggH_hww': ['ggH_mig01', '1+(1.-ggH_mig01)'],
#                   'ggH_htt': ['ggH_mig01', '1+(1.-ggH_mig01)'],
#                   },
#                }
#
#nuisances['ggH_mig12'] = {
#                'name': 'THU_ggH_Mig12',
#                'skipCMS': 1,
#                'kind': 'weight',
#                'type': 'shape',
#    'samples': {
#                   'ggH_hww': ['ggH_mig12', '1+(1.-ggH_mig12)'],
#                   'ggH_htt': ['ggH_mig12', '1+(1.-ggH_mig12)'],
#                   },
#                }
#
#nuisances['ggH_pT60'] = {
#                'name': 'THU_ggH_PT60',
#                'skipCMS': 1,
#                'kind': 'weight',
#                'type': 'shape',
#    'samples': {
#                   'ggH_hww': ['ggH_pT60', '1+(1.-ggH_pT60)'],
#                   'ggH_htt': ['ggH_pT60', '1+(1.-ggH_pT60)'],
#                   },
#                }
#
#nuisances['ggH_pT120'] = {
#                'name': 'THU_ggH_PT120',
#                'skipCMS': 1,
#                'kind': 'weight',
#                'type': 'shape',
#    'samples': {
#                   'ggH_hww': ['ggH_pT120', '1+(1.-ggH_pT120)'],
#                   'ggH_htt': ['ggH_pT120', '1+(1.-ggH_pT120)'],
#                   },
#                }
#
#nuisances['ggH_VBF2j'] = {
#                'name': 'THU_ggH_VBF2j',
#                'skipCMS': 1,
#                'kind': 'weight',
#                'type': 'shape',
#    'samples': {
#                   'ggH_hww': ['ggH_VBF2j', '1+(1.-ggH_VBF2j)'],
#                   'ggH_htt': ['ggH_VBF2j', '1+(1.-ggH_VBF2j)'],
#                   },
#                }
#
#nuisances['ggH_VBF3j'] = {
#                'name': 'THU_ggH_VBF3j',
#                'skipCMS': 1,
#                'kind': 'weight',
#                'type': 'shape',
#    'samples': {
#                   'ggH_hww': ['ggH_VBF3j', '1+(1.-ggH_VBF3j)'],
#                   'ggH_htt': ['ggH_VBF3j', '1+(1.-ggH_VBF3j)'],
#                   },
#                }
#
#nuisances['ggH_qmtop'] = {
#                'name': 'THU_ggH_qmtop',
#                'skipCMS': 1,
#                'kind': 'weight',
#                'type': 'shape',
#    'samples': {
#                   'ggH_hww': ['ggH_qmtop', '1+(1.-ggH_qmtop)'],
#                   'ggH_htt': ['ggH_qmtop', '1+(1.-ggH_qmtop)'],
#                   },
#                }

nuisances['QCDscale_CRSR_accept_dytt'] = {
    'name': 'CMS_hww_QCDscale_CRSR_accept_dytt',
    'type': 'lnN',
    'samples': dict((skey, '1.02') for skey in dy),
    'cuts': dycr
}

nuisances['QCDscale_CRSR_accept_top'] = {
    'name': 'CMS_hww_QCDscale_CRSR_accept_top',
    'type': 'lnN',
    'samples': dict((skey, '1.01') for skey in top),
    'cuts': topcr
}

#FIXME: check this 3%
nuisances['QCDscale_VZ'] = {
    'name': 'QCDscale_VZ',
    'samples': {
        'VZ': '1.03',
    },
    'type': 'lnN'
}

#### QCD scale uncertainties for Higgs signals other than ggH

from LatinoAnalysis.Tools.HiggsXSection  import *
HiggsXS = HiggsXSection()

nuisances['QCDscale_ggH'] = {
    'name': 'QCDscale_ggH',
    'samples': {
        'H_htt': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','scale','sm'),
    },
    'type': 'lnN',
}

nuisances['QCDscale_qqH'] = {
    'name': 'QCDscale_qqH',
    'samples': {
        'qqH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm'),
        'qqH_htt': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm'),
    },
    'type': 'lnN',
    }

nuisances['QCDscale_VH'] = {
    'name': 'QCDscale_VH',
    'samples': {
        'WH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
        'WH_htt': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
        'ZH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
        'ZH_htt': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
    },
    'type': 'lnN',
    }

nuisances['QCDscale_ggZH'] = {
    'name': 'QCDscale_ggZH',
    'samples': {
        'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','scale','sm'),
    },
    'type': 'lnN',
    }

nuisances['QCDscale_bbH'] = {
    'name': 'QCDscale_bbH',
    'samples': {
        'bbH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH','125.09','scale','sm'),
    },
    'type': 'lnN',
    }

nuisances['QCDscale_ttH'] = {
    'name': 'QCDscale_ttH',
    'samples': {
        'ttH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','scale','sm'),
    },
    'type': 'lnN',
    }

#FIXME: these come from HIG-16-042, maybe should be recomputed?
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
    },
}

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['QCDscale_gg_ACCEPT'] = {
    'name': 'QCDscale_gg_ACCEPT',
    'samples': {
        'ggWW': '1.027',
        'ggH_hww': '1.027',
        'ggH_htt': '1.027',
        'H_htt': '1.027',
        'ggZH_hww': '1.027',
    },
    'type': 'lnN',
}

###### pdf uncertainty

nuisances['pdf_Higgs_gg'] = {
    'name': 'pdf_Higgs_gg',
    'samples': {
        'ggH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','pdf','sm'),
        'ggH_htt': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','pdf','sm'),
        'H_htt': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','pdf','sm'),
        'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm'),
        'bbH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH','125.09','pdf','sm'),
    },
    'type': 'lnN',
}

nuisances['pdf_Higgs_ttH'] = {
    'name': 'pdf_Higgs_ttH',
    'samples': {
        'ttH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','pdf','sm'),
    },
    'type': 'lnN',
}

nuisances['pdf_Higgs_qqbar'] = {
    'name': 'pdf_Higgs_qqbar',
    'type': 'lnN',
    'samples': {
        'qqH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm'),
        'qqH_htt': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm'),
        'WH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','pdf','sm'),
        'WH_htt': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','pdf','sm'),
        'ZH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','pdf','sm'),
        'ZH_htt': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','pdf','sm'),
    },
}

#FIXME: check this 4%
nuisances['pdf_qqbar'] = {
    'name': 'pdf_qqbar',
    'type': 'lnN',
    'samples': {
        'VZ': '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
    },
}

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['pdf_Higgs_gg_ACCEPT'] = {
    'name': 'pdf_Higgs_gg_ACCEPT',
    'samples': {
        'ggH_hww': '1.005',
        'ggH_htt': '1.005',
        'H_htt': '1.005',
        'ggZH_hww': '1.005',
    },
    'type': 'lnN',
}

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['pdf_gg_ACCEPT'] = {
    'name': 'pdf_gg_ACCEPT',
    'samples': {
        'ggWW': '1.005',
    },
    'type': 'lnN',
}

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['pdf_Higgs_qqbar_ACCEPT'] = {
    'name': 'pdf_Higgs_qqbar_ACCEPT',
    'type': 'lnN',
    'samples': {
        #
        'qqH_hww': '1.011',
        'qqH_htt': '1.011',
        'WH_hww': '1.007',
        'WH_htt': '1.007',
        'ZH_hww': '1.012',
        'ZH_htt': '1.012',
    },
}

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['pdf_qqbar_ACCEPT'] = {
    'name': 'pdf_qqbar_ACCEPT',
    'type': 'lnN',
    'samples': {
        #
        'VZ': '1.005',
    },
}

# ggww and interference

nuisances['QCDscale_ggWW'] = {
    'name': 'QCDscale_ggWW',
    'type': 'lnN',
    'samples': {
        'ggWW': '1.15',
    },
}

nuisances['WgStarScale'] = {
    'name': 'CMS_hww_WgStarScale',
    'type': 'lnN',
    'samples': {
        'WgS': '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
        'VgS': '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
        'WZgS_L': '1.25',
    },
}

nuisances['WZScale'] = {
    'name': 'CMS_hww_WZScale',
    'type': 'lnN',
    'samples': {
        'WZgS_H': '1.16',
    },
}

###### DY norm

nuisances['DYttnorm0j'] = {
    'name': 'CMS_hww_DYttnorm0j',
    'samples': {
        'DY_0j': '1.00',
    },
    'type': 'rateParam',
    'cuts': sr + ['topcr_0j', 'dycr_0j']
}

nuisances['DYttnorm1j'] = {
    'name': 'CMS_hww_DYttnorm1j',
    'samples': {
        'DY_1j': '1.00',
    },
    'type': 'rateParam',
    'cuts': sr + ['topcr_1j', 'dycr_1j']
}

nuisances['DYttnormge2j'] = {
    'name': 'CMS_hww_DYttnormge2j',
    'samples': {
        'DY_ge2j': '1.00',
    },
    'type': 'rateParam',
    'cuts': sr + ['topcr_ge2j', 'dycr_ge2j']
}

###### WW norm

nuisances['WWnorm'] = {
    'name': 'CMS_hww_WWnorm',
    'samples': {
        'WW': '1.00',
    },
    'type': 'rateParam',
}

###### top norm

nuisances['Topnorm0j'] = {
    'name': 'CMS_hww_Topnorm0j',
    'samples': {
        'top_0j': '1.00',
    },
    'type': 'rateParam',
    'cuts': sr + ['topcr_0j', 'dycr_0j']
}

nuisances['Topnorm1j'] = {
    'name': 'CMS_hww_Topnorm1j',
    'samples': {
        'top_1j': '1.00',
    },
    'type': 'rateParam',
    'cuts': sr + ['topcr_1j', 'dycr_1j']
}

nuisances['Topnormge2j'] = {
    'name': 'CMS_hww_Topnormge2j',
    'samples': {
        'top_ge2j': '1.00',
    },
    'type': 'rateParam',
    'cuts': sr + ['topcr_ge2j', 'dycr_ge2j']
}

topvar = [
    '(( (topGenPt>0 && antitopGenPt<0) || (topGenPt<0 && antitopGenPt>0)  ) * 1.0816 + ( topGenPt>0 && antitopGenPt>0 ))',
    '(( (topGenPt>0 && antitopGenPt<0) || (topGenPt<0 && antitopGenPt>0)  ) * 0.9184 + ( topGenPt>0 && antitopGenPt>0 ))'
]

nuisances['singleTopToTTbar'] = {
    'name': 'singleTopToTTbar',
    'skipCMS': 1,
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, topvar) for skey in top)
}

## Top pT reweighting uncertainty

nuisances['TopPtRew'] = {
    'name': 'TopPtRew',   # Theory uncertainty
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ["1.","((1./Top_pTrw - 1)*(topGenPt>0 && antitopGenPt>0) + 1)"]) for skey in top)
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
