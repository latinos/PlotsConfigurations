# Simple script to separate a per-sample root file containing subsamples into per-subsample root files

import sys
import re
import ROOT

source = ROOT.TFile.Open(sys.argv[1])
sample = sys.argv[2]
subsamples = sys.argv[3:]

ROOT.gROOT.GetListOfFiles().Remove(source)
targets = dict((sub, ROOT.TFile.Open(sys.argv[1].replace('%s' % sample, '%s_%s' % (sample, sub)), 'recreate')) for sub in subsamples)

for ckey in source.GetListOfKeys():
    for target in targets.itervalues():
        target.mkdir(ckey.GetName())

    sourcecut = source.GetDirectory(ckey.GetName())

    for vkey in sourcecut.GetListOfKeys():
        for target in targets.itervalues():
            target.mkdir('%s/%s' % (ckey.GetName(), vkey.GetName()))

        sourcevar = sourcecut.GetDirectory(vkey.GetName())

        signals = {}

        for hkey in sourcevar.GetListOfKeys():
            hname = hkey.GetName()
            hist = hkey.ReadObj()

            for sub in subsamples:
                if '%s_%s' % (sample, sub) in hname:
                    targets[sub].cd('%s/%s' % (ckey.GetName(), vkey.GetName()))
                    hist.Clone().Write()
                
            hist.Delete()

for target in targets.itervalues():
    target.Close()
source.Close()
