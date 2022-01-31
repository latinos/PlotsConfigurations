variables['Events']  = {
    'name': '1',     
    'range' : (1,0,1),   
    'xaxis' : '1',
    'fold'  : 3,
    'cuts' : ['InCh_SB', 'InCh_TCR']
}

variables['BDT_2016CRbin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'cuts' : ['InCh_SB', 'InCh_TCR']
}

variables['BDT_2016bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.45, 0.5, 0.55, 0.64, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'InCh_highMtw_SR' : [0.4, 1.],
    },
    'cuts' : ['InCh_SR']
}

#variables['BDT_nb_2016bin']  = { 
#    'name': '2*BDT_no_btag[0]',
#    'range' : ([-1.,-0.6, -0.2, 0., 0.2, 0.3, 0.35, 0.40, 0.42, 0.45, 0.50, 0.55, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#    },
#    'cuts' : ['InCh_SR']
#}

variables['BDT_b_2016bin']  = { 
    'name': '2*BDT_btag[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.25, 0.3, 0.35, 0.37, 0.40, 0.43, 0.5, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
    },
    'cuts' : ['InCh_SR']
}
