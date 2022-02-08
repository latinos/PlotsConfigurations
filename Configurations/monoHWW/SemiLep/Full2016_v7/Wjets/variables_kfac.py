LHE_HT_bins = [0, 70, 100, 200, 400, 600, 800, 1200, 2500, 2600]
variables['LHE_HT']  = {
                        'name': 'LHE_HT',
                        'range' : (25,0,800),
                        'xaxis' : 'LHE HT [GeV]',
                        'fold'  : 3
                        }
variables['LHE_HT_bins']  = {
                        'name': 'LHE_HT',
                        #'range' : (25,0,400),
                        'range' : (LHE_HT_bins,),
                        'xaxis' : 'LHE HT [GeV]',
                        'fold'  : 3
                        }


genW_pt_bin = [0, 0.1] + range(10, 180, 10) + [180, 300] + range(350, 550, 50) + [550, 650] + range(700, 1500, 200)
variables['genW_pt']  = {
    'name': 'GenW_pt',     
    #'range' : (50,0,250),   
    'range' : (genW_pt_bin,),   
    'xaxis' : 'gen W p_T',
    'fold'  : 2                         
}
variables['genW_pt_inc']  = {
    'name': 'GenW_pt',     
    #'range' : (50,0,250),   
    'range' : (genW_pt_bin,),   
    'xaxis' : 'gen W p_T',
    'fold'  : 3                         
}
variables['genW_pt_true']  = {
    'name': 'genW_pt',     
    #'range' : (50,0,250),   
    'range' : (genW_pt_bin,),   
    'xaxis' : 'gen W p_T',
    'fold'  : 3                         
}
genW_pt_bin = [0, 5] + range(10, 180, 10) + [180, 300] + range(350, 550, 50) + [550, 650] + range(700, 1500, 200)
variables['genW_pt2']  = {
    'name': 'GenW_pt',     
    #'range' : (50,0,250),   
    'range' : (genW_pt_bin,),   
    'xaxis' : 'gen W p_T',
    'fold'  : 2                         
}
variables['genW_pt2_inc']  = {
    'name': 'GenW_pt',     
    #'range' : (50,0,250),   
    'range' : (genW_pt_bin,),   
    'xaxis' : 'gen W p_T',
    'fold'  : 3                         
}
variables['genW_pt2_true']  = {
    'name': 'genW_pt',     
    #'range' : (50,0,250),   
    'range' : (genW_pt_bin,),   
    'xaxis' : 'gen W p_T',
    'fold'  : 3                         
}
variables['genW_m']  = {
    'name': 'GenW_mass',     
    'range' : (50,0,250),   
    'xaxis' : 'gen W mass',
    'fold'  : 2                         
}
variables['genW_mt']  = {
    'name': 'GenW_mt',     
    'range' : (50,0,250),   
    'xaxis' : 'gen W m_T',
    'fold'  : 2                         
}
variables['nGenW']  = {
    'name': 'nGenW',     
    'range' : (3,0,3),   
    'xaxis' : 'gen W m_T',
    'fold'  : 3                         
}
# dr_jj shenanigans
genW_pt_bin = [0, 5] + range(10, 180, 10) + [180, 300] + range(350, 550, 50) + [550, 650] + range(700, 1500, 200)
variables['m_jj']  = {
    'name': 'MHlnjj_m_jj',     
    'range' : (30,0,300),   
    'xaxis' : 'm^{j,j}',
    'fold'  : 3                         
}
variables['dr_j_j']  = {
    'name': 'MHlnjj_dr_jVj',
    'range' : (25,0,5),   
    'xaxis' : '#Delta R(j,j)',
    'fold'  : 3
}
variables['deta_j_j']  = {
    'name': 'MHlnjj_deta_jVj',
    'range' : (25,0,5),   
    'xaxis' : '#Delta#eta(j,j)',
    'fold'  : 3
}
variables['deta_j_j_2']  = {
    'name': 'MHlnjj_deta_jVj',
    'range' : (10,0,5),   
    'xaxis' : '#Delta#eta(j,j)',
    'fold'  : 3
}
variables['dr_jj_V_genW_pt']  = {
    'name': 'genW_pt[0]:MHlnjj_dr_jVj',     
    'range' : ([0.,1.,2.,3.,4.,5.], genW_pt_bin),
    'xaxis' : 'gen W p_T:#Delta R(j,j)',
    'fold'  : 3                         
}
variables['deta_jj_V_genW_pt']  = {
    'name': 'genW_pt[0]:MHlnjj_deta_jVj',     
    'range' : ([0.,1.,2.,3.,4.,5.], genW_pt_bin),
    'xaxis' : 'gen W p_T:#Delta#eta(j,j)',
    'fold'  : 3                         
}
genW_pt_bin = [0, 10] + range(20, 180, 20) + [180, 300] + range(350, 550, 100) + [550, 650] + range(700, 1500, 400)
m_jj_bins = range(0, 300, 25)
variables['m_jj_V_genW_pt']  = {
    'name': 'genW_pt[0]:MHlnjj_m_jj',     
    'range' : (m_jj_bins, genW_pt_bin),
    'xaxis' : 'gen W p_T:m_{jj}',
    'fold'  : 3                         
}

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
variables['BDT_FineEnd10']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.5, 0., 0.4, 0.6, 0.8, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}
# Recoil
variables['Wrecoil_pt']  = {
    'name': 'Wrecoil[1]',     
    'range' : (genW_pt_bin,),   
    'xaxis' : 'gen recoil p_T',
    'fold'  : 3                         
}
variables['Wrecoil_m']  = {
    'name': 'Wrecoil[0]',     
    'range' : (100,0,500),   
    'xaxis' : 'gen recoil m',
    'fold'  : 3                         
}
Wpt_2D_bins = [0, 10] + range(20, 180, 20) + [180, 300] + range(350, 550, 100) + [550, 650] + range(700, 1500, 400)
rec_2D_bins = range(0, 500, 20)
variables['Wrecoil_m']  = {
    'name': 'genW_pt[0]:Wrecoil[0]',     
    'range' : (rec_2D_bins,Wpt_2D_bins),   
    'xaxis' : 'gen W p_T:gen recoil m',
    'fold'  : 3                         
}

