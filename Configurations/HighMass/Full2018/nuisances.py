import math
import copy
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
#mc_noHM = [skey for skey in mc if not (skey.startswith('GGH') or skey.startswith('QQH'))]
#mc_HM = [skey for skey in mc if (skey.startswith('GGH') or skey.startswith('QQH'))]

## qqWWqq and WW2J postproc myself
#mc_noHMnoWW = [skey for skey in mc if not (skey.startswith('GGH') or skey.startswith('QQH') or skey=='qqWWqq' or skey=='WW2J')]
#mc_WW = [skey for skey in mc if (skey=='qqWWqq' or skey=='WW2J')]

#nuisances['lumi'] = {
#    'name': 'lumi_13TeV_2018',
#    'type': 'lnN',
#    'samples': dict((skey, '1.025') for skey in mc if skey not in ['WW', 'top', 'DY'])
#}

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2018',
    'type': 'lnN',
    'samples': dict((skey, '1.015') for skey in mc if skey not in ['WW', 'WW2J', 'WWewk', 'top', 'DY'])
}

nuisances['lumi_XY'] = {
    'name': 'lumi_13TeV_XY',
    'type': 'lnN',
    'samples': dict((skey, '1.02') for skey in mc if skey not in ['WW', 'WW2J', 'WWewk', 'top', 'DY'])
}

nuisances['lumi_LS'] = {
    'name': 'lumi_13TeV_LS',
    'type': 'lnN',
    'samples': dict((skey, '1.002') for skey in mc if skey not in ['WW', 'WW2J', 'WWewk', 'top', 'DY'])
}

nuisances['lumi_BCC'] = {
    'name': 'lumi_13TeV_BCC',
    'type': 'lnN',
    'samples': dict((skey, '1.002') for skey in mc if skey not in ['WW', 'WW2J', 'WWewk', 'top', 'DY'])
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
nuisances['fake_syst_me']  = {
               'name'  : 'CMS_fake_syst_me',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_me' : '1.30',
                             },
               }
nuisances['fake_syst_ee']  = {
               'name'  : 'CMS_fake_syst_ee',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_ee' : '1.30',
                             },
               }
nuisances['fake_syst_mm']  = {
               'name'  : 'CMS_fake_syst_mm',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_mm' : '1.30',
                             },
               }

nuisances['fake_ele']  = {
                'name'  : 'CMS_fake_e_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'     : [ fakeW_EleUp , fakeW_EleDown ],
                              'Fake_me'     : [ fakeW_EleUp , fakeW_EleDown ],
                              'Fake_ee'     : [ fakeW_EleUp , fakeW_EleDown ],
                             },
}

nuisances['fake_ele_stat']  = {
                'name'  : 'CMS_fake_stat_e_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                              'Fake_me'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                              'Fake_ee'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                             },
}

nuisances['fake_mu']  = {
                'name'  : 'CMS_fake_m_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'     : [ fakeW_MuUp , fakeW_MuDown ],
                              'Fake_me'     : [ fakeW_MuUp , fakeW_MuDown ],
                              'Fake_mm'     : [ fakeW_MuUp , fakeW_MuDown ],
                             },
}


nuisances['fake_mu_stat']  = {
                'name'  : 'CMS_fake_stat_m_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'     : [ fakeW_statMuUp , fakeW_statMuDown ],
                              'Fake_me'     : [ fakeW_statMuUp , fakeW_statMuDown ],
                              'Fake_mm'     : [ fakeW_statMuUp , fakeW_statMuDown ],
                             },
}

##### B-tagger
nuisances['btag_jes']  = {
                'name'  : 'CMS_btag_jes',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)']) for skey in mc),
}

nuisances['btag_lf']  = {
                'name'  : 'CMS_btag_lf',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)']) for skey in mc),
}

nuisances['btag_hf']  = {
                'name'  : 'CMS_btag_hf',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)']) for skey in mc),
}

nuisances['btag_hfstats1']  = {
                'name'  : 'CMS_btag_hfstats1_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)']) for skey in mc),
}

nuisances['btag_hfstats2']  = {
                'name'  : 'CMS_btag_hfstats2_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)']) for skey in mc),
}

nuisances['btag_lfstats1']  = {
                'name'  : 'CMS_btag_lfstats1_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)']) for skey in mc),
}

nuisances['btag_lfstats2']  = {
                'name'  : 'CMS_btag_lfstats2_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)']) for skey in mc),
}

nuisances['btag_cferr1']  = {
                'name'  : 'CMS_btag_cferr1',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)']) for skey in mc),
}

nuisances['btag_cferr2']  = {
                'name'  : 'CMS_btag_cferr2',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)']) for skey in mc),
}


##### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_2l_u)/(TriggerEffWeight_2l))*(TriggerEffWeight_2l>0.02) + (TriggerEffWeight_2l<=0.02)', '(TriggerEffWeight_2l_d)/(TriggerEffWeight_2l)'] # TODO Cut at 0.02?

nuisances['trigg']  = {
                'name'  : 'CMS_eff_hwwtrigger_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, trig_syst) for skey in mc_emb),
}

##### Electron Efficiency and energy scale

nuisances['eff_e']  = {
                'name'  : 'CMS_eff_e_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['LepSF2l__ele_'+eleWP+'__Up' , 'LepSF2l__ele_'+eleWP+'__Do']) for skey in mc_emb), 
}

nuisances['electronpt']  = {
                'name'  : 'CMS_scale_e_2018',
                'kind'  : 'suffix',
                'type'  : 'shape',
                'mapUp'  : 'ElepTup',
                'mapDown'  : 'ElepTdo',
                'samples': dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__ElepTup_suffix',
                'folderDown' : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__ElepTdo_suffix',
}

if useEmbeddedDY:
  nuisances['electronpt_emb']  = {
                  'name'  : 'CMS_scale_e_2018',
                  'kind'  : 'suffix',
                  'type'  : 'shape',
                  'mapUp'  : 'ElepTup',
                  'mapDown'  : 'ElepTdo',
                  'samples'  : {
                     'DYemb'      : ['1', '1'],
                   },
                  'folderUp'   : treeBaseDir+'Embedding2018_102X_nAODv6_Full2018v6/DATAl1loose2018v6__l2loose__l2tightOR2018v6__Embedding__EmbElepTup_suffix',
                  'folderDown' : treeBaseDir+'Embedding2018_102X_nAODv6_Full2018v6/DATAl1loose2018v6__l2loose__l2tightOR2018v6__Embedding__EmbElepTdo_suffix',
  }

##### Muon Efficiency and energy scale

nuisances['eff_m']  = {
                'name'  : 'CMS_eff_m_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['LepSF2l__mu_'+muWP+'__Up' , 'LepSF2l__mu_'+muWP+'__Do']) for skey in mc_emb),
}

nuisances['muonpt']  = {
                'name'  : 'CMS_scale_m_2018',
                'kind'  : 'suffix',
                'type'  : 'shape',
                'mapUp'  : 'MupTup',
                'mapDown'  : 'MupTdo',
                'samples': dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__MupTup_suffix',
                'folderDown' : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__MupTdo_suffix',
}

if useEmbeddedDY:
  nuisances['muonpt_emb']  = {
                  'name'  : 'CMS_scale_m_2018',
                  'kind'  : 'suffix',
                  'type'  : 'shape',
                  'mapUp'  : 'MupTup',
                  'mapDown'  : 'MupTdo',
                  'samples'  : {
                     'DYemb'      : ['1', '1'],
                   },
                  'folderUp'   : treeBaseDir+'Embedding2018_102X_nAODv6_Full2018v6/DATAl1loose2018v6__l2loose__l2tightOR2018v6__Embedding__EmbMupTup_suffix',
                  'folderDown' : treeBaseDir+'Embedding2018_102X_nAODv6_Full2018v6/DATAl1loose2018v6__l2loose__l2tightOR2018v6__Embedding__EmbMupTdo_suffix',
  }

###### Jet energy scale

jes_systs = ['JESAbsolute', 'JESAbsolute_2018', 'JESBBEC1', 'JESBBEC1_2018', 'JESEC2', 'JESEC2_2018', 'JESFlavorQCD', 'JESHF', 'JESHF_2018', 'JESRelativeBal', 'JESRelativeSample_2018']

for js in jes_systs:
  nuisances[js]  = {
                'name'  : 'CMS_scale_'+js,
                'kind'  : 'suffix',
                'type'  : 'shape',
                'mapUp'  : js+'up',
                'mapDown'  : js+'do',
                'samples': dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__JESup_suffix',
                'folderDown' : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__JESdo_suffix',
  }

###### MET energy scale

nuisances['met']  = {
                'name'  : 'CMS_scale_met_2018',
                'kind'  : 'suffix',
                'type'  : 'shape',
                'mapUp'  : 'METup',
                'mapDown'  : 'METdo',
                'samples': dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__METup_suffix',
                'folderDown' : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__METdo_suffix',
}

# Di-Tau vetoing for embedding
if useEmbeddedDY: 
  nuisances['embedveto']  = {
                  'name'  : 'CMS_embed_veto_2018',
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
#nuisances['PS']  = {
#    'name': 'PS',
#    'type': 'shape',
#    'kind': 'weight_envelope',
#    'samples': {
#        'WW': ['PSWeight[0]', 'PSWeight[1]', 'PSWeight[2]', 'PSWeight[3]'],
#        'ggH_hww': ['PSWeight[0]', 'PSWeight[1]', 'PSWeight[2]', 'PSWeight[3]'],
#        'qqH_hww': ['PSWeight[0]', 'PSWeight[1]', 'PSWeight[2]', 'PSWeight[3]']
#    },
#    'AsLnN': '1'
#}
#nuisances['PS']  = {
#                'name'  : 'PS_2018',
#                'skipCMS' : 1,
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                  'WW'      : ['1', '1'],
#                  'ggH_hww' : ['1', '1'], 
#                  'qqH_hww' : ['1', '1']
#                  },
#                'folderUp'   : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__PS',
#                'folderDown' : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6',
#                'AsLnN'      : '1',
#                }

##### PS

# WpWmJJ_EWK_noTop, WpWmJJ_QCD_noTop_ext1, Wg_MADGRAPHMLM: PS Weights not properly normalized! Use manually fixed values:
nuisances['PS_ISR']  = {
    'name': 'PS_ISR',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['PSWeight[2]', 'PSWeight[0]']) for skey in mc if skey not in ["qqWWqq", "WW2J", "WWewk", "Vg", "VgS"]),
}
nuisances['PS_ISR']['samples'].update({'qqWWqq': ['1.031198192*(nCleanGenJet==0) + 1.029396447*(nCleanGenJet==1) + 1.008244787*(nCleanGenJet==2) + 0.958054424*(nCleanGenJet>=3)', '0.962541517*(nCleanGenJet==0) + 0.964149647*(nCleanGenJet==1) + 0.988864503*(nCleanGenJet==2) + 1.052819668*(nCleanGenJet>=3)']}) # From WpWmJJ_QCD_noTop_ext1
nuisances['PS_ISR']['samples'].update({'WW2J': ['1.031198192*(nCleanGenJet==0) + 1.029396447*(nCleanGenJet==1) + 1.008244787*(nCleanGenJet==2) + 0.958054424*(nCleanGenJet>=3)', '0.962541517*(nCleanGenJet==0) + 0.964149647*(nCleanGenJet==1) + 0.988864503*(nCleanGenJet==2) + 1.052819668*(nCleanGenJet>=3)']}) # From WpWmJJ_QCD_noTop_ext1
nuisances['PS_ISR']['samples'].update({'WWewk': ['1.000046239608802*(nCleanGenJet==0) + 1.0133437345113673*(nCleanGenJet==1) + 1.0144565712441801*(nCleanGenJet==2) + 0.9633224709814209*(nCleanGenJet>=3)', '0.9972924400977996*(nCleanGenJet==0) + 0.9796025428294364*(nCleanGenJet==1) + 0.9785038122896787*(nCleanGenJet==2) + 1.043894692205412*(nCleanGenJet>=3)']}) # From WpWmJJ_EWK_noTop
nuisances['PS_ISR']['samples'].update({'Vg': ['1.0039055667905552*(nCleanGenJet==0) + 1.0059752448648116*(nCleanGenJet==1) + 0.9926179336643974*(nCleanGenJet==2) + 0.9524471129275528*(nCleanGenJet>=3)', '0.9949355050284215*(nCleanGenJet==0) + 0.9926938538727195*(nCleanGenJet==1) + 1.0093671414600691*(nCleanGenJet==2) + 1.060578524662196*(nCleanGenJet>=3)']}) # From Zg
nuisances['PS_ISR']['samples'].update({'VgS': ['1.0000536116408023*(nCleanGenJet==0) + 1.0100100693580492*(nCleanGenJet==1) + 0.959068359375*(nCleanGenJet==2) + 0.9117049260469496*(nCleanGenJet>=3)', '0.9999367833485968*(nCleanGenJet==0) + 0.9873682892005163*(nCleanGenJet==1) + 1.0492717737268518*(nCleanGenJet==2) + 1.1176958835210322*(nCleanGenJet>=3)']}) # From WZTo3LNu_mllmin01

nuisances['PS_FSR']  = {
    'name': 'PS_FSR',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['PSWeight[3]', 'PSWeight[1]']) for skey in mc if skey not in ["qqWWqq", "WW2J", "WWewk", "Vg", "VgS"]),
}
nuisances['PS_FSR']['samples'].update({'qqWWqq': ['0.976538004*(nCleanGenJet==0) + 0.993524816*(nCleanGenJet==1) + 1.006678783*(nCleanGenJet==2) + 1.009760965*(nCleanGenJet>=3)', '1.035661107*(nCleanGenJet==0) + 1.007585153*(nCleanGenJet==1) + 0.989764669*(nCleanGenJet==2) + 0.98276492*(nCleanGenJet>=3)']})
nuisances['PS_FSR']['samples'].update({'WW2J': ['0.976538004*(nCleanGenJet==0) + 0.993524816*(nCleanGenJet==1) + 1.006678783*(nCleanGenJet==2) + 1.009760965*(nCleanGenJet>=3)', '1.035661107*(nCleanGenJet==0) + 1.007585153*(nCleanGenJet==1) + 0.989764669*(nCleanGenJet==2) + 0.98276492*(nCleanGenJet>=3)']})
nuisances['PS_FSR']['samples'].update({'WWewk': ['0.9919173789731052*(nCleanGenJet==0) + 0.994273375713824*(nCleanGenJet==1) + 1.0009783801226202*(nCleanGenJet==2) + 1.0046943184676753*(nCleanGenJet>=3)', '1.0081780733496333*(nCleanGenJet==0) + 1.0052172826204072*(nCleanGenJet==1) + 0.9984786981975752*(nCleanGenJet==2) + 0.9881601609947174*(nCleanGenJet>=3)']})
nuisances['PS_FSR']['samples'].update({'Vg': ['0.9981385958679493*(nCleanGenJet==0) + 1.000785005516636*(nCleanGenJet==1) + 1.0072453356787239*(nCleanGenJet==2) + 1.016190506425758*(nCleanGenJet>=3)', '1.0032725732400525*(nCleanGenJet==0) + 1.0019489593245505*(nCleanGenJet==1) + 0.986995604774182*(nCleanGenJet==2) + 0.9629840158493718*(nCleanGenJet>=3)']})
nuisances['PS_FSR']['samples'].update({'VgS': ['0.9976593177227735*(nCleanGenJet==0) + 1.0016125187585532*(nCleanGenJet==1) + 1.0049344618055556*(nCleanGenJet==2) + 1.0195631514301164*(nCleanGenJet>=3)', '1.0026951855766457*(nCleanGenJet==0) + 1.0008132148661049*(nCleanGenJet==1) + 1.003949291087963*(nCleanGenJet==2) + 0.9708160910230832*(nCleanGenJet>=3)']})

#nuisances['UE']  = {
#                'name'  : 'UE', 
#                'skipCMS' : 1,
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                  #'WW'      : ['1.0017139', '0.99350287'],
#                  'ggH_hww' : ['1.0272226', '1.0123689'],
#                  'qqH_hww' : ['1.0000192', '0.98367442']
#                },
#                'folderUp'   : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__UEup',
#                'folderDown' : treeBaseDir+'Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6__UEdo',
#                'AsLnN'      : '1',
#}

# An overall 1.5% UE uncertainty will cover all the UEup/UEdo variations
# And we don't observe any dependency of UE variations on njet
nuisances['UE']  = {
                'name'  : 'UE_CP5',
                'skipCMS' : 1,
                'type': 'lnN',
                'samples': dict((skey, '1.015') for skey in mc), 
}

nuisances['PU']  = {
                'name'  : 'CMS_PU_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                  'DY': ['0.993259983266*(puWeightUp/puWeight)', '0.997656381501*(puWeightDown/puWeight)'],
                  'top': ['1.00331969187*(puWeightUp/puWeight)', '0.999199609528*(puWeightDown/puWeight)'],
                  'WW': ['1.0033022059*(puWeightUp/puWeight)', '0.997085330608*(puWeightDown/puWeight)'],
                  'ggH_hww': ['1.0036768006*(puWeightUp/puWeight)', '0.995996570285*(puWeightDown/puWeight)'],
                  'qqH_hww': ['1.00374694528*(puWeightUp/puWeight)', '0.995878596852*(puWeightDown/puWeight)'],
                },
                'AsLnN'      : '1'
}

handle = open("../PUunc.py",'r')
exec(handle)
handle.close()

for m in massggh:
  PUup = PUunc['GGF'+m]['Up']
  PUdn = PUunc['GGF'+m]['Down']
  PUstring = [str(PUup)+'*(puWeightUp/puWeight)', str(PUdn)+'*(puWeightDown/puWeight)']
  nuisances['PU']['samples'].update({'GGH_'+m+model_name: PUstring})
  nuisances['PU']['samples'].update({'GGHINT_'+m+model_name: PUstring})
for m in massvbf:
  PUup = PUunc['VBF'+m]['Up']
  PUdn = PUunc['VBF'+m]['Down']
  PUstring = [str(PUup)+'*(puWeightUp/puWeight)', str(PUdn)+'*(puWeightDown/puWeight)']
  nuisances['PU']['samples'].update({'QQH_'+m+model_name: PUstring})
  nuisances['PU']['samples'].update({'QQHINT_'+m+model_name: PUstring})


# QCD scale uncertainties

nuisances['QCDscale_ggH']  = {
               'name'  : 'QCDscale_ggH', 
               'samples'  : {
                   'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','scale','sm'),
                   'ggH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }

# Currently doing ggH QCD scale uncertainties on event-by-event basis (like background) instead of using StuartTackmann
#nuisances['QCDscale']  = {
#               'name'  : 'QCDscale_ggH', 
#               'kind'  : 'weight_envelope',
#               'samples'  : {}, 
#               'type'  : 'shape',
#              }
#for m in massggh:
#  nuisances['QCDscale']['samples'].update({'GGH_'+m+model_name: ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 5, 7, 8]]})
#  nuisances['QCDscale']['samples'].update({'GGHINT_'+m+model_name: ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 5, 7, 8]]})

# Using StuartTackmann:

nuisances['QCDscale']  = {
               'name'  : 'QCDscale_ggH', 
               'kind'  : 'weight',
               'type'  : 'shape',
               'samples'  : {}
              }
for m in massggh:
  STUnc0j = 1.12469-4.78587e-05*int(m)+1.52249e-07*int(m)*int(m) - 1.0
  STweight = '('+str(STUnc0j)+'*(Alt$(CleanJet_pt[0],0)<30 && !VBFcut))'
  STUncString = ['1.0 + '+STweight, '1.0 / ( 1.0 + '+STweight+' )']
  nuisances['QCDscale']['samples'].update({'GGH_'+m+model_name: STUncString})
  nuisances['QCDscale']['samples'].update({'GGHINT_'+m+model_name: STUncString})

nuisances['QCDscale1in']  = {
               'name'  : 'QCDscale_ggH1in', 
               'kind'  : 'weight',
               'type'  : 'shape',
               'samples'  : {}
              }
for m in massggh:
  STUnc0j = math.exp(-0.00235424-0.000573266*int(m)) - 1.0
  STUnc1j = math.exp(0.245872+1.21053e-05*int(m)+1.85399e-09*int(m)*int(m)) - 1.0
  STweight = '('+str(STUnc0j)+'*(Alt$(CleanJet_pt[0],0)<30 && !VBFcut)) + ('+str(STUnc1j)+'*(Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30 && !VBFcut))'
  STUncString = ['1.0 + '+STweight, '1.0 / ( 1.0 + '+STweight+' )']
  nuisances['QCDscale1in']['samples'].update({'GGH_'+m+model_name: STUncString})
  nuisances['QCDscale1in']['samples'].update({'GGHINT_'+m+model_name: STUncString})

nuisances['QCDscale2in']  = {
               'name'  : 'QCDscale_ggH2in', 
               'kind'  : 'weight',
               'type'  : 'shape',
               'samples'  : {}
              }
for m in massggh:
  STUnc1j = math.exp(-0.141665-0.000186944*int(m)+2.57673e-08*int(m)*int(m)) - 1.0
  STUnc2j = math.exp(0.497326+1.47493e-05*int(m)+1.4044e-09*int(m)*int(m)+6.79881/(-0.00319659+int(m))) - 1.0
  STweight = '('+str(STUnc1j)+'*(Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30 && !VBFcut)) + ('+str(STUnc2j)+'*(Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && !VBFcut))'
  STUncString = ['1.0 + '+STweight, '1.0 / ( 1.0 + '+STweight+' )']
  nuisances['QCDscale2in']['samples'].update({'GGH_'+m+model_name: STUncString})
  nuisances['QCDscale2in']['samples'].update({'GGHINT_'+m+model_name: STUncString})

nuisances['QCDscale3in']  = {
               'name'  : 'QCDscale_ggH3in', 
               'kind'  : 'weight',
               'type'  : 'shape',
               'samples'  : {}
              }
for m in massggh:
  STUnc2j = math.exp(-0.0629982-8.84461e-06*int(m)+1.02891e-09*int(m)*int(m)-1.14474/(-1.36611+int(m))) - 1.0
  STUncvbf = math.exp(0.435135+8.7163e-06*int(m)+1.48726e-09*int(m)*int(m)+17.2495/(46.1967+int(m))) - 1.0
  STweight = '('+str(STUnc2j)+'*(Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && !VBFcut)) + ('+str(STUncvbf)+'*(VBFcut))'
  STUncString = ['1.0 + '+STweight, '1.0 / ( 1.0 + '+STweight+' )']
  nuisances['QCDscale3in']['samples'].update({'GGH_'+m+model_name: STUncString})
  nuisances['QCDscale3in']['samples'].update({'GGHINT_'+m+model_name: STUncString})


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
  nuisances['QCDscale_qqH']['samples'].update({'QQHINT_'+m+model_name: HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'scale','bsm')})


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

#nuisances['QCDscale_ggZH']  = {
#               'name'  : 'QCDscale_ggZH', 
#               'samples'  : {
#                   'ggZH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.0','scale','sm'),
#                   },
#               'type'  : 'lnN',
#              }

#nuisances['QCDscale_bbH']  = {
#               'name'  : 'QCDscale_bbH',  # Includes PDF!
#               'samples'  : {
#                   'bbH_hww' : '0.761/1.201', #HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH','125.09','scale','sm'),
#                   },
#               'type'  : 'lnN',
#              }

#nuisances['QCDscale_ttH']  = {
#               'name'  : 'QCDscale_ttH', 
#               'samples'  : {
#                   'ttH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','scale','sm'),
#                   },
#               'type'  : 'lnN',
#              }

nuisances['QCDscale_ggH_ACCEPT']  = {
               'name'  : 'QCDscale_ggH_ACCEPT',
               'samples'  : {
                   'ggH_hww'    : '1.012',
                   'ggH_htt'    : '1.012',
                   'ggWW'       : '1.012',
                   },
               'type'  : 'lnN',
              }

for m in massggh:
  scalegg_weight = 1.0 + (-5.53622e-02+6.73342e-05*int(m)+2.55597e+01/(int(m)-1.10009e+02))/100.0
  nuisances['QCDscale_ggH_ACCEPT']['samples'].update({'GGH_'+m+model_name: str(scalegg_weight)})
  nuisances['QCDscale_ggH_ACCEPT']['samples'].update({'GGHINT_'+m+model_name: str(scalegg_weight)})

nuisances['QCDscale_qqH_ACCEPT']  = {
               'name'  : 'QCDscale_qqH_ACCEPT',
               'samples'  : {
                   'qqH_hww'   : '1.003',
                   'qqH_htt'   : '1.003',
                   'qqWWqq'    : '1.003',
                   },
               'type'  : 'lnN',
              }

for m in massvbf:
  scaleqq_weight = 1.0 + (4.54513e-02+3.01227e-06*int(m)+4.72447/(int(m)-9.97821e+01))/100.0
  nuisances['QCDscale_qqH_ACCEPT']['samples'].update({'QQH_'+m+model_name: str(scaleqq_weight)})
  nuisances['QCDscale_qqH_ACCEPT']['samples'].update({'QQHINT_'+m+model_name: str(scaleqq_weight)})

nuisances['QCDscale_VH_ACCEPT']  = {
               'name'  : 'QCDscale_VH_ACCEPT',
               'samples'  : {
                   'WH_hww'    : '1.010',
                   'WH_htt'    : '1.010',
                   'ZH_hww'    : '1.015',
                   'ZH_htt'    : '1.015',
                   },
               'type'  : 'lnN',
              }

#nuisances['QCDscale_ggZH_ACCEPT']  = {
#               'name'  : 'QCDscale_ggZH_ACCEPT',
#               'samples'  : {
#                   'ggZH_hww'   : '1.012',
#                   },
#               'type'  : 'lnN',
#              }

# Different DY samples have different contents in the LHEScaleWeight branch!
# If there's a difference between the DY M-50 and M-10to50 sample, use the syntax corresponding to the M-50 sample.
# There's next to no contribution from M-10to50 anyway.
# 2018:
if EMorEEorMM=="em": #DYJetsToTT_MuEle_M-50
  variations = ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 4, 6, 7]]
else: #DYJetsToLL_M-50_ext2
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
                'name'  : 'QCDscale_VV',
                'skipCMS' : 1,
                'kind'  : 'weight_envelope',
                'type'  : 'shape',
                'samples'  : {
                   'qqWWqq' : variations,
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

nuisances['QCDscale_ttbar']  = {
               'name'  : 'QCDscale_ttbar', 
                'skipCMS' : 1,
                'kind'  : 'weight_envelope',
                'type'  : 'shape',
                'samples'  : {
                   'top' : variations,
                   }
}

# Scale uncertainties not needed:
# WW: Special scale/resum uncertainties below
# WWewk: ? TODO
# VVV: Negligible

#nuisances['QCDscale_VVV']  = {
#               'name'  : 'QCDscale_VVV', 
#                'skipCMS' : 1,
#                'kind'  : 'weight_envelope',
#                'type'  : 'shape',
#               'samples'  : {
#                   'VVV' : variations,
#                   }
#              }
#nuisances['QCDscale_WW']  = {
#               'name'  : 'QCDscale_WW', 
#                'skipCMS' : 1,
#                'kind'  : 'weight_envelope',
#                'type'  : 'shape',
#               'samples'  : {
#                   #'WW' : variations, # Don't need this -> in "WWqscale"
#                   'WWewk' : variations,
#                   }
#              }

nuisances['QCDscale_WWewk']  = {
               'name'  : 'QCDscale_VV',
               'samples'  : {
                   'WWewk' : '1.11',
                   },
               'type'  : 'lnN'
              }

# No LHEScaleWeight entries here, not sure where 15% comes from
nuisances['QCDscale_ggVV']  = {
               'name'  : 'QCDscale_ggVV',
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
                   #'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm'),
                   #'bbH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH','125.09','pdf','sm'), # --> no, already included in QCDscale, see https://github.com/latinos/LatinoAnalysis/blob/master/Tools/data/lhc-hxswg-YR4/sm/xs/13TeV/13TeV-bbH.txt
                   #'ttH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','pdf','sm'),
                   },
               'type'  : 'lnN',
              }
for m in massggh:
    nuisances['pdf_Higgs_gg']['samples'].update({'GGH_'+m+model_name: HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH',int(m),'pdf','bsm')})
    nuisances['pdf_Higgs_gg']['samples'].update({'GGHINT_'+m+model_name: HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH',int(m),'pdf','bsm')})


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
    nuisances['pdf_Higgs_qqbar']['samples'].update({'QQHINT_'+m+model_name:HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'pdf','bsm')})

# PDF uncertainties not needed:
# Top, DY, WW, WWewk, WW2J: Taken into account in rateParam, since these are all lnN anyway

# PDF for background: https://twiki.cern.ch/twiki/bin/view/CMS/StandardModelCrossSectionsat13TeV and https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns

# W+W-: 0.0589 / 1.2804 = 0.046001
# ZW+: 0.0064 / 0.1427 = 0.0448493
# ZW-: 0.0039 / 0.0921 = 0.0423453
# ZZ:  0.0027 / 0.0719 = 0.0375522
# DY: 14.78 / 6077.22 = 0.0024320
nuisances['pdf_gg']  = {
               'name'  : 'pdf_gg',
               'type'  : 'lnN',
               'samples'  : {
                   'ggWW'    : '1.05',
                   },
              }

nuisances['pdf_qqbar']  = {
               'name'  : 'pdf_qqbar',
               'type'  : 'lnN',
               'samples'  : {
                   'Vg'      : '1.04',
                   'VZ'      : '1.04',
                   'VgS'     : '1.04',
                   'qqWWqq'  : '1.05',
                   'DY'      : '1.002', # For HM category, no DY CR
                   },
              }


nuisances['pdf_Higgs_gg_ACCEPT']  = {
               'name'  : 'pdf_Higgs_gg_ACCEPT',
               'samples'  : {
                   'ggH_hww' : '1.006',
                   'ggH_htt' : '1.006',
                   #'ggZH_hww': '1.006',
                   },
               'type'  : 'lnN',
              }
for m in massggh:
  pdfgg_weight = 1.0 + (-4.10343+1.19015e-03*int(m)-9.68156e-08*int(m)*int(m)+6.90171e+03/(int(m)+8.71935e+02)-8.94415e+05/((int(m)+4.72259e+02)*(int(m)+4.72259e+02)))/100.0
  nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'GGH_'+m+model_name: str(pdfgg_weight)})
  nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'GGHINT_'+m+model_name: str(pdfgg_weight)})

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
  pdfqq_weight = 1.0 + (1.46296e-01)/100.0
  nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'QQH_'+m+model_name: str(pdfqq_weight)})
  nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'QQHINT_'+m+model_name: str(pdfqq_weight)})

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
#nuisances['TopPtRew']  = {
#                'name'  : 'CMS_topPtRew',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples' : {
#                     'top'  : ["1.0/Top_pTrw","Top_pTrw"]
#                }
#         }

nuisances['singleTopToTTbar']  = {
                'name'  : 'singleTopToTTbar',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples' : {
                     'top'  : ['isSingleTop * 1.0816 + isTTbar','isSingleTop * 0.9184 + isTTbar']
                },
         }

# DY MET reweighting
if EMorEEorMM!="em":
  nuisances['DYMetRew']  = {
                  'name'  : 'CMS_DYMetRew',
                  'kind'  : 'weight',
                  'type'  : 'shape',
                  'samples' : {
                       'DY'  : ["1.0/DY_METrw","DY_METrw"]
                  }
           }

# Replace lnN nuisances (from QCD and PDF only -> Other lnN nuisance are consistent across SBI) for samples contributing to SBI with shape:
oldnuisances = copy.deepcopy(nuisances)
for nuis in oldnuisances:
  if nuisances[nuis]['type'] == "lnN" and (("QCD" in nuis) or ("pdf" in nuis)):
    for samp in oldnuisances[nuis]['samples']:
      if ("GGH" in samp) or ("QQH" in samp) or (samp in ["ggWW", "ggH_hww", "qqWWqq", "qqH_hww"]):
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

# Now create SBI nuisances
nuisancename = {}
for nuis in nuisances:
  if nuisances[nuis]['type'] == "shape":
    if nuisances[nuis]['name'] not in nuisancename: nuisancename[nuisances[nuis]['name']] = []
    nuisancename[nuisances[nuis]['name']].append(nuis)
for nuisname in nuisancename:
  allsamples = {}
  for nuis in nuisancename[nuisname]:
    allsamples.update(nuisances[nuis]['samples']) # Sometimes have 2 dict keys doing shapes for the same nuisance for different samples; combine them here
  if [samp for samp in allsamples if 'SBI' in samp] == []:
    dogg=0
    doqq=0
    for samp in allsamples:
      if ("GGH" in samp) or (samp in ["ggWW", "ggH_hww"]): dogg=1
      elif ("QQH" in samp) or (samp in ["qqWWqq", "qqH_hww"]): doqq=1
    if dogg==1:
        SM_up = '1.0'
        SM_dn = '1.0'
        WW_up = '1.0'
        WW_dn = '1.0'
        sig_up = '1.0'
        sig_dn = '1.0'
        for nuis in nuisancename[nuisname]:
          if "ggH_hww" in nuisances[nuis]['samples']: SM_up = nuisances[nuis]['samples']["ggH_hww"][0]
          if "ggH_hww" in nuisances[nuis]['samples']: SM_dn = nuisances[nuis]['samples']["ggH_hww"][1]
          if "ggWW" in nuisances[nuis]['samples']: WW_up = nuisances[nuis]['samples']["ggWW"][0]
          if "ggWW" in nuisances[nuis]['samples']: WW_dn = nuisances[nuis]['samples']["ggWW"][1]
        for m in massggh:
          for nuis in nuisancename[nuisname]:
            if 'GGH_'+m+model_name in nuisances[nuis]['samples']: sig_up = nuisances[nuis]['samples']['GGH_'+m+model_name][0]
            if 'GGH_'+m+model_name in nuisances[nuis]['samples']: sig_dn = nuisances[nuis]['samples']['GGH_'+m+model_name][1]
          SBI_string = ['('+sig_up+')*SBI_isHM + ('+SM_up+')*SBI_isSMggh + ('+WW_up+')*SBI_isggWW',
                        '('+sig_dn+')*SBI_isHM + ('+SM_dn+')*SBI_isSMggh + ('+WW_dn+')*SBI_isggWW']
          nuisances[nuis]['samples'].update({'GGHSBI_'+m+model_name: SBI_string})
    if doqq==1:
        SM_up = '1.0'
        SM_dn = '1.0'
        WW_up = '1.0'
        WW_dn = '1.0'
        sig_up = '1.0'
        sig_dn = '1.0'
        for nuis in nuisancename[nuisname]:
          if "qqH_hww" in nuisances[nuis]['samples']: SM_up = nuisances[nuis]['samples']["qqH_hww"][0]
          if "qqH_hww" in nuisances[nuis]['samples']: SM_dn = nuisances[nuis]['samples']["qqH_hww"][1]
          if "qqWWqq" in nuisances[nuis]['samples']: WW_up = nuisances[nuis]['samples']["qqWWqq"][0]
          if "qqWWqq" in nuisances[nuis]['samples']: WW_dn = nuisances[nuis]['samples']["qqWWqq"][1]
        for m in massvbf:
          for nuis in nuisancename[nuisname]:
            if 'QQH_'+m+model_name in nuisances[nuis]['samples']: sig_up = nuisances[nuis]['samples']['QQH_'+m+model_name][0]
            if 'QQH_'+m+model_name in nuisances[nuis]['samples']: sig_dn = nuisances[nuis]['samples']['QQH_'+m+model_name][1]
          SBI_string = ['('+sig_up+')*SBI_isHM + ('+SM_up+')*SBI_isSMVBF + ('+WW_up+')*SBI_isqqWWqq',
                        '('+sig_dn+')*SBI_isHM + ('+SM_dn+')*SBI_isSMVBF + ('+WW_dn+')*SBI_isqqWWqq']
          nuisances[nuis]['samples'].update({'QQHSBI_'+m+model_name: SBI_string})


## Use the following if you want to apply the automatic combine MC stat nuisances.
#nuisances['stat']  = {
#              'type'  : 'auto',
#              'maxPoiss'  : '10',
#              'includeSignal'  : '0',
#              #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
#              #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
#              'samples' : {}
#             }

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

  for m in massvbf:
    nuisances['stat']['samples']['QQH_'+m+model_name] = { 'typeStat' : 'bbb', 'zeroMCError' : '0', 'correlate': [] }
    nuisances['stat']['samples']['qqWWqq']["correlate"].append('QQHSBI_'+m+model_name)
    nuisances['stat']['samples']['qqH_hww']["correlate"].append('QQHSBI_'+m+model_name)
    nuisances['stat']['samples']['QQH_'+m+model_name]['correlate'].append('QQHSBI_'+m+model_name)

