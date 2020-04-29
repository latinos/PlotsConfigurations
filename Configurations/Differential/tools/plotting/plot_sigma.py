import os
import sys
import array
import math

from argparse import ArgumentParser

argParser = ArgumentParser(description='Plot and print differential cross sections')
argParser.add_argument('config', metavar='CONFIG', help='fiducial, prefit, or postfit')
argParser.add_argument('observable', metavar = 'OBS', help = 'Observable name.')
argParser.add_argument('--skip-unreg', '-K', action='store_true', dest='skip_unreg', help='Do not print unregularized cross sections.')
argParser.add_argument('--only-unreg', '-U', action='store_true', dest='only_unreg', help='Print and plot only unregularized cross sections.')
argParser.add_argument('--add-bias', '-B', action='store_true', dest='add_bias', help='Add estimated bias.')
argParser.add_argument('--paper', '-P', action='store_true', dest='paper', help='Include uncertainty breakdown and bias in the table')
argParser.add_argument('--card-tag', '-t', metavar='TAG', dest='card_tag', default='postapproval', help='Data card tag.')
argParser.add_argument('--out', '-o', metavar='DIRECTORY', dest='out_path', help='Directory to write the output plot pdf files to.')

args = argParser.parse_args()
sys.argv = []

if args.only_unreg and (args.skip_unreg or args.add_bias):
    raise RuntimeError('Invalid option combination')

import numpy as np
import ROOT
import root_numpy as rnp
import uproot

import common

ROOT.gStyle.SetHatchesLineWidth(2)
ROOT.gStyle.SetHatchesSpacing(1.5)
ROOT.gStyle.SetTitleOffset(1.8, 'X')

def make_column(central, errlo, errhi, prec=2, equiv=2.):
    if central:
        central = '%.{prec}f\,'.format(prec=prec) % central

    if abs(round(errlo * pow(10., prec)) - round(errhi * pow(10., prec))) <= equiv:
        return '& $%s \pm %.{prec}f$ '.format(prec=prec) % (central, errlo)
    else:
        return '& $%s_{{-%.{prec}f}}^{{+%.{prec}f}}$ '.format(prec=prec) % (central, errlo, errhi)


# fiducial: Fiducial cross sections in bins of gen-level observables
# prefit: Prefit signal yield predictions in bins of reco-level observables. Systematic uncertainties ignored
# postfit: Observed differential cross sections in bins of gen-level observables

#productions = [
#    (['ggH_hww'], 'ggF'),
#    (['qqH_hww'], 'VBF'),
#    (['WH_hww'], 'WH'),
#    (['ZH_hww', 'ggZH_hww'], 'ZH'),
#    (['ttH_hww'], 't#bar{t}H')
#]

productions = [
    (['ttH_hww'], 't#bar{t}H'),
    (['ZH_hww', 'ggZH_hww', 'WH_hww'], 'ZH+WH'),
    (['qqH_hww'], 'VBF'),
    (['ggH_hww'], 'ggF')
]

prod_colors = {
    't#bar{t}H': ROOT.TColor.GetColor('#b86bb0'),
    'ZH+WH': ROOT.TColor.GetColor('#ed7880'),
    'VBF': ROOT.TColor.GetColor('#e6a45a'),
    'ggF': ROOT.TColor.GetColor('#b3d472'),
}

uncs = [
    'Statistical',
    'Experimental',
    'Theoretical'
]
unc_colors = {
    'Statistical': ROOT.TColor.GetColor('#1dc1ef'),
    'Experimental': ROOT.TColor.GetColor('#3a6dbc'),
    'Theoretical': ROOT.TColor.GetColor('#59035c'),
}
breakdown_names = [
    'StatOnly',
    'Uncert_allexperimental',
    'Uncert_alltheoretical'
]
if args.paper:
    table_uncs = [
        'Statistical',
        'Experimental',
        'Sig. theory',
        'Bkg. theory',
        'Luminosity'
    ]
    table_unc_colors = {
        'Statistical': ROOT.TColor.GetColor('#1dc1ef'),
        'Experimental': ROOT.TColor.GetColor('#0a98db'),
        'Sig. theory': ROOT.TColor.GetColor('#3a6dbc'),
        'Bkg. theory': ROOT.TColor.GetColor('#534091'),
        'Luminosity': ROOT.TColor.GetColor('#59035c')
    }
    table_breakdown_names = [
        'StatOnly',
        'Uncert_experimental',
        'Uncert_signal',
        'Uncert_theoretical',
        'Uncert_luminosity'
    ]

alt_color = ROOT.kGreen + 3

allprods = sum((prods for prods, _ in productions), [])

histograms = {}

if args.config in ['fiducial', 'postfit']:
    source = ROOT.TFile.Open('%s/fiducial/rootFile/plots_Fiducial.root' % common.confdir)

    nominals, htotal = common.get_fiducial_histograms(source, args.observable, allprods)
    
    for prods, title in productions:
        histograms[title] = nominals[prods[0]].Clone(title)
        histograms[title].SetDirectory(0)
        for prod in prods[1:]:
            histograms[title].Add(nominals[prod])

        # zero out the bin errors
        err2s = rnp.array(histograms[title].GetSumw2(), copy=False)
        err2s *= 0.

    if args.observable == 'ptH':
        ytitle = 'd#sigma/d#font[12]{p}_{#lower[-0.18]{#kern[-0.2]{T}}}^{H} (fb/GeV)'
    elif args.observable == 'njet':
        ytitle = '#sigma(#font[12]{N}_{#kern[-0.3]{jet}}) (fb)'

    rebins = {}

    if args.config == 'postfit':
        altprods = ['ggH_hwwalt', 'qqH_hwwalt', 'WH_hww', 'ZH_hww', 'ggZH_hww', 'ttH_hww']
        _, althtotal = common.get_fiducial_histograms(source, args.observable, altprods)
            
    source.Close()

elif args.config == 'prefit':
    if args.observable == 'ptH':
        binning = [0., 10., 15., 20., 30., 45., 60., 80., 100., 120., 155., 200., 260., 350.]
        bnames = []
        for ibin in range(len(pthBinning) - 1):
            low, high = pthBinning[ibin:ibin + 2]
            bnames.append('PTH_%.0f_%.0f' % (low, high))
        bnames.append('PTH_GT%.0f' % pthBinning[-1])

    elif args.observable == 'njet':
        binning = [0., 1., 2., 3., 4., 5., 6.]
        bnames = ['NJ_0', 'NJ_1', 'NJ_2', 'NJ_3', 'NJ_GE4', '']

    nominals = {}
    for prod in allprods:
        source = ROOT.TFile.Open('%s/ggH2018/rootFile_merged/plots_ggHDifferential2018_ALL_%s.root' % (common.confdir, prod))

        nominals[prod] = ROOT.TH1D(prod, '', len(binning) - 1, array.array('d', binning))
        nominals[prod].Sumw2()
        nominals[prod].SetDirectory(0)

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

                nominals[prod].SetBinContent(ix + 1, cont)
                nominals[prod].SetBinError(ix + 1, math.sqrt(err2))

        source.Close()

    for prods, title in productions:
        histograms[title] = nominals[prods[0]][obs].Clone(title)
        histograms[title].SetDirectory(0)
        for prod in prods[1:]:
            histograms[title].Add(nominals[prod])

    htotal = histograms[productions[0][1]].Clone('total')
    htotal.SetDirectory(0)
    for _, title in productions[1:]:
        htotals.Add(histograms[title])

    if args.observable == 'ptH':
        ytitle = 'events / GeV'
    elif args.observable == 'njet':
        ytitle = 'events'

    rebins = common.binning

if args.config == 'postfit':
    results_dir = '%s/combination/%s_%s' % (common.confdir, args.observable, args.card_tag)
    
    source_path = '%s/higgsCombineUnreg.MultiDimFit.mH120.root' % results_dir

    if args.only_unreg:
        breakdown_path = '%s/higgsCombineUnreg{comp}.MultiDimFit.mH120.root' % results_dir
        mus_unreg = common.get_mus(args.observable, source_path, breakdown_comps=breakdown_names, breakdown_path=breakdown_path)
        mus_main = mus_unreg
        if args.paper:
            table_mus = common.get_mus(args.observable, source_path, breakdown_comps=table_breakdown_names, breakdown_path=breakdown_path)

    else:
        mus_unreg = common.get_mus(args.observable, source_path)
    
        source_path = '%s/higgsCombineReg.MultiDimFit.mH120.root' % results_dir
        breakdown_path = '%s/higgsCombineReg{comp}.MultiDimFit.mH120.root' % results_dir
        bias_path = '%s/regularization_bias.root' % results_dir
        mus_reg = common.get_mus(args.observable, source_path, breakdown_comps=breakdown_names, breakdown_path=breakdown_path, bias_path=(bias_path if args.add_bias else ''))
        mus_main = mus_reg
        if args.paper:
            table_mus = common.get_mus(args.observable, source_path, breakdown_comps=table_breakdown_names, breakdown_path=breakdown_path, bias_path=bias_path)

canvas = common.makeRatioCanvas(600, 600, prelim=False)
canvas.lumiLabel.SetX2NDC(common.XMAX - 0.01)
if args.observable == 'ptH':
    canvas.xaxis.SetNdivisions(408)
canvas.yaxes[0].SetTitle(ytitle)

stack = ROOT.THStack('dist', '')
genlegend = ROOT.TLegend(0.5, 0.65, 0.69, 0.98)
genlegend.SetBorderSize(0)
genlegend.SetFillStyle(0)
genlegend.SetTextSize(0.045)
genlegend.SetTextFont(ROOT.gStyle.GetTextFont())
obslegend = ROOT.TLegend(0.69, 0.65, common.XMAX - 0.01, 0.98)
obslegend.SetBorderSize(0)
obslegend.SetFillStyle(0)
obslegend.SetTextSize(0.045)
obslegend.SetTextFont(ROOT.gStyle.GetTextFont())

for prods, title in productions:
    color = prod_colors[title]
    lcolor = common.get_line_color(color)

    hist = histograms[title]

    if args.observable in rebins:
        rebin = rebins[args.observable]
        newhist = hist.Rebin(len(rebin) - 1, 'new_' + hist.GetName(), array.array('d', rebin))
        hist.Delete()
        hist = newhist
        histograms[title] = hist

    nx = hist.GetNbinsX()
    hist.SetBinContent(nx, hist.GetBinContent(nx) + hist.GetBinContent(nx + 1))

    hist.Scale(1., 'width')
    hist.SetFillColor(color)
    hist.SetLineColor(lcolor)
    hist.SetLineWidth(2)

    stack.Add(hist)

for _, title in reversed(productions):
    genlegend.AddEntry(histograms[title], title, 'LF')

distpad = canvas.cd(1)
distpad.SetLogy(True)

# uncertainty
if args.observable in rebins:
    rebin = rebins[args.observable]
    newtotal = htotal.Rebin(len(rebin) - 1, 'new_' + htotal.GetName(), array.array('d', rebin))
    htotal.Delete()
    htotal = newtotal

nx = htotal.GetNbinsX()
htotal.SetBinContent(nx, htotal.GetBinContent(nx) + htotal.GetBinContent(nx + 1))
    
htotal.Scale(1., 'width')
htotal.SetFillColor(ROOT.kBlack)
htotal.SetFillStyle(3002)
htotal.SetLineColor(ROOT.kBlack)
htotal.SetLineWidth(0)

genlegend.AddEntry(htotal, 'Uncertainty', 'F')

frame = htotal.Clone('frame')
frame.Reset()
frame.SetTitle('')

frame.SetMinimum(histograms['ggF'].GetMinimum() * 0.8)
frame.SetMaximum(stack.GetMaximum() * 2.5)
frame.GetXaxis().SetLabelSize(0.)
frame.GetXaxis().SetNdivisions(canvas.xaxis.GetNdiv())
#frame.GetXaxis().SetTickLength(canvas.xaxis.GetTickSize())
frame.GetYaxis().SetTitle('')
frame.GetYaxis().SetLabelSize(0.)
frame.GetYaxis().SetNdivisions(canvas.yaxes[0].GetNdiv())

frame.Draw()
stack.Draw('SAME HIST')
htotal.Draw('SAME E2')

distpad.SetTicky(1)

distpad.Update()

framewidth = frame.GetXaxis().GetXmax() - frame.GetXaxis().GetXmin()

if args.config == 'postfit':
    althtotal.Scale(1., 'width')
    althtotal.SetLineColor(alt_color)
    althtotal.SetLineWidth(2)
    althtotal.SetFillColor(alt_color)
    althtotal.SetFillStyle(3395) # vertical hatch
    althtotal.Draw('SAME E2')

    althtotal_line = ROOT.TLine(0., 0., 0., 0.)
    althtotal_line.SetLineColor(alt_color)
    althtotal_line.SetLineWidth(2)
    for ix in range(1, althtotal.GetNbinsX() + 1):
        xmin = althtotal.GetXaxis().GetBinLowEdge(ix)
        xmax = althtotal.GetXaxis().GetBinUpEdge(ix)
        y = althtotal.GetBinContent(ix)
        althtotal_line.DrawLine(xmin, y, xmax, y)

    gobs = ROOT.TGraphAsymmErrors(htotal)
    if args.add_bias:
        gobs_bias = ROOT.TGraphAsymmErrors(htotal)
    gobs_uncs = dict((unc, ROOT.TGraphAsymmErrors(htotal)) for unc in uncs)

    table = ''

    ymin = histograms['ggF'].GetMinimum() * 0.8
    ymax = 0.
    for ip in range(htotal.GetNbinsX()):
        width = framewidth * 0.006

        mu = mus_main[ip]
        
        ynom = htotal.GetBinContent(ip + 1)
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
        table_mu = table_mus[ip]
        
        if args.observable == 'ptH':
            xmin = htotal.GetXaxis().GetBinLowEdge(ip + 1)
            xmax = htotal.GetXaxis().GetBinUpEdge(ip + 1)
            binw = xmax - xmin
            if ip != htotal.GetNbinsX() - 1:
                line = '      $[%.0f, %.0f]$ ' % (xmin, xmax)
            else:
                line = '      $[%.0f, \\infty)$ ' % xmin

        elif args.observable == 'njet':
            binw = 1.
            if ip != htotal.GetNbinsX() - 1:
                line = '      $%d$ ' % ip
            else:
                line = '      $\geq %d$ ' % ip

        line += '& $%.2f$ ' % (htotal.GetBinContent(ip + 1) * binw)

        if not args.only_unreg and not args.skip_unreg:
            line += make_column(*mus_unreg[ip][:3])

        line += make_column(*table_mu[:3])

        if args.paper:
            for ierr in range(3, 3 + len(table_uncs) * 2, 2):
                line += make_column('', table_mu[ierr], table_mu[ierr + 1])

            if not args.only_unreg:
                line += '& $%+.2f$ ' % table_mu[-1]

        line += make_column(y * binw, errlo * binw, errhi * binw)

        line += '\\\\\n'

        table += line

        if (y - errlo) * 0.8 < ymin:
            ymin = (y - errlo) * 0.8
        if (y + errhi) * 6. > ymax:
            ymax = (y + errhi) * 6.

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
        obslegend.AddEntry(gobs_unc, unc, 'F')

    obslegend.AddEntry(althtotal, 'MG5_aMC@NLO', 'LF')

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

rframe = htotal.Clone('rframe')
rframe.Reset()
rframe.SetTitle('')

rframe.Draw('HIST')
rframe.GetYaxis().SetLabelSize(0.)
rframe.GetYaxis().SetTitle('')
rframe.GetYaxis().SetNdivisions(canvas.raxes[0].GetNdiv())

rstack = ROOT.THStack('ratio', '')

_rhists = []
for _, title in productions:
    rhist = histograms[title].Clone('ratio_' + histograms[title].GetName())
    _rhists.append(rhist)
    
    rhist.Divide(htotal)

    rstack.Add(rhist)

rstack.Draw('SAME HIST')

uncert = htotal.Clone('uncert')
atotal = rnp.hist2array(htotal, copy=False)
err2s = rnp.array(uncert.GetSumw2(), copy=False)
err2s[1:-1] /= np.square(atotal)
rnp.array2hist(np.ones_like(atotal), uncert)

uncert.Draw('SAME E2')

ratiopad.SetTicky(1)

ratiopad.Update()

if args.config in ['fiducial', 'prefit']:
    canvas.raxes[0].SetTitle('fractions')
    rframe.SetMinimum(0.)
    rframe.SetMaximum(1.)

elif args.config == 'postfit':
    altrhist = althtotal.Clone('altrhist')
    altrhist.SetTitle('')
    altrhist.Divide(htotal)

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
        mu = mus_main[ip]
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

canvas.xaxis.SetTitle(common.xtitles[args.observable])

#caxis = ROOT.TGaxis(common.XMAX, common.YMIN, common.XMAX, (canvas.raxis.GetY2() + common.YMIN) * 0.5, 0., 1., 205, '+LS')
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

if args.observable == 'njet':
    canvas.xaxis.SetLabelSize(0.)

    canvas.cd()

    latex = ROOT.TLatex(0., 0., '')
    latex.SetTextFont(ROOT.gStyle.GetTextFont())
    latex.SetTextSize(0.04)
    latex.SetTextAlign(23)
    for il, label in enumerate(['0', '1', '2', '3', '#geq 4']):
        latex.DrawLatex(common.XMIN + (common.XMAX - common.XMIN) * (0.5 + il) / 5., common.YMIN - 0.02, label)

if args.config == 'fiducial':
    canvas.printout('%s/sigma_%s.pdf' % (args.out_path, args.observable))
elif args.config == 'prefit':
    canvas.printout('%s/prefit_%s.pdf' % (args.out_path, args.observable))
elif args.config == 'postfit':
    canvas.printout('%s/observed_sigma_%s.pdf' % (args.out_path, args.observable))
