#variables = {}

# imported from cuts.py
# cuts
# imported from samples.py
# samples signals

try:
    variables
except NameError:
    import collections
    variables = collections.OrderedDict()

variables['events'] = {
    'name': '0.5',
    'range': (1,0,1),
    'xaxis': 'events'
}

variables['mll'] = {
    'name': 'mll',
    'range': (31,0.,310.)
}

variables['mth'] = {
    'name': 'mth',
    'range': (30,0.,300.)
}

variables['mtw2'] = {
    'name': 'mtw2',
    'range': (30,60.,200.)
}

variables['met'] = {
    'name': 'PuppiMET_pt',
    'range': (50, 20., 220.),
    'xaxis': 'E_{T}^{miss} [GeV]',
}

variables['ptll'] = {
    'name': 'ptll',
    'range': (20,0,200),
    'xaxis': 'pt_{ll} [GeV]',
}

variables['njet'] = {
    'name': 'Sum$(CleanJet_pt > 30. && TMath::Abs(CleanJet_eta) < 4.7)',
    'range': (6, 0., 6.),
    'xaxis': 'N_{jet}'
}
