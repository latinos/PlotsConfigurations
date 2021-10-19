
# variables

#variables = {}
variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3
                        }
 

#variables['mll_1'] = { 'name' : 'mll',
#                     'range': (20,10,210),
#                     'xaxis': 'm_{ll}',
#                     'fold' : 3 
#                   }

#variables['njet'] = { 'name' : 'njet',
#                      'range': (6,0,6),
#                      'xaxis': 'number of jets',
#                      'fold' : 3 
#                   }

#variables['nfjet'] = { 'name' : 'nCleanFatJet', # pt and tau21 cuts applied
#                      'range': (5,0,5),
#                      'xaxis': 'number of clean fat jets',
#                      'fold' : 3 
#                   }

#variables['ptll'] = {   'name': 'ptll',
#                        'range': (20,0,400),
#                        'xaxis': 'p_{T}^{ll}',
#                        'fold': 3
#                       }

#variables['mjj'] = { 'name' : 'mjj',
#                     'range': (25,0,1000),
#                     'xaxis': 'm_{jj}',
#                     'fold' : 3 
#                   }

#variables['dphi'] = { 'name' : 'dphis',
#                      'range': (10,-3.2,3.2),
#                     'xaxis': 'DPhi_{jj}',
#                     'fold' : 3 
#                   }

#variables['mll_2'] = { 'name' : 'mll',
#                     'range': ([10,25,35,40,45,50,55,70,90,210],),
#                     'xaxis': 'm_{ll}',
#                     'fold' : 3 
#                   }

variables['mll'] = { 'name' : 'mll',
                     'range': ([10,55,75],),
                     'xaxis': 'm_{ll}',
                     'fold' : 3 
                   }

variables['mth'] = { 'name' : 'mth',
                     'range': (20,0,200),
                     'xaxis': 'm_{T}^{H}',
                     'fold' : 3
                   }

'''
variables['mtw2'] = { 'name' : 'mtw2',
                     'range': (20,0,200),
                     'xaxis': 'm_{T}^{W2}',
                     'fold' : 3
                    }

variables['mtw1'] = { 'name' : 'mtw1',
                     'range': (20,0,200),
                      'xaxis': 'm_{T}^{W1}',
                     'fold' : 3
                    }

variables['pTWW'] = { 'name' : 'pTWW',
                     'range': (50,0,1000),
                     'xaxis': 'p_{T}^{H}',
                     'fold' : 3
                   }


variables['hm'] = { 'name' : 'hm',
                     'range': (40,0,400),
                     'xaxis': 'm_{H}',
                     'fold' : 3
                   }
'''
####################################
##################################
## Reco VH KD #####

variables['kd_Vh_hm'] = { 'name' : 'kd_Vh_hm',
                       'range': (20,0,1),
                       'xaxis': 'D_{V*H 0^{-}}',
                       'fold' : 3
                     }

variables['kd_Vh_hp'] = { 'name' : 'kd_Vh_hp',
                       'range': (20,0,1),
                       'xaxis': 'D_{V*H 0^{+}}',
                       'fold' : 3
                     }

variables['kd_Vh_hl'] = { 'name' : 'kd_Vh_hl',
                       'range': (20,0,1),
                       'xaxis': 'D_{V*H 0^{#Lambda 1}}',
                       'fold' : 3
                     }

variables['kd_Vh_hlzg'] = { 'name' : 'kd_Vh_hlzg',
                       'range': (20,0,1),
                       'xaxis': 'D_{VH 0^{#Lambda_{1}^{Z#gamma}}}',
                       'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh']
                     }

variables['kd_Vh_mixhm'] = { 'name' : 'kd_Vh_mixhm',
                          'range': (20,-1,1),
                          'xaxis': 'D_{V*H CP}',
                          'fold' : 3
                        }

variables['kd_Vh_mixhp'] = { 'name' : 'kd_Vh_mixhp',
                          'range': (20,-1,1),
                          'xaxis': 'D_{V*H Int}',
                          'fold' : 3
                        }

#variables['kd_Vh_mixhl'] = { 'name' : 'kd_Vh_mixhl',
#                          'range': (20,-1,1),
#                          'xaxis': 'D_{V*H mixlambda}',
#                          'fold' : 3
#                        }

#
##BINNING1
'''
variables['kd2d_Vh_hm_BINNING1'] = { 'name': 'kd_Vh_hm:mll',   
                         'range' : ([10,35,45,55,90,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),     
                         'xaxis' : 'D_{VH 0^{-}:m_{ll}}',     
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_of2j_Vh_hmip','hww2l2v_13TeV_of2j_Vh_hmin']
                          }

variables['kd2d_Vh_hp_BINNING1'] = { 'name': 'kd_Vh_hp:mll',   
                         'range' : ([10,35,45,55,90,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),     
                         'xaxis' : 'D_{VH 0^{+}:m_{ll}}',     
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_of2j_Vh_hpip','hww2l2v_13TeV_of2j_Vh_hpin']
                          }

variables['kd2d_Vh_hl_BINNING1'] = { 'name': 'kd_Vh_hl:mll',   
                         'range' : ([10,35,45,55,90,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),     
                         'xaxis' : 'D_{VH 0^{#Lambda 1}:m_{ll}}',     
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh']
                          }
##BINNING2
variables['kd2d_Vh_hm_BINNING2'] = { 'name': 'kd_Vh_hm:mll',
                         'range' : ([10,45,90,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
                         'xaxis' : 'D_{VH 0^{-}:m_{ll}}',
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_of2j_Vh_hmip','hww2l2v_13TeV_of2j_Vh_hmin']
                          }

variables['kd2d_Vh_hp_BINNING2'] = { 'name': 'kd_Vh_hp:mll',
                         'range' : ([10,45,90,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
                         'xaxis' : 'D_{VH 0^{+}:m_{ll}}',
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_of2j_Vh_hpip','hww2l2v_13TeV_of2j_Vh_hpin']
                          }

variables['kd2d_Vh_hl_BINNING2'] = { 'name': 'kd_Vh_hl:mll',
                         'range' : ([10,45,90,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
                         'xaxis' : 'D_{VH 0^{#Lambda 1}:m_{ll}}',     
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh']
                          }
'''
###BINNING

variables['kd2d_Vh_hm'] = { 'name': 'kd_Vh_hm:mll',
                         'range' : ([10,55,75],[0,0.2,0.4,0.6,0.8,1],),
                         'xaxis' : 'D_{VH 0^{-}:m_{ll}}',
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_of2j_Vh_hmip','hww2l2v_13TeV_of2j_Vh_hmin']
                          }
#			 'cuts' : ['hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_dytt','hww2l2v_13TeV_dytt_nocfj','hww2l2v_13TeV_dytt_of2j']

variables['kd2d_Vh_hp'] = { 'name': 'kd_Vh_hp:mll',
                         'range' : ([10,55,75],[0,0.2,0.4,0.6,0.8,1],),
                         'xaxis' : 'D_{VH 0^{+}:m_{ll}}',
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_of2j_Vh_hpip','hww2l2v_13TeV_of2j_Vh_hpin']
                          }

variables['kd2d_Vh_hl'] = { 'name': 'kd_Vh_hl:mll',
                         'range' : ([10,55,75],[0,0.2,0.4,0.6,0.8,1],),
                         'xaxis' : 'D_{VH 0^{#Lambda 1}:m_{ll}}',     
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh']
                          }

##BINNING4
'''
variables['kd2d_Vh_hm_BINNING4'] = { 'name': 'kd_Vh_hm:mll',
                         'range' : ([10,90,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
                         'xaxis' : 'D_{VH 0^{-}:m_{ll}}',
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_of2j_Vh_hmip','hww2l2v_13TeV_of2j_Vh_hmin']
                          }

variables['kd2d_Vh_hp_BINNING4'] = { 'name': 'kd_Vh_hp:mll',
                         'range' : ([10,90,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
                         'xaxis' : 'D_{VH 0^{+}:m_{ll}}',
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_of2j_Vh_hpip','hww2l2v_13TeV_of2j_Vh_hpin']
                          }

variables['kd2d_Vh_hl_BINNING4'] = { 'name': 'kd_Vh_hl:mll',
                         'range' : ([10,90,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
                         'xaxis' : 'D_{VH 0^{#Lambda 1}:m_{ll}}',     
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh']
                          }
'''
#

#variables['kd2d_Vh_hlzg_oldbinning'] = { 'name': 'kd_Vh_hlzg:mll',   
#                         'range' : ([10,35,45,55,90,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),     
#                         'xaxis' : 'D_{VH 0^{#Lambda_{1}^{Z#gamma}}}',     
#                         'fold' : 3,
#                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_Vh']
#                          }

variables['kd2d_Vh_hlzg'] = { 'name': 'kd_Vh_hlzg:mll',
                         'range' : ([10,55,75],[0,0.2,0.4,0.6,0.8,1],),
                         'xaxis' : 'D_{VH 0^{#Lambda_{1}^{Z#gamma}}:m_{ll}}',     
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh']
                          }


#variables['ht'] = {'name' : 'ht',
#                            'range' : (200, 0, 1700),
#                            'xaxis' : 'ht',
#                            'fold' : 3
#                        }

#FAT JETS
'''
variables['FatJet_msoftdrop_nom'] = {'name' : 'FatJet_msoftdrop_nom',
                            'range' : (6, 60, 120),
                            'xaxis' : 'FatJet_msoftdrop_nom',
                            'fold' : 3
                        }
variables['FatJet_pt_nom'] = {'name' : 'FatJet_pt_nom',
                            'range' : (60, 100, 700),
                            'xaxis' : 'FatJet_pt_nom',
                            'fold' : 3
                        }

variables['mV'] = { 'name' : 'mV[0]',
                     'range': (10,40,140),
                     'xaxis': 'm_{V}',
                     'fold' : 3
                   }

variables['InvMSubjets'] = { 'name' : 'InvMSubjets',
                     'range': (6,60,120),
                     'xaxis': 'InvMSubjets',
                     'fold' : 3
                   }
'''
#no used
'''
variables['nSubJet'] = {'name' : 'nSubJet',
                            'range' : (10, 0, 10),
                            'xaxis' : 'nSubJet',
                            'fold' : 3
                        }
variables['SubJet_mass'] = {'name' : 'SubJet_mass',
                            'range' : (100, 0, 60),
                            'xaxis' : 'SubJet_mass',
                            'fold' : 3
                        }

variables['SubJet_pt_0'] = {'name' : 'SubJet_pt_0',
                            'range' : (100, 0, 1000),
                            'xaxis' : 'SubJet_pt_0',
                            'fold' : 3
                        }
variables['SubJet_pt_1'] = {'name' : 'SubJet_pt_1',
                            'range' : (100, 0, 1000),
                            'xaxis' : 'SubJet_pt_1',
                            'fold' : 3
                        }
variables['J1pt'] = {'name' : 'J1pt',
                            'range' : (100, 0, 1000),
                            'xaxis' : 'J1pt',
                            'fold' : 3
                        }
variables['J2pt'] = {'name' : 'J2pt',
                            'range' : (100, 0, 1000),
                            'xaxis' : 'J2pt',
                            'fold' : 3
                        }
'''
