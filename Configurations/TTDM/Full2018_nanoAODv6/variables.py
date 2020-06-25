# variables

#variables = {}
    

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

#DNN variables
variables['pt1']  = {   'name': 'Lepton_pt[0]',
                        'range' : (50,0,300),
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3
                        }

variables['pt2']  = {   'name': 'Lepton_pt[1]',
                        'range' : (50,0,200),
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 3
                        }

variables['eta1']  = {  'name': 'Lepton_eta[0]',
                        'range' : (50,-3,3),
                        'xaxis' : '#eta 1st lep',
                        'fold'  : 3
                        }

variables['eta2']  = {  'name': 'Lepton_eta[1]',
                        'range' : (50,-3,3),
                        'xaxis' : '#eta 2nd lep',
                        'fold'  : 3
                        }

variables['deltaeta']  = {  'name': 'Lepton_eta[0] - Lepton_eta[1]',
                        'range' : (50,-3,3),
                        'xaxis' : '#Delta #eta',
                        'fold'  : 3
                        }

variables['phi1']  = {  'name': 'Lepton_phi[0]',
                        'range' : (50,-3.2,3.2),
                        'xaxis' : '#phi 1st lep',
                        'fold'  : 3
                        }

variables['phi2']  = {  'name': 'Lepton_phi[1]',
                        'range' : (50,-3.2,3.2),
                        'xaxis' : '#phi 2nd lep',
                        'fold'  : 3
                        }

variables['dphill']  = {   'name': 'abs(dphill)',
                        'range' : (40,0,3.14),
                           'xaxis' : '#Delta#phi_{ll}',
                    'fold' : 3
                        }

variables['dphillmet']  = {   'name': 'abs(dphillmet)',
                              'range' : (40,0,3.14),
                              'xaxis' : '#Delta#phi_{ll, MET}',
                              'fold' : 3
                        }

variables['njet']  = {
                        'name': 'Sum$(CleanJet_pt>30)',
                        'range' : (7,0,7),
                        'xaxis' : 'Number of jets',
                        'fold' : 0   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['nbjet']  = {
    'name': 'nbJet',
    'range' : (5,0,5),
    'xaxis' : 'Number of loose b-jets',
    'fold' : 0   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow                                                         
    }

variables['mblt']  = {   'name': 'mblt',
                        'range' : (60, 0, 350),
                         'xaxis' : 'm_{bl}^{t} [GeV]',
                        'fold' : 3
                        }

variables['mll']  = {   'name': 'mll',
                        'range' : (60, 0,200),
                        'xaxis' : 'm_{ll} [GeV]',
                        'fold' : 3
                        }

variables['mth']  = {   'name': 'mth',
                        'range' : (60, 0,300),
                        'xaxis' : 'm_{T}^{H} [GeV]',
                        'fold' : 3
                        }

variables['mtw1']  = {   'name': 'mtw1',
                        'range' : (60, 00, 300),
                         'xaxis' : 'm_{T, 1}^{W} [GeV]',
                        'fold' : 3
                        }

variables['mtw2']  = {   'name': 'mtw2',
                        'range' : (60, 0, 300),
                         'xaxis' : 'm_{T, 2}^{W} [GeV]',
                        'fold' : 3
                        }

variables['costhetall']  = {   'name': 'costhetall',
                              'range' : (40, -1, 1),
                            'xaxis' : 'cos(#theta_{l0,l1}) [rad]',
                        'fold' : 3
                        }

variables['costhetal1b1']  = {   'name': 'costhetal1b1',
                              'range' : (40, -1, 1),
                              'xaxis' : 'cos(#theta_{l1,b1}) [rad]',
                        'fold' : 3
                        }

variables['costhetal2b2']  = {   'name': 'costhetal2b2',
                              'range' : (40, -1, 1),
                              'xaxis' : 'cos(#theta_{l2,b2}) [rad]',
                        'fold' : 3
                        }

variables['cosphill']  = {   'name': 'cosphill',
                              'range' : (60, -1.2, 1.2),
                              'xaxis' : 'cos(#phi_{ll}) (parent rest frame) [rad]',
                        'fold' : 3
                        }

variables['totalET']  = {   'name': 'totalET',
                              'range' : (60, 200, 1500),
                             'xaxis' : 'Total ET [GeV]',
                        'fold' : 3
                        }

variables['puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (60,0,350),
                        'xaxis' : 'puppimet [GeV]',
                        'fold'  : 3
                        }

variables['trkMet']  = {   'name': 'TkMET_pt',
                    'range' : (60,0,350),
                        'xaxis' : 'trk met [GeV]',
                         'fold' : 3
                        }

variables['pfMet']  = {   'name': 'MET_pt',
                    'range' : (60,0,350),
                        'xaxis' : ' pfmet [GeV]',
                         'fold' : 3
                        }

variables['MET_significance']  = {   'name': 'MET_significance',
                    'range' : (50,0,150),
                        'xaxis' : ' Met significance [GeV]',
                         'fold' : 3
                        }

variables['mT2']  = {   'name': 'mT2',
                        'range' : (40, 0, 200),
                        'xaxis' : 'm_{T2}^{ll} [GeV]',
                        'fold' : 0
                }

variables['mt2ll']  = {   'name': 'mt2ll',
                        'range' : (40, 0, 150),
                        'xaxis' : 'm_{T2}^{ll} [GeV]',
                        'fold' : 0
                }

variables['mt2bl']  = {   'name': 'mt2bl',
                        'range' : (50, 50, 450),
                          'xaxis' : 'm_{T2}^{bl, bl} [GeV]',
                        'fold' : 0
                }

variables['dark_pt']  = {   'name': 'dark_pt',      
                            'range' : (50,0,600),  
                        'xaxis' : 'dark pT [GeV]', 
                        'fold' : 3
                        }

variables['overlapping_factor']  = {   'name': 'overlapping_factor',      
                                       'range' : (50,0,5),  
                        'xaxis' : 'Overlapping factor R', 
                        'fold' : 3
                        }

variables['reco_weight']  = {   'name': 'reco_weight',      
                                       'range' : (50,-2,10),  
                        'xaxis' : 'log(weight)', 
                        'fold' : 3
                        }


"""
variables['nvtx']  = {   'name': 'PV_npvsGood',
                        'range' : (40,0,100),
                        'xaxis' : 'nvtx',
                         'fold' : 3
                      }


variables['ptll']  = {   'name': 'ptll',
                        'range' : (40, 30,200),
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 0
                        }

variables['jetpt1']  = {
                        'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_pt[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
                        'range' : (40,0,200),
                        'xaxis' : 'p_{T} 1st jet',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['jetpt2']  = {
                        'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_pt[1], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
                        'range' : (40,0,200),
                        'xaxis' : 'p_{T} 2nd jet',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['jeteta1']  = {  'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_eta[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
                        'range' : (40,-5.0,5.0),
                        'xaxis' : '#eta 1st jet',
                        'fold'  : 0
                        }

variables['jeteta2']  = {  'name': '(Sum$(CleanJet_pt>30)>1)*(Alt$(CleanJet_eta[1], 0)) - (Sum$(CleanJet_pt>30)<=1)*99',
                        'range' : (40,-5.0,5.0),
                        'xaxis' : '#eta 2nd jet',
                        'fold'  : 0
                        }
"""
