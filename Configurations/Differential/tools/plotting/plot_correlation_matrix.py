import sys
import ROOT

ROOT.gROOT.SetBatch(True)
ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetTextFont(42)
ROOT.gStyle.SetLabelSize(0.04, 'X')
ROOT.gStyle.SetLabelSize(0.04, 'Y')
ROOT.gStyle.SetTitleSize(0.035, 'X')
ROOT.gStyle.SetTitleSize(0.035, 'Y')
ROOT.gStyle.SetTitleOffset(1.4, 'X')
ROOT.gStyle.SetTitleOffset(1.8, 'Y')
ROOT.gStyle.SetNdivisions(208, 'X')
ROOT.gStyle.SetFillStyle(0)
ROOT.gStyle.SetNumberContours(128)
ROOT.gStyle.SetPalette(ROOT.kTemperatureMap)
ROOT.gStyle.SetPaintTextFormat('.3f')

source = ROOT.TFile.Open(sys.argv[1])
fitres = source.Get('fit_mdf')
pars = fitres.floatParsFinal()

obs = sys.argv[2]
outname = sys.argv[3]

if obs == 'ptH':
    npoi = 6
elif obs == 'njet':
    npoi = 5

matrix = ROOT.TH2D('correlation', '', npoi, 0., float(npoi), npoi, 0., float(npoi))

pois = []
for ip in range(npoi):
    poi = pars[pars.index('r_%d' % ip)]

    pois.append(poi)

    matrix.GetXaxis().SetBinLabel(ip + 1, '#mu_{%d}' % ip)
    matrix.GetYaxis().SetBinLabel(ip + 1, '#mu_{%d}' % ip)

for ip1 in range(npoi):
    for ip2 in range(npoi):
        matrix.SetBinContent(ip1 + 1, ip2 + 1, fitres.correlation(pois[ip1], pois[ip2]))

matrix.SetMaximum(1.)
matrix.SetMinimum(-1.)

canvas = ROOT.TCanvas('c1', 'c1', 600, 600)
matrix.Draw('COL TEXT')

canvas.Print(outname)
