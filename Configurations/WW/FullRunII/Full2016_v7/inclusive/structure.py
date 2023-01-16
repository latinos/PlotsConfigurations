# structure configuration for datacard

# keys here must match keys in samples.py    

# structure configuration for datacard
# keys here must match keys in samples.py    
structure ={}

# keys here must match keys in samples.py 
for iproc in samples.keys():
    structure[iproc] = {
        'isSignal' : 1 if 'WW_B' in iproc else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
    }
structure['WWewk']['removeFromCuts'] =  ['ww2l2v_13TeV_top_1j', 'ww2l2v_13TeV_top_0j', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_top_2j', 'ww2l2v_13TeV_sr_0j_B0']
structure['Vg']['removeFromCuts']      = ['ww2l2v_13TeV_top_0j','ww2l2v_13TeV_top_1j','ww2l2v_13TeV_top_2j']
#structure['Higgs']['removeFromCuts']      = ['ww2l2v_13TeV_top_1j']
#structure['ZZ']['removeFromCuts']      = ['ww2l2v_13TeV_top_1j']
for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

    print nuis

'''
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
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['ggWW_nonfid'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WWewk']  = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' :  ['ww2l2v_13TeV_top_1j', 'ww2l2v_13TeV_top_0j', 'ww2l2v_13TeV_sr_2j_B0', 'ww2l2v_13TeV_sr_1j_B0', 'ww2l2v_13TeV_top_2j', 'ww2l2v_13TeV_sr_0j_B0']
                  }

structure['Wg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' : ['ww2l2v_13TeV_top_1j','ww2l2v_13TeV_top_0j']
                  }

structure['Vg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }
structure['ZgS'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' : ['ww2l2v_13TeV_top_2j']
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
                  'isData'   : 0,
                  'removeFromCuts' : ['ww2l2v_13TeV_top_1j']
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
                  'isData'   : 0,
                  'removeFromCuts' : ['ww2l2v_13TeV_top_0j']
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
                  'isData'   : 0,
                  'removeFromCuts' : ['ww2l2v_13TeV_top_0j']
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
                  'removeFromCuts' : ['ww2l2v_13TeV_top_0j']
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
