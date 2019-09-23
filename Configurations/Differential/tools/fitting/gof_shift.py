"""
Compute the "alternative goodness of fit" where the generalized chi square is compared between fits to post-fit toys and fits to observation, both with the same frequentist toy models.
"""

import sys
import ROOT
ROOT.gROOT.SetBatch(True)

hdir = sys.argv[1]

total = 0
above = 0

maxdiff = 0.

itoyset = 1
while True:
    freq_source = ROOT.TFile.Open('%s/higgsCombineFreqFit%d.GoodnessOfFit.mH120.%d.root' % (hdir, itoyset, itoyset + 12345))
    if not freq_source:
        break
    shift_source = ROOT.TFile.Open('%s/higgsCombineShift%d.GoodnessOfFit.mH120.root' % (hdir, itoyset))

    freq = freq_source.Get('limit')
    shift = shift_source.Get('limit')

    freq.Draw('limit')
    shift.Draw('limit')

    for itoy in range(freq.GetEntries()):
        total += 1
        if freq.GetV1()[itoy] > shift.GetV1()[itoy]:
            diff = freq.GetV1()[itoy] - shift.GetV1()[itoy]
            if diff > maxdiff:
                maxdiff = diff
                imax = (itoyset, itoy)
            above += 1

    itoyset += 1

print above, total, float(above) / total

print maxdiff, imax
