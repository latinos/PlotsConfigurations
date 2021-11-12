variables['Events']  = {
    'name': '1',     
    'range' : (1,0,1),   
    'xaxis' : '1',
    'fold'  : 3
}

variables['JER_impact']  = { 
    'name': 'abs(PuppiMET_JER[0] - PuppiMET_pt)/PuppiMET_pt',     
    'range' : (25,0,0.3),   
    'xaxis' : 'MET JER impact',
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
