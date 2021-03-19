
variables['l1_pt']  = { 
    'name': 'Lepton_pt[0]',     
    'range' : (25,20,150),   
    'xaxis' : 'p_{T}^{l_{1}}',
    'fold'  : 3
}

variables['j1_pt']  = {
    'name': 'MHlnjj_pt_j1',     
    'range' : (25,0,250),   
    'xaxis' : 'p_{T}^{j_{1}}',
    'fold'  : 3
}

variables['j2_pt']  = { 
    'name': 'MHlnjj_pt_j2',     
    'range' : (25,0,150),   
    'xaxis' : 'p_{T}^{j_{2}}',
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
    'range' : (25,0,250),
    'xaxis' : 'p_{T}^{jj} [GeV]',
    'fold'  : 3
}

variables['frac_MAXPTlj_D_Mlmetjj']  = {
    'name': 'MHlnjj_MAXPTlj_D_Mlmetjj',
    'range' : (30,0,0.4),
    'xaxis' : 'max(p_{T}^{l}, p_{T}^{j1}) / m_{lmetjj}',
    'fold'  : 3
}

variables['dphi_ljj_met']  = {
    'name': 'MHlnjj_dphi_ljjVmet',
    'range' : (15,1.5,3.14),
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
    'range' : (20,0.5,3.14),
    'xaxis' : '#Delta#phi(l,met)',
    'fold'  : 3
    }

variables['deta_l_met']  = {
    'name': 'MHlnjj_deta_lVmet',
    'range' : (25,0,3),   
    'xaxis' : '#Delta#eta(l,met)',
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
    'range' : (25,0,7),   
    'xaxis' : '#Delta#eta(j,j)',
    'fold'  : 3
    }

variables['m_ljj']  = {
    'name': 'MHlnjj_m_ljj',
    'range' : (30,0,400),
    'xaxis' : 'm_{ljj} [GeV]',
    'fold'  : 3
}

