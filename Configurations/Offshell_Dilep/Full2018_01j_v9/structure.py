# structure configuration for datacard
# keys here must match keys in samples.py    
structure ={}

# keys here must match keys in samples.py 
for iproc in samples.keys():
    structure[iproc] = {
        'isSignal' : 1 if ('Offshell' in iproc or 'qqH_sonly_off' in iproc or 'qqH_bonly_off'  in iproc or 'qqH_sonly_on'  in iproc or 'qqH_bonly_on'  in iproc) else 0, ##TC 2024 have sand which we don't count as signal, so we need no double counting...and qqH not independent samples!
        'isData'   : 1 if iproc == 'DATA' else 0,
    }

for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

    print nuis

