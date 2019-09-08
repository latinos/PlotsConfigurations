import os
import sys
import array
import math
import importlib
import numpy as np
import ROOT
import root_numpy

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
ROOT.gStyle.SetHatchesLineWidth(2)
ROOT.gStyle.SetHatchesSpacing(0.5)

thisdir = os.path.dirname(os.path.realpath(__file__))
confdir = os.path.dirname(os.path.dirname(thisdir))

config = sys.argv[1] # fiducial, prefit, or postfit

# fiducial: Fiducial cross sections in bins of gen-level observables
# prefit: Prefit signal yield predictions in bins of reco-level observables. Systematic uncertainties ignored
# postfit: Observed differential cross sections in bins of gen-level observables

productions = [
    (['ggH_hww'], 'ggF', '1f77b4'),
    (['qqH_hww'], 'VBF', 'ff7f0e'),
    (['WH_hww'], 'WH', '2ca02c'),
    (['ZH_hww', 'ggZH_hww'], 'ZH', 'd62728'),
    (['ttH_hww'], 'ttH', '9467bd')
]

allprods = sum((prods for prods, _, _ in productions), [])

histograms = {}
htotals = {}

if config in ['fiducial', 'postfit']:
    source = ROOT.TFile.Open('%s/fiducial/rootFile/plots_Fiducial.root' % confdir)

    sys.path.append('%s/fiducial' % confdir)
    from nuisances import nuisances

    def get_histograms(obs, prods):
        nominals = {}
        for prod in prods:
            phist = source.Get('fiducial/%s/histo_%s' % (obs, prod))

            nominals[prod] = phist
            phist.SetDirectory(0)
        
        htotal = nominals[prods[0]].Clone('total_%s' % obs)
        htotal.SetDirectory(0)
        for prod in prods[1:]:
            htotal.Add(nominals[prod])

        uncert = root_numpy.array(htotal.GetSumw2()) # stat uncert squared
        for nuis in nuisances.itervalues():
            up = np.zeros_like(uncert)
            down = np.zeros_like(uncert)
            
            if nuis['type'] == 'shape':
                for prod in nuis['samples']:
                    if prod not in prods:
                        continue
                    
                    up += root_numpy.hist2array(source.Get('fiducial/%s/histo_%s_%sUp' % (obs, prod, nuis['name'])), include_overflow=True, copy=False)
                    down += root_numpy.hist2array(source.Get('fiducial/%s/histo_%s_%sDown' % (obs, prod, nuis['name'])), include_overflow=True, copy=False)

            elif nuis['type'] == 'lnN':
                for prod, value in nuis['samples'].iteritems():
                    if prod not in prods:
                        continue
                    
                    nom = root_numpy.hist2array(nominals[prod], include_overflow=True, copy=False)
                    if '/' in value:
                        vdown, vup = map(float, value.split('/'))
                        up += nom * vup
                        down += nom * vdown
                    else:
                        value = float(value)
                        up += nom * value
                        down += nom / value
    
            up -= down
            up *= 0.5
            uncert += np.square(up)

        htotal.GetSumw2().Set(len(uncert), array.array('d', uncert))

        return nominals, htotal

    
    for obs in ['ptH', 'njet']:
        nominals, htotal = get_histograms(obs, allprods)
        htotals[obs] = htotal
        
        for prods, title, _ in productions:
            histograms[(obs, title)] = nominals[prods[0]].Clone('%s_%s' % (obs, title))
            histograms[(obs, title)].SetDirectory(0)
            for prod in prods[1:]:
                histograms[(obs, title)].Add(nominals[prod])

            # zero out the bin errors
            err2s = root_numpy.array(histograms[(obs, title)].GetSumw2(), copy=False)
            err2s *= 0.

    ytitles = {
        'ptH': 'fb / GeV',
        'njet': 'fb'
    }

    rebins = {}

    if config == 'postfit':
        #altprods = ['ggH_hwwalt', 'qqH_hwwalt', 'WH_hww', 'ZH_hww', 'ggZH_hww', 'ttH_hww']
        #altprods = ['ggH_hww', 'qqH_hww', 'WH_hww', 'ZH_hww', 'ggZH_hww', 'ttH_hww']
        altprods = ['ggH_hww', 'qqH_hww']
        althtotals = {}

        for obs in ['ptH', 'njet']:
            _, htotal = get_histograms(obs, altprods)
            althtotals[obs] = htotal
            
    source.Close()

elif config == 'prefit':
    pthBinning = [0., 10., 15., 20., 30., 45., 60., 80., 100., 120., 155., 200., 260., 350.]
    pthBins = []
    for ibin in range(len(pthBinning) - 1):
        low, high = pthBinning[ibin:ibin + 2]
        pthBins.append('PTH_%.0f_%.0f' % (low, high))
    pthBins.append('PTH_GT%.0f' % pthBinning[-1])

    njetBinning = [0., 1., 2., 3., 4., 5., 6.]
    njetBins = ['NJ_0', 'NJ_1', 'NJ_2', 'NJ_3', 'NJ_GE4', '']

    nominals = {}
    for prod in allprods:
        nominals[prod] = {}
        
        source = ROOT.TFile.Open('%s/ggH2018/rootFile_merged/plots_ggHDifferential2018_ALL_%s.root' % (confdir, prod))

        for obs, binning, bnames in [('ptH', pthBinning, pthBins), ('njet', njetBinning, njetBins)]:
            nominals[prod][obs] = ROOT.TH1D('%s_%s' % (obs, prod), '', len(binning) - 1, array.array('d', binning))
            nominals[prod][obs].Sumw2()
            nominals[prod][obs].SetDirectory(0)

            # reco-level bins
            for ix, bname in enumerate(bnames):
                for ckey in source.GetListOfKeys():
                    cut = ckey.GetName()
                    if not cut.startswith('hww_%s_cat' % bname):
                        continue

                    # sum over gen-level binned samples
                    cont = 0.
                    err2 = 0.
                    for sbname in bnames:
                        if not sbname:
                            continue
                        events = source.Get('%s/events/histo_%s_%s' % (cut, prod, sbname))
                        cont += events.GetBinContent(1)
                        err2 += math.pow(events.GetBinError(1), 2.)

                    nominals[prod][obs].SetBinContent(ix + 1, cont)
                    nominals[prod][obs].SetBinError(ix + 1, math.sqrt(err2))

        source.Close()

    for obs in ['ptH', 'njet']:
        for prods, title, _ in productions:
            histograms[(obs, title)] = nominals[prods[0]][obs].Clone('%s_%s' % (obs, title))
            histograms[(obs, title)].SetDirectory(0)
            for prod in prods[1:]:
                histograms[(obs, title)].Add(nominals[prod][obs])

        htotals[obs] = histograms[(obs, productions[0][1])].Clone('total_%s' % obs)
        htotals[obs].SetDirectory(0)
        for _, title, _ in productions[1:]:
            htotals[obs].Add(histograms[(obs, title)])

    ytitles = {
        'ptH': 'events / GeV',
        'njet': 'events'
    }

    rebins = {
        'ptH': [0., 20., 45., 80., 120., 200., 260.],
        'njet': [0., 1., 2., 3., 4., 5.]
    }

if config == 'postfit':
    mus = {}
    for obs in ['ptH', 'njet']:
        mus[obs] = []
        
        source = ROOT.TFile.Open('%s/combination/%s_fullmodel/multidimfitReg.root' % (confdir, obs))
        fitresult = source.Get('fit_mdf')
        pars = fitresult.floatParsFinal()
        imu = 0
        while True:
            mu = pars.find('r_%d' % imu)
            if not mu:
                break

            mus[obs].append((mu.getVal(), -mu.getErrorLo(), mu.getErrorHi()))
            imu += 1

        source.Close()

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
if config == 'postfit':
    ratiopad.SetGridy(True)

xaxis = ROOT.TGaxis(xmin, yrmin, xmax, yrmin, 0., 1., 210, 'S')
xaxis.SetTitleOffset(ROOT.gStyle.GetTitleOffset('X') * 0.8)
xaxis.SetLabelFont(42)
xaxis.SetTitleFont(42)
xaxis.SetTitleSize(0.048)
xaxis.SetLabelSize(0.875 * 0.048)
xaxis.SetTickLength(0.01)
xaxis.SetGridLength(0.)

raxis = ROOT.TGaxis(xmin, yrmin, xmin, ydmin, 0., 1., 202, 'S')
raxis.SetTitleOffset(ROOT.gStyle.GetTitleOffset('Y') * 0.8)
raxis.SetTitleSize(0.036)
raxis.SetLabelFont(42)
raxis.SetTitleFont(42)
raxis.SetLabelSize(0.875 * 0.036)
raxis.SetTickLength(0.03)
raxis.SetGridLength(0.)

for obs, xtitle in [('ptH', 'p_{T}^{H} (GeV)'), ('njet', 'N_{jet}')]:
    stack = ROOT.THStack('dist', '')
    legend = ROOT.TLegend(0.7, 0.7, 0.9, 0.94)
    legend.SetBorderSize(0)
    legend.SetFillStyle(0)
    
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
        hist.SetFillColor(color)
        hist.SetLineColor(lcolor)
        hist.SetLineWidth(2)

        stack.Add(hist)

    for _, title, _ in reversed(productions):
        legend.AddEntry(histograms[(obs, title)], title, 'LF')

    distpad.cd()

    # uncertainty
    total = htotals[obs]
    if obs in rebins:
        rebin = rebins[obs]
        newtotal = total.Rebin(len(rebin) - 1, 'new_' + total.GetName(), array.array('d', rebin))
        total.Delete()
        total = newtotal
        htotals[obs] = total

    nx = total.GetNbinsX()
    total.SetBinContent(nx, total.GetBinContent(nx) + total.GetBinContent(nx + 1))
        
    total.Scale(1., 'width')
    total.SetFillColor(ROOT.kBlack)
    total.SetFillStyle(3003)
    total.SetLineColor(ROOT.kBlack)
    total.SetLineWidth(1)

    stack.Draw('HIST')
    stack.GetXaxis().SetLabelSize(0.)
    stack.GetYaxis().SetTitle(ytitles[obs])
    stack.SetMinimum(histograms[(obs, 'ggF')].GetMinimum() * 0.8)
    total.Draw('SAME E2')

    distpad.Update()

    if config == 'postfit':
        althtotal = althtotals[obs]
        althtotal.Scale(1., 'width')
        althtotal.SetLineColor(ROOT.kGray)
        althtotal.SetLineWidth(2)
        althtotal.SetFillColor(ROOT.kGray)
        althtotal.SetFillStyle(3395) # vertical hatch
        althtotal.Draw('SAME E2')

        legend.AddEntry(althtotal, 'Alternative pred.', 'LF')

        althtotal_line = ROOT.TLine(0., 0., 0., 0.)
        althtotal_line.SetLineColor(ROOT.kGray)
        althtotal_line.SetLineWidth(2)
        for ix in range(1, althtotal.GetNbinsX() + 1):
            xmin = althtotal.GetXaxis().GetBinLowEdge(ix)
            xmax = althtotal.GetXaxis().GetBinUpEdge(ix)
            y = althtotal.GetBinContent(ix)
            althtotal_line.DrawLine(xmin, y, xmax, y)

        gobs = ROOT.TGraphAsymmErrors(total)

        ymin = histograms[(obs, 'ggF')].GetMinimum() * 0.8
        ymax = 0.
        for ip in range(total.GetNbinsX()):
            y = gobs.GetY()[ip] * mus[obs][ip][0]
            errlo = gobs.GetY()[ip] * mus[obs][ip][1]
            errhi = gobs.GetY()[ip] * mus[obs][ip][2]
            gobs.SetPoint(ip, gobs.GetX()[ip], y)
            gobs.SetPointEYlow(ip, errlo)
            gobs.SetPointEYhigh(ip, errhi)
            gobs.SetPointEXlow(ip, 0.)
            gobs.SetPointEXhigh(ip, 0.)

            if y - errlo < ymin:
                ymin = (y - errlo) * 0.8
            if y + errhi > ymax:
                ymax = (y + errhi) * 1.2

        gobs.SetMarkerColor(ROOT.kBlack)
        gobs.SetMarkerStyle(8)
        gobs.SetMarkerSize(0.8)
        gobs.SetLineColor(ROOT.kBlack)
        gobs.SetLineWidth(2)
        
        gobs.Draw('EP')

        legend.AddEntry(gobs, 'Observed', 'LP')

        stack.SetMinimum(ymin)
        stack.SetMaximum(ymax)

    legend.Draw()
    distpad.Update()

    uxmin = distpad.GetUxmin()
    uxmax = distpad.GetUxmax()

    ratiopad.cd()

    rstack = ROOT.THStack('ratio', '')

    _rhists = []
    for _, title, _ in productions:
        rhist = histograms[(obs, title)].Clone('ratio_' + histograms[(obs, title)].GetName())
        _rhists.append(rhist)
        
        rhist.Divide(total)

        rstack.Add(rhist)

    rstack.Draw('HIST')

    uncert = total.Clone('uncert')
    atotal = root_numpy.hist2array(total, copy=False)
    err2s = root_numpy.array(uncert.GetSumw2(), copy=False)
    err2s[1:-1] /= np.square(atotal)
    root_numpy.array2hist(np.ones_like(atotal), uncert)

    uncert.Draw('SAME E2')

    ratiopad.Update()

    if config in ['fiducial', 'prefit']:
        raxis.SetTitle('fractions')
        rstack.SetMinimum(0.)
        rstack.SetMaximum(1.)

    elif config == 'postfit':
        altrhist = althtotal.Clone('altrhist')
        altrhist.SetTitle('')
        altrhist.Divide(total)

        altrhist.Draw('SAME E2')

        for ix in range(1, altrhist.GetNbinsX() + 1):
            xmin = altrhist.GetXaxis().GetBinLowEdge(ix)
            xmax = altrhist.GetXaxis().GetBinUpEdge(ix)
            y = altrhist.GetBinContent(ix)
            althtotal_line.DrawLine(xmin, y, xmax, y)
        
        robs = gobs.Clone()

        rmin = 0.
        rmax = 2.
        for ip in range(robs.GetN()):
            mu = mus[obs][ip]
            robs.SetPoint(ip, robs.GetX()[ip], mu[0])
            robs.SetPointEYlow(ip, mu[1])
            robs.SetPointEYhigh(ip, mu[2])

            if mu[0] - mu[1] < rmin:
                rmin = math.floor(mu[0] - mu[1])
            if mu[0] + mu[2] > rmax:
                rmax = math.ceil(mu[0] + mu[2])

        robs.Draw('EP')

        rstack.SetMinimum(rmin)
        rstack.SetMaximum(rmax)

        one = ROOT.TLine(altrhist.GetXaxis().GetXmin(), 1., altrhist.GetXaxis().GetXmax(), 1.)
        one.SetLineColor(ROOT.kBlack)
        one.SetLineWidth(1)
        one.Draw()

        binbound = ROOT.TLine(0., 0., 0., 0.)
        binbound.SetLineColor(ROOT.kGray)
        binbound.SetLineWidth(1)
        for ix in range(1, altrhist.GetNbinsX()):
            edge = altrhist.GetXaxis().GetBinUpEdge(ix)
            binbound.DrawLine(edge, rmin, edge, rmax)
        
        raxis.SetTitle('Obs. / pred.')
        raxis.SetWmin(rmin)
        raxis.SetWmax(rmax)

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
    elif config == 'postfit':
        canvas.Print('postfit_%s.pdf' % obs)
