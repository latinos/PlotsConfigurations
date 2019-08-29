import sys
import ROOT

ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetNumberContours(128)
ROOT.gStyle.SetPalette(ROOT.kTemperatureMap)

source = ROOT.TFile.Open(sys.argv[1])
fitres = source.Get('fit_mdf')
pars = fitres.floatParsFinal()

tag = sys.argv[2]

pthBinning = [0., 20., 45., 80., 120., 200., 6500.]
npoi = 6

strengths = ROOT.TGraphErrors(npoi)
matrix = ROOT.TH2D('correlation', '', npoi, 0., float(npoi), npoi, 0., float(npoi))

pois = []
for ip in range(npoi):
    poi = pars[pars.index('r_%d' % ip)]

    if ip == npoi - 1:
        x = pthBinning[ip] + 50.
    else:
        x = sum(pthBinning[ip:ip+2]) * 0.5

    strengths.SetPoint(ip, x, poi.getVal() - 1.)
    strengths.SetPointError(ip, 0., poi.getError())

    pois.append(poi)

    matrix.GetXaxis().SetBinLabel(ip + 1, '#mu_{%d}' % ip)
    matrix.GetYaxis().SetBinLabel(ip + 1, '#mu_{%d}' % ip)

for ip1 in range(6):
    for ip2 in range(6):
        matrix.SetBinContent(ip1 + 1, ip2 + 1, fitres.correlation(pois[ip1], pois[ip2]))

matrix.SetMaximum(1.)
matrix.SetMinimum(-1.)

canvas = ROOT.TCanvas('c1', 'c1', 600, 600)
matrix.Draw('COL TEXT')

canvas.Print('/afs/cern.ch/user/y/yiiyama/www/plots/hww/pthfit/correlation_' + tag + '.pdf')
canvas.Print('/afs/cern.ch/user/y/yiiyama/www/plots/hww/pthfit/correlation_' + tag + '.png')

strengths.SetLineColor(ROOT.kBlack)
strengths.SetLineWidth(2)
strengths.SetMarkerColor(ROOT.kBlack)
strengths.SetMarkerStyle(8)
canvas.SetGrid(False, True)
strengths.Draw('AP')
strengths.SetTitle('Signal strengths')
strengths.GetYaxis().SetRangeUser(-1., 1.)
strengths.GetYaxis().SetTitle('#mu - 1')
strengths.GetXaxis().SetTitle('p_{T}^{H} (GeV)')

canvas.Print('/afs/cern.ch/user/y/yiiyama/www/plots/hww/pthfit/asimov_' + tag + '.pdf')
canvas.Print('/afs/cern.ch/user/y/yiiyama/www/plots/hww/pthfit/asimov_' + tag + '.png')
