# variables

#variables = {}
 
'''
variables['mjj'] = { 'name' : 'mjj',
                     'range': (80,0,4000),
                     'xaxis': 'm_{jj}',
                     'fold' : 3 
                   }
variables['ptjj'] = { 'name' : 'ptjj[0]',
                     'range': (50,0,1000),
                     'xaxis': 'p_{T}^{jj}',
                     'fold' : 3 
                   }
variables['ptl1'] = { 'name' : 'Lepton_pt[0]',
                     'range': (20,0,400),
                     'xaxis': 'p_{T}^{lep1}',
                     'fold' : 3 
                   }
variables['ptl2'] = { 'name' : 'Lepton_pt[1]',
                     'range': (20,0,400),
                      'xaxis': 'p_{T}^{lep2}',
                     'fold' : 3 
                   }
variables['met'] = { 'name' : 'PuppiMET_pt',
                     'range': (20,0,400),
                     'xaxis': 'MET',
                     'fold' : 3 
                   }
variables['mjj2'] = { 'name' : 'mjj',
                     'range': (80,0,400),
                     'xaxis': 'm_{jj}',
                     'fold' : 3 
                   }
variables['detajj'] = { 'name' : 'detajj',
                        'range': (30,0,10),
                        'xaxis': '#Delta#eta_{jj}',
                        'fold' : 3 
                   }
variables['lepcen1'] = { 'name' : 'lepcen1[0]',
                         'range': (25,0,5),
                         'xaxis': 'Centrality_{l1}',
                         'fold' : 3 
                        }
variables['lepcen2'] = { 'name' : 'lepcen2[0]',
                         'range': (25,0,5),
                         'xaxis': 'Centrality_{l2}',
                         'fold' : 3 
                        }
variables['mll'] = { 'name' : 'mll',
                     'range': (20,0,200),
                     'xaxis': 'm_{ll}',
                     'fold' : 3 
                   }
variables['njet'] = { 'name' : 'njet',
                      'range': (6,0,6),
                      'xaxis': 'number of jets',
                      'fold' : 3 
                   }
variables['nfjet'] = { 'name' : 'nCleanFatJet', # pt and tau21 cuts applied
                      'range': (5,0,5),
                      'xaxis': 'number of fat jets',
                      'fold' : 3 
                   }
variables['ptll'] = {   'name': 'ptll',
                        'range': (20,0,400),
                        'xaxis': 'p_{T}^{ll}',
                        'fold': 3
                       }
variables['mth'] = { 'name' : 'mth',
                     'range': (20,0,200),
                     'xaxis': 'm_{T}^{H}',
                     'fold' : 3
                   }
variables['mtw2'] = { 'name' : 'mtw2',
                     'range': (20,0,200),
                     'xaxis': 'm_{T}^{W2}',
                     'fold' : 3
                    }
variables['mtw1'] = { 'name' : 'mtw1',
                     'range': (20,0,200),
                      'xaxis': 'm_{T}^{W1}',
                     'fold' : 3
                    }
variables['pTWW'] = { 'name' : 'pTWW',
                     'range': (50,0,1000),
                     'xaxis': 'p_{T}^{H}',
                     'fold' : 3
                   }
variables['hm'] = { 'name' : 'hm',
                     'range': (20,0,400),
                     'xaxis': 'm_{H}',
                     'fold' : 3
                   }

############ VBF KD ############## 

variables['kd_vbf'] = { 'name' : 'kd_vbf',
                       'range': (20,0,1),
                       'xaxis': 'D_{VBF}',
                       'fold' : 3
                     }

variables['kd_vbf_hm'] = { 'name' : 'kd_vbf_hm',
                       'range': (20,0,1),
                       'xaxis': 'D_{VBF 0^{-}}',
                       'fold' : 3
                     }

variables['kd_vbf_hp'] = { 'name' : 'kd_vbf_hp',
                       'range': (20,0,1),
                       'xaxis': 'D_{VBF 0^{+}}',
                       'fold' : 3
                     }

variables['kd_vbf_hl'] = { 'name' : 'kd_vbf_hl',
                       'range': (20,0,1),
                        'xaxis': 'D_{VBF 0^{#Lambda 1}}',
                       'fold' : 3
                     }

variables['kd_qcd_hm'] = { 'name' : 'kd_qcd_hm',
                       'range': (20,0,1),
                       'xaxis': 'D_{Hjj 0^{-}}',
                       'fold' : 3
                     }

variables['kd_qcd_mixhm'] = { 'name' : 'kd_qcd_mixhm',
                       'range': (20,-1,1),
                       'xaxis': 'D_{Hjj 0^{-}}',
                       'fold' : 3
                     }
'''

variables['FatJet_area'] = {'name' : 'FatJet_area',
			    'range' : (100, 0, 20),
			    'xaxis' : 'FatJet_area',
			    'fold' : 3	
			}
variables['FatJet_mass'] = {'name' : 'FatJet_mass',
                            'range' : (100, 0, 140),
                            'xaxis' : 'FatJet_mass',
                            'fold' : 3
                        }
variables['FatJet_msoftdrop'] = {'name' : 'FatJet_msoftdrop',
                            'range' : (100, 0, 140),
                            'xaxis' : 'FatJet_msoftdrop',
                            'fold' : 3
                        }
variables['FatJet_pt'] = {'name' : 'FatJet_pt',
                            'range' : (100, 200, 400),
                            'xaxis' : 'FatJet_pt',
                            'fold' : 3
                        }
variables['nFatJet'] = {'name' : 'nFatJet',
                            'range' : (10, 0, 10),
                            'xaxis' : 'nFatJet',
                            'fold' : 3
                        }
'''
variables['nGenJet'] = {'name' : 'nGenJet',
                            'range' : (10, 0, 10),
                            'xaxis' : 'nGenJet',
                            'fold' : 3
                        }
variables['GenJet_pt'] = {'name' : 'GenJet_pt',
                            'range' : (100, 0, 200),
                            'xaxis' : 'GenJet_pt',
                            'fold' : 3
                        }
variables['GenJet_mass'] = {'name' : 'GenJet_mass',
                            'range' : (100, 0, 200),
                            'xaxis' : 'GenJet_mass',
                            'fold' : 3
                        }

variables['nGenJetAK8'] = {'name' : 'nGenJetAK8',
                            'range' : (10, 0, 10),
                            'xaxis' : 'nGenJetAK8',
                            'fold' : 3
                        }
variables['GenJetAK8_pt'] = {'name' : 'GenJetAK8_pt',
                            'range' : (100, 0, 200),
                            'xaxis' : 'GenJetAK8_pt',
                            'fold' : 3
                        }
variables['GenJetAK8_mass'] = {'name' : 'GenJetAK8_mass',
                            'range' : (100, 0, 200),
                            'xaxis' : 'GenJetAK8_mass',
                            'fold' : 3
                        }
'''
variables['Jet_area'] = {'name' : 'Jet_area',
                            'range' : (100, 0, 15),
                            'xaxis' : 'Jet_area',
                            'fold' : 3
			}
variables['Jet_mass'] = {'name' : 'Jet_mass',
                            'range' : (100, 0, 140),
                            'xaxis' : 'Jet_mass',
                            'fold' : 3
                        }
variables['Jet_pt'] = {'name' : 'Jet_pt',
                            'range' : (100, 80, 300),
                            'xaxis' : 'Jet_pt',
                            'fold' : 3
                        }
variables['nJet'] = {'name' : 'nJet',
                            'range' : (20, 0, 20),
                            'xaxis' : 'nJet',
                            'fold' : 3
                        }
variables['nSubJet'] = {'name' : 'nSubJet',
                            'range' : (10, 0, 10),
                            'xaxis' : 'nSubJet',
                            'fold' : 3
                        }
'''
variables['nSubGenJetAK8'] = {'name' : 'nSubJet',
                            'range' : (10, 0, 10),
                            'xaxis' : 'nSubGenJetAK8',
                            'fold' : 3
                        }
variables['SubGenJetAK8_pt'] = {'name' : 'SubGenJetAK8_pt',
                            'range' : (100, 0, 200),
                            'xaxis' : 'SubGenJetAK8_pt',
                            'fold' : 3
                        }
variables['SubGenJetAK8_mass'] = {'name' : 'SubGenJetAK8_mass',
                            'range' : (100, 0, 200),
                            'xaxis' : 'SubGenJetAK8_mass',
                            'fold' : 3
                        }
'''
variables['SubJet_mass'] = {'name' : 'SubJet_mass',
                            'range' : (100, 0, 80),
                            'xaxis' : 'SubJet_mass',
                            'fold' : 3
                        }
variables['SubJet_pt'] = {'name' : 'SubJet_pt',
                            'range' : (100, 80, 300),
                            'xaxis' : 'SubJet_pt',
                            'fold' : 3
                        }
variables['SubJet_tau1'] = {'name' : 'SubJet_tau1',
                            'range' : (20, 0, 0.5),
                            'xaxis' : 'SubJet_tau1',
                            'fold' : 3
                        }
variables['SubJet_tau2'] = {'name' : 'SubJet_tau2',
                            'range' : (20, 0, 0.5),
                            'xaxis' : 'SubJet_tau2',
                            'fold' : 3
                        }
variables['SubJet_tau3'] = {'name' : 'SubJet_tau3',
                            'range' : (20, 0, 0.5),
                            'xaxis' : 'SubJet_tau3',
                            'fold' : 3
                        }
variables['SubJet_tau4'] = {'name' : 'SubJet_tau4',
                            'range' : (20, 0, 0.5),
                            'xaxis' : 'SubJet_tau4',
                            'fold' : 3
                        }
variables['TrigObj_id'] = {'name' : 'TrigObj_id',
                            'range' : (23, 0, 23),
                            'xaxis' : 'TrigObj_id',
                            'fold' : 3
                        }

'''
variables['kd_vbf_mixhm'] = { 'name' : 'kd_vbf_mixhm',
                              'range': (20,-1,1),
                          'xaxis': 'D_{VBF CP}',
                          'fold' : 3
                        }
variables['mllVSkd_vbf_hm'] = {   'name': 'mll:kd_vbf_hm', 
                                 'range': ([0,0.2,0.4,0.6,0.8,1.0],[10,20,30,40,50,60,70],),
                                  'xaxis': 'm_{ll} : D_{VBF 0^{-}}',
                           'fold': 3
                       }
variables['kd_vbf_mixhp'] = { 'name' : 'kd_vbf_mixhp',
                          'range': (20,-1,1),
                          'xaxis': 'D_{VBF Int}',
                          'fold' : 3
                        }

############ VH KD ######################


variables['kd_vh'] = { 'name' : 'kd_vh',
                       'range': (10,0,1),
                       'xaxis': 'D_{VH}',
                       'fold' : 3
                     }

variables['kd_vh_hm'] = { 'name' : 'kd_vh_hm',
                       'range': (10,0,1),
                       'xaxis': 'D_{VH 0^{-}}',
                       'fold' : 3
                     }

variables['kd_vh_hp'] = { 'name' : 'kd_vh_hp',
                       'range': (10,0,1),
                       'xaxis': 'D_{VH 0^{+}}',
                       'fold' : 3
                     }

variables['kd_vh_hl'] = { 'name' : 'kd_vh_hl',
                       'range': (10,0,1),
                       'xaxis': 'D_{VH 0^{#Lambda 1}}',
                       'fold' : 3
                     }


variables['kd_vh_mixhm'] = { 'name' : 'kd_vh_mixhm',
                             'range': (10,-1,1),
                          'xaxis': 'D_{VH CP}',
                          'fold' : 3
                        }
variables['mllVSkd_vh_hm'] = {   'name': 'mll:kd_vh_hm', 
                                 'range': ([0,0.2,0.4,0.6,0.8,1.0],[10,20,30,40,50,60,70],),
                                 'xaxis': 'm_{ll} : D_{VH 0^{-}}',
                           'fold': 3
                       }
variables['kd_vh_mixhp'] = { 'name' : 'kd_vh_mixhp',
                             'range': (10,-1,1),
                          'xaxis': 'D_{VH Int}',
                          'fold' : 3
                        }

############ boosted VH KD ######################


variables['mV'] = { 'name' : 'mV[0]',
                     'range': (20,40,200),
                     'xaxis': 'm_{V}',
                     'fold' : 3 
                   }


variables['kd_Vh'] = { 'name' : 'kd_Vh',
                       'range': (10,0,1),
                       'xaxis': 'D_{V*H}',
                       'fold' : 3
                     }

variables['kd_Vh_hm'] = { 'name' : 'kd_Vh_hm',
                       'range': (10,0,1),
                       'xaxis': 'D_{V*H 0^{-}}',
                       'fold' : 3
                     }

variables['kd_Vh_hp'] = { 'name' : 'kd_Vh_hp',
                       'range': (10,0,1),
                       'xaxis': 'D_{V*H 0^{+}}',
                       'fold' : 3
                     }

variables['kd_Vh_hl'] = { 'name' : 'kd_Vh_hl',
                       'range': (10,0,1),
                       'xaxis': 'D_{V*H 0^{#Lambda 1}}',
                       'fold' : 3
                     }


variables['kd_Vh_mixhm'] = { 'name' : 'kd_Vh_mixhm',
                          'range': (10,-1,1),
                          'xaxis': 'D_{V*H CP}',
                          'fold' : 3
                        }
variables['kd_Vh_mixhp'] = { 'name' : 'kd_Vh_mixhp',
                          'range': (10,-1,1),
                          'xaxis': 'D_{V*H Int}',
                          'fold' : 3
                        }

'''

