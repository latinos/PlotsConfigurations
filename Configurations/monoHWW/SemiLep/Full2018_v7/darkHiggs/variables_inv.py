#variables['Puppimet']  = {
#    'name': 'PuppiMET_pt',
#    'range' : (25,0,300),
#    'xaxis' : 'p_{T} puppiMET [GeV]',
#    'fold'  : 3
#}
#
##variables['pfmet']  = {
##    'name': 'MET_pt',
##    'range' : (25,0,300),
##    'xaxis' : 'p_{T} pfMET [GeV]',
##    'fold'  : 3
##}
##
##variables['pfmetFix']  = {
##    'name': 'METFixEE2017_pt',
##    'range' : (25,0,300),
##    'xaxis' : 'p_{T} pfMET EE fix [GeV]',
##    'fold'  : 3
##}
##
##variables['tkmet']  = {
##    'name': 'TkMET_pt',
##    'range' : (25,0,300),
##    'xaxis' : 'p_{T} TkMET [GeV]',
##    'fold'  : 3
##}
#
#variables['l1_pt']  = { 
#    'name': 'Lepton_pt[0]',     
#    'range' : (25,20,200),   
#    'xaxis' : 'p_{T}^{l_{1}}',
#    'fold'  : 3
#}
#
#variables['j1_pt']  = {
#    'name': 'MHlnjj_pt_j1',     
#    'range' : (25,0,350),   
#    'xaxis' : 'p_{T}^{j_{1}}',
#    'fold'  : 3
#}
#
#variables['j2_pt']  = { 
#    'name': 'MHlnjj_pt_j2',     
#    'range' : (25,0,150),   
#    'xaxis' : 'p_{T}^{j_{2}}',
#    'fold'  : 3
#}
#
#variables['njet']  = {
#    'name': 'Sum$(CleanJet_pt > 30)',     
#    'range' : (10,0,10),   
#    'xaxis' : 'nCleanJet (p_{T} > 30)',
#    'fold'  : 3
#}
#
#variables['l1_eta']  = {
#    'name': 'Lepton_eta[0]',     
#    'range' : (25,-3,3),   
#    'xaxis' : '#eta^{l_{1}}',
#    'fold'  : 3                         
#}
#
#variables['j1_eta']  = {
#    'name': 'MHlnjj_eta_j1',     
#    'range' : (25,-5,5),   
#    'xaxis' : '#eta^{j_{1}}',
#    'fold'  : 3                         
#}
#
#variables['j2_eta']  = {
#    'name': 'MHlnjj_eta_j2',     
#    'range' : (25,-5,5),   
#    'xaxis' : '#eta^{j_{2}}',
#    'fold'  : 3                         
#}
#
#variables['j3_idx']  = {
#    'name': 'MHlnjj_idx_j3',     
#    'range' : (6,-1,5),   
#    'xaxis' : 'idx j_{3}',
#    'fold'  : 3                         
#}
#
#variables['j3_pt']  = {
#    'name': '(MHlnjj_idx_j3 < -0.5)*(0.) + (MHlnjj_idx_j3 > -0.5)*CleanJet_pt[abs(MHlnjj_idx_j3)]',     
#    'range' : (25,0,150),   
#    'xaxis' : 'p_{T}^{j_{3}}',
#    'fold'  : 3                         
#}
#
#variables['j3_eta']  = {
#    'name': '(MHlnjj_idx_j3 < -0.5)*(-7.) + (MHlnjj_idx_j3 > -0.5)*CleanJet_eta[abs(MHlnjj_idx_j3)]',     
#    'range' : (25,-6.,6.),   
#    'xaxis' : '#eta^{j_{3}}',
#    'fold'  : 3                         
#}
#
#
##for frac in ['chEmEF', 'chFPV0EF', 'chHEF', 'neEmEF', 'neHEF']:
##    for j in ['1', '2']:
##        variables['j'+j+'_'+frac]  = {
##            'name': 'Jet_'+frac+'[ori_idx_j'+j+']',     
##            'range' : (25,0.,1.),   
##            'xaxis' : frac+' j_{'+j+'}',
##            'fold'  : 3                         
##        }
#
variables['BDT_Ada13']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.5, 0.54, 0.58, 0.62, 0.7, 1.],),
    'xaxis' : 'BDT discriminator',
    #'xaxis' : 'high m_{Z\'} NLO BDT_{Ada13}',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}
