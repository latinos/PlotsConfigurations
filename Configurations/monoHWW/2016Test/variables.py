# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
# Tuning for shape analysis

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }


#####################################################################
# Variables for significance computation - Run without nuisances!!! #
#####################################################################

# # mucca for 2HDM Model
# variables['muccamva2HDMadaptFull_600_sign'] = {
#     'name': 'muccamva2HDMadaptFull_600_300_em ',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_1000_sign'] = {
#     'name': 'muccamva2HDMadaptFull_1000_300_em ',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_2000_sign'] = {
#     'name': 'muccamva2HDMadaptFull_2000_300_em ',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_2500_sign'] = {
#     'name': 'muccamva2HDMadaptFull_2500_300_em ',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_All_sign'] = {
#     'name': 'muccamva2HDMadaptFull_All_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_All_NoWeights_sign'] = {
#     'name': 'muccamva2HDMadaptFull_All_em_NoWeights',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # mucca for Z'B Model
# variables['muccamvaZbaradaptFull_10_sign'] = {
#     'name': 'muccamvaZbaradaptFull_10_1_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbaradaptFull_100_sign'] = {
#     'name': 'muccamvaZbaradaptFull_100_1_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbaradaptFull_1000_sign'] = {
#     'name': 'muccamvaZbaradaptFull_1000_1_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbaradaptFull_2000_sign'] = {
#     'name': 'muccamvaZbaradaptFull_2000_1_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbaradaptFull_All_sign'] = {
#     'name': 'muccamvaZbaradaptFull_All_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbaradaptFull_All_NoWeights_sign'] = {
#     'name': 'muccamvaZbaradaptFull_All_em_NoWeights',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


##############################
# MVA Variables with 40 bins #
##############################

<<<<<<< HEAD
# # mucca for 2HDM Model
# variables['muccamva2HDMadaptFull_All'] = {
#     'name': 'muccamva2HDMadaptFull_All_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'yaxis' : 'Events / Bin',
#     'fold' : 3
#     }

# # mucca for Zbar Model
# variables['muccamvaZbaradaptFull_All'] = {
#     'name': 'muccamvaZbaradaptFull_All_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'yaxis' : 'Events / Bin',
#     'fold' : 3
#     }
=======
# mucca for 2HDM Model
variables['muccamva2HDMadaptFull_All'] = {
    'name': 'muccamva2HDMadaptFull_All_em',
    'range' : (40,-1,1),
    'xaxis' : 'MVA discriminant',
    'yaxis' : 'Events / Bin',
    'fold' : 3
    }

# mucca for Zbar Model
variables['muccamvaZbaradaptFull_All'] = {
    'name': 'muccamvaZbaradaptFull_All_em',
    'range' : (40,-1,1),
    'xaxis' : 'MVA discriminant',
    'yaxis' : 'Events / Bin',
    'fold' : 3
    }

##############################
# MVA Variables with 10 bins #
##############################

# mucca for 2HDM Model
variables['muccamva2HDMadaptFull_All_10'] = {
    'name': 'muccamva2HDMadaptFull_All_em',
    'range' : (10,-1,1),
    'xaxis' : 'MVA discriminant',
    'yaxis' : 'Events / Bin',
    'fold' : 3
    }

# mucca for Zbar Model
variables['muccamvaZbaradaptFull_All_10'] = {
    'name': 'muccamvaZbaradaptFull_All_em',
    'range' : (10,-1,1),
    'xaxis' : 'MVA discriminant',
    'yaxis' : 'Events / Bin',
    'fold' : 3
    }

###################################
# MVA Variables with test binning #
###################################

# mucca for 2HDM Model
variables['muccamva2HDMadaptFull_All_test'] = {
    'name': 'muccamva2HDMadaptFull_All_em',
    'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.0,0.2,0.4,0.6,1],),
    'xaxis' : 'MVA discriminant',
    'yaxis' : 'Events / Bin',
    'fold' : 3
    }

# mucca for Zbar Model
variables['muccamvaZbaradaptFull_All_test'] = {
    'name': 'muccamvaZbaradaptFull_All_em',
    'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.0,0.2,0.4,0.6,1],),
    'xaxis' : 'MVA discriminant',
    'yaxis' : 'Events / Bin',
    'fold' : 3
    }
>>>>>>> 3849cb41e4046ce4fd0345b02bde5ec3145593f2

######################
# Analysis Variables #
######################

<<<<<<< HEAD
# # mucca for 2HDM Model
# variables['muccamva2HDMadaptFull_All_Bin800'] = {
#     'name': 'muccamva2HDMadaptFull_All_em',
#     'range' : ([-0.9999,-0.7633,-0.5461,-0.3133,-0.0363,0.1099,0.3129,0.4833,0.7299,1],),
#     'xaxis' : 'MVA discriminant',
#     'yaxis' : 'Events / Bin',
#     'fold' : 3
#     }

# # mucca for Z'B Model
# variables['muccamvaZbaradaptFull_All_Bin100'] = {
#     'name': 'muccamvaZbaradaptFull_All_em',
#     'range' : ([-0.9999,-0.6041,-0.4669,-0.3249,-0.1113,0.2497,0.6039,1],),
#     'xaxis' : 'MVA discriminant',
#     'yaxis' : 'Events / Bin',
#     'fold' : 3
#     }

# variables['muccamvaZbaradaptFull_All_Bin1000'] = {
#     'name': 'muccamvaZbaradaptFull_All_em',
#     'range' : ([-0.9999,-0.6563,-0.4529,-0.2735,0.0507,0.3379,0.5739,0.7321,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# # mth
# variables['mthBin']  = {
#     'name': 'mth',
#     'range' : ([0,50,100,150,200,1000],),
#     'xaxis' : 'm_{T}^{ll} [GeV]',
#     'fold' : 3
#     }
=======
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

variables['muccamvaZbaradaptFull_All_Bin1000'] = {
    'name': 'muccamvaZbaradaptFull_All_em',
    'range' : ([-0.9999,-0.6563,-0.4529,-0.2735,0.0507,0.3379,0.5739,0.7321,1],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }

# mth
variables['mthBin']  = {
    'name': 'mth',
    'range' : ([0,50,100,150,200,1000],),
    'xaxis' : 'm_{T}^{ll} [GeV]',
    'fold' : 3
    }

# mth
variables['mthBin2']  = {
    'name': 'mth',
    'range' : ([0,50,100,150,200,250,1000],),
    'xaxis' : 'm_{T}^{ll} [GeV]',
    'fold' : 3
    }
>>>>>>> 3849cb41e4046ce4fd0345b02bde5ec3145593f2


############################################
# Binning optimized to properly see shapes #
############################################

# variables['muccamva2HDMadaptFull_All'] = {
#     'name': 'muccamva2HDMadaptFull_All_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }
# variables['muccamvaZbaradaptFull_All'] = {
#     'name': 'muccamvaZbaradaptFull_All_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

variables['mll']  = {   'name': 'mll',            
                        'range' : (40,0,400),     
                        'xaxis' : '\r m_{ll} [GeV]',
                        'yaxis' : 'Events / 10 GeV',
                        'fold' : 3,
                        }
                        
variables['drll'] = {     'name': 'drll',    
                          'range' : (25,0,5.0),
                          'xaxis' : '#Delta R(ll) [rad]',
                          'yaxis' : 'Events / 0.2 rad',
                          'fold'  : 0
                          }

# variables['ptllmet']  = {   'name': 'sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))',
#                         'range' : (25,0,250),
#                         'xaxis' : '\r p_{T}^{ll, met} [GeV]',
#                         'yaxis' : 'Events / 10 GeV',
#                         'fold' : 3
#                         }

# variables['ptllmet_10']  = {   'name': 'sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))',
#                         'range' : (10,0,250),
#                         'xaxis' : '\r p_{T}^{ll,met} [GeV]',
#                         'yaxis' : 'Events / 25 GeV',
#                         'fold' : 3
#                         }

variables['mth']  = {   'name': 'mth',
                        'range' : (25,0,500),
                        'xaxis' : '\r m_{T}^{ll,met} [GeV]',
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
                        'xaxis' : '\r Leading lepton p_{T} [GeV]',
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








                        

# variables['pt1-pt2']  = {   'name': 'std_vector_lepton_pt[0] - std_vector_lepton_pt[1]',            #   variable name    
#                         'range' : (40,0,400),    #   variable range
#                         'xaxis' : '\r p_{T}^{1st lep} - p_{T}^{2nd lep}[GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['dymva']  = {   'name': 'dymvaggh',      
#                          'range' : (40,-1,1),  
#                          'xaxis' : '\r dymva', 
#                          'fold' : 3
#                          }
                        
# variables['Puppi met']  = {   'name': 'metPuppi',            #   variable name    
#                         'range' : (80,0,800),    #   variable range
#                         'xaxis' : '\r PUPPI E_{T}^{miss} [GeV]',  #   x axis name
#                         'fold' : 0
#                         }

# variables['ht20']  = {   'name': 'std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1 + std_vector_jet_pt[0]*(std_vector_jet_pt[0]>20) + std_vector_jet_pt[1]*(std_vector_jet_pt[1]>20) + std_vector_jet_pt[2]*(std_vector_jet_pt[2]>20) + std_vector_jet_pt[3]*(std_vector_jet_pt[3]>20) + std_vector_jet_pt[4]*(std_vector_jet_pt[4]>20) + std_vector_jet_pt[5]*(std_vector_jet_pt[5]>20) + std_vector_jet_pt[6]*(std_vector_jet_pt[6]>20) + std_vector_jet_pt[7]*(std_vector_jet_pt[7]>20) + std_vector_jet_pt[8]*(std_vector_jet_pt[8]>20) + std_vector_jet_pt[9]*(std_vector_jet_pt[9]>20)',            #   variable name    
#                         'range' : (150,0,1500),     #   variable range
#                         'xaxis' : '\r H_{T} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['ht']  = {   'name': 'std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1 + std_vector_jet_pt[0]*(std_vector_jet_pt[0]>30) + std_vector_jet_pt[1]*(std_vector_jet_pt[1]>30) + std_vector_jet_pt[2]*(std_vector_jet_pt[2]>30) + std_vector_jet_pt[3]*(std_vector_jet_pt[3]>30) + std_vector_jet_pt[4]*(std_vector_jet_pt[4]>30) + std_vector_jet_pt[5]*(std_vector_jet_pt[5]>30) + std_vector_jet_pt[6]*(std_vector_jet_pt[6]>30) + std_vector_jet_pt[7]*(std_vector_jet_pt[7]>30) + std_vector_jet_pt[8]*(std_vector_jet_pt[8]>30) + std_vector_jet_pt[9]*(std_vector_jet_pt[9]>30)',            #   variable name    
#                         'range' : (80,0,800),     #   variable range
#                         'xaxis' : '\r H_{T} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['lep_ht']  = {   'name': 'std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1',            #   variable name    
#                         'range' : (50,0,500),     #   variable range
#                         'xaxis' : '\r p_{T}^{1} + p_{T}^{2} + E_{T}^{miss} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }


