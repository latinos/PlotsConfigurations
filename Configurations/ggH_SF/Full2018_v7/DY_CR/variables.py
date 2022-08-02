# variables

#variables = {}
    
variables['dymva_alt_dnn_0j']  = { 
    'name'  : 'dymva_alt_dnn_0j',
    'range' : ([0,0.1,0.3,0.5,0.7,0.8,0.85,0.9,0.925,0.95,0.975,1.001],),
    'xaxis' : 'DYMVA_{0j}',
    'fold'  : 3
}

variables['dymva_alt_dnn_1j']  = { 
    'name'  : 'dymva_alt_dnn_1j',
    'range' : ([0,0.1,0.3,0.5,0.7,0.8,0.85,0.9,0.925,0.95,0.975,1.001],),
    'xaxis' : 'DYMVA_{1j}',
    'fold'  : 3
}

variables['dymva_alt_dnn_2j']  = { 
    'name'  : 'dymva_alt_dnn_2j',
    'range' : ([0,0.1,0.3,0.5,0.7,0.8,0.85,0.9,0.925,0.95,0.975,1.001],),
    'xaxis' : 'DYMVA_{2j}',
    'fold'  : 3
}

variables['dymva_alt_dnn_VBF']  = { 
    'name'  : 'dymva_alt_dnn_VBF',
    'range' : ([0,0.1,0.3,0.5,0.7,0.8,0.85,0.9,0.925,0.95,0.975,1.001],),
    'xaxis' : 'DYMVA_{VBF}',
    'fold'  : 3
}

variables['dymva_alt_dnn_VH']  = { 
    'name'  : 'dymva_alt_dnn_VH',
    'range' : ([0,0.1,0.3,0.5,0.7,0.8,0.85,0.9,0.925,0.95,0.975,1.001],),
    'xaxis' : 'DYMVA_{VH}',
    'fold'  : 3
}

# DNNs Input variables

# METs

variables['puppimet'] = { 
    'name'  : 'PuppiMET_pt',
    'range' : (50, 0., 150.),
    'xaxis' : 'puppi MET [GeV]',
    'fold'  : 0
}

variables['projpfmet']  = {  
    'name': 'projpfmet',
    'range' : (20,0,200),
    'xaxis' : 'proj pf met [GeV]',
    'fold' : 3
}

variables['trkMet']  = {  
    'name': 'TkMET_pt',
    'range' : (20,0,200),
    'xaxis' : 'trk met [GeV]',
    'fold' : 3
}

variables['projtkmet']  = {  
    'name': 'projtkmet',
    'range' : (20,0,200),
    'xaxis' : 'proj trk met [GeV]',
    'fold' : 3
}

variables['mpmet']  = { 
    'name': 'mpmet',
    'range' : (20,0,200),
    'xaxis' : 'min proj met [GeV]',
    'fold' : 3
}

# Angles

variables['dphillmet']  = {  
    'name': 'dphillmet',
    'range' : (32,0,3.2),
    'xaxis' : '#Delta #Phi (#ell #ell, met)',
    'fold' : 0
}

variables['dphilmet1']  = {  
    'name': 'dphilmet1',
    'range' : (32,0,3.2),
    'xaxis' : '#Delta #Phi (#ell 1, met)',
    'fold' : 0
}

variables['dphilmet2']  = {  
    'name': 'dphilmet2',
    'range' : (32,0,3.2),
    'xaxis' : '#Delta #Phi (#ell 2, met)',
    'fold' : 0
}

variables['dphijet1met']  = {  
    'name': 'dphijet1met',
    'range' : (32,0,3.2),
    'xaxis' : '#Delta #Phi (jet 1, met)',
    'fold' : 0
}

# Other kinematic variables

variables['ptll']  = { 
    'name'  : 'ptll',
    'range' : (40, 0, 400),
    'xaxis' : 'p_{T}^{ll} [GeV]',
    'fold'  : 0
}

variables['pTWW']  = { 
    'name'  : 'pTWW',
    'range' : (40, 0, 400),
    'xaxis' : 'p_{T}^{WW} [GeV]',
    'fold'  : 0
}

variables['jetpt1']  = {
    'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_pt[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
    'range' : (20,0,200),
    'xaxis' : 'p_{T} 1st jet',
    'fold' : 2
}

variables['jetpt2']  = {
    'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_pt[1], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
    'range' : (20,0,200),
    'xaxis' : 'p_{T} 2nd jet',
    'fold' : 2
}

variables['mth']  = {
    'name': 'mth',
    'range' : (40,0,400),
    'xaxis' : 'm_{T}^{H} [GeV]',
    'fold' : 3
}

variables['mtw1']  = {
    'name': 'mtw1',
    'range' : (40,0,200),
    'xaxis' : 'm_{T}^{W1} [GeV]',
    'fold' : 3
}

variables['mtw2']  = {
    'name': 'mtw2',
    'range' : (40,0,200),
    'xaxis' : 'm_{T}^{W2} [GeV]',
    'fold' : 3
}

variables['uperp']  = {
    'name': 'uperp',
    'range' : (40,-200,200),
    'xaxis' : 'uperp [GeV]',
    'fold' : 3
}

variables['upara']  = {
    'name': 'upara',
    'range' : (40,-200,200),
    'xaxis' : 'upara [GeV]',
    'fold' : 3
}

variables['PV_npvsGood']  = { 
    'name': 'PV_npvsGood',      
    'range' : (40,0,40),  
    'xaxis' : 'nvtx', 
    'fold' : 3
}

