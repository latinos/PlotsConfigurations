# variables

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

#variables = {}
variables['nvtx']  = {   'name': 'PV_npvsGood',      
                        'range' : (100,0,100),  
                        'xaxis' : 'nvtx', 
                         'fold' : 3
                      }

variables['mllpeak'] = {   'name': 'mll',            #   variable name
                           'range' : (20,80,100),    #   variable range
                           'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                           'fold' : 0
                        }


variables['pt1']  = {   'name': 'Lepton_pt[0]',     
                        'range' : (20,0,100),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3                         
                        }

variables['pt2']  = {   'name': 'Lepton_pt[1]',     
                        'range' : (20,0,100),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 3                         
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

variables['jetpt']  = {
                        'name': 'CleanJet_pt[0]',     
                        'range' : (50,0,500),   
                        'xaxis' : 'p_{T} 1st jet',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }


variables['jeteta']  = {  'name': 'CleanJet_eta[0]',
                        'range' : (50,-5.0,5.0),
                        'xaxis' : '#eta 1st jet',
                        'fold'  : 2
                        }
