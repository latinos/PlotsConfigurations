"""
Compute the "alternative goodness of fit" where the generalized chi square is compared between fits to post-fit toys and fits to observation, both with the same frequentist toy models.
"""

import sys
import ROOT
ROOT.gROOT.SetBatch(True)

hdir = sys.argv[1]

nperjob = 4
ntoys = 125

total = 0
above = 0

for itoyset in range(1, ntoys + 1):
    freq_source = ROOT.TFile.Open('%s/higgsCombineFreqFit%d.GoodnessOfFit.mH120.%d.root' % (hdir, itoyset, itoyset + 12345))
    shift_source = ROOT.TFile.Open('%s/higgsCombineShift%d.GoodnessOfFit.mH120.root' % (hdir, itoyset))

    freq = freq_source.Get('limit')
    shift = shift_source.Get('limit')

    freq.Draw('limit')
    shift.Draw('limit')

    for itoy in range(nperjob):
        total += 1
        if freq.GetV1()[itoy] > shift.GetV1()[itoy]:
            above += 1

print above, total, float(above) / total
