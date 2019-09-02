import os
import sys
import ROOT

ROOT.gROOT.SetBatch(True)
ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetTextFont(42)
ROOT.gStyle.SetLabelSize(0.05, 'X')
ROOT.gStyle.SetLabelSize(0.05, 'Y')
ROOT.gStyle.SetTitleSize(0.05, 'X')
ROOT.gStyle.SetTitleSize(0.05, 'Y')
ROOT.gStyle.SetTitleOffset(1.2, 'X')
ROOT.gStyle.SetTitleOffset(1.5, 'Y')
ROOT.gStyle.SetNdivisions(208, 'X')
ROOT.gStyle.SetFillStyle(0)

source = ROOT.TFile.Open(sys.argv[1]) # output of mkShapes containing samples and variables listed below with cut "all"
out_path = sys.argv[2]

try:
    os.makedirs(out_path)
except OSError:
    pass

variables = [
    ('met', 'ptmiss', 'p_{T}^{miss} (GeV)'),
    ('ptll', 'ptll', 'p_{T}^{ll} (GeV)'),
    ('mtw2', 'mtltwo', 'm_{T}^{l2} (GeV)'),
    ('mll', 'mll', 'm^{ll} (GeV)'),
    ('mth', 'mtH', 'm_{T}^{H} (GeV)'),
    ('njet', 'njet', 'N_jet')
]

samples = [
    ('ggH_hww', 'ggHWW', ROOT.kRed, 0),
    ('WW', 'WW', ROOT.kAzure - 9, 3003),
    ('top', 'top', ROOT.kOrange, 3003),
    ('DY', 'DY#tau#tau', ROOT.kGreen + 2, 3003),
    ('WJets', 'W+jet (non-prompt)', ROOT.kGray + 1, 3003)
]

canvas = ROOT.TCanvas('c1', 'c1', 600, 600)
canvas.SetBottomMargin(0.15)
canvas.SetTopMargin(0.05)
canvas.SetLeftMargin(0.15)
canvas.SetRightMargin(0.05)

cmssim = ROOT.TPaveText()
cmssim.SetX1NDC(0.18)
cmssim.SetY1NDC(0.86)
cmssim.SetX2NDC(0.4)
cmssim.SetY2NDC(0.95)
cmssim.SetTextAlign(11)
cmssim.SetTextFont(62)
cmssim.SetTextSize(0.035)
cmssim.SetFillStyle(0)
cmssim.SetBorderSize(0)
cmssim.AddText('CMS Simulation')

for vname, pdfName, xtitle in variables:
    legend = ROOT.TLegend(0.6, 0.7, 0.93, 0.93)
    legend.SetFillStyle(0)
    legend.SetBorderSize(0)

    legendOpt = 'L'
    drawOpt = 'HIST'
    maxim = 0.
    histos = []
    for sname, title, color, fill in samples:
        histo = source.Get('all/' + vname + '/histo_' + sname)
        histo.Scale(1. / histo.GetSumOfWeights())
        if vname != 'njet':
            histo.Rebin(2)

        histos.append(histo)

        histo.SetTitle('')
        histo.GetXaxis().SetTitle(xtitle)
        histo.GetYaxis().SetTitle('arbitrary unit')
        histo.SetFillStyle(fill)
        histo.SetFillColor(color)
        histo.SetLineWidth(2)
        histo.SetLineColor(color)

        legend.AddEntry(histo, title, legendOpt)
        legendOpt = 'LF'

        histo.Draw(drawOpt)
        drawOpt = 'HIST SAME'

        if histo.GetMaximum() > maxim:
            maxim = histo.GetMaximum()

    histos[0].SetMaximum(maxim * 1.2)

    legend.Draw()
    cmssim.Draw()

    canvas.Print(out_path + '/' + pdfName + '.png')
    canvas.Print(out_path + '/' + pdfName + '.pdf')
