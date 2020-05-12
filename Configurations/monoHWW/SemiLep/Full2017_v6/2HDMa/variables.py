variables['Events']  = {   'name': '1',     
                           'range' : (1,0,1),   
                           'xaxis' : '1',
                           'fold'  : 3
                        }

variables['Puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (25,0,300),
                        'xaxis' : 'p_{T} puppiMET [GeV]',
                        'fold'  : 3
                        }

variables['l1_pt']  = {   'name': 'Lepton_pt[0]',     
                        'range' : (25,20,300),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3
                        }
variables['l2_pt']  = {   'name': 'Alt$(Lepton_pt[1], -9999.)',     
                        'range' : (25,0,12),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 3
                        }

variables['j1_pt']  = {   'name': 'MHlnjj_pt_j1',     
                        'range' : (25,0,350),   
                        'xaxis' : 'p_{T} 1st jet',
                        'fold'  : 3
                        }
variables['j2_pt']  = {   'name': 'MHlnjj_pt_j2',     
                        'range' : (25,0,150),   
                        'xaxis' : 'p_{T} 2nd jet',
                        'fold'  : 3
                        }
variables['nlep']  = {   'name': 'nLepton',     
                        'range' : (5,0,5),   
                        'xaxis' : '# Lepton',
                        'fold'  : 3
                        }
variables['njet']  = {   'name': 'nCleanJet',     
                        'range' : (15,0,15),   
                        'xaxis' : '# CleanJet',
                        'fold'  : 3
                        }


variables['l1_eta']  = {  'name': 'Lepton_eta[0]',     
                        'range' : (25,-3,3),   
                        'xaxis' : '#eta 1st lep',
                        'fold'  : 3                         
                        }
variables['j1_eta']  = {  'name': 'MHlnjj_eta_j1',     
                        'range' : (25,-5,5),   
                        'xaxis' : '#eta 1st jet',
                        'fold'  : 3                         
                        }
variables['j2_eta']  = {  'name': 'MHlnjj_eta_j2',     
                        'range' : (25,-5,5),   
                        'xaxis' : '#eta 2nd jet',
                        'fold'  : 3                         
                        }
