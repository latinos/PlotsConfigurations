# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py 

################################ EXPERIMENTAL UNCERTAINTIES  #################################



#### Luminosity
########################################################################


nuisances['lumi']  = {
    'name'  : 'lumi_13TeV2016',
    'samples'  : {
        'DY'       : '1.025',    # Data-driven
        # 'top'      : '1.025',    # Data-driven    
        'WW'       : '1.025',    # Data-driven    
        'ggWW'     : '1.025',
        'Vg'       : '1.025',
        'VgS'      : '1.025',
        'VZ'       : '1.025',
        'VVV'      : '1.025',
        'Higgs'    : '1.025',
        'ggH_hww'  : '1.025',
        'qqH_hww'  : '1.025',
        'ZH_hww'   : '1.025',
        'ggZH_hww' : '1.025',
        'WH_hww'   : '1.025',
        'bbH_hww'  : '1.025',
        'H_htt'    : '1.025',
        },
    'type'  : 'lnN',
    }
       



#### FAKES
########################################################################


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
########################################################################

nuisances['btagbc']  = {
    'name'  : 'eff_btagb_b2016',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'DY'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'WW'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'ggWW'    : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'VVV'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'VZ'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'top'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'Vg'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'VgS'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'Higgs'   : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'ggH_hww' : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'qqH_hww' : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'WH_hww'  : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'ZH_hww'  : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'H_htt'   : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'bbH_hww' : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        }
    }
            
            
nuisances['btagudsg']  = {
    'name'  : 'eff_btagl_b2016',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'DY'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'VVV'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'VZ'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'WW'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'ggWW'    : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'top'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'Vg'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'VgS'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'Higgs'   : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'ggH_hww' : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'qqH_hww' : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'WH_hww'  : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'ZH_hww'  : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'bbH_hww' : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'H_htt'   : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        }
    }



#### Trigger Efficiency
########################################################################

if   Nlep == '2' : trig_syst = ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)']
elif Nlep == '3' : trig_syst = ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)']
# !!!!! We don't have the trigger formula implsfented for 4l !!!! -> Use 3l but not correct
elif Nlep == '4' : trig_syst = ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)']

nuisances['trigg']  = {
    'name'  : 'trigger',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'DY'      : trig_syst,
        'VVV'     : trig_syst,
        'VZ'      : trig_syst,
        'ggWW'    : trig_syst,
        'WW'      : trig_syst,
        'top'     : trig_syst,
        'Vg'      : trig_syst,
        'VgS'     : trig_syst,
        'Higgs'   : trig_syst,
        'ggH_hww' : trig_syst,
        'qqH_hww' : trig_syst,
        'WH_hww'  : trig_syst,
        'ZH_hww'  : trig_syst,
        'ggZH_hww': trig_syst,
        'bbH_hww' : trig_syst,
        'H_htt'   : trig_syst,
        },
    }



##### Electron Efficiency and energy scale
########################################################################

id_syst_ele = [ 'LepSF'+Nlep+'l__ele_'+eleWP+'__Up' , 'LepSF'+Nlep+'l__ele_'+eleWP+'__Do' ]


#ele_idiso_Up = '((abs(std_vector_lepton_flavour[0]) == 11)*(1.020)+(abs(std_vector_lepton_flavour[0]) == 13)) * \
#((abs(std_vector_lepton_flavour[1]) == 11)*(1.020)+(abs(std_vector_lepton_flavour[1]) == 13))'

#ele_idiso_Do = '((abs(std_vector_lepton_flavour[0]) == 11)*(0.98)+(abs(std_vector_lepton_flavour[0]) == 13)) * \
#((abs(std_vector_lepton_flavour[1]) == 11)*(0.98)+(abs(std_vector_lepton_flavour[1]) == 13))'

#id_syst_ele = [ele_idiso_Up, ele_idiso_Do]


nuisances['idiso_ele']  = {
    'name'  : 'eff_e',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'DY'      : id_syst_ele,
        'VVV'     : id_syst_ele ,
        'VZ'      : id_syst_ele ,
        'ggWW'    : id_syst_ele ,
        'WW'      : id_syst_ele ,
        'top'     : id_syst_ele ,
        'Vg'      : id_syst_ele ,
        'VgS'     : id_syst_ele ,
        'Higgs'   : id_syst_ele ,
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
                   'DY'                : ['1','1'],
                   'ggWW'              : ['1','1'],
                   'WW'                : ['1','1'],
                   'top'               : ['1','1'],
                   'VZ'                : ['1','1'],
                   'VVV'               : ['1','1'],
                   'Vg'                : ['1','1'],
                   'VgS'               : ['1','1'],
                   'Higgs'             : ['1','1'],
                   'ggH_hww'           : ['1','1'],
                   'qqH_hww'           : ['1','1'],
                   'WH_hww'            : ['1','1'],
                   'ZH_hww'            : ['1','1'],
                   'ggZH_hww'          : ['1','1'],
                   'bbH_hww'           : ['1','1'],
                   'H_htt'             : ['1','1'],
                 },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepElepTup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepElepTdo'+skim,
}



##### Muon Efficiency and energy scale
########################################################################

id_syst_mu = [ 'LepSF'+Nlep+'l__mu_'+muWP+'__Up' , 'LepSF'+Nlep+'l__mu_'+muWP+'__Do' ]

# mu_idiso_Up = '((abs(std_vector_lepton_flavour[0]) == 13)*(1.0112)+(abs(std_vector_lepton_flavour[0]) == 11)) * \
# ((abs(std_vector_lepton_flavour[1]) == 13)*(1.0112)+(abs(std_vector_lepton_flavour[1]) == 11))'

# mu_idiso_Do = '((abs(std_vector_lepton_flavour[0]) == 13)*(0.9888)+(abs(std_vector_lepton_flavour[0]) == 11)) * \
# ((abs(std_vector_lepton_flavour[1]) == 13)*(0.9888)+(abs(std_vector_lepton_flavour[1]) == 11))'

# id_syst_mu = [mu_idiso_Up, mu_idiso_Do]



nuisances['idiso_mu']  = {
    'name'  : 'eff_m',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'DY'                : id_syst_mu,
        'VVV'               : id_syst_mu,
        'VZ'                : id_syst_mu,
        'ggWW'              : id_syst_mu,
        'WW'                : id_syst_mu,
        'top'               : id_syst_mu,
        'Vg'                : id_syst_mu,
        'VgS'               : id_syst_mu,
        'Higgs'             : id_syst_mu,
        'ggH_hww'           : id_syst_mu,
        'qqH_hww'           : id_syst_mu,
        'WH_hww'            : id_syst_mu,
        'ZH_hww'            : id_syst_mu,
        'ggZH_hww'          : id_syst_mu,
        'bbH_hww'           : id_syst_mu,
        'H_htt'             : id_syst_mu,
        },
    }


nuisances['muonpt']  = {
                'name'  : 'scale_m',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'ggWW'              : ['1','1'],
                   'WW'                : ['1','1'],
                   'DY'                : ['1','1'],
                   'top'               : ['1','1'],
                   'VZ'                : ['1','1'],
                   'VVV'               : ['1','1'],
                   'Vg'                : ['1','1'],
                   'VgS'               : ['1','1'],
                   'Higgs'             : ['1','1'],
                   'ggH_hww'           : ['1','1'],
                   'qqH_hww'           : ['1','1'],
                   'WH_hww'            : ['1','1'],
                   'ZH_hww'            : ['1','1'],
                   'ggZH_hww'          : ['1','1'],
                   'bbH_hww'           : ['1','1'],
                   'H_htt'             : ['1','1'],
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepMupTup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepMupTdo'+skim,
}



#### Jet energy scale
########################################################################

nuisances['jes']  = {
                'name'  : 'scale_j',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'ggWW' :['1', '1'],
                   'WW' :  ['1', '1'],
                   'DY' :  ['1', '1'],
                   'top' : ['1', '1'],
                   'VZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'Vg' : ['1', '1'],
                   'VgS': ['1', '1'],
                   'Higgs' : ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww' :  ['1', '1'],
                   'ZH_hww' :  ['1', '1'],
                   'ggZH_hww':  ['1', '1'],
                   'bbH_hww' : ['1', '1'],
                   'H_htt' : ['1', '1'],
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__JESup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__JESdo'+skim,
}


##### MET energy scale
########################################################################

nuisances['met']  = {
                'name'  : 'scale_met',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'ggWW'              : ['1','1'],
                   'WW'                : ['1','1'],
                   'DY'                : ['1','1'],
                   'top'               : ['1','1'],
                   'VZ'                : ['1','1'],
                   'VVV'               : ['1','1'],
                   'Vg'                : ['1','1'],
                   'VgS'               : ['1','1'],
                   'Higgs'           : ['1','1'],
                   'ggH_hww'           : ['1','1'],
                   'qqH_hww'           : ['1','1'],
                   'WH_hww'            : ['1','1'],
                   'ZH_hww'            : ['1','1'],
                   'ggZH_hww'          : ['1','1'],
                   'bbH_hww'           : ['1','1'],
                   'H_htt'             : ['1','1'],
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__METup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__METdo'+skim,
}



##### ON CONTROL REGIONS
########################################################################

nuisances['QCDscale_CRSR_accept_top']  = {
    'name'  : 'QCDscale_Top', 
    'type'  : 'lnN',
    'samples'  : {
        'top' : '1.01',
        },
    'cuts'  : [
        #'monoH_MVA_Top_sf'
       'ww_top0jet_sf',
       'ww_top1jet_sf',
        ]               
    }



# nuisances['QCDscale_CRSR_accept_dy']  = {
#     'name'  : 'QCDscale_DY', 
#     'type'  : 'lnN',
#     'samples'  : {
#         'DY' : '1.02',
#         },
#     'cuts'  : [
#         #'monoH_MVA_Top_sf'
#        'ww_CR1_dy0jet_sf',
#        'ww_CR1_dy1jet_sf',
#        'ww_CR2_dy0jet_sf',
#        'ww_CR2_dy1jet_sf',
#        'ww_CR3_dy0jet_sf',
#        'ww_CR3_dy1jet_sf',
#         ]               
#     }



nuisances['Topnorm0j']  = {
               'name'  : 'Topnorm0j', 
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'ww_0jet_sf',
                 'ww_top0jet_sf',
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
                 'ww_1jet_sf',
                 'ww_top1jet_sf',
#                 
                ]
               }



nuisances['DYestim_0j']  = {
               'name'  : 'DY_syst_0j', 
               'type'  : 'lnN',
               'samples'  : {
                   'DY' : '1.3',
                   },
                 'cuts'  : [
                 'ww_0jet_sf',
                 'ww_top0jet_sf',
                 ]
               }


nuisances['DYestim_1j']  = {
               'name'  : 'DY_syst_1j', 
               'type'  : 'lnN',
               'samples'  : {
                   'DY' : '1.3',
                   },
                 'cuts'  : [
                 'ww_1jet_sf',
                 'ww_top1jet_sf',
                 ]
               }




# nuisances['TopnormIncl']  = {
#                'name'  : 'norm_TopIncl', 
#                'samples'  : {
#                    'top' : '1.00',
#                    },
#                'type'  : 'rateParam',
#                'cuts'  : [
#                  'ww_Incl_sf',
#                  'ww_topIncl_sf',
# #                 
#                 ]
#                }


# nuisances['DYnorm0j']  = {
#                'name'  : 'DYnorm0j', 
#                'samples'  : {
#                    'DY' : '1.00',
#                    },
#                'type'  : 'rateParam',
#                'cuts'  : [
#                  'ww_CR1_dy0jet_sf',
#                  'ww_CR2_dy0jet_sf',
#                  'ww_CR3_dy0jet_sf',
# #
#                 ]
#               }


# nuisances['DYnorm1j']  = {
#                'name'  : 'DYnorm1j', 
#                'samples'  : {
#                    'DY' : '1.00',
#                    },
#                'type'  : 'rateParam',
#                'cuts'  : [
#                  'ww_CR1_dy1jet_sf',
#                  'ww_CR2_dy1jet_sf',
#                  'ww_CR3_dy1jet_sf',
# #
#                 ]
#               }




nuisances['tttwTh']  = {
    'name'  : 'tttwTh',   # Theory uncertainty
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {  # up              down
        'top'     : ['((dataset==15 || dataset==16) * 1.0816 + (dataset==17 || dataset==18 || dataset==19))',
                     '((dataset==15 || dataset==16) * 0.9184 + (dataset==17 || dataset==18 || dataset==19))'],
        },
    }
    # TTTo2L2Nu = 19    (tt = 17/18/19 depending on the sample/generator)
    # ST_tW_top = 16
    # ST_tW_antitop = 15



##### WgStarScale

# K factor (Data/Wg*) = 2.0 +/- 0.5
nuisances['WgStarScale']  = {
               'name'  : 'WgStarScale', 
               'type'  : 'lnN',
               'samples'  : {
                   'WgS' : '1.35',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   'VgS' : '1.35',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   },
                }



#### Uncertainties on WW signal
########################################################################



##### ggWW and interference

nuisances['kfactggww']  = {
               'name'  : 'QCDscale_ggVV', #Guillelmo's name 
               'type'  : 'lnN',
               'samples'  : {
                   'ggWW' : '1.15',
                   },
              }


##### WW shaping


nuisances['WWresum']  = {
                'name'  : 'WWNNLO_resum',
                'kind'  : 'weight',
               'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['(nllW_Rup/nllW)/1.011810', '(nllW_Rdown/nllW)/0.953619'],
#                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'], 
                   },
               'cuts'  : [
                 'ww_0jet_sf',
                 'ww_top0jet_sf',
                 'ww_1jet_sf',
                 'ww_top1jet_sf',
#                 'ww_Incl_sf',
#                 'ww_topIncl_sf',
#                 'ww_CR1_dy0jet_sf',
#                 'ww_CR2_dy0jet_sf',
#                 'ww_CR3_dy0jet_sf',
#                 'ww_CR1_dy1jet_sf',
#                 'ww_CR2_dy1jet_sf',
#                 'ww_CR3_dy1jet_sf',
                 
                ]               
               
               }


nuisances['WWqscale']  = {
                'name'  : 'WWNNLO_scale',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['(nllW_Qup/nllW)/0.996073', '(nllW_Qdown/nllW)/1.000986'],
                   },
               'cuts'  : [
                 'ww_0jet_sf',
                 'ww_top0jet_sf',
                 'ww_1jet_sf',
                 'ww_top1jet_sf',                 
#                 'ww_Incl_sf',
#                 'ww_topIncl_sf',
#                 'ww_CR1_dy0jet_sf',
#                 'ww_CR2_dy0jet_sf',
#                 'ww_CR3_dy0jet_sf',
#                 'ww_CR1_dy1jet_sf',
#                 'ww_CR2_dy1jet_sf',
#                 'ww_CR3_dy1jet_sf',
                ] 
                }




################################ THEORETICAL UNCERTAINTIES  #################################
                             ###     Taken from ICHEP!      ###




##### QCD scale

# https://twiki.cern.ch/twiki/bin/view/CMS/StandardModelCrossSectionsat13TeV

nuisances['QCDscale_VW']  = {
               'name'  : 'QCDscale_VW', 
               'samples'  : {
                   'VW' : '1.03',
                   },
               'type'  : 'lnN'
              }



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


##### QCD scale acceptance

nuisances['QCDscale_qqbar_accept']  = {
               'name'  : 'QCDscale_qqbar_accept', 
               'type'  : 'lnN',
               'samples'  : {
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
                   'ggWW'    : '1.027',
                   'Higgs'   : '1.027',
                   'ggH_hww' : '1.027',
                   'ggH_htt' : '1.027',
                   'H_htt'   : '1.027',
                   'ggZH_hww': '1.027',                   
                   },
               'type'  : 'lnN',
              }


##### PDF uncertainty

nuisances['pdf_gg']  = {
               'name'  : 'pdf_gg', 
               'samples'  : {
                   'Higgs'   : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
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



##### PDF acceptance uncertainty

nuisances['pdf_gg_accept']  = {
               'name'  : 'pdf_gg_accept', 
               'samples'  : {
                   'ggWW'    : '1.005',
                   'Higgs' : '1.005',    
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
                   'qqH_hww' : '1.011',
                   'qqH_htt' : '1.011',
                   'WH_hww'  : '1.007',
                   'ZH_hww'  : '1.012',
                   'VZ'      : '1.005',                   
                   },
              }




nuisances['UE0j']  = {
               'name'  : 'UEPS', 
               'type' : 'lnN',
               'samples'  : {
                   'Higgs'   : '1.00685',
                   'ggH_hww' : '1.00685',
                   'qqH_hww' : '1.00685',
                   'WW'     : '1.00355',
                   'ggWW'    : '1.00355',
               },
               'cuts'  : [
                 'ww_0jet_sf',
                 'ww_top0jet_sf', 
#                 'ww_CR1_dy0jet_sf',
#                 'ww_CR2_dy0jet_sf',
#                 'ww_CR3_dy0jet_sf',
                 ],
            }




# nuisances['UE']  = {
#                'name'  : 'PSUE', 
#                'type' : 'lnN',
#                'samples'  : {
#                    'ggH_hww' : '1.0435',
#                    'qqH_hww' : '1.0435',
#                    'WW'     : '1.005',
#                    'ggWW'    : '1.005',
#                },
#                'cuts'  : [
#                  'ww_Incl_sf',
#                  'ww_topIncl_sf', 
#                  ],
#             }




nuisances['UE1j']  = {
               'name'  : 'UEPS', 
               'type' : 'lnN',
               'samples'  : {
                   'Higgs'   : '1.0188',
                   'ggH_hww' : '1.0188',
                   'qqH_hww' : '1.0188',
                   'WW'     : '1.0052',
                   'ggWW'    : '1.0052',
               },
               'cuts'  : [
                 'ww_1jet_sf',
                 'ww_top1jet_sf', 
#                 'ww_CR1_dy1jet_sf',
#                 'ww_CR2_dy1jet_sf',
#                 'ww_CR3_dy1jet_sf',
                 ],
            }


nuisances['pu_syst']  = {
               'name'  : 'pu', 
               'kind'  : 'tree',
               'type' : 'shape',
               'samples'  : {
                   'ggWW'              : ['1','1'],
                   'WW'                : ['1','1'],
                   'DY'                : ['1','1'],
                   'top'               : ['1','1'],
                   'VZ'                : ['1','1'],
                   'VVV'               : ['1','1'],
                   'Vg'                : ['1','1'],
                   'VgS'               : ['1','1'],
                   'Higgs'             : ['1','1'],
                   'ggH_hww'           : ['1','1'],
                   'qqH_hww'           : ['1','1'],
                   'WH_hww'            : ['1','1'],
                   'ZH_hww'            : ['1','1'],
                   'ggZH_hww'          : ['1','1'],
                   'bbH_hww'           : ['1','1'],
                   'H_htt'             : ['1','1'],
               },
               'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__PUup'+skim,
               'folderDown'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__PUdo'+skim,
            }





# nuisances['UE_0jet']  = {
#                'name'  : 'UE_0jet', 
#                'kind'  : 'tree',
#                'type' : 'shape',
#                'samples'  : {
#                    'ggH_hww' : ['0.968648','0.929750'],
#                    #'qqH_hww' : ['1','1'],
#                     'WW'     : ['1.03529','1.00237'],
#                    #'ggWW'    : ['1','1'],
#                },
#                'cuts'  : [
#                  'ww_0jet_sf',
#                  'ww_top0jet_sf', 
#                  ],
#                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEup'+skim,
#                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEdo'+skim,
#             }


# nuisances['UE_1jet']  = {
#                'name'  : 'UE_1jet', 
#                'kind'  : 'tree',
#                'type' : 'shape',
#                'samples'  : {
#                    'ggH_hww' : ['1.19510','1.17273'],
#                    #'qqH_hww' : ['1','1'],
#                     'WW'     : ['1.02032','0.988838'],
#                    #'ggWW'    : ['1','1'],
#                },
#                'cuts'  : [
#                  'ww_1jet_sf',
#                  'ww_top1jet_sf',                 
#                  ],
#                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEup'+skim,
#                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEdo'+skim,
#             }


# nuisances['UE_Incl']  = {
#                'name'  : 'UE_Incl', 
#                'kind'  : 'tree',
#                'type' : 'shape',
#                'samples'  : {
#                    'ggH_hww' : ['1.08648','1.06132'],
#                    #'qqH_hww' : ['1','1'],
#                     'WW'     : ['1.02146','0.995482'],
#                    #'ggWW'    : ['1','1'],
#                },
#                'cuts'  : [
#                  'ww_Incl_sf',
#                  'ww_topIncl_sf',                 
#                  ],
#                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEup'+skim,
#                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEdo'+skim,
#             }



################################ STATISTICAL UNCERTAINTIES  #################################

##### Statistical fluctuation
# # on MC/data
# # "stat" is a special word to identify this nuisance
nuisances['stat']  = {
    # apply to the following samples: name of samples here must match keys in samples.py
    'samples'  : {
        
        'ttbar': {
            'typeStat' : 'bbb',
            },
        
        'singletop': {
            'typeStat' : 'bbb',
            },
        
        'top': {
            'typeStat' : 'bbb',
            },
        
        'DY': {
            'typeStat' : 'bbb',
            },
        
        'ggWW': {
            'typeStat' : 'bbb',
            },
        
        'ggWW_Int': {
            'typeStat' : 'bbb',
            },
        
        'WW': {
            'typeStat' : 'bbb',
            },
        
        'VZ': {
            'typeStat' : 'bbb',
            },
        
        'WZ': {
            'typeStat' : 'bbb',
            },
        
        'VVV': {
            'typeStat' : 'bbb',
            },
        
        'H_hww': {
            'typeStat' : 'bbb',
            },

        'Higgs': {
            'typeStat' : 'bbb',
            },
        
        'ggH_hww': {
            'typeStat' : 'bbb',
            },
        
        'qqH_hww': {
            'typeStat' : 'bbb',
            },
        
        'WH_hww': {
            'typeStat' : 'bbb',
            },
        
        'ZH_hww': {
            'typeStat' : 'bbb',
            },
        
        'H_htt': {
            'typeStat' : 'bbb',
            },
        
        'ggH_htt': {
            'typeStat' : 'bbb',
            },
        
        'qqH_htt': {
            'typeStat' : 'bbb',
            },
        
        'WH_htt': {
            'typeStat' : 'bbb',
            },
        
        'ZH_htt': {
            'typeStat' : 'bbb',
            },
        
        'ggZH_hww': {
            'typeStat' : 'bbb',
            },
        
        'Fake': {  # needed? YES?
            'typeStat' : 'bbb',
            },
        
        'Vg': {  
            'typeStat' : 'bbb',
            },
        
        'VgS': {  
            'typeStat' : 'bbb',
            },
        
        },
    'type'  : 'shape'
    }


