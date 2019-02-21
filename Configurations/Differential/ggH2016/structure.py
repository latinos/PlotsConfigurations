# structure configuration for datacard

#structure = {}

# imported from samples.py:
# samples, treeBaseDir, mcProduction, mcSteps
# imported from cuts.py
# cuts

# first remove samples we won't use in limit setting
samples.pop('DY')
samples.pop('top')
samples.pop('ggH_hww')
samples.pop('XH_hww')

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]
dy = [skey for skey in samples if skey.startswith('DY')]
top = [skey for skey in samples if skey.startswith('top')]
signal = [skey for skey in samples if '_hww' in skey]
ggh = [skey for skey in samples if skey.startswith('ggH_hww')]
xh = [skey for skey in samples if skey.startswith('XH_hww')]

topcr = [ckey for ckey in cuts if ckey.startswith('topcr')]
dycr = [ckey for ckey in cuts if ckey.startswith('dycr')]
sr = [ckey for ckey in cuts if ckey.startswith('sr')]

# keys here must match keys in samples.py
#
for skey in dy:
  structure[skey]  = {
      'isSignal' : 0,
      'isData'   : 0
  }

for skey in top:
  structure[skey] = {
      'isSignal' : 0,
      'isData'   : 0
  }

structure['Fake']  = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['WW']  = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['ggWW']  = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['Vg']  = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['WZgS_L'] = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['WZgS_H'] = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['VZ']  = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['VVV']  = {
    'isSignal' : 0,
    'isData'   : 0
}

for skey in signal:
  structure[skey] = {
      'isSignal' : 1,
      'isData'   : 0,
      'removeFromCuts': dycr + topcr
  }

structure['H_htt'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'removeFromCuts': dycr + topcr
}

# data

structure['DATA']  = {
    'isSignal' : 0,
    'isData'   : 1
}

