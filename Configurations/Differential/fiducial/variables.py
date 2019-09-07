variables['events'] = {
    'name': '0.5',
    'range': (1,0,1),
    'xaxis': 'events'
}

variables['njet'] = {
    'name': 'HTXS_njets30',
    'range': (5, 0., 5.),
    'fold': 1,
    'xaxis': 'N_{jet}'
}

variables['ptH'] = {
    'name': 'HTXS_Higgs_pt*(HTXS_Higgs_pt < 400.) + 401.*(HTXS_Higgs_pt >= 400.)',
    #'range': ([0., 10., 15., 20., 30., 45., 60., 80., 100., 120., 155., 200., 260., 350., 400.],),
    'range': ([0., 20., 45., 80., 120., 200., 260.],),
    'fold': 1,
    'xaxis': 'p_{T}^{H}'
}
