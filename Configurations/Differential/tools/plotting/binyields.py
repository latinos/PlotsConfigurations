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

year = '2018'

if observable == 'ptH':
    binNames = [
        'PTH_0_20',
        'PTH_20_45',
        'PTH_45_80',
        'PTH_80_120',
        'PTH_120_200',
        'PTH_GT200'
    ]
    binTitles = [
        '[0, 20]',
        '[20, 45]',
        '[45, 80]',
        '[80, 120]',
        '[120, 200]',
        '[200, #infty)',
        #'[200, 350]',
        #'[350, #infty)'
    ]
    split = [4, 4, 4, 3, 2, 2]
    xtitle = 'p_{T}^{H} (GeV)'

elif observable == 'njet':
    binNames = [
        'NJ_0',
        'NJ_1',
        'NJ_2',
        'NJ_3',
        'NJ_GE4'
    ]
    binTitles = [
        '0',
        '1',
        '2',
        '3',
        '#geq 4'
    ]
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
    for ireco in range(len(binNames)):
        for category in categoryOrder:
            events = source.Get('hww_%s%s_%s/events/histo_%s' % (binNames[ireco], category, year, sample))
            if not events:
                continue

            cont = dist.GetBinContent(ix)
            dist.SetBinContent(ix, cont + events.GetBinContent(1))

            events.Delete()
            ix += 1

xbins = array.array('d', map(float, range(len(binNames) + 1)))
fullbins = array.array('d', [0.])
for ibin in range(len(binNames)):
    fullbins.extend([ibin + 1./split[ibin] * (x + 1) for x in range(split[ibin])])

frame = ROOT.TH1D('frame', '', len(xbins) - 1, xbins)
template = ROOT.TH1D('template', '', len(fullbins) - 1, fullbins)

frame.GetXaxis().SetTitle(xtitle)
for ibin in range(len(binNames)):
    frame.GetXaxis().SetBinLabel(ibin + 1, binTitles[ibin])

signal = template.Clone('signal')
for bname in binNames:
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
