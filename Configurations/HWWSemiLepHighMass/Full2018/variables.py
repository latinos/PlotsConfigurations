# variables

#variables = {}



# variables['events']  = {
#     'name' : '1',
#     'range': (1,0,2),
#     'xaxis': 'events',
#     'fold' : 3
# }

#####################################################
##################  Lepton 0  #######################
#####################################################

variables['lepton0_pt']  = {
    'name' : 'Lepton_pt[0]',
    'range': (50,0,1000),
    'xaxis': 'lepton[0] pt',
    'fold' : 3
}
# variables['lepton0_eta'] = {
#     'name' : 'Lepton_eta[0]',
#     'range': ([-2.5, -2.1, -1.6, -1.4, 0.0, 1.4, 1.6, 2.1, 2.5],),
#     'xaxis': 'lepton[0] eta',
#     # 'divideByBinWidth' : 1,
#     'fold' : 0
# }
# variables['lepton0_phi'] = {
#     'name' : 'Lepton_phi[0]',
#     'range': (12, -3.142, 3.142),
#     'xaxis': 'lepton[0] phi',
#     'fold' : 0
# }


#####################################################
##################  Lepton 1  #######################
#####################################################

# variables['lepton1_pt']  = {
#     'name' : 'Lepton_pt[1]',
#     'range': (10,0,250),
#     'xaxis': 'lepton[1] pt',
#     'fold' : 3
# }
# variables['lepton1_eta'] = {
#     'name' : 'Lepton_eta[1]',
#     'range': ([-2.5, -2.1, -1.6, -1.4, 0.0, 1.4, 1.6, 2.1, 2.5],),
#     'xaxis': 'lepton[1] eta',
#     # 'divideByBinWidth' : 1,
#     'fold' : 0
# }
# variables['lepton1_phi'] = {
#     'name' : 'Lepton_phi[1]',
#     'range': (12, -3.142, 3.142),
#     'xaxis': 'lepton[1] phi',
#     'fold' : 0
# }


#####################################################
######################  MET  ########################
#####################################################

variables['met_pt']  = {
    'name' : 'PuppiMET_pt',
    'range': (50,0,500),
    'xaxis': 'MET pt',
    'fold' : 3
}
# variables['met_phi'] = {
#     'name' : 'PuppiMET_phi',
#     'range': (12, -3.142, 3.142),
#     'xaxis': 'MET phi',
#     'fold' : 0
# }


#####################################################
######################  Jets  #######################
#####################################################

variables['jet0_pt'] = {
   'name' : 'Alt$(CleanJet_pt[0], -1)',
   'range': (50, 0, 1000),
   'xaxis': 'clJet[0] pt',
   'fold' : 3
}
# variables['jet0_eta'] = {
#     'name' : 'Alt$(CleanJet_eta[0], -99)',
#     'range': ([-2.5, -2.1, -1.6, -1.4, 0.0, 1.4, 1.6, 2.1, 2.5],),
#     'xaxis': 'clJet[0] eta',
#     # 'divideByBinWidth' : 1,
#     'fold' : 3
# }

# variables['jet1_pt'] = {
#    'name' : 'Alt$(CleanJet_pt[1], -1)',
#    'range': (50, 0, 1000),
#    'xaxis': 'clJet[1] pt',
#    'fold' : 3
# }
# variables['jet1_eta'] = {
#     'name' : 'Alt$(CleanJet_eta[1], -99)',
#     'range': ([-2.5, -2.1, -1.6, -1.4, 0.0, 1.4, 1.6, 2.1, 2.5],),
#     'xaxis': 'clJet[1] eta',
#     # 'divideByBinWidth' : 1,
#     'fold' : 3
# }


#####################################################
#############  High Mass HWW variables  ############
#####################################################
#
# variables['higgsGenM'] = {
#     'name' : 'HM_higgsGenMass',
#     'range': (100, 0, 1500),
#     'xaxis': 'higgsGenMass',
#     'fold' : 3
# }

# variables['resolvHiggsMass'] = {
#     'name' : 'HM_Hlnjj_mass',
#     'range': ([0, 100, 150, 250, 300, 350, 400, 450, 500, 600, 750, 900, 1100, 1500, 2500, 5000],),#(30, 0, 1500),
#     'xaxis': 'reconstr. H mass',
#     'fold' : 3
# }
# variables['boostHigssMass'] = {
#     'name' : 'HM_CleanFatJetPassMBoosted_HlnFat_mass[0]',
#     'range': ([0, 100, 150, 250, 300, 350, 400, 450, 500, 600, 750, 900, 1100, 1500, 2500, 5000],),#(30, 0, 1500),
#     'xaxis': 'reconstr. H mass',
#     'fold' : 3
# }

variables['plot_resolvHMass'] = {
    'name' : 'HM_Hlnjj_mass',
    'range': (24, 0, 1200),
    'xaxis': 'reconstr. H mass [GeV]',
    'fold' : 3
}
variables['plot_boostHMass'] = {
    'name' : 'HM_CleanFatJetPassMBoosted_HlnFat_mass[0]',
    'range': (24, 0, 1200),
    'xaxis': 'reconstr. H mass [GeV]',
    'fold' : 3
}

variables['resolvWhadMass'] = {
    'name' : 'HM_Whad_mass',
    'range': (40, 0, 200),
    'xaxis': 'resolv W had mass',
    'fold' : 3
}
variables['boostWhadMass'] = {
    'name' : 'HM_CleanFatJetPassMBoosted_mass[0]',
    'range': (40, 0, 200),
    'xaxis': 'boosted W had mass',
    'fold' : 3
}






# variables['boostWptOvHM'] = {
#     'name': 'Alt$(HM_CleanFatJetPassMBoosted_WptOvHfatM[0], 0)',
#     'range': (40, 0.0, 1.0),
#     'xaxis': 'Wpt / m_H',
#     'fold': 3
# }
# variables['resolvWptOvHM'] = {
#     'name': 'HM_WptOvHak4M',
#     'range': (40, 0.0, 1.0),
#     'fold': 3
# }
# variables['tau21'] = {
#     'name': 'Alt$(HM_CleanFatJetPassMBoosted_tau21[0], 999)',
#     'range': (40, 0.0, 1.0),
#     'xaxis': 'tau_21',
#     'fold': 3
# }
# variables['WlepMT'] = {
#     'name': 'WlepMT[0]',
#     'range': (30, 0.0, 150.0),
#     'xaxis': 'WlepMT',
#     'fold': 3
# }
variables['boostHiggsMT'] = {
    'name' : 'boostHiggsMT[0]',
    'range': (24, 0, 1200),
    'xaxis': 'reconstr. H mt',
    'fold' : 3
}
variables['resolvHiggsMT'] = {
    'name' : 'resolvHiggsMT[0]',
    'range': (24, 0, 1200),
    'xaxis': 'reconstr. H mt',
    'fold' : 3
}


# variables['IsBoosted'] = {
#     'name' : 'HM_IsBoosted',
#     'range': (2, -0.5, 1.5),
#     'xaxis': 'tagged IsBoosted',
#     'fold' : 0
# }
# variables['boosted'] = {
#     'name' : 'boosted',
#     'range': (2, -0.5, 1.5),
#     'xaxis': 'tagged boosted',
#     'fold' : 0
# }
# variables['IsResolved'] = {
#     'name' : 'HM_IsResolved',
#     'range': (2, -0.5, 1.5),
#     'xaxis': 'tagged IsResolved',
#     'fold' : 0
# }
# variables['resolved'] = {
#     'name' : 'resolved',
#     'range': (2, -0.5, 1.5),
#     'xaxis': 'tagged resolved',
#     'fold' : 0
# }

variables['IsVbfjj'] = {
    'name' : 'HM_IsVbfjj',
    'range': (2, -0.5, 1.5),
    'xaxis': 'tagged Vbfjj',
    'fold' : 0
}
variables['IsVbfFat'] = {
    'name' : 'HM_IsVbfFat',
    'range': (2, -0.5, 1.5),
    'xaxis': 'tagged VbfFat',
    'fold' : 0
}

# variables['nCleanFatJetPassMBoosted'] = {
#     'name' : 'nCleanFatJetPassMBoosted',
#     'range': ([0, 1, 2, 3, 4],),
#     'xaxis': 'number of boosted W candidates',
#     'fold' : 0
# }

variables['DNN_isVBF'] = {
    'name': 'DNN_isVBF',
    'range': (10, 0, 1),
    'xaxis': 'DNN_isVBF',
    'fold': 0
}

variables['DNN_mth'] = {
    'name': 'DNN_mth',
    'range': (24, 0, 1200),
    'xaxis': 'DNN_mth',
    'fold': 3
}
