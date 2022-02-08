
variables['METunc_impact']  = { 
    'name': 'abs(PuppiMET_UNC[0] - PuppiMET_pt)/PuppiMET_pt',     
    'range' : (25,0,0.3),   
    'xaxis' : 'MET unclustered impact',
    'fold'  : 3
}

variables['JER_impact']  = { 
    'name': 'abs(PuppiMET_JER[0] - PuppiMET_pt)/PuppiMET_pt',     
    'range' : (25,0,0.3),   
    'xaxis' : 'MET JER impact',
    'fold'  : 3
}

variables['JES_impact']  = { 
    'name': 'abs(PuppiMET_ptJESUp - PuppiMET_pt)/PuppiMET_pt',     
    'range' : (25,0,0.3),   
    'xaxis' : 'MET JES impact',
    'fold'  : 3
}

variables['Puppimet']  = {
    'name': 'PuppiMET_pt',
    'range' : (25,0,300),
    'xaxis' : 'p_{T} puppiMET [GeV]',
    'fold'  : 3
}

variables['Puppimet_JER']  = {
    'name': 'PuppiMET_JER[0]',
    'range' : (25,0,300),
    'xaxis' : 'p_{T} puppiMET JER [GeV]',
    'fold'  : 3
}

variables['l1_pt']  = { 
    'name': 'Lepton_pt[0]',     
    'range' : (25,20,200),   
    'xaxis' : 'p_{T}^{l_{1}}',
    'fold'  : 3
}

variables['j1_pt']  = {
    'name': 'MHlnjj_pt_j1',     
    'range' : (25,0,350),   
    'xaxis' : 'p_{T}^{j_{1}}',
    'fold'  : 3
}

variables['j2_pt']  = { 
    'name': 'MHlnjj_pt_j2',     
    'range' : (25,0,150),   
    'xaxis' : 'p_{T}^{j_{2}}',
    'fold'  : 3
}

variables['j1_eta']  = {
    'name': 'MHlnjj_eta_j1',     
    'range' : (25,-3,3),   
    'xaxis' : '#eta^{j_{1}}',
    'fold'  : 3                         
}

variables['j2_eta']  = {
    'name': 'MHlnjj_eta_j2',     
    'range' : (25,-3,3),   
    'xaxis' : '#eta^{j_{2}}',
    'fold'  : 3                         
}

variables['l1_eta']  = {
    'name': 'Lepton_eta[0]',     
    'range' : (25,-3,3),   
    'xaxis' : '#eta^{l_{1}}',
    'fold'  : 3                         
}

variables['njet']  = {
    'name': 'Sum$(CleanJet_pt > 30)',     
    'range' : (10,0,10),   
    'xaxis' : 'nCleanJet (p_{T} > 30)',
    'fold'  : 3
}
