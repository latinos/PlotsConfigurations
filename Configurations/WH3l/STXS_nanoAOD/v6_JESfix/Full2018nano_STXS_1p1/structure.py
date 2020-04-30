# structure configuration for datacard

structure = {}
nominal = ['WW', 'Wg', 'Zg', 'WgS', 'ZgS', 'ZZ', 'WZ', 'VVV', 'ggH_hww', 'qqH_hww', 'ZH_hww', 'ggZH_hww', 'ttH_hww', 'ggH_htt', 'qqH_htt', 'ZH_htt', 'WH_htt', 'Fake', 'DATA']
stxs = ['WH_hww_PTV_LT150','WH_hww_PTV_GT150','WH_hww_FWDH']

# keys here must match keys in samples.py 
for iproc in nominal+stxs:
    structure[iproc] = {
        'isSignal' : 1 if any(substring in iproc for substring in ['H_hww','H_htt']) else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
    }
