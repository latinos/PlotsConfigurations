import os
import sys
import array
import math

from argparse import ArgumentParser

argParser = ArgumentParser(description='Plot and print differential cross sections')
argParser.add_argument('config', metavar='CONFIG', help='fiducial, prefit, or postfit')
argParser.add_argument('--skip-unreg', '-U', action='store_true', dest='skip_unreg', help='Do not print unregularized cross sections.')
argParser.add_argument('--add-bias', '-B', action='store_true', dest='add_bias', help='Add estimated bias.')
argParser.add_argument('--card-tag', '-t', metavar='TAG', dest='card_tag', default='postapproval', help='Data card tag.')
argParser.add_argument('--out', '-o', metavar='DIRECTORY', dest='out_path', help='Directory to write the output plot pdf files to.')

args = argParser.parse_args()
sys.argv = []

import numpy as np
import ROOT
import root_numpy as rnp
import uproot

import common

ROOT.gStyle.SetHatchesLineWidth(2)
ROOT.gStyle.SetHatchesSpacing(1.5)

# fiducial: Fiducial cross sections in bins of gen-level observables
# prefit: Prefit signal yield predictions in bins of reco-level observables. Systematic uncertainties ignored
# postfit: Observed differential cross sections in bins of gen-level observables

#productions = [
#    (['ggH_hww'], 'ggF'),
#    (['qqH_hww'], 'VBF'),
#    (['WH_hww'], 'WH'),
#    (['ZH_hww', 'ggZH_hww'], 'ZH'),
#    (['ttH_hww'], 'ttH')
#]

productions = [
    (['ttH_hww'], 'ttH'),
    (['ZH_hww', 'ggZH_hww', 'WH_hww'], 'ZH+WH'),
    (['qqH_hww'], 'VBF'),
    (['ggH_hww'], 'ggF')
]

prod_colors = {
    'ttH': ROOT.TColor.GetColor('#b86bb0'),
    'ZH+WH': ROOT.TColor.GetColor('#ed7880'),
    'VBF': ROOT.TColor.GetColor('#e6a45a'),
    'ggF': ROOT.TColor.GetColor('#b3d472'),
}

uncs = [
    'statistical',
    'experimental',
    'theoretical',
    'luminosity'
]

unc_colors = {
    'statistical': ROOT.TColor.GetColor('#1dc1ef'),
    'experimental': ROOT.TColor.GetColor('#1d8ad2'),
    'theoretical': ROOT.TColor.GetColor('#4c50a1'),
    'luminosity': ROOT.TColor.GetColor('#59035c')
}

alt_color = ROOT.kGreen + 3

allprods = sum((prods for prods, _ in productions), [])

histograms = {}
htotals = {}

if args.config in ['fiducial', 'postfit']:
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
            err2s = rnp.array(histograms[(obs, title)].GetSumw2(), copy=False)
            err2s *= 0.

    ytitles = {
        'ptH': 'fb / GeV',
        'njet': 'fb'
    }

    rebins = {}

    if args.config == 'postfit':
        altprods = ['ggH_hwwalt', 'qqH_hwwalt', 'WH_hww', 'ZH_hww', 'ggZH_hww', 'ttH_hww']
        althtotals = {}

        for obs in ['ptH', 'njet']:
            _, htotal = common.get_fiducial_histograms(source, obs, altprods)
            althtotals[obs] = htotal
            
    source.Close()

elif args.config == 'prefit':
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

if args.config == 'postfit':
    mus_reg = {}
    mus_unreg = {}

    for sname, mus in [('Reg', mus_reg), ('Unreg', mus_unreg)]:
        if args.skip_unreg and sname == 'Unreg':
            continue
        
        for obs in ['ptH', 'njet']:
            mus[obs] = []

            source = ROOT.TFile.Open('%s/combination/%s_%s/higgsCombine%s.MultiDimFit.mH120.root' % (common.confdir, obs, args.card_tag, sname))
            limit = source.Get('limit')
            for imu in range(len(common.binnames[obs])):
                amu = array.array('f', [0.])
                limit.SetBranchAddress('r_%d' % imu, amu)
                limit.GetEntry(0)
                cent = amu[0]
                limit.GetEntry(1 + imu * 2)
                errlo = cent - amu[0]
                limit.GetEntry(2 + imu * 2)
                errhi = amu[0] - cent
                mus[obs].append((cent, errlo, errhi))
                limit.ResetBranchAddresses()
            
            source.Close()

    # Reg uncertainty decomposition
    for obs in ['ptH', 'njet']:
        source = ROOT.TFile.Open('%s/combination/%s_%s/higgsCombineRegStatOnly.MultiDimFit.mH120.root' % (common.confdir, obs, args.card_tag))
        limit = source.Get('limit')
        for imu in range(len(common.binnames[obs])):
            amu = array.array('f', [0.])
            limit.SetBranchAddress('r_%d' % imu, amu)
            limit.GetEntry(0)
            cent = amu[0]
            limit.GetEntry(1 + imu * 2)
            errlo = cent - amu[0]
            limit.GetEntry(2 + imu * 2)
            errhi = amu[0] - cent
            mus_reg[obs][imu] += (errlo, errhi)
            limit.ResetBranchAddresses()
        
        source.Close()

        for unc in uncs[1:4]:
            source = ROOT.TFile.Open('%s/combination/%s_%s/higgsCombineRegUncert_%s.MultiDimFit.mH120.root' % (common.confdir, obs, args.card_tag, unc))
            limit = source.Get('limit')
            for imu in range(len(common.binnames[obs])):
                amu = array.array('f', [0.])
                limit.SetBranchAddress('r_%d' % imu, amu)
                limit.GetEntry(0)
                cent = amu[0]
                limit.GetEntry(1 + imu * 2)
                errlo = cent - amu[0]
                limit.GetEntry(2 + imu * 2)
                errhi = amu[0] - cent
                statlo, stathi = mus_reg[obs][imu][3:5]
                mus_reg[obs][imu] += (math.sqrt(errlo * errlo - statlo * statlo), math.sqrt(errhi * errhi - stathi * stathi))
                limit.ResetBranchAddresses()
            
            source.Close()

        if args.add_bias:
            source = uproot.open('%s/combination/%s_%s/regularization_bias.root' % (common.confdir, obs, args.card_tag))
            biases = source['bias'].arrays()

            rs = ['r_%d' % imu for imu in range(len(common.binnames[obs]))]

            for imu, r in enumerate(rs):
                mus_reg[obs][imu] += (-np.sum(biases[r]),)
            
canvas = common.makeRatioCanvas(600, 600, prelim=False)

for obs in ['ptH', 'njet']:
    stack = ROOT.THStack('dist', '')
    genlegend = ROOT.TLegend(0.6, 0.63, 0.8, 0.98)
    genlegend.SetBorderSize(0)
    genlegend.SetFillStyle(0)
    obslegend = ROOT.TLegend(0.8, 0.73, common.xmax - 0.01, 0.98)
    obslegend.SetBorderSize(0)
    obslegend.SetFillStyle(0)
    
    for prods, title in productions:
        color = prod_colors[title]
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
        genlegend.AddEntry(histograms[(obs, title)], title, 'LF')

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
    total.SetFillStyle(3002)
    total.SetLineColor(ROOT.kBlack)
    total.SetLineWidth(0)

    genlegend.AddEntry(total, 'Uncertainty', 'F')

    frame = total.Clone('frame')
    frame.Reset()
    frame.SetTitle('')

    frame.SetMinimum(histograms[(obs, 'ggF')].GetMinimum() * 0.8)
    frame.SetMaximum(stack.GetMaximum() * 2.5)
    frame.GetXaxis().SetLabelSize(0.)
    frame.GetXaxis().SetNdivisions(canvas.xaxis.GetNdiv())
    frame.GetXaxis().SetTickLength(canvas.xaxis.GetTickSize())
    frame.GetYaxis().SetTitle(ytitles[obs])
    frame.GetYaxis().SetLabelSize(0.08)
    frame.GetYaxis().SetTitleSize(0.08)
    frame.GetYaxis().SetTitleOffset(0.9)

    frame.Draw()
    stack.Draw('SAME HIST')
    total.Draw('SAME E2')

    distpad.Update()

    framewidth = frame.GetXaxis().GetXmax() - frame.GetXaxis().GetXmin()

    if args.config == 'postfit':
        althtotal = althtotals[obs]
        althtotal.Scale(1., 'width')
        althtotal.SetLineColor(alt_color)
        althtotal.SetLineWidth(2)
        althtotal.SetFillColor(alt_color)
        althtotal.SetFillStyle(3395) # vertical hatch
        althtotal.Draw('SAME E2')

        genlegend.AddEntry(althtotal, 'Madgraph5_aMC@NLO', 'LF')

        althtotal_line = ROOT.TLine(0., 0., 0., 0.)
        althtotal_line.SetLineColor(alt_color)
        althtotal_line.SetLineWidth(2)
        for ix in range(1, althtotal.GetNbinsX() + 1):
            xmin = althtotal.GetXaxis().GetBinLowEdge(ix)
            xmax = althtotal.GetXaxis().GetBinUpEdge(ix)
            y = althtotal.GetBinContent(ix)
            althtotal_line.DrawLine(xmin, y, xmax, y)

        gobs = ROOT.TGraphAsymmErrors(total)
        if args.add_bias:
            gobs_bias = ROOT.TGraphAsymmErrors(total)
        gobs_uncs = dict((unc, ROOT.TGraphAsymmErrors(total)) for unc in uncs)

        table = ''

        ymin = histograms[(obs, 'ggF')].GetMinimum() * 0.8
        ymax = 0.
        for ip in range(total.GetNbinsX()):
            width = framewidth * 0.006

            mu = mus_reg[obs][ip]
            
            ynom = total.GetBinContent(ip + 1)
            x = gobs.GetX()[ip]
            y = ynom * mu[0]
            errlo = ynom * mu[1]
            errhi = ynom * mu[2]
            gobs.SetPoint(ip, x, y)
            gobs.SetPointEYlow(ip, errlo)
            gobs.SetPointEYhigh(ip, errhi)
            gobs.SetPointEXlow(ip, width)
            gobs.SetPointEXhigh(ip, width)

            if args.add_bias:
                gobs_bias.SetPoint(ip, x, y)
                gobs_bias.SetPointEXlow(ip, 0.)
                gobs_bias.SetPointEXhigh(ip, 0.)
                if mu[-1] > 0.:
                    gobs_bias.SetPointEYhigh(ip, ynom * mu[-1])
                    gobs_bias.SetPointEYlow(ip, 0.)
                else:
                    gobs_bias.SetPointEYhigh(ip, 0.)
                    gobs_bias.SetPointEYlow(ip, -ynom * mu[-1])

            for iunc, unc in enumerate(uncs):
                width += framewidth * 0.006
                
                gobs_unc = gobs_uncs[unc]
                elo = ynom * mu[3 + iunc * 2]
                ehi = ynom * mu[4 + iunc * 2]
                gobs_unc.SetPoint(ip, x, y)
                gobs_unc.SetPointEYlow(ip, elo)
                gobs_unc.SetPointEYhigh(ip, ehi)
                gobs_unc.SetPointEXlow(ip, width)
                gobs_unc.SetPointEXhigh(ip, width)

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

            if args.skip_unreg:
                line += '& $%.2f^{%+.2f}_{%+.2f}$ ' % (mu[0], mu[1], mu[2])

            else:
                line += ('& $%.2f^{%+.2f}_{%+.2f}$ ' * 2) % \
                    (mus_unreg[obs][ip][0], mus_unreg[obs][ip][1], mus_unreg[obs][ip][2],
                        mu[0], mu[1], mu[2])

            if args.add_bias:
                line += '& $%+.2f$ ' % mu[-1]

            line += '& $%.2f^{%+.2f}_{%+.2f}$ ' % (y * binw, errhi * binw, -errlo * binw)

            line += '\\\\\n'

            table += line

            if y - errlo < ymin:
                ymin = (y - errlo) * 0.8
            if y + errhi > ymax:
                ymax = (y + errhi) * 3.

        print table

        gobs.SetMarkerColor(ROOT.kBlack)
        gobs.SetMarkerStyle(8)
        gobs.SetMarkerSize(0.6)
        gobs.SetLineColor(ROOT.kBlack)
        gobs.SetLineWidth(2)
        gobs.SetFillStyle(0)
        
        obslegend.AddEntry(gobs, 'Observed', 'LP')

        if args.add_bias:
            #gobs_bias.SetLineColor(ROOT.kRed)
            #gobs_bias.SetLineWidth(2)
            gobs_bias.SetMarkerStyle(8)
            gobs_bias.SetMarkerColor(ROOT.kBlack)
            gobs_bias.SetMarkerSize(0.6)
            gobs_bias.SetLineColor(ROOT.kRed)
            gobs_bias.SetLineWidth(4)
            gobs_bias.SetFillStyle(0)

            bias_legend_entry = ROOT.TLine(0., 0., 0., 0.)
            bias_legend_entry.SetLineColor(gobs_bias.GetLineColor())
            bias_legend_entry.SetLineWidth(2)

            obslegend.AddEntry(bias_legend_entry, 'regularization', 'L')

        for unc in uncs:
            gobs_unc = gobs_uncs[unc]
            color = unc_colors[unc]
            gobs_unc.SetLineWidth(2)
            gobs_unc.SetLineColor(color)
            gobs_unc.SetFillStyle(0)
            gobs_unc.Draw('2')
            obslegend.AddEntry(gobs_unc, unc, 'L')

        #gobs.Draw('2P')
        gobs.Draw('PZ')

        if args.add_bias:
            gobs_bias.Draw('PZ')

        frame.SetMinimum(ymin)
        frame.SetMaximum(ymax)

    genlegend.Draw()
    obslegend.Draw()
    distpad.Update()

    ratiopad = canvas.cd(2)

    if args.config == 'postfit':
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
    rframe.GetYaxis().SetNdivisions(208, False)

    rstack = ROOT.THStack('ratio', '')

    _rhists = []
    for _, title in productions:
        rhist = histograms[(obs, title)].Clone('ratio_' + histograms[(obs, title)].GetName())
        _rhists.append(rhist)
        
        rhist.Divide(total)

        rstack.Add(rhist)

    rstack.Draw('SAME HIST')

    uncert = total.Clone('uncert')
    atotal = rnp.hist2array(total, copy=False)
    err2s = rnp.array(uncert.GetSumw2(), copy=False)
    err2s[1:-1] /= np.square(atotal)
    rnp.array2hist(np.ones_like(atotal), uncert)

    uncert.Draw('SAME E2')

    ratiopad.Update()

    if args.config in ['fiducial', 'prefit']:
        canvas.raxes[0].SetTitle('fractions')
        rframe.SetMinimum(0.)
        rframe.SetMaximum(1.)

    elif args.config == 'postfit':
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
        if args.add_bias:
            robs_bias = gobs_bias.Clone()
        robs_uncs = dict((unc, gobs_uncs[unc].Clone()) for unc in uncs)

        rmin = 0.
        rmax = 2.
        for ip in range(robs.GetN()):
            x = robs.GetX()[ip]
            mu = mus_reg[obs][ip]
            robs.SetPoint(ip, x, mu[0])
            robs.SetPointEYlow(ip, mu[1])
            robs.SetPointEYhigh(ip, mu[2])

            if args.add_bias:
                robs_bias.SetPoint(ip, x, mu[0])
                if mu[-1] > 0.:
                    robs_bias.SetPointEYhigh(ip, mu[-1])
                else:
                    robs_bias.SetPointEYlow(ip, -mu[-1])

            for iunc, unc in enumerate(uncs):
                robs_unc = robs_uncs[unc]
                r = mu[0]
                errlo = mu[3 + iunc * 2]
                errhi = mu[4 + iunc * 2]
                if (r > rmax and r - errlo < rmax) or (r < rmin and r + errhi > rmin):
                    box = ROOT.TBox(0., 0., 0., 0.)
                    for att in ['LineColor', 'LineWidth', 'FillStyle']:
                        getattr(box, 'Set' + att)(getattr(robs_unc, 'Get' + att)())
                        
                    box.DrawBox(x - robs_unc.GetErrorXlow(ip), r - errlo, x + robs_unc.GetErrorXhigh(ip), r + errhi)
                else:
                    robs_unc.SetPoint(ip, robs.GetX()[ip], mu[0])
                    robs_unc.SetPointEYlow(ip, mu[3 + iunc * 2])
                    robs_unc.SetPointEYhigh(ip, mu[4 + iunc * 2])
                    robs_unc.Draw('2')

            # ARC suggestion: fix the ratio plot range to [0, 2]
            #if mu[0] - mu[1] < rmin:
            #    rmin = math.floor(mu[0] - mu[1])
            #if mu[0] + mu[2] > rmax:
            #    rmax = math.ceil(mu[0] + mu[2])

        robs.Draw('PZ')

        if args.add_bias:
            robs_bias.Draw('PZ')

        rframe.SetMinimum(rmin)
        rframe.SetMaximum(rmax)

        # show an arrow for overshoots?
        common.showOvershoots(robs, rmin, rmax)

        one = ROOT.TLine(altrhist.GetXaxis().GetXmin(), 1., altrhist.GetXaxis().GetXmax(), 1.)
        one.SetLineColor(ROOT.kBlack)
        one.SetLineWidth(1)
        one.Draw()

        binbound = ROOT.TLine(0., 0., 0., 0.)
        binbound.SetLineColor(ROOT.kGray + 3)
        binbound.SetLineStyle(ROOT.kDotted)
        binbound.SetLineWidth(1)
        for ix in range(1, altrhist.GetNbinsX()):
            edge = altrhist.GetXaxis().GetBinUpEdge(ix)
            binbound.DrawLine(edge, rmin, edge, rmax)
        
        #canvas.raxis.SetTitle('Obs. / pred.')
        canvas.raxes[0].SetTitle('Ratio to #sigma^{SM}')
        canvas.raxes[0].SetWmin(rmin)
        canvas.raxes[0].SetWmax(rmax)

    canvas.xaxis.SetTitle(common.xtitles[obs])

    #caxis = ROOT.TGaxis(common.xmax, common.ymin, common.xmax, (canvas.raxis.GetY2() + common.ymin) * 0.5, 0., 1., 205, '+LS')
    #caxis.SetTitleOffset(ROOT.gStyle.GetTitleOffset('Y') * 0.5)
    #caxis.SetTitleSize(0.036)
    #caxis.SetLabelFont(42)
    #caxis.SetTitleFont(42)
    #caxis.SetLabelSize(0.875 * 0.036)
    #caxis.SetTickLength(0.03)
    #caxis.SetGridLength(0.)
    #caxis.SetTitle('Fractions')
    #
    #canvas.cd()
    #caxis.Draw()
    
    if obs == 'njet':
        canvas.xaxis.SetLabelSize(0.)

        canvas.cd()

        latex = ROOT.TLatex(0., 0., '')
        latex.SetTextFont(42)
        latex.SetTextSize(0.048)
        latex.SetTextAlign(23)
        for il, label in enumerate(['0', '1', '2', '3', '#geq 4']):
            latex.DrawLatex(common.xmin + (common.xmax - common.xmin) * (0.5 + il) / 5., common.ymin - 0.02, label)

    if args.config == 'fiducial':
        canvas.printout('%s/sigma_%s.pdf' % (args.out_path, obs))
    elif args.config == 'prefit':
        canvas.printout('%s/prefit_%s.pdf' % (args.out_path, obs))
    elif args.config == 'postfit':
        canvas.printout('%s/observed_sigma_%s.pdf' % (args.out_path, obs))
