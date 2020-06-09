import ROOT as R 
R.gStyle.SetPalette(R.kLightTemperature)
import sys
from math import sqrt
import pandas as pd 

df = pd.read_csv(sys.argv[1], sep=";")
print(df)

Wjets_bins = {"res": [ "Wjets_deta1_jpt1","Wjets_deta1_jpt2","Wjets_deta2_jpt1","Wjets_deta2_jpt2","Wjets_jpt3"],
              "boost": ["Wjets_boost1", "Wjets_boost2"]
}

c = R.TCanvas()
mg = R.TMultiGraph()
leg = R.TLegend(0.7,0.6,0.9,0.9)

offset = 0

for iy, year in enumerate((2016,2017,2018)):
    for lepfl in ("ele","mu"):
        i = 0
        g = R.TGraphErrors()
        leg.AddEntry(g, "{}_{}".format(lepfl,year), "p")
        for cat in ("res", "boost"):
            
            channel = "wjetcr_{}_dnnhigh_{}_{}".format(cat, lepfl, year)
            if lepfl=="ele": offset = (iy+1)*0.1 - 0.3
            else: offset = (iy+1)*0.1
            
            for wjetbin in Wjets_bins[cat]:
                data = df[(df.channel==channel) & (df.bin==wjetbin)]
                g.SetPoint(i, i+1+offset,data.norm/data.prefitnorm )
                g.SetPointError(i, 0., data.err/data.prefitnorm )
                i+=1
            mg.Add(g)
            if lepfl =="ele":   g.SetMarkerStyle(21)
            else: g.SetMarkerStyle(22)
            g.SetMarkerSize(1.5)


mg.Draw("AP PMC PFC PLC")
mg.SetTitle("Wjets deta_jetpt prefit/postfit norms;bin;post/prefit norm")

i = 0
tt = []
for cat in ("res", "boost"):
    for wjetbin in Wjets_bins[cat]:
        t = R.TText(i+1-0.3, 0.4, wjetbin)
        t.SetTextFont(18)
        t.SetTextSize(15)
        t.SetTextAngle(45)
        i+=1
        t.Draw("same")
        tt.append(t)

mg.GetYaxis().SetRangeUser(0.4, 2)

ls = []
for i in range(7):
    line = R.TLine(i+1.5, 0.5, i+1.5,2)
    line.Draw("same")
    ls.append(line)
leg.Draw("same")
c.Draw()
