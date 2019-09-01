# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']     = { 'name': '1',      
                            'range' : (1,0,2),  
                            'xaxis' : 'events', 
                            'fold' : 3
                        }

variables['njet']       = { 'name'  : 'ZH3l_njet',
                            'range' : (10,0,10),
                            'xaxis' : 'N_{jet}',
                            'fold' : 0
                        }

variables['pt1']        = { 'name': 'Lepton_pt[0]',
                            'range' : (10,0.,200),
                            'xaxis' : 'lept1_p_{T} [GeV]',
                            'fold' : 0
                        }

variables['dphilmetjj'] = { 'name' : 'ZH3l_dphilmetjj',
                            'range' : (16,0,3.14159),
                            'xaxis' : 'dphilmetjj',
                            'fold' : 0
                        }

variables['mTlmetjj']   = { 'name' : 'ZH3l_mTlmetjj',
                            'range' : (25,0,500),
                            'xaxis' : 'mTlmetjj',
                            'fold' : 0
                        }

variables['ptz']        = { 'name' : 'ZH3l_pTZ',
                            'range' : (20,0,400),
                            'xaxis' : 'ptz',
                            'fold' : 0
                        }

variables['mtw_notZ']   = { 'name' : 'ZH3l_mTlmet',
                            'range' : (20,0,200),
                            'xaxis' : 'mTlmet',
                            'fold' : 0
                        }

variables['mtw_fit']    = { 'name' : 'ZH3l_mTlmet',
                            'range' : (8,0,160),
                            'xaxis' : 'mTlmet',
                            'fold' : 2
                        }

variables['checkmZ']    = { 'name' : 'ZH3l_checkmZ',
                            'range' : (20,0,200),
                            'xaxis' : 'checkmZ',
                            'fold' : 0
                        }


