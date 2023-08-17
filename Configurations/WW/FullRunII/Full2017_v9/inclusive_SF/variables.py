# variables

variables['BDTOutput_0j_DY'] = {
    'name': 'BDTOutput_0j_DY',
    'range' : ([0.90,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1.00],),
    'xaxis' : 'DY MVA discriminant',
    'fold' : 3,
    'cuts' : [cut for cut in cuts if 'sr' in cut]
}

variables['BDTOutput_1j_DY'] = {
    'name': 'BDTOutput_1j_DY',
    'range' : ([0.90,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1.00],),
    'xaxis' : 'DY MVA discriminant',
    'fold' : 3,
    'cuts' : [cut for cut in cuts if 'sr' in cut]
}

variables['BDTOutput_2j_DY'] = {
    'name': 'BDTOutput_2j_DY',
    'range' : ([0.90,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1.00],),
    'xaxis' : 'DY MVA discriminant',
    'fold' : 3,
    'cuts' : [cut for cut in cuts if 'sr' in cut]
}


variables['events']  = {'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

variables['mll']  = {   'name': 'mll',
                        'range' : (20, 50,300),
                        'xaxis' : 'm_{ll} [GeV]',
                        'fold' : 3
                        }

variables['mth']  = {   'name': 'mth',
                        'range' : (20, 60,300),
                        'xaxis' : 'm_{T}^{WW} [GeV]',
                        'fold' : 3
                        }

variables['ptll']  = {   'name': 'ptll',
                         'range' : (20, 30,150),
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 0
                        }
variables['pt1']  = {   'name': 'Lepton_pt[0]',
                        'range' : (20,25,180),
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3
                        }
variables['pt2']  = {   'name': 'Lepton_pt[1]',
                        'range' : (20,20,100),
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 3
                        }
variables['eta1']  = {  'name': 'Lepton_eta[0]',
                        'range' : (20,-2.5,2.5),
                        'xaxis' : '#eta 1st lep',
                        'fold'  : 3
                        }
variables['eta2']  = {  'name': 'Lepton_eta[1]',
                        'range' : (20,-2.5,2.5),
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
                        'range' : (20,20,150),
                        'xaxis' : 'puppimet [GeV]',
                        'fold'  : 3
                        }
variables['njet']  = {
                        'name': 'Sum$(CleanJet_pt>30)',
                        'range' : (5,0,5),
                        'xaxis' : 'Number of jets',
                        'fold' : 3   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }
variables['jetpt1']  = {
                        'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_pt[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
                        'range' : (20,30,200),
                        'xaxis' : 'p_{T} 1st jet',
                        'fold' : 3   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }
variables['jetpt2']  = {
                        'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_pt[1], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
                        'range' : (20,30,200),
                        'xaxis' : 'p_{T} 2nd jet',
                        'fold' : 3   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }
variables['jeteta1']  = {  'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_eta[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
                        'range' : (20,-5.0,5.0),
                        'xaxis' : '#eta 1st jet',
                        'fold'  : 3
                        }
variables['jeteta2']  = {  'name': '(Sum$(CleanJet_pt>30)>1)*(Alt$(CleanJet_eta[1], 0)) - (Sum$(CleanJet_pt>30)<=1)*99',
                        'range' : (20,-5.0,5.0),
                        'xaxis' : '#eta 2nd jet',
                        'fold'  : 3
                        }

