# variables
#variables = {}

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }
                        
variables['nvtx']  = {   'name': 'PV_npvsGood',      
                        'range' : (100,0,100),  
                        'xaxis' : 'nvtx', 
                         'fold' : 3
                      }

variables['mll'] = {   'name': 'mll',            #   variable name
                           'range' : (40,0,250),    #   variable range
                           'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                           'fold' : 0
                        }

# variables['ptll']  = {   'name': 'ptll',     
#                         'range' : (20, 0,200),   
#                         'xaxis' : 'p_{T}^{ll} [GeV]',
#                         'fold' : 0
#                         }

# variables['mtw1']  = {   'name': 'mtw1',     
#                         'range' : (25,0,300),   
#                         'xaxis' : 'Mt W1',
#                         'fold'  : 3                         
#                         }

# variables['mtw2']  = {   'name': 'mtw2',     
#                         'range' : (25,0,300),   
#                         'xaxis' : 'Mt W2',
#                         'fold'  : 3                         
#                         }

# variables['pt1']  = {   'name': 'Lepton_pt[0]',     
#                         'range' :(40,0,500),   
#                         'xaxis' : 'p_{T} 1st lep',
#                         'fold'  : 3                         
#                         }

# variables['pt2']  = {   'name': 'Lepton_pt[1]',     
#                         'range' : (40,0,500),   
#                         'xaxis' : 'p_{T} 2nd lep',
#                         'fold'  : 3                         
#                         }


variables['pt+']  = {   'name': '(Lepton_pdgId[0]>0)*(Lepton_pt[0]) + (Lepton_pdgId[1]>0)*(Lepton_pt[1])',     
                        'range' :(40,0,500),   
                        'xaxis' : 'p_{T} lep+',
                        'fold'  : 3                         
                        }

variables['pt-']  = {   'name': '(Lepton_pdgId[0]<0)*(Lepton_pt[0]) + (Lepton_pdgId[1]<0)*(Lepton_pt[1])',     
                        'range' : (40,0,500),   
                        'xaxis' : 'p_{T} lep-',
                        'fold'  : 3                         
                        }

variables['eta+mb']  = {   'name': '(Lepton_pdgId[0]>0)*(Lepton_eta[0]) + (Lepton_pdgId[1]>0)*(Lepton_eta[1])',     
                        'range' :(60,-2.5,2.5),   
                        'xaxis' : '#eta lep+',
                        'fold'  : 3                         
                        }

variables['eta-mb']  = {   'name': '(Lepton_pdgId[0]<0)*(Lepton_eta[0]) + (Lepton_pdgId[1]<0)*(Lepton_eta[1])',     
                        'range' : (60,-2.5,2.5),   
                        'xaxis' : '#eta lep-',
                        'fold'  : 3                         
                        }


variables['eta+']  = {   'name': '(Lepton_pdgId[0]>0)*(Lepton_eta[0]) + (Lepton_pdgId[1]>0)*(Lepton_eta[1])',     
                        'range' :(40,-2.5,2.5),   
                        'xaxis' : '#eta lep+',
                        'fold'  : 3                         
                        }

variables['eta-']  = {   'name': '(Lepton_pdgId[0]<0)*(Lepton_eta[0]) + (Lepton_pdgId[1]<0)*(Lepton_eta[1])',     
                        'range' : (40,-2.5,2.5),   
                        'xaxis' : '#eta lep-',
                        'fold'  : 3                         
                        }

variables['phi+']  = {   'name': '(Lepton_pdgId[0]>0)*(Lepton_phi[0]) + (Lepton_pdgId[1]>0)*(Lepton_phi[1])',     
                        'range' :(20,-3.2,3.2),   
                        'xaxis' : '#phi lep+',
                        'fold'  : 3                         
                        }

variables['phi-']  = {   'name': '(Lepton_pdgId[0]<0)*(Lepton_phi[0]) + (Lepton_pdgId[1]<0)*(Lepton_phi[1])',     
                        'range' : (20,-3.2,3.2),   
                        'xaxis' : '#phi lep-',
                        'fold'  : 3                         
                        }


variables['ptll']  = {   'name': 'ptll',     
                        'range' : (40,0,500),   
                        'xaxis' : 'p_{T}ll',
                        'fold'  : 3                         
                        }


# variables['eta1']  = {  'name': 'Lepton_eta[0]',     
#                         'range' : (30,-3,3),   
#                         'xaxis' : '#eta 1st lep',
#                         'fold'  : 3                         
#                         }

# variables['eta2']  = {  'name': 'Lepton_eta[1]',     
#                         'range' : (30,-3,3),   
#                         'xaxis' : '#eta 2nd lep',
#                         'fold'  : 3                         
#                         }

                        
# variables['phi1']  = {  'name': 'Lepton_phi[0]',
#                         'range' : (20,-3.2,3.2),
#                         'xaxis' : '#phi 1st lep',
#                         'fold'  : 3
#                         }

# variables['phi2']  = {  'name': 'Lepton_phi[1]',
#                         'range' : (20,-3.2,3.2),
#                         'xaxis' : '#phi 2nd lep',
#                         'fold'  : 3
#                         }

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
                        'range' : (30,0,500),   
                        'xaxis' : 'p_{T} 1st jet',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['jeteta']  = {  'name': 'CleanJet_eta[0]',
                        'range' : (40,-5.0,5.0),
                        'xaxis' : '#eta 1st jet',
                        'fold'  : 2
                        }

# variables['jetpt1']  = {
#                         'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_pt[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',     
#                         'range' : (20,0,200),   
#                         'xaxis' : 'p_{T} 1st jet',
#                         'fold' : 0   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                         }

# variables['jetpt2']  = {
#                         'name': '(Sum$(CleanJet_pt>30)>1)*(Alt$(CleanJet_pt[1], 0)) - (Sum$(CleanJet_pt>30)<=1)*99',     
#                         'range' : (20,0,200),   
#                         'xaxis' : 'p_{T} 2nd jet',
#                         'fold' : 0   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                         }

# variables['jeteta1']  = {  'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_eta[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
#                         'range' : (20,-5.0,5.0),
#                         'xaxis' : '#eta 1st jet',
#                         'fold'  : 0
                        # }

# variables['jeteta2']  = {  'name': '(Sum$(CleanJet_pt>30)>1)*(Alt$(CleanJet_eta[1], 0)) - (Sum$(CleanJet_pt>30)<=1)*99',
#                         'range' : (20,-5.0,5.0),
#                         'xaxis' : '#eta 2nd jet',
#                         'fold'  : 0
#                         }

# variables['trkMet']  = {   'name': 'TkMET_pt',
#                         'range' : (20,0,200),
#                         'xaxis' : 'trk met [GeV]',
#                          'fold' : 3
#                         }

# variables['mpmet']  = { 'name': 'mpmet',
#                         'range' : (20,0,200),
#                         'xaxis' : 'min proj met [GeV]',
#                         'fold' : 3
#                         }
