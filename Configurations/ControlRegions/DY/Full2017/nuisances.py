# nuisances
#FIXME: TO BE UPDATED FOR 2017!

# name of samples here must match keys in samples.py 

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

mc = [skey for skey in samples if skey != 'DATA' and not skey.startswith('Fake')]
mcNotDataDriven = [skey for skey in mc if skey != 'WW' and skey != 'DY' and skey != 'DY' and skey !='WW']

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV_2017',
               'samples': dict((skey, '1.023') for skey in mc if skey not in ['WW', 'top', 'DY']), 
               'type'  : 'lnN',
              }

##### B-tagger
#nuisances['btag_shape_jes']  = {
#                'name'  : 'btag_shape_jes_2017',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : dict((skey, ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)']) for skey in mc),
#}
#
#nuisances['btag_shape_lf']  = {
#                'name'  : 'btag_shape_lf_2017',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : dict((skey, ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)']) for skey in mc),
#}
#
#nuisances['btag_shape_hf']  = {
#                'name'  : 'btag_shape_hf_2017',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : dict((skey, ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)']) for skey in mc),
#}
#
#nuisances['btag_shape_hfstats1']  = {
#                'name'  : 'btag_shape_hfstats1_2017',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : dict((skey, ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)']) for skey in mc),
#}
#
#nuisances['btag_shape_hfstats2']  = {
#                'name'  : 'btag_shape_hfstats2_2017',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : dict((skey, ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)']) for skey in mc),
#}
#
#nuisances['btag_shape_lfstats1']  = {
#                'name'  : 'btag_shape_lfstats1_2017',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : dict((skey, ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)']) for skey in mc),
#}
#
#nuisances['btag_shape_lfstats2']  = {
#                'name'  : 'btag_shape_lfstats2_2017',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : dict((skey, ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)']) for skey in mc),
#}
#
#nuisances['btag_shape_cferr1']  = {
#                'name'  : 'btag_shape_cferr1_2017',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : dict((skey, ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)']) for skey in mc),
#}
#
#nuisances['btag_shape_cferr2']  = {
#                'name'  : 'btag_shape_cferr2_2017',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : dict((skey, ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)']) for skey in mc),
#}
#

##### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_'+Nlep+'l_u)/(TriggerEffWeight_'+Nlep+'l))*(TriggerEffWeight_'+Nlep+'l>0.02) + (TriggerEffWeight_'+Nlep+'l<=0.02)', '(TriggerEffWeight_'+Nlep+'l_d)/(TriggerEffWeight_'+Nlep+'l)']

nuisances['trigg']  = {
                'name'  : 'hww_trigger_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, trig_syst) for skey in mc),
}

##### Electron Efficiency and energy scale

id_syst_ele = [ 'LepSF'+Nlep+'l__ele_'+eleWP+'__Up' , 'LepSF'+Nlep+'l__ele_'+eleWP+'__Do' ]

nuisances['eff_e']  = {
                'name'  : 'eff_e_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, id_syst_ele) for skey in mc), 
}

ept_syst = ['1', '1']

nuisances['electronpt']  = {
                'name'  : 'scale_e_2017',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples': dict((skey, ept_syst) for skey in mc),
                'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__ElepTup',
                'folderDown' : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__ElepTdo',
}


#  nuisances['electronpt_embveto']  = {
#                  'name'  : 'scale_e_2017',
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
#                  'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__ElepTup', #xrootdPath+treeBaseDir
#                  'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__ElepTdo',
#  }
#
#  nuisances['electronpt_emb']  = {
#                  'name'  : 'scale_e_2017',
#                  'kind'  : 'tree',
#                  'type'  : 'shape',
#                  'samples'  : {
#                     'DY'      : ['1', '1'],
#                   },
#                  'folderUp'   : treeBaseDir+'Embedding2017_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017__Embedding2017__hadd__EmbElepTup', #xrootdPath+treeBaseDir
#                  'folderDown' : treeBaseDir+'Embedding2017_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017__Embedding2017__hadd__EmbElepTdo',
#  }

##### Muon Efficiency and energy scale

id_syst_mu = [ 'LepSF'+Nlep+'l__mu_'+muWP+'__Up' , 'LepSF'+Nlep+'l__mu_'+muWP+'__Do' ]

nuisances['eff_m']  = {
                'name'  : 'eff_m_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, id_syst_mu) for skey in mc),
}

mpt_syst=['1', '1']
nuisances['muonpt']  = {
                'name'  : 'scale_m_2017',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples': dict((skey, mpt_syst) for skey in mc),
                'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__MupTup',
                'folderDown' : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__MupTdo',

}
#if useEmbeddedDY:
#  for samp in DYvetosamples:
#    del nuisances['muonpt']['samples'][samp]
#
#  nuisances['muonpt_embveto']  = {
#                  'name'  : 'scale_m_2017',
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
#                  'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__MupTup', #xrootdPath+treeBaseDir
#                  'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__MupTdo',
#  }
#
#  nuisances['muonpt_emb']  = {
#                  'name'  : 'scale_m_2017',
#                  'kind'  : 'tree',
#                  'type'  : 'shape',
#                  'samples'  : {
#                     'DY'      : ['1', '1'],
#                   },
#                  'folderUp'   : treeBaseDir+'Embedding2017_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017__Embedding2017__hadd__EmbMupTup', #xrootdPath+treeBaseDir
#                  'folderDown' : treeBaseDir+'Embedding2017_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017__Embedding2017__hadd__EmbMupTdo',
#  }
#
#
###### Jet energy scale
j_syst = ['1', '1']
nuisances['jes']  = {
                'name'  : 'scale_j_2017',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples': dict((skey, j_syst) for skey in mc),
                'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__JESup',
                'folderDown' : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__JESdo',

}
#if useEmbeddedDY:
#  for samp in DYvetosamples:
#    del nuisances['jes']['samples'][samp]
#
#  nuisances['jes_embveto']  = {
#                  'name'  : 'scale_j_2017',
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
#                  'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__JESup',
#                  'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__JESdo',
#  }
#
###### MET energy scale
met_syst = ['1', '1']
nuisances['met']  = {
                'name'  : 'scale_met_2017',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples': dict((skey, met_syst) for skey in mc),
                'folderUp'   : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__METup',
                'folderDown' : treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__METdo',

}
#if useEmbeddedDY:
#  for samp in DYvetosamples:
#    del nuisances['met']['samples'][samp]
#
#  nuisances['met_embveto']  = {
#                  'name'  : 'scale_met_2017',
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
#                  'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__METup',
#                  'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__METdo',
#  }
#
# Prefire correction
prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']

nuisances['prefire']  = {
                'name'  : 'CMS_eff_prefiring_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, prefire_syst) for skey in mc),
}
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
##                'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__UEup',
##                'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__UEdo',
##                'AsLnN'      : '1',
##}


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
