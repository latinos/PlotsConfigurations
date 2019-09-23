"""
Datacard structure file if skipping the preprocessing step (i.e. no sample merging, no category merging, no signal variation renormalization).
"""

observable = 'NJ'

try:
    structure
except NameError:
    # executing standalone

    _samples_noload = True
    samples = {}
    with open('samples.py') as samplesfile:
        exec(samplesfile)
    
    cuts = {}
    with open('cuts.py') as cutsfile:
        exec(cutsfile)
    
    nuisances = {}
    with open('nuisances.py') as nuisancesfile:
        exec(nuisancesfile)

    variables = {}
    with open('variables.py') as variablesfile:
        exec(variablesfile)

    structure = {}

subsamplemap = {}
for sname, sample in samples.items():
    if 'subsamples' in sample:
        subsamplemap[sname] = []
        for sub in sample['subsamples']:
            if sname in signals and observable not in sub:
                continue

            samples['%s_%s' % (sname, sub)] = sample
            subsamplemap[sname].append(sub)

        samples.pop(sname)

categorymap = {}
for cname, cut in cuts.items():
    if observable not in cname:
        cuts.pop(cname)
        continue

    if 'categories' in cut:
        categorymap[cname] = []
        for cat in cut['categories']:
            if 'WW' in cat:
                continue

            cuts['%s_%s' % (cname, cat)] = cut
            categorymap[cname].append(cat)

        cuts.pop(cname)

variables_tmp = {
    'events': variables['events'],
    'mllVSmth_8x9': variables['mllVSmth_8x9'],
    'mllVSmth_6x6': variables['mllVSmth_6x6']
}
variables = variables_tmp

variables['events']['cuts'] = []
variables['mllVSmth_8x9']['cuts'] = []
variables['mllVSmth_6x6']['cuts'] = []

for cut in cuts:
    if '_CR_' in cut:
        variables['events']['cuts'].append(cut)
    elif 'pt2ge20' in cut:
        variables['mllVSmth_8x9']['cuts'].append(cut)
    else:
        variables['mllVSmth_6x6']['cuts'].append(cut)

for sname in samples:
    if sname == 'DATA':
        structure[sname] = {
            'isSignal' : 0,
            'isData'   : 1
        }
    elif '_hww' in sname:
        structure[sname] = {
            'isSignal' : 1,
            'isData'   : 0,
        }
    else:
        structure[sname] = {
            'isSignal' : 0,
            'isData'   : 0
        }
  
structure['Fake_em']['removeFromCuts'] = [cname for cname in cuts if '20me' in cname]
structure['Fake_me']['removeFromCuts'] = [cname for cname in cuts if '20em' in cname]
