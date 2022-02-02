
variables['l1_pt']  = { 
    'name': 'Lepton_pt[0]',     
    'range' : (15,20,100),   
    'xaxis' : 'p_{T}^{l_{1}}',
    'fold'  : 3
}

variables['j1_pt']  = {
    'name': 'MHlnjj_pt_j1',     
    'range' : (15,0,200),   
    'xaxis' : 'p_{T}^{j_{1}}',
    'fold'  : 3
}

variables['j2_pt']  = { 
    'name': 'MHlnjj_pt_j2',     
    'range' : (15,0,150),   
    'xaxis' : 'p_{T}^{j_{2}}',
    'fold'  : 3
}

variables['l1_eta']  = {
    'name': 'Lepton_eta[0]',     
    'range' : (15,-3,3),   
    'xaxis' : '#eta^{l_{1}}',
    'fold'  : 3                         
}

variables['j1_eta']  = {
    'name': 'MHlnjj_eta_j1',     
    'range' : (15,-3,3),   
    'xaxis' : '#eta^{j_{1}}',
    'fold'  : 3                         
}

variables['j2_eta']  = {
    'name': 'MHlnjj_eta_j2',     
    'range' : (15,-3,3),   
    'xaxis' : '#eta^{j_{2}}',
    'fold'  : 3                         
}

variables['BDT_UniBin20']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : (20,-1.,1.),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
}

variables['BDT_CFineEnd10']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., 0., 0.4, 0.6, 0.8, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
}

variables['BDT_CFineEnd20']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., 0., 0.4, 0.6, 0.7, 0.8, 0.9, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
}
