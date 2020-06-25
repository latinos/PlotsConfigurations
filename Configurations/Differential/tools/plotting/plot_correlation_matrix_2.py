import sys
import array

import common

import ROOT

ROOT.gStyle.SetLabelSize(0.05, 'X')
ROOT.gStyle.SetLabelSize(0.05, 'Y')
ROOT.gStyle.SetNumberContours(128)
ROOT.gStyle.SetPaintTextFormat('.3f')

red = array.array('d', [0., 1., 1.])
green = array.array('d', [0., 1., 0.])
blue = array.array('d', [1., 1., 0.])
points = array.array('d', [0., 0.5, 1.])

ROOT.TColor.CreateGradientColorTable(3, points, red, green, blue, 128)
#ROOT.gStyle.SetPalette(ROOT.kTemperatureMap)

obs = sys.argv[1]
outname = sys.argv[2]
results_dir = sys.argv[3]
try:
    year = sys.argv[4]
except:
    year = 'combination'

unreg_source = ROOT.TFile.Open('%s/multidimfitUnreg.root' % results_dir)
unreg_fitres = unreg_source.Get('fit_mdf')
if obs == 'ptH':
    reg_source = ROOT.TFile.Open('%s/multidimfitReg.root' % results_dir)
    reg_fitres = reg_source.Get('fit_mdf')
    fitreses = [unreg_fitres, reg_fitres]
elif obs == 'njet':
    fitreses = [unreg_fitres]

npoi = len(common.binnames[obs])

matrix = ROOT.TH2D('correlation', '', npoi, 0., float(npoi), npoi, 0., float(npoi))
matrix.GetXaxis().SetTitle(common.xtitles[obs])
matrix.GetXaxis().SetTitleFont(ROOT.gStyle.GetTextFont())
matrix.GetXaxis().SetLabelFont(ROOT.gStyle.GetTextFont())
matrix.GetXaxis().SetTickLength(0.)
matrix.GetXaxis().SetTitleOffset(1.1)
matrix.GetYaxis().SetTitle(common.xtitles[obs])
matrix.GetYaxis().SetTitleFont(ROOT.gStyle.GetTextFont())
matrix.GetYaxis().SetLabelFont(ROOT.gStyle.GetTextFont())
matrix.GetYaxis().SetTickLength(0.)
if obs == 'ptH':
    matrix.GetYaxis().SetTitleOffset(2.)
elif obs == 'njet':
    matrix.GetYaxis().SetTitleOffset(1.5)
matrix.GetZaxis().SetTitleFont(ROOT.gStyle.GetTextFont())
matrix.GetZaxis().SetLabelFont(ROOT.gStyle.GetTextFont())
matrix.GetZaxis().SetTickLength(0.)
for ip in range(npoi):
    matrix.GetXaxis().SetBinLabel(ip + 1, common.bintitles[obs][ip])
    matrix.GetYaxis().SetBinLabel(ip + 1, common.bintitles[obs][ip])

for ir, fitres in enumerate(fitreses):
    pars = fitres.floatParsFinal()

    for ip1 in range(npoi):
        poi1 = pars[pars.index('r_%d' % ip1)]
        if ir == 0:
            ip2s = range(0, ip1)
        else:
            ip2s = range(ip1 + 1, npoi)

        for ip2 in ip2s:
            poi2 = pars[pars.index('r_%d' % ip2)]

            matrix.SetBinContent(ip1 + 1, ip2 + 1, fitres.correlation(poi1, poi2))

matrix.SetMaximum(1.)
matrix.SetMinimum(-1.)
matrix.SetMarkerSize(1.5)

cw = 600
canvas = ROOT.TCanvas('c1', 'c1', cw, 600)
canvas.SetLeftMargin(90. / cw)
canvas.SetBottomMargin(0.12)
canvas.SetTopMargin(0.08)
canvas.SetRightMargin((cw - 600 * 0.95) / cw)
canvas.SetTickx(1)
canvas.SetTicky(1)
matrix.Draw('COL TEXT')

mask = ROOT.TBox(0., 0., 0., 0.)
mask.SetFillStyle(1001)
mask.SetFillColor(ROOT.kWhite)
mask.SetLineWidth(0)
mask.SetLineColor(ROOT.kWhite)

cmsLabel = common.makeCMS(prelim=False, out=True)
cmsLabel.SetX1NDC(0.15 * 600. / cw)
cmsLabel.SetX2NDC(0.3 * 600. / cw)

lumiLabel = common.makeLumi(common.lumis[year])
lumiLabel.SetX1NDC(0.6 * 600. / cw)
lumiLabel.SetX2NDC(common.XMAX * 600. / cw)
cmsLabel.Draw()
lumiLabel.Draw()

canvas.RedrawAxis()

canvas.Print(outname)
