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
smH = []
cuts = []
crs = []

# open the input file and check what observable it is made for
source = ROOT.TFile.Open(opt.inputFile)
firstdir = source.GetDirectory('%s/events' % source.GetListOfKeys().At(0).GetName())
for key in firstdir.GetListOfKeys():
  name = key.GetName()

  if not name.endswith('Up') and not name.endswith('Down'):
    matches = re.match('histo_(.+)$', name)
    if 'smH_hww' in name:
      smH.append(matches.group(1))
    else:
      # signal procs added after sorting
      samples.append(matches.group(1))

for key in source.GetListOfKeys():
  name = key.GetName()

  cuts.append(name)
  if '_CR_' in name:
    crs.append(name)

source.Close()

smH.sort(key = lambda name: int(re.match('smH_hww_[^_]+_(?:GE|GT|)([0-9]+)', name).group(1)))
samples.sort()
samples.extend(smH)
cuts.sort()

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

  if nuisance['type'] == 'lnN':
    nuisance['type'] = 'shape'
