import os

# nuisances

#nuisances = {}

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

# DY, top, and WW are data driven, no need to include the luminosity uncertainty
nuisances['lumi'] = {
  'name': 'lumi_13TeV',
  'type': 'lnN',
  'samples': dict((skey, '1.025') for skey in list(set(mc) - set(dy) - set(top) - set(signal)))
}

#### FAKES

nuisances['fake_syst'] = {
  'name': 'fake_syst',
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
    'Fake': ['fakeWeightEleUp', 'fakeWeightEleDown'],
  }
}

nuisances['fake_ele_stat'] = {
  'name': 'hww_fake_ele_stat',
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'Fake': ['fakeWeightStatEleUp', 'fakeWeightStatEleDown'],
  }
}

nuisances['fake_mu'] = {
  'name': 'hww_fake_mu',
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'Fake': ['fakeWeightMuUp', 'fakeWeightMuDown'],
  }
}


nuisances['fake_mu_stat'] = {
  'name': 'hww_fake_mu_stat',
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'Fake': ['fakeWeightStatMuUp', 'fakeWeightStatMuDown'],
  }
}

##### B-tagger

nuisances['btagbc'] = {
  'name': 'btag_heavy',
  'kind': 'weight',
  'type': 'shape',
  'samples': dict((skey, ['sfWeightBtagBCUp', 'sfWeightBtagBCDown']) for skey in mc)
}

nuisances['btagudsg'] = {
  'name': 'btag_light',
  'kind': 'weight',
  'type': 'shape',
  'samples': dict((skey, ['sfWeightBtagUDSGUp', 'sfWeightBtagUDSGDown']) for skey in mc)
}

##### Trigger Efficiency

trig_syst = ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)']

nuisances['trigg'] = {
  'name': 'hww_trigger',
  'kind': 'weight',
  'type': 'shape',
  'samples': dict((skey, trig_syst) for skey in mc)
}

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
  'name': 'eff_e',
  'kind': 'weight',
  'type': 'shape',
  'samples': dict((skey, ['sfWeightEleUp', 'sfWeightEleDown']) for skey in mc)
}

eleUpSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepElepTup__wwSel'
eleDownSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepElepTdo__wwSel'

nuisances['electronpt'] = {
  'name': 'scale_e',
  'kind': 'tree',
  'type': 'shape',
  'samples': dict((skey, ['1', '1']) for skey in mc),
  'folderUp': os.path.join(treeBaseDir, mcProduction, eleUpSteps),
  'folderDown': os.path.join(treeBaseDir, mcProduction, eleDownSteps)
}

elePtCor_Syst = ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l']

nuisances['elePtCor'] = {
  'name': 'hww_elePtCor',
  'kind': 'weight',
  'type': 'shape',
  'samples': dict((skey, elePtCor_Syst) for skey in mc)
}

eleEtaCor_Syst = ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l']

nuisances['eleEtaCor'] = {
  'name': 'hww_eleEtaCor',
  'kind': 'weight',
  'type': 'shape',
  'samples': dict((skey, eleEtaCor_Syst) for skey in mc)
}


##### Muon Efficiency and energy scale

nuisances['eff_m'] = {
  'name': 'eff_m',
  'kind': 'weight',
  'type': 'shape',
  'samples': dict((skey, ['sfWeightMuUp', 'sfWeightMuDown']) for skey in mc)
}

muUpSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepMupTup__wwSel'
muDownSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepMupTdo__wwSel'

nuisances['muonpt'] = {
  'name': 'scale_m',
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
  'name': 'scale_j',
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
  'name': 'scale_met',
  'kind': 'tree',
  'type': 'shape',
  'samples': dict((skey, ['1', '1']) for skey in mc),
  'folderUp': os.path.join(treeBaseDir, mcProduction, metUpSteps),
  'folderDown': os.path.join(treeBaseDir, mcProduction, metDownSteps),
}


##### PS and UE

psVarSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__PS__wwSel'

# These numbers are used to normalize the PS variation to the same integral as the nominal after the wwSel skim
# Factors applied to XH are actually only for qqH, but the other contributions are small anyway
nuisances['PS'] = {
  'name': 'PS',
  'skipCMS': 1,
  'kind': 'tree',
  'type': 'shape',
  'samples': dict([('WW', ['0.92657', '1.'])] + [(skey, ['0.98554', '1.']) for skey in ggh] + [(skey, ['0.92511', '1.']) for skey in xh]),
  'folderUp': os.path.join(treeBaseDir, mcProduction, psVarSteps),
  'folderDown': os.path.join(treeBaseDir, mcProduction, mcSteps),
  'AsLnN': '1'
}

ueUpSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEup__wwSel'
ueDownSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEdo__wwSel'

# Normalize the UE up/down variations to the same integral as the nominal after the wwSel skim
nuisances['UE'] = {
  'name': 'UE', 
  'skipCMS': 1,
  'kind': 'tree',
  'type': 'shape',
  'samples': dict([('WW', ['1.0226', '0.9897'])] + [(skey, ['1.0739', '1.0211']) for skey in ggh] + [(skey, ['1.0560', '0.9992']) for skey in xh]),
  'folderUp': os.path.join(treeBaseDir, mcProduction, ueUpSteps),
  'folderDown': os.path.join(treeBaseDir, mcProduction, ueDownSteps),
  'AsLnN': '1'
}

##### Renormalization & factorization scales

# Shape nuisance due to QCD scale variations for DY
nuisances['DYQCDscale'] = {
  'name': 'QCDscale_V',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': dict((skey, ['std_vector_LHE_weight[8]/std_vector_LHE_weight[0]', 'std_vector_LHE_weight[4]/std_vector_LHE_weight[0]']) for skey in dy)
}

# Theory uncertainty for ggH
#
#
#   THU_ggH_Mu, THU_ggH_Res, THU_ggH_Mig01, THU_ggH_Mig12, THU_ggH_VBF2j, THU_ggH_VBF3j, THU_ggH_PT60, THU_ggH_PT120, THU_ggH_qmtop
#
#   see https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SignalModelingTools

nuisances['ggH_mu'] = {
  'name': 'THU_ggH_Mu',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'ggH_hww': ['ggH_mu', '1+(1.-ggH_mu)'],
    'ggH_htt': ['ggH_mu', '1+(1.-ggH_mu)']
  }
}

nuisances['ggH_res'] = {
  'name': 'THU_ggH_Res',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'ggH_hww': ['ggH_res', '1+(1.-ggH_res)'],
    'ggH_htt': ['ggH_res', '1+(1.-ggH_res)']
  }
}

nuisances['ggH_mig01'] = {
  'name': 'THU_ggH_Mig01',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'ggH_hww': ['ggH_mig01', '1+(1.-ggH_mig01)'],
    'ggH_htt': ['ggH_mig01', '1+(1.-ggH_mig01)']
  }
}

nuisances['ggH_mig12'] = {
  'name': 'THU_ggH_Mig12',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'ggH_hww': ['ggH_mig12', '1+(1.-ggH_mig12)'],
    'ggH_htt': ['ggH_mig12', '1+(1.-ggH_mig12)']
  }
}

nuisances['ggH_pT60'] = {
  'name': 'THU_ggH_PT60',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'ggH_hww': ['ggH_pT60', '1+(1.-ggH_pT60)'],
    'ggH_htt': ['ggH_pT60', '1+(1.-ggH_pT60)']
  }
}

nuisances['ggH_pT120'] = {
  'name': 'THU_ggH_PT120',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'ggH_hww': ['ggH_pT120', '1+(1.-ggH_pT120)'],
    'ggH_htt': ['ggH_pT120', '1+(1.-ggH_pT120)']
  }
}

nuisances['ggH_VBF2j'] = {
  'name': 'THU_ggH_VBF2j',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'ggH_hww': ['ggH_VBF2j', '1+(1.-ggH_VBF2j)'],
    'ggH_htt': ['ggH_VBF2j', '1+(1.-ggH_VBF2j)']
  }
}

nuisances['ggH_VBF3j'] = {
  'name': 'THU_ggH_VBF3j',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'ggH_hww': ['ggH_VBF3j', '1+(1.-ggH_VBF3j)'],
    'ggH_htt': ['ggH_VBF3j', '1+(1.-ggH_VBF3j)']
  }
}

nuisances['ggH_qmtop'] = {
  'name': 'THU_ggH_qmtop',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'ggH_hww': ['ggH_qmtop', '1+(1.-ggH_qmtop)'],
    'ggH_htt': ['ggH_qmtop', '1+(1.-ggH_qmtop)']
  }
}

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

nuisances['QCDscale_VZ'] = {
  'name': 'QCDscale_VZ', 
  'samples': {
    'VZ': '1.03'
  },
  'type': 'lnN'
}

#### QCD scale uncertainties for Higgs signals other than ggH

from LatinoAnalysis.Tools.HiggsXSection import *
HiggsXS = HiggsXSection()

nuisances['QCDscale_ggH'] = {
  'name': 'QCDscale_ggH', 
  'samples': {
    'H_htt': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','scale','sm'),
  },
  'type': 'lnN',
}

nuisances['QCDscale_qqH'] = {
  'name': 'QCDscale_qqH', 
  'samples': {
    'qqH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','scale','sm'),
    'qqH_htt': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','scale','sm'),
  },
  'type': 'lnN',
}

nuisances['QCDscale_VH'] = {
  'name': 'QCDscale_VH', 
  'samples': {
    'WH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH','125.0','scale','sm'),
    'WH_htt': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH','125.0','scale','sm'),
    'ZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH','125.0','scale','sm'),
    'ZH_htt': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH','125.0','scale','sm'),
  },
  'type': 'lnN',
}

nuisances['QCDscale_ggZH'] = {
  'name': 'QCDscale_ggZH', 
  'samples': {
    'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.0','scale','sm'),                  
  },
  'type': 'lnN',
}

nuisances['QCDscale_bbH'] = {
  'name': 'QCDscale_bbH',
  'samples': {
    'bbH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','bbH','125.0','scale','sm'),
  },
  'type': 'lnN',
}

nuisances['QCDscale_ttH'] = {
  'name': 'QCDscale_ttH',
  'samples': {
    'ttH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ttH','125.0','scale','sm'),
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
    'ggH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','pdf','sm'),
    'ggH_htt': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','pdf','sm'),
    'H_htt': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','pdf','sm'),
    'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.0','pdf','sm'), 
    'bbH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','bbH','125.0','pdf','sm'),
  },
  'type': 'lnN',
}

nuisances['pdf_Higgs_ttH'] = {
  'name': 'pdf_Higgs_ttH',
  'samples': {
    'ttH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ttH','125.0','pdf','sm'),
  },
  'type': 'lnN',
}

nuisances['pdf_Higgs_qqbar'] = {
  'name': 'pdf_Higgs_qqbar', 
  'type': 'lnN',
  'samples': {
    'qqH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),
    'qqH_htt': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),
    'WH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH','125.0','pdf','sm'),
    'WH_htt': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH','125.0','pdf','sm'),
    'ZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH','125.0','pdf','sm'),
    'ZH_htt': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH','125.0','pdf','sm'),
  },
}

nuisances['pdf_qqbar'] = {
  'name': 'pdf_qqbar',
  'type': 'lnN',
  'samples': {
    'VZ': '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
  },
}

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

# ggww and interference

nuisances['QCDscale_ggWW'] = {
  'name': 'QCDscale_ggWW',
  'type': 'lnN',
  'samples': {
    'ggWW': '1.15',
  },
}

#  - WW shaping
nuisances['WWresum'] = {
  'name': 'WWresum',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'WW': ['nllW_Rup/nllW', 'nllW_Rdown/nllW',],
  }
}

nuisances['WWqscale'] = {
  'name': 'WWqscale',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'WW': ['nllW_Qup/nllW', 'nllW_Qdown/nllW',],
  }
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
  'samples': {'DY_0j': '1.00'},
  'type': 'rateParam',
  'cuts': sr + ['topcr_0j', 'dycr_0j']
}

nuisances['DYttnorm1j'] = {
  'name': 'CMS_hww_DYttnorm1j', 
  'samples': {'DY_1j': '1.00'},
  'type': 'rateParam',
  'cuts': sr + ['topcr_1j', 'dycr_1j']
}

nuisances['DYttnormge2j'] = {
  'name': 'CMS_hww_DYttnormge2j',
  'samples': {'DY_ge2j': '1.00'},
  'type': 'rateParam',
  'cuts': sr + ['topcr_ge2j', 'dycr_ge2j']
}

###### WW norm

nuisances['WWnorm'] = {
  'name': 'CMS_hww_WWnorm',
  'samples': {
    'WW': '1.00',
  },
  'type': 'rateParam'
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
    'top_2j': '1.00',
  },
  'type': 'rateParam',
  'cuts': sr + ['topcr_ge2j', 'dycr_ge2j']
}

nuisances['singleTopToTTbar'] = {
  'name': 'singleTopToTTbar',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': dict((skey, ['((dataset==15 || dataset==16) * 1.0816 + (dataset==17 || dataset==18 || dataset==19))', '((dataset==15 || dataset==16) * 0.9184 + (dataset==17 || dataset==18 || dataset==19))',]) for skey in top)
  # tt = 17/18/19 depending on the sample/generator
  # tW = 15/16
}

## Top pT reweighting uncertainty

nuisances['TopPtRew'] = {
  'name': 'TopPtRew',   # Theory uncertainty
  'kind': 'weight',
  'type': 'shape',
  'samples': dict((skey, ["1.","((1./toprwgt - 1)*(dataset==19) + 1)"]) for skey in top)
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
