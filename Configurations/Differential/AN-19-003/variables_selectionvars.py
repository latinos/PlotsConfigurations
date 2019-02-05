variables['njet']  = {
    'name': 'njet',     
    'range': (6,0,6),   
    'xaxis': 'Njet',
    'fold': 0,
}

variables['mll'] = {
    'name': 'mll', #   variable name    
    'range': (20,10,250), #   variable range
    'xaxis': 'm^{ll} [GeV]', #   x axis name
    'fold': 0
}
                        
variables['mth'] = {
    'name': 'mth', #   variable name    
    'range': (10,60,250), #   variable range
    'xaxis': 'm_{T}^{H} [GeV]', #   x axis name
    'fold': 0
}

variables['mtw2'] = {
    'name': 'mtw2', #   variable name    
    'range': (10,60,200), #   variable range
    'xaxis': 'm_{T}^{#ell2} [GeV]', #   x axis name
    'fold': 0
}

variables['ptll'] = {
    'name': 'ptll', #   variable name    
    'range': (20,0,250), #   variable range
    'xaxis': 'p_{T}^{ll} [GeV]', #   x axis name
    'fold': 0
}

variables['met'] = {
    'name': 'metPfType1', #   variable name    
    'range': (20,0,250), #   variable range
    'xaxis': 'p_{T}^{miss} [GeV]', #   x axis name
    'fold': 0
}
