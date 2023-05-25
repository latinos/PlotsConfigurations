# structure configuration for datacard
# keys here must match keys in samples.py    
structure ={}

# keys here must match keys in samples.py 
for iproc in samples.keys():
    structure[iproc] = {
        'isSignal' : 1 if 'WW_B' in iproc else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
    }

structure['Vg']['removeFromCuts']       = ['ww2l2v_13TeV_sr_2j_B3']
structure['WW_B7']['removeFromCuts']    = ['ww2l2v_13TeV_sr_2j_B3']
structure['ggWW_B0']['removeFromCuts']  = ['ww2l2v_13TeV_sr_2j_B4']
structure['ggWW_B1']['removeFromCuts']  = ['ww2l2v_13TeV_sr_2j_B10']
structure['ggWW_B2']['removeFromCuts']  = ['ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B8']
structure['ggWW_B3']['removeFromCuts']  = ['ww2l2v_13TeV_sr_2j_B6']
structure['ggWW_B4']['removeFromCuts']  = ['ww2l2v_13TeV_sr_2j_B6']
structure['ggWW_B6']['removeFromCuts']  = ['ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B11']
structure['ggWW_B7']['removeFromCuts']  = ['ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B13', 'ww2l2v_13TeV_sr_2j_B2', 'ww2l2v_13TeV_sr_2j_B3']
structure['ggWW_B8']['removeFromCuts']  = ['ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B13']
structure['ggWW_B9']['removeFromCuts']  = ['ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_2j_B2', 'ww2l2v_13TeV_sr_2j_B5']
structure['ggWW_B10']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B2']
structure['ggWW_B11']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B13', 'ww2l2v_13TeV_sr_2j_B9']
structure['ggWW_B13']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B9']

for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

    print nuis


