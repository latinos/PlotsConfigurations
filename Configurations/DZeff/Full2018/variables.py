# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3
                        }
   
variables['DZ']  = {    'name':'(abs(Lepton_pdgId[0])==11 && abs(Lepton_pdgId[1])==11 ? abs(Electron_dz[Lepton_electronIdx[0]] - Electron_dz[Lepton_electronIdx[1]]) : 0 ) + (abs(Lepton_pdgId[0])==13 && abs(Lepton_pdgId[1])==13 ? abs(Muon_dz[Lepton_muonIdx[0]] - Muon_dz[Lepton_muonIdx[1]]) : 0 ) + (abs(Lepton_pdgId[0])==11 && abs(Lepton_pdgId[1])==13 ? abs(Electron_dz[Lepton_electronIdx[0]] - Muon_dz[Lepton_muonIdx[1]]) : 0 ) + (abs(Lepton_pdgId[1])==11 && abs(Lepton_pdgId[0])==13 ? abs(Electron_dz[Lepton_electronIdx[1]] - Muon_dz[Lepton_muonIdx[0]]) : 0 )',
                        'range' : (25,0,0.25),
                        'xaxis' : 'DZ',
                         'fold' : 3
                        }

variables['nvtx']  = {  'name': 'PV_npvsGood',
                        'range' : ([0,20,30,40,50,70,100],),
                        'xaxis' : 'nvtx',
                         'fold' : 3
                        }

variables['pt1']  = {   'name': 'Lepton_pt[0]',
                        'range' : ([10,22,25,30,40,100],),
                        'xaxis' : 'p_{T}^{1st Lep}',
                         'fold' : 3
                        }

variables['pt2']  = {   'name': 'Lepton_pt[1]',
                        'range' : ([10,15,17,18,19,20,22,25,30,40,100],),
                        'xaxis' : 'p_{T}^{2nd Lep}',
                         'fold' : 3
                        }
