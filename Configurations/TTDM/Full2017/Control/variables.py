# variables

#variables = {}
    
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }
                        
variables['nvtx']  = {   'name': 'PV_npvsGood',      
                        'range' : (60,0,60),  
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

variables['ptll']  = {   'name': 'ptll',     
                        'range' : (40, 0,200),   
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 0
                        }

variables['pt1']  = {   'name': 'Lepton_pt[0]',     
                        'range' : (40,0,300),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3                         
                        }

variables['pt2']  = {   'name': 'Lepton_pt[1]',     
                        'range' : (40,0,200),   
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
                        'range' : (40,0,200),   
                        'xaxis' : 'pfmet [GeV]',
                        'fold'  : 3                         
                        }

variables['phimet']  = { 
                        'name': 'MET_phi',     
                        'range' : (100,-10,10),   
                        'xaxis' : 'phimet [GeV]',
                        'fold'  : 3                         
                        }

variables['puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (40,0,200),
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
                        'range' : (40,0,200),   
                        'xaxis' : 'p_{T} 1st jet',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['jetpt1_0j']  = {
                        'name': 'CleanJet_pt[0]*(CleanJet_pt[0]<30)',     
                        'range' : (40,0,30),   
                        'xaxis' : 'p_{T} 1st jet (p_{T} < 30 GeV) ',
                        'fold' : 1   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['jeteta1']  = {  'name': 'CleanJet_eta[0]*(CleanJet_pt[0]>30)',
                           'range' : (80,-5.0,5.0),
                           'xaxis' : '#eta 1st jet',
                           'fold'  : 0
                           }

variables['jeteta1_0j']  = {  'name': 'CleanJet_eta[0]*(CleanJet_pt[0]<30)',
                              'range' : (40,-5.0,5.0),
                              'xaxis' : '#eta 1st jet (p_{T} < 30 GeV)',
                              'fold'  : 0
                              }

variables['mtw1']  = {  'name': 'mtw1',
                        'range' : (40,0,200),
                        'xaxis' : 'm_{T}^{W_{1}} [GeV]',
                         'fold' : 3
                        }

variables['mtw2']  = {  'name': 'mtw2',
                        'range' : (40,0,200),
                        'xaxis' : 'm_{T}^{W_{2}} [GeV]',
                         'fold' : 3
                        }

variables['TkMET']  = { 
                        'name': 'TkMET_pt',     
                        'range' : (40,0,150),   
                        'xaxis' : 'TkMET [GeV]',
                        'fold'  : 3                         
}
