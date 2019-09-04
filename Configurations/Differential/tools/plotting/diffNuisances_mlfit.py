import os
import sys
import math
from argparse import ArgumentParser

arg_parser = ArgumentParser(description='Plot nuisance pulls wrt prefit from MultiDimFit output (--saveFitResult).')
arg_parser.add_argument('workspace', metavar='PATH', help='ROOT file containing the workspace with the bestfit snapshot.')
arg_parser.add_argument('--out', '-o', metavar='PATH', dest='out_path', default='.', help='Output directory.')
arg_parser.add_argument('--tag', '-t', metavar='TAG', dest='tag', default='', help='Output tag.')
arg_parser.add_argument('--data', '-D', metavar='PATH', dest='data_file', help='Read observed data from file.')
arg_parser.add_argument('--toy-file', '-y', metavar='PATH', dest='toy_file', help='File to load toys from (defaults to prefit_workspace).')
arg_parser.add_argument('--toy-snapshot', metavar='ITOY', dest='toy_snapshot', type=int, help='Load given toy snapshot if reading from a toy workspace.')
arg_parser.add_argument('--pulls', '-p', metavar='PATH', dest='mlfit_output', help='Analyze pulls (pass multidimfit.root file).')
arg_parser.add_argument('--shapes', '-S', action='store_true', dest='do_shapes', help='Analyze postfit shapes.')

args = arg_parser.parse_args()
del sys.argv[1:]

try:
    os.makedirs(args.out_path)
except OSError:
    pass

import ROOT
ROOT.gROOT.SetBatch(True)
ROOT.gStyle.SetOptStat(0)

NPEROUT = 30

workspace = ROOT.TFile.Open(args.workspace)
w = workspace.Get('w')

if args.toy_snapshot is not None:
    if args.toy_file is None:
        toy_file = workspace
    else:
        toy_file = ROOT.TFile.Open(args.toy_file)
    
    toy_snapshot = toy_file.Get('toys/toy_%d_snapshot' % args.toy_snapshot)
    if not toy_snapshot:
        raise RuntimeError('Toy snapshot %d not found' % args.toy_snapshot)
    w.saveSnapshot('diffNuisances', toy_snapshot, True)
    w.loadSnapshot('diffNuisances')

canvas = ROOT.TCanvas('c1', 'c1', 1000, 400)
canvas.SetGridx(True)

dnll_nuis = 0.
dnll_obs = 0.

if args.mlfit_output:
    mlfit_output = ROOT.TFile.Open(args.mlfit_output)
    fit_mdf = mlfit_output.Get('fit_mdf')

    fpf = fit_mdf.floatParsFinal()
    
    ymax = 5.
    ymin = -5.
    
    ipar = 0
    iout = 0
    
    hgaus = ROOT.TH1D('hgaus', '', 100, -5., 5.)
    hpois = ROOT.TH1D('hpois', '', 100, 0., 7.)
    
    while ipar < fpf.getSize():
        grgaus = None
        grpois = None
        frame = ROOT.TH1F('frame', '', NPEROUT, 0, float(NPEROUT))
    
        ipgaus = 0
        ippois = 0
        ibin = 1
        while ibin <= NPEROUT and ipar < fpf.getSize():
            parpost = fpf.at(ipar)
            ipar += 1
    
            name = parpost.GetName()
            parpre = w.var(name)
            central = w.var(name + '_In')
            
            if parpre.getAttribute('createGaussianConstraint') or parpre.getAttribute('optimizeBounds'):
                if grgaus is None:
                    grgaus = ROOT.TGraphAsymmErrors(1)
                else:
                    grgaus.Set(grgaus.GetN() + 1)
    
                gr = grgaus
    
                y = parpost.getVal() - central.getVal()
                
                if abs(parpost.getErrorHi() - parpost.getErrorLo()) < 1.e-6:
                    errhi = parpost.getError()
                    errlo = errhi
                else:
                    errhi = abs(parpost.getErrorHi() / parpre.getErrorHi())
                    errlo = abs(parpost.getErrorLo() / parpre.getErrorLo())
    
                hgaus.Fill(y)
    
                dnll_nuis += y * y
    
            elif parpre.getAttribute('createPoissonConstraint'):
                # Calculation of "y" values here has no statistical basis whatsoever

                if grpois is None:
                    grpois = ROOT.TGraphAsymmErrors(1)
                else:
                    grpois.Set(grpois.GetN() + 1)
    
                gr = grpois
    
                #y = parpost.getVal() / central.getVal() - 1.
                if central.getVal() == 0.:
                    y = parpost.getVal() - central.getVal()
                    errhi = parpost.getError()
                    errlo = parpost.getError()
                else:
                    y = -(central.getVal() * math.log(parpost.getVal() / central.getVal()) - (parpost.getVal() - central.getVal()))
    
                    if abs(parpost.getErrorHi() - parpost.getErrorLo()) < 1.e-6:
                        errhi = parpost.getError() / math.sqrt(central.getVal())
                        errlo = errhi
                    else:
                        errhi = abs(parpost.getErrorHi() / math.sqrt(central.getVal()))
                        errlo = abs(parpost.getErrorLo() / math.sqrt(central.getVal()))
    
                hpois.Fill(y)
    
                dnll_nuis += 2. * y
    
            else:
                continue
        
            frame.GetXaxis().SetBinLabel(ibin, name)
            gr.SetPoint(gr.GetN() - 1, ibin - 0.5, y)
            gr.SetPointError(gr.GetN() - 1, 0., 0., errlo, errhi)
        
            ymax = max(ymax, y + errhi)
            ymin = min(ymin, y - errlo)
    
            ibin += 1
    
        yrange = max(ymax, abs(ymin))
        frame.SetMaximum(yrange)
        frame.SetMinimum(-yrange)
    
        frame.Draw()
        if grgaus is not None:
            grgaus.SetMarkerColor(ROOT.kBlack)
            grgaus.SetLineColor(ROOT.kBlack)
            grgaus.SetMarkerStyle(8)
            grgaus.SetLineWidth(2)
            grgaus.Draw('PE')
        if grpois is not None:
            grpois.SetMarkerColor(ROOT.kBlue)
            grpois.SetLineColor(ROOT.kBlue)
            grpois.SetMarkerStyle(9)
            grpois.SetLineWidth(2)
            grpois.Draw('PE')
        
        canvas.Print('%s/list%s_%d.png' % (args.out_path, args.tag, iout))
        canvas.Print('%s/list%s_%d.pdf' % (args.out_path, args.tag, iout))
        
        frame.Delete()
        iout += 1
    
    canvas.SetCanvasSize(600, 600)
    canvas.SetGridx(False)
    
    hgaus.SetBinContent(hgaus.GetNbinsX(), hgaus.GetBinContent(hgaus.GetNbinsX()) + hgaus.GetBinContent(hgaus.GetNbinsX() + 1))
    hgaus.SetBinContent(1, hgaus.GetBinContent(0) + hgaus.GetBinContent(1))
    
    hgaus.Draw('HIST')
    canvas.Print('%s/gaus%s.png' % (args.out_path, args.tag))
    canvas.Print('%s/gaus%s.pdf' % (args.out_path, args.tag))
    
    hpois.SetBinContent(hpois.GetNbinsX(), hpois.GetBinContent(hpois.GetNbinsX()) + hpois.GetBinContent(hpois.GetNbinsX() + 1))
    
    hpois.Draw('HIST')
    canvas.Print('%s/pois%s.png' % (args.out_path, args.tag))
    canvas.Print('%s/pois%s.pdf' % (args.out_path, args.tag))

if args.do_shapes:
    canvas.SetCanvasSize(600, 600)
    canvas.SetGridx(False)
    
    hobs = ROOT.TH1D('hobs', '', 100, 0., 7.)
    hobsw = ROOT.TH1D('hobsw', '', 100, 0., 7.)
    
    if not w.loadSnapshot('MultiDimFit'):
        raise RuntimeError('Bestfit snapshot not in workspace')
    
    x = w.var('CMS_th1x')

    model = w.pdf('model_s')
    categories = model.indexCat().Clone()

    if args.toy_snapshot is not None:
        datas = toy_file.Get('toys/toy_%d' % args.toy_snapshot).split(categories, True)
    elif args.data_file is not None:
        fname, path = args.data_file.split(':')
        source = ROOT.TFile.Open(fname)
        datas = source.Get(path).split(categories, True)
    else:
        datas = w.data('data_obs').split(categories, True)

    dnll_obss = {}

    _boxes = []
    box3 = ROOT.TBox(0., 0., 0., 0.)
    box3.SetFillColor(ROOT.kOrange)
    box3.SetFillStyle(3003)
    box7 = ROOT.TBox(0., 0., 0., 0.)
    box7.SetFillColor(ROOT.kRed)
    box7.SetFillStyle(3003)
    nbins = 0.

    for index in range(categories.numBins('')):
        categories.setBin(index)
        pdf = model.getPdf(categories.getLabel())
        # pdf is a RooProdPdf
        for stack in pdf.pdfList():
            if stack.dependsOn(x):
                break
        else:
            raise RuntimeError('No observable pdf in ' + categories.getLabel())

        # stack is a RooAddPdf or RooRealSumPdf
        if stack.InheritsFrom(ROOT.RooAddPdf.Class()):
            coefs = stack.coefList()
            for ic in range(coefs.getSize()):
                coef = coefs.at(ic)
    
            norm = sum(coefs.at(i).getVal() for i in range(coefs.getSize()))

        else:
            norm = 0.
            funcs = stack.funcList()
            coefs = stack.coefList()
            for ic in range(funcs.getSize()):
                integral = funcs.at(ic).createIntegral(ROOT.RooArgSet(x), ROOT.RooArgSet())
                norm += coefs.at(ic).getVal() * integral.getVal()

        hist = pdf.createHistogram('prediction', x, ROOT.RooFit.Extended(False))
        hist.Scale(norm / hist.Integral('width'))

        hist.SetLineColor(ROOT.kBlue)
        hist.SetLineWidth(2)

        data = datas.FindObject(categories.getLabel())

        dist = ROOT.RooAbsData.createHistogram(data, 'data', x)
        dist.SetMarkerStyle(8)
        dist.SetMarkerColor(ROOT.kBlack)
        dist.SetLineColor(ROOT.kBlack)
        dist.SetLineWidth(2)

        for ix in range(1, dist.GetNbinsX() + 1):
            dist.SetBinError(ix, math.sqrt(dist.GetBinContent(ix)))

        hist.Draw('HIST')
        dist.Draw('EP SAME')

        hist.SetMaximum(max(hist.GetMaximum(), dist.GetMaximum()) * 1.2)

        dnll_obss[categories.getLabel()] = 0.

        nbins += dist.GetNbinsX()

        for ix in range(1, dist.GetNbinsX()):
            d = dist.GetBinContent(ix)
            f = hist.GetBinContent(ix)
            if d == 0:
                y = 2. * f
                if f != 0.:
                    hobs.Fill(y)
                    hobsw.Fill(y, y)
            else:
                y = 2. * (f - d + d * math.log(d / f))
                hobs.Fill(y)
                hobsw.Fill(y, y)

            dnll_obs += y
            dnll_obss[categories.getLabel()] += y

            if y > 7.:
                _boxes.append(box7.DrawBox(hist.GetXaxis().GetBinLowEdge(ix), 0., hist.GetXaxis().GetBinUpEdge(ix), hist.GetBinContent(ix)))
            elif y > 3.:
                _boxes.append(box3.DrawBox(hist.GetXaxis().GetBinLowEdge(ix), 0., hist.GetXaxis().GetBinUpEdge(ix), hist.GetBinContent(ix)))

        canvas.Print('%s/dist%s_%s.png' % (args.out_path, args.tag, categories.getLabel()))
        canvas.Print('%s/dist%s_%s.pdf' % (args.out_path, args.tag, categories.getLabel()))                

        hist.Delete()
        dist.Delete()

    hobs.SetBinContent(hobs.GetNbinsX(), hobs.GetBinContent(hobs.GetNbinsX()) + hobs.GetBinContent(hobs.GetNbinsX() + 1))
    hobsw.SetBinContent(hobsw.GetNbinsX(), hobsw.GetBinContent(hobsw.GetNbinsX()) + hobsw.GetBinContent(hobsw.GetNbinsX() + 1))
    
    hobs.Draw('HIST')
    canvas.Print('%s/obs%s.png' % (args.out_path, args.tag))
    canvas.Print('%s/obs%s.pdf' % (args.out_path, args.tag))

    hobsw.Draw('HIST')
    canvas.Print('%s/obsw%s.png' % (args.out_path, args.tag))
    canvas.Print('%s/obsw%s.pdf' % (args.out_path, args.tag))

    for cat in sorted(dnll_obss.iterkeys()):
        print cat, dnll_obss[cat]

    print len(_boxes) / nbins, 'with >3 sigma'

print 'dnll_nuis:', dnll_nuis
print 'dnll_obs:', dnll_obs
