# structure configuration for datacard

structure = {}

# keys here must match keys in samples.py 
for iproc in ['Wg', 'ggWW', 'ZgS', 'ZZ', 'Vg', 'VVV', 'ggZH_hww', 'Zg', 'WW', 'WH_hww', 'WgS', 'Fake', 'H_htt', 'ZH_hww', 'DATA', 'WZ', 'VgS']:
    structure[iproc] = {
        'isSignal' : 1 if any(substring in iproc for substring in ['H_hww','H_htt']) else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
    }
