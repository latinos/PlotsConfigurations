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

lumi = 35867. + 41530.
#lumi = 35867.

ADDOBS = True

if ADDOBS:
    resultsPath = {
        'ptH': sys.argv[1],
        'njet': sys.argv[2]
    }

RECOMPUTE = False

observables = ['ptH', 'njet']

def ptHSource(low, high):
    return 'PTH_%.0f_%.0f' % (low, high) if low < 300. else 'PTH_GT350'

def njetSource(low, high):
    return 'NJ_%.0f' % round((low + high) * 0.5) if low < 3. else 'NJ_GE4'

computeConfigs = {
    'ptH': ([0., 20., 45., 80., 120., 200., 350., 400.], 'genPth'),
    'njet': ([-0.5, 0.5, 1.5, 2.5, 3.5, 4.5], 'nCleanGenJet')
}

plottingConfigs = {
    'ptH': (ptHSource, None, 'p_{T}^{H}', 'GeV', 'fb/GeV', True),
    'njet': (njetSource, ['0', '1', '2', '3', '#geq4'], 'N_{jet}', '', 'fb', False)
}

BR2l2v = 0.215*0.108*0.108*9
BRWW = 0.215
nominalSignal = [
    ('ggH', [('ggH', 'GluGluHToWWTo2L2NuPowheg_M125', 48.52 * BR2l2v, 0.039, 0.032)], '1f77b4'),
    ('qqH', [('qqH', 'VBFHToWWTo2L2Nu_M125', 3.779 * BR2l2v, 0.04 / math.sqrt(3.), 0.021)], 'ff7f0e'),
    ('WH', [('WminusH', 'HWminusJ_HToWW_M125', 0.5313 * BRWW, 0.007 / math.sqrt(3.), 0.019), ('WplusH', 'HWplusJ_HToWW_M125', 0.8380 * BRWW, 0.007 / math.sqrt(3.), 0.019)], '2ca02c'),
    ('ZH', [('ggZH', 'ggZH_HToWW_M125', 0.1227 * BRWW, 0.251 / math.sqrt(3.), 0.024), ('ZH', 'HZJ_HToWW_M125', 0.7612 * BRWW, 0.006 / math.sqrt(3.), 0.019)], 'd62728'),
    ('ttH', [('ttH', 'ttHToNonbb_M125', 0.5065 * (1 - 0.577), 0.092 / math.sqrt(3.), 0.036)], '9467bd')
]

if RECOMPUTE:
    from setupfiducial import setupfiducial
    
    out = ROOT.TFile.Open('sigma.root', 'recreate')
    
    _histograms = []

    for _, srcSpec, _ in nominalSignal:
        for proc, filename, _, _, _ in srcSpec:
            drawer = ROOT.multidraw.MultiDraw('latino')
            drawer.setWeightBranch('GEN_weight_SM')
            drawer.setFilter('1')
            drawer.addInputPath('/eos/cms/store/cmst3/user/yiiyama/hww/latino_' + filename + '*.root')
            setupfiducial(drawer)
        
            outdir = out.mkdir(proc)
            outdir.cd()
            total = ROOT.TH1D('total', '', 1, 0., 1.)
            _histograms.append(total)
            drawer.addPlot(total, '0.5')

            for observable in observables:
                binning, xvar = computeConfigs[observable]
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

from plotstyle import DataMCCanvas
if ADDOBS:
    canvas = DataMCCanvas(lumi = lumi)
else:
    canvas = DataMCCanvas(sim = True)
canvas.Clear()

#canvas = ROOT.TCanvas('c1', 'c1', 600, 600)
#canvas.SetLeftMargin(0.15)
#canvas.SetRightMargin(0.05)
#canvas.SetBottomMargin(0.15)
#canvas.SetTopMargin(0.05)

canvas.legend.setPosition(0.55, 0.7, 0.9, 0.9)
#canvas.legend.add('obs', 'Asimov fit', opt = 'LP', color = ROOT.kBlack, lwidth = 2, mstyle = 8)
#canvas.legend.add('nominal', 'Nominal', opt = 'LF', color = ROOT.kGray, lwidth = 2, fstyle = 3354)
#colors = {}
#for name, _, colstr in nominalSignal:
#    color = ROOT.TColor.GetColor('#' + colstr)
#    dcolor = ROOT.TColor.GetColorDark(color)
#    colors[name] = (color, dcolor)
#    canvas.legend.add(name, name, opt = 'LF', fcolor = color, lcolor = dcolor, lwidth = 2, fstyle = 1001)

#legend.SetBorderSize(0)
#legend.SetFillStyle(0)
#legend.SetTextSize(0.035)
#legend.AddEntry(observed, 'Asimov fit', 'LP')
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

for observable in observables:
    binning = computeConfigs[observable][0]
    sourcebin, binlabels, xtitle, xunit, yunit, logy = plottingConfigs[observable]
    
    ROOT.gROOT.cd()
    if xunit:
        fullxtitle = '%s (%s)' % (xtitle, xunit)
    else:
        fullxtitle = xtitle

    nominal = ROOT.TH1D('%s_nominal' % observable, ';%s;#Delta#sigma/#Delta%s (%s)' % (fullxtitle, xtitle, yunit), len(binning) - 1, array.array('d', binning))
    #alternative = ROOT.TH1D('%s_alternative' % observable, ';%s;#Delta#sigma/#Delta%s (%s)' % (fullxtitle, xtitle, yunit), len(binning) - 1, array.array('d', binning))

    permode = {}
    for name, _, _ in nominalSignal:
        hist = ROOT.TH1D('%s_%s' % (observable, name), ';%s;#Delta#sigma/#Delta%s (%s)' % (fullxtitle, xtitle, yunit), len(binning) - 1, array.array('d', binning))
        hist.Sumw2()
        #canvas.legend.apply(name, hist)

        permode[name] = hist

    if ADDOBS:
        observed = ROOT.TGraphAsymmErrors(len(binning) - 1)    
        source = ROOT.TFile.Open(resultsPath[observable])
        resultsTree = source.Get('fitresults')
        cent = array.array('f', [0.])
        up = array.array('f', [0.])
        down = array.array('f', [0.])
        err = array.array('f', [0.])
    
    for ibin in range(len(binning) - 1):
        binname = '%s_bin%d' % (observable, ibin)

        sbinname = sourcebin(binning[ibin], binning[ibin + 1])

        width = binning[ibin + 1] - binning[ibin]

        if ADDOBS:
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

        for name, srcSpec, _ in nominalSignal:
            for proc, _, sigma, qcdunc, pdfunc in srcSpec:
                norm = out.Get('%s/total' % proc).GetBinContent(1)
                contrib = out.Get('%s/%s' % (proc, binname)).GetBinContent(1)
    
                contrib /= norm
                contrib *= sigma

                if yunit.startswith('fb'):
                    contrib *= 1.e+3
    
                hist = permode[name]
                hist.SetBinContent(ibin + 1, hist.GetBinContent(ibin + 1) + contrib)
                cerr = hist.GetBinError(ibin + 1)
                hist.SetBinError(ibin + 1, math.sqrt(cerr * cerr + contrib * contrib * (qcdunc * qcdunc + pdfunc * pdfunc)))
                
                dsigma += contrib
                dsigmaErr2 += contrib * contrib * (qcdunc * qcdunc + pdfunc * pdfunc)

        for hist in permode.itervalues():
            hist.SetBinContent(ibin + 1, hist.GetBinContent(ibin + 1) / width)
            hist.SetBinError(ibin + 1, hist.GetBinError(ibin + 1) / width)

        dsigma /= width
        dsigmaErr = math.sqrt(dsigmaErr2) / width

        nominal.SetBinContent(ibin + 1, dsigma)
        nominal.SetBinError(ibin + 1, dsigmaErr)

        if binlabels is not None:
            nominal.GetXaxis().SetBinLabel(ibin + 1, binlabels[ibin])

        if ADDOBS:
            observed.SetPoint(ibin, (binning[ibin] + binning[ibin + 1]) * 0.5, dsigma * cent[0])
            observed.SetPointEYhigh(ibin, dsigma * up[0])
            observed.SetPointEYlow(ibin, dsigma * down[0])

    for name, _, colstr in nominalSignal:
        color = ROOT.TColor.GetColor('#' + colstr)
        canvas.addStacked(permode[name], title = name, color = color)

    #nominalLine = nominal.Clone('line')
    #canvas.legend.apply('nominal', nominalLine)
    #nominalLine.SetFillStyle(0)

    #canvas.legend.apply('nominal', nominal)
    #nominal.SetMaximum(nominal.GetMaximum() * 1.2)

    #canvas.legend.apply('obs', observed)
    #observed.SetTitle('')

    if ADDOBS:
        #canvas.addHistogram(nominal, drawOpt = 'E2')
        #canvas.addHistogram(nominalLine, drawOpt = 'HIST')
        canvas.addObs(observed, drawOpt = 'EP')

    canvas.xtitle = nominal.GetXaxis().GetTitle()
    canvas.ytitle = nominal.GetYaxis().GetTitle()
    canvas.rtitle = 'Fit / prediction'

    if logy:
        canvas.ylimits = (nominal.GetBinContent(nominal.GetNbinsX()) * 0.1, nominal.GetBinContent(1) * 5.)
    else:
        canvas.ylimits = (0., -1.)

    #canvas.printWeb('hww/20190205', 'sigma_%s' % observable, logy = logy)
    canvas.printWeb('20190218_tmp', 'sigma_%s' % observable, logy = logy)
    canvas.Clear()

    #nominalLine.Delete()
    nominal.Delete()
