# variables

#variables = {}

#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

# variables['events']  = {   'name': '1',
# 'range' : (1,0,2),
# 'xaxis' : 'events',
# 'fold' : 3
# }

variables['nJet']  = {   'name': 'nJet',
                         'range' : (6,0,6),
                         'xaxis' : 'njets',
                         'fold' : 3
                         }
variables['nJet_v2']  = {   'name': 'Sum$(CleanJet_pt>30)',
                            'range' : (4,0,4),
                            'xaxis' : 'njets',
                            'fold' : 3
                            }


variables['nLepton'] =  {
    'name': '1*(Alt$(Lepton_pt[0],0.)>20) + 1*(Alt$(Lepton_pt[1],0.)>20) + 1*(Alt$(Lepton_pt[2],0.)>20)+ 1*(Alt$(Lepton_pt[3],0.)>20) + 1*(Alt$(Lepton_pt[4],0.)>20)',
    'range': (5,0,5),
    'xaxis': '# leptons',
    'fold': 3
}

variables['mll']  = {   'name': 'mll',            #   variable name
                        'range' : (4, 0. ,500),    #   variable range
                        'xaxis' : 'mll [GeV]',  #   x axis name
                        'fold' : 3
                        }
variables['mll_v2']  = {   'name': 'mll',            #   variable name
                           'range' : (80, 0. ,800),    #   variable range
                           'xaxis' : 'mll [GeV]',  #   x axis name
                           'fold' : 3
                           }


variables['mjj']  = {  'name': 'mjj',
                       'range': ([500,800,1100,1500,2000],),  #for 500 < mjj < 1000
                       'xaxis': 'mjj [GeV]',
                       'fold': 3
                       }
variables['mjj_v2']  = {  'name': 'mjj',
                          'range': ([500,800,1200,1800,2000],),  #for 500 < mjj < 1000
                          'xaxis': 'mjj [GeV]',
                          'fold': 3
                          }

variables['mjj_v3']  = {  'name': 'mjj',
                          'range': (15, 500. ,2000),  #for 500 < mjj < 1000
                          'xaxis': 'mjj [GeV]',
                          'fold': 3
                          }

variables['pt1']  = {   'name': 'Alt$(Lepton_pt[0],-9999.)',
                        'range' : (10,0.,100),
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3
                        }

variables['pt2']  = {   'name': 'Alt$(Lepton_pt[0],-9999.)',
                        'range' : (10,0.,150),
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 3
                        }

variables['jetpt1']  = {   'name': 'Alt$(Jet_pt[0],-9999.)',
                           'range' : (15,0.,200),
                           'xaxis' : 'p_{T} 1st jet',
                           'fold'  : 3
                           }

variables['jetpt2']  = {   'name': 'Alt$(Jet_pt[1],-9999.)',
                           'range' : (15,0.,150),
                           'xaxis' : 'p_{T} 2nd jet',
                           'fold'  : 3
                           }


variables['met']  = {   'name': 'MET_pt',            #   variable name
                        'range' : (10,0,200),    #   variable range
                        'xaxis' : 'pfmet [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['etaj1'] = {  'name': 'Alt$(Jet_eta[0],-9999.)',
                        'range': (10,-5,5),
                        'xaxis': 'etaj1',
                        'fold': 3
                        }

variables['etaj2'] = {         'name': 'Alt$(Jet_eta[1],-9999.)',
                               'range': (10,-5,5),
                               'xaxis': 'etaj2',
                               'fold': 3
                               }

variables['detajj']  = {  'name': 'detajj',
                          'range': (7,0.0,7.0),

                          'xaxis': 'detajj',
                          'fold': 3
                          }

variables['Zlep1']  = {  'name': '(Alt$(Lepton_eta[0],-9999.) - (Alt$(Jet_eta[0],-9999.)+Alt$(Jet_eta[1],-9999.))/2)/detajj',
                         'range': (10,-1.5,1.5),
                         'xaxis': 'Z^{lep}_{1}',
                         'fold': 3
                         }

variables['Zlep2']  = {  'name': '(Alt$(Lepton_eta[1],-9999.) - (Alt$(Jet_eta[0],-9999.)+Alt$(Jet_eta[1],-9999.))/2)/detajj',
                         'range': (10,-1.5,1.5),
                         'xaxis': 'Z^{lep}_{2}',
                         'fold': 3
                         }

variables['csvv2ivf_1']  = {
    'name': 'Alt$(Jet_btagCSVV2[0],0.)',
    'range' : (10,0,1),
    'xaxis' : 'csvv2ivf 1st jet ',
    'fold'  : 3
}



variables['csvv2ivf_2']  = {
    'name': 'Alt$(Jet_btagCSVV2[1],0.)',
    'range' : (10,0,1),
    'xaxis' : 'csvv2ivf 2nd jet ',
    'fold'  : 3
}
variables['mll_mjj']  = {   'name': 'mll:mjj',
                            #variables['weightbtag_2D_A']  = {   'name': '(std_vector_jet_pt[0]):(std_vector_jet_eta[0])',
                            #'range' : ([-5.0, -2.5, -2.0, -1.0, 0, 1.0, 2.0, 2.5, 5.0,       7.5,  8.0, 9.0, 10.0, 11.0, 12.0, 12.5, 15.0],[20,30,50,70,100]),
                            #'range' : ([-5.0, 5.0, 10.0],[20, 30, 50, 100, 200]),
                            'range' : ([20,100,180,400,600],[500,800,1100,1500,2000]),
                            'xaxis' : 'mll:mjj [GeV]',
                            'fold' : 3
                            }# variables

#variables = {}

#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

# variables['events']  = {   'name': '1',
# 'range' : (1,0,2),
# 'xaxis' : 'events',
# 'fold' : 3
# }

variables['nJet']  = {   'name': 'nJet',
                         'range' : (6,0,6),
                         'xaxis' : 'njets',
                         'fold' : 3
                         }
variables['nJet_v2']  = {   'name': 'Sum$(CleanJet_pt>30)',
                            'range' : (4,0,4),
                            'xaxis' : 'njets',
                            'fold' : 3
                            }


variables['nLepton'] =  {
    'name': '1*(Alt$(Lepton_pt[0],0.)>20) + 1*(Alt$(Lepton_pt[1],0.)>20) + 1*(Alt$(Lepton_pt[2],0.)>20)+ 1*(Alt$(Lepton_pt[3],0.)>20) + 1*(Alt$(Lepton_pt[4],0.)>20)',
    'range': (5,0,5),
    'xaxis': '# leptons',
    'fold': 3
}

variables['mll']  = {   'name': 'mll',            #   variable name
                        'range' : (4, 0. ,500),    #   variable range
                        'xaxis' : 'mll [GeV]',  #   x axis name
                        'fold' : 3
                        }
variables['mll_v2']  = {   'name': 'mll',            #   variable name
                           'range' : (80, 0. ,800),    #   variable range
                           'xaxis' : 'mll [GeV]',  #   x axis name
                           'fold' : 3
                           }


variables['mjj']  = {  'name': 'mjj',
                       'range': ([500,800,1100,1500,2000],),  #for 500 < mjj < 1000
                       'xaxis': 'mjj [GeV]',
                       'fold': 3
                       }
variables['mjj_v2']  = {  'name': 'mjj',
                          'range': ([500,800,1200,1800,2000],),  #for 500 < mjj < 1000
                          'xaxis': 'mjj [GeV]',
                          'fold': 3
                          }

variables['mjj_v3']  = {  'name': 'mjj',
                          'range': (15, 500. ,2000),  #for 500 < mjj < 1000
                          'xaxis': 'mjj [GeV]',
                          'fold': 3
                          }

variables['pt1']  = {   'name': 'Alt$(Lepton_pt[0],-9999.)',
                        'range' : (10,0.,100),
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3
                        }

variables['pt2']  = {   'name': 'Alt$(Lepton_pt[0],-9999.)',
                        'range' : (10,0.,150),
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 3
                        }

variables['jetpt1']  = {   'name': 'Alt$(Jet_pt[0],-9999.)',
                           'range' : (15,0.,200),
                           'xaxis' : 'p_{T} 1st jet',
                           'fold'  : 3
                           }

variables['jetpt2']  = {   'name': 'Alt$(Jet_pt[1],-9999.)',
                           'range' : (15,0.,150),
                           'xaxis' : 'p_{T} 2nd jet',
                           'fold'  : 3
                           }


variables['met']  = {   'name': 'MET_pt',            #   variable name
                        'range' : (10,0,200),    #   variable range
                        'xaxis' : 'pfmet [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['etaj1'] = {  'name': 'Alt$(Jet_eta[0],-9999.)',
                        'range': (10,-5,5),
                        'xaxis': 'etaj1',
                        'fold': 3
                        }

variables['etaj2'] = {         'name': 'Alt$(Jet_eta[1],-9999.)',
                               'range': (10,-5,5),
                               'xaxis': 'etaj2',
                               'fold': 3
                               }

variables['detajj']  = {  'name': 'detajj',
                          'range': (7,0.0,7.0),

                          'xaxis': 'detajj',
                          'fold': 3
                          }

variables['Zlep1']  = {  'name': '(Alt$(Lepton_eta[0],-9999.) - (Alt$(Jet_eta[0],-9999.)+Alt$(Jet_eta[1],-9999.))/2)/detajj',
                         'range': (10,-1.5,1.5),
                         'xaxis': 'Z^{lep}_{1}',
                         'fold': 3
                         }

variables['Zlep2']  = {  'name': '(Alt$(Lepton_eta[1],-9999.) - (Alt$(Jet_eta[0],-9999.)+Alt$(Jet_eta[1],-9999.))/2)/detajj',
                         'range': (10,-1.5,1.5),
                         'xaxis': 'Z^{lep}_{2}',
                         'fold': 3
                         }

variables['csvv2ivf_1']  = {
    'name': 'Alt$(Jet_btagCSVV2[0],0.)',
    'range' : (10,0,1),
    'xaxis' : 'csvv2ivf 1st jet ',
    'fold'  : 3
}



variables['csvv2ivf_2']  = {
    'name': 'Alt$(Jet_btagCSVV2[1],0.)',
    'range' : (10,0,1),
    'xaxis' : 'csvv2ivf 2nd jet ',
    'fold'  : 3
}
variables['mll_mjj']  = {   'name': 'mll:mjj',
                            #variables['weightbtag_2D_A']  = {   'name': '(std_vector_jet_pt[0]):(std_vector_jet_eta[0])',
                            #'range' : ([-5.0, -2.5, -2.0, -1.0, 0, 1.0, 2.0, 2.5, 5.0,       7.5,  8.0, 9.0, 10.0, 11.0, 12.0, 12.5, 15.0],[20,30,50,70,100]),
                            #'range' : ([-5.0, 5.0, 10.0],[20, 30, 50, 100, 200]),
                            'range' : ([20,100,180,400,600],[500,800,1100,1500,2000]),
                            'xaxis' : 'mll:mjj [GeV]',
                            'fold' : 3
                            }