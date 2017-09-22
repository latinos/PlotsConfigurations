
# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py 

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV',
               'samples'  : {
                   'DY'       : '1.023',    
                   'top'      : '1.023',    
                   'WW'       : '1.023',    
                   'WW_pt1'       : '1.023',    
                   'WW_pt2'       : '1.023',    
                   'WW_pt3'       : '1.023',    
                   'WW_pt4'       : '1.023',    
                   'WW_pt5'       : '1.023',    
                   'WW_pt6'       : '1.023',    
                   'ggWW'     : '1.023',
                   'Vg'       : '1.023',
                   'VgS'      : '1.023',
                   'VZ'       : '1.023',
                   'VVV'      : '1.023',
                   'ggH_hww'  : '1.023',
                   'qqH_hww'  : '1.023',
                   'ZH_hww'   : '1.023',
                   'ggZH_hww' : '1.023',
                   'WH_hww'   : '1.023',
                   'bbH_hww'  : '1.023',
                   'H_htt'    : '1.023',
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
                   'WW_pt1'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'WW_pt2'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'WW_pt3'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'WW_pt4'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'WW_pt5'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'WW_pt6'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'ggWW'    : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'VVV'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'VZ'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'top'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'Vg'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'VgS'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'ggH_hww' : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'qqH_hww' : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'WH_hww'  : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'ZH_hww'  : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'H_htt'   : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'bbH_hww' : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
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
                   'WW'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'WW_pt1'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'WW_pt2'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'WW_pt3'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'WW_pt4'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'WW_pt5'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'WW_pt6'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'ggWW'    : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'top'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'Vg'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'VgS'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'ggH_hww' : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'qqH_hww' : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'WH_hww'  : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'ZH_hww'  : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'bbH_hww' : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
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
                   'ggWW'    : trig_syst ,
                   'WW'      : trig_syst ,
                   'WW_pt1'      : trig_syst ,
                   'WW_pt2'      : trig_syst ,
                   'WW_pt3'      : trig_syst ,
                   'WW_pt4'      : trig_syst ,
                   'WW_pt5'      : trig_syst ,
                   'WW_pt6'      : trig_syst ,
                   'top'     : trig_syst ,
                   'Vg'      : trig_syst ,
                   'VgS'     : trig_syst ,
                   'ggH_hww' : trig_syst ,
                   'qqH_hww' : trig_syst ,
                   'WH_hww'  : trig_syst ,
                   'ZH_hww'  : trig_syst ,
                   'ggZH_hww': trig_syst ,
                   'bbH_hww' : trig_syst ,
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
                   'ggWW'    : id_syst_ele ,
                   'WW'      : id_syst_ele ,
                   'WW_pt1'      : id_syst_ele ,
                   'WW_pt2'      : id_syst_ele ,
                   'WW_pt3'      : id_syst_ele ,
                   'WW_pt4'      : id_syst_ele ,
                   'WW_pt5'      : id_syst_ele ,
                   'WW_pt6'      : id_syst_ele ,
                   'top'     : id_syst_ele ,
                   'Vg'      : id_syst_ele ,
                   'VgS'     : id_syst_ele ,
                   'ggH_hww' : id_syst_ele ,
                   'qqH_hww' : id_syst_ele ,
                   'WH_hww'  : id_syst_ele ,
                   'ZH_hww'  : id_syst_ele ,
                   'ggZH_hww': id_syst_ele ,
                   'bbH_hww' : id_syst_ele ,
                   'H_htt'   : id_syst_ele ,
                },
}

nuisances['electronpt']  = {
                'name'  : 'scale_e',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'DY' :  ['1', '1'],
                   'ggWW' :['1', '1'],
                   'WW' :  ['1', '1'],
                   'WW_pt1' :  ['1', '1'],
                   'WW_pt2' :  ['1', '1'],
                   'WW_pt3' :  ['1', '1'],
                   'WW_pt4' :  ['1', '1'],
                   'WW_pt5' :  ['1', '1'],
                   'WW_pt6' :  ['1', '1'],
                   'top' : ['1', '1'],
                   'VZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'Vg' : ['1', '1'],
                   'VgS': ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww'  :  ['1', '1'],
                   'ZH_hww'  :  ['1', '1'],
                   'ggZH_hww':  ['1', '1'],
                   'bbH_hww' : ['1', '1'],
                   'H_htt'   : ['1', '1'],
                 },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__LepElepTup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__LepElepTdo'+skim,
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
                   'ggWW'    : id_syst_mu ,
                   'WW'      : id_syst_mu ,
                   'WW_pt1'      : id_syst_mu ,
                   'WW_pt2'      : id_syst_mu ,
                   'WW_pt3'      : id_syst_mu ,
                   'WW_pt4'      : id_syst_mu ,
                   'WW_pt5'      : id_syst_mu ,
                   'WW_pt6'      : id_syst_mu ,
                   'top'     : id_syst_mu ,
                   'Vg'      : id_syst_mu ,
                   'VgS'     : id_syst_mu ,
                   'ggH_hww' : id_syst_mu ,
                   'qqH_hww' : id_syst_mu ,
                   'WH_hww'  : id_syst_mu ,
                   'ZH_hww'  : id_syst_mu ,
                   'ggZH_hww': id_syst_mu ,
                   'bbH_hww' : id_syst_mu ,
                   'H_htt'   : id_syst_mu ,
                },
}

nuisances['muonpt']  = {
                'name'  : 'scale_m',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'ggWW' :['1', '1'],
                   'WW' :  ['1', '1'],
                   'WW_pt1' :  ['1', '1'],
                   'WW_pt2' :  ['1', '1'],
                   'WW_pt3' :  ['1', '1'],
                   'WW_pt4' :  ['1', '1'],
                   'WW_pt5' :  ['1', '1'],
                   'WW_pt6' :  ['1', '1'],
                   'DY' :  ['1', '1'],
                   'top' : ['1', '1'],
                   'VZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'Vg' : ['1', '1'],
                   'VgS': ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww' :  ['1', '1'],
                   'ZH_hww' :  ['1', '1'],
                   'ggZH_hww':  ['1', '1'],
                   'bbH_hww' : ['1', '1'],
                   'H_htt' : ['1', '1'],
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__LepMupTup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__LepMupTdo'+skim,
}


##### Jet energy scale

nuisances['jes']  = {
                'name'  : 'scale_j',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'ggWW' :['1', '1'],
                   'WW' :  ['1', '1'],
                   'WW_pt1' :  ['1', '1'],
                   'WW_pt2' :  ['1', '1'],
                   'WW_pt3' :  ['1', '1'],
                   'WW_pt4' :  ['1', '1'],
                   'WW_pt5' :  ['1', '1'],
                   'WW_pt6' :  ['1', '1'],
                   'DY' :  ['1', '1'],
                   'top' : ['1', '1'],
                   'VZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'Vg' : ['1', '1'],
                   'VgS': ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww' :  ['1', '1'],
                   'ZH_hww' :  ['1', '1'],
                   'ggZH_hww':  ['1', '1'],
                   'bbH_hww' : ['1', '1'],
                   'H_htt' : ['1', '1'],
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__JESup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__JESdo'+skim,
}

##### MET energy scale

nuisances['met']  = {
                'name'  : 'scale_met',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'ggWW' :['1', '1'],
                   'WW' :  ['1', '1'],
                   'WW_pt1' :  ['1', '1'],
                   'WW_pt2' :  ['1', '1'],
                   'WW_pt3' :  ['1', '1'],
                   'WW_pt4' :  ['1', '1'],
                   'WW_pt5' :  ['1', '1'],
                   'WW_pt6' :  ['1', '1'],
                   'DY' :  ['1', '1'],
                   'top' : ['1', '1'],
                   'VZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'Vg' : ['1', '1'],
                   'VgS': ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww' :  ['1', '1'],
                   'ZH_hww' :  ['1', '1'],
                   'ggZH_hww':  ['1', '1'],
                   'bbH_hww' : ['1', '1'],
                   'H_htt' : ['1', '1'],
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__METup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__METdo'+skim,
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
#


nuisances['ggH_mu']  = {
                'name'  : 'THU_ggH_Mu',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_mu', '1+(1.-ggH_mu)'],
                   },
                }


nuisances['ggH_res']  = {
                'name'  : 'THU_ggH_Res',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_res', '1+(1.-ggH_res)'],
                   },
                }

nuisances['ggH_mig01']  = {
                'name'  : 'THU_ggH_Mig01',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_mig01', '1+(1.-ggH_mig01)'],
                   },
                }

nuisances['ggH_mig12']  = {
                'name'  : 'THU_ggH_Mig12',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_mig12', '1+(1.-ggH_mig12)'],
                   },
                }

nuisances['ggH_pT60']  = {
                'name'  : 'THU_ggH_PT60',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_pT60', '1+(1.-ggH_pT60)'],
                   },
                }

nuisances['ggH_pT120']  = {
                'name'  : 'THU_ggH_PT120',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_pT120', '1+(1.-ggH_pT120)'],
                   },
                }

nuisances['ggH_VBF2j']  = {
                'name'  : 'THU_ggH_VBF2j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_VBF2j', '1+(1.-ggH_VBF2j)'],
                   },
                }

nuisances['ggH_VBF3j']  = {
                'name'  : 'THU_ggH_VBF3j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_VBF3j', '1+(1.-ggH_VBF3j)'],
                   },
                }

nuisances['ggH_qmtop']  = {
                'name'  : 'THU_ggH_qmtop',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_qmtop', '1+(1.-ggH_qmtop)'],
                   },
                }

nuisances['QCDscale_CRSR_accept_dytt']  = {
               'name'  : 'QCDscale_CRSR_accept_dytt', 
               'type'  : 'lnN',
               'samples'  : {
                   'DY' : '1.02',
                   },
               'cuts'  : [
                 'hww2l2v_13TeV_dytt_of0j',
                 'hww2l2v_13TeV_dytt_of1j',
                 'hww2l2v_13TeV_dytt_of2j',
                 'hww2l2v_13TeV_dytt_of2j_vbf',
                 'hww2l2v_13TeV_dytt_of2j_vh2j'
                ]               
              }

nuisances['QCDscale_CRSR_accept_top']  = {
               'name'  : 'QCDscale_CRSR_accept_top', 
               'type'  : 'lnN',
               'samples'  : {
                   'top' : '1.01',
                   },
               'cuts'  : [
                 'hww2l2v_13TeV_top_of0j',
                 'hww2l2v_13TeV_top_of1j',
                 'hww2l2v_13TeV_top_of2j',
                 'hww2l2v_13TeV_top_of2j_vbf',
                 'hww2l2v_13TeV_top_of2j_vh2j'
                ]               
              }


nuisances['QCDscale_VW']  = {
               'name'  : 'QCDscale_VW', 
               'samples'  : {
                   'VW' : '1.03',
                   },
               'type'  : 'lnN'
              }

#### QCD scale uncertainties for Higgs signals other than ggH

from LatinoAnalysis.Tools.HiggsXSection  import *
HiggsXS = HiggsXSection()

nuisances['QCDscale_ggH']  = {
               'name'  : 'QCDscale_ggH', 
               'samples'  : {
                   'ggH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','scale','sm'),
                   'H_htt'   : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }


nuisances['QCDscale_qqH']  = {
               'name'  : 'QCDscale_qqH', 
               'samples'  : {
                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','scale','sm'),
                   'qqH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }



nuisances['QCDscale_WH']  = {
               'name'  : 'QCDscale_WH', 
               'samples'  : {
                   'WH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }



nuisances['QCDscale_ZH']  = {
               'name'  : 'QCDscale_ZH', 
               'samples'  : {
                   'ZH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }


nuisances['QCDscale_ggZH']  = {
               'name'  : 'QCDscale_ggZH', 
               'samples'  : {
                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.0','scale','sm'),                  
                   },
               'type'  : 'lnN',
              }


nuisances['QCDscale_qqbar_accept']  = {
               'name'  : 'QCDscale_qqbar_accept', 
               'type'  : 'lnN',
               'samples'  : {
                   #'qqH_hww' : '1.02',
                   #'qqH_htt' : '1.02',
                   #'WH_hww'  : '1.02',
                   #'ZH_hww'  : '1.02',
                   #
                   #'WW'      : '1.015', -> not included since part of weights from WWqscale0j and WWqscale1j
                   'qqH_hww' : '1.007',
                   'qqH_htt' : '1.007',
                   'WH_hww'  : '1.05',
                   'ZH_hww'  : '1.04',
                   'VZ'      : '1.029',
                   },
              }



nuisances['QCDscale_gg_accept']  = {
               'name'  : 'QCDscale_gg_accept', 
               'samples'  : {
                   #'ggWW'    : '1.03',
                   #'ggH_hww' : '1.03',
                   #'ggH_htt' : '1.03',
                   #'H_htt'   : '1.03',
                   #'ggZH_hww': '1.03',                   
                   #
                   'ggWW'    : '1.027',
                   'ggH_hww' : '1.027',
                   'ggH_htt' : '1.027',
                   'H_htt'   : '1.027',
                   'ggZH_hww': '1.027',                   

                   },
               'type'  : 'lnN',
              }

###### pdf uncertainty

nuisances['pdf_gg']  = {
               'name'  : 'pdf_gg', 
               'samples'  : {
                   #'ggWW'    : '1.05',    # --> no, since absorbed into k-scale factor
                   'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
                   'ggH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
                   'H_htt'   : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.0','pdf','sm'),                   
                   },
               'type'  : 'lnN',
              }


nuisances['pdf_qqbar']  = {
               'name'  : 'pdf_qqbar', 
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),
                   'qqH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),
                   'WH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH' ,'125.0','pdf','sm'),
                   'ZH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH' ,'125.0','pdf','sm'),
                   'VZ'      : '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
                   },
              }



#    
#    
#    
#    


nuisances['pdf_gg_accept']  = {
               'name'  : 'pdf_gg_accept', 
               'samples'  : {
                   'ggWW'    : '1.005',    
                   'ggH_hww' : '1.005',
                   'ggH_htt' : '1.005',
                   'H_htt'   : '1.005',
                   'ggZH_hww': '1.005', 
                   },
               'type'  : 'lnN',
              }

nuisances['pdf_qqbar_accept']  = {
               'name'  : 'pdf_qqbar_accept',
               'type'  : 'lnN',
               'samples'  : {
                   #
                   'qqH_hww' : '1.011',
                   'qqH_htt' : '1.011',
                   'WH_hww'  : '1.007',
                   'ZH_hww'  : '1.012',
                   'VZ'      : '1.005',
                   },
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
                   'WW_pt1'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   'WW_pt2'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   'WW_pt3'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   'WW_pt4'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   'WW_pt5'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   'WW_pt6'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   },
               'cuts'  : [
                 'hww2l2v_13TeV_of0j',
                 'hww2l2v_13TeV_top_of0j',
                 'hww2l2v_13TeV_dytt_of0j',
#                 
                 'hww2l2v_13TeV_me_0j',
                 'hww2l2v_13TeV_em_0j',
#
                 'hww2l2v_13TeV_me_mp_0j',
                 'hww2l2v_13TeV_me_pm_0j',
                 'hww2l2v_13TeV_em_mp_0j',
                 'hww2l2v_13TeV_em_pm_0j',
#                 
                ]               
                
                }


nuisances['WWresum1j']  = {
                'name'  : 'WWresum1j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   'WW_pt1'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   'WW_pt2'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   'WW_pt3'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   'WW_pt4'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   'WW_pt5'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   'WW_pt6'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   },
               'cuts'  : [
                 'hww2l2v_13TeV_of1j',
                 'hww2l2v_13TeV_top_of1j',
                 'hww2l2v_13TeV_dytt_of1j',
#                 
                 'hww2l2v_13TeV_me_1j',
                 'hww2l2v_13TeV_em_1j',
#
                 'hww2l2v_13TeV_me_mp_1j',
                 'hww2l2v_13TeV_me_pm_1j',
                 'hww2l2v_13TeV_em_mp_1j',
                 'hww2l2v_13TeV_em_pm_1j',
#                 
                ]               
                }

nuisances['WWqscale0j']  = {
                'name'  : 'WWqscale0j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   'WW_pt1'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   'WW_pt2'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   'WW_pt3'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   'WW_pt4'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   'WW_pt5'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   'WW_pt6'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   },
               'cuts'  : [
                 'hww2l2v_13TeV_of0j',
                 'hww2l2v_13TeV_top_of0j',
                 'hww2l2v_13TeV_dytt_of0j',
#                 
                 'hww2l2v_13TeV_me_0j',
                 'hww2l2v_13TeV_em_0j',
#
                 'hww2l2v_13TeV_me_mp_0j',
                 'hww2l2v_13TeV_me_pm_0j',
                 'hww2l2v_13TeV_em_mp_0j',
                 'hww2l2v_13TeV_em_pm_0j',
#                 
                ] 
                }


nuisances['WWqscale1j']  = {
                'name'  : 'WWqscale1j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   'WW_pt1'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   'WW_pt2'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   'WW_pt3'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   'WW_pt4'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   'WW_pt5'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   'WW_pt6'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   },
               'cuts'  : [
                 'hww2l2v_13TeV_of1j',
                 'hww2l2v_13TeV_top_of1j',
                 'hww2l2v_13TeV_dytt_of1j',
#                 
                 'hww2l2v_13TeV_me_1j',
                 'hww2l2v_13TeV_em_1j',
#
                 'hww2l2v_13TeV_me_mp_1j',
                 'hww2l2v_13TeV_me_pm_1j',
                 'hww2l2v_13TeV_em_mp_1j',
                 'hww2l2v_13TeV_em_pm_1j',
#                 
                ] 
                }

nuisances['WgStarScale']  = {
               'name'  : 'WgStarScale', 
               'type'  : 'lnN',
               'samples'  : {
                   'WgS' : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   'VgS' : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   },
                }
 

nuisances['DYttnorm0j']  = {
               'name'  : 'DYttnorm0j', 
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'hww2l2v_13TeV_of0j',
                 'hww2l2v_13TeV_top_of0j',
                 'hww2l2v_13TeV_dytt_of0j',
#                 
                 'hww2l2v_13TeV_me_0j',
                 'hww2l2v_13TeV_em_0j',
#
                 'hww2l2v_13TeV_me_mp_0j',
                 'hww2l2v_13TeV_me_pm_0j',
                 'hww2l2v_13TeV_em_mp_0j',
                 'hww2l2v_13TeV_em_pm_0j',
#                 
                ]
              }

nuisances['DYttnorm1j']  = {
               'name'  : 'DYttnorm1j', 
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'hww2l2v_13TeV_of1j',
                 'hww2l2v_13TeV_top_of1j',
                 'hww2l2v_13TeV_dytt_of1j',
#                 
                 'hww2l2v_13TeV_me_1j',
                 'hww2l2v_13TeV_em_1j',
#
                 'hww2l2v_13TeV_me_mp_1j',
                 'hww2l2v_13TeV_me_pm_1j',
                 'hww2l2v_13TeV_em_mp_1j',
                 'hww2l2v_13TeV_em_pm_1j',
#                 
                ]
              }




#nuisances['WWnorm0j']  = {
               #'name'  : 'WWnorm0j', 
               #'samples'  : {
                   #'WW' : '1.00',
                   #},
               #'type'  : 'rateParam',
               #'cuts'  : [
                 #'hww2l2v_13TeV_of0j',
                 #'hww2l2v_13TeV_top_of0j',
                 #'hww2l2v_13TeV_dytt_of0j',              
##                 
                 #'hww2l2v_13TeV_me_0j',
                 #'hww2l2v_13TeV_em_0j',
##
                 #'hww2l2v_13TeV_me_mp_0j',
                 #'hww2l2v_13TeV_me_pm_0j',
                 #'hww2l2v_13TeV_em_mp_0j',
                 #'hww2l2v_13TeV_em_pm_0j',
##                 
                #]
              #}

#nuisances['WWnorm1j']  = {
               #'name'  : 'WWnorm1j', 
               #'samples'  : {
                   #'WW' : '1.00',
                   #},
               #'type'  : 'rateParam',
               #'cuts'  : [
                 #'hww2l2v_13TeV_of1j',
                 #'hww2l2v_13TeV_top_of1j',
                 #'hww2l2v_13TeV_dytt_of1j',              
##                 
                 #'hww2l2v_13TeV_me_1j',
                 #'hww2l2v_13TeV_em_1j',
##
                 #'hww2l2v_13TeV_me_mp_1j',
                 #'hww2l2v_13TeV_me_pm_1j',
                 #'hww2l2v_13TeV_em_mp_1j',
                 #'hww2l2v_13TeV_em_pm_1j',
##                 
                #]
              #}


nuisances['Topnorm0j']  = {
               'name'  : 'Topnorm0j', 
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'hww2l2v_13TeV_of0j',
                 'hww2l2v_13TeV_top_of0j',
                 'hww2l2v_13TeV_dytt_of0j',              
#                 
                 'hww2l2v_13TeV_me_0j',
                 'hww2l2v_13TeV_em_0j',
#
                 'hww2l2v_13TeV_me_mp_0j',
                 'hww2l2v_13TeV_me_pm_0j',
                 'hww2l2v_13TeV_em_mp_0j',
                 'hww2l2v_13TeV_em_pm_0j',
#                 
                ]
              }

nuisances['Topnorm1j']  = {
               'name'  : 'Topnorm1j', 
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'hww2l2v_13TeV_of1j',
                 'hww2l2v_13TeV_top_of1j',
                 'hww2l2v_13TeV_dytt_of1j',              
#                 
                 'hww2l2v_13TeV_me_1j',
                 'hww2l2v_13TeV_em_1j',
#
                 'hww2l2v_13TeV_me_mp_1j',
                 'hww2l2v_13TeV_me_pm_1j',
                 'hww2l2v_13TeV_em_mp_1j',
                 'hww2l2v_13TeV_em_pm_1j',
#                 
                ]
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


### FIXME: This must be implemented in mkDatacards.py using  a flag or something.
### Use the following if you want to apply the new combine MC stat nuisances.
### In this case remember to add the following line in the datacard
### * autoMCStats 10 1

#nuisances['stat']  = {
#                # apply to the following samples: name of samples here must match keys in samples.py
#               'samples'  : { },
#               'type'  : 'shape'
#              }


### Use the following if you want to apply the MC stat nuisances accoriding to the standard approach
#nuisances['stat']  = {
                ## apply to the following samples: name of samples here must match keys in samples.py
               #'samples'  : { 
                   #'ttbar': {
                         #'typeStat' : 'bbb',
                         #},

                   #'singletop': {
                         #'typeStat' : 'bbb',
                         #},
                    
                   #'top': {
                         #'typeStat' : 'bbb',
                         #},
                    
                   #'DY': {
                         #'typeStat' : 'bbb',
                         #'keepNormalization' : '1'  # default = 0 -> 0=don't keep normalization
                         #},
                    
                   #'ggWW': {
                         #'typeStat' : 'bbb',
                         #},
                    
                   #'ggWW_Int': {
                         #'typeStat' : 'bbb',
                         #},
                    
                   #'WW': {
                         #'typeStat' : 'bbb',
                         #},

                   #'VZ': {
                         #'typeStat' : 'bbb',
                         #},

                   #'WZ': {
                         #'typeStat' : 'bbb',
                         #},

                   #'VVV': {
                         #'typeStat' : 'bbb',
                         #},

                   #'H_hww': {
                         #'typeStat' : 'bbb',
                         #},

                   #'ggH_hww': {
                         #'typeStat' : 'bbb',
                         #},

                   #'qqH_hww': {
                         #'typeStat' : 'bbb',
                         #},

                   #'WH_hww': {
                         #'typeStat' : 'bbb',
                         #},

                   #'ZH_hww': {
                         #'typeStat' : 'bbb',
                         #},

                   #'H_htt': {
                         #'typeStat' : 'bbb',
                         #},

                   #'ggH_htt': {
                         #'typeStat' : 'bbb',
                         #},

                   #'qqH_htt': {
                         #'typeStat' : 'bbb',
                         #},

                   #'WH_htt': {
                         #'typeStat' : 'bbb',
                         #},

                   #'ZH_htt': {
                         #'typeStat' : 'bbb',
                         #},

                   #'ggZH_hww': {
                         #'typeStat' : 'bbb',
                         #},

                   #'bbH_hww': {
                         #'typeStat' : 'bbb',
                         #},
                   
                   #'Fake': {
                         #'typeStat' : 'bbb',
                         #},
                   
                   #'Vg': {  
                         #'typeStat' : 'bbb',
                         #},

                   #'VgS':{  
                         #'typeStat' : 'bbb',
                         #},
                 #},
               #'type'  : 'shape'
              #}

