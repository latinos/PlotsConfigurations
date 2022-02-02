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


genW_pt_bin = [0, 0.1] + range(5, 200, 5) + range(200, 500, 20) + range(500, 800, 40) + range(800, 1500, 100)
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
genW_pt_bin = [0, 5] + range(5, 200, 5) + range(200, 500, 20) + range(500, 800, 40) + range(800, 1500, 100)
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
variables['m_jj']  = {
    'name': 'MHlnjj_m_jj',     
    'range' : (30,0,300),   
    'xaxis' : 'm^{j,j}',
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
