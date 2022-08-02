# structure configuration for datacard
# keys here must match keys in samples.py    
structure ={}

# keys here must match keys in samples.py 
for iproc in samples.keys():
    structure[iproc] = {
        'isSignal' : 1 if any(substring in iproc for substring in ['H_hww','H_htt']) else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
    }

#structure['ZgS']['removeFromCuts'] = ['zh3l_SR_2j_ptv_gt150']

