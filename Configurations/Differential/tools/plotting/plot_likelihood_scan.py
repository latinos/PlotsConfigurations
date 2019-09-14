import sys
import array
import ROOT

source = ROOT.TFile.Open(sys.argv[1])

limit = source.Get('limit')
r = array.array('f', [0.])
nll = array.array('f', [0.])
limit.SetBranchAddress('r', r)
limit.SetBranchAddress('deltaNLL', nll)

gr = ROOT.TGraph(limit.GetEntries())

for ip in range(limit.GetEntries()):
    limit.GetEntry(ip)
    gr.SetPoint(ip, r[0], nll[0])

gr.SetTitle('')
gr.SetMarkerStyle(8)
gr.SetMarkerColor(ROOT.kBlack)
gr.GetXaxis().SetTitle('#mu^{fid}')
gr.GetYaxis().SetTitle('-2#Delta Log(L)')

canvas = ROOT.TCanvas('c1', 'c1', 600, 600)
gr.Draw('AP')
canvas.Update()

line = ROOT.TLine(canvas.GetUxmin(), 1., canvas.GetUxmax(), 1.)
line.SetLineColor(ROOT.kRed)
line.SetLineStyle(ROOT.kDashed)
line.SetLineWidth(2)
line.Draw()

canvas.Print('likelihood_scan.png')
canvas.Print('likelihood_scan.pdf')
