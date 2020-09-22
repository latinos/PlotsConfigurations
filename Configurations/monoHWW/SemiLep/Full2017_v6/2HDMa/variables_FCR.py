variables['Events']  = {   'name': '1',     
                           'range' : (1,0,1),   
                           'xaxis' : '1',
                           'fold'  : 3
                        }

variables['Puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (100,0,300),
                        'xaxis' : 'p_{T} puppiMET [GeV]',
                        'fold'  : 3
                        }
#variables['projMET']  = {
#                        'name': 'projMET',
#                        'range' : (100,0,300),
#                        'xaxis' : 'p_{T} projected puppiMET [GeV]',
#                        'fold'  : 3
#                        }
#variables['pfmet']  = {
#                        'name': 'MET_pt',
#                        'range' : (100,0,300),
#                        'xaxis' : 'p_{T} pfMET [GeV]',
#                        'fold'  : 3
#                        }

variables['l1_pt']  = {   'name': 'Lepton_pt[0]',     
                        'range' : (100,20,100),   
                        'xaxis' : 'p_{T}^{l_{1}}',
                        'fold'  : 3
                        }

variables['j1_pt']  = {   
                        'name': 'Alt$(CleanJet_pt[0], -1.)',     
                        'range' : (100,0,200),   
                        'xaxis' : 'p_{T}^{j_{1}}',
                        'fold'  : 3
                        }
variables['j2_pt']  = {   
                        'name': 'Alt$(CleanJet_pt[1], -1.)',     
                        'range' : (100,0,150),   
                        'xaxis' : 'p_{T}^{j_{2}}',
                        'fold'  : 3
                        }
variables['njet']  = {   'name': 'Sum$(CleanJet_pt > 30)',     
                        'range' : (10,0,10),   
                        'xaxis' : 'nCleanJet (p_{T} > 30)',
                        'fold'  : 3
                        }


variables['l1_eta']  = {  'name': 'Lepton_eta[0]',     
                        'range' : (25,-3,3),   
                        'xaxis' : '#eta^{l_{1}}',
                        'fold'  : 3                         
                        }
variables['j1_eta']  = { 
                        'name': 'Alt$(CleanJet_eta[0], -1.)',     
                        'range' : (25,-5,5),   
                        'xaxis' : '#eta^{j_{1}}',
                        'fold'  : 3                         
                        }
variables['j2_eta']  = {
                        'name': 'Alt$(CleanJet_eta[1], -1.)',     
                        'range' : (25,-5,5),   
                        'xaxis' : '#eta^{j_{2}}',
                        'fold'  : 3                         
                        }

variables['mt_lmet']  = {
                       'name': 'mtw1',
                       'range' : (100,0,250),
                       'xaxis' : 'm_{T}^{lmet} [GeV]',
                       'fold'  : 3
                       }
variables['pt_lmet']  = {
                        'name': 'ptLmet',
                        'range' : (100,0,300),
                        'xaxis' : 'p_{T}^{lmet} [GeV]',
                        'fold'  : 3
                        }

