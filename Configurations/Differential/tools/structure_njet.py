import os
import sys
import pprint
import re
import copy
import collections
sys.path.append('%s/src/PlotsConfigurations/Configurations/Differential/tools' % os.getenv('CMSSW_BASE'))
from update_nuisances import update_nuisances
import binning

observable = 'NJ'
sample_merging = {
    #'WW': ['WW', 'ggWW'],
    #'minor': ['WWewk', 'Vg', 'VgS_L', 'VgS_H', 'VZ', 'VVV'],
    'minor': ['ggWW', 'WWewk', 'Vg', 'VgS_L', 'VgS_H', 'VZ', 'VVV'],
    'htt': []
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

for sname in samples.iterkeys():
    if '_htt' in sname:
        sample_merging['htt'].append(sname)

# assuming signal subsamples are exactly the binning used in the fit
# if gen-bins are merged in restructure_input, need to provide a mapping here externally
for out_bin, in_bins in binning.bin_mapping['njet'].iteritems():
    sample_merging['smH_hww_%s' % out_bin] = ['%s_%s' % (sname, in_bin) for in_bin in in_bins for sname in signals]

cut_merging = collections.defaultdict(list)

for cut in cuts:
    matches = re.match('(.+_)(NJ_[0-9GE]+)(_catpt2(?:ge|lt)20)([em][em])[mp][mp](_[0-9]+)', cut)
    if matches:
        for out_bin, in_bins in binning.bin_mapping['njet'].iteritems():
            if matches.group(2) in in_bins:
                break
        else:
            raise StopIteration('no matching bin for ' + matches.group(2))

        ibin = binning.bins['njet'].index(out_bin)
        ncat = binning.category_scheme['njet'][ibin]

        if ncat == 4:
            cut_merging[matches.group(1) + out_bin + matches.group(3) + matches.group(4) + matches.group(5)].append(cut)
        elif ncat == 3:
            if matches.group(3) == '_catpt2ge20':
                cut_merging[matches.group(1) + out_bin + matches.group(3) + matches.group(5)].append(cut)
            else:
                cut_merging[matches.group(1) + out_bin + matches.group(3) + matches.group(4) + matches.group(5)].append(cut)
        elif ncat == 2:
            cut_merging[matches.group(1) + out_bin + matches.group(3) + matches.group(5)].append(cut)
        elif ncat == 1:
            cut_merging[matches.group(1) + out_bin + matches.group(5)].append(cut)

        continue

    matches = re.match('(hww_CR_cat)(NJ_[0-9GE]+)(_.+)', cut)
    if matches:
        for out_bin, in_bins in binning.bin_mapping['njet'].iteritems():
            if matches.group(2) in in_bins:
                break
        else:
            raise StopIteration('no matching bin for ' + matches.group(2))

        cut_merging[matches.group(1) + out_bin + matches.group(3)].append(cut)

        continue

    raise RuntimeError()

# remove samples merged into WW, top, and DY from lumi uncertainties
for nname, nuis in nuisances.iteritems():
    if nname == 'stat' or not nuis['name'].startswith('lumi'):
        continue

    for newname in ['WW', 'top', 'DY']:
        if newname not in sample_merging:
            continue

        for sname in sample_merging[newname]:
            try:
                nuis['samples'].pop(sname)
            except KeyError:
                pass

nuisances = update_nuisances(nuisances, samples, cuts, sample_merging, cut_merging)

for nkey, nuisance in nuisances.items():
    if 'perRecoBin' in nuisance and nuisance['perRecoBin']:
        for bin in binning.bins['njet']:
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
    v = binning.variables['njet'](cut)
    variables[v]['cuts'].append(cut)

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
