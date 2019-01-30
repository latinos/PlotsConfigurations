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

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

topcr = [ckey for ckey in cuts if ckey.startswith('topcr')]
dycr = [ckey for ckey in cuts if ckey.startswith('dycr')]
sr = [ckey for ckey in cuts if ckey.startswith('sr')]

from LatinoAnalysis.Tools.HiggsXSection import *
HiggsXS = HiggsXSection()

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

nuisances['lumi'] = {
    'name': 'lumi_2017',
    'type': 'lnN',
    'samples': dict((skey, '1.023') for skey in mc)
}

#### FAKES

## FIXME: check the 30% lnN
nuisances['fake_syst'] = {
    'name': 'fake_syst_2017',
    'type': 'lnN',
    'samples': {
        'Fake': '1.30',
    }
}

nuisances['fake_ele'] = {
    'name': 'fake_ele_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWEleUp', 'fakeWEleDown'],
    },
}

nuisances['fake_ele_stat'] = {
    'name': 'fake_ele_stat_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWStatEleUp', 'fakeWStatEleDown']
    },
}

nuisances['fake_mu'] = {
    'name': 'fake_mu_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWMuUp', 'fakeWMuDown'],
    },
}

nuisances['fake_mu_stat'] = {
    'name': 'fake_mu_stat_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWStatMuUp', 'fakeWStatMuDown'],
    },
}

##### B-tagger

for shift in ['jes', 'lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
    btag_syst = ['(btagSF%sup)/(btagSF)' % shift, '(btagSF%sdown)/(btagSF)' % shift]

    nuisances['btag_shape_%s' % shift] = {
        'name': 'btag_shape_%s_2017' % shift,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc)
    }

##### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_2l_u)/(TriggerEffWeight_2l))*(TriggerEffWeight_2l>0.02) + (TriggerEffWeight_2l<=0.02)', '(TriggerEffWeight_2l_d)/(TriggerEffWeight_2l)']

nuisances['trigg'] = {
    'name': 'trigger_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc)
}

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
    'name': 'eff_e_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc)
}

eleUpSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__ElepTup'
eleDownSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__ElepTdo'

nuisances['electronpt'] = {
    'name': 'electronpt_2017',
    'kind': 'tree',
    'type': 'shape',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': os.path.join(treeBaseDir, mcProduction, eleUpSteps),
    'folderDown': os.path.join(treeBaseDir, mcProduction, eleDownSteps)
}

##### Muon Efficiency and energy scale

nuisances['eff_m'] = {
    'name': 'eff_m_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc)
}

muUpSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__MupTup'
muDownSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__MupTdo'

nuisances['muonpt'] = {
    'name': 'muonpt_2017',
    'kind': 'tree',
    'type': 'shape',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': os.path.join(treeBaseDir, mcProduction, muUpSteps),
    'folderDown': os.path.join(treeBaseDir, mcProduction, muDownSteps)
}

##### Jet energy scale

jesUpSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__JESup'
jesDownSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__JESdo'

nuisances['jes'] = {
    'name': 'jes_2017',
    'kind': 'tree',
    'type': 'shape',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': os.path.join(treeBaseDir, mcProduction, jesUpSteps),
    'folderDown': os.path.join(treeBaseDir, mcProduction, jesDownSteps)
}

##### MET energy scale

metUpSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__METup'
metDownSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__METdo'

nuisances['met'] = {
    'name': 'met_2017',
    'kind': 'tree',
    'type': 'shape',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': os.path.join(treeBaseDir, mcProduction, metUpSteps),
    'folderDown': os.path.join(treeBaseDir, mcProduction, metDownSteps)
}

##### PS and UE

#FIXME: Add PS uncertainty
#nuisances['PS']  = {
#                'name'  : 'PS',
#                'skipCMS' : 1,
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                  'WW'      : ['0.92657', '1.'], #
#                  'ggH_hww' : ['0.98554', '1.'], # These numbers are used to normalize the PS variation to the same integral as the nominal after the wwSel skim
#                  'qqH_hww' : ['0.92511', '1.'], #
#                },
#                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__btagSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__PS'+skim,
#                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__btagSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC'+skim,
#                'AsLnN'      : '1',
#                }

#FIXME: Add UE uncertainty
#nuisances['UE']  = {
#                'name'  : 'UE', 
#                'skipCMS' : 1,
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                  'WW'      : ['1.0226', '0.9897'], #
#                  'ggH_hww' : ['1.0739', '1.0211'], # These numbers are used to normalize the UE up/down variations to the same integral as the nominal after the wwSel skim
#                  'qqH_hww' : ['1.0560', '0.9992'], #
#                },
#                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__btagSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEup'+skim,
#                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__btagSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEdo'+skim,
#                'AsLnN'      : '1',
#                }

####### Generic "cross section uncertainties"

apply_on = {
    'top': [
        '(( (topGenPt>0 && antitopGenPt<0) || (topGenPt<0 && antitopGenPt>0)  ) * 1.0816 + ( topGenPt>0 && antitopGenPt>0 ))',
        '(( (topGenPt>0 && antitopGenPt<0) || (topGenPt<0 && antitopGenPt>0)  ) * 0.9184 + ( topGenPt>0 && antitopGenPt>0 ))'
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

nuisances['TopPtRew'] = {
    'name': 'TopPtRew',   # Theory uncertainty
    'kind': 'weight',
    'type': 'shape',
    'samples': {'top': ["1.","((1./Top_pTrw - 1)*(topGenPt>0 && antitopGenPt>0) + 1)"]}
}

nuisances['WgStarRate'] = {
    'name': 'WgStarRate',
    'type': 'lnN',
    'samples': {
        'WZgS_L': '1.25',
    },
}

nuisances['WZRate'] = {
    'name': 'WZRate',
    'type': 'lnN',
    'samples': {
        'WZgS_H': '1.16',
    },
}

###### pdf uncertainties

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

#FIXME: check this 4%
nuisances['pdf_qqbar'] = {
    'name': 'pdf_qqbar',
    'type': 'lnN',
    'samples': {
        'Vg': '1.04',
        'VZ': '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
        'WZgS_L': '1.04', # PDF: 0.0064 / 0.1427 = 0.0448493
        'WZgS_H': '1.04' # PDF: 0.0064 / 0.1427 = 0.0448493
    },
}

#FIXME: these come from HIG-16-042, maybe should be recomputed?
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
        'VZ': '1.005',
    },
}

##### Renormalization & factorization scales

## Shape nuisance due to QCD scale variations for DY
# LHE scale variation weights (w_var / w_nominal)
# [0] is muR=0.50000E+00 muF=0.50000E+00
# [8] is muR=0.20000E+01 muF=0.20000E+01
nuisances['QCDscale_DY'] = {
    'name': 'QCDscale_DY',
    'skipCMS': 1,
    'kind': 'weight',
    'type': 'shape',
    'samples': {'DY': ['LHEScaleWeight[8]', 'LHEScaleWeight[0]']}
}

#FIXME: check this 3%
nuisances['QCDscale_VZ'] = {
    'name': 'QCDscale_VZ',
    'samples': {
        'VZ': '1.03',
    },
    'type': 'lnN'
}

# ggww and interference
nuisances['QCDscale_ggWW'] = {
    'name': 'QCDscale_ggWW',
    'type': 'lnN',
    'samples': {
        'ggWW': '1.15',
    },
}

# NLL resummation variations
nuisances['Resumscale_WW'] = {
    'name': 'Resumscale_WW',
    'skipCMS': 1,
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'WW': ['nllW_Rup/nllW', 'nllW_Rdown/nllW',],
    }
}

nuisances['QCDscale_CRSR_accept_dytt'] = {
    'name': 'QCDscale_CRSR_accept_DY',
    'type': 'lnN',
    'samples': {'DY': '1.02'},
    'cuts': dycr
}

nuisances['QCDscale_CRSR_accept_top'] = {
    'name': 'QCDscale_CRSR_accept_top',
    'type': 'lnN',
    'samples': {'top': '1.01'},
    'cuts': topcr
}

# Theory uncertainty for ggH
#
#
#   THU_ggH_Mu, THU_ggH_Res, THU_ggH_Mig01, THU_ggH_Mig12, THU_ggH_VBF2j, THU_ggH_VBF3j, THU_ggH_PT60, THU_ggH_PT120, THU_ggH_qmtop
#
#   see https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SignalModelingTools
#
# FIXME: Add these uncertainties

thus = [
#    ('THU_ggH_Mu', 'ggH_mu'),
#    ('THU_ggH_Res', 'ggH_res'),
#    ('THU_ggH_Mig01', 'ggH_mig01'),
#    ('THU_ggH_Mig12', 'ggH_mig12'),
#    ('THU_ggH_VBF2j', 'ggH_VBF2j'),
#    ('THU_ggH_VBF3j', 'ggH_VBF3j'),
#    ('THU_ggH_PT60', 'ggH_pT60'),
#    ('THU_ggH_PT120', 'ggH_pT120'),
#    ('THU_ggH_qmtop', 'ggH_qmtop')
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


## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat'] = {
    'type': 'auto',
    'maxPoiss': '10',
    'includeSignal': '1',
    #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
    #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
    'samples': {}
}

#mynuisances = {}
#mynuisances['electronpt'] = nuisances['electronpt']
#mynuisances['lumi'] = nuisances['lumi']
#nuisances = mynuisances
