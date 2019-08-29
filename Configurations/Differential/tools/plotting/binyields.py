import os
import sys
import array
import re
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

source = ROOT.TFile.Open(sys.argv[1]) # preprocessed shapes file
outpath = sys.argv[2]
observable = sys.argv[3]

if observable == 'ptH':
    binNames = [
        'PTH_0_20',
        'PTH_20_45',
        'PTH_45_80',
        'PTH_80_120',
        'PTH_120_200',
        'PTH_200_350',
        'PTH_GT350'
    ]
    split = [8, 8, 4, 3, 2, 2, 2]

elif observable == 'njet':
    binNames = [
        'NJ_0',
        'NJ_1',
        'NJ_2',
        'NJ_3',
        'NJ_GE4'
    ]
    split = [8, 8, 2, 2, 2]

categoryOrder = [
    'emmppt2lt20',
    'epmmpt2lt20',
    'mmeppt2lt20',
    'mpempt2lt20',
    'emmppt2ge20',
    'epmmpt2ge20',
    'mmeppt2ge20',
    'mpempt2ge20',
    'empt2lt20',
    'mept2lt20',
    'empt2ge20',
    'mept2ge20',
    'pt2lt20',
    'pt2ge20'
]

def fillSignalMatrix(source, binNames, matrix, sample):
    for igen in range(len(binNames)):
        iy = 1
        for ireco in range(len(binNames)):
            for category in categoryOrder:
                events = source.Get('hww_%s_cat%s/events/histo_%s_%s' % (binNames[ireco], category, sample, binNames[igen]))
                if not events:
                    continue

                icell = matrix.GetBin(igen + 1, iy)
                cont = matrix.GetBinContent(icell)
                matrix.SetBinContent(icell, cont + events.GetBinContent(1))

                events.Delete()
                iy += 1

def fillBackgroundDist(source, binNames, dist, sample):
    ix = 1
    for ireco in range(len(binNames)):
        for category in categoryOrder:
            events = source.Get('hww_%s_cat%s/events/histo_%s' % (binNames[ireco], category, sample))
            if not events:
                continue

            cont = dist.GetBinContent(ix)
            dist.SetBinContent(ix, cont + events.GetBinContent(1))

            events.Delete()
            ix += 1

xbins = array.array('d', map(float, range(len(binNames) + 1)))
ybins = array.array('d', [0.])
for ibin in range(len(binNames)):
    ybins.extend([ibin + 1./split[ibin] * (x + 1) for x in range(split[ibin])])

if observable == 'ptH':
    signalFrame = ROOT.TH2D('pthSignalFrame', ';GEN;RECO', len(xbins) - 1, xbins, len(xbins) - 1, xbins)
    signalMatrix = ROOT.TH2D('pthSignal', ';GEN;RECO', len(xbins) - 1, xbins, len(ybins) - 1, ybins)
    backgroundFrame = ROOT.TH1D('pthBackgroundFrame', ';RECO', len(xbins) - 1, xbins)
    backgroundDist = ROOT.TH1D('pthBackground', ';RECO', len(ybins) - 1, ybins)
elif observable == 'njet':
    signalFrame = ROOT.TH2D('njSignalFrame', ';GEN;RECO', len(xbins) - 1, xbins, len(xbins) - 1, xbins)
    signalMatrix = ROOT.TH2D('njSignal', ';GEN;RECO', len(xbins) - 1, xbins, len(ybins) - 1, ybins)
    backgroundFrame = ROOT.TH1D('njBackgroundFrame', ';RECO', len(xbins) - 1, xbins)
    backgroundDist = ROOT.TH1D('njBackground', ';RECO', len(ybins) - 1, ybins)
    
for ibin in range(len(binNames)):
    signalFrame.GetXaxis().SetBinLabel(ibin + 1, binNames[ibin])
    signalFrame.GetYaxis().SetBinLabel(ibin + 1, binNames[ibin])
    backgroundFrame.GetXaxis().SetBinLabel(ibin + 1, binNames[ibin])

fillSignalMatrix(source, binNames, signalMatrix, 'smH_hww')

backgrounds = ['minor', 'Fake_em', 'Fake_me', 'htt', 'WW', 'top', 'DY']

for sample in backgrounds:
    fillBackgroundDist(source, binNames, backgroundDist, sample)

canvas = ROOT.TCanvas('c1', 'c1', 600, 600)
canvas.SetBottomMargin(0.2)
canvas.SetTopMargin(0.05)
canvas.SetLeftMargin(0.2)

cmssim = ROOT.TPaveText()
cmssim.SetX1NDC(0.22)
cmssim.SetX2NDC(0.4)
cmssim.SetY1NDC(0.8)
cmssim.SetY2NDC(0.91)
cmssim.SetFillStyle(0)
cmssim.SetBorderSize(0)
cmssim.SetTextAlign(11)
cmssim.SetTextFont(62)
cmssim.SetTextSize(0.035)
cmssim.AddText('CMS Simulation')

signalFrame.Draw()
signalMatrix.Draw('COLZ SAME')
signalFrame.SetMaximum(signalMatrix.GetMaximum() * 1.2)
signalFrame.GetYaxis().SetTitleOffset(2.5)
cmssim.Draw()
canvas.Print(outpath + '/signal_matrix_%s.pdf' % observable)

canvas.SetBottomMargin(0.2)
canvas.SetTopMargin(0.05)
canvas.SetLeftMargin(0.15)
canvas.SetRightMargin(0.05)

cmspre = ROOT.TPaveText()
cmspre.SetX1NDC(0.18)
cmspre.SetX2NDC(0.3)
cmspre.SetY1NDC(0.8)
cmspre.SetY2NDC(0.91)
cmspre.SetFillStyle(0)
cmspre.SetBorderSize(0)
cmspre.SetTextAlign(11)
cmspre.SetTextFont(62)
cmspre.SetTextSize(0.035)
cmspre.AddText('CMS Preliminary')

backgroundDist.SetLineColor(ROOT.kBlack)
backgroundDist.SetLineWidth(2)

backgroundFrame.Draw()
backgroundDist.Draw('HIST SAME')
backgroundFrame.SetMaximum(backgroundDist.GetMaximum() * 1.2)
cmspre.Draw()
canvas.Print(outpath + '/background_dist_%s.pdf' % observable)
