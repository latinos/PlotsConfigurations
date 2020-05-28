# variables

#variables = {}



variables['events']  = {
    'name' : '1',
    'range': (1,0,2),
    'xaxis': 'events',
    'fold' : 3
}

#####################################################
############  High Mass category ideas  #############
#####################################################

# variables['dR_WW_boosted']  = {
#     'name' : 'dR_WW_boosted',
#     'range': (30,0,10),
#     'xaxis': '(boosted) #Delta R WW',
#     'fold' : 3
# }
# variables['b2b_WW_boosted']  = {
#     'name' : 'b2b_WW_boosted',
#     'range': (30,0,10),
#     'xaxis': '(boosted) WW deviation from b2b',
#     'fold' : 3
# }
# variables['dPhi_WW_boosted']  = {
#     'name' : 'dPhi_WW_boosted[0]',
#     'range': (40, -4, 4),
#     'xaxis': '(boosted) #Delta#Phi WW',
#     'fold' : 3
# }
# variables['dPhi_LNu']  = {
#     'name' : 'dPhi_LNu[0]',
#     'range': (50,-2,2),
#     'xaxis': '#Delta#Phi l#nu',
#     'fold' : 3
# }
# variables['fatJetPt']  = {
#     'name' : 'Alt$(CleanFatJetPassMBoosted_pt[0], -9099)',
#     'range': (24,0,1200),
#     'xaxis': '(boosted) W ',
#     'fold' : 3
# }
# variables['pt_sum_boosted']  = {
#     'name' : 'Lepton_pt[0] + PuppiMET_pt + Alt$(CleanFatJetPassMBoosted_pt[0], -9099)',
#     'range': (50,0,2500),
#     'xaxis': '(boosted) sum(pT)',
#     'fold' : 3
# }

#####################################################
##################  Lepton 0  #######################
#####################################################

variables['lepton0_pt']  = {
    'name' : 'Lepton_pt[0]',
    'range': (25,0,500),
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
#     'range': (50,0,250),
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
    'range': (40,0,400),
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
   'range': (20, 0, 800),
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
#    'range': (24, 0, 1200),
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
#     'name' : 'higgsGenMass',
#     'range': (100, 0, 1500),
#     'xaxis': 'higgsGenMass',
#     'fold' : 3
# }
variables['resolvHiggsMass'] = {
    'name' : 'Hlnjj_mass',
    'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 900, 1100, 1500, 2500],),#(30, 0, 1500),
    'xaxis': 'reconstr. H mass',
    'fold' : 3
}
variables['boostHigssMass'] = {
    'name' : 'CleanFatJetPassMBoosted_HlnFat_mass[0]',
    'range': ([0, 200, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 900, 1000, 1100, 1200, 1350, 1500, 1700, 2000, 3000, 5000],),#(30, 0, 1500),
    'xaxis': 'reconstr. H mass',
    'fold' : 3
}
variables['hmHigssMass'] = {
    'name' : 'CleanFatJetPassMBoosted_HlnFat_mass[0]',
    'range': ([0, 800, 900, 1000, 1100, 1200, 1350, 1500, 1700, 2000, 3000, 5000],),#(30, 0, 1500),
    'xaxis': 'reconstr. H mass',
    'fold' : 3
}
variables['resolvDNN_mth'] = {
    'name' : 'DNN_mth_OTF',
    'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 900, 1100, 1500, 2500],),#(30, 0, 1500),
    'xaxis': 'DNN_mth_OTF',
    'fold' : 3
}
variables['boostDNN_mth'] = {
    'name' : 'DNN_mth_OTF',
    'range': ([0, 200, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 900, 1000, 1100, 1200, 1350, 1500, 1700, 2000, 3000, 5000],),#(30, 0, 1500),
    'xaxis': 'DNN_mth_OTF',
    'fold' : 3
}
variables['hmDNN_mth'] = {
    'name' : 'DNN_mth_OTF',
    'range': ([0, 800, 900, 1000, 1100, 1200, 1350, 1500, 1700, 2000, 3000, 5000],),#(30, 0, 1500),
    'xaxis': 'DNN_mth_OTF',
    'fold' : 3
}

# variables['plot_resolvHMass'] = {
#     'name' : 'Hlnjj_mass',
#     'range': (24, 0, 1200),
#     'xaxis': '(resolv) reconstr. H mass [GeV]',
#     'fold' : 3
# }
# variables['plot_boostHMass'] = {
#     'name' : 'CleanFatJetPassMBoosted_HlnFat_mass[0]',
#     'range': (24, 0, 1200),
#     'xaxis': '(boost) reconstr. H mass [GeV]',
#     'fold' : 3
# }
#
# variables['resolvWhadMass'] = {
#     'name' : 'Whad_mass',
#     'range': (25, 0, 250),
#     'xaxis': 'resolv W had mass',
#     'fold' : 3
# }
# variables['boostWhadMass'] = {
#     'name' : 'CleanFatJetPassMBoosted_mass[0]',
#     'range': (25, 0, 250),
#     'xaxis': 'boosted W had mass',
#     'fold' : 3
# }







# variables['bVeto'] = {
#     'name': 'bVeto[0]',
#     'range': (2, -0.5, 1.5),
#     'xaxis': 'bVeto',
#     'fold': 0
# }
# variables['boostWptOvHM'] = {
#     'name': 'Alt$(CleanFatJetPassMBoosted_WptOvHfatM[0], 0)',
#     'range': (40, 0.0, 1.0),
#     'xaxis': 'Wpt / m_H',
#     'fold': 3
# }
# variables['resolvWptOvHM'] = {
#     'name': 'WptOvHak4M',
#     'range': (40, 0.0, 1.0),
#     'fold': 3
# }
# variables['tau21'] = {
#     'name': 'Alt$(CleanFatJet_tau21[(int)idxCleanFatJetW], 999)',
#     'range': (40, 0.0, 1.0),
#     'xaxis': 'tau_21',
#     'fold': 3
# }
# variables['tau21DDT'] = {
#     'name': 'tau21DDT[0]',
#     'range': (40, 0.0, 1.0),
#     'xaxis': 'tau_21 DDT',
#     'fold': 3
# }
# variables['idxCleanFatJetW'] = {
#     'name': 'idxCleanFatJetW',
#     'range': (6, -1.5, 4.5),
#     'xaxis': 'idx'
# }
variables['WlepMT'] = {
    'name': 'WlepMT[0]',
    'range': (15, 0.0, 150.0),
    'xaxis': 'WlepMT',
    'fold': 3
}
variables['WlepPT'] = {
    'name': 'TMath::Sqrt( TMath::Power(Lepton_pt[0], 2) + TMath::Power(PuppiMET_pt, 2) + 2*Lepton_pt[0]*PuppiMET_pt*TMath::Cos(Lepton_phi[0]-PuppiMET_phi) )',
    'range': (20, 0.0, 400.0),
    'xaxis': 'Wlep pT',
    'fold': 3
}
# variables['boostHiggsMT'] = {
#     'name' : 'boostHiggsMT[0]',
#     'range': (24, 0, 1200),
#     'xaxis': 'reconstr. H mt',
#     'fold' : 3
# }
# variables['resolvHiggsMT'] = {
#     'name' : 'resolvHiggsMT[0]',
#     'range': (24, 0, 1200),
#     'xaxis': 'reconstr. H mt',
#     'fold' : 3
# }
# variables['dnnHiggsMT'] = {
#     'name' : 'DNN_mth_OTF[0]',
#     'range': (24, 0, 1200),
#     'xaxis': 'DNN H mt',
#     'fold' : 3
# }
# variables['Lep1TightWP'] = {
#     'name': 'Lep1WPCut',
#     'range': (2, -0.5, 1.5),
#     'xaxis': 'subleading lep tight WP',
#     'fold': 0
# }








# variables['higgsMt'] = {
#     'name' : 'Hlnjj_mt',
#     'range': (30, 0, 1500),
#     'xaxis': 'reconstr. H mt',
#     'fold' : 0
# }

# variables['IsBoosted'] = {
#     'name' : 'IsBoosted',
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
#     'name' : 'IsResolved',
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

# variables['IsVbfjj'] = {
#     'name' : 'IsVbfjj',
#     'range': (2, -0.5, 1.5),
#     'xaxis': 'tagged Vbfjj',
#     'fold' : 0
# }
# variables['IsVbfFat'] = {
#     'name' : 'IsVbfFat',
#     'range': (2, -0.5, 1.5),
#     'xaxis': 'tagged VbfFat',
#     'fold' : 0
# }

# variables['nCleanFatJetPassMBoosted'] = {
#     'name' : 'nCleanFatJetPassMBoosted',
#     'range': ([0, 1, 2, 3, 4],),
#     'xaxis': 'number of boosted W candidates',
#     'fold' : 0
# }
