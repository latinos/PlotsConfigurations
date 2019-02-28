# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used.
# Stack plot is made in the given order.

# plot = {}

defs = [
    ('top', 'tW and t#bar{t}', ['top'], ROOT.kYellow),
    ('WW', 'WW', ['WW', 'ggWW'], ROOT.kAzure - 9),
    ('Fake', 'Non-prompt', ['Fake'], ROOT.kGray + 1),
    ('DY', 'DY', ['DY'], ROOT.kGreen + 2),
    ('VZ', 'VZ', ['VZ'], ROOT.kViolet + 1),
    ('Vg', 'V#gamma', ['Vg'], ROOT.kOrange + 10),
    ('VgS', 'V#gamma*', ['WZgS'], ROOT.kGreen - 9),
    ('VVV', 'VVV', ['VVV'], ROOT.kAzure - 3),
    ('Higgs_bkg', 'Higgs bkg', ['H_htt', 'ZH_hww', 'ttH_hww', 'ggH_hww', 'WH_hww', 'ggZH_hww', 'qqH_hww'], ROOT.kRed + 2)
]

for group, title, snames, color in defs:
    groupPlot[group]  = {
        'nameHR': title,
        'isSignal': 0,
        'color': color,
        'samples': snames
    }

    for sname in snames:
        plot[sname]  = {  
            'color': color,
            'isSignal': 0,
            'isData': 0,
            'scale': 1.
        }

#name = 'Higgs_signal'
#title = 'Higgs signal'
snames = []
#snames = ['ggH_hww', 'XH_hww']
#color = ROOT.kRed

#groupPlot[name]  = {
#    'nameHR': title,
#    'isSignal': 1,
#    'color': color,
#    'samples': snames
#}

for sname in snames:
    plot[sname] = {
        'color': color,
        'isSignal': 1,
        'isData': 0,    
        'scale': 1.
    }

    # drop binned signal samples
    for key in samples.keys():
        if key.startswith(sname) and len(key) > len(sname):
            samples.pop(key)

# data

plot['DATA']  = { 
    'nameHR': 'Data',
    'color': 1,  
    'isSignal': 0,
    'isData': 1,
    'isBlind': 0
}

# additional options

legend['lumi'] = 'L = 4.3/fb (RunD)'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
