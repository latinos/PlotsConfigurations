import sys
import re
import ROOT

sourceName = sys.argv[1]

source = ROOT.TFile.Open(sourceName)

total = 0.

for cut in source.GetListOfKeys():
    if not cut.GetName().startswith('hww_NJ'):
        continue

    print cut.GetName()

    cutdir = source.GetDirectory('%s/events' % cut.GetName())
    visited = set()
    for hkey in cutdir.GetListOfKeys():
        name = hkey.GetName()

        if not re.match('histo_ggH_hww_NJ_[0-9GE]+$', name):
            continue

        if name in visited:
            print name, 'is visited'
            continue

        print ' ', name
        
        visited.add(name)

        h = hkey.ReadObj()
        total += h.GetEntries()

print total
