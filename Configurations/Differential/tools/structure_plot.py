# structure configuration for datacard
# works with input file produced by restructure_input.py

#structure = {} or plot = {}

# imported from mkDatacards.py
# opt

import collections
import re

PLOT_DATA_BLINDED = True

try:
  len(structure)
except NameError:
  # not invoked as a structure file
  doStructure = False
else:
  doStructure = True

try:
  len(plot)
  len(groupPlot)
except NameError:
  # not invoked as a plot file
  doPlot = False
else:
  doPlot = True

# redefine samples and cuts as simple lists
samples = set()
cuts = []
variables = {} # redefine variables too

signals = set()
crs = []

# open the input file and pick up all sample, cut, and variable names
source = ROOT.TFile.Open(opt.inputFile)

for ckey in source.GetListOfKeys():
  cname = ckey.GetName()

  cuts.append(cname)
  if '_CR_' in cname:
    crs.append(cname)

  cutdir = ckey.ReadObj()
  for vkey in cutdir.GetListOfKeys():
    vname = vkey.GetName()
    if vname not in variables:
      # first encounter

      variables[vname] = {'cuts': [], 'samples': []}

      vardir = vkey.ReadObj()
      for hkey in vardir.GetListOfKeys():
        hname = hkey.GetName()
      
        if hname.endswith('Up') or hname.endswith('Down'):
          continue
    
        matches = re.match('histo_(.+)$', hname)
        sname = matches.group(1)

        variables[vname]['samples'].append(sname)

    variables[vname]['cuts'].append(cname)

  # pick up all sample names in the cut (events should have all samples allowed for the cut)
  eventsdir = source.GetDirectory('%s/events' % cname)
  for hkey in eventsdir.GetListOfKeys():
    hname = hkey.GetName()
  
    if hname.endswith('Up') or hname.endswith('Down'):
      continue

    matches = re.match('histo_(.+)$', hname)
    sname = matches.group(1)

    if sname in signals or sname in samples:
      continue

    if sname.startswith('smH_hww') or sname.startswith('ggH_hww') or sname.startswith('xH_hww'):
      signals.add(matches.group(1))
    else:
      # signal procs added after sorting
      samples.add(matches.group(1))

source.Close()

signals = sorted(signals, key = lambda sname: int(re.match('(?:sm|gg|x)H_hww_[^_]+_(?:GE|GT|)([0-9]+)', sname).group(1)))
samples = sorted(samples)
samples.extend(signals)
cuts.sort()

if doPlot:
  plot['DATA']  = { 
      'nameHR': 'Data',
      'color': 1,  
      'isSignal': 0,
      'isData': 1,
      'isBlind': (1 if PLOT_DATA_BLINDED else 0)
  }

  pdefs = [
      ('top', 'tW and t#bar{t}', ['top.*'], 0, ROOT.kYellow),
      ('WW', 'WW', ['WW.*', 'ggWW'], 0, ROOT.kAzure - 9),
      ('Fake', 'Non-prompt', ['Fake.*'], 0, ROOT.kGray + 1),
      ('DY', 'DY', ['DY.*'], 0, ROOT.kGreen + 2),
      ('VZ', 'VZ', ['VZ', 'WZ', 'ZZ', 'WZgS_H'], 0, ROOT.kViolet + 1),
      ('Vg', 'V#gamma', ['Vg', 'Wg'], 0, ROOT.kOrange + 10),
      ('VgS', 'V#gamma*', ['VgS','WZgS_L'], 0, ROOT.kGreen - 9),
      ('VVV', 'VVV', ['VVV'], 0, ROOT.kAzure - 3),
      ('htt', 'H#tau#tau', ['.*H_htt.*'], 0, ROOT.kRed + 2),
      ('hww', 'HWW', ['.*H_hww.*'], 1, ROOT.kRed)
  ]
  
  for gname, title, patterns, isSignal, color in pdefs:
    groupPlot[gname] = {
      'nameHR': title,
      'isSignal': isSignal,
      'color': color,
      'samples': []
    }
  
    for pattern in patterns:
      for sname in samples:
        if re.match(pattern, sname):
          plot[sname]  = {  
            'color': color,
            'isSignal': isSignal,
            'isData': 0,
            'scale': 1.
          }
  
          groupPlot[gname]['samples'].append(sname)

  # additional options
  
  legend['lumi'] = 'L = 35.9/fb'
  
  legend['sqrt'] = '#sqrt{s} = 13 TeV'

if doStructure:
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

# restructure nuisances

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
