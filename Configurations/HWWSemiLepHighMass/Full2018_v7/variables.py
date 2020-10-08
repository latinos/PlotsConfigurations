# # variables
#
# variables = {}

controlRegions = {x for x in cuts if 'SB' in x or 'TopCR' in x}
signalRegions  = {x for x in cuts if 'SR' in x}
hmGGF = {x for x in cuts if 'HMSR' in x and 'GGF' in x}
hmVBF = {x for x in cuts if 'HMSR' in x and 'VBF' in x}
hmSR  = {x for x in cuts if 'HMSR' in x}
boostedGGF  = {x for x in cuts if 'BoostedSR' in x and 'GGF' in x}
boostedVBF  = {x for x in cuts if 'BoostedSR' in x and 'VBF' in x}
boostedSR   = {x for x in cuts if 'BoostedSR' in x}
resolvedGGF = {x for x in cuts if 'ResolvedSR' in x and 'GGF' in x}
resolvedVBF = {x for x in cuts if 'ResolvedSR' in x and 'VBF' in x}
resolvedSR  = {x for x in cuts if 'ResolvedSR' in x}
boosted =  [x for x in cuts if "Boosted" in x or "HM" in x]
resolved = [x for x in cuts if "Resolved" in x]

variables['events']  = {
    'name' : '1',
    'range': (1,0,2),
    'xaxis': 'events',
    'fold' : 3,
    'cuts' : controlRegions
}


#####################################################
############  High Mass category ideas  #############
#####################################################

# variables['dR_WW_boosted'] = {
#     'name' : 'dR_WW_boosted',
#     'range': (30,0,10),
#     'xaxis': '(boosted) #Delta R WW',
#     'fold' : 3
# }
# variables['b2b_WW_boosted'] = {
#     'name' : 'b2b_WW_boosted',
#     'range': (30,0,10),
#     'xaxis': '(boosted) WW deviation from b2b',
#     'fold' : 3
# }
# variables['dPhi_WW_boosted'] = {
#     'name' : 'abs(dPhi_WW_boosted[0])',
#     'range': (15, 0, 3.5),
#     'xaxis': '(boosted) abs(#Delta#Phi WW)',
#     'fold' : 3
# }
# variables['dPhi_LNu'] = {
#     'name' : 'abs(dPhi_LNu[0])',
#     'range': (15,0,2.5),
#     'xaxis': 'abs(#Delta#Phi l#nu)',
#     'fold' : 3
# }
# variables['fatJetPt'] = {
#     'name' : 'Alt$(HM_CleanFatJetPassMBoosted_pt[0], -9099)',
#     'range': (24,0,1200),
#     'xaxis': '(boosted) W ',
#     'fold' : 3
# }
# variables['pt_sum_boosted'] = {
#     'name' : 'Lepton_pt[0] + PuppiMET_pt + Alt$(HM_CleanFatJetPassMBoosted_pt[0], -9099)',
#     'range': (50,0,2500),
#     'xaxis': '(boosted) sum(pT)',
#     'fold' : 3
# }

# #####################################################
# ##################  Lepton 0  #######################
# #####################################################
#
variables['lepton0_pt'] = {
    'name' : 'Lepton_pt[0]',
    'range': (25,0,400),
    'xaxis': 'p_{T} 1st lep. [GeV]',
    'fold' : 3
}
variables['lepton0_eta'] = {
    'name' : 'Lepton_eta[0]',
    'range': (25, -2.5, 2.5),
    'xaxis': '#eta 1st lep.',
    # 'divideByBinWidth' : 1,
    'fold' : 0
}
# variables['lepton0_phi'] = {
#     'name' : 'Lepton_phi[0]',
#     'range': (12, -3.142, 3.142),
#     'xaxis': 'lepton[0] phi',
#     'fold' : 0
# }




#####################################################
######################  MET  ########################
#####################################################

variables['met_pt'] = {
    'name' : 'PuppiMET_pt',
    'range': (25,0,400),
    'xaxis': 'MET [GeV]',
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
   'range': (25, 0, 400),
   'xaxis': 'p_{T} 1st jet [GeV]',
   'fold' : 3
}
variables['jet0_eta'] = {
    'name' : 'Alt$(CleanJet_eta[0], -99)',
    'range': (30, -4.7, 4.7),
    'xaxis': '#eta 1st jet',
    'fold' : 3
}
# variables['jet0_phi'] = {
#     'name' : 'Alt$(CleanJet_phi[0], -99)',
#     'range': (12, -3.142, 3.142),
#     'xaxis': 'lepton[0] phi',
#     'fold' : 0
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

variables['resolvHiggsMass'] = {
    'name' : 'HM_Hlnjj_mass',
    # 'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600,
    #           650, 700, 750, 800, 900, 1100, 1500, 2500],),
    'range': ([0, 200, 250, 290, 330, 370, 420, 470, 520,
               570, 620, 670, 720, 775, 870, 1000, 2000],),
    'xaxis': 'reconstr. H mass [GeV]',
    'cuts' : resolvedSR,
    'fold' : 3
}
variables['boostHiggsMass_ggf'] = {
    'name' : 'HM_CleanFatJetPassMBoosted_HlnFat_mass[0]',
    # 'range': ([0, 200, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800,
    #           900, 1000, 1100, 1200, 1350, 1500, 1700, 2000, 3000, 5000],),
    'range': ([0, 220, 300, 350, 400, 450, 490, 530, 580, 630, 680,
               730, 780, 840, 950, 1075, 1175, 1370, 1900, 5000],),
    'xaxis': 'reconstr. H mass [GeV]',
    'cuts' : boostedSR,
    'fold' : 3
}
variables['boostHiggsMass_vbf'] = {
    'name' : 'HM_CleanFatJetPassMBoosted_HlnFat_mass[0]',
    # 'range': ([0, 200, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800,
    #           900, 1000, 1100, 1200, 1350, 1500, 1700, 2000, 3000, 5000],),
    'range': ([0, 220, 300, 350, 400, 450, 490, 530, 580, 630, 680,
               730, 780, 840, 950, 1100, 1300, 1800, 5000],),
    'xaxis': 'reconstr. H mass [GeV]',
    'cuts' : boostedSR,
    'fold' : 3
}
variables['hmHiggsMass'] = {
    'name' : 'HM_CleanFatJetPassMBoosted_HlnFat_mass[0]',
    # 'range': ([0, 900, 1000, 1100, 1200, 1350, 1500, 1700, 2000, 3000, 5000],),
    # 'range': ([0, 900, 1000, 1100, 1200, 1325, 1580, 2050, 5000],),
    'range': ([0, 900, 990, 1085, 1185, 1300, 1550, 2000, 5000],),
    'xaxis': 'reconstr. H mass [GeV]',
    'cuts' : hmSR,
    'fold' : 3
}


variables['plot_resolvHMass'] = {
    'name' : 'HM_Hlnjj_mass',
    'range': (24, 0, 1200),
    'xaxis': 'reconstr. H mass [GeV]',
    'fold' : 3,
    'cuts': resolved,
}
variables['plot_boostHMass'] = {
    'name' : 'HM_CleanFatJetPassMBoosted_HlnFat_mass[0]',
    'range': (40, 0, 2000),
    'xaxis': 'reconstr. H mass [GeV]',
    'fold' : 3,
    'cuts': boosted,
}

variables['resolvWhadMass'] = {
    'name' : 'HM_Whad_mass',
    'range': (25, 0, 250),
    'xaxis': 'm_{jj} [GeV]',
    'fold' : 3,
    'cuts': resolved,
}
variables['boostWhadMass'] = {
    'name' : 'HM_CleanFatJetPassMBoosted_mass[0]',
    'range': (25, 0, 250),
    'xaxis': 'm_J [GeV]',
    'fold' : 3,
    'cuts': boosted,
}

variables['WlepMT'] = {
    'name': 'WlepMT[0]',
    'range': (15, 0.0, 150.0),
    'xaxis': 'M_T^{l#nu} [GeV]',
    'fold': 3
}

# variables['resolv_btagPt'] = {
#     'name': 'btagJetPt_resolv[0]',
#     'range': (30, 0.0, 150.0),
#     'xaxis': 'highest p_{T} of b-tagged jet [GeV]',
#     'fold': 3,
#     'cuts': resolved,
# }
# variables['boost_btagPt'] = {
#     'name': 'btagJetPt_boost[0]',
#     'range': (30, 0.0, 150.0),
#     'xaxis': 'highest p_{T} of b-tagged jet [GeV]',
#     'fold': 3,
#     'cuts': boosted,
# }

# variables['WvsQCD_tau'] = {
#     'name': 'Alt$(FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[HM_CleanFatJetPassMBoosted_CFatJetIdx[0]]], -1)',
#     'range': (40, 0.0, 1.0),
#     'xaxis': 'WvsQCD DNN score',
#     'fold': 0
# }
# variables['WvsQCD_notau'] = {
#     'name': 'Alt$(FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[(int)idxCleanFatJetW]], -1)',
#     'range': (40, 0.0, 1.0),
#     'xaxis': 'WvsQCD DNN score',
#     'fold': 0
# }
#
# variables['WvsQCD_tau_MD'] = {
#     'name': 'Alt$(FatJet_deepTagMD_WvsQCD[CleanFatJet_jetIdx[HM_CleanFatJetPassMBoosted_CFatJetIdx[0]]], -1)',
#     'range': (40, 0.0, 1.0),
#     'xaxis': 'WvsQCD MD DNN score',
#     'fold': 0
# }
# variables['WvsQCD_notau_MD'] = {
#     'name': 'Alt$(FatJet_deepTagMD_WvsQCD[CleanFatJet_jetIdx[(int)idxCleanFatJetW]], -1)',
#     'range': (40, 0.0, 1.0),
#     'xaxis': 'WvsQCD MD DNN score',
#     'fold': 0
# }

# variables['tau21'] = {
    # 'name': 'Alt$(CleanFatJet_tau21[(int)idxCleanFatJetW], 999)',
    # 'range': (40, 0.0, 1.0),
    # 'xaxis': 'tau_{21}',
    # 'fold': 3
# }
# variables['tau21DDT'] = {
#     'name': 'tau21DDT[0]',
#     'range': (40, 0.0, 1.0),
#     'xaxis': 'tau_{21} DDT',
#     'fold': 3
# }
#
#
# variables['bVeto'] = {
#     'name': 'bVeto[0]',
#     'range': (2, -0.5, 1.5),
#     'xaxis': 'bVeto',
#     'fold': 0
# }
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
# variables['idxCleanFatJetW'] = {
#     'name': 'idxCleanFatJetW',
#     'range': (6, -1.5, 4.5),
#     'xaxis': 'idx'
# }

# variables['WlepPT'] = {
#     'name': 'TMath::Sqrt( TMath::Power(Lepton_pt[0], 2) + TMath::Power(PuppiMET_pt, 2) + 2*Lepton_pt[0]*PuppiMET_pt*TMath::Cos(Lepton_phi[0]-PuppiMET_phi) )',
#     'range': (20, 0.0, 400.0),
#     'xaxis': 'Wlep pT',
#     'fold': 3
# }

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

# variables['higgsMt'] = {
#     'name' : 'Hlnjj_mt',
#     'range': (30, 0, 1500),
#     'xaxis': 'reconstr. H mt',
#     'fold' : 0
# }

# variables['nCleanJet'] = {
#     'name' : 'nCleanJet',
#     'range': ([0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11],),
#     'xaxis': 'nCleanJet',
#     'fold' : 3
# }
# variables['nCleanFatJet'] = {
#     'name' : 'nCleanFatJet',
#     'range': ([0, 1, 2, 3, 4, 5],),
#     'xaxis': 'nCleanFatJet',
#     'fold' : 3
# }
