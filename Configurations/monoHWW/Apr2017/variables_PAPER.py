# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
# # Tuning for shape analysis

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }


##############################
# MVA Variables with 40 bins #
##############################

# # mucca for 2HDM Model
variables['muccamva2HDMadaptFull_All'] = {
    'name': 'muccamva2HDMadaptFull_All_em',
    'range' : (40,-1,1),
    'xaxis' : 'MVA discriminant',
    'yaxis' : 'Events / Bin',
    'fold' : 3
    }

# # mucca for Zbar Model
variables['muccamvaZbaradaptFull_All'] = {
    'name': 'muccamvaZbaradaptFull_All_em',
    'range' : (40,-1,1),
    'xaxis' : 'MVA discriminant',
    'yaxis' : 'Events / Bin',
    'fold' : 3
    }

# ######################
# # Analysis Variables #
# ######################

# mucca for 2HDM Model
variables['muccamva2HDMadaptFull_All_Bin800'] = {
    'name': 'muccamva2HDMadaptFull_All_em',
    'range' : ([-0.9999,-0.7633,-0.5461,-0.3133,-0.0363,0.1099,0.3129,0.4833,0.7299,1],),
    'xaxis' : 'MVA discriminant',
    'yaxis' : 'Events / Bin',
    'fold' : 3
    }

# mucca for Z'B Model
variables['muccamvaZbaradaptFull_All_Bin100'] = {
    'name': 'muccamvaZbaradaptFull_All_em',
    'range' : ([-0.9999,-0.6041,-0.4669,-0.3249,-0.1113,0.2497,0.6039,1],),
    'xaxis' : 'MVA discriminant',
    'yaxis' : 'Events / Bin',
    'fold' : 3
    }

# ############################################
# # Binning optimized to properly see shapes #
# ############################################

variables['mll']  = {   'name': 'mll',            
                        'range' : (40,0,400),     
                        'xaxis' : '\r m _{ll} [GeV]',
                        'yaxis' : 'Events / 10 GeV',
                        'fold' : 3,
                        }
                        
variables['drll'] = {     'name': 'drll',    
                          'range' : (25,0,5.0),
                          'xaxis' : '#DeltaR(ll)',
                          'yaxis' : 'Events / 0.2',
                          'fold'  : 0
                          }

variables['ptllmet']  = {   'name': 'sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))',
                        'range' : (25,0,250),
                        'xaxis' : '\r p_{T}^{ll, met} [GeV]',
                        'yaxis' : 'Events / 10 GeV',
                        'fold' : 3
                        }

variables['ptllmet_10']  = {   'name': 'sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))',
                        'range' : (10,0,250),
                        'xaxis' : '\r p_{T}^{ll,met} [GeV]',
                        'yaxis' : 'Events / 25 GeV',
                        'fold' : 3
                        }

variables['mth']  = {   'name': 'mth',
                        'range' : (25,0,500),
                        'xaxis' : '\r m _{T}^{ll,met} [GeV]',
                        'yaxis' : 'Events / 20 GeV',
                        'fold' : 3
                        }

variables['mtw1'] = {     'name'  : 'mtw1',
                          'range' : (25,0,500),
                          'xaxis' : '\r m_{T}^{W1} [GeV]',
                          'yaxis' : 'Events / 20 GeV',
                          'fold'  : 3
                          }

variables['mtw2'] = {     'name'  : 'mtw2',    
                          'range' : (25,0,250),
                          'xaxis' : '\r m_{T}^{W2} [GeV]', 
                          'yaxis' : 'Events / 10 GeV',
                          'fold'  : 3
                          }

variables['dphill'] = {   'name': 'dphill',
                          'range' : (20,0,3.2),
                          'xaxis' : '\r #Delta#Phi(ll) [rad]',
                          'yaxis' : 'Events / 0.16 rad',
                          'fold' : 0
                          }

variables['dphilmet1'] = {   'name': 'dphilmet1',
                             'range' : (20,0,3.2),
                             'xaxis' : '\r #Delta#Phi(l1, E_{T}^{miss}) [rad]',
                             'yaxis' : 'Events / 0.16 rad',
                             'fold' : 0
                          }

variables['dphilmet2'] = {   'name': 'dphilmet2',
                             'range' : (20,0,3.2),
                             'xaxis' : '\r #Delta#Phi(l2, E_{T}^{miss}) [rad]',
                             'yaxis' : 'Events / 0.16 rad',
                             'fold' : 0
                          }

variables['njet']  = {   'name': 'njet',      
                         'range' : (10,0,10),  
                         'xaxis' : '\r njet', 
                         'yaxis' : 'Events / Jet',
                         'fold' : 0
                         }
                        
variables['ptll']  = {   'name': 'ptll',
                         'range' : (25,0,250),
                         'xaxis' : '\r p_{T}^{ll} [GeV]',
                         'yaxis' : 'Events / 10 GeV',
                         'fold' : 3
                         }

variables['met']  = {   'name': 'metPfType1',
                        'range' : (25,0,250),
                        'xaxis' : 'E_{T}^{miss} [GeV]',
                        'yaxis' : 'Events / 10 GeV',
                        'fold' : 0
                        }

variables['metTtrk'] = {'name': 'metTtrk',            
                        'range' : (25,0,250),    
                        'xaxis' : 'tracker E_{T}^{miss} [GeV]',  
                        'yaxis' : 'Events / 10 GeV',
                        'fold' : 0
                        }

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',
                        'range' : (40,0,400),
                        'xaxis' : '\r Leading lepton p _{T} [GeV]',
                        'yaxis' : 'Events / 10 GeV',
                        'fold' : 3
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',
                        'range' : (40,0,150),
                        'xaxis' : '\r Trailing lepton p_{T} [GeV]',
                        'yaxis' : 'Events / 3.75 GeV',
                        'fold' : 3
                        }

variables['nvtx']  = {   'name': 'nvtx',      
                         'range' : (40,0,40),  
                         'xaxis' : '\r nvtx', 
                         'yaxis' : 'Events / nvtx',
                         'fold' : 3
                         }
                        
variables['mpmet']  = {   'name': 'mpmet',      
                         'range' : (40,0,300),  
                         'xaxis' : '\r min. (proj. tk. E_{T}^{miss}, proj. E_{T}^{miss}) [GeV]', 
                         'yaxis' : 'Events / 7.5 GeV',
                         'fold' : 3
                         }
