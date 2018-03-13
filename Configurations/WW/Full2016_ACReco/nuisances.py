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
        'ggH_hww' : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'qqH_hww' : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'WH_hww'  : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'ZH_hww'  : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'bbH_hww' : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'H_htt'   : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        }
    }



#XJ #### Trigger Efficiency
#XJ ########################################################################
#XJ 
#XJ if   Nlep == '2' : trig_syst = ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)']
#XJ elif Nlep == '3' : trig_syst = ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)']
#XJ # !!!!! We don't have the trigger formula implemented for 4l !!!! -> Use 3l but not correct
#XJ elif Nlep == '4' : trig_syst = ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)']
#XJ 
#XJ nuisances['trigg']  = {
#XJ     'name'  : 'trigger',
#XJ     'kind'  : 'weight',
#XJ     'type'  : 'shape',
#XJ     'samples'  : {
#XJ         'DY'      : trig_syst,
#XJ         'VVV'     : trig_syst,
#XJ         'VZ'      : trig_syst,
#XJ         'ggWW'    : trig_syst,
#XJ         'WW'      : trig_syst,
#XJ         'top'     : trig_syst,
#XJ         'Vg'      : trig_syst,
#XJ         'VgS'     : trig_syst,
#XJ         'ggH_hww' : trig_syst,
#XJ         'qqH_hww' : trig_syst,
#XJ         'WH_hww'  : trig_syst,
#XJ         'ZH_hww'  : trig_syst,
#XJ         'ggZH_hww': trig_syst,
#XJ         'bbH_hww' : trig_syst,
#XJ         'H_htt'   : trig_syst,
#XJ         },
#XJ     }
#XJ 


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
        'ggH_hww' : id_syst_ele ,
        'qqH_hww' : id_syst_ele ,
        'WH_hww'  : id_syst_ele ,
        'ZH_hww'  : id_syst_ele ,
        'ggZH_hww': id_syst_ele ,
        'bbH_hww' : id_syst_ele ,
        'H_htt'   : id_syst_ele ,
        },
    }


#XJ nuisances['electronpt']  = {
#XJ                 'name'  : 'scale_e',
#XJ                 'kind'  : 'tree',
#XJ                 'type'  : 'shape',
#XJ                 'samples'  : {
#XJ                    'DY'                : ['1','1'],
#XJ                    'ggWW'              : ['1','1'],
#XJ                    'WW'                : ['1','1'],
#XJ                    'top'               : ['1','1'],
#XJ                    'VZ'                : ['1','1'],
#XJ                    'VVV'               : ['1','1'],
#XJ                    'Vg'                : ['1','1'],
#XJ                    'VgS'               : ['1','1'],
#XJ                    'ggH_hww'           : ['1','1'],
#XJ                    'qqH_hww'           : ['1','1'],
#XJ                    'WH_hww'            : ['1','1'],
#XJ                    'ZH_hww'            : ['1','1'],
#XJ                    'ggZH_hww'          : ['1','1'],
#XJ                    'bbH_hww'           : ['1','1'],
#XJ                    'H_htt'             : ['1','1'],
#XJ                  },
#XJ                 'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepElepTup'+skim,
#XJ                 'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepElepTdo'+skim,
#XJ }
#XJ 


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
        'ggH_hww'           : id_syst_mu,
        'qqH_hww'           : id_syst_mu,
        'WH_hww'            : id_syst_mu,
        'ZH_hww'            : id_syst_mu,
        'ggZH_hww'          : id_syst_mu,
        'bbH_hww'           : id_syst_mu,
        'H_htt'             : id_syst_mu,
        },
    }


#XJ nuisances['muonpt']  = {
#XJ                 'name'  : 'scale_m',
#XJ                 'kind'  : 'tree',
#XJ                 'type'  : 'shape',
#XJ                 'samples'  : {
#XJ                    'ggWW'              : ['1','1'],
#XJ                    'WW'                : ['1','1'],
#XJ                    'DY'                : ['1','1'],
#XJ                    'top'               : ['1','1'],
#XJ                    'VZ'                : ['1','1'],
#XJ                    'VVV'               : ['1','1'],
#XJ                    'Vg'                : ['1','1'],
#XJ                    'VgS'               : ['1','1'],
#XJ                    'ggH_hww'           : ['1','1'],
#XJ                    'qqH_hww'           : ['1','1'],
#XJ                    'WH_hww'            : ['1','1'],
#XJ                    'ZH_hww'            : ['1','1'],
#XJ                    'ggZH_hww'          : ['1','1'],
#XJ                    'bbH_hww'           : ['1','1'],
#XJ                    'H_htt'             : ['1','1'],
#XJ                 },
#XJ                 'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepMupTup'+skim,
#XJ                 'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepMupTdo'+skim,
#XJ }
#XJ 
#XJ 
#XJ 
#XJ #### Jet energy scale
#XJ ########################################################################
#XJ 
#XJ nuisances['jes']  = {
#XJ                 'name'  : 'scale_j',
#XJ                 'kind'  : 'tree',
#XJ                 'type'  : 'shape',
#XJ                 'samples'  : {
#XJ                    'ggWW' :['1', '1'],
#XJ                    'WW' :  ['1', '1'],
#XJ                    'DY' :  ['1', '1'],
#XJ                    'top' : ['1', '1'],
#XJ                    'VZ' :  ['1', '1'],
#XJ                    'VVV' : ['1', '1'],
#XJ                    'Vg' : ['1', '1'],
#XJ                    'VgS': ['1', '1'],
#XJ                    'ggH_hww' : ['1', '1'],
#XJ                    'qqH_hww' : ['1', '1'],
#XJ                    'WH_hww' :  ['1', '1'],
#XJ                    'ZH_hww' :  ['1', '1'],
#XJ                    'ggZH_hww':  ['1', '1'],
#XJ                    'bbH_hww' : ['1', '1'],
#XJ                    'H_htt' : ['1', '1'],
#XJ                 },
#XJ                 'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__JESup'+skim,
#XJ                 'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__JESdo'+skim,
#XJ }
#XJ 
#XJ 
#XJ ##### MET energy scale
#XJ ########################################################################
#XJ 
#XJ nuisances['met']  = {
#XJ                 'name'  : 'scale_met',
#XJ                 'kind'  : 'tree',
#XJ                 'type'  : 'shape',
#XJ                 'samples'  : {
#XJ                    'ggWW'              : ['1','1'],
#XJ                    'WW'                : ['1','1'],
#XJ                    'DY'                : ['1','1'],
#XJ                    'top'               : ['1','1'],
#XJ                    'VZ'                : ['1','1'],
#XJ                    'VVV'               : ['1','1'],
#XJ                    'Vg'                : ['1','1'],
#XJ                    'VgS'               : ['1','1'],
#XJ                    'ggH_hww'           : ['1','1'],
#XJ                    'qqH_hww'           : ['1','1'],
#XJ                    'WH_hww'            : ['1','1'],
#XJ                    'ZH_hww'            : ['1','1'],
#XJ                    'ggZH_hww'          : ['1','1'],
#XJ                    'bbH_hww'           : ['1','1'],
#XJ                    'H_htt'             : ['1','1'],
#XJ                 },
#XJ                 'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__METup'+skim,
#XJ                 'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__METdo'+skim,
#XJ }
#XJ 
#XJ 
#XJ 
#XJ ##### ON CONTROL REGIONS
#XJ ########################################################################
#XJ 
#XJ nuisances['QCDscale_CRSR_accept_top']  = {
#XJ     'name'  : 'QCDscale_Top', 
#XJ     'type'  : 'lnN',
#XJ     'samples'  : {
#XJ         'top' : '1.01',
#XJ         },
#XJ     'cuts'  : [
#XJ         #'monoH_MVA_Top_em'
#XJ        'ww_top0jet_em',
#XJ        'ww_top1jet_em',
#XJ         ]               
#XJ     }
#XJ 
#XJ 
#XJ 
#XJ # nuisances['QCDscale_CRSR_accept_dy']  = {
#XJ #     'name'  : 'QCDscale_DY', 
#XJ #     'type'  : 'lnN',
#XJ #     'samples'  : {
#XJ #         'DY' : '1.02',
#XJ #         },
#XJ #     'cuts'  : [
#XJ #         #'monoH_MVA_Top_em'
#XJ #        'ww_CR1_dy0jet_sf',
#XJ #        'ww_CR1_dy1jet_sf',
#XJ #        'ww_CR2_dy0jet_sf',
#XJ #        'ww_CR2_dy1jet_sf',
#XJ #        'ww_CR3_dy0jet_sf',
#XJ #        'ww_CR3_dy1jet_sf',
#XJ #         ]               
#XJ #     }
#XJ 
#XJ 
#XJ 
#XJ nuisances['Topnorm0j']  = {
#XJ                'name'  : 'Topnorm0j', 
#XJ                'samples'  : {
#XJ                    'top' : '1.00',
#XJ                    },
#XJ                'type'  : 'rateParam',
#XJ                'cuts'  : [
#XJ                  'ww_0jet_em',
#XJ                  'ww_top0jet_em',
#XJ #                 
#XJ                 ]
#XJ               }
#XJ 
#XJ nuisances['Topnorm1j']  = {
#XJ                'name'  : 'Topnorm1j', 
#XJ                'samples'  : {
#XJ                    'top' : '1.00',
#XJ                    },
#XJ                'type'  : 'rateParam',
#XJ                'cuts'  : [
#XJ                  'ww_1jet_em',
#XJ                  'ww_top1jet_em',
#XJ #                 
#XJ                 ]
#XJ                }
#XJ 
#XJ 
#XJ 
#XJ # nuisances['DYestim_0j']  = {
#XJ #                'name'  : 'DY_syst_0j', 
#XJ #                'type'  : 'lnN',
#XJ #                'samples'  : {
#XJ #                    'DY' : '1.3',
#XJ #                    },
#XJ #                  'cuts'  : [
#XJ #                  'ww_0jet_em',
#XJ #                  'ww_top0jet_em',
#XJ #                  ]
#XJ #                }
#XJ 
#XJ 
#XJ # nuisances['DYestim_1j']  = {
#XJ #                'name'  : 'DY_syst_1j', 
#XJ #                'type'  : 'lnN',
#XJ #                'samples'  : {
#XJ #                    'DY' : '1.3',
#XJ #                    },
#XJ #                  'cuts'  : [
#XJ #                  'ww_1jet_em',
#XJ #                  'ww_top1jet_em',
#XJ #                  ]
#XJ #                }
#XJ 
#XJ 
#XJ 
#XJ 
#XJ # nuisances['TopnormIncl']  = {
#XJ #                'name'  : 'norm_TopIncl', 
#XJ #                'samples'  : {
#XJ #                    'top' : '1.00',
#XJ #                    },
#XJ #                'type'  : 'rateParam',
#XJ #                'cuts'  : [
#XJ #                  'ww_Incl_em',
#XJ #                  'ww_topIncl_em',
#XJ # #                 
#XJ #                 ]
#XJ #                }
#XJ 
#XJ 
#XJ # nuisances['DYnorm0j']  = {
#XJ #                'name'  : 'DYnorm0j', 
#XJ #                'samples'  : {
#XJ #                    'DY' : '1.00',
#XJ #                    },
#XJ #                'type'  : 'rateParam',
#XJ #                'cuts'  : [
#XJ #                  'ww_CR1_dy0jet_sf',
#XJ #                  'ww_CR2_dy0jet_sf',
#XJ #                  'ww_CR3_dy0jet_sf',
#XJ # #
#XJ #                 ]
#XJ #               }
#XJ 
#XJ 
#XJ # nuisances['DYnorm1j']  = {
#XJ #                'name'  : 'DYnorm1j', 
#XJ #                'samples'  : {
#XJ #                    'DY' : '1.00',
#XJ #                    },
#XJ #                'type'  : 'rateParam',
#XJ #                'cuts'  : [
#XJ #                  'ww_CR1_dy1jet_sf',
#XJ #                  'ww_CR2_dy1jet_sf',
#XJ #                  'ww_CR3_dy1jet_sf',
#XJ # #
#XJ #                 ]
#XJ #               }
#XJ 
#XJ 
#XJ 
#XJ 
#XJ nuisances['tttwTh']  = {
#XJ     'name'  : 'tttwTh',   # Theory uncertainty
#XJ     'kind'  : 'weight',
#XJ     'type'  : 'shape',
#XJ     'samples'  : {  # up              down
#XJ         'top'     : ['((dataset==15 || dataset==16) * 1.0816 + (dataset==17 || dataset==18 || dataset==19))',
#XJ                      '((dataset==15 || dataset==16) * 0.9184 + (dataset==17 || dataset==18 || dataset==19))'],
#XJ         },
#XJ     }
#XJ     # TTTo2L2Nu = 19    (tt = 17/18/19 depending on the sample/generator)
#XJ     # ST_tW_top = 16
#XJ     # ST_tW_antitop = 15
#XJ 
#XJ 
#XJ 
#XJ ##### WgStarScale
#XJ 
#XJ # K factor (Data/Wg*) = 2.0 +/- 0.5
#XJ nuisances['WgStarScale']  = {
#XJ                'name'  : 'WgStarScale', 
#XJ                'type'  : 'lnN',
#XJ                'samples'  : {
#XJ                    'WgS' : '1.35',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
#XJ                    'VgS' : '1.35',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
#XJ                    },
#XJ                 }
#XJ 
#XJ 
#XJ 
#XJ #### Uncertainties on WW signal
#XJ ########################################################################
#XJ 
#XJ 
#XJ 
#XJ ##### ggWW and interference
#XJ 
#XJ nuisances['kfactggww']  = {
#XJ                'name'  : 'QCDscale_ggVV', #Guillelmo's name 
#XJ                'type'  : 'lnN',
#XJ                'samples'  : {
#XJ                    'ggWW' : '1.15',
#XJ                    },
#XJ               }
#XJ 
#XJ 
#XJ ##### WW shaping
#XJ 
#XJ 
#XJ nuisances['WWresum']  = {
#XJ                 'name'  : 'WWNNLO_resum',
#XJ                 'kind'  : 'weight',
#XJ                'type'  : 'shape',
#XJ                 'samples'  : {
#XJ                    'WW'   : ['(nllW_Rup/nllW)/1.011810', '(nllW_Rdown/nllW)/0.953619'],
#XJ #                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'], 
#XJ                    },
#XJ                'cuts'  : [
#XJ                  'ww_0jet_em',
#XJ                  'ww_top0jet_em',
#XJ                  'ww_1jet_em',
#XJ                  'ww_top1jet_em',
#XJ #                 'ww_Incl_em',
#XJ #                 'ww_topIncl_em',
#XJ #                 'ww_CR1_dy0jet_sf',
#XJ #                 'ww_CR2_dy0jet_sf',
#XJ #                 'ww_CR3_dy0jet_sf',
#XJ #                 'ww_CR1_dy1jet_sf',
#XJ #                 'ww_CR2_dy1jet_sf',
#XJ #                 'ww_CR3_dy1jet_sf',
#XJ                  
#XJ                 ]               
#XJ                
#XJ                }
#XJ 
#XJ 
#XJ nuisances['WWqscale']  = {
#XJ                 'name'  : 'WWNNLO_scale',
#XJ                 'kind'  : 'weight',
#XJ                 'type'  : 'shape',
#XJ                 'samples'  : {
#XJ                    'WW'   : ['(nllW_Qup/nllW)/0.996073', '(nllW_Qdown/nllW)/1.000986'],
#XJ                    },
#XJ                'cuts'  : [
#XJ                  'ww_0jet_em',
#XJ                  'ww_top0jet_em',
#XJ                  'ww_1jet_em',
#XJ                  'ww_top1jet_em',                 
#XJ #                 'ww_Incl_em',
#XJ #                 'ww_topIncl_em',
#XJ #                 'ww_CR1_dy0jet_sf',
#XJ #                 'ww_CR2_dy0jet_sf',
#XJ #                 'ww_CR3_dy0jet_sf',
#XJ #                 'ww_CR1_dy1jet_sf',
#XJ #                 'ww_CR2_dy1jet_sf',
#XJ #                 'ww_CR3_dy1jet_sf',
#XJ                 ] 
#XJ                 }
#XJ 
#XJ 
#XJ EWK_corr = ['1.0*(mll<600)+1.05*(mll>=600)','1.0*(mll<600)+1/1.05*(mll>=600)']
#XJ 
#XJ nuisances['EWK_corrections']  = {
#XJ     'name'  : 'EWK_corrections',
#XJ     'kind'  : 'weight',
#XJ     'type'  : 'shape',
#XJ     'samples'  : {
#XJ         'WW'      : EWK_corr,
#XJ         },
#XJ     'cuts'  : [
#XJ         'ww_0jet_em',
#XJ         'ww_1jet_em',
#XJ         #                 
#XJ         ]
#XJ 
#XJ     }
#XJ 
#XJ 
#XJ 
#XJ ################################ THEORETICAL UNCERTAINTIES  #################################
#XJ                              ###     Taken from ICHEP!      ###
#XJ 
#XJ 
#XJ 
#XJ 
#XJ ##### QCD scale
#XJ 
#XJ # https://twiki.cern.ch/twiki/bin/view/CMS/StandardModelCrossSectionsat13TeV
#XJ 
#XJ nuisances['QCDscale_VW']  = {
#XJ                'name'  : 'QCDscale_VW', 
#XJ                'samples'  : {
#XJ                    'VW' : '1.03',
#XJ                    },
#XJ                'type'  : 'lnN'
#XJ               }
#XJ 
#XJ 
#XJ 
#XJ from LatinoAnalysis.Tools.HiggsXSection  import *
#XJ HiggsXS = HiggsXSection()
#XJ 
#XJ 
#XJ nuisances['QCDscale_ggH']  = {
#XJ                'name'  : 'QCDscale_ggH', 
#XJ                'samples'  : {
#XJ                    'ggH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','scale','sm'),
#XJ                    'H_htt'   : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','scale','sm'),
#XJ                    },
#XJ                'type'  : 'lnN',
#XJ               }
#XJ 
#XJ 
#XJ 
#XJ nuisances['QCDscale_qqH']  = {
#XJ                'name'  : 'QCDscale_qqH', 
#XJ                'samples'  : {
#XJ                    'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','scale','sm'),
#XJ                    'qqH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','scale','sm'),
#XJ                    },
#XJ                'type'  : 'lnN',
#XJ               }
#XJ 
#XJ 
#XJ 
#XJ nuisances['QCDscale_WH']  = {
#XJ                'name'  : 'QCDscale_WH', 
#XJ                'samples'  : {
#XJ                    'WH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH','125.0','scale','sm'),
#XJ                    },
#XJ                'type'  : 'lnN',
#XJ               }
#XJ 
#XJ 
#XJ 
#XJ nuisances['QCDscale_ZH']  = {
#XJ                'name'  : 'QCDscale_ZH', 
#XJ                'samples'  : {
#XJ                    'ZH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH','125.0','scale','sm'),
#XJ                    },
#XJ                'type'  : 'lnN',
#XJ               }
#XJ 
#XJ 
#XJ 
#XJ nuisances['QCDscale_ggZH']  = {
#XJ                'name'  : 'QCDscale_ggZH', 
#XJ                'samples'  : {
#XJ                    'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.0','scale','sm'),                  
#XJ                    },
#XJ                'type'  : 'lnN',
#XJ               }
#XJ 
#XJ 
#XJ ##### QCD scale acceptance
#XJ 
#XJ nuisances['QCDscale_qqbar_accept']  = {
#XJ                'name'  : 'QCDscale_qqbar_accept', 
#XJ                'type'  : 'lnN',
#XJ                'samples'  : {
#XJ                    'qqH_hww' : '1.007',
#XJ                    'qqH_htt' : '1.007',
#XJ                    'WH_hww'  : '1.05',
#XJ                    'ZH_hww'  : '1.04',
#XJ                    'VZ'      : '1.029',
#XJ                    },
#XJ               }
#XJ 
#XJ 
#XJ 
#XJ nuisances['QCDscale_gg_accept']  = {
#XJ                'name'  : 'QCDscale_gg_accept', 
#XJ                'samples'  : {
#XJ                    'ggWW'    : '1.027',
#XJ                    'ggH_hww' : '1.027',
#XJ                    'ggH_htt' : '1.027',
#XJ                    'H_htt'   : '1.027',
#XJ                    'ggZH_hww': '1.027',                   
#XJ                    },
#XJ                'type'  : 'lnN',
#XJ               }
#XJ 
#XJ 
#XJ ##### PDF uncertainty
#XJ 
#XJ nuisances['pdf_gg']  = {
#XJ                'name'  : 'pdf_gg', 
#XJ                'samples'  : {
#XJ                    'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
#XJ                    'ggH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
#XJ                    'H_htt'   : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
#XJ                    'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.0','pdf','sm'),                   
#XJ                    },
#XJ                'type'  : 'lnN',
#XJ               }
#XJ 
#XJ 
#XJ nuisances['pdf_qqbar']  = {
#XJ                'name'  : 'pdf_qqbar', 
#XJ                'type'  : 'lnN',
#XJ                'samples'  : {
#XJ                    'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),
#XJ                    'qqH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),
#XJ                    'WH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH' ,'125.0','pdf','sm'),
#XJ                    'ZH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH' ,'125.0','pdf','sm'),
#XJ                    'VZ'      : '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
#XJ                    },
#XJ               }
#XJ 
#XJ 
#XJ 
#XJ ##### PDF acceptance uncertainty
#XJ 
#XJ nuisances['pdf_gg_accept']  = {
#XJ                'name'  : 'pdf_gg_accept', 
#XJ                'samples'  : {
#XJ                    'ggWW'    : '1.005',    
#XJ                    'ggH_hww' : '1.005',
#XJ                    'ggH_htt' : '1.005',
#XJ                    'H_htt'   : '1.005',
#XJ                    'ggZH_hww': '1.005', 
#XJ                    },
#XJ                'type'  : 'lnN',
#XJ               }
#XJ 
#XJ 
#XJ nuisances['pdf_qqbar_accept']  = {
#XJ                'name'  : 'pdf_qqbar_accept', 
#XJ                'type'  : 'lnN',
#XJ                'samples'  : {
#XJ                    'qqH_hww' : '1.011',
#XJ                    'qqH_htt' : '1.011',
#XJ                    'WH_hww'  : '1.007',
#XJ                    'ZH_hww'  : '1.012',
#XJ                    'VZ'      : '1.005',                   
#XJ                    },
#XJ               }
#XJ 
#XJ 
#XJ 
#XJ 
#XJ nuisances['UE0j']  = {
#XJ                'name'  : 'UEPS', 
#XJ                'type' : 'lnN',
#XJ                'samples'  : {
#XJ                    'ggH_hww' : '1.00685',
#XJ                    'qqH_hww' : '1.00685',
#XJ                    'WW'     : '1.00355',
#XJ                    'ggWW'    : '1.00355',
#XJ                },
#XJ                'cuts'  : [
#XJ                  'ww_0jet_em',
#XJ #                 'ww_top0jet_em', 
#XJ #                 'ww_CR1_dy0jet_sf',
#XJ #                 'ww_CR2_dy0jet_sf',
#XJ #                 'ww_CR3_dy0jet_sf',
#XJ                  ],
#XJ             }
#XJ 
#XJ 
#XJ 
#XJ 
#XJ # nuisances['UE']  = {
#XJ #                'name'  : 'PSUE', 
#XJ #                'type' : 'lnN',
#XJ #                'samples'  : {
#XJ #                    'ggH_hww' : '1.0435',
#XJ #                    'qqH_hww' : '1.0435',
#XJ #                    'WW'     : '1.005',
#XJ #                    'ggWW'    : '1.005',
#XJ #                },
#XJ #                'cuts'  : [
#XJ #                  'ww_Incl_em',
#XJ #                  'ww_topIncl_em', 
#XJ #                  ],
#XJ #             }
#XJ 
#XJ 
#XJ 
#XJ 
#XJ nuisances['UE1j']  = {
#XJ                'name'  : 'PSUE', 
#XJ                'type' : 'lnN',
#XJ                'samples'  : {
#XJ                    'ggH_hww' : '1.0188',
#XJ                    'qqH_hww' : '1.0188',
#XJ                    'WW'     : '1.0052',
#XJ                    'ggWW'    : '1.0052',
#XJ                },
#XJ                'cuts'  : [
#XJ                  'ww_1jet_em',
#XJ #                 'ww_top1jet_em', 
#XJ #                 'ww_CR1_dy1jet_sf',
#XJ #                 'ww_CR2_dy1jet_sf',
#XJ #                 'ww_CR3_dy1jet_sf',
#XJ                  ],
#XJ             }
#XJ 
#XJ 
#XJ nuisances['pu_syst0j']  = {
#XJ                'name'  : 'pu_syst', 
#XJ                'kind'  : 'tree',
#XJ                'type' : 'shape',
#XJ                'samples'  : {
#XJ                    'ggWW'              : ['1','1'],
#XJ                    'WW'                : ['1.0203','0.9857'],
#XJ                    'DY'                : ['1','1'],
#XJ                    'top'               : ['1','1'],
#XJ                    'VZ'                : ['1','1'],
#XJ                    'VVV'               : ['1','1'],
#XJ                    'Vg'                : ['1','1'],
#XJ                    'VgS'               : ['1','1'],
#XJ                    'ggH_hww'           : ['1','1'],
#XJ                    'qqH_hww'           : ['1','1'],
#XJ                    'WH_hww'            : ['1','1'],
#XJ                    'ZH_hww'            : ['1','1'],
#XJ                    'ggZH_hww'          : ['1','1'],
#XJ                    'bbH_hww'           : ['1','1'],
#XJ                    'H_htt'             : ['1','1'],
#XJ                },
#XJ                'cuts'  : [
#XJ                  'ww_0jet_em',
#XJ                  ],
#XJ                'folderUp'   : '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__PUup__wwSel/',
#XJ                'folderDown' : '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__PUdo__wwSel/',
#XJ             }
#XJ 
#XJ nuisances['pu_syst1j']  = {
#XJ                'name'  : 'pu_syst', 
#XJ                'kind'  : 'tree',
#XJ                'type' : 'shape',
#XJ                'samples'  : {
#XJ                    'ggWW'              : ['1','1'],
#XJ                    'WW'                : ['1.00672','0.9929'],
#XJ                    'DY'                : ['1','1'],
#XJ                    'top'               : ['1','1'],
#XJ                    'VZ'                : ['1','1'],
#XJ                    'VVV'               : ['1','1'],
#XJ                    'Vg'                : ['1','1'],
#XJ                    'VgS'               : ['1','1'],
#XJ                    'ggH_hww'           : ['1','1'],
#XJ                    'qqH_hww'           : ['1','1'],
#XJ                    'WH_hww'            : ['1','1'],
#XJ                    'ZH_hww'            : ['1','1'],
#XJ                    'ggZH_hww'          : ['1','1'],
#XJ                    'bbH_hww'           : ['1','1'],
#XJ                    'H_htt'             : ['1','1'],
#XJ                },
#XJ                'cuts'  : [
#XJ                  'ww_1jet_em',
#XJ                  ],
#XJ                'folderUp'   : '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__PUup__wwSel/',
#XJ                'folderDown' : '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__PUdo__wwSel/',
#XJ             }
#XJ 
#XJ 
#XJ 
#XJ # nuisances['UE_0jet']  = {
#XJ #                'name'  : 'UE_0jet', 
#XJ #                'kind'  : 'tree',
#XJ #                'type' : 'shape',
#XJ #                'samples'  : {
#XJ #                    'ggH_hww' : ['0.968648','0.929750'],
#XJ #                    #'qqH_hww' : ['1','1'],
#XJ #                     'WW'     : ['1.03529','1.00237'],
#XJ #                    #'ggWW'    : ['1','1'],
#XJ #                },
#XJ #                'cuts'  : [
#XJ #                  'ww_0jet_em',
#XJ #                  'ww_top0jet_em', 
#XJ #                  ],
#XJ #                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEup'+skim,
#XJ #                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEdo'+skim,
#XJ #             }
#XJ 
#XJ 
#XJ # nuisances['UE_1jet']  = {
#XJ #                'name'  : 'UE_1jet', 
#XJ #                'kind'  : 'tree',
#XJ #                'type' : 'shape',
#XJ #                'samples'  : {
#XJ #                    'ggH_hww' : ['1.19510','1.17273'],
#XJ #                    #'qqH_hww' : ['1','1'],
#XJ #                     'WW'     : ['1.02032','0.988838'],
#XJ #                    #'ggWW'    : ['1','1'],
#XJ #                },
#XJ #                'cuts'  : [
#XJ #                  'ww_1jet_em',
#XJ #                  'ww_top1jet_em',                 
#XJ #                  ],
#XJ #                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEup'+skim,
#XJ #                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEdo'+skim,
#XJ #             }
#XJ 
#XJ 
#XJ # nuisances['UE_Incl']  = {
#XJ #                'name'  : 'UE_Incl', 
#XJ #                'kind'  : 'tree',
#XJ #                'type' : 'shape',
#XJ #                'samples'  : {
#XJ #                    'ggH_hww' : ['1.08648','1.06132'],
#XJ #                    #'qqH_hww' : ['1','1'],
#XJ #                     'WW'     : ['1.02146','0.995482'],
#XJ #                    #'ggWW'    : ['1','1'],
#XJ #                },
#XJ #                'cuts'  : [
#XJ #                  'ww_Incl_em',
#XJ #                  'ww_topIncl_em',                 
#XJ #                  ],
#XJ #                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEup'+skim,
#XJ #                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEdo'+skim,
#XJ #             }
#XJ 
#XJ 
#XJ 
#XJ ################################ STATISTICAL UNCERTAINTIES  #################################
#XJ 
#XJ ##### Statistical fluctuation
#XJ # # on MC/data
#XJ # # "stat" is a special word to identify this nuisance
#XJ nuisances['stat']  = {
#XJ     # apply to the following samples: name of samples here must match keys in samples.py
#XJ     'samples'  : {
#XJ         
#XJ         'ttbar': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'singletop': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'top': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'DY': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'ggWW': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'ggWW_Int': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'WW': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'VZ': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'WZ': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'VVV': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'H_hww': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'ggH_hww': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'qqH_hww': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'WH_hww': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'ZH_hww': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'H_htt': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'ggH_htt': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'qqH_htt': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'WH_htt': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'ZH_htt': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'ggZH_hww': {
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'Fake': {  # needed? YES?
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'Vg': {  
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         'VgS': {  
#XJ             'typeStat' : 'bbb',
#XJ             },
#XJ         
#XJ         },
#XJ     'type'  : 'shape'
#XJ     }
#XJ 
#XJ 
