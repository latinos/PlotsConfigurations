import os
import sys
import array
import math
import ROOT

ROOT.gROOT.SetBatch(True)
ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetTextFont(42)
ROOT.gStyle.SetLabelSize(0.035, 'X')
ROOT.gStyle.SetLabelSize(0.035, 'Y')
ROOT.gStyle.SetTitleSize(0.035, 'X')
ROOT.gStyle.SetTitleSize(0.035, 'Y')
ROOT.gStyle.SetTitleOffset(1.4, 'X')
ROOT.gStyle.SetTitleOffset(1.8, 'Y')
ROOT.gStyle.SetNdivisions(208, 'X')
ROOT.gStyle.SetFillStyle(0)

thisdir = os.path.dirname(os.path.realpath(__file__))
confdir = os.path.dirname(os.path.dirname(thisdir))

config = sys.argv[1] # prefit or fiducial

productions = [
    (['ggH_hww'], 'ggF', '1f77b4'),
    (['qqH_hww'], 'VBF', 'ff7f0e'),
    (['WH_hww'], 'WH', '2ca02c'),
    (['ZH_hww', 'ggZH_hww'], 'ZH', 'd62728'),
    (['ttH_hww'], 'ttH', '9467bd')
]

histograms = {}
if config == 'fiducial':
    source = ROOT.TFile.Open('%s/fiducial/rootFile/plots_Fiducial.root' % confdir)

    for obs in ['ptH', 'njet']:
        for prods, title, _ in productions:
            for prod in prods:
                h = source.Get('fiducial/%s/histo_%s' % (obs, prod))
                h.SetDirectory(0)
                h.Scale(1.e-3) # fiducial configuration set to 1/fb lumi
                if prod == prods[0]:
                    histograms[(obs, title)] = h
                else:
                    histograms[(obs, title)].Add(h)

    source.Close()

    ytitles = {
        'ptH': 'pb / GeV',
        'njet': 'pb'
    }

elif config == 'prefit':
    pthBinning = [0., 10., 15., 20., 30., 45., 60., 80., 100., 120., 155., 200., 260., 350.]
    pthBins = []
    for ibin in range(len(pthBinning) - 1):
        low, high = pthBinning[ibin:ibin + 2]
        pthBins.append('PTH_%.0f_%.0f' % (low, high))
    pthBins.append('PTH_GT%.0f' % pthBinning[-1])

    njetBinning = [0., 1., 2., 3., 4., 5., 6.]
    njetBins = ['NJ_0', 'NJ_1', 'NJ_2', 'NJ_3', 'NJ_GE4', '']

    for prods, title, _ in productions:
        for prod in prods:
            source = ROOT.TFile.Open('%s/ggH2018/rootFile_merged/plots_ggHDifferential2018_ALL_%s.root' % (confdir, prod))
            for obs, binning, bnames in [('ptH', pthBinning, pthBins), ('njet', njetBinning, njetBins)]:
                h = ROOT.TH1D('%s_%s' % (obs, prod), '', len(binning) - 1, array.array('d', binning))
                h.SetDirectory(0)

                for ix, bname in enumerate(bnames):
                    for ckey in source.GetListOfKeys():
                        cut = ckey.GetName()
                        if not cut.startswith('hww_%s_cat' % bname):
                            continue

                        cont = 0.
                        err2 = 0.
                        for sbname in bnames:
                            if not sbname:
                                continue
                            events = source.Get('%s/events/histo_%s_%s' % (cut, prod, sbname))
                            cont += events.GetBinContent(1)
                            err2 += math.pow(events.GetBinError(1), 2.)

                        h.SetBinContent(ix + 1, cont)
                        h.SetBinError(ix + 1, math.sqrt(err2))

                try:
                    histograms[(obs, title)].Add(h)
                except KeyError:
                    histograms[(obs, title)] = h

            source.Close()

    ytitles = {
        'ptH': 'events / GeV',
        'njet': 'events'
    }

rebins = {
    'ptH': [0., 20., 45., 80., 120., 200., 260.],
    'njet': [0., 1., 2., 3., 4., 5.]
}

canvas = ROOT.TCanvas('c1', 'c1', 600, 600)
canvas.Divide(1, 2)

xmin = 0.15
xmax = 0.95
ydmin = 0.3
yrmin = 0.15
ymax = 0.95

distpad = canvas.cd(1)
distpad.SetPad(0., 0., 1., 1.)
distpad.SetMargin(xmin, 1. - xmax, ydmin, 1. - ymax)
distpad.SetLogy(True)

ratiopad = canvas.cd(2)
ratiopad.SetPad(xmin, yrmin, xmax, ydmin)
ratiopad.SetMargin(0., 0., 0., 0.)

xaxis = ROOT.TGaxis(xmin, yrmin, xmax, yrmin, 0., 1., 210, 'S')
xaxis.SetTitleOffset(ROOT.gStyle.GetTitleOffset('X') * 0.8)
xaxis.SetLabelFont(42)
xaxis.SetTitleFont(42)
xaxis.SetTitleSize(0.048)
xaxis.SetLabelSize(0.875 * 0.048)
xaxis.SetTickLength(0.03)
xaxis.SetGridLength(0.)

raxis = ROOT.TGaxis(xmin, yrmin, xmin, ydmin, 0., 1., 205, 'S')
raxis.SetTitleOffset(ROOT.gStyle.GetTitleOffset('Y') * 0.8)
raxis.SetTitleSize(0.036)
raxis.SetTitle('fractions')
raxis.SetLabelFont(42)
raxis.SetTitleFont(42)
raxis.SetLabelSize(0.875 * 0.036)
raxis.SetTickLength(0.03)
raxis.SetGridLength(0.)

for obs, xtitle in [('ptH', 'p_{T}^{H} (GeV)'), ('njet', 'N_{jet}')]:
    stack = ROOT.THStack('dist', '')
    legend = ROOT.TLegend(0.7, 0.7, 0.9, 0.9)
    legend.SetBorderSize(0)
    legend.SetFillStyle(0)
    
    total = None
    for prods, title, ccode in productions:
        color = ROOT.TColor.GetColor('#' + ccode)
        tcolor = ROOT.gROOT.GetColor(color)
        lcolor = ROOT.TColor.GetColor(tcolor.GetRed() * 0.9, tcolor.GetGreen() * 0.9, tcolor.GetBlue() * 0.9)

        hist = histograms[(obs, title)]

        if obs in rebins:
            rebin = rebins[obs]
            newhist = hist.Rebin(len(rebin) - 1, 'new_' + hist.GetName(), array.array('d', rebin))
            hist.Delete()
            hist = newhist
            histograms[(obs, title)] = hist

        nx = hist.GetNbinsX()
        hist.SetBinContent(nx, hist.GetBinContent(nx) + hist.GetBinContent(nx + 1))

        hist.Scale(1., 'width')

        if total is None:
            total = hist.Clone('total')
        else:
            total.Add(hist)
        
        hist.SetFillColor(color)
        hist.SetLineColor(lcolor)
        hist.SetLineWidth(2)

        stack.Add(hist)

    for _, title, _ in reversed(productions):
        legend.AddEntry(histograms[(obs, title)], title, 'LF')

    distpad.cd()

    stack.Draw('HIST')
    stack.GetXaxis().SetLabelSize(0.)
    stack.GetYaxis().SetTitle(ytitles[obs])
    stack.SetMinimum(histograms[(obs, 'ggF')].GetMinimum() * 0.8)
    legend.Draw()

    distpad.Update()

    uxmin = distpad.GetUxmin()
    uxmax = distpad.GetUxmax()

    rstack = ROOT.THStack('ratio', '')

    _rhists = []
    for _, title, _ in productions:
        rhist = histograms[(obs, title)].Clone('ratio_' + histograms[(obs, title)].GetName())
        _rhists.append(rhist)
        
        rhist.Divide(total)

        rstack.Add(rhist)

    ratiopad.cd()

    rstack.Draw('HIST')

    distpad.cd()

    canvas.cd()

    xaxis.SetTitle(xtitle)
    
    if obs == 'njet':
        xaxis.SetLabelSize(0.)
        latex = ROOT.TLatex(0., 0., '')
        latex.SetTextFont(42)
        latex.SetTextSize(0.048)
        latex.SetTextAlign(22)
        for il, label in enumerate(['0', '1', '2', '3', '#geq 4']):
            latex.DrawLatex(xmin + (xmax - xmin) * (0.5 + il) / 5., 0.11, label)

    xaxis.SetWmin(uxmin)
    xaxis.SetWmax(uxmax)
    xaxis.Draw()

    raxis.Draw()

    canvas.Update()
    if config == 'fiducial':
        canvas.Print('sigma_%s.pdf' % obs)
    elif config == 'prefit':
        canvas.Print('prefit_%s.pdf' % obs)
