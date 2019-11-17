import os
import sys
import array
import numpy as np
from argparse import ArgumentParser

argParser = ArgumentParser(description = 'Plot or tabify the signal strengths and major-background rateParams.')
argParser.add_argument('results_dir', metavar = 'PATH', help = 'Fit results directory.')
argParser.add_argument('observable', metavar = 'OBS', help = 'Observable name.')
argParser.add_argument('--out', '-o', metavar = 'PATH', dest = 'out_path', help = 'Output plot file name.')
argParser.add_argument('--obs', '-b', action = 'store_true', dest = 'observed', help = 'Using observed output.')
argParser.add_argument('--year', '-y', metavar='YEAR', dest='year', default='year', help='Dataset year.')
argParser.add_argument('--add-bias', '-B', action='store_true', dest='add_bias', help='Add estimated bias.')

args = argParser.parse_args()
sys.argv = []

import common

import ROOT
import root_numpy as rnp
import uproot

ROOT.gStyle.SetNumberContours(128)
ROOT.gStyle.SetPalette(ROOT.kTemperatureMap)

binnames = common.binnames[args.observable]
binning = common.binning[args.observable]
bintitles = common.bintitles[args.observable]
    
npoi = len(binnames)
rnames = ['r_%d' % i for i in range(npoi)]

mugraphs = [ROOT.TGraphAsymmErrors(npoi), ROOT.TGraphAsymmErrors(npoi)]
if args.add_bias:
    biasgraph = ROOT.TGraphAsymmErrors(npoi)
    bias_source = uproot.open('%s/regularization_bias.root' % args.results_dir)
    biases = bias_source['bias'].arrays()

for ireg, reg in [(0, 'Reg'), (1, 'Unreg')]:
    mugraph = mugraphs[ireg]

    path = '%s/higgsCombine%s.MultiDimFit.mH120.root' % (args.results_dir, reg)

    rs = rnp.root2array(path, 'limit', rnames)

    for ip in range(npoi):
        x = sum(binning[ip:ip+2]) * 0.5
        mugraph.SetPoint(ip, x, rs[0][ip])
        mugraph.SetPointEYlow(ip, rs[0][ip] - rs[ip * 2 + 1][ip])
        mugraph.SetPointEYhigh(ip, rs[ip * 2 + 2][ip] - rs[0][ip])
        mugraph.SetPointEXlow(ip, ireg * (binning[-1] - binning[0]) * 0.01)
        mugraph.SetPointEXhigh(ip, ireg * (binning[-1] - binning[0]) * 0.01)

        if ireg == 0 and args.add_bias:
            r = rnames[ip]
            bias = -np.sum(biases[r])
            biasgraph.SetPoint(ip, x, rs[0][ip])
            if bias > 0.:
                biasgraph.SetPointEYhigh(ip, bias)
                biasgraph.SetPointEYlow(ip, 0.)
            else:
                biasgraph.SetPointEYhigh(ip, 0.)
                biasgraph.SetPointEYlow(ip, -bias)
            biasgraph.SetPointEXhigh(ip, 0.)
            biasgraph.SetPointEXlow(ip, 0.)

table = '      \\multirow{%d}{*}{%s}' % (npoi, args.year)
indent = ' '

if args.observable == 'ptH':
    if args.observed:
        for ip in range(npoi):
            table += indent
            table += '& $%s$ & $%.2f_{%+.2f}^{%+.2f}$ & $%.2f_{%+.2f}^{%+.2f}$ \\\\\n' % (bintitles[ip].replace('#', '\\'), mugraphs[1].GetY()[ip], -mugraphs[1].GetErrorYlow(ip), mugraphs[1].GetErrorYhigh(ip), mugraphs[0].GetY()[ip], -mugraphs[0].GetErrorYlow(ip), mugraphs[0].GetErrorYhigh(ip))
            indent = '                            '

    else:
        for ip in range(npoi):
            table += indent
            table += '& $%s$ & %+.2f/%+.2f & %+.2f/%+.2f \\\\\n' % (bintitles[ip].replace('#', '\\'), mugraphs[1].GetErrorYhigh(ip), -mugraphs[1].GetErrorYlow(ip), mugraphs[0].GetErrorYhigh(ip), -mugraphs[0].GetErrorYlow(ip))
            indent = '                            '

else:
    if args.observed:
        for ip in range(npoi):
            table += indent
            table += '& $%6s$ & $%.2f_{%+.2f}^{%+.2f}$ & $%.2f_{%+.2f}^{%+.2f}$ \\\\\n' % (bintitles[ip].replace('#', '\\'), mugraphs[1].GetY()[ip], -mugraphs[1].GetErrorYlow(ip), mugraphs[1].GetErrorYhigh(ip), mugraphs[0].GetY()[ip], -mugraphs[0].GetErrorYlow(ip), mugraphs[0].GetErrorYhigh(ip))
            indent = '                            '

    else:
        for ip in range(npoi):
            table += indent
            table += '& $%.6s$ & %+.2f/%+.2f & %+.2f/%+.2f \\\\\n' % (bintitles[ip].replace('#', '\\'), mugraphs[1].GetErrorYhigh(ip), -mugraphs[1].GetErrorYlow(ip), mugraphs[0].GetErrorYhigh(ip), -mugraphs[0].GetErrorYlow(ip))
            indent = '                            '

print table

if args.out_path is not None:
    try:
        os.makedirs(os.path.dirname(args.out_path))
    except OSError:
        pass

    canvas = ROOT.TCanvas('c1', 'c1', 600, 600)
    canvas.SetRightMargin(0.05)
    canvas.SetLeftMargin(0.15)
    canvas.SetGrid(False, True)

    ymin = -2.
    ymax = 5.
    
    legend = ROOT.TLegend(0.7, 0.8, 0.9, 0.9)
    legend.SetBorderSize(0)
    legend.SetFillStyle(0)

    mugraphs[1].SetLineWidth(0)
    mugraphs[1].SetMarkerColor(ROOT.kBlue)
    mugraphs[1].SetMarkerStyle(4)
    mugraphs[1].SetFillColor(ROOT.kBlue)
    mugraphs[1].SetFillStyle(3003)

    mugraphs[1].Draw('AP2')

    mugraphs[1].SetTitle('Signal strengths')
    mugraphs[1].GetYaxis().SetRangeUser(ymin, ymax)
    mugraphs[1].GetYaxis().SetTitle('#mu')
    mugraphs[1].GetXaxis().SetTitle(common.xtitles[args.observable])
    mugraphs[1].GetXaxis().SetLimits(binning[0], binning[-1])
    
    mugraphs[0].SetLineColor(ROOT.kBlack)
    mugraphs[0].SetLineWidth(2)
    mugraphs[0].SetMarkerColor(ROOT.kBlack)
    mugraphs[0].SetMarkerStyle(8)
    mugraphs[0].SetMarkerSize(0.6)
    
    mugraphs[0].Draw('PZ')

    if args.add_bias:
        biasgraph.SetLineColor(ROOT.kRed)
        biasgraph.SetLineWidth(4)
        biasgraph.SetMarkerColor(ROOT.kBlack)
        biasgraph.SetMarkerStyle(8)
        biasgraph.SetMarkerSize(0.6)
        
        biasgraph.Draw('PZ')

    lines = []
    for gr, col, sty in zip(mugraphs, [ROOT.kBlack, ROOT.kBlue], [ROOT.kSolid, ROOT.kDashed]):
        for ip in range(gr.GetN()):
            if gr.GetY()[ip] > ymax:
                line = ROOT.TLine(gr.GetX()[ip], gr.GetY()[ip] - gr.GetErrorYlow(ip), gr.GetX()[ip], ymax)
                line.SetLineColor(col)
                line.SetLineStyle(sty)
                line.SetLineWidth(2)
                line.Draw()
                lines.append(line)

    line = ROOT.TLine(binning[0], 1, binning[-1], 1)
    line.SetLineColor(ROOT.kBlack)
    line.SetLineWidth(1)
    line.Draw()
    
    legend.AddEntry(mugraphs[0], 'Regularized', 'PL')
    if args.add_bias:
        bias_line = ROOT.TLine(0., 0., 0., 0.)
        bias_line.SetLineColor(biasgraph.GetLineColor())
        bias_line.SetLineWidth(2)
        legend.AddEntry(bias_line, 'Regularization bias', 'L')
    legend.AddEntry(mugraphs[1], 'Unregularized', 'PF')
    legend.Draw()
    
    canvas.Print(args.out_path)
