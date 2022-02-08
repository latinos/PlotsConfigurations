# SR binning
variables['BDT_2018bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.5, 0.54, 0.58, 0.62, 0.7, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
}
variables['BDT_2017bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.46, 0.5, 0.54, 0.58, 0.66, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
}
variables['BDT_2016bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.45, 0.5, 0.55, 0.64, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
}

# CR binning
variables['BDT_2018CRbin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.5, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
}
variables['BDT_2017CRbin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.46, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
}
variables['BDT_2016CRbin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
}

# Uniform binning
variables['BDT_UniBin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : (20,-1.,1.),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
}

# SR binning, low BDT cut out
variables['BDTh_2018bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-0.2, 0., 0.2, 0.3, 0.4, 0.5, 0.54, 0.58, 0.62, 0.7, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 2, 
}
variables['BDTh_2017bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-0.2, 0., 0.2, 0.3, 0.4, 0.46, 0.5, 0.54, 0.58, 0.66, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 2, 
}
variables['BDTh_2016bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-0.2, 0., 0.2, 0.3, 0.4, 0.45, 0.5, 0.55, 0.64, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 2, 
}

# CR binning, low BDT cut out
variables['BDTh_2018CRbin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-0.2, 0., 0.2, 0.3, 0.4, 0.5, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
}
variables['BDTh_2017CRbin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-0.2, 0., 0.2, 0.3, 0.4, 0.46, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
}
variables['BDTh_2016CRbin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-0.2, 0., 0.2, 0.3, 0.4, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
}
