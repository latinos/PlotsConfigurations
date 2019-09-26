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

mc_emb = [skey for skey in samples if skey != 'DATA' and not skey.startswith('Fake')]
mc = [skey for skey in mc_emb if skey != 'DYemb']
mc_noHM = [skey for skey in mc if not (skey.startswith('GGH') or skey.startswith('QQH') or skey.startswith('MSSM'))]
mc_HM = [skey for skey in mc if (skey.startswith('GGH') or skey.startswith('QQH') or skey.startswith('MSSM'))]

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV_2017',
               'samples': dict((skey, '1.023') for skey in mc if skey not in ['WW', 'top', 'DY']), 
               'type'  : 'lnN',
              }

#### FAKES

if Nlep == '2' :
  # already divided by central values in formulas !
  fakeW_EleUp       = fakeW+'_EleUp'
  fakeW_EleDown     = fakeW+'_EleDown'
  fakeW_MuUp        = fakeW+'_MuUp'
  fakeW_MuDown      = fakeW+'_MuDown'
  fakeW_statEleUp   = fakeW+'_statEleUp'
  fakeW_statEleDown = fakeW+'_statEleDown'
  fakeW_statMuUp    = fakeW+'_statMuUp'
  fakeW_statMuDown  = fakeW+'_statMuDown'

else:
  fakeW_EleUp       = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lElUp       / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_EleDown     = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lElDown     / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_MuUp        = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lMuUp       / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_MuDown      = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lMuDown     / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_statEleUp   = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatElUp   / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_statEleDown = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatElDown / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_statMuUp    = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatMuUp   / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_statMuDown  = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatMuDown / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'

## FIXME: check the 30% lnN
nuisances['fake_syst']  = {
               'name'  : 'CMS_hwwem_fake_syst_2017',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_em' : '1.30',
                             'Fake_me' : '1.30',
                             'Fake_ee' : '1.30',
                             'Fake_mm' : '1.30',
                             },
               }

nuisances['fake_ele']  = {
                'name'  : 'hww_fake_ele_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'     : [ fakeW_EleUp , fakeW_EleDown ],
                              'Fake_me'     : [ fakeW_EleUp , fakeW_EleDown ],
                              'Fake_ee'     : [ fakeW_EleUp , fakeW_EleDown ],
                             },
}

nuisances['fake_ele_stat']  = {
                'name'  : 'hww_fake_ele_stat_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                              'Fake_me'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                              'Fake_ee'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                             },
}

nuisances['fake_mu']  = {
                'name'  : 'hww_fake_mu_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'     : [ fakeW_MuUp , fakeW_MuDown ],
                              'Fake_me'     : [ fakeW_MuUp , fakeW_MuDown ],
                              'Fake_mm'     : [ fakeW_MuUp , fakeW_MuDown ],
                             },
}


nuisances['fake_mu_stat']  = {
                'name'  : 'hww_fake_mu_stat_2017',
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
                'name'  : 'btag_shape_jes_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)']) for skey in mc),
}

nuisances['btag_shape_lf']  = {
                'name'  : 'btag_shape_lf_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)']) for skey in mc),
}

nuisances['btag_shape_hf']  = {
                'name'  : 'btag_shape_hf_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)']) for skey in mc),
}

nuisances['btag_shape_hfstats1']  = {
                'name'  : 'btag_shape_hfstats1_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_hfstats2']  = {
                'name'  : 'btag_shape_hfstats2_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_lfstats1']  = {
                'name'  : 'btag_shape_lfstats1_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_lfstats2']  = {
                'name'  : 'btag_shape_lfstats2_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_cferr1']  = {
                'name'  : 'btag_shape_cferr1_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_cferr2']  = {
                'name'  : 'btag_shape_cferr2_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)']) for skey in mc),
}


##### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_'+Nlep+'l_u)/(TriggerEffWeight_'+Nlep+'l))*(TriggerEffWeight_'+Nlep+'l>0.02) + (TriggerEffWeight_'+Nlep+'l<=0.02)', '(TriggerEffWeight_'+Nlep+'l_d)/(TriggerEffWeight_'+Nlep+'l)'] # TODO Cut at 0.02?

nuisances['trigg']  = {
                'name'  : 'hww_trigger_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, trig_syst) for skey in mc_emb),
}

##### Electron Efficiency and energy scale

nuisances['eff_e']  = {
                'name'  : 'eff_e_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['LepSF'+Nlep+'l__ele_'+eleWP+'__Up' , 'LepSF'+Nlep+'l__ele_'+eleWP+'__Do']) for skey in mc_emb), 
}

nuisances['electronpt']  = {
                'name'  : 'scale_e_2017',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples': dict((skey, ['1', '1']) for skey in mc_noHM),
                'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__ElepTup',
                'folderDown' : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__ElepTdo',
}

# TODO
#nuisances['electronpt_HM']  = {
#                'name'  : 'scale_e_2017',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples': dict((skey, ['1', '1']) for skey in mc_HM),
#                'folderUp'   : treeBaseDirHM+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__HighMass__hadd__ElepTup/',
#                'folderDown' : treeBaseDirHM+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__HighMass__hadd__ElepTdo/',
#}

if useEmbeddedDY:
  nuisances['electronpt_emb']  = {
                  'name'  : 'scale_e_2017',
                  'kind'  : 'tree',
                  'type'  : 'shape',
                  'samples'  : {
                     'DYemb'      : ['1', '1'],
                   },
                  'folderUp'   : treeBaseDir+'Embedding2017_102X_nAODv4_Full2017v5/DATAl1loose2017v5__l2loose__l2tightOR2017v5__Embedding2017__hadd__EmbElepTup',
                  'folderDown' : treeBaseDir+'Embedding2017_102X_nAODv4_Full2017v5/DATAl1loose2017v5__l2loose__l2tightOR2017v5__Embedding2017__hadd__EmbElepTdo',
  }

##### Muon Efficiency and energy scale

nuisances['eff_m']  = {
                'name'  : 'eff_m_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['LepSF'+Nlep+'l__mu_'+muWP+'__Up' , 'LepSF'+Nlep+'l__mu_'+muWP+'__Do']) for skey in mc_emb),
}

nuisances['muonpt']  = {
                'name'  : 'scale_m_2017',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples': dict((skey, ['1', '1']) for skey in mc_noHM),
                'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__MupTup',
                'folderDown' : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__MupTdo',
}

# TODO
#nuisances['muonpt_HM']  = {
#                'name'  : 'scale_m_2017',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples': dict((skey, ['1', '1']) for skey in mc_HM),
#                'folderUp'   : treeBaseDirHM+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__HighMass__hadd__MupTup',
#                'folderDown' : treeBaseDirHM+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__HighMass__hadd__MupTdo',
#}

if useEmbeddedDY:
  nuisances['electronpt_emb']  = {
                  'name'  : 'scale_m_2017',
                  'kind'  : 'tree',
                  'type'  : 'shape',
                  'samples'  : {
                     'DYemb'      : ['1', '1'],
                   },
                  'folderUp'   : treeBaseDir+'Embedding2017_102X_nAODv4_Full2017v5/DATAl1loose2017v5__l2loose__l2tightOR2017v5__Embedding2017__hadd__EmbMupTup',
                  'folderDown' : treeBaseDir+'Embedding2017_102X_nAODv4_Full2017v5/DATAl1loose2017v5__l2loose__l2tightOR2017v5__Embedding2017__hadd__EmbMupTdo',
  }

###### Jet energy scale

nuisances['jes']  = {
                'name'  : 'scale_j_2017',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples': dict((skey, ['1', '1']) for skey in mc_noHM),
                'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__JESup',
                'folderDown' : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__JESdo',
}

# TODO
#nuisances['jes_HM']  = {
#                'name'  : 'scale_j_2017',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples': dict((skey, ['1', '1']) for skey in mc_HM),
#                'folderUp'   : treeBaseDirHM+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__HighMass__hadd__JESup',
#                'folderDown' : treeBaseDirHM+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__HighMass__hadd__JESdo',
#}

###### MET energy scale

nuisances['met']  = {
                'name'  : 'scale_met_2017',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples': dict((skey, ['1', '1']) for skey in mc_noHM),
                'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__METup',
                'folderDown' : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__METdo',
}

# TODO
#nuisances['met_HM']  = {
#                'name'  : 'scale_met_2017',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples': dict((skey, ['1', '1']) for skey in mc_HM),
#                'folderUp'   : treeBaseDirHM+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__HighMass__hadd__METup',
#                'folderDown' : treeBaseDirHM+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__HighMass__hadd__METdo',
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
                  'name'  : 'CMS_embed_veto',
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
    'name': 'PS_2017',
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
#                #'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__PS',
#                #'folderDown' : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5',
#                'AsLnN'      : '1',
#                }

nuisances['UE']  = {
                'name'  : 'UE_2017', 
                'skipCMS' : 1,
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                  'WW'      : ['1', '1'],
                  'ggH_hww' : ['1', '1'], 
                  'qqH_hww' : ['1', '1']
                },
                'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__UEup',
                'folderDown' : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__UEdo',
                'AsLnN'      : '1',
                'synchronized': False
}

# TODO: HM?
nuisances['PU']  = {
                'name'  : 'PU_2017',
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
               'name'  : 'QCDscale_gH', 
               'samples'  : {
                   'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','scale','sm'),
                   'ggH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_qqH']  = {
               'name'  : 'QCDscale_qqH', 
               'samples'  : {
                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm'),
                   'qqH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }

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
               'name'  : 'QCDscale_bbH', 
               'samples'  : {
                   'bbH_hww' : [0.761,1.201], #HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH','125.09','scale','sm'),
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

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['QCDscale_gg_ACCEPT']  = {
               'name'  : 'QCDscale_gg_ACCEPT',
               'samples'  : {
                   'ggH_hww'    : '1.027',
                   'ggH_htt'    : '1.027',
                   'ggZH_hww'   : '1.027',
                   'ggWW'       : '1.027',
                   },
               'type'  : 'lnN',
              }

for m in massggh:
  scalegg_weight=1.04802  + (int(m)*3.62976e-05)+(int(m)*int(m)*(-2.61565e-08) )+(int(m)*int(m)*int(m)*4.20694e-12 )
  nuisances['QCDscale_gg_ACCEPT']['samples'].update({'GGH_'+m+model_name: str(scalegg_weight)})
  nuisances['QCDscale_gg_ACCEPT']['samples'].update({'GGHSBI_'+m+model_name: str(scalegg_weight)})
  nuisances['QCDscale_gg_ACCEPT']['samples'].update({'MSSMGGH_'+m: str(scalegg_weight)})
  nuisances['QCDscale_gg_ACCEPT']['samples'].update({'MSSMGGHSBI_'+m: str(scalegg_weight)})

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['QCDscale_qqbar_ACCEPT']  = {
               'name'  : 'QCDscale_qqbar_ACCEPT',
               'samples'  : {
                   'qqH_hww'   : '1.007',
                   'qqH_htt'   : '1.007',
                   'WH_hww'    : '1.05',
                   'WH_htt'    : '1.05',
                   'ZH_hww'    : '1.04',
                   'ZH_htt'    : '1.04',
                   'VZ'        : '1.029',
                   },
               'type'  : 'lnN',
              }

for m in massvbf:
  if int(m)<449:
    scaleqq_weight=1.003
  else:
    scaleqq_weight=0.971893 + (int(m)*8.75961e-05 )+(int(m)*int(m)*(-3.9762e-08) )+(int(m)*int(m)*int(m)*6.78212e-12 )
  nuisances['QCDscale_qqbar_ACCEPT']['samples'].update({'QQH_'+m+model_name: str(scaleqq_weight)})
  nuisances['QCDscale_qqbar_ACCEPT']['samples'].update({'QQHSBI_'+m+model_name: str(scaleqq_weight)})
  nuisances['QCDscale_qqbar_ACCEPT']['samples'].update({'MSSMQQH_'+m: str(scaleqq_weight)})
  nuisances['QCDscale_qqbar_ACCEPT']['samples'].update({'MSSMQQHSBI_'+m: str(scaleqq_weight)})


variations = ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 5, 7, 8]]

nuisances['DYQCDscale']  = {
                'name'  : 'QCDscale_V',
                'skipCMS' : 1,
                'kind'  : 'weight_envelope', # TODO: Look up what this means
                'type'  : 'shape',
                'samples'  : {
                   'DY' : variations,
                }
}


nuisances['WW2JQCDscale']  = {
                'name'  : 'QCDscale_WWJJ',
                'skipCMS' : 1,
                'kind'  : 'weight_envelope',
                'type'  : 'shape',
                'samples'  : {
                   'qqWWqq' : variations,
                   'WW2J' : variations,
                }
}

#FIXME: check this 3%
#nuisances['QCDscale_VZ']  = {
#               'name'  : 'QCDscale_VZ', 
#               'samples'  : {
#                   'VZ' : '1.03',
#                   },
#               'type'  : 'lnN'
#              }
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

# PDF uncertainties
nuisances['pdf_Higgs_gg']  = {
               'name'  : 'pdf_Higgs_gg',
               'samples'  : {
                   #'ggWW'    : '1.05',    # --> no, since absorbed into k-scale factor
                   'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH' ,'125.09','pdf','sm'),
                   'ggH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH' ,'125.09','pdf','sm'),
                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm'),
                   #'bbH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH','125.09','pdf','sm'), # --> no, already included in QCDscale
                   },
               'type'  : 'lnN',
              }
for m in massggh:
    nuisances['pdf_Higgs_gg']['samples'].update({'GGH_'+m+model_name: HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH',int(m),'pdf','bsm')})
    nuisances['pdf_Higgs_gg']['samples'].update({'GGHSBI_'+m+model_name: HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH',int(m),'pdf','bsm')})
    nuisances['pdf_Higgs_gg']['samples'].update({'MSSMGGH_'+m: HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH',int(m),'pdf','bsm')})
    nuisances['pdf_Higgs_gg']['samples'].update({'MSSMGGHSBI_'+m: HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH',int(m),'pdf','bsm')})


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
                   'VZ'      : '1.04',
                   },
              }
for m in massvbf:
    nuisances['pdf_Higgs_qqbar']['samples'].update({'QQH_'+m+model_name:HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'pdf','bsm')})
    nuisances['pdf_Higgs_qqbar']['samples'].update({'QQHSBI_'+m+model_name:HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'pdf','bsm')})
    nuisances['pdf_Higgs_qqbar']['samples'].update({'MSSMQQH_'+m:HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'pdf','bsm')})
    nuisances['pdf_Higgs_qqbar']['samples'].update({'MSSMQQHSBI_'+m:HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'pdf','bsm')})

nuisances['pdf_Higgs_ttH']  = {
               'name'  : 'pdf_Higgs_ttH',
               'samples'  : {
                   #'ggWW'    : '1.05',    # --> no, since absorbed into k-scale factor
                   'ttH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','pdf','sm'),
                   },
               'type'  : 'lnN',
              }


#For the HM singals, the un. are taken from in 0 jet
nuisances['pdf_Higgs_gg_ACCEPT']  = {
               'name'  : 'pdf_Higgs_gg_ACCEPT',
               'samples'  : {
                   'ggH_hww' : '1.005',
                   'ggH_htt' : '1.005',
                   'ggZH_hww': '1.005',
                   'bbH_hww' : '1.005', # TODO: In QCDscale too?
                   },
               'type'  : 'lnN',
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


#For the HM singals, the un. are taken from in VBF cat
nuisances['pdf_Higgs_qqbar_ACCEPT']  = {
               'name'  : 'pdf_Higgs_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww' : '1.011',
                   'qqH_htt' : '1.011',
                   'WH_hww'  : '1.007',
                   'WH_htt'  : '1.007',
                   'ZH_hww'  : '1.012',
                   'ZH_htt'  : '1.012',
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


nuisances['pdf_qqbar']  = {
               'name'  : 'pdf_qqbar',
               'type'  : 'lnN',
               'samples'  : {
                   'Vg'      : '1.04',
                   'VZ'      : '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
                   'VgS'     : '1.04',
                   },
              }

nuisances['pdf_gg_ACCEPT']  = {
               'name'  : 'pdf_gg_ACCEPT',
               'samples'  : {
                   'ggWW'    : '1.005',
                   },
               'type'  : 'lnN',
              }

nuisances['pdf_qqbar_ACCEPT']  = {
               'name'  : 'pdf_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   'VZ'      : '1.005',
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
                'name'  : 'WWresum0j_2017',
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
                'name'  : 'WWresum1j_2017',
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
                'name'  : 'WWresum2j_2017',
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
                'name'  : 'WWresumvbf_2017',
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
                'name'  : 'WWqscale0j_2017',
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
                'name'  : 'WWqscale1j_2017',
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
                'name'  : 'WWqscale2j_2017',
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
                'name'  : 'WWqscalevbf_2017',
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

# TODO: WZgS_L?
nuisances['WgStarScale']  = {
               'name'  : 'CMS_hww_WgStarScale', 
               'type'  : 'lnN',
               'samples'  : {
                   'WgS'    : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   'VgS'    : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   'WZgS_L' : '1.25',  
                   },
                }
 
nuisances['WZScale'] = {
               'name'  : 'CMS_hww_WZScale',
               'type'  : 'lnN',
               'samples'  : {
                   'WZgS' : '1.16', 
                   },
                }

## Top pT reweighting uncertainty

nuisances['TopPtRew']  = {
                'name'  : 'CMS_topPtRew_2017',   # Theory uncertainty
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples' : {
                     'top'  : ["1.","1./Top_pTrw"]
                },
                #'symmetrize': True # TODO: Need this?
         }

## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat']  = {
              'type'  : 'auto',
              'maxPoiss'  : '10',
              'includeSignal'  : '1',
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

    nuisances['stat']['samples']['MSSMGGH_'+m] = { 'typeStat' : 'bbb', 'zeroMCError' : '0', 'correlate': [] }
    nuisances['stat']['samples']['ggWW']["correlate"].append('MSSMGGHSBI_'+m)
    nuisances['stat']['samples']['ggH_hww']["correlate"].append('MSSMGGHSBI_'+m)
    nuisances['stat']['samples']['MSSMGGH_'+m]['correlate'].append('MSSMGGHSBI_'+m)

  for m in massvbf:
    nuisances['stat']['samples']['QQH_'+m+model_name] = { 'typeStat' : 'bbb', 'zeroMCError' : '0', 'correlate': [] }
    nuisances['stat']['samples']['qqWWqq']["correlate"].append('QQHSBI_'+m+model_name)
    nuisances['stat']['samples']['qqH_hww']["correlate"].append('QQHSBI_'+m+model_name)
    nuisances['stat']['samples']['QQH_'+m+model_name]['correlate'].append('QQHSBI_'+m+model_name)

    nuisances['stat']['samples']['MSSMQQH_'+m] = { 'typeStat' : 'bbb', 'zeroMCError' : '0', 'correlate': [] }
    nuisances['stat']['samples']['qqWWqq']["correlate"].append('MSSMQQHSBI_'+m)
    nuisances['stat']['samples']['qqH_hww']["correlate"].append('MSSMQQHSBI_'+m)
    nuisances['stat']['samples']['MSSMQQH_'+m]['correlate'].append('MSSMQQHSBI_'+m)

