# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py 

################################ EXPERIMENTAL UNCERTAINTIES  #################################

ZpMasses={"800","1000","1200","1700","2000"}
A0Masses={"300"}#,"400","500","600","700","800"}
        
#### Luminosity

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV',
               'samples'  : {
                   'DY'       : '1.023',    
                   'top'      : '1.023',    
                   'WW'       : '1.023',    
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
                   'monoH_ZB_10000_50' : '1.023',
                   'monoH_ZB_10000_500': '1.023',
                   'monoH_ZB_1000_1'   : '1.023',
                   'monoH_ZB_1000_1000': '1.023',
                   'monoH_ZB_1000_150' : '1.023',
                   'monoH_ZB_995_500'  : '1.023',
                   'monoH_ZB_100_1'    : '1.023',
                   'monoH_ZB_100_10'   : '1.023',
                   'monoH_ZB_10_1'     : '1.023',
                   'monoH_ZB_10_1000'  : '1.023',
                   'monoH_ZB_10_50'    : '1.023',
                   'monoH_ZB_10_500'   : '1.023',
                   'monoH_ZB_15_10'    : '1.023',
                   'monoH_ZB_200_150'  : '1.023',
                   'monoH_ZB_300_1'    : '1.023',
                   'monoH_ZB_300_50'   : '1.023',
                   'monoH_ZB_500_150'  : '1.023',
                   'monoH_ZB_500_500'  : '1.023',
                   'monoH_ZB_50_1'     : '1.023',
                   'monoH_ZB_50_10'    : '1.023',
                   'monoH_ZB_50_50'    : '1.023',
                   },
               'type'  : 'lnN',
              }
for mZp in ZpMasses:
    for mA0 in A0Masses :
        nuisances['lumi']['samples'].update({'monoH_' + mZp + '_' + mA0:'1.023'})

#### FAKES

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
                   'Fake'      : ['(fakeW2l0jElUp*(njet==0)+fakeW2l1jElUp*(njet==1)+fakeW2l2jElUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
                                  '(fakeW2l0jElDown*(njet==0)+fakeW2l1jElDown*(njet==1)+fakeW2l2jElDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
                }
}

nuisances['fake_ele_stat']  = {
                'name'  : 'fake_ele_stat_hww',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'Fake'      : ['(fakeW2l0jstatElUp*(njet==0)+fakeW2l1jstatElUp*(njet==1)+fakeW2l2jstatElUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
                                  '(fakeW2l0jstatElDown*(njet==0)+fakeW2l1jstatElDown*(njet==1)+fakeW2l2jstatElDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
                }
}

nuisances['fake_mu']  = {
                'name'  : 'fake_mu_hww',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'Fake'      : ['(fakeW2l0jMuUp*(njet==0)+fakeW2l1jMuUp*(njet==1)+fakeW2l2jMuUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
                                  '(fakeW2l0jMuDown*(njet==0)+fakeW2l1jMuDown*(njet==1)+fakeW2l2jMuDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
                }
}


nuisances['fake_mu_stat']  = {
                'name'  : 'fake_mu_stat_hww',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'Fake'      : ['(fakeW2l0jstatMuUp*(njet==0)+fakeW2l1jstatMuUp*(njet==1)+fakeW2l2jstatMuUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
                                  '(fakeW2l0jstatMuDown*(njet==0)+fakeW2l1jstatMuDown*(njet==1)+fakeW2l2jstatMuDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
                }
}

##### B-tagger

nuisances['btagbc']  = {
    'name'  : 'ICHEP_btag_bc',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'DY'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'WW'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'ggWW'    : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'VVV'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'VZ'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'top'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'Vg'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'VgS'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'ggH_hww' : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'qqH_hww' : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'WH_hww'  : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'ZH_hww'  : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'H_htt'   : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'bbH_hww' : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_10000_50' : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_10000_500': ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_1000_1'   : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_1000_1000': ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_1000_150' : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_995_500'  : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_100_1'    : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_100_10'   : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_10_1'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_10_1000'  : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_10_50'    : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_10_500'   : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_15_10'    : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_200_150'  : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_300_1'    : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_300_50'   : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_500_150'  : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_500_500'  : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_50_1'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_50_10'    : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        'monoH_ZB_50_50'    : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
        }
    }
for mZp in ZpMasses:
    for mA0 in A0Masses :
        nuisances['btagbc']['samples'].update({'monoH_' + mZp + '_' + mA0: ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)']})
            
            
nuisances['btagudsg']  = {
    'name'  : 'ICHEP_btag_udsg',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'DY'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'VVV'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'VZ'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'WW'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'ggWW'    : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'top'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'Vg'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'VgS'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'ggH_hww' : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'qqH_hww' : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'WH_hww'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'ZH_hww'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'bbH_hww' : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'H_htt'   : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_10000_50' : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_10000_500': ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_1000_1'   : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_1000_1000': ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_1000_150' : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_995_500'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_100_1'    : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_100_10'   : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_10_1'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_10_1000'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_10_50'    : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_10_500'   : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_15_10'    : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_200_150'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_300_1'    : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_300_50'   : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_500_150'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_500_500'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_50_1'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_50_10'    : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        'monoH_ZB_50_50'    : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
        }
    }
for mZp in ZpMasses:
    for mA0 in A0Masses :
        nuisances['btagudsg']['samples'].update({'monoH_' + mZp + '_' + mA0: ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)']})


##### Trigger Efficiency

nuisances['trigg']  = {
                'name'  : 'trigger',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'VVV'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'VZ'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'ggWW'    : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'WW'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'top'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'Vg'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'VgS'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'ggH_hww' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'qqH_hww' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'WH_hww'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'ZH_hww'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'ggZH_hww': ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'bbH_hww' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'H_htt'   : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_10000_50' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_10000_500': ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_1000_1'   : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_1000_1000': ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_1000_150' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_995_500'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_100_1'    : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_100_10'   : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_10_1'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_10_1000'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_10_50'    : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_10_500'   : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_15_10'    : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_200_150'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_300_1'    : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_300_50'   : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_500_150'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_500_500'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_50_1'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_50_10'    : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'monoH_ZB_50_50'    : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                },
}
for mZp in ZpMasses:
    for mA0 in A0Masses :
        nuisances['trigg']['samples'].update({'monoH_' + mZp + '_' + mA0: ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)']})


# ##### Electron Efficiency and energy scale

id_syst_ele = [
               '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))' ,
               '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))'
              ]

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
                   'monoH_ZB_10000_50' : id_syst_ele,
                   'monoH_ZB_10000_500': id_syst_ele,
                   'monoH_ZB_1000_1'   : id_syst_ele,
                   'monoH_ZB_1000_1000': id_syst_ele,
                   'monoH_ZB_1000_150' : id_syst_ele,
                   'monoH_ZB_995_500'  : id_syst_ele,
                   'monoH_ZB_100_1'    : id_syst_ele,
                   'monoH_ZB_100_10'   : id_syst_ele,
                   'monoH_ZB_10_1'     : id_syst_ele,
                   'monoH_ZB_10_1000'  : id_syst_ele,
                   'monoH_ZB_10_50'    : id_syst_ele,
                   'monoH_ZB_10_500'   : id_syst_ele,
                   'monoH_ZB_15_10'    : id_syst_ele,
                   'monoH_ZB_200_150'  : id_syst_ele,
                   'monoH_ZB_300_1'    : id_syst_ele,
                   'monoH_ZB_300_50'   : id_syst_ele,
                   'monoH_ZB_500_150'  : id_syst_ele,
                   'monoH_ZB_500_500'  : id_syst_ele,
                   'monoH_ZB_50_1'     : id_syst_ele,
                   'monoH_ZB_50_10'    : id_syst_ele,
                   'monoH_ZB_50_50'    : id_syst_ele,
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
#                 'folderUp'   : treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepElepTCutup__wwSel__monohSel__muccaMonoHem',
#                 'folderDown' : treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepElepTCutdo__wwSel__monohSel__muccaMonoHem',
# }
# for mZp in ZpMasses:
#     for mA0 in A0Masses :
#         nuisances['electronpt']['samples'].update({'monoH_' + mZp + '_' + mA0: ['1','1']})


# ##### Muon Efficiency and energy scale

id_syst_mu = [
               '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))',
               '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))'
             ]


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
                   'monoH_ZB_10000_50' : id_syst_mu,
                   'monoH_ZB_10000_500': id_syst_mu,
                   'monoH_ZB_1000_1'   : id_syst_mu,
                   'monoH_ZB_1000_1000': id_syst_mu,
                   'monoH_ZB_1000_150' : id_syst_mu,
                   'monoH_ZB_995_500'  : id_syst_mu,
                   'monoH_ZB_100_1'    : id_syst_mu,
                   'monoH_ZB_100_10'   : id_syst_mu,
                   'monoH_ZB_10_1'     : id_syst_mu,
                   'monoH_ZB_10_1000'  : id_syst_mu,
                   'monoH_ZB_10_50'    : id_syst_mu,
                   'monoH_ZB_10_500'   : id_syst_mu,
                   'monoH_ZB_15_10'    : id_syst_mu,
                   'monoH_ZB_200_150'  : id_syst_mu,
                   'monoH_ZB_300_1'    : id_syst_mu,
                   'monoH_ZB_300_50'   : id_syst_mu,
                   'monoH_ZB_500_150'  : id_syst_mu,
                   'monoH_ZB_500_500'  : id_syst_mu,
                   'monoH_ZB_50_1'     : id_syst_mu,
                   'monoH_ZB_50_10'    : id_syst_mu,
                   'monoH_ZB_50_50'    : id_syst_mu,
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
#                 'folderUp'   : treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepMupTCutup__wwSel__monohSel__muccaMonoHem',
#                 'folderDown' : treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepMupTCutdo__wwSel__monohSel__muccaMonoHem',
# }
# for mZp in ZpMasses:
#     for mA0 in A0Masses :
#         nuisances['muonpt']['samples'].update({'monoH_' + mZp + '_' + mA0: ['1','1']})


# ##### Jet energy scale

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
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww' :  ['1', '1'],
                   'ZH_hww' :  ['1', '1'],
                   'ggZH_hww':  ['1', '1'],
                   'bbH_hww' : ['1', '1'],
                   'H_htt' : ['1', '1'],
                   'monoH_ZB_10000_50' : ['1','1'],
                   'monoH_ZB_10000_500': ['1','1'],
                   'monoH_ZB_1000_1'   : ['1','1'],
                   'monoH_ZB_1000_1000': ['1','1'],
                   'monoH_ZB_1000_150' : ['1','1'],
                   'monoH_ZB_995_500'  : ['1','1'],
                   'monoH_ZB_100_1'    : ['1','1'],
                   'monoH_ZB_100_10'   : ['1','1'],
                   'monoH_ZB_10_1'     : ['1','1'],
                   'monoH_ZB_10_1000'  : ['1','1'],
                   'monoH_ZB_10_50'    : ['1','1'],
                   'monoH_ZB_10_500'   : ['1','1'],
                   'monoH_ZB_15_10'    : ['1','1'],
                   'monoH_ZB_200_150'  : ['1','1'],
                   'monoH_ZB_300_1'    : ['1','1'],
                   'monoH_ZB_300_50'   : ['1','1'],
                   'monoH_ZB_500_150'  : ['1','1'],
                   'monoH_ZB_500_500'  : ['1','1'],
                   'monoH_ZB_50_1'     : ['1','1'],
                   'monoH_ZB_50_10'    : ['1','1'],
                   'monoH_ZB_50_50'    : ['1','1'],
                },
                'folderUp'   : treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__JESup__wwSel__monohSel__muccaMonoHem',
                'folderDown' : treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__JESdo__wwSel__monohSel__muccaMonoHem',
}
for mZp in ZpMasses:
    for mA0 in A0Masses :
        nuisances['jes']['samples'].update({'monoH_' + mZp + '_' + mA0: ['1','1']})


# ##### MET energy scale

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
                   'ggH_hww'           : ['1','1'],
                   'qqH_hww'           : ['1','1'],
                   'WH_hww'            : ['1','1'],
                   'ZH_hww'            : ['1','1'],
                   'ggZH_hww'          : ['1','1'],
                   'bbH_hww'           : ['1','1'],
                   'H_htt'             : ['1','1'],
                   'monoH_ZB_10000_50' : ['1','1'],
                   'monoH_ZB_10000_500': ['1','1'],
                   'monoH_ZB_1000_1'   : ['1','1'],
                   'monoH_ZB_1000_1000': ['1','1'],
                   'monoH_ZB_1000_150' : ['1','1'],
                   'monoH_ZB_995_500'  : ['1','1'],
                   'monoH_ZB_100_1'    : ['1','1'],
                   'monoH_ZB_100_10'   : ['1','1'],
                   'monoH_ZB_10_1'     : ['1','1'],
                   'monoH_ZB_10_1000'  : ['1','1'],
                   'monoH_ZB_10_50'    : ['1','1'],
                   'monoH_ZB_10_500'   : ['1','1'],
                   'monoH_ZB_15_10'    : ['1','1'],
                   'monoH_ZB_200_150'  : ['1','1'],
                   'monoH_ZB_300_1'    : ['1','1'],
                   'monoH_ZB_300_50'   : ['1','1'],
                   'monoH_ZB_500_150'  : ['1','1'],
                   'monoH_ZB_500_500'  : ['1','1'],
                   'monoH_ZB_50_1'     : ['1','1'],
                   'monoH_ZB_50_10'    : ['1','1'],
                   'monoH_ZB_50_50'    : ['1','1'],
                },
                'folderUp'   : treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__METup__wwSel__monohSel__muccaMonoHem',
                'folderDown' : treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__METdo__wwSel__monohSel__muccaMonoHem',
}
for mZp in ZpMasses:
    for mA0 in A0Masses :
        nuisances['met']['samples'].update({'monoH_' + mZp + '_' + mA0: ['1','1']})


################################ THEORETICAL UNCERTAINTIES  #################################
                             ###     Taken from ICHEP!      ###


##### QCD scale

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
nuisances['stat']['samples'].update({'monoH_ZB_10000_50' : {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_10000_500': {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_1000_1'   : {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_1000_1000': {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_1000_150' : {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_995_500'  : {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_100_1'    : {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_100_10'   : {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_10_1'     : {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_10_1000'  : {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_10_50'    : {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_10_500'   : {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_15_10'    : {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_200_150'  : {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_300_1'    : {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_300_50'   : {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_500_150'  : {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_500_500'  : {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_50_1'     : {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_50_10'    : {'typeStat' : 'bbb',}})
nuisances['stat']['samples'].update({'monoH_ZB_50_50'    : {'typeStat' : 'bbb',}})
