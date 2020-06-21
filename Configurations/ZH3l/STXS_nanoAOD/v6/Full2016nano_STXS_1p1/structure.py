# structure configuration for datacard
# keys here must match keys in samples.py    
structure ={}

#missing qqH_htt
nominal= [ 'ggWW', 'ZgS', 'WWewk', 'VVV', 'top', 'Zg', 'ttV', 'WH_htt', 'WW', 'Fake_e', 'Fake', 'WH_hww', 'ZZ', 'DY', 'ttH_hww', 'Fake_m', 'ZH_htt', 'DATA', 'WZ' ]
stxs= [ 'ZH_hww_PTV_LT150' , 'ZH_hww_PTV_GT150' , 'ZH_hww_FWDH' , 'ggZH_hww_PTV_LT150' , 'ggZH_hww_PTV_GT150' , 'ggZH_hww_FWDH' ]

# keys here must match keys in samples.py 
for iproc in nominal+stxs:
    structure[iproc] = {
        'isSignal' : 1 if any(substring in iproc for substring in ['H_hww','H_htt']) else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
    }

structure['Zg']['removeFromCuts'] = ['zh3l_SR_1j_ptv_gt150']
structure['ZgS']['removeFromCuts'] = ['zh3l_SR_1j_ptv_gt150']
