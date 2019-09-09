import os
import ROOT

import common

confdir = os.path.dirname(os.path.dirname(os.path.dirname(os.path.realpath(__file__))))

sigma = 0.

source = ROOT.TFile.Open('%s/fiducial/rootFile/plots_Fiducial.root' % confdir)

_, htotal = common.get_fiducial_histograms(source, 'events', ['ggH_hww', 'qqH_hww', 'WH_hww', 'ZH_hww', 'ggZH_hww', 'ttH_hww'])

sigma = htotal.GetBinContent(1)
sigmaerr = htotal.GetBinError(1)

print '%.1f \pm %.1f' % (sigma, sigmaerr)

source.Close()

table = ''

for year in ['2016', '2017', '2018']:
    table += '      %s ' % year

    for obs in ['ptH', 'njet']:
        source = ROOT.TFile.Open('%s/ggH%s/merged_cards/%s_fullmodel/higgsCombineGlobal.MultiDimFit.mH120.root' % (confdir, year, obs))
        limit = source.Get('limit')
        limit.Draw('r', '', 'goff')
        r = limit.GetV1()[0]
        rdown = limit.GetV1()[1]
        rup = limit.GetV1()[2]
        source.Close()

        table += '& $%.1f^{+%.1f}_{-%.1f}$ ' % (r * sigma, (rup - r) * sigma, (r - rdown) * sigma)

    table += '\\\\\n'

table += '      Combination '

for obs in ['ptH', 'njet']:
    source = ROOT.TFile.Open('%s/combination/%s_fullmodel/higgsCombineGlobal.MultiDimFit.mH120.root' % (confdir, obs))
    limit = source.Get('limit')
    limit.Draw('r', '', 'goff')
    r = limit.GetV1()[0]
    rdown = limit.GetV1()[1]
    rup = limit.GetV1()[2]
    source.Close()

    table += '& $%.1f^{+%.1f}_{-%.1f}$ ' % (r * sigma, (rup - r) * sigma, (r - rdown) * sigma)

table += '\\\\\n'

print table
