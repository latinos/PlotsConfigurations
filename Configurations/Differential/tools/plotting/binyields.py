import os
import sys
import array
import re
import ROOT

import common

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

year = '2018'

if observable == 'ptH':
    split = [4, 4, 4, 3, 2, 2]
    xtitle = 'p_{T}^{H} (GeV)'

elif observable == 'njet':
    split = [4, 4, 2, 1, 1]
    xtitle = 'N_{jet}'

categoryOrder = [
    '_catpt2ge20em',
    '_catpt2ge20me',
    '_catpt2lt20em',
    '_catpt2lt20me',
    '_catpt2ge20',
    '_catpt2lt20',
    ''
]

def fillDist(dist, sample):
    ix = 1
    for ireco in range(len(common.binnames[observable])):
        for category in categoryOrder:
            events = source.Get('hww_%s%s_%s/events/histo_%s' % (common.binnames[observable][ireco], category, year, sample))
            if not events:
                continue

            cont = dist.GetBinContent(ix)
            dist.SetBinContent(ix, cont + events.GetBinContent(1))

            events.Delete()
            ix += 1

xbins = array.array('d', map(float, range(len(common.binnames[observable]) + 1)))
fullbins = array.array('d', [0.])
for ibin in range(len(common.binnames[observable])):
    fullbins.extend([ibin + 1./split[ibin] * (x + 1) for x in range(split[ibin])])

frame = ROOT.TH1D('frame', '', len(xbins) - 1, xbins)
template = ROOT.TH1D('template', '', len(fullbins) - 1, fullbins)

frame.GetXaxis().SetTitle(xtitle)
for ibin in range(len(common.binnames[observable])):
    frame.GetXaxis().SetBinLabel(ibin + 1, common.bintitles[observable][ibin])

signal = template.Clone('signal')
for bname in common.binnames[observable]:
    fillDist(signal, 'smH_hww_' + bname)

background = template.Clone('background')
snames = ['minor', 'Fake_em', 'Fake_me', 'htt', 'WW', 'top', 'DY']

for sname in snames:
    fillDist(background, sname)

canvas = ROOT.TCanvas('c1', 'c1', 600, 600)
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

signal.SetLineColor(ROOT.kBlack)
signal.SetLineWidth(2)

frame.Draw()
signal.Draw('HIST SAME')
frame.SetMaximum(signal.GetMaximum() * 1.2)
cmspre.Draw()
canvas.Print(outpath + '/signal_dist_%s.pdf' % observable)

background.SetLineColor(ROOT.kBlack)
background.SetLineWidth(2)

frame.Draw()
background.Draw('HIST SAME')
frame.SetMaximum(background.GetMaximum() * 1.2)
cmspre.Draw()
canvas.Print(outpath + '/background_dist_%s.pdf' % observable)
