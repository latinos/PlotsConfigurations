variables['Events']  = {   'name': '1',     
                           'range' : (1,0,1),   
                           'xaxis' : '1',
                           'fold'  : 3
                        }
LHE_Vpt_bins = [0, 50, 100, 250, 400, 600, 1000]
variables['LHE_Vpt']  = {
                        'name': 'LHE_Vpt',
                        'range' : (80,0,800),
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
variables['LHE_Vpt_low']  = {
                        'name': 'LHE_Vpt',
                        'range' : (90,80,300),
                        #'range' : (LHE_Vpt_bins,),
                        'xaxis' : 'LHE Vpt [GeV]',
                        'fold'  : 2
                        }

variables['Puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (25,0,300),
                        'xaxis' : 'p_{T} puppiMET [GeV]',
                        'fold'  : 3
                        }
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

variables['hmZpBDT_nom']  = { 
    'name': 'BDT_nom[0]',
    'range' : ([-1., -0.6, -0.3, 0., 0.2, 0.4, 0.6, 0.7, 0.8, 0.92, 0.94, 0.96, 0.975, 0.99, 1.],),
    'xaxis' : 'high m_{Z\'} NLO BDT_{nominal}',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.5, 1.],
    #    'InCh_highMtw_SR' : [0.5, 1.],
    #}
}
   
variables['hmZpBDT_nomLast']  = { 
    'name': 'BDT_mtw[0]',
    'range' : ([0.8, 0.9, 0.94, 0.96, 0.97, 0.98, 0.99, 1.],),
    'xaxis' : 'high m_{Z\'} NLO BDT_{mtw var}',
    'fold'  : 2, 
    #'blind' : {
    #    'InCh_SR' : [0.5, 1.],
    #    'InCh_highMtw_SR' : [0.5, 1.],
    #}
}

variables['hmZpBDT_hig']  = { 
    'name': 'BDT_hig[0]',
    'range' : ([-1., -0.5, -0.2, 0., 0.2, 0.4, 0.55, 0.7, 0.8, 0.9, 1.],),
    'xaxis' : 'high m_{Z\'} NLO BDT_{high cut}',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.5, 1.],
    #    'InCh_highMtw_SR' : [0.5, 1.],
    #}
}
