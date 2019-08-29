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
RECOMPUTE = False

observable = sys.argv[1]
try:
    resultsPath = sys.argv[2]
except IndexError:
    resultsPath = ''

observables = ['ptH', 'njet']

def ptHSource(low, high):
    return 'PTH_%.0f_%.0f' % (low, high) if low < 300. else 'PTH_GT350'

def njetSource(low, high):
    return 'NJ_%.0f' % round((low + high) * 0.5) if low < 3. else 'NJ_GE4'

computeConfigs = {
    'ptH': ([0., 20., 45., 80., 120., 200., 350., 400.], 'PtH'),
    'njet': ([-0.5, 0.5, 1.5, 2.5, 3.5, 4.5], 'nCleanJet')
}

plottingConfigs = {
    'ptH': (ptHSource, None, 'p_{T}^{H}', 'GeV', 'fb/GeV', True),
    'njet': (njetSource, ['0', '1', '2', '3', '#geq4'], 'N_{jet}', '', 'fb', True)
}

BR2l2v = 0.215*0.108*0.108*9
BRWW = 0.215
nominalSignal = [
    ('ggH', [('ggH', 'GluGluHToWWTo2L2NuPowheg_M125', 48.52 * BR2l2v, 0.039, 0.032)], '1f77b4'),
    ('qqH', [('qqH', 'VBFHToWWTo2L2NuPowheg_M125', 3.779 * BR2l2v, 0.04 / math.sqrt(3.), 0.021)], 'ff7f0e'),
    ('WH', [('WminusH', 'HWminusJ_HToWW_M125', 0.5313 * BRWW, 0.007 / math.sqrt(3.), 0.019), ('WplusH', 'HWplusJ_HToWW_M125', 0.8380 * BRWW, 0.007 / math.sqrt(3.), 0.019)], '2ca02c'),
    ('ZH', [('ggZH', 'GluGluZH_HToWW_M125', 0.1227 * BRWW, 0.251 / math.sqrt(3.), 0.024), ('ZH', 'HZJ_HToWWTo2L2Nu_M125', 0.7612 * BR2l2v, 0.006 / math.sqrt(3.), 0.019)], 'd62728'),
    ('ttH', [('ttH', 'ttHToNonbb_M125', 0.5065 * (1 - 0.577), 0.092 / math.sqrt(3.), 0.036)], '9467bd'),
    ('bbH', [('bbHyb2', 'bbHToWWTo2L2Nu_M125_yb2', 0.3909 * BR2l2v, 0.239, 0.), ('bbHyt', 'bbHToWWTo2L2Nu_M125_ybyt', -0.03293 * BR2l2v, 0.239, 0.)], '8c564b')
]

if RECOMPUTE:
    from setupfiducial import setupfiducial
    
    out = ROOT.TFile.Open('sigma.root', 'recreate')
    
    _histograms = []

    for srcSpec in [v[1] for v in nominalSignal]:
        for proc, filename in [s[:2] for s in srcSpec]:
            drawer = ROOT.multidraw.MultiDraw('Events')
            drawer.setWeightBranch('genWeight')
            drawer.setFilter('1')
            drawer.addInputPath('/eos/cms/store/group/phys_higgs/cmshww/yiiyama/fiducial/' + filename + '.root')
        
            outdir = out.mkdir(proc)

            source = ROOT.TFile.Open('/eos/cms/store/group/phys_higgs/cmshww/yiiyama/fiducial/' + filename + '.root')
            total = source.Get('sumW')
            print filename
            total.SetDirectory(outdir)
            total.SetName('total')
            source.Close()

            outdir.cd()

            selected = ROOT.TH1D('selected', '', 1, 0., 1.)
            _histograms.append(selected)
            drawer.addPlot(selected, '0.5')

            for obs in observables:
                binning, xvar = computeConfigs[obs]
                for ibin in range(len(binning) - 1):
                    binname = '%s_bin%d' % (obs, ibin)
                    outdir.cd()
                    counter = ROOT.TH1D(binname, '', 1, 0., 1.)
                    _histograms.append(counter)
                    if ibin == len(binning) - 2:
                        cutExpr = '%s >= %f' % (xvar, binning[-2])
                    else:
                        cutExpr = '%s >= %f && %s < %f' % (xvar, binning[ibin], xvar, binning[ibin + 1])
                
                    drawer.addCut(binname, cutExpr)
                    drawer.addPlot(counter, '0.5', binname)
            
            drawer.execute()
    
    out.cd()
    out.Write()

else:
    out = ROOT.TFile.Open('sigma.root')

from plotstyle import DataMCCanvas, SimpleCanvas

canvas = DataMCCanvas(lumi = lumi, sim = (not resultsPath))
canvas.legend.setPosition(0.55, 0.7, 0.9, 0.9)

binning = computeConfigs[observable][0]
sourcebin, binlabels, xtitle, xunit, yunit, logy = plottingConfigs[observable]

ROOT.gROOT.cd()
if xunit:
    fullxtitle = '%s (%s)' % (xtitle, xunit)
else:
    fullxtitle = xtitle

nominal = ROOT.TH1D('%s_nominal' % observable, ';%s;#Delta#sigma/#Delta%s (%s)' % (fullxtitle, xtitle, yunit), len(binning) - 1, array.array('d', binning))
nominal.Sumw2()
#alternative = ROOT.TH1D('%s_alternative' % observable, ';%s;#Delta#sigma/#Delta%s (%s)' % (fullxtitle, xtitle, yunit), len(binning) - 1, array.array('d', binning))

permode = {}
for name, _, _ in nominalSignal:
    permode[name] = nominal.Clone('%s_%s' % (observable, name))

if resultsPath:
    observed = ROOT.TGraphAsymmErrors(len(binning) - 1)    
    source = ROOT.TFile.Open(resultsPath)
    resultsTree = source.Get('fitresults')
    cent = array.array('f', [0.])
    up = array.array('f', [0.])
    down = array.array('f', [0.])
    err = array.array('f', [0.])

strengths = ROOT.TGraphErrors(len(binning) - 1)

for ibin in range(len(binning) - 1):
    binname = '%s_bin%d' % (observable, ibin)

    sbinname = sourcebin(binning[ibin], binning[ibin + 1])

    width = binning[ibin + 1] - binning[ibin]

    if resultsPath:
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

    if resultsPath:
        observed.SetPoint(ibin, (binning[ibin] + binning[ibin + 1]) * 0.5, dsigma * cent[0])
        observed.SetPointEYhigh(ibin, dsigma * up[0])
        observed.SetPointEYlow(ibin, dsigma * down[0])

for name, _, colstr in reversed(nominalSignal):
    color = ROOT.TColor.GetColor('#' + colstr)
    canvas.addStacked(permode[name], title = name, color = color)

if resultsPath:
    canvas.addObs(observed, drawOpt = 'EP')

canvas.xtitle = nominal.GetXaxis().GetTitle()
canvas.ytitle = nominal.GetYaxis().GetTitle()
canvas.rtitle = 'Fit / prediction'

if logy:
    canvas.ylimits = (nominal.GetBinContent(nominal.GetNbinsX()) * 0.1, nominal.GetBinContent(1) * 10.)
else:
    canvas.ylimits = (0., -1.)

canvas.rlimits = (-0.5, 2.5)

canvas.Update(logy = logy)

if resultsPath:
    canvas.printWeb('20190307', 'sigma_%s' % observable, logy = logy)
else:
    ## NOT WORKING - AXIS DISAPPEARS

    # remove ratio pad. Hack to use SimpleCanvas interface
    simple = SimpleCanvas(lumi = canvas.lumi)

    garbage = []
    cnv = ROOT.TCanvas('tmp', 'tmp', 600, 600)
    cnv.cd()

    plotPad = canvas.plotPad.DrawClone()
    garbage.append(plotPad)
    plotPad.SetTopMargin(simple.canvas.GetTopMargin())
    plotPad.SetRightMargin(simple.canvas.GetRightMargin())
    plotPad.SetBottomMargin(simple.canvas.GetBottomMargin())
    plotPad.SetLeftMargin(simple.canvas.GetLeftMargin())

    xaxis = canvas.xaxis.DrawClone()
    garbage.append(xaxis)
    xaxis.SetX1(simple.canvas.GetLeftMargin())
    xaxis.SetX2(1. - simple.canvas.GetRightMargin())
    xaxis.SetY1(simple.canvas.GetBottomMargin())
    xaxis.SetY2(simple.canvas.GetBottomMargin())

    yaxis = canvas.yaxis.DrawClone()
    garbage.append(yaxis)
    yaxis.SetX1(simple.canvas.GetLeftMargin())
    yaxis.SetX2(simple.canvas.GetLeftMargin())
    yaxis.SetY1(simple.canvas.GetBottomMargin())
    yaxis.SetY2(1. - simple.canvas.GetTopMargin())

    for prim in cnv.GetListOfPrimitives():
        print prim

    garbage.append(simple.canvas)
    simple.canvas = cnv
    simple._needUpdate = False
    simple.printWeb('20190307', 'sigma_%s' % observable, logy = logy)

    # cleanup the mess
    for obj in garbage:
        obj.IsA().Destructor(obj)

    cnv.IsA().Destructor(cnv)

canvas.Clear()

nominal.Delete()
