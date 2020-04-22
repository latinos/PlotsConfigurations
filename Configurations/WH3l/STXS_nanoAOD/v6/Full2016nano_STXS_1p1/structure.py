# structure configuration for datacard

structure = {}

nominal = ['Wg', 'ggWW', 'ZgS', 'ZZ', 'Vg', 'VVV', 'ggZH_hww', 'Zg', 'WW', 'WH_hww', 'WgS', 'Fake', 'H_htt', 'ZH_hww', 'DATA', 'WZ', 'VgS']
stxs = ['WH_hww_PTV_LT150','WH_hww_PTV_GT150','WH_hww_FWDH']

# keys here must match keys in samples.py 
for iproc in nominal+stxs:
    structure[iproc] = {
        'isSignal' : 1 if any(substring in iproc for substring in ['H_hww','H_htt']) else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
    }
