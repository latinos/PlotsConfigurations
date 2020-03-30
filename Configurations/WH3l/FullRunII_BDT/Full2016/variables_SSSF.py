# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow


variables['events']  = {'name'  : '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                        'fold'  : 3
                        }
variables['WH3l_drOSll_min']  = {   'name': 'MinIf$( WH3l_drOSll[], WH3l_drOSll[Iteration$] > 0)',
                         'range' : ([0.,0.75,1.0,1.25,1.5,1.75,2.5,4.0],),    #   variable range
                         'xaxis' : 'min #Delta R_{ll}',  #   x axis name
                         'fold' : 0
                        }
variables['BDTG_SSSF_10bin'] = { 'name': 'hww_WH3l_SSSF_mvaBDTG(Entry$,0)',
                        'range' : (10,-1,1),
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L %s/src/PlotsConfigurations/Configurations/WH3l/FullRunII_BDT/Full2016/hww_WH3l_SSSF_mvaBDTG.C+' % os.getenv('CMSSW_BASE')]
                      }
