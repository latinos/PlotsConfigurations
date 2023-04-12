
# variables

#variables = {}
variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_WW_fj']
                        }
 
#variables['mll_1'] = { 'name' : 'mll',
#                     'range': (20,10,210),
#                     'xaxis': 'm_{ll}',
#                     'fold' : 3 
#                   }
'''
variables['njet'] = { 'name' : 'njet',
                      'range': (6,0,6),
                      'xaxis': 'number of jets',
                      'fold' : 3 
                   }

variables['nfjet'] = { 'name' : 'nCleanFatJet', # pt and tau21 cuts applied
                      'range': (5,0,5),
                      'xaxis': 'number of clean fat jets',
                      'fold' : 3 
                   }
'''
'''
variables['ptll'] = {   'name': 'ptll',
                        'range': (20,0,400),
                        'xaxis': 'p_{T}^{ll}',
                        'fold': 3,
                       'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_WW_fj']
                       }

variables['mjj'] = { 'name' : 'mjj',
                     'range': (25,0,1000),
                     'xaxis': 'm_{jj}',
                     'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_WW_fj']
                   }
'''
'''
variables['dphi'] = { 'name' : 'dphis',
                      'range': (10,-3.2,3.2),
                     'xaxis': 'DPhi_{jj}',
                     'fold' : 3 
                   }
'''
#variables['mll_2'] = { 'name' : 'mll',
#                     'range': ([10,25,35,40,45,50,55,70,90,210],),
#                     'xaxis': 'm_{ll}',
#                     'fold' : 3 
#                   }
'''
variables['mll'] = { 'name' : 'mll',
                     'range': ([10,40,106.2,210.],),
                     'xaxis': 'm_{ll}',
                     'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_WW_fj']
                   }
variables['mll_2'] = { 'name' : 'mll',
                     'range': ([10,45,76.2],),
                     'xaxis': 'm_{ll}',
                     'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_WW_fj']
                   }
variables['mth'] = { 'name' : 'mth',
                     'range': (20,0,200),
                     'xaxis': 'm_{T}^{H}',
                     'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_WW_fj']
                   }
'''
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
'''
variables['kd_Vh_hm'] = { 'name' : 'kd_Vh_hm',
                       'range': (10,0,1),
                       'xaxis': 'D_{V*H 0^{-}}',
                       'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_WW_fj']
                     }

variables['kd_Vh_hp'] = { 'name' : 'kd_Vh_hp',
                       'range': (10,0,1),
                       'xaxis': 'D_{V*H 0^{+}}',
                       'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_WW_fj']
                     }

variables['kd_Vh_hl'] = { 'name' : 'kd_Vh_hl',
                       'range': (10,0,1),
                       'xaxis': 'D_{V*H 0^{#Lambda_{1}}}',
                       'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_WW_fj']
                     }

variables['kd_Vh_hlzg'] = { 'name' : 'kd_Vh_hlzg',
                       'range': (10,0,1),
                       'xaxis': 'D_{VH 0^{#Lambda_{1}^{Z#gamma}}}',
                       'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_WW_fj']
                     }

variables['kd_Vh_mixhm'] = { 'name' : 'kd_Vh_mixhm',
                          'range': (20,-1,1),
                          'xaxis': 'D_{V*H CP}',
                          'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_WW_fj']
                        }

variables['kd_Vh_mixhp'] = { 'name' : 'kd_Vh_mixhp',
                          'range': (20,-1,1),
                          'xaxis': 'D_{V*H Int}',
                          'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_WW_fj']
                        }
'''
####################################
'''
variables['kd2d_Vh_hm'] = { 'name': 'kd_Vh_hm:mll',
                         'range' : ([10,40,76.2,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
                         'xaxis' : 'D_{VH 0^{-}:m_{ll}}',
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_of2j_Vh_hmip','hww2l2v_13TeV_of2j_Vh_hmin','hww2l2v_13TeV_WW_fj']
                          }
variables['kd2d_Vh_hp'] = { 'name': 'kd_Vh_hp:mll',
                         'range' : ([10,40,76.2,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
                         'xaxis' : 'D_{VH 0^{+}:m_{ll}}',
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_of2j_Vh_hpip','hww2l2v_13TeV_of2j_Vh_hpin','hww2l2v_13TeV_WW_fj']
                          }
variables['kd2d_Vh_hl'] = { 'name': 'kd_Vh_hl:mll',
                         'range' : ([10,40,76.2,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
                         'xaxis' : 'D_{VH 0^{#Lambda_{1}}:m_{ll}}',     
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_WW_fj']
                          }
'''
#GOOD ONES

variables['kd2d_Vh_hm'] = { 'name': 'kd_Vh_hm:mll',
                         'range' : ([10,45,106.2],[0.0,0.6,0.8,1],),
                         'xaxis' : 'D_{VH 0^{-}:m_{ll}}',
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_of2j_Vh_hmip','hww2l2v_13TeV_of2j_Vh_hmin','hww2l2v_13TeV_WW_fj']
                          }
variables['kd2d_Vh_hp'] = { 'name': 'kd_Vh_hp:mll',
                         'range' : ([10,45,106.2],[0.,0.6,0.8,1],),
                         'xaxis' : 'D_{VH 0^{+}:m_{ll}}',
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_WW_fj']
                          }
variables['kd2d_Vh_hl'] = { 'name': 'kd_Vh_hl:mll',
                         'range' : ([10,45,106.2],[0.0,0.6,0.8,1],),
                         'xaxis' : 'D_{VH 0^{#Lambda_{1}}:m_{ll}}',     
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_WW_fj']
                          }

##########################
#variables['kd2d_Vh_hlzg_2'] = { 'name': 'kd_Vh_hlzg:mll',
#                         'range' : ([10,40,76.2],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
#                         'xaxis' : 'D_{VH 0^{#Lambda_{1}^{Z#gamma}}:m_{ll}}',     
#                         'fold' : 3,
#                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh']
#                          }
variables['kd2d_Vh_hlzg'] = { 'name': 'kd_Vh_hlzg:mll',
                         'range' : ([10,45,106.2],[0.,0.6,0.8,1],),
                         'xaxis' : 'D_{VH 0^{#Lambda_{1}^{Z#gamma}}:m_{ll}}',     
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_fj','hww2l2v_13TeV_dytt_fj','hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_WW_fj']
                          }
