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


#genW_pt_bin = [0, 0.1] + range(5, 200, 5) + range(200, 500, 20) + range(500, 800, 40) + range(800, 1500, 100)
#variables['genW_pt']  = {
#    'name': 'GenW_pt',     
#    #'range' : (50,0,250),   
#    'range' : (genW_pt_bin,),   
#    'xaxis' : 'gen W p_T',
#    'fold'  : 2                         
#}
#variables['genW_pt_inc']  = {
#    'name': 'GenW_pt',     
#    #'range' : (50,0,250),   
#    'range' : (genW_pt_bin,),   
#    'xaxis' : 'gen W p_T',
#    'fold'  : 3                         
#}
#variables['genW_pt_true']  = {
#    'name': 'genW_pt',     
#    #'range' : (50,0,250),   
#    'range' : (genW_pt_bin,),   
#    'xaxis' : 'gen W p_T',
#    'fold'  : 3                         
#}
genW_pt_bin = [0, 10] + range(10, 200, 10) + range(200, 400, 20) + range(400, 700, 50)  +range(700,900,100) + range(900, 1500, 200)
#genW_pt_bin = [0, 5] + range(5, 200, 5) + range(200, 500, 20) + range(500, 800, 40) + range(800, 1500, 100)
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
#variables['genW_pt2_true']  = {
#    'name': 'genW_pt',     
#    #'range' : (50,0,250),   
#    'range' : (genW_pt_bin,),   
#    'xaxis' : 'gen W p_T',
#    'fold'  : 3                         
#}
#genW_pt_bin_2 = [0, 20] + [20,40] + range(40, 200, 10) + range(200, 400, 20) + range(400, 700, 50)  +range(700,900,100) + range(900, 1500, 200)


genW_pt_bin_2 = range(0, 40, 20) + range(40, 200, 10) + range(200, 400, 20) + range(400, 700, 50)  +range(700,900,100) + range(900, 1500, 200)
variables['genW_pt2_inc_boo']  = {
    'name': 'GenW_pt',     
    #'range' : (50,0,250),   
    'range' : (genW_pt_bin_2,),   
    'xaxis' : 'gen W p_T',
    'fold'  : 3                         
}
genW_pt_bin_3 =  range(0, 60, 30) + range(60, 200, 10) + range(200, 400, 20) + range(400, 700, 50)  +range(700,900,100) + range(900, 1500, 200)
#genW_pt_bin = [0, 5] + range(5, 200, 5) + range(200, 500, 20) + range(500, 800, 40) + range(800, 1500, 100)
variables['genW_pt2_inc_bin']  = {
    'name': 'GenW_pt',     
    #'range' : (50,0,250),   
    'range' : (genW_pt_bin_3,),   
    'xaxis' : 'gen W p_T',
    'fold'  : 3                         
}
#variables['genW_pt2_true_boo']  = {
#    'name': 'genW_pt',     
#    #'range' : (50,0,250),   
#    'range' : (genW_pt_bin_2,),   
#    'xaxis' : 'gen W p_T',
#    'fold'  : 3                         
#}
genW_pt_bin_4 = [0, 20] + range(20, 190, 10) + range(190, 250, 20) + range(250, 400, 50) + [400,600] 
variables['genW_pt2_true_res']  = {
    'name': 'GenW_pt',     
    #'range' : (50,0,250),   
    'range' : (genW_pt_bin_4,),   
    'xaxis' : 'gen W p_T',
    'fold'  : 3                         
}
genW_pt_bin_5 = [0, 20] + range(20, 190, 10) + range(190, 250, 20) + range(250, 400, 50)
variables['genW_pt2_true_res_n']  = {
    'name': 'GenW_pt',     
    #'range' : (50,0,250),   
    'range' : (genW_pt_bin_5,),   
    'xaxis' : 'gen W p_T',
    'fold'  : 3                         
}
genW_pt_bin_6 =  range(10,50, 20) + range(50, 200, 10) + range(200, 400, 20) + range(400, 700, 50)  +range(700,900,100) + range(900, 1500, 200)
#genW_pt_bin = [0, 5] + range(5, 200, 5) + range(200, 500, 20) + range(500, 800, 40) + range(800, 1500, 100)
variables['genW_pt2_inc_bin_n']  = {
    'name': 'GenW_pt',     
    #'range' : (50,0,250),   
    'range' : (genW_pt_bin_6,),   
    'xaxis' : 'gen W p_T',
    'fold'  : 3                         
}
genW_pt_bin_7 =  range(10,50, 20) + range(50, 200, 10) + range(200, 400, 20) + range(400, 700, 50)  +range(700,900,100) + range(900, 1200, 300)
#genW_pt_bin = [0, 5] + range(5, 200, 5) + range(200, 500, 20) + range(500, 800, 40) + range(800, 1500, 100)
variables['genW_pt2_inc_bin_nu']  = {
    'name': 'GenW_pt',     
    #'range' : (50,0,250),   
    'range' : (genW_pt_bin_7,),   
    'xaxis' : 'gen W p_T',
    'fold'  : 3                         
}
genW_pt_bin_8 =  range(20,60, 20) + range(60, 200, 10) + range(200, 400, 20) + range(400, 700, 50)  +range(700,900,100) + range(900, 1200, 300)
#genW_pt_bin = [0, 5] + range(5, 200, 5) + range(200, 500, 20) + range(500, 800, 40) + range(800, 1500, 100)
variables['genW_pt2_inc_bin_nuo']  = {
    'name': 'GenW_pt',     
    #'range' : (50,0,250),   
    'range' : (genW_pt_bin_8,),   
    'xaxis' : 'gen W p_T',
    'fold'  : 3                         
}
#variables['genW_pt2_gb']  = {
#    'name': 'W_Lep_Gen',     
#    #'range' : (50,0,250),   
#    'range' : (genW_pt_bin,),   
#    'xaxis' : 'gen W p_T',
#    'fold'  : 3                         
#}
#variables['genW_m']  = {
#    'name': 'GenW_mass',     
#    'range' : (50,0,250),   
#    'xaxis' : 'gen W mass',
#    'fold'  : 2                         
#}
#variables['genW_mt']  = {
#    'name': 'GenW_mt',     
#    'range' : (50,0,250),   
#    'xaxis' : 'gen W m_T',
#    'fold'  : 2                         
#}
#variables['nGenW']  = {
#    'name': 'nGenW',     
#    'range' : (3,0,3),   
#    'xaxis' : 'gen W m_T',
#    'fold'  : 3                         
#}

# Recoil
#variables['Wrecoil_pt']  = {
#    'name': 'Wrecoil[1]',     
#    'range' : (genW_pt_bin,),   
#    'xaxis' : 'gen recoil p_T',
#    'fold'  : 3                         
#}
#variables['Wrecoil_m']  = {
#    'name': 'Wrecoil[0]',     
#    'range' : (100,0,500),   
#    'xaxis' : 'gen recoil m',
#    'fold'  : 3                         
#}
#variables['m_jj']  = {
#    'name': 'MHlnjj_m_jj',     
#    'range' : (30,0,300),   
#    'xaxis' : 'm^{j,j}',
#    'fold'  : 3                         
#}
#variables['deta_j_j']  = {
#    'name': 'MHlnjj_deta_jVj',
#    'range' : (25,0,5),   
#    'xaxis' : '#Delta#eta(j,j)',
#    'fold'  : 3
#}
#variables['deta_j_j_2']  = {
#    'name': 'MHlnjj_deta_jVj',
#    'range' : (10,0,5),   
#    'xaxis' : '#Delta#eta(j,j)',
#    'fold'  : 3
#}
