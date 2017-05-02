
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



##### B-tagger

#nuisances['btagbc']  = {
                #'name'  : 'ICHEP_btag_bc',
                #'kind'  : 'weight',
               #'type'  : 'shape',
                #'samples'  : {
                   #'DY'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   #'WW'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   #'ggWW'    : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   #'VVV'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   #'VZ'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   #'top'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   #'Vg'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   #'VgS'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   #'ggH_hww' : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   #'qqH_hww' : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   #'WH_hww'  : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   #'ZH_hww'  : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   #'H_htt'   : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   #'bbH_hww' : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                #}
#}

#nuisances['btagudsg']  = {
                #'name'  : 'ICHEP_btag_udsg',
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'DY'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   #'VVV'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   #'VZ'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   #'WW'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   #'ggWW'    : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   #'top'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   #'Vg'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   #'VgS'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   #'ggH_hww' : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   #'qqH_hww' : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   #'WH_hww'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   #'ZH_hww'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   #'bbH_hww' : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   #'H_htt'   : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                #}
#}

###### Trigger Efficiency

#nuisances['trigg']  = {
                #'name'  : 'trigger',
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'DY'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'VVV'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'VZ'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'ggWW'    : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'WW'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'top'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'Vg'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'VgS'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'ggH_hww' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'qqH_hww' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'WH_hww'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'ZH_hww'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'ggZH_hww': ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'bbH_hww' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'H_htt'   : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                #},
#}

###### Electron Efficiency and energy scale

#id_syst_ele = [
               #'((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))' ,
               #'((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))'
              #]

#nuisances['idiso_ele']  = {
                #'name'  : 'idiso_ele',
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'DY'      : id_syst_ele ,
                   #'VVV'     : id_syst_ele ,
                   #'VZ'      : id_syst_ele ,
                   #'ggWW'    : id_syst_ele ,
                   #'WW'      : id_syst_ele ,
                   #'top'     : id_syst_ele ,
                   #'Vg'      : id_syst_ele ,
                   #'VgS'     : id_syst_ele ,
                   #'ggH_hww' : id_syst_ele ,
                   #'qqH_hww' : id_syst_ele ,
                   #'WH_hww'  : id_syst_ele ,
                   #'ZH_hww'  : id_syst_ele ,
                   #'ggZH_hww': id_syst_ele ,
                   #'bbH_hww' : id_syst_ele ,
                   #'H_htt'   : id_syst_ele ,
                #},
#}

#nuisances['electronpt']  = {
                #'name'  : 'scale_e',
                #'kind'  : 'tree',
                #'type'  : 'shape',
                #'samples'  : {
                   #'DY' :  ['1', '1'],
                   #'ggWW' :['1', '1'],
                   #'WW' :  ['1', '1'],
                   #'top' : ['1', '1'],
                   #'VZ' :  ['1', '1'],
                   #'VVV' : ['1', '1'],
                   #'Vg' : ['1', '1'],
                   #'VgS': ['1', '1'],
                   #'ggH_hww' : ['1', '1'],
                   #'qqH_hww' : ['1', '1'],
                   #'WH_hww'  :  ['1', '1'],
                   #'ZH_hww'  :  ['1', '1'],
                   #'ggZH_hww':  ['1', '1'],
                   #'bbH_hww' : ['1', '1'],
                   #'H_htt'   : ['1', '1'],
                 #},
                #'folderUp'   : treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepElepTCutup',
                #'folderDown' : treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepElepTCutdo',
#}


###### Muon Efficiency and energy scale

#id_syst_mu = [
               #'((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))',
               #'((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))'
             #]


#nuisances['idiso_mu']  = {
                #'name'  : 'idiso_mu',
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'DY'      : id_syst_mu ,
                   #'VVV'     : id_syst_mu ,
                   #'VZ'      : id_syst_mu ,
                   #'ggWW'    : id_syst_mu ,
                   #'WW'      : id_syst_mu ,
                   #'top'     : id_syst_mu ,
                   #'Vg'      : id_syst_mu ,
                   #'VgS'     : id_syst_mu ,
                   #'ggH_hww' : id_syst_mu ,
                   #'qqH_hww' : id_syst_mu ,
                   #'WH_hww'  : id_syst_mu ,
                   #'ZH_hww'  : id_syst_mu ,
                   #'ggZH_hww': id_syst_mu ,
                   #'bbH_hww' : id_syst_mu ,
                   #'H_htt'   : id_syst_mu ,
                #},
#}

#nuisances['muonpt']  = {
                #'name'  : 'scale_m',
                #'kind'  : 'tree',
                #'type'  : 'shape',
                #'samples'  : {
                   #'ggWW' :['1', '1'],
                   #'WW' :  ['1', '1'],
                   #'DY' :  ['1', '1'],
                   #'top' : ['1', '1'],
                   #'VZ' :  ['1', '1'],
                   #'VVV' : ['1', '1'],
                   #'Vg' : ['1', '1'],
                   #'VgS': ['1', '1'],
                   #'ggH_hww' : ['1', '1'],
                   #'qqH_hww' : ['1', '1'],
                   #'WH_hww' :  ['1', '1'],
                   #'ZH_hww' :  ['1', '1'],
                   #'ggZH_hww':  ['1', '1'],
                   #'bbH_hww' : ['1', '1'],
                   #'H_htt' : ['1', '1'],
                #},
                #'folderUp'   : treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepMupTCutup',
                #'folderDown' : treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepMupTCutdo',
#}


###### Jet energy scale

#nuisances['jes']  = {
                #'name'  : 'scale_j',
                #'kind'  : 'tree',
                #'type'  : 'shape',
                #'samples'  : {
                   #'ggWW' :['1', '1'],
                   #'WW' :  ['1', '1'],
                   #'DY' :  ['1', '1'],
                   #'top' : ['1', '1'],
                   #'VZ' :  ['1', '1'],
                   #'VVV' : ['1', '1'],
                   #'Vg' : ['1', '1'],
                   #'VgS': ['1', '1'],
                   #'ggH_hww' : ['1', '1'],
                   #'qqH_hww' : ['1', '1'],
                   #'WH_hww' :  ['1', '1'],
                   #'ZH_hww' :  ['1', '1'],
                   #'ggZH_hww':  ['1', '1'],
                   #'bbH_hww' : ['1', '1'],
                   #'H_htt' : ['1', '1'],
                #},
                #'folderUp'   : treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__JESup',
                #'folderDown' : treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__JESdo',
#}

###### MET energy scale

#nuisances['met']  = {
                #'name'  : 'scale_met',
                #'kind'  : 'tree',
                #'type'  : 'shape',
                #'samples'  : {
                   #'ggWW' :['1', '1'],
                   #'WW' :  ['1', '1'],
                   #'DY' :  ['1', '1'],
                   #'top' : ['1', '1'],
                   #'VZ' :  ['1', '1'],
                   #'VVV' : ['1', '1'],
                   #'Vg' : ['1', '1'],
                   #'VgS': ['1', '1'],
                   #'ggH_hww' : ['1', '1'],
                   #'qqH_hww' : ['1', '1'],
                   #'WH_hww' :  ['1', '1'],
                   #'ZH_hww' :  ['1', '1'],
                   #'ggZH_hww':  ['1', '1'],
                   #'bbH_hww' : ['1', '1'],
                   #'H_htt' : ['1', '1'],
                #},
                #'folderUp'   : treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__METup',
                #'folderDown' : treeBaseDir+'Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__METdo',
#}

