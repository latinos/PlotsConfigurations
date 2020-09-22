variables['events']  = {   'name': '1',
                           'range' : (1,0,2),
                           'xaxis' : 'events',
                           'fold' : 3
                       }

variables['nvtx']  = {   'name': '1',
                         'range' : (30,0,50),
                         'xaxis' : 'events',
                         'fold' : 3
                     }

variables['pt1']  = {   'name': 'Lepton_pt[0]',     
                        'range' : (40,0,600),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3                         
                    }

variables['pt2']  = {   'name': 'Lepton_pt[1]',     
                        'range' : (50,0,400),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 3                         
                        }

variables['eta1']  = {  'name': 'Lepton_eta[0]',     
                        'range' : (40,-3,3),   
                        'xaxis' : '#eta 1st lep',
                        'fold'  : 3                         
                        }

variables['eta2']  = {  'name': 'Lepton_eta[1]',     
                        'range' : (40,-3,3),   
                        'xaxis' : '#eta 2nd lep',
                        'fold'  : 3                         
                        }

variables['deltaeta']  = {  'name': 'Lepton_eta[0] - Lepton_eta[1]',
                            'range' : (40,-4.5,4.5),
                            'xaxis' : '#Delta #eta',
                            'fold'  : 3
                        }

variables['phi1']  = {  'name': 'Lepton_phi[0]',
                        'range' : (40,-3.2,3.2),
                        'xaxis' : '#phi 1st lep',
                        'fold'  : 3
                        }

variables['phi2']  = {  'name': 'Lepton_phi[1]',
                        'range' : (40,-3.2,3.2),
                        'xaxis' : '#phi 2nd lep',
                        'fold'  : 3
                        }

variables['dphill']  = {   'name': 'abs(dphill)',
                           'range' : (40,0,3.14),
                           'xaxis' : '#Delta#phi_{ll}',
                           'fold' : 3
                       }

variables['dphillmet']  = {   'name': 'abs(dphillmet)',
                              'range' : (40,0,3.14),
                              'xaxis' : '#Delta#phi_{ll, MET}',
                              'fold' : 3
                          }

variables['njet']  = {    'name': 'Sum$(CleanJet_pt>30)',     
                          'range' : (6,0,6),   
                          'xaxis' : 'Number of jets',
                          'fold' : 3  # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                      }

variables['nbjet']  = {    'name': 'nbJet',
                           'range' : (5,0,5),
                           'xaxis' : 'Medium deepCSV b-jets',
                           'fold' : 0
                       }
                
variables['mblt']  = {   'name': 'mblt',
                         'range' : (40,0,1000),
                         'xaxis' : 'm_{bl}^{t} [GeV]',
                         'fold' : 3
                     } 

variables['jetpt1']  = {    'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_pt[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',     
                            'range' : (40,0,600),   
                            'xaxis' : 'p_{T} 1st jet',
                            'fold' : 3
                        }

variables['jetpt2']  = {    'name': '(Sum$(CleanJet_pt>30)>1)*(Alt$(CleanJet_pt[1], 0)) - (Sum$(CleanJet_pt>30)<=1)*99',     
                            'range' : (40,0,600),   
                            'xaxis' : 'p_{T} 2nd jet',
                            'fold' : 3
                        }

variables['jeteta1']  = {  'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_eta[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
                           'range' : (40,-5.0,5.0),
                           'xaxis' : '#eta 1st jet',
                           'fold'  : 3
                       }

variables['jeteta2']  = {  'name': '(Sum$(CleanJet_pt>30)>1)*(Alt$(CleanJet_eta[1], 0)) - (Sum$(CleanJet_pt>30)<=1)*99',
                           'range' : (40,-5.0,5.0),
                           'xaxis' : '#eta 2nd jet',
                           'fold'  : 3
                       }

#Discriminating variables
variables['mll']  = {   'name': 'mll',
                        'range' : (40,0,1000),
                        'xaxis' : 'm_{ll} [GeV]',
                        'fold' : 3
                    }

variables['puppimet']  = {   'name': 'PuppiMET_pt',
                             'range' : (40,0,800),
                             'xaxis' : 'puppimet [GeV]',
                             'fold'  : 3
                         }

variables['pfmet']  = {   'name': 'MET_pt',
                          'range' : (40,0,800),
                          'xaxis' : 'pfmet [GeV]',
                          'fold'  : 3
                      }

variables['MET_significance']  = {   'name': 'MET_significance',
                                     'range' : (40,0,500),
                                     'xaxis' : 'MET significance',
                                     'fold'  : 3
                                 }

variables['mt2ll']  = {   'name': 'mt2ll',
                          'range' : (40,0,300),
                          'xaxis' : 'm_{T2}^{ll} [GeV]',
                          'fold'  : 3
                      }

variables['mt2bl']  = {   'name': 'mt2bl',
                          'range' : (40,0,1000),
                          'xaxis' : 'm_{T2}^{bl} [GeV]',
                          'fold'  : 3
                      }

variables['costhetall']  = {   'name': 'costhetall',
                                     'range' : (40,-1.5,1),
                                     'xaxis' : 'cos(#theta_{l0,l1}) [rad]',
                                     'fold'  : 3
                                 }

variables['cosphill']  = {   'name': 'cosphill',
                             'range' : (40, -1.2, 1.2),
                             'xaxis' : 'cos(#phi_{ll}) (parent rest frame) [rad]',
                             'fold' : 3
                        }

variables['massT']  = {   'name': 'massT',
                          'range' : (40,0,2000),
                          'xaxis' : 'massT [GeV]',
                          'fold'  : 3
                      }

variables['totalET']  = {   'name': 'totalET',
                            'range' : (40,0,2000),
                            'xaxis' : 'Total ET [GeV]',
                            'fold'  : 3
                        }

variables['dark_pt']  = {   'name': 'dark_pt',
                            'range' : (40,0,1800),
                            'xaxis' : 'dark 15_{T} [GeV]',
                            'fold'  : 3
                        }

variables['overlapping_factor']  = {   'name': 'overlapping_factor',
                                       'range' : (40,0,25),
                                       'xaxis' : 'Overlapping factor R',
                                       'fold'  : 3
                                   }

variables['reco_weight']  = {   'name': 'reco_weight',
                                'range' : (40,-1,7),
                                'xaxis' : 'log(#omega)',
                                'fold'  : 3
                            }

variables['ptll']  = {   'name': 'ptll',
                         'range' : (40,0,500),
                         'xaxis' : 'p_{T}^{ll} [GeV]',
                         'fold' : 3
                     }

#ATLAS variables
variables['r2l'] = {   'name': 'PuppiMET_pt / (Lepton_pt[0] + Lepton_pt[1])',
                       'range': (40,0,10),
                       'xaxis': 'r2l',
                       'fold': 3
                   }

variables['r2l4j'] = {   'name': 'PuppiMET_pt / (Lepton_pt[0] + Lepton_pt[1] + Alt$(CleanJet_pt[0], 0) + Alt$(CleanJet_pt[1], 0) + Alt$(CleanJet_pt[2], 0) + Alt$(CleanJet_pt[3], 0))',
                         'range': (40,0,2),
                       'xaxis': 'r2l4j',
                       'fold': 3
}
