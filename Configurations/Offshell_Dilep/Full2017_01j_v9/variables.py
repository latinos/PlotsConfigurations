# variables



#########################################################################

###add variables you want to plot, taken from aliases additions###

##when running on 1 jet, change 0j -> 1j on cuts and variable name
##0jet
# BINNING OPT
variables['dnnScore_ggH_OFF_0j_Opt']  = {   'name': 'dnnScore_ggH_OFF_0j',
                                     'range' : ([0.5,0.66125,0.8225, 0.845,0.875,1.0],), 
                                     'xaxis' : 'dnn_{ggH_off} [GeV]',
                                     'fold' : 3,
                                     'cuts' : [cut for cut in cuts if 'OFF_0j' in cut]
                        }

variables['dnnScore_ggH_OFF_1j_Opt']  = {   'name': 'dnnScore_ggH_OFF_1j',
                                     'range' : ([0.5,0.69,0.88, 0.9025, 0.9225,1.0],), # 3 sensitive bins, 3 equally spaced bins from 0.5
                                     'xaxis' : 'dnn_{ggH_off} [GeV]',
                                     'fold' : 3,
                                     'cuts' : [cut for cut in cuts if 'OFF_1j' in cut]
                        }

variables['dnnScore_ggH_ON_0j_Opt']  = {   'name': 'dnnScore_ggH_ON_0j', #variables['dnnScore_ggH_ON_0j_binning']
                                    'range' : ([0.5, 0.685, 0.87, 0.885, 0.895, 1.0],), ##Optimized May 2024
                                    'xaxis' : 'dnn_{ggH_on} [GeV]',
                                    'fold' : 3,
                                    'cuts' : [cut for cut in cuts if 'ON_0j' in cut] ##ON     
}

variables['dnnScore_ggH_ON_1j_Opt']  = {   'name': 'dnnScore_ggH_ON_1j', #variables['dnnScore_ggH_ON_1j_binning']
                                    'range' : ([0.5, 0.67875, 0.8574999999999999, 0.8725, 0.8875, 1.0],),
                                    'xaxis' : 'dnn_{ggH_on} [GeV]',
                                    'fold' : 3,
                                    'cuts' : [cut for cut in cuts if 'ON_1j' in cut] ##ON                                
                        }


# variables['dnnScore_MAX_0j']  = {   'name': 'dnnScore_MAX_0j',
#                                      'range' : (4, -0.5, 3.5),
#                                      'xaxis' : 'CAT INDEX',
#                                      'fold' : 3,
#                                      'cuts' : [cut for cut in cuts if '0j' in cut]
#                         }

# variables['dnnScore_ggH_OFF_0j_binning']  = {   'name': 'dnnScore_ggH_OFF_0j',
#                                     'range' : (200, 0.5,1.0),
#                                      'xaxis' : 'dnn_{ggH_off} [GeV]',
#                                      'fold' : 3,
#                                      'cuts' : [cut for cut in cuts if 'OFF_0j' in cut]
#                         }

variables['dnnScore_ggH_OFF_0j']  = {   'name': 'dnnScore_ggH_OFF_0j',
                                     'range' : (10, 0.5,1.0), 
                                     'xaxis' : 'dnn_{ggH_off} [GeV]',
                                     'fold' : 3,
                                     'cuts' : [cut for cut in cuts if 'OFF_0j' in cut]
                        }

# variables['dnnScore_ggH_ON_0j']  = {   'name': 'dnnScore_ggH_ON_0j',
#                                     'range' : (10, 0.5,1.0),
#                                     'xaxis' : 'dnn_{ggH_on} [GeV]',
#                                     'fold' : 3,
#                                     'cuts' : [cut for cut in cuts if 'ON_0j' in cut]
#                                 }
# variables['dnnScore_ggH_ON_0j_binning']  = {   'name': 'dnnScore_ggH_ON_0j', #variables['dnnScore_ggH_ON_0j_binning']                                            
#                                     'range' : (200, 0.5,1.0),
#                                     'xaxis' : 'dnn_{ggH_on} [GeV]',
#                                     'fold' : 3,
#                                     'cuts' : [cut for cut in cuts if 'ON_0j' in cut] ##ON     
# }
variables['dnnScore_top_0j']  = {   'name': 'dnnScore_top_0j',
                                 'range' : (10, 0.5,1.0),
                                 'xaxis' : 'dnn_{top} [GeV]',
                                 'fold' : 3,
                                 'cuts' : [cut for cut in cuts if 'topCR_0j' in cut]
                                }

variables['dnnScore_WW_0j']  = {   'name': 'dnnScore_WW_0j',
                                'range' : (10, 0.5,1.0),
                                'xaxis' : 'dnn_{WW} [GeV]',
                                'fold' : 3,
                                'cuts' : [cut for cut in cuts if 'WWCR_0j' in cut]
                                }
##1jet
# variables['dnnScore_MAX_1j']  = {   'name': 'dnnScore_MAX_1j',
#                                      'range' : (4, -0.5,3.5),
#                                      'xaxis' : 'CAT INDEX',
#                                      'fold' : 3,
#                                      'cuts' : [cut for cut in cuts if '1j' in cut]
#                         }

# variables['dnnScore_ggH_OFF_1j_binning']  = {   'name': 'dnnScore_ggH_OFF_1j',
#                                      'range' : (200, 0.5,1.0),
#                                      'xaxis' : 'dnn_{ggH_off} [GeV]',
#                                      'fold' : 3,
#                                      'cuts' : [cut for cut in cuts if 'OFF_1j' in cut]
#                         }

variables['dnnScore_ggH_OFF_1j']  = {   'name': 'dnnScore_ggH_OFF_1j',
                                     'range' : (10, 0.5,1.0),
                                     'xaxis' : 'dnn_{ggH_off} [GeV]',
                                     'fold' : 3,
                                     'cuts' : [cut for cut in cuts if 'OFF_1j' in cut]
                        }

# variables['dnnScore_ggH_ON_1j']  = {   'name': 'dnnScore_ggH_ON_1j',
#                                     'range' : (10, 0.5,1.0),
#                                     'xaxis' : 'dnn_{ggH_on} [GeV]',
#                                     'fold' : 3,
#                                     'cuts' : [cut for cut in cuts if 'ON_1j' in cut]
#                                 }
# variables['dnnScore_ggH_ON_1j_binning']  = {   'name': 'dnnScore_ggH_ON_1j', #variables['dnnScore_ggH_ON_1j_binning']
#                                     'range' : (200, 0.5,1.0),
#                                     'xaxis' : 'dnn_{ggH_on} [GeV]',
#                                     'fold' : 3,
#                                     'cuts' : [cut for cut in cuts if 'ON_1j' in cut] ##ON                                
#                         }

variables['dnnScore_top_1j']  = {   'name': 'dnnScore_top_1j',
                                 'range' : (10, 0.5,1.0),
                                 'xaxis' : 'dnn_{top} [GeV]',
                                 'fold' : 3,
                                 'cuts' : [cut for cut in cuts if 'topCR_1j' in cut]
                                }

variables['dnnScore_WW_1j']  = {   'name': 'dnnScore_WW_1j',
                                'range' : (10, 0.5,1.0),
                                'xaxis' : 'dnn_{WW} [GeV]',
                                'fold' : 3,
                                'cuts' : [cut for cut in cuts if 'WWCR_1j' in cut]
                                }
##

variables['events']  = {   
    'name': '1',
    'range' : (1,0,2),
    'xaxis' : 'events',
    'fold' : 3
}

variables['mll']  = {   'name': 'mll',
                        'range' : (20, 30,250),
                        'xaxis' : 'm_{ll} [GeV]',
                        'fold' : 3
                        }


variables['drll']  = {   'name': 'drll',
                         'range' : (20, 0.25, 4.0),
                        'xaxis' : '#Delta R_{ll}',
                        'fold' : 3
                        }

variables['mth']  = {   'name': 'mth',
                        'range' : (20, 50,400),
                        'xaxis' : 'm_{T}^{ll, p_{T}^{miss}} [GeV]',
                        'fold' : 3
                        }

variables['mtw2']  = {   'name': 'mtw2',
                        'range' : (20, 20,300),
                         'xaxis' : 'm_{T}^{p_{T}^{min}, p_{T}^{miss}} [GeV]',
                        'fold' : 3
                        }

variables['ptll']  = {   'name': 'ptll',     
                        'range' : (20, 30,300),   
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 3
                        }

variables['pt1']  = {   'name': 'Lepton_pt[0]',     
                        'range' : (20,25,250),   
                        'xaxis' : 'p_{T}^{max} [GeV]',
                        'fold'  : 3
                        }

variables['pt2']  = {   'name': 'Lepton_pt[1]',     
                        'range' : (20,20,150),   
                        'xaxis' : 'p_{T}^{min} [GeV]',
                        'fold'  : 3 
                        }

variables['eta1']  = {  'name': 'Lepton_eta[0]',     
                        'range' : (20,-2.5,2.5),   
                        'xaxis' : '#eta^{max}',
                        'fold'  : 3                         
                        }

variables['eta2']  = {  'name': 'Lepton_eta[1]',     
                        'range' : (20,-2.5,2.5),   
                        'xaxis' : '#eta^{min}',
                        'fold'  : 3                         
                        }

variables['puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (20,20,300),
                        'xaxis' : 'p_{T}^{miss} [GeV]',
                        'fold'  : 3
                        }


variables['dphill']  = {   'name': 'abs(dphill)',     
                        'range' : (20,0,3.14),   
                        'xaxis' : '#Delta#phi_{ll}',
                        'fold' : 3
                        }

variables['detall']  = {   'name': 'detall',     
                           'range' : (20,0,5.0),   
                        'xaxis' : '#Delta#eta_{ll}',
                        'fold' : 3
                        }

variables['mcollWW']  = {   'name': 'mcollWW',     
                           'range' : (20,150.0,500.0),   
                            'xaxis' : 'mcollWW [GeV]',
                        'fold' : 3
                        }


variables['dphillmet']  = {   'name': 'dphillmet',     
                        'range' : (20,0.5,3.14),   
                        'xaxis' : '#Delta#phi_{ll, p_{T}^{miss}}',
                        'fold' : 3
                        }

