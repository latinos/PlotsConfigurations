#variables['Events']  = {
#    'name': '1',     
#    'range' : (1,0,1),   
#    'xaxis' : '1',
#    'fold'  : 3
#}

variables['BDT_Ada13']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.45, 0.5, 0.55, 0.64, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}

#variables['Puppimet']  = {
#    'name': 'PuppiMET_pt',
#    'range' : (100,0,1000),
#    'xaxis' : 'p_{T} puppiMET [GeV]',
#    'fold'  : 3
#}
#
#
#variables['pt_genDH']  = {
#    'name': 'genDarkHiggs_Pt',
#    'range' : (100,0,1000),
#    'xaxis' : 'p_{T} puppiMET [GeV]',
#    'fold'  : 3
#}
