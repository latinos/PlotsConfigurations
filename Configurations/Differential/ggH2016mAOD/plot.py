# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used.
# Stack plot is made in the given order.

# plot = {}

import copy

for sname, sample in samples.items():
  if sname not in signals and 'subsamples' in sample:
    for sub in sample['subsamples']:
      samples['%s_%s' % (sname, sub)] = copy.deepcopy(sample)
      samples['%s_%s' % (sname, sub)].pop('subsamples')

    for nuis in nuisances.itervalues():
      if 'samples' in nuis and sname in nuis['samples']:
        spec = nuis['samples'].pop(sname)
        for sub in sample['subsamples']:
          nuis['samples']['%s_%s' % (sname, sub)] = spec

    samples.pop(sname)

for cname, cut in cuts.items():
  if 'categories' in cut:
    for cat in cut['categories']:
      if '_WW_' in cat:
        continue
      cuts['%s_%s' % (cname, cat)] = copy.deepcopy(cut)
      cuts['%s_%s' % (cname, cat)].pop('categories')

    for nuis in nuisances.itervalues():
      if 'cuts' in nuis and cname in nuis['cuts']:
        nuis['cuts'].remove(cname)
        for cat in cut['categories']:
          if '_WW_' in cat:
            continue
          nuis['cuts'].append('%s_%s' % (cname, cat))

    cuts.pop(cname)

bkgdefs = [
    ('top', 'tW and t#bar{t}', ['top'], ROOT.kYellow),
    ('WW', 'WW', ['WW', 'ggWW', 'WWewk'], ROOT.kAzure - 9),
    ('Fake', 'Non-prompt', ['Fake_em', 'Fake_me'], ROOT.kGray + 1),
    ('DY', 'DY', ['DY'], ROOT.kGreen + 2),
    ('VZ', 'VZ', ['VZ', 'VgS_H'], ROOT.kViolet + 1),
    ('Vg', 'V#gamma', ['Vg'], ROOT.kOrange + 10),
    ('VgS', 'V#gamma*', ['VgS_L'], ROOT.kGreen - 9),
    ('VVV', 'VVV', ['VVV'], ROOT.kAzure - 3),
    ('Higgs_bkg', 'Higgs bkg', [sname for sname in signals if 'htt' in sname], ROOT.kRed + 2)
]

for group, title, snames, color in bkgdefs:
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

snames = [sname for sname in signals if 'hww' in sname]

groupPlot['Higgs_signal']  = {
    'nameHR': 'Higgs signal',
    'isSignal': 1,
    'color': ROOT.kRed,
    'samples': snames
}

for sname in snames:
    plot[sname] = {
        'color': color,
        'isSignal': 1,
        'isData': 0,    
        'scale': 1.,
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

legend['lumi'] = 'L = 35.9/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'

for nuisance in nuisances.itervalues():
    if 'cutspost' in nuisance:
        nuisance['cuts'] = nuisance['cutspost'](nuisance, cuts)
    if 'samplespost' in nuisance:
        nuisance['samples'] = nuisance['samplespost'](nuisance, samples)

for variable in variables.itervalues():
    if 'cutspost' in variable:
        variable['cuts'] = variable['cutspost'](variable, cuts)
