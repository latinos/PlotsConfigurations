# variables

# variables = {}

variables['events'] = {
    'name'  : '1',      
    'range' : (1,0,2),  
    'xaxis' : 'events', 
    'fold'  : 3
}

variables['pt1']  = { 
    'name'  : 'Lepton_pt[0]',     
    'range' : (20,0,100),
    'xaxis' : 'p_{T} 1st lep',
    'fold'  : 3                         
}

variables['pt2']  = {
    'name'  : 'Lepton_pt[1]',     
    'range' : (20,0,100),   
    'xaxis' : 'p_{T} 2nd lep',
    'fold'  : 3                         
}

variables['eta1']  = {
    'name'  : 'Lepton_eta[0]',     
    'range' : (20,-3,3),   
    'xaxis' : '#eta 1st lep',
    'fold'  : 3                         
}

variables['eta2']  = {
    'name'  : 'Lepton_eta[1]',     
    'range' : (20,-3,3),   
    'xaxis' : '#eta 2nd lep',
    'fold'  : 3                         
}

variables['mll'] = {
    'name': 'mll',
    'range' : (30,0,150),
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
    'range' : (50, 0,100),
    'xaxis' : 'p_{T}^{ll} [GeV]',
    'fold' : 0
}

variables['puppimet']  = {
    'name': 'PuppiMET_pt',
    'range' : (40,0,400),
    'xaxis' : 'PUPPI MET [GeV]',
    'fold'  : 3
}

variables['DeepCSV_jet1'] = {
    'name'  : 'Alt$(Jet_btagDeepB[CleanJet_jetIdx[0]],-2)',
    'range' : (50,0.0,1.0),
    'xaxis' : 'Leading jet DeepCSV',
    'fold'  : 3
}

variables['DeepCSV_jet2'] = {
    'name'  : 'Alt$(Jet_btagDeepB[CleanJet_jetIdx[1]],-2)',
    'range' : (50,0.0,1.0),
    'xaxis' : 'Sub-leading jet DeepCSV',
    'fold'  : 3
}

variables['jetpt1']  = {
    'name'  : 'CleanJet_pt[0]*(CleanJet_pt[0]>30)',     
    'range' : (40,0,200),   
    'xaxis' : 'p_{T} 1st jet',
    'fold'  : 2   
}

variables['jetpt2'] = {
    'name'  : 'CleanJet_pt[1]*(CleanJet_pt[1]>30)',     
    'range' : (40,0,200),   
    'xaxis' : 'p_{T} 2nd jet',
    'fold'  : 0
}

variables['mtw1'] = {
    'name'  : 'mtw1',
    'range' : (40,0,200),
    'xaxis' : 'm_{T}^{W_{1}} [GeV]',
    'fold'  : 3
}

variables['mtw2'] = {
    'name'  : 'mtw2',
    'range' : (40,0,200),
    'xaxis' : 'm_{T}^{W_{2}} [GeV]',
    'fold'  : 3
}
