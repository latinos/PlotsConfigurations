import os

# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py 

# imported from samples.py:
# samples, treeBaseDir, mcProduction, mcSteps
# imported from cuts.py
# cuts

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

topcr = [ckey for ckey in cuts if ckey.startswith('topcr')]
dycr = [ckey for ckey in cuts if ckey.startswith('dycr')]
sr = [ckey for ckey in cuts if ckey.startswith('sr')]

from LatinoAnalysis.Tools.HiggsXSection import *
HiggsXS = HiggsXSection()

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

# Will be dropped from DY, top, and WW but that's taken care of in datacard generation
nuisances['lumi'] = {
  'name': 'lumi_2016',
  'type': 'lnN',
  'samples': dict((skey, '1.025') for skey in mc)
}

#### FAKES

nuisances['fake_syst'] = {
  'name': 'fake_syst_2016',
  'type': 'lnN',
  'samples': {
    'Fake': '1.30',
  }
}

nuisances['fake_ele'] = {
  'name': 'fake_ele_2016',
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'Fake': ['fakeWeightEleUp', 'fakeWeightEleDown'],
  }
}

nuisances['fake_ele_stat'] = {
  'name': 'fake_ele_stat_2016',
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'Fake': ['fakeWeightStatEleUp', 'fakeWeightStatEleDown'],
  }
}

nuisances['fake_mu'] = {
  'name': 'fake_mu_2016',
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'Fake': ['fakeWeightMuUp', 'fakeWeightMuDown'],
  }
}


nuisances['fake_mu_stat'] = {
  'name': 'fake_mu_stat_2016',
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'Fake': ['fakeWeightStatMuUp', 'fakeWeightStatMuDown'],
  }
}

##### B-tagger

nuisances['btagbc'] = {
  'name': 'btag_heavy_2016',
  'kind': 'weight',
  'type': 'shape',
  'samples': dict((skey, ['sfWeightBtagBCUp', 'sfWeightBtagBCDown']) for skey in mc)
}

nuisances['btagudsg'] = {
  'name': 'btag_light_2016',
  'kind': 'weight',
  'type': 'shape',
  'samples': dict((skey, ['sfWeightBtagUDSGUp', 'sfWeightBtagUDSGDown']) for skey in mc)
}

##### Trigger Efficiency

trig_syst = ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)']

nuisances['trigg'] = {
  'name': 'trigger_2016',
  'kind': 'weight',
  'type': 'shape',
  'samples': dict((skey, trig_syst) for skey in mc)
}

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
  'name': 'eff_e_2016',
  'kind': 'weight',
  'type': 'shape',
  'samples': dict((skey, ['sfWeightEleUp', 'sfWeightEleDown']) for skey in mc)
}

eleUpSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepElepTup__wwSel'
eleDownSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepElepTdo__wwSel'

nuisances['electronpt'] = {
  'name': 'electronpt_2016',
  'kind': 'tree',
  'type': 'shape',
  'samples': dict((skey, ['1', '1']) for skey in mc),
  'folderUp': os.path.join(treeBaseDir, mcProduction, eleUpSteps),
  'folderDown': os.path.join(treeBaseDir, mcProduction, eleDownSteps)
}

elePtCor_Syst = ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l']

nuisances['elePtCor'] = {
  'name': 'elePtCor_2016',
  'kind': 'weight',
  'type': 'shape',
  'samples': dict((skey, elePtCor_Syst) for skey in mc)
}

eleEtaCor_Syst = ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l']

nuisances['eleEtaCor'] = {
  'name': 'eleEtaCor_2016',
  'kind': 'weight',
  'type': 'shape',
  'samples': dict((skey, eleEtaCor_Syst) for skey in mc)
}


##### Muon Efficiency and energy scale

nuisances['eff_m'] = {
  'name': 'eff_m_2016',
  'kind': 'weight',
  'type': 'shape',
  'samples': dict((skey, ['sfWeightMuUp', 'sfWeightMuDown']) for skey in mc)
}

muUpSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepMupTup__wwSel'
muDownSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepMupTdo__wwSel'

nuisances['muonpt'] = {
  'name': 'muonpt_2016',
  'kind': 'tree',
  'type': 'shape',
  'samples': dict((skey, ['1', '1']) for skey in mc),
  'folderUp': os.path.join(treeBaseDir, mcProduction, muUpSteps),
  'folderDown': os.path.join(treeBaseDir, mcProduction, muDownSteps)
}

##### Jet energy scale

jesUpSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__JESup__wwSel'
jesDownSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__JESdo__wwSel'

nuisances['jes'] = {
  'name': 'jes_2016',
  'kind': 'tree',
  'type': 'shape',
  'samples': dict((skey, ['1', '1']) for skey in mc),
  'folderUp': os.path.join(treeBaseDir, mcProduction, jesUpSteps),
  'folderDown': os.path.join(treeBaseDir, mcProduction, jesDownSteps)
}

##### MET energy scale

metUpSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__METup__wwSel'
metDownSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__METdo__wwSel'

nuisances['met'] = {
  'name': 'met_2016',
  'kind': 'tree',
  'type': 'shape',
  'samples': dict((skey, ['1', '1']) for skey in mc),
  'folderUp': os.path.join(treeBaseDir, mcProduction, metUpSteps),
  'folderDown': os.path.join(treeBaseDir, mcProduction, metDownSteps),
}

##### PS and UE

psVarSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__PS__wwSel'

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
  'name': 'wwPS',
  'skipCMS': 1,
  'kind': 'tree',
  'type': 'shape',
  'samples': apply_on,
  'folderUp': os.path.join(treeBaseDir, mcProduction, psVarSteps),
  'folderDown': os.path.join(treeBaseDir, mcProduction, mcSteps),
  'AsLnN': '1'
}

ueUpSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEup__wwSel'
ueDownSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEdo__wwSel'

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
  'name': 'wwUE', 
  'skipCMS': 1,
  'kind': 'tree',
  'type': 'shape',
  'samples': apply_on,
  'folderUp': os.path.join(treeBaseDir, mcProduction, ueUpSteps),
  'folderDown': os.path.join(treeBaseDir, mcProduction, ueDownSteps),
  'AsLnN': '1'
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
  'name': 'TopPtRew',   # Theory uncertainty
  'kind': 'weight',
  'type': 'shape',
  'samples': {'top': ["1.","((1./toprwgt - 1)*(dataset==19) + 1)"]}
}

nuisances['WgStarRate'] = {
  'name': 'WgStarRate',
  'type': 'lnN',
  'samples': {
    'WZgS_L': '1.25' # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
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
nuisances['QCDscale_DY'] = {
  'name': 'QCDscale_DY',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'DY': ['std_vector_LHE_weight[8]/std_vector_LHE_weight[0]', 'std_vector_LHE_weight[4]/std_vector_LHE_weight[0]']
  }
}

nuisances['QCDscale_VZ'] = {
  'name': 'QCDscale_VZ',
  'type': 'lnN',
  'samples': {
    'VZ': '1.03'
  }
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

nuisances['QCDscale_WW'] = {
  'name': 'QCDscale_WW',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'WW': ['nllW_Qup/nllW', 'nllW_Qdown/nllW',],
  }
}

# Uncertainty on SR/CR ratio
nuisances['QCDscale_CRSR_accept_DY'] = {
  'name': 'QCDscale_CRSR_accept_DY', 
  'type': 'lnN',
  'samples': {
    'DY': '1.02'
  },
  'cuts': dycr
}

# Uncertainty on SR/CR ratio
nuisances['QCDscale_CRSR_accept_top'] = {
  'name': 'QCDscale_CRSR_accept_top', 
  'type': 'lnN',
  'samples': {
    'top': '1.01'
  },
  'cuts': topcr
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
  'samples': {},
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
