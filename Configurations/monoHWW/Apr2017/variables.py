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

# # mucca for 2HDM Model
# variables['muccamva2HDMadaptFull_All'] = {
#     'name': 'muccamva2HDMadaptFull_All_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_All_NoWeights'] = {
#     'name': 'muccamva2HDMadaptFull_All_em_NoWeights',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # mucca for Zbar Model
# variables['muccamvaZbaradaptFull_All'] = {
#     'name': 'muccamvaZbaradaptFull_All_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbaradaptFull_All_NoWeights'] = {
#     'name': 'muccamvaZbaradaptFull_All_em_NoWeights',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


######################
# Analysis Variables #
######################

# mucca for 2HDM Model
variables['muccamva2HDMadaptFull_All_Bin800'] = {
    'name': 'muccamva2HDMadaptFull_All_em',
    'range' : ([-0.9999,-0.7633,-0.5461,-0.3133,-0.0363,0.1099,0.3129,0.4833,0.7299,1],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }
# variables['muccamva2HDMadaptFull_All_NoWeights_Bin800'] = {
#     'name': 'muccamva2HDMadaptFull_All_em_NoWeights',
#     'range' : ([-0.9999,-0.6879,-0.4019,-0.2039,0.0797,0.2665,0.4229,0.6637,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# mucca for Z'B Model
variables['muccamvaZbaradaptFull_All_Bin100'] = {
    'name': 'muccamvaZbaradaptFull_All_em',
    'range' : ([-0.9999,-0.6041,-0.4669,-0.3249,-0.1113,0.2497,0.6039,1],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }
# variables['muccamvaZbaradaptFull_All_NoWeights_Bin100'] = {
#     'name': 'muccamvaZbaradaptFull_All_em_NoWeights',
#     'range' : ([-0.9999,-0.6493,-0.4915,-0.2653,-0.0019,0.3719,0.5847,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbaradaptFull_All_Bin1000'] = {
#     'name': 'muccamvaZbaradaptFull_All_em',
#     'range' : ([-0.9999,-0.6219,-0.3213,-0.0615,0.2479,0.3939,0.6145,0.7451,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }
# variables['muccamvaZbaradaptFull_All_NoWeights_Bin1000'] = {
#     'name': 'muccamvaZbaradaptFull_All_em_NoWeights',
#     'range' : ([-0.9999,-0.6413,-0.2129,0.1573,0.2983,0.4755,0.6579,0.8393,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

###############################
# Old variables configuration #
###############################

# # mucca for 2HDM Model
# variables['muccamva2HDMadaptFull'] = {
#     'name': 'muccamva2HDMadaptFull_em',
#     #    'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.0,0.2,0.5,1],), # old range in the AN_v2
#     'range' : ([-1,-0.55,-0.35,-0.15,0.05,0.25,0.45,0.65,1.00],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # mucca for Z'B Model
# variables['muccamvaZbaradaptFull'] = {
#     'name': 'muccamvaZbaradaptFull_em',
#     'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.0,0.2,0.5,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # # Analysis Variables - Super Optimized Binning for Adish

# # # mucca for 2HDM Model 
# variables['muccamva2HDMadaptFull_SuperBinBis'] = { # Real endpoint = 0.8
#     'name': 'muccamva2HDMadaptFull_em',
#     'range' : ([-0.9999,-0.6673,-0.4973,-0.2927,-0.0753,0.1723,0.3733,0.5153,0.6533,0.70,0.751,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # mucca for Z'B Model
# variables['muccamvaZbaradaptFull_SuperBinBis'] = { # Real endpoint = 0.74
#     'name': 'muccamvaZbaradaptFull_em',
#     'range' : ([-0.9999,-0.6531,-0.2673,0.0513,0.3197,0.4207,0.5371,0.59,0.64,0.691,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # BDTs trained for 2HDM model mass point mZp = 2000 GeV, mA0 = 300 GeV or mZp = 1000 GeV, mChi = 1 GeV

# # # mucca for 2HDM Model
# variables['muccamva2HDMadaptFull_high'] = {
#     'name': 'muccamva2HDMadaptFull_high_em',
#     'range' : ([-0.9999,-0.5861,-0.3523,-0.3225,-0.1639,0.0583,0.2259,0.3417,0.4611,0.6307,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # mucca for Z'B Model
# variables['muccamvaZbaradaptFull_high'] = {
#     'name': 'muccamvaZbaradaptFull_high_em',
#     'range' : ([-0.9999,-0.6409,-0.4329,-0.2295,0.1419,0.3511,0.5357,0.7163,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }



# variables['muccamvaZbaradaptFull_high'] = {
#     'name': 'muccaZbaradapt(mth,mtw2,metTtrk,drll,ptll)',
#     'range' : ([-0.9999,-0.5277,-0.4781,-0.3065,-0.1439,0.2921,0.5215,0.7047,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/muccaZbaradapt.C+', 'initMyReaderZbaradapt()']
#     }


# variables['myDummy'] = {
#     'name': 'myDummy(std_vector_lepton_pt[0],std_vector_lepton_pt[1])',
#     'range' : (20,-50,50),
#     'xaxis' : 'dummy',
#     'fold' : 3,
#     'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/myDummy.C+']#, 'initMyReader()', 'bookMyReader(\"2HDM\",\"em\",\"BDT7\",\"high\")']
#     }




# # # mucca for 2HDM Model - Old Binning
# variables['muccamva2HDMadaptFull_Old'] = {
#     'name': 'muccamva2HDMadaptFull_em',
#     'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.0,0.2,0.5,1],), # old range in the AN_v2
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # mucca for Z'B Model
# variables['muccamva2HDMgradFull_high'] = {
#     'name': 'muccamva2HDMgradFull_high_em',
#     'range' : ([-0.9999,-0.9187,-0.5975,-0.0357,0.1201,0.1233,0.1245,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbargradFull_high'] = {
# variables['muccamvaZbaradaptFull_Old'] = {
#     'name': 'muccamvaZbaradaptFull_em',
#     'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.0,0.2,0.5,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # # # mucca for 2HDM Model - Intermediate Binning
# variables['muccamva2HDMadaptFull_Intermediate'] = {
#     'name': 'muccamva2HDMadaptFull_em',
#     'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.0,0.2,0.65,1],), # old range in the AN_v2 (just last bin optimised)
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# mucca for Z'B Model
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


############################################
# Binning optimized to properly see shapes #
############################################

variables['muccamva2HDMadaptFull_All'] = {
    'name': 'muccamva2HDMadaptFull_All_em',
    'range' : (40,-1,1),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }
variables['muccamvaZbaradaptFull_All'] = {
    'name': 'muccamvaZbaradaptFull_All_em',
    'range' : (40,-1,1),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }

variables['mth']  = {   'name': 'mth',
                        'range' : (25,0,500),
                        'xaxis' : 'm_{T}^{\ell\ell} [GeV]',
                        'fold' : 3
                        }

variables['mtw1'] = {     'name'  : 'mtw1',
                          'range' : (25,0,500),
                          'xaxis' : 'm_{T}^{W1}',
                          'fold'  : 3
                          }

variables['mtw2'] = {     'name'  : 'mtw2',    
                          'range' : (25,0,250),
                          'xaxis' : 'm_{T}^{W2}', 
                          'fold'  : 3
                          }

variables['drll'] = {     'name': 'drll',    
                          'range' : (25,0,5.0),
                          'xaxis' : '\Delta R_{\ell\ell}',
                          'fold'  : 0
                          }

variables['dphill'] = {   'name': 'dphill',
                         'range' : (20,0,3.2),
                         'xaxis' : '\Delta\Phi_{\ell\ell} [rad]',
                         'fold' : 0
                         }

variables['dphilmet1'] = {   'name': 'dphilmet1',
                          'range' : (20,0,3.2),
                          'xaxis' : '\Delta\Phi_{\ell 1, E_{T}^{miss}} [rad]',
                          'fold' : 0
                          }

variables['dphilmet2'] = {   'name': 'dphilmet2',
                          'range' : (20,0,3.2),
                          'xaxis' : '\Delta\Phi_{\ell 2, E_{T}^{miss}} [rad]',
                          'fold' : 0
                          }

variables['njet']  = {   'name': 'njet',      
                         'range' : (10,0,10),  
                         'xaxis' : 'njet', 
                         'fold' : 0
                         }
                        
variables['ptll']  = {   'name': 'ptll',
                         'range' : (25,0,250),
                         'xaxis' : 'p_{T}^{\ell\ell} [GeV]',
                         'fold' : 3
                         }

variables['met']  = {   'name': 'metPfType1',
                        'range' : (25,0,250),
                        'xaxis' : 'E_{T}^{miss} [GeV]',
                        'fold' : 0
                        }

variables['mll']  = {   'name': 'mll',            
                        'range' : (40,0,400),     
                        'xaxis' : 'm_{\ell\ell} [GeV]',
                        'fold' : 3
                        }
                        
variables['metTtrk'] = {'name': 'metTtrk',            
                        'range' : (25,0,250),    
                        'xaxis' : 'tracker E_{T}^{miss} [GeV]',  
                        'fold' : 0
                        }

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',
                        'range' : (40,0,400),
                        'xaxis' : 'p_{T}^{1st lep} [GeV]',
                        'fold' : 3
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',
                        'range' : (40,0,150),
                        'xaxis' : 'p_{T}^{2nd lep} [GeV]',
                        'fold' : 3
                        }

variables['nvtx']  = {   'name': 'nvtx',      
                         'range' : (40,0,40),  
                         'xaxis' : 'nvtx', 
                         'fold' : 3
                         }
                        
variables['mpmet']  = {   'name': 'mpmet',      
                         'range' : (40,0,300),  
                         'xaxis' : 'min. (proj. tk. E_{T}^{miss}, proj. E_{T}^{miss})', 
                         'fold' : 3
                         }








                        

# variables['pt1-pt2']  = {   'name': 'std_vector_lepton_pt[0] - std_vector_lepton_pt[1]',            #   variable name    
#                         'range' : (40,0,400),    #   variable range
#                         'xaxis' : 'p_{T}^{1st lep} - p_{T}^{2nd lep}[GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['dymva']  = {   'name': 'dymvaggh',      
#                          'range' : (40,-1,1),  
#                          'xaxis' : 'dymva', 
#                          'fold' : 3
#                          }
                        
# variables['Puppi met']  = {   'name': 'metPuppi',            #   variable name    
#                         'range' : (80,0,800),    #   variable range
#                         'xaxis' : 'PUPPI E_{T}^{miss} [GeV]',  #   x axis name
#                         'fold' : 0
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


