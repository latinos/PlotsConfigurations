# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py    


################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

#nuisances['lumi']  = {
#               'name'  : 'lumi_13TeV',
#               'samples'  : {
#                   'ggH_hww'  : '1.023',
#                   'qqH_hww'  : '1.023',
#                   'WH_hww'   : '1.023',
#                   'ZH_hww'   : '1.023',
#                   'H_htt'    : '1.023',
#                   'H_hww'    : '1.023',
#                   'WH_hww'   : '1.023',
#                   'ggZH_hww'   : '1.023',
#                   'VVV'      : '1.023',
#                   'VZ'       : '1.023',
#                   'ggWW'     : '1.023',
#                   'Vg'       : '1.023',
#                   'VgS'      : '1.023',
#                   #'DY'       : '1.023',    # --> datadriven
#                   #'WW'       : '1.023',    # --> datadriven
#                   #'top'      : '1.023',    # --> datadriven
#                   },
#               'type'  : 'lnN',
#              }
#
#
#nuisances['lumi2016']  = {
#               'name'  : 'lumi_13TeV_2016',
#               'samples'  : {
#                   'ggH_hww'  : '1.058',
#                   'qqH_hww'  : '1.058',
#                   'WH_hww'   : '1.058',
#                   'ZH_hww'   : '1.058',
#                   'H_htt'    : '1.058',
#                   'H_hww'    : '1.058',
#                   'WH_hww'   : '1.058',
#                   'ggZH_hww'   : '1.058',
#                   'VVV'      : '1.058',
#                   'VZ'       : '1.058',
#                   'ggWW'     : '1.058',
#                   'Vg'       : '1.058',
#                   'VgS'      : '1.058',
#                   #'DY'       : '1.058',    # --> datadriven
#                   #'WW'       : '1.058',    # --> datadriven
#                   #'top'      : '1.058',    # --> datadriven
#                   },
#               'type'  : 'lnN',
#              }
#
##### FAKES
#
#nuisances['fake_syst']  = {
#               'name'  : 'fake_syst',
#               'type'  : 'lnN',
#               'samples'  : {
#                   'Fake' : '1.30',
#                   },
#}
#
#nuisances['fake_ele']  = {
#                'name'  : 'fake_ele_hww',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'Fake'      : ['(fakeW2l0jElUp*(njet==0)+fakeW2l1jElUp*(njet==1)+fakeW2l2jElUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
#                                  '(fakeW2l0jElDown*(njet==0)+fakeW2l1jElDown*(njet==1)+fakeW2l2jElDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
#                }
#}
#
#
#nuisances['fake_ele_stat']  = {
#                'name'  : 'fake_ele_stat_hww',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'Fake'      : ['(fakeW2l0jstatElUp*(njet==0)+fakeW2l1jstatElUp*(njet==1)+fakeW2l2jstatElUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
#                                  '(fakeW2l0jstatElDown*(njet==0)+fakeW2l1jstatElDown*(njet==1)+fakeW2l2jstatElDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
#                }
#}
#
#nuisances['fake_mu']  = {
#                'name'  : 'fake_mu_hww',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'Fake'      : ['(fakeW2l0jMuUp*(njet==0)+fakeW2l1jMuUp*(njet==1)+fakeW2l2jMuUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
#                                  '(fakeW2l0jMuDown*(njet==0)+fakeW2l1jMuDown*(njet==1)+fakeW2l2jMuDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
#                }
#}
#
#
#nuisances['fake_mu_stat']  = {
#                'name'  : 'fake_mu_stat_hww',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'Fake'      : ['(fakeW2l0jstatMuUp*(njet==0)+fakeW2l1jstatMuUp*(njet==1)+fakeW2l2jstatMuUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
#                                  '(fakeW2l0jstatMuDown*(njet==0)+fakeW2l1jstatMuDown*(njet==1)+fakeW2l2jstatMuDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
#                }
#}
#
##### B-tagger
#
#nuisances['btagbc']  = {
#                'name'  : 'ICHEP_btag_bc',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'ggH_hww' : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                   'qqH_hww' : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                   'WH_hww'  : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                   'ZH_hww'  : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                   'H_htt'   : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                   'H_hww'   : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                   'WH_hww'  : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                   'DY'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                   'VVV'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                   'VZ'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                   'WW'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                   'ggWW'    : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                   'top'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                   'Vg'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                   'VgS'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                }
#}
#
#nuisances['btagudsg']  = {
#                'name'  : 'ICHEP_btag_udsg',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'ggH_hww' : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                   'qqH_hww' : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                   'WH_hww'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                   'ZH_hww'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                   'H_htt'   : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                   'H_hww'   : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                   'WH_hww'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                   'DY'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                   'VVV'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                   'VZ'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                   'WW'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                   'ggWW'    : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                   'top'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                   'Vg'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                   'VgS'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                }
#}
#
##### Trigger Efficiency
#
#nuisances['trigg']  = {
#                'name'  : 'trigger',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'ggH_hww' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'qqH_hww' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'WH_hww'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'ZH_hww'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'ggZH_hww': ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'H_htt'   : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'H_hww'   : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'WH_hww'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   #'DY'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'VVV'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'VZ'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'ggWW'    : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'WW'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'top'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'Vg'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'VgS'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                },
#}
#
##### Electron Efficiency and energy scale
#
#nuisances['idiso_ele']  = {
#                'name'  : 'idiso_ele',
#                'kind'  : 'weight',
#                #'kind'  : 'tree', #'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'ggH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
#                  'qqH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
#                  'WH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
#                  'ZH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
#                  'ggZH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
#                  'H_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
#                  'WH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
#                  #'DY' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
#                  'VVV' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
#                  'VZ' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
#                  'ggWW' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
#                  'WW' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
#                  'top' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
#                  'Vg' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
#                  'VgS' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
#                 
#                 },
#}
#                
#
#nuisances['electronpt']  = {
#                'name'  : 'scale_e',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                   'ggWW' :['1', '1'],
#                   'WW' :  ['1', '1'],
#                   'DY' :  ['1', '1'],
#                   'top' : ['1', '1'],
#                   'VZ' :  ['1', '1'],
#                   'VVV' : ['1', '1'],
#                   'ggH_hww' : ['1', '1'],
#                   'qqH_hww' : ['1', '1'],
#                   'WH_hww'  :  ['1', '1'],
#                   'ZH_hww'  :  ['1', '1'],
#                   'ggZH_hww':  ['1', '1'],
#                   'H_hww'   :  ['1', '1'],
#                   'H_htt'   : ['1', '1'],
#                   'Vg' : ['1', '1'],
#                   'VgS': ['1', '1'],
#                },
#
#                'folderUp'   : '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup__dymvaGGHv2',
#                'folderDown' : '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTdo__dymvaGGHv2',
#}
#
##### Muon Efficiency and energy scale
#
#
#nuisances['idiso_mu']  = {
#                'name'  : 'idiso_mu',
#                'kind'  : 'weight',
#                #'kind'  : 'tree', #'weight',
#                'type'  : 'shape',
#                'samples'  : {
#
#                   'ggH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
#                  'qqH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
#                  'WH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
#                  'ZH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
#                  'ggZH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
#                  'H_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
#                  'WH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
#                  #'DY' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
#                  'VVV' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
#                  'VZ' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
#                  'ggWW' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
#                  'WW' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
#                  'top' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
#                  'Vg' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
#                  'VgS' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
#                },
#}
#
#nuisances['muonpt']  = {
#                'name'  : 'scale_m',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                   'ggWW' :['1', '1'],
#                   'WW' :  ['1', '1'],
#                   'DY' :  ['1', '1'],
#                   'top' : ['1', '1'],
#                   'VZ' :  ['1', '1'],
#                   'VVV' : ['1', '1'],
#                   'ggH_hww' : ['1', '1'],
#                   'qqH_hww' : ['1', '1'],
#                   'WH_hww' :  ['1', '1'],
#                   'ZH_hww' :  ['1', '1'],
#                   'ggZH_hww':  ['1', '1'],
#                   'H_hww' :  ['1', '1'],
#                   'H_htt' : ['1', '1'],
#                   'Vg' : ['1', '1'],
#                   'VgS': ['1', '1'],
#                },
#                'folderUp'   : '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTup__dymvaGGHv2',
#                'folderDown' : '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTdo__dymvaGGHv2',
#}
#
#
##### Jet energy scale
#
#nuisances['jes']  = {
#                'name'  : 'scale_j',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                   'ggWW' :['1', '1'],
#                   'WW' :  ['1', '1'],
#                   'DY' :  ['1', '1'],
#                   'top' : ['1', '1'],
#                   'VZ' :  ['1', '1'],
#                   'VVV' : ['1', '1'],
#                   'ggH_hww' : ['1', '1'],
#                   'qqH_hww' : ['1', '1'],
#                   'WH_hww' :  ['1', '1'],
#                   'ZH_hww' :  ['1', '1'],
#                   'ggZH_hww' :  ['1', '1'],
#                   'H_hww'  :  ['1', '1'],
#                   'H_htt'  : ['1', '1'],
#                   'Vg' : ['1', '1'],
#                   'VgS': ['1', '1'],
#                },
#                'folderUp'   : '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxup__dymvaGGHv2',
#                'folderDown' : '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__dymvaGGHv2',
#}
#
##### MET energy scale
#
#nuisances['met']  = {
#                'name'  : 'scale_met',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                   'ggWW' :['1', '1'],
#                   'WW' :  ['1', '1'],
#                   'DY' :  ['1', '1'],
#                   'top' : ['1', '1'],
#                   'VZ' :  ['1', '1'],
#                   'VVV' : ['1', '1'],
#                   'ggH_hww' : ['1', '1'],
#                   'qqH_hww' : ['1', '1'],
#                   'WH_hww' :  ['1', '1'],
#                   'ZH_hww' :  ['1', '1'],
#                   #'ggZH_hww':  ['1', '1'],
#                   'H_hww' :  ['1', '1'],
#                   'H_htt' : ['1', '1'],
#                   'Vg' : ['1', '1'],
#                   'VgS': ['1', '1'],
#                },
#                'folderUp'   : '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__METup__dymvaGGHv2',
#                'folderDown' : '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__METdo__dymvaGGHv2',
#}
#
#
################################ DATA DRIVEN BACKGROUND UNCERTAINTIES  #################################

#### WW fit

nuisances['WWnorm0jsf']  = {
               'name'  : 'WWnorm0jsf',
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                            'hww2l2v_13TeV_0jee',
                            'hww2l2v_13TeV_WW_0jee',
                            'hww2l2v_13TeV_top_0jee',
                            'hww2l2v_13TeV_0jmm',
                            'hww2l2v_13TeV_WW_0jmm',
                            'hww2l2v_13TeV_top_0jmm',
                         ],
              }

nuisances['WWnorm1jsf']  = {
               'name'  : 'WWnorm1jsf',
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                            'hww2l2v_13TeV_1jee',
                            'hww2l2v_13TeV_WW_1jee',
                            'hww2l2v_13TeV_1jmm',
                            'hww2l2v_13TeV_WW_1jmm',
                            'hww2l2v_13TeV_top_1jsf',
                         ],
              }

#### Top fit

nuisances['Topnorm0jsf']  = {
               'name'  : 'Topnorm0jsf',
               'samples'  : {
                   'top' : '1.00',
                   },  
               'type'  : 'rateParam',
               'cuts'  : [
                            'hww2l2v_13TeV_0jee',
                            'hww2l2v_13TeV_WW_0jee',
                            'hww2l2v_13TeV_top_0jee',
                            'hww2l2v_13TeV_0jmm',
                            'hww2l2v_13TeV_WW_0jmm',
                            'hww2l2v_13TeV_top_0jmm',
                         ],
              }

nuisances['Topnorm1jsf']  = {
               'name'  : 'Topnorm1jsf',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                            'hww2l2v_13TeV_1jee',
                            'hww2l2v_13TeV_WW_1jee',
                            'hww2l2v_13TeV_1jmm',
                            'hww2l2v_13TeV_WW_1jmm',
                            'hww2l2v_13TeV_top_1jsf',
                         ],
              }


#### DY estimation (just create dummy histograms to be scaled by the DY Rin/out method)

nuisances['DYeenorm0j'] = {
                'name'  : 'DYeenorm0j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    'DY' : ['1.','1.'] ,
                             },
                'cuts'  : [ 
                            'hww2l2v_13TeV_0jee', 
                            'hww2l2v_13TeV_WW_0jee', 
                            'hww2l2v_13TeV_top_0jee', 
                          ] ,
                }

nuisances['DYeenorm1j'] = {
                'name'  : 'DYeenorm1j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    'DY' : ['1.','1.'] ,
                             },
                'cuts'  : [ 
                            'hww2l2v_13TeV_1jee', 
                            'hww2l2v_13TeV_WW_1jee',
                          ] ,
                }

nuisances['DYmmnorm0j'] = {
                'name'  : 'DYmmnorm0j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    'DY' : ['1.','1.'] ,
                             },
                'cuts'  : [ 
                            'hww2l2v_13TeV_0jmm', 
                            'hww2l2v_13TeV_WW_0jmm',
                            'hww2l2v_13TeV_top_0jmm',
                          ] ,
                }

nuisances['DYmmnorm1j'] = {
                'name'  : 'DYmmnorm1j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    'DY' : ['1.','1.'] ,
                             },
                'cuts'  : [ 
                            'hww2l2v_13TeV_1jmm', 
                            'hww2l2v_13TeV_WW_1jmm',
                          ] ,
                }
#
## K factor (Data/Wg*) = 2.0 +/- 0.5
#nuisances['WgStarScale']  = {
#               'name'  : 'WgStarScale',
#               'type'  : 'lnN',
#               'samples'  : {
#                   'WgS' : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
#                   'VgS' : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
#                   },
#                }
#
#
########################################  CHECK IT WITH ANDREA ####################################
#
#nuisances['QCDscale_CRSR_accept_top']  = {
#               'name'  : 'QCDscale_CRSR_accept_top',
#               'type'  : 'lnN',
#               'samples'  : {
#                   'top' : '1.01',
#                   },
#               'cuts'  : [
#                 'hww2l2v_13TeV_top_0jee',
#                 'hww2l2v_13TeV_top_0jmm',
#                 'hww2l2v_13TeV_top_1jsf',
#                ]
#              }
#
##### JET BINNING QCD SCALE UNCERTAINTIES FOR ggH (higher order)
#
#
##  from YR4 ggF
##
##    QCDscale_ggH         =      1.08539
##    QCDscale_ggH1in_0jet =      0.938296
##    QCDscale_ggH1in_1jet =      1.17048
##    QCDscale_ggH2in_1jet =      0.915896
##    QCDscale_ggH2in_2jet =      1.19244
##
#
#
#nuisances['QCDscale_ggH0j']  = {
#               'name'  : 'QCDscale_ggH0j', 
#               'samples'  : {
#                   'ggH_hww' : '1.08539',
#                   },
#               'type'  : 'lnN',
#               'cuts'  : [
#                           'hww2l2v_13TeV_0jee',
#                           'hww2l2v_13TeV_WW_0jee',
#                           'hww2l2v_13TeV_top_0jee',
#                           'hww2l2v_13TeV_0jmm',
#                           'hww2l2v_13TeV_WW_0jmm',
#                           'hww2l2v_13TeV_top_0jmm',
#                ]               
#              }
#
#
#nuisances['QCDscale_ggH1j_in0jet']  = {
#               'name'  : 'QCDscale_ggH1j', 
#               'samples'  : {
#                   'ggH_hww' : '0.938296',
#                   },
#               'type'  : 'lnN',
#               'cuts'  : [
#                           'hww2l2v_13TeV_0jee',
#                           'hww2l2v_13TeV_WW_0jee',
#                           'hww2l2v_13TeV_top_0jee',
#                           'hww2l2v_13TeV_0jmm',
#                           'hww2l2v_13TeV_WW_0jmm',
#                           'hww2l2v_13TeV_top_0jmm',
#                ]
#              }
#
#
#
#nuisances['QCDscale_ggH1j_in1jet']  = {
#               'name'  : 'QCDscale_ggH1j', 
#               'samples'  : {
#                   'ggH_hww' : '1.17048',
#                   },
#               'type'  : 'lnN',
#               'cuts'  : [
#                           'hww2l2v_13TeV_1jee',
#                           'hww2l2v_13TeV_WW_1jee',
#                           'hww2l2v_13TeV_1jmm',
#                           'hww2l2v_13TeV_WW_1jmm',
#                           'hww2l2v_13TeV_top_1jsf',
#                ]
#              }
#
#
#nuisances['QCDscale_ggH2j_in1jet']  = {
#               'name'  : 'QCDscale_ggH1j', 
#               'samples'  : {
#                   'ggH_hww' : '0.915896',
#                   },
#               'type'  : 'lnN',
#               'cuts'  : [
#                           'hww2l2v_13TeV_1jee',
#                           'hww2l2v_13TeV_WW_1jee',
#                           'hww2l2v_13TeV_1jmm',
#                           'hww2l2v_13TeV_WW_1jmm',
#                           'hww2l2v_13TeV_top_1jsf',
#                ]
#              }
#
##### OTHER SIGNAL QCD SCALE UNCERTAINTIES
#
#from LatinoAnalysis.Tools.HiggsXSection  import *
#HiggsXS = HiggsXSection()
#
#nuisances['QCDscale_ggH']  = {
#               'name'  : 'QCDscale_ggH',
#               'samples'  : {
#                   #'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','scale','sm'),     ----> already included in jet bin migration QCD uncertainty?
#                   'ggH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','scale','sm'),
#                   'H_htt'   : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','scale','sm'),
#                   },
#               'type'  : 'lnN',
#              }
#
#nuisances['QCDscale_qqH']  = {
#               'name'  : 'QCDscale_qqH',
#               'samples'  : {
#                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','scale','sm'),
#                   'qqH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','scale','sm'),
#                   },
#               'type'  : 'lnN',
#              }
#
#
#
#nuisances['QCDscale_WH']  = {
#               'name'  : 'QCDscale_WH',
#               'samples'  : {
#                   'WH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH','125.0','scale','sm'),
#                   },
#               'type'  : 'lnN',
#              }
#
#
#
#nuisances['QCDscale_ZH']  = {
#               'name'  : 'QCDscale_ZH',
#               'samples'  : {
#                   'ZH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH','125.0','scale','sm'),
#                   },
#               'type'  : 'lnN',
#              }
#
#
#
#nuisances['QCDscale_ggZH']  = {
#               'name'  : 'QCDscale_ggZH',
#               'samples'  : {
#                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.0','scale','sm'),
#                   },
#               'type'  : 'lnN',
#              }
#
###### QCD SCALE ACCEPTANCE  ---> TO BE UPDATED FOR OUR SELECTION!!!!!!!
#
#nuisances['QCDscale_qqbar_accept']  = {
#               'name'  : 'QCDscale_qqbar_accept',
#               'type'  : 'lnN',
#               'samples'  : {
#                   #'qqH_hww' : '1.02',
#                   #'qqH_htt' : '1.02',
#                   #'WH_hww'  : '1.02',
#                   #'ZH_hww'  : '1.02',
#                   #
#                   #'WW'      : '1.015', -> not included since part of weights from WWqscale0j and WWqscale1j
#                   'qqH_hww' : '1.007',
#                   'qqH_htt' : '1.007',
#                   'WH_hww'  : '1.05',
#                   'ZH_hww'  : '1.04',
#                   'VZ'      : '1.029',
#                   },
#              }
#
#nuisances['QCDscale_gg_accept']  = {
#               'name'  : 'QCDscale_gg_accept',
#               'samples'  : {
#                   #'ggWW'    : '1.03',
#                   #'ggH_hww' : '1.03',
#                   #'ggH_htt' : '1.03',
#                   #'H_htt'   : '1.03',
#                   #'ggZH_hww': '1.03',                   
#                   #
#                   'ggWW'    : '1.027',
#                   'ggH_hww' : '1.027',
#                   'ggH_htt' : '1.027',
#                   'H_htt'   : '1.027',
#                   'ggZH_hww': '1.027',
#
#                   },
#               'type'  : 'lnN',
#              }
#
#
###### PDF THEORY UNCERTAINTIES
#
#
#nuisances['pdf_gg']  = {
#               'name'  : 'pdf_gg',
#               'samples'  : {
#                   #'ggWW'    : '1.05',    # --> no, since absorbed into k-scale factor
#                   'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
#                   'ggH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
#                   'H_htt'   : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
#                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.0','pdf','sm'),
#                   },
#               'type'  : 'lnN',
#              }
#
#
#nuisances['pdf_qqbar']  = {
#               'name'  : 'pdf_qqbar',
#               'type'  : 'lnN',
#               'samples'  : {
#                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),
#                   'qqH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),
#                   'WH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH' ,'125.0','pdf','sm'),
#                   'ZH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH' ,'125.0','pdf','sm'),
#                   'VZ'      : '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
#                   },
#              }
#
###### PDF ACCEPTANCE UNCERTAINTIES ---> TO BE UPDAtedfor our selectoIOn !!!!!!
#
#
#nuisances['pdf_gg_accept']  = {
#               'name'  : 'pdf_gg_accept',
#               'samples'  : {
#                   'ggWW'    : '1.005',
#                   'ggH_hww' : '1.005',
#                   'ggH_htt' : '1.005',
#                   'H_htt'   : '1.005',
#                   'ggZH_hww': '1.005',
#                   },
#               'type'  : 'lnN',
#              }
#
#
#nuisances['pdf_qqbar_accept']  = {
#               'name'  : 'pdf_qqbar_accept',
#               'type'  : 'lnN',
#               'samples'  : {
#                   #
#                   'qqH_hww' : '1.011',
#                   'qqH_htt' : '1.011',
#                   'WH_hww'  : '1.007',
#                   'ZH_hww'  : '1.012',
#                   'VZ'      : '1.005',
#                   },
#              }
#
#
######### ggww and interference
#
#
#nuisances['kfactggww']  = {
#               'name'  : 'kfactggww',
#               'type'  : 'lnN',
#               'samples'  : {
#                   'ggWW' : '1.15',
#                   },
#              }
#
#########  WW shaping - nll weights UNCERTAINTIES
#
#nuisances['WWresum0j']  = {
#                'name'  : 'WWresum0j',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
#                   },
#               'cuts'  : [
#                 'hww2l2v_13TeV_of0j',
#                 'hww2l2v_13TeV_top_of0j',
#                 'hww2l2v_13TeV_dytt_of0j',
##                 
#                 'hww2l2v_13TeV_me_0j',
#                 'hww2l2v_13TeV_em_0j',
##
#                 'hww2l2v_13TeV_me_mp_0j',
#                 'hww2l2v_13TeV_me_pm_0j',
#                 'hww2l2v_13TeV_em_mp_0j',
#                 'hww2l2v_13TeV_em_pm_0j',
##                 
#                ]
#
#                }
#
#nuisances['WWresum1j']  = {
#                'name'  : 'WWresum1j',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
#                   },
#               'cuts'  : [
#                 'hww2l2v_13TeV_of1j',
#                 'hww2l2v_13TeV_top_of1j',
#                 'hww2l2v_13TeV_dytt_of1j',
##                 
#                 'hww2l2v_13TeV_me_1j',
#                 'hww2l2v_13TeV_em_1j',
##
#                 'hww2l2v_13TeV_me_mp_1j',
#                 'hww2l2v_13TeV_me_pm_1j',
#                 'hww2l2v_13TeV_em_mp_1j',
#                 'hww2l2v_13TeV_em_pm_1j',
##                 
#                ]
#                }
#
#nuisances['WWqscale0j']  = {
#                'name'  : 'WWqscale0j',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
#                   },
#               'cuts'  : [
#                 'hww2l2v_13TeV_of0j',
#                 'hww2l2v_13TeV_top_of0j',
#                 'hww2l2v_13TeV_dytt_of0j',
##                 
#                 'hww2l2v_13TeV_me_0j',
#                 'hww2l2v_13TeV_em_0j',
##
#                 'hww2l2v_13TeV_me_mp_0j',
#                 'hww2l2v_13TeV_me_pm_0j',
#                 'hww2l2v_13TeV_em_mp_0j',
#                 'hww2l2v_13TeV_em_pm_0j',
##                 
#                ]
#                }
#
#
#nuisances['WWqscale1j']  = {
#                'name'  : 'WWqscale1j',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
#                   },
#               'cuts'  : [
#                 'hww2l2v_13TeV_of1j',
#                 'hww2l2v_13TeV_top_of1j',
#                 'hww2l2v_13TeV_dytt_of1j',
##                 
#                 'hww2l2v_13TeV_me_1j',
#                 'hww2l2v_13TeV_em_1j',
##
#                 'hww2l2v_13TeV_me_mp_1j',
#                 'hww2l2v_13TeV_me_pm_1j',
#                 'hww2l2v_13TeV_em_mp_1j',
#                 'hww2l2v_13TeV_em_pm_1j',
##                 
#                ]
#                }
#
######## PS/UE  ----> MISSING TREES !!!!!!!!!
#
##nuisances['PS']  = {
##                'name'  : 'PS',
##                'kind'  : 'tree',
##                'type'  : 'shape',
##                'samples'  : {
##                   'WW' :  ['1./1.03295', '1.'],  # latino_WWTo2L2NuHerwigPS.root moved with different name in __PS folder
##                },
##                'folderUp'   : 'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/07Jun2016_spring16_mAODv2_12pXfbm1_repro//MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/',
##                'folderDown' : 'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/07Jun2016_spring16_mAODv2_12pXfbm1_repro//MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/'
##                }
#
#
#nuisances['UEICHEP']  = {
#                'name'  : 'UE_ICHEP',
#                'type'  : 'lnN',
#                'samples'  : {
#                   'ggH_hww' : '1.03',
#                   'qqH_hww' : '1.03',
#                },
#              }
#
#nuisances['PSICHEP']  = {
#                'name'  : 'PS_ICHEP',
#                'type'  : 'lnN',
#                'samples'  : {
#                   'ggH_hww' : '1.02',
#                   'qqH_hww' : '1.02',
#                },
#              }
#
#
######## SINGLE TOP
#
#nuisances['tttwTh']  = {
#                'name'  : 'tttwTh',   # Theory uncertainty
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {  # up              down
#                   'top'     : ['((dataset==15 || dataset==16) * 1.0816 + (dataset==17 || dataset==18 || dataset==19))',
#                                '((dataset==15 || dataset==16) * 0.9184 + (dataset==17 || dataset==18 || dataset==19))'],
#                }
#                # tt = 17/18/19 depending on the sample/generator
#                # tW = 15/16
#}
#
#
#
#
#
######################################## THEORY UNCERTAINTIES  #####################################
#
## WZ from 
## https://twiki.cern.ch/twiki/bin/view/CMS/StandardModelCrossSectionsat13TeV
##
#nuisances['QCDscale_VW']  = {
#               'name'  : 'QCDscale_VW',
#               'samples'  : {
#                   'VZ' : '1.03',
#                   },
#               'type'  : 'lnN'
#              }
#
#
#
######################################## MC STATISTICAL UNCERTAINTIES ##############################
#
## "stat" is a special word to identify this nuisance
##nuisances['stat']  = {
##                # apply to the following samples: name of samples here must match keys in samples.py
##               'samples'  : {
##                   
##                   'ttbar': {
##                         'typeStat' : 'bbb',
##                         },
##
##                   'singletop': {
##                         'typeStat' : 'bbb',
##                         },
##                    
##                   'top': {
##                         'typeStat' : 'bbb',
##                         'keepNormalization' : '1'  # default = 0 -> 0=don't keep normalization
##                         },
##                    
##                   'DY': {
##                         'typeStat' : 'bbb',
##                         'keepNormalization' : '1'  # default = 0 -> 0=don't keep normalization
##                         },
##                    
##                   'ggWW': {
##                         'typeStat' : 'bbb',
##                         },
##                    
##                   'ggWW_Int': {
##                         'typeStat' : 'bbb',
##                         },
##                    
##                   'WW': {
##                         'typeStat' : 'bbb',
##                         'keepNormalization' : '1'  # default = 0 -> 0=don't keep normalization
##                         },
##
##                   'VZ': {
##                         'typeStat' : 'bbb',
##                         },
##
##                   'WZ': {
##                         'typeStat' : 'bbb',
##                         },
##
##                   'VVV': {
##                         'typeStat' : 'bbb',
##                         },
##
##                   'H_hww': {
##                         'typeStat' : 'bbb',
##                         },
##
##                   'ggH_hww': {
##                         'typeStat' : 'bbb',
##                         },
##
##                   'qqH_hww': {
##                         'typeStat' : 'bbb',
##                         },
##
##                   'WH_hww': {
##                         'typeStat' : 'bbb',
##                         },
##
##                   'ZH_hww': {
##                         'typeStat' : 'bbb',
##                         },
##
##                   'H_htt': {
##                         'typeStat' : 'bbb',
##                         },
##
##                   'ggH_htt': {
##                         'typeStat' : 'bbb',
##                         },
##
##                   'qqH_htt': {
##                         'typeStat' : 'bbb',
##                         },
##
##                   'WH_htt': {
##                         'typeStat' : 'bbb',
##                         },
##
##                   'ZH_htt': {
##                         'typeStat' : 'bbb',
##                         },
##
##                   'ggZH_hww': {
##                         'typeStat' : 'bbb',
##                         },
##                   
##                   'Fake': {  # needed?
##                         'typeStat' : 'bbb',
##                         },
##                   
##                   'Vg': {  
##                         'typeStat' : 'bbb',
##                         },
##
##                   'VgS':{  
##                         'typeStat' : 'bbb',
##                         },
##                            
##                 },
##               'type'  : 'shape'
##              }
##
#
#
#
##for iNP in nuisances:
#  #if 'cuts' in nuisances[iNP] :
#    #newCuts = []
#    #for iCut in nuisances[iNP]['cuts']:
#      #for iOptim in optim:
#         ##newCuts.append(iCut+'_'+iOptim)
#    #nuisances[iNP]['cuts'] = newCuts
#  
