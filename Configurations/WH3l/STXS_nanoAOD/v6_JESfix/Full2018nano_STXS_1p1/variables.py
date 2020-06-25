# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['events']  = {'name'  : '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                        'fold'  : 3
                        }
variables['BDTG_OSSF_bin2'] = { 'name': 'BDT_OSSF1718',
                        'range' : ([-1.0,-0.2,0.,0.2,0.4,0.6,1.0],),    #   variable range
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                      }
variables['BDTG_SSSF_bin2'] = { 'name': 'BDT_SSSF1718',
                        'range' : ([-1.0,-0.2,0.,0.2,0.4,0.6,1.0],),    #   variable range
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                      }
variables['WH3l_pTW'] = {'name' : 'WH3l_pTW[0]',
                               'range' : (40,0.,400),
                               'xaxis' : 'WH3l_pTW [GeV]',
                               'fold' : 3
                     }
'''
variables['Jet_pt1']  = {   'name': 'Alt$(Jet_pt[0],0)',            #   variable name----
                        'range' : (10,0.,200),    #   variable range
                        # 'range' : (60,0.,300),    #   variable range
                        'xaxis' : 'jet1_p_{T} [GeV]',  #   x axis name
                         'fold' : 0
                        }
variables['pt1']  = {   'name': 'Alt$(Lepton_pt[0],0)',            #   variable name----
                        'range' : (10,0.,200),    #   variable range
                        # 'range' : (60,0.,300),    #   variable range
                        'xaxis' : 'lept1_p_{T} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['pt2']  = {   'name': 'Alt$(Lepton_pt[1],0)',
                        'range' : (10,0.,200),    #   variable range
                        # 'range' : (40,0.,200),    #   variable range
                        'xaxis' : 'lept2_p_{T} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['pt3']  = {   'name': 'Alt$(Lepton_pt[2],0)',
                        # 'range' : (40,0.,200),    #   variable range
                        'range' : (7,0.,100),    #   variable range
                       'xaxis' : 'lept3_p_{T} [GeV]',  #   x axis name
                        'fold' : 0
                       }
variables['MET_pt']  = {'name'  : 'MET_pt',
                        'range' : (40,0,200),
                        'xaxis' : 'MET_pt',
                        'fold'  : 0
                        }


variables['WH3l_ZVeto']  = {'name'  : 'WH3l_ZVeto_test',
                        'range' : (24,0,120),
                        'xaxis' : 'WH3l_ZVeto',
                        'fold'  : 0
                        }
variables['WH3l_drOSll_min']  = {   'name': 'WH3l_drOSll_min_test',
                         'range' : ([0.,0.75,1.0,1.25,1.5,1.75,2.5,4.0],),    #   variable range
                         'xaxis' : 'min #Delta R_{ll}',  #   x axis name
                         'fold' : 0
                        }

variables['WH3l_dphilllmet']  = {'name'  : 'WH3l_dphilllmet_test',
                        'range' : (5,0,5),
                        'xaxis' : 'WH3l_dphilllmet',
                        'fold'  : 0
                        }
variables['WH3l_ptlll']  = {'name'  : 'WH3l_ptlll_test',
                        'range' : (50,0,500),
                        'xaxis' : 'WH3l_ptlll',
                        'fold'  : 0
                        }
variables['WH3l_ptWWW']  = {'name'  : 'WH3l_ptWWW_test',
                        'range' : (40,0,200),
                        'xaxis' : 'WH3l_ptWWW',
                        'fold'  : 0
                        }
variables['WH3l_mtWWW']  = {'name'  : 'WH3l_mtWWW_test',
                        'range' : (40,0,200),
                        'xaxis' : 'WH3l_mtWWW',
                        'fold'  : 0
                        }
variables['WH3l_mlll']  = {'name'  : 'WH3l_mlll_test',
                        'range' : (40,0,200),
                        'xaxis' : 'WH3l_mlll',
                        'fold'  : 0
                        }

variables['WH3l_mOSll_min']  = {   'name': 'WH3l_mOSll_min_test',
                         'range' : (40,0,200),
                         'xaxis' : 'min #Delta R_{ll}',  #   x axis name
                         'fold' : 0
                        }

variables['WH3l_ptOSll_min']  = {   'name': 'WH3l_ptOSll_min_test',
                         'range' : (40,0,200),
                         'xaxis' : 'min #Delta R_{ll}',  #   x axis name
                         'fold' : 0
                        }

variables['WH3l_mtlmet0']  = {   'name': 'WH3l_mtlmet0_test',
                         'range' : (40,0,200),
                         'xaxis' : 'min #Delta R_{ll}',  #   x axis name
                         'fold' : 0
                        }

variables['WH3l_mtlmet1']  = {   'name': 'WH3l_mtlmet1_test',
                         'range' : (40,0,200),
                         'xaxis' : 'min #Delta R_{ll}',  #   x axis name
                         'fold' : 0
                        }

variables['WH3l_mtlmet2']  = {   'name': 'WH3l_mtlmet2_test',
                         'range' : (40,0,200),
                         'xaxis' : 'min #Delta R_{ll}',  #   x axis name
                         'fold' : 0
                        }

variables['WH3l_dphilmet0']  = {   'name': 'WH3l_dphilmet0_test',
                        'range' : (5,0,5),
                         'xaxis' : 'min #Delta R_{ll}',  #   x axis name
                         'fold' : 0
                        }

variables['WH3l_dphilmet1']  = {   'name': 'WH3l_dphilmet1_test',
                        'range' : (5,0,5),
                         'xaxis' : 'min #Delta R_{ll}',  #   x axis name
                         'fold' : 0
                        }

variables['WH3l_dphilmet2']  = {   'name': 'WH3l_dphilmet2_test',
                        'range' : (5,0,5),
                         'xaxis' : 'min #Delta R_{ll}',  #   x axis name
                         'fold' : 0
                        }

'''
