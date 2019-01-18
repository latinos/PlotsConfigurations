# structure configuration for datacard

#structure = {}

# imported from samples.py:
# samples, pthBinning1, pthBinning2
# imported from cuts.py
# cuts

# keys here must match keys in samples.py
#

# remove samples we won't use in limit setting
samples.pop('DY')
samples.pop('top')
for sname in samples.keys():
    if sname.startswith('ggH_hww_minloHJ'):
        samples.pop(sname)
    
mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]
dy = [skey for skey in samples if skey.startswith('DY')]
top = [skey for skey in samples if skey.startswith('top')]
signal = [skey for skey in samples if '_hww' in skey]
ggh = [skey for skey in samples if skey.startswith('ggH_hww')]
xh = [skey for skey in samples if skey.startswith('XH_hww')]

topcr = [ckey for ckey in cuts if ckey.startswith('topcr')]
dycr = [ckey for ckey in cuts if ckey.startswith('dycr')]
sr = [ckey for ckey in cuts if ckey.startswith('sr')]

for sname in ['WW', 'Fake', 'Wjets', 'ggWW', 'Vg', 'WZgS_L', 'WZgS_H', 'VZ', 'VVV']:
    structure[sname] = {
        'isSignal' : 0,
        'isData'   : 0
    }

for sname in dy:
  structure[sname]  = {
      'isSignal' : 0,
      'isData'   : 0
  }

for sname in top:
  structure[sname] = {
      'isSignal' : 0,
      'isData'   : 0
  }

#for sname in ['ggH_htt', 'qqH_htt', 'ZH_htt', 'WH_htt']:
for sname in ['H_htt']:
    structure[sname] = {
        'isSignal' : 0,
        'isData'   : 0,
        'removeFromCuts': topcr + dycr
    }

for sname in ['ggH_hww', 'XH_hww']:
    #for fid in ['fid', 'nonfid']:
    for fid in ['incl']:
        for ipt in range(len(pthBinning1) - 1):
            low, high = pthBinning1[ipt:ipt+2]
            suffix = '_pth_%.0f_%.0f_%s' % (low, high, fid)
            structure[sname + suffix] = {
                'isSignal' : 1,
                'isData'   : 0,
                'removeFromCuts': topcr + dycr
            }

        # drop the other pthBinning
        for ipt in range(len(pthBinning2) - 1):
            low, high = pthBinning2[ipt:ipt+2]
            suffix = '_pth_%.0f_%.0f_%s' % (low, high, fid)
            samples.pop(sname + suffix)

    # drop fid and nonfid samples
    for fid in ['fid', 'nonfid']:
        for ipt in range(len(pthBinning1) - 1):
            low, high = pthBinning1[ipt:ipt+2]
            suffix = '_pth_%.0f_%.0f_%s' % (low, high, fid)
            samples.pop(sname + suffix)

        for ipt in range(len(pthBinning2) - 1):
            low, high = pthBinning2[ipt:ipt+2]
            suffix = '_pth_%.0f_%.0f_%s' % (low, high, fid)
            samples.pop(sname + suffix)    

    # drop other signal bins
    for key in samples.keys():
        if key == sname or (key.startswith(sname) and '_pth_' not in key):
            samples.pop(key)

# data

structure['DATA']  = {
    'isSignal' : 0,
    'isData'   : 1
}
