
# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }
    
# variables['HT']  = {   'name': '(std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1    \
#                     + ((std_vector_jet_pt[0] > 20) * std_vector_jet_pt[0])  \
#                     + ((std_vector_jet_pt[1] > 20) * std_vector_jet_pt[1])  \
#                     + ((std_vector_jet_pt[2] > 20) * std_vector_jet_pt[2])  \
#                     + ((std_vector_jet_pt[3] > 20) * std_vector_jet_pt[3])  \
#                     + ((std_vector_jet_pt[4] > 20) * std_vector_jet_pt[4])  \
#                     + ((std_vector_jet_pt[5] > 20) * std_vector_jet_pt[5])  \
#                     + ((std_vector_jet_pt[6] > 20) * std_vector_jet_pt[6])  \
#                     + ((std_vector_jet_pt[7] > 20) * std_vector_jet_pt[7])  \
#                     + ((std_vector_jet_pt[8] > 20) * std_vector_jet_pt[8])  \
#                     + ((std_vector_jet_pt[9] > 20) * std_vector_jet_pt[9]))',      
#                         'range' : (350,0,350),  
#                         'xaxis' : 'H_{T} [GeV]', 
#                          'fold' : 3
#                         }
    
variables['HT']  = {   'name': 'ht',
                       'range' : (50,0,350),  
                       'xaxis' : 'p_{T}^{\ell 1} + p_{T}^{\ell 2} + E_{T}^{miss} + sum_{jet pT} [GeV]', 
                       'fold' : 0
                       }


variables['pt1-pt2']  = {   'name': 'std_vector_lepton_pt[0] - std_vector_lepton_pt[1]',
                       'range' : (50,0,100),  
                       'xaxis' : 'p_{T}^{\ell 1} - p_{T}^{\ell 2} [GeV]', 
                       'fold' : 0
                       }


# variables['mll']  = {   'name': 'mll',            #   variable name    
#                         'range' : (20,10,200),    #   variable range
#                         'xaxis' : 'm_{ll} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }
                        
# variables['mth']  = {   'name': 'mth',            #   variable name    
#                         'range' : (20,0,400),    #   variable range
#                         'xaxis' : 'm_{T}^{ll} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }


# variables['ptll']  = {   'name': 'ptll',            #   variable name    
#                          'range' : (20,0,200),    #   variable range
#                          'xaxis' : 'p_{T}^{ll} [GeV]',  #   x axis name
#                          'fold' : 3
#                          }

# variables['pt1']  = {   'name': 'pt1',            #   variable name    
#                         'range' : (20,0,200),    #   variable range
#                         'xaxis' : 'p_{T}^{1st lep} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['pt2']  = {   'name': 'pt2',            #   variable name    
#                         'range' : (20,0,200),    #   variable range
#                         'xaxis' : 'p_{T}^{2nd lep} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['met']  = {   'name': 'metPfType1',            #   variable name    
#                         'range' : (20,0,200),    #   variable range
#                         'xaxis' : 'E_{T}^{miss} [GeV]',  #   x axis name
#                         'fold' : 0
#                         }


# variables['dphill'] = {   'name': 'dphill',            #   variable name    
#                           'range' : (20,0,3.2),    #   variable range
#                           'xaxis' : '#Delta #Phi_{ll} [rad]',  #   x axis name
#                           'fold' : 0
#                           }

# variables['dphilmet'] = {   'name': 'dphilmet',            #   variable name    
#                           'range' : (20,0,3.2),    #   variable range
#                           'xaxis' : '#Delta #Phi_{l,E_{T}^{miss}} [rad]',  #   x axis name
#                           'fold' : 0
#                           }

# variables['nvtx']  = {   'name': 'nvtx',      
#                          'range' : (40,0,40),  
#                          'xaxis' : 'nvtx', 
#                          'fold' : 3
#                          }
                        
# variables['mpmet']  = {   'name': 'mpmet',      
#                           'range' : (20,0,200),  
#                           'xaxis' : 'min(proj. E_{T}^{miss}, proj. trk E_{T}^{miss}) [GeV]', 
#                           'fold' : 3
#                           }


# variables['ht']  = {   'name': 'ht',      
#                           'range' : (50,0,500),  
#                           'xaxis' : 'H_{T} [GeV]', 
#                           'fold' : 3
#                           }



# variables['dphilljetjet']  = {   'name': 'dphilljetjet * (njet>=2)',      
#                           'range' : (20,0,3.2),  
#                           'xaxis' : '#Delta #Phi_{lljetjet} [rad]', 
#                           'fold' : 3
#                           }


# variables['ptll-met']  = {   'name': 'ptll/metPfType1',            #   variable name    
#                         'range' : (25,0,5),    #   variable range
#                         'xaxis' : 'p_{T}^{ll} [GeV] / E_{T}^{miss} [GeV]',  #   x axis name
#                         'fold' : 0
#                         }


# variables['jetpt1']  = {   'name': 'std_vector_jet_pt[0]',      
#                            'range' : (20,0,200),  
#                            'xaxis' : 'p_{T}^{1st jet}', 
#                            'fold' : 0
#                            }


# variables['metPfProj']  = {   'name': 'metPfProj',      
#                               'range' : (20,0,200),  
#                               'xaxis' : 'proj. E_{T}^{miss} [GeV]', 
#                               'fold' : 3
#                               }

# variables['projtkmet']  = {   'name': 'projtkmet',      
#                           'range' : (20,0,200),  
#                           'xaxis' : 'proj. trk E_{T}^{miss} [GeV]', 
#                           'fold' : 3
#                           }


# variables['bjets']  = {   'name': 'Sum$((std_vector_jet_cmvav2 > -0.715) && (std_vector_jet_pt > 20) && (fabs(std_vector_jet_eta) < 2.4))',
#                           'range' : (10,0,10),  
#                           'xaxis' : 'nbjets', 
#                           'fold' : 3
#                           }


# variables['sum_eta2-eta1_old_range']  = {   'name': '- std_vector_lepton_flavour[0]*abs(std_vector_lepton_eta[0]/std_vector_lepton_flavour[0]) - std_vector_lepton_flavour[1]*abs(std_vector_lepton_eta[1]/std_vector_lepton_flavour[1])',
#                                'range' : (20,-2.0,2.0),
#                                'xaxis' : '|#eta(lep+)| - |#eta(lep-)| [rad]',
#                                'fold' : 3
#                                }

# variables['|eta_mu+|']  = {   'name': '(std_vector_lepton_flavour[0] == -13) * abs(std_vector_lepton_eta[0]) + (std_vector_lepton_flavour[1] == -13) * abs(std_vector_lepton_eta[1])',
#                                'range' : (20,0.,4.0),
#                                'xaxis' : '|#eta(#mu+)|',
#                                'fold' : 3
#                                }

# variables['|eta_mu-|']  = {   'name': '(std_vector_lepton_flavour[0] == 13) * abs(std_vector_lepton_eta[0]) + (std_vector_lepton_flavour[1] == 13) * abs(std_vector_lepton_eta[1])',
#                                'range' : (20,0.,4.0),
#                                'xaxis' : '|#eta(#mu-)|',
#                                'fold' : 3
#                                }

# variables['|eta_e+|']  = {   'name': '(std_vector_lepton_flavour[0] == -11) * abs(std_vector_lepton_eta[0]) + (std_vector_lepton_flavour[1] == -11) * abs(std_vector_lepton_eta[1])',
#                                'range' : (20,0.,4.0),
#                                'xaxis' : '|#eta(e+)|',
#                                'fold' : 3
#                                }

# variables['|eta_e-|']  = {   'name': '(std_vector_lepton_flavour[0] == 11) * abs(std_vector_lepton_eta[0]) + (std_vector_lepton_flavour[1] == 11) * abs(std_vector_lepton_eta[1])',
#                                'range' : (20,0.,4.0),
#                                'xaxis' : '|#eta(e-)|',
#                                'fold' : 3
#                                }
