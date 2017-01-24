# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
# Tuning for shape analysis

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }
    
variables['muccamvaZbaradapt6'] = {'name': 'muccamvaZbaradaptTTbar',          #  variable name    
                        'range' : (6,-1,1),           #  variable range
                        'xaxis' : 'MVA discriminant',  #  x axis name
                        'fold' : 3
                        }

# variables['mth']  = {   'name': 'mth',            #   variable name    
#                         'range' : (5,0,1000),     #   variable range
#                         'xaxis' : 'm_{T}^{\ell\ell} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['mtw1'] = {     'name'  : 'mtw1',            #   variable name    
#                           'range' : (5,0,1000),    #   variable range
#                           'xaxis' : 'm_{T}^{W1}',  #   x axis name
#                           'fold'  : 3
#                           }

# variables['drll'] = {     'name': 'drll',            #   variable name    
#                           'range' : (5,0,2.5),    #   variable range
#                           'xaxis' : '\Delta R_{\ell\ell}',  #   x axis name
#                           'fold'  : 0
#                           }


# Binning optimized to properly see shapes
variables['muccamvaZbaradapt_control'] = {'name': 'muccamvaZbaradaptTTbar',          #  variable name    
                        'range' : (40,-1,1),           #  variable range
                        'xaxis' : 'MVA discriminant',  #  x axis name
                        'fold' : 3
                        }


variables['mth_control']  = {   'name': 'mth',            #   variable name    
                        'range' : (50,0,1000),     #   variable range
                        'xaxis' : 'm_{T}^{\ell\ell} [GeV]',  #   x axis name
                        'fold' : 3
                        }

# variables['ht20']  = {   'name': 'std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1 + std_vector_jet_pt[0]*(std_vector_jet_pt[0]>20) + std_vector_jet_pt[1]*(std_vector_jet_pt[1]>20) + std_vector_jet_pt[2]*(std_vector_jet_pt[2]>20) + std_vector_jet_pt[3]*(std_vector_jet_pt[3]>20) + std_vector_jet_pt[4]*(std_vector_jet_pt[4]>20) + std_vector_jet_pt[5]*(std_vector_jet_pt[5]>20) + std_vector_jet_pt[6]*(std_vector_jet_pt[6]>20) + std_vector_jet_pt[7]*(std_vector_jet_pt[7]>20) + std_vector_jet_pt[8]*(std_vector_jet_pt[8]>20) + std_vector_jet_pt[9]*(std_vector_jet_pt[9]>20)',            #   variable name    
#                         'range' : (150,0,1500),     #   variable range
#                         'xaxis' : 'H_{T} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['ht']  = {   'name': 'std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1 + std_vector_jet_pt[0]*(std_vector_jet_pt[0]>30) + std_vector_jet_pt[1]*(std_vector_jet_pt[1]>30) + std_vector_jet_pt[2]*(std_vector_jet_pt[2]>30) + std_vector_jet_pt[3]*(std_vector_jet_pt[3]>30) + std_vector_jet_pt[4]*(std_vector_jet_pt[4]>30) + std_vector_jet_pt[5]*(std_vector_jet_pt[5]>30) + std_vector_jet_pt[6]*(std_vector_jet_pt[6]>30) + std_vector_jet_pt[7]*(std_vector_jet_pt[7]>30) + std_vector_jet_pt[8]*(std_vector_jet_pt[8]>30) + std_vector_jet_pt[9]*(std_vector_jet_pt[9]>30)',            #   variable name    
#                         'range' : (150,0,1500),     #   variable range
#                         'xaxis' : 'H_{T} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['lep_ht']  = {   'name': 'std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1',            #   variable name    
#                         'range' : (50,0,500),     #   variable range
#                         'xaxis' : 'p_T^1 + p_T^2 + E_T^{miss} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['mtw1_control'] = {     'name'  : 'mtw1',            #   variable name    
#                           'range' : (50,0,1000),    #   variable range
#                           'xaxis' : 'm_{T}^{W1}',  #   x axis name
#                           'fold'  : 3
#                           }

variables['drll_control'] = {     'name': 'drll',            #   variable name    
                          'range' : (50,0,5.0),    #   variable range
                          'xaxis' : '\Delta R_{\ell\ell}',  #   x axis name
                          'fold'  : 0
                          }

# variables['dphill'] = {   'name': 'dphill',            #   variable name    
#                           'range' : (20,0,3.2),    #   variable range
#                           'xaxis' : '\Delta\Phi_{\ell\ell} [rad]',  #   x axis name
#                           'fold' : 0
#                           }

# variables['dphilmet1'] = {   'name': 'dphilmet1',            #   variable name    
#                           'range' : (20,0,3.2),    #   variable range
#                           'xaxis' : '\Delta\Phi_{\ell 1, E_{T}^{miss}} [rad]',  #   x axis name
#                           'fold' : 0
#                           }

# variables['dphilmet2'] = {   'name': 'dphilmet2',            #   variable name    
#                           'range' : (20,0,3.2),    #   variable range
#                           'xaxis' : '\Delta\Phi_{\ell 2, E_{T}^{miss}} [rad]',  #   x axis name
#                           'fold' : 0
#                           }

variables['mtw2'] = {     'name'  : 'mtw2',            #   variable name    
                          'range' : (25,0,500),    #   variable range
                          'xaxis' : 'm_{T}^{W2}',  #   x axis name
                          'fold'  : 3
                          }

# variables['njet']  = {   'name': 'njet',      
#                          'range' : (10,0,10),  
#                          'xaxis' : 'njet', 
#                          'fold' : 0
#                          }
                        
# variables['ptll']  = {   'name': 'ptll',            #   variable name    
#                          'range' : (80,0,800),    #   variable range
#                          'xaxis' : 'p_{T}^{\ell\ell} [GeV]',  #   x axis name
#                          'fold' : 3
#                          }

# variables['met']  = {   'name': 'metPfType1',            #   variable name    
#                         'range' : (50,0,500),    #   variable range
#                         'xaxis' : 'E_{T}^{miss} [GeV]',  #   x axis name
#                         'fold' : 0
#                         }

# variables['mll']  = {   'name': 'mll',             #   variable name    
#                         'range' : (40,0,400),      #   variable range
#                         'xaxis' : 'm_{\ell\ell} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }
                        
variables['metTtrk'] = {'name': 'metTtrk',            #   variable name    
                        'range' : (50,0,500),    #   variable range
                        'xaxis' : 'tracker E_{T}^{miss} [GeV]',  #   x axis name
                        'fold' : 0
                        }

# variables['pt1-pt2']  = {   'name': 'std_vector_lepton_pt[0] - std_vector_lepton_pt[1]',            #   variable name    
#                         'range' : (40,0,400),    #   variable range
#                         'xaxis' : 'p_{T}^{1st lep} - p_{T}^{2nd lep}[GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',            #   variable name    
#                         'range' : (40,0,400),    #   variable range
#                         'xaxis' : 'p_{T}^{1st lep} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',            #   variable name    
#                         'range' : (30,0,300),    #   variable range
#                         'xaxis' : 'p_{T}^{2nd lep} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['nvtx']  = {   'name': 'nvtx',      
#                          'range' : (40,0,40),  
#                          'xaxis' : 'nvtx', 
#                          'fold' : 3
#                          }
                        
