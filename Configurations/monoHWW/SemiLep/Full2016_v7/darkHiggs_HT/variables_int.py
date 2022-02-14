#variables['BDT_FineEnd10']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., -0.5, 0., 0.4, 0.6, 0.8, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#}
#
#variables['BDT_FineEnd20']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., -0.5, 0., 0.4, 0.6, 0.7, 0.8, 0.9, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'cuts' : ['InCh_SR']
#}

# Merge first two bins
variables['BDT_CFineEnd10']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., 0., 0.4, 0.6, 0.8, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
}
variables['BDT_CFineEnd20']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., 0., 0.4, 0.6, 0.7, 0.8, 0.9, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'cuts' : ['InCh_SR']
}
