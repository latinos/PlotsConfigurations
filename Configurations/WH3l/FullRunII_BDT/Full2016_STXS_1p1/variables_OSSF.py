# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

configDir = os.path.expandvars("${CMSSW_BASE}/src/PlotsConfigurations/Configurations/WH3l/Full2016_nanoAODv4_BDT/")

variables['WlepPt_wh3l_v1'] = {'name' : 'WlepPt_wh3l_v1',
                               'range' : (40,0.,400),
                               'xaxis' : 'WlepPt_wh31_v1 [GeV]',
                               'fold' : 1
                           }

variables['WlepPt_wh3l_v2'] = {'name' : 'WlepPt_wh3l_v2',
                               'range' : (40,0.,400),
                               'xaxis' : 'WlepPt_wh31_v2 [GeV]',
                               'fold' : 1
                           }

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

variables['BDTG_OSSF_bin2'] = { 'name': 'hww_WH3l_OSSF_mvaBDTG(Entry$,0)',
                        'range' : ([-1.0,-0.5,0.,0.3,0.45,0.6,0.7,0.8,0.85,0.9,0.95,1.0],),    #   variable range
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : [
                                         'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                                         '.L %s/hww_WH3l_OSSF_mvaBDTG.C+' % os.getenv('PWD')
                                       ]
                        }

