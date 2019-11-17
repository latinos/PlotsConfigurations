gt200 = True

binning = {
    'ptH': [0., 20., 45., 80., 120., 200., 260.],
    #'ptH': [0., 20., 45., 80., 120., 200., 350., 400.],
    #'ptH': [0., 15., 30., 60., 120., 200., 260.],
    #'ptH': [0., 10., 20., 60., 100., 200., 260.],
    'njet': [0., 1., 2., 3., 4., 5.]
}

bins = {
    'ptH': ['PTH_0_20', 'PTH_20_45', 'PTH_45_80', 'PTH_80_120', 'PTH_120_200', 'PTH_GT200'],
    #'ptH': ['PTH_0_20', 'PTH_20_45', 'PTH_45_80', 'PTH_80_120', 'PTH_120_200', 'PTH_200_350', 'PTH_GT350'],
    #'ptH': ['PTH_0_15', 'PTH_15_30', 'PTH_30_60', 'PTH_60_120', 'PTH_120_200', 'PTH_GT200'],
    #'ptH': ['PTH_0_10', 'PTH_10_20', 'PTH_20_60', 'PTH_60_100', 'PTH_100_200', 'PTH_GT200'],
    'njet': ['NJ_0', 'NJ_1', 'NJ_2', 'NJ_3', 'NJ_GE4']
}

bin_mapping = {
    'ptH': {
        'PTH_0_10': ['PTH_0_10'],
        'PTH_0_15': ['PTH_0_10', 'PTH_10_15'],
        'PTH_0_20': ['PTH_0_10', 'PTH_10_15', 'PTH_15_20'],
        'PTH_10_20': ['PTH_10_15', 'PTH_15_20'],
        'PTH_15_30': ['PTH_15_20', 'PTH_20_30'],
        'PTH_20_60': ['PTH_20_30', 'PTH_30_45', 'PTH_45_60'],
        'PTH_20_45': ['PTH_20_30', 'PTH_30_45'],
        'PTH_30_60': ['PTH_30_45', 'PTH_45_60'],
        'PTH_45_80': ['PTH_45_60', 'PTH_60_80'],
        'PTH_60_100': ['PTH_60_80', 'PTH_80_100'],
        'PTH_60_120': ['PTH_60_80', 'PTH_80_100', 'PTH_100_120'],
        'PTH_80_120': ['PTH_80_100', 'PTH_100_120'],
        'PTH_100_200': ['PTH_100_120', 'PTH_120_155', 'PTH_155_200'],
        'PTH_120_200': ['PTH_120_155', 'PTH_155_200'],
        'PTH_GT200': ['PTH_200_260', 'PTH_260_350', 'PTH_GT350'],
        'PTH_200_350': ['PTH_200_260', 'PTH_260_350'],
        'PTH_GT350': ['PTH_GT350']
    },
    'njet': {
        'NJ_0': ['NJ_0'],
        'NJ_1': ['NJ_1'],
        'NJ_2': ['NJ_2'],
        'NJ_3': ['NJ_3'],
        'NJ_GE4': ['NJ_GE4']
    }
}

for obs, mapping in bin_mapping.iteritems():
    for key in mapping.keys():
        if key not in bins[obs]:
            mapping.pop(key)

bintitles = {}

bintitles['ptH'] = ['[0, 20]', '[20, 45]', '[45, 80]', '[80, 120]', '[120, 200]', '[200, #infty)']
#bintitles['ptH'] = ['[0, 15]', '[15, 30]', '[30, 60]', '[60, 120]', '[120, 200]', '[200, #infty)']
#bintitles['ptH'] = ['[0, 10]', '[10, 20]', '[20, 60]', '[60, 100]', '[100, 200]', '[200, #infty)']
bintitles['njet'] = ['0', '1', '2', '3', '#geq 4']

xtitles = {
    'ptH': 'p_{T}^{H} (GeV)',
    'njet': 'N_{jet}'
}

category_scheme = {
    'ptH': [4, 4, 4, 3, 2, 2],
    #'ptH': [4, 4, 4, 3, 2, 2, 1],
    'njet': [4, 4, 2, 1, 1]
}

def _variables_ptH(cut):
    if '_CR_' in cut:
        return 'events'
    elif 'pt2ge20' in cut:
        if 'PTH_100_200' in cut or 'PTH_120_200' in cut or 'PTH_200_350' in cut or 'PTH_GT200' in cut:
            return 'mllVSmth_4x3'
        else:
            return 'mllVSmth_6x6'
    else:
        if 'PTH_45_80' in cut or 'PTH_30_60' in cut or 'PTH_20_60' in cut:
            return 'mllVSmth_4x3'
        elif 'PTH_80_120' in cut or 'PTH_60_120' in cut or 'PTH_120_200' in cut or 'PTH_60_100' in cut or 'PTH_100_200' in cut:
            return 'mllVSmth_3x3'
        elif 'PTH_200_350' in cut or 'PTH_GT350' in cut or 'PTH_GT200' in cut:
            return 'mllVSmth_2x2'
        else:
            return 'mllVSmth_6x6'

def _variables_njet(cut):
    if '_CR_' in cut:
        return 'events'
    else:
        return 'mllVSmth_6x6'

variables = {
    'ptH': _variables_ptH,
    'njet': _variables_njet
}
