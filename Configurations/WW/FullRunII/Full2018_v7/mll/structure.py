# structure configuration for datacard
# keys here must match keys in samples.py    
structure ={}

# keys here must match keys in samples.py 
for iproc in samples.keys():
    structure[iproc] = {
        'isSignal' : 1 if 'WW_B' in iproc else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
    }

structure['ggWW_B10']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_sr_1j_B6', 'ww2l2v_13TeV_sr_1j_B7', 'ww2l2v_13TeV_sr_1j_B4', 'ww2l2v_13TeV_sr_1j_B5', 'ww2l2v_13TeV_sr_1j_B2', 'ww2l2v_13TeV_sr_1j_B3', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_1j_B1', 'ww2l2v_13TeV_sr_0j_B7', 'ww2l2v_13TeV_sr_0j_B6', 'ww2l2v_13TeV_sr_0j_B5', 'ww2l2v_13TeV_sr_0j_B4', 'ww2l2v_13TeV_sr_0j_B3', 'ww2l2v_13TeV_sr_0j_B2', 'ww2l2v_13TeV_sr_0j_B1', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_sr_2j_B2', 'ww2l2v_13TeV_sr_2j_B8']
structure['ggWW_B11']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_sr_1j_B6', 'ww2l2v_13TeV_sr_1j_B7', 'ww2l2v_13TeV_sr_1j_B4', 'ww2l2v_13TeV_sr_1j_B5', 'ww2l2v_13TeV_sr_1j_B2', 'ww2l2v_13TeV_sr_1j_B1', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B8', 'ww2l2v_13TeV_sr_0j_B7', 'ww2l2v_13TeV_sr_0j_B6', 'ww2l2v_13TeV_sr_0j_B5', 'ww2l2v_13TeV_sr_0j_B4', 'ww2l2v_13TeV_sr_0j_B3', 'ww2l2v_13TeV_sr_0j_B2', 'ww2l2v_13TeV_sr_0j_B1', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_sr_2j_B2', 'ww2l2v_13TeV_sr_2j_B8', 'ww2l2v_13TeV_sr_1j_B8']
structure['ggWW_B12']['removeFromCuts'] = ['ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_sr_1j_B7', 'ww2l2v_13TeV_sr_1j_B4', 'ww2l2v_13TeV_sr_1j_B5', 'ww2l2v_13TeV_sr_1j_B2', 'ww2l2v_13TeV_sr_1j_B3', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_sr_1j_B1', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B8', 'ww2l2v_13TeV_sr_0j_B7', 'ww2l2v_13TeV_sr_0j_B6', 'ww2l2v_13TeV_sr_0j_B5', 'ww2l2v_13TeV_sr_0j_B3', 'ww2l2v_13TeV_sr_0j_B2', 'ww2l2v_13TeV_sr_0j_B1', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_sr_2j_B2', 'ww2l2v_13TeV_sr_2j_B9', 'ww2l2v_13TeV_sr_2j_B8', 'ww2l2v_13TeV_sr_1j_B8', 'ww2l2v_13TeV_sr_1j_B9']
structure['DY']['removeFromCuts'] = ['ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B1', 'ww2l2v_13TeV_sr_0j_B0']
structure['ggWW_B6']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B10', 'ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_sr_1j_B3', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_1j_B1', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B8', 'ww2l2v_13TeV_sr_0j_B1', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_sr_2j_B2', 'ww2l2v_13TeV_sr_2j_B9', 'ww2l2v_13TeV_sr_2j_B8', 'ww2l2v_13TeV_sr_1j_B8', 'ww2l2v_13TeV_sr_1j_B9']
structure['ggWW_B7']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B10', 'ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_sr_1j_B2', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_1j_B1', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B3', 'ww2l2v_13TeV_sr_0j_B2', 'ww2l2v_13TeV_sr_0j_B1', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_sr_2j_B2', 'ww2l2v_13TeV_sr_2j_B9', 'ww2l2v_13TeV_sr_1j_B9']
structure['ggWW_B4']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B10', 'ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_sr_1j_B6', 'ww2l2v_13TeV_sr_1j_B7', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B8', 'ww2l2v_13TeV_sr_0j_B7', 'ww2l2v_13TeV_sr_0j_B6', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_sr_2j_B9', 'ww2l2v_13TeV_sr_2j_B8', 'ww2l2v_13TeV_sr_1j_B8', 'ww2l2v_13TeV_sr_1j_B9']
structure['ggWW_B5']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B10', 'ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_sr_1j_B7', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_1j_B1', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B8', 'ww2l2v_13TeV_sr_0j_B7', 'ww2l2v_13TeV_sr_0j_B1', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_sr_2j_B2', 'ww2l2v_13TeV_sr_2j_B9', 'ww2l2v_13TeV_sr_2j_B8', 'ww2l2v_13TeV_sr_1j_B8', 'ww2l2v_13TeV_sr_1j_B9']
structure['ggWW_B2']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B10', 'ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_top_1j', 'ww2l2v_13TeV_sr_1j_B6', 'ww2l2v_13TeV_sr_1j_B7', 'ww2l2v_13TeV_sr_1j_B4', 'ww2l2v_13TeV_sr_1j_B5', 'ww2l2v_13TeV_top_2j', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_top_0j', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B8', 'ww2l2v_13TeV_sr_0j_B7', 'ww2l2v_13TeV_sr_0j_B6', 'ww2l2v_13TeV_sr_0j_B5', 'ww2l2v_13TeV_sr_0j_B4', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_2j_B9', 'ww2l2v_13TeV_sr_2j_B8', 'ww2l2v_13TeV_sr_1j_B8', 'ww2l2v_13TeV_sr_1j_B9']
structure['ggWW_B3']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B10', 'ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_sr_1j_B6', 'ww2l2v_13TeV_sr_1j_B7', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B8', 'ww2l2v_13TeV_sr_0j_B7', 'ww2l2v_13TeV_sr_0j_B6', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_sr_2j_B9', 'ww2l2v_13TeV_sr_2j_B8', 'ww2l2v_13TeV_sr_1j_B8', 'ww2l2v_13TeV_sr_1j_B9']
structure['ggWW_B0']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B10', 'ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_top_1j', 'ww2l2v_13TeV_sr_1j_B6', 'ww2l2v_13TeV_sr_1j_B7', 'ww2l2v_13TeV_sr_1j_B4', 'ww2l2v_13TeV_sr_1j_B5', 'ww2l2v_13TeV_sr_1j_B2', 'ww2l2v_13TeV_top_2j', 'ww2l2v_13TeV_sr_1j_B3', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_top_0j', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B8', 'ww2l2v_13TeV_sr_0j_B7', 'ww2l2v_13TeV_sr_0j_B6', 'ww2l2v_13TeV_sr_0j_B5', 'ww2l2v_13TeV_sr_0j_B4', 'ww2l2v_13TeV_sr_0j_B3', 'ww2l2v_13TeV_sr_0j_B2', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B2', 'ww2l2v_13TeV_sr_2j_B9', 'ww2l2v_13TeV_sr_2j_B8', 'ww2l2v_13TeV_sr_1j_B8', 'ww2l2v_13TeV_sr_1j_B9']
structure['ggWW_B1']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B10', 'ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_top_1j', 'ww2l2v_13TeV_sr_1j_B6', 'ww2l2v_13TeV_sr_1j_B7', 'ww2l2v_13TeV_sr_1j_B4', 'ww2l2v_13TeV_sr_1j_B5', 'ww2l2v_13TeV_top_2j', 'ww2l2v_13TeV_sr_1j_B3', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_top_0j', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B8', 'ww2l2v_13TeV_sr_0j_B7', 'ww2l2v_13TeV_sr_0j_B6', 'ww2l2v_13TeV_sr_0j_B5', 'ww2l2v_13TeV_sr_0j_B4', 'ww2l2v_13TeV_sr_0j_B3', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B9', 'ww2l2v_13TeV_sr_2j_B8', 'ww2l2v_13TeV_sr_1j_B8', 'ww2l2v_13TeV_sr_1j_B9']
structure['ggWW_B8']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B10', 'ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_sr_1j_B4', 'ww2l2v_13TeV_sr_1j_B5', 'ww2l2v_13TeV_sr_1j_B3', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_1j_B1', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_2j_B2']
structure['ggWW_B9']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_sr_1j_B4', 'ww2l2v_13TeV_sr_1j_B5', 'ww2l2v_13TeV_sr_1j_B2', 'ww2l2v_13TeV_sr_1j_B3', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_1j_B1', 'ww2l2v_13TeV_sr_0j_B5', 'ww2l2v_13TeV_sr_0j_B4', 'ww2l2v_13TeV_sr_0j_B3', 'ww2l2v_13TeV_sr_0j_B2', 'ww2l2v_13TeV_sr_0j_B1', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_2j_B2']
structure['WW_B10']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_sr_1j_B7', 'ww2l2v_13TeV_sr_1j_B5', 'ww2l2v_13TeV_sr_1j_B2', 'ww2l2v_13TeV_sr_1j_B3', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_0j_B7', 'ww2l2v_13TeV_sr_0j_B6', 'ww2l2v_13TeV_sr_0j_B5', 'ww2l2v_13TeV_sr_0j_B4', 'ww2l2v_13TeV_sr_0j_B3', 'ww2l2v_13TeV_sr_0j_B2', 'ww2l2v_13TeV_sr_0j_B1', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_1j_B0']
structure['WW_B11']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_sr_1j_B6', 'ww2l2v_13TeV_sr_1j_B7', 'ww2l2v_13TeV_sr_1j_B4', 'ww2l2v_13TeV_sr_1j_B5', 'ww2l2v_13TeV_sr_1j_B2', 'ww2l2v_13TeV_sr_1j_B3', 'ww2l2v_13TeV_sr_1j_B1', 'ww2l2v_13TeV_sr_0j_B8', 'ww2l2v_13TeV_sr_0j_B7', 'ww2l2v_13TeV_sr_0j_B6', 'ww2l2v_13TeV_sr_0j_B5', 'ww2l2v_13TeV_sr_0j_B4', 'ww2l2v_13TeV_sr_0j_B3', 'ww2l2v_13TeV_sr_0j_B2', 'ww2l2v_13TeV_sr_0j_B1', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_sr_2j_B2']
structure['WW_B12']['removeFromCuts'] = ['ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_sr_1j_B4', 'ww2l2v_13TeV_sr_1j_B5', 'ww2l2v_13TeV_sr_1j_B2', 'ww2l2v_13TeV_sr_1j_B3', 'ww2l2v_13TeV_sr_1j_B1', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B8', 'ww2l2v_13TeV_sr_0j_B7', 'ww2l2v_13TeV_sr_0j_B6', 'ww2l2v_13TeV_sr_0j_B5', 'ww2l2v_13TeV_sr_0j_B4', 'ww2l2v_13TeV_sr_0j_B3', 'ww2l2v_13TeV_sr_0j_B2', 'ww2l2v_13TeV_sr_0j_B1', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_sr_2j_B2', 'ww2l2v_13TeV_sr_2j_B8', 'ww2l2v_13TeV_sr_1j_B8']
structure['WW_B8']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B10', 'ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_1j_B1', 'ww2l2v_13TeV_sr_0j_B3', 'ww2l2v_13TeV_sr_0j_B2', 'ww2l2v_13TeV_sr_0j_B1', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B1']
structure['WW_B9']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_sr_1j_B4', 'ww2l2v_13TeV_sr_1j_B3', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_0j_B5', 'ww2l2v_13TeV_sr_0j_B4', 'ww2l2v_13TeV_sr_0j_B3', 'ww2l2v_13TeV_sr_0j_B2', 'ww2l2v_13TeV_sr_0j_B1', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_sr_2j_B2']
structure['WW_B6']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B10', 'ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B8', 'ww2l2v_13TeV_sr_0j_B1', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_sr_2j_B2', 'ww2l2v_13TeV_sr_2j_B9', 'ww2l2v_13TeV_sr_2j_B8', 'ww2l2v_13TeV_sr_1j_B8']
structure['WW_B7']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B10', 'ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_1j_B1', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B2', 'ww2l2v_13TeV_sr_0j_B1', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_sr_2j_B2', 'ww2l2v_13TeV_sr_2j_B9', 'ww2l2v_13TeV_sr_1j_B9']
structure['WW_B4']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B10', 'ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_sr_1j_B6', 'ww2l2v_13TeV_sr_1j_B7', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B8', 'ww2l2v_13TeV_sr_0j_B7', 'ww2l2v_13TeV_sr_0j_B6', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_sr_2j_B9', 'ww2l2v_13TeV_sr_2j_B8', 'ww2l2v_13TeV_sr_1j_B8', 'ww2l2v_13TeV_sr_1j_B9']
structure['WW_B5']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B10', 'ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_sr_1j_B7', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B8', 'ww2l2v_13TeV_sr_0j_B1', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B1', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_sr_2j_B2', 'ww2l2v_13TeV_sr_2j_B9', 'ww2l2v_13TeV_sr_2j_B8', 'ww2l2v_13TeV_sr_1j_B8', 'ww2l2v_13TeV_sr_1j_B9']
structure['WW_B2']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B10', 'ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_top_1j', 'ww2l2v_13TeV_sr_1j_B6', 'ww2l2v_13TeV_sr_1j_B7', 'ww2l2v_13TeV_sr_1j_B4', 'ww2l2v_13TeV_sr_1j_B5', 'ww2l2v_13TeV_top_2j', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_top_0j', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B8', 'ww2l2v_13TeV_sr_0j_B7', 'ww2l2v_13TeV_sr_0j_B6', 'ww2l2v_13TeV_sr_0j_B5', 'ww2l2v_13TeV_sr_0j_B4', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_sr_2j_B9', 'ww2l2v_13TeV_sr_1j_B8', 'ww2l2v_13TeV_sr_1j_B9']
structure['WW_B3']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B10', 'ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_sr_1j_B6', 'ww2l2v_13TeV_sr_1j_B7', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B8', 'ww2l2v_13TeV_sr_0j_B7', 'ww2l2v_13TeV_sr_0j_B6', 'ww2l2v_13TeV_sr_0j_B0', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_sr_2j_B9', 'ww2l2v_13TeV_sr_2j_B8', 'ww2l2v_13TeV_sr_1j_B8', 'ww2l2v_13TeV_sr_1j_B9']
structure['WW_B0']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B10', 'ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_top_1j', 'ww2l2v_13TeV_sr_1j_B6', 'ww2l2v_13TeV_sr_1j_B7', 'ww2l2v_13TeV_sr_1j_B4', 'ww2l2v_13TeV_sr_1j_B5', 'ww2l2v_13TeV_sr_1j_B2', 'ww2l2v_13TeV_sr_1j_B3', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_top_0j', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B8', 'ww2l2v_13TeV_sr_0j_B7', 'ww2l2v_13TeV_sr_0j_B6', 'ww2l2v_13TeV_sr_0j_B5', 'ww2l2v_13TeV_sr_0j_B4', 'ww2l2v_13TeV_sr_0j_B3', 'ww2l2v_13TeV_sr_0j_B2', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B2', 'ww2l2v_13TeV_sr_2j_B9', 'ww2l2v_13TeV_sr_2j_B8', 'ww2l2v_13TeV_sr_1j_B8', 'ww2l2v_13TeV_sr_1j_B9']
structure['WW_B1']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B10', 'ww2l2v_13TeV_sr_1j_B11', 'ww2l2v_13TeV_sr_1j_B12', 'ww2l2v_13TeV_sr_0j_B12', 'ww2l2v_13TeV_sr_0j_B11', 'ww2l2v_13TeV_sr_0j_B10', 'ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_top_1j', 'ww2l2v_13TeV_sr_1j_B6', 'ww2l2v_13TeV_sr_1j_B7', 'ww2l2v_13TeV_sr_1j_B4', 'ww2l2v_13TeV_sr_1j_B5', 'ww2l2v_13TeV_top_2j', 'ww2l2v_13TeV_sr_1j_B3', 'ww2l2v_13TeV_sr_2j_B11', 'ww2l2v_13TeV_sr_2j_B10', 'ww2l2v_13TeV_top_0j', 'ww2l2v_13TeV_sr_2j_B12', 'ww2l2v_13TeV_sr_0j_B9', 'ww2l2v_13TeV_sr_0j_B8', 'ww2l2v_13TeV_sr_0j_B7', 'ww2l2v_13TeV_sr_0j_B6', 'ww2l2v_13TeV_sr_0j_B5', 'ww2l2v_13TeV_sr_0j_B4', 'ww2l2v_13TeV_sr_2j_B5', 'ww2l2v_13TeV_sr_2j_B4', 'ww2l2v_13TeV_sr_2j_B7', 'ww2l2v_13TeV_sr_2j_B6', 'ww2l2v_13TeV_sr_2j_B9', 'ww2l2v_13TeV_sr_2j_B8', 'ww2l2v_13TeV_sr_1j_B8', 'ww2l2v_13TeV_sr_1j_B9']
structure['Vg']['removeFromCuts'] = ['ww2l2v_13TeV_sr_1j_B0','ww2l2v_13TeV_sr_2j_B3', 'ww2l2v_13TeV_sr_1j_B3', 'ww2l2v_13TeV_sr_2j_B2', 'ww2l2v_13TeV_sr_2j_B9', 'ww2l2v_13TeV_sr_1j_B11']

#structure['ggWW_B3']['removeFromCuts'] = ['ww2l2v_13TeV_top_0j']
#structure['WW_B0']['removeFromCuts'] = ['ww2l2v_13TeV_top_3j']
#structure['WW_B3']['removeFromCuts'] = ['ww2l2v_13TeV_top_0j']

for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

    print nuis





'''
# structure configuration for datacard

# keys here must match keys in samples.py    

nbins = 1

structure['DY']  = {  
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['Wjets']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }

structure['Fake']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }

structure['Fake_em']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' : [ k for k in cuts if 'me' in k],
              }

structure['Fake_me']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' : [ k for k in cuts if 'em' in k],
              }

structure['ttbar'] = {   
                  'isSignal' : 0,
                  'isData'   : 0 
                  }


structure['singletop'] = {   
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['top'] = {   
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

for i in xrange(nbins):
  structure['WW_B%d'%i] = {
    'isSignal' : 1,
    'isData'   : 0    
  }

  structure['ggWW_B%d'%i] = {
    'isSignal' : 1,
    'isData' : 0
  }

structure['WW_nonfid'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['ggWW_nonfid'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WWewk']  = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['Wg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['Vg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['ZgS'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WgS'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['VgS'] = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['VgS_L'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['VgS_H'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }
structure['Zg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }
structure['VZ']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['WZ']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }


structure['VVV']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['ZZ']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }


structure['ggH'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['ggH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['qqH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['qqH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['WH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['ZH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['ggZH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['H_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['bbH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['ttH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['ggH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['qqH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['WH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['ZH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['H_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }


# data


structure['DATA']  = { 
                  'isSignal' : 0,
                  'isData'   : 1 
              }

for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

    print nuis
'''
