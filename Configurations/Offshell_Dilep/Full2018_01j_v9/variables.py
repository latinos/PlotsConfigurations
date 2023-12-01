# variables



#########################################################################

variables['events']  = {   
    'name': '1',
    'range' : (1,0,2),
    'xaxis' : 'events',
    'fold' : 3
}

###add variables you want to plot, taken from aliases additions###

##when running on 1 jet, change 0j -> 1j on cuts and variable name
##0jet
variables['dnnScore_MAX_0j']  = {   'name': 'dnnScore_MAX_0j',
                                     'range' : (8, -1.0,7.0), # 4 cat so maybe (6, -1.0,6.0)
                                     'xaxis' : 'CAT INDEX',
                                     'fold' : 3,
                                     'cuts' : [cut for cut in cuts if '0j' in cut]
                        }

variables['dnnScore_ggH_OFF_0j']  = {   'name': 'dnnScore_ggH_OFF_0j',
                                     'range' : (20, 0,1.0), 
                                     'xaxis' : 'dnn_{ggH_off} [GeV]',
                                     'fold' : 3,
                                     'cuts' : [cut for cut in cuts if 'OFF_0j' in cut]
                        }

variables['dnnScore_ggH_ON_0j']  = {   'name': 'dnnScore_ggH_ON_0j',
                                    'range' : (20, 0,1.0),
                                    'xaxis' : 'dnn_{ggH_on} [GeV]',
                                    'fold' : 3,
                                    'cuts' : [cut for cut in cuts if 'ON_0j' in cut]
                                }

variables['dnnScore_top_0j']  = {   'name': 'dnnScore_top_0j',
                                 'range' : (20, 0,1.0),
                                 'xaxis' : 'dnn_{top} [GeV]',
                                 'fold' : 3,
                                 'cuts' : [cut for cut in cuts if 'topCR_0j' in cut]
                                }

variables['dnnScore_WW_0j']  = {   'name': 'dnnScore_WW_0j',
                                'range' : (20, 0,1.0),
                                'xaxis' : 'dnn_{WW} [GeV]',
                                'fold' : 3,
                                'cuts' : [cut for cut in cuts if 'WWCR_0j' in cut]
                                }
##1jet
variables['dnnScore_MAX_1j']  = {   'name': 'dnnScore_MAX_1j',
                                     'range' : (8, -1.0,7.0), # 4 cat so maybe (6, -1.0,6.0)   
                                     'xaxis' : 'CAT INDEX',
                                     'fold' : 3,
                                     'cuts' : [cut for cut in cuts if '1j' in cut]
                        }

variables['dnnScore_ggH_OFF_1j']  = {   'name': 'dnnScore_ggH_OFF_1j',
                                     'range' : (20, 0,1.0),
                                     'xaxis' : 'dnn_{ggH_off} [GeV]',
                                     'fold' : 3,
                                     'cuts' : [cut for cut in cuts if 'OFF_1j' in cut]
                        }

variables['dnnScore_ggH_ON_1j']  = {   'name': 'dnnScore_ggH_ON_1j',
                                    'range' : (20, 0,1.0),
                                    'xaxis' : 'dnn_{ggH_on} [GeV]',
                                    'fold' : 3,
                                    'cuts' : [cut for cut in cuts if 'ON_1j' in cut]
                                }

variables['dnnScore_top_1j']  = {   'name': 'dnnScore_top_1j',
                                 'range' : (20, 0,1.0),
                                 'xaxis' : 'dnn_{top} [GeV]',
                                 'fold' : 3,
                                 'cuts' : [cut for cut in cuts if 'topCR_1j' in cut]
                                }

variables['dnnScore_WW_1j']  = {   'name': 'dnnScore_WW_1j',
                                'range' : (20, 0,1.0),
                                'xaxis' : 'dnn_{WW} [GeV]',
                                'fold' : 3,
                                'cuts' : [cut for cut in cuts if 'WWCR_1j' in cut]
                                }
##

variables['mll']  = {   'name': 'mll',
                        'range' : (30, 30,250),
                        'xaxis' : 'm_{ll} [GeV]',
                        'fold' : 3
                        }


variables['drll']  = {   'name': 'drll',
                         'range' : (30, 0.25, 2.5),
                        'xaxis' : '#Delta R_{ll}',
                        'fold' : 3
                        }
###1 jet cat###
# variables['mjj']  = {   'name': 'mjj',
#                         'range' : (50, 400,1000),
#                         'xaxis' : 'm_{jj} [GeV]',
#                         'fold' : 3
#                         }

# variables['detajj']  = {   'name': 'detajj',
#                         'range' : (10, 3,10),
#                         'xaxis' : '#Delta#eta_{jj} [GeV]',
#                         'fold' : 3
#                         }

# variables['dphijj']  = {   'name': 'dphijj',
#                         'range' : (40, -4,4),
#                         'xaxis' : '#Delta#phi_{jj} [GeV]',
#                         'fold' : 3
#                         }

# variables['qgl_j1'] = {'name': 'Jet_qgl[CleanJet_jetIdx[0]]',
#                         'range' : (20,0,1),
#                         'xaxis' : 'gql_{j1}',
#                         'fold'  : 3
#                         }
###0 jet cat comment out above to 1 jet cat###

# variables['detall']  = {   'name': 'abs(Lepton_eta[0]-Lepton_eta[1])',
#                            'range' : (30, 0, 5),
#                            'xaxis' : 'deta_{ll} [GeV]',
#                         'fold' : 3
#                         }


# variables['drll_zoom']  = {   'name': 'drll',
#                         'range' : (40, 0, 1),
#                         'xaxis' : 'zoom dr_{ll} [GeV]',
#                         'fold' : 3
#                         }


variables['mth']  = {   'name': 'mth',
                        'range' : (30, 50,400),
                        'xaxis' : 'm_{T}^{ll, p_{T}^{miss}} [GeV]',
                        'fold' : 3
                        }

variables['mtw2']  = {   'name': 'mtw2',
                        'range' : (30, 20,300),
                         'xaxis' : 'm_{T}^{p_{T}^{min}, p_{T}^{miss}} [GeV]',
                        'fold' : 3
                        }



# variables['mT2']  = {   'name': 'mT2',
#                         'range' : (30, 20,300),
#                         'xaxis' : 'm_{T}^{2} [GeV]',
#                         'fold' : 0
#                         }


# variables['mTi']  = {   'name': 'mTi',
#                         'range' : (40, 20,300),
#                         'xaxis' : 'm_{ll+MET} [GeV]',
#                         'fold' : 0
#                         }

variables['ptll']  = {   'name': 'ptll',     
                        'range' : (30, 30,300),   
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 3
                        }

variables['pt1']  = {   'name': 'Lepton_pt[0]',     
                        'range' : (30,25,250),   
                        'xaxis' : 'p_{T}^{max} [GeV]',
                        'fold'  : 3
                        }

variables['pt2']  = {   'name': 'Lepton_pt[1]',     
                        'range' : (30,20,150),   
                        'xaxis' : 'p_{T}^{min} [GeV]',
                        'fold'  : 3 
                        }

# variables['eta1']  = {  'name': 'Lepton_eta[0]',     
#                         'range' : (30,-3,3),   
#                         'xaxis' : '#eta^{max}',
#                         'fold'  : 3                         
#                         }

# variables['eta2']  = {  'name': 'Lepton_eta[1]',     
#                         'range' : (30,-3,3),   
#                         'xaxis' : '#eta^{min}',
#                         'fold'  : 3                         
#                         }

                        
# variables['phi1']  = {  'name': 'Lepton_phi[0]',
#                         'range' : (40,-3.2,3.2),
#                         'xaxis' : '#phi 1st lep',
#                         'fold'  : 3
#                         }

# variables['phi2']  = {  'name': 'Lepton_phi[1]',
#                         'range' : (40,-3.2,3.2),
#                         'xaxis' : '#phi 2nd lep',
#                         'fold'  : 3
#                         }

variables['puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (30,20,300),
                        'xaxis' : 'p_{T}^{miss} [GeV]',
                        'fold'  : 3
                        }


# variables['PfMetDivSumMet']  = {
#                         'name': 'PfMetDivSumMet',
#                         'range' : (30,0,10),
#                         'xaxis' : 'METsig',
#                         'fold'  : 3
#                         }


# variables['pfmet']  = {
#                         'name': 'MET_pt',
#                         'range' : (40,0,200),
#                         'xaxis' : 'pfmet [GeV]',
#                         'fold'  : 3
#                         }


# variables['Fixedpfmet']  = {
#                         'name': 'METFixEE2017_pt',
#                         'range' : (40,0,300),
#                         'xaxis' : 'Fixedpfmet [GeV]',
#                         'fold'  : 3
#                         }


# variables['njet']  = {
#                         'name': 'Sum$(CleanJet_pt>30)',     
#                         'range' : (5,0,5),   
#                         'xaxis' : 'Number of jets',
#                         'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                         }

# variables['jetpt1']  = {
#                         'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_pt[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
#                         'range' : (40,0,200),
#                         'xaxis' : 'p_{T} 1st jet',
#                         'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                         }

# variables['jetpt2']  = {
#                         'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_pt[1], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
#                         'range' : (40,0,200),
#                         'xaxis' : 'p_{T} 2nd jet',
#                         'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                         }

# variables['jeteta1']  = {  'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_eta[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
#                         'range' : (40,-5.0,5.0),
#                         'xaxis' : '#eta 1st jet',
#                         'fold'  : 0
#                         }

# variables['jeteta2']  = {  'name': '(Sum$(CleanJet_pt>30)>1)*(Alt$(CleanJet_eta[1], 0)) - (Sum$(CleanJet_pt>30)<=1)*99',
#                         'range' : (40,-5.0,5.0),
#                         'xaxis' : '#eta 2nd jet',
#                         'fold'  : 0
#                         }

# variables['trkMet']  = {   'name': 'TkMET_pt',
#                         'range' : (40,0,200),
#                         'xaxis' : 'trk met [GeV]',
#                          'fold' : 3
#                         }

variables['dphill']  = {   'name': 'abs(dphill)',     
                        'range' : (30,0,3.14),   
                        'xaxis' : '#Delta#phi_{ll}',
                        'fold' : 3
                        }


variables['dphillmet']  = {   'name': 'dphillmet',     
                        'range' : (30,0.5,3.14),   
                        'xaxis' : '#Delta#phi_{ll, p_{T}^{miss}}',
                        'fold' : 3
                        }



# variables


# variables['D2j_VBF'] = {
#     'name': 'me_vbf/(me_vbf+me_ggH)',
#     'range' : (30,0,1),
#     'xaxis' : 'D2j_VBF',
#     'fold' : 3,
# }

# variables['D2j_VBF'] = {
#     'name': 'me_vbf/(me_vbf+constant*me_ggH)',
#     'range' : (30,0,1),
#     'xaxis' : 'D2j_VBF_constant',
#     'fold' : 3,
# }

