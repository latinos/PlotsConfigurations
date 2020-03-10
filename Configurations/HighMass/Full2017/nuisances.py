import math
# nuisances

# name of samples here must match keys in samples.py 

################################ EXPERIMENTAL UNCERTAINTIES  #################################

cutdict = {
           '0j' : 'hww2l2v_13TeV_'+EMorEEorMM+'_0j',
           '1j' : 'hww2l2v_13TeV_'+EMorEEorMM+'_1j',
           '2j' : 'hww2l2v_13TeV_'+EMorEEorMM+'_2j',
           'vbf' : 'hww2l2v_13TeV_'+EMorEEorMM+'_vbf',
           'dy_0j' : 'hww2l2v_13TeV_'+EMorEEorMM+'_dy_0j',
           'dy_1j' : 'hww2l2v_13TeV_'+EMorEEorMM+'_dy_1j',
           'dy_2j' : 'hww2l2v_13TeV_'+EMorEEorMM+'_dy_2j',
           'dy_vbf' : 'hww2l2v_13TeV_'+EMorEEorMM+'_dy_vbf',
           'top_0j' : 'hww2l2v_13TeV_'+EMorEEorMM+'_top_0j',
           'top_1j' : 'hww2l2v_13TeV_'+EMorEEorMM+'_top_1j',
           'top_2j' : 'hww2l2v_13TeV_'+EMorEEorMM+'_top_2j',
           'top_vbf' : 'hww2l2v_13TeV_'+EMorEEorMM+'_top_vbf',
           'h0j' : 'hww2l2v_13TeV_'+EMorEEorMM+'_high0j',
           'h1j' : 'hww2l2v_13TeV_'+EMorEEorMM+'_high1j',
           'h2j' : 'hww2l2v_13TeV_'+EMorEEorMM+'_high2j',
           'hvbf' : 'hww2l2v_13TeV_'+EMorEEorMM+'_highvbf',
           'hdy_0j' : 'hww2l2v_13TeV_'+EMorEEorMM+'_dy_high0j',
           'hdy_1j' : 'hww2l2v_13TeV_'+EMorEEorMM+'_dy_high1j',
           'hdy_2j' : 'hww2l2v_13TeV_'+EMorEEorMM+'_dy_high2j',
           'hdy_vbf' : 'hww2l2v_13TeV_'+EMorEEorMM+'_dy_highvbf',
           'htop_0j' : 'hww2l2v_13TeV_'+EMorEEorMM+'_top_high0j',
           'htop_1j' : 'hww2l2v_13TeV_'+EMorEEorMM+'_top_high1j',
           'htop_2j' : 'hww2l2v_13TeV_'+EMorEEorMM+'_top_high2j',
           'htop_vbf' : 'hww2l2v_13TeV_'+EMorEEorMM+'_top_highvbf'
          }

#### Luminosity

mc_emb = [skey for skey in samples if skey != 'DATA' and not skey.startswith('Fake') and skey != 'DYveto']
mc = [skey for skey in mc_emb if skey != 'DYemb']
#mc_noHM = [skey for skey in mc if not (skey.startswith('GGH') or skey.startswith('QQH') or skey.startswith('MSSM'))]
#mc_HM = [skey for skey in mc if (skey.startswith('GGH') or skey.startswith('QQH') or skey.startswith('MSSM'))]

#nuisances['lumi'] = {
#    'name': 'lumi_13TeV_2017',
#    'type': 'lnN',
#    'samples': dict((skey, '1.023') for skey in mc if skey not in ['WW', 'top', 'DY'])
#}

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2017',
    'type': 'lnN',
    'samples': dict((skey, '1.02') for skey in mc if skey not in ['WW', 'WW2J', 'WWewk', 'top', 'DY'])
}

nuisances['lumi_XYFact'] = {
    'name': 'lumi_13TeV_XYFact',
    'type': 'lnN',
    'samples': dict((skey, '1.008') for skey in mc if skey not in ['WW', 'WW2J', 'WWewk', 'top', 'DY'])
}

nuisances['lumi_LScale'] = {
    'name': 'lumi_13TeV_LScale',
    'type': 'lnN',
    'samples': dict((skey, '1.003') for skey in mc if skey not in ['WW', 'WW2J', 'WWewk', 'top', 'DY'])
}

nuisances['lumi_BBDefl'] = {
    'name': 'lumi_13TeV_BBDefl',
    'type': 'lnN',
    'samples': dict((skey, '1.004') for skey in mc if skey not in ['WW', 'WW2J', 'WWewk', 'top', 'DY'])
}

nuisances['lumi_DynBeta'] = {
    'name': 'lumi_13TeV_DynBeta',
    'type': 'lnN',
    'samples': dict((skey, '1.005') for skey in mc if skey not in ['WW', 'WW2J', 'WWewk', 'top', 'DY'])
}

nuisances['lumi_CurrCalib'] = {
    'name': 'lumi_13TeV_CurrCalib',
    'type': 'lnN',
    'samples': dict((skey, '1.003') for skey in mc if skey not in ['WW', 'WW2J', 'WWewk', 'top', 'DY'])
}

nuisances['lumi_Ghosts'] = {
    'name': 'lumi_13TeV_Ghosts',
    'type': 'lnN',
    'samples': dict((skey, '1.001') for skey in mc if skey not in ['WW', 'WW2J', 'WWewk', 'top', 'DY'])
}

#### FAKES

#if Nlep == '2' :
# already divided by central values in formulas !
fakeW_EleUp       = fakeW+'_EleUp'
fakeW_EleDown     = fakeW+'_EleDown'
fakeW_MuUp        = fakeW+'_MuUp'
fakeW_MuDown      = fakeW+'_MuDown'
fakeW_statEleUp   = fakeW+'_statEleUp'
fakeW_statEleDown = fakeW+'_statEleDown'
fakeW_statMuUp    = fakeW+'_statMuUp'
fakeW_statMuDown  = fakeW+'_statMuDown'

#else:
#  fakeW_EleUp       = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lElUp       / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
#  fakeW_EleDown     = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lElDown     / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
#  fakeW_MuUp        = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lMuUp       / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
#  fakeW_MuDown      = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lMuDown     / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
#  fakeW_statEleUp   = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatElUp   / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
#  fakeW_statEleDown = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatElDown / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
#  fakeW_statMuUp    = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatMuUp   / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
#  fakeW_statMuDown  = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatMuDown / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'

nuisances['fake_syst_em']  = {
               'name'  : 'CMS_fake_syst_em',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_em' : '1.30',
                             },
               }
nuisances['fake_syst_em']  = {
               'name'  : 'CMS_fake_syst_me',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_me' : '1.30',
                             },
               }
nuisances['fake_syst_em']  = {
               'name'  : 'CMS_fake_syst_ee',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_ee' : '1.30',
                             },
               }
nuisances['fake_syst_em']  = {
               'name'  : 'CMS_fake_syst_mm',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_mm' : '1.30',
                             },
               }

nuisances['fake_ele']  = {
                'name'  : 'CMS_fake_e_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'     : [ fakeW_EleUp , fakeW_EleDown ],
                              'Fake_me'     : [ fakeW_EleUp , fakeW_EleDown ],
                              'Fake_ee'     : [ fakeW_EleUp , fakeW_EleDown ],
                             },
}

nuisances['fake_ele_stat']  = {
                'name'  : 'CMS_fake_stat_e_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                              'Fake_me'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                              'Fake_ee'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                             },
}

nuisances['fake_mu']  = {
                'name'  : 'CMS_fake_m_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'     : [ fakeW_MuUp , fakeW_MuDown ],
                              'Fake_me'     : [ fakeW_MuUp , fakeW_MuDown ],
                              'Fake_mm'     : [ fakeW_MuUp , fakeW_MuDown ],
                             },
}


nuisances['fake_mu_stat']  = {
                'name'  : 'CMS_fake_stat_m_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'     : [ fakeW_statMuUp , fakeW_statMuDown ],
                              'Fake_me'     : [ fakeW_statMuUp , fakeW_statMuDown ],
                              'Fake_mm'     : [ fakeW_statMuUp , fakeW_statMuDown ],
                             },
}

##### B-tagger
nuisances['btag_shape_jes']  = {
                'name'  : 'CMS_btag_shape_jes',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)']) for skey in mc),
}

nuisances['btag_shape_lf']  = {
                'name'  : 'CMS_btag_shape_lf',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)']) for skey in mc),
}

nuisances['btag_shape_hf']  = {
                'name'  : 'CMS_btag_shape_hf',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)']) for skey in mc),
}

nuisances['btag_shape_hfstats1']  = {
                'name'  : 'CMS_btag_shape_hfstats1_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_hfstats2']  = {
                'name'  : 'CMS_btag_shape_hfstats2_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_lfstats1']  = {
                'name'  : 'CMS_btag_shape_lfstats1_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_lfstats2']  = {
                'name'  : 'CMS_btag_shape_lfstats2_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_cferr1']  = {
                'name'  : 'CMS_btag_shape_cferr1',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_cferr2']  = {
                'name'  : 'CMS_btag_shape_cferr2',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)']) for skey in mc),
}


##### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_2l_u)/(TriggerEffWeight_2l))*(TriggerEffWeight_2l>0.02) + (TriggerEffWeight_2l<=0.02)', '(TriggerEffWeight_2l_d)/(TriggerEffWeight_2l)'] # TODO Cut at 0.02?

nuisances['trigg']  = {
                'name'  : 'CMS_eff_hwwtrigger_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, trig_syst) for skey in mc_emb),
}

##### Electron Efficiency and energy scale

nuisances['eff_e']  = {
                'name'  : 'CMS_eff_e_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['LepSF2l__ele_'+eleWP+'__Up' , 'LepSF2l__ele_'+eleWP+'__Do']) for skey in mc_emb), 
}

nuisances['electronpt']  = {
                'name'  : 'CMS_scale_e_2017',
                'kind'  : 'suffix',
                'type'  : 'shape',
                'mapUp'  : 'ElepTup',
                'mapDown'  : 'ElepTdo',
                'samples': dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__ElepTup_suffix',
                'folderDown' : treeBaseDir+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__ElepTdo_suffix',
}

# TODO
#nuisances['electronpt_HM']  = {
#                'name'  : 'scale_e_2017',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples': dict((skey, ['1', '1']) for skey in mc_HM),
#                'folderUp'   : treeBaseDirHM+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__HighMass__hadd__ElepTup/',
#                'folderDown' : treeBaseDirHM+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__HighMass__hadd__ElepTdo/',
#}

if useEmbeddedDY:
  nuisances['electronpt_emb']  = {
                  'name'  : 'CMS_scale_e_2017',
                  'kind'  : 'suffix',
                  'type'  : 'shape',
                  'mapUp'  : 'ElepTup',
                  'mapDown'  : 'ElepTdo',
                  'samples'  : {
                     'DYemb'      : ['1', '1'],
                   },
                  'folderUp'   : treeBaseDir+'Embedding2017_102X_nAODv5_Full2017v6/DATAl1loose2017v6__l2loose__l2tightOR2017v6__Embedding__EmbElepTup_suffix',
                  'folderDown' : treeBaseDir+'Embedding2017_102X_nAODv5_Full2017v6/DATAl1loose2017v6__l2loose__l2tightOR2017v6__Embedding__EmbElepTdo_suffix',
  }

##### Muon Efficiency and energy scale

nuisances['eff_m']  = {
                'name'  : 'CMS_eff_m_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['LepSF2l__mu_'+muWP+'__Up' , 'LepSF2l__mu_'+muWP+'__Do']) for skey in mc_emb),
}

nuisances['muonpt']  = {
                'name'  : 'CMS_scale_m_2017',
                'kind'  : 'suffix',
                'type'  : 'shape',
                'mapUp'  : 'MupTup',
                'mapDown'  : 'MupTdo',
                'samples': dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__MupTup_suffix',
                'folderDown' : treeBaseDir+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__MupTdo_suffix',
}

# TODO
#nuisances['muonpt_HM']  = {
#                'name'  : 'scale_m_2017',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples': dict((skey, ['1', '1']) for skey in mc_HM),
#                'folderUp'   : treeBaseDirHM+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__HighMass__hadd__MupTup',
#                'folderDown' : treeBaseDirHM+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__HighMass__hadd__MupTdo',
#}

if useEmbeddedDY:
  nuisances['muonpt_emb']  = {
                  'name'  : 'CMS_scale_m_2017',
                  'kind'  : 'suffix',
                  'type'  : 'shape',
                  'mapUp'  : 'MupTup',
                  'mapDown'  : 'MupTdo',
                  'samples'  : {
                     'DYemb'      : ['1', '1'],
                   },
                  'folderUp'   : treeBaseDir+'Embedding2017_102X_nAODv5_Full2017v6/DATAl1loose2017v6__l2loose__l2tightOR2017v6__Embedding__EmbMupTup_suffix',
                  'folderDown' : treeBaseDir+'Embedding2017_102X_nAODv5_Full2017v6/DATAl1loose2017v6__l2loose__l2tightOR2017v6__Embedding__EmbMupTdo_suffix',
  }

###### Jet energy scale

nuisances['jes']  = {
                'name'  : 'CMS_scale_j_2017',
                 'kind'  : 'suffix',
                 'type'  : 'shape',
                 'mapUp'  : 'JESup',
                 'mapDown'  : 'JESdo',
                'samples': dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__JESup_suffix',
                'folderDown' : treeBaseDir+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__JESdo_suffix',
}

# TODO
#nuisances['jes_HM']  = {
#                'name'  : 'scale_j_2017',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples': dict((skey, ['1', '1']) for skey in mc_HM),
#                'folderUp'   : treeBaseDirHM+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__HighMass__hadd__JESup',
#                'folderDown' : treeBaseDirHM+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__HighMass__hadd__JESdo',
#}

###### MET energy scale

nuisances['met']  = {
                'name'  : 'CMS_scale_met_2017',
                'kind'  : 'suffix',
                'type'  : 'shape',
                'mapUp'  : 'METup',
                'mapDown'  : 'METdo',
                'samples': dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__METup_suffix',
                'folderDown' : treeBaseDir+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__METdo_suffix',
}

# TODO
#nuisances['met_HM']  = {
#                'name'  : 'scale_met_2017',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples': dict((skey, ['1', '1']) for skey in mc_HM),
#                'folderUp'   : treeBaseDirHM+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__HighMass__hadd__METup',
#                'folderDown' : treeBaseDirHM+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__HighMass__hadd__METdo',
#}

# Prefire correction


nuisances['prefire']  = {
                'name'  : 'CMS_eff_prefiring_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']) for skey in mc),
}

# Di-Tau vetoing for embedding
if useEmbeddedDY: 
  nuisances['embedveto']  = {
                  'name'  : 'CMS_embed_veto_2017',
                  'kind'  : 'weight',
                  'type'  : 'shape',
                  'samples'  : {
                     'DYemb'    : ['1', '1'],
                     'DYveto'   : ['0.1', '-0.1'],
                  }
  }


#
# PS and UE
#

# Temp? No samples in __PS shapes. Copied from Differential
nuisances['PS']  = {
    'name': 'PS',
    'type': 'shape',
    'kind': 'weight_envelope',
    'samples': {
        'WW': ['PSWeight[0]', 'PSWeight[1]', 'PSWeight[2]', 'PSWeight[3]'],
        'ggH_hww': ['PSWeight[0]', 'PSWeight[1]', 'PSWeight[2]', 'PSWeight[3]'],
        'qqH_hww': ['PSWeight[0]', 'PSWeight[1]', 'PSWeight[2]', 'PSWeight[3]']
    },
    'AsLnN': '1'
}
#nuisances['PS']  = {
#                'name'  : 'PS_2017',
#                'skipCMS' : 1,
#                'kind'  : 'weight',#'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                  'WW'      : ['PSWeight[0]', 'PSWeight[3]'] #['1', '1'],
#                  #'ggH_hww' : ['1', '1'], 
#                  #'qqH_hww' : ['1', '1']
#                  },
#                #'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__PS',
#                #'folderDown' : treeBaseDir+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6',
#                'AsLnN'      : '1',
#                }

#TODO: _suffix branches -> Cant do without because HMvars (b2b)
#nuisances['UE']  = {
#                'name'  : 'UE', 
#                'skipCMS' : 1,
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                  #'WW'      : ['0.974123217122', '0.00764355789067'], #The WW down file is buggy  
#                  'ggH_hww' : ['0.994216746291', '1.020025863'],
#                  'qqH_hww' : ['0.980501317842', '1.00876768329'],
#                },
#                'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__UEup',
#                'folderDown' : treeBaseDir+'Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__UEdo',
#                'AsLnN'      : '1',
#                'synchronized': False
#}

# TODO: HM?
nuisances['PU']  = {
                'name'  : 'CMS_PU_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                  'DY': ['0.993259983266*(puWeightUp/puWeight)', '0.997656381501*(puWeightDown/puWeight)'],
                  'top': ['1.00331969187*(puWeightUp/puWeight)', '0.999199609528*(puWeightDown/puWeight)'],
                  'WW': ['1.0033022059*(puWeightUp/puWeight)', '0.997085330608*(puWeightDown/puWeight)'],
                  'ggH_hww': ['1.0036768006*(puWeightUp/puWeight)', '0.995996570285*(puWeightDown/puWeight)'],
                  'qqH_hww': ['1.00374694528*(puWeightUp/puWeight)', '0.995878596852*(puWeightDown/puWeight)'],
                },
                'AsLnN'      : '1',
}

# TODO: HM!!!
#
# Theory uncertainty for ggH
#
#
#   THU_ggH_Mu, THU_ggH_Res, THU_ggH_Mig01, THU_ggH_Mig12, THU_ggH_VBF2j, THU_ggH_VBF3j, THU_ggH_PT60, THU_ggH_PT120, THU_ggH_qmtop
#
#   see https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SignalModelingTools
#
# FIXME: Add these uncertainties



# QCD scale uncertainties

nuisances['QCDscale_ggH']  = {
               'name'  : 'QCDscale_ggH', 
               'samples'  : {
                   'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','scale','sm'),
                   'ggH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
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

nuisances['QCDscale_qqH']  = {
               'name'  : 'QCDscale_qqH', 
               'samples'  : {
                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm'),
                   'qqH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }

for m in massvbf:
  nuisances['QCDscale_qqH']['samples'].update({'QQH_'+m+model_name: HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'scale','bsm')})
  nuisances['QCDscale_qqH']['samples'].update({'QQHSBI_'+m+model_name: HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'scale','bsm')})
  nuisances['QCDscale_qqH']['samples'].update({'MSSMQQH_'+m+model_name: HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'scale','bsm')})
  nuisances['QCDscale_qqH']['samples'].update({'MSSMQQHSBI_'+m+model_name: HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'scale','bsm')})


nuisances['QCDscale_VH']  = {
               'name'  : 'QCDscale_VH', 
               'samples'  : {
                   'WH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
                   'WH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
                   'ZH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
                   'ZH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_ggZH']  = {
               'name'  : 'QCDscale_ggZH', 
               'samples'  : {
                   'ggZH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_bbH']  = {
               'name'  : 'QCDscale_bbH',  # Includes PDF!
               'samples'  : {
                   'bbH_hww' : '0.761/1.201', #HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_ttH']  = {
               'name'  : 'QCDscale_ttH', 
               'samples'  : {
                   'ttH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_gg_ACCEPT']  = {
               'name'  : 'QCDscale_gg_ACCEPT',
               'samples'  : {
                   'ggH_hww'    : '1.012',
                   'ggH_htt'    : '1.012',
                   'ggZH_hww'   : '1.012',
                   'ggWW'       : '1.012',
                   },
               'type'  : 'lnN',
              }

for m in massggh:
  #scalegg_weight=1.04802  + (int(m)*3.62976e-05)+(int(m)*int(m)*(-2.61565e-08) )+(int(m)*int(m)*int(m)*4.20694e-12 ) # HIG-17-033
  #scalegg_weight=25.5859/(int(m)-90.1047)+0.9894685+5.20345e-05*int(m)-3.80604e-09*int(m)*int(m)
  if EMorEEorMM=="em":
    scalegg_weight=3380.09/((int(m)-87.9964)*(int(m)-87.9964))-0.0130903+5.53578e-05*int(m)
  else:
    scalegg_weight=9.87198/(int(m)-110.943)+0.215754-5.76395e-06*int(m)+1.94797e-09*int(m)*int(m)
  nuisances['QCDscale_gg_ACCEPT']['samples'].update({'GGH_'+m+model_name: str(scalegg_weight)})
  nuisances['QCDscale_gg_ACCEPT']['samples'].update({'GGHSBI_'+m+model_name: str(scalegg_weight)})
  nuisances['QCDscale_gg_ACCEPT']['samples'].update({'MSSMGGH_'+m+model_name: str(scalegg_weight)})
  nuisances['QCDscale_gg_ACCEPT']['samples'].update({'MSSMGGHSBI_'+m+model_name: str(scalegg_weight)})

nuisances['QCDscale_qqbar_ACCEPT']  = {
               'name'  : 'QCDscale_qqbar_ACCEPT',
               'samples'  : {
                   'qqH_hww'   : '1.003',
                   'qqH_htt'   : '1.003',
                   'WH_hww'    : '1.010',
                   'WH_htt'    : '1.010',
                   'ZH_hww'    : '1.015',
                   'ZH_htt'    : '1.015',
                   'qqWWqq'    : '1.003',
                   },
               'type'  : 'lnN',
              }

for m in massvbf:
  #if int(m)<449:
  #  scaleqq_weight=1.003
  #else:
  #  scaleqq_weight=0.971893 + (int(m)*8.75961e-05 )+(int(m)*int(m)*(-3.9762e-08) )+(int(m)*int(m)*int(m)*6.78212e-12 ) # HIG-17-033
  #scaleqq_weight=5.41529/(int(m)-52.2561)+1.072699+6.22111e-05*int(m)-1.14266e-08*int(m)*int(m)
  if EMorEEorMM=="em":
    scaleqq_weight=21.8984/(int(m)-33.7501)+0.000225869+7.62333e-05*int(m)-1.34554e-08*int(m)*int(m)
  else:
    scaleqq_weight=12.0878/(int(m)-77.7306)+0.0105641-1.34398e-05*int(m)+1.32734e-08*int(m)*int(m)
  nuisances['QCDscale_qqbar_ACCEPT']['samples'].update({'QQH_'+m+model_name: str(scaleqq_weight)})
  nuisances['QCDscale_qqbar_ACCEPT']['samples'].update({'QQHSBI_'+m+model_name: str(scaleqq_weight)})
  nuisances['QCDscale_qqbar_ACCEPT']['samples'].update({'MSSMQQH_'+m+model_name: str(scaleqq_weight)})
  nuisances['QCDscale_qqbar_ACCEPT']['samples'].update({'MSSMQQHSBI_'+m+model_name: str(scaleqq_weight)})

# Different DY samples have different contents in the LHEScaleWeight branch!
# If there's a difference between the DY M-50 and M-10to50 sample, use the syntax corresponding to the M-50 sample.
# There's next to no contribution from M-10to50 anyway.
# 2017:
if EMorEEorMM=="em": #DYJetsToTT_MuEle_M-50
  variations = ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 4, 6, 7]]
else: #DYJetsToLL_M-50_ext1
  variations = ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 5, 7, 8]]

nuisances['QCDscale_V']  = {
                'name'  : 'QCDscale_V',
                'skipCMS' : 1,
                'kind'  : 'weight_envelope',
                'type'  : 'shape',
                'samples'  : {
                   'DY' : variations,
                }
}

# Variations for all other samples are consistent.
variations = ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 5, 7, 8]]

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

nuisances['QCDscale_VV']  = {
               'name'  : 'QCDscale_VV', 
                'skipCMS' : 1,
                'kind'  : 'weight_envelope',
                'type'  : 'shape',
               'samples'  : {
                   'Vg' : variations,
                   'VZ' : variations,
                   'VgS' : variations,
                   }
              }

nuisances['QCDscale_WWewk']  = {
               'name'  : 'QCDscale_WWewk',
               'samples'  : {
                   'WWewk' : '1.11',
                   },
               'type'  : 'lnN'
              }

# ggww and interference
nuisances['QCDscale_ggWW']  = {
               'name'  : 'QCDscale_ggWW',
               'type'  : 'lnN',
               'samples'  : {
                   'ggWW' : '1.15',
                   },
              }
for m in massggh:
    nuisances['QCDscale_ggWW']['samples'].update({'GGHSBI_'+m+model_name: '1.15'})
    nuisances['QCDscale_ggWW']['samples'].update({'MSSMGGHSBI_'+m+model_name: '1.15'})

# PDF uncertainties
nuisances['pdf_Higgs_gg']  = {
               'name'  : 'pdf_Higgs_gg',
               'samples'  : {
                   #'ggWW'    : '1.05',    # --> no, since absorbed into k-scale factor
                   'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH' ,'125.09','pdf','sm'),
                   'ggH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH' ,'125.09','pdf','sm'),
                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm'),
                   #'bbH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH','125.09','pdf','sm'), # --> no, already included in QCDscale, see https://github.com/latinos/LatinoAnalysis/blob/master/Tools/data/lhc-hxswg-YR4/sm/xs/13TeV/13TeV-bbH.txt
                   },
               'type'  : 'lnN',
              }
for m in massggh:
    nuisances['pdf_Higgs_gg']['samples'].update({'GGH_'+m+model_name: HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH',int(m),'pdf','bsm')})
    nuisances['pdf_Higgs_gg']['samples'].update({'GGHSBI_'+m+model_name: HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH',int(m),'pdf','bsm')})
    nuisances['pdf_Higgs_gg']['samples'].update({'MSSMGGH_'+m+model_name: HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH',int(m),'pdf','bsm')})
    nuisances['pdf_Higgs_gg']['samples'].update({'MSSMGGHSBI_'+m+model_name: HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH',int(m),'pdf','bsm')})


nuisances['pdf_Higgs_qqbar']  = {
               'name'  : 'pdf_Higgs_qqbar',
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm'),
                   'qqH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm'),
                   'WH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   'WH_htt'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   'ZH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
                   'ZH_htt'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
                   },
              }
for m in massvbf:
    nuisances['pdf_Higgs_qqbar']['samples'].update({'QQH_'+m+model_name:HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'pdf','bsm')})
    nuisances['pdf_Higgs_qqbar']['samples'].update({'QQHSBI_'+m+model_name:HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'pdf','bsm')})
    nuisances['pdf_Higgs_qqbar']['samples'].update({'MSSMQQH_'+m+model_name:HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'pdf','bsm')})
    nuisances['pdf_Higgs_qqbar']['samples'].update({'MSSMQQHSBI_'+m+model_name:HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'pdf','bsm')})

nuisances['pdf_Higgs_ttH']  = {
               'name'  : 'pdf_Higgs_ttH',
               'samples'  : {
                   'ttH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','pdf','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['pdf_qqbar']  = {
               'name'  : 'pdf_qqbar',
               'type'  : 'lnN',
               'samples'  : {
                   'Vg'      : '1.04',
                   'VZ'      : '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
                   'VgS'     : '1.04',
                   },
              }


nuisances['pdf_Higgs_gg_ACCEPT']  = {
               'name'  : 'pdf_Higgs_gg_ACCEPT',
               'samples'  : {
                   'ggH_hww' : '1.006',
                   'ggH_htt' : '1.006',
                   'ggZH_hww': '1.006',
                   },
               'type'  : 'lnN',
              }
for m in massggh:
    #if int(m)<1500: # HIG-17-033
    #  nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'GGH_'+m+model_name:'1.007'})
    #  nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'GGHSBI_'+m+model_name:'1.010'})
    #  nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'MSSMGGH_'+m:'1.007'})
    #  nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'MSSMGGHSBI_'+m:'1.010'})
    #elif int(m)>1499:
    #  nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'GGH_'+m+model_name:'1.012'})
    #  nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'GGHSBI_'+m+model_name:'1.035'})
    #  nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'MSSMGGH_'+m:'1.012'})
    #  nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'MSSMGGHSBI_'+m:'1.035'})
  if EMorEEorMM=="em":
    pdfgg_weight=0.985045*math.exp(-0.5*((int(m)-209.983)/578.24)*((int(m)-209.983)/578.24))-0.474738+0.000361299*int(m)-2.82672e-08*int(m)*int(m)
  else:
    pdfgg_weight=8.19799*math.exp(-0.5*((int(m)+1218.65)/1629.68)*((int(m)+1218.65)/1629.68))-5.55142+0.0029222*int(m)-3.33899e-07*int(m)*int(m)
  nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'GGH_'+m+model_name: str(pdfgg_weight)})
  nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'GGHSBI_'+m+model_name: str(pdfgg_weight)})
  nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'MSSMGGH_'+m+model_name: str(pdfgg_weight)})
  nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'MSSMGGHSBI_'+m+model_name: str(pdfgg_weight)})


#For the HM singals, the un. are taken from in VBF cat
nuisances['pdf_Higgs_qqbar_ACCEPT']  = {
               'name'  : 'pdf_Higgs_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww' : '1.002',
                   'qqH_htt' : '1.002',
                   'WH_hww'  : '1.003',
                   'WH_htt'  : '1.003',
                   'ZH_hww'  : '1.002',
                   'ZH_htt'  : '1.002',
                   },
              }
for m in massvbf:
    #if int(m)<1000: # HIG-17-033
    #  nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'QQH_'+m+model_name:'1.005'})
    #  nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'QQHSBI_'+m+model_name:'1.005'})
    #  nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'MSSMQQH_'+m:'1.005'})
    #  nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'MSSMQQHSBI_'+m:'1.005'})
    #elif int(m)>999:  
    #  nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'QQH_'+m+model_name:'1.015'})
    #  nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'QQHSBI_'+m+model_name:'1.015'})
    #  nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'MSSMQQH_'+m:'1.015'})
    #  nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'MSSMQQHSBI_'+m:'1.015'})
  if EMorEEorMM=="em":
    pdfqq_weight=0.205827+6.16956e-05*int(m)-4.06947e-09*int(m)*int(m)
  else:
    pdfqq_weight=0.267369-0.000147753*int(m)+5.17131e-08*int(m)*int(m)
  nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'QQH_'+m+model_name: str(pdfqq_weight)})
  nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'QQHSBI_'+m+model_name: str(pdfqq_weight)})
  nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'MSSMQQH_'+m+model_name: str(pdfqq_weight)})
  nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'MSSMQQHSBI_'+m+model_name: str(pdfqq_weight)})

nuisances['pdf_gg_ACCEPT']  = {
               'name'  : 'pdf_gg_ACCEPT',
               'samples'  : {
                   'ggWW'    : '1.006',
                   },
               'type'  : 'lnN',
              }

nuisances['pdf_qqbar_ACCEPT']  = {
               'name'  : 'pdf_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   'qqWWqq'  : '1.001',
                   },
              }

#  - Uncertainty on SR/CR ratio

nuisances['CRSR_accept_dy'] = {
    'name': 'CMS_hww_CRSR_accept_dy',
    'type': 'lnN',
    'samples': {'DY': '1.02'},
    'cuts'  : [
                 cutdict['dy_0j'],
                 cutdict['dy_1j'],
                 cutdict['dy_2j'],
                 cutdict['dy_vbf'],
                 cutdict['hdy_0j'],
                 cutdict['hdy_1j'],
                 cutdict['hdy_2j'],
                 cutdict['hdy_vbf'],
                ]
}

nuisances['CRSR_accept_top'] = {
    'name': 'CMS_hww_CRSR_accept_top',
    'type': 'lnN',
    'samples': {'top': '1.01'},
    'cuts'  : [
                 cutdict['top_0j'],
                 cutdict['top_1j'],
                 cutdict['top_2j'],
                 cutdict['top_vbf'],
                 cutdict['htop_0j'],
                 cutdict['htop_1j'],
                 cutdict['htop_2j'],
                 cutdict['htop_vbf'],
                ]
}

#  - WW shaping
nuisances['WWresum0j']  = {
                'name'  : 'CMS_hww_WWresum_0j',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   },
               'cuts'  : [
                 cutdict['0j'],
                 cutdict['top_0j'],
                 cutdict['dy_0j'],
                 cutdict['h0j'],
                 cutdict['htop_0j'],
                 cutdict['hdy_0j'],
                ]
                }

nuisances['WWresum1j']  = {
                'name'  : 'CMS_hww_WWresum_1j',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   },
               'cuts'  : [
                 cutdict['1j'],
                 cutdict['top_1j'],
                 cutdict['dy_1j'],
                 cutdict['h1j'],
                 cutdict['htop_1j'],
                 cutdict['hdy_1j'],
                ]               
                }

nuisances['WWresum2j']  = {
                'name'  : 'CMS_hww_WWresum_2j',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                },
               'cuts'  : [
                 cutdict['2j'],
                 cutdict['top_2j'],
                 cutdict['dy_2j'],
                 cutdict['h2j'],
                 cutdict['htop_2j'],
                 cutdict['hdy_2j'],
                ]
                }

nuisances['WWresumvbf']  = {
                'name'  : 'CMS_hww_WWresum_vbf',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                },
               'cuts'  : [
                 cutdict['vbf'],
                 cutdict['top_vbf'],
                 cutdict['dy_vbf'],
                 cutdict['hvbf'],
                 cutdict['htop_vbf'],
                 cutdict['hdy_vbf'],
                ]
                }

nuisances['WWqscale0j']  = {
                'name'  : 'CMS_hww_WWqscale_0j',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   },
               'cuts'  : [
                 cutdict['0j'],
                 cutdict['top_0j'],
                 cutdict['dy_0j'],
                 cutdict['h0j'],
                 cutdict['htop_0j'],
                 cutdict['hdy_0j'],
                ] 
                }

nuisances['WWqscale1j']  = {
                'name'  : 'CMS_hww_WWqscale_1j',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   },
               'cuts'  : [
                 cutdict['1j'],
                 cutdict['top_1j'],
                 cutdict['dy_1j'],
                 cutdict['h1j'],
                 cutdict['htop_1j'],
                 cutdict['hdy_1j'],
                ] 
                }

nuisances['WWqscale2j']  = {
                'name'  : 'CMS_hww_WWqscale_2j',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                },
                'cuts'  : [
                 cutdict['2j'],
                 cutdict['top_2j'],
                 cutdict['dy_2j'],
                 cutdict['h2j'],
                 cutdict['htop_2j'],
                 cutdict['hdy_2j'],
                ]
                }

nuisances['WWqscalevbf']  = {
                'name'  : 'CMS_hww_WWqscale_vbf',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                },
                'cuts'  : [
                 cutdict['vbf'],
                 cutdict['top_vbf'],
                 cutdict['dy_vbf'],
                 cutdict['hvbf'],
                 cutdict['htop_vbf'],
                 cutdict['hdy_vbf'],
                ]
                }

nuisances['VgStar']  = {
               'name'  : 'CMS_hww_VgStarScale', 
               'type'  : 'lnN',
               'samples'  : {
                   'VgS_L' : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   },
                }
 
nuisances['VZ'] = {
               'name'  : 'CMS_hww_VZScale',
               'type'  : 'lnN',
               'samples'  : {
                   'VgS_H' : '1.16', 
                   },
                }

## Top pT reweighting uncertainty
# TODO: Aren't these applied to all Top samples? Not just TTTo2L2Nu?
nuisances['TopPtRew']  = {
                'name'  : 'CMS_topPtRew',   # Theory uncertainty
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples' : {
                     'top'  : ["1.","1./Top_pTrw"]
                },
                'symmetrize': True
         }
nuisances['singleTopToTTbar']  = {
                'name'  : 'singleTopToTTbar',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples' : {
                     'top'  : ['(topGenPt * antitopGenPt <= 0.) * 1.0816 + (topGenPt * antitopGenPt > 0.)','(topGenPt * antitopGenPt <= 0.) * 0.9184 + (topGenPt * antitopGenPt > 0.)']
                },
         }

## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat']  = {
              'type'  : 'auto',
              'maxPoiss'  : '10',
              'includeSignal'  : '0',
              #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
              #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
              'samples' : {}
             }

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

    nuisances['stat']['samples']['MSSMGGH_'+m+model_name] = { 'typeStat' : 'bbb', 'zeroMCError' : '0', 'correlate': [] }
    nuisances['stat']['samples']['ggWW']["correlate"].append('MSSMGGHSBI_'+m+model_name)
    nuisances['stat']['samples']['ggH_hww']["correlate"].append('MSSMGGHSBI_'+m+model_name)
    nuisances['stat']['samples']['MSSMGGH_'+m+model_name]['correlate'].append('MSSMGGHSBI_'+m+model_name)

  for m in massvbf:
    nuisances['stat']['samples']['QQH_'+m+model_name] = { 'typeStat' : 'bbb', 'zeroMCError' : '0', 'correlate': [] }
    nuisances['stat']['samples']['qqWWqq']["correlate"].append('QQHSBI_'+m+model_name)
    nuisances['stat']['samples']['qqH_hww']["correlate"].append('QQHSBI_'+m+model_name)
    nuisances['stat']['samples']['QQH_'+m+model_name]['correlate'].append('QQHSBI_'+m+model_name)

    nuisances['stat']['samples']['MSSMQQH_'+m+model_name] = { 'typeStat' : 'bbb', 'zeroMCError' : '0', 'correlate': [] }
    nuisances['stat']['samples']['qqWWqq']["correlate"].append('MSSMQQHSBI_'+m+model_name)
    nuisances['stat']['samples']['qqH_hww']["correlate"].append('MSSMQQHSBI_'+m+model_name)
    nuisances['stat']['samples']['MSSMQQH_'+m+model_name]['correlate'].append('MSSMQQHSBI_'+m+model_name)

