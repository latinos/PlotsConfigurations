import ROOT

# Read file with toys results
f = ROOT.TFile("GoF/higgsCombine.GoF.root")
t = f.Get("limit")
h = ROOT.TH1F("GoF","GoF",500,0,1000)
t.Draw("limit>>GoF","","goff")
print(h.Integral())
h.GetXaxis().SetRangeUser(400,750)
h.GetXaxis().SetTitle("limit")

# Read file with actual fit on asimov data
f_data = ROOT.TFile("GoF/higgsCombineTest.GoodnessOfFit.mH120.root")
t_data = f_data.Get("limit")
h_data = ROOT.TH1F("h_data","h_data",500,0,1000)
t_data.Draw("limit>>h_data","","goff")
print(h_data.GetMean())
x_limit = h_data.GetMean()

l = ROOT.TLine(x_limit, 0.0, x_limit, 20.0)
l.SetLineColor(ROOT.kRed+1)
l.SetLineWidth(2)

ROOT.gStyle.SetOptStat(0)

c1 = ROOT.TCanvas("c1","c1",600,600)
c1.cd()

h.Draw()
l.Draw("same")

c1.Print("GoF/GoF.png")
c1.Print("GoF/GoF.pdf")

