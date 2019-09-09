import sys
import re
import numpy as np
import ROOT
import root_numpy

year = sys.argv[1]

out = ROOT.TFile.Open(sys.argv[2], 'recreate')
ROOT.gROOT.GetListOfFiles().Remove(out)

source_paths = sys.argv[3:]

cuts = []
for nj in ['0', '1']:
    for pt2 in ['pt2lt20', 'pt2ge20']:
        for flav in ['em', 'me']:
            cuts.append(('hww_NJ_%s_cat%s%s_%s' % (nj, pt2, flav, year), []))
            for chrg in ['pm', 'mp']:
                cuts[-1][1].append('hww_NJ_%s_cat%s%s%s_%s' % (nj, pt2, flav, chrg, year))

for pt2 in ['pt2lt20', 'pt2ge20']:
    cuts.append(('hww_NJ_2_cat%s_%s' % (pt2, year), []))
    for flav in ['em', 'me']:
        cuts[-1][1].append('hww_ggH2J_cat%s%s_%s' % (pt2, flav, year))

for nj in ['0', '1']:
    for cr in ['top', 'DY']:
        cuts.append(('hww_CR_catNJ_%s_%s_%s' % (nj, cr, year), ['hww_CR_catNJ_%s_%s_%s' % (nj, cr, year)]))

for cr in ['top', 'DY']:
    cuts.append(('hww_CR_catNJ_2_%s_%s' % (cr, year), []))
    for nj in ['2', '3', 'GE4']:
        cuts[-1][1].append('hww_CR_catNJ_%s_%s_%s' % (nj, cr, year))

allhistograms = {}
for outcut, _ in cuts:
    out.mkdir(outcut)
    if 'CR' in outcut:
        out.mkdir('%s/events' % outcut)
    else:
        out.mkdir('%s/mllVSmth_6x6' % outcut)

    allhistograms[outcut] = {}

systmap = {}

for path in source_paths:
    print path
    source = ROOT.TFile.Open(path)
    ROOT.gROOT.GetListOfFiles().Remove(source)

    for outcut, incuts in cuts:
        if 'CR' in outcut:
            variable = 'events'
        else:
            variable = 'mllVSmth_6x6'

        outdir = out.GetDirectory('%s/%s' % (outcut, variable))
        histograms = allhistograms[outcut]
            
        for incut in incuts:
            indir = source.GetDirectory('%s/%s' % (incut, variable))
            for hkey in indir.GetListOfKeys():
                hname = hkey.GetName()

                matches = re.match('(histo_.+H_hww)_(PTH|NJ)_(?:[GET0-9]+|[0-9]+_[0-9]+)(|_[^0-9].+)$', hname)
                if matches:
                    if matches.group(2) == 'PTH':
                        continue
                    else:
                        hname = matches.group(1) + matches.group(3)
                
                hist = hkey.ReadObj()
                try:
                    histograms[hname].Add(hist)
                except KeyError:
                    outdir.cd()
                    histograms[hname] = hist.Clone(hname)

                hist.Delete()

        systmap[outcut] = {}
                
        for hname in histograms.iterkeys():
            if not hname.endswith('Up') and not hname.endswith('Down'):
                systmap[outcut][hname] = []

        for hname in histograms.iterkeys():
            if hname.endswith('Up') or hname.endswith('Down'):
                nominal = next(n for n in systmap[outcut].iterkeys() if hname.startswith(n + '_'))
                systmap[outcut][nominal].append(hname)

    source.Close()

for outcut, maps in systmap.iteritems():
    histograms = allhistograms[outcut]
    for nominal, variations in maps.iteritems():
        nomcont = root_numpy.hist2array(histograms[nominal], copy=False)

        if np.sum(nomcont) <= 0.:
            nomcont *= 0.
            for variation in variations:
                histograms[variation].Reset()

        else:
            idx_nonpositive = np.where(nomcont <= 0.)
            nomcont[idx_nonpositive] = 1.e-6
            
            for variation in variations:
                cont = root_numpy.hist2array(histograms[variation], copy=False)
                if np.sum(cont) <= 0.:
                    if variation.endswith('Up'):
                        cont[:] = nomcont * (1. + 1.e-6)
                    else:
                        cont[:] = nomcont * (1. - 1.e-6)
                else:
                    idx_nonpositive = np.where(cont <= 0.)
                    cont[idx_nonpositive] = 1.e-6

out.Write()
out.Close()
