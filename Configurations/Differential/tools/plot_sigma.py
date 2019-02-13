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

ROOT.gSystem.Load('libLatinoAnalysisMultiDraw.so')

#lumi = 35867. + 41530.
lumi = 35867.

resultsPath = {
    'ptH': sys.argv[1],
    'njet': sys.argv[2]
}

RECOMPUTE = False

configs = [
    ('ptH',
     [0., 20., 45., 80., 120., 200., 350., 400.],
     lambda low, high: 'PTH_%.0f_%.0f' % (low, high) if low < 300. else 'PTH_GT350',
     None,
     'genPth',
     'p_{T}^{H}',
     'GeV',
     'pb/GeV'),
    ('njet',
     [-0.5, 0.5, 1.5, 2.5, 3.5, 4.5],
     lambda low, high: 'NJ_%.0f' % round((low + high) * 0.5) if low < 3. else 'NJ_GE4',
     ['0', '1', '2', '3', '#geq4'],
     'nGenJet',
     'N_{jet}',
     '',
     'pb')
]

BR2l2v = 0.215*0.108*0.108*9
BRWW = 0.215
nominalSignal = [
    ('ggH', 'GluGluHToWWTo2L2NuPowheg_M125', 48.52 * BR2l2v, 0.039, 0.032),
    ('qqH', 'VBFHToWWTo2L2Nu_M125', 3.779 * BR2l2v, 0.04 / math.sqrt(3.), 0.021),
    ('WminusH', 'HWminusJ_HToWW_M125', 0.5313 * BRWW, 0.007 / math.sqrt(3.), 0.019),
    ('WplusH', 'HWplusJ_HToWW_M125', 0.8380 * BRWW, 0.007 / math.sqrt(3.), 0.019),
    ('ggZH', 'ggZH_HToWW_M125', 0.1227 * BRWW, 0.251 / math.sqrt(3.), 0.024),
    ('ZH', 'HZJ_HToWW_M125', 0.7612 * BRWW, 0.006 / math.sqrt(3.), 0.019),
    ('ttH', 'ttHToNonbb_M125', 0.5065 * (1 - 0.577), 0.092 / math.sqrt(3.), 0.036)
]

if RECOMPUTE:
    from setupfiducial import setupfiducial
    
    out = ROOT.TFile.Open('sigma.root', 'recreate')
    
    _histograms = []
    
    for name, filename, _, _, _ in nominalSignal:
        drawer = ROOT.multidraw.MultiDraw('latino')
        drawer.setWeightBranch('')
        drawer.setFilter('1')
        drawer.addInputPath('/eos/cms/store/cmst3/user/yiiyama/hww/latino_' + filename + '*.root')
        setupfiducial(drawer)
    
        outdir = out.mkdir(name)
        outdir.cd()
        total = ROOT.TH1D('total', '', 1, 0., 1.)
        _histograms.append(total)
        drawer.addPlot(total, '0.5')
            
        for observable, binning, _, _, xvar, _, _, _ in configs:
            for ibin in range(len(binning) - 1):
                binname = '%s_bin%d' % (observable, ibin)
                outdir.cd()
                counter = ROOT.TH1D(binname, '', 1, 0., 1.)
                _histograms.append(counter)
                if ibin == len(binning) - 2:
                    cutExpr = 'fiducial && %s >= %f' % (xvar, binning[-2])
                else:
                    cutExpr = 'fiducial && %s >= %f && %s < %f' % (xvar, binning[ibin], xvar, binning[ibin + 1])
            
                drawer.addCut(binname, cutExpr)
                drawer.addPlot(counter, '0.5', binname)
        
        drawer.execute()
    
    out.cd()
    out.Write()

else:
    out = ROOT.TFile.Open('sigma.root')

from plotstyle import RatioCanvas
canvas = RatioCanvas(lumi = lumi)
canvas.Clear()

#canvas = ROOT.TCanvas('c1', 'c1', 600, 600)
#canvas.SetLeftMargin(0.15)
#canvas.SetRightMargin(0.05)
#canvas.SetBottomMargin(0.15)
#canvas.SetTopMargin(0.05)

canvas.legend.setPosition(0.55, 0.7, 0.9, 0.9)
canvas.legend.add('obs', 'Asimov fit', opt = 'LP', color = ROOT.kBlack, lwidth = 2, mstyle = 8)
canvas.legend.add('nominal', 'POWHEG+MINLO', opt = 'LF', color = ROOT.kGray, lwidth = 2, fstyle = 3354)

#legend.SetBorderSize(0)
#legend.SetFillStyle(0)
#legend.SetTextSize(0.035)
#legend.AddEntry(measured, 'Asimov fit', 'LP')
#legend.AddEntry(nominal, 'POWHEG+MINLO', 'LF')
#legend.Draw()

#cmssim = ROOT.TPaveText()
#cmssim.SetX1NDC(0.18)
#cmssim.SetY1NDC(0.86)
#cmssim.SetX2NDC(0.4)
#cmssim.SetY2NDC(0.95)
#cmssim.SetTextAlign(11)
#cmssim.SetTextFont(62)
#cmssim.SetTextSize(0.035)
#cmssim.SetFillStyle(0)
#cmssim.SetBorderSize(0)
#cmssim.AddText('CMS Preliminary')

for observable, binning, sourcebin, binlabels, _, xtitle, xunit, yunit in configs:
    ROOT.gROOT.cd()
    if xunit:
        fullxtitle = '%s (%s)' % (xtitle, xunit)
    else:
        fullxtitle = xtitle

    nominal = ROOT.TH1D('%s_nominal' % observable, ';%s;#Delta#sigma/#Delta%s (%s)' % (fullxtitle, xtitle, yunit), len(binning) - 1, array.array('d', binning))
    #alternative = ROOT.TH1D('%s_alternative' % observable, ';%s;#Delta#sigma/#Delta%s (%s)' % (fullxtitle, xtitle, yunit), len(binning) - 1, array.array('d', binning))
    measured = ROOT.TGraphAsymmErrors(len(binning) - 1)

    source = ROOT.TFile.Open(resultsPath[observable])
    resultsTree = source.Get('fitresults')
    cent = array.array('f', [0.])
    up = array.array('f', [0.])
    down = array.array('f', [0.])
    err = array.array('f', [0.])

    for ibin in range(len(binning) - 1):
        binname = '%s_bin%d' % (observable, ibin)

        sbinname = sourcebin(binning[ibin], binning[ibin + 1])
        
        resultsTree.SetBranchAddress('smH_hww_%s_mu' % sbinname, cent)
        resultsTree.SetBranchAddress('smH_hww_%s_mu_minosup' % sbinname, up)
        resultsTree.SetBranchAddress('smH_hww_%s_mu_minosdown' % sbinname, down)
        resultsTree.SetBranchAddress('smH_hww_%s_mu_err' % sbinname, err)
        resultsTree.GetEntry(0)

        if up[0] < -98.:
            up[0] = err[0]
        if down[0] < -98.:
            down[0] = err[0]

        dsigma = 0.
        dsigmaErr2 = 0.
        
        for name, _, sigma, qcdunc, pdfunc in nominalSignal:
            norm = out.Get('%s/total' % name).GetBinContent(1)
            counter = out.Get('%s/%s' % (name, binname))

            contrib = counter.GetBinContent(1) / norm * sigma

            print observable, ibin, name, contrib
            
            dsigma += contrib
            dsigmaErr2 += contrib * contrib * (qcdunc * qcdunc + pdfunc * pdfunc)

        dsigma /= (binning[ibin + 1] - binning[ibin])
        dsigmaErr = math.sqrt(dsigmaErr2) / (binning[ibin + 1] - binning[ibin])

        nominal.SetBinContent(ibin + 1, dsigma)
        nominal.SetBinError(ibin + 1, dsigmaErr)

        if binlabels is not None:
            nominal.GetXaxis().SetBinLabel(ibin + 1, binlabels[ibin])

        measured.SetPoint(ibin, (binning[ibin] + binning[ibin + 1]) * 0.5, dsigma * cent[0])
        measured.SetPointEYhigh(ibin, dsigma * up[0])
        measured.SetPointEYlow(ibin, dsigma * down[0])

    nominalLine = nominal.Clone('line')
    canvas.legend.apply('nominal', nominalLine)
    nominalLine.SetFillStyle(0)

    canvas.legend.apply('nominal', nominal)
    nominal.SetMaximum(nominal.GetMaximum() * 1.2)

    canvas.legend.apply('obs', measured)
    measured.SetTitle('')
        
    canvas.addHistogram(nominal, drawOpt = 'E2')
    canvas.addHistogram(nominalLine, drawOpt = 'HIST')
    canvas.addHistogram(measured, drawOpt = 'EP')

    canvas.xtitle = nominal.GetXaxis().GetTitle()
    canvas.ytitle = nominal.GetYaxis().GetTitle()
    canvas.rtitle = 'Fit / prediction'

    canvas.printWeb('hww/20190205', 'sigma_%s' % observable, logy = False)
    canvas.Clear()

    nominalLine.Delete()
    nominal.Delete()
