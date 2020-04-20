import os
from ROOT import *
import collections
import argparse
import re

parser = argparse.ArgumentParser()
parser.add_argument("rootfile", help="file path")
args = parser.parse_args()

gStyle.SetOptStat(0)
gStyle.SetOptTitle(0)
gROOT.SetBatch(1)

fittemplate = 'mtw_fit'

samples = collections.OrderedDict()
with open('samples.py', 'r') as f:
  exec(f)

all_samples = samples.keys()
append = []
for sample in all_samples:
  if samples[sample].has_key('subsamples'):
    all_samples.remove(sample)
    for sub in samples[sample]['subsamples']:
      append.append(sample+'_'+sub)
all_samples.extend(append)
all_samples.sort()

cuts = collections.OrderedDict()
with open('cuts.py', 'r') as f:
  exec(f)

all_cuts = []
for cut in cuts:
  if isinstance(cuts[cut],dict) and cuts[cut].has_key('categories'):
    all_cuts.extend(cut+'_'+cat for cat in cuts[cut]['categories'])
  else:
    all_cuts.append(cut)
all_cuts.sort()

f0 = TFile.Open(args.rootfile)

samples_to_remove = {}
for cut in all_cuts:
  for sample in all_samples:
    if f0.Get(cut+'/events/histo_'+sample).Integral() < 0.0:
      if cut not in samples_to_remove.keys():
        samples_to_remove[cut] = [sample]
      else:
        samples_to_remove[cut].append(sample)

print 'Remove following samples: '
print samples_to_remove
print

for cut in f0.GetListOfKeys():
  cutdir = f0.Get(cut.GetName())
  template = "events" if 'CR' in cut.GetName() else fittemplate
  countdir = cutdir.Get(template)
  for histname in countdir.GetListOfKeys():
    if cut.GetName() in samples_to_remove.keys() and any(sample in histname.GetName() for sample in samples_to_remove[cut.GetName()]):
      continue
    hist = countdir.Get(histname.GetName())
    if hist.GetEntries() is 0:
      print 'WARNING: empty histogram %s in %s/%s' % (hist.GetName(),cut.GetName(),template)
    if hist.Integral() < 0.0:
      print 'ERROR: histogram %s in %s/%s has negative integral (%d)' % (hist.GetName(),cut.GetName(),template,hist.Integral())
      
