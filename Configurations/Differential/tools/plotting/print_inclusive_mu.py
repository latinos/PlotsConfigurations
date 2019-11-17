import os
import ROOT

import common

confdir = os.path.dirname(os.path.dirname(os.path.dirname(os.path.realpath(__file__))))

fitname = 'Inclusive'

table = ''

for year in ['2016', '2017', '2018']:
    table += '      %s ' % year

    for obs in ['ptH', 'njet']:
        source = ROOT.TFile.Open('%s/ggH%s/merged_cards/%s_fullmodel/higgsCombine%s.MultiDimFit.mH120.root' % (confdir, year, obs, fitname))
        limit = source.Get('limit')
        limit.Draw('r', '', 'goff')
        r = limit.GetV1()[0]
        rdown = limit.GetV1()[1]
        rup = limit.GetV1()[2]
        source.Close()

        table += '& $%.2f^{+%.2f}_{-%.2f}$ ' % (r, (rup - r), (r - rdown))

    table += '\\\\\n'

table += '      Combination '

for obs in ['ptH', 'njet']:
    source = ROOT.TFile.Open('%s/combination/%s_fullmodel/higgsCombine%s.MultiDimFit.mH120.root' % (confdir, obs, fitname))
    limit = source.Get('limit')
    limit.Draw('r', '', 'goff')
    r = limit.GetV1()[0]
    rdown = limit.GetV1()[1]
    rup = limit.GetV1()[2]
    source.Close()

    table += '& $%.2f^{+%.2f}_{-%.2f}$ ' % (r, (rup - r), (r - rdown))

table += '\\\\\n'

print table
