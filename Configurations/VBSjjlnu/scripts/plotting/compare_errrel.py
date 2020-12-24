import ROOT as R 
import sys

file = R.TFile.Open(sys.argv[1])

h1 = file.Get(sys.argv[2])
h2 = file.Get(sys.argv[3])

gr1 = R.TGraph()
gr1.SetName("gr_errrel1")
gr2 = R.TGraph()
gr2.SetName("gr_errrel2")

gr_ratio = R.TGraph()
gr_ratio.SetName("gr_ratio")

for ip, i in enumerate(range(1, h1.GetNbinsX())):
    err1 = h1.GetBinContent(i)
    if err1 == 0: err1 = 0.000001
    else: err1 =  h1.GetBinError(i) /  err1
   
    err2 = h2.GetBinContent(i)
    if err2 == 0: err2 = 0.000001
    else: err2 =  h2.GetBinError(i) /  err2

    gr1.SetPoint(ip, h1.GetBinCenter(i), err1)
    gr2.SetPoint(ip, h2.GetBinCenter(i), err2)
    gr_ratio.SetPoint(ip, h1.GetBinCenter(i), err2/err1)


c = R.TCanvas()
leg = R.TLegend()
gr = R.TMultiGraph()

gr.Add(gr1)
gr.Add(gr2)
leg.AddEntry(gr1, sys.argv[2])
leg.AddEntry(gr2, sys.argv[3])

gr1.SetLineColor(R.kRed)
gr2.SetLineColor(R.kBlue)

gr.Draw("APL")
leg.Draw("same")
c.Draw()

c = R.TCanvas()
gr_ratio.Draw("APL")
c.Draw()