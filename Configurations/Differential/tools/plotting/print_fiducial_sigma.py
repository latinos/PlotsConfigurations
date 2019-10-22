import os
import sys
import math
import ROOT

import common

try:
    tag = sys.argv[1]
except:
    tag = 'F0Dep'

card_tag = 'postapproval'

confdir = os.path.dirname(os.path.dirname(os.path.dirname(os.path.realpath(__file__))))

sigma = 0.

source = ROOT.TFile.Open('%s/fiducial/rootFile/plots_Fiducial.root' % confdir)

_, htotal, statonly = common.get_fiducial_histograms(source, 'events', ['ggH_hww', 'qqH_hww', 'WH_hww', 'ZH_hww', 'ggZH_hww', 'ttH_hww'], add_stat_only=True)

sigma = htotal.GetBinContent(1)
sigmastat = statonly.GetBinError(1)
sigmaerr = math.sqrt(math.pow(htotal.GetBinError(1), 2.) - sigmastat * sigmastat)

print '%.1f \pm %.1f (theo.) \pm %.1f (stat.)' % (sigma, sigmaerr, sigmastat)

source.Close()

fitname = 'IntegratedUnreg' + tag

table = ''

for year in ['2016', '2017', '2018']:
    table += '      %s ' % year

    for obs in ['ptH', 'njet']:
        source = ROOT.TFile.Open('%s/ggH%s/merged_cards/%s_%s/integrated/higgsCombine%s.MultiDimFit.mH120.root' % (confdir, year, obs, card_tag, fitname))
        limit = source.Get('limit')
        if not limit:
            table += '& \mdash '
            table += '& \mdash'
            continue
            
        limit.Draw('r', '', 'goff')
        r = limit.GetV1()[0]
        rdown = limit.GetV1()[1]
        rup = limit.GetV1()[2]
        source.Close()

        table += '& $%.2f^{+%.2f}_{-%.2f}$ ' % (r, (rup - r), (r - rdown))
        table += '& $%.1f^{+%.1f}_{-%.1f}$ ' % (r * sigma, (rup - r) * sigma, (r - rdown) * sigma)

    table += '\\\\\n'

table += '      Combination '

for obs in ['ptH', 'njet']:
    source = ROOT.TFile.Open('%s/combination/%s_%s/integrated/higgsCombine%s.MultiDimFit.mH120.root' % (confdir, obs, card_tag, fitname))
    limit = source.Get('limit')
    if not limit or limit.GetEntries() == 0:
        table += '& \mdash '
        table += '& \mdash'
        continue

    limit.Draw('r', '', 'goff')
    r = limit.GetV1()[0]
    rdown = limit.GetV1()[1]
    rup = limit.GetV1()[2]
    source.Close()

    table += '& $%.2f^{+%.2f}_{-%.2f}$ ' % (r, (rup - r), (r - rdown))
    table += '& $%.1f^{+%.1f}_{-%.1f}$ ' % (r * sigma, (rup - r) * sigma, (r - rdown) * sigma)

table += '\\\\\n'

print table
