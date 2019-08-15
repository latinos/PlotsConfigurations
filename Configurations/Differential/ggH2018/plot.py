# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used.
# Stack plot is made in the given order.

# plot = {}

defs = [
    ('top', 'tW and t#bar{t}', ['top'], ROOT.kYellow, 0),
    ('WW', 'WW', ['WW', 'ggWW', 'WWewk'], ROOT.kAzure - 9, 0),
    ('Fake', 'Non-prompt', ['Fake'], ROOT.kGray + 1, 0),
    ('DY', 'DY', ['DY'], ROOT.kGreen + 2, 0),
    ('VZ', 'VZ', ['VZ', 'VgS_H'], ROOT.kViolet + 1, 0),
    ('Vg', 'V#gamma', ['Vg'], ROOT.kOrange + 10, 0),
    ('VgS', 'V#gamma*', ['VgS_L'], ROOT.kGreen - 9, 0),
    ('VVV', 'VVV', ['VVV'], ROOT.kAzure - 3, 0),
    #('Higgs_bkg', 'Higgs bkg', ['ZH_htt', 'WH_htt', 'qqH_htt', 'ggH_htt'], ROOT.kRed + 2, 0),
    ('Higgs_bkg', 'Higgs bkg', ['qqH_htt', 'ggH_htt'], ROOT.kRed + 2, 0),
    ('Higgs_signal', 'Higgs signal', ['ggH_hww', 'qqH_hww', 'ZH_hww', 'WH_hww', 'ttH_hww'], ROOT.kRed, 1)
]

# Case like VgS_H/L above - if we already split subsamples in the defs, we need to know beforehand the full subsample names
flattenedSamples = set()
for sname in samples.keys():
    sample = samples[sname]
    if 'subsamples' in sample:
        flattenedSamples.update('%s_%s' % (sname, sub) for sub in sample['subsamples'] if 'PTH' not in sub)
    else:
        flattenedSamples.add(sname)

for group, title, snames, color, isSignal in defs:
    snamesWithSub = []
    for sname in list(snames):
        try:
            sample = samples[sname]
        except KeyError:
            if sname in flattenedSamples:
                snamesWithSub.append(sname)
            else:
                raise
        else:
            if 'subsamples' in sample:
                snamesWithSub.extend('%s_%s' % (sname, sub) for sub in sample['subsamples'] if 'PTH' not in sub)
            else:
                snamesWithSub.append(sname)

    for sname in snamesWithSub:
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
        'samples': snamesWithSub
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

legend['lumi'] = 'L = 59.7/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'

# flatten sample and cut lists

for sname in samples.keys():
    sample = samples[sname]
    if 'subsamples' in sample:
        for sub in sample['subsamples']:
            if 'PTH' in sub:
                continue
            
            samples['%s_%s' % (sname, sub)] = sample

        samples.pop(sname)

for cname in cuts.keys():
    if 'PTH' in cname:
        cuts.pop(cname)
        continue
    
    cut = cuts[cname]
    if 'categories' in cut:
        for cat in cut['categories']:
            cuts['%s_%s' % (cname, cat)] = cut

        cuts.pop(cname)
