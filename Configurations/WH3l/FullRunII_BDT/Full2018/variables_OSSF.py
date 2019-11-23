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

variables['BDTG_OSSF_10bins'] = { 'name': 'hww_WH3l_OSSF_mvaBDTG(Entry$,0)',
                        'range' : (10,-1,1),
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2018_nanoAODv4/hww_WH3l_OSSF_mvaBDTG.C+']
                      }

variables['BDTG_OSSF_20bins'] = { 'name': 'hww_WH3l_OSSF_mvaBDTG(Entry$,0)',
                        'range' : (20,-1,1),
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2018_nanoAODv4/hww_WH3l_OSSF_mvaBDTG.C+']
                      }
variables['BDTG_OSSF_30bins'] = { 'name': 'hww_WH3l_OSSF_mvaBDTG(Entry$,0)',
                        'range' : (30,-1,1),
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2018_nanoAODv4/hww_WH3l_OSSF_mvaBDTG.C+']
                      }
variables['BDTG_OSSF_40bins'] = { 'name': 'hww_WH3l_OSSF_mvaBDTG(Entry$,0)',
                        'range' : (40,-1,1),
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2018_nanoAODv4/hww_WH3l_OSSF_mvaBDTG.C+']
                      }

variables['BDTG_OSSF_bin1'] = { 'name': 'hww_WH3l_OSSF_mvaBDTG(Entry$,0)',
                        'range' : ([-1.0,-0.6,-0.2,0.2,0.5,0.7,0.8,0.85,0.9,0.95,1.0],),
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2018_nanoAODv4/hww_WH3l_OSSF_mvaBDTG.C+']
                      }

variables['BDTG_OSSF_bin2'] = { 'name': 'hww_WH3l_OSSF_mvaBDTG(Entry$,0)',
                        'range' : ([-1.0,-0.5,0.,0.3,0.45,0.6,0.7,0.8,0.85,0.9,0.95,1.0],),    #   variable range
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2018_nanoAODv4/hww_WH3l_OSSF_mvaBDTG.C+']
                      }

variables['BDTG_OSSF_bin3'] = { 'name': 'hww_WH3l_OSSF_mvaBDTG(Entry$,0)',
                        'range' : ([-1.0,-0.75,-0.50,0.,0.25,0.5,0.7,0.8,0.85,0.9,0.95,1.0],),    #   variable range
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2018_nanoAODv4/hww_WH3l_OSSF_mvaBDTG.C+']
                      }

variables['BDTG_OSSF_bin4'] = { 'name': 'hww_WH3l_OSSF_mvaBDTG(Entry$,0)',
                        'range' : ([-1.0,-0.6,-0.2,0.2,0.5,0.7,0.8,0.84,0.88,0.92,0.96,1.0],),
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2018_nanoAODv4/hww_WH3l_OSSF_mvaBDTG.C+']
                      }

variables['BDTG_OSSF_bin5'] = { 'name': 'hww_WH3l_OSSF_mvaBDTG(Entry$,0)',
                        'range' : ([-1.0,-0.6,-0.2,0.2,0.5,0.7,0.8,0.84,0.88,0.9,0.92,0.94,0.96,1.0],),
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2018_nanoAODv4/hww_WH3l_OSSF_mvaBDTG.C+']
                      }
variables['BDTG_OSSF_bin6'] = { 'name': 'hww_WH3l_OSSF_mvaBDTG(Entry$,0)',
                        'range' : ([-1.0,-0.6,-0.2,0.2,0.5,0.7,0.8,0.84,0.88,0.9,0.92,0.94,0.96,0.98,1.0],),
                        'xaxis' : 'MVA discriminant',
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2018_nanoAODv4/hww_WH3l_OSSF_mvaBDTG.C+']
                      }
# variables['BDTG_OSSF_bin1'] = { 'name': 'hww_WH3l_OSSF_mvaBDTG(Entry$,0)',
                        # 'range' : ([-1.0,-0.6,-0.2,0.2,0.5,0.7,0.85,1.0],),
                        # 'xaxis' : 'MVA discriminant',
                        # 'fold' : 3,
                        # 'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2018_nanoAODv4/hww_WH3l_OSSF_mvaBDTG.C+']
                      # }

# variables['BDTG_OSSF_bin2'] = { 'name': 'hww_WH3l_OSSF_mvaBDTG(Entry$,0)',
                        # 'range' : ([-1.0,0.,0.3,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,1.0],),    #   variable range
                        # 'xaxis' : 'MVA discriminant',
                        # 'fold' : 3,
                        # 'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2018_nanoAODv4/hww_WH3l_OSSF_mvaBDTG.C+']
                      # }

# variables['BDTG_OSSF_bin3'] = { 'name': 'hww_WH3l_OSSF_mvaBDTG(Entry$,0)',
                        # 'range' : ([-1.0,-0.75,-0.50,0.,0.25,0.5,0.7,0.8,0.9,1.0],),    #   variable range
                        # 'xaxis' : 'MVA discriminant',
                        # 'fold' : 3,
                        # 'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/25Sep2019/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH3l/Full2018_nanoAODv4/hww_WH3l_OSSF_mvaBDTG.C+']
                      # }

