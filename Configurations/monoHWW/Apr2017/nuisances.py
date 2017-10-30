# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py 

################################ EXPERIMENTAL UNCERTAINTIES  #################################

ZpMasses={"600","800","1000","1200","1400","1700","2000","2500"}
A0Masses={"300","400","500","600","700","800"}
        

#### Control Regions 

nuisances['QCDscale_CRSR_accept_dytt']  = {
    'name'  : 'QCDscale_CRSR_accept_dytt', 
    'type'  : 'lnN',
    'samples'  : {
        'DY' : '1.02',
        },
    'cuts'  : [
        'monoH_MVA_DYtt_em'
        ]               
    }

nuisances['QCDscale_CRSR_accept_top']  = {
    'name'  : 'QCDscale_CRSR_accept_top', 
    'type'  : 'lnN',
    'samples'  : {
        'top' : '1.01',
        },
    'cuts'  : [
        'monoH_MVA_Top_em'
        ]               
    }


#### Luminosity

nuisances['lumi']  = {
    'name'  : 'lumi_13TeV',
    'samples'  : {
        'DY'       : '1.025',    # Data-driven
        'top'      : '1.025',    # Data-driven    
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
        'monoH_ZB_10000_1000' : '1.025',
        'monoH_ZB_10000_500'  : '1.025',
        'monoH_ZB_10000_50'   : '1.025',
        'monoH_ZB_2000_1'     : '1.025',
        'monoH_ZB_1995_1000'  : '1.025',
        'monoH_ZB_1000_1000'  : '1.025',
        'monoH_ZB_1000_150'   : '1.025',
        'monoH_ZB_1000_1'     : '1.025',
        'monoH_ZB_995_500'    : '1.025',
        'monoH_ZB_500_500'    : '1.025',
        'monoH_ZB_500_150'    : '1.025',
        'monoH_ZB_500_1'      : '1.025',
        'monoH_ZB_300_50'     : '1.025',
        'monoH_ZB_300_1'      : '1.025',
        'monoH_ZB_295_150'    : '1.025',
        'monoH_ZB_200_150'    : '1.025',
        'monoH_ZB_200_50'     : '1.025',
        'monoH_ZB_200_1'      : '1.025',
        'monoH_ZB_100_10'     : '1.025',
        'monoH_ZB_100_1'      : '1.025',
        'monoH_ZB_95_50'      : '1.025',
        'monoH_ZB_50_50'      : '1.025',
        'monoH_ZB_50_10'      : '1.025',
        'monoH_ZB_50_1'       : '1.025',
        'monoH_ZB_20_1'       : '1.025',
        'monoH_ZB_15_10'      : '1.025',
        'monoH_ZB_10_1000'    : '1.025',
        'monoH_ZB_10_500'     : '1.025',
        'monoH_ZB_10_150'     : '1.025',
        'monoH_ZB_10_50'      : '1.025',
        'monoH_ZB_15_10'      : '1.025',
        'monoH_ZB_10_1'       : '1.025',
        },
    'type'  : 'lnN',
    }
for mZp in ZpMasses:
    for mA0 in A0Masses :
        nuisances['lumi']['samples'].update({'monoH_' + mZp + '_' + mA0:'1.025'})
       
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
    'name'  : 'ICHEP_btag_bc',
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
        'monoH_ZB_10000_1000' : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_10000_500'  : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_10000_50'   : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_2000_1'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_1995_1000'  : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_1000_1000'  : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_1000_150'   : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_1000_1'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_995_500'    : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_500_500'    : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_500_150'    : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_500_1'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_300_50'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_300_1'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_295_150'    : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_200_150'    : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_200_50'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_200_1'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_100_10'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_100_1'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_95_50'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_50_50'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_50_10'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_50_1'       : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_20_1'       : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_15_10'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_10_1000'    : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_10_500'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_10_150'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_10_50'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_15_10'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        'monoH_ZB_10_1'       : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
        }
    }
for mZp in ZpMasses:
    for mA0 in A0Masses :
        nuisances['btagbc']['samples'].update({'monoH_' + mZp + '_' + mA0: ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')']})
            
            
nuisances['btagudsg']  = {
    'name'  : 'ICHEP_btag_udsg',
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
        'monoH_ZB_10000_1000' : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_10000_500'  : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_10000_50'   : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_2000_1'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_1995_1000'  : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_1000_1000'  : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_1000_150'   : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_1000_1'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_995_500'    : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_500_500'    : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_500_150'    : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_500_1'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_300_50'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_300_1'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_295_150'    : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_200_150'    : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_200_50'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_200_1'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_100_10'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_100_1'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_95_50'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_50_50'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_50_10'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_50_1'       : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_20_1'       : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_15_10'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_10_1000'    : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_10_500'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_10_150'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_10_50'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_15_10'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        'monoH_ZB_10_1'       : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
        }
    }
for mZp in ZpMasses:
    for mA0 in A0Masses :
        nuisances['btagudsg']['samples'].update({'monoH_' + mZp + '_' + mA0: ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')']})


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
        'DY'      : trig_syst,
        'VVV'     : trig_syst,
        'VZ'      : trig_syst,
        'ggWW'    : trig_syst,
        'WW'      : trig_syst,
        'top'     : trig_syst,
        'Vg'      : trig_syst,
        'VgS'     : trig_syst,
        'ggH_hww' : trig_syst,
        'qqH_hww' : trig_syst,
        'WH_hww'  : trig_syst,
        'ZH_hww'  : trig_syst,
        'ggZH_hww': trig_syst,
        'bbH_hww' : trig_syst,
        'H_htt'   : trig_syst,
        'monoH_ZB_10000_1000' : trig_syst,
        'monoH_ZB_10000_500'  : trig_syst,
        'monoH_ZB_10000_50'   : trig_syst,
        'monoH_ZB_2000_1'     : trig_syst,
        'monoH_ZB_1995_1000'  : trig_syst,
        'monoH_ZB_1000_1000'  : trig_syst,
        'monoH_ZB_1000_150'   : trig_syst,
        'monoH_ZB_1000_1'     : trig_syst,
        'monoH_ZB_995_500'    : trig_syst,
        'monoH_ZB_500_500'    : trig_syst,
        'monoH_ZB_500_150'    : trig_syst,
        'monoH_ZB_500_1'      : trig_syst,
        'monoH_ZB_300_50'     : trig_syst,
        'monoH_ZB_300_1'      : trig_syst,
        'monoH_ZB_295_150'    : trig_syst,
        'monoH_ZB_200_150'    : trig_syst,
        'monoH_ZB_200_50'     : trig_syst,
        'monoH_ZB_200_1'      : trig_syst,
        'monoH_ZB_100_10'     : trig_syst,
        'monoH_ZB_100_1'      : trig_syst,
        'monoH_ZB_95_50'      : trig_syst,
        'monoH_ZB_50_50'      : trig_syst,
        'monoH_ZB_50_10'      : trig_syst,
        'monoH_ZB_50_1'       : trig_syst,
        'monoH_ZB_20_1'       : trig_syst,
        'monoH_ZB_15_10'      : trig_syst,
        'monoH_ZB_10_1000'    : trig_syst,
        'monoH_ZB_10_500'     : trig_syst,
        'monoH_ZB_10_150'     : trig_syst,
        'monoH_ZB_10_50'      : trig_syst,
        'monoH_ZB_15_10'      : trig_syst,
        'monoH_ZB_10_1'       : trig_syst,
        },
    }
for mZp in ZpMasses:
    for mA0 in A0Masses :
        nuisances['trigg']['samples'].update({'monoH_' + mZp + '_' + mA0: trig_syst})


# ##### Electron Efficiency and energy scale

id_syst_ele = [ 'LepSF'+Nlep+'l__ele_'+eleWP+'__Up' , 'LepSF'+Nlep+'l__ele_'+eleWP+'__Do' ]

nuisances['idiso_ele']  = {
    'name'  : 'idiso_ele',
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
        'monoH_ZB_10000_1000' : id_syst_ele ,
        'monoH_ZB_10000_500'  : id_syst_ele ,
        'monoH_ZB_10000_50'   : id_syst_ele ,
        'monoH_ZB_2000_1'     : id_syst_ele ,
        'monoH_ZB_1995_1000'  : id_syst_ele ,
        'monoH_ZB_1000_1000'  : id_syst_ele ,
        'monoH_ZB_1000_150'   : id_syst_ele ,
        'monoH_ZB_1000_1'     : id_syst_ele ,
        'monoH_ZB_995_500'    : id_syst_ele ,
        'monoH_ZB_500_500'    : id_syst_ele ,
        'monoH_ZB_500_150'    : id_syst_ele ,
        'monoH_ZB_500_1'      : id_syst_ele ,
        'monoH_ZB_300_50'     : id_syst_ele ,
        'monoH_ZB_300_1'      : id_syst_ele ,
        'monoH_ZB_295_150'    : id_syst_ele ,
        'monoH_ZB_200_150'    : id_syst_ele ,
        'monoH_ZB_200_50'     : id_syst_ele ,
        'monoH_ZB_200_1'      : id_syst_ele ,
        'monoH_ZB_100_10'     : id_syst_ele ,
        'monoH_ZB_100_1'      : id_syst_ele ,
        'monoH_ZB_95_50'      : id_syst_ele ,
        'monoH_ZB_50_50'      : id_syst_ele ,
        'monoH_ZB_50_10'      : id_syst_ele ,
        'monoH_ZB_50_1'       : id_syst_ele ,
        'monoH_ZB_20_1'       : id_syst_ele ,
        'monoH_ZB_15_10'      : id_syst_ele ,
        'monoH_ZB_10_1000'    : id_syst_ele ,
        'monoH_ZB_10_500'     : id_syst_ele ,
        'monoH_ZB_10_150'     : id_syst_ele ,
        'monoH_ZB_10_50'      : id_syst_ele ,
        'monoH_ZB_15_10'      : id_syst_ele ,
        'monoH_ZB_10_1'       : id_syst_ele ,
        },
    }
for mZp in ZpMasses:
    for mA0 in A0Masses :
        nuisances['idiso_ele']['samples'].update({'monoH_' + mZp + '_' + mA0: id_syst_ele})


# nuisances['electronpt']  = {
#                 'name'  : 'scale_e',
#                 'kind'  : 'tree',
#                 'type'  : 'shape',
#                 'samples'  : {
#                    'DY'                : ['1','1'],
#                    'ggWW'              : ['1','1'],
#                    'WW'                : ['1','1'],
#                    'top'               : ['1','1'],
#                    'VZ'                : ['1','1'],
#                    'VVV'               : ['1','1'],
#                    'Vg'                : ['1','1'],
#                    'VgS'               : ['1','1'],
#                    'ggH_hww'           : ['1','1'],
#                    'qqH_hww'           : ['1','1'],
#                    'WH_hww'            : ['1','1'],
#                    'ZH_hww'            : ['1','1'],
#                    'ggZH_hww'          : ['1','1'],
#                    'bbH_hww'           : ['1','1'],
#                    'H_htt'             : ['1','1'],
#                    'monoH_ZB_10000_50' : ['1','1'],
#                    'monoH_ZB_10000_500': ['1','1'],
#                    'monoH_ZB_1000_1'   : ['1','1'],
#                    'monoH_ZB_1000_1000': ['1','1'],
#                    'monoH_ZB_1000_150' : ['1','1'],
#                    'monoH_ZB_995_500'  : ['1','1'],
#                    'monoH_ZB_100_1'    : ['1','1'],
#                    'monoH_ZB_100_10'   : ['1','1'],
#                    'monoH_ZB_10_1'     : ['1','1'],
#                    'monoH_ZB_10_1000'  : ['1','1'],
#                    'monoH_ZB_10_50'    : ['1','1'],
#                    'monoH_ZB_10_500'   : ['1','1'],
#                    'monoH_ZB_15_10'    : ['1','1'],
#                    'monoH_ZB_200_150'  : ['1','1'],
#                    'monoH_ZB_300_1'    : ['1','1'],
#                    'monoH_ZB_300_50'   : ['1','1'],
#                    'monoH_ZB_500_150'  : ['1','1'],
#                    'monoH_ZB_500_500'  : ['1','1'],
#                    'monoH_ZB_50_1'     : ['1','1'],
#                    'monoH_ZB_50_10'    : ['1','1'],
#                    'monoH_ZB_50_50'    : ['1','1'],
#                  },
#                 'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__LepElepTup'+skim,
#                 'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__LepElepTdo'+skim,
# }
# for mZp in ZpMasses:
#     for mA0 in A0Masses :
#         nuisances['electronpt']['samples'].update({'monoH_' + mZp + '_' + mA0: ['1','1']})


##### Muon Efficiency and energy scale

id_syst_mu = [ 'LepSF'+Nlep+'l__mu_'+muWP+'__Up' , 'LepSF'+Nlep+'l__mu_'+muWP+'__Do' ]

nuisances['idiso_mu']  = {
    'name'  : 'idiso_mu',
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
        'monoH_ZB_10000_1000' : id_syst_mu,
        'monoH_ZB_10000_500'  : id_syst_mu,
        'monoH_ZB_10000_50'   : id_syst_mu,
        'monoH_ZB_2000_1'     : id_syst_mu,
        'monoH_ZB_1995_1000'  : id_syst_mu,
        'monoH_ZB_1000_1000'  : id_syst_mu,
        'monoH_ZB_1000_150'   : id_syst_mu,
        'monoH_ZB_1000_1'     : id_syst_mu,
        'monoH_ZB_995_500'    : id_syst_mu,
        'monoH_ZB_500_500'    : id_syst_mu,
        'monoH_ZB_500_150'    : id_syst_mu,
        'monoH_ZB_500_1'      : id_syst_mu,
        'monoH_ZB_300_50'     : id_syst_mu,
        'monoH_ZB_300_1'      : id_syst_mu,
        'monoH_ZB_295_150'    : id_syst_mu,
        'monoH_ZB_200_150'    : id_syst_mu,
        'monoH_ZB_200_50'     : id_syst_mu,
        'monoH_ZB_200_1'      : id_syst_mu,
        'monoH_ZB_100_10'     : id_syst_mu,
        'monoH_ZB_100_1'      : id_syst_mu,
        'monoH_ZB_95_50'      : id_syst_mu,
        'monoH_ZB_50_50'      : id_syst_mu,
        'monoH_ZB_50_10'      : id_syst_mu,
        'monoH_ZB_50_1'       : id_syst_mu,
        'monoH_ZB_20_1'       : id_syst_mu,
        'monoH_ZB_15_10'      : id_syst_mu,
        'monoH_ZB_10_1000'    : id_syst_mu,
        'monoH_ZB_10_500'     : id_syst_mu,
        'monoH_ZB_10_150'     : id_syst_mu,
        'monoH_ZB_10_50'      : id_syst_mu,
        'monoH_ZB_15_10'      : id_syst_mu,
        'monoH_ZB_10_1'       : id_syst_mu,
        },
    }
for mZp in ZpMasses:
    for mA0 in A0Masses :
        nuisances['idiso_mu']['samples'].update({'monoH_' + mZp + '_' + mA0: id_syst_mu})


# nuisances['muonpt']  = {
#                 'name'  : 'scale_m',
#                 'kind'  : 'tree',
#                 'type'  : 'shape',
#                 'samples'  : {
#                    'ggWW'              : ['1','1'],
#                    'WW'                : ['1','1'],
#                    'DY'                : ['1','1'],
#                    'top'               : ['1','1'],
#                    'VZ'                : ['1','1'],
#                    'VVV'               : ['1','1'],
#                    'Vg'                : ['1','1'],
#                    'VgS'               : ['1','1'],
#                    'ggH_hww'           : ['1','1'],
#                    'qqH_hww'           : ['1','1'],
#                    'WH_hww'            : ['1','1'],
#                    'ZH_hww'            : ['1','1'],
#                    'ggZH_hww'          : ['1','1'],
#                    'bbH_hww'           : ['1','1'],
#                    'H_htt'             : ['1','1'],
#                    'monoH_ZB_10000_50' : ['1','1'],
#                    'monoH_ZB_10000_500': ['1','1'],
#                    'monoH_ZB_1000_1'   : ['1','1'],
#                    'monoH_ZB_1000_1000': ['1','1'],
#                    'monoH_ZB_1000_150' : ['1','1'],
#                    'monoH_ZB_995_500'  : ['1','1'],
#                    'monoH_ZB_100_1'    : ['1','1'],
#                    'monoH_ZB_100_10'   : ['1','1'],
#                    'monoH_ZB_10_1'     : ['1','1'],
#                    'monoH_ZB_10_1000'  : ['1','1'],
#                    'monoH_ZB_10_50'    : ['1','1'],
#                    'monoH_ZB_10_500'   : ['1','1'],
#                    'monoH_ZB_15_10'    : ['1','1'],
#                    'monoH_ZB_200_150'  : ['1','1'],
#                    'monoH_ZB_300_1'    : ['1','1'],
#                    'monoH_ZB_300_50'   : ['1','1'],
#                    'monoH_ZB_500_150'  : ['1','1'],
#                    'monoH_ZB_500_500'  : ['1','1'],
#                    'monoH_ZB_50_1'     : ['1','1'],
#                    'monoH_ZB_50_10'    : ['1','1'],
#                    'monoH_ZB_50_50'    : ['1','1'],
#                 },
#                 'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__LepMupTup'+skim,
#                 'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__LepMupTdo'+skim,
# }
# for mZp in ZpMasses:
#     for mA0 in A0Masses :
#         nuisances['muonpt']['samples'].update({'monoH_' + mZp + '_' + mA0: ['1','1']})


##### Jet energy scale

# nuisances['jes']  = {
#                 'name'  : 'scale_j',
#                 'kind'  : 'tree',
#                 'type'  : 'shape',
#                 'samples'  : {
#                    'ggWW' :['1', '1'],
#                    'WW' :  ['1', '1'],
#                    'DY' :  ['1', '1'],
#                    'top' : ['1', '1'],
#                    'VZ' :  ['1', '1'],
#                    'VVV' : ['1', '1'],
#                    'Vg' : ['1', '1'],
#                    'VgS': ['1', '1'],
#                    'ggH_hww' : ['1', '1'],
#                    'qqH_hww' : ['1', '1'],
#                    'WH_hww' :  ['1', '1'],
#                    'ZH_hww' :  ['1', '1'],
#                    'ggZH_hww':  ['1', '1'],
#                    'bbH_hww' : ['1', '1'],
#                    'H_htt' : ['1', '1'],
#                    'monoH_ZB_10000_50' : ['1','1'],
#                    'monoH_ZB_10000_500': ['1','1'],
#                    'monoH_ZB_1000_1'   : ['1','1'],
#                    'monoH_ZB_1000_1000': ['1','1'],
#                    'monoH_ZB_1000_150' : ['1','1'],
#                    'monoH_ZB_995_500'  : ['1','1'],
#                    'monoH_ZB_100_1'    : ['1','1'],
#                    'monoH_ZB_100_10'   : ['1','1'],
#                    'monoH_ZB_10_1'     : ['1','1'],
#                    'monoH_ZB_10_1000'  : ['1','1'],
#                    'monoH_ZB_10_50'    : ['1','1'],
#                    'monoH_ZB_10_500'   : ['1','1'],
#                    'monoH_ZB_15_10'    : ['1','1'],
#                    'monoH_ZB_200_150'  : ['1','1'],
#                    'monoH_ZB_300_1'    : ['1','1'],
#                    'monoH_ZB_300_50'   : ['1','1'],
#                    'monoH_ZB_500_150'  : ['1','1'],
#                    'monoH_ZB_500_500'  : ['1','1'],
#                    'monoH_ZB_50_1'     : ['1','1'],
#                    'monoH_ZB_50_10'    : ['1','1'],
#                    'monoH_ZB_50_50'    : ['1','1'],
#                 },
#                 'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__JESup'+skim,
#                 'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__JESdo'+skim,
# }
# for mZp in ZpMasses:
#     for mA0 in A0Masses :
#         nuisances['jes']['samples'].update({'monoH_' + mZp + '_' + mA0: ['1','1']})


##### MET energy scale

# nuisances['met']  = {
#                 'name'  : 'scale_met',
#                 'kind'  : 'tree',
#                 'type'  : 'shape',
#                 'samples'  : {
#                    'ggWW'              : ['1','1'],
#                    'WW'                : ['1','1'],
#                    'DY'                : ['1','1'],
#                    'top'               : ['1','1'],
#                    'VZ'                : ['1','1'],
#                    'VVV'               : ['1','1'],
#                    'Vg'                : ['1','1'],
#                    'VgS'               : ['1','1'],
#                    'ggH_hww'           : ['1','1'],
#                    'qqH_hww'           : ['1','1'],
#                    'WH_hww'            : ['1','1'],
#                    'ZH_hww'            : ['1','1'],
#                    'ggZH_hww'          : ['1','1'],
#                    'bbH_hww'           : ['1','1'],
#                    'H_htt'             : ['1','1'],
#                    'monoH_ZB_10000_50' : ['1','1'],
#                    'monoH_ZB_10000_500': ['1','1'],
#                    'monoH_ZB_1000_1'   : ['1','1'],
#                    'monoH_ZB_1000_1000': ['1','1'],
#                    'monoH_ZB_1000_150' : ['1','1'],
#                    'monoH_ZB_995_500'  : ['1','1'],
#                    'monoH_ZB_100_1'    : ['1','1'],
#                    'monoH_ZB_100_10'   : ['1','1'],
#                    'monoH_ZB_10_1'     : ['1','1'],
#                    'monoH_ZB_10_1000'  : ['1','1'],
#                    'monoH_ZB_10_50'    : ['1','1'],
#                    'monoH_ZB_10_500'   : ['1','1'],
#                    'monoH_ZB_15_10'    : ['1','1'],
#                    'monoH_ZB_200_150'  : ['1','1'],
#                    'monoH_ZB_300_1'    : ['1','1'],
#                    'monoH_ZB_300_50'   : ['1','1'],
#                    'monoH_ZB_500_150'  : ['1','1'],
#                    'monoH_ZB_500_500'  : ['1','1'],
#                    'monoH_ZB_50_1'     : ['1','1'],
#                    'monoH_ZB_50_10'    : ['1','1'],
#                    'monoH_ZB_50_50'    : ['1','1'],
#                 },
#                 'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__METup'+skim,
#                 'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__METdo'+skim,
# }
# for mZp in ZpMasses:
#     for mA0 in A0Masses :
#         nuisances['met']['samples'].update({'monoH_' + mZp + '_' + mA0: ['1','1']})


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



nuisances['QCDscale_ggH_monoH']  = {
    'name'  : 'QCDscale_ggH_monoH', 
    'samples'  : {
        'ggH_hww' : '1.08539',
        },
    'type'  : 'lnN',
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


##### ggWW and interference

nuisances['kfactggww']  = {
               'name'  : 'kfactggww', 
               'type'  : 'lnN',
               'samples'  : {
                   'ggWW' : '1.15',
                   },
              }


##### WW shaping

nuisances['WWresumMonoH']  = {
    'name'  : 'WWresumMonoH',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
        },
    }

nuisances['WWqscaleMonoH']  = {
    'name'  : 'WWqscaleMonoH',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
        },
    }


##### top pT reweighting (variables dataset, topLHEpt and antitopLHEpt needed!)

nuisances['toppTrw'] = {
    'name'    : 'toppTrw',
    'kind'    : 'weight',
    'type'    : 'shape',
    'samples' : {
        'top' : [
            '((dataset==17 || dataset==18 || dataset==19) * exp(0.0615 - 0.00025 * (topLHEpt + antitopLHEpt))', #up
            '1'
##            '((dataset==17 || dataset==18 || dataset==19) * (1 - sqrt(exp(0.123 - 0.0005 * (topLHEpt + antitopLHEpt)))', #down
            ],
        },
    } 
#_event_weight_Toppt *= sqrt(exp(0.123 - 0.0005 * (topLHEpt + antitopLHEpt)));
# exp(0.0615 - 0.00025*(pT(t)+pT(tbar))/GeV)

##### tt/tW ratio ('dataset' variable missing)

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
    
    
##### Parton shower

# nuisances['PS']  = {
#                 'name'  : 'PS', 
#                 'kind'  : 'tree',
#                 'type'  : 'shape',
#                 'samples'  : {
#                    'WW' :  ['1./1.03295', '1.'],  # latino_WWTo2L2NuHerwigPS.root moved with different name in __PS folder
#                 },
#                 'folderUp'   : 'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__monohSel__muccaMonoHem__PS/',
#                 'folderDown' : 'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__monohSel__muccaMonoHem/' 
#                 }


nuisances['PSICHEP']  = {
                'name'  : 'PS_ICHEP', 
                'type'  : 'lnN',
                'samples'  : {
                   'ggH_hww' : '1.02',
                   'qqH_hww' : '1.02',
                },
              }



##### Underlying event

nuisances['UEICHEP']  = {
                'name'  : 'UE_ICHEP', 
                'type'  : 'lnN',
                'samples'  : {
                   'ggH_hww' : '1.03',
                   'qqH_hww' : '1.03',
                },
              }


##### WgStarScale

# K factor (Data/Wg*) = 2.0 +/- 0.5
nuisances['WgStarScale']  = {
               'name'  : 'WgStarScale', 
               'type'  : 'lnN',
               'samples'  : {
                   'WgS' : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   'VgS' : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   },
                }
 

##### Data driven backgrounds normalizations

nuisances['DYttnorm']  = {
    'name'  : 'DYttnorm',
    'samples'  : {
        'DY' : '1.00',
        },
    'type'  : 'rateParam',
    }


nuisances['WWnorm']  = {
    'name'  : 'WWnorm',
    'samples'  : {
        'WW' : '1.00',
        },
    'type'  : 'rateParam',
    }


nuisances['Topnorm']  = {
    'name'  : 'Topnorm',
    'samples'  : {
        'top' : '1.00',
        },
    'type'  : 'rateParam',
    }


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
for mZp in ZpMasses:
    for mA0 in A0Masses :
        nuisances['stat']['samples'].update({'monoH_' + mZp + '_' + mA0:{'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_10000_1000' : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_10000_500'  : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_10000_50'   : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_2000_1'     : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_1995_1000'  : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_1000_1000'  : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_1000_150'   : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_1000_1'     : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_995_500'    : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_500_500'    : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_500_150'    : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_500_1'      : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_300_50'     : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_300_1'      : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_295_150'    : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_200_150'    : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_200_50'     : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_200_1'      : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_100_10'     : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_100_1'      : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_95_50'      : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_50_50'      : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_50_10'      : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_50_1'       : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_20_1'       : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_15_10'      : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_10_1000'    : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_10_500'     : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_10_150'     : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_10_50'      : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_15_10'      : {'typeStat' : 'bbb',}})
        nuisances['stat']['samples'].update({'monoH_ZB_10_1'       : {'typeStat' : 'bbb',}})
