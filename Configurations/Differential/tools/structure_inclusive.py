import os
import sys
import pprint
import re
import copy
import collections
sys.path.append('%s/src/PlotsConfigurations/Configurations/Differential/tools' % os.getenv('CMSSW_BASE'))
from update_nuisances import update_nuisances

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
    if 'NJ_0' not in cut and 'NJ_1' not in cut and 'NJ_2' not in cut:
        cuts.pop(cut)

    elif '_WW_' in cut:
        cuts.pop(cut)

sample_merging = collections.defaultdict(list)

for sname in samples.keys():
    matches = re.match('(.+H_hww)_(PTH|NJ)', sname)
    if matches:
        if matches.group(2) == 'PTH':
            samples.pop(sname)
        else:
            sample_merging[matches.group(1)].append(sname)

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

nuisances = update_nuisances(nuisances, samples, cuts, sample_merging, cut_merging)

for nkey, nuisance in nuisances.items():
    if 'perRecoBin' in nuisance and nuisance['perRecoBin']:
        for bin in ['NJ_0', 'NJ_1', 'NJ_2']:
            nuisances[nkey + '_' + bin] = copy.deepcopy(nuisance)
            nuisances[nkey + '_' + bin]['name'] += '_' + bin
            nuisances[nkey + '_' + bin]['cuts'] = [cut for cut in nuisance['cuts'] if bin in cut]

        nuisances.pop(nkey)

for msname, snames in sample_merging.iteritems():
    for sname in snames:
        samples.pop(sname)

    samples[msname] = {}

for mcname, cnames in cut_merging.iteritems():
    for cut in cnames:
        cuts.pop(cut)

    cuts[mcname] = {}

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
