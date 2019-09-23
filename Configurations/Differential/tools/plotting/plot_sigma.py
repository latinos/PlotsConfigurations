import os
import sys
import array
import math
import importlib
import numpy as np
import ROOT
import root_numpy

import common

ROOT.gStyle.SetHatchesLineWidth(2)
#ROOT.gStyle.SetHatchesSpacing(0.5)

config = sys.argv[1] # fiducial, prefit, or postfit
try:
    skip_unreg = sys.argv[2]
except:
    skip_unreg = ''

# fiducial: Fiducial cross sections in bins of gen-level observables
# prefit: Prefit signal yield predictions in bins of reco-level observables. Systematic uncertainties ignored
# postfit: Observed differential cross sections in bins of gen-level observables

productions = [
    (['ggH_hww'], 'ggF'),
    (['qqH_hww'], 'VBF'),
    (['WH_hww'], 'WH'),
    (['ZH_hww', 'ggZH_hww'], 'ZH'),
    (['ttH_hww'], 'ttH')
]

prod_colors = {
    'ggF': '#1f77b4',
    'VBF': '#ff7f0e',
    'WH': '#2ca02c',
    'ZH': '#d62728',
    'ttH': '#9467bd'
}

allprods = sum((prods for prods, _ in productions), [])

histograms = {}
htotals = {}

if config in ['fiducial', 'postfit']:
    source = ROOT.TFile.Open('%s/fiducial/rootFile/plots_Fiducial.root' % common.confdir)

    for obs in ['ptH', 'njet']:
        nominals, htotal = common.get_fiducial_histograms(source, obs, allprods)
        htotals[obs] = htotal
        
        for prods, title in productions:
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
        altprods = ['ggH_hwwalt', 'qqH_hwwalt', 'WH_hww', 'ZH_hww', 'ggZH_hww', 'ttH_hww']
        althtotals = {}

        for obs in ['ptH', 'njet']:
            _, htotal = common.get_fiducial_histograms(source, obs, altprods)
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
        
        source = ROOT.TFile.Open('%s/ggH2018/rootFile_merged/plots_ggHDifferential2018_ALL_%s.root' % (common.confdir, prod))

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
        for prods, title in productions:
            histograms[(obs, title)] = nominals[prods[0]][obs].Clone('%s_%s' % (obs, title))
            histograms[(obs, title)].SetDirectory(0)
            for prod in prods[1:]:
                histograms[(obs, title)].Add(nominals[prod][obs])

        htotals[obs] = histograms[(obs, productions[0][1])].Clone('total_%s' % obs)
        htotals[obs].SetDirectory(0)
        for _, title in productions[1:]:
            htotals[obs].Add(histograms[(obs, title)])

    ytitles = {
        'ptH': 'events / GeV',
        'njet': 'events'
    }

    rebins = common.binning

if config == 'postfit':
    mus_reg = {}
    mus_unreg = {}

    for sname, mus in [('Reg', mus_reg), ('Unreg', mus_unreg)]:
        for obs in ['ptH', 'njet']:
            mus[obs] = []
            
            source = ROOT.TFile.Open('%s/combination/%s_fullmodel/multidimfit%s.root' % (common.confdir, obs, sname))
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

canvas = common.makeRatioCanvas(600, 600)

for obs, xtitle in [('ptH', 'p_{T}^{H} (GeV)'), ('njet', 'N_{jet}')]:
    stack = ROOT.THStack('dist', '')
    legend = ROOT.TLegend(0.7, 0.7, common.xmax, common.ymax)
    legend.SetBorderSize(0)
    legend.SetFillStyle(0)
    
    for prods, title in productions:
        color = ROOT.TColor.GetColor(prod_colors[title])
        lcolor = common.get_line_color(color)

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

    for _, title in reversed(productions):
        legend.AddEntry(histograms[(obs, title)], title, 'LF')

    distpad = canvas.cd(1)
    distpad.SetLogy(True)

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

    frame = total.Clone('frame')
    frame.Reset()
    frame.SetTitle('')

    frame.SetMinimum(histograms[(obs, 'ggF')].GetMinimum() * 0.8)
    frame.SetMaximum(stack.GetMaximum() * 2.5)
    frame.GetXaxis().SetLabelSize(0.)
    frame.GetYaxis().SetTitle(ytitles[obs])

    frame.Draw()
    stack.Draw('SAME HIST')
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

        table = ''

        ymin = histograms[(obs, 'ggF')].GetMinimum() * 0.8
        ymax = 0.
        for ip in range(total.GetNbinsX()):
            y = gobs.GetY()[ip] * mus_reg[obs][ip][0]
            errlo = gobs.GetY()[ip] * mus_reg[obs][ip][1]
            errhi = gobs.GetY()[ip] * mus_reg[obs][ip][2]
            gobs.SetPoint(ip, gobs.GetX()[ip], y)
            gobs.SetPointEYlow(ip, errlo)
            gobs.SetPointEYhigh(ip, errhi)
            gobs.SetPointEXlow(ip, 0.)
            gobs.SetPointEXhigh(ip, 0.)

            # table for AN/PAS
            if obs == 'ptH':
                xmin = total.GetXaxis().GetBinLowEdge(ip + 1)
                xmax = total.GetXaxis().GetBinUpEdge(ip + 1)
                binw = xmax - xmin
                if ip != total.GetNbinsX() - 1:
                    line = '      $[%.0f, %.0f]$ ' % (xmin, xmax)
                else:
                    line = '      $[%.0f, \\infty)$ ' % xmin

            elif obs == 'njet':
                binw = 1.
                if ip != total.GetNbinsX() - 1:
                    line = '      $%d$ ' % ip
                else:
                    line = '      $\geq %d$ ' % ip

            line += '& $%.2f$ ' % (total.GetBinContent(ip + 1) * binw)

            if skip_unreg:
                line += ('& $%.2f^{%+.2f}_{%+.2f}$ ' * 2) % \
                    (mus_reg[obs][ip][0], mus_reg[obs][ip][1], mus_reg[obs][ip][2], 
                        y * binw, errhi * binw, -errlo * binw)
            else:
                line += ('& $%.2f^{%+.2f}_{%+.2f}$ ' * 3) % \
                    (mus_unreg[obs][ip][0], mus_unreg[obs][ip][1], mus_unreg[obs][ip][2],
                        mus_reg[obs][ip][0], mus_reg[obs][ip][1], mus_reg[obs][ip][2], 
                        y * binw, errhi * binw, -errlo * binw)

            line += '\\\\\n'

            table += line

            if y - errlo < ymin:
                ymin = (y - errlo) * 0.8
            if y + errhi > ymax:
                ymax = (y + errhi) * 3.

        print table

        gobs.SetMarkerColor(ROOT.kBlack)
        gobs.SetMarkerStyle(8)
        gobs.SetMarkerSize(0.8)
        gobs.SetLineColor(ROOT.kBlack)
        gobs.SetLineWidth(2)
        
        gobs.Draw('EP')

        legend.AddEntry(gobs, 'Observed', 'LP')

        frame.SetMinimum(ymin)
        frame.SetMaximum(ymax)

    legend.Draw()
    distpad.Update()

    ratiopad = canvas.cd(2)

    if config == 'postfit':
        ratiopad.SetGridy(True)

    rframe = total.Clone('rframe')
    rframe.Reset()
    rframe.SetTitle('')

    rframe.Draw('HIST')
    rframe.SetTickLength(0., 'X')
    rframe.SetTickLength(0., 'Y')
    rframe.GetYaxis().SetLabelSize(0.)
    rframe.GetYaxis().SetTitle('')
    rframe.GetYaxis().SetTitle('')

    rstack = ROOT.THStack('ratio', '')

    _rhists = []
    for _, title in productions:
        rhist = histograms[(obs, title)].Clone('ratio_' + histograms[(obs, title)].GetName())
        _rhists.append(rhist)
        
        rhist.Divide(total)

        rstack.Add(rhist)

    rstack.Draw('SAME HIST')

    uncert = total.Clone('uncert')
    atotal = root_numpy.hist2array(total, copy=False)
    err2s = root_numpy.array(uncert.GetSumw2(), copy=False)
    err2s[1:-1] /= np.square(atotal)
    root_numpy.array2hist(np.ones_like(atotal), uncert)

    uncert.Draw('SAME E2')

    ratiopad.Update()

    if config in ['fiducial', 'prefit']:
        canvas.raxis.SetTitle('fractions')
        rframe.SetMinimum(0.)
        rframe.SetMaximum(1.)

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
            mu = mus_reg[obs][ip]
            robs.SetPoint(ip, robs.GetX()[ip], mu[0])
            robs.SetPointEYlow(ip, mu[1])
            robs.SetPointEYhigh(ip, mu[2])

            if mu[0] - mu[1] < rmin:
                rmin = math.floor(mu[0] - mu[1])
            if mu[0] + mu[2] > rmax:
                rmax = math.ceil(mu[0] + mu[2])

        robs.Draw('EP')

        rframe.SetMinimum(rmin)
        rframe.SetMaximum(rmax)

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
        
        canvas.raxis.SetTitle('Obs. / pred.')
        canvas.raxis.SetWmin(rmin)
        canvas.raxis.SetWmax(rmax)

    canvas.xaxis.SetTitle(xtitle)
    
    if obs == 'njet':
        canvas.xaxis.SetLabelSize(0.)

        canvas.cd()

        latex = ROOT.TLatex(0., 0., '')
        latex.SetTextFont(42)
        latex.SetTextSize(0.048)
        latex.SetTextAlign(23)
        for il, label in enumerate(['0', '1', '2', '3', '#geq 4']):
            latex.DrawLatex(common.xmin + (common.xmax - common.xmin) * (0.5 + il) / 5., common.ymin - 0.02, label)

    if config == 'fiducial':
        canvas.printout('sigma_%s.pdf' % obs)
    elif config == 'prefit':
        canvas.printout('prefit_%s.pdf' % obs)
    elif config == 'postfit':
        canvas.printout('observed_sigma_%s.pdf' % obs)
