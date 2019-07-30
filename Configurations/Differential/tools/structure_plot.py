# structure configuration for datacard
# works with input file produced by restructure_input.py

#structure = {} or plot = {}

# imported from mkDatacards.py
# opt

import collections
import re
import copy

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
recoBins = set()
shapeVariations = set()

# open the input file and pick up all sample, cut, and variable names
source = ROOT.TFile.Open(opt.inputFile)

for ckey in source.GetListOfKeys():
  cname = ckey.GetName()

  if doStructure and '_WW_' in cname:
    continue

  cuts.append(cname)

  cutdir = ckey.ReadObj()

  if doStructure:
    if '_CR_' in cname:
      crs.append(cname)
      vnames = ['events']
    elif 'pt2ge20' in cname:
      vnames = ['mllVSmth_8x9']
    else:
      vnames = ['mllVSmth_6x6']
  else:
    vnames = [k.GetName() for k in cutdir.GetListOfKeys()]

  for vname in vnames:
    if vname not in variables:
      # first encounter

      variables[vname] = {'cuts': [], 'samples': []}

      vardir = cutdir.GetDirectory(vname)
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

    if '_hww' in sname:
      signals.add(matches.group(1))
    else:
      # signal procs added after sorting
      samples.add(matches.group(1))

  for hkey in eventsdir.GetListOfKeys():
    hname = hkey.GetName()
  
    if not hname.endswith('Up'):
      continue

    for sname in (samples | signals):
      if hname.startswith('histo_%s' % sname):
        nuis = hname.replace('histo_%s_' % sname, '')[:-2]
        shapeVariations.add(nuis)

  # extract reco bin name
  matches = re.match('.*((?:PTH|NJ)_(?:GE|GT|)[0-9]+(?:_[0-9]+|))_.+', cname)
  if matches:
    recoBins.add(matches.group(1))

source.Close()

signals = sorted(signals, key = lambda sname: int(re.match('.+H_hww_[^_]+_(?:GE|GT|)([0-9]+)', sname).group(1)))
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
      ('VZ', 'VZ', ['VZ', 'ZZ', 'VgS_H'], 0, ROOT.kViolet + 1),
      ('Vg', 'V#gamma', ['Vg', 'Wg'], 0, ROOT.kOrange + 10),
      ('VgS', 'V#gamma*', ['VgS','VgS_L'], 0, ROOT.kGreen - 9),
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
  
    elif '_hww' in sname:
      structure[sname] = {
        'isSignal' : 1,
        'isData'   : 0,
      }
  
    else:
      structure[sname] = {
        'isSignal' : 0,
        'isData'   : 0
      }
  
  structure['Fake_em']['removeFromCuts'] = [cname for cname in cuts if '20me' in cname]
  structure['Fake_me']['removeFromCuts'] = [cname for cname in cuts if '20em' in cname]

# restructure nuisances

def sampleMapping(sname):
  # map sample found in the file to samples in the nuisance
  if sname == 'Fake_em':
    return ['Fake']
  elif sname == 'Fake_me':
    return ['Fake']
  elif sname == 'htt':
    return ['ggH_htt', 'qqH_htt', 'ZH_htt', 'WH_htt']
  elif sname == 'minor':
    return ['ggWW', 'WWewk', 'Vg', 'VgS', 'VgS_H', 'VgS_L', 'VZ', 'VVV']
  elif sname in ['VgS_L', 'VgS_H']:
    return ['VgS']
  elif sname == 'nonfid':
    return signals
  elif sname.startswith('ggH_hww'):
    return ['ggH_hww']
  elif sname.startswith('ggH_htt'):
    return ['ggH_htt']
  elif sname.startswith('xH_hww'):
    return ['qqH_hww', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'bbH_hww', 'ttH_hww']
  elif sname.startswith('smH_hww'):
    return ['ggH_hww', 'qqH_hww', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'bbH_hww', 'ttH_hww']
  elif sname.startswith('ggH'):
    return ['ggH_hww', 'ggH_htt']
  elif sname.startswith('xH'):
    return ['qqH_hww', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'bbH_hww', 'ttH_hww', 'qqH_htt', 'ZH_htt', 'ggZH_htt', 'WH_htt', 'bbH_htt', 'ttH_htt']
  elif sname.startswith('smH'):
    return ['ggH_hww', 'qqH_hww', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'bbH_hww', 'ttH_hww', 'ggH_htt', 'qqH_htt', 'ZH_htt', 'ggZH_htt', 'WH_htt', 'bbH_htt', 'ttH_htt']
  else:
    return [sname]

signal_ggH_separate = False
for sname in signals:
  if sname.startswith('ggH'):
    signal_ggH_separate = True
    break

for nkey, nuisance in nuisances.items():
  if 'perRecoBin' in nuisance and nuisance['perRecoBin']:
    for bin in recoBins:
      nuisances[nkey + '_' + bin] = copy.copy(nuisance)
      nuisances[nkey + '_' + bin]['name'] += '_' + bin
      nuisances[nkey + '_' + bin]['cuts'] = [cut for cut in cuts if bin in cut]

    nuisances.pop(nkey)

for nuisance in nuisances.itervalues():
  if 'samples' not in nuisance:
    continue

  if 'samplespost' in nuisance:
    nuisance['samples'] = nuisance['samplespost'](nuisance, samples)

  if 'cutspost' in nuisance:
    nuisance['cuts'] = nuisance['cutspost'](nuisance, cuts)

  # If a variation histogram is found in the input file, it's a shape variation
  if 'name' in nuisance and nuisance['name'] in shapeVariations:
    nuisance['type'] = 'shape'

  for sname in samples:
    for cardname in sampleMapping(sname):
      if cardname in nuisance['samples']:
        nuisance['samples'][sname] = nuisance['samples'][cardname]
        break

  # AsLnN nuisances are all converted to shape (nominal scaled to variation normalization) in restructure
  if 'AsLnN' in nuisance:
    nuisance.pop('AsLnN')
