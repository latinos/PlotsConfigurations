handle = open('nuisances_full_fast.py', 'r')
exec(handle)
handle.close()

nuis_keys = nuisances.keys()
for key in nuis_keys:
    if key.startswith('fake_'):
        new_key = key.replace('fake_', 'fake_HT_')
        nuisances[new_key] = copy.deepcopy(nuisances[key])

        # Change sample
        if 'samples' in nuisances[new_key]:
            if 'type' in nuisances[new_key] and nuisances[new_key]['type'] == 'lnN':
                nuisances[new_key]['samples'] = {
                        'FAKE_HT': nuisances[key]['samples']['FAKE'],
                    }
            else:
                nuisances[new_key]['samples'] = {
                        'FAKE_HT': [
                            nuisances[key]['samples']['FAKE'][0].replace('FW_mu', 'FW_HT_mu'),
                            nuisances[key]['samples']['FAKE'][1].replace('FW_mu', 'FW_HT_mu')
                        ],
                    }
