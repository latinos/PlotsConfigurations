# variablesb

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
# Tuning for shape analysis

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }
    
# mucca for 2HDM Model
# variables['muccamva2HDMgradFullControl'] = {'name': 'muccamva2HDMgradFull_em',          #  variable name    
#                         'range' : (40,-1,1),           #  variable range
#                         'xaxis' : 'MVA discriminant',  #  x axis name
#                         'fold' : 3
#                         }

# variables['muccamva2HDMadaptFullControl'] = {'name': 'muccamva2HDMadaptFull_em',          #  variable name    
#                         'range' : (40,-1,1),           #  variable range
#                         'xaxis' : 'MVA discriminant',  #  x axis name
#                         'fold' : 3
#                         }

# variables['muccamva2HDMgradFull'] = {'name': 'muccamva2HDMgradFull_em',          #  variable name    
#                         'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.1,1],),           #  variable range
#                         'xaxis' : 'MVA discriminant',  #  x axis name
#                         'fold' : 3
#                         }

# variables['muccamva2HDMadaptFull'] = {'name': 'muccamva2HDMadaptFull_em',          #  variable name    
#                         'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.0,0.2,0.5,1],),           #  variable range
#                         'xaxis' : 'MVA discriminant',  #  x axis name
#                         'fold' : 3
#                         }


# mucca for Z'B Model
# variables['muccamvaZbargradFull'] = {'name': 'muccamvaZbargradFull_em',          #  variable name    
#                         'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.05,1],),           #  variable range
#                         'xaxis' : 'MVA discriminant',  #  x axis name
#                         'fold' : 3
#                         }

# variables['muccamvaZbaradaptFull'] = {'name': 'muccamvaZbaradaptFull_em',          #  variable name    
#                         'range' : ([-1,-0.7,-0.5,-0.3,-0.1,0.1,0.5,1],),           #  variable range
#                         'xaxis' : 'MVA discriminant',  #  x axis name
#                         'fold' : 3
#                         }

# Standard variables

variables['mthBin']  = {   'name': 'mth',            #   variable name    
                        'range' : ([0,50,100,150,200,1000],),    #   variable range
                        'xaxis' : 'm_{T}^{\ell\ell} [GeV]',  #   x axis name
                        'fold' : 3
                        }

# # Binning optimized to properly see shapes
variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (50,0,1000),     #   variable range
                        'xaxis' : 'm_{T}^{\ell\ell} [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['ht20']  = {   'name': 'std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1 + std_vector_jet_pt[0]*(std_vector_jet_pt[0]>20) + std_vector_jet_pt[1]*(std_vector_jet_pt[1]>20) + std_vector_jet_pt[2]*(std_vector_jet_pt[2]>20) + std_vector_jet_pt[3]*(std_vector_jet_pt[3]>20) + std_vector_jet_pt[4]*(std_vector_jet_pt[4]>20) + std_vector_jet_pt[5]*(std_vector_jet_pt[5]>20) + std_vector_jet_pt[6]*(std_vector_jet_pt[6]>20) + std_vector_jet_pt[7]*(std_vector_jet_pt[7]>20) + std_vector_jet_pt[8]*(std_vector_jet_pt[8]>20) + std_vector_jet_pt[9]*(std_vector_jet_pt[9]>20)',            #   variable name    
                        'range' : (150,0,1500),     #   variable range
                        'xaxis' : 'H_{T} [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['ht']  = {   'name': 'std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1 + std_vector_jet_pt[0]*(std_vector_jet_pt[0]>30) + std_vector_jet_pt[1]*(std_vector_jet_pt[1]>30) + std_vector_jet_pt[2]*(std_vector_jet_pt[2]>30) + std_vector_jet_pt[3]*(std_vector_jet_pt[3]>30) + std_vector_jet_pt[4]*(std_vector_jet_pt[4]>30) + std_vector_jet_pt[5]*(std_vector_jet_pt[5]>30) + std_vector_jet_pt[6]*(std_vector_jet_pt[6]>30) + std_vector_jet_pt[7]*(std_vector_jet_pt[7]>30) + std_vector_jet_pt[8]*(std_vector_jet_pt[8]>30) + std_vector_jet_pt[9]*(std_vector_jet_pt[9]>30)',            #   variable name    
                        'range' : (80,0,800),     #   variable range
                        'xaxis' : 'H_{T} [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['lep_ht']  = {   'name': 'std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1',            #   variable name    
                        'range' : (50,0,500),     #   variable range
                        'xaxis' : 'p_{T}^{1} + p_{T}^{2} + E_{T}^{miss} [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['mtw1'] = {     'name'  : 'mtw1',            #   variable name    
                          'range' : (80,0,800),    #   variable range
                          'xaxis' : 'm_{T}^{W1}',  #   x axis name
                          'fold'  : 3
                          }

variables['drll'] = {     'name': 'drll',    
                          'range' : (50,0,5.0),
                          'xaxis' : '\Delta R_{\ell\ell}',
                          'fold'  : 0
                          }

variables['dphill'] = {   'name': 'dphill',            #   variable name    
                         'range' : (20,0,3.2),    #   variable range
                         'xaxis' : '\Delta\Phi_{\ell\ell} [rad]',  #   x axis name
                         'fold' : 0
                         }

variables['dphilmet1'] = {   'name': 'dphilmet1',            #   variable name    
                          'range' : (20,0,3.2),    #   variable range
                          'xaxis' : '\Delta\Phi_{\ell 1, E_{T}^{miss}} [rad]',  #   x axis name
                          'fold' : 0
                          }

variables['dphilmet2'] = {   'name': 'dphilmet2',            #   variable name    
                          'range' : (20,0,3.2),    #   variable range
                          'xaxis' : '\Delta\Phi_{\ell 2, E_{T}^{miss}} [rad]',  #   x axis name
                          'fold' : 0
                          }

variables['mtw2'] = {     'name'  : 'mtw2',    
                          'range' : (50,0,500),
                          'xaxis' : 'm_{T}^{W2}', 
                          'fold'  : 3
                          }

variables['njet']  = {   'name': 'njet',      
                         'range' : (10,0,10),  
                         'xaxis' : 'njet', 
                         'fold' : 0
                         }
                        
variables['ptll']  = {   'name': 'ptll',            #   variable name    
                         'range' : (80,0,800),    #   variable range
                         'xaxis' : 'p_{T}^{\ell\ell} [GeV]',  #   x axis name
                         'fold' : 3
                         }

variables['met']  = {   'name': 'metPfType1',            #   variable name    
                        'range' : (80,0,800),    #   variable range
                        'xaxis' : 'E_{T}^{miss} [GeV]',  #   x axis name
                        'fold' : 0
                        }

variables['Puppi met']  = {   'name': 'metPuppi',            #   variable name    
                        'range' : (80,0,800),    #   variable range
                        'xaxis' : 'PUPPI E_{T}^{miss} [GeV]',  #   x axis name
                        'fold' : 0
                        }

variables['mll']  = {   'name': 'mll',            
                        'range' : (40,0,400),     
                        'xaxis' : 'm_{\ell\ell} [GeV]',
                        'fold' : 3
                        }
                        
variables['metTtrk'] = {'name': 'metTtrk',            
                        'range' : (80,0,800),    
                        'xaxis' : 'tracker E_{T}^{miss} [GeV]',  
                        'fold' : 0
                        }

variables['pt1-pt2']  = {   'name': 'std_vector_lepton_pt[0] - std_vector_lepton_pt[1]',            #   variable name    
                        'range' : (40,0,400),    #   variable range
                        'xaxis' : 'p_{T}^{1st lep} - p_{T}^{2nd lep}[GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',            #   variable name    
                        'range' : (40,0,400),    #   variable range
                        'xaxis' : 'p_{T}^{1st lep} [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'p_{T}^{2nd lep} [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['nvtx']  = {   'name': 'nvtx',      
                         'range' : (40,0,40),  
                         'xaxis' : 'nvtx', 
                         'fold' : 3
                         }
                        
variables['dymva']  = {   'name': 'dymvaggh',      
                         'range' : (40,-1,1),  
                         'xaxis' : 'dymva', 
                         'fold' : 3
                         }
                        
variables['mpmet']  = {   'name': 'mpmet',      
                         'range' : (80,0,800),  
                         'xaxis' : 'min. (proj. tk. E_{T}^{miss}, proj. E_{T}^{miss})', 
                         'fold' : 3
                         }
                        
