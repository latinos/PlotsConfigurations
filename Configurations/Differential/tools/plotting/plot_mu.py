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

args = argParser.parse_args()
sys.argv = []    

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
ROOT.gStyle.SetNumberContours(128)
ROOT.gStyle.SetPalette(ROOT.kTemperatureMap)

if args.observable == 'ptH':
    #binning = [0., 20., 45., 80., 120., 200., 350., 400.]
    binning = [0., 20., 45., 80., 120., 200., 300.]
    xtitle = 'p_{T}^{H} (GeV)'
    def binlabel(ip):
        if ip == len(binning) - 2:
            return 'PTH_GT%.0f' % binning[ip]
        else:
            return 'PTH_%.0f_%.0f' % (binning[ip], binning[ip+1])
else:
    binning = [-0.5, 0.5, 1.5, 2.5, 3.5, 4.5]
    xtitle = 'N_{jet}'
    def binlabel(ip):
        if ip == len(binning) - 2:
            return 'NJ_GE4'
        else:
            return 'NJ_%d' % ip
    
npoi = len(binning) - 1

matrix = ROOT.TH2D('correlation', '', npoi, 0., float(npoi), npoi, 0., float(npoi))

for ip in range(npoi):
    matrix.GetXaxis().SetBinLabel(ip + 1, binlabel(ip))
    matrix.GetYaxis().SetBinLabel(ip + 1, binlabel(ip))

mugraphs = [ROOT.TGraphAsymmErrors(npoi), ROOT.TGraphAsymmErrors(npoi)]

if args.tf_input:
    # combinetf input
    for ireg, path in [(0, args.reg_path), (1, args.unreg_path)]:
        mugraph = mugraphs[ireg]

        source = ROOT.TFile.Open(path)

        results = source.Get('fitresults')
        branches = []
    
        for ip in range(npoi):
            mu = array.array('f', [0.])
            up = array.array('f', [0.])
            down = array.array('f', [0.])
            err = array.array('f', [0.])
            results.SetBranchAddress('smH_hww_%s_mu' % binlabel(ip), mu)
            results.SetBranchAddress('smH_hww_%s_mu_minosup' % binlabel(ip), up)
            results.SetBranchAddress('smH_hww_%s_mu_minosdown' % binlabel(ip), down)
            results.SetBranchAddress('smH_hww_%s_mu_err' % binlabel(ip), err)
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

                ip = next(ip for ip in range(npoi) if binlabel(ip) == muname)

                source = ROOT.TFile.Open(path)
        
                results = source.Get('fitresults')
            
                results.SetBranchAddress('smH_hww_%s_mu' % binlabel(ip), mu)
                results.SetBranchAddress('smH_hww_%s_mu_minosup' % binlabel(ip), up)
                results.SetBranchAddress('smH_hww_%s_mu_minosdown' % binlabel(ip), down)
            
                results.GetEntry(0)
            
                x = sum(binning[ip:ip+2]) * 0.5
                
                mugraph.SetPoint(ip, x, mu[0])
                mugraph.SetPointEYhigh(ip, up[0])
                mugraph.SetPointEYlow(ip, down[0])

        if ireg == 0:
            correlation = source.Get('correlation_matrix_channelmu')
        
            for ip1 in range(npoi):
                ix = correlation.GetXaxis().FindBin('smH_hww_%s' % binlabel(ip1))
                print ix
                for ip2 in range(npoi):
                    iy = correlation.GetYaxis().FindBin('smH_hww_%s' % binlabel(ip2))
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

if args.observable == 'ptH':
    if args.observed:
        table = '\\multirow{6}{*}{year}'
        for ip in range(0, npoi - 1):
            table += ' & $[%.0f, %.0f]$ & %.2f & %+.2f/%+.2f & %.2f & %+.2f/%+.2f \\\\\n' % (binning[ip], binning[ip + 1], mugraphs[1].GetY()[ip], -mugraphs[1].GetErrorYlow(ip), mugraphs[1].GetErrorYhigh(ip), mugraphs[0].GetY()[ip], -mugraphs[0].GetErrorYlow(ip), mugraphs[0].GetErrorYhigh(ip))
        ip = npoi - 1
        table += ' & $[%.0f, \\infty]$ & %.2f & %+.2f/%+.2f & %.2f & %+.2f/%+.2f \\\\\n' % (binning[ip], mugraphs[1].GetY()[ip], -mugraphs[1].GetErrorYlow(ip), mugraphs[1].GetErrorYhigh(ip), mugraphs[0].GetY()[ip], -mugraphs[0].GetErrorYlow(ip), mugraphs[0].GetErrorYhigh(ip))
    else:
        table = '      \\multirow{7}{*}{year}'
        for ip in range(0, npoi - 1):
            table += ' & $[%.0f, %.0f]$ & %+.2f/%+.2f & %+.2f/%+.2f \\\\\n' % (binning[ip], binning[ip + 1], -mugraphs[1].GetErrorYlow(ip), mugraphs[1].GetErrorYhigh(ip), -mugraphs[0].GetErrorYlow(ip), mugraphs[0].GetErrorYhigh(ip))
        ip = npoi - 1
        table += ' & $[%.0f, \\infty]$ & %+.2f/%+.2f & %+.2f/%+.2f \\\\\n' % (binning[ip], -mugraphs[1].GetErrorYlow(ip), mugraphs[1].GetErrorYhigh(ip), -mugraphs[0].GetErrorYlow(ip), mugraphs[0].GetErrorYhigh(ip))

else:
    if args.observed:
        table = '\\multirow{5}{*}{year}'
        for ip in range(0, npoi - 1):
            table += ' & %.0f & %.2f & %+.2f/%+.2f & %.2f & %+.2f/%+.2f \\\\\n' % ((binning[ip] + binning[ip + 1]) * 0.5, mugraphs[1].GetY()[ip], -mugraphs[1].GetErrorYlow(ip), mugraphs[1].GetErrorYhigh(ip), mugraphs[0].GetY()[ip], -mugraphs[0].GetErrorYlow(ip), mugraphs[0].GetErrorYhigh(ip))
        ip = npoi - 1
        table += ' & $\geq %.0f$ & %.2f & %+.2f/%+.2f & %.2f & %+.2f/%+.2f \\\\\n' % ((binning[ip] + binning[ip + 1]) * 0.5, mugraphs[1].GetY()[ip], -mugraphs[1].GetErrorYlow(ip), mugraphs[1].GetErrorYhigh(ip), mugraphs[0].GetY()[ip], -mugraphs[0].GetErrorYlow(ip), mugraphs[0].GetErrorYhigh(ip))
    else:
        table = '      \\multirow{5}{*}{year}'
        for ip in range(0, npoi - 1):
            table += ' & %.0f & %+.2f/%+.2f & %+.2f/%+.2f \\\\\n' % ((binning[ip] + binning[ip + 1]) * 0.5, -mugraphs[1].GetErrorYlow(ip), mugraphs[1].GetErrorYhigh(ip), -mugraphs[0].GetErrorYlow(ip), mugraphs[0].GetErrorYhigh(ip))
        ip = npoi - 1
        table += ' & $\geq %.0f$ & %+.2f/%+.2f & %+.2f/%+.2f \\\\\n' % ((binning[ip] + binning[ip + 1]) * 0.5, mugraphs[1].GetErrorYlow(ip), mugraphs[1].GetErrorYhigh(ip), -mugraphs[0].GetErrorYlow(ip), mugraphs[0].GetErrorYhigh(ip))

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
