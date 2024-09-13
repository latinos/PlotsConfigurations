# variables



#########################################################################

###add variables you want to plot, taken from aliases additions###

## <NAME> in variables['<NAME>'] will be the name for the histograms & 'name': 'blah' will be used as the numerical expression to fill the histogram (what's in aliases.py)
## 2018
# variables['dnnScore_ggH_OFF_0j_Opt_2018']  = {   'name': 'dnnScore_ggH_OFF_0j',
#                                      'range' : ([0.5,0.66125,0.8225, 0.845,0.875,1.0],), 
#                                      'xaxis' : 'dnn_{ggH_off} [GeV]',
#                                      'fold' : 3,
#                                      'cuts' : [cut for cut in cuts if 'OFF_0j' in cut]
#                         }

# variables['dnnScore_ggH_OFF_1j_Opt_2018']  = {   'name': 'dnnScore_ggH_OFF_1j',
#                                      'range' : ([0.5,0.69,0.88, 0.9025, 0.9225,1.0],),
#                                      'xaxis' : 'dnn_{ggH_off} [GeV]',
#                                      'fold' : 3,
#                                      'cuts' : [cut for cut in cuts if 'OFF_1j' in cut]
#                         }

# variables['dnnScore_ggH_ON_0j_Opt_2018']  = {   'name': 'dnnScore_ggH_ON_0j',
#                                      'range' : ([0.5, 0.68875, 0.8775, 0.885, 0.8975, 1.0],),
#                                      'xaxis' : 'dnn_{ggH_on} [GeV]',
#                                      'fold' : 3,
#                                      'cuts' : [cut for cut in cuts if 'ON_0j' in cut]
#                         }

# variables['dnnScore_ggH_ON_1j_Opt_2018']  = {   'name': 'dnnScore_ggH_ON_1j',
#                                     'range' : ([0.5, 0.68125, 0.8625, 0.875, 0.8925000000000001, 1.0],),
#                                      'xaxis' : 'dnn_{ggH_on} [GeV]',
#                                      'fold' : 3,
#                                      'cuts' : [cut for cut in cuts if 'ON_1j' in cut]
#                         }


# ## 2017

# variables['dnnScore_ggH_OFF_0j_Opt_2017']  = {   'name': 'dnnScore_ggH_OFF_0j',
#                                      'range' : ([0.5,0.66125,0.8225, 0.845,0.875,1.0],), 
#                                      'xaxis' : 'dnn_{ggH_off} [GeV]',
#                                      'fold' : 3,
#                                      'cuts' : [cut for cut in cuts if 'OFF_0j' in cut]
#                         }

# variables['dnnScore_ggH_OFF_1j_Opt_2017']  = {   'name': 'dnnScore_ggH_OFF_1j',
#                                      'range' : ([0.5,0.69,0.88, 0.9025, 0.9225,1.0],),
#                                      'xaxis' : 'dnn_{ggH_off} [GeV]',
#                                      'fold' : 3,
#                                      'cuts' : [cut for cut in cuts if 'OFF_1j' in cut]
#                         }

# variables['dnnScore_ggH_ON_0j_Opt_2017']  = {   'name': 'dnnScore_ggH_ON_0j',
#                                     'range' : ([0.5, 0.685, 0.87, 0.885, 0.895, 1.0],),
#                                     'xaxis' : 'dnn_{ggH_on} [GeV]',
#                                     'fold' : 3,
#                                     'cuts' : [cut for cut in cuts if 'ON_0j' in cut] ##ON     
# }

# variables['dnnScore_ggH_ON_1j_Opt_2017']  = {   'name': 'dnnScore_ggH_ON_1j',
#                                     'range' : ([0.5, 0.67875, 0.8574999999999999, 0.8725, 0.8875, 1.0],),
#                                     'xaxis' : 'dnn_{ggH_on} [GeV]',
#                                     'fold' : 3,
#                                     'cuts' : [cut for cut in cuts if 'ON_1j' in cut] ##ON                                
#                         }

# ## 2016 HIPM

# variables['dnnScore_ggH_OFF_0j_Opt_2016HIPM']  = {   'name': 'dnnScore_ggH_OFF_0j',
#                                      'range' : ([0.5, 0.635, 0.775, 0.815, 0.85, 1.0],), 
#                                      'xaxis' : 'dnn_{ggH_off} [GeV]',
#                                      'fold' : 3,
#                                      'cuts' : [cut for cut in cuts if 'OFF_0j' in cut]
#                         }

# variables['dnnScore_ggH_OFF_1j_Opt_2016HIPM']  = {   'name': 'dnnScore_ggH_OFF_1j',
#                                      'range' : ([0.5,0.66,0.82, 0.8625, 0.9125,1.0],),
#                                      'xaxis' : 'dnn_{ggH_off} [GeV]',
#                                      'fold' : 3,
#                                      'cuts' : [cut for cut in cuts if 'OFF_1j' in cut]
#                         }

# variables['dnnScore_ggH_ON_0j_Opt_2016HIPM']  = {   'name': 'dnnScore_ggH_ON_0j',
#                                     'range' : ([0.5, 0.6775, 0.855, 0.875, 0.89, 1.0],),
#                                     'xaxis' : 'dnn_{ggH_on} [GeV]',
#                                     'fold' : 3,
#                                     'cuts' : [cut for cut in cuts if 'ON_0j' in cut]    
# }

# variables['dnnScore_ggH_ON_1j_Opt_2016HIPM']  = {   'name': 'dnnScore_ggH_ON_1j',
#                                     'range' : ([0.5, 0.67125, 0.8425, 0.8574999999999999, 0.8674999999999999, 1.0],),
#                                     'xaxis' : 'dnn_{ggH_on} [GeV]',
#                                     'fold' : 3,
#                                     'cuts' : [cut for cut in cuts if 'ON_1j' in cut] ##ON                                
#                         }

## 2016 noHIPM

variables['dnnScore_ggH_OFF_0j_Opt']  = {   'name': 'dnnScore_ggH_OFF_0j',
                                     'range' : ([0.5, 0.6375, 0.755, 0.815, 0.8525, 1.0],), 
                                     'xaxis' : 'dnn_{ggH_off} [GeV]',
                                     'fold' : 3,
                                     'cuts' : [cut for cut in cuts if 'OFF_0j' in cut]
                        }

variables['dnnScore_ggH_OFF_1j_Opt']  = {   'name': 'dnnScore_ggH_OFF_1j',
                                     'range' : ([0.5, 0.66625, 0.8325, 0.86, 0.89, 1.0],),
                                     'xaxis' : 'dnn_{ggH_off} [GeV]',
                                     'fold' : 3,
                                     'cuts' : [cut for cut in cuts if 'OFF_1j' in cut]
                        }

variables['dnnScore_ggH_ON_0j_Opt']  = {   'name': 'dnnScore_ggH_ON_0j',
                                    'range' : ([0.5, 0.67625, 0.8525, 0.87, 0.88, 1.0],),
                                    'xaxis' : 'dnn_{ggH_on} [GeV]',
                                    'fold' : 3,
                                    'cuts' : [cut for cut in cuts if 'ON_0j' in cut]   
}

variables['dnnScore_ggH_ON_1j_Opt']  = {   'name': 'dnnScore_ggH_ON_1j',
                                    'range' : ([0.5, 0.66625, 0.8325, 0.8500000000000001, 0.87, 1.0],),
                                    'xaxis' : 'dnn_{ggH_on} [GeV]',
                                    'fold' : 3,
                                    'cuts' : [cut for cut in cuts if 'ON_1j' in cut]                               
                        }

## fine

# variables['dnnScore_ggH_OFF_0j_fine']  = {   'name': 'dnnScore_ggH_OFF_0j',
#                                     'range' : (50, 0.5, 1.0),
#                                     'xaxis' : 'dnn_{ggH_off} [GeV]',
#                                     'fold' : 3,
#                                     'cuts' : [cut for cut in cuts if 'OFF_0j' in cut]                               
#                         }

# variables['dnnScore_ggH_OFF_1j_fine']  = {   'name': 'dnnScore_ggH_OFF_1j',
#                                     'range' : (50, 0.5, 1.0),
#                                     'xaxis' : 'dnn_{ggH_off} [GeV]',
#                                     'fold' : 3,
#                                     'cuts' : [cut for cut in cuts if 'OFF_1j' in cut]                               
#                         }


# variables['dnnScore_ggH_ON_0j_fine']  = {   'name': 'dnnScore_ggH_ON_0j',
#                                     'range' : (50, 0.5, 1.0),
#                                     'xaxis' : 'dnn_{ggH_on} [GeV]',
#                                     'fold' : 3,
#                                     'cuts' : [cut for cut in cuts if 'ON_0j' in cut]                               
#                         }

# variables['dnnScore_ggH_ON_1j_fine']  = {   'name': 'dnnScore_ggH_ON_1j',
#                                     'range' : (50, 0.5, 1.0),
#                                     'xaxis' : 'dnn_{ggH_on} [GeV]',
#                                     'fold' : 3,
#                                     'cuts' : [cut for cut in cuts if 'ON_1j' in cut]                               
#                         }

# ## uniform

# variables['dnnScore_ggH_OFF_0j_uniform']  = {   'name': 'dnnScore_ggH_OFF_0j',
#                                     'range' : (5, 0.5, 1.0),
#                                     'xaxis' : 'dnn_{ggH_off} [GeV]',
#                                     'fold' : 3,
#                                     'cuts' : [cut for cut in cuts if 'OFF_0j' in cut]                               
#                         }

# variables['dnnScore_ggH_OFF_1j_uniform']  = {   'name': 'dnnScore_ggH_OFF_1j',
#                                     'range' : (5, 0.5, 1.0),
#                                     'xaxis' : 'dnn_{ggH_off} [GeV]',
#                                     'fold' : 3,
#                                     'cuts' : [cut for cut in cuts if 'OFF_1j' in cut]                               
#                         }


# variables['dnnScore_ggH_ON_0j_uniform']  = {   'name': 'dnnScore_ggH_ON_0j',
#                                     'range' : (5, 0.5, 1.0),
#                                     'xaxis' : 'dnn_{ggH_on} [GeV]',
#                                     'fold' : 3,
#                                     'cuts' : [cut for cut in cuts if 'ON_0j' in cut]                               
#                         }

# variables['dnnScore_ggH_ON_1j_uniform']  = {   'name': 'dnnScore_ggH_ON_1j',
#                                     'range' : (5, 0.5, 1.0),
#                                     'xaxis' : 'dnn_{ggH_on} [GeV]',
#                                     'fold' : 3,
#                                     'cuts' : [cut for cut in cuts if 'ON_1j' in cut]                               
#                         }

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

## events
variables['events']  = {   
    'name': '1',
    'range' : (1,0,2),
    'xaxis' : 'events',
    'fold' : 3
}                        

##add all other variables[]
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
