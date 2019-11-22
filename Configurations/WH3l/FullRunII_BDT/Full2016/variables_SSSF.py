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

variables['BDTG_SSSF_10bins'] = { 'name': 'hww_WH3l_SSSF_mvaBDTG(Entry$,0)',
                        'range' : (10,-1,1),
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2016_nanoAODv4/hww_WH3l_SSSF_mvaBDTG.C+']
                      }

variables['BDTG_SSSF_20bins'] = { 'name': 'hww_WH3l_SSSF_mvaBDTG(Entry$,0)',
                        'range' : (20,-1,1),
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2016_nanoAODv4/hww_WH3l_SSSF_mvaBDTG.C+']
                      }
variables['BDTG_SSSF_30bins'] = { 'name': 'hww_WH3l_SSSF_mvaBDTG(Entry$,0)',
                        'range' : (30,-1,1),
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2016_nanoAODv4/hww_WH3l_SSSF_mvaBDTG.C+']
                      }
variables['BDTG_SSSF_40bins'] = { 'name': 'hww_WH3l_SSSF_mvaBDTG(Entry$,0)',
                        'range' : (40,-1,1),
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2016_nanoAODv4/hww_WH3l_SSSF_mvaBDTG.C+']
                      }
variables['BDTG_SSSF_bin1'] = { 'name': 'hww_WH3l_SSSF_mvaBDTG(Entry$,0)',
                        'range' : ([-1.0,-0.20,0.0,0.2,0.4,0.6,0.8,0.9,1.0],),    #   variable range
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2016_nanoAODv4/hww_WH3l_SSSF_mvaBDTG.C+']
                      }
variables['BDTG_SSSF_bin2'] = { 'name': 'hww_WH3l_SSSF_mvaBDTG(Entry$,0)',
                        'range' : ([-1.0,-0.2,0.,0.2,0.4,0.55,0.70,0.8,0.9,0.95,1.0],),    #   variable range
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2016_nanoAODv4/hww_WH3l_SSSF_mvaBDTG.C+']
                      }
variables['BDTG_SSSF_bin3'] = { 'name': 'hww_WH3l_SSSF_mvaBDTG(Entry$,0)',
                        'range' : ([-1.0,-0.5,-0.2,0.,0.2,0.4,0.6,0.75,0.9,1.0],),    #   variable range
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2016_nanoAODv4/hww_WH3l_SSSF_mvaBDTG.C+']
                      }
variables['BDTG_SSSF_bin4'] = { 'name': 'hww_WH3l_SSSF_mvaBDTG(Entry$,0)',
                        'range' : ([-1.0,-0.6,-0.20,0.0,0.2,0.4,0.6,0.8,0.9,1.0],),    #   variable range
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2016_nanoAODv4/hww_WH3l_SSSF_mvaBDTG.C+']
                      }

