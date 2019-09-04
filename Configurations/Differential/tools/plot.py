# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used.
# Stack plot is made in the given order.

# plot = {}

defs = [
    ('top', 'tW and t#bar{t}', ['top'], ROOT.kYellow, 0),
    #('WW', 'WW', ['WW', 'ggWW', 'WWewk'], ROOT.kAzure - 9, 0),
    ('WW', 'WW', ['WW'], ROOT.kAzure - 9, 0),
    ('ggWW', 'ggWW', ['ggWW'], ROOT.kMagenta + 1, 0),
    ('WWewk', 'WWewk', ['WWewk'], ROOT.kCyan + 1, 0),
    ('Fake', 'Non-prompt', ['Fake_em', 'Fake_me'], ROOT.kGray + 1, 0),
    ('DY', 'DY', ['DY'], ROOT.kGreen + 2, 0),
    ('VZ', 'VZ', ['VZ', 'VgS_H'], ROOT.kViolet + 1, 0),
    ('Vg', 'V#gamma', ['Vg'], ROOT.kOrange + 10, 0),
    ('VgS', 'V#gamma*', ['VgS_L'], ROOT.kGreen - 9, 0),
    ('VVV', 'VVV', ['VVV'], ROOT.kAzure - 3, 0),
    ('Higgs_bkg', 'Higgs bkg', ['ZH_htt', 'WH_htt', 'qqH_htt', 'ggH_htt'], ROOT.kRed + 2, 0),
    ('Higgs_signal', 'Higgs signal', [], ROOT.kRed, 1)
]

for signal in ['ggH_hww', 'qqH_hww', 'ZH_hww', 'WH_hww', 'ttH_hww']:
    for nj in ['0', '1', '2', '3', 'GE4']:
        defs[-1][2].append('%s_NJ_%s' % (signal, nj))

for group, title, snames, color, isSignal in defs:
    for sname in snames:
        plot[sname]  = {  
            'color': color,
            'isSignal': isSignal,
            'isData': 0,
            'scale': 1.
        }
    
    groupPlot[group]  = {
        'nameHR': title,
        'isSignal': isSignal,
        'color': color,
        'samples': snames
    }

# data

plot['DATA']  = { 
    'nameHR': 'Data',
    'color': 1,  
    'isSignal': 0,
    'isData': 1,
    'isBlind': 0
}

# additional options

legend['sqrt'] = '#sqrt{s} = 13 TeV'
