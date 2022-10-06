# variables

#variables = {}

variables['mll'] = {  
    'name': 'mll',
    'range' : (40,0,300),
    'xaxis' : 'm_{ll} [GeV]',
    'fold' : 0
}

variables['ptll']  = { 
    'name': 'ptll',     
    'range' : (20, 0,200),   
    'xaxis' : 'p_{T}^{ll} [GeV]',
    'fold' : 0
}

variables['ptll_more']  = { 
    'name': 'ptll',
    'range' : (50, 0,200),
    'xaxis' : 'p_{T}^{ll} [GeV]',
    'fold' : 0
}


variables['pt1']  = { 
    'name': 'Lepton_pt[0]',     
    'range' : (20,0,200),   
    'xaxis' : 'p_{T} 1st lep',
    'fold'  : 3                         
}

variables['pt1_v7']  = { 
    'name': 'Lepton_pt[0]',     
    'range' : (20,20,100),   
    'xaxis' : 'p_{T} 1st lep',
    'fold'  : 0
}

variables['pt2']  = { 
    'name': 'Lepton_pt[1]',     
    'range' : (20,0,100),   
    'xaxis' : 'p_{T} 2nd lep',
    'fold'  : 3                         
}

variables['eta1']  = {  
    'name': 'Lepton_eta[0]',     
    'range' : (20,-3,3),   
    'xaxis' : '#eta 1st lep',
    'fold'  : 3                         
}

variables['eta2']  = {
    'name': 'Lepton_eta[1]',     
    'range' : (20,-3,3),   
    'xaxis' : '#eta 2nd lep',
    'fold'  : 3                         
}

                        
variables['phi1']  = {
    'name': 'Lepton_phi[0]',
    'range' : (20,-3.2,3.2),
    'xaxis' : '#phi 1st lep',
    'fold'  : 3
}

variables['phi2']  = {  
    'name': 'Lepton_phi[1]',
    'range' : (20,-3.2,3.2),
    'xaxis' : '#phi 2nd lep',
    'fold'  : 3
}

variables['puppimet']  = {
    'name': 'PuppiMET_pt',
    'range' : (20,0,100),
    'xaxis' : 'puppimet [GeV]',
    'fold'  : 3
}

variables['njet']  = {
    'name': 'Sum$(CleanJet_pt>30)',     
    'range' : (5,0,5),   
    'xaxis' : 'Number of jets',
    'fold' : 2
}

variables['jetpt1']  = {
    'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_pt[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',     
    'range' : (20,0,200),   
    'xaxis' : 'p_{T} 1st jet',
    'fold' : 0
}

variables['jetpt2']  = {
    'name': '(Sum$(CleanJet_pt>30)>1)*(Alt$(CleanJet_pt[1], 0)) - (Sum$(CleanJet_pt>30)<=1)*99',     
    'range' : (20,0,200),   
    'xaxis' : 'p_{T} 2nd jet',
    'fold' : 0
}

variables['jeteta1']  = {
    'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_eta[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
    'range' : (20,-5.0,5.0),
    'xaxis' : '#eta 1st jet',
    'fold'  : 0
}

variables['jeteta2']  = {
    'name': '(Sum$(CleanJet_pt>30)>1)*(Alt$(CleanJet_eta[1], 0)) - (Sum$(CleanJet_pt>30)<=1)*99',
    'range' : (20,-5.0,5.0),
    'xaxis' : '#eta 2nd jet',
    'fold'  : 0
}

variables['trkMet']  = { 
    'name': 'TkMET_pt',
    'range' : (20,0,200),
    'xaxis' : 'trk met [GeV]',
    'fold' : 3
}

variables['mpmet']  = {
    'name': 'mpmet',
    'range' : (20,0,200),
    'xaxis' : 'min proj met [GeV]',
    'fold' : 3
}
