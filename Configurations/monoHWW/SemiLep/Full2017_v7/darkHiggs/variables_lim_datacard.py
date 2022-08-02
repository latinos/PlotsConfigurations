variables['Events']  = {
    'name': '1',     
    'range' : (1,0,1),   
    'xaxis' : '1',
    'fold'  : 3,
    'cuts' : ['InCh_SB', 'InCh_TCR']
}

variables['BDT_2017CRbin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.46, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'cuts' : ['InCh_SB', 'InCh_TCR']
}

variables['BDT_2017bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.46, 0.5, 0.54, 0.58, 0.66, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'cuts' : ['InCh_SR']
}

#variables['BDT_nb_2017bin']  = { 
#    'name': '2*BDT_no_btag[0]',
#    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.35, 0.39, 0.42, 0.45, 0.51, 0.57, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'cuts' : ['InCh_SR']
#}

variables['BDT_b_2017bin']  = { 
    'name': '2*BDT_btag[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.35, 0.37, 0.40, 0.46, 0.53, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'cuts' : ['InCh_SR']
}
