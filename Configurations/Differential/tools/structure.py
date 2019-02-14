# structure configuration for datacard
# works with input file produced by restructure_input.py

#structure = {}

# imported from mkDatacards.py
# opt

# keys here must match keys in samples.py
#

import re

# redefine samples and cuts as simple lists
samples = []
signals = []
cuts = []
crs = []
variables = {} # redefine variables too

# open the input file and check what observable it is made for
source = ROOT.TFile.Open(opt.inputFile)
firstdir = source.GetDirectory('%s/events' % source.GetListOfKeys().At(0).GetName())
for key in firstdir.GetListOfKeys():
  hname = key.GetName()

  if hname.endswith('Up') or hname.endswith('Down'):
    continue

  matches = re.match('histo_(.+)$', hname)
  sname = matches.group(1)
  if sname.startswith('smH_hww') or sname.startswith('ggH_hww') or sname.startswith('xH_hww'):
    signals.append(matches.group(1))
  else:
    # signal procs added after sorting
    samples.append(matches.group(1))

for key in source.GetListOfKeys():
  cname = key.GetName()

  cuts.append(cname)
  if '_CR_' in cname:
    crs.append(cname)

  cutdir = key.ReadObj()
  for vkey in cutdir.GetListOfKeys():
    vname = vkey.GetName()
    if vname not in variables:
      variables[vname] = {'cuts': []}

    variables[vname]['cuts'].append(cname)

source.Close()

signals.sort(key = lambda sname: int(re.match('(?:sm|gg|x)H_hww_[^_]+_(?:GE|GT|)([0-9]+)', sname).group(1)))
samples.sort()
samples.extend(signals)
cuts.sort()

for sname in samples:
  if sname == 'DATA':
    structure['DATA']  = {
      'isSignal' : 0,
      'isData'   : 1
    }

  elif sname.startswith('smH_hww') or sname.startswith('ggH_hww') or sname.startswith('xH_hww'):
    structure[sname] = {
      'isSignal' : 1,
      'isData'   : 0,
      #'removeFromCuts': crs
    }

  else:
    structure[sname] = {
      'isSignal' : 0,
      'isData'   : 0
    }

#structure['htt']['removeFromCuts'] = crs

sampleMapping = {
  'Fake_em': 'Fake',
  'Fake_me': 'Fake',
  'ggH_htt': 'htt',
  'qqH_htt': 'htt',
  'ZH_htt': 'htt',
  'WH_htt': 'htt'
}

signal_ggH_separate = False
for sname in signals:
  if sname.startswith('ggH'):
    signal_ggH_separate = True
    break

if signal_ggH_separate:
  ggH = [sname for sname in signals if sname.startswith('ggH')]
  xH = [sname for sname in signals if not sname.startswith('ggH')]

  sampleMapping.update([
    ('ggH_hww', ggH),
    ('qqH_hww', xH),
    ('ZH_hww', xH),
    ('ggZH_hww', xH),
    ('WH_hww', xH),
    ('bbH_hww', xH),
    ('ttH_hww', xH)
  ])

else:
  sampleMapping.update([
    ('ggH_hww', signals),
    ('qqH_hww', signals),
    ('ZH_hww', signals),
    ('ggZH_hww', signals),
    ('WH_hww', signals),
    ('bbH_hww', signals),
    ('ttH_hww', signals)
  ])

if 'minor' in samples:
  #background_minor_merge

  sampleMapping.update([
    ('ggWW', 'minor'),
    ('Vg', 'minor'),
    ('WZgS_L', 'minor'),
    ('WZgS_H', 'minor'),
    ('WZgS', 'minor'),
    ('VZ', 'minor'),
    ('VVV', 'minor')
  ])

njs = ['0j', '1j', '2j', '3j', 'ge4j']
if 'WW' not in samples:
  sampleMapping['WW'] = ['WW_%s' % nj for nj in njs]
if 'top' not in samples:
  sampleMapping['top'] = ['top_%s' % nj for nj in njs]
if 'DY' not in samples:
  sampleMapping['DY'] = ['DY_%s' % nj for nj in njs]

reverseSampleMapping = {}
for sname, value in sampleMapping.iteritems():
  if type(value) is list:
    key = tuple(value)
  else:
    key = value

  try:
    reverseSampleMapping[key].append(sname)
  except KeyError:
    reverseSampleMapping[key] = [sname]

for nuisance in nuisances.itervalues():
  if 'samples' not in nuisance:
    continue

  toShape = False
  for sname, value in nuisance['samples'].items():
    if sname not in sampleMapping:
      continue

    if nuisance['type'] == 'lnN':
      # has this nuisance been turned into shape?
      if type(sampleMapping[sname]) is list:
        key = tuple(sampleMapping[sname])
      else:
        key = sampleMapping[sname]

      mergedSnames = reverseSampleMapping[key]
      if len(set(mergedSnames) - set(nuisance['samples'])) != 0:
        toShape = True

    if type(sampleMapping[sname]) is list:
      for mapped in sampleMapping[sname]:
        nuisance['samples'][mapped] = value
    else:
      nuisance['samples'][sampleMapping[sname]] = value

  if toShape:
    nuisance['type'] = 'shape'
