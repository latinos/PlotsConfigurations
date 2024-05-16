# structure configuration for datacard
structure ={}

# keys here must match keys in samples.py 
for iproc in samples.keys():
    structure[iproc] = {
        'isSignal' : 1 if 'WW_B' in iproc else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
    }

structure['WW_B3']['removeFromCuts'] = ['ww2l2v_13TeV_top_1j']
structure['WW_B0']['removeFromCuts'] = ['ww2l2v_13TeV_top_3j']
structure['Vg']['removeFromCuts'] = ['ww2l2v_13TeV_top_0j']

for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

    print nuis
