variables['Events']  = {
    'name': '1',     
    'range' : (1,0,1),   
    'xaxis' : '1',
    'fold'  : 3,
    'cuts' : ['InCh_SB', 'InCh_TCR']
}

variables['BDT_2018CRbin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.5, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'cuts' : ['InCh_SB', 'InCh_TCR']
}

variables['BDT_2018bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.5, 0.54, 0.58, 0.62, 0.7, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #},
    'cuts' : ['InCh_SR']
}

#variables['BDT_nb_2018bin']  = { 
#    'name': '2*BDT_no_btag[0]',
#    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.35, 0.4, 0.44, 0.47, 0.50, 0.54, 0.58, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#    },
#    'cuts' : ['InCh_SR']
#}

variables['BDT_b_2018bin']  = { 
    'name': '2*BDT_btag[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.35, 0.41, 0.44, 0.47, 0.51, 0.57, 1.],),
    #'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.35, 0.41, 0.44, 0.47, 0.5, 0.57, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #}
    'cuts' : ['InCh_SR']
}
