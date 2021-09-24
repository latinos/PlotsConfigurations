variables['Puppimet']  = {
    'name': 'PuppiMET_pt',
    'range' : (15,0,150),
    'xaxis' : 'p_{T} puppiMET [GeV]',
    'fold'  : 3
}

variables['Puppimet_HEM']  = {
    'name': 'PuppiMET_HEM[0]',
    'range' : (15,0,150),
    'xaxis' : 'p_{T} puppiMET HEM [GeV]',
    'fold'  : 3
}

variables['HEM_impact']  = { 
    'name': 'abs(PuppiMET_HEM[0] - PuppiMET_pt)/PuppiMET_pt',     
    'range' : (25,0,0.3),   
    'xaxis' : 'MET HEM impact',
    'fold'  : 3
}

variables['JES_impact']  = { 
    'name': 'abs(PuppiMET_ptJESUp - PuppiMET_pt)/PuppiMET_pt',     
    'range' : (25,0,0.3),   
    'xaxis' : 'MET JES impact',
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
    'range' : (20,0,200),   
    'xaxis' : 'p_{T}^{j_{1}}',
    'fold'  : 3
}
variables['j1_pt_HEM']  = {
    'name': 'WcandJet_HEM[0]',     
    'range' : (20,0,200),   
    'xaxis' : 'p_{T}^{j_{1}}',
    'fold'  : 3
}
variables['HEM_impact_j1']  = {
    'name': 'abs(WcandJet_HEM[0] - MHlnjj_pt_j1)/MHlnjj_pt_j1',     
    'range' : (25,0,0.5),   
    'xaxis' : 'p_{T}^{j_{1}} HEM impact',
    'fold'  : 3
}

variables['j2_pt']  = { 
    'name': 'WcandJet_HEM[1]',     
    'range' : (25,0,150),   
    'xaxis' : 'p_{T}^{j_{2}}',
    'fold'  : 3
}

