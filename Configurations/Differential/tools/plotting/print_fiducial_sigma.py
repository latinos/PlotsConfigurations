import os
import ROOT

confdir = os.path.dirname(os.path.dirname(os.path.dirname(os.path.realpath(__file__))))

sigma = 0.

source = ROOT.TFile.Open('%s/fiducial/rootFile/plots_Fiducial.root' % confdir)

hdir = source.GetDirectory('fiducial/events')

for hkey in hdir.GetListOfKeys():
    hname = hkey.GetName()
    if hname.endswith('Up') or hname.endswith('Down'):
        continue
    if 'hwwalt' in hname:
        continue

    sigma += hkey.ReadObj().GetBinContent(1)

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
