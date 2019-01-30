# structure configuration for datacard

#structure = {}

# imported from samples.py:
# samples, pthBinning1, pthBinning2
# imported from cuts.py
# cuts

# keys here must match keys in samples.py
#

pthBins = [
  'PTH_0_20',
  'PTH_20_45',
  'PTH_45_80',
  'PTH_80_120',
  'PTH_120_200',
  'PTH_200_350',
  'PTH_GT350'
]
split = [8, 8, 4, 3, 2, 2, 2]

pt2confs = ['pt2lt20', 'pt2ge20']
lepconfs = ['emmp', 'epmm', 'mmep', 'mpem']

njs = ['0j', '1j', '2j', '3j', 'ge4j']

# redefine samples as a simple list
samples = [
  'DATA',
  'minor',
  'htt',
  'Fake'
]
for nj in njs:
  samples.append('WW_%s' % nj)
  samples.append('top_%s' % nj)
  samples.append('DY_%s' % nj)

smH = []
for pthBin in pthBins:
  samples.append('smH_hww_%s' % pthBin)
  smH.append('smH_hww_%s' % pthBin)

# redefine cuts as a simple list
cuts = []

for nj in njs:
  cuts.append('hww_CR_catDYreco%s' % nj)
  cuts.append('hww_CR_cattopreco%s' % nj)

crs = list(cuts)

for pthBin, nsplit in zip(pthBins, split):
  if nsplit == 8:
    for pt2 in pt2confs:
      for lep in lepconfs:
        cuts.append('hww_%s_cat%s%s' % (pthBin, lep, pt2))

  elif nsplit == 4:
    for pt2 in pt2confs:
      for lep in ['em', 'me']:
        cuts.append('hww_%s_cat%s%s' % (pthBin, lep, pt2))

  elif nsplit == 3:
    for lep in ['em', 'me']:
      cuts.append('hww_%s_cat%spt2lt20' % (pthBin, lep))
    cuts.append('hww_%s_catpt2ge20' % pthBin)

  elif nsplit == 2:
    for pt2 in pt2confs:
      cuts.append('hww_%s_cat%s' % (pthBin, pt2))

  elif nsplit == 1:
    cuts.append('hww_%s' % pthBin)

for sname in samples:
  if sname == 'DATA':
    structure['DATA']  = {
      'isSignal' : 0,
      'isData'   : 1
    }

  elif sname.startswith('smH_hww'):
    structure[sname] = {
      'isSignal' : 1,
      'isData'   : 0,
      'removeFromCuts': crs
    }

  else:
    structure[sname] = {
      'isSignal' : 0,
      'isData'   : 0
    }

structure['htt']['removeFromCuts'] = crs

# redefine variables
variables = {
  'events': {'cuts': crs},
  'mllVSmth_6x6': {'cuts': [c for c in cuts if c.endswith('pt2lt20')]},
  'mllVSmth_8x9': {'cuts': [c for c in cuts if c.endswith('pt2ge20')]}
}

sampleMapping = {
  'ggH_hww': smH,
  'qqH_hww': smH,
  'ZH_hww': smH,
  'ggZH_hww': smH,
  'WH_hww': smH,
  'bbH_hww': smH,
  'ttH_hww': smH,
  'ggWW': 'minor',
  'Vg': 'minor',
  'WZgS_L': 'minor',
  'WZgS_H': 'minor',
  'WZgS': 'minor',
  'VZ': 'minor',
  'VVV': 'minor',
  'Fake': 'Fake',
  'ggH_htt': 'htt',
  'qqH_htt': 'htt',
  'ZH_htt': 'htt',
  'WH_htt': 'htt'
}
njs = ['0j', '1j', '2j', '3j', 'ge4j']
sampleMapping['WW'] = ['WW_%s' % nj for nj in njs]
sampleMapping['top'] = ['top_%s' % nj for nj in njs]
sampleMapping['DY'] = ['DY_%s' % nj for nj in njs]

for nuisance in nuisances.itervalues():
  if 'samples' not in nuisance:
    continue

  for sname, value in nuisance['samples'].items():
    if type(sampleMapping[sname]) is list:
      for mapped in sampleMapping[sname]:
        nuisance['samples'][mapped] = value
    else:
      nuisance['samples'][sampleMapping[sname]] = value
