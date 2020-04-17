# structure configuration for datacard
# keys here must match keys in samples.py    
structure ={}

['ggWW', 'ggZH_hww', 'ZgS', 'WWewk', 'VVV', 'top', 'Zg', 'ttV', 'WH_htt', 'WW', 'Fake_e', 'Fake', 'WH_hww', 'ZZ', 'DY', 'ttH_hww', 'Fake_m', 'ZH_htt', 'DATA', 'WZ', 'ZH_hww']

# keys here must match keys in samples.py 
for iproc in ['ggWW', 'ggZH_hww', 'ZgS', 'WWewk', 'VVV', 'top', 'Zg', 'ttV', 'WH_htt', 'WW', 'Fake_e', 'Fake', 'WH_hww', 'ZZ', 'DY', 'ttH_hww', 'Fake_m', 'ZH_htt', 'DATA', 'WZ', 'ZH_hww']:
    structure[iproc] = {
        'isSignal' : 1 if any(substring in iproc for substring in ['H_hww','H_htt']) else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
    }
print structure
