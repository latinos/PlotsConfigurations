# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
# Tuning for shape analysis

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }


##############################
# MVA Variables with 40 bins #
##############################

# # mucca for 2HDM Model
# variables['muccamva2HDMadaptFull_All_sign'] = {
#     'name': 'muccamva2HDMadaptFull_All_sf',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_All_DY_sign'] = {
#     'name': 'muccamva2HDMadaptFull_All_sf_DY',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # mucca for Zbar Model
# variables['muccamvaZbaradaptFull_All_sign'] = {
#     'name': 'muccamvaZbaradaptFull_All_sf',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbaradaptFull_All_DY_sign'] = {
#     'name': 'muccamvaZbaradaptFull_All_sf_DY',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


##############################
# MVA Variables with 40 bins #
##############################

# # mucca for 2HDM Model
# variables['muccamva2HDMadaptFull_All'] = {
#     'name': 'muccamva2HDMadaptFull_All_sf',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_All_DY'] = {
#     'name': 'muccamva2HDMadaptFull_All_sf_DY',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # mucca for Zbar Model
# variables['muccamvaZbaradaptFull_All'] = {
#     'name': 'muccamvaZbaradaptFull_All_sf',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbaradaptFull_All_DY'] = {
#     'name': 'muccamvaZbaradaptFull_All_sf_DY',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


######################
# Analysis Variables #
######################

# mucca for 2HDM Model
variables['muccamva2HDMadaptFull_All_Bin800'] = {
    'name': 'muccamva2HDMadaptFull_All_sf',
    #    'range' : ([-0.9999,-0.5021,-0.4199,-0.3169,-0.1611,0.0733,0.2401,0.4107,0.5285,0.7221,1],),
    'range' : ([-0.9999,-0.6073,-0.3169,-0.1611,0.0733,0.2401,0.4107,0.5285,0.7221,1],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }

variables['muccamva2HDMadaptFull_All_Bin800_Bis'] = { # last two bins merged
    'name': 'muccamva2HDMadaptFull_All_sf',
    'range' : ([-0.9999,-0.6073,-0.3169,-0.1611,0.0733,0.2401,0.4107,0.5285,1],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }

# mucca for Z'B Model
variables['muccamvaZbaradaptFull_All_Bin100'] = {
    'name': 'muccamvaZbaradaptFull_All_sf',
    'range' : ([-0.9999,-0.7633,-0.5461,-0.3133,-0.0363,0.1099,0.3129,0.4833,0.7299,1],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }

variables['muccamvaZbaradaptFull_All_Bin100_Bis'] = { # last two bins merged
    'name': 'muccamvaZbaradaptFull_All_sf',
    'range' : ([-0.9999,-0.7633,-0.5461,-0.3133,-0.0363,0.1099,0.3129,0.4833,1],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }

############################################
# Binning optimized to properly see shapes #
############################################

# variables['mth']  = {   'name': 'mth',
#                         'range' : (25,0,500),
#                         'xaxis' : 'm_{T}^{\ell\ell} [GeV]',
#                         'fold' : 3
#                         }

# variables['mtw1'] = {     'name'  : 'mtw1',
#                           'range' : (25,0,500),
#                           'xaxis' : 'm_{T}^{W1}',
#                           'fold'  : 3
#                           }

# variables['mtw2'] = {     'name'  : 'mtw2',    
#                           'range' : (25,0,250),
#                           'xaxis' : 'm_{T}^{W2}', 
#                           'fold'  : 3
#                           }

# variables['drll'] = {     'name': 'drll',    
#                           'range' : (25,0,5.0),
#                           'xaxis' : '\Delta R_{\ell\ell}',
#                           'fold'  : 0
#                           }

# variables['dphill'] = {   'name': 'dphill',
#                          'range' : (20,0,3.2),
#                          'xaxis' : '\Delta\Phi_{\ell\ell} [rad]',
#                          'fold' : 0
#                          }

# variables['dphilmet1'] = {   'name': 'dphilmet1',
#                           'range' : (20,0,3.2),
#                           'xaxis' : '\Delta\Phi_{\ell 1, E_{T}^{miss}} [rad]',
#                           'fold' : 0
#                           }

# variables['dphilmet2'] = {   'name': 'dphilmet2',
#                           'range' : (20,0,3.2),
#                           'xaxis' : '\Delta\Phi_{\ell 2, E_{T}^{miss}} [rad]',
#                           'fold' : 0
#                           }

# variables['njet']  = {   'name': 'njet',      
#                          'range' : (10,0,10),  
#                          'xaxis' : 'njet', 
#                          'fold' : 0
#                          }
                        
# variables['ptll']  = {   'name': 'ptll',
#                          'range' : (25,0,250),
#                          'xaxis' : 'p_{T}^{\ell\ell} [GeV]',
#                          'fold' : 3
#                          }

# variables['met']  = {   'name': 'metPfType1',
#                         'range' : (25,0,250),
#                         'xaxis' : 'E_{T}^{miss} [GeV]',
#                         'fold' : 0
#                         }

# variables['mll']  = {   'name': 'mll',            
#                         'range' : (40,0,400),     
#                         'xaxis' : 'm_{\ell\ell} [GeV]',
#                         'fold' : 3
#                         }
                        
# variables['metTtrk'] = {'name': 'metTtrk',            
#                         'range' : (25,0,250),    
#                         'xaxis' : 'tracker E_{T}^{miss} [GeV]',  
#                         'fold' : 0
#                         }

# variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',
#                         'range' : (40,0,400),
#                         'xaxis' : 'p_{T}^{1st lep} [GeV]',
#                         'fold' : 3
#                         }

# variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',
#                         'range' : (40,0,150),
#                         'xaxis' : 'p_{T}^{2nd lep} [GeV]',
#                         'fold' : 3
#                         }

# variables['nvtx']  = {   'name': 'nvtx',      
#                          'range' : (40,0,40),  
#                          'xaxis' : 'nvtx', 
#                          'fold' : 3
#                          }
                        
# variables['mpmet']  = {   'name': 'mpmet',      
#                          'range' : (40,0,300),  
#                          'xaxis' : 'min. (proj. tk. E_{T}^{miss}, proj. E_{T}^{miss})', 
#                          'fold' : 3
#                          }

# variables['dymva']  = {   'name': 'dymvaggh',      
#                          'range' : (40,-1,1),  
#                          'xaxis' : 'dymva', 
#                          'fold' : 3
#                          }
                        

