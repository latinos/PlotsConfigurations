
# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py 

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV',
               'samples'  : {
                   'DY'       : '1.025',
                   'top'      : '1.025',
                   'WW'       : '1.025',
                   'ggWW'     : '1.025',
                   'Vg'       : '1.025',
                   'VgS'      : '1.025',
                   'WZgS_L'   : '1.025',
                   'WZgS_H'   : '1.025',
                   'VZ'       : '1.025',
                   'VVV'      : '1.025',
                   'ggH_hww'  : '1.025',
                   'qqH_hww'  : '1.025',
                   'ZH_hww'   : '1.025',
                   'ggZH_hww' : '1.025',
                   'WH_hww'   : '1.025',
                   'bbH_hww'  : '1.025',
                   'ttH_hww'  : '1.025',
                   'H_htt'    : '1.025',
                   },
               'type'  : 'lnN',
              }

#### FAKES

if Nlep == '2' :
  # already divided by central values in formulas !
  fakeW_EleUp       = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_EleUp'
  fakeW_EleDown     = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_EleDown'
  fakeW_MuUp        = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_MuUp'
  fakeW_MuDown      = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_MuDown'
  fakeW_statEleUp   = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statEleUp'
  fakeW_statEleDown = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statEleDown'
  fakeW_statMuUp    = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statMuUp'
  fakeW_statMuDown  = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statMuDown'

else:
  fakeW_EleUp       = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lElUp       / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_EleDown     = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lElDown     / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_MuUp        = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lMuUp       / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_MuDown      = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lMuDown     / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_statEleUp   = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatElUp   / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_statEleDown = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatElDown / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_statMuUp    = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatMuUp   / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_statMuDown  = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatMuDown / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'

nuisances['fake_syst']  = {
               'name'  : 'fake_syst',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake' : '1.30',
                             },
}

nuisances['fake_ele']  = {
                'name'  : 'fake_ele_hww',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_EleUp , fakeW_EleDown ],
                             },
}

nuisances['fake_ele_stat']  = {
                'name'  : 'fake_ele_stat_hww',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'      : [ fakeW_statEleUp , fakeW_statEleDown ]
                             },
}

nuisances['fake_mu']  = {
                'name'  : 'fake_mu_hww',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_MuUp , fakeW_MuDown ],
                             },
}


nuisances['fake_mu_stat']  = {
                'name'  : 'fake_mu_stat_hww',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_statMuUp , fakeW_statMuDown ]
                             },
}

##### B-tagger

nuisances['btagbc']  = {
                'name'  : 'Full2016_btag_bc',
                'kind'  : 'weight',
               'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'WW'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'ggWW'    : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'VVV'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'VZ'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'WZgS_L'  : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'WZgS_H'  : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'top'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'Vg'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'VgS'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'ggH_hww' : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'qqH_hww' : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'WH_hww'  : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'ZH_hww'  : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'H_htt'   : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'bbH_hww' : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'ttH_hww' : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                }
}

nuisances['btagudsg']  = {
                'name'  : 'Full2016_btag_udsg',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'VVV'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'VZ'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'WZgS_L'  : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'WZgS_H'  : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'WW'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'ggWW'    : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'top'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'Vg'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'VgS'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'ggH_hww' : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'qqH_hww' : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'WH_hww'  : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'ZH_hww'  : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'bbH_hww' : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'ttH_hww' : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'H_htt'   : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                }
}

##### Trigger Efficiency

if   Nlep == '2' : trig_syst = ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)']
elif Nlep == '3' : trig_syst = ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)']
# !!!!! We don't have the trigger formula implemented for 4l !!!! -> Use 3l but not correct
elif Nlep == '4' : trig_syst = ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)']

nuisances['trigg']  = {
                'name'  : 'trigger',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : trig_syst ,
                   'VVV'     : trig_syst ,
                   'VZ'      : trig_syst ,
                   'WZgS_L'  : trig_syst ,
                   'WZgS_H'  : trig_syst ,
                   'ggWW'    : trig_syst ,
                   'WW'      : trig_syst ,
                   'top'     : trig_syst ,
                   'Vg'      : trig_syst ,
                   'VgS'     : trig_syst ,
                   'ggH_hww' : trig_syst ,
                   'qqH_hww' : trig_syst ,
                   'WH_hww'  : trig_syst ,
                   'ZH_hww'  : trig_syst ,
                   'ggZH_hww': trig_syst ,
                   'bbH_hww' : trig_syst ,
                   'ttH_hww' : trig_syst ,
                   'H_htt'   : trig_syst ,
                },
}

##### Electron Efficiency and energy scale

id_syst_ele = [ 'LepSF'+Nlep+'l__ele_'+eleWP+'__Up' , 'LepSF'+Nlep+'l__ele_'+eleWP+'__Do' ]

nuisances['idiso_ele']  = {
                'name'  : 'idiso_ele',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : id_syst_ele ,
                   'VVV'     : id_syst_ele ,
                   'VZ'      : id_syst_ele ,
                   'WZgS_L'  : id_syst_ele ,
                   'WZgS_H'  : id_syst_ele ,
                   'ggWW'    : id_syst_ele ,
                   'WW'      : id_syst_ele ,
                   'top'     : id_syst_ele ,
                   'Vg'      : id_syst_ele ,
                   'VgS'     : id_syst_ele ,
                   'ggH_hww' : id_syst_ele ,
                   'qqH_hww' : id_syst_ele ,
                   'WH_hww'  : id_syst_ele ,
                   'ZH_hww'  : id_syst_ele ,
                   'ggZH_hww': id_syst_ele ,
                   'bbH_hww' : id_syst_ele ,
                   'ttH_hww' : id_syst_ele ,
                   'H_htt'   : id_syst_ele ,
                },
}

nuisances['electronpt']  = {
                'name'  : 'scale_e',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['1', '1'],
                   'ggWW'    : ['1', '1'],
                   'WW'      : ['1', '1'],
                   'top'     : ['1', '1'],
                   'VZ'      : ['1', '1'],
                   'WZgS_L'  : ['1', '1'],
                   'WZgS_H'  : ['1', '1'],
                   'VVV'     : ['1', '1'],
                   'Vg'      : ['1', '1'],
                   'VgS'     : ['1', '1'],
                   'ggH_hww ': ['1', '1'],
                   'qqH_hww ': ['1', '1'],
                   'WH_hww'  : ['1', '1'],
                   'ZH_hww'  : ['1', '1'],
                   'ggZH_hww': ['1', '1'],
                   'bbH_hww' : ['1', '1'],
                   'ttH_hww' : ['1', '1'],
                   'H_htt'   : ['1', '1'],
                 },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__LepElepTup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__LepElepTdo'+skim,
}


##### Muon Efficiency and energy scale

id_syst_mu = [ 'LepSF'+Nlep+'l__mu_'+muWP+'__Up' , 'LepSF'+Nlep+'l__mu_'+muWP+'__Do' ]

nuisances['idiso_mu']  = {
                'name'  : 'idiso_mu',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : id_syst_mu ,
                   'VVV'     : id_syst_mu ,
                   'VZ'      : id_syst_mu ,
                   'WZgS_L'  : id_syst_mu ,
                   'WZgS_H'  : id_syst_mu ,
                   'ggWW'    : id_syst_mu ,
                   'WW'      : id_syst_mu ,
                   'top'     : id_syst_mu ,
                   'Vg'      : id_syst_mu ,
                   'VgS'     : id_syst_mu ,
                   'ggH_hww' : id_syst_mu ,
                   'qqH_hww' : id_syst_mu ,
                   'WH_hww'  : id_syst_mu ,
                   'ZH_hww'  : id_syst_mu ,
                   'ggZH_hww': id_syst_mu ,
                   'bbH_hww' : id_syst_mu ,
                   'ttH_hww' : id_syst_mu ,
                   'H_htt'   : id_syst_mu ,
                },
}

nuisances['muonpt']  = {
                'name'  : 'scale_m',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['1', '1'],
                   'ggWW'    : ['1', '1'],
                   'WW'      : ['1', '1'],
                   'top'     : ['1', '1'],
                   'VZ'      : ['1', '1'],
                   'WZgS_L'  : ['1', '1'],
                   'WZgS_H'  : ['1', '1'],
                   'VVV'     : ['1', '1'],
                   'Vg'      : ['1', '1'],
                   'VgS'     : ['1', '1'],
                   'ggH_hww ': ['1', '1'],
                   'qqH_hww ': ['1', '1'],
                   'WH_hww'  : ['1', '1'],
                   'ZH_hww'  : ['1', '1'],
                   'ggZH_hww': ['1', '1'],
                   'bbH_hww' : ['1', '1'],
                   'ttH_hww' : ['1', '1'],
                   'H_htt'   : ['1', '1'],
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__LepMupTup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__LepMupTdo'+skim,
}


##### Jet energy scale

nuisances['jes']  = {
                'name'  : 'scale_j',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['1', '1'],
                   'ggWW'    : ['1', '1'],
                   'WW'      : ['1', '1'],
                   'top'     : ['1', '1'],
                   'VZ'      : ['1', '1'],
                   'WZgS_L'  : ['1', '1'],
                   'WZgS_H'  : ['1', '1'],
                   'VVV'     : ['1', '1'],
                   'Vg'      : ['1', '1'],
                   'VgS'     : ['1', '1'],
                   'ggH_hww ': ['1', '1'],
                   'qqH_hww ': ['1', '1'],
                   'WH_hww'  : ['1', '1'],
                   'ZH_hww'  : ['1', '1'],
                   'ggZH_hww': ['1', '1'],
                   'bbH_hww' : ['1', '1'],
                   'ttH_hww' : ['1', '1'],
                   'H_htt'   : ['1', '1'],
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__JESup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__JESdo'+skim,
}

##### MET energy scale

nuisances['met']  = {
                'name'  : 'scale_met',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['1', '1'],
                   'ggWW'    : ['1', '1'],
                   'WW'      : ['1', '1'],
                   'top'     : ['1', '1'],
                   'VZ'      : ['1', '1'],
                   'WZgS_L'  : ['1', '1'],
                   'WZgS_H'  : ['1', '1'],
                   'VVV'     : ['1', '1'],
                   'Vg'      : ['1', '1'],
                   'VgS'     : ['1', '1'],
                   'ggH_hww ': ['1', '1'],
                   'qqH_hww ': ['1', '1'],
                   'WH_hww'  : ['1', '1'],
                   'ZH_hww'  : ['1', '1'],
                   'ggZH_hww': ['1', '1'],
                   'bbH_hww' : ['1', '1'],
                   'ttH_hww' : ['1', '1'],
                   'H_htt'   : ['1', '1'],
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__METup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__METdo'+skim,
}

nuisances['PS']  = {
                'name'  : 'PS', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                  'WW'      : ['0.9694', '1.'], #
                  'ggH_hww' : ['1.0035', '1.'], # These numbers are used to normalize the PS variation to the same integral as the nominal after the wwSel skim
                  'qqH_hww' : ['0.9246', '1.'], #
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__PS'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC'+skim,
                }

nuisances['UE']  = {
                'name'  : 'UE', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                  'WW'      : ['1.021', '0.992'], #
                  'ggH_hww' : ['1.080', '1.019'], # These numbers are used to normalize the UE up/down variations to the same integral as the nominal after the wwSel skim
                  'qqH_hww' : ['1.023', '0.981'], #
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__UEup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__UEdo'+skim,
                }


## Shape nuisance due to QCD scale variations for DY
nuisances['DYQCDscale']  = {
                'name'  : 'DYQCDscale',
                'kind'  : 'weight',
               'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['std_vector_LHE_weight[8]/std_vector_LHE_weight[0]', 'std_vector_LHE_weight[4]/std_vector_LHE_weight[0]'],
                }
}


nuisances['elePtCor']  = {
                'name'  : 'elePtCor',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'         : ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l'], 
                   'ggWW'       : ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l'],    
                   'WW'         : ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l'],
                   'top'        : ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l'],
                   'VZ'         : ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l'],
                   'WZgS_L'     : ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l'],
                   'WZgS_H'     : ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l'],
                   'VVV'        : ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l'],
                   'Vg'         : ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l'],
                   'VgS'        : ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l'],
                   'ggH_hww '   : ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l'],
                   'qqH_hww '   : ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l'],
                   'WH_hww'     : ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l'],
                   'ZH_hww'     : ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l'],
                   'ggZH_hww'   : ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l'],
                   'bbH_hww'    : ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l'],
                   'ttH_hww'    : ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l'],
                   'H_htt'      : ['electron_ptW_2l_Up / electron_ptW_2l', 'electron_ptW_2l_Down / electron_ptW_2l'],
                }
}

nuisances['eleEtaCor']  = {
                'name'  : 'eleEtaCor',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'         : ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l'],
                   'ggWW'       : ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l'],
                   'WW'         : ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l'],
                   'top'        : ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l'],
                   'VZ'         : ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l'],
                   'WZgS_L'     : ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l'],
                   'WZgS_H'     : ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l'],
                   'VVV'        : ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l'],
                   'Vg'         : ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l'],
                   'VgS'        : ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l'],
                   'ggH_hww '   : ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l'],
                   'qqH_hww '   : ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l'],
                   'WH_hww'     : ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l'],
                   'ZH_hww'     : ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l'],
                   'ggZH_hww'   : ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l'],
                   'bbH_hww'    : ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l'],
                   'ttH_hww'    : ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l'],
                   'H_htt'      : ['electron_etaW_2l_Up / electron_etaW_2l', 'electron_etaW_2l_Down / electron_etaW_2l'],
                }
}


## Shape nuisance due to QCD scale variations for DY
nuisances['DYQCDscale']  = {
                'name'  : 'DYQCDscale',
                'kind'  : 'weight',
               'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['std_vector_LHE_weight[8]/std_vector_LHE_weight[0]', 'std_vector_LHE_weight[4]/std_vector_LHE_weight[0]'],
                }
}


# Top pT reweighting uncertainty
nuisances['TopPtRew']  = {
                'name'  : 'TopPtRew',   # Theory uncertainty
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples' : {
                     'top'  : ["1.","((1./"+Top_pTrw+" - 1)*(dataset==19) + 1)"]
                }
         }

# ggww and interference

nuisances['kfactggww']  = {
               'name'  : 'kfactggww',
               'type'  : 'lnN',
               'samples'  : {
                   'ggWW' : '1.15',
                   },
              }

#  - WW shaping
nuisances['WWresum0j']  = {
                'name'  : 'WWresum0j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   },
               'cuts'  : [
		'ww2l2v_13TeV_ww_of0j',
                ]               
                
                }

nuisances['WWresum1j']  = {
                'name'  : 'WWresum1j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   },
               'cuts'  : [
                'ww2l2v_13TeV_ww_of1j',
                ]               
                }

nuisances['WWqscale0j']  = {
                'name'  : 'WWqscale0j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   },
               'cuts'  : [
                'ww2l2v_13TeV_ww_of0j',
                ] 
                }


nuisances['WWqscale1j']  = {
                'name'  : 'WWqscale1j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   },
               'cuts'  : [
                'ww2l2v_13TeV_ww_of1j',
                ] 
                }

nuisances['WWresum2j']  = {
                'name'  : 'WWresum2j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                },
               'cuts'  : [
                'ww2l2v_13TeV_ww_of2j',
                'ww2l2v_13TeV_ww_of2j_ggh',
                'ww2l2v_13TeV_ww_of2j_vbf',
                'ww2l2v_13TeV_ww_of2j_vh2j',
                ]
                }

nuisances['WWqscale2j']  = {
                'name'  : 'WWqscale2j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                },
                'cuts'  : [
                'ww2l2v_13TeV_ww_of2j',
                'ww2l2v_13TeV_ww_of2j_ggh',
                'ww2l2v_13TeV_ww_of2j_vbf',
                'ww2l2v_13TeV_ww_of2j_vh2h',
                ]
                }

nuisances['QCDscale_WWewk']  = {
               'name'  : 'QCDscale_WWewk',
               'samples'  : {
                   'WWewk' : '1.11',
                   },
               'type'  : 'lnN'
              }


nuisances['WgStarScale']  = {
               'name'  : 'WgStarScale',
               'type'  : 'lnN',
               'samples'  : {
                   'WgS'    : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   'VgS'    : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   'WZgS_L' : '1.25',  #FIXME check!
                   },
                }
 

nuisances['tttwTh']  = {
                'name'  : 'tttwTh',   # Theory uncertainty
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {  # up              down
                   'top'     : ['((dataset==15 || dataset==16) * 1.0816 + (dataset==17 || dataset==18 || dataset==19))',
                                '((dataset==15 || dataset==16) * 0.9184 + (dataset==17 || dataset==18 || dataset==19))'],
                }
                # tt = 17/18/19 depending on the sample/generator
                # tW = 15/16
                
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

#### Use the following if you want to apply the MC stat nuisances accoriding to the standard approach
#nuisances['stat']  = {
#                # apply to the following samples: name of samples here must match keys in samples.py
#               'samples'  : { 
#                   'ttbar': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'singletop': {
#                         'typeStat' : 'bbb',
#                         },
#                    
#                   'top': {
#                         'typeStat' : 'bbb',
#                         },
#                    
#                   'DY': {
#                         'typeStat' : 'bbb',
#                         'keepNormalization' : '1'  # default = 0 -> 0=don't keep normalization
#                         },
#                    
#                   'ggWW': {
#                         'typeStat' : 'bbb',
#                         },
#                    
#                   'ggWW_Int': {
#                         'typeStat' : 'bbb',
#                         },
#                    
#                   'WW': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'VZ': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'WZ': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'VVV': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'H_hww': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'ggH_hww': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'qqH_hww': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'WH_hww': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'ZH_hww': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'H_htt': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'ggH_htt': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'qqH_htt': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'WH_htt': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'ZH_htt': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'ggZH_hww': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'bbH_hww': {
#                         'typeStat' : 'bbb',
#                         },
#                   
#                   'Fake': {
#                         'typeStat' : 'bbb',
#                         },
#                   
#                   'Vg': {  
#                         'typeStat' : 'bbb',
#                         },
#
#                   'VgS':{  
#                         'typeStat' : 'bbb',
#                         },
#                 },
#               'type'  : 'shape'
#              }

##  --- FitDiagnostics ---
## Best fit CMS_hww_DYttnorm0j: 0.937198  -0.0588033/+0.0618884  (68% CL)

DY0jpostfit     = 0.937198
DY0jpostfitDown = 1 + 0.0588033/DY0jpostfit
DY0jpostfitUp   = 1 + 0.0618884/DY0jpostfit

nuisances['DY0jpostfit']  = {
               'name'  : 'DY0jpostfit',
               'type'  : 'lnN',
               'samples'  : {
                   'DY' : str(DY0jpostfitDown)+'/'+str(DY0jpostfitUp),
                   },
               'cuts'  : [
                 'ww2l2v_13TeV_ww_of0j',
                ]
              }


##  --- FitDiagnostics ---
## Best fit CMS_hww_DYttnorm1j: 1.01685  -0.0430823/+0.0460648  (68% CL)

DY1jpostfit     = 1.01685
DY1jpostfitDown = 1 + 0.0430823/DY1jpostfit
DY1jpostfitUp   = 1 + 0.0460648/DY1jpostfit

nuisances['DY1jpostfit']  = {
               'name'  : 'DY1jpostfit',
               'type'  : 'lnN',
               'samples'  : {
                   'DY' : str(DY1jpostfitDown)+'/'+str(DY1jpostfitUp),
                   },
               'cuts'  : [
                 'ww2l2v_13TeV_ww_of1j',
                ]
              }

##  --- FitDiagnostics ---
## Best fit CMS_hww_DYttnorm2j: 0.989473  -0.0842789/+0.096486  (68% CL) 

DY2jpostfit     = 0.989473  
DY2jpostfitDown = 1 + 0.0842789/DY2jpostfit
DY2jpostfitUp   = 1 + 0.096486/DY2jpostfit

nuisances['DY2jpostfit']  = {
               'name'  : 'DY2jpostfit',
               'type'  : 'lnN',
               'samples'  : {
                   'DY' : str(DY2jpostfitDown)+'/'+str(DY2jpostfitUp),
                   },
               'cuts'  : [
                 'ww2l2v_13TeV_ww_of2j',
                 'ww2l2v_13TeV_ww_of2j_ggh',
                ]
              }

##  --- FitDiagnostics ---
## Best fit CMS_hww_DYttnormvbf: 1.04489  -0.15163/+0.170382  (68% CL) 

DY2jvbfpostfit     = 1.04489
DY2jvbfpostfitDown = 1 + 0.15163/DY2jvbfpostfit
DY2jvbfpostfitUp   = 1 + 0.170382/DY2jvbfpostfit

nuisances['DY2jvbfpostfit']  = {
               'name'  : 'DY2jvbfpostfit',
               'type'  : 'lnN',
               'samples'  : {
                   'DY' : str(DY2jvbfpostfitDown)+'/'+str(DY2jvbfpostfitUp),
                   },
               'cuts'  : [
                 'ww2l2v_13TeV_ww_of2j_vbf',
                ]
              }

##  --- FitDiagnostics ---
## Best fit CMS_hww_DYttnormvh2j: 0.992502  -0.119045/+0.135343  (68% CL) 

DY2jvh2jpostfit     = 0.992502
DY2jvh2jpostfitDown = 1 + 0.119045/DY2jvh2jpostfit
DY2jvh2jpostfitUp   = 1 + 0.135343/DY2jvh2jpostfit

nuisances['DY2jvh2jpostfit']  = {
               'name'  : 'DY2jvh2jpostfit',
               'type'  : 'lnN',
               'samples'  : {
                   'DY' : str(DY2jvh2jpostfitDown)+'/'+str(DY2jvh2jpostfitUp),
                   },
               'cuts'  : [
                 'ww2l2v_13TeV_ww_of2j_vh2j',
                ]
              }


##------------------------------------------------------------------------------------------##



## --- FitDiagnostics ---
## Best fit CMS_hww_Topnorm0j: 0.938715  -0.0476224/+0.0517666  (68% CL)

Top0jpostfit     = 0.938715
Top0jpostfitDown = 1 + 0.0476224/Top0jpostfit
Top0jpostfitUp   = 1 + 0.0517666/Top0jpostfit

nuisances['Top0jpostfit']  = {
               'name'  : 'Top0jpostfit',
               'type'  : 'lnN',
               'samples'  : {
                   'top' : str(Top0jpostfitDown)+'/'+str(Top0jpostfitUp),
                   },
               'cuts'  : [
                 'ww2l2v_13TeV_ww_of0j',
                ]
              }


## --- FitDiagnostics ---
## Best fit CMS_hww_Topnorm1j: 0.944139  -0.0318098/+0.0338566  (68% CL)


Top1jpostfit     = 0.944139 
Top1jpostfitDown = 1 + 0.0318098/Top1jpostfit
Top1jpostfitUp   = 1 + 0.0338566/Top1jpostfit

nuisances['Top1jpostfit']  = {
               'name'  : 'Top1jpostfit',
               'type'  : 'lnN',
               'samples'  : {
                   'top' : str(Top1jpostfitDown)+'/'+str(Top1jpostfitUp),
                   },
               'cuts'  : [
                 'ww2l2v_13TeV_ww_of1j',
                ]
              }

##  --- FitDiagnostics ---
## Best fit CMS_hww_Topnorm2j: 0.981372  -0.02435/+0.0249248  (68% CL) 

Top2jpostfit     = 0.981372
Top2jpostfitDown = 1 + 0.02435/Top2jpostfit
Top2jpostfitUp   = 1 + 0.0249248/Top2jpostfit

nuisances['Top2jpostfit']  = {
               'name'  : 'Top2jpostfit',
               'type'  : 'lnN',
               'samples'  : {
                   'top' : str(Top2jpostfitDown)+'/'+str(Top2jpostfitUp),
                   },
               'cuts'  : [
                 'ww2l2v_13TeV_ww_of2j',
                 'ww2l2v_13TeV_ww_of2j_ggh',
                ]
              }

##  --- FitDiagnostics ---
## 1.00584  -0.0405201/+0.0415744  (68% CL) 

Top2jvbfpostfit     = 1.00584
Top2jvbfpostfitDown = 1 + 0.0405201/Top2jvbfpostfit
Top2jvbfpostfitUp   = 1 + 0.0415744/Top2jvbfpostfit

nuisances['Top2jvbfpostfit']  = {
               'name'  : 'Top2jvbfpostfit',
               'type'  : 'lnN',
               'samples'  : {
                   'top' : str(Top2jvbfpostfitDown)+'/'+str(Top2jvbfpostfitUp),
                   },
               'cuts'  : [
                 'ww2l2v_13TeV_ww_of2j_vbf',
                ]
              }

##  --- FitDiagnostics ---
## Best fit CMS_hww_Topnormvh2j: 0.977618  -0.0256382/+0.026246  (68% CL)  

Top2jvh2jpostfit     = 0.977618
Top2jvh2jpostfitDown = 1 + 0.0256382/Top2jvh2jpostfit
Top2jvh2jpostfitUp   = 1 + 0.026246/Top2jvh2jpostfit

nuisances['Top2jvh2jpostfit']  = {
               'name'  : 'Top2jvh2jpostfit',
               'type'  : 'lnN',
               'samples'  : {
                   'top' : str(Top2jvh2jpostfitDown)+'/'+str(Top2jvh2jpostfitUp),
                   },
               'cuts'  : [
                 'ww2l2v_13TeV_ww_of2j_vh2j',
                ]
              }



##------------------------------------------------------------------------------------------------##



## --- FitDiagnostics ---
## Best fit CMS_hww_WWnorm0j: 1.15489  -0.0480807/+0.0640312  (68% CL)

WW0jpostfit     = 1.15489 
WW0jpostfitDown = 1 + 0.0480807/WW0jpostfit
WW0jpostfitUp   = 1 + 0.0640312/WW0jpostfit

nuisances['WW0jpostfit']  = {
               'name'  : 'WW0jpostfit',
               'type'  : 'lnN',
               'samples'  : {
                   'WW' : str(WW0jpostfitDown)+'/'+str(WW0jpostfitUp),
                   },
               'cuts'  : [
                 'ww2l2v_13TeV_ww_of0j',
                ]
              }

## --- FitDiagnostics ---
## Best fit CMS_hww_WWnorm1j: 1.05597  -0.109579/+0.139443  (68% CL)

WW1jpostfit     = 1.05597
WW1jpostfitDown = 1 + 0.109579/WW1jpostfit
WW1jpostfitUp   = 1 + 0.139443/WW1jpostfit

nuisances['WW1jpostfit']  = {
               'name'  : 'WW1jpostfit',
               'type'  : 'lnN',
               'samples'  : {
                   'WW' : str(WW1jpostfitDown)+'/'+str(WW1jpostfitUp),
                   },
               'cuts'  : [
                 'ww2l2v_13TeV_ww_of1j',
                ]
              }

## --- FitDiagnostics ---
## Best fit CMS_hww_WWnorm2j: 0.799908  -0.376836/+0.382914  (68% CL)  

WW2jpostfit     = 0.799908
WW2jpostfitDown = 1 + 0.376836/WW2jpostfit
WW2jpostfitUp   = 1 + 0.382914/WW2jpostfit

nuisances['WW2jpostfit']  = {
               'name'  : 'WW2jpostfit',
               'type'  : 'lnN',
               'samples'  : {
                   'WW' : str(WW2jpostfitDown)+'/'+str(WW2jpostfitUp),
                   },
               'cuts'  : [
                 'ww2l2v_13TeV_ww_of2j',
                 'ww2l2v_13TeV_ww_of2j_ggh',
                ]
              }

## --- FitDiagnostics ---
## Best fit CMS_hww_WWnormvbf: 0.489358  -0.461591/+0.480221  (68% CL) 

WW2jvbfpostfit     = 0.489358
WW2jvbfpostfitDown = 1 + 0.461591/WW2jvbfpostfit
WW2jvbfpostfitUp   = 1 + 0.480221/WW2jvbfpostfit

nuisances['WW2jvbfpostfit']  = {
               'name'  : 'WW2jvbfpostfit',
               'type'  : 'lnN',
               'samples'  : {
                   'WW' : str(WW2jvbfpostfitDown)+'/'+str(WW2jvbfpostfitUp),
                   },
               'cuts'  : [
                 'ww2l2v_13TeV_ww_of2j_vbf',
                ]
              }

## --- FitDiagnostics ---
## Best fit CMS_hww_WWnormvh2j: 0.610273  -0.616431/+0.64514  (68% CL)  

WW2jvh2jpostfit     = 0.610273
WW2jvh2jpostfitDown = 1 + 0.616431/WW2jvh2jpostfit
WW2jvh2jpostfitUp   = 1 + 0.64514/WW2jvh2jpostfit

nuisances['WW2jvh2jpostfit']  = {
               'name'  : 'WW2jvh2jpostfit',
               'type'  : 'lnN',
               'samples'  : {
                   'WW' : str(WW2jvh2jpostfitDown)+'/'+str(WW2jvh2jpostfitUp),
                   },
               'cuts'  : [
                 'ww2l2v_13TeV_ww_of2j_vh2j',
                ]
              }

