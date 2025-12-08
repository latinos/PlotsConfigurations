# structure configuration for datacard

# keys here must match keys in samples.py    

# structure configuration for datacard
# keys here must match keys in samples.py    
structure ={}

# keys here must match keys in samples.py 
for iproc in samples.keys():
    structure[iproc] = {
        'isSignal' : 1 if 'sm' in iproc or 'quad' in iproc else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
    }

mops = ['cW', 'cHDD', 'cHWB', 'cHl3', 'cHq3', 'cll1']

structure['sm']['removeStatUnc'] = 1

for i,op in enumerate(mops):
    structure['quad_{}'.format(op)]['removeStatUnc'] = 1
    structure['sm_lin_quad_{}'.format(op)]['removeStatUnc'] = 1
    for j in range(i+1,len(mops)):
        structure['sm_lin_quad_mixed_{}_{}'.format(mops[i],mops[j])]['removeStatUnc'] = 1

structure['WWewk']['removeFromCuts'] = ['ww2l2v_13TeV_top_1j', 'ww2l2v_13TeV_top_0j', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_top_2j', 'ww2l2v_13TeV_sr_0j_B0']
structure['Vg']['removeFromCuts'] = ['ww2l2v_13TeV_top_0j']

for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

    print nuis
