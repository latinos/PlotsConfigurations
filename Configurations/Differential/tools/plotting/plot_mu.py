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
argParser.add_argument('--bias-only', '-X', action='store_true', dest='bias_only', help='For a table in the AN.')
argParser.add_argument('--unreg-only', '-U', action='store_true', dest='unreg_only', help='Plot only unregularied results.')

args = argParser.parse_args()
sys.argv = []

if (args.add_bias and args.unreg_only) or (args.bias_only and args.unreg_only):
    raise RuntimeError('Invalid combination of options')

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

if args.observed:
    asimov = ''
else:
    asimov = 'Asimov'

unreg_source_path = '%s/higgsCombine%sUnreg.MultiDimFit.mH120.root' % (args.results_dir, asimov)
graph_unreg = ROOT.TGraphAsymmErrors(npoi)

if args.unreg_only:
    breakdown_path = '%s/higgsCombineUnreg{comp}.MultiDimFit.mH120.root' % (args.results_dir)

    mus_unreg = common.get_mus(args.observable, unreg_source_path, breakdown_path=(breakdown_path if args.observed else ''))

    mus_and_graphs = [(mus_unreg, graph_unreg)]
else:
    reg_source_path = '%s/higgsCombine%sReg.MultiDimFit.mH120.root' % (args.results_dir, asimov)
    breakdown_path = '%s/higgsCombineReg{comp}.MultiDimFit.mH120.root' % (args.results_dir)
    bias_path = '%s/regularization_bias.root' % args.results_dir

    mus_unreg = common.get_mus(args.observable, unreg_source_path)
    mus_reg = common.get_mus(args.observable, reg_source_path, breakdown_path=(breakdown_path if args.observed else ''), bias_path=(bias_path if args.add_bias else ''))

    graph_reg = ROOT.TGraphAsymmErrors(npoi)

    if args.add_bias:
        graph_bias = ROOT.TGraphAsymmErrors(npoi)

    mus_and_graphs = [(mus_unreg, graph_unreg), (mus_reg, graph_reg)]

for mus, graph in mus_and_graphs:
    for ip in range(npoi):
        cent, errlo, errhi = mus[ip][:3]
        x = sum(binning[ip:ip+2]) * 0.5
        graph.SetPoint(ip, x, cent)
        graph.SetPointEYlow(ip, errlo)
        graph.SetPointEYhigh(ip, errhi)
        if mus is mus_unreg:
            graph.SetPointEXlow(ip, (binning[-1] - binning[0]) * 0.01)
            graph.SetPointEXhigh(ip, (binning[-1] - binning[0]) * 0.01)

        if args.add_bias and mus is mus_reg:
            bias = mus[ip][-1]
            graph_bias.SetPoint(ip, x, cent)
            if bias > 0.:
                graph_bias.SetPointEYhigh(ip, bias)
                graph_bias.SetPointEYlow(ip, 0.)
            else:
                graph_bias.SetPointEYhigh(ip, 0.)
                graph_bias.SetPointEYlow(ip, -bias)
            graph_bias.SetPointEXhigh(ip, 0.)
            graph_bias.SetPointEXlow(ip, 0.)
    

table = '      '
if not args.bias_only:
    table += '\\multirow{%d}{*}{%s}' % (npoi, args.year)
indent = ' '

for ip in range(npoi):
    table += indent
    if not args.bias_only:
        table += '& '
    table += '$%s$ ' % bintitles[ip].replace('#', '\\')
    if args.observed:
        if not args.bias_only:
            if args.unreg_only:
                table += '& $%.2f_{-%.2f}^{+%.2f}$ ' % (mus_unreg[ip][:3])
                table += ('& ${}_{-%.2f}^{+%.2f}$ ' * 5) % mus_unreg[ip][3:13]
            else:
                table += '& $%.2f_{-%.2f}^{+%.2f}$ & $%.2f_{-%.2f}^{+%.2f}$ ' % (mus_unreg[ip] + mus_reg[ip][:3])
                table += ('& ${}_{-%.2f}^{+%.2f}$ ' * 5) % mus_reg[ip][3:13]
        if args.add_bias:
            table += '& $%+.2f$ ' % mus_reg[ip][-1]
    else:
        if args.unreg_only:
            table += '& $-%.2f/+%.2f$ ' % mus_unreg[ip][1:]
        else:
            table += '& $-%.2f/+%.2f$ & $-%.2f/+%.2f$ ' % (mus_unreg[ip][1:] + mus_reg[ip][1:])
    table += '\\\\\n'
    if args.bias_only:
        indent = '      '
    else:
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

    lines = []
    def plot_outofrange(gr, col, sty):
        for ip in range(gr.GetN()):
            if gr.GetY()[ip] > ymax:
                line = ROOT.TLine(gr.GetX()[ip], gr.GetY()[ip] - gr.GetErrorYlow(ip), gr.GetX()[ip], ymax)
                line.SetLineColor(col)
                line.SetLineStyle(sty)
                line.SetLineWidth(2)
                line.Draw()
                lines.append(line)

    graph_unreg.SetLineWidth(0)
    graph_unreg.SetMarkerColor(ROOT.kBlue)
    graph_unreg.SetMarkerStyle(4)
    graph_unreg.SetFillColor(ROOT.kBlue)
    graph_unreg.SetFillStyle(3003)

    graph_unreg.Draw('AP2')

    graph_unreg.SetTitle('Signal strengths')
    graph_unreg.GetYaxis().SetRangeUser(ymin, ymax)
    graph_unreg.GetYaxis().SetTitle('#mu')
    graph_unreg.GetXaxis().SetTitle(common.xtitles[args.observable])
    graph_unreg.GetXaxis().SetLimits(binning[0], binning[-1])

    plot_outofrange(graph_unreg, ROOT.kBlue, ROOT.kDashed)

    if not args.unreg_only:
        graph_reg.SetLineColor(ROOT.kBlack)
        graph_reg.SetLineWidth(2)
        graph_reg.SetMarkerColor(ROOT.kBlack)
        graph_reg.SetMarkerStyle(8)
        graph_reg.SetMarkerSize(0.6)
        
        graph_reg.Draw('PZ')
    
        if args.add_bias:
            graph_bias.SetLineColor(ROOT.kRed)
            graph_bias.SetLineWidth(4)
            graph_bias.SetMarkerColor(ROOT.kBlack)
            graph_bias.SetMarkerStyle(8)
            graph_bias.SetMarkerSize(0.6)
            
            graph_bias.Draw('PZ')

        plot_outofrange(graph_reg, ROOT.kBlack, ROOT.kSolid)

        legend.AddEntry(graph_reg, 'Regularized', 'PL')
        if args.add_bias:
            bias_line = ROOT.TLine(0., 0., 0., 0.)
            bias_line.SetLineColor(graph_bias.GetLineColor())
            bias_line.SetLineWidth(2)
            legend.AddEntry(bias_line, 'Regularization bias', 'L')

    line = ROOT.TLine(binning[0], 1, binning[-1], 1)
    line.SetLineColor(ROOT.kBlack)
    line.SetLineWidth(1)
    line.Draw()

    legend.AddEntry(graph_unreg, 'Unregularized', 'PF')
    legend.Draw()
    
    canvas.Print(args.out_path)
