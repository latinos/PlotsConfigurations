# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow


variables['events']  = {'name'  : '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                        'fold'  : 3
                        }

variables['WlepPt_wh3l'] = {'name' : 'WlepPt_wh3l',
                            'range' : (40,0.,400),
                            'xaxis' : 'WlepPt_wh31 [GeV]',
                            'fold' : 1
                        }

variables['WlepPt_wh3l_v2'] = {'name' : 'WlepPt_wh3l_v2',
                            'range' : (40,0.,400),
                            'xaxis' : 'WlepPt_wh31 [GeV]',
                            'fold' : 1
                        }

variables['WH3l_drOSll_min']  = {   'name': 'MinIf$( WH3l_drOSll[], WH3l_drOSll[Iteration$] > 0)',
                         'range' : ([0.,0.75,1.0,1.25,1.5,1.75,2.5,4.0],),    #   variable range
                         'xaxis' : 'min #Delta R_{ll}',  #   x axis name
                         'fold' : 0
                        }

#variables['njet']  = {'name'  : 'nCleanJet',
#                        'range' : (10,0,10),
#                        'xaxis' : 'number of jet',
#                        'fold'  : 0
#                        }
