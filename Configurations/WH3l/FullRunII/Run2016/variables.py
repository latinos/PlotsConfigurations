# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow


variables['events']  = {'name'  : '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                        'fold'  : 3
                        }

# variables['nElectron']  = {'name'  : 'nElectron',
                        # 'range' : (5,0,5),
                        # 'xaxis' : '# of electron',
                        # 'fold'  : 0
                        # }

variables['Jet_pt1']  = {   'name': 'Alt$(Jet_pt[0],0)',            #   variable name    
                        'range' : (10,0.,200),    #   variable range
                        # 'range' : (60,0.,300),    #   variable range
                        'xaxis' : 'jet1_p_{T} [GeV]',  #   x axis name
                         'fold' : 0
                        }
variables['pt1']  = {   'name': 'Alt$(Lepton_pt[0],0)',            #   variable name    
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
variables['eta1']  = {   'name': 'Alt$(Lepton_eta[0],0)',            #   variable name----
                        'range' : (10,-2.5,2.5),    #   variable range
                        'xaxis' : 'lept1_eta',  #   x axis name
                         'fold' : 0
                        }

variables['eta2']  = {   'name': 'Alt$(Lepton_eta[1],0)',            #   variable name----
                        'range' : (10,-2.5,2.5),    #   variable range
                        'xaxis' : 'lept2_eta',  #   x axis name
                         'fold' : 0
                        }

variables['eta3']  = {   'name': 'Alt$(Lepton_eta[2],0)',            #   variable name----
                        'range' : (10,-2.5,2.5),    #   variable range
                        'xaxis' : 'lept3_eta',  #   x axis name
                         'fold' : 0
                        }

variables['MET_pt']  = {'name'  : 'MET_pt',
                        'range' : (40,0,200),
                        'xaxis' : 'MET_pt',
                        'fold'  : 0
                        }

variables['WH3l_njet']  = {'name'  : 'WH3l_njet',
                        'range' : (50,0,50),
                        'xaxis' : 'WH3l_njet',
                        'fold'  : 0
                        }

variables['WH3l_nbjet']  = {'name'  : 'WH3l_nbjet',
                        'range' : (50,0,50),
                        'xaxis' : 'WH3l_nbjet',
                        'fold'  : 0
                        }

variables['WH3l_ZVeto']  = {'name'  : 'WH3l_ZVeto',
                        'range' : (24,0,120),
                        'xaxis' : 'WH3l_ZVeto',
                        'fold'  : 0
                        }
variables['WH3l_drOSll_min']  = {   'name': 'MinIf$( WH3l_drOSll[], WH3l_drOSll[Iteration$] > 0)',
                         'range' : ([0.,0.75,1.0,1.25,1.5,1.75,2.5,4.0],),    #   variable range
                         'xaxis' : 'min #Delta R_{ll}',  #   x axis name
                         'fold' : 0
                        }

# variables['WH3l_dphilllmet']  = {'name'  : 'WH3l_dphilllmet',
                        # 'range' : (5,0,5),
                        # 'xaxis' : 'WH3l_dphilllmet',
                        # 'fold'  : 0
                        # }

# variables['WH3l_dphilmet']  = {'name'  : 'WH3l_dphilmet',
                        # 'range' : (5,0,5),
                        # 'xaxis' : 'WH3l_dphilmet',
                        # 'fold'  : 0
                        # }
# variables['WH3l_drOSll']  = {'name'  : 'WH3l_drOSll',
                        # 'range' : (5,0,5),
                        # 'xaxis' : 'WH3l_drOSll',
                        # 'fold'  : 0
                        # }
# variables['WH3l_mOSll']  = {'name'  : 'WH3l_mOSll',
                        # 'range' : (20,0,200),
                        # 'xaxis' : 'WH3l_mOSll',
                        # 'fold'  : 0
                        # }
variables['WH3l_ptlll']  = {'name'  : 'WH3l_ptlll',
                        'range' : (50,0,500),
                        'xaxis' : 'WH3l_ptlll',
                        'fold'  : 0
                        }

# variables['WH3l_mtlmet']  = {'name'  : 'WH3l_mtlmet',
                        # 'range' : (20,0,200),
                        # 'xaxis' : 'WH3l_mtlmet',
                        # 'fold'  : 0
                        # }
# variables['WH3l_ptOSll']  = {'name'  : 'WH3l_ptOSll',
                        # 'range' : (20,0,200),
                        # 'xaxis' : 'WH3l_ptOSll',
                        # 'fold'  : 0
                        # }
# variables['WH3l_chlll']  = {'name'  : 'WH3l_chlll',
                        # 'range' : (5,0,5),
                        # 'xaxis' : 'WH3l_chlll',
                        # 'fold'  : 0
                        # }

variables['WH3l_ptWWW']  = {'name'  : 'WH3l_ptWWW',
                        'range' : (40,0,200),
                        'xaxis' : 'WH3l_ptWWW',
                        'fold'  : 0
                        }
variables['WH3l_mtWWW']  = {'name'  : 'WH3l_mtWWW',
                        'range' : (40,0,200),
                        'xaxis' : 'WH3l_mtWWW',
                        'fold'  : 0
                        }
variables['WH3l_mlll']  = {'name'  : 'WH3l_mlll',
                        'range' : (40,0,200),
                        'xaxis' : 'WH3l_mlll',
                        'fold'  : 0
                        }

# variables['BDT_OSSF'] = { 'name': 'hww_WH3l_mvaBDT_OSSF(WH3l_ZVeto,WH3l_dphilmet[0],WH3l_dphilmet[1],Alt$(Lepton_pt[1],0),MET_pt,WH3l_drOSll[1],WH3l_ptWWW,WH3l_drOSll[0],Alt$(Lepton_pt[2]))',
# # variables['BDT_OSSF'] = { 'name': 'hww_WH3l_mvaBDT_OSSF(WH3l_dphilmet[1],WH3l_dphilmet[0],WH3l_dphilllmet,WH3l_mlll,WH3l_mtWWW,MET_pt,WH3l_mtlmet[0],WH3l_mtlmet[1],Jet_pt)',
                            # # 'range' : ([-1.,-0.75,-0.5,-0.25,0.,0.15,0.25,0.35,0.50,0.65,1.],),    #   variable range :-
                            # 'range' : (20,-1.,1.),
                            # 'xaxis' : 'MVA discriminant',
                            # 'fold' : 3,
                            # 'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/23Mar2019/CMSSW_9_4_13/src/PlotsConfigurations/Configurations/WH3l/Full2017BDT/BDT_simp/hww_WH3l_mvaBDT_OSSF.C+','initmyreaderBDT()'],
                            # # 'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/23Mar2019/CMSSW_9_4_13/src/PlotsConfigurations/Configurations/WH3l/Full2017BDT/BDT/hww_WH3l_mvaBDT.C+','initmyreaderBDT()'],
                            # 'doWeight' : 1,
                            # 'binX'     : 1,
                            # 'binY'     : 11
                          # }
# # variables['BDT_SSSF'] = { 'name': 'hww_WH3l_mvaBDT_OSSF(WH3l_dphilmet[1],WH3l_dphilmet[0],WH3l_dphilllmet,WH3l_mlll,WH3l_mtWWW,MET_pt,WH3l_mtlmet[0],WH3l_mtlmet[1],Jet_pt)',
# variables['BDT_SSSF'] = { 'name': 'hww_WH3l_mvaBDT_OSSF(WH3l_dphilllmet,WH3l_ptlll,WH3l_mtlmet[1],WH3l_nbjet,WH3l_ptWWW,MET_pt,Alt$(Lepton_pt[0],0),Alt$(Lepton_pt[1],0),Alt$(Lepton_pt[2],0))',
                            # # 'range' : ([-1.,-0.75,-0.5,-0.25,0.,0.15,0.25,0.35,0.50,0.65,1.],),    #   variable range :-
                            # 'range' : (20,-1.,1.),
                            # 'xaxis' : 'MVA discriminant',
                            # 'fold' : 3,
                            # 'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/23Mar2019/CMSSW_9_4_13/src/PlotsConfigurations/Configurations/WH3l/Full2017BDT/BDT_simp/hww_WH3l_mvaBDT_SSSF.C+','initmyreaderBDT()'],
                            # # 'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/23Mar2019/CMSSW_9_4_13/src/PlotsConfigurations/Configurations/WH3l/Full2017BDT/BDT/hww_WH3l_mvaBDT.C+','initmyreaderBDT()'],
                            # 'doWeight' : 1,
                            # 'binX'     : 1,
                            # 'binY'     : 11
                          # }

# variables['BDT'] = { 'name': 'hww_WH3l_mvaBDT(MET_pt,WH3l_njet,WH3l_ZVeto,WH3l_dphilllmet,WH3l_dphilmet,WH3l_drOSll,WH3l_mOSll,WH3l_ptlll,WH3l_mtlmet,WH3l_ptOSll,WH3l_chlll,WH3l_nbjet,WH3l_ptWWW,WH3l_mtWWW,WH3l_mlll)',
                            # # 'range' : ([-1.,-0.75,-0.5,-0.25,0.,0.15,0.25,0.35,0.50,0.65,1.],),    #   variable range :-
                            # 'range' : (15,-1.,1.),
                            # 'xaxis' : 'MVA discriminant',
                            # 'fold' : 3,
                            # 'linesToAdd' : ['.L /afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017MVA/23Mar2019/CMSSW_9_4_13/src/PlotsConfigurations/Configurations/WH3l/Full2017BDT/BDT/hww_WH3l_mvaBDT.C+','initmyreaderBDT()'],
                            # 'doWeight' : 1,
                            # 'binX'     : 1,
                            # 'binY'     : 11
                          # }

