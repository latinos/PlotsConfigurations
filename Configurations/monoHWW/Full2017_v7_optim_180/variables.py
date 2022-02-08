# variables

variables['events']  = {   
    'name': '1',
    'range' : (1,0,2),
    'xaxis' : 'events',
    'fold' : 3
}



variables['mtw2']  = {   'name': 'mtw2',
                         'range' : ([0,50,75,100,125,180,300],),
                         'xaxis' : 'm_{T}^{l2+MET} [GeV]',
                         'fold' : 3
                        }

variables['mth']  = {   'name': 'mth',
                        'range' : (30, 50,400),
                        'xaxis' : 'm_{T}^{ll, p_{T}^{miss}} [GeV]',
                        'fold' : 3
                        }

variables['mtw2_morebins']  = {   'name': 'mtw2',
                        'range' : (30, 20,300),
                         'xaxis' : 'm_{T}^{p_{T}^{min}, p_{T}^{miss}} [GeV]',
                        'fold' : 3
                        }
