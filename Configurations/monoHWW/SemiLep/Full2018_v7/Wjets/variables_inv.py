#variables['Events']  = {   'name': '1',     
#                           'range' : (1,0,1),   
#                           'xaxis' : '1',
#                           'fold'  : 3
#                        }
#LHE_Vpt_bins = [0, 50, 100, 250, 400, 600, 1000]
#variables['LHE_Vpt']  = {
#                        'name': 'LHE_Vpt',
#                        'range' : (80,0,800),
#                        'xaxis' : 'LHR Vpt [GeV]',
#                        'fold'  : 3
#                        }
#variables['LHE_Vpt_bins']  = {
#                        'name': 'LHE_Vpt',
#                        #'range' : (25,0,400),
#                        'range' : (LHE_Vpt_bins,),
#                        'xaxis' : 'LHE Vpt [GeV]',
#                        'fold'  : 3
#                        }
#variables['LHE_Vpt_low']  = {
#                        'name': 'LHE_Vpt',
#                        'range' : (90,80,300),
#                        #'range' : (LHE_Vpt_bins,),
#                        'xaxis' : 'LHE Vpt [GeV]',
#                        'fold'  : 2
#                        }
#
#variables['Puppimet']  = {
#                        'name': 'PuppiMET_pt',
#                        'range' : (25,0,300),
#                        'xaxis' : 'p_{T} puppiMET [GeV]',
#                        'fold'  : 3
#                        }
variables['l1_pt']  = {   'name': 'Lepton_pt[0]',     
                        'range' : (25,20,200),   
                        'xaxis' : 'p_{T}^{l_{1}}',
                        'fold'  : 3
                        }
variables['j1_pt']  = {   'name': 'CleanJet_pt[0]',     
                        'range' : (25,0,350),   
                        'xaxis' : 'p_{T}^{j_{1}}',
                        'fold'  : 3
                        }
variables['j2_pt']  = {   'name': 'CleanJet_pt[1]',     
                        'range' : (25,0,150),   
                        'xaxis' : 'p_{T}^{j_{2}}',
                        'fold'  : 3
                        }
variables['m_jj']  = {
    'name': 'MHlnjj_m_jj',     
    'range' : (25,0,250),   
    'xaxis' : 'm^{j,j}',
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
#variables['njet']  = {   'name': 'Sum$(CleanJet_pt > 30)',     
#                        'range' : (10,0,10),   
#                        'xaxis' : 'nCleanJet (p_{T} > 30)',
#                        'fold'  : 3
#                        }
#
#variables['BDT_2018bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.5, 0.54, 0.58, 0.62, 0.7, 1.],),
#    'xaxis' : 'BDT discriminator',
#    #'xaxis' : 'high m_{Z\'} NLO BDT_{Ada13}',
#    'fold'  : 3, 
#}
#variables['BDT_2018bin_5last']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([0.5, 0.54, 0.58, 0.62, 0.7, 1.],),
#    'xaxis' : 'BDT discriminator',
#    #'xaxis' : 'high m_{Z\'} NLO BDT_{Ada13}',
#    'fold'  : 2, 
#}
##variables['BDT_nb_2018bin']  = { 
##    'name': '2*BDT_no_btag[0]',
##    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.35, 0.4, 0.44, 0.47, 0.50, 0.54, 0.58, 1.],),
##    'xaxis' : 'BDT discriminator',
##    #'xaxis' : 'BDT',
##    'fold'  : 3, 
##    'blind' : {
##        'InCh_SR' : [0.4, 1.],
##    }
##}
##variables['BDT_b_2018bin']  = { 
##    'name': '2*BDT_btag[0]',
##    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.35,  0.41, 0.44, 0.47, 0.51, 0.57, 1.],),
##    'xaxis' : 'BDT discriminator',
##    #'xaxis' : 'BDT',
##    'fold'  : 3, 
##    'blind' : {
##        'InCh_SR' : [0.4, 1.],
##    }
##}
