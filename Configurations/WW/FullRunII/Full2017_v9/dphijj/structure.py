# structure configuration for datacard
structure ={}

# keys here must match keys in samples.py 
for iproc in samples.keys():
    structure[iproc] = {
        'isSignal' : 1 if 'WW_B' in iproc else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
    }

structure['WW_B10']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B6']
structure['WW_B5']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B1']
structure['WW_B3']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B9']
structure['WW_B8']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B6']
structure['Vg']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B1','ww2l2v_13TeV_sr_2j_B13','ww2l2v_13TeV_sr_2j_B12','ww2l2v_13TeV_sr_2j_B3']

for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

    print nuis
