# structure configuration for datacard
# keys here must match keys in samples.py    
structure ={}

# keys here must match keys in samples.py 
for iproc in samples.keys():
    structure[iproc] = { #set signal
        'isSignal' : 1 if 'ggH_OFF' in iproc else 0, #'Offshell' in iproc else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
    }

for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

    print nuis

