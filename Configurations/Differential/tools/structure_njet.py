import os
import sys
import pprint
import re
import copy
import collections
sys.path.append('%s/src/PlotsConfigurations/Configurations/Differential/tools' % os.getenv('CMSSW_BASE'))
from update_nuisances import update_nuisances

observable = 'NJ'
background_minor = True

observable_bins = ['NJ_0', 'NJ_1', 'NJ_2', 'NJ_3', 'NJ_GE4']
observable_bin_mapping = {
    'NJ_0': ['NJ_0'],
    'NJ_1': ['NJ_1'],
    'NJ_2': ['NJ_2'],
    'NJ_3': ['NJ_3'],
    'NJ_GE4': ['NJ_GE4']
}

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

for cut in cuts.keys():
    if observable not in cut:
        cuts.pop(cut)

    elif '_WW_' in cut:
        cuts.pop(cut)

for sname in samples.keys():
    if '_hww' in sname and observable not in sname:
        samples.pop(sname)

sample_merging = {}
if background_minor:
    sample_merging['minor'] = []
    for sname in ['ggWW', 'WWewk', 'Vg', 'VgS_L', 'VgS_H', 'VZ', 'VVV']:
        if sname in samples:
            sample_merging['minor'].append(sname)

sample_merging['htt'] = []
for sname in samples.iterkeys():
    if '_htt' in sname:
        sample_merging['htt'].append(sname)

# assuming signal subsamples are exactly the binning used in the fit
# if gen-bins are merged in restructure_input, need to provide a mapping here externally
for out_bin, in_bins in observable_bin_mapping.iteritems():
    sample_merging['smH_hww_%s' % out_bin] = ['%s_%s' % (sname, in_bin) for in_bin in in_bins for sname in signals]

cut_merging = collections.defaultdict(list)

for cut in cuts:
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

nuisances = update_nuisances(nuisances, samples, cuts, sample_merging, cut_merging)

for nkey, nuisance in nuisances.items():
    if 'perRecoBin' in nuisance and nuisance['perRecoBin']:
        for bin in observable_bins:
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
    'mllVSmth_6x6': variables['mllVSmth_6x6']
}
variables = variables_tmp

variables['events']['cuts'] = []
variables['mllVSmth_6x6']['cuts'] = []

for cut in cuts:
    if '_CR_' in cut:
        variables['events']['cuts'].append(cut)
    elif 'pt2ge20' in cut:
        if 'NJ_2' in cut:
            variables['mllVSmth_6x6']['cuts'].append(cut)
        else:
            variables['mllVSmth_6x6']['cuts'].append(cut)
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
