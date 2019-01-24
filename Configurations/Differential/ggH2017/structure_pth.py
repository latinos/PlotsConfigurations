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
    
mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]
dy = [skey for skey in samples if skey.startswith('DY')]
top = [skey for skey in samples if skey.startswith('top')]
signal = [skey for skey in samples if '_hww' in skey]

topcr = [ckey for ckey in cuts if ckey.startswith('topcr')]
dycr = [ckey for ckey in cuts if ckey.startswith('dycr')]
sr = [ckey for ckey in cuts if ckey.startswith('sr')]

usedCuts = [ckey for ckey in dycr if not ckey.endswith('_incl')]
usedCuts += [ckey for ckey in topcr if not ckey.endswith('_incl')]

for sname in set(mc) - set(dy) - set(top) - set(signal):
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

pthBinning = [0., 20., 45., 80., 120., 200., 350., 6500.] # hybrid of binning1 and 2
split = [8, 8, 4, 3, 2, 2, 2]

for ipt in range(len(pthBinning1) - 1):
    low, high = pthBinning1[ipt:ipt+2]
    if split[ipt] == 8:
        for lep in ['emmp', 'mmep', 'epmm', 'mpem']:
            for pt2 in ['pt2lt20', 'pt2ge20']:
                usedCuts.append('sr_pth_%.0f_%.0f_%s_%s' % (low, high, lep, pt2))
    elif split[ipt] == 4:
        for lep in ['em', 'me']:
            for pt2 in ['pt2lt20', 'pt2ge20']:
                usedCuts.append('sr_pth_%.0f_%.0f_%s_%s' % (low, high, lep, pt2))
    elif split[ipt] == 3:
        for leppt2 in ['pt2ge20', 'em_pt2lt20', 'me_pt2lt20']:
            usedCuts.append('sr_pth_%.0f_%.0f_%s' % (low, high, leppt2))
    elif split[ipt] == 2:
        for pt2 in ['pt2lt20', 'pt2ge20']:
            usedCuts.append('sr_pth_%.0f_%.0f_%s' % (low, high, pt2))

for sname in ['ggH_hww', 'XH_hww']:
    for fid in ['incl']:
        for ipt in range(len(pthBinning1) - 1):
            low, high = pthBinning1[ipt:ipt+2]
            suffix = '_pth_%.0f_%.0f_%s' % (low, high, fid)
            structure[sname + suffix] = {
                'isSignal' : 1,
                'isData'   : 0,
                'removeFromCuts': topcr + dycr
            }

# fake

structure['Fake'] = {
    'isSignal' : 0,
    'isData'   : 0
}

# data

structure['DATA']  = {
    'isSignal' : 0,
    'isData'   : 1
}

# Drop unused samples and cuts

for skey in samples.keys():
    if skey not in structure:
        samples.pop(skey)

for ckey in cuts.keys():
    if ckey not in usedCuts:
        cuts.pop(ckey)
