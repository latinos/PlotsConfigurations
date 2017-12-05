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

# mucca for 2HDM Model
# variables['muccamva2HDMadaptFull_All_sign'] = {
#     'name': 'muccamva2HDMadaptFull_All_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_600_sign'] = {
#     'name': 'muccamva2HDMadaptFull_600_300_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_800_sign'] = {
#     'name': 'muccamva2HDMadaptFull_800_300_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_1000_sign'] = {
#     'name': 'muccamva2HDMadaptFull_1000_300_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_1200_sign'] = {
#     'name': 'muccamva2HDMadaptFull_1200_300_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_1400_sign'] = {
#     'name': 'muccamva2HDMadaptFull_1400_300_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_1700_sign'] = {
#     'name': 'muccamva2HDMadaptFull_1700_300_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_2000_sign'] = {
#     'name': 'muccamva2HDMadaptFull_2000_300_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_2500_sign'] = {
#     'name': 'muccamva2HDMadaptFull_2500_300_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# mucca for Z'B Model
# variables['muccamvaZbaradaptFull_All_sign'] = {
#     'name': 'muccamvaZbaradaptFull_All_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbaradaptFull_10_sign'] = {
#     'name': 'muccamvaZbaradaptFull_10_1_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# # variables['muccamvaZbaradaptFull_20_sign'] = {
# #     'name': 'muccamvaZbaradaptFull_20_1_em',
# #     'range' : (10000,-1,1),
# #     'xaxis' : 'MVA discriminant',
# #     'fold' : 3
# #     }

# variables['muccamvaZbaradaptFull_50_sign'] = {
#     'name': 'muccamvaZbaradaptFull_50_1_em',
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

# variables['muccamvaZbaradaptFull_200_sign'] = {
#     'name': 'muccamvaZbaradaptFull_200_1_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# # variables['muccamvaZbaradaptFull_300_sign'] = {
# #     'name': 'muccamvaZbaradaptFull_300_1_em',
# #     'range' : (10000,-1,1),
# #     'xaxis' : 'MVA discriminant',
# #     'fold' : 3
# #     }

# variables['muccamvaZbaradaptFull_500_sign'] = {
#     'name': 'muccamvaZbaradaptFull_500_1_em',
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

# variables['muccamvaZbaradaptFull_10000_sign'] = {
#     'name': 'muccamvaZbaradaptFull_10000_1_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

######################
# Analysis Variables #
######################

# # mucca for 2HDM Model
# variables['muccamva2HDMadaptFull_600'] = {
#     'name': 'muccamva2HDMadaptFull_600_300_em',
#     'range' : ([-0.9999,-0.6315,-0.5191,-0.4641,-0.2969,-0.1369,0.1897,0.4329,0.6255,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }
# variables['muccamva2HDMadaptFull_All_Bin600'] = {
#     'name': 'muccamva2HDMadaptFull_All_em',
#     'range' : ([-0.9999,-0.6761,-0.3527,0.0483,0.2371,0.4455,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

variables['muccamva2HDMadaptFull_All_Bin800'] = {
    'name': 'muccamva2HDMadaptFull_All_em',
    'range' : ([-0.9999,-0.5127,-0.2735,0.0223,0.1991,0.3389,0.5905,1],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }

# variables['muccamva2HDMadaptFull_1000'] = {
#     'name': 'muccamva2HDMadaptFull_1000_300_em',
#     'range' : ([-0.9999,-0.5905,-0.4071,-0.2329,-0.0867,0.1237,0.2965,0.4169,0.5007,0.6735,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }
# variables['muccamva2HDMadaptFull_All_Bin1000'] = {
#     'name': 'muccamva2HDMadaptFull_All_em',
#     'range' : ([-0.9999,-0.7631,-0.5193,-0.3261,-0.1249,0.0845,0.2131,0.3351,0.5631,0.7555,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_2000'] = {
#     'name': 'muccamva2HDMadaptFull_2000_300_em',
#     'range' : ([-0.9999,-0.5313,-0.2297,-0.1677,-0.0297,0.1729,0.2789,0.3919,0.4977,0.6403,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }
# variables['muccamva2HDMadaptFull_All_Bin2000'] = {
#     'name': 'muccamva2HDMadaptFull_All_em',
#     'range' : ([-0.9999,-0.5641,-0.3219,-0.2011,0.0223,0.2055,0.3395,0.5907,0.7555,0.7951,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }
# variables['muccamva2HDMadaptFull_All_Bin2000_Bis'] = {
#     'name': 'muccamva2HDMadaptFull_All_em',
#     'range' : ([-0.9999,-0.5641,-0.3219,-0.2011,0.0223,0.2055,0.3395,0.5907,0.7555,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }
# variables['muccamva2HDMadaptFull_All_Bin2000_Tris'] = {
#     'name': 'muccamva2HDMadaptFull_All_em',
#     'range' : ([-0.9999,-0.5641,-0.3219,-0.2011,0.0223,0.2055,0.3395,0.5907,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_2500'] = {
#     'name': 'muccamva2HDMadaptFull_2500_300_em',
#     'range' : ([-0.9999,-0.5421,-0.2793,-0.1673,-0.0839,0.0275,0.2271,0.3647,0.4865,0.5891,0.6103,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }
# variables['muccamva2HDMadaptFull_All_Bin2500'] = {
#     'name': 'muccamva2HDMadaptFull_All_em',
#     'range' : ([-0.9999,-0.7333,-0.4005,-0.2823,-0.1667,0.0211,0.2965,0.4461,0.5733,0.7555,0.7951,0.8415,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# # # mucca for Z'B Model
# variables['muccamvaZbaradaptFull_10'] = {
#     'name': 'muccamvaZbaradaptFull_10_1_em',
#     'range' : ([-0.9999,-0.6715,-0.3729,-0.2421,-0.0097,0.3613,0.5047,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }
# variables['muccamvaZbaradaptFull_All_Bin10'] = {
#     'name': 'muccamvaZbaradaptFull_All_em',
#     'range' : ([-0.9999,-0.6731,-0.6729,-0.5239,-0.3449,-0.1481,0.2811,0.5471,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbaradaptFull_100'] = {
#     'name': 'muccamvaZbaradaptFull_100_1_em',
#     'range' : ([-0.9999,-0.6275,-0.4315,-0.2051,0.0125,0.3313,0.5427,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }
variables['muccamvaZbaradaptFull_All_Bin100'] = {
    'name': 'muccamvaZbaradaptFull_All_em',
    'range' : ([-0.9999,-0.7235,-0.3379,-0.1673,0.2957,0.5461,1],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }

# variables['muccamvaZbaradaptFull_1000'] = {
#     'name': 'muccamvaZbaradaptFull_1000_1_em',
#     'range' : ([-0.9999,-0.5143,-0.2293,0.1043,0.3427,0.4871,0.6677,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }
variables['muccamvaZbaradaptFull_All_Bin1000'] = {
    'name': 'muccamvaZbaradaptFull_All_em',
    'range' : ([-0.9999,-0.6561,-0.4527,-0.2735,0.0507,0.3379,0.5739,0.7321,1],),
    'xaxis' : 'MVA discriminant',
    'fold' : 3
    }

# variables['muccamvaZbaradaptFull_2000'] = {
#     'name': 'muccamvaZbaradaptFull_2000_1_em',
#     'range' : ([-0.9999,-0.5431,-0.2167,0.0251,0.2865,0.4845,0.6823,0.8279,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }
# variables['muccamvaZbaradaptFull_All_Bin2000'] = {
#     'name': 'muccamvaZbaradaptFull_All_em',
#     'range' : ([-0.9999,-0.6325,-0.3509,-0.2151,0.0995,0.3985,0.5555,0.6871,0.8433,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


###############################
# Old variables configuration #
###############################

# # # mucca for 2HDM Model
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

variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (25,0,500),     #   variable range
                        'xaxis' : 'm_{T}^{\ell\ell} [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['mtw1'] = {     'name'  : 'mtw1',            #   variable name    
                          'range' : (25,0,500),    #   variable range
                          'xaxis' : 'm_{T}^{W1}',  #   x axis name
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

variables['njet']  = {   'name': 'njet',      
                         'range' : (10,0,10),  
                         'xaxis' : 'njet', 
                         'fold' : 0
                         }
                        
variables['ptll']  = {   'name': 'ptll',            #   variable name    
                         'range' : (25,0,250),    #   variable range
                         'xaxis' : 'p_{T}^{\ell\ell} [GeV]',  #   x axis name
                         'fold' : 3
                         }

variables['met']  = {   'name': 'metPfType1',            #   variable name    
                        'range' : (25,0,250),    #   variable range
                        'xaxis' : 'E_{T}^{miss} [GeV]',  #   x axis name
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

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',            #   variable name    
                        'range' : (40,0,400),    #   variable range
                        'xaxis' : 'p_{T}^{1st lep} [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',            #   variable name    
                        'range' : (40,0,150),    #   variable range
                        'xaxis' : 'p_{T}^{2nd lep} [GeV]',  #   x axis name
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


# # mucca for 2HDM Model - new
# variables['muccamva2HDMgradFull_new'] = {
#     'name': 'muccamva2HDMgradFull_new_em',
#     'range' : (40,-1,1),  
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_new'] = {
#     'name': 'muccamva2HDMadaptFull_new_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # mucca for Z'B Model - new
# variables['muccamvaZbargradFull_new'] = {
#     'name': 'muccamvaZbargradFull_new_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbaradaptFull_new'] = {
#     'name': 'muccamvaZbaradaptFull_new_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # mucca for 2HDM Model - low
# variables['muccamva2HDMadaptFull_low'] = {
#     'name': 'muccamva2HDMadaptFull_low_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # # mucca for Z'B Model - low
# # variables['muccamvaZbaradaptFull_low'] = {
# #     'name': 'muccamvaZbaradaptFull_low_em',
# #     'range' : (40,-1,1),
# #     'xaxis' : 'MVA discriminant',
# #     'fold' : 3
# #     }


# # mucca for 2HDM Model - high
# variables['muccamva2HDMadaptFull_high'] = {
#     'name': 'muccamva2HDMadaptFull_high_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # mucca for Z'B Model - high
# variables['muccamvaZbaradaptFull_high'] = {
#     'name': 'muccamvaZbaradaptFull_high_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # mucca for 2HDM Model - superHigh
# variables['muccamva2HDMadaptFull_superHigh'] = {
#     'name': 'muccamva2HDMadaptFull_superHigh_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# # mucca for Z'B Model - superHigh
# variables['muccamvaZbaradaptFull_superHigh'] = {
#     'name': 'muccamvaZbaradaptFull_superHigh_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }



####################################
# Gradient boost useless variables #
####################################

# variables['muccamva2HDMgradFull_high'] = {
#     'name': 'muccamva2HDMgradFull_high_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbargradFull_high'] = {
#     'name': 'muccamvaZbargradFull_high_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMgradFull_superHigh'] = {
#     'name': 'muccamva2HDMgradFull_superHigh_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbargradFull_superHigh'] = {
#     'name': 'muccamvaZbargradFull_superHigh_em',
#     'range' : (40,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# # variables['muccamvaZbargradFull_low'] = {
# #     'name': 'muccamvaZbargradFull_low_em',
# #     'range' : (40,-1,1),
# #     'xaxis' : 'MVA discriminant',
# #     'fold' : 3
# #     }

# variables['muccamva2HDMgradFull_new_sign'] = {
#     'name': 'muccamva2HDMgradFull_new_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbargradFull_new_sign'] = {
#     'name': 'muccamvaZbargradFull_new_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMgradFull_low_sign'] = {
#     'name': 'muccamva2HDMgradFull_low_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbargradFull_low_sign'] = {
#     'name': 'muccamvaZbargradFull_low_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMgradFull_high_sign'] = {
#     'name': 'muccamva2HDMgradFull_high_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbargradFull_high_sign'] = {
#     'name': 'muccamvaZbargradFull_high_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMgradFull_superHigh_sign'] = {
#     'name': 'muccamva2HDMgradFull_superHigh_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbargradFull_superHigh_sign'] = {
#     'name': 'muccamvaZbargradFull_superHigh_em',
#     'range' : (10000,-1,1),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMgradFull_new'] = {
#     'name': 'muccamva2HDMgradFull_new_em',
#     'range' : ([-0.9999,-0.7837,-0.6849,-0.5989,-0.2363,0.1223,0.1751,0.1835,0.1837,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbargradFull_new'] = {
#     'name': 'muccamvaZbargradFull_new_em',
#     'range' : ([-0.9999,-0.8517,-0.7087,-0.5677,-0.2177,0.0861,0.0963,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMgradFull_low'] = {
#     'name': 'muccamva2HDMgradFull_low_em',
#     'range' : ([-0.9999,-0.6487,-0.3473,0.0039,0.0991,0.1511,0.1547,0.1549,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbargradFull_low'] = {
#     'name': 'muccamvaZbargradFull_low_em',
#     'range' : ([-0.9999,-0.8517,-0.7087,-0.5677,-0.2177,0.0861,0.0963,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMgradFull_high'] = {
#     'name': 'muccamva2HDMgradFull_high_em',
#     'range' : ([-0.9999,-0.2545,0.1047,0.1321,0.1325,0.1327,0.1329,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbargradFull_high'] = {
#     'name': 'muccamvaZbargradFull_high_em',
#     'range' : ([-0.9999,-0.8361,-0.7305,-0.6243,-0.4475,0.0709,0.1629,0.1703,0.1705,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMgradFull_superHigh'] = {
#     'name': 'muccamva2HDMgradFull_superHigh_em',
#     'range' : ([-0.9999,-0.7261,-0.1365,0.1053,0.1067,0.1069,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbargradFull_superHigh'] = {
#     'name': 'muccamvaZbargradFull_superHigh_em',
#     'range' : ([-0.9999,-0.8937,-0.7997,-0.6505,-0.0379,0.1299,0.1555,0.1597,0.1599,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }


# variables['muccamva2HDMgradFull'] = {
#     'name': 'muccamva2HDMgradFull_em',
# #    'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.1,1],), # old 6 bins
#     'range' : ([-1,-0.80,-0.65,-0.50,-0.35,-0.20,-0.05,0.136,1.00],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbargradFull'] = {
#     'name': 'muccamvaZbargradFull_em',
#     # 'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.05,1],),           #  old range in AN_v2
#     'range' : ([-1,-0.82,-0.67,-0.52,-0.37,-0.22,-0.07,0.077,1.00],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMgradFull_SuperBinBis'] = { # Real endpoint = 0.1361
#     'name': 'muccamva2HDMgradFull_em',
#     'range' : ([-0.9999,-0.7563,-0.7079,-0.5795,-0.3181,0.0591,0.1311,0.1361,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMadaptFull_SuperBinBis'] = { # Real endpoint = 0.8
#     'name': 'muccamvaZbargradFull_em',
#     'range' : ([-0.9999,-0.7955,-0.5009,-0.1449,0.0651,0.0771,0.0775,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

#     'name': 'muccamvaZbargradFull_high_em',
#     'range' : ([-0.9999,-0.8093,-0.7489,-0.6121,-0.3991,0.0899,0.1365,0.1433,0.1435,1],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMgradFull_Old'] = {
#     'name': 'muccamva2HDMgradFull_em',
#     'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.1,1],), # old 6 bins
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbargradFull_Old'] = {
#     'name': 'muccamvaZbargradFull_em',
#     'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.05,1],),           #  old range in AN_v2
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamva2HDMgradFull_Intermediate'] = {
#     'name': 'muccamva2HDMgradFull_em',
#     'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.136,1],), # old 6 bins (just last bin optimised)
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

# variables['muccamvaZbargradFull_Intermediate'] = {
#     'name': 'muccamvaZbargradFull_em',
#     'range' : ([-1,-0.8,-0.6,-0.4,-0.2,0.077,1],),           #  old range in AN_v2 (just last bin optimised)
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3
#     }

