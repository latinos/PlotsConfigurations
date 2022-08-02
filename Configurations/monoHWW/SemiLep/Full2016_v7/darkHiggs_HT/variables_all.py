
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

variables['l1_eta']  = {
    'name': 'Lepton_eta[0]',     
    'range' : (25,-3,3),   
    'xaxis' : '#eta^{l_{1}}',
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

variables['bb_l1_pt']  = { 
    'name': 'Lepton_pt[0]',     
    'range' : (15,20,200),   
    'xaxis' : 'p_{T}^{l_{1}}',
    'fold'  : 3
}

variables['bb_j1_pt']  = {
    'name': 'MHlnjj_pt_j1',     
    'range' : (15,0,350),   
    'xaxis' : 'p_{T}^{j_{1}}',
    'fold'  : 3
}

variables['bb_j2_pt']  = { 
    'name': 'MHlnjj_pt_j2',     
    'range' : (15,0,150),   
    'xaxis' : 'p_{T}^{j_{2}}',
    'fold'  : 3
}

variables['bb_l1_eta']  = {
    'name': 'Lepton_eta[0]',     
    'range' : (15,-3,3),   
    'xaxis' : '#eta^{l_{1}}',
    'fold'  : 3                         
}

variables['bb_j1_eta']  = {
    'name': 'MHlnjj_eta_j1',     
    'range' : (15,-3,3),   
    'xaxis' : '#eta^{j_{1}}',
    'fold'  : 3                         
}

variables['bb_j2_eta']  = {
    'name': 'MHlnjj_eta_j2',     
    'range' : (15,-3,3),   
    'xaxis' : '#eta^{j_{2}}',
    'fold'  : 3                         
}

variables['Puppimet']  = {
    'name': 'PuppiMET_pt',
    'range' : (25,0,300),
    'xaxis' : 'p_{T} puppiMET [GeV]',
    'fold'  : 3
}

variables['pt_ljj']  = {
    'name': 'MHlnjj_pt_ljj',
    'range' : (25,0,300),
    'xaxis' : 'p_{T}^{ljj} [GeV]',
    'fold'  : 3
}

variables['pt_jj']  = {
    'name': 'MHlnjj_pt_jj',
    'range' : (25,0,300),
    'xaxis' : 'p_{T}^{jj} [GeV]',
    'fold'  : 3
}

variables['frac_PTljj_D_PTmet']  = {
    'name': 'MHlnjj_PTljj_D_PTmet',
    'range' : (25,0,3),
    'xaxis' : 'p_{T}^{ljj} / p_{T}^{met}',
    'fold'  : 3
}

variables['frac_PTljj_D_Mlmetjj']  = {
    'name': 'MHlnjj_PTljj_D_Mlmetjj',
    'range' : (25,0,1),
    'xaxis' : 'p_{T}^{ljj} / m_{lmetjj}',
    'fold'  : 3
}

variables['frac_MINPTlj_D_PTmet']  = {
    'name': 'MHlnjj_MINPTlj_D_PTmet',
    'range' : (30,0,0.8),
    'xaxis' : 'min(p_{T}^{l}, p_{T}^{j2}) / p_{T}^{met}',
    'fold'  : 3
}

variables['frac_MINPTlj_D_Mlmetjj']  = {
    'name': 'MHlnjj_MINPTlj_D_Mlmetjj',
    'range' : (30,0,0.2),
    'xaxis' : 'min(p_{T}^{l}, p_{T}^{j2}) / m_{lmetjj}',
    'fold'  : 3
}

variables['frac_MAXPTlj_D_PTmet']  = {
    'name': 'MHlnjj_MAXPTlj_D_PTmet',
    'range' : (30,0,2.),
    'xaxis' : 'max(p_{T}^{l}, p_{T}^{j1}) / p_{T}^{met}',
    'fold'  : 3
}

variables['frac_MAXPTlj_D_Mlmetjj']  = {
    'name': 'MHlnjj_MAXPTlj_D_Mlmetjj',
    'range' : (30,0,0.4),
    'xaxis' : 'max(p_{T}^{l}, p_{T}^{j1}) / m_{lmetjj}',
    'fold'  : 3
}

variables['mt_lmet']  = {
    #'name': 'MHlnjj_mt_lmet',
    'name': 'mtw1',
    'range' : (25,0,200),
    #'range' : ([50,75,100,125,181,300],),
    'xaxis' : 'm_{T}^{lmet} [GeV]',
    'fold'  : 3
}

variables['frac_MTljj_D_PTmet']  = {
    'name': 'MHlnjj_MTljj_D_PTmet',
    'range' : (25,0,3),
    'xaxis' : 'm_{T}^{ljj} / p_{T}^{met}',
    'fold'  : 3
}

variables['frac_MTljj_D_Mlmetjj']  = {
    'name': 'MHlnjj_MTljj_D_Mlmetjj',
    'range' : (25,0,1),
    'xaxis' : 'm_{T}^{ljj} / m_{lmetjj}',
    'fold'  : 3
}

variables['dphi_ljj_met']  = {
    'name': 'MHlnjj_dphi_ljjVmet',
    'range' : (25,1.5,3.14),
    'xaxis' : '#Delta#phi(ljj,met)',
    'fold'  : 3,
}

variables['deta_ljj_met']  = {
    'name': 'MHlnjj_deta_ljjVmet',
    'range' : (25,0,5),   
    'xaxis' : '#Delta#eta(ljj,met)',
    'fold'  : 3,
}

variables['dphi_l_jj']  = {
    'name': 'MHlnjj_dphi_jjVl',
    'range' : (25,0,2),
    'xaxis' : '#Delta#phi(l,jj)',
    'fold'  : 3
}

variables['deta_l_jj']  = {
    'name': 'MHlnjj_deta_jjVl',
    'range' : (25,0,4),   
    'xaxis' : '#Delta#eta(l,jj)',
    'fold'  : 3
}

variables['dphi_l_met']  = {
    'name': 'MHlnjj_dphi_lVmet',
    'range' : (25,0,3.14),
    'xaxis' : '#Delta#phi(l,met)',
    'fold'  : 3
}

variables['deta_l_met']  = {
    'name': 'MHlnjj_deta_lVmet',
    'range' : (25,0,3),   
    'xaxis' : '#Delta#eta(l,met)',
    'fold'  : 3
}

variables['dr_j_j']  = {
    'name': 'MHlnjj_dr_jVj',
    'range' : (25,0,5),
    'xaxis' : '#Delta R(j,j)',
    'fold'  : 3
}

variables['dphi_j_j']  = {
    'name': 'MHlnjj_dphi_jVj',
    'range' : (25,0,3.14),
    'xaxis' : '#Delta#phi(j,j)',
    'fold'  : 3
}

variables['deta_j_j']  = {
    'name': 'MHlnjj_deta_jVj',
    'range' : (25,0,5),   
    'xaxis' : '#Delta#eta(j,j)',
    'fold'  : 3
}

variables['m_ljj']  = {
    'name': 'MHlnjj_m_ljj',
    'range' : (30,0,400),
    'xaxis' : 'm_{ljj} [GeV]',
    'fold'  : 3
}

variables['m_lmetjj']  = {
    'name': 'MHlnjj_m_lmetjj',
    'range' : (30,0,800),
    'xaxis' : 'm_{lmetjj} [GeV]',
    'fold'  : 3
}

variables['m_jj']  = {
    'name': 'MHlnjj_m_jj',     
    'range' : (25,0,250),   
    'xaxis' : 'm^{j,j}',
    'fold'  : 3                         
}

#### For limits

variables['BDT_UniBin20']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : (20,-1.,1.),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
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
    'cuts' : ['InCh_SR']
}
