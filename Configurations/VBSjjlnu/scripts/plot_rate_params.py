import ROOT as R 
import sys

import pandas as pd 

df = pd.read_csv(sys.argv[1], sep=";")

#print(df)

jetptbins = [3,3,2]

c = R.TCanvas()
mg = R.TMultiGraph()
leg = R.TLegend(0.2,0.55,0.39,0.89)

for year in (2016,2017,2018):
    for lepfl in ("ele","mu"):
        g = R.TGraphErrors()
        leg.AddEntry(g, "{}_{}".format(lepfl,year), "p")
        i = 0
        for detabin in range(3):
            for jetbin in range(jetptbins[detabin]):
                bin = "CMS_Wjets_deta{}_jpt{}_norm_{}_res_{}".format(detabin+1, jetbin+1, lepfl, year)
                data = df[df.bin==bin]
                #print(bin, data) 
                g.SetPoint(i, i+1,data.v )
                g.SetPointError(i, 0., data.err)
                i+=1
        mg.Add(g)
        if lepfl =="ele":   g.SetMarkerStyle(21)
        else: g.SetMarkerStyle(22)

mg.Draw("AP PMC PFC PLC")
mg.SetTitle("Wjets deta_jetpt post-fit rateParams;bin;rateParam")
leg.Draw("same")
c.Draw()
