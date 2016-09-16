# statistical fluctuation
# on MC/data
# "stat" is a special word to identify this nuisance
nuisances['stat']  = {
    # apply to the following samples: name of samples here must match keys in samples.py
    'samples'  : {
        
        'ttbar': {
            'typeStat' : 'bbb',
            },
        
        'singletop': {
            'typeStat' : 'bbb',
            },
        
        'top': {
            'typeStat' : 'bbb',
            },
        
        'DY': {
            'typeStat' : 'bbb',
            #'keepNormalization' : '1'  # default = 0 -> 0=don't keep normalization
            },
        
        'ggWW': {
            'typeStat' : 'bbb',
            },
        
        'ggWW_Int': {
            'typeStat' : 'bbb',
            },
        
        'WW': {
            'typeStat' : 'bbb',
            },
        
        'VZ': {
            'typeStat' : 'bbb',
            },
        
        'WZ': {
            'typeStat' : 'bbb',
            },
        
        'VVV': {
            'typeStat' : 'bbb',
            },
        
        'H_hww': {
            'typeStat' : 'bbb',
            },
        
        'ggH_hww': {
            'typeStat' : 'bbb',
            },
        
        'qqH_hww': {
            'typeStat' : 'bbb',
            },
        
        'WH_hww': {
            'typeStat' : 'bbb',
            },
        
        'ZH_hww': {
            'typeStat' : 'bbb',
            },
        
        'H_htt': {
            'typeStat' : 'bbb',
            },
        
        'ggH_htt': {
            'typeStat' : 'bbb',
            },
        
        'qqH_htt': {
            'typeStat' : 'bbb',
            },
        
        'WH_htt': {
            'typeStat' : 'bbb',
            },
        
        'ZH_htt': {
            'typeStat' : 'bbb',
            },
        
        'ggZH_hww': {
            'typeStat' : 'bbb',
            },
        
        'Fake': {  # needed? YES?
            'typeStat' : 'bbb',
            },
        
        'Vg': {  
            'typeStat' : 'bbb',
            },
        
        'VgS': {  
            'typeStat' : 'bbb',
            },
        
        },
    'type'  : 'shape'
    }


