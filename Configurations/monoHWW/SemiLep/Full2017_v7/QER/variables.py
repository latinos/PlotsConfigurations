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
                        'range' : (25,20,200),   
                        'xaxis' : 'p_{T}^{l_{1}}',
                        'fold'  : 3
                        }

variables['j1_pt']  = {   'name': 'MHlnjj_pt_j1',     
                        'range' : (25,0,350),   
                        'xaxis' : 'p_{T}^{j_{1}}',
                        'fold'  : 3
                        }
variables['l1_eta']  = {  'name': 'Lepton_eta[0]',     
                        'range' : (25,-3,3),   
                        'xaxis' : '#eta^{l_{1}}',
                        'fold'  : 3                         
                        }
variables['j1_eta']  = {  'name': 'MHlnjj_eta_j1',     
                        'range' : (25,-5,5),   
                        'xaxis' : '#eta^{j_{1}}',
                        'fold'  : 3                         
                        }

