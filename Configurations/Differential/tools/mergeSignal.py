# A simple script to merge all gen-level bins of Higgs samples into one
# Use to convert differential distributions to inclusive

import sys
import re
import ROOT

MERGE_GENBIN = True

source = ROOT.TFile.Open(sys.argv[1])
ROOT.gROOT.GetListOfFiles().Remove(source)
target = ROOT.TFile.Open(sys.argv[2], 'recreate')
ROOT.gROOT.GetListOfFiles().Remove(target)

for ckey in source.GetListOfKeys():
    target.mkdir(ckey.GetName())

    sourcecut = source.GetDirectory(ckey.GetName())
    targetcut = target.GetDirectory(ckey.GetName())

    for vkey in sourcecut.GetListOfKeys():
        targetcut.mkdir(vkey.GetName())

        sourcevar = sourcecut.GetDirectory(vkey.GetName())
        targetvar = targetcut.GetDirectory(vkey.GetName())

        signals = {}

        for hkey in sourcevar.GetListOfKeys():
            hist = hkey.ReadObj()

            matches = re.match('histo_(.+_(?:hww|htt))_(?:fid|nonfid)(_(?:PTH|NJ)_(?:[0-9]+_[0-9]+|[GET0-9]+))(|_.+)$', hkey.GetName())

            if matches:
                sample = matches.group(1)
                genbin = matches.group(2)
                variation = matches.group(3)
                if MERGE_GENBIN:
                    hname = 'histo_' + sample + variation
                else:
                    hname = 'histo_' + sample + genbin + variation
                try:
                    signals[hname].Add(hist)
                except KeyError:
                    targetvar.cd()
                    signals[hname] = hist.Clone(hname)
            else:
                targetvar.cd()
                hist.Clone().Write()
                
            hist.Delete()

        targetvar.cd()
        for hist in signals.itervalues():
            hist.Write()

target.Close()
source.Close()
