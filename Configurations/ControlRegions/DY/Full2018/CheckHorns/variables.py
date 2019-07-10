# variables

#variables = {}


variables['njet']  = {
                        'name': 'Sum$(CleanJet_pt>15)',     
                        'range' : (5,0,5),   
                        'xaxis' : 'Number of jets',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['jetpt1']  = {
                        'name': 'CleanJet_pt[0]*(CleanJet_pt[0]>0)',     
                        'range' : (40,15,50),   
                        'xaxis' : 'p_{T} 1st jet',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }


variables['jeteta1']  = {  'name': 'CleanJet_eta[0]',
                       'range' : (250,-5.0,5.0),
                       'xaxis' : '#eta 1st jet',
                       'fold'  : 0
                       }

variables['jeteta1_lessbins']  = {  'name': 'CleanJet_eta[0]',
                       'range' : (80,-5.0,5.0),
                       'xaxis' : '#eta 1st jet',
                       'fold'  : 0
                       }

variables['jetpt2']  = {
                        'name': 'CleanJet_pt[1]*(CleanJet_pt[1]>0)',     
                        'range' : (40,15,50),   
                        'xaxis' : 'p_{T} 2nd jet',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }


variables['jeteta2']  = {  'name': 'CleanJet_eta[1]',
                       'range' : (250,-5.0,5.0),
                       'xaxis' : '#eta 2nd jet',
                       'fold'  : 0
                       }

variables['jeteta2_lessbins']  = {  'name': 'CleanJet_eta[1]',
                       'range' : (80,-5.0,5.0),
                       'xaxis' : '#eta 2nd jet',
                       'fold'  : 0
                       }


variables['Jet_neEMF_jet1']  = { 
                        'name': 'Jet_neEmEF[CleanJet_jetIdx[0]]',
                        'range' : (70,0,1),
                        'xaxis' : 'Neutral Em fraction',
                        'fold' : 3
                        }

variables['Jet_neHF_jet1']  = { 
                        'name': 'Jet_neHEF[CleanJet_jetIdx[0]]',
                        'range' : (60,0,1),
                        'xaxis' : 'Neutral Had fraction',
                        'fold' : 3
                        }

variables['Jet_chEMF_jet1']  = { 
                        'name': 'Jet_chEmEF[CleanJet_jetIdx[0]]',
                        'range' : (60,0,1),
                        'xaxis' : 'Charged Em fraction',
                        'fold' : 3
                        }

variables['Jet_chHF_jet1']  = { 
                        'name': 'Jet_chHEF[CleanJet_jetIdx[0]]',
                        'range' : (60,0,1),
                        'xaxis' : 'Charged Had fraction',
                        'fold' : 3
                        }

variables['Jet_nConst']  = {
                        'name': 'Jet_nConstituents',
                        'range' : (50,0,50),
                        'xaxis' : 'jet #const',
                        'fold' : 3
                        }


variables['Jet_mass']  = {
                        'name': 'Jet_mass[CleanJet_jetIdx[0]]',
                        'range' : (20,0,40),
                        'xaxis' : 'Jet mass',
                        'fold' : 3
                        }

variables['Jet_qgl']  = {
                        'name': 'Jet_qgl[CleanJet_jetIdx[0]]',
                        'range' : (50,0,1),
                        'xaxis' : 'Q/g likelihood',
                        'fold' : 3
                        }

variables['Jet_puId']  = {
                        'name': 'Jet_puId[CleanJet_jetIdx[0]]',
                        'range' : (8,0,8),
                        'xaxis' : 'PU id',
                        'fold' : 3
                        }

variables['Jet_jetId']  = {
                        'name': 'Jet_jetId[CleanJet_jetIdx[0]]',
                        'range' : (8,0,8),
                        'xaxis' : 'Jet id',
                        'fold' : 3
                        }

variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (40, 0,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }

# variables['jetpt2']  = {
#                         'name': 'CleanJet_pt[1]*(Alt$(CleanJet_pt[1],0)>0)',     
#                         'range' : (20,0,100),   
#                         'xaxis' : 'p_{T} 2nd jet',
#                         'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                         }

variables['nvtx']  = {   'name': 'PV_npvsGood',      
                        'range' : (40,0,100),  
                        'xaxis' : 'nvtx', 
                         'fold' : 3
                      }

# variables['mllpeak'] = {   'name': 'mll',            #   variable name
#                            'range' : (20,80,100),    #   variable range
#                            'xaxis' : 'm_{ll} [GeV]',  #   x axis name
#                            'fold' : 0
#                         }

# variables['ptll']  = {   'name': 'ptll',     
#                         'range' : (20, 0,200),   
#                         'xaxis' : 'p_{T}^{ll} [GeV]',
#                         'fold' : 0
#                         }

# variables['pt1']  = {   'name': 'Lepton_pt[0]',     
#                         'range' : (20,0,100),   
#                         'xaxis' : 'p_{T} 1st lep',
#                         'fold'  : 3                         
#                         }

# variables['pt2']  = {   'name': 'Lepton_pt[1]',     
#                         'range' : (20,0,100),   
#                         'xaxis' : 'p_{T} 2nd lep',
#                         'fold'  : 3                         
#                         }

# variables['eta1']  = {  'name': 'Lepton_eta[0]',     
#                         'range' : (20,-3,3),   
#                         'xaxis' : '#eta 1st lep',
#                         'fold'  : 3                         
#                         }

# variables['eta2']  = {  'name': 'Lepton_eta[1]',     
#                         'range' : (20,-3,3),   
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

# variables['puppimet']  = {
#                         'name': 'PuppiMET_pt',
#                         'range' : (20,0,200),
#                         'xaxis' : 'puppimet [GeV]',
#                         'fold'  : 3
#                         }

# variables['jeteta2']  = {  'name': 'CleanJet_eta[1]',
#                        'range' : (20,-5.0,5.0),
#                        'xaxis' : '#eta 2nd jet',
#                        'fold'  : 0
#                        }

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
