"""
Compute the global correlation coefficient of the POIs.
"""

import sys
import math
import array
import ROOT

source_path, outpath, delta = sys.argv[1:4]

source = ROOT.TFile.Open(source_path)
fitres = source.Get('fit_mdf')
pars = fitres.floatParsFinal()

pois = ROOT.RooArgList('POIs')
np = 0
while True:
    poi = pars.find('r_%d' % np)
    if not poi:
        break

    pois.add(poi)
    np += 1

vxx = fitres.reducedCovarianceMatrix(pois)

vxxinv = vxx
vxxinv.Invert()

outfile = ROOT.TFile.Open(outpath, 'update')
out = ROOT.TTree('gcc', 'global correlation coefficient')
adelta = array.array('d', [float(delta)])
out.Branch('delta', adelta, 'delta/D')
acorrs = []

for ip in range(np):
    denom = vxxinv[ip][ip] * vxx[ip][ip]
    if denom < 1.:
        # really??
        corr = 0.
    else:
        corr = math.sqrt(1. - 1. / denom)

    acorr = array.array('d', [corr])
    acorrs.append(acorr)
    out.Branch('c_%d' % ip, acorr, 'c_%d/D' % ip)

out.Fill()
outfile.cd()
out.Write()
outfile.Close()
