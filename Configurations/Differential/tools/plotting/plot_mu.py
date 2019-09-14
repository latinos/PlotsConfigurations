import os
import sys
import array
from argparse import ArgumentParser

argParser = ArgumentParser(description = 'Plot or tabify the signal strengths and major-background rateParams.')
argParser.add_argument('reg_path', metavar = 'PATH', help = 'Regularized fit result.')
argParser.add_argument('unreg_path', metavar = 'PATH', help = 'Unregularized fit result.')
argParser.add_argument('observable', metavar = 'OBS', help = 'Observable name.')
argParser.add_argument('--out', '-o', metavar = 'PATH', dest = 'out_path', help = 'Output plot file name.')
argParser.add_argument('--obs', '-b', action = 'store_true', dest = 'observed', help = 'Using observed output.')
argParser.add_argument('--tf', '-T', action = 'store_true', dest = 'tf_input', help = 'Output plot file name.')
argParser.add_argument('--auxminos', '-x', metavar = 'MU=PATH[,PATH]', dest = 'aux_minos', nargs = '+', help = 'Pick up MINOS errors of a specific mu value from separate files.')
argParser.add_argument('--year', '-y', metavar='YEAR', dest='year', default='year', help='Dataset year.')

args = argParser.parse_args()
sys.argv = []

import common

import ROOT

ROOT.gStyle.SetNumberContours(128)
ROOT.gStyle.SetPalette(ROOT.kTemperatureMap)

if args.observable == 'ptH':
    xtitle = 'p_{T}^{H} (GeV)'
else:
    xtitle = 'N_{jet}'

binnames = common.binnames[args.observable]
binning = common.binning[args.observable]
bintitles = common.bintitles[args.observable]
    
npoi = len(binnames)

matrix = ROOT.TH2D('correlation', '', npoi, 0., float(npoi), npoi, 0., float(npoi))

for ip, label in enumerate(binnames):
    matrix.GetXaxis().SetBinLabel(ip + 1, label)
    matrix.GetYaxis().SetBinLabel(ip + 1, label)

mugraphs = [ROOT.TGraphAsymmErrors(npoi), ROOT.TGraphAsymmErrors(npoi)]

if args.tf_input:
    # combinetf input
    for ireg, path in [(0, args.reg_path), (1, args.unreg_path)]:
        mugraph = mugraphs[ireg]

        source = ROOT.TFile.Open(path)

        results = source.Get('fitresults')
        branches = []
    
        for label in binnames:
            mu = array.array('f', [0.])
            up = array.array('f', [0.])
            down = array.array('f', [0.])
            err = array.array('f', [0.])
            results.SetBranchAddress('smH_hww_%s_mu' % label, mu)
            results.SetBranchAddress('smH_hww_%s_mu_minosup' % label, up)
            results.SetBranchAddress('smH_hww_%s_mu_minosdown' % label, down)
            results.SetBranchAddress('smH_hww_%s_mu_err' % label, err)
            branches.append((mu, up, down, err))
    
        results.GetEntry(0)
    
        for ip in range(npoi):
            x = sum(binning[ip:ip+2]) * 0.5
            x += ireg * (binning[-1] - binning[0]) * 0.01
            
            mugraph.SetPoint(ip, x, branches[ip][0][0])
            if branches[ip][1][0] < -98.:
                branches[ip][1][0] = branches[ip][3][0]
            if branches[ip][2][0] < -98.:
                branches[ip][2][0] = branches[ip][3][0]
            mugraph.SetPointEYhigh(ip, branches[ip][1][0])
            mugraph.SetPointEYlow(ip, branches[ip][2][0])

        source.Close()

        if args.aux_minos is not None:
            for aux in args.aux_minos:
                muname, _, paths = aux.partition('=')
                path = paths.split(',')[ireg]

                ip, label = next(x for x in enumerate(binnames) if x[1] == muname)

                source = ROOT.TFile.Open(path)
        
                results = source.Get('fitresults')
            
                results.SetBranchAddress('smH_hww_%s_mu' % label, mu)
                results.SetBranchAddress('smH_hww_%s_mu_minosup' % label, up)
                results.SetBranchAddress('smH_hww_%s_mu_minosdown' % label, down)
            
                results.GetEntry(0)
            
                x = sum(binning[ip:ip+2]) * 0.5
                
                mugraph.SetPoint(ip, x, mu[0])
                mugraph.SetPointEYhigh(ip, up[0])
                mugraph.SetPointEYlow(ip, down[0])

        if ireg == 0:
            correlation = source.Get('correlation_matrix_channelmu')
        
            for ip1 in range(npoi):
                ix = correlation.GetXaxis().FindBin('smH_hww_%s' % binnames[ip1])
                print ix
                for ip2 in range(npoi):
                    iy = correlation.GetYaxis().FindBin('smH_hww_%s' % binnames[ip2])
                    print iy
                    print correlation.GetBinContent(ix, iy)
                    matrix.SetBinContent(ip1 + 1, ip2 + 1, correlation.GetBinContent(ix, iy))

else:
    # combine input
    for ireg, path in [(0, args.reg_path), (1, args.unreg_path)]:
        mugraph = mugraphs[ireg]

        source = ROOT.TFile.Open(path)

        limit = source.Get('limit')
        
        rs = []    
        for ip in range(npoi):
            r = array.array('f', [0.])
            rs.append(r)
            limit.SetBranchAddress('r_%d' % ip, r)

        limit.GetEntry(0)

        for ip in range(npoi):
            x = sum(binning[ip:ip+2]) * 0.5
            x += ireg * (binning[-1] - binning[0]) * 0.01
            mugraph.SetPoint(ip, x, rs[ip][0])

        for ip in range(npoi):
            limit.GetEntry(ip * 2 + 1)
            mugraph.SetPointEYlow(ip, mugraph.GetY()[ip] - rs[ip][0])
            limit.GetEntry(ip * 2 + 2)
            mugraph.SetPointEYhigh(ip, rs[ip][0] - mugraph.GetY()[ip])

    #fitres = source.Get('fit_mdf')
    #if fitres:
    #    # combine output
    #    pars = fitres.floatParsFinal()
    #
    #    pois = []
    #    for ip in range(npoi):
    #        poi = pars[pars.index('r_%d' % ip)]
    #    
    #        x = sum(binning[ip:ip+2]) * 0.5
    #    
    #        strengths.SetPoint(ip, x, poi.getVal())
    #        strengths.SetPointError(ip, 0., poi.getError())
    #    
    #        pois.append(poi)
    #    
    #    for ip1 in range(npoi):
    #        for ip2 in range(npoi):
    #            matrix.SetBinContent(ip1 + 1, ip2 + 1, fitres.correlation(pois[ip1], pois[ip2]))

matrix.SetMaximum(1.)
matrix.SetMinimum(-1.)

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
    canvas.SetLeftMargin(0.15)
    canvas.SetBottomMargin(0.15)
    matrix.Draw('COL TEXT')
    
    #canvas.Print(os.path.dirname(os.path.dirname(os.path.realpath(__file__))) + '/figures/results/asimov_mucorr_%s%s.pdf' % (args.observable, tag))
    
    canvas.SetRightMargin(0.05)
    canvas.SetLeftMargin(0.15)
    canvas.SetBottomMargin(0.1)
    canvas.SetGrid(False, True)

    ymin = -2.
    ymax = 5.
    
    legend = ROOT.TLegend(0.7, 0.8, 0.9, 0.9)
    legend.SetBorderSize(0)
    legend.SetFillStyle(0)
    
    mugraphs[0].SetLineColor(ROOT.kBlack)
    mugraphs[0].SetLineWidth(2)
    mugraphs[0].SetMarkerColor(ROOT.kBlack)
    mugraphs[0].SetMarkerStyle(8)
    
    mugraphs[0].Draw('APE')
    mugraphs[0].SetTitle('Signal strengths')
    mugraphs[0].GetYaxis().SetRangeUser(ymin, ymax)
    mugraphs[0].GetYaxis().SetTitle('#mu')
    mugraphs[0].GetXaxis().SetTitle(xtitle)
    mugraphs[0].GetXaxis().SetLimits(binning[0], binning[-1])

    mugraphs[1].SetLineColor(ROOT.kBlue)
    mugraphs[1].SetLineWidth(2)
    mugraphs[1].SetMarkerColor(ROOT.kBlue)
    mugraphs[1].SetMarkerStyle(8)
    mugraphs[1].SetLineStyle(ROOT.kDashed)
    mugraphs[1].Draw('PE')

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
    legend.AddEntry(mugraphs[1], 'Unregularized', 'PL')
    legend.Draw()
    
    canvas.Print(args.out_path)
