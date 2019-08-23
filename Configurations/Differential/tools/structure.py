import os
import sys
import pprint
import re
import copy
import collections
sys.path.append('%s/src/PlotsConfigurations/Configurations/Differential/tools' % os.getenv('CMSSW_BASE'))
from update_nuisances import update_nuisances

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

sample_merging = {}
sample_merging['minor'] = []
for sname in ['ggWW', 'WWewk', 'Vg', 'VgS_L', 'VgS_H', 'VZ', 'VVV']:
    if sname in samples:
        sample_merging['minor'].append(sname)

sample_merging['htt'] = []
for sname in samples.iterkeys():
    if '_htt' in sname:
        sample_merging['htt'].append(sname)

for sub in subsamplemap['ggH_hww']:
    sample_merging['smH_hww_%s' % sub] = []

# assuming signal subsamples are exactly the binning used in the fit
# if gen-bins are merged in restructure_input, need to provide a mapping here externally
for sname, subs in subsamplemap.iteritems():
    if '_hww' in sname:
        for sub in subs:
            sample_merging['smH_hww_%s' % sub].append('%s_%s' % (sname, sub))

cut_merging = collections.defaultdict(list)
reco_bins = set()

for cut in cuts:
    matches = re.match('.+_((?:NJ|PTH)_[0-9GET]+).+', cut)
    if matches:
        reco_bins.add(matches.group(1))

    matches = re.match('(.+_NJ_[01]_.+[em][em])[mp][mp](_[0-9]+)', cut)
    if matches:
        cut_merging[matches.group(1) + matches.group(2)].append(cut)
        continue

    matches = re.match('(.+_NJ_2_.+)[em][em][mp][mp](_[0-9]+)', cut)
    if matches:
        cut_merging[matches.group(1) + matches.group(2)].append(cut)
        continue

    matches = re.match('(.+_NJ_(?:3|GE4))_.+[em][em][mp][mp](_[0-9]+)', cut)
    if matches:
        cut_merging[matches.group(1) + matches.group(2)].append(cut)
        continue

    matches = re.match('(.+_PTH_(?:0_20|20_45|45_80)_.+[em][em])[mp][mp](_[0-9]+)', cut)
    if matches:
        cut_merging[matches.group(1) + matches.group(2)].append(cut)
        continue

    matches = re.match('(.+_PTH_80_120_catpt2lt20[em][em])[mp][mp](_[0-9]+)', cut)
    if matches:
        cut_merging[matches.group(1) + matches.group(2)].append(cut)
        continue

    matches = re.match('(.+_PTH_80_120_catpt2ge20)[em][em][mp][mp](_[0-9]+)', cut)
    if matches:
        cut_merging[matches.group(1) + matches.group(2)].append(cut)
        continue

    matches = re.match('(.+_PTH_(?:120_200|200_350)_.+)[em][em][mp][mp](_[0-9]+)', cut)
    if matches:
        cut_merging[matches.group(1) + matches.group(2)].append(cut)
        continue

    matches = re.match('(.+_PTH_GT350)_.+[em][em][mp][mp](_[0-9]+)', cut)
    if matches:
        cut_merging[matches.group(1) + matches.group(2)].append(cut)
        continue

nuisances = update_nuisances(nuisances, samples, subsamplemap, cuts, categorymap, sample_merging, cut_merging)

#pprint.pprint(nuisances)

for nkey, nuisance in nuisances.items():
    if 'perRecoBin' in nuisance and nuisance['perRecoBin']:
        for bin in reco_bins:
            nuisances[nkey + '_' + bin] = copy.deepcopy(nuisance)
            nuisances[nkey + '_' + bin]['name'] += '_' + bin
            nuisances[nkey + '_' + bin]['cuts'] = [cut for cut in nuisance['cuts'] if bin in cut]

        nuisances.pop(nkey)

    # AsLnN nuisances are all converted to shape (nominal scaled to variation normalization) in restructure
    if 'AsLnN' in nuisance:
        # If the nuisance applies to compound (merged) samples, need to treat it as shape
        if len(set(nuisance['samples'].iterkeys()) & set(sample_merging.iterkeys())) != 0:
            nuisance.pop('AsLnN')

merged_samples = set()
for sources in sample_merging.itervalues():
    merged_samples.update(sources)

merged_cuts = set()
for sources in cut_merging.itervalues():
    merged_cuts.update(sources)

sample_list = [sname for sname in sample_merging.iterkeys() if '_hww' not in sname]
for sname in samples:
    if sname not in merged_samples and '_hww' not in sname:
        sample_list.append(sname)
sample_list.sort()
signal_list = [sname for sname in sample_merging.iterkeys() if '_hww' in sname]
for sname in samples:
    if sname not in merged_samples and '_hww' in sname:
        signal_list.append(sname)
signal_list.sort(key=lambda sname: int(re.match('.+H_hww_[^_]+_(?:GE|GT|)([0-9]+)', sname).group(1)))
sample_list.extend(signal_list)

cut_list = cut_merging.keys()
for cname in cuts:
    if cname not in merged_cuts:
        cut_list.append(cname)
cut_list.sort()

samples = sample_list
cuts = cut_list

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

