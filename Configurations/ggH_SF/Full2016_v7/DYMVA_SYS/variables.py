# variables

#variables = {}
    
variables['dymva_alt_dnn_0j']  = { 
    'name'  : 'dymva_alt_dnn_0j',
    'range' : ([0,0.1,0.3,0.5,0.7,0.8,0.85,0.9,0.925,0.95,0.975,1.001],),
    'xaxis' : 'DYMVA_{0j}',
    'fold'  : 3
}

variables['dymva_alt_dnn_1j']  = { 
    'name'  : 'dymva_alt_dnn_1j',
    'range' : ([0,0.1,0.3,0.5,0.7,0.8,0.85,0.9,0.925,0.95,0.975,1.001],),
    'xaxis' : 'DYMVA_{1j}',
    'fold'  : 3
}

variables['dymva_alt_dnn_2j']  = { 
    'name'  : 'dymva_alt_dnn_2j',
    'range' : ([0,0.1,0.3,0.5,0.7,0.8,0.85,0.9,0.925,0.95,0.975,1.001],),
    'xaxis' : 'DYMVA_{2j}',
    'fold'  : 3
}

variables['dymva_alt_dnn_VBF']  = { 
    'name'  : 'dymva_alt_dnn_VBF',
    'range' : ([0,0.1,0.3,0.5,0.7,0.8,0.85,0.9,0.925,0.95,0.975,1.001],),
    'xaxis' : 'DYMVA_{VBF}',
    'fold'  : 3
}

variables['dymva_alt_dnn_VH']  = { 
    'name'  : 'dymva_alt_dnn_VH',
    'range' : ([0,0.1,0.3,0.5,0.7,0.8,0.85,0.9,0.925,0.95,0.975,1.001],),
    'xaxis' : 'DYMVA_{VH}',
    'fold'  : 3
}

# Just for plotting, not used for computing R, k, or Acc.

variables['ptll']  = { 
    'name'  : 'ptll',
    'range' : (40, 0., 200.),
    'xaxis' : 'p_{T}^{ll} [GeV]',
    'fold'  : 0
}

variables['puppimet'] = { 
    'name'  : 'PuppiMET_pt',
    'range' : (50, 0., 150.),
    'xaxis' : 'puppi MET [GeV]',
    'fold'  : 0
}
