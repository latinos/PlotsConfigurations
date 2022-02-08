variables['Events']  = {   'name': '1',     
                           'range' : (1,0,1),   
                           'xaxis' : '1',
                           'fold'  : 3
                        }

LHE_Vpt_bins = [0, 50, 100, 250, 400, 600, 13000]
variables['LHE_Vpt']  = {
                        'name': 'LHE_Vpt',
                        'range' : (40,0,200),
                        'xaxis' : 'LHR Vpt [GeV]',
                        'fold'  : 3
                        }
variables['LHE_Vpt_bins']  = {
                        'name': 'LHE_Vpt',
                        #'range' : (25,0,400),
                        'range' : (LHE_Vpt_bins,),
                        'xaxis' : 'LHE Vpt [GeV]',
                        'fold'  : 3
                        }

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


variables['Puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (25,0,300),
                        'xaxis' : 'p_{T} puppiMET [GeV]',
                        'fold'  : 3
                        }
#variables['pfmet']  = {
#                        'name': 'MET_pt',
#                        'range' : (25,0,300),
#                        'xaxis' : 'p_{T} pfMET [GeV]',
#                        'fold'  : 3
#                        }

variables['l1_pt']  = {   'name': 'Lepton_pt[0]',     
                        'range' : (25,20,200),   
                        'xaxis' : 'p_{T}^{l_{1}}',
                        'fold'  : 3
                        }
variables['j1_pt']  = {   'name': 'MHlnjj_pt_j1',     
                        'range' : (25,0,350),   
                        'xaxis' : 'p_{T}^{j_{1}}',
                        'fold'  : 3
                        }
variables['j2_pt']  = {   'name': 'MHlnjj_pt_j2',     
                        'range' : (25,0,150),   
                        'xaxis' : 'p_{T}^{j_{2}}',
                        'fold'  : 3
                        }
variables['njet']  = {   'name': 'Sum$(CleanJet_pt > 30)',     
                        'range' : (10,0,10),   
                        'xaxis' : 'nCleanJet (p_{T} > 30)',
                        'fold'  : 3
                        }

#variables['nbjet']  = { 
#    'name': 'nbJet',     
#    'range' : (10,0,10),   
#    'xaxis' : 'b-tagged nCleanJet (p_{T} > 30)',
#    'fold'  : 3
#    }


variables['l1_eta']  = {  'name': 'Lepton_eta[0]',     
                        'range' : (25,-3,3),   
                        'xaxis' : '#eta^{l_{1}}',
                        'fold'  : 3                         
                        }
variables['j1_eta']  = {  'name': 'MHlnjj_eta_j1',     
                        'range' : (25,-5,5),   
                        'xaxis' : '#eta^{j_{1}}',
                        'fold'  : 3                         
                        }
variables['j2_eta']  = {  'name': 'MHlnjj_eta_j2',     
                        'range' : (25,-5,5),   
                        'xaxis' : '#eta^{j_{2}}',
                        'fold'  : 3                         
                        }

variables['m_jj']  = {  'name': 'MHlnjj_m_jj',     
                        'range' : (50,0,250),   
                        'xaxis' : 'm^{j,j}',
                        'fold'  : 3                         
                        }

LHE_Vpt_bins = [0, 50, 100, 250, 400, 600, 13000]
genW_pt_bin = [0, 0.1] + range(10, 180, 10) + [180, 300] + range(350, 550, 50) + [550, 650] + range(700, 1500, 200)
variables['genW_pt']  = {
    'name': 'GenW_pt',     
    #'range' : (50,0,250),   
    'range' : (genW_pt_bin,),   
    'xaxis' : 'gen W p_T',
    'fold'  : 2                         
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

variables['genW_pt_bin']  = {
    'name': 'GenW_pt',     
    #'range' : (50,0,250),   
    'range' : ([0, 100, 250, 400, 600, 800],),   
    'xaxis' : 'gen W p_T',
    'fold'  : 2                         
}

variables['BDT_UniBin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : (20,-1.,1.),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
}
variables['BDT_UniBin2']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : (40,-1.,1.),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
}
