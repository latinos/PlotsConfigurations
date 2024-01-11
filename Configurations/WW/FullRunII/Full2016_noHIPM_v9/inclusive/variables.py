# variables

variables['BDTOutput_0j'] = {
    'name': 'BDTOutput_0j',
    'range' : ([-1.0,-0.5,-0.25,0.,0.25,0.5,1.0],),
    'xaxis' : 'MVA discriminant WW',
    'fold' : 3,
}

variables['BDTOutput_1j'] = {
    'name': 'BDTOutput_1j',
    'range' : ([-1.0,-0.5,-0.25,0.,0.25,0.5,1.0],),
    'xaxis' : 'MVA discriminant WW',
    'fold' : 3,
}

variables['BDTOutput_2j'] = {
    'name': 'BDTOutput_2j',
    'range' : ([-1.0,-0.5,-0.25,0.,0.25,0.5,1.0],),
    'xaxis' : 'MVA discriminant WW',
    'fold' : 3,
}

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

variables['mll']  = {   'name': 'mll',
                        'range' : (20, 80,200),
                        'xaxis' : 'm_{ll} [GeV]',
                        'fold' : 3
                        }

variables['ptll']  = {   'name': 'ptll',
                        'range' : (20, 0.,200),
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 0
                        }

variables['puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (20,0,200),
                        'xaxis' : 'puppimet [GeV]',
                        'fold'  : 3
                        }

variables['mth']  = {   'name': 'mth',
                        'range' : (20, 60,300),
                        'xaxis' : 'm_{T}^{WW} [GeV]',
                        'fold' : 3
                        }

variables['pt1']  = {   'name': 'pt1',
                        'range' : (20,20,100),
                        'xaxis' : 'pt1',
                        'fold'  : 3
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

variables['drll']  = {  'name': 'drll',
                        'range' : (20,0,6),
                        'xaxis' : 'drll',
                        'fold'  : 3
                        }

variables['dphilmet'] = { 'name': 'dphilmet',
                          'range' : (20,0,3.15),
                          'xaxis' : 'dphilmet',
                          'fold'  : 3
                        }

variables['dphillmet'] = { 'name': 'dphillmet',
                           'range' : (20,0,3.15),
                           'xaxis' : 'dphillmet',
                           'fold'  : 3
                        }

variables['mtw1']  = {  'name': 'mtw1',
                        'range' : (20,0,200),
                        'xaxis' : 'mtw1',
                        'fold'  : 3
                        }

variables['mtw2']  = {  'name': 'mtw2',
                        'range' : (20,0,200),
                        'xaxis' : 'mtw2',
                        'fold'  : 3
                        }

variables['pTWW']  = {  'name': 'pTWW',
                        'range' : (20,0,200),
                        'xaxis' : 'pTWW',
                        'fold'  : 3
                        }

variables['pTHjj']  = { 'name': 'pTHjj',
                        'range' : (20,0,200),
                        'xaxis' : 'pTHjj',
                        'fold'  : 3
                        }

variables['mjj']  = {   'name': 'mjj',
                        'range' : (20,15,215),
                        'xaxis' : 'mjj',
                        'fold'  : 3
                        }

variables['detajj'] = { 'name': 'detajj',
                        'range' : (20,0,10),
                        'xaxis' : 'detajj',
                        'fold'  : 3
                        }

variables['dphijj'] = { 'name': 'dphijj',
                        'range' : (20,0,3.15),
                        'xaxis' : 'dphijj',
                        'fold'  : 3
                        }

variables['dphijet2met'] = { 'name': 'dphijet2met',
                             'range' : (20,0,3.15),
                             'xaxis' : 'dphijet2met',
                             'fold'  : 3
                         }

variables['dphijjmet'] = { 'name'  : 'dphijjmet',
                           'range' : (20,0,3.15),
                           'xaxis' : 'dphijjmet',
                           'fold'  : 3
                        }

variables['dphilep1jet1'] = { 'name'  : 'dphilep1jet1',
                              'range' : (20,0,3.15),
                              'xaxis' : 'dphilep1jet1',
                              'fold'  : 3
                        }

variables['dphilep1jet2'] = { 'name'  : 'dphilep1jet2',
                              'range' : (20,0,3.15),
                              'xaxis' : 'dphilep1jet2',
                              'fold'  : 3
                        }

variables['mindetajl'] = { 'name'  : 'mindetajl',
                           'range' : (20,0,6),
                           'xaxis' : 'mindetajl',
                           'fold'  : 3
                        }

variables['jetpt0'] = { 'name'  : 'Alt$(CleanJet_pt[0],0)',
                        'range' : (20,0,100),
                        'xaxis' : 'Alt$(CleanJet_pt[0],0)',
                        'fold'  : 3
                        }

variables['jetpt1'] = { 'name'  : 'Alt$(CleanJet_pt[1],0)',
                        'range' : (20,0,100),
                        'xaxis' : 'Alt$(CleanJet_pt[1],0)',
                        'fold'  : 3
                        }

variables['jeteta0'] = { 'name'  : 'Alt$(CleanJet_eta[0],0)',
                         'range' : (20,-5,5),
                         'xaxis' : 'Alt$(CleanJet_eta[0],0)',
                         'fold'  : 3
                        }

variables['jeteta1'] = { 'name'  : 'Alt$(CleanJet_eta[1],0)',
                         'range' : (20,-5,5),
                         'xaxis' : 'Alt$(CleanJet_eta[1],0)',
                         'fold'  : 3
                        }

variables['jetbtag0'] = { 'name'  : 'Alt$(Jet_btagDeepFlavB[CleanJet_jetIdx[0]],-2)',
                          'range' : (22,-0.1,1),
                          'xaxis' : 'Alt$(Jet_btagDeepFlavB[CleanJet_jetIdx[0]],-2)',
                          'fold'  : 3
                        }

variables['jetbtag1'] = { 'name'  : 'Alt$(Jet_btagDeepFlavB[CleanJet_jetIdx[1]],-2)',
                          'range' : (22,-0.1,1),
                          'xaxis' : 'Alt$(Jet_btagDeepFlavB[CleanJet_jetIdx[1]],-2)',
                          'fold'  : 3
                        }

#variables['nGoodGenJet'] = { 'name'  : 'nGoodGenJet',
#                             'range' : (4,0,5),
#                          'xaxis' : 'nGoodGenJet',
#                          'fold'  : 3
#                        }

variables['njets'] = { 'name'  : 'Sum$(CleanJet_pt>30)',
                                 'range' : (4,-0.5,3.5),
                                 'xaxis' : 'njets',
                                 'fold'  : 3
                        }
