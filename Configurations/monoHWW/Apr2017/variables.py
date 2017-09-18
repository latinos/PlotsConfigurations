# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
# Tuning for shape analysis

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }

# # # variables for significance computation - Run without nuisances!!!
# # # mucca for 2HDM Model
# variables['muccamva2HDMgradFull_sign'] = {
#     'name': 'muccamva2HDMgradFull_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_sign'] = {
#     'name': 'muccamva2HDMadaptFull_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # mucca for Z'B Model
# variables['muccamvaZbargradFull_sign'] = {
#     'name': 'muccamvaZbargradFull_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbaradaptFull_sign'] = {
#     'name': 'muccamvaZbaradaptFull_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }



# # variables['muccamva2HDMadaptFull_grad'] = {
# #     'name': 'muccamva2HDMadaptFull_em',
# #     'range' : ([-1,-0.70,-0.50,-0.30,-0.10,0.10,0.30,1.00],), # last two bins of adaptive boost are merged together
# #     'xaxis' : 'MVA discriminant',
# #     'fold' : 3
# #     }


# # # # Analysis Variables

# # # mucca for 2HDM Model
variables['muccamva2HDMgradFull'] = {
    'name': 'muccamva2HDMgradFull_em',
#    'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.1,1],), # old 6 bins
    'range' : ([-1,-0.80,-0.65,-0.50,-0.35,-0.20,-0.05,0.136,1.00],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }

variables['muccamva2HDMadaptFull'] = {
    'name': 'muccamva2HDMadaptFull_em',
    #    'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.0,0.2,0.5,1],), # old range in the AN_v2
    'range' : ([-1,-0.55,-0.35,-0.15,0.05,0.25,0.45,0.65,1.00],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }


# mucca for Z'B Model
variables['muccamvaZbargradFull'] = {
    'name': 'muccamvaZbargradFull_em',
    # 'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.05,1],),           #  old range in AN_v2
    'range' : ([-1,-0.82,-0.67,-0.52,-0.37,-0.22,-0.07,0.077,1.00],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }

variables['muccamvaZbaradaptFull'] = {
    'name': 'muccamvaZbaradaptFull_em',
    'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.0,0.2,0.5,1],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }


# # # # Analysis Variables - Super Optimized Binning for Adish

# # # mucca for 2HDM Model
variables['muccamva2HDMgradFull_SuperBin'] = {
    'name': 'muccamva2HDMgradFull_em',
    'range' : ([-0.9999,-0.7563,-0.7079,-0.5795,-0.3181,0.0591,0.1311,0.1361,1],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }

variables['muccamva2HDMadaptFull_SuperBin'] = {
    'name': 'muccamva2HDMadaptFull_em',
    'range' : ([-0.9999,-0.6673,-0.4973,-0.2927,-0.0753,0.1723,0.3733,0.5153,0.6533,1],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }


# mucca for Z'B Model
variables['muccamvaZbargradFull_SuperBin'] = {
    'name': 'muccamvaZbargradFull_em',
    'range' : ([-0.9999,-0.7955,-0.5009,-0.1449,0.0651,0.0771,0.0775,1],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }

variables['muccamvaZbaradaptFull_SuperBin'] = {
    'name': 'muccamvaZbaradaptFull_em',
    'range' : ([-0.9999,-0.6531,-0.2673,0.0513,0.3197,0.4207,0.5371,1],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }


# # BDTs trained for 2HDM model mass point mZp = 2000 GeV, mA0 = 300 GeV

# # # mucca for 2HDM Model
variables['muccamva2HDMgradFull_high'] = {
   'name': 'mucca2HDMgrad(mth,mtw2,metTtrk,drll,ptll)',
    'range' : ([-1,-0.80,-0.65,-0.50,-0.35,-0.20,-0.05,0.136,1.00],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3,
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/mucca2HDMgrad.C+', 'initMyReader2HDMgrad()']
   }

variables['muccamva2HDMadaptFull_high'] = {
    'name': 'mucca2HDMadapt(mth,mtw2,metTtrk,drll,ptll)',
    'range' : ([-1,-0.55,-0.35,-0.15,0.05,0.25,0.45,0.65,1.00],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3,
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/mucca2HDMadapt.C+', 'initMyReader2HDMadapt()']
    }


# mucca for Z'B Model
variables['muccamvaZbargradFull_high'] = {
    'name': 'muccaZbargrad(mth,mtw2,metTtrk,drll,ptll)',
    'range' : ([-1,-0.82,-0.67,-0.52,-0.37,-0.22,-0.07,0.077,1.00],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3,
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/muccaZbargrad.C+', 'initMyReaderZbargrad()']
    }

variables['muccamvaZbaradaptFull_high'] = {
    'name': 'muccaZbaradapt(mth,mtw2,metTtrk,drll,ptll)',
    'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.0,0.2,0.5,1],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3,
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/muccaZbaradapt.C+', 'initMyReaderZbaradapt()']
    }


# variables['myDummy'] = {
#     'name': 'myDummy(std_vector_lepton_pt[0],std_vector_lepton_pt[1])',
#     'range' : (20,-50,50),
#     'xaxis' : 'dummy',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/myDummy.C+']#, 'initMyReader()', 'bookMyReader(\"2HDM\",\"em\",\"BDT7\",\"high\")']
#     }




# # # mucca for 2HDM Model - Old Binning
# variables['muccamva2HDMgradFull_Old'] = {
#     'name': 'muccamva2HDMgradFull_em',
#     'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.1,1],), # old 6 bins
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_Old'] = {
#     'name': 'muccamva2HDMadaptFull_em',
#     'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.0,0.2,0.5,1],), # old range in the AN_v2
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # mucca for Z'B Model
# variables['muccamvaZbargradFull_Old'] = {
#     'name': 'muccamvaZbargradFull_em',
#     'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.05,1],),           #  old range in AN_v2
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbaradaptFull_Old'] = {
#     'name': 'muccamvaZbaradaptFull_em',
#     'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.0,0.2,0.5,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # # # mucca for 2HDM Model - Intermediate Binning
# variables['muccamva2HDMgradFull_Intermediate'] = {
#     'name': 'muccamva2HDMgradFull_em',
#     'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.136,1],), # old 6 bins (just last bin optimised)
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_Intermediate'] = {
#     'name': 'muccamva2HDMadaptFull_em',
#     'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.0,0.2,0.65,1],), # old range in the AN_v2 (just last bin optimised)
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# mucca for Z'B Model
# variables['muccamvaZbargradFull_Intermediate'] = {
#     'name': 'muccamvaZbargradFull_em',
#     'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.077,1],),           #  old range in AN_v2 (just last bin optimised)
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbaradaptFull_Intermediate'] = {
#     'name': 'muccamvaZbaradaptFull_em',
#     'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.0,0.2,0.5,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # mth
# variables['mthBin']  = {
#     'name': 'mth',
#     'range' : ([0,50,100,150,200,1000],),
#     'xaxis' : 'm_{T}^{\ell\ell} [GeV]',
#     'fold' : 3
#     }


# # # # # Binning optimized to properly see shapes

# # # mucca for 2HDM Model
# variables['muccamva2HDMgradFullControl'] = {
#     'name': 'muccamva2HDMgradFull_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFullControl'] = {'name': 'muccamva2HDMadaptFull_em',          #  variable name    
#                         'range' : (40,-1,1),           #  variable range
#                         'xaxis' : 'MVA discriminant',  #  x axis name
#                         'fold' : 3
#                         }

# # mucca for Z'B Model
# variables['muccamvaZbargradFullControl'] = {'name': 'muccamvaZbargradFull_em',          #  variable name    
#                         'range' : (40,-1,1),           #  variable range
#                         'xaxis' : 'MVA discriminant',  #  x axis name
#                         'fold' : 3
#                         }

# variables['muccamvaZbaradaptFullControl'] = {'name': 'muccamvaZbaradaptFull_em',          #  variable name    
#                         'range' : (40,-1,1),           #  variable range
#                         'xaxis' : 'MVA discriminant',  #  x axis name
#                         'fold' : 3
#                         }


# variables['mth']  = {   'name': 'mth',            #   variable name    
#                         'range' : (50,0,1000),     #   variable range
#                         'xaxis' : 'm_{T}^{\ell\ell} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['ht20']  = {   'name': 'std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1 + std_vector_jet_pt[0]*(std_vector_jet_pt[0]>20) + std_vector_jet_pt[1]*(std_vector_jet_pt[1]>20) + std_vector_jet_pt[2]*(std_vector_jet_pt[2]>20) + std_vector_jet_pt[3]*(std_vector_jet_pt[3]>20) + std_vector_jet_pt[4]*(std_vector_jet_pt[4]>20) + std_vector_jet_pt[5]*(std_vector_jet_pt[5]>20) + std_vector_jet_pt[6]*(std_vector_jet_pt[6]>20) + std_vector_jet_pt[7]*(std_vector_jet_pt[7]>20) + std_vector_jet_pt[8]*(std_vector_jet_pt[8]>20) + std_vector_jet_pt[9]*(std_vector_jet_pt[9]>20)',            #   variable name    
#                         'range' : (150,0,1500),     #   variable range
#                         'xaxis' : 'H_{T} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['ht']  = {   'name': 'std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1 + std_vector_jet_pt[0]*(std_vector_jet_pt[0]>30) + std_vector_jet_pt[1]*(std_vector_jet_pt[1]>30) + std_vector_jet_pt[2]*(std_vector_jet_pt[2]>30) + std_vector_jet_pt[3]*(std_vector_jet_pt[3]>30) + std_vector_jet_pt[4]*(std_vector_jet_pt[4]>30) + std_vector_jet_pt[5]*(std_vector_jet_pt[5]>30) + std_vector_jet_pt[6]*(std_vector_jet_pt[6]>30) + std_vector_jet_pt[7]*(std_vector_jet_pt[7]>30) + std_vector_jet_pt[8]*(std_vector_jet_pt[8]>30) + std_vector_jet_pt[9]*(std_vector_jet_pt[9]>30)',            #   variable name    
#                         'range' : (80,0,800),     #   variable range
#                         'xaxis' : 'H_{T} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['lep_ht']  = {   'name': 'std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1',            #   variable name    
#                         'range' : (50,0,500),     #   variable range
#                         'xaxis' : 'p_{T}^{1} + p_{T}^{2} + E_{T}^{miss} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['mtw1'] = {     'name'  : 'mtw1',            #   variable name    
#                           'range' : (80,0,800),    #   variable range
#                           'xaxis' : 'm_{T}^{W1}',  #   x axis name
#                           'fold'  : 3
#                           }

# variables['drll'] = {     'name': 'drll',    
#                           'range' : (50,0,5.0),
#                           'xaxis' : '\Delta R_{\ell\ell}',
#                           'fold'  : 0
#                           }

# variables['dphill'] = {   'name': 'dphill',            #   variable name    
#                          'range' : (20,0,3.2),    #   variable range
#                          'xaxis' : '\Delta\Phi_{\ell\ell} [rad]',  #   x axis name
#                          'fold' : 0
#                          }

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

# variables['mtw2'] = {     'name'  : 'mtw2',    
#                           'range' : (50,0,500),
#                           'xaxis' : 'm_{T}^{W2}', 
#                           'fold'  : 3
#                           }

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
#                         'range' : (80,0,800),    #   variable range
#                         'xaxis' : 'E_{T}^{miss} [GeV]',  #   x axis name
#                         'fold' : 0
#                         }

# variables['Puppi met']  = {   'name': 'metPuppi',            #   variable name    
#                         'range' : (80,0,800),    #   variable range
#                         'xaxis' : 'PUPPI E_{T}^{miss} [GeV]',  #   x axis name
#                         'fold' : 0
#                         }

# variables['mll']  = {   'name': 'mll',            
#                         'range' : (40,0,400),     
#                         'xaxis' : 'm_{\ell\ell} [GeV]',
#                         'fold' : 3
#                         }
                        
# variables['metTtrk'] = {'name': 'metTtrk',            
#                         'range' : (80,0,800),    
#                         'xaxis' : 'tracker E_{T}^{miss} [GeV]',  
#                         'fold' : 0
#                         }

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
#                         'range' : (20,0,200),    #   variable range
#                         'xaxis' : 'p_{T}^{2nd lep} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['nvtx']  = {   'name': 'nvtx',      
#                          'range' : (40,0,40),  
#                          'xaxis' : 'nvtx', 
#                          'fold' : 3
#                          }
                        
# variables['dymva']  = {   'name': 'dymvaggh',      
#                          'range' : (40,-1,1),  
#                          'xaxis' : 'dymva', 
#                          'fold' : 3
#                          }
                        
# variables['mpmet']  = {   'name': 'mpmet',      
#                          'range' : (80,0,800),  
#                          'xaxis' : 'min. (proj. tk. E_{T}^{miss}, proj. E_{T}^{miss})', 
#                          'fold' : 3
#                          }
                        
# variables['phi1']  = {   'name': 'std_vector_lepton_phi[0]',      
#                          'range' : (40,-3.2,3.2),  
#                          'xaxis' : 'min. (proj. tk. E_{T}^{miss}, proj. E_{T}^{miss})', 
#                          'fold' : 3
#                          }
                        
