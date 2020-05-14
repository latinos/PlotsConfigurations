# structure configuration for datacard

structure = {}

nominal=['WWewk', 'ZZ', 'Fake_ee', 'Fake_mm', 'Fake_em', 'WW', 'DY', 'WZhad', 'DATA', 'Wg', 'qqH_hww', 'VVV', 'top', 'ZgS', 'ttV', 'ggWW', 'ZH_hww', 'WgS', 'ggZH_hww', 'WZ', 'ggH_hww', 'qqH_htt', 'ggH_htt', 'Zg', 'WH_htt', 'ZH_htt', 'ttH_hww']
stxs=['WH_hww_PTV_LT150' , 'WH_hww_PTV_GT150' , 'WH_hww_FWDH']

# keys here must match keys in samples.py
for iproc in nominal+stxs:
    structure[iproc] = {
        'isSignal' : 1 if any(substring in iproc for substring in ['H_hww','H_htt']) else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
    }
