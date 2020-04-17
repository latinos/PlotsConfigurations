# structure configuration for datacard

structure = {}

# keys here must match keys in samples.py
for iproc in ['WWewk', 'ZZ', 'Fake_ee', 'Fake_mm', 'Fake_em', 'WW', 'WH_hww', 'DY', 'WZhad', 'DATA', 'Wg', 'qqH_hww', 'VVV', 'top', 'ZgS', 'ttV', 'ggWW', 'ZH_hww', 'WgS_L', 'ggZH_hww', 'WgS_H', 'ggH_hww', 'qqH_htt', 'ggH_htt', 'Zg', 'WH_htt', 'ZH_htt']:
    structure[iproc] = {
        'isSignal' : 1 if any(substring in iproc for substring in ['H_hww','H_htt']) else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
    }
