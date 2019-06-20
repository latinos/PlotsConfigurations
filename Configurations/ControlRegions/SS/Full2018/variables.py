# variables

#variables = {}
    

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

variables['nvtx']  = {   'name': 'PV_npvsGood',      
                        'range' : (50,0,50),  
                        'xaxis' : 'nvtx', 
                         'fold' : 3
                      }

variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (40, 0,300),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['mllpeak'] = {   'name': 'mll',            #   variable name
                           'range' : (20,80,100),    #   variable range
                           'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                           'fold' : 0
                        }

variables['ptll']  = {   'name': 'ptll',     
                        'range' : (40, 0,200),   
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 0
                        }

variables['pt1']  = {   'name': 'Lepton_pt[0]',     
                        'range' : (40,0,40),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3                         
                        }

variables['pt2']  = {   'name': 'Lepton_pt[1]',     
                        'range' : (40,0,40),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 3                         
                        }

variables['eta1']  = {  'name': 'Lepton_eta[0]',     
                        'range' : (40,-3,3),   
                        'xaxis' : '#eta 1st lep',
                        'fold'  : 3                         
                        }
variables['eta2']  = {  'name': 'Lepton_eta[1]',     
                        'range' : (40,-3,3),   
                        'xaxis' : '#eta 2nd lep',
                        'fold'  : 3                         
                        }
variables['phi1']  = {  'name': 'Lepton_phi[0]',
                        'range' : (40,-3.2,3.2),
                        'xaxis' : '#phi 1st lep',
                        'fold'  : 3
                        }

variables['phi2']  = {  'name': 'Lepton_phi[1]',
                        'range' : (40,-3.2,3.2),
                        'xaxis' : '#phi 2nd lep',
                        'fold'  : 3
                        }

variables['pfmet']  = { 
                        'name': 'MET_pt',     
                        'range' : (40,0,150),   
                        'xaxis' : 'PFMET [GeV]',
                        'fold'  : 3                         
                        }


variables['rawmet']  = { 
                        'name': 'RawMET_pt',     
                        'range' : (40,0,150),   
                        'xaxis' : 'RawMET [GeV]',
                        'fold'  : 3                         
                        }

variables['TkMET']  = { 
                        'name': 'TkMET_pt',     
                        'range' : (40,0,150),   
                        'xaxis' : 'TkMET [GeV]',
                        'fold'  : 3                         
                        }


variables['mpmet']  = {   'name': 'mpmet',      
                         'range' : (40,0,150),  
                         'xaxis' : 'min. (proj. tk. E_{T}^{miss}, proj. E_{T}^{miss})', 
                         'fold' : 3
                         }


variables['puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (40,0,150),
                        'xaxis' : 'puppimet [GeV]',
                        'fold'  : 3
                        }

variables['njet']  = {
                        'name': 'Sum$(CleanJet_pt>30)',     
                        'range' : (5,0,5),   
                        'xaxis' : 'Number of jets',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['jetpt1']  = {
                        'name': 'CleanJet_pt[0]*(CleanJet_pt[0]>30)',     
                        'range' : (40,30,200),   
                        'xaxis' : 'p_{T} 1st jet',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['jetpt1_0j']  = {
                        'name': 'CleanJet_pt[0]*(CleanJet_pt[0]<30)',     
                        'range' : (40,0,30),   
                        'xaxis' : 'p_{T} 1st jet (p_{T} < 30 GeV) ',
                        'fold' : 0  # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['ctag'] = {
                    'name': 'Alt$(Jet_btagDeepC[CleanJet_jetIdx[0]], -9)',
                    'range' : (10,0,1),
                    'xaxis' :  "ctag 1st jet",
                    "fold"  : 2
}

variables['btag'] = {
                    'name': 'Alt$(Jet_btagDeepB[CleanJet_jetIdx[0]], -9)',
                    'range' : (10,0,1),
                    'xaxis' :  "ctag 1st jet",
                    "fold"  : 2
}

variables['ctag_jetoverlappingWithLeadingElectron'] = {
                    'name': 'Alt$(Jet_btagDeepC[max(Electron_jetIdx[max(Lepton_electronIdx[0],0)],0)]*(Lepton_electronIdx[0]>=0)-1*(Lepton_electronIdx[0]<0), -9)',
                    'range' : (10,0,1),
                    'xaxis' :  "ctag jet overlapping with leading electron",
                    "fold"  : 2
}

variables['ctag_jetoverlappingWithSubleadingElectron'] = {
                    'name': 'Alt$(Jet_btagDeepC[max(Electron_jetIdx[max(Lepton_electronIdx[1],0)],0)]*(Lepton_electronIdx[1]>=0)-1*(Lepton_electronIdx[1]<0), -9)',
                    'range' : (10,0,1),
                    'xaxis' :  "ctag jet overlapping with subleading electron",
                    "fold"  : 2
}

variables['ctag_jetoverlappingWithLeadingMuon'] = {
                    'name': 'Alt$(Jet_btagDeepC[max(Muon_jetIdx[max(Lepton_muonIdx[0],0)],0)]*(Lepton_muonIdx[0]>=0)-1*(Lepton_muonIdx[0]<0), -9)',
                    'range' : (10,0,1),
                    'xaxis' :  "ctag jet overlapping with leading electron",
                    "fold"  : 2
}

variables['ctag_jetoverlappingWithSubleadingMuon'] = {
                    'name': 'Alt$(Jet_btagDeepC[max(Muon_jetIdx[max(Lepton_muonIdx[1],0)],0)]*(Lepton_muonIdx[1]>=0)-1*(Lepton_muonIdx[1]<0), -9)',
                    'range' : (10,0,1),
                    'xaxis' :  "ctag jet overlapping with subleading electron",
                    "fold"  : 2
}

variables['btag_jetoverlappingWithLeadingElectron'] = {
                    'name': 'Alt$(Jet_btagDeepB[max(Electron_jetIdx[max(Lepton_electronIdx[0],0)],0)]*(Lepton_electronIdx[0]>=0)-1*(Lepton_electronIdx[0]<0), -9)',
                    'range' : (10,0,1),
                    'xaxis' :  "btag jet overlapping with leading electron",
                    "fold"  : 2
}

variables['btag_jetoverlappingWithSubleadingElectron'] = {
                    'name': 'Alt$(Jet_btagDeepB[max(Electron_jetIdx[max(Lepton_electronIdx[1],0)],0)]*(Lepton_electronIdx[1]>=0)-1*(Lepton_electronIdx[1]<0), -9)',
                    'range' : (10,0,1),
                    'xaxis' :  "btag jet overlapping with subleading electron",
                    "fold"  : 2
}

variables['btag_jetoverlappingWithLeadingMuon'] = { 
                    'name': 'Alt$(Jet_btagDeepB[max(Muon_jetIdx[max(Lepton_muonIdx[0],0)],0)]*(Lepton_muonIdx[0]>=0)-1*(Lepton_muonIdx[0]<0), -9)',
                    'range' : (10,0,1),
                    'xaxis' :  "btag jet overlapping with leading electron",
                    "fold"  : 2
}

variables['btag_jetoverlappingWithSubleadingMuon'] = { 
                    'name': 'Alt$(Jet_btagDeepB[max(Muon_jetIdx[max(Lepton_muonIdx[1],0)],0)]*(Lepton_muonIdx[1]>=0)-1*(Lepton_muonIdx[1]<0), -9)',
                    'range' : (10,0,1),
                    'xaxis' :  "btag jet overlapping with subleading electron",
                    "fold"  : 2
}


variables['jetphi1']  = {  'name': 'CleanJet_phi[0]',
                        'range' : (40,-3.2,3.2),
                        'xaxis' : '#phi 1st jet',
                        'fold'  : 0
                        }


variables['jeteta1']  = {  'name': 'CleanJet_eta[0]',
                        'range' : (80,-5.0,5.0),
                        'xaxis' : '#eta 1st jet',
                        'fold'  : 0
                        }


variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (40,0,200),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['dphill']  = {   'name': 'abs(dphill)',     
                        'range' : (20,0,3.14),   
                        'xaxis' : '#Delta#phi_{ll}',
                        'fold' : 3
}
