# nuisances
#FIXME: TO BE UPDATED FOR 2018!

# name of samples here must match keys in samples.py 

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

mc = [skey for skey in samples if skey != 'DATA' and not skey.startswith('Fake')]
mcNotDataDriven = [skey for skey in mc if skey != 'WW' and skey != 'DY' and skey != 'DY' and skey !='WW']

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV_2018',
               'samples': dict((skey, '1.025') for skey in mc if skey not in ['WW', 'top', 'DY']), 
               'type'  : 'lnN',
              }

##### B-tagger
nuisances['btag_shape_jes']  = {
                'name'  : 'btag_shape_jes_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)']) for skey in mc),
}

nuisances['btag_shape_lf']  = {
                'name'  : 'btag_shape_lf_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)']) for skey in mc),
}

nuisances['btag_shape_hf']  = {
                'name'  : 'btag_shape_hf_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)']) for skey in mc),
}

nuisances['btag_shape_hfstats1']  = {
                'name'  : 'btag_shape_hfstats1_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_hfstats2']  = {
                'name'  : 'btag_shape_hfstats2_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_lfstats1']  = {
                'name'  : 'btag_shape_lfstats1_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_lfstats2']  = {
                'name'  : 'btag_shape_lfstats2_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_cferr1']  = {
                'name'  : 'btag_shape_cferr1_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_cferr2']  = {
                'name'  : 'btag_shape_cferr2_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)']) for skey in mc),
}


##### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_'+Nlep+'l_u)/(TriggerEffWeight_'+Nlep+'l))*(TriggerEffWeight_'+Nlep+'l>0.02) + (TriggerEffWeight_'+Nlep+'l<=0.02)', '(TriggerEffWeight_'+Nlep+'l_d)/(TriggerEffWeight_'+Nlep+'l)']

nuisances['trigg']  = {
                'name'  : 'hww_trigger_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, trig_syst) for skey in mc),
}

##### Electron Efficiency and energy scale

id_syst_ele = [ 'LepSF'+Nlep+'l__ele_'+eleWP+'__Up' , 'LepSF'+Nlep+'l__ele_'+eleWP+'__Do' ]

nuisances['eff_e']  = {
                'name'  : 'eff_e_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, id_syst_ele) for skey in mc), 
}

#nuisances['electronpt']  = {
#                'name'  : 'scale_e_2018',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                   'DY'      : ['1', '1'],
#                   'ggWW'    : ['1', '1'],
#                   'WW'      : ['1', '1'],
#                   'WWewk'   : ['1', '1'],
#                   'top'     : ['1', '1'],
#                   'VZ'      : ['1', '1'],
#                   'WZgS'    : ['1', '1'],
#                   'WZgS_L'  : ['1', '1'],
#                   'WZgS_H'  : ['1', '1'],
#                   'VVV'     : ['1', '1'],
#                   'Vg'      : ['1', '1'],
#                   'VgS'     : ['1', '1'],
#                   'ggH_hww' : ['1', '1'],
#                   'qqH_hww' : ['1', '1'],
#                   'WH_hww'  : ['1', '1'],
#                   'ZH_hww'  : ['1', '1'],
#                   'ggZH_hww': ['1', '1'],
#                   'bbH_hww' : ['1', '1'],
#                   'ttH_hww' : ['1', '1'],
#                   'H_htt'   : ['1', '1'],
#                   'ggH_htt' : ['1', '1'] ,
#                   'qqH_htt' : ['1', '1'] ,
#                   'ZH_htt'  : ['1', '1'] ,
#                   'WH_htt'  : ['1', '1'] ,
#                 },
#                'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__ElepTup', #xrootdPath+treeBaseDir
#                'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__ElepTdo',
#}
#
#if useEmbeddedDY:
#  DYvetosamples = ['DY', 'ggWW', 'WW', 'WWewk', 'top', 'VZ', 'Vg', 'VgS']
#  for samp in DYvetosamples:
#    del nuisances['electronpt']['samples'][samp]
#
#  nuisances['electronpt_embveto']  = {
#                  'name'  : 'scale_e_2018',
#                  'kind'  : 'tree',
#                  'type'  : 'shape',
#                  'samples'  : {
#                     'ggWW'    : ['1', '1'],
#                     'WW'      : ['1', '1'],
#                     'WWewk'   : ['1', '1'],
#                     'top'     : ['1', '1'],
#                     'VZ'      : ['1', '1'],
#                     'Vg'      : ['1', '1'],
#                     'VgS'     : ['1', '1'],
#                   },
#                  'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__ElepTup', #xrootdPath+treeBaseDir
#                  'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__ElepTdo',
#  }
#
#  nuisances['electronpt_emb']  = {
#                  'name'  : 'scale_e_2018',
#                  'kind'  : 'tree',
#                  'type'  : 'shape',
#                  'samples'  : {
#                     'DY'      : ['1', '1'],
#                   },
#                  'folderUp'   : treeBaseDir+'Embedding2018_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017__Embedding2017__hadd__EmbElepTup', #xrootdPath+treeBaseDir
#                  'folderDown' : treeBaseDir+'Embedding2018_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017__Embedding2017__hadd__EmbElepTdo',
#  }

#FIXME: The following should not be needed for 2018
#elePtCor_Syst = [ 'electron_ptW_'+Nlep+'l_Up / electron_ptW_'+Nlep+'l', 'electron_ptW_'+Nlep+'l_Down / electron_ptW_'+Nlep+'l']
#nuisances['elePtCor']  = {
#                'name'  : 'hww_elePtCor',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'DY'         : elePtCor_Syst ,
#                   'ggWW'       : elePtCor_Syst ,
#                   'WW'         : elePtCor_Syst ,
#                   'top'        : elePtCor_Syst ,
#                   'VZ'         : elePtCor_Syst ,
#                   'WZgS_L'     : elePtCor_Syst ,
#                   'WZgS_H'     : elePtCor_Syst ,
#                   'VVV'        : elePtCor_Syst ,
#                   'Vg'         : elePtCor_Syst ,
#                   'VgS'        : elePtCor_Syst ,
#                   'ggH_hww'    : elePtCor_Syst ,
#                   'qqH_hww'    : elePtCor_Syst ,
#                   'WH_hww'     : elePtCor_Syst ,
#                   'ZH_hww'     : elePtCor_Syst ,
#                   'ggZH_hww'   : elePtCor_Syst ,
#                   'bbH_hww'    : elePtCor_Syst ,
#                   'ttH_hww'    : elePtCor_Syst ,
#                   'H_htt'      : elePtCor_Syst ,
#                   'ggH_htt'    : elePtCor_Syst ,
#                   'qqH_htt'    : elePtCor_Syst ,
#                   'ZH_htt'     : elePtCor_Syst ,
#                   'WH_htt'     : elePtCor_Syst ,
#                }
#}
#
#eleEtaCor_Syst = [ 'electron_etaW_'+Nlep+'l_Up / electron_etaW_'+Nlep+'l', 'electron_etaW_'+Nlep+'l_Down / electron_etaW_'+Nlep+'l']
#
#nuisances['eleEtaCor']  = {
#                'name'  : 'hww_eleEtaCor',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'DY'         : eleEtaCor_Syst ,
#                   'ggWW'       : eleEtaCor_Syst ,
#                   'WW'         : eleEtaCor_Syst ,
#                   'top'        : eleEtaCor_Syst ,
#                   'VZ'         : eleEtaCor_Syst ,
#                   'WZgS_L'     : eleEtaCor_Syst ,
#                   'WZgS_H'     : eleEtaCor_Syst ,
#                   'VVV'        : eleEtaCor_Syst ,
#                   'Vg'         : eleEtaCor_Syst ,
#                   'VgS'        : eleEtaCor_Syst ,
#                   'ggH_hww'    : eleEtaCor_Syst ,
#                   'qqH_hww'    : eleEtaCor_Syst ,
#                   'WH_hww'     : eleEtaCor_Syst ,
#                   'ZH_hww'     : eleEtaCor_Syst ,
#                   'ggZH_hww'   : eleEtaCor_Syst ,
#                   'bbH_hww'    : eleEtaCor_Syst ,
#                   'ttH_hww'    : eleEtaCor_Syst ,
#                   'H_htt'      : eleEtaCor_Syst ,
#                   'ggH_htt'    : eleEtaCor_Syst ,
#                   'qqH_htt'    : eleEtaCor_Syst ,
#                   'ZH_htt'     : eleEtaCor_Syst ,
#                   'WH_htt'     : eleEtaCor_Syst ,
#                }
#}


##### Muon Efficiency and energy scale

id_syst_mu = [ 'LepSF'+Nlep+'l__mu_'+muWP+'__Up' , 'LepSF'+Nlep+'l__mu_'+muWP+'__Do' ]

nuisances['eff_m']  = {
                'name'  : 'eff_m_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, id_syst_mu) for skey in mc),
}

#nuisances['muonpt']  = {
#                'name'  : 'scale_m_2018',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                   'DY'      : ['1', '1'],
#                   'ggWW'    : ['1', '1'],
#                   'WW'      : ['1', '1'],
#                   'WWewk'   : ['1', '1'],
#                   'top'     : ['1', '1'],
#                   'VZ'      : ['1', '1'],
#                   'WZgS'    : ['1', '1'],
#                   'WZgS_L'  : ['1', '1'],
#                   'WZgS_H'  : ['1', '1'],
#                   'VVV'     : ['1', '1'],
#                   'Vg'      : ['1', '1'],
#                   'VgS'     : ['1', '1'],
#                   'ggH_hww' : ['1', '1'],
#                   'qqH_hww' : ['1', '1'],
#                   'WH_hww'  : ['1', '1'],
#                   'ZH_hww'  : ['1', '1'],
#                   'ggZH_hww': ['1', '1'],
#                   'bbH_hww' : ['1', '1'],
#                   'ttH_hww' : ['1', '1'],
#                   'H_htt'   : ['1', '1'],
#                   'ggH_htt' : ['1', '1'] ,
#                   'qqH_htt' : ['1', '1'] ,
#                   'ZH_htt'  : ['1', '1'] ,
#                   'WH_htt'  : ['1', '1'] ,
#                },
#                'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__MupTup',
#                'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__MupTdo',
#}
#
#if useEmbeddedDY:
#  for samp in DYvetosamples:
#    del nuisances['muonpt']['samples'][samp]
#
#  nuisances['muonpt_embveto']  = {
#                  'name'  : 'scale_m_2018',
#                  'kind'  : 'tree',
#                  'type'  : 'shape',
#                  'samples'  : {
#                     'ggWW'    : ['1', '1'],
#                     'WW'      : ['1', '1'],
#                     'WWewk'   : ['1', '1'],
#                     'top'     : ['1', '1'],
#                     'VZ'      : ['1', '1'],
#                     'Vg'      : ['1', '1'],
#                     'VgS'     : ['1', '1'],
#                   },
#                  'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__MupTup', #xrootdPath+treeBaseDir
#                  'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__MupTdo',
#  }
#
#  nuisances['muonpt_emb']  = {
#                  'name'  : 'scale_m_2018',
#                  'kind'  : 'tree',
#                  'type'  : 'shape',
#                  'samples'  : {
#                     'DY'      : ['1', '1'],
#                   },
#                  'folderUp'   : treeBaseDir+'Embedding2018_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017__Embedding2017__hadd__EmbMupTup', #xrootdPath+treeBaseDir
#                  'folderDown' : treeBaseDir+'Embedding2018_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017__Embedding2017__hadd__EmbMupTdo',
#  }
#
#
###### Jet energy scale
#
#nuisances['jes']  = {
#                'name'  : 'scale_j_2018',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                   'DY'      : ['1', '1'],
#                   'ggWW'    : ['1', '1'],
#                   'WW'      : ['1', '1'],
#                   'WWewk'   : ['1', '1'],
#                   'top'     : ['1', '1'],
#                   'VZ'      : ['1', '1'],
#                   'WZgS'    : ['1', '1'],
#                   'WZgS_L'  : ['1', '1'],
#                   'WZgS_H'  : ['1', '1'],
#                   'VVV'     : ['1', '1'],
#                   'Vg'      : ['1', '1'],
#                   'VgS'     : ['1', '1'],
#                   'ggH_hww' : ['1', '1'],
#                   'qqH_hww' : ['1', '1'],
#                   'WH_hww'  : ['1', '1'],
#                   'ZH_hww'  : ['1', '1'],
#                   'ggZH_hww': ['1', '1'],
#                   'bbH_hww' : ['1', '1'],
#                   'ttH_hww' : ['1', '1'],
#                   'H_htt'   : ['1', '1'],
#                   'ggH_htt' : ['1', '1'] ,
#                   'qqH_htt' : ['1', '1'] ,
#                   'ZH_htt'  : ['1', '1'] ,
#                   'WH_htt'  : ['1', '1'] ,
#                },
#                'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__JESup',
#                'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__JESdo',
#}
#
#if useEmbeddedDY:
#  for samp in DYvetosamples:
#    del nuisances['jes']['samples'][samp]
#
#  nuisances['jes_embveto']  = {
#                  'name'  : 'scale_j_2018',
#                  'kind'  : 'tree',
#                  'type'  : 'shape',
#                  'samples'  : {
#                     'ggWW'    : ['1', '1'],
#                     'WW'      : ['1', '1'],
#                     'WWewk'   : ['1', '1'],
#                     'top'     : ['1', '1'],
#                     'VZ'      : ['1', '1'],
#                     'Vg'      : ['1', '1'],
#                     'VgS'     : ['1', '1'],
#                  },
#                  'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__JESup',
#                  'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__JESdo',
#  }
#
###### MET energy scale
#
#nuisances['met']  = {
#                'name'  : 'scale_met_2018',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                   'DY'      : ['1', '1'],
#                   'ggWW'    : ['1', '1'],
#                   'WW'      : ['1', '1'],
#                   'WWewk'   : ['1', '1'],
#                   'top'     : ['1', '1'],
#                   'VZ'      : ['1', '1'],
#                   'WZgS'    : ['1', '1'],
#                   'WZgS_L'  : ['1', '1'],
#                   'WZgS_H'  : ['1', '1'],
#                   'VVV'     : ['1', '1'],
#                   'Vg'      : ['1', '1'],
#                   'VgS'     : ['1', '1'],
#                   'ggH_hww' : ['1', '1'],
#                   'qqH_hww' : ['1', '1'],
#                   'WH_hww'  : ['1', '1'],
#                   'ZH_hww'  : ['1', '1'],
#                   'ggZH_hww': ['1', '1'],
#                   'bbH_hww' : ['1', '1'],
#                   'ttH_hww' : ['1', '1'],
#                   'H_htt'   : ['1', '1'],
#                   'ggH_htt' : ['1', '1'] ,
#                   'qqH_htt' : ['1', '1'] ,
#                   'ZH_htt'  : ['1', '1'] ,
#                   'WH_htt'  : ['1', '1'] ,
#                },
#                'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__METup',
#                'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__METdo',
#}
#
#if useEmbeddedDY:
#  for samp in DYvetosamples:
#    del nuisances['met']['samples'][samp]
#
#  nuisances['met_embveto']  = {
#                  'name'  : 'scale_met_2018',
#                  'kind'  : 'tree',
#                  'type'  : 'shape',
#                  'samples'  : {
#                     'ggWW'    : ['1', '1'],
#                     'WW'      : ['1', '1'],
#                     'WWewk'   : ['1', '1'],
#                     'top'     : ['1', '1'],
#                     'VZ'      : ['1', '1'],
#                     'Vg'      : ['1', '1'],
#                     'VgS'     : ['1', '1'],
#                  },
#                  'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__METup',
#                  'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__METdo',
#  }
#
# Prefire correction
#prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']

#nuisances['prefire']  = {
#                'name'  : 'CMS_eff_prefiring_2018',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : dict((skey, prefire_syst) for skey in mc),
#}
#if useEmbeddedDY: del nuisances['prefire']['samples']['DY']
#
#
## Di-Tau vetoing for embedding
#if useEmbeddedDY: 
#  nuisances['embedveto']  = {
#                  'name'  : 'CMS_embed_veto',
#                  'kind'  : 'weight',
#                  'type'  : 'shape',
#                  'samples'  : {
#                     'DY'       : ['1', '1'],
#                     'DYveto'   : ['0.1', '-0.1'],
#                  }
#  }
#
#
##
## PS and UE
##
#nuisances['PS']  = {
#                'name'  : 'PS',
#                'skipCMS' : 1,
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                  'WW'      : ['PSWeight[0]', 'PSWeight[3]'],
#                  },
#                }
#
##nuisances['UE']  = {
##                'name'  : 'UE', 
##                'skipCMS' : 1,
##                'kind'  : 'tree',
##                'type'  : 'shape',
##                'samples'  : {
###                  'WW'      : ['1.12720771849', '1.13963144574'],
##                  'ggH_hww' : ['1.00211385568', '0.994966378288'], 
##                  'qqH_hww' : ['1.00367895901', '0.994831373195']
##                },
##                'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__UEup',
##                'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__UEdo',
##                'AsLnN'      : '1',
##}


nuisances['PU']  = {
                'name'  : 'PU_2018',
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

#nuisances['QCDscale_CRSR_accept_top']  = {
#               'name'  : 'CMS_hww_QCDscale_CRSR_accept_top', 
#               'type'  : 'lnN',
#               'samples'  : {
#                   'top' : '1.01',
#                   },
#               'cuts'  : [
#                 'hww2l2v_13TeV_top_of0j',
#                 'hww2l2v_13TeV_top_of1j',
#                 'hww2l2v_13TeV_top_of2j',
#                 'hww2l2v_13TeV_top_of2j_vbf',
#                 'hww2l2v_13TeV_top_of2j_vh2j'
#                ]               
#              }

#FIXME: check this 3%
nuisances['QCDscale_VZ']  = {
               'name'  : 'QCDscale_VZ', 
               'samples'  : {
                   'VZ' : '1.03',
                   },
               'type'  : 'lnN'
              }


nuisances['QCDscale_WWewk']  = {
               'name'  : 'QCDscale_WWewk',
               'samples'  : {
                   'WWewk' : '1.11',
                   },
               'type'  : 'lnN'
              }


nuisances['pdf_qqbar']  = {
               'name'  : 'pdf_qqbar',
               'type'  : 'lnN',
               'samples'  : {
                   'VZ'      : '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
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
                   #
                   'VZ'      : '1.005',
                   },
              }

# ggww and interference

nuisances['QCDscale_ggWW']  = {
               'name'  : 'QCDscale_ggWW',
               'type'  : 'lnN',
               'samples'  : {
                   'ggWW' : '1.15',
                   },
              }


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



## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat']  = {
              'type'  : 'auto',
              'maxPoiss'  : '10',
              'includeSignal'  : '1',
              #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
              #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
              'samples' : {}
             }
