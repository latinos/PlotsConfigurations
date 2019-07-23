# structure configuration for datacard

#structure = {}

# imported from samples.py:
# samples, treeBaseDir, mcProduction, mcSteps
# imported from cuts.py
# cuts

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

background = [skey for skey in samples if skey != 'DATA' and skey not in signals]

for skey in background:
  structure[skey]  = {
      'isSignal' : 0,
      'isData'   : 0
  }

structure['Fake_em']['removeFromCuts'] = [ckey for ckey in cuts if '20me' in ckey]
structure['Fake_me']['removeFromCuts'] = [ckey for ckey in cuts if '20em' in ckey]

for skey in signals:
  if skey.endswith('hww'):
    structure[skey]  = {
        'isSignal' : 1,
        'isData'   : 0
    }
  else:
    structure[skey]  = {
        'isSignal' : 0,
        'isData'   : 0
    }

structure['DATA']  = {
    'isSignal' : 0,
    'isData'   : 1
}

for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

  if 'samplespost' in nuis:
    nuis['samples'] = nuis['samplespost'](nuis, cuts)

# Add major background rateParam here

nuisances['WWnorm'] = {
    'name': 'CMS_hww_WWnorm',
    'samples': {'WW': '1.00'},
    'type': 'rateParam',
    'perRecoBin': True
}

nuisances['DYnorm'] = {
    'name': 'CMS_hww_DYnorm',
    'samples': {'DY': '1.00'},
    'type': 'rateParam',
    'perRecoBin': True
}

nuisances['topnorm'] = {
    'name': 'CMS_hww_topnorm',
    'samples': {'top': '1.00'},
    'type': 'rateParam',
    'perRecoBin': True
}
