# structure configuration for datacard
# keys here must match keys in samples.py    
structure ={}

# keys here must match keys in samples.py 
for iproc in samples.keys():
    structure[iproc] = {
        'isSignal' : 1 if 'WW_B' in iproc else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
    }

structure['DY']['removeFromCuts']      = ['ww2l2v_13TeV_sr_2j_B6']
structure['Vg']['removeFromCuts']      = ['ww2l2v_13TeV_sr_2j_B4']
structure['WW_B0']['removeFromCuts']   = ['ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B7']
structure['WW_B1']['removeFromCuts']   = ['ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B7']
structure['WW_B2']['removeFromCuts']   = ['ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B7']
structure['WW_B4']['removeFromCuts']   = ['ww2l2v_13TeV_sr_2j_B0']
structure['WW_B5']['removeFromCuts']   = ['ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B7']
structure['WW_B6']['removeFromCuts']   = ['ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B2']
structure['WW_B7']['removeFromCuts']   = ['ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B5']
structure['ggWW_B0']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B7']
structure['ggWW_B1']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B7']
structure['ggWW_B2']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B7']
structure['ggWW_B3']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B7']
structure['ggWW_B4']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B7']
structure['ggWW_B5']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B2', 'ww2l2v_13TeV_sr_2j_B7']
structure['ggWW_B6']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B2', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B7']
structure['ggWW_B7']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B2', 'ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_top_2j']

for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

    print nuis


