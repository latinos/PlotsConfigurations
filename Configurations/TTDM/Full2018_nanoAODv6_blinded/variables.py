# variables

#variables = {}
    


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

variables['nvtx']  = {   'name': 'PV_npvsGood',
                        'range' : (20,0,100),
                        'xaxis' : 'nvtx',
                         'fold' : 3
                      }

variables['mll']  = {   'name': 'mll',
                        'range' : (20, 12,200),
                        'xaxis' : 'm_{ll} [GeV]',
                        'fold' : 0
                        }

variables['mth']  = {   'name': 'mth',
                        'range' : (20, 60,200),
                        'xaxis' : 'm_{T}^{H} [GeV]',
                        'fold' : 0
                        }

variables['mT2']  = {   'name': 'mT2',
                        'range' : (20, 0, 200),
                        'xaxis' : 'm_{T2}^{ll} [GeV]',
                        'fold' : 0
                }

variables['ptll']  = {   'name': 'ptll',
                        'range' : (20, 30,200),
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 0
                        }

variables['pt1']  = {   'name': 'Lepton_pt[0]',
                        'range' : (20,20,100),
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 0
                        }

variables['pt2']  = {   'name': 'Lepton_pt[1]',
                        'range' : (20,10,100),
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 0
                        }

variables['eta1']  = {  'name': 'Lepton_eta[0]',
                        'range' : (20,-3,3),
                        'xaxis' : '#eta 1st lep',
                        'fold'  : 3
                        }

variables['eta2']  = {  'name': 'Lepton_eta[1]',
                        'range' : (20,-3,3),
                        'xaxis' : '#eta 2nd lep',
                        'fold'  : 3
                        }


variables['phi1']  = {  'name': 'Lepton_phi[0]',
                        'range' : (20,-3.2,3.2),
                        'xaxis' : '#phi 1st lep',
                        'fold'  : 3
                        }

variables['phi2']  = {  'name': 'Lepton_phi[1]',
                        'range' : (20,-3.2,3.2),
                        'xaxis' : '#phi 2nd lep',
                        'fold'  : 3
                        }

variables['puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (20,0,200),
                        'xaxis' : 'puppimet [GeV]',
                        'fold'  : 3
                        }

variables['njet']  = {
                        'name': 'Sum$(CleanJet_pt>30)',
                        'range' : (5,0,5),
                        'xaxis' : 'Number of jets',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['nbjet']  = {
    'name': 'Sum$(Jet_btagDeepB>0.2217)',
    'range' : (5,0,5),
    'xaxis' : 'Number of jets',
    'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow                                                         
    }

variables['jetpt1']  = {
                        'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_pt[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
                        'range' : (20,0,200),
                        'xaxis' : 'p_{T} 1st jet',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['jetpt2']  = {
                        'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_pt[1], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
                        'range' : (20,0,200),
                        'xaxis' : 'p_{T} 2nd jet',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['jeteta1']  = {  'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_eta[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
                        'range' : (20,-5.0,5.0),
                        'xaxis' : '#eta 1st jet',
                        'fold'  : 0
                        }

variables['jeteta2']  = {  'name': '(Sum$(CleanJet_pt>30)>1)*(Alt$(CleanJet_eta[1], 0)) - (Sum$(CleanJet_pt>30)<=1)*99',
                        'range' : (20,-5.0,5.0),
                        'xaxis' : '#eta 2nd jet',
                        'fold'  : 0
                        }

variables['dphill']  = {   'name': 'abs(dphill)',
                        'range' : (20,0,3.14),
                           'xaxis' : '#Delta#phi_{ll}',
                    'fold' : 3
                        }

variables['dphillmet']  = {   'name': 'abs(dphillmet)',
                              'range' : (20,0,3.14),
                              'xaxis' : '#Delta#phi_{ll, MET}',
                              'fold' : 3
                        }

variables['trkMet']  = {   'name': 'TkMET_pt',
                    'range' : (20,0,200),
                        'xaxis' : 'trk met [GeV]',
                         'fold' : 3
                        }

variables['pfMet']  = {   'name': 'MET_pt',
                    'range' : (20,0,200),
                        'xaxis' : ' pfmet [GeV]',
                         'fold' : 3
                        }
