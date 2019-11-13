import sys

import common

import ROOT

ROOT.gStyle.SetLabelSize(0.05, 'X')
ROOT.gStyle.SetLabelSize(0.05, 'Y')
ROOT.gStyle.SetNumberContours(128)
ROOT.gStyle.SetPalette(ROOT.kTemperatureMap)
ROOT.gStyle.SetPaintTextFormat('.3f')

source = ROOT.TFile.Open(sys.argv[1])
fitres = source.Get('fit_mdf')
pars = fitres.floatParsFinal()

obs = sys.argv[2]
outname = sys.argv[3]

npoi = len(common.binnames[obs])

matrix = ROOT.TH2D('correlation', '', npoi, 0., float(npoi), npoi, 0., float(npoi))

pois = []
for ip in range(npoi):
    poi = pars[pars.index('r_%d' % ip)]

    pois.append(poi)

    matrix.GetXaxis().SetBinLabel(ip + 1, '#mu_{%s}' % common.bintitles[obs][ip])
    matrix.GetYaxis().SetBinLabel(ip + 1, '#mu_{%s}' % common.bintitles[obs][ip])

for ip1 in range(npoi):
    for ip2 in range(npoi):
        matrix.SetBinContent(ip1 + 1, ip2 + 1, fitres.correlation(pois[ip1], pois[ip2]))

matrix.SetMaximum(1.)
matrix.SetMinimum(-1.)
matrix.SetMarkerSize(1.5)

canvas = ROOT.TCanvas('c1', 'c1', 600, 600)
canvas.SetLeftMargin(0.15)
canvas.SetBottomMargin(0.12)
canvas.SetTopMargin(0.08)
canvas.SetRightMargin(0.05)
matrix.Draw('COL TEXT')

cmsLabel = common.makeCMS(prelim=True, out=True)
lumiLabel = common.makeLumi(137.)
cmsLabel.Draw()
lumiLabel.Draw()

canvas.Print(outname)
