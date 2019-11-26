# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow


variables['events']  = {'name'  : '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                        'fold'  : 3
                        }

variables['WlepPt_wh3l'] = {'name' : 'WlepPt_wh3l',
                            'range' : (10,0.,200),
                            'xaxis' : 'WlepPt_wh31 [GeV]',
                            'fold' : 1
                        }

variables['WH3l_drOSll_min']  = {   'name': 'MinIf$( WH3l_drOSll[], WH3l_drOSll[Iteration$] > 0)',
                         'range' : ([0.,0.75,1.0,1.25,1.5,1.75,2.5,4.0],),    #   variable range
                         'xaxis' : 'min #Delta R_{ll}',  #   x axis name
                         'fold' : 0
                        }

variables['WH3l_drOSll']  = {'name'  : 'WH3l_drOSll',
                        'range' : (5,0,5),
                        'xaxis' : 'WH3l_drOSll',
                        'fold'  : 0
                        }
variables['WH3l_mOSll_0']  = {'name'  : 'WH3l_mOSll[0]',
                        'range' : (20,0,200),
                        'xaxis' : 'WH3l_mOSll_0',
                        'fold'  : 0
                        }
variables['WH3l_mOSll_1']  = {'name'  : 'WH3l_mOSll[1]',
                        'range' : (20,0,200),
                        'xaxis' : 'WH3l_mOSll_1',
                        'fold'  : 0
                        }
variables['WH3l_mOSll_2']  = {'name'  : 'WH3l_mOSll[2]',
                        'range' : (20,0,200),
                        'xaxis' : 'WH3l_mOSll_2',
                        'fold'  : 0
                        }
variables['WH3l_mOSll']  = {'name'  : 'WH3l_mOSll',
                        'range' : (20,0,200),
                        'xaxis' : 'WH3l_mOSll',
                        'fold'  : 0
                        }
