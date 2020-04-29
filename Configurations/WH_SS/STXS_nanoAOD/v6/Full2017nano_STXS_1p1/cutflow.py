# This script will make a cutflow from the hadded histfile.
# Usage: python cutflow.py --file=<root file> (--unBlind) (--errors)

import os
import math
import optparse
from ROOT import *

parser = optparse.OptionParser()
parser.add_option('--file'   , dest='histfile', help='input file'       , default='' )
parser.add_option('--unBlind', dest='unBlind',  help='print data counts', default=False)
parser.add_option('--errors' , dest='errors',   help='print stat errors', default=False)
(opts, args) = parser.parse_args()

table = {}

f0 = TFile.Open(opts.histfile)
cuts = [k.GetName() for k in f0.GetListOfKeys()]
for cut in cuts:
    table[cut] = {}
    histdir = f0.Get(cut+'/events')
    histkeys = histdir.GetListOfKeys()
    histnames = [k.GetName() for k in histkeys]
    for histname in histnames:
        if 'Up' in histname or 'Down' in histname : continue
        hist = histdir.Get(histname)
        err = Double()
        count = hist.IntegralAndError(0,hist.GetNbinsX(),err) #Normalization and stat error
        sample = histname.replace('histo_','')
        table[cut][sample] = [count,err,hist.GetEntries()]

#Sort samples by fixed order
samples = table[table.keys()[0]].keys()
#order = ['DY','WW','WWewk','ggWW','WZ','WZhad','ZZ','Wg','WgS','Zg','ZgS','VVV','top','ttV','Fakes_em','Fakes_mm','Fake_em','Fake_me','Fake','ggH_hww','qqH_hww','WH_hww','ggZH_hww','ZH_hww','bbH_hww','ttH_hww','H_htt']
order = ['DY','WW','WWewk','ggWW','Vg','VgS','VVV','top','Fake_em','Fake_mm','ggH_hww','qqH_hww','WH_hww','ggZH_hww','ZH_hww','ttH_hww','H_htt']
if opts.unBlind :
    order.append('DATA')
sorted_samples = sorted(set(order).intersection(samples) ,key=lambda x:order.index(x))

#If you want to sort the cuts, add something similar here

#Print normalized # events
print 'Normalized counts'
print ' & '+' & '.join(sorted_samples)
for cut in table.keys():
    if opts.errors:
        print cut+' & '+' & '.join(["%.1f \pm %.1f"%(table[cut][sample][0],table[cut][sample][1]) for sample in sorted_samples])
    else:
        print cut+' & '+' & '.join(["%.1f"         %(table[cut][sample][0]) for sample in sorted_samples])
print

#Print # entries (to check for stats)
print 'Raw counts'
print ' & '+' & '.join(sorted_samples)
for cut in table.keys():
    print cut+' & '+' & '.join(["%d"%table[cut][sample][2] for sample in sorted_samples])
print
